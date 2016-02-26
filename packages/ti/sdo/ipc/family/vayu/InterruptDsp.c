/* 
 * Copyright (c) 2012, Texas Instruments Incorporated
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * *  Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *
 * *  Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * *  Neither the name of Texas Instruments Incorporated nor the names of
 *    its contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO,
 * THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR
 * CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS;
 * OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 * WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR
 * OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,
 * EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 * */
/*
 *  ======== InterruptDsp.c ========
 *  Mailbox based interrupt manager
 */
#include <xdc/std.h>
#include <xdc/runtime/Startup.h>
#include <xdc/runtime/System.h>
#include <xdc/runtime/Assert.h>

#include <ti/sysbios/family/c64p/Hwi.h>
#include <ti/sysbios/family/c64p/EventCombiner.h>

#include <ti/sdo/utils/_MultiProc.h>
#include <ti/sdo/ipc/_Ipc.h>

#include <ti/sdo/ipc/notifyDrivers/IInterrupt.h>

#include "package/internal/InterruptDsp.xdc.h"

/* Register access method. */
#define REG16(A)   (*(volatile UInt16 *) (A))
#define REG32(A)   (*(volatile UInt32 *) (A))

#define PROCID(IDX)               (InterruptDsp_procIdTable[IDX])
#define MBX_TABLE_IDX(SRC, DST)   ((PROCID(SRC) * 8) + PROCID(DST))
#define SUBMBX_IDX(IDX)           (InterruptDsp_mailboxTable[IDX] & 0xFF)
#define MBX_USER_IDX(IDX)         ((InterruptDsp_mailboxTable[IDX] >> 8) & 0xFF)
#define MBX_BASEADDR_IDX(IDX)     ((InterruptDsp_mailboxTable[IDX] >> 16) & 0xFFFF)

#define MAILBOX_REG_VAL(M)        (0x1 << (2 * M))

#define MAILBOX_MESSAGE(IDX)      (InterruptDsp_mailboxBaseAddr[  \
                                    MBX_BASEADDR_IDX(IDX)] + 0x40 \
                                    + (0x4 * SUBMBX_IDX(IDX)))
#define MAILBOX_STATUS(IDX)       (InterruptDsp_mailboxBaseAddr[  \
                                    MBX_BASEADDR_IDX(IDX)] + 0xC0 \
                                    + (0x4 * SUBMBX_IDX(IDX)))

#define MAILBOX_IRQSTATUS_CLR_DSP(IDX)   (InterruptDsp_mailboxBaseAddr[ \
                                           MBX_BASEADDR_IDX(IDX)] +     \
                                           (0x10 * MBX_USER_IDX(IDX)) + 0x104)
#define MAILBOX_IRQENABLE_SET_DSP(IDX)   (InterruptDsp_mailboxBaseAddr[ \
                                           MBX_BASEADDR_IDX(IDX)] +     \
                                           (0x10 * MBX_USER_IDX(IDX)) + 0x108)
#define MAILBOX_IRQENABLE_CLR_DSP(IDX)   (InterruptDsp_mailboxBaseAddr[ \
                                           MBX_BASEADDR_IDX(IDX)] +     \
                                           (0x10 * MBX_USER_IDX(IDX)) + 0x10C)
#define MAILBOX_EOI_REG(IDX)      (InterruptDsp_mailboxBaseAddr[IDX] + 0x140)

/*
 *************************************************************************
 *                      Module functions
 *************************************************************************
 */

/*!
 *  ======== InterruptDsp_intEnable ========
 *  Enable remote processor interrupt
 */     
Void InterruptDsp_intEnable(UInt16 remoteProcId, IInterrupt_IntInfo *intInfo)
{
    UInt16 index;
    
    index = MBX_TABLE_IDX(remoteProcId, MultiProc_self());

    REG32(MAILBOX_IRQENABLE_SET_DSP(index)) = MAILBOX_REG_VAL(SUBMBX_IDX(index));

    if ((remoteProcId >= MultiProc_getNumProcsInCluster()) || (remoteProcId == MultiProc_self())) { 
        Assert_isTrue(FALSE, ti_sdo_ipc_Ipc_A_internal);
    }
}
        
/*!
 *  ======== InterruptDsp_intDisable ========
 *  Disables remote processor interrupt
 */     
Void InterruptDsp_intDisable(UInt16 remoteProcId, IInterrupt_IntInfo *intInfo)
{
    UInt16 index;

    index = MBX_TABLE_IDX(remoteProcId, MultiProc_self());

    REG32(MAILBOX_IRQENABLE_CLR_DSP(index)) = MAILBOX_REG_VAL(SUBMBX_IDX(index));

    if ((remoteProcId >= MultiProc_getNumProcsInCluster()) || (remoteProcId == MultiProc_self())) { 
        Assert_isTrue(FALSE, ti_sdo_ipc_Ipc_A_internal);
    }

    // TODO disable interrupt ?
}

/*!
 *  ======== InterruptDsp_intRegister ======== 
 */
Void InterruptDsp_intRegister(UInt16 remoteProcId, IInterrupt_IntInfo *intInfo,
                              Fxn func, UArg arg)
{
    Int         i;
    UInt        key;
    UInt        eventId;
    Int         index; 
    Hwi_Params  params;
    InterruptDsp_FxnTable *table; 

    index = PROCID(remoteProcId);

    if ((remoteProcId >= MultiProc_getNumProcsInCluster()) || (remoteProcId == MultiProc_self())) {
        Assert_isTrue(FALSE, ti_sdo_ipc_Ipc_A_internal);
    }
    
    /* Disable global interrupts */
    key = Hwi_disable();

    table = &(InterruptDsp_module->fxnTable[index]);
    table->func = func;
    table->arg  = arg;
    
    InterruptDsp_intClear(remoteProcId, intInfo);
    
    /* Make sure the interrupt only gets plugged once */
    eventId = InterruptDsp_dspInterruptTable[index];
    
    i= (index < 4) ? 0 : 1;
    InterruptDsp_module->numPlugged[i]++;
    
    if (InterruptDsp_module->numPlugged[i] == 1) {
        EventCombiner_dispatchPlug(eventId,
            (Hwi_FuncPtr)InterruptDsp_intShmStub, eventId, TRUE);
        Hwi_Params_init(&params);
    
        if (eventId < 32) {
            eventId = 0;
        }
        else if (eventId < 64) {
            eventId = 1;
        }
        else if (eventId < 96) {
            eventId = 2;
        }
        else {
            eventId = 3;
        }
            
        params.eventId = eventId;
        params.arg = eventId;
        params.enableInt = TRUE;
        Hwi_create(intInfo->intVectorId, &ti_sysbios_family_c64p_EventCombiner_dispatch,
                   &params, NULL);
        Hwi_enableInterrupt(intInfo->intVectorId);
    }
    else {
        EventCombiner_dispatchPlug(eventId,
                (Hwi_FuncPtr)InterruptDsp_intShmStub, eventId, TRUE);
    }

    // TODO use event combiner
    
    /* Enable the mailbox interrupt to the DSP */
    InterruptDsp_intEnable(remoteProcId, intInfo);
    
    /* Restore global interrupts */
    Hwi_restore(key);
}

/*!
 *  ======== InterruptDsp_intUnregister ======== 
 */
Void InterruptDsp_intUnregister(UInt16 remoteProcId, 
                                IInterrupt_IntInfo *intInfo)
{
    Int         i;
    Hwi_Handle  hwiHandle;
    Int         index; 
    InterruptDsp_FxnTable *table;

    index = PROCID(remoteProcId);

    if ((remoteProcId >= MultiProc_getNumProcsInCluster()) || (remoteProcId == MultiProc_self())) { 
        Assert_isTrue(FALSE, ti_sdo_ipc_Ipc_A_internal);
    }
    
    /* Disable the mailbox interrupt source */
    InterruptDsp_intDisable(remoteProcId, intInfo);


    i = (index < 4) ? 0 : 1;
    InterruptDsp_module->numPlugged[i]--;

    if (InterruptDsp_module->numPlugged[i] == 0) {
        /* Delete the Hwi */
        hwiHandle = Hwi_getHandle(intInfo->intVectorId);
        Hwi_delete(&hwiHandle);
    }

    table = &(InterruptDsp_module->fxnTable[index]);
    table->func = NULL;        
    table->arg  = NULL;
}

/*!
 *  ======== InterruptDsp_intSend ========
 *  Send interrupt to the remote processor
 */
Void InterruptDsp_intSend(UInt16 remoteProcId, IInterrupt_IntInfo *intInfo,
                          UArg arg)
{
    UInt key;
    UInt16 index;

    index = MBX_TABLE_IDX(MultiProc_self(), remoteProcId);
    
    /* 
     *  Before writing to a mailbox, check whehter it already contains a message
     *  If so, then don't write to the mailbox since we want one and only one
     *  message per interrupt.  Disable interrupts between reading 
     *  the MSGSTATUS_X register and writing to the mailbox to protect from 
     *  another thread doing an intSend at the same time
     *
     *  Note regarding possible race condition between local 'intSend' and 
     *  remote 'intClear':
     *  It is possible that we we read the MAILBOX_MSGSTATUS_X register during
     *  the remote side's intClear.  Therefore, we might choose _not_ to send
     *  write to the mailbox even though the mailbox is about to be cleared a
     *  few cycles later. In this case, the interrupt will be lost.
     *  This is OK, however. intClear should always be called by the Notify
     *  driver _before_ shared memory is read, so the event will be picked up
     *  anyway by the previous interrupt that caused intClear to be called.
     */
    key = Hwi_disable();
    if (REG32(MAILBOX_STATUS(index)) == 0) {
        REG32(MAILBOX_MESSAGE(index)) = arg;
    }
    Hwi_restore(key);
}

/*!
 *  ======== InterruptDsp_intPost ========
 */
Void InterruptDsp_intPost(UInt16 srcProcId, IInterrupt_IntInfo *intInfo, 
                          UArg arg)
{
    UInt key;
    UInt16 index;

    index = MBX_TABLE_IDX(srcProcId, MultiProc_self());
    
    key = Hwi_disable();
    if (REG32(MAILBOX_STATUS(index)) == 0) {
        REG32(MAILBOX_MESSAGE(index)) = arg;
    }
    Hwi_restore(key);
}

/*!
 *  ======== InterruptDsp_intClear ========
 *  Clear interrupt 
 */
UInt InterruptDsp_intClear(UInt16 remoteProcId, IInterrupt_IntInfo *intInfo)
{
    UInt arg;
    UInt16 index;
    
    index = MBX_TABLE_IDX(remoteProcId, MultiProc_self());
    
    arg = REG32(MAILBOX_MESSAGE(index));
    REG32(MAILBOX_IRQSTATUS_CLR_DSP(index)) = MAILBOX_REG_VAL(SUBMBX_IDX(index));
    
    /* Write to EOI (End Of Interrupt) register */
    REG32(MAILBOX_EOI_REG(index)) = 0x1;

    return (arg);
}

/*
 *************************************************************************
 *                      Internals functions
 *************************************************************************
 */

/*!
 *  ======== InterruptDsp_intShmStub ======== 
 */
Void InterruptDsp_intShmStub(UArg arg)
{
    UInt16 index;
    UInt16 loopIdx;
    InterruptDsp_FxnTable *table;    

    /* 
     * Loop through each Sub-mailbox to determine which one generated 
     * interrupt. 
     */
    for (loopIdx = 0; loopIdx < MultiProc_getNumProcsInCluster(); loopIdx++) { 
        index = MBX_TABLE_IDX(loopIdx, MultiProc_self());
        if ((REG32(MAILBOX_IRQENABLE_SET_DSP(index)) & MAILBOX_REG_VAL(
             SUBMBX_IDX(index))) && REG32(MAILBOX_STATUS(index)) != 0) {
            table = &(InterruptDsp_module->fxnTable[PROCID(loopIdx)]);    
            (table->func)(table->arg);     
        }
    }
}

/*
 */
/*
 *  @(#) ti.sdo.ipc.family.vayu; 1, 0, 0, 0,1; 5-22-2012 16:20:39; /db/vtree/library/trees/ipc/ipc-h32/src/ xlibrary

 */

