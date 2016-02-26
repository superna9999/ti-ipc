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
 *  ======== Build.xs ========
 *
 */

var BIOS = null;
var Build = null;

/*
 *  ======== module$use ========
 */
function module$use()
{
    BIOS = xdc.module("ti.sysbios.BIOS");
    Build = this;

    /* inform getLibs() about location of library */
    switch (BIOS.libType) {
        case BIOS.LibType_Instrumented:
            this.$private.libraryName = "/ipc.lib";
            this.$private.outputDir = this.$package.packageBase 
                        + "lib/instrumented_" 
                        + Program.build.target.suffix
                        + "/ipc";
            break;

        case BIOS.LibType_NonInstrumented:
            this.$private.libraryName = "/ipc.lib";
            this.$private.outputDir = this.$package.packageBase 
                        + "lib/nonInstrumented_" 
                        + Program.build.target.suffix
                        + "/ipc";
            break;

        case BIOS.LibType_Custom:
            this.$private.libraryName = "/ipc.lib";
            var SourceDir = xdc.useModule("xdc.cfg.SourceDir");
            if (Build.libDir !== null) {
                SourceDir.outputDir = Build.libDir;
                var src = SourceDir.create("ipc");
                this.$private.outputDir = src.getGenSourceDir();
            }
            else {
                var curPath = java.io.File(".").getCanonicalPath();
                /* if package.bld world */
                if (java.io.File(curPath).getName() != "configPkg") {
                    var appName = Program.name.substring(0, Program.name.lastIndexOf('.'));
                    appName = appName + "_p" + Program.build.target.suffix + ".src";
                    SourceDir.outputDir = "package/cfg/" + appName;
                    var src = SourceDir.create("ipc");
                    this.$private.outputDir = src.getGenSourceDir();
                }
                /* else ccs world */
                else {
                    /* request output source directory for generated files */
                    var appName = Program.name.substring(0, Program.name.lastIndexOf('.'));
                    appName = appName + "_" + Program.name.substr(Program.name.lastIndexOf('.')+1);
                    var src = SourceDir.create("ipc/");

                    /* save this directory in our private state (to be read during
                    * generation, see Gen.xdt)
                    */
                    this.$private.outputDir = src.getGenSourceDir();
                }
            }
            break;
    }
}

/*
 * Add pre-built Instrumented and Non-Intrumented release libs
 */

var ipcSources  =  "ipc/GateMP.c " +
                   "ipc/ListMP.c " +
                   "ipc/SharedRegion.c " +
                   "ipc/MessageQ.c " +
                   "ipc/Notify.c ";

var gatesSources = "ipc/gates/GatePeterson.c " + 
                   "ipc/gates/GateMPSupportNull.c ";

var heapsSources = "ipc/heaps/HeapBufMP.c " +
                   "ipc/heaps/HeapMemMP.c " +
                   "ipc/heaps/HeapMultiBufMP.c ";

var notifyDriverSources = 
                   "ipc/notifyDrivers/NotifyDriverCirc.c " +
                   "ipc/notifyDrivers/NotifySetupNull.c " +
                   "ipc/notifyDrivers/NotifyDriverShm.c ";

var nsremoteSources = 
                   "ipc/nsremote/NameServerRemoteNotify.c " +
                   "ipc/nsremote/NameServerMessageQ.c ";

var transportsSources = 
                   "ipc/transports/TransportShm.c " +
                   "ipc/transports/TransportShmCircSetup.c " + 
                   "ipc/transports/TransportShmNotifySetup.c " + 
                   "ipc/transports/TransportShmCirc.c " + 
                   "ipc/transports/TransportShmNotify.c " + 
                   "ipc/transports/TransportShmSetup.c " +
                   "ipc/transports/TransportNullSetup.c " ; 

var utilsSources = "utils/MultiProc.c " +
                   "utils/List.c " +
                   "utils/NameServerRemoteNull.c " +
                   "utils/NameServer.c ";

var ioSources    = "io/DriverTable.c " +
                   "io/Stream.c " +
                   "io/drivers/IomAdapter.c " +
                   "io/drivers/Generator.c " +
                   "io/converters/DriverAdapter.c " +
                   "io/converters/Transformer.c " +
                   "io/converters/NullConverter.c ";

var commonSources = ipcSources + 
                    gatesSources + 
                    heapsSources + 
                    notifyDriverSources + 
                    nsremoteSources + 
                    transportsSources +
                    utilsSources +
                    ioSources;

var C64PSources  = 
                   "ipc/gates/GateAAMonitor.c " +
                   "ipc/gates/GateHWSpinlock.c " + 
                   "ipc/gates/GateHWSem.c " + 
                   "ipc/family/dm6446/NotifySetup.c " +
                   "ipc/family/dm6446/NotifyCircSetup.c " +
                   "ipc/family/dm6446/InterruptDsp.c " +
                   "ipc/family/omap3530/NotifySetup.c " +
                   "ipc/family/omap3530/NotifyCircSetup.c " +
                   "ipc/family/omap3530/InterruptDsp.c ";

var C66Sources   = "ipc/gates/GateHWSem.c " +
                   "ipc/gates/GateHWSpinlock.c " +
                   "ipc/family/tci663x/Interrupt.c " +
                   "ipc/family/tci663x/MultiProcSetup.c " +
                   "ipc/family/tci663x/NotifyCircSetup.c " +
                   "ipc/family/tci663x/NotifySetup.c ";

var C674Sources  =
                   "ipc/gates/GateHWSpinlock.c " + 
                   "ipc/family/da830/NotifySetup.c " +
                   "ipc/family/da830/NotifyCircSetup.c " +
                   "ipc/family/da830/InterruptDsp.c " +
                   "ipc/family/arctic/NotifySetup.c " + 
                   "ipc/family/arctic/NotifyCircSetup.c " + 
                   "ipc/family/arctic/InterruptDsp.c " + 
                   "ipc/family/ti81xx/NotifySetup.c " +
                   "ipc/family/ti81xx/NotifyCircSetup.c " +
                   "ipc/family/ti81xx/InterruptDsp.c " +
                   "ipc/family/ti81xx/NotifyMbxSetup.c " +
                   "ipc/family/ti81xx/NotifyDriverMbx.c " +
                   "ipc/family/c6a8149/NotifySetup.c " +
                   "ipc/family/c6a8149/NotifyCircSetup.c " +
                   "ipc/family/c6a8149/InterruptDsp.c " +
                   "ipc/family/c6a8149/NotifyMbxSetup.c " +
                   "ipc/family/c6a8149/NotifyDriverMbx.c ";


var C647xSources = "ipc/family/c647x/Interrupt.c " +
                   "ipc/family/c647x/NotifyCircSetup.c " +
                   "ipc/family/c647x/MultiProcSetup.c " +
                   "ipc/family/c647x/NotifySetup.c ";

var C64TSources  =
                   "ipc/gates/GateHWSpinlock.c " + 
                   "ipc/family/omap4430/NotifyCircSetup.c " +
                   "ipc/family/omap4430/NotifySetup.c " + 
                   "ipc/family/omap4430/InterruptDsp.c ";

var C28Sources   = "ipc/family/f28m35x/NotifyDriverCirc.c " +
                   "ipc/family/f28m35x/IpcMgr.c " +
                   "ipc/family/f28m35x/TransportCirc.c " +
                   "ipc/family/f28m35x/NameServerBlock.c ";

var M3Sources    =
                   "ipc/gates/GateHWSpinlock.c " + 
                   "ipc/family/omap4430/NotifySetup.c " +
                   "ipc/family/omap4430/NotifyCircSetup.c " +
                   "ipc/family/omap4430/InterruptDucati.c " +
                   "ipc/family/ti81xx/NotifySetup.c " +
                   "ipc/family/ti81xx/NotifyCircSetup.c " +
                   "ipc/family/ti81xx/InterruptDucati.c " +
                   "ipc/family/ti81xx/NotifyMbxSetup.c " +
                   "ipc/family/ti81xx/NotifyDriverMbx.c " +
                   "ipc/family/c6a8149/NotifySetup.c " +
                   "ipc/family/c6a8149/NotifyCircSetup.c " +
                   "ipc/family/c6a8149/InterruptDucati.c " +
                   "ipc/family/c6a8149/NotifyMbxSetup.c " +
                   "ipc/family/c6a8149/NotifyDriverMbx.c " +
                   "ipc/family/f28m35x/IpcMgr.c " +
                   "ipc/family/f28m35x/NotifyDriverCirc.c " +
                   "ipc/family/f28m35x/TransportCirc.c " +
                   "ipc/family/f28m35x/NameServerBlock.c ";

var A8FSources   =
                   "ipc/gates/GateHWSpinlock.c " + 
                   "ipc/family/ti81xx/NotifySetup.c " +
                   "ipc/family/ti81xx/NotifyCircSetup.c " +
                   "ipc/family/ti81xx/InterruptHost.c " +
                   "ipc/family/ti81xx/NotifyMbxSetup.c " +
                   "ipc/family/ti81xx/NotifyDriverMbx.c " +
                   "ipc/family/c6a8149/NotifySetup.c " +
                   "ipc/family/c6a8149/NotifyCircSetup.c " +
                   "ipc/family/c6a8149/InterruptHost.c " +
                   "ipc/family/c6a8149/NotifyMbxSetup.c " +
                   "ipc/family/c6a8149/NotifyDriverMbx.c " +
                   "ipc/family/omap3530/NotifySetup.c " +
                   "ipc/family/omap3530/NotifyCircSetup.c " +
                   "ipc/family/omap3530/InterruptHost.c ";

var Arm9Sources  = "ipc/family/dm6446/NotifySetup.c " +
                   "ipc/family/dm6446/NotifyCircSetup.c " +
                   "ipc/family/dm6446/InterruptArm.c " +
                   "ipc/family/da830/NotifySetup.c " +
                   "ipc/family/da830/NotifyCircSetup.c " +
                   "ipc/family/da830/InterruptArm.c ";

var ARP32Sources   =
                   "ipc/gates/GateHWSpinlock.c " + 
                   "ipc/family/arctic/NotifySetup.c " +
                   "ipc/family/arctic/NotifyCircSetup.c " + 
                   "ipc/family/arctic/InterruptArp32.c " +
                   "ipc/family/c6a8149/NotifySetup.c " +
                   "ipc/family/c6a8149/NotifyCircSetup.c " + 
                   "ipc/family/c6a8149/InterruptEve.c ";

var cList = {
    "C28_large"         : commonSources + C28Sources,
    "C28_float"         : commonSources + C28Sources,
    "C64P"              : commonSources + C647xSources + C64PSources,
    "C64P_big_endian"   : commonSources + C647xSources + C64PSources,
    "C674"              : commonSources + C674Sources,
    "C64T"              : commonSources + C64TSources,
    "C66"               : commonSources + C647xSources + C66Sources,
    "C66_big_endian"    : commonSources + C647xSources + C66Sources,
    "ARP32"             : commonSources + ARP32Sources,
    "Arm9"              : commonSources + Arm9Sources,
    "A8F"               : commonSources + A8FSources,
    "M3"                : commonSources + M3Sources,
};

var ipcPackages = [
    "ti.sdo.ipc",
    "ti.sdo.ipc.family.omap4430",
    "ti.sdo.ipc.family.omap3530",
    "ti.sdo.ipc.family.da830",
    "ti.sdo.ipc.family.dm6446",
    "ti.sdo.ipc.family.ti81xx",
    "ti.sdo.ipc.family.arctic",
    "ti.sdo.ipc.family.f28m35x",
    "ti.sdo.ipc.family.c647x",
    "ti.sdo.ipc.family.c6a8149",
    "ti.sdo.ipc.family.tci66xx",
    "ti.sdo.ipc.gates",
    "ti.sdo.ipc.heaps",
    "ti.sdo.ipc.notifyDrivers",
    "ti.sdo.ipc.nsremote",
    "ti.sdo.ipc.transports",
    "ti.sdo.io",
    "ti.sdo.io.drivers",
    "ti.sdo.io.converters",
    "ti.sdo.utils",
];

var asmListNone = [
];

var asmList64P = [
    "ipc/gates/GateAAMonitor_asm.s64P",
];

var asmList = {
    "C28_large"         : asmListNone, 
    "C28_float"         : asmListNone, 
    "C64P"              : asmList64P, 
    "C64P_big_endian"   : asmList64P, 
    "C674"              : asmList64P,
    "C64T"              : asmListNone, 
    "C66"               : asmListNone,
    "C66_big_endian"    : asmListNone,
    "ARP32"             : asmListNone, 
    "Arm9"              : asmListNone, 
    "A8F"               : asmListNone, 
    "M3"                : asmListNone, 
};

var cFiles = {
    "ti.sdo.io.DriverTypes" : 
        { cSources: [] },
}

/*
 *  ======== getCFiles ========
 */
function getCFiles(target)
{
    var localSources = "ipc/Ipc.c ";

    /* 
     * logic to trim the C files down to just what the application needs 
     * 3/2/11 disabled for now ...
     */
    if (BIOS.buildingAppLib == true) {
        for each (var mod in Program.targetModules()) {
            var mn = mod.$name;
            var pn = mn.substring(0, mn.lastIndexOf("."));

            /* sanity check package path */
            var packageMatch = false;

            for (var i = 0; i < ipcPackages.length; i++) {
                if (pn == ipcPackages[i]) {
                    packageMatch = true;
                    break;
                }
            }

            if (packageMatch && !mn.match(/Proxy/) &&
               (mn != "ti.sdo.ipc.Ipc")) {
                if (cFiles[mn] === undefined) {
                    var prefix = mn.substr(mn.indexOf("sdo")+4);
                    var mod = mn.substr(mn.lastIndexOf(".")+1);
                    prefix = prefix.substring(0, prefix.lastIndexOf('.')+1);
                    prefix = prefix.replace(/\./g, "/");
                    localSources += prefix + mod + ".c ";
                } 
                else {
                    for (i in cFiles[mn].cSources) {
                        var prefix = mn.substr(mn.indexOf("sdo")+8);
                        prefix = prefix.substring(0, prefix.lastIndexOf('.')+1);
                        prefix = prefix.replace(/\./g, "/");
                        localSources += prefix + cFiles[mn].cSources[i] + " ";
                    }
                }
            }
        }
    }
    else {
        localSources += cList[target];
    }

    /* remove trailing " " */
    localSources = localSources.substring(0, localSources.length-1);

    return (localSources);
}

/*
 *  ======== getAsmFiles ========
 */
function getAsmFiles(target)
{
    return (asmList[target]);
}

/*
 *  ======== getDefs ========
 */
function getDefs()
{
    var Defaults = xdc.module('xdc.runtime.Defaults');
    var Diags = xdc.module("xdc.runtime.Diags");
    var BIOS = xdc.module("ti.sysbios.BIOS");
    var MessageQ = xdc.module("ti.sdo.ipc.MessageQ");

    var defs = "";

    if ((BIOS.assertsEnabled == false) ||
        ((Defaults.common$.diags_ASSERT == Diags.ALWAYS_OFF)
            && (Defaults.common$.diags_INTERNAL == Diags.ALWAYS_OFF))) {
        defs += " -Dxdc_runtime_Assert_DISABLE_ALL";
    }

    if (BIOS.logsEnabled == false) {
        defs += " -Dxdc_runtime_Log_DISABLE_ALL";
    }

    defs += " -Dti_sdo_ipc_MessageQ_traceFlag__D=" + (MessageQ.traceFlag ? "TRUE" : "FALSE");

    var InterruptDucati = xdc.module("ti.sdo.ipc.family.ti81xx.InterruptDucati");

    /*
     * If we truely know which platform we're building against, 
     * add these application specific -D's
     */
    if (BIOS.buildingAppLib == true) {
        defs += " -Dti_sdo_ipc_family_ti81xx_InterruptDucati_videoProcId__D=" + InterruptDucati.videoProcId;
        defs += " -Dti_sdo_ipc_family_ti81xx_InterruptDucati_hostProcId__D=" + InterruptDucati.hostProcId;
        defs += " -Dti_sdo_ipc_family_ti81xx_InterruptDucati_vpssProcId__D=" + InterruptDucati.vpssProcId;
        defs += " -Dti_sdo_ipc_family_ti81xx_InterruptDucati_dspProcId__D=" + InterruptDucati.dspProcId;
        defs += " -Dti_sdo_ipc_family_ti81xx_InterruptDucati_ducatiCtrlBaseAddr__D=" + InterruptDucati.ducatiCtrlBaseAddr;
        defs += " -Dti_sdo_ipc_family_ti81xx_InterruptDucati_mailboxBaseAddr__D=" + InterruptDucati.mailboxBaseAddr;
    }

    return (defs);
}


/*
 *  @(#) ti.sdo.ipc; 1, 0, 0, 0,1; 5-22-2012 16:18:03; /db/vtree/library/trees/ipc/ipc-h32/src/ xlibrary

 */

