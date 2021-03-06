/*
 *  Copyright 2012 by Texas Instruments Incorporated.
 *
 */

/*
 *  ======== package.xdc ========
 *
 */

requires ti.catalog.c6000;
requires xdc.platform [1,0,1];

/*!
 *  ======== ti.sdo.ipc.examples.platforms.evm6657.core0 ========
 *  Platform package for the 6657 EVM.
 *
 *  This package implements the interfaces (xdc.platform.IPlatform)
 *
 *  @a(Throws)
 *  `XDCException` exceptions are thrown for fatal errors. The following error
 *  codes are reported in the exception message:
 *  @p(dlist)                            
 *      -  `ti.sdo.ipc.examples.platforms.evm6657.core0.LINK_TEMPLATE_ERROR`
 *           This error is raised when this platform cannot found the default
 *           linker command template `linkcmd.xdt` in the build target's
 *           package. When a target does not contain this file, the config
 *           parameter `{@link xdc.cfg.Program#linkTemplate}` must be set.
 *  @p
 */
package ti.sdo.ipc.examples.platforms.evm6657.core0 [1,0,0,0] {
    module Platform;
}
/*
 *  @(#) ti.sdo.ipc.examples.platforms.evm6657.core0; 1, 0, 0, 0,1; 5-22-2012 16:24:25; /db/vtree/library/trees/ipc/ipc-h32/src/ xlibrary

 */

