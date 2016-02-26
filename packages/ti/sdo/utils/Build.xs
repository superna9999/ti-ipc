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

    if (("ti.sdo.ipc" in xdc.om) || ("ti.sdo.io" in xdc.om)) {
        return;
    }

    /* inform getLibs() about location of library */
    switch (BIOS.libType) {
        case BIOS.LibType_Instrumented:
            this.$private.libraryName = "/utils.lib";
            this.$private.outputDir = this.$package.packageBase 
                        + "lib/instrumented_" 
                        + Program.build.target.suffix
                        + "/utils";
            break;

        case BIOS.LibType_NonInstrumented:
            this.$private.libraryName = "/utils.lib";
            this.$private.outputDir = this.$package.packageBase 
                        + "lib/nonInstrumented_" 
                        + Program.build.target.suffix
                        + "/utils";
            break;

        case BIOS.LibType_Custom:
            this.$private.libraryName = "/utils.lib";
            var SourceDir = xdc.useModule("xdc.cfg.SourceDir");
            if (Build.libDir !== null) {
                SourceDir.outputDir = Build.libDir;
                var src = SourceDir.create("utils");
                this.$private.outputDir = src.getGenSourceDir();
            }
            else {
                var curPath = java.io.File(".").getCanonicalPath();
                /* if package.bld world */
                if (java.io.File(curPath).getName() != "configPkg") {
                    var appName = Program.name.substring(0, Program.name.lastIndexOf('.'));
                    appName = appName + "_p" + Program.build.target.suffix + ".src";
                    SourceDir.outputDir = "package/cfg/" + appName;
                    var src = SourceDir.create("utils");
                    this.$private.outputDir = src.getGenSourceDir();
                }
                /* else ccs world */
                else {
                    /* request output source directory for generated files */
                    var appName = Program.name.substring(0, Program.name.lastIndexOf('.'));
                    appName = appName + "_" + Program.name.substr(Program.name.lastIndexOf('.')+1);
                    var src = SourceDir.create("utils/");

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

var utilsSources = "utils/MultiProc.c " +
                   "utils/List.c " +
                   "utils/NameServerRemoteNull.c " +
                   "utils/NameServer.c ";


var cList = {
    "C28_large"         : utilsSources,
    "C28_float"         : utilsSources,
    "MSP430"            : utilsSources,
    "MSP430X"           : utilsSources,
    "MSP430X_small"     : utilsSources,
    "C64P"              : utilsSources,
    "C64P_big_endian"   : utilsSources,
    "C674"              : utilsSources,
    "C67P"              : utilsSources,
    "C64T"              : utilsSources,
    "C66"               : utilsSources,
    "C66_big_endian"    : utilsSources,
    "ARP32"             : utilsSources,
    "Arm9"              : utilsSources,
    "A8F"               : utilsSources,
    "M3"                : utilsSources,
    "R4t_big_endian"    : utilsSources,
    "R4Ft_big_endian"   : utilsSources,
};

var utilsPackages = [
    "ti.sdo.utils",
];

var asmListNone = [
];

var asmList = {
    "C28_large"         : asmListNone, 
    "C28_float"         : asmListNone, 
    "MSP430"            : asmListNone, 
    "MSP430X"           : asmListNone, 
    "MSP430X_small"     : asmListNone, 
    "C64P"              : asmListNone,
    "C64P_big_endian"   : asmListNone,
    "C674"              : asmListNone,
    "C67P"              : asmListNone,
    "C64T"              : asmListNone, 
    "C66"               : asmListNone,
    "C66_big_endian"    : asmListNone,
    "ARP32"             : asmListNone, 
    "Arm9"              : asmListNone, 
    "A8F"               : asmListNone, 
    "M3"                : asmListNone, 
    "R4t_big_endian"    : asmListNone, 
    "R4Ft_big_endian"   : asmListNone, 
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
    var BIOS = xdc.module("ti.sysbios.BIOS");
    var localSources = "utils/UTILS.c ";

    /* 
     * logic to trim the C files down to just what the application needs 
     * 3/2/11 disabled for now ...
     */
    if (BIOS.buildingAppLib == true) {
        for each (var mod in Program.targetModules()) {
            var mn = mod.$name;
            var pn = mn.substring(0, mn.lastIndexOf("."));
            var packageMatch = false;

            for (var i = 0; i < utilsPackages.length; i++) {
                if (pn == utilsPackages[i]) {
                    packageMatch = true;
                    break;
                }
            }

            if (packageMatch && !mn.match(/Proxy/)) {
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

    var defs = "";

    if ((BIOS.assertsEnabled == false) ||
        ((Defaults.common$.diags_ASSERT == Diags.ALWAYS_OFF)
            && (Defaults.common$.diags_INTERNAL == Diags.ALWAYS_OFF))) {
        defs += " -Dxdc_runtime_Assert_DISABLE_ALL";
    }

    if (BIOS.logsEnabled == false) {
        defs += " -Dxdc_runtime_Log_DISABLE_ALL";
    }

    return (defs);
}


/*
 *  @(#) ti.sdo.utils; 1, 0, 0, 0,1; 5-22-2012 16:22:22; /db/vtree/library/trees/ipc/ipc-h32/src/ xlibrary

 */

