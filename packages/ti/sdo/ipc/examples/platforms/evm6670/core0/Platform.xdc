/*
 *  Copyright 2012 by Texas Instruments Incorporated.
 *
 */

/*
 *  ======== Platform.xdc ========
 */

/*!
 *  ======== Platform ========
 *  Platform support for the evm6670
 */
metaonly module Platform inherits xdc.platform.IPlatform
{
    readonly config xdc.platform.IPlatform.Board BOARD = {
        id:             "0",
        boardName:      "evm6670",
        boardFamily:    "evm6670",
        boardRevision:  null,
    };
        
    readonly config xdc.platform.IExeContext.Cpu CPU = {
        id:             "0",
        clockRate:      1000,
        catalogName:    "ti.catalog.c6000",
        deviceName:     "TMS320C6670",
        revision:       "1.0",
    };
    
instance:

    override readonly config xdc.platform.IPlatform.Memory
        externalMemoryMap[string] = [
            ["DDR3", {name: "DDR3", base: 0x80000000, len: 0x20000000}],
    ];

    override config string codeMemory  = "L2SRAM";
    override config string dataMemory  = "L2SRAM";
    override config string stackMemory = "L2SRAM";

    config String l1DMode = "32k";
    config String l1PMode = "32k";
    config String l2Mode = "256k";
};
/*
 *  @(#) ti.sdo.ipc.examples.platforms.evm6670.core0; 1, 0, 0, 0,1; 5-22-2012 16:24:26; /db/vtree/library/trees/ipc/ipc-h32/src/ xlibrary

 */

