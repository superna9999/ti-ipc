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
 *  ======== InterruptDsp.xdc ========
 */

import ti.sdo.utils.MultiProc;
 
/*!
 *  ======== InterruptDsp ======== 
 *  Vayu/DSP interrupt manager
 */

module InterruptDsp inherits ti.sdo.ipc.notifyDrivers.IInterrupt
{
    /*! @_nodoc */
    metaonly struct InterruptDataView {
        String      remoteProcName;
        Bool        registered;
        Bool        enabled;
        Bool        intPending;
        Ptr         payload;
    };
    
    /*! @_nodoc */
    @Facet
    metaonly config xdc.rov.ViewInfo.Instance rovViewInfo = 
        xdc.rov.ViewInfo.create({
            viewMap: [
                ['IncomingInterrupts',
                    {
                        type: xdc.rov.ViewInfo.MODULE_DATA,
                        viewInitFxn: 'viewInitInterrupt',
                        structName: 'InterruptDataView'
                    }
                ],
            ]
        });

    /* Base address for the Mailbox subsystem */
    config UInt32 mailboxBaseAddr[10];

    /* TODO: Document how this table is generated */
    config UInt32 mailboxTable[64];

    config UInt32 dspInterruptTable[8];

    config UInt32 procIdTable[8];

internal:

    config UInt eve0ProcId   = MultiProc.INVALIDID;
    config UInt eve1ProcId   = MultiProc.INVALIDID;
    config UInt eve2ProcId   = MultiProc.INVALIDID;
    config UInt eve3ProcId   = MultiProc.INVALIDID;
    config UInt dsp0ProcId   = MultiProc.INVALIDID;
    config UInt dsp1ProcId   = MultiProc.INVALIDID;
    config UInt videoProcId  = MultiProc.INVALIDID;
    config UInt vpssProcId   = MultiProc.INVALIDID;

    /*! Function table */
    struct FxnTable {
        Fxn    func;
        UArg   arg;
    }

    /*!
     *  ======== intShmStub ========
     *  Stub to be plugged
     */
    Void intShmStub(UArg arg);
    
    struct Module_State {        
        /* 
         * Create a function table of length 8 (Total number of cores in the
         * System) for each DSP core.
         */
        FxnTable   fxnTable[8];
        UInt       numPlugged[2];  /* # of times the interrupt was registered */
    };
} 
/*
 *  @(#) ti.sdo.ipc.family.vayu; 1, 0, 0, 0,1; 5-22-2012 16:20:39; /db/vtree/library/trees/ipc/ipc-h32/src/ xlibrary

 */

