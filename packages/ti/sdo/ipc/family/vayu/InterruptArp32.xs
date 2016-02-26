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
 *  ======== InterruptArp32.xs ========
 *
 */

var Hwi         = null;
var Core        = null;
var MultiProc   = null;

/*
 *  ======== module$use ========
 */
function module$use()
{        
    Hwi         = xdc.useModule("ti.sysbios.family.arp32.Hwi");
    MultiProc   = xdc.useModule("ti.sdo.utils.MultiProc");
    Ipc         = xdc.useModule("ti.sdo.ipc.Ipc");

    var loopIdx;

    for (loopIdx=0; loopIdx<8; loopIdx++) {
        this.procIdTable[loopIdx] = -1;
    }

    this.eve0ProcId     = MultiProc.getIdMeta("EVE0");
    this.eve1ProcId     = MultiProc.getIdMeta("EVE1");
    this.eve2ProcId     = MultiProc.getIdMeta("EVE2");
    this.eve3ProcId     = MultiProc.getIdMeta("EVE3");
    this.dsp0ProcId     = MultiProc.getIdMeta("DSP0");
    this.dsp1ProcId     = MultiProc.getIdMeta("DSP1");
    this.videoProcId    = MultiProc.getIdMeta("VIDEO-M4");
    this.vpssProcId     = MultiProc.getIdMeta("VPSS-M4");

    if (this.eve0ProcId != MultiProc.INVALIDID) {
        this.procIdTable[this.eve0ProcId] = 0;
    }
    if (this.eve1ProcId != MultiProc.INVALIDID) {
        this.procIdTable[this.eve1ProcId] = 1;
    }
    if (this.eve2ProcId != MultiProc.INVALIDID) {
        this.procIdTable[this.eve2ProcId] = 2;
    }
    if (this.eve3ProcId != MultiProc.INVALIDID) {
        this.procIdTable[this.eve3ProcId] = 3;
    }
    if (this.dsp0ProcId != MultiProc.INVALIDID) {
        this.procIdTable[this.dsp0ProcId] = 4;
    }
    if (this.dsp1ProcId != MultiProc.INVALIDID) {
        this.procIdTable[this.dsp1ProcId] = 5;
    }
    if (this.videoProcId != MultiProc.INVALIDID) {
        this.procIdTable[this.videoProcId] = 6;
    }
    if (this.vpssProcId != MultiProc.INVALIDID) {
        this.procIdTable[this.vpssProcId] = 7;
    }

    /* Initialize mailboxTable */
    this.mailboxTable[0]  = 0xFFFFFFFF;
    this.mailboxTable[1]  = 0x00080100;
    this.mailboxTable[2]  = 0x00080202;
    this.mailboxTable[3]  = 0x00080304;
    this.mailboxTable[4]  = 0x00000100;
    this.mailboxTable[5]  = 0x00010100;
    this.mailboxTable[6]  = 0x00000202;
    this.mailboxTable[7]  = 0x00010202;
    this.mailboxTable[8]  = 0x00080001;
    this.mailboxTable[9]  = 0xFFFFFFFF;
    this.mailboxTable[10] = 0x00080206;
    this.mailboxTable[11] = 0x00080308;
    this.mailboxTable[12] = 0x00020100;
    this.mailboxTable[13] = 0x00030100;
    this.mailboxTable[14] = 0x00020202;
    this.mailboxTable[15] = 0x00030202;
    this.mailboxTable[16] = 0x00080003;
    this.mailboxTable[17] = 0x00080107;
    this.mailboxTable[18] = 0xFFFFFFFF;
    this.mailboxTable[19] = 0x0008030A;
    this.mailboxTable[20] = 0x00040100;
    this.mailboxTable[21] = 0x00050100;
    this.mailboxTable[22] = 0x00040202;
    this.mailboxTable[23] = 0x00050202;
    this.mailboxTable[24] = 0x00080005;
    this.mailboxTable[25] = 0x00080109;
    this.mailboxTable[26] = 0x0008020B;
    this.mailboxTable[27] = 0xFFFFFFFF;
    this.mailboxTable[28] = 0x00060100;
    this.mailboxTable[29] = 0x00070100;
    this.mailboxTable[30] = 0x00060202;
    this.mailboxTable[31] = 0x00070202;
    this.mailboxTable[32] = 0x00000001;
    this.mailboxTable[33] = 0x00020001;
    this.mailboxTable[34] = 0x00040001;
    this.mailboxTable[35] = 0x00060001;
    this.mailboxTable[36] = 0xFFFFFFFF;
    this.mailboxTable[37] = 0x00090100;
    this.mailboxTable[38] = 0x00090202;
    //this.mailboxTable[38] = 0x00090302;
    this.mailboxTable[39] = 0x00090306;
    this.mailboxTable[40] = 0x00010001;
    this.mailboxTable[41] = 0x00030001;
    this.mailboxTable[42] = 0x00050001;
    this.mailboxTable[43] = 0x00070001;
    this.mailboxTable[44] = 0x00090001;
    this.mailboxTable[45] = 0xFFFFFFFF;
    this.mailboxTable[46] = 0x00090204;
    this.mailboxTable[47] = 0x00090308;
    this.mailboxTable[48] = 0x00000003;
    this.mailboxTable[49] = 0x00020003;
    this.mailboxTable[50] = 0x00040003;
    this.mailboxTable[51] = 0x00060003;
    this.mailboxTable[52] = 0x00090003;
    this.mailboxTable[53] = 0x00090105;
    this.mailboxTable[54] = 0xFFFFFFFF;
    this.mailboxTable[55] = 0xFFFFFFFF;
    this.mailboxTable[56] = 0x00010003;
    this.mailboxTable[57] = 0x00030003;
    this.mailboxTable[58] = 0x00050003;
    this.mailboxTable[59] = 0x00070003;
    this.mailboxTable[60] = 0x00090007;
    this.mailboxTable[61] = 0x00090109;
    this.mailboxTable[62] = 0xFFFFFFFF;
    this.mailboxTable[63] = 0xFFFFFFFF;

    /* Initialize mailbox base address table */
    this.mailboxBaseAddr[0] = 0x4008B000;
    this.mailboxBaseAddr[1] = 0x4008C000;
    this.mailboxBaseAddr[2] = 0x4008B000;
    this.mailboxBaseAddr[3] = 0x4008C000;
    this.mailboxBaseAddr[4] = 0x4008B000;
    this.mailboxBaseAddr[5] = 0x4008C000;
    this.mailboxBaseAddr[6] = 0x4008B000;
    this.mailboxBaseAddr[7] = 0x4008C000;
    this.mailboxBaseAddr[8] = 0x4008D000;
    this.mailboxBaseAddr[9] = 0x48844000;

    if (MultiProc.id != this.eve0ProcId) {
        this.mailboxBaseAddr[8] = 0x4208D000;
    }

    this.eveInterruptTable[0] = 28; /* EVE0 - Group1/INTC1 */
    this.eveInterruptTable[1] = 28; /* EVE1 - Group1/INTC1 */
    this.eveInterruptTable[2] = 28; /* EVE2 - Group1/INTC1 */
    this.eveInterruptTable[3] = 28; /* EVE3 - Group1/INTC1 */
    this.eveInterruptTable[4] = 29; /* DSP0 - Group0/INTC0 */
    this.eveInterruptTable[5] = 30; /* DSP1 - Group0/INTC0 */
    this.eveInterruptTable[6] = 29; /* VIDEO */
    this.eveInterruptTable[7] = 30; /* VPSS */

    if (MultiProc.id == this.eve1ProcId) {
        this.eveInterruptTable[0] = 16; /* EVE0 - Group1/INTC1 */
    }
    else if (MultiProc.id == this.eve2ProcId) {
        this.eveInterruptTable[0] = 16; /* EVE0 - Group1/INTC1 */
        this.eveInterruptTable[1] = 17; /* EVE1 - Group1/INTC1 */
        this.eveInterruptTable[3] = 17; /* EVE3 - Group1/INTC1 */
    }
    else if (MultiProc.id == this.eve3ProcId) {
        this.eveInterruptTable[0] = 16; /* EVE0 - Group1/INTC1 */
        this.eveInterruptTable[1] = 17; /* EVE1 - Group1/INTC1 */
        this.eveInterruptTable[2] = 17; /* EVE2 - Group1/INTC1 */
    }
}

/*
 *  ======== module$static$init ========
 *  Initialize module values.
 */
function module$static$init(mod, params)
{   
    var idx; 
    var remoteProcId;
    
    // TODO replace 8 with macro
    for (remoteProcId=0; remoteProcId<8; remoteProcId++) {
        mod.fxnTable[remoteProcId].func  = null;
        mod.fxnTable[remoteProcId].arg   = 0;
    }

    for (idx = 0; idx < 10; idx++) {
        mod.numPlugged[idx] = 0;
    }
}
/*
 *  @(#) ti.sdo.ipc.family.vayu; 1, 0, 0, 0,1; 5-22-2012 16:20:39; /db/vtree/library/trees/ipc/ipc-h32/src/ xlibrary

 */

