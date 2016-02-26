/* --COPYRIGHT--,BSD
 * Copyright (c) $(CPYYEAR), Texas Instruments Incorporated
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
 * --/COPYRIGHT--*/
var System   = xdc.useModule('xdc.runtime.System');
var SysStd   = xdc.useModule('xdc.runtime.SysStd');
System.SupportProxy = SysStd;
System.extendedFormats = "%f";

var BIOS = xdc.useModule('ti.sysbios.BIOS');
BIOS.clockEnabled = false;
BIOS.heapSize = 0x8000;
BIOS.libType = BIOS.LibType_Custom;

var Timestamp = xdc.useModule("xdc.runtime.Timestamp");

var cacheEnabled = true;
var cacheLineSize = 128;
var procName = null;
var procNameList = [];

var Settings                = xdc.module('ti.sdo.ipc.family.Settings')
var MessageQ                = xdc.module('ti.sdo.ipc.MessageQ');
var Notify                  = xdc.module('ti.sdo.ipc.Notify');
var Ipc                     = xdc.useModule('ti.sdo.ipc.Ipc');
Notify.SetupProxy   = xdc.module(Settings.getNotifySetupDelegate());
MessageQ.SetupTransportProxy = xdc.module(Settings.getMessageQSetupDelegate());

//Notify.SetupProxy   = xdc.module('ti.sdo.ipc.family.c647x.NotifyCircSetup');
//MessageQ.SetupTransportProxy = xdc.module('ti.sdo.ipc.transports.TransportShmNotifySetup');

//MessageQ.SetupTransportProxy = xdc.module('ti.sdo.ipc.transports.TransportShmCircSetup');

switch (Program.platformName) {
    case "ti.sdo.ipc.examples.platforms.evmOMAPL138.arm":
        procName = "HOST";
        procNameList = ["HOST", "DSP"];
	Program.global.shmBase = 0xc2000000;
	Program.global.shmSize = 0x00020000;
        break;
    case "ti.sdo.ipc.examples.platforms.evmOMAPL138.dsp":
        procName = "DSP";
        procNameList = ["HOST", "DSP"];
	Program.global.shmBase = 0xc2000000;
	Program.global.shmSize = 0x00020000;
        break;
    case "ti.sdo.ipc.examples.platforms.omap4430.core0":
        procName = "CORE0";
        procNameList = ["CORE0", "CORE1"];
        cacheEnabled = false;
        cacheLineSize = 0;
        break;
    case "ti.sdo.ipc.examples.platforms.omap4430.core1":
        procName = "CORE1";
        procNameList = ["CORE0", "CORE1"];
        cacheEnabled = false;
        cacheLineSize = 0;
        break;
    case "ti.sdo.ipc.examples.platforms.evmC6A8149.dsp":
        procName = "DSP";
        procNameList = ["DSP", "EVE"];
        Ipc.sr0MemorySetup = true;
        Program.global.shmBase = 0x59020000;
        Program.global.shmSize = 0x8000;
        break;
    case "ti.sdo.ipc.examples.platforms.evmC6A8149.eve":
        procName = "EVE";
        procNameList = ["DSP", "EVE"];
        Ipc.sr0MemorySetup = true;
        cacheEnabled = false;
        Program.global.shmBase = 0x40020000;
        Program.global.shmSize = 0x8000;
        break;
    case "ti.sdo.ipc.examples.platforms.evmTI816X.vpss":
        var Core = xdc.useModule('ti.sysbios.family.arm.ducati.Core');
        Core.id = 1;
        procName = "VPSS-M3";
        procNameList = ["VIDEO-M3", "VPSS-M3"];
        cacheEnabled = false;
        cacheLineSize = 0;
        Ipc.sr0MemorySetup = true;
        Program.global.shmBase = 0x8E000000;
        Program.global.shmSize = 0x01000000;
        break;
    case "ti.sdo.ipc.examples.platforms.evm6472.core0":
        procNameList = ["CORE0", "CORE1", "CORE2", "CORE3", "CORE4", "CORE5"];
        cacheLineSize = 64;
        Program.global.shmBase = 0x00200000;
        Program.global.shmSize = 0xC0000;
        break;
    case "ti.sdo.ipc.examples.platforms.evm6474.core0":
        procNameList = ["CORE0", "CORE1", "CORE2"];
        Program.global.shmBase = 0x80000000;
        Program.global.shmSize = 0x00200000;
        break;
    case "ti.sdo.ipc.examples.platforms.evm6678.core0":
        procNameList = ["CORE0", "CORE1", "CORE2", "CORE3", "CORE4", "CORE5", "CORE6", "CORE7"];
        Program.global.shmBase = 0x0C000000;
        Program.global.shmSize = 0x00400000;
        break;
    case "ti.sdo.ipc.examples.platforms.evm6670.core0":
        procNameList = ["CORE0", "CORE1", "CORE2", "CORE3"];
        Program.global.shmBase = 0x0C000000;
        Program.global.shmSize = 0x00200000;
        break;
    default:
        throw("Unsupported platform: " + Program.platformName);
}
var MultiProc = xdc.useModule('ti.sdo.utils.MultiProc');
MultiProc.setConfig(procName, procNameList);

Program.global.DEVICENAME = Program.cpu.deviceName;
Program.global.PROCNAMES = procNameList.join(",");
Program.global.BUILDPROFILE = Program.build.profile;

if (Program.build.target.$name.match(/M3/)) {
    var AMMU = xdc.useModule('ti.sysbios.hal.ammu.AMMU');
    var Settings = xdc.useModule('ti.sdo.ipc.family.Settings');

    var spinlockBaseAddr = Settings.getGateHWSpinlockSettings().baseAddr;
    AMMU.mediumPages[0].logicalAddress = spinlockBaseAddr & 0xFFFE0000;
    AMMU.mediumPages[0].pageEnabled = AMMU.Enable_YES;
    AMMU.mediumPages[0].translationEnabled = AMMU.Enable_NO;
    
    /* Make entire DDR cacheable */
    AMMU.largePages[0].pageEnabled = AMMU.Enable_YES;
    AMMU.largePages[0].logicalAddress = 0x80000000;
    AMMU.largePages[0].size = AMMU.Large_512M;
    AMMU.largePages[0].translationEnabled = AMMU.Enable_NO;
    AMMU.largePages[0].L1_cacheable = AMMU.CachePolicy_CACHEABLE;
    AMMU.largePages[0].L2_cacheable = AMMU.CachePolicy_CACHEABLE;
    
    AMMU.largePages[1].pageEnabled = AMMU.Enable_YES;
    AMMU.largePages[1].logicalAddress = 0x60000000;
    AMMU.largePages[1].size = AMMU.Large_512M;
    AMMU.largePages[1].translationEnabled = AMMU.Enable_NO;
    AMMU.largePages[1].L1_cacheable = AMMU.CachePolicy_CACHEABLE;
    AMMU.largePages[1].L2_cacheable = AMMU.CachePolicy_CACHEABLE;
    
    var Cache = xdc.useModule('ti.sysbios.hal.unicache.Cache');
    Cache.enableCache = true;
}

var SharedRegion = xdc.useModule('ti.sdo.ipc.SharedRegion');
//SharedRegion.translate = false;
SharedRegion.setEntryMeta(0,
    { base: Program.global.shmBase, 
      len: Program.global.shmSize,
      ownerProcId: 0,
      isValid: true,
      cacheEnable: cacheEnabled,
      cacheLineSize: cacheLineSize,
      name: "internal_shared_mem",
    });


/* Optimization stuff */
Diags = xdc.useModule("xdc.runtime.Diags");
var Defaults = xdc.useModule('xdc.runtime.Defaults');
Defaults.common$.diags_ASSERT = Diags.ALWAYS_OFF
Defaults.common$.logger = null;
var Semaphore     = xdc.useModule('ti.sysbios.knl.Semaphore');
Semaphore.supportsEvents = false;

//BIOS.libType = BIOS.LibType_NonInstrumented;
//BIOS.libType = BIOS.LibType_Instrumented;
//BIOS.libType = BIOS.LibType_Custom;
BIOS.logsEnabled = false;
BIOS.assertsEnabled = false;

MessageQ.traceFlag = false;
