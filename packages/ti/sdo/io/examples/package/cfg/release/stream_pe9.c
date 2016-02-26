/*
 *  Do not modify this file; it is automatically 
 *  generated and any modifications will be overwritten.
 *
 * @(#) xdc-y25
 */

#define __nested__
#define __config__

#include <xdc/std.h>

/*
 * ======== GENERATED SECTIONS ========
 *     
 *     MODULE INCLUDES
 *     
 *     <module-name> INTERNALS
 *     <module-name> INHERITS
 *     <module-name> VTABLE
 *     <module-name> PATCH TABLE
 *     <module-name> DECLARATIONS
 *     <module-name> OBJECT OFFSETS
 *     <module-name> TEMPLATES
 *     <module-name> INITIALIZERS
 *     <module-name> FUNCTION STUBS
 *     <module-name> PROXY BODY
 *     <module-name> OBJECT DESCRIPTOR
 *     <module-name> SYSTEM FUNCTIONS
 *     <module-name> PRAGMAS
 *     
 *     INITIALIZATION ENTRY POINT
 *     PROGRAM GLOBALS
 *     CLINK DIRECTIVES
 */


/*
 * ======== MODULE INCLUDES ========
 */

#include <ti/sdo/io/DriverTable.h>
#include <ti/sdo/io/DriverTypes.h>
#include <ti/sdo/io/Stream.h>
#include <ti/sdo/io/converters/DriverAdapter.h>
#include <ti/sdo/io/drivers/Generator.h>
#include <ti/sdo/utils/List.h>
#include <ti/sdo/utils/MultiProc.h>
#include <ti/sdo/utils/NameServer.h>
#include <ti/sdo/utils/NameServerRemoteNull.h>
#include <ti/sysbios/BIOS.h>
#include <ti/sysbios/family/arm/HwiCommon.h>
#include <ti/sysbios/family/arm/IntrinsicsSupport.h>
#include <ti/sysbios/family/arm/TaskSupport.h>
#include <ti/sysbios/family/arm/arm9/Cache.h>
#include <ti/sysbios/family/arm/arm9/Mmu.h>
#include <ti/sysbios/family/arm/dm6446/Hwi.h>
#include <ti/sysbios/family/arm/dm6446/TimerSupport.h>
#include <ti/sysbios/family/arm/exc/Exception.h>
#include <ti/sysbios/gates/GateHwi.h>
#include <ti/sysbios/gates/GateMutex.h>
#include <ti/sysbios/gates/GateSwi.h>
#include <ti/sysbios/hal/Cache.h>
#include <ti/sysbios/hal/Hwi.h>
#include <ti/sysbios/hal/Timer.h>
#include <ti/sysbios/heaps/HeapMem.h>
#include <ti/sysbios/knl/Clock.h>
#include <ti/sysbios/knl/Idle.h>
#include <ti/sysbios/knl/Intrinsics.h>
#include <ti/sysbios/knl/Queue.h>
#include <ti/sysbios/knl/Semaphore.h>
#include <ti/sysbios/knl/Swi.h>
#include <ti/sysbios/knl/Task.h>
#include <ti/sysbios/timers/timer64/Timer.h>
#include <ti/sysbios/xdcruntime/SemThreadSupport.h>
#include <xdc/runtime/Assert.h>
#include <xdc/runtime/Core.h>
#include <xdc/runtime/Defaults.h>
#include <xdc/runtime/Diags.h>
#include <xdc/runtime/Error.h>
#include <xdc/runtime/Gate.h>
#include <xdc/runtime/Log.h>
#include <xdc/runtime/Main.h>
#include <xdc/runtime/Memory.h>
#include <xdc/runtime/Registry.h>
#include <xdc/runtime/Startup.h>
#include <xdc/runtime/SysMin.h>
#include <xdc/runtime/System.h>
#include <xdc/runtime/Text.h>
#include <xdc/runtime/knl/SemThread.h>
#include <xdc/runtime/knl/Sync.h>
#include <xdc/runtime/knl/SyncNull.h>
#include <xdc/runtime/knl/SyncSemThread.h>


/*
 * ======== ti.sdo.io.DriverTable INTERNALS ========
 */


/*
 * ======== ti.sdo.io.DriverTypes INTERNALS ========
 */


/*
 * ======== ti.sdo.io.Stream INTERNALS ========
 */

/* Module__ */
typedef struct ti_sdo_io_Stream_Module__ {
    xdc_runtime_Types_Link link;
} ti_sdo_io_Stream_Module__;

/* Module__root__V */
extern ti_sdo_io_Stream_Module__ ti_sdo_io_Stream_Module__root__V;

/* @@@ ti_sdo_utils_List_Object__ */
typedef struct ti_sdo_utils_List_Object__ {
    ti_sdo_utils_List_Elem elem;
} ti_sdo_utils_List_Object__;

/* @@@ ti_sdo_utils_List_Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sdo_utils_List_Object__ obj;
} ti_sdo_utils_List_Object2__;

/* Object__ */
typedef struct ti_sdo_io_Stream_Object__ {
    xdc_String name;
    xdc_UArg chanParams;
    xdc_Bool drvAdapHdl;
    __TA_ti_sdo_io_Stream_Instance_State__packets packets;
    xdc_UInt maxIssues;
    xdc_UInt issued;
    xdc_UInt ready;
    xdc_UInt mode;
    xdc_runtime_IHeap_Handle packetHeap;
    xdc_runtime_knl_ISync_Handle complete;
    xdc_Bool userSync;
    ti_sdo_io_IConverter_Handle convHandle;
    ti_sdo_utils_List_Object__ Object_field_freeList;
} ti_sdo_io_Stream_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sdo_io_Stream_Object__ obj;
} ti_sdo_io_Stream_Object2__;

/* __ParamsPtr */
#ifdef ti_sdo_io_Stream___VERS
    #define ti_sdo_io_Stream___ParamsPtr xdc_UChar*
#else
    #define ti_sdo_io_Stream___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sdo.io.converters.DriverAdapter INTERNALS ========
 */

/* Module__ */
typedef struct ti_sdo_io_converters_DriverAdapter_Module__ {
    xdc_runtime_Types_Link link;
} ti_sdo_io_converters_DriverAdapter_Module__;

/* Module__root__V */
extern ti_sdo_io_converters_DriverAdapter_Module__ ti_sdo_io_converters_DriverAdapter_Module__root__V;

/* <-- ti_sdo_utils_List_Object */

/* Object__ */
typedef struct ti_sdo_io_converters_DriverAdapter_Object__ {
    const ti_sdo_io_converters_DriverAdapter_Fxns__* __fxns;
    xdc_String name;
    xdc_Ptr driverHandle;
    xdc_Ptr chan;
    xdc_UArg chanParams;
    xdc_UInt mode;
    ti_sdo_io_IConverter_DoneFxn cbFxn;
    xdc_UArg cbArg;
    ti_sdo_utils_List_Object__ Object_field_fromDriver;
} ti_sdo_io_converters_DriverAdapter_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sdo_io_converters_DriverAdapter_Object__ obj;
} ti_sdo_io_converters_DriverAdapter_Object2__;

/* __ParamsPtr */
#ifdef ti_sdo_io_converters_DriverAdapter___VERS
    #define ti_sdo_io_converters_DriverAdapter___ParamsPtr xdc_UChar*
#else
    #define ti_sdo_io_converters_DriverAdapter___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sdo.io.drivers.Generator INTERNALS ========
 */

/* Module__ */
typedef struct ti_sdo_io_drivers_Generator_Module__ {
    xdc_runtime_Types_Link link;
} ti_sdo_io_drivers_Generator_Module__;

/* Module__root__V */
extern ti_sdo_io_drivers_Generator_Module__ ti_sdo_io_drivers_Generator_Module__root__V;

/* <-- ti_sdo_utils_List_Object */

/* Object__ */
typedef struct ti_sdo_io_drivers_Generator_Object__ {
    const ti_sdo_io_drivers_Generator_Fxns__* __fxns;
    __TA_ti_sdo_io_drivers_Generator_Instance_State__chans chans;
} ti_sdo_io_drivers_Generator_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sdo_io_drivers_Generator_Object__ obj;
} ti_sdo_io_drivers_Generator_Object2__;

/* __ParamsPtr */
#ifdef ti_sdo_io_drivers_Generator___VERS
    #define ti_sdo_io_drivers_Generator___ParamsPtr xdc_UChar*
#else
    #define ti_sdo_io_drivers_Generator___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sdo.utils.List INTERNALS ========
 */

/* Module__ */
typedef struct ti_sdo_utils_List_Module__ {
    xdc_runtime_Types_Link link;
} ti_sdo_utils_List_Module__;

/* Module__root__V */
extern ti_sdo_utils_List_Module__ ti_sdo_utils_List_Module__root__V;

/* <-- ti_sdo_utils_List_Object */

/* __ParamsPtr */
#ifdef ti_sdo_utils_List___VERS
    #define ti_sdo_utils_List___ParamsPtr xdc_UChar*
#else
    #define ti_sdo_utils_List___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sdo.utils.MultiProc INTERNALS ========
 */


/*
 * ======== ti.sdo.utils.NameServer INTERNALS ========
 */

/* Module__ */
typedef struct ti_sdo_utils_NameServer_Module__ {
    xdc_runtime_Types_Link link;
} ti_sdo_utils_NameServer_Module__;

/* Module__root__V */
extern ti_sdo_utils_NameServer_Module__ ti_sdo_utils_NameServer_Module__root__V;

/* <-- ti_sdo_utils_List_Object */

/* Object__ */
typedef struct ti_sdo_utils_NameServer_Object__ {
    xdc_String name;
    xdc_UInt maxNameLen;
    xdc_UInt maxValueLen;
    xdc_UInt numStatic;
    xdc_UInt numDynamic;
    __TA_ti_sdo_utils_NameServer_Instance_State__table table;
    __TA_ti_sdo_utils_NameServer_Instance_State__names names;
    __TA_ti_sdo_utils_NameServer_Instance_State__values values;
    xdc_runtime_IHeap_Handle tableHeap;
    xdc_Bool checkExisting;
    ti_sdo_utils_List_Object__ Object_field_freeList;
    ti_sdo_utils_List_Object__ Object_field_nameList;
} ti_sdo_utils_NameServer_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sdo_utils_NameServer_Object__ obj;
} ti_sdo_utils_NameServer_Object2__;

/* __ParamsPtr */
#ifdef ti_sdo_utils_NameServer___VERS
    #define ti_sdo_utils_NameServer___ParamsPtr xdc_UChar*
#else
    #define ti_sdo_utils_NameServer___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sdo.utils.NameServerRemoteNull INTERNALS ========
 */

/* Module__ */
typedef struct ti_sdo_utils_NameServerRemoteNull_Module__ {
    xdc_runtime_Types_Link link;
} ti_sdo_utils_NameServerRemoteNull_Module__;

/* Module__root__V */
extern ti_sdo_utils_NameServerRemoteNull_Module__ ti_sdo_utils_NameServerRemoteNull_Module__root__V;

/* Object__ */
typedef struct ti_sdo_utils_NameServerRemoteNull_Object__ {
    const ti_sdo_utils_NameServerRemoteNull_Fxns__* __fxns;
} ti_sdo_utils_NameServerRemoteNull_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sdo_utils_NameServerRemoteNull_Object__ obj;
} ti_sdo_utils_NameServerRemoteNull_Object2__;

/* __ParamsPtr */
#ifdef ti_sdo_utils_NameServerRemoteNull___VERS
    #define ti_sdo_utils_NameServerRemoteNull___ParamsPtr xdc_UChar*
#else
    #define ti_sdo_utils_NameServerRemoteNull___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sdo.utils.NameServer_SetupProxy INTERNALS ========
 */

/* Module__ */
typedef struct ti_sdo_utils_NameServer_SetupProxy_Module__ {
    xdc_runtime_Types_Link link;
} ti_sdo_utils_NameServer_SetupProxy_Module__;

/* Module__root__V */
extern ti_sdo_utils_NameServer_SetupProxy_Module__ ti_sdo_utils_NameServer_SetupProxy_Module__root__V;

/* <-- ti_sdo_utils_NameServerRemoteNull_Object */

/* Object */
typedef ti_sdo_utils_NameServerRemoteNull_Object__ ti_sdo_utils_NameServer_SetupProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sdo_utils_NameServer_SetupProxy_Object__ obj;
} ti_sdo_utils_NameServer_SetupProxy_Object2__;

/* __ParamsPtr */
#ifdef ti_sdo_utils_NameServer_SetupProxy___VERS
    #define ti_sdo_utils_NameServer_SetupProxy___ParamsPtr xdc_UChar*
#else
    #define ti_sdo_utils_NameServer_SetupProxy___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.BIOS INTERNALS ========
 */


/*
 * ======== ti.sysbios.BIOS_RtsGateProxy INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_BIOS_RtsGateProxy_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_BIOS_RtsGateProxy_Module__;

/* Module__root__V */
extern ti_sysbios_BIOS_RtsGateProxy_Module__ ti_sysbios_BIOS_RtsGateProxy_Module__root__V;

/* @@@ ti_sysbios_knl_Queue_Object__ */
typedef struct ti_sysbios_knl_Queue_Object__ {
    ti_sysbios_knl_Queue_Elem elem;
} ti_sysbios_knl_Queue_Object__;

/* @@@ ti_sysbios_knl_Queue_Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Queue_Object__ obj;
} ti_sysbios_knl_Queue_Object2__;

/* @@@ ti_sysbios_knl_Semaphore_Object__ */
typedef struct ti_sysbios_knl_Semaphore_Object__ {
    ti_sysbios_knl_Event_Handle event;
    xdc_UInt eventId;
    ti_sysbios_knl_Semaphore_Mode mode;
    volatile xdc_UInt16 count;
    ti_sysbios_knl_Queue_Object__ Object_field_pendQ;
} ti_sysbios_knl_Semaphore_Object__;

/* @@@ ti_sysbios_knl_Semaphore_Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Semaphore_Object__ obj;
} ti_sysbios_knl_Semaphore_Object2__;

/* Object__ */
typedef struct ti_sysbios_gates_GateMutex_Object__ {
    const ti_sysbios_gates_GateMutex_Fxns__* __fxns;
    ti_sysbios_knl_Task_Handle owner;
    ti_sysbios_knl_Semaphore_Object__ Object_field_sem;
} ti_sysbios_gates_GateMutex_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_gates_GateMutex_Object__ obj;
} ti_sysbios_gates_GateMutex_Object2__;

/* Object */
typedef ti_sysbios_gates_GateMutex_Object__ ti_sysbios_BIOS_RtsGateProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_BIOS_RtsGateProxy_Object__ obj;
} ti_sysbios_BIOS_RtsGateProxy_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_BIOS_RtsGateProxy___VERS
    #define ti_sysbios_BIOS_RtsGateProxy___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_BIOS_RtsGateProxy___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.family.arm.HwiCommon INTERNALS ========
 */


/*
 * ======== ti.sysbios.family.arm.IntrinsicsSupport INTERNALS ========
 */


/*
 * ======== ti.sysbios.family.arm.TaskSupport INTERNALS ========
 */


/*
 * ======== ti.sysbios.family.arm.arm9.Cache INTERNALS ========
 */


/*
 * ======== ti.sysbios.family.arm.arm9.Mmu INTERNALS ========
 */


/*
 * ======== ti.sysbios.family.arm.dm6446.Hwi INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_family_arm_dm6446_Hwi_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_family_arm_dm6446_Hwi_Module__;

/* Module__root__V */
extern ti_sysbios_family_arm_dm6446_Hwi_Module__ ti_sysbios_family_arm_dm6446_Hwi_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_family_arm_dm6446_Hwi_Object__ {
    const ti_sysbios_family_arm_dm6446_Hwi_Fxns__* __fxns;
    xdc_UInt priority;
    xdc_Bits32 disableMask0;
    xdc_Bits32 disableMask1;
    xdc_Bits32 restoreMask0;
    xdc_Bits32 restoreMask1;
    xdc_UArg arg;
    ti_sysbios_family_arm_dm6446_Hwi_FuncPtr fxn;
    xdc_Int intNum;
    ti_sysbios_family_arm_dm6446_Hwi_Irp irp;
    __TA_ti_sysbios_family_arm_dm6446_Hwi_Instance_State__hookEnv hookEnv;
} ti_sysbios_family_arm_dm6446_Hwi_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_family_arm_dm6446_Hwi_Object__ obj;
} ti_sysbios_family_arm_dm6446_Hwi_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_family_arm_dm6446_Hwi___VERS
    #define ti_sysbios_family_arm_dm6446_Hwi___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_family_arm_dm6446_Hwi___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.family.arm.dm6446.TimerSupport INTERNALS ========
 */


/*
 * ======== ti.sysbios.family.arm.exc.Exception INTERNALS ========
 */


/*
 * ======== ti.sysbios.gates.GateHwi INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_gates_GateHwi_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_gates_GateHwi_Module__;

/* Module__root__V */
extern ti_sysbios_gates_GateHwi_Module__ ti_sysbios_gates_GateHwi_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_gates_GateHwi_Object__ {
    const ti_sysbios_gates_GateHwi_Fxns__* __fxns;
} ti_sysbios_gates_GateHwi_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_gates_GateHwi_Object__ obj;
} ti_sysbios_gates_GateHwi_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_gates_GateHwi___VERS
    #define ti_sysbios_gates_GateHwi___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_gates_GateHwi___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.gates.GateMutex INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_gates_GateMutex_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_gates_GateMutex_Module__;

/* Module__root__V */
extern ti_sysbios_gates_GateMutex_Module__ ti_sysbios_gates_GateMutex_Module__root__V;

/* <-- ti_sysbios_gates_GateMutex_Object */

/* __ParamsPtr */
#ifdef ti_sysbios_gates_GateMutex___VERS
    #define ti_sysbios_gates_GateMutex___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_gates_GateMutex___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.gates.GateSwi INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_gates_GateSwi_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_gates_GateSwi_Module__;

/* Module__root__V */
extern ti_sysbios_gates_GateSwi_Module__ ti_sysbios_gates_GateSwi_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_gates_GateSwi_Object__ {
    const ti_sysbios_gates_GateSwi_Fxns__* __fxns;
} ti_sysbios_gates_GateSwi_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_gates_GateSwi_Object__ obj;
} ti_sysbios_gates_GateSwi_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_gates_GateSwi___VERS
    #define ti_sysbios_gates_GateSwi___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_gates_GateSwi___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.hal.Cache INTERNALS ========
 */


/*
 * ======== ti.sysbios.hal.Cache_CacheProxy INTERNALS ========
 */


/*
 * ======== ti.sysbios.hal.Hwi INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_hal_Hwi_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_hal_Hwi_Module__;

/* Module__root__V */
extern ti_sysbios_hal_Hwi_Module__ ti_sysbios_hal_Hwi_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_hal_Hwi_Object__ {
    const ti_sysbios_hal_Hwi_Fxns__* __fxns;
    ti_sysbios_hal_Hwi_HwiProxy_Handle pi;
} ti_sysbios_hal_Hwi_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_hal_Hwi_Object__ obj;
} ti_sysbios_hal_Hwi_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_hal_Hwi___VERS
    #define ti_sysbios_hal_Hwi___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_hal_Hwi___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.hal.Hwi_HwiProxy INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_hal_Hwi_HwiProxy_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_hal_Hwi_HwiProxy_Module__;

/* Module__root__V */
extern ti_sysbios_hal_Hwi_HwiProxy_Module__ ti_sysbios_hal_Hwi_HwiProxy_Module__root__V;

/* <-- ti_sysbios_family_arm_dm6446_Hwi_Object */

/* Object */
typedef ti_sysbios_family_arm_dm6446_Hwi_Object__ ti_sysbios_hal_Hwi_HwiProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_hal_Hwi_HwiProxy_Object__ obj;
} ti_sysbios_hal_Hwi_HwiProxy_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_hal_Hwi_HwiProxy___VERS
    #define ti_sysbios_hal_Hwi_HwiProxy___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_hal_Hwi_HwiProxy___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.hal.Timer INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_hal_Timer_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_hal_Timer_Module__;

/* Module__root__V */
extern ti_sysbios_hal_Timer_Module__ ti_sysbios_hal_Timer_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_hal_Timer_Object__ {
    const ti_sysbios_hal_Timer_Fxns__* __fxns;
    ti_sysbios_hal_Timer_TimerProxy_Handle pi;
} ti_sysbios_hal_Timer_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_hal_Timer_Object__ obj;
} ti_sysbios_hal_Timer_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_hal_Timer___VERS
    #define ti_sysbios_hal_Timer___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_hal_Timer___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.hal.Timer_TimerProxy INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_hal_Timer_TimerProxy_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_hal_Timer_TimerProxy_Module__;

/* Module__root__V */
extern ti_sysbios_hal_Timer_TimerProxy_Module__ ti_sysbios_hal_Timer_TimerProxy_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_timers_timer64_Timer_Object__ {
    const ti_sysbios_timers_timer64_Timer_Fxns__* __fxns;
    xdc_Bool staticInst;
    xdc_Int id;
    ti_sysbios_timers_timer64_Timer_Half half;
    xdc_UInt tcrInit;
    xdc_UInt emumgtInit;
    xdc_UInt gpioIntEn;
    xdc_UInt gpioDatDir;
    ti_sysbios_interfaces_ITimer_RunMode runMode;
    ti_sysbios_interfaces_ITimer_StartMode startMode;
    xdc_UInt period;
    ti_sysbios_interfaces_ITimer_PeriodType periodType;
    xdc_UInt prescalar;
    xdc_UInt intNum;
    xdc_UArg arg;
    ti_sysbios_hal_Hwi_FuncPtr tickFxn;
    xdc_runtime_Types_FreqHz extFreq;
    ti_sysbios_hal_Hwi_Handle hwi;
} ti_sysbios_timers_timer64_Timer_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_timers_timer64_Timer_Object__ obj;
} ti_sysbios_timers_timer64_Timer_Object2__;

/* Object */
typedef ti_sysbios_timers_timer64_Timer_Object__ ti_sysbios_hal_Timer_TimerProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_hal_Timer_TimerProxy_Object__ obj;
} ti_sysbios_hal_Timer_TimerProxy_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_hal_Timer_TimerProxy___VERS
    #define ti_sysbios_hal_Timer_TimerProxy___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_hal_Timer_TimerProxy___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.heaps.HeapMem INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_heaps_HeapMem_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_heaps_HeapMem_Module__;

/* Module__root__V */
extern ti_sysbios_heaps_HeapMem_Module__ ti_sysbios_heaps_HeapMem_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_heaps_HeapMem_Object__ {
    const ti_sysbios_heaps_HeapMem_Fxns__* __fxns;
    xdc_runtime_Memory_Size align;
    __TA_ti_sysbios_heaps_HeapMem_Instance_State__buf buf;
    ti_sysbios_heaps_HeapMem_Header head;
} ti_sysbios_heaps_HeapMem_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_heaps_HeapMem_Object__ obj;
} ti_sysbios_heaps_HeapMem_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_heaps_HeapMem___VERS
    #define ti_sysbios_heaps_HeapMem___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_heaps_HeapMem___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.heaps.HeapMem_Module_GateProxy INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__;

/* Module__root__V */
extern ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__ ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__root__V;

/* <-- ti_sysbios_gates_GateMutex_Object */

/* Object */
typedef ti_sysbios_gates_GateMutex_Object__ ti_sysbios_heaps_HeapMem_Module_GateProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_heaps_HeapMem_Module_GateProxy_Object__ obj;
} ti_sysbios_heaps_HeapMem_Module_GateProxy_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_heaps_HeapMem_Module_GateProxy___VERS
    #define ti_sysbios_heaps_HeapMem_Module_GateProxy___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_heaps_HeapMem_Module_GateProxy___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.knl.Clock INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Clock_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_knl_Clock_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Clock_Module__ ti_sysbios_knl_Clock_Module__root__V;

/* <-- ti_sysbios_knl_Queue_Object */

/* Object__ */
typedef struct ti_sysbios_knl_Clock_Object__ {
    ti_sysbios_knl_Queue_Elem elem;
    xdc_UInt32 timeout;
    xdc_UInt32 currTimeout;
    xdc_UInt32 period;
    volatile xdc_Bool active;
    ti_sysbios_knl_Clock_FuncPtr fxn;
    xdc_UArg arg;
} ti_sysbios_knl_Clock_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Clock_Object__ obj;
} ti_sysbios_knl_Clock_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_knl_Clock___VERS
    #define ti_sysbios_knl_Clock___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_knl_Clock___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.knl.Idle INTERNALS ========
 */


/*
 * ======== ti.sysbios.knl.Intrinsics INTERNALS ========
 */


/*
 * ======== ti.sysbios.knl.Intrinsics_SupportProxy INTERNALS ========
 */


/*
 * ======== ti.sysbios.knl.Queue INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Queue_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_knl_Queue_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Queue_Module__ ti_sysbios_knl_Queue_Module__root__V;

/* <-- ti_sysbios_knl_Queue_Object */

/* __ParamsPtr */
#ifdef ti_sysbios_knl_Queue___VERS
    #define ti_sysbios_knl_Queue___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_knl_Queue___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.knl.Semaphore INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Semaphore_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_knl_Semaphore_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Semaphore_Module__ ti_sysbios_knl_Semaphore_Module__root__V;

/* <-- ti_sysbios_knl_Semaphore_Object */

/* __ParamsPtr */
#ifdef ti_sysbios_knl_Semaphore___VERS
    #define ti_sysbios_knl_Semaphore___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_knl_Semaphore___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.knl.Swi INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Swi_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_knl_Swi_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Swi_Module__ ti_sysbios_knl_Swi_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_knl_Swi_Object__ {
    ti_sysbios_knl_Queue_Elem qElem;
    ti_sysbios_knl_Swi_FuncPtr fxn;
    xdc_UArg arg0;
    xdc_UArg arg1;
    xdc_UInt priority;
    xdc_UInt mask;
    xdc_Bool posted;
    xdc_UInt initTrigger;
    xdc_UInt trigger;
    ti_sysbios_knl_Queue_Handle readyQ;
    __TA_ti_sysbios_knl_Swi_Instance_State__hookEnv hookEnv;
} ti_sysbios_knl_Swi_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Swi_Object__ obj;
} ti_sysbios_knl_Swi_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_knl_Swi___VERS
    #define ti_sysbios_knl_Swi___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_knl_Swi___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.knl.Task INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Task_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_knl_Task_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Task_Module__ ti_sysbios_knl_Task_Module__root__V;

/* <-- ti_sysbios_knl_Queue_Object */

/* Object__ */
typedef struct ti_sysbios_knl_Task_Object__ {
    ti_sysbios_knl_Queue_Elem qElem;
    volatile xdc_Int priority;
    xdc_UInt mask;
    xdc_Ptr context;
    ti_sysbios_knl_Task_Mode mode;
    ti_sysbios_knl_Task_PendElem* pendElem;
    xdc_SizeT stackSize;
    __TA_ti_sysbios_knl_Task_Instance_State__stack stack;
    xdc_runtime_IHeap_Handle stackHeap;
    ti_sysbios_knl_Task_FuncPtr fxn;
    xdc_UArg arg0;
    xdc_UArg arg1;
    xdc_Ptr env;
    __TA_ti_sysbios_knl_Task_Instance_State__hookEnv hookEnv;
    xdc_Bool vitalTaskFlag;
    ti_sysbios_knl_Queue_Handle readyQ;
} ti_sysbios_knl_Task_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Task_Object__ obj;
} ti_sysbios_knl_Task_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_knl_Task___VERS
    #define ti_sysbios_knl_Task___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_knl_Task___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.knl.Task_SupportProxy INTERNALS ========
 */


/*
 * ======== ti.sysbios.timers.timer64.Timer INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_timers_timer64_Timer_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_timers_timer64_Timer_Module__;

/* Module__root__V */
extern ti_sysbios_timers_timer64_Timer_Module__ ti_sysbios_timers_timer64_Timer_Module__root__V;

/* <-- ti_sysbios_timers_timer64_Timer_Object */

/* __ParamsPtr */
#ifdef ti_sysbios_timers_timer64_Timer___VERS
    #define ti_sysbios_timers_timer64_Timer___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_timers_timer64_Timer___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.timers.timer64.Timer_TimerSupportProxy INTERNALS ========
 */


/*
 * ======== ti.sysbios.xdcruntime.SemThreadSupport INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_xdcruntime_SemThreadSupport_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_xdcruntime_SemThreadSupport_Module__;

/* Module__root__V */
extern ti_sysbios_xdcruntime_SemThreadSupport_Module__ ti_sysbios_xdcruntime_SemThreadSupport_Module__root__V;

/* <-- ti_sysbios_knl_Semaphore_Object */

/* Object__ */
typedef struct ti_sysbios_xdcruntime_SemThreadSupport_Object__ {
    const ti_sysbios_xdcruntime_SemThreadSupport_Fxns__* __fxns;
    ti_sysbios_knl_Semaphore_Object__ Object_field_sem;
} ti_sysbios_xdcruntime_SemThreadSupport_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_xdcruntime_SemThreadSupport_Object__ obj;
} ti_sysbios_xdcruntime_SemThreadSupport_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_xdcruntime_SemThreadSupport___VERS
    #define ti_sysbios_xdcruntime_SemThreadSupport___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_xdcruntime_SemThreadSupport___ParamsPtr xdc_Ptr
#endif


/*
 * ======== xdc.runtime.Assert INTERNALS ========
 */


/*
 * ======== xdc.runtime.Core INTERNALS ========
 */


/*
 * ======== xdc.runtime.Defaults INTERNALS ========
 */


/*
 * ======== xdc.runtime.Diags INTERNALS ========
 */


/*
 * ======== xdc.runtime.Error INTERNALS ========
 */


/*
 * ======== xdc.runtime.Gate INTERNALS ========
 */


/*
 * ======== xdc.runtime.Log INTERNALS ========
 */


/*
 * ======== xdc.runtime.Main INTERNALS ========
 */


/*
 * ======== xdc.runtime.Main_Module_GateProxy INTERNALS ========
 */

/* Module__ */
typedef struct xdc_runtime_Main_Module_GateProxy_Module__ {
    xdc_runtime_Types_Link link;
} xdc_runtime_Main_Module_GateProxy_Module__;

/* Module__root__V */
extern xdc_runtime_Main_Module_GateProxy_Module__ xdc_runtime_Main_Module_GateProxy_Module__root__V;

/* <-- ti_sysbios_gates_GateHwi_Object */

/* Object */
typedef ti_sysbios_gates_GateHwi_Object__ xdc_runtime_Main_Module_GateProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    xdc_runtime_Main_Module_GateProxy_Object__ obj;
} xdc_runtime_Main_Module_GateProxy_Object2__;

/* __ParamsPtr */
#ifdef xdc_runtime_Main_Module_GateProxy___VERS
    #define xdc_runtime_Main_Module_GateProxy___ParamsPtr xdc_UChar*
#else
    #define xdc_runtime_Main_Module_GateProxy___ParamsPtr xdc_Ptr
#endif


/*
 * ======== xdc.runtime.Memory INTERNALS ========
 */


/*
 * ======== xdc.runtime.Memory_HeapProxy INTERNALS ========
 */

/* Module__ */
typedef struct xdc_runtime_Memory_HeapProxy_Module__ {
    xdc_runtime_Types_Link link;
} xdc_runtime_Memory_HeapProxy_Module__;

/* Module__root__V */
extern xdc_runtime_Memory_HeapProxy_Module__ xdc_runtime_Memory_HeapProxy_Module__root__V;

/* <-- ti_sysbios_heaps_HeapMem_Object */

/* Object */
typedef ti_sysbios_heaps_HeapMem_Object__ xdc_runtime_Memory_HeapProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    xdc_runtime_Memory_HeapProxy_Object__ obj;
} xdc_runtime_Memory_HeapProxy_Object2__;

/* __ParamsPtr */
#ifdef xdc_runtime_Memory_HeapProxy___VERS
    #define xdc_runtime_Memory_HeapProxy___ParamsPtr xdc_UChar*
#else
    #define xdc_runtime_Memory_HeapProxy___ParamsPtr xdc_Ptr
#endif


/*
 * ======== xdc.runtime.Registry INTERNALS ========
 */


/*
 * ======== xdc.runtime.Startup INTERNALS ========
 */


/*
 * ======== xdc.runtime.SysMin INTERNALS ========
 */


/*
 * ======== xdc.runtime.System INTERNALS ========
 */


/*
 * ======== xdc.runtime.System_Module_GateProxy INTERNALS ========
 */

/* Module__ */
typedef struct xdc_runtime_System_Module_GateProxy_Module__ {
    xdc_runtime_Types_Link link;
} xdc_runtime_System_Module_GateProxy_Module__;

/* Module__root__V */
extern xdc_runtime_System_Module_GateProxy_Module__ xdc_runtime_System_Module_GateProxy_Module__root__V;

/* <-- ti_sysbios_gates_GateHwi_Object */

/* Object */
typedef ti_sysbios_gates_GateHwi_Object__ xdc_runtime_System_Module_GateProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    xdc_runtime_System_Module_GateProxy_Object__ obj;
} xdc_runtime_System_Module_GateProxy_Object2__;

/* __ParamsPtr */
#ifdef xdc_runtime_System_Module_GateProxy___VERS
    #define xdc_runtime_System_Module_GateProxy___ParamsPtr xdc_UChar*
#else
    #define xdc_runtime_System_Module_GateProxy___ParamsPtr xdc_Ptr
#endif


/*
 * ======== xdc.runtime.System_SupportProxy INTERNALS ========
 */


/*
 * ======== xdc.runtime.Text INTERNALS ========
 */


/*
 * ======== xdc.runtime.knl.SemThread INTERNALS ========
 */

/* Module__ */
typedef struct xdc_runtime_knl_SemThread_Module__ {
    xdc_runtime_Types_Link link;
} xdc_runtime_knl_SemThread_Module__;

/* Module__root__V */
extern xdc_runtime_knl_SemThread_Module__ xdc_runtime_knl_SemThread_Module__root__V;

/* Object__ */
typedef struct xdc_runtime_knl_SemThread_Object__ {
    const xdc_runtime_knl_SemThread_Fxns__* __fxns;
    xdc_runtime_knl_SemThread_Proxy_Handle proxyHandle;
} xdc_runtime_knl_SemThread_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    xdc_runtime_knl_SemThread_Object__ obj;
} xdc_runtime_knl_SemThread_Object2__;

/* __ParamsPtr */
#ifdef xdc_runtime_knl_SemThread___VERS
    #define xdc_runtime_knl_SemThread___ParamsPtr xdc_UChar*
#else
    #define xdc_runtime_knl_SemThread___ParamsPtr xdc_Ptr
#endif


/*
 * ======== xdc.runtime.knl.SemThread_Proxy INTERNALS ========
 */

/* Module__ */
typedef struct xdc_runtime_knl_SemThread_Proxy_Module__ {
    xdc_runtime_Types_Link link;
} xdc_runtime_knl_SemThread_Proxy_Module__;

/* Module__root__V */
extern xdc_runtime_knl_SemThread_Proxy_Module__ xdc_runtime_knl_SemThread_Proxy_Module__root__V;

/* <-- ti_sysbios_xdcruntime_SemThreadSupport_Object */

/* Object */
typedef ti_sysbios_xdcruntime_SemThreadSupport_Object__ xdc_runtime_knl_SemThread_Proxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    xdc_runtime_knl_SemThread_Proxy_Object__ obj;
} xdc_runtime_knl_SemThread_Proxy_Object2__;

/* __ParamsPtr */
#ifdef xdc_runtime_knl_SemThread_Proxy___VERS
    #define xdc_runtime_knl_SemThread_Proxy___ParamsPtr xdc_UChar*
#else
    #define xdc_runtime_knl_SemThread_Proxy___ParamsPtr xdc_Ptr
#endif


/*
 * ======== xdc.runtime.knl.Sync INTERNALS ========
 */


/*
 * ======== xdc.runtime.knl.SyncNull INTERNALS ========
 */

/* Module__ */
typedef struct xdc_runtime_knl_SyncNull_Module__ {
    xdc_runtime_Types_Link link;
} xdc_runtime_knl_SyncNull_Module__;

/* Module__root__V */
extern xdc_runtime_knl_SyncNull_Module__ xdc_runtime_knl_SyncNull_Module__root__V;

/* Object__ */
typedef struct xdc_runtime_knl_SyncNull_Object__ {
    const xdc_runtime_knl_SyncNull_Fxns__* __fxns;
} xdc_runtime_knl_SyncNull_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    xdc_runtime_knl_SyncNull_Object__ obj;
} xdc_runtime_knl_SyncNull_Object2__;

/* __ParamsPtr */
#ifdef xdc_runtime_knl_SyncNull___VERS
    #define xdc_runtime_knl_SyncNull___ParamsPtr xdc_UChar*
#else
    #define xdc_runtime_knl_SyncNull___ParamsPtr xdc_Ptr
#endif


/*
 * ======== xdc.runtime.knl.SyncSemThread INTERNALS ========
 */

/* Module__ */
typedef struct xdc_runtime_knl_SyncSemThread_Module__ {
    xdc_runtime_Types_Link link;
} xdc_runtime_knl_SyncSemThread_Module__;

/* Module__root__V */
extern xdc_runtime_knl_SyncSemThread_Module__ xdc_runtime_knl_SyncSemThread_Module__root__V;

/* Object__ */
typedef struct xdc_runtime_knl_SyncSemThread_Object__ {
    const xdc_runtime_knl_SyncSemThread_Fxns__* __fxns;
    xdc_runtime_knl_SemThread_Handle semThread;
} xdc_runtime_knl_SyncSemThread_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    xdc_runtime_knl_SyncSemThread_Object__ obj;
} xdc_runtime_knl_SyncSemThread_Object2__;

/* __ParamsPtr */
#ifdef xdc_runtime_knl_SyncSemThread___VERS
    #define xdc_runtime_knl_SyncSemThread___ParamsPtr xdc_UChar*
#else
    #define xdc_runtime_knl_SyncSemThread___ParamsPtr xdc_Ptr
#endif


/*
 * ======== xdc.runtime.knl.Sync_Proxy INTERNALS ========
 */

/* Module__ */
typedef struct xdc_runtime_knl_Sync_Proxy_Module__ {
    xdc_runtime_Types_Link link;
} xdc_runtime_knl_Sync_Proxy_Module__;

/* Module__root__V */
extern xdc_runtime_knl_Sync_Proxy_Module__ xdc_runtime_knl_Sync_Proxy_Module__root__V;

/* <-- xdc_runtime_knl_SyncNull_Object */

/* Object */
typedef xdc_runtime_knl_SyncNull_Object__ xdc_runtime_knl_Sync_Proxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    xdc_runtime_knl_Sync_Proxy_Object__ obj;
} xdc_runtime_knl_Sync_Proxy_Object2__;

/* __ParamsPtr */
#ifdef xdc_runtime_knl_Sync_Proxy___VERS
    #define xdc_runtime_knl_Sync_Proxy___ParamsPtr xdc_UChar*
#else
    #define xdc_runtime_knl_Sync_Proxy___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sdo.io.converters.DriverAdapter INHERITS ========
 */

__FAR__ const xdc_runtime_Types_Base xdc_runtime_IModule_Interface__BASE__C = {0};
__FAR__ const xdc_runtime_Types_Base ti_sdo_io_IConverter_Interface__BASE__C = {(void*)&xdc_runtime_IModule_Interface__BASE__C};


/*
 * ======== ti.sdo.io.drivers.Generator INHERITS ========
 */

__FAR__ const xdc_runtime_Types_Base ti_sdo_io_IDriver_Interface__BASE__C = {(void*)&xdc_runtime_IModule_Interface__BASE__C};


/*
 * ======== ti.sysbios.gates.GateHwi INHERITS ========
 */

__FAR__ const xdc_runtime_Types_Base xdc_runtime_IGateProvider_Interface__BASE__C = {(void*)&xdc_runtime_IModule_Interface__BASE__C};


/*
 * ======== ti.sysbios.gates.GateMutex INHERITS ========
 */



/*
 * ======== ti.sysbios.gates.GateSwi INHERITS ========
 */



/*
 * ======== ti.sysbios.heaps.HeapMem INHERITS ========
 */

__FAR__ const xdc_runtime_Types_Base xdc_runtime_IHeap_Interface__BASE__C = {(void*)&xdc_runtime_IModule_Interface__BASE__C};


/*
 * ======== xdc.runtime.SysMin INHERITS ========
 */

__FAR__ const xdc_runtime_Types_Base xdc_runtime_ISystemSupport_Interface__BASE__C = {(void*)&xdc_runtime_IModule_Interface__BASE__C};


/*
 * ======== xdc.runtime.knl.SemThread INHERITS ========
 */

__FAR__ const xdc_runtime_Types_Base xdc_runtime_knl_ISemaphore_Interface__BASE__C = {(void*)&xdc_runtime_IModule_Interface__BASE__C};


/*
 * ======== xdc.runtime.knl.SyncNull INHERITS ========
 */

__FAR__ const xdc_runtime_Types_Base xdc_runtime_knl_ISync_Interface__BASE__C = {(void*)&xdc_runtime_IModule_Interface__BASE__C};


/*
 * ======== xdc.runtime.knl.SyncSemThread INHERITS ========
 */



/*
 * ======== ti.sdo.io.converters.DriverAdapter VTABLE ========
 */

/* Module__FXNS__C */
const ti_sdo_io_converters_DriverAdapter_Fxns__ ti_sdo_io_converters_DriverAdapter_Module__FXNS__C = {
    (void*)&ti_sdo_io_IConverter_Interface__BASE__C, /* base__ */
    &ti_sdo_io_converters_DriverAdapter_Module__FXNS__C.__sfxns, /* __sysp */
    ti_sdo_io_converters_DriverAdapter_open__E,
    ti_sdo_io_converters_DriverAdapter_close__E,
    ti_sdo_io_converters_DriverAdapter_issue__E,
    ti_sdo_io_converters_DriverAdapter_reclaim__E,
    ti_sdo_io_converters_DriverAdapter_control__E,
    ti_sdo_io_converters_DriverAdapter_query__E,
    {
        NULL, /* __create */
        ti_sdo_io_converters_DriverAdapter_Object__delete__S,
        ti_sdo_io_converters_DriverAdapter_Handle__label__S,
        0x8048, /* __mid */
    } /* __sfxns */
};


/*
 * ======== ti.sdo.io.drivers.Generator VTABLE ========
 */

/* Module__FXNS__C */
const ti_sdo_io_drivers_Generator_Fxns__ ti_sdo_io_drivers_Generator_Module__FXNS__C = {
    (void*)&ti_sdo_io_IDriver_Interface__BASE__C, /* base__ */
    &ti_sdo_io_drivers_Generator_Module__FXNS__C.__sfxns, /* __sysp */
    ti_sdo_io_drivers_Generator_open__E,
    ti_sdo_io_drivers_Generator_close__E,
    ti_sdo_io_drivers_Generator_submit__E,
    ti_sdo_io_drivers_Generator_control__E,
    {
        NULL, /* __create */
        ti_sdo_io_drivers_Generator_Object__delete__S,
        ti_sdo_io_drivers_Generator_Handle__label__S,
        0x803c, /* __mid */
    } /* __sfxns */
};


/*
 * ======== ti.sysbios.gates.GateHwi VTABLE ========
 */

/* Module__FXNS__C */
const ti_sysbios_gates_GateHwi_Fxns__ ti_sysbios_gates_GateHwi_Module__FXNS__C = {
    (void*)&xdc_runtime_IGateProvider_Interface__BASE__C, /* base__ */
    &ti_sysbios_gates_GateHwi_Module__FXNS__C.__sfxns, /* __sysp */
    ti_sysbios_gates_GateHwi_query__E,
    ti_sysbios_gates_GateHwi_enter__E,
    ti_sysbios_gates_GateHwi_leave__E,
    {
        ti_sysbios_gates_GateHwi_Object__create__S,
        ti_sysbios_gates_GateHwi_Object__delete__S,
        ti_sysbios_gates_GateHwi_Handle__label__S,
        0x8029, /* __mid */
    } /* __sfxns */
};


/*
 * ======== ti.sysbios.gates.GateMutex VTABLE ========
 */

/* Module__FXNS__C */
const ti_sysbios_gates_GateMutex_Fxns__ ti_sysbios_gates_GateMutex_Module__FXNS__C = {
    (void*)&xdc_runtime_IGateProvider_Interface__BASE__C, /* base__ */
    &ti_sysbios_gates_GateMutex_Module__FXNS__C.__sfxns, /* __sysp */
    ti_sysbios_gates_GateMutex_query__E,
    ti_sysbios_gates_GateMutex_enter__E,
    ti_sysbios_gates_GateMutex_leave__E,
    {
        ti_sysbios_gates_GateMutex_Object__create__S,
        ti_sysbios_gates_GateMutex_Object__delete__S,
        ti_sysbios_gates_GateMutex_Handle__label__S,
        0x802b, /* __mid */
    } /* __sfxns */
};


/*
 * ======== ti.sysbios.gates.GateSwi VTABLE ========
 */

/* Module__FXNS__C */
const ti_sysbios_gates_GateSwi_Fxns__ ti_sysbios_gates_GateSwi_Module__FXNS__C = {
    (void*)&xdc_runtime_IGateProvider_Interface__BASE__C, /* base__ */
    &ti_sysbios_gates_GateSwi_Module__FXNS__C.__sfxns, /* __sysp */
    ti_sysbios_gates_GateSwi_query__E,
    ti_sysbios_gates_GateSwi_enter__E,
    ti_sysbios_gates_GateSwi_leave__E,
    {
        ti_sysbios_gates_GateSwi_Object__create__S,
        ti_sysbios_gates_GateSwi_Object__delete__S,
        ti_sysbios_gates_GateSwi_Handle__label__S,
        0x802a, /* __mid */
    } /* __sfxns */
};


/*
 * ======== ti.sysbios.heaps.HeapMem VTABLE ========
 */

/* Module__FXNS__C */
const ti_sysbios_heaps_HeapMem_Fxns__ ti_sysbios_heaps_HeapMem_Module__FXNS__C = {
    (void*)&xdc_runtime_IHeap_Interface__BASE__C, /* base__ */
    &ti_sysbios_heaps_HeapMem_Module__FXNS__C.__sfxns, /* __sysp */
    ti_sysbios_heaps_HeapMem_alloc__E,
    ti_sysbios_heaps_HeapMem_free__E,
    ti_sysbios_heaps_HeapMem_isBlocking__E,
    ti_sysbios_heaps_HeapMem_getStats__E,
    {
        ti_sysbios_heaps_HeapMem_Object__create__S,
        ti_sysbios_heaps_HeapMem_Object__delete__S,
        ti_sysbios_heaps_HeapMem_Handle__label__S,
        0x8027, /* __mid */
    } /* __sfxns */
};


/*
 * ======== xdc.runtime.SysMin VTABLE ========
 */

/* Module__FXNS__C */
const xdc_runtime_SysMin_Fxns__ xdc_runtime_SysMin_Module__FXNS__C = {
    (void*)&xdc_runtime_ISystemSupport_Interface__BASE__C, /* base__ */
    &xdc_runtime_SysMin_Module__FXNS__C.__sfxns, /* __sysp */
    xdc_runtime_SysMin_abort__E,
    xdc_runtime_SysMin_exit__E,
    xdc_runtime_SysMin_flush__E,
    xdc_runtime_SysMin_putch__E,
    xdc_runtime_SysMin_ready__E,
    {
        NULL, /* __create */
        NULL, /* __delete */
        NULL, /* __label */
        0x800e, /* __mid */
    } /* __sfxns */
};


/*
 * ======== xdc.runtime.knl.SemThread VTABLE ========
 */

/* Module__FXNS__C */
const xdc_runtime_knl_SemThread_Fxns__ xdc_runtime_knl_SemThread_Module__FXNS__C = {
    (void*)&xdc_runtime_knl_ISemaphore_Interface__BASE__C, /* base__ */
    &xdc_runtime_knl_SemThread_Module__FXNS__C.__sfxns, /* __sysp */
    xdc_runtime_knl_SemThread_pend__E,
    xdc_runtime_knl_SemThread_post__E,
    {
        xdc_runtime_knl_SemThread_Object__create__S,
        xdc_runtime_knl_SemThread_Object__delete__S,
        xdc_runtime_knl_SemThread_Handle__label__S,
        0x802e, /* __mid */
    } /* __sfxns */
};


/*
 * ======== xdc.runtime.knl.SyncNull VTABLE ========
 */

/* Module__FXNS__C */
const xdc_runtime_knl_SyncNull_Fxns__ xdc_runtime_knl_SyncNull_Module__FXNS__C = {
    (void*)&xdc_runtime_knl_ISync_Interface__BASE__C, /* base__ */
    &xdc_runtime_knl_SyncNull_Module__FXNS__C.__sfxns, /* __sysp */
    xdc_runtime_knl_SyncNull_query__E,
    xdc_runtime_knl_SyncNull_signal__E,
    xdc_runtime_knl_SyncNull_wait__E,
    {
        xdc_runtime_knl_SyncNull_Object__create__S,
        xdc_runtime_knl_SyncNull_Object__delete__S,
        xdc_runtime_knl_SyncNull_Handle__label__S,
        0x802f, /* __mid */
    } /* __sfxns */
};


/*
 * ======== xdc.runtime.knl.SyncSemThread VTABLE ========
 */

/* Module__FXNS__C */
const xdc_runtime_knl_SyncSemThread_Fxns__ xdc_runtime_knl_SyncSemThread_Module__FXNS__C = {
    (void*)&xdc_runtime_knl_ISync_Interface__BASE__C, /* base__ */
    &xdc_runtime_knl_SyncSemThread_Module__FXNS__C.__sfxns, /* __sysp */
    xdc_runtime_knl_SyncSemThread_query__E,
    xdc_runtime_knl_SyncSemThread_signal__E,
    xdc_runtime_knl_SyncSemThread_wait__E,
    {
        xdc_runtime_knl_SyncSemThread_Object__create__S,
        xdc_runtime_knl_SyncSemThread_Object__delete__S,
        xdc_runtime_knl_SyncSemThread_Handle__label__S,
        0x8030, /* __mid */
    } /* __sfxns */
};


/*
 * ======== ti.sdo.io.DriverTable DECLARATIONS ========
 */

/* Module_State__ */
typedef struct ti_sdo_io_DriverTable_Module_State__ {
    ti_sdo_utils_NameServer_Handle drvTable;
} ti_sdo_io_DriverTable_Module_State__;

/* Module__state__V */
ti_sdo_io_DriverTable_Module_State__ ti_sdo_io_DriverTable_Module__state__V;


/*
 * ======== ti.sdo.io.DriverTypes DECLARATIONS ========
 */


/*
 * ======== ti.sdo.io.Stream DECLARATIONS ========
 */

/* Module_State__ */
typedef struct ti_sdo_io_Stream_Module_State__ {
    ti_sdo_utils_NameServer_Handle convTable;
} ti_sdo_io_Stream_Module_State__;

/* Module__state__V */
ti_sdo_io_Stream_Module_State__ ti_sdo_io_Stream_Module__state__V;


/*
 * ======== ti.sdo.io.converters.DriverAdapter DECLARATIONS ========
 */


/*
 * ======== ti.sdo.io.drivers.Generator DECLARATIONS ========
 */

/* Object__table__V */
ti_sdo_io_drivers_Generator_Object__ ti_sdo_io_drivers_Generator_Object__table__V[1];

/* Module_State__ */
typedef struct ti_sdo_io_drivers_Generator_Module_State__ {
    ti_sdo_utils_List_Object__ Object_field_chanList;
} ti_sdo_io_drivers_Generator_Module_State__;

/* Module__state__V */
ti_sdo_io_drivers_Generator_Module_State__ ti_sdo_io_drivers_Generator_Module__state__V;


/*
 * ======== ti.sdo.utils.List DECLARATIONS ========
 */

/* Object__table__V */
ti_sdo_utils_List_Object__ ti_sdo_utils_List_Object__table__V[2];


/*
 * ======== ti.sdo.utils.MultiProc DECLARATIONS ========
 */

/* Module_State__ */
typedef struct ti_sdo_utils_MultiProc_Module_State__ {
    xdc_UInt16 id;
    xdc_UInt16 baseIdOfCluster;
} ti_sdo_utils_MultiProc_Module_State__;

/* Module__state__V */
ti_sdo_utils_MultiProc_Module_State__ ti_sdo_utils_MultiProc_Module__state__V;

/* --> ti_sdo_utils_MultiProc_nameList__A */
const __T1_ti_sdo_utils_MultiProc_nameList ti_sdo_utils_MultiProc_nameList__A[1];


/*
 * ======== ti.sdo.utils.NameServer DECLARATIONS ========
 */

/* --> ti_sdo_utils_NameServer_Instance_State_0_table__A */
__T1_ti_sdo_utils_NameServer_Instance_State__table ti_sdo_utils_NameServer_Instance_State_0_table__A[1];

/* Object__table__V */
ti_sdo_utils_NameServer_Object__ ti_sdo_utils_NameServer_Object__table__V[2];

/* Module_State__ */
typedef struct ti_sdo_utils_NameServer_Module_State__ {
    __TA_ti_sdo_utils_NameServer_Module_State__nsRemoteHandle nsRemoteHandle;
    ti_sysbios_gates_GateSwi_Handle gate;
} ti_sdo_utils_NameServer_Module_State__;

/* --> ti_sdo_utils_NameServer_Module_State_0_nsRemoteHandle__A */
__T1_ti_sdo_utils_NameServer_Module_State__nsRemoteHandle ti_sdo_utils_NameServer_Module_State_0_nsRemoteHandle__A[1];

/* Module__state__V */
ti_sdo_utils_NameServer_Module_State__ ti_sdo_utils_NameServer_Module__state__V;


/*
 * ======== ti.sdo.utils.NameServerRemoteNull DECLARATIONS ========
 */


/*
 * ======== ti.sdo.utils.NameServer_SetupProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.BIOS DECLARATIONS ========
 */

/* Module_State__ */
typedef struct ti_sysbios_BIOS_Module_State__ {
    xdc_runtime_Types_FreqHz cpuFreq;
    xdc_UInt rtsGateCount;
    xdc_IArg rtsGateKey;
    ti_sysbios_BIOS_RtsGateProxy_Handle rtsGate;
    ti_sysbios_BIOS_ThreadType threadType;
    ti_sysbios_BIOS_StartFuncPtr startFunc;
} ti_sysbios_BIOS_Module_State__;

/* --> ti_sysbios_BIOS_startFunc */
extern xdc_Void ti_sysbios_BIOS_startFunc(xdc_Void);

/* Module__state__V */
ti_sysbios_BIOS_Module_State__ ti_sysbios_BIOS_Module__state__V;


/*
 * ======== ti.sysbios.BIOS_RtsGateProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.family.arm.HwiCommon DECLARATIONS ========
 */

/* Module_State__ */
typedef struct ti_sysbios_family_arm_HwiCommon_Module_State__ {
    xdc_Char* taskSP;
    xdc_Char* isrStack;
    xdc_Ptr isrStackBase;
    xdc_Ptr isrStackSize;
} ti_sysbios_family_arm_HwiCommon_Module_State__;

/* --> __TI_STACK_BASE */
extern void* __TI_STACK_BASE;

/* --> __TI_STACK_SIZE */
extern void* __TI_STACK_SIZE;

/* Module__state__V */
ti_sysbios_family_arm_HwiCommon_Module_State__ ti_sysbios_family_arm_HwiCommon_Module__state__V;


/*
 * ======== ti.sysbios.family.arm.IntrinsicsSupport DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.family.arm.TaskSupport DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.family.arm.arm9.Cache DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.family.arm.arm9.Mmu DECLARATIONS ========
 */

/* Module_State__ */
typedef struct ti_sysbios_family_arm_arm9_Mmu_Module_State__ {
    __TA_ti_sysbios_family_arm_arm9_Mmu_Module_State__tableBuf tableBuf;
} ti_sysbios_family_arm_arm9_Mmu_Module_State__;

/* --> ti_sysbios_family_arm_arm9_Mmu_Module_State_0_tableBuf__A */
__T1_ti_sysbios_family_arm_arm9_Mmu_Module_State__tableBuf ti_sysbios_family_arm_arm9_Mmu_Module_State_0_tableBuf__A[4096];
#ifdef __ti__sect
    #pragma DATA_SECTION(ti_sysbios_family_arm_arm9_Mmu_Module_State_0_tableBuf__A, "ti.sysbios.family.arm.arm9.mmuTableSection");
#endif
#ifdef __GNUC__
#if __GNUC__ >= 4
__T1_ti_sysbios_family_arm_arm9_Mmu_Module_State__tableBuf ti_sysbios_family_arm_arm9_Mmu_Module_State_0_tableBuf__A[4096] __attribute__ ((section("ti.sysbios.family.arm.arm9.mmuTableSection")));
#endif
#endif
#ifdef __ti__align
    #pragma DATA_ALIGN(ti_sysbios_family_arm_arm9_Mmu_Module_State_0_tableBuf__A, 16384);
#endif
#ifdef __GNUC__
#if __GNUC__ >= 4
__T1_ti_sysbios_family_arm_arm9_Mmu_Module_State__tableBuf ti_sysbios_family_arm_arm9_Mmu_Module_State_0_tableBuf__A[4096] __attribute__ ((aligned(16384)));
#endif
#endif

/* Module__state__V */
ti_sysbios_family_arm_arm9_Mmu_Module_State__ ti_sysbios_family_arm_arm9_Mmu_Module__state__V;


/*
 * ======== ti.sysbios.family.arm.dm6446.Hwi DECLARATIONS ========
 */

/* Object__table__V */
ti_sysbios_family_arm_dm6446_Hwi_Object__ ti_sysbios_family_arm_dm6446_Hwi_Object__table__V[1];

/* Module_State__ */
typedef struct ti_sysbios_family_arm_dm6446_Hwi_Module_State__ {
    xdc_Bits32 eint0Mask;
    xdc_Bits32 eint1Mask;
    xdc_UInt irp;
    xdc_Char* taskSP;
    xdc_Char* isrStack;
    xdc_Ptr isrStackBase;
    xdc_Ptr isrStackSize;
    __TA_ti_sysbios_family_arm_dm6446_Hwi_Module_State__fiqStack fiqStack;
    xdc_SizeT fiqStackSize;
    __TA_ti_sysbios_family_arm_dm6446_Hwi_Module_State__dispatchTable dispatchTable;
} ti_sysbios_family_arm_dm6446_Hwi_Module_State__;

/* --> __TI_STACK_BASE */
extern void* __TI_STACK_BASE;

/* --> __TI_STACK_SIZE */
extern void* __TI_STACK_SIZE;

/* --> ti_sysbios_family_arm_dm6446_Hwi_Module_State_0_fiqStack__A */
__T1_ti_sysbios_family_arm_dm6446_Hwi_Module_State__fiqStack ti_sysbios_family_arm_dm6446_Hwi_Module_State_0_fiqStack__A[1024];
#ifdef __ti__align
    #pragma DATA_ALIGN(ti_sysbios_family_arm_dm6446_Hwi_Module_State_0_fiqStack__A, 4);
#endif
#ifdef __GNUC__
#if __GNUC__ >= 4
__T1_ti_sysbios_family_arm_dm6446_Hwi_Module_State__fiqStack ti_sysbios_family_arm_dm6446_Hwi_Module_State_0_fiqStack__A[1024] __attribute__ ((aligned(4)));
#endif
#endif

/* Module__state__V */
ti_sysbios_family_arm_dm6446_Hwi_Module_State__ ti_sysbios_family_arm_dm6446_Hwi_Module__state__V;

/* --> ti_sysbios_knl_Swi_disable__E */
extern xdc_UInt ti_sysbios_knl_Swi_disable__E(xdc_Void);

/* --> ti_sysbios_knl_Swi_restoreHwi__E */
extern xdc_Void ti_sysbios_knl_Swi_restoreHwi__E(xdc_UInt);

/* --> ti_sysbios_knl_Task_disable__E */
extern xdc_UInt ti_sysbios_knl_Task_disable__E(xdc_Void);

/* --> ti_sysbios_knl_Task_restoreHwi__E */
extern xdc_Void ti_sysbios_knl_Task_restoreHwi__E(xdc_UInt);


/*
 * ======== ti.sysbios.family.arm.dm6446.TimerSupport DECLARATIONS ========
 */

/* Module_State__ */
typedef struct ti_sysbios_family_arm_dm6446_TimerSupport_Module_State__ {
    __TA_ti_sysbios_family_arm_dm6446_TimerSupport_Module_State__suspSrc suspSrc;
} ti_sysbios_family_arm_dm6446_TimerSupport_Module_State__;

/* --> ti_sysbios_family_arm_dm6446_TimerSupport_Module_State_0_suspSrc__A */
__T1_ti_sysbios_family_arm_dm6446_TimerSupport_Module_State__suspSrc ti_sysbios_family_arm_dm6446_TimerSupport_Module_State_0_suspSrc__A[2];

/* Module__state__V */
ti_sysbios_family_arm_dm6446_TimerSupport_Module_State__ ti_sysbios_family_arm_dm6446_TimerSupport_Module__state__V;

/* --> ti_sysbios_family_arm_dm6446_TimerSupport_timer__A */
const __T1_ti_sysbios_family_arm_dm6446_TimerSupport_timer ti_sysbios_family_arm_dm6446_TimerSupport_timer__A[2];


/*
 * ======== ti.sysbios.family.arm.exc.Exception DECLARATIONS ========
 */

/* Module_State__ */
typedef struct ti_sysbios_family_arm_exc_Exception_Module_State__ {
    xdc_Bool excActive;
    ti_sysbios_family_arm_exc_Exception_ExcContext* excContext;
    xdc_Ptr excStackBuffer;
    __TA_ti_sysbios_family_arm_exc_Exception_Module_State__excStack excStack;
    xdc_SizeT excStackSize;
} ti_sysbios_family_arm_exc_Exception_Module_State__;

/* --> ti_sysbios_family_arm_exc_Exception_Module_State_0_excStack__A */
__T1_ti_sysbios_family_arm_exc_Exception_Module_State__excStack ti_sysbios_family_arm_exc_Exception_Module_State_0_excStack__A[128];
#ifdef __ti__align
    #pragma DATA_ALIGN(ti_sysbios_family_arm_exc_Exception_Module_State_0_excStack__A, 4);
#endif
#ifdef __GNUC__
#if __GNUC__ >= 4
__T1_ti_sysbios_family_arm_exc_Exception_Module_State__excStack ti_sysbios_family_arm_exc_Exception_Module_State_0_excStack__A[128] __attribute__ ((aligned(4)));
#endif
#endif

/* Module__state__V */
ti_sysbios_family_arm_exc_Exception_Module_State__ ti_sysbios_family_arm_exc_Exception_Module__state__V;


/*
 * ======== ti.sysbios.gates.GateHwi DECLARATIONS ========
 */

/* Object__table__V */
ti_sysbios_gates_GateHwi_Object__ ti_sysbios_gates_GateHwi_Object__table__V[1];


/*
 * ======== ti.sysbios.gates.GateMutex DECLARATIONS ========
 */

/* Object__table__V */
ti_sysbios_gates_GateMutex_Object__ ti_sysbios_gates_GateMutex_Object__table__V[2];


/*
 * ======== ti.sysbios.gates.GateSwi DECLARATIONS ========
 */

/* Object__table__V */
ti_sysbios_gates_GateSwi_Object__ ti_sysbios_gates_GateSwi_Object__table__V[1];


/*
 * ======== ti.sysbios.hal.Cache DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.hal.Cache_CacheProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.hal.Hwi DECLARATIONS ========
 */

/* Object__table__V */
ti_sysbios_hal_Hwi_Object__ ti_sysbios_hal_Hwi_Object__table__V[1];


/*
 * ======== ti.sysbios.hal.Hwi_HwiProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.hal.Timer DECLARATIONS ========
 */

/* Object__table__V */
ti_sysbios_hal_Timer_Object__ ti_sysbios_hal_Timer_Object__table__V[1];


/*
 * ======== ti.sysbios.hal.Timer_TimerProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.heaps.HeapMem DECLARATIONS ========
 */

/* --> ti_sysbios_heaps_HeapMem_Instance_State_0_buf__A */
__T1_ti_sysbios_heaps_HeapMem_Instance_State__buf ti_sysbios_heaps_HeapMem_Instance_State_0_buf__A[8192];
#ifdef __ti__sect
    #pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Instance_State_0_buf__A, "systemHeap");
#endif
#ifdef __GNUC__
#if __GNUC__ >= 4
__T1_ti_sysbios_heaps_HeapMem_Instance_State__buf ti_sysbios_heaps_HeapMem_Instance_State_0_buf__A[8192] __attribute__ ((section("systemHeap")));
#endif
#endif
#ifdef __ti__align
    #pragma DATA_ALIGN(ti_sysbios_heaps_HeapMem_Instance_State_0_buf__A, 8);
#endif
#ifdef __GNUC__
#if __GNUC__ >= 4
__T1_ti_sysbios_heaps_HeapMem_Instance_State__buf ti_sysbios_heaps_HeapMem_Instance_State_0_buf__A[8192] __attribute__ ((aligned(8)));
#endif
#endif

/* Object__table__V */
ti_sysbios_heaps_HeapMem_Object__ ti_sysbios_heaps_HeapMem_Object__table__V[1];


/*
 * ======== ti.sysbios.heaps.HeapMem_Module_GateProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.knl.Clock DECLARATIONS ========
 */

/* Module_State__ */
typedef struct ti_sysbios_knl_Clock_Module_State__ {
    volatile xdc_UInt32 ticks;
    xdc_UInt swiCount;
    ti_sysbios_hal_Timer_Handle timer;
    xdc_Void (*doTickFunc)(xdc_UArg);
    ti_sysbios_knl_Swi_Handle swi;
    xdc_UInt32 periodCounts;
    volatile xdc_UInt numTickSkip;
    xdc_UInt skipsWorkFunc;
    xdc_Bool inWorkFunc;
    ti_sysbios_knl_Queue_Object__ Object_field_clockQ;
} ti_sysbios_knl_Clock_Module_State__;

/* Module__state__V */
ti_sysbios_knl_Clock_Module_State__ ti_sysbios_knl_Clock_Module__state__V;


/*
 * ======== ti.sysbios.knl.Idle DECLARATIONS ========
 */

/* --> ti_sysbios_hal_Hwi_checkStack */
extern xdc_Void ti_sysbios_hal_Hwi_checkStack(xdc_Void);

/* --> ti_sysbios_knl_Idle_funcList__A */
const __T1_ti_sysbios_knl_Idle_funcList ti_sysbios_knl_Idle_funcList__A[1];


/*
 * ======== ti.sysbios.knl.Intrinsics DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.knl.Intrinsics_SupportProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.knl.Queue DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.knl.Semaphore DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.knl.Swi DECLARATIONS ========
 */

/* Object__table__V */
ti_sysbios_knl_Swi_Object__ ti_sysbios_knl_Swi_Object__table__V[1];

/* Module_State__ */
typedef struct ti_sysbios_knl_Swi_Module_State__ {
    xdc_Bool locked;
    xdc_UInt curSet;
    xdc_UInt curTrigger;
    ti_sysbios_knl_Swi_Handle curSwi;
    ti_sysbios_knl_Queue_Handle curQ;
    __TA_ti_sysbios_knl_Swi_Module_State__readyQ readyQ;
    __TA_ti_sysbios_knl_Swi_Module_State__constructedSwis constructedSwis;
} ti_sysbios_knl_Swi_Module_State__;

/* --> ti_sysbios_knl_Swi_Module_State_0_readyQ__A */
__T1_ti_sysbios_knl_Swi_Module_State__readyQ ti_sysbios_knl_Swi_Module_State_0_readyQ__A[16];

/* Module__state__V */
ti_sysbios_knl_Swi_Module_State__ ti_sysbios_knl_Swi_Module__state__V;

/* --> ti_sysbios_knl_Task_disable__E */
extern xdc_UInt ti_sysbios_knl_Task_disable__E(xdc_Void);

/* --> ti_sysbios_knl_Task_restore__E */
extern xdc_Void ti_sysbios_knl_Task_restore__E(xdc_UInt);


/*
 * ======== ti.sysbios.knl.Task DECLARATIONS ========
 */

/* --> ti_sysbios_knl_Task_Instance_State_0_stack__A */
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_0_stack__A[2048];
#ifdef __ti__sect
    #pragma DATA_SECTION(ti_sysbios_knl_Task_Instance_State_0_stack__A, ".bss:taskStackSection");
#endif
#ifdef __GNUC__
#if __GNUC__ >= 4
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_0_stack__A[2048] __attribute__ ((section(".bss:taskStackSection")));
#endif
#endif
#ifdef __ti__align
    #pragma DATA_ALIGN(ti_sysbios_knl_Task_Instance_State_0_stack__A, 8);
#endif
#ifdef __GNUC__
#if __GNUC__ >= 4
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_0_stack__A[2048] __attribute__ ((aligned(8)));
#endif
#endif

/* --> task0Fxn */
extern xdc_Void task0Fxn(xdc_UArg,xdc_UArg);

/* --> ti_sysbios_knl_Task_Instance_State_0_hookEnv__A */
__T1_ti_sysbios_knl_Task_Instance_State__hookEnv ti_sysbios_knl_Task_Instance_State_0_hookEnv__A[1];

/* --> ti_sysbios_knl_Task_Instance_State_1_stack__A */
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_1_stack__A[2048];
#ifdef __ti__sect
    #pragma DATA_SECTION(ti_sysbios_knl_Task_Instance_State_1_stack__A, ".bss:taskStackSection");
#endif
#ifdef __GNUC__
#if __GNUC__ >= 4
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_1_stack__A[2048] __attribute__ ((section(".bss:taskStackSection")));
#endif
#endif
#ifdef __ti__align
    #pragma DATA_ALIGN(ti_sysbios_knl_Task_Instance_State_1_stack__A, 8);
#endif
#ifdef __GNUC__
#if __GNUC__ >= 4
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_1_stack__A[2048] __attribute__ ((aligned(8)));
#endif
#endif

/* --> ti_sysbios_knl_Task_Instance_State_1_hookEnv__A */
__T1_ti_sysbios_knl_Task_Instance_State__hookEnv ti_sysbios_knl_Task_Instance_State_1_hookEnv__A[1];

/* Object__table__V */
ti_sysbios_knl_Task_Object__ ti_sysbios_knl_Task_Object__table__V[2];

/* Module_State__ */
typedef struct ti_sysbios_knl_Task_Module_State__ {
    xdc_Bool locked;
    volatile xdc_UInt curSet;
    xdc_Bool workFlag;
    xdc_UInt vitalTasks;
    ti_sysbios_knl_Task_Handle curTask;
    ti_sysbios_knl_Queue_Handle curQ;
    __TA_ti_sysbios_knl_Task_Module_State__readyQ readyQ;
    ti_sysbios_knl_Task_Handle idleTask;
    __TA_ti_sysbios_knl_Task_Module_State__constructedTasks constructedTasks;
    ti_sysbios_knl_Queue_Object__ Object_field_inactiveQ;
    ti_sysbios_knl_Queue_Object__ Object_field_terminatedQ;
} ti_sysbios_knl_Task_Module_State__;

/* --> ti_sysbios_knl_Task_Module_State_0_readyQ__A */
__T1_ti_sysbios_knl_Task_Module_State__readyQ ti_sysbios_knl_Task_Module_State_0_readyQ__A[16];

/* Module__state__V */
ti_sysbios_knl_Task_Module_State__ ti_sysbios_knl_Task_Module__state__V;

/* --> ti_sysbios_knl_Task_checkStacks */
extern xdc_Void ti_sysbios_knl_Task_checkStacks(ti_sysbios_knl_Task_Handle,ti_sysbios_knl_Task_Handle);

/* --> ti_sysbios_knl_Task_hooks__A */
const __T1_ti_sysbios_knl_Task_hooks ti_sysbios_knl_Task_hooks__A[1];


/*
 * ======== ti.sysbios.knl.Task_SupportProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.timers.timer64.Timer DECLARATIONS ========
 */

/* Object__table__V */
ti_sysbios_timers_timer64_Timer_Object__ ti_sysbios_timers_timer64_Timer_Object__table__V[1];

/* Module_State__ */
typedef struct ti_sysbios_timers_timer64_Timer_Module_State__ {
    xdc_Bits32 availMask;
    __TA_ti_sysbios_timers_timer64_Timer_Module_State__intFreqs intFreqs;
    __TA_ti_sysbios_timers_timer64_Timer_Module_State__gctrl gctrl;
    __TA_ti_sysbios_timers_timer64_Timer_Module_State__device device;
    __TA_ti_sysbios_timers_timer64_Timer_Module_State__handles handles;
} ti_sysbios_timers_timer64_Timer_Module_State__;

/* --> ti_sysbios_timers_timer64_Timer_Module_State_0_intFreqs__A */
__T1_ti_sysbios_timers_timer64_Timer_Module_State__intFreqs ti_sysbios_timers_timer64_Timer_Module_State_0_intFreqs__A[2];

/* --> ti_sysbios_timers_timer64_Timer_Module_State_0_gctrl__A */
__T1_ti_sysbios_timers_timer64_Timer_Module_State__gctrl ti_sysbios_timers_timer64_Timer_Module_State_0_gctrl__A[2];

/* --> ti_sysbios_timers_timer64_Timer_Module_State_0_device__A */
__T1_ti_sysbios_timers_timer64_Timer_Module_State__device ti_sysbios_timers_timer64_Timer_Module_State_0_device__A[4];

/* --> ti_sysbios_timers_timer64_Timer_Module_State_0_handles__A */
__T1_ti_sysbios_timers_timer64_Timer_Module_State__handles ti_sysbios_timers_timer64_Timer_Module_State_0_handles__A[4];

/* Module__state__V */
ti_sysbios_timers_timer64_Timer_Module_State__ ti_sysbios_timers_timer64_Timer_Module__state__V;

/* --> ti_sysbios_timers_timer64_Timer_timerSettings__A */
const __T1_ti_sysbios_timers_timer64_Timer_timerSettings ti_sysbios_timers_timer64_Timer_timerSettings__A[2];


/*
 * ======== ti.sysbios.timers.timer64.Timer_TimerSupportProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.xdcruntime.SemThreadSupport DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Assert DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Core DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Defaults DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Diags DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Error DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_Error_Module_State__ {
    xdc_UInt16 count;
} xdc_runtime_Error_Module_State__;

/* Module__state__V */
xdc_runtime_Error_Module_State__ xdc_runtime_Error_Module__state__V;


/*
 * ======== xdc.runtime.Gate DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Log DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Main DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Main_Module_GateProxy DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Memory DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_Memory_Module_State__ {
    xdc_SizeT maxDefaultTypeAlign;
} xdc_runtime_Memory_Module_State__;

/* Module__state__V */
xdc_runtime_Memory_Module_State__ xdc_runtime_Memory_Module__state__V;


/*
 * ======== xdc.runtime.Memory_HeapProxy DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Registry DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_Registry_Module_State__ {
    xdc_runtime_Registry_Desc* listHead;
    xdc_runtime_Types_ModuleId curId;
} xdc_runtime_Registry_Module_State__;

/* Module__state__V */
xdc_runtime_Registry_Module_State__ xdc_runtime_Registry_Module__state__V;


/*
 * ======== xdc.runtime.Startup DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_Startup_Module_State__ {
    xdc_Int* stateTab;
    xdc_Bool execFlag;
    xdc_Bool rtsDoneFlag;
} xdc_runtime_Startup_Module_State__;

/* Module__state__V */
xdc_runtime_Startup_Module_State__ xdc_runtime_Startup_Module__state__V;

/* --> ti_sysbios_hal_Hwi_initStack */
extern xdc_Void ti_sysbios_hal_Hwi_initStack(xdc_Void);

/* --> xdc_runtime_Startup_firstFxns__A */
const __T1_xdc_runtime_Startup_firstFxns xdc_runtime_Startup_firstFxns__A[3];

/* --> xdc_runtime_Startup_lastFxns__A */
const __T1_xdc_runtime_Startup_lastFxns xdc_runtime_Startup_lastFxns__A[1];

/* --> xdc_runtime_System_Module_startup__E */
extern xdc_Int xdc_runtime_System_Module_startup__E(xdc_Int);

/* --> xdc_runtime_SysMin_Module_startup__E */
extern xdc_Int xdc_runtime_SysMin_Module_startup__E(xdc_Int);

/* --> ti_sysbios_family_arm_HwiCommon_Module_startup__E */
extern xdc_Int ti_sysbios_family_arm_HwiCommon_Module_startup__E(xdc_Int);

/* --> ti_sysbios_hal_Hwi_Module_startup__E */
extern xdc_Int ti_sysbios_hal_Hwi_Module_startup__E(xdc_Int);

/* --> ti_sysbios_hal_Timer_Module_startup__E */
extern xdc_Int ti_sysbios_hal_Timer_Module_startup__E(xdc_Int);

/* --> ti_sysbios_knl_Clock_Module_startup__E */
extern xdc_Int ti_sysbios_knl_Clock_Module_startup__E(xdc_Int);

/* --> ti_sysbios_knl_Swi_Module_startup__E */
extern xdc_Int ti_sysbios_knl_Swi_Module_startup__E(xdc_Int);

/* --> ti_sysbios_knl_Task_Module_startup__E */
extern xdc_Int ti_sysbios_knl_Task_Module_startup__E(xdc_Int);

/* --> ti_sysbios_timers_timer64_Timer_Module_startup__E */
extern xdc_Int ti_sysbios_timers_timer64_Timer_Module_startup__E(xdc_Int);

/* --> ti_sdo_utils_NameServer_Module_startup__E */
extern xdc_Int ti_sdo_utils_NameServer_Module_startup__E(xdc_Int);

/* --> ti_sdo_io_Stream_Module_startup__E */
extern xdc_Int ti_sdo_io_Stream_Module_startup__E(xdc_Int);

/* --> ti_sysbios_family_arm_dm6446_Hwi_Module_startup__E */
extern xdc_Int ti_sysbios_family_arm_dm6446_Hwi_Module_startup__E(xdc_Int);

/* --> ti_sysbios_family_arm_exc_Exception_Module_startup__E */
extern xdc_Int ti_sysbios_family_arm_exc_Exception_Module_startup__E(xdc_Int);

/* --> ti_sysbios_family_arm_arm9_Mmu_Module_startup__E */
extern xdc_Int ti_sysbios_family_arm_arm9_Mmu_Module_startup__E(xdc_Int);

/* --> xdc_runtime_Startup_sfxnTab__A */
const __T1_xdc_runtime_Startup_sfxnTab xdc_runtime_Startup_sfxnTab__A[14];

/* --> xdc_runtime_Startup_sfxnRts__A */
const __T1_xdc_runtime_Startup_sfxnRts xdc_runtime_Startup_sfxnRts__A[14];


/*
 * ======== xdc.runtime.SysMin DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_SysMin_Module_State__ {
    __TA_xdc_runtime_SysMin_Module_State__outbuf outbuf;
    xdc_UInt outidx;
    xdc_Bool wrapped;
} xdc_runtime_SysMin_Module_State__;

/* --> xdc_runtime_SysMin_Module_State_0_outbuf__A */
__T1_xdc_runtime_SysMin_Module_State__outbuf xdc_runtime_SysMin_Module_State_0_outbuf__A[1024];

/* Module__state__V */
xdc_runtime_SysMin_Module_State__ xdc_runtime_SysMin_Module__state__V;

/* --> xdc_runtime_SysMin_output__I */
extern xdc_Void xdc_runtime_SysMin_output__I(xdc_Char*,xdc_UInt);


/*
 * ======== xdc.runtime.System DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_System_Module_State__ {
    __TA_xdc_runtime_System_Module_State__atexitHandlers atexitHandlers;
    xdc_Int numAtexitHandlers;
    xdc_Int exitStatus;
} xdc_runtime_System_Module_State__;

/* --> xdc_runtime_System_Module_State_0_atexitHandlers__A */
__T1_xdc_runtime_System_Module_State__atexitHandlers xdc_runtime_System_Module_State_0_atexitHandlers__A[8];

/* Module__state__V */
xdc_runtime_System_Module_State__ xdc_runtime_System_Module__state__V;

/* --> xdc_runtime_System_printfExtend__I */
extern xdc_Int xdc_runtime_System_printfExtend__I(xdc_Char**,xdc_Char**,xdc_VaList*,xdc_runtime_System_ParseData*);


/*
 * ======== xdc.runtime.System_Module_GateProxy DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.System_SupportProxy DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Text DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_Text_Module_State__ {
    xdc_Ptr charBase;
    xdc_Ptr nodeBase;
} xdc_runtime_Text_Module_State__;

/* Module__state__V */
xdc_runtime_Text_Module_State__ xdc_runtime_Text_Module__state__V;

/* --> xdc_runtime_Text_charTab__A */
const __T1_xdc_runtime_Text_charTab xdc_runtime_Text_charTab__A[5560];

/* --> xdc_runtime_Text_nodeTab__A */
const __T1_xdc_runtime_Text_nodeTab xdc_runtime_Text_nodeTab__A[73];


/*
 * ======== xdc.runtime.knl.SemThread DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.knl.SemThread_Proxy DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.knl.Sync DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.knl.SyncNull DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.knl.SyncSemThread DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.knl.Sync_Proxy DECLARATIONS ========
 */


/*
 * ======== OBJECT OFFSETS ========
 */

__FAR__ const xdc_SizeT ti_sdo_io_Stream_Instance_State_freeList__O = offsetof(ti_sdo_io_Stream_Object__, Object_field_freeList);


/*
 * ======== OBJECT OFFSETS ========
 */

__FAR__ const xdc_SizeT ti_sdo_io_converters_DriverAdapter_Instance_State_fromDriver__O = offsetof(ti_sdo_io_converters_DriverAdapter_Object__, Object_field_fromDriver);


/*
 * ======== OBJECT OFFSETS ========
 */

__FAR__ const xdc_SizeT ti_sdo_io_drivers_Generator_Module_State_chanList__O = offsetof(ti_sdo_io_drivers_Generator_Module_State__, Object_field_chanList);


/*
 * ======== OBJECT OFFSETS ========
 */

__FAR__ const xdc_SizeT ti_sdo_utils_NameServer_Instance_State_freeList__O = offsetof(ti_sdo_utils_NameServer_Object__, Object_field_freeList);
__FAR__ const xdc_SizeT ti_sdo_utils_NameServer_Instance_State_nameList__O = offsetof(ti_sdo_utils_NameServer_Object__, Object_field_nameList);


/*
 * ======== OBJECT OFFSETS ========
 */

__FAR__ const xdc_SizeT ti_sysbios_gates_GateMutex_Instance_State_sem__O = offsetof(ti_sysbios_gates_GateMutex_Object__, Object_field_sem);


/*
 * ======== OBJECT OFFSETS ========
 */

__FAR__ const xdc_SizeT ti_sysbios_knl_Clock_Module_State_clockQ__O = offsetof(ti_sysbios_knl_Clock_Module_State__, Object_field_clockQ);


/*
 * ======== OBJECT OFFSETS ========
 */

__FAR__ const xdc_SizeT ti_sysbios_knl_Semaphore_Instance_State_pendQ__O = offsetof(ti_sysbios_knl_Semaphore_Object__, Object_field_pendQ);


/*
 * ======== OBJECT OFFSETS ========
 */

__FAR__ const xdc_SizeT ti_sysbios_knl_Task_Module_State_inactiveQ__O = offsetof(ti_sysbios_knl_Task_Module_State__, Object_field_inactiveQ);
__FAR__ const xdc_SizeT ti_sysbios_knl_Task_Module_State_terminatedQ__O = offsetof(ti_sysbios_knl_Task_Module_State__, Object_field_terminatedQ);


/*
 * ======== OBJECT OFFSETS ========
 */

__FAR__ const xdc_SizeT ti_sysbios_xdcruntime_SemThreadSupport_Instance_State_sem__O = offsetof(ti_sysbios_xdcruntime_SemThreadSupport_Object__, Object_field_sem);


/*
 * ======== xdc.cfg.Program TEMPLATE ========
 */

/*
 *  ======== __ASM__ ========
 *  Define absolute path prefix for this executable's
 *  configuration generated files.
 */
xdc__META(__ASM__, "@(#)__ASM__ = /db/vtree/library/trees/ipc/ipc-h32/src/ti/sdo/io/examples/package/cfg/release/stream_pe9");

/*
 *  ======== __ISA__ ========
 *  Define the ISA of this executable.  This symbol is used by platform
 *  specific "exec" commands that support more than one ISA; e.g., gdb
 */
xdc__META(__ISA__, "@(#)__ISA__ = v5T");

/*
 *  ======== __PLAT__ ========
 *  Define the name of the platform that can run this executable.  This
 *  symbol is used by platform independent "exec" commands
 */
xdc__META(__PLAT__, "@(#)__PLAT__ = ti.sdo.ipc.examples.platforms.evmDM6446.arm");

/*
 *  ======== __TARG__ ========
 *  Define the name of the target used to build this executable.
 */
xdc__META(__TARG__, "@(#)__TARG__ = ti.targets.arm.elf.Arm9");

/*
 *  ======== __TRDR__ ========
 *  Define the name of the class that can read/parse this executable.
 */
xdc__META(__TRDR__, "@(#)__TRDR__ = ti.targets.omf.elf.Elf32");


/*
 * ======== xdc.runtime.Diags TEMPLATE ========
 */



/*
 * ======== xdc.runtime.Startup TEMPLATE ========
 */

/*
 *  ======== MODULE STARTUP DONE FUNCTIONS ========
 */
xdc_Bool xdc_runtime_System_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[0] < 0;
}
xdc_Bool xdc_runtime_SysMin_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[1] < 0;
}
xdc_Bool ti_sysbios_family_arm_HwiCommon_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[2] < 0;
}
xdc_Bool ti_sysbios_hal_Hwi_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[3] < 0;
}
xdc_Bool ti_sysbios_hal_Timer_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[4] < 0;
}
xdc_Bool ti_sysbios_knl_Clock_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[5] < 0;
}
xdc_Bool ti_sysbios_knl_Swi_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[6] < 0;
}
xdc_Bool ti_sysbios_knl_Task_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[7] < 0;
}
xdc_Bool ti_sysbios_timers_timer64_Timer_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[8] < 0;
}
xdc_Bool ti_sdo_utils_NameServer_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[9] < 0;
}
xdc_Bool ti_sdo_io_Stream_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[10] < 0;
}
xdc_Bool ti_sysbios_family_arm_dm6446_Hwi_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[11] < 0;
}
xdc_Bool ti_sysbios_family_arm_exc_Exception_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[12] < 0;
}
xdc_Bool ti_sysbios_family_arm_arm9_Mmu_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[13] < 0;
}

/* 
 * Startup_exec__I is an internal entry point called by target/platform
 * boot code. Boot code is not brought into a partial-link assembly. So,
 * without this pragma, whole program optimizers would otherwise optimize-out
 * this function.
 */
#ifdef __ti__
#pragma FUNC_EXT_CALLED(xdc_runtime_Startup_exec__I);
#endif

#ifdef __GNUC__
#if __GNUC__ >= 4
xdc_Void xdc_runtime_Startup_exec__I(void) __attribute__ ((externally_visible));
#endif
#endif

/*
 *  ======== xdc_runtime_Startup_exec__I ========
 *  Initialize all used modules that have startup functions
 */
xdc_Void xdc_runtime_Startup_exec__I(void)
{
    xdc_Int state[14];
    xdc_runtime_Startup_startModsFxn__C(state, 14);
}

/*
 * ======== xdc.runtime.Reset TEMPLATE ========
 */

/* 
 * Startup_reset__I is an internal entry point called by target/platform
 * boot code. Boot code is not brought into a partial-link assembly. So,
 * without this pragma, whole program optimizers would otherwise optimize-out
 * this function.
 */
#ifdef __ti__
#pragma FUNC_EXT_CALLED(xdc_runtime_Startup_reset__I);
#endif

#ifdef __GNUC__
#if __GNUC__ >= 4
xdc_Void xdc_runtime_Startup_reset__I(void) __attribute__ ((externally_visible));
#endif
#endif


/*
 *  ======== xdc_runtime_Startup_reset__I ========
 *  This function is called by bootstrap initialization code as early as
 *  possible in the startup process.  This function calls all functions in
 *  the Reset.fxns array _as well as_ Startup.resetFxn (if it's non-NULL)
 */
xdc_Void xdc_runtime_Startup_reset__I(void)
{
}

/*
 * ======== xdc.runtime.System TEMPLATE ========
 */


#include <xdc/std.h>
#include <limits.h>
#include <xdc/runtime/Types.h>
#include <xdc/runtime/Text.h>
#include <xdc/runtime/Assert.h>

/*
 *  ======== System_printfExtend__I ========
 *  This function processes optional extended formats of printf.
 *  
 *  It returns the number of characters added to the result.
 *
 *  Precision (maximum string length) is not supported for %$S.
 *
 *  Right-justified (which is default) minimum width is not supported
 *  for %$L, %$S, or %$F.
 */
Int xdc_runtime_System_printfExtend__I(Char **pbuf, Char **pfmt, 
    VaList *pva, xdc_runtime_System_ParseData *parse)
{
    Char    *fmt = *pfmt;
    Int     res;
    Char    c;
    Bool    found = FALSE;
    
    /* 
     * Create a local variable 'va' to ensure that the dereference of
     * pva only occurs once.
     */
    va_list va = *pva;
    
    res = 0;

    c = *fmt++;
    *pfmt = *pfmt + 1;

    
    if (c == '$') {
        c = *fmt++;
        *pfmt = *pfmt + 1;
        
        if (c == 'L') {
            xdc_runtime_Types_Label *lab = parse->aFlag ? 
                (xdc_runtime_Types_Label *)iargToPtr(va_arg(va, IArg)) :
                (xdc_runtime_Types_Label *)va_arg(va, void *);
            
            /* 
             * Call Text_putLab to write out the label, taking the precision 
             * into account.
             */
            res = xdc_runtime_Text_putLab(lab, pbuf, parse->precis);
            
            /*
             * Set the length to 0 to indicate to 'doPrint' that nothing should
             * be copied from parse.ptr.
             */
            parse->len = 0;
            
            /* Update the minimum width field. */
            parse->width -= res;
            
            found = TRUE;
        }
        
        if (c == 'F') {
            xdc_runtime_Types_Site site;
            
            /* Retrieve the file name string from the argument list */
            site.file = parse->aFlag ? (Char *) iargToPtr(va_arg(va, IArg)) :
                                       (Char *) va_arg(va, Char *);
            
            /* Retrieve the line number from the argument list. */
            site.line = parse->aFlag ? (Int) va_arg(va, IArg) : 
                                       (Int) va_arg(va, Int);
            
            /* 
             * Omit the 'mod' field, set it to 0.
             * '0' is a safe sentinel value - the IDs for named modules are 
             * 0x8000 and higher, and the IDs for unnamed modules go from 0x1
             * to 0x7fff.
             */
            site.mod = 0;
            
            /* 
             * Call putSite to format the file and line number.
             * If a precision was specified, it will be used as the maximum
             * string lengrth.
             */
            res = xdc_runtime_Text_putSite(&site, pbuf, parse->precis);
            
            /*
             * Set the length to 0 to indicate to 'doPrint' that nothing should
             * be copied from parse.ptr.
             */
            parse->len = 0;
       
            /* Update the minimum width field */
            parse->width -= res;
            
            found = TRUE;
        }
        
        if (c == 'S') {
            /* Retrieve the format string from the argument list */
            parse->ptr = parse->aFlag ? 
                (Char *) iargToPtr(va_arg(va, IArg)) :
                (Char *) va_arg(va, Char *);
            
            /* Update pva before passing it to doPrint. */
            *pva = va;
            
            /* Perform the recursive format. System_doPrint does not advance
             * the buffer pointer, so it has to be done explicitly.
             */
            res = xdc_runtime_System_doPrint__I(*pbuf, parse->ptr, pva, parse->aFlag);
            if (*pbuf) {
                *pbuf += res;
            }
            
            /* Update the temporary variable with any changes to *pva */
            va = *pva;
            
            /*
             * Set the length to 0 to indicate to 'doPrint' that nothing should
             * be copied from parse.ptr
             */
            parse->len = 0;

            /* Update the minimum width field */
            parse->width -= res;
            
            /* Indicate that we were able to interpret the specifier */
            found = TRUE;
        }
        
    }

    if (c == 'f') {
        /* support arguments _after_ optional float support */
        if (parse->aFlag) {
            (void)va_arg(va, IArg);
        }
        else {
            (void)va_arg(va, double);
        }
    }    

    if (found == FALSE) {
        /* other character (like %) copy to output */
        *(parse->ptr) = c;
        parse->len = 1;
    }

    /*
     * Before returning, we must update the value of pva. We use a label here
     * so that all return points will go through this update.
     * The 'goto end' is here to ensure that there is always a reference to the
     * label (to avoid the compiler complaining). 
     */
    goto end; 
end:
    *pva = va;
    return (res);
}

/*
 * ======== xdc.runtime.SysMin TEMPLATE ========
 */


#if defined(__ti__) || (defined(gnu_targets_STD_) && defined(xdc_target__os_undefined))
extern int HOSTwrite(int, const char *, unsigned);
#else
#include <stdio.h>
#endif

/*
 *  ======== SysMin_output__I ========
 *  HOSTWrite only writes a max of N chars at a time. The amount it writes
 *  is returned. This function loops until the entire buffer is written.
 *  Being a static function allows it to conditionally compile out.
 */
Void xdc_runtime_SysMin_output__I(Char *buf, UInt size)
{
#if defined(__ti__) || (defined(gnu_targets_STD_) && defined(xdc_target__os_undefined))
    Int printCount;
    
    while (size != 0) {
        printCount = HOSTwrite(1, buf, size);
        if ((printCount <= 0) || (printCount > size)) {
            break;  /* ensure we never get stuck in an infinite loop */
        }
        size -= printCount;
        buf = buf + printCount;
    }    
#else
    fwrite(buf, 1, size, stdout);
#endif
}

/*
 * ======== xdc.runtime.Text TEMPLATE ========
 */


/*
 *  ======== xdc_runtime_Text_visitRope__I ========
 *  This function is indirectly called within Text.c through
 *  the visitRopeFxn configuration parameter of xdc.runtime.Text.
 */
Void xdc_runtime_Text_visitRope__I(xdc_runtime_Text_RopeId rope,
    xdc_Fxn visFxn, xdc_Ptr visState)
{
    xdc_String stack[6];
    xdc_runtime_Text_visitRope2__I(rope, visFxn, visState, stack);
}


/*
 * ======== ti.sysbios.BIOS TEMPLATE ========
 */

Void ti_sysbios_BIOS_exitFunc__I(Int);

extern Void ti_sysbios_BIOS_registerRTSLock();

Void ti_sysbios_BIOS_startFunc__I()
{
    xdc_runtime_System_atexit(
	(xdc_runtime_System_AtexitHandler)ti_sysbios_BIOS_exitFunc__I);
    ti_sysbios_BIOS_registerRTSLock();
    ti_sysbios_hal_Hwi_startup();
    ti_sysbios_hal_Timer_startup();
    ti_sysbios_knl_Swi_startup();
    ti_sysbios_knl_Task_startup();
}

#if defined(__ti__)
#include <_lock.h>
#endif

Void ti_sysbios_BIOS_exitFunc__I(Int notused)
{
    ti_sysbios_knl_Swi_disable();
    ti_sysbios_knl_Task_disable();
    ti_sysbios_BIOS_setThreadType(ti_sysbios_BIOS_ThreadType_Main);

#if defined(__ti__)
    if ((&ti_sysbios_BIOS_Module__state__V)->rtsGate != NULL) {
	_register_lock(_nop);
	_register_unlock(_nop);
    }
#endif
}




#if defined(__ti__)

#pragma FUNC_EXT_CALLED(malloc);
#pragma FUNC_EXT_CALLED(memalign);
#pragma FUNC_EXT_CALLED(free);
#pragma FUNC_EXT_CALLED(calloc);
#pragma FUNC_EXT_CALLED(realloc);

#define ATTRIBUTE

#else

#define ATTRIBUTE __attribute__ ((used))

#endif

#include <xdc/std.h>

#include <xdc/runtime/Memory.h>
#include <xdc/runtime/Error.h>
#include <stdlib.h>
#include <string.h>

/* malloc header */
typedef struct Header {
    Ptr   actualBuf;
    UArg  size;
} Header;

/*
 *  ======== malloc ========
 */
Void ATTRIBUTE *malloc(SizeT size)
{
    Header *packet;
    xdc_runtime_Error_Block eb;

    xdc_runtime_Error_init(&eb);

    if (size == 0) {
	return (NULL);
    }

    packet = (Header *)xdc_runtime_Memory_alloc(NULL,
	(SizeT)(size + sizeof(Header)), 0, &eb);

    if (packet == NULL) {
	return (NULL);
    }

    packet->actualBuf = (Ptr)packet;
    packet->size = size + sizeof(Header);

    return (packet + 1);
}

/*
 *  ======== memalign ========
 *  mirrors the memalign() function from the TI run-time library
 */
Void ATTRIBUTE *memalign(SizeT alignment, SizeT size)
{
    Header                      *packet;
    Void                        *tmp;
    xdc_runtime_Error_Block     eb;

    xdc_runtime_Error_init(&eb);

    if (size == 0) {
	return (NULL);
    }

    /*
     * If alignment is not a power of two or is less than the minimum
     * alignment of malloc(), then simply return what malloc() returns.
     * (same as behaviour as RTS library's memalign())
     * Note: HeapMem's header is the same as this header after it is raised
     * to a power of 2.
     */
    if (alignment <= sizeof(Header) || (alignment & (alignment-1))) {
	return malloc(size);
    }

    /*
     * Allocate 'align + size' so that we have room for the 'packet'
     * and can return an aligned buffer.
     */
    tmp = xdc_runtime_Memory_alloc(NULL, alignment + size,
	(SizeT)alignment, &eb);

    if (tmp == NULL) {
	return (NULL);
    }

    packet = (Header *)((char *)tmp + alignment - sizeof(Header));

    packet->actualBuf = tmp;
    packet->size = size + sizeof(Header);

    return (packet + 1);
}

/*
 *  ======== calloc ========
 */
Void ATTRIBUTE *calloc(SizeT nmemb, SizeT size)
{
    SizeT       nbytes;
    Ptr         retval;

    nbytes = nmemb * size;

    retval = malloc(nbytes);
    if (retval != NULL) {
	(Void)memset(retval, (Int)'\0', nbytes);
    }

    return (retval);
}

/*
 *  ======== free ========
 */
Void ATTRIBUTE free(Void *ptr)
{
    Header      *packet;

    if (ptr != NULL) {
	packet = ((Header *)ptr) - 1;

	xdc_runtime_Memory_free(NULL, (Ptr)packet->actualBuf,
	    (packet->size + ((char*)packet - (char*)packet->actualBuf)));
    }
}

/*
 *  ======== realloc ========
 */
Void ATTRIBUTE *realloc(Void *ptr, SizeT size)
{
    Ptr         retval;
    Header      *packet;
    SizeT       oldSize;

    if (ptr == NULL) {
	retval = malloc(size);
    }
    else if (size == 0) {
	free(ptr);
	retval = NULL;
    }
    else {
	packet = (Header *)ptr - 1;
	retval = malloc(size);
	if (retval != NULL) {
	    oldSize = packet->size - sizeof(Header);
	    (Void)memcpy(retval, ptr, (size < oldSize) ? size : oldSize);
	    free(ptr);
	}
    }

    return (retval);
}


/*
 * ======== ti.sysbios.hal.Hwi TEMPLATE ========
 */

#ifdef __ti__
    #pragma FUNC_EXT_CALLED(ti_sysbios_hal_Hwi_HwiProxy_disable__E);
    #pragma FUNC_EXT_CALLED(ti_sysbios_hal_Hwi_HwiProxy_enable__E);
    #pragma FUNC_EXT_CALLED(ti_sysbios_hal_Hwi_HwiProxy_restore__E);
#endif

/*
 * ======== ti.sysbios.knl.Clock TEMPLATE ========
 */

Void ti_sysbios_knl_Clock_doTick__I(UArg arg) 
{
    /* update system time */
    (&ti_sysbios_knl_Clock_Module__state__V)->ticks++;

    (&ti_sysbios_knl_Clock_Module__state__V)->swiCount++;

    ti_sysbios_knl_Clock_logTick__E();

    if (!ti_sysbios_knl_Queue_empty(ti_sysbios_knl_Clock_Module_State_clockQ())) {

        ti_sysbios_knl_Swi_post((&ti_sysbios_knl_Clock_Module__state__V)->swi);

    }
}

/*
 * ======== ti.sdo.utils.Build TEMPLATE ========
 */



/*
 * ======== ti.sdo.io.Build TEMPLATE ========
 */



/*
 * ======== ti.sysbios.family.arm.dm6446.Hwi TEMPLATE ========
 */

#pragma DATA_SECTION(ti_sysbios_family_arm_dm6446_Hwi_vectors, ".vecs");

extern Void _c_int00();
extern Void ti_sysbios_family_arm_exc_Exception_excHandlerAsm__I();
extern Void ti_sysbios_family_arm_exc_Exception_excHandlerAsm__I();
extern Void ti_sysbios_family_arm_exc_Exception_excHandlerAsm__I();
extern Void ti_sysbios_family_arm_exc_Exception_excHandlerDataAsm__I();
extern Void ti_sysbios_family_arm_dm6446_Hwi_dispatchIRQ__I();
extern Void ti_sysbios_family_arm_dm6446_Hwi_dispatchFIQC__I();

const UInt32 ti_sysbios_family_arm_dm6446_Hwi_vectors[] = {
    (UInt32)(0xE59FF018),       /*   ldr  pc, resetFunc         */
    (UInt32)(0xE59FF018),       /*   ldr  pc, undefInstFunc     */
    (UInt32)(0xE59FF018),       /*   ldr  pc, swiFunc           */
    (UInt32)(0xE59FF018),       /*   ldr  pc, prefetchAbortFunc */
    (UInt32)(0xE59FF018),       /*   ldr  pc, dataAbortFunc     */
    (UInt32)(0xE59FF018),       /*   ldr  pc, reservedFunc      */
    (UInt32)(0xE59FF018),       /*   ldr  pc, irqFunc           */
    (UInt32)(0xE59FF018),       /*   ldr  pc, fiqFunc           */

/* resetFunc */
    (UInt32)(&_c_int00),

/* undefInstFunc */
    (UInt32)(&ti_sysbios_family_arm_exc_Exception_excHandlerAsm__I),

/* swiFunc */
    (UInt32)(&ti_sysbios_family_arm_exc_Exception_excHandlerAsm__I),

/* prefetchAbortFunc */
    (UInt32)(&ti_sysbios_family_arm_exc_Exception_excHandlerAsm__I),

/* dataAbortFunc */
    (UInt32)(&ti_sysbios_family_arm_exc_Exception_excHandlerDataAsm__I),

/* reservedFunc */
    (UInt32)(&ti_sysbios_family_arm_exc_Exception_excHandlerAsm__I),

/* irqFunc */
    (UInt32)(&ti_sysbios_family_arm_dm6446_Hwi_dispatchIRQ__I),

/* fiqFunc */
    (UInt32)(&ti_sysbios_family_arm_dm6446_Hwi_dispatchFIQC__I)
};

/*
 * ======== ti.sysbios.family.arm.arm9.Mmu TEMPLATE ========
 */


#include <ti/sysbios/family/arm/arm9/Mmu.h>

Void ti_sysbios_family_arm_arm9_Mmu_initTableBuf__I(ti_sysbios_family_arm_arm9_Mmu_Module_State *mmuModule)
{
     mmuModule->tableBuf[0] = 0xc12;
     mmuModule->tableBuf[28] = 0x1c00c12;
     mmuModule->tableBuf[32] = 0x2000c12;
     mmuModule->tableBuf[2064] = 0x81000c1e;
     mmuModule->tableBuf[2065] = 0x81100c1e;
     mmuModule->tableBuf[2066] = 0x81200c1e;
     mmuModule->tableBuf[2067] = 0x81300c1e;
     mmuModule->tableBuf[2068] = 0x81400c1e;
     mmuModule->tableBuf[2069] = 0x81500c1e;
     mmuModule->tableBuf[2070] = 0x81600c1e;
     mmuModule->tableBuf[2071] = 0x81700c1e;
     mmuModule->tableBuf[2072] = 0x81800c1e;
     mmuModule->tableBuf[2073] = 0x81900c1e;
     mmuModule->tableBuf[2074] = 0x81a00c1e;
     mmuModule->tableBuf[2075] = 0x81b00c1e;
     mmuModule->tableBuf[2076] = 0x81c00c1e;
     mmuModule->tableBuf[2077] = 0x81d00c1e;
     mmuModule->tableBuf[2078] = 0x81e00c1e;
     mmuModule->tableBuf[2079] = 0x81f00c1e;
     mmuModule->tableBuf[2080] = 0x82000c1e;
     mmuModule->tableBuf[2081] = 0x82100c1e;
     mmuModule->tableBuf[2082] = 0x82200c1e;
     mmuModule->tableBuf[2083] = 0x82300c1e;
     mmuModule->tableBuf[2084] = 0x82400c1e;
     mmuModule->tableBuf[2085] = 0x82500c1e;
     mmuModule->tableBuf[2086] = 0x82600c1e;
     mmuModule->tableBuf[2087] = 0x82700c1e;
     mmuModule->tableBuf[2088] = 0x82800c1e;
     mmuModule->tableBuf[2089] = 0x82900c1e;
     mmuModule->tableBuf[2090] = 0x82a00c1e;
     mmuModule->tableBuf[2091] = 0x82b00c1e;
     mmuModule->tableBuf[2092] = 0x82c00c1e;
     mmuModule->tableBuf[2093] = 0x82d00c1e;
     mmuModule->tableBuf[2094] = 0x82e00c1e;
     mmuModule->tableBuf[2095] = 0x82f00c1e;
     mmuModule->tableBuf[2096] = 0x83000c1e;
     mmuModule->tableBuf[2097] = 0x83100c1e;
     mmuModule->tableBuf[2098] = 0x83200c1e;
     mmuModule->tableBuf[2099] = 0x83300c1e;
     mmuModule->tableBuf[2100] = 0x83400c1e;
     mmuModule->tableBuf[2101] = 0x83500c1e;
     mmuModule->tableBuf[2102] = 0x83600c1e;
     mmuModule->tableBuf[2103] = 0x83700c1e;
     mmuModule->tableBuf[2104] = 0x83800c1e;
     mmuModule->tableBuf[2105] = 0x83900c1e;
     mmuModule->tableBuf[2106] = 0x83a00c1e;
     mmuModule->tableBuf[2107] = 0x83b00c1e;
     mmuModule->tableBuf[2108] = 0x83c00c1e;
     mmuModule->tableBuf[2109] = 0x83d00c1e;
     mmuModule->tableBuf[2110] = 0x83e00c1e;
     mmuModule->tableBuf[2111] = 0x83f00c1e;
     mmuModule->tableBuf[2112] = 0x84000c1e;
     mmuModule->tableBuf[2113] = 0x84100c1e;
     mmuModule->tableBuf[2114] = 0x84200c1e;
     mmuModule->tableBuf[2115] = 0x84300c1e;
     mmuModule->tableBuf[2116] = 0x84400c1e;
     mmuModule->tableBuf[2117] = 0x84500c1e;
     mmuModule->tableBuf[2118] = 0x84600c1e;
     mmuModule->tableBuf[2119] = 0x84700c1e;
     mmuModule->tableBuf[2120] = 0x84800c1e;
     mmuModule->tableBuf[2121] = 0x84900c1e;
     mmuModule->tableBuf[2122] = 0x84a00c1e;
     mmuModule->tableBuf[2123] = 0x84b00c1e;
     mmuModule->tableBuf[2124] = 0x84c00c1e;
     mmuModule->tableBuf[2125] = 0x84d00c1e;
     mmuModule->tableBuf[2126] = 0x84e00c1e;
     mmuModule->tableBuf[2127] = 0x84f00c1e;
     mmuModule->tableBuf[2128] = 0x85000c1e;
     mmuModule->tableBuf[2129] = 0x85100c1e;
     mmuModule->tableBuf[2130] = 0x85200c1e;
     mmuModule->tableBuf[2131] = 0x85300c1e;
     mmuModule->tableBuf[2132] = 0x85400c1e;
     mmuModule->tableBuf[2133] = 0x85500c1e;
     mmuModule->tableBuf[2134] = 0x85600c1e;
     mmuModule->tableBuf[2135] = 0x85700c1e;
     mmuModule->tableBuf[2136] = 0x85800c1e;
     mmuModule->tableBuf[2137] = 0x85900c1e;
     mmuModule->tableBuf[2138] = 0x85a00c1e;
     mmuModule->tableBuf[2139] = 0x85b00c1e;
     mmuModule->tableBuf[2140] = 0x85c00c1e;
     mmuModule->tableBuf[2141] = 0x85d00c1e;
     mmuModule->tableBuf[2142] = 0x85e00c1e;
     mmuModule->tableBuf[2143] = 0x85f00c1e;
     mmuModule->tableBuf[2144] = 0x86000c1e;
     mmuModule->tableBuf[2145] = 0x86100c1e;
     mmuModule->tableBuf[2146] = 0x86200c1e;
     mmuModule->tableBuf[2147] = 0x86300c1e;
     mmuModule->tableBuf[2148] = 0x86400c1e;
     mmuModule->tableBuf[2149] = 0x86500c1e;
     mmuModule->tableBuf[2150] = 0x86600c1e;
     mmuModule->tableBuf[2151] = 0x86700c1e;
     mmuModule->tableBuf[2152] = 0x86800c1e;
     mmuModule->tableBuf[2153] = 0x86900c1e;
     mmuModule->tableBuf[2154] = 0x86a00c1e;
     mmuModule->tableBuf[2155] = 0x86b00c1e;
     mmuModule->tableBuf[2156] = 0x86c00c1e;
     mmuModule->tableBuf[2157] = 0x86d00c1e;
     mmuModule->tableBuf[2158] = 0x86e00c1e;
     mmuModule->tableBuf[2159] = 0x86f00c1e;
     mmuModule->tableBuf[2160] = 0x87000c1e;
     mmuModule->tableBuf[2161] = 0x87100c1e;
     mmuModule->tableBuf[2162] = 0x87200c1e;
     mmuModule->tableBuf[2163] = 0x87300c1e;
     mmuModule->tableBuf[2164] = 0x87400c1e;
     mmuModule->tableBuf[2165] = 0x87500c1e;
     mmuModule->tableBuf[2166] = 0x87600c1e;
     mmuModule->tableBuf[2167] = 0x87700c1e;
     mmuModule->tableBuf[2168] = 0x87800c1e;
     mmuModule->tableBuf[2169] = 0x87900c1e;
     mmuModule->tableBuf[2170] = 0x87a00c1e;
     mmuModule->tableBuf[2171] = 0x87b00c1e;
     mmuModule->tableBuf[2172] = 0x87c00c1e;
     mmuModule->tableBuf[2173] = 0x87d00c1e;
     mmuModule->tableBuf[2174] = 0x87e00c1e;
     mmuModule->tableBuf[2175] = 0x87f00c1e;
     mmuModule->tableBuf[2176] = 0x88000c1e;
     mmuModule->tableBuf[2177] = 0x88100c1e;
     mmuModule->tableBuf[2178] = 0x88200c1e;
     mmuModule->tableBuf[2179] = 0x88300c1e;
     mmuModule->tableBuf[2180] = 0x88400c1e;
     mmuModule->tableBuf[2181] = 0x88500c1e;
     mmuModule->tableBuf[2182] = 0x88600c1e;
     mmuModule->tableBuf[2183] = 0x88700c1e;
     mmuModule->tableBuf[2184] = 0x88800c1e;
     mmuModule->tableBuf[2185] = 0x88900c1e;
     mmuModule->tableBuf[2186] = 0x88a00c1e;
     mmuModule->tableBuf[2187] = 0x88b00c1e;
     mmuModule->tableBuf[2188] = 0x88c00c1e;
     mmuModule->tableBuf[2189] = 0x88d00c1e;
     mmuModule->tableBuf[2190] = 0x88e00c1e;
     mmuModule->tableBuf[2191] = 0x88f00c1e;
     mmuModule->tableBuf[2192] = 0x89000c1e;
     mmuModule->tableBuf[2193] = 0x89100c1e;
     mmuModule->tableBuf[2194] = 0x89200c1e;
     mmuModule->tableBuf[2195] = 0x89300c1e;
     mmuModule->tableBuf[2196] = 0x89400c1e;
     mmuModule->tableBuf[2197] = 0x89500c1e;
     mmuModule->tableBuf[2198] = 0x89600c1e;
     mmuModule->tableBuf[2199] = 0x89700c1e;
     mmuModule->tableBuf[2200] = 0x89800c1e;
     mmuModule->tableBuf[2201] = 0x89900c1e;
     mmuModule->tableBuf[2202] = 0x89a00c1e;
     mmuModule->tableBuf[2203] = 0x89b00c1e;
     mmuModule->tableBuf[2204] = 0x89c00c1e;
     mmuModule->tableBuf[2205] = 0x89d00c1e;
     mmuModule->tableBuf[2206] = 0x89e00c1e;
     mmuModule->tableBuf[2207] = 0x89f00c1e;
     mmuModule->tableBuf[2208] = 0x8a000c1e;
     mmuModule->tableBuf[2209] = 0x8a100c1e;
     mmuModule->tableBuf[2210] = 0x8a200c1e;
     mmuModule->tableBuf[2211] = 0x8a300c1e;
     mmuModule->tableBuf[2212] = 0x8a400c1e;
     mmuModule->tableBuf[2213] = 0x8a500c1e;
     mmuModule->tableBuf[2214] = 0x8a600c1e;
     mmuModule->tableBuf[2215] = 0x8a700c1e;
     mmuModule->tableBuf[2216] = 0x8a800c1e;
     mmuModule->tableBuf[2217] = 0x8a900c1e;
     mmuModule->tableBuf[2218] = 0x8aa00c1e;
     mmuModule->tableBuf[2219] = 0x8ab00c1e;
     mmuModule->tableBuf[2220] = 0x8ac00c1e;
     mmuModule->tableBuf[2221] = 0x8ad00c1e;
     mmuModule->tableBuf[2222] = 0x8ae00c1e;
     mmuModule->tableBuf[2223] = 0x8af00c1e;
     mmuModule->tableBuf[2224] = 0x8b000c1e;
     mmuModule->tableBuf[2225] = 0x8b100c1e;
     mmuModule->tableBuf[2226] = 0x8b200c1e;
     mmuModule->tableBuf[2227] = 0x8b300c1e;
     mmuModule->tableBuf[2228] = 0x8b400c1e;
     mmuModule->tableBuf[2229] = 0x8b500c1e;
     mmuModule->tableBuf[2230] = 0x8b600c1e;
     mmuModule->tableBuf[2231] = 0x8b700c1e;
     mmuModule->tableBuf[2232] = 0x8b800c1e;
     mmuModule->tableBuf[2233] = 0x8b900c1e;
     mmuModule->tableBuf[2234] = 0x8ba00c1e;
     mmuModule->tableBuf[2235] = 0x8bb00c1e;
     mmuModule->tableBuf[2236] = 0x8bc00c1e;
     mmuModule->tableBuf[2237] = 0x8bd00c1e;
     mmuModule->tableBuf[2238] = 0x8be00c1e;
     mmuModule->tableBuf[2239] = 0x8bf00c1e;
     mmuModule->tableBuf[2240] = 0x8c000c1e;
     mmuModule->tableBuf[2241] = 0x8c100c1e;
     mmuModule->tableBuf[2242] = 0x8c200c1e;
     mmuModule->tableBuf[2243] = 0x8c300c1e;
     mmuModule->tableBuf[2244] = 0x8c400c1e;
     mmuModule->tableBuf[2245] = 0x8c500c1e;
     mmuModule->tableBuf[2246] = 0x8c600c1e;
     mmuModule->tableBuf[2247] = 0x8c700c1e;
     mmuModule->tableBuf[2248] = 0x8c800c1e;
     mmuModule->tableBuf[2249] = 0x8c900c1e;
     mmuModule->tableBuf[2250] = 0x8ca00c1e;
     mmuModule->tableBuf[2251] = 0x8cb00c1e;
     mmuModule->tableBuf[2252] = 0x8cc00c1e;
     mmuModule->tableBuf[2253] = 0x8cd00c1e;
     mmuModule->tableBuf[2254] = 0x8ce00c1e;
     mmuModule->tableBuf[2255] = 0x8cf00c1e;
     mmuModule->tableBuf[2256] = 0x8d000c1e;
     mmuModule->tableBuf[2257] = 0x8d100c1e;
     mmuModule->tableBuf[2258] = 0x8d200c1e;
     mmuModule->tableBuf[2259] = 0x8d300c1e;
     mmuModule->tableBuf[2260] = 0x8d400c1e;
     mmuModule->tableBuf[2261] = 0x8d500c1e;
     mmuModule->tableBuf[2262] = 0x8d600c1e;
     mmuModule->tableBuf[2263] = 0x8d700c1e;
     mmuModule->tableBuf[2264] = 0x8d800c1e;
     mmuModule->tableBuf[2265] = 0x8d900c1e;
     mmuModule->tableBuf[2266] = 0x8da00c1e;
     mmuModule->tableBuf[2267] = 0x8db00c1e;
     mmuModule->tableBuf[2268] = 0x8dc00c1e;
     mmuModule->tableBuf[2269] = 0x8dd00c1e;
     mmuModule->tableBuf[2270] = 0x8de00c1e;
     mmuModule->tableBuf[2271] = 0x8df00c1e;
     mmuModule->tableBuf[2272] = 0x8e000c1e;
     mmuModule->tableBuf[2273] = 0x8e100c1e;
     mmuModule->tableBuf[2274] = 0x8e200c1e;
     mmuModule->tableBuf[2275] = 0x8e300c1e;
     mmuModule->tableBuf[2276] = 0x8e400c1e;
     mmuModule->tableBuf[2277] = 0x8e500c1e;
     mmuModule->tableBuf[2278] = 0x8e600c1e;
     mmuModule->tableBuf[2279] = 0x8e700c1e;
     mmuModule->tableBuf[2280] = 0x8e800c1e;
     mmuModule->tableBuf[2281] = 0x8e900c1e;
     mmuModule->tableBuf[2282] = 0x8ea00c1e;
     mmuModule->tableBuf[2283] = 0x8eb00c1e;
     mmuModule->tableBuf[2284] = 0x8ec00c1e;
     mmuModule->tableBuf[2285] = 0x8ed00c1e;
     mmuModule->tableBuf[2286] = 0x8ee00c1e;
     mmuModule->tableBuf[2287] = 0x8ef00c1e;
     mmuModule->tableBuf[2288] = 0x8f000c1e;
     mmuModule->tableBuf[2289] = 0x8f100c1e;
     mmuModule->tableBuf[2290] = 0x8f200c1e;
     mmuModule->tableBuf[2291] = 0x8f300c1e;
     mmuModule->tableBuf[2292] = 0x8f400c1e;
     mmuModule->tableBuf[2293] = 0x8f500c1e;
     mmuModule->tableBuf[2294] = 0x8f600c1e;
     mmuModule->tableBuf[2295] = 0x8f700c1e;
     mmuModule->tableBuf[2296] = 0x8f800c1e;
     mmuModule->tableBuf[2297] = 0x8f900c1e;
     mmuModule->tableBuf[2298] = 0x8fa00c1e;
     mmuModule->tableBuf[2299] = 0x8fb00c1e;
     mmuModule->tableBuf[2300] = 0x8fc00c1e;
     mmuModule->tableBuf[2301] = 0x8fd00c1e;
     mmuModule->tableBuf[2302] = 0x8fe00c1e;
     mmuModule->tableBuf[2303] = 0x8ff00c1e;
}

/*
 * ======== ti.sdo.io.DriverTable INITIALIZERS ========
 */

/* Module__state__V */
ti_sdo_io_DriverTable_Module_State__ ti_sdo_io_DriverTable_Module__state__V = {
    (ti_sdo_utils_NameServer_Handle)&ti_sdo_utils_NameServer_Object__table__V[0],  /* drvTable */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sdo_io_DriverTable_Module__diagsEnabled ti_sdo_io_DriverTable_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sdo_io_DriverTable_Module__diagsIncluded ti_sdo_io_DriverTable_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sdo_io_DriverTable_Module__diagsMask ti_sdo_io_DriverTable_Module__diagsMask__C = ((CT__ti_sdo_io_DriverTable_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sdo_io_DriverTable_Module__gateObj ti_sdo_io_DriverTable_Module__gateObj__C = ((CT__ti_sdo_io_DriverTable_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sdo_io_DriverTable_Module__gatePrms ti_sdo_io_DriverTable_Module__gatePrms__C = ((CT__ti_sdo_io_DriverTable_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sdo_io_DriverTable_Module__id ti_sdo_io_DriverTable_Module__id__C = (xdc_Bits16)0x8039;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sdo_io_DriverTable_Module__loggerDefined ti_sdo_io_DriverTable_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sdo_io_DriverTable_Module__loggerObj ti_sdo_io_DriverTable_Module__loggerObj__C = ((CT__ti_sdo_io_DriverTable_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sdo_io_DriverTable_Module__loggerFxn0 ti_sdo_io_DriverTable_Module__loggerFxn0__C = ((CT__ti_sdo_io_DriverTable_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sdo_io_DriverTable_Module__loggerFxn1 ti_sdo_io_DriverTable_Module__loggerFxn1__C = ((CT__ti_sdo_io_DriverTable_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sdo_io_DriverTable_Module__loggerFxn2 ti_sdo_io_DriverTable_Module__loggerFxn2__C = ((CT__ti_sdo_io_DriverTable_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sdo_io_DriverTable_Module__loggerFxn4 ti_sdo_io_DriverTable_Module__loggerFxn4__C = ((CT__ti_sdo_io_DriverTable_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sdo_io_DriverTable_Module__loggerFxn8 ti_sdo_io_DriverTable_Module__loggerFxn8__C = ((CT__ti_sdo_io_DriverTable_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sdo_io_DriverTable_Module__startupDoneFxn ti_sdo_io_DriverTable_Module__startupDoneFxn__C = ((CT__ti_sdo_io_DriverTable_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sdo_io_DriverTable_Object__count ti_sdo_io_DriverTable_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__ti_sdo_io_DriverTable_Object__heap ti_sdo_io_DriverTable_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sdo_io_DriverTable_Object__sizeof ti_sdo_io_DriverTable_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__ti_sdo_io_DriverTable_Object__table ti_sdo_io_DriverTable_Object__table__C = 0;

/* maxRuntimeEntries__C */
__FAR__ const CT__ti_sdo_io_DriverTable_maxRuntimeEntries ti_sdo_io_DriverTable_maxRuntimeEntries__C = (xdc_UInt)0x0;

/* gate__C */
__FAR__ const CT__ti_sdo_io_DriverTable_gate ti_sdo_io_DriverTable_gate__C = 0;

/* maxNameLen__C */
__FAR__ const CT__ti_sdo_io_DriverTable_maxNameLen ti_sdo_io_DriverTable_maxNameLen__C = (xdc_UInt)0x10;


/*
 * ======== ti.sdo.io.DriverTypes INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sdo_io_DriverTypes_Module__diagsEnabled ti_sdo_io_DriverTypes_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sdo_io_DriverTypes_Module__diagsIncluded ti_sdo_io_DriverTypes_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sdo_io_DriverTypes_Module__diagsMask ti_sdo_io_DriverTypes_Module__diagsMask__C = ((CT__ti_sdo_io_DriverTypes_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sdo_io_DriverTypes_Module__gateObj ti_sdo_io_DriverTypes_Module__gateObj__C = ((CT__ti_sdo_io_DriverTypes_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sdo_io_DriverTypes_Module__gatePrms ti_sdo_io_DriverTypes_Module__gatePrms__C = ((CT__ti_sdo_io_DriverTypes_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sdo_io_DriverTypes_Module__id ti_sdo_io_DriverTypes_Module__id__C = (xdc_Bits16)0x8038;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sdo_io_DriverTypes_Module__loggerDefined ti_sdo_io_DriverTypes_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sdo_io_DriverTypes_Module__loggerObj ti_sdo_io_DriverTypes_Module__loggerObj__C = ((CT__ti_sdo_io_DriverTypes_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sdo_io_DriverTypes_Module__loggerFxn0 ti_sdo_io_DriverTypes_Module__loggerFxn0__C = ((CT__ti_sdo_io_DriverTypes_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sdo_io_DriverTypes_Module__loggerFxn1 ti_sdo_io_DriverTypes_Module__loggerFxn1__C = ((CT__ti_sdo_io_DriverTypes_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sdo_io_DriverTypes_Module__loggerFxn2 ti_sdo_io_DriverTypes_Module__loggerFxn2__C = ((CT__ti_sdo_io_DriverTypes_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sdo_io_DriverTypes_Module__loggerFxn4 ti_sdo_io_DriverTypes_Module__loggerFxn4__C = ((CT__ti_sdo_io_DriverTypes_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sdo_io_DriverTypes_Module__loggerFxn8 ti_sdo_io_DriverTypes_Module__loggerFxn8__C = ((CT__ti_sdo_io_DriverTypes_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sdo_io_DriverTypes_Module__startupDoneFxn ti_sdo_io_DriverTypes_Module__startupDoneFxn__C = ((CT__ti_sdo_io_DriverTypes_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sdo_io_DriverTypes_Object__count ti_sdo_io_DriverTypes_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__ti_sdo_io_DriverTypes_Object__heap ti_sdo_io_DriverTypes_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sdo_io_DriverTypes_Object__sizeof ti_sdo_io_DriverTypes_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__ti_sdo_io_DriverTypes_Object__table ti_sdo_io_DriverTypes_Object__table__C = 0;

/* READ__C */
__FAR__ const CT__ti_sdo_io_DriverTypes_READ ti_sdo_io_DriverTypes_READ__C = ((ti_sdo_io_DriverTypes_PacketCmd)-2143813629);

/* WRITE__C */
__FAR__ const CT__ti_sdo_io_DriverTypes_WRITE ti_sdo_io_DriverTypes_WRITE__C = ((ti_sdo_io_DriverTypes_PacketCmd)-2143813628);

/* CHAN_ABORT__C */
__FAR__ const CT__ti_sdo_io_DriverTypes_CHAN_ABORT ti_sdo_io_DriverTypes_CHAN_ABORT__C = ((ti_sdo_io_DriverTypes_ControlCmd)-2143813632);

/* CHAN_RESET__C */
__FAR__ const CT__ti_sdo_io_DriverTypes_CHAN_RESET ti_sdo_io_DriverTypes_CHAN_RESET__C = ((ti_sdo_io_DriverTypes_ControlCmd)-2143813631);

/* DEVICE_RESET__C */
__FAR__ const CT__ti_sdo_io_DriverTypes_DEVICE_RESET ti_sdo_io_DriverTypes_DEVICE_RESET__C = ((ti_sdo_io_DriverTypes_ControlCmd)-2143813630);

/* EBADIO__C */
__FAR__ const CT__ti_sdo_io_DriverTypes_EBADIO ti_sdo_io_DriverTypes_EBADIO__C = (((xdc_runtime_Error_Id)3466) << 16 | 0);

/* EBADMODE__C */
__FAR__ const CT__ti_sdo_io_DriverTypes_EBADMODE ti_sdo_io_DriverTypes_EBADMODE__C = (((xdc_runtime_Error_Id)3482) << 16 | 0);

/* ENOTIMPL__C */
__FAR__ const CT__ti_sdo_io_DriverTypes_ENOTIMPL ti_sdo_io_DriverTypes_ENOTIMPL__C = (((xdc_runtime_Error_Id)3495) << 16 | 0);

/* EBADARGS__C */
__FAR__ const CT__ti_sdo_io_DriverTypes_EBADARGS ti_sdo_io_DriverTypes_EBADARGS__C = (((xdc_runtime_Error_Id)3511) << 16 | 0);

/* EINUSE__C */
__FAR__ const CT__ti_sdo_io_DriverTypes_EINUSE ti_sdo_io_DriverTypes_EINUSE__C = (((xdc_runtime_Error_Id)3520) << 16 | 0);

/* EINVALIDDEV__C */
__FAR__ const CT__ti_sdo_io_DriverTypes_EINVALIDDEV ti_sdo_io_DriverTypes_EINVALIDDEV__C = (((xdc_runtime_Error_Id)3535) << 16 | 0);

/* EABORTED__C */
__FAR__ const CT__ti_sdo_io_DriverTypes_EABORTED ti_sdo_io_DriverTypes_EABORTED__C = (((xdc_runtime_Error_Id)3550) << 16 | 0);

/* LM_startIO__C */
__FAR__ const CT__ti_sdo_io_DriverTypes_LM_startIO ti_sdo_io_DriverTypes_LM_startIO__C = (((xdc_runtime_Log_Event)4785) << 16 | 768);

/* LM_ioComplete__C */
__FAR__ const CT__ti_sdo_io_DriverTypes_LM_ioComplete ti_sdo_io_DriverTypes_LM_ioComplete__C = (((xdc_runtime_Log_Event)4830) << 16 | 768);


/*
 * ======== ti.sdo.io.Stream INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sdo_io_Stream_Object__DESC__C;

/* Object__PARAMS__C */
__FAR__ const ti_sdo_io_Stream_Params ti_sdo_io_Stream_Object__PARAMS__C = {
    sizeof (ti_sdo_io_Stream_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sdo_io_Stream_Object__PARAMS__C.__iprms, /* instance */
    (xdc_UInt)0x2,  /* maxIssues */
    0,  /* packetHeap */
    0,  /* sync */
    ((xdc_UArg)0),  /* chanParams */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sdo_io_Stream_Module__ ti_sdo_io_Stream_Module__root__V = {
    {&ti_sdo_io_Stream_Module__root__V.link,  /* link.next */
    &ti_sdo_io_Stream_Module__root__V.link},  /* link.prev */
};

/* Module__state__V */
ti_sdo_io_Stream_Module_State__ ti_sdo_io_Stream_Module__state__V = {
    (ti_sdo_utils_NameServer_Handle)&ti_sdo_utils_NameServer_Object__table__V[1],  /* convTable */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sdo_io_Stream_Module__diagsEnabled ti_sdo_io_Stream_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sdo_io_Stream_Module__diagsIncluded ti_sdo_io_Stream_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sdo_io_Stream_Module__diagsMask ti_sdo_io_Stream_Module__diagsMask__C = ((CT__ti_sdo_io_Stream_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sdo_io_Stream_Module__gateObj ti_sdo_io_Stream_Module__gateObj__C = ((CT__ti_sdo_io_Stream_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sdo_io_Stream_Module__gatePrms ti_sdo_io_Stream_Module__gatePrms__C = ((CT__ti_sdo_io_Stream_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sdo_io_Stream_Module__id ti_sdo_io_Stream_Module__id__C = (xdc_Bits16)0x803a;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sdo_io_Stream_Module__loggerDefined ti_sdo_io_Stream_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sdo_io_Stream_Module__loggerObj ti_sdo_io_Stream_Module__loggerObj__C = ((CT__ti_sdo_io_Stream_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sdo_io_Stream_Module__loggerFxn0 ti_sdo_io_Stream_Module__loggerFxn0__C = ((CT__ti_sdo_io_Stream_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sdo_io_Stream_Module__loggerFxn1 ti_sdo_io_Stream_Module__loggerFxn1__C = ((CT__ti_sdo_io_Stream_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sdo_io_Stream_Module__loggerFxn2 ti_sdo_io_Stream_Module__loggerFxn2__C = ((CT__ti_sdo_io_Stream_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sdo_io_Stream_Module__loggerFxn4 ti_sdo_io_Stream_Module__loggerFxn4__C = ((CT__ti_sdo_io_Stream_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sdo_io_Stream_Module__loggerFxn8 ti_sdo_io_Stream_Module__loggerFxn8__C = ((CT__ti_sdo_io_Stream_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sdo_io_Stream_Module__startupDoneFxn ti_sdo_io_Stream_Module__startupDoneFxn__C = ((CT__ti_sdo_io_Stream_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sdo_io_Stream_Object__count ti_sdo_io_Stream_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__ti_sdo_io_Stream_Object__heap ti_sdo_io_Stream_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sdo_io_Stream_Object__sizeof ti_sdo_io_Stream_Object__sizeof__C = sizeof(ti_sdo_io_Stream_Object__);

/* Object__table__C */
__FAR__ const CT__ti_sdo_io_Stream_Object__table ti_sdo_io_Stream_Object__table__C = 0;

/* E_notFound__C */
__FAR__ const CT__ti_sdo_io_Stream_E_notFound ti_sdo_io_Stream_E_notFound__C = (((xdc_runtime_Error_Id)3565) << 16 | 0);

/* E_noPackets__C */
__FAR__ const CT__ti_sdo_io_Stream_E_noPackets ti_sdo_io_Stream_E_noPackets__C = (((xdc_runtime_Error_Id)3595) << 16 | 0);

/* E_noBuffersIssued__C */
__FAR__ const CT__ti_sdo_io_Stream_E_noBuffersIssued ti_sdo_io_Stream_E_noBuffersIssued__C = (((xdc_runtime_Error_Id)3646) << 16 | 0);

/* E_timeout__C */
__FAR__ const CT__ti_sdo_io_Stream_E_timeout ti_sdo_io_Stream_E_timeout__C = (((xdc_runtime_Error_Id)3688) << 16 | 0);

/* A_badMode__C */
__FAR__ const CT__ti_sdo_io_Stream_A_badMode ti_sdo_io_Stream_A_badMode__C = (((xdc_runtime_Assert_Id)2512) << 16 | 16);

/* A_pendingReclaims__C */
__FAR__ const CT__ti_sdo_io_Stream_A_pendingReclaims ti_sdo_io_Stream_A_pendingReclaims__C = (((xdc_runtime_Assert_Id)2532) << 16 | 16);

/* A_syncNonBlocking__C */
__FAR__ const CT__ti_sdo_io_Stream_A_syncNonBlocking ti_sdo_io_Stream_A_syncNonBlocking__C = (((xdc_runtime_Assert_Id)2584) << 16 | 16);

/* maxRuntimeEntries__C */
__FAR__ const CT__ti_sdo_io_Stream_maxRuntimeEntries ti_sdo_io_Stream_maxRuntimeEntries__C = (xdc_UInt)0x0;

/* gate__C */
__FAR__ const CT__ti_sdo_io_Stream_gate ti_sdo_io_Stream_gate__C = 0;

/* maxNameLen__C */
__FAR__ const CT__ti_sdo_io_Stream_maxNameLen ti_sdo_io_Stream_maxNameLen__C = (xdc_UInt)0x10;


/*
 * ======== ti.sdo.io.converters.DriverAdapter INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sdo_io_converters_DriverAdapter_Object__DESC__C;

/* Object__PARAMS__C */
__FAR__ const ti_sdo_io_converters_DriverAdapter_Params ti_sdo_io_converters_DriverAdapter_Object__PARAMS__C = {
    sizeof (ti_sdo_io_converters_DriverAdapter_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sdo_io_converters_DriverAdapter_Object__PARAMS__C.__iprms, /* instance */
    ((xdc_Ptr)(0x0)),  /* driverHandle */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sdo_io_converters_DriverAdapter_Module__ ti_sdo_io_converters_DriverAdapter_Module__root__V = {
    {&ti_sdo_io_converters_DriverAdapter_Module__root__V.link,  /* link.next */
    &ti_sdo_io_converters_DriverAdapter_Module__root__V.link},  /* link.prev */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sdo_io_converters_DriverAdapter_Module__diagsEnabled ti_sdo_io_converters_DriverAdapter_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sdo_io_converters_DriverAdapter_Module__diagsIncluded ti_sdo_io_converters_DriverAdapter_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sdo_io_converters_DriverAdapter_Module__diagsMask ti_sdo_io_converters_DriverAdapter_Module__diagsMask__C = ((CT__ti_sdo_io_converters_DriverAdapter_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sdo_io_converters_DriverAdapter_Module__gateObj ti_sdo_io_converters_DriverAdapter_Module__gateObj__C = ((CT__ti_sdo_io_converters_DriverAdapter_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sdo_io_converters_DriverAdapter_Module__gatePrms ti_sdo_io_converters_DriverAdapter_Module__gatePrms__C = ((CT__ti_sdo_io_converters_DriverAdapter_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sdo_io_converters_DriverAdapter_Module__id ti_sdo_io_converters_DriverAdapter_Module__id__C = (xdc_Bits16)0x8048;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sdo_io_converters_DriverAdapter_Module__loggerDefined ti_sdo_io_converters_DriverAdapter_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sdo_io_converters_DriverAdapter_Module__loggerObj ti_sdo_io_converters_DriverAdapter_Module__loggerObj__C = ((CT__ti_sdo_io_converters_DriverAdapter_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sdo_io_converters_DriverAdapter_Module__loggerFxn0 ti_sdo_io_converters_DriverAdapter_Module__loggerFxn0__C = ((CT__ti_sdo_io_converters_DriverAdapter_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sdo_io_converters_DriverAdapter_Module__loggerFxn1 ti_sdo_io_converters_DriverAdapter_Module__loggerFxn1__C = ((CT__ti_sdo_io_converters_DriverAdapter_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sdo_io_converters_DriverAdapter_Module__loggerFxn2 ti_sdo_io_converters_DriverAdapter_Module__loggerFxn2__C = ((CT__ti_sdo_io_converters_DriverAdapter_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sdo_io_converters_DriverAdapter_Module__loggerFxn4 ti_sdo_io_converters_DriverAdapter_Module__loggerFxn4__C = ((CT__ti_sdo_io_converters_DriverAdapter_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sdo_io_converters_DriverAdapter_Module__loggerFxn8 ti_sdo_io_converters_DriverAdapter_Module__loggerFxn8__C = ((CT__ti_sdo_io_converters_DriverAdapter_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sdo_io_converters_DriverAdapter_Module__startupDoneFxn ti_sdo_io_converters_DriverAdapter_Module__startupDoneFxn__C = ((CT__ti_sdo_io_converters_DriverAdapter_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sdo_io_converters_DriverAdapter_Object__count ti_sdo_io_converters_DriverAdapter_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__ti_sdo_io_converters_DriverAdapter_Object__heap ti_sdo_io_converters_DriverAdapter_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sdo_io_converters_DriverAdapter_Object__sizeof ti_sdo_io_converters_DriverAdapter_Object__sizeof__C = sizeof(ti_sdo_io_converters_DriverAdapter_Object__);

/* Object__table__C */
__FAR__ const CT__ti_sdo_io_converters_DriverAdapter_Object__table ti_sdo_io_converters_DriverAdapter_Object__table__C = 0;

/* E_openFail__C */
__FAR__ const CT__ti_sdo_io_converters_DriverAdapter_E_openFail ti_sdo_io_converters_DriverAdapter_E_openFail__C = (((xdc_runtime_Error_Id)3996) << 16 | 0);

/* A_noReadyPacket__C */
__FAR__ const CT__ti_sdo_io_converters_DriverAdapter_A_noReadyPacket ti_sdo_io_converters_DriverAdapter_A_noReadyPacket__C = (((xdc_runtime_Assert_Id)2722) << 16 | 16);


/*
 * ======== ti.sdo.io.drivers.Generator INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sdo_io_drivers_Generator_Object__DESC__C;

/* Object__PARAMS__C */
__FAR__ const ti_sdo_io_drivers_Generator_Params ti_sdo_io_drivers_Generator_Object__PARAMS__C = {
    sizeof (ti_sdo_io_drivers_Generator_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sdo_io_drivers_Generator_Object__PARAMS__C.__iprms, /* instance */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sdo_io_drivers_Generator_Module__ ti_sdo_io_drivers_Generator_Module__root__V = {
    {&ti_sdo_io_drivers_Generator_Module__root__V.link,  /* link.next */
    &ti_sdo_io_drivers_Generator_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sdo_io_drivers_Generator_Object__ ti_sdo_io_drivers_Generator_Object__table__V[1] = {
    {/* instance#0 */
        &ti_sdo_io_drivers_Generator_Module__FXNS__C,
        {
            {
                {
                    ((ti_sdo_utils_List_Elem*)((void*)&ti_sdo_io_drivers_Generator_Object__table__V[0].chans[0].elem)),  /* next */
                    ((ti_sdo_utils_List_Elem*)((void*)&ti_sdo_io_drivers_Generator_Object__table__V[0].chans[0].elem)),  /* prev */
                },  /* elem */
                0,  /* inUse */
                0,  /* returnPending */
                (ti_sdo_utils_List_Handle)&ti_sdo_utils_List_Object__table__V[0],  /* pendList */
                ((xdc_Void(*)(xdc_UArg,ti_sdo_io_DriverTypes_Packet*))0),  /* cbFxn */
                ((xdc_UArg)0),  /* cbArg */
                ((xdc_Void(*)(xdc_Ptr,xdc_SizeT,xdc_UArg))0),  /* userFxn */
                ((xdc_UArg)0),  /* userArg */
            },  /* [0] */
            {
                {
                    ((ti_sdo_utils_List_Elem*)((void*)&ti_sdo_io_drivers_Generator_Object__table__V[0].chans[1].elem)),  /* next */
                    ((ti_sdo_utils_List_Elem*)((void*)&ti_sdo_io_drivers_Generator_Object__table__V[0].chans[1].elem)),  /* prev */
                },  /* elem */
                0,  /* inUse */
                0,  /* returnPending */
                (ti_sdo_utils_List_Handle)&ti_sdo_utils_List_Object__table__V[1],  /* pendList */
                ((xdc_Void(*)(xdc_UArg,ti_sdo_io_DriverTypes_Packet*))0),  /* cbFxn */
                ((xdc_UArg)0),  /* cbArg */
                ((xdc_Void(*)(xdc_Ptr,xdc_SizeT,xdc_UArg))0),  /* userFxn */
                ((xdc_UArg)0),  /* userArg */
            },  /* [1] */
        },  /* chans */
    },
};

/* Module__state__V */
ti_sdo_io_drivers_Generator_Module_State__ ti_sdo_io_drivers_Generator_Module__state__V = {
    {
        {
            ((ti_sdo_utils_List_Elem*)((void*)&ti_sdo_io_drivers_Generator_Module__state__V.Object_field_chanList.elem)),  /* next */
            ((ti_sdo_utils_List_Elem*)((void*)&ti_sdo_io_drivers_Generator_Module__state__V.Object_field_chanList.elem)),  /* prev */
        },  /* elem */
    },  /* Object_field_chanList */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sdo_io_drivers_Generator_Module__diagsEnabled ti_sdo_io_drivers_Generator_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sdo_io_drivers_Generator_Module__diagsIncluded ti_sdo_io_drivers_Generator_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sdo_io_drivers_Generator_Module__diagsMask ti_sdo_io_drivers_Generator_Module__diagsMask__C = ((CT__ti_sdo_io_drivers_Generator_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sdo_io_drivers_Generator_Module__gateObj ti_sdo_io_drivers_Generator_Module__gateObj__C = ((CT__ti_sdo_io_drivers_Generator_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sdo_io_drivers_Generator_Module__gatePrms ti_sdo_io_drivers_Generator_Module__gatePrms__C = ((CT__ti_sdo_io_drivers_Generator_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sdo_io_drivers_Generator_Module__id ti_sdo_io_drivers_Generator_Module__id__C = (xdc_Bits16)0x803c;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sdo_io_drivers_Generator_Module__loggerDefined ti_sdo_io_drivers_Generator_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sdo_io_drivers_Generator_Module__loggerObj ti_sdo_io_drivers_Generator_Module__loggerObj__C = ((CT__ti_sdo_io_drivers_Generator_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sdo_io_drivers_Generator_Module__loggerFxn0 ti_sdo_io_drivers_Generator_Module__loggerFxn0__C = ((CT__ti_sdo_io_drivers_Generator_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sdo_io_drivers_Generator_Module__loggerFxn1 ti_sdo_io_drivers_Generator_Module__loggerFxn1__C = ((CT__ti_sdo_io_drivers_Generator_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sdo_io_drivers_Generator_Module__loggerFxn2 ti_sdo_io_drivers_Generator_Module__loggerFxn2__C = ((CT__ti_sdo_io_drivers_Generator_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sdo_io_drivers_Generator_Module__loggerFxn4 ti_sdo_io_drivers_Generator_Module__loggerFxn4__C = ((CT__ti_sdo_io_drivers_Generator_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sdo_io_drivers_Generator_Module__loggerFxn8 ti_sdo_io_drivers_Generator_Module__loggerFxn8__C = ((CT__ti_sdo_io_drivers_Generator_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sdo_io_drivers_Generator_Module__startupDoneFxn ti_sdo_io_drivers_Generator_Module__startupDoneFxn__C = ((CT__ti_sdo_io_drivers_Generator_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sdo_io_drivers_Generator_Object__count ti_sdo_io_drivers_Generator_Object__count__C = 1;

/* Object__heap__C */
__FAR__ const CT__ti_sdo_io_drivers_Generator_Object__heap ti_sdo_io_drivers_Generator_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sdo_io_drivers_Generator_Object__sizeof ti_sdo_io_drivers_Generator_Object__sizeof__C = sizeof(ti_sdo_io_drivers_Generator_Object__);

/* Object__table__C */
__FAR__ const CT__ti_sdo_io_drivers_Generator_Object__table ti_sdo_io_drivers_Generator_Object__table__C = ti_sdo_io_drivers_Generator_Object__table__V;

/* E_nullParams__C */
__FAR__ const CT__ti_sdo_io_drivers_Generator_E_nullParams ti_sdo_io_drivers_Generator_E_nullParams__C = (((xdc_runtime_Error_Id)3707) << 16 | 0);


/*
 * ======== ti.sdo.utils.List INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sdo_utils_List_Object__DESC__C;

/* Object__PARAMS__C */
__FAR__ const ti_sdo_utils_List_Params ti_sdo_utils_List_Object__PARAMS__C = {
    sizeof (ti_sdo_utils_List_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sdo_utils_List_Object__PARAMS__C.__iprms, /* instance */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sdo_utils_List_Module__ ti_sdo_utils_List_Module__root__V = {
    {&ti_sdo_utils_List_Module__root__V.link,  /* link.next */
    &ti_sdo_utils_List_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sdo_utils_List_Object__ ti_sdo_utils_List_Object__table__V[2] = {
    {/* instance#0 */
        {
            ((ti_sdo_utils_List_Elem*)((void*)&ti_sdo_utils_List_Object__table__V[0].elem)),  /* next */
            ((ti_sdo_utils_List_Elem*)((void*)&ti_sdo_utils_List_Object__table__V[0].elem)),  /* prev */
        },  /* elem */
    },
    {/* instance#1 */
        {
            ((ti_sdo_utils_List_Elem*)((void*)&ti_sdo_utils_List_Object__table__V[1].elem)),  /* next */
            ((ti_sdo_utils_List_Elem*)((void*)&ti_sdo_utils_List_Object__table__V[1].elem)),  /* prev */
        },  /* elem */
    },
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sdo_utils_List_Module__diagsEnabled ti_sdo_utils_List_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sdo_utils_List_Module__diagsIncluded ti_sdo_utils_List_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sdo_utils_List_Module__diagsMask ti_sdo_utils_List_Module__diagsMask__C = ((CT__ti_sdo_utils_List_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sdo_utils_List_Module__gateObj ti_sdo_utils_List_Module__gateObj__C = ((CT__ti_sdo_utils_List_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sdo_utils_List_Module__gatePrms ti_sdo_utils_List_Module__gatePrms__C = ((CT__ti_sdo_utils_List_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sdo_utils_List_Module__id ti_sdo_utils_List_Module__id__C = (xdc_Bits16)0x8036;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sdo_utils_List_Module__loggerDefined ti_sdo_utils_List_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sdo_utils_List_Module__loggerObj ti_sdo_utils_List_Module__loggerObj__C = ((CT__ti_sdo_utils_List_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sdo_utils_List_Module__loggerFxn0 ti_sdo_utils_List_Module__loggerFxn0__C = ((CT__ti_sdo_utils_List_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sdo_utils_List_Module__loggerFxn1 ti_sdo_utils_List_Module__loggerFxn1__C = ((CT__ti_sdo_utils_List_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sdo_utils_List_Module__loggerFxn2 ti_sdo_utils_List_Module__loggerFxn2__C = ((CT__ti_sdo_utils_List_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sdo_utils_List_Module__loggerFxn4 ti_sdo_utils_List_Module__loggerFxn4__C = ((CT__ti_sdo_utils_List_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sdo_utils_List_Module__loggerFxn8 ti_sdo_utils_List_Module__loggerFxn8__C = ((CT__ti_sdo_utils_List_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sdo_utils_List_Module__startupDoneFxn ti_sdo_utils_List_Module__startupDoneFxn__C = ((CT__ti_sdo_utils_List_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sdo_utils_List_Object__count ti_sdo_utils_List_Object__count__C = 2;

/* Object__heap__C */
__FAR__ const CT__ti_sdo_utils_List_Object__heap ti_sdo_utils_List_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sdo_utils_List_Object__sizeof ti_sdo_utils_List_Object__sizeof__C = sizeof(ti_sdo_utils_List_Object__);

/* Object__table__C */
__FAR__ const CT__ti_sdo_utils_List_Object__table ti_sdo_utils_List_Object__table__C = ti_sdo_utils_List_Object__table__V;


/*
 * ======== ti.sdo.utils.MultiProc INITIALIZERS ========
 */

/* Module__state__V */
ti_sdo_utils_MultiProc_Module_State__ ti_sdo_utils_MultiProc_Module__state__V = {
    (xdc_UInt16)0x0,  /* id */
    (xdc_UInt16)0x0,  /* baseIdOfCluster */
};

/* --> ti_sdo_utils_MultiProc_nameList__A */
const __T1_ti_sdo_utils_MultiProc_nameList ti_sdo_utils_MultiProc_nameList__A[1] = {
    0,  /* [0] */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sdo_utils_MultiProc_Module__diagsEnabled ti_sdo_utils_MultiProc_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sdo_utils_MultiProc_Module__diagsIncluded ti_sdo_utils_MultiProc_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sdo_utils_MultiProc_Module__diagsMask ti_sdo_utils_MultiProc_Module__diagsMask__C = ((CT__ti_sdo_utils_MultiProc_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sdo_utils_MultiProc_Module__gateObj ti_sdo_utils_MultiProc_Module__gateObj__C = ((CT__ti_sdo_utils_MultiProc_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sdo_utils_MultiProc_Module__gatePrms ti_sdo_utils_MultiProc_Module__gatePrms__C = ((CT__ti_sdo_utils_MultiProc_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sdo_utils_MultiProc_Module__id ti_sdo_utils_MultiProc_Module__id__C = (xdc_Bits16)0x8035;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sdo_utils_MultiProc_Module__loggerDefined ti_sdo_utils_MultiProc_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sdo_utils_MultiProc_Module__loggerObj ti_sdo_utils_MultiProc_Module__loggerObj__C = ((CT__ti_sdo_utils_MultiProc_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sdo_utils_MultiProc_Module__loggerFxn0 ti_sdo_utils_MultiProc_Module__loggerFxn0__C = ((CT__ti_sdo_utils_MultiProc_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sdo_utils_MultiProc_Module__loggerFxn1 ti_sdo_utils_MultiProc_Module__loggerFxn1__C = ((CT__ti_sdo_utils_MultiProc_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sdo_utils_MultiProc_Module__loggerFxn2 ti_sdo_utils_MultiProc_Module__loggerFxn2__C = ((CT__ti_sdo_utils_MultiProc_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sdo_utils_MultiProc_Module__loggerFxn4 ti_sdo_utils_MultiProc_Module__loggerFxn4__C = ((CT__ti_sdo_utils_MultiProc_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sdo_utils_MultiProc_Module__loggerFxn8 ti_sdo_utils_MultiProc_Module__loggerFxn8__C = ((CT__ti_sdo_utils_MultiProc_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sdo_utils_MultiProc_Module__startupDoneFxn ti_sdo_utils_MultiProc_Module__startupDoneFxn__C = ((CT__ti_sdo_utils_MultiProc_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sdo_utils_MultiProc_Object__count ti_sdo_utils_MultiProc_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__ti_sdo_utils_MultiProc_Object__heap ti_sdo_utils_MultiProc_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sdo_utils_MultiProc_Object__sizeof ti_sdo_utils_MultiProc_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__ti_sdo_utils_MultiProc_Object__table ti_sdo_utils_MultiProc_Object__table__C = 0;

/* A_invalidMultiProcId__C */
__FAR__ const CT__ti_sdo_utils_MultiProc_A_invalidMultiProcId ti_sdo_utils_MultiProc_A_invalidMultiProcId__C = (((xdc_runtime_Assert_Id)2418) << 16 | 16);

/* A_invalidProcName__C */
__FAR__ const CT__ti_sdo_utils_MultiProc_A_invalidProcName ti_sdo_utils_MultiProc_A_invalidProcName__C = (((xdc_runtime_Assert_Id)2461) << 16 | 16);

/* nameList__C */
__FAR__ const CT__ti_sdo_utils_MultiProc_nameList ti_sdo_utils_MultiProc_nameList__C = ((CT__ti_sdo_utils_MultiProc_nameList)ti_sdo_utils_MultiProc_nameList__A);

/* numProcsInCluster__C */
__FAR__ const CT__ti_sdo_utils_MultiProc_numProcsInCluster ti_sdo_utils_MultiProc_numProcsInCluster__C = (xdc_UInt16)0x1;

/* numProcessors__C */
__FAR__ const CT__ti_sdo_utils_MultiProc_numProcessors ti_sdo_utils_MultiProc_numProcessors__C = (xdc_UInt16)0x1;

/* procIdList__C */
__FAR__ const CT__ti_sdo_utils_MultiProc_procIdList ti_sdo_utils_MultiProc_procIdList__C = ((CT__ti_sdo_utils_MultiProc_procIdList)0);


/*
 * ======== ti.sdo.utils.NameServer INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sdo_utils_NameServer_Object__DESC__C;

/* Object__PARAMS__C */
__FAR__ const ti_sdo_utils_NameServer_Params ti_sdo_utils_NameServer_Object__PARAMS__C = {
    sizeof (ti_sdo_utils_NameServer_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sdo_utils_NameServer_Object__PARAMS__C.__iprms, /* instance */
    (xdc_UInt)(-0x0 - 1),  /* maxRuntimeEntries */
    0,  /* tableHeap */
    1,  /* checkExisting */
    (xdc_UInt)0x0,  /* maxValueLen */
    (xdc_UInt)0x10,  /* maxNameLen */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* --> ti_sdo_utils_NameServer_Instance_State_0_table__A */
__T1_ti_sdo_utils_NameServer_Instance_State__table ti_sdo_utils_NameServer_Instance_State_0_table__A[1] = {
    {
        {
            ((ti_sdo_utils_List_Elem*)((void*)&ti_sdo_utils_NameServer_Object__table__V[0].Object_field_nameList.elem)),  /* next */
            ((ti_sdo_utils_List_Elem*)((void*)&ti_sdo_utils_NameServer_Object__table__V[0].Object_field_nameList.elem)),  /* prev */
        },  /* elem */
        "/genDevice",  /* name */
        (xdc_UInt)0x4,  /* len */
        ((xdc_UArg)((void*)(ti_sdo_io_drivers_Generator_Handle)&ti_sdo_io_drivers_Generator_Object__table__V[0])),  /* value */
    },  /* [0] */
};

/* Module__root__V */
ti_sdo_utils_NameServer_Module__ ti_sdo_utils_NameServer_Module__root__V = {
    {&ti_sdo_utils_NameServer_Module__root__V.link,  /* link.next */
    &ti_sdo_utils_NameServer_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sdo_utils_NameServer_Object__ ti_sdo_utils_NameServer_Object__table__V[2] = {
    {/* instance#0 */
        "DriverTable",  /* name */
        (xdc_UInt)0x10,  /* maxNameLen */
        (xdc_UInt)0x4,  /* maxValueLen */
        (xdc_UInt)0x1,  /* numStatic */
        (xdc_UInt)0x0,  /* numDynamic */
        ((void*)ti_sdo_utils_NameServer_Instance_State_0_table__A),  /* table */
        ((void*)0),  /* names */
        ((void*)0),  /* values */
        0,  /* tableHeap */
        1,  /* checkExisting */
        {
            {
                ((ti_sdo_utils_List_Elem*)((void*)&ti_sdo_utils_NameServer_Object__table__V[0].Object_field_freeList.elem)),  /* next */
                ((ti_sdo_utils_List_Elem*)((void*)&ti_sdo_utils_NameServer_Object__table__V[0].Object_field_freeList.elem)),  /* prev */
            },  /* elem */
        },  /* Object_field_freeList */
        {
            {
                ((ti_sdo_utils_List_Elem*)((void*)&ti_sdo_utils_NameServer_Instance_State_0_table__A[0].elem)),  /* next */
                ((ti_sdo_utils_List_Elem*)((void*)&ti_sdo_utils_NameServer_Instance_State_0_table__A[0].elem)),  /* prev */
            },  /* elem */
        },  /* Object_field_nameList */
    },
    {/* instance#1 */
        "Stream:ConverterTable",  /* name */
        (xdc_UInt)0x10,  /* maxNameLen */
        (xdc_UInt)0x4,  /* maxValueLen */
        (xdc_UInt)0x0,  /* numStatic */
        (xdc_UInt)0x0,  /* numDynamic */
        ((void*)0),  /* table */
        ((void*)0),  /* names */
        ((void*)0),  /* values */
        0,  /* tableHeap */
        1,  /* checkExisting */
        {
            {
                ((ti_sdo_utils_List_Elem*)((void*)&ti_sdo_utils_NameServer_Object__table__V[1].Object_field_freeList.elem)),  /* next */
                ((ti_sdo_utils_List_Elem*)((void*)&ti_sdo_utils_NameServer_Object__table__V[1].Object_field_freeList.elem)),  /* prev */
            },  /* elem */
        },  /* Object_field_freeList */
        {
            {
                ((ti_sdo_utils_List_Elem*)((void*)&ti_sdo_utils_NameServer_Object__table__V[1].Object_field_nameList.elem)),  /* next */
                ((ti_sdo_utils_List_Elem*)((void*)&ti_sdo_utils_NameServer_Object__table__V[1].Object_field_nameList.elem)),  /* prev */
            },  /* elem */
        },  /* Object_field_nameList */
    },
};

/* --> ti_sdo_utils_NameServer_Module_State_0_nsRemoteHandle__A */
__T1_ti_sdo_utils_NameServer_Module_State__nsRemoteHandle ti_sdo_utils_NameServer_Module_State_0_nsRemoteHandle__A[1];

/* Module__state__V */
ti_sdo_utils_NameServer_Module_State__ ti_sdo_utils_NameServer_Module__state__V = {
    ((void*)ti_sdo_utils_NameServer_Module_State_0_nsRemoteHandle__A),  /* nsRemoteHandle */
    (ti_sysbios_gates_GateSwi_Handle)&ti_sysbios_gates_GateSwi_Object__table__V[0],  /* gate */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sdo_utils_NameServer_Module__diagsEnabled ti_sdo_utils_NameServer_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sdo_utils_NameServer_Module__diagsIncluded ti_sdo_utils_NameServer_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sdo_utils_NameServer_Module__diagsMask ti_sdo_utils_NameServer_Module__diagsMask__C = ((CT__ti_sdo_utils_NameServer_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sdo_utils_NameServer_Module__gateObj ti_sdo_utils_NameServer_Module__gateObj__C = ((CT__ti_sdo_utils_NameServer_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sdo_utils_NameServer_Module__gatePrms ti_sdo_utils_NameServer_Module__gatePrms__C = ((CT__ti_sdo_utils_NameServer_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sdo_utils_NameServer_Module__id ti_sdo_utils_NameServer_Module__id__C = (xdc_Bits16)0x8033;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sdo_utils_NameServer_Module__loggerDefined ti_sdo_utils_NameServer_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sdo_utils_NameServer_Module__loggerObj ti_sdo_utils_NameServer_Module__loggerObj__C = ((CT__ti_sdo_utils_NameServer_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sdo_utils_NameServer_Module__loggerFxn0 ti_sdo_utils_NameServer_Module__loggerFxn0__C = ((CT__ti_sdo_utils_NameServer_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sdo_utils_NameServer_Module__loggerFxn1 ti_sdo_utils_NameServer_Module__loggerFxn1__C = ((CT__ti_sdo_utils_NameServer_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sdo_utils_NameServer_Module__loggerFxn2 ti_sdo_utils_NameServer_Module__loggerFxn2__C = ((CT__ti_sdo_utils_NameServer_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sdo_utils_NameServer_Module__loggerFxn4 ti_sdo_utils_NameServer_Module__loggerFxn4__C = ((CT__ti_sdo_utils_NameServer_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sdo_utils_NameServer_Module__loggerFxn8 ti_sdo_utils_NameServer_Module__loggerFxn8__C = ((CT__ti_sdo_utils_NameServer_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sdo_utils_NameServer_Module__startupDoneFxn ti_sdo_utils_NameServer_Module__startupDoneFxn__C = ((CT__ti_sdo_utils_NameServer_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sdo_utils_NameServer_Object__count ti_sdo_utils_NameServer_Object__count__C = 2;

/* Object__heap__C */
__FAR__ const CT__ti_sdo_utils_NameServer_Object__heap ti_sdo_utils_NameServer_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sdo_utils_NameServer_Object__sizeof ti_sdo_utils_NameServer_Object__sizeof__C = sizeof(ti_sdo_utils_NameServer_Object__);

/* Object__table__C */
__FAR__ const CT__ti_sdo_utils_NameServer_Object__table ti_sdo_utils_NameServer_Object__table__C = ti_sdo_utils_NameServer_Object__table__V;

/* A_invalidLen__C */
__FAR__ const CT__ti_sdo_utils_NameServer_A_invalidLen ti_sdo_utils_NameServer_A_invalidLen__C = (((xdc_runtime_Assert_Id)2348) << 16 | 16);

/* A_invArgument__C */
__FAR__ const CT__ti_sdo_utils_NameServer_A_invArgument ti_sdo_utils_NameServer_A_invArgument__C = (((xdc_runtime_Assert_Id)2377) << 16 | 16);

/* E_maxReached__C */
__FAR__ const CT__ti_sdo_utils_NameServer_E_maxReached ti_sdo_utils_NameServer_E_maxReached__C = (((xdc_runtime_Error_Id)3356) << 16 | 0);

/* E_entryExists__C */
__FAR__ const CT__ti_sdo_utils_NameServer_E_entryExists ti_sdo_utils_NameServer_E_entryExists__C = (((xdc_runtime_Error_Id)3425) << 16 | 0);

/* singleProcessor__C */
__FAR__ const CT__ti_sdo_utils_NameServer_singleProcessor ti_sdo_utils_NameServer_singleProcessor__C = 1;


/*
 * ======== ti.sdo.utils.NameServerRemoteNull INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sdo_utils_NameServerRemoteNull_Object__DESC__C;

/* Object__PARAMS__C */
__FAR__ const ti_sdo_utils_NameServerRemoteNull_Params ti_sdo_utils_NameServerRemoteNull_Object__PARAMS__C = {
    sizeof (ti_sdo_utils_NameServerRemoteNull_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sdo_utils_NameServerRemoteNull_Object__PARAMS__C.__iprms, /* instance */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sdo_utils_NameServerRemoteNull_Module__ ti_sdo_utils_NameServerRemoteNull_Module__root__V = {
    {&ti_sdo_utils_NameServerRemoteNull_Module__root__V.link,  /* link.next */
    &ti_sdo_utils_NameServerRemoteNull_Module__root__V.link},  /* link.prev */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sdo_utils_NameServerRemoteNull_Module__diagsEnabled ti_sdo_utils_NameServerRemoteNull_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sdo_utils_NameServerRemoteNull_Module__diagsIncluded ti_sdo_utils_NameServerRemoteNull_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sdo_utils_NameServerRemoteNull_Module__diagsMask ti_sdo_utils_NameServerRemoteNull_Module__diagsMask__C = ((CT__ti_sdo_utils_NameServerRemoteNull_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sdo_utils_NameServerRemoteNull_Module__gateObj ti_sdo_utils_NameServerRemoteNull_Module__gateObj__C = ((CT__ti_sdo_utils_NameServerRemoteNull_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sdo_utils_NameServerRemoteNull_Module__gatePrms ti_sdo_utils_NameServerRemoteNull_Module__gatePrms__C = ((CT__ti_sdo_utils_NameServerRemoteNull_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sdo_utils_NameServerRemoteNull_Module__id ti_sdo_utils_NameServerRemoteNull_Module__id__C = (xdc_Bits16)0x8034;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sdo_utils_NameServerRemoteNull_Module__loggerDefined ti_sdo_utils_NameServerRemoteNull_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sdo_utils_NameServerRemoteNull_Module__loggerObj ti_sdo_utils_NameServerRemoteNull_Module__loggerObj__C = ((CT__ti_sdo_utils_NameServerRemoteNull_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sdo_utils_NameServerRemoteNull_Module__loggerFxn0 ti_sdo_utils_NameServerRemoteNull_Module__loggerFxn0__C = ((CT__ti_sdo_utils_NameServerRemoteNull_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sdo_utils_NameServerRemoteNull_Module__loggerFxn1 ti_sdo_utils_NameServerRemoteNull_Module__loggerFxn1__C = ((CT__ti_sdo_utils_NameServerRemoteNull_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sdo_utils_NameServerRemoteNull_Module__loggerFxn2 ti_sdo_utils_NameServerRemoteNull_Module__loggerFxn2__C = ((CT__ti_sdo_utils_NameServerRemoteNull_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sdo_utils_NameServerRemoteNull_Module__loggerFxn4 ti_sdo_utils_NameServerRemoteNull_Module__loggerFxn4__C = ((CT__ti_sdo_utils_NameServerRemoteNull_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sdo_utils_NameServerRemoteNull_Module__loggerFxn8 ti_sdo_utils_NameServerRemoteNull_Module__loggerFxn8__C = ((CT__ti_sdo_utils_NameServerRemoteNull_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sdo_utils_NameServerRemoteNull_Module__startupDoneFxn ti_sdo_utils_NameServerRemoteNull_Module__startupDoneFxn__C = ((CT__ti_sdo_utils_NameServerRemoteNull_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sdo_utils_NameServerRemoteNull_Object__count ti_sdo_utils_NameServerRemoteNull_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__ti_sdo_utils_NameServerRemoteNull_Object__heap ti_sdo_utils_NameServerRemoteNull_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sdo_utils_NameServerRemoteNull_Object__sizeof ti_sdo_utils_NameServerRemoteNull_Object__sizeof__C = sizeof(ti_sdo_utils_NameServerRemoteNull_Object__);

/* Object__table__C */
__FAR__ const CT__ti_sdo_utils_NameServerRemoteNull_Object__table ti_sdo_utils_NameServerRemoteNull_Object__table__C = 0;


/*
 * ======== ti.sdo.utils.NameServer_SetupProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.BIOS INITIALIZERS ========
 */

/* Module__state__V */
ti_sysbios_BIOS_Module_State__ ti_sysbios_BIOS_Module__state__V = {
    {
        (xdc_Bits32)0x0,  /* hi */
        (xdc_Bits32)0x11e1a300,  /* lo */
    },  /* cpuFreq */
    (xdc_UInt)0x0,  /* rtsGateCount */
    ((xdc_IArg)(0x0)),  /* rtsGateKey */
    (ti_sysbios_BIOS_RtsGateProxy_Handle)&ti_sysbios_gates_GateMutex_Object__table__V[1],  /* rtsGate */
    ti_sysbios_BIOS_ThreadType_Main,  /* threadType */
    ((xdc_Void(*)(xdc_Void))((xdc_Fxn)ti_sysbios_BIOS_startFunc)),  /* startFunc */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_BIOS_Module__diagsEnabled ti_sysbios_BIOS_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_BIOS_Module__diagsIncluded ti_sysbios_BIOS_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_BIOS_Module__diagsMask ti_sysbios_BIOS_Module__diagsMask__C = ((CT__ti_sysbios_BIOS_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_BIOS_Module__gateObj ti_sysbios_BIOS_Module__gateObj__C = ((CT__ti_sysbios_BIOS_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_BIOS_Module__gatePrms ti_sysbios_BIOS_Module__gatePrms__C = ((CT__ti_sysbios_BIOS_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_BIOS_Module__id ti_sysbios_BIOS_Module__id__C = (xdc_Bits16)0x8016;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerDefined ti_sysbios_BIOS_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerObj ti_sysbios_BIOS_Module__loggerObj__C = ((CT__ti_sysbios_BIOS_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerFxn0 ti_sysbios_BIOS_Module__loggerFxn0__C = ((CT__ti_sysbios_BIOS_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerFxn1 ti_sysbios_BIOS_Module__loggerFxn1__C = ((CT__ti_sysbios_BIOS_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerFxn2 ti_sysbios_BIOS_Module__loggerFxn2__C = ((CT__ti_sysbios_BIOS_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerFxn4 ti_sysbios_BIOS_Module__loggerFxn4__C = ((CT__ti_sysbios_BIOS_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerFxn8 ti_sysbios_BIOS_Module__loggerFxn8__C = ((CT__ti_sysbios_BIOS_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_BIOS_Module__startupDoneFxn ti_sysbios_BIOS_Module__startupDoneFxn__C = ((CT__ti_sysbios_BIOS_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_BIOS_Object__count ti_sysbios_BIOS_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_BIOS_Object__heap ti_sysbios_BIOS_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_BIOS_Object__sizeof ti_sysbios_BIOS_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__ti_sysbios_BIOS_Object__table ti_sysbios_BIOS_Object__table__C = 0;

/* smpEnabled__C */
__FAR__ const CT__ti_sysbios_BIOS_smpEnabled ti_sysbios_BIOS_smpEnabled__C = 0;

/* cpuFreq__C */
__FAR__ const CT__ti_sysbios_BIOS_cpuFreq ti_sysbios_BIOS_cpuFreq__C = {
    (xdc_Bits32)0x0,  /* hi */
    (xdc_Bits32)0x11e1a300,  /* lo */
};

/* taskEnabled__C */
__FAR__ const CT__ti_sysbios_BIOS_taskEnabled ti_sysbios_BIOS_taskEnabled__C = 1;

/* swiEnabled__C */
__FAR__ const CT__ti_sysbios_BIOS_swiEnabled ti_sysbios_BIOS_swiEnabled__C = 1;

/* clockEnabled__C */
__FAR__ const CT__ti_sysbios_BIOS_clockEnabled ti_sysbios_BIOS_clockEnabled__C = 1;

/* heapSize__C */
__FAR__ const CT__ti_sysbios_BIOS_heapSize ti_sysbios_BIOS_heapSize__C = (xdc_SizeT)0x1000;

/* heapSection__C */
__FAR__ const CT__ti_sysbios_BIOS_heapSection ti_sysbios_BIOS_heapSection__C = 0;

/* installedErrorHook__C */
__FAR__ const CT__ti_sysbios_BIOS_installedErrorHook ti_sysbios_BIOS_installedErrorHook__C = ((CT__ti_sysbios_BIOS_installedErrorHook)((xdc_Fxn)xdc_runtime_Error_print__E));


/*
 * ======== ti.sysbios.BIOS_RtsGateProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.family.arm.HwiCommon INITIALIZERS ========
 */

/* Module__state__V */
ti_sysbios_family_arm_HwiCommon_Module_State__ ti_sysbios_family_arm_HwiCommon_Module__state__V = {
    ((xdc_Char*)0),  /* taskSP */
    ((xdc_Char*)0),  /* isrStack */
    ((xdc_Ptr)((void*)&__TI_STACK_BASE)),  /* isrStackBase */
    ((xdc_Ptr)((void*)&__TI_STACK_SIZE)),  /* isrStackSize */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_family_arm_HwiCommon_Module__diagsEnabled ti_sysbios_family_arm_HwiCommon_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_family_arm_HwiCommon_Module__diagsIncluded ti_sysbios_family_arm_HwiCommon_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_family_arm_HwiCommon_Module__diagsMask ti_sysbios_family_arm_HwiCommon_Module__diagsMask__C = ((CT__ti_sysbios_family_arm_HwiCommon_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_family_arm_HwiCommon_Module__gateObj ti_sysbios_family_arm_HwiCommon_Module__gateObj__C = ((CT__ti_sysbios_family_arm_HwiCommon_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_family_arm_HwiCommon_Module__gatePrms ti_sysbios_family_arm_HwiCommon_Module__gatePrms__C = ((CT__ti_sysbios_family_arm_HwiCommon_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_family_arm_HwiCommon_Module__id ti_sysbios_family_arm_HwiCommon_Module__id__C = (xdc_Bits16)0x8013;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_family_arm_HwiCommon_Module__loggerDefined ti_sysbios_family_arm_HwiCommon_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_family_arm_HwiCommon_Module__loggerObj ti_sysbios_family_arm_HwiCommon_Module__loggerObj__C = ((CT__ti_sysbios_family_arm_HwiCommon_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_family_arm_HwiCommon_Module__loggerFxn0 ti_sysbios_family_arm_HwiCommon_Module__loggerFxn0__C = ((CT__ti_sysbios_family_arm_HwiCommon_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_family_arm_HwiCommon_Module__loggerFxn1 ti_sysbios_family_arm_HwiCommon_Module__loggerFxn1__C = ((CT__ti_sysbios_family_arm_HwiCommon_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_family_arm_HwiCommon_Module__loggerFxn2 ti_sysbios_family_arm_HwiCommon_Module__loggerFxn2__C = ((CT__ti_sysbios_family_arm_HwiCommon_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_family_arm_HwiCommon_Module__loggerFxn4 ti_sysbios_family_arm_HwiCommon_Module__loggerFxn4__C = ((CT__ti_sysbios_family_arm_HwiCommon_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_family_arm_HwiCommon_Module__loggerFxn8 ti_sysbios_family_arm_HwiCommon_Module__loggerFxn8__C = ((CT__ti_sysbios_family_arm_HwiCommon_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_family_arm_HwiCommon_Module__startupDoneFxn ti_sysbios_family_arm_HwiCommon_Module__startupDoneFxn__C = ((CT__ti_sysbios_family_arm_HwiCommon_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_family_arm_HwiCommon_Object__count ti_sysbios_family_arm_HwiCommon_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_family_arm_HwiCommon_Object__heap ti_sysbios_family_arm_HwiCommon_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_family_arm_HwiCommon_Object__sizeof ti_sysbios_family_arm_HwiCommon_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__ti_sysbios_family_arm_HwiCommon_Object__table ti_sysbios_family_arm_HwiCommon_Object__table__C = 0;


/*
 * ======== ti.sysbios.family.arm.IntrinsicsSupport INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_family_arm_IntrinsicsSupport_Module__diagsEnabled ti_sysbios_family_arm_IntrinsicsSupport_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_family_arm_IntrinsicsSupport_Module__diagsIncluded ti_sysbios_family_arm_IntrinsicsSupport_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_family_arm_IntrinsicsSupport_Module__diagsMask ti_sysbios_family_arm_IntrinsicsSupport_Module__diagsMask__C = ((CT__ti_sysbios_family_arm_IntrinsicsSupport_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_family_arm_IntrinsicsSupport_Module__gateObj ti_sysbios_family_arm_IntrinsicsSupport_Module__gateObj__C = ((CT__ti_sysbios_family_arm_IntrinsicsSupport_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_family_arm_IntrinsicsSupport_Module__gatePrms ti_sysbios_family_arm_IntrinsicsSupport_Module__gatePrms__C = ((CT__ti_sysbios_family_arm_IntrinsicsSupport_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_family_arm_IntrinsicsSupport_Module__id ti_sysbios_family_arm_IntrinsicsSupport_Module__id__C = (xdc_Bits16)0x8014;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_family_arm_IntrinsicsSupport_Module__loggerDefined ti_sysbios_family_arm_IntrinsicsSupport_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_family_arm_IntrinsicsSupport_Module__loggerObj ti_sysbios_family_arm_IntrinsicsSupport_Module__loggerObj__C = ((CT__ti_sysbios_family_arm_IntrinsicsSupport_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_family_arm_IntrinsicsSupport_Module__loggerFxn0 ti_sysbios_family_arm_IntrinsicsSupport_Module__loggerFxn0__C = ((CT__ti_sysbios_family_arm_IntrinsicsSupport_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_family_arm_IntrinsicsSupport_Module__loggerFxn1 ti_sysbios_family_arm_IntrinsicsSupport_Module__loggerFxn1__C = ((CT__ti_sysbios_family_arm_IntrinsicsSupport_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_family_arm_IntrinsicsSupport_Module__loggerFxn2 ti_sysbios_family_arm_IntrinsicsSupport_Module__loggerFxn2__C = ((CT__ti_sysbios_family_arm_IntrinsicsSupport_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_family_arm_IntrinsicsSupport_Module__loggerFxn4 ti_sysbios_family_arm_IntrinsicsSupport_Module__loggerFxn4__C = ((CT__ti_sysbios_family_arm_IntrinsicsSupport_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_family_arm_IntrinsicsSupport_Module__loggerFxn8 ti_sysbios_family_arm_IntrinsicsSupport_Module__loggerFxn8__C = ((CT__ti_sysbios_family_arm_IntrinsicsSupport_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_family_arm_IntrinsicsSupport_Module__startupDoneFxn ti_sysbios_family_arm_IntrinsicsSupport_Module__startupDoneFxn__C = ((CT__ti_sysbios_family_arm_IntrinsicsSupport_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_family_arm_IntrinsicsSupport_Object__count ti_sysbios_family_arm_IntrinsicsSupport_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_family_arm_IntrinsicsSupport_Object__heap ti_sysbios_family_arm_IntrinsicsSupport_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_family_arm_IntrinsicsSupport_Object__sizeof ti_sysbios_family_arm_IntrinsicsSupport_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__ti_sysbios_family_arm_IntrinsicsSupport_Object__table ti_sysbios_family_arm_IntrinsicsSupport_Object__table__C = 0;


/*
 * ======== ti.sysbios.family.arm.TaskSupport INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_family_arm_TaskSupport_Module__diagsEnabled ti_sysbios_family_arm_TaskSupport_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_family_arm_TaskSupport_Module__diagsIncluded ti_sysbios_family_arm_TaskSupport_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_family_arm_TaskSupport_Module__diagsMask ti_sysbios_family_arm_TaskSupport_Module__diagsMask__C = ((CT__ti_sysbios_family_arm_TaskSupport_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_family_arm_TaskSupport_Module__gateObj ti_sysbios_family_arm_TaskSupport_Module__gateObj__C = ((CT__ti_sysbios_family_arm_TaskSupport_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_family_arm_TaskSupport_Module__gatePrms ti_sysbios_family_arm_TaskSupport_Module__gatePrms__C = ((CT__ti_sysbios_family_arm_TaskSupport_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_family_arm_TaskSupport_Module__id ti_sysbios_family_arm_TaskSupport_Module__id__C = (xdc_Bits16)0x8015;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_family_arm_TaskSupport_Module__loggerDefined ti_sysbios_family_arm_TaskSupport_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_family_arm_TaskSupport_Module__loggerObj ti_sysbios_family_arm_TaskSupport_Module__loggerObj__C = ((CT__ti_sysbios_family_arm_TaskSupport_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_family_arm_TaskSupport_Module__loggerFxn0 ti_sysbios_family_arm_TaskSupport_Module__loggerFxn0__C = ((CT__ti_sysbios_family_arm_TaskSupport_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_family_arm_TaskSupport_Module__loggerFxn1 ti_sysbios_family_arm_TaskSupport_Module__loggerFxn1__C = ((CT__ti_sysbios_family_arm_TaskSupport_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_family_arm_TaskSupport_Module__loggerFxn2 ti_sysbios_family_arm_TaskSupport_Module__loggerFxn2__C = ((CT__ti_sysbios_family_arm_TaskSupport_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_family_arm_TaskSupport_Module__loggerFxn4 ti_sysbios_family_arm_TaskSupport_Module__loggerFxn4__C = ((CT__ti_sysbios_family_arm_TaskSupport_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_family_arm_TaskSupport_Module__loggerFxn8 ti_sysbios_family_arm_TaskSupport_Module__loggerFxn8__C = ((CT__ti_sysbios_family_arm_TaskSupport_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_family_arm_TaskSupport_Module__startupDoneFxn ti_sysbios_family_arm_TaskSupport_Module__startupDoneFxn__C = ((CT__ti_sysbios_family_arm_TaskSupport_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_family_arm_TaskSupport_Object__count ti_sysbios_family_arm_TaskSupport_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_family_arm_TaskSupport_Object__heap ti_sysbios_family_arm_TaskSupport_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_family_arm_TaskSupport_Object__sizeof ti_sysbios_family_arm_TaskSupport_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__ti_sysbios_family_arm_TaskSupport_Object__table ti_sysbios_family_arm_TaskSupport_Object__table__C = 0;

/* defaultStackSize__C */
__FAR__ const CT__ti_sysbios_family_arm_TaskSupport_defaultStackSize ti_sysbios_family_arm_TaskSupport_defaultStackSize__C = (xdc_SizeT)0x800;

/* stackAlignment__C */
__FAR__ const CT__ti_sysbios_family_arm_TaskSupport_stackAlignment ti_sysbios_family_arm_TaskSupport_stackAlignment__C = (xdc_UInt)0x8;


/*
 * ======== ti.sysbios.family.arm.arm9.Cache INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_family_arm_arm9_Cache_Module__diagsEnabled ti_sysbios_family_arm_arm9_Cache_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_family_arm_arm9_Cache_Module__diagsIncluded ti_sysbios_family_arm_arm9_Cache_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_family_arm_arm9_Cache_Module__diagsMask ti_sysbios_family_arm_arm9_Cache_Module__diagsMask__C = ((CT__ti_sysbios_family_arm_arm9_Cache_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_family_arm_arm9_Cache_Module__gateObj ti_sysbios_family_arm_arm9_Cache_Module__gateObj__C = ((CT__ti_sysbios_family_arm_arm9_Cache_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_family_arm_arm9_Cache_Module__gatePrms ti_sysbios_family_arm_arm9_Cache_Module__gatePrms__C = ((CT__ti_sysbios_family_arm_arm9_Cache_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_family_arm_arm9_Cache_Module__id ti_sysbios_family_arm_arm9_Cache_Module__id__C = (xdc_Bits16)0x8043;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_family_arm_arm9_Cache_Module__loggerDefined ti_sysbios_family_arm_arm9_Cache_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_family_arm_arm9_Cache_Module__loggerObj ti_sysbios_family_arm_arm9_Cache_Module__loggerObj__C = ((CT__ti_sysbios_family_arm_arm9_Cache_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_family_arm_arm9_Cache_Module__loggerFxn0 ti_sysbios_family_arm_arm9_Cache_Module__loggerFxn0__C = ((CT__ti_sysbios_family_arm_arm9_Cache_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_family_arm_arm9_Cache_Module__loggerFxn1 ti_sysbios_family_arm_arm9_Cache_Module__loggerFxn1__C = ((CT__ti_sysbios_family_arm_arm9_Cache_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_family_arm_arm9_Cache_Module__loggerFxn2 ti_sysbios_family_arm_arm9_Cache_Module__loggerFxn2__C = ((CT__ti_sysbios_family_arm_arm9_Cache_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_family_arm_arm9_Cache_Module__loggerFxn4 ti_sysbios_family_arm_arm9_Cache_Module__loggerFxn4__C = ((CT__ti_sysbios_family_arm_arm9_Cache_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_family_arm_arm9_Cache_Module__loggerFxn8 ti_sysbios_family_arm_arm9_Cache_Module__loggerFxn8__C = ((CT__ti_sysbios_family_arm_arm9_Cache_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_family_arm_arm9_Cache_Module__startupDoneFxn ti_sysbios_family_arm_arm9_Cache_Module__startupDoneFxn__C = ((CT__ti_sysbios_family_arm_arm9_Cache_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_family_arm_arm9_Cache_Object__count ti_sysbios_family_arm_arm9_Cache_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_family_arm_arm9_Cache_Object__heap ti_sysbios_family_arm_arm9_Cache_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_family_arm_arm9_Cache_Object__sizeof ti_sysbios_family_arm_arm9_Cache_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__ti_sysbios_family_arm_arm9_Cache_Object__table ti_sysbios_family_arm_arm9_Cache_Object__table__C = 0;

/* enableCache__C */
__FAR__ const CT__ti_sysbios_family_arm_arm9_Cache_enableCache ti_sysbios_family_arm_arm9_Cache_enableCache__C = 1;


/*
 * ======== ti.sysbios.family.arm.arm9.Mmu INITIALIZERS ========
 */

/* --> ti_sysbios_family_arm_arm9_Mmu_Module_State_0_tableBuf__A */
__T1_ti_sysbios_family_arm_arm9_Mmu_Module_State__tableBuf ti_sysbios_family_arm_arm9_Mmu_Module_State_0_tableBuf__A[4096];

/* Module__state__V */
ti_sysbios_family_arm_arm9_Mmu_Module_State__ ti_sysbios_family_arm_arm9_Mmu_Module__state__V = {
    ((void*)ti_sysbios_family_arm_arm9_Mmu_Module_State_0_tableBuf__A),  /* tableBuf */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_family_arm_arm9_Mmu_Module__diagsEnabled ti_sysbios_family_arm_arm9_Mmu_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_family_arm_arm9_Mmu_Module__diagsIncluded ti_sysbios_family_arm_arm9_Mmu_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_family_arm_arm9_Mmu_Module__diagsMask ti_sysbios_family_arm_arm9_Mmu_Module__diagsMask__C = ((CT__ti_sysbios_family_arm_arm9_Mmu_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_family_arm_arm9_Mmu_Module__gateObj ti_sysbios_family_arm_arm9_Mmu_Module__gateObj__C = ((CT__ti_sysbios_family_arm_arm9_Mmu_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_family_arm_arm9_Mmu_Module__gatePrms ti_sysbios_family_arm_arm9_Mmu_Module__gatePrms__C = ((CT__ti_sysbios_family_arm_arm9_Mmu_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_family_arm_arm9_Mmu_Module__id ti_sysbios_family_arm_arm9_Mmu_Module__id__C = (xdc_Bits16)0x8044;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_family_arm_arm9_Mmu_Module__loggerDefined ti_sysbios_family_arm_arm9_Mmu_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_family_arm_arm9_Mmu_Module__loggerObj ti_sysbios_family_arm_arm9_Mmu_Module__loggerObj__C = ((CT__ti_sysbios_family_arm_arm9_Mmu_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_family_arm_arm9_Mmu_Module__loggerFxn0 ti_sysbios_family_arm_arm9_Mmu_Module__loggerFxn0__C = ((CT__ti_sysbios_family_arm_arm9_Mmu_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_family_arm_arm9_Mmu_Module__loggerFxn1 ti_sysbios_family_arm_arm9_Mmu_Module__loggerFxn1__C = ((CT__ti_sysbios_family_arm_arm9_Mmu_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_family_arm_arm9_Mmu_Module__loggerFxn2 ti_sysbios_family_arm_arm9_Mmu_Module__loggerFxn2__C = ((CT__ti_sysbios_family_arm_arm9_Mmu_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_family_arm_arm9_Mmu_Module__loggerFxn4 ti_sysbios_family_arm_arm9_Mmu_Module__loggerFxn4__C = ((CT__ti_sysbios_family_arm_arm9_Mmu_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_family_arm_arm9_Mmu_Module__loggerFxn8 ti_sysbios_family_arm_arm9_Mmu_Module__loggerFxn8__C = ((CT__ti_sysbios_family_arm_arm9_Mmu_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_family_arm_arm9_Mmu_Module__startupDoneFxn ti_sysbios_family_arm_arm9_Mmu_Module__startupDoneFxn__C = ((CT__ti_sysbios_family_arm_arm9_Mmu_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_family_arm_arm9_Mmu_Object__count ti_sysbios_family_arm_arm9_Mmu_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_family_arm_arm9_Mmu_Object__heap ti_sysbios_family_arm_arm9_Mmu_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_family_arm_arm9_Mmu_Object__sizeof ti_sysbios_family_arm_arm9_Mmu_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__ti_sysbios_family_arm_arm9_Mmu_Object__table ti_sysbios_family_arm_arm9_Mmu_Object__table__C = 0;

/* A_nullPointer__C */
__FAR__ const CT__ti_sysbios_family_arm_arm9_Mmu_A_nullPointer ti_sysbios_family_arm_arm9_Mmu_A_nullPointer__C = (((xdc_runtime_Assert_Id)2638) << 16 | 16);

/* A_unknownDescType__C */
__FAR__ const CT__ti_sysbios_family_arm_arm9_Mmu_A_unknownDescType ti_sysbios_family_arm_arm9_Mmu_A_unknownDescType__C = (((xdc_runtime_Assert_Id)2669) << 16 | 16);

/* defaultAttrs__C */
__FAR__ const CT__ti_sysbios_family_arm_arm9_Mmu_defaultAttrs ti_sysbios_family_arm_arm9_Mmu_defaultAttrs__C = {
    ti_sysbios_family_arm_arm9_Mmu_FirstLevelDesc_SECTION,  /* type */
    0,  /* bufferable */
    0,  /* cacheable */
    (xdc_UInt8)0x1,  /* imp */
    (xdc_UInt8)0x0,  /* domain */
    (xdc_UInt8)0x3,  /* accPerm */
};

/* enableMMU__C */
__FAR__ const CT__ti_sysbios_family_arm_arm9_Mmu_enableMMU ti_sysbios_family_arm_arm9_Mmu_enableMMU__C = 1;


/*
 * ======== ti.sysbios.family.arm.dm6446.Hwi INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_family_arm_dm6446_Hwi_Object__DESC__C;

/* Object__PARAMS__C */
__FAR__ const ti_sysbios_family_arm_dm6446_Hwi_Params ti_sysbios_family_arm_dm6446_Hwi_Object__PARAMS__C = {
    sizeof (ti_sysbios_family_arm_dm6446_Hwi_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_family_arm_dm6446_Hwi_Object__PARAMS__C.__iprms, /* instance */
    ti_sysbios_interfaces_IHwi_MaskingOption_SELF,  /* maskSetting */
    ((xdc_UArg)(0x0)),  /* arg */
    1,  /* enableInt */
    (xdc_Int)(-0x0 - 1),  /* eventId */
    (xdc_Int)0x7,  /* priority */
    (xdc_Bits32)0x0,  /* disableMask0 */
    (xdc_Bits32)0x0,  /* disableMask1 */
    (xdc_Bits32)0x0,  /* restoreMask0 */
    (xdc_Bits32)0x0,  /* restoreMask1 */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_family_arm_dm6446_Hwi_Module__ ti_sysbios_family_arm_dm6446_Hwi_Module__root__V = {
    {&ti_sysbios_family_arm_dm6446_Hwi_Module__root__V.link,  /* link.next */
    &ti_sysbios_family_arm_dm6446_Hwi_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_family_arm_dm6446_Hwi_Object__ ti_sysbios_family_arm_dm6446_Hwi_Object__table__V[1] = {
    {/* instance#0 */
        0,
        (xdc_UInt)0x7,  /* priority */
        (xdc_Bits32)0x0,  /* disableMask0 */
        (xdc_Bits32)0x1,  /* disableMask1 */
        (xdc_Bits32)0x0,  /* restoreMask0 */
        (xdc_Bits32)0x1,  /* restoreMask1 */
        ((xdc_UArg)0),  /* arg */
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_knl_Clock_doTick__I)),  /* fxn */
        (xdc_Int)0x20,  /* intNum */
        ((xdc_UArg)0),  /* irp */
        ((void*)0),  /* hookEnv */
    },
};

/* --> ti_sysbios_family_arm_dm6446_Hwi_Module_State_0_fiqStack__A */
__T1_ti_sysbios_family_arm_dm6446_Hwi_Module_State__fiqStack ti_sysbios_family_arm_dm6446_Hwi_Module_State_0_fiqStack__A[1024];

/* Module__state__V */
ti_sysbios_family_arm_dm6446_Hwi_Module_State__ ti_sysbios_family_arm_dm6446_Hwi_Module__state__V = {
    (xdc_Bits32)0x0,  /* eint0Mask */
    (xdc_Bits32)0x1,  /* eint1Mask */
    (xdc_UInt)0x0,  /* irp */
    ((xdc_Char*)0),  /* taskSP */
    ((xdc_Char*)0),  /* isrStack */
    ((xdc_Ptr)((void*)&__TI_STACK_BASE)),  /* isrStackBase */
    ((xdc_Ptr)((void*)&__TI_STACK_SIZE)),  /* isrStackSize */
    ((void*)ti_sysbios_family_arm_dm6446_Hwi_Module_State_0_fiqStack__A),  /* fiqStack */
    (xdc_SizeT)0x400,  /* fiqStackSize */
    {
        0,  /* [0] */
        0,  /* [1] */
        0,  /* [2] */
        0,  /* [3] */
        0,  /* [4] */
        0,  /* [5] */
        0,  /* [6] */
        0,  /* [7] */
        0,  /* [8] */
        0,  /* [9] */
        0,  /* [10] */
        0,  /* [11] */
        0,  /* [12] */
        0,  /* [13] */
        0,  /* [14] */
        0,  /* [15] */
        0,  /* [16] */
        0,  /* [17] */
        0,  /* [18] */
        0,  /* [19] */
        0,  /* [20] */
        0,  /* [21] */
        0,  /* [22] */
        0,  /* [23] */
        0,  /* [24] */
        0,  /* [25] */
        0,  /* [26] */
        0,  /* [27] */
        0,  /* [28] */
        0,  /* [29] */
        0,  /* [30] */
        0,  /* [31] */
        (ti_sysbios_family_arm_dm6446_Hwi_Handle)&ti_sysbios_family_arm_dm6446_Hwi_Object__table__V[0],  /* [32] */
        0,  /* [33] */
        0,  /* [34] */
        0,  /* [35] */
        0,  /* [36] */
        0,  /* [37] */
        0,  /* [38] */
        0,  /* [39] */
        0,  /* [40] */
        0,  /* [41] */
        0,  /* [42] */
        0,  /* [43] */
        0,  /* [44] */
        0,  /* [45] */
        0,  /* [46] */
        0,  /* [47] */
        0,  /* [48] */
        0,  /* [49] */
        0,  /* [50] */
        0,  /* [51] */
        0,  /* [52] */
        0,  /* [53] */
        0,  /* [54] */
        0,  /* [55] */
        0,  /* [56] */
        0,  /* [57] */
        0,  /* [58] */
        0,  /* [59] */
        0,  /* [60] */
        0,  /* [61] */
        0,  /* [62] */
        0,  /* [63] */
    },  /* dispatchTable */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_family_arm_dm6446_Hwi_Module__diagsEnabled ti_sysbios_family_arm_dm6446_Hwi_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_family_arm_dm6446_Hwi_Module__diagsIncluded ti_sysbios_family_arm_dm6446_Hwi_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_family_arm_dm6446_Hwi_Module__diagsMask ti_sysbios_family_arm_dm6446_Hwi_Module__diagsMask__C = ((CT__ti_sysbios_family_arm_dm6446_Hwi_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_family_arm_dm6446_Hwi_Module__gateObj ti_sysbios_family_arm_dm6446_Hwi_Module__gateObj__C = ((CT__ti_sysbios_family_arm_dm6446_Hwi_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_family_arm_dm6446_Hwi_Module__gatePrms ti_sysbios_family_arm_dm6446_Hwi_Module__gatePrms__C = ((CT__ti_sysbios_family_arm_dm6446_Hwi_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_family_arm_dm6446_Hwi_Module__id ti_sysbios_family_arm_dm6446_Hwi_Module__id__C = (xdc_Bits16)0x803e;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_family_arm_dm6446_Hwi_Module__loggerDefined ti_sysbios_family_arm_dm6446_Hwi_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_family_arm_dm6446_Hwi_Module__loggerObj ti_sysbios_family_arm_dm6446_Hwi_Module__loggerObj__C = ((CT__ti_sysbios_family_arm_dm6446_Hwi_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_family_arm_dm6446_Hwi_Module__loggerFxn0 ti_sysbios_family_arm_dm6446_Hwi_Module__loggerFxn0__C = ((CT__ti_sysbios_family_arm_dm6446_Hwi_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_family_arm_dm6446_Hwi_Module__loggerFxn1 ti_sysbios_family_arm_dm6446_Hwi_Module__loggerFxn1__C = ((CT__ti_sysbios_family_arm_dm6446_Hwi_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_family_arm_dm6446_Hwi_Module__loggerFxn2 ti_sysbios_family_arm_dm6446_Hwi_Module__loggerFxn2__C = ((CT__ti_sysbios_family_arm_dm6446_Hwi_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_family_arm_dm6446_Hwi_Module__loggerFxn4 ti_sysbios_family_arm_dm6446_Hwi_Module__loggerFxn4__C = ((CT__ti_sysbios_family_arm_dm6446_Hwi_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_family_arm_dm6446_Hwi_Module__loggerFxn8 ti_sysbios_family_arm_dm6446_Hwi_Module__loggerFxn8__C = ((CT__ti_sysbios_family_arm_dm6446_Hwi_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_family_arm_dm6446_Hwi_Module__startupDoneFxn ti_sysbios_family_arm_dm6446_Hwi_Module__startupDoneFxn__C = ((CT__ti_sysbios_family_arm_dm6446_Hwi_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_family_arm_dm6446_Hwi_Object__count ti_sysbios_family_arm_dm6446_Hwi_Object__count__C = 1;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_family_arm_dm6446_Hwi_Object__heap ti_sysbios_family_arm_dm6446_Hwi_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_family_arm_dm6446_Hwi_Object__sizeof ti_sysbios_family_arm_dm6446_Hwi_Object__sizeof__C = sizeof(ti_sysbios_family_arm_dm6446_Hwi_Object__);

/* Object__table__C */
__FAR__ const CT__ti_sysbios_family_arm_dm6446_Hwi_Object__table ti_sysbios_family_arm_dm6446_Hwi_Object__table__C = ti_sysbios_family_arm_dm6446_Hwi_Object__table__V;

/* dispatcherAutoNestingSupport__C */
__FAR__ const CT__ti_sysbios_family_arm_dm6446_Hwi_dispatcherAutoNestingSupport ti_sysbios_family_arm_dm6446_Hwi_dispatcherAutoNestingSupport__C = 1;

/* dispatcherSwiSupport__C */
__FAR__ const CT__ti_sysbios_family_arm_dm6446_Hwi_dispatcherSwiSupport ti_sysbios_family_arm_dm6446_Hwi_dispatcherSwiSupport__C = 1;

/* dispatcherTaskSupport__C */
__FAR__ const CT__ti_sysbios_family_arm_dm6446_Hwi_dispatcherTaskSupport ti_sysbios_family_arm_dm6446_Hwi_dispatcherTaskSupport__C = 1;

/* dispatcherIrpTrackingSupport__C */
__FAR__ const CT__ti_sysbios_family_arm_dm6446_Hwi_dispatcherIrpTrackingSupport ti_sysbios_family_arm_dm6446_Hwi_dispatcherIrpTrackingSupport__C = 1;

/* fiqStack__C */
__FAR__ const CT__ti_sysbios_family_arm_dm6446_Hwi_fiqStack ti_sysbios_family_arm_dm6446_Hwi_fiqStack__C = ((CT__ti_sysbios_family_arm_dm6446_Hwi_fiqStack)0);

/* eabaseSize__C */
__FAR__ const CT__ti_sysbios_family_arm_dm6446_Hwi_eabaseSize ti_sysbios_family_arm_dm6446_Hwi_eabaseSize__C = (xdc_Bits32)0x4;

/* E_alreadyDefined__C */
__FAR__ const CT__ti_sysbios_family_arm_dm6446_Hwi_E_alreadyDefined ti_sysbios_family_arm_dm6446_Hwi_E_alreadyDefined__C = (((xdc_runtime_Error_Id)3741) << 16 | 0);

/* LM_begin__C */
__FAR__ const CT__ti_sysbios_family_arm_dm6446_Hwi_LM_begin ti_sysbios_family_arm_dm6446_Hwi_LM_begin__C = (((xdc_runtime_Log_Event)4878) << 16 | 768);

/* LD_end__C */
__FAR__ const CT__ti_sysbios_family_arm_dm6446_Hwi_LD_end ti_sysbios_family_arm_dm6446_Hwi_LD_end__C = (((xdc_runtime_Log_Event)4948) << 16 | 512);

/* swiDisable__C */
__FAR__ const CT__ti_sysbios_family_arm_dm6446_Hwi_swiDisable ti_sysbios_family_arm_dm6446_Hwi_swiDisable__C = ((CT__ti_sysbios_family_arm_dm6446_Hwi_swiDisable)((xdc_Fxn)ti_sysbios_knl_Swi_disable__E));

/* swiRestoreHwi__C */
__FAR__ const CT__ti_sysbios_family_arm_dm6446_Hwi_swiRestoreHwi ti_sysbios_family_arm_dm6446_Hwi_swiRestoreHwi__C = ((CT__ti_sysbios_family_arm_dm6446_Hwi_swiRestoreHwi)((xdc_Fxn)ti_sysbios_knl_Swi_restoreHwi__E));

/* taskDisable__C */
__FAR__ const CT__ti_sysbios_family_arm_dm6446_Hwi_taskDisable ti_sysbios_family_arm_dm6446_Hwi_taskDisable__C = ((CT__ti_sysbios_family_arm_dm6446_Hwi_taskDisable)((xdc_Fxn)ti_sysbios_knl_Task_disable__E));

/* taskRestoreHwi__C */
__FAR__ const CT__ti_sysbios_family_arm_dm6446_Hwi_taskRestoreHwi ti_sysbios_family_arm_dm6446_Hwi_taskRestoreHwi__C = ((CT__ti_sysbios_family_arm_dm6446_Hwi_taskRestoreHwi)((xdc_Fxn)ti_sysbios_knl_Task_restoreHwi__E));

/* hooks__C */
__FAR__ const CT__ti_sysbios_family_arm_dm6446_Hwi_hooks ti_sysbios_family_arm_dm6446_Hwi_hooks__C = {0, 0};


/*
 * ======== ti.sysbios.family.arm.dm6446.TimerSupport INITIALIZERS ========
 */

/* --> ti_sysbios_family_arm_dm6446_TimerSupport_Module_State_0_suspSrc__A */
__T1_ti_sysbios_family_arm_dm6446_TimerSupport_Module_State__suspSrc ti_sysbios_family_arm_dm6446_TimerSupport_Module_State_0_suspSrc__A[2] = {
    ti_sysbios_family_arm_dm6446_TimerSupport_SuspSrc_ARM,  /* [0] */
    ti_sysbios_family_arm_dm6446_TimerSupport_SuspSrc_ARM,  /* [1] */
};

/* Module__state__V */
ti_sysbios_family_arm_dm6446_TimerSupport_Module_State__ ti_sysbios_family_arm_dm6446_TimerSupport_Module__state__V = {
    ((void*)ti_sysbios_family_arm_dm6446_TimerSupport_Module_State_0_suspSrc__A),  /* suspSrc */
};

/* --> ti_sysbios_family_arm_dm6446_TimerSupport_timer__A */
const __T1_ti_sysbios_family_arm_dm6446_TimerSupport_timer ti_sysbios_family_arm_dm6446_TimerSupport_timer__A[2] = {
    {
        ti_sysbios_family_arm_dm6446_TimerSupport_SuspSrc_ARM,  /* suspSrc */
    },  /* [0] */
    {
        ti_sysbios_family_arm_dm6446_TimerSupport_SuspSrc_ARM,  /* suspSrc */
    },  /* [1] */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_family_arm_dm6446_TimerSupport_Module__diagsEnabled ti_sysbios_family_arm_dm6446_TimerSupport_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_family_arm_dm6446_TimerSupport_Module__diagsIncluded ti_sysbios_family_arm_dm6446_TimerSupport_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_family_arm_dm6446_TimerSupport_Module__diagsMask ti_sysbios_family_arm_dm6446_TimerSupport_Module__diagsMask__C = ((CT__ti_sysbios_family_arm_dm6446_TimerSupport_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_family_arm_dm6446_TimerSupport_Module__gateObj ti_sysbios_family_arm_dm6446_TimerSupport_Module__gateObj__C = ((CT__ti_sysbios_family_arm_dm6446_TimerSupport_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_family_arm_dm6446_TimerSupport_Module__gatePrms ti_sysbios_family_arm_dm6446_TimerSupport_Module__gatePrms__C = ((CT__ti_sysbios_family_arm_dm6446_TimerSupport_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_family_arm_dm6446_TimerSupport_Module__id ti_sysbios_family_arm_dm6446_TimerSupport_Module__id__C = (xdc_Bits16)0x803f;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_family_arm_dm6446_TimerSupport_Module__loggerDefined ti_sysbios_family_arm_dm6446_TimerSupport_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_family_arm_dm6446_TimerSupport_Module__loggerObj ti_sysbios_family_arm_dm6446_TimerSupport_Module__loggerObj__C = ((CT__ti_sysbios_family_arm_dm6446_TimerSupport_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_family_arm_dm6446_TimerSupport_Module__loggerFxn0 ti_sysbios_family_arm_dm6446_TimerSupport_Module__loggerFxn0__C = ((CT__ti_sysbios_family_arm_dm6446_TimerSupport_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_family_arm_dm6446_TimerSupport_Module__loggerFxn1 ti_sysbios_family_arm_dm6446_TimerSupport_Module__loggerFxn1__C = ((CT__ti_sysbios_family_arm_dm6446_TimerSupport_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_family_arm_dm6446_TimerSupport_Module__loggerFxn2 ti_sysbios_family_arm_dm6446_TimerSupport_Module__loggerFxn2__C = ((CT__ti_sysbios_family_arm_dm6446_TimerSupport_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_family_arm_dm6446_TimerSupport_Module__loggerFxn4 ti_sysbios_family_arm_dm6446_TimerSupport_Module__loggerFxn4__C = ((CT__ti_sysbios_family_arm_dm6446_TimerSupport_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_family_arm_dm6446_TimerSupport_Module__loggerFxn8 ti_sysbios_family_arm_dm6446_TimerSupport_Module__loggerFxn8__C = ((CT__ti_sysbios_family_arm_dm6446_TimerSupport_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_family_arm_dm6446_TimerSupport_Module__startupDoneFxn ti_sysbios_family_arm_dm6446_TimerSupport_Module__startupDoneFxn__C = ((CT__ti_sysbios_family_arm_dm6446_TimerSupport_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_family_arm_dm6446_TimerSupport_Object__count ti_sysbios_family_arm_dm6446_TimerSupport_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_family_arm_dm6446_TimerSupport_Object__heap ti_sysbios_family_arm_dm6446_TimerSupport_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_family_arm_dm6446_TimerSupport_Object__sizeof ti_sysbios_family_arm_dm6446_TimerSupport_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__ti_sysbios_family_arm_dm6446_TimerSupport_Object__table ti_sysbios_family_arm_dm6446_TimerSupport_Object__table__C = 0;

/* timer__C */
__FAR__ const CT__ti_sysbios_family_arm_dm6446_TimerSupport_timer ti_sysbios_family_arm_dm6446_TimerSupport_timer__C = ((CT__ti_sysbios_family_arm_dm6446_TimerSupport_timer)ti_sysbios_family_arm_dm6446_TimerSupport_timer__A);


/*
 * ======== ti.sysbios.family.arm.exc.Exception INITIALIZERS ========
 */

/* --> ti_sysbios_family_arm_exc_Exception_Module_State_0_excStack__A */
__T1_ti_sysbios_family_arm_exc_Exception_Module_State__excStack ti_sysbios_family_arm_exc_Exception_Module_State_0_excStack__A[128];

/* Module__state__V */
ti_sysbios_family_arm_exc_Exception_Module_State__ ti_sysbios_family_arm_exc_Exception_Module__state__V = {
    0,  /* excActive */
    ((ti_sysbios_family_arm_exc_Exception_ExcContext*)0),  /* excContext */
    ((xdc_Ptr)0),  /* excStackBuffer */
    ((void*)ti_sysbios_family_arm_exc_Exception_Module_State_0_excStack__A),  /* excStack */
    (xdc_SizeT)0x80,  /* excStackSize */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_family_arm_exc_Exception_Module__diagsEnabled ti_sysbios_family_arm_exc_Exception_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_family_arm_exc_Exception_Module__diagsIncluded ti_sysbios_family_arm_exc_Exception_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_family_arm_exc_Exception_Module__diagsMask ti_sysbios_family_arm_exc_Exception_Module__diagsMask__C = ((CT__ti_sysbios_family_arm_exc_Exception_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_family_arm_exc_Exception_Module__gateObj ti_sysbios_family_arm_exc_Exception_Module__gateObj__C = ((CT__ti_sysbios_family_arm_exc_Exception_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_family_arm_exc_Exception_Module__gatePrms ti_sysbios_family_arm_exc_Exception_Module__gatePrms__C = ((CT__ti_sysbios_family_arm_exc_Exception_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_family_arm_exc_Exception_Module__id ti_sysbios_family_arm_exc_Exception_Module__id__C = (xdc_Bits16)0x8041;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_family_arm_exc_Exception_Module__loggerDefined ti_sysbios_family_arm_exc_Exception_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_family_arm_exc_Exception_Module__loggerObj ti_sysbios_family_arm_exc_Exception_Module__loggerObj__C = ((CT__ti_sysbios_family_arm_exc_Exception_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_family_arm_exc_Exception_Module__loggerFxn0 ti_sysbios_family_arm_exc_Exception_Module__loggerFxn0__C = ((CT__ti_sysbios_family_arm_exc_Exception_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_family_arm_exc_Exception_Module__loggerFxn1 ti_sysbios_family_arm_exc_Exception_Module__loggerFxn1__C = ((CT__ti_sysbios_family_arm_exc_Exception_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_family_arm_exc_Exception_Module__loggerFxn2 ti_sysbios_family_arm_exc_Exception_Module__loggerFxn2__C = ((CT__ti_sysbios_family_arm_exc_Exception_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_family_arm_exc_Exception_Module__loggerFxn4 ti_sysbios_family_arm_exc_Exception_Module__loggerFxn4__C = ((CT__ti_sysbios_family_arm_exc_Exception_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_family_arm_exc_Exception_Module__loggerFxn8 ti_sysbios_family_arm_exc_Exception_Module__loggerFxn8__C = ((CT__ti_sysbios_family_arm_exc_Exception_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_family_arm_exc_Exception_Module__startupDoneFxn ti_sysbios_family_arm_exc_Exception_Module__startupDoneFxn__C = ((CT__ti_sysbios_family_arm_exc_Exception_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_family_arm_exc_Exception_Object__count ti_sysbios_family_arm_exc_Exception_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_family_arm_exc_Exception_Object__heap ti_sysbios_family_arm_exc_Exception_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_family_arm_exc_Exception_Object__sizeof ti_sysbios_family_arm_exc_Exception_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__ti_sysbios_family_arm_exc_Exception_Object__table ti_sysbios_family_arm_exc_Exception_Object__table__C = 0;

/* E_swi__C */
__FAR__ const CT__ti_sysbios_family_arm_exc_Exception_E_swi ti_sysbios_family_arm_exc_Exception_E_swi__C = (((xdc_runtime_Error_Id)3789) << 16 | 0);

/* E_prefetchAbort__C */
__FAR__ const CT__ti_sysbios_family_arm_exc_Exception_E_prefetchAbort ti_sysbios_family_arm_exc_Exception_E_prefetchAbort__C = (((xdc_runtime_Error_Id)3822) << 16 | 0);

/* E_dataAbort__C */
__FAR__ const CT__ti_sysbios_family_arm_exc_Exception_E_dataAbort ti_sysbios_family_arm_exc_Exception_E_dataAbort__C = (((xdc_runtime_Error_Id)3865) << 16 | 0);

/* E_undefinedInstruction__C */
__FAR__ const CT__ti_sysbios_family_arm_exc_Exception_E_undefinedInstruction ti_sysbios_family_arm_exc_Exception_E_undefinedInstruction__C = (((xdc_runtime_Error_Id)3904) << 16 | 0);

/* enableDecode__C */
__FAR__ const CT__ti_sysbios_family_arm_exc_Exception_enableDecode ti_sysbios_family_arm_exc_Exception_enableDecode__C = 1;

/* excStack__C */
__FAR__ const CT__ti_sysbios_family_arm_exc_Exception_excStack ti_sysbios_family_arm_exc_Exception_excStack__C = ((CT__ti_sysbios_family_arm_exc_Exception_excStack)0);

/* excHookFunc__C */
__FAR__ const CT__ti_sysbios_family_arm_exc_Exception_excHookFunc ti_sysbios_family_arm_exc_Exception_excHookFunc__C = ((CT__ti_sysbios_family_arm_exc_Exception_excHookFunc)0);


/*
 * ======== ti.sysbios.gates.GateHwi INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_gates_GateHwi_Object__DESC__C;

/* Object__PARAMS__C */
__FAR__ const ti_sysbios_gates_GateHwi_Params ti_sysbios_gates_GateHwi_Object__PARAMS__C = {
    sizeof (ti_sysbios_gates_GateHwi_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_gates_GateHwi_Object__PARAMS__C.__iprms, /* instance */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_gates_GateHwi_Module__ ti_sysbios_gates_GateHwi_Module__root__V = {
    {&ti_sysbios_gates_GateHwi_Module__root__V.link,  /* link.next */
    &ti_sysbios_gates_GateHwi_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_gates_GateHwi_Object__ ti_sysbios_gates_GateHwi_Object__table__V[1] = {
    {/* instance#0 */
        &ti_sysbios_gates_GateHwi_Module__FXNS__C,
    },
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__diagsEnabled ti_sysbios_gates_GateHwi_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__diagsIncluded ti_sysbios_gates_GateHwi_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__diagsMask ti_sysbios_gates_GateHwi_Module__diagsMask__C = ((CT__ti_sysbios_gates_GateHwi_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__gateObj ti_sysbios_gates_GateHwi_Module__gateObj__C = ((CT__ti_sysbios_gates_GateHwi_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__gatePrms ti_sysbios_gates_GateHwi_Module__gatePrms__C = ((CT__ti_sysbios_gates_GateHwi_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__id ti_sysbios_gates_GateHwi_Module__id__C = (xdc_Bits16)0x8029;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerDefined ti_sysbios_gates_GateHwi_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerObj ti_sysbios_gates_GateHwi_Module__loggerObj__C = ((CT__ti_sysbios_gates_GateHwi_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn0 ti_sysbios_gates_GateHwi_Module__loggerFxn0__C = ((CT__ti_sysbios_gates_GateHwi_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn1 ti_sysbios_gates_GateHwi_Module__loggerFxn1__C = ((CT__ti_sysbios_gates_GateHwi_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn2 ti_sysbios_gates_GateHwi_Module__loggerFxn2__C = ((CT__ti_sysbios_gates_GateHwi_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn4 ti_sysbios_gates_GateHwi_Module__loggerFxn4__C = ((CT__ti_sysbios_gates_GateHwi_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn8 ti_sysbios_gates_GateHwi_Module__loggerFxn8__C = ((CT__ti_sysbios_gates_GateHwi_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__startupDoneFxn ti_sysbios_gates_GateHwi_Module__startupDoneFxn__C = ((CT__ti_sysbios_gates_GateHwi_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Object__count ti_sysbios_gates_GateHwi_Object__count__C = 1;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Object__heap ti_sysbios_gates_GateHwi_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Object__sizeof ti_sysbios_gates_GateHwi_Object__sizeof__C = sizeof(ti_sysbios_gates_GateHwi_Object__);

/* Object__table__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Object__table ti_sysbios_gates_GateHwi_Object__table__C = ti_sysbios_gates_GateHwi_Object__table__V;


/*
 * ======== ti.sysbios.gates.GateMutex INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_gates_GateMutex_Object__DESC__C;

/* Object__PARAMS__C */
__FAR__ const ti_sysbios_gates_GateMutex_Params ti_sysbios_gates_GateMutex_Object__PARAMS__C = {
    sizeof (ti_sysbios_gates_GateMutex_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_gates_GateMutex_Object__PARAMS__C.__iprms, /* instance */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_gates_GateMutex_Module__ ti_sysbios_gates_GateMutex_Module__root__V = {
    {&ti_sysbios_gates_GateMutex_Module__root__V.link,  /* link.next */
    &ti_sysbios_gates_GateMutex_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_gates_GateMutex_Object__ ti_sysbios_gates_GateMutex_Object__table__V[2] = {
    {/* instance#0 */
        &ti_sysbios_gates_GateMutex_Module__FXNS__C,
        0,  /* owner */
        {
            0,  /* event */
            (xdc_UInt)0x1,  /* eventId */
            ti_sysbios_knl_Semaphore_Mode_COUNTING,  /* mode */
            (xdc_UInt16)0x1,  /* count */
            {
                {
                    ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_gates_GateMutex_Object__table__V[0].Object_field_sem.Object_field_pendQ.elem)),  /* next */
                    ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_gates_GateMutex_Object__table__V[0].Object_field_sem.Object_field_pendQ.elem)),  /* prev */
                },  /* elem */
            },  /* Object_field_pendQ */
        },  /* Object_field_sem */
    },
    {/* instance#1 */
        &ti_sysbios_gates_GateMutex_Module__FXNS__C,
        0,  /* owner */
        {
            0,  /* event */
            (xdc_UInt)0x1,  /* eventId */
            ti_sysbios_knl_Semaphore_Mode_COUNTING,  /* mode */
            (xdc_UInt16)0x1,  /* count */
            {
                {
                    ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_gates_GateMutex_Object__table__V[1].Object_field_sem.Object_field_pendQ.elem)),  /* next */
                    ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_gates_GateMutex_Object__table__V[1].Object_field_sem.Object_field_pendQ.elem)),  /* prev */
                },  /* elem */
            },  /* Object_field_pendQ */
        },  /* Object_field_sem */
    },
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__diagsEnabled ti_sysbios_gates_GateMutex_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__diagsIncluded ti_sysbios_gates_GateMutex_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__diagsMask ti_sysbios_gates_GateMutex_Module__diagsMask__C = ((CT__ti_sysbios_gates_GateMutex_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__gateObj ti_sysbios_gates_GateMutex_Module__gateObj__C = ((CT__ti_sysbios_gates_GateMutex_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__gatePrms ti_sysbios_gates_GateMutex_Module__gatePrms__C = ((CT__ti_sysbios_gates_GateMutex_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__id ti_sysbios_gates_GateMutex_Module__id__C = (xdc_Bits16)0x802b;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerDefined ti_sysbios_gates_GateMutex_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerObj ti_sysbios_gates_GateMutex_Module__loggerObj__C = ((CT__ti_sysbios_gates_GateMutex_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn0 ti_sysbios_gates_GateMutex_Module__loggerFxn0__C = ((CT__ti_sysbios_gates_GateMutex_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn1 ti_sysbios_gates_GateMutex_Module__loggerFxn1__C = ((CT__ti_sysbios_gates_GateMutex_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn2 ti_sysbios_gates_GateMutex_Module__loggerFxn2__C = ((CT__ti_sysbios_gates_GateMutex_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn4 ti_sysbios_gates_GateMutex_Module__loggerFxn4__C = ((CT__ti_sysbios_gates_GateMutex_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn8 ti_sysbios_gates_GateMutex_Module__loggerFxn8__C = ((CT__ti_sysbios_gates_GateMutex_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__startupDoneFxn ti_sysbios_gates_GateMutex_Module__startupDoneFxn__C = ((CT__ti_sysbios_gates_GateMutex_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_gates_GateMutex_Object__count ti_sysbios_gates_GateMutex_Object__count__C = 2;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_gates_GateMutex_Object__heap ti_sysbios_gates_GateMutex_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_gates_GateMutex_Object__sizeof ti_sysbios_gates_GateMutex_Object__sizeof__C = sizeof(ti_sysbios_gates_GateMutex_Object__);

/* Object__table__C */
__FAR__ const CT__ti_sysbios_gates_GateMutex_Object__table ti_sysbios_gates_GateMutex_Object__table__C = ti_sysbios_gates_GateMutex_Object__table__V;

/* A_badContext__C */
__FAR__ const CT__ti_sysbios_gates_GateMutex_A_badContext ti_sysbios_gates_GateMutex_A_badContext__C = (((xdc_runtime_Assert_Id)2178) << 16 | 16);


/*
 * ======== ti.sysbios.gates.GateSwi INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_gates_GateSwi_Object__DESC__C;

/* Object__PARAMS__C */
__FAR__ const ti_sysbios_gates_GateSwi_Params ti_sysbios_gates_GateSwi_Object__PARAMS__C = {
    sizeof (ti_sysbios_gates_GateSwi_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_gates_GateSwi_Object__PARAMS__C.__iprms, /* instance */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_gates_GateSwi_Module__ ti_sysbios_gates_GateSwi_Module__root__V = {
    {&ti_sysbios_gates_GateSwi_Module__root__V.link,  /* link.next */
    &ti_sysbios_gates_GateSwi_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_gates_GateSwi_Object__ ti_sysbios_gates_GateSwi_Object__table__V[1] = {
    {/* instance#0 */
        &ti_sysbios_gates_GateSwi_Module__FXNS__C,
    },
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_gates_GateSwi_Module__diagsEnabled ti_sysbios_gates_GateSwi_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_gates_GateSwi_Module__diagsIncluded ti_sysbios_gates_GateSwi_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_gates_GateSwi_Module__diagsMask ti_sysbios_gates_GateSwi_Module__diagsMask__C = ((CT__ti_sysbios_gates_GateSwi_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_gates_GateSwi_Module__gateObj ti_sysbios_gates_GateSwi_Module__gateObj__C = ((CT__ti_sysbios_gates_GateSwi_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_gates_GateSwi_Module__gatePrms ti_sysbios_gates_GateSwi_Module__gatePrms__C = ((CT__ti_sysbios_gates_GateSwi_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_gates_GateSwi_Module__id ti_sysbios_gates_GateSwi_Module__id__C = (xdc_Bits16)0x802a;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_gates_GateSwi_Module__loggerDefined ti_sysbios_gates_GateSwi_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_gates_GateSwi_Module__loggerObj ti_sysbios_gates_GateSwi_Module__loggerObj__C = ((CT__ti_sysbios_gates_GateSwi_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_gates_GateSwi_Module__loggerFxn0 ti_sysbios_gates_GateSwi_Module__loggerFxn0__C = ((CT__ti_sysbios_gates_GateSwi_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_gates_GateSwi_Module__loggerFxn1 ti_sysbios_gates_GateSwi_Module__loggerFxn1__C = ((CT__ti_sysbios_gates_GateSwi_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_gates_GateSwi_Module__loggerFxn2 ti_sysbios_gates_GateSwi_Module__loggerFxn2__C = ((CT__ti_sysbios_gates_GateSwi_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_gates_GateSwi_Module__loggerFxn4 ti_sysbios_gates_GateSwi_Module__loggerFxn4__C = ((CT__ti_sysbios_gates_GateSwi_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_gates_GateSwi_Module__loggerFxn8 ti_sysbios_gates_GateSwi_Module__loggerFxn8__C = ((CT__ti_sysbios_gates_GateSwi_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_gates_GateSwi_Module__startupDoneFxn ti_sysbios_gates_GateSwi_Module__startupDoneFxn__C = ((CT__ti_sysbios_gates_GateSwi_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_gates_GateSwi_Object__count ti_sysbios_gates_GateSwi_Object__count__C = 1;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_gates_GateSwi_Object__heap ti_sysbios_gates_GateSwi_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_gates_GateSwi_Object__sizeof ti_sysbios_gates_GateSwi_Object__sizeof__C = sizeof(ti_sysbios_gates_GateSwi_Object__);

/* Object__table__C */
__FAR__ const CT__ti_sysbios_gates_GateSwi_Object__table ti_sysbios_gates_GateSwi_Object__table__C = ti_sysbios_gates_GateSwi_Object__table__V;

/* A_badContext__C */
__FAR__ const CT__ti_sysbios_gates_GateSwi_A_badContext ti_sysbios_gates_GateSwi_A_badContext__C = (((xdc_runtime_Assert_Id)1917) << 16 | 16);


/*
 * ======== ti.sysbios.hal.Cache INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_hal_Cache_Module__diagsEnabled ti_sysbios_hal_Cache_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_hal_Cache_Module__diagsIncluded ti_sysbios_hal_Cache_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_hal_Cache_Module__diagsMask ti_sysbios_hal_Cache_Module__diagsMask__C = ((CT__ti_sysbios_hal_Cache_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_hal_Cache_Module__gateObj ti_sysbios_hal_Cache_Module__gateObj__C = ((CT__ti_sysbios_hal_Cache_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_hal_Cache_Module__gatePrms ti_sysbios_hal_Cache_Module__gatePrms__C = ((CT__ti_sysbios_hal_Cache_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_hal_Cache_Module__id ti_sysbios_hal_Cache_Module__id__C = (xdc_Bits16)0x801a;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_hal_Cache_Module__loggerDefined ti_sysbios_hal_Cache_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_hal_Cache_Module__loggerObj ti_sysbios_hal_Cache_Module__loggerObj__C = ((CT__ti_sysbios_hal_Cache_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_hal_Cache_Module__loggerFxn0 ti_sysbios_hal_Cache_Module__loggerFxn0__C = ((CT__ti_sysbios_hal_Cache_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_hal_Cache_Module__loggerFxn1 ti_sysbios_hal_Cache_Module__loggerFxn1__C = ((CT__ti_sysbios_hal_Cache_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_hal_Cache_Module__loggerFxn2 ti_sysbios_hal_Cache_Module__loggerFxn2__C = ((CT__ti_sysbios_hal_Cache_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_hal_Cache_Module__loggerFxn4 ti_sysbios_hal_Cache_Module__loggerFxn4__C = ((CT__ti_sysbios_hal_Cache_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_hal_Cache_Module__loggerFxn8 ti_sysbios_hal_Cache_Module__loggerFxn8__C = ((CT__ti_sysbios_hal_Cache_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_hal_Cache_Module__startupDoneFxn ti_sysbios_hal_Cache_Module__startupDoneFxn__C = ((CT__ti_sysbios_hal_Cache_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_hal_Cache_Object__count ti_sysbios_hal_Cache_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_hal_Cache_Object__heap ti_sysbios_hal_Cache_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_hal_Cache_Object__sizeof ti_sysbios_hal_Cache_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__ti_sysbios_hal_Cache_Object__table ti_sysbios_hal_Cache_Object__table__C = 0;


/*
 * ======== ti.sysbios.hal.Cache_CacheProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.hal.Hwi INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_hal_Hwi_Object__DESC__C;

/* Object__PARAMS__C */
__FAR__ const ti_sysbios_hal_Hwi_Params ti_sysbios_hal_Hwi_Object__PARAMS__C = {
    sizeof (ti_sysbios_hal_Hwi_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_hal_Hwi_Object__PARAMS__C.__iprms, /* instance */
    ti_sysbios_interfaces_IHwi_MaskingOption_SELF,  /* maskSetting */
    ((xdc_UArg)(0x0)),  /* arg */
    1,  /* enableInt */
    (xdc_Int)(-0x0 - 1),  /* eventId */
    (xdc_Int)(-0x0 - 1),  /* priority */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_hal_Hwi_Module__ ti_sysbios_hal_Hwi_Module__root__V = {
    {&ti_sysbios_hal_Hwi_Module__root__V.link,  /* link.next */
    &ti_sysbios_hal_Hwi_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_hal_Hwi_Object__ ti_sysbios_hal_Hwi_Object__table__V[1] = {
    {/* instance#0 */
        0,
        (ti_sysbios_hal_Hwi_HwiProxy_Handle)&ti_sysbios_family_arm_dm6446_Hwi_Object__table__V[0],  /* pi */
    },
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__diagsEnabled ti_sysbios_hal_Hwi_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__diagsIncluded ti_sysbios_hal_Hwi_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__diagsMask ti_sysbios_hal_Hwi_Module__diagsMask__C = ((CT__ti_sysbios_hal_Hwi_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__gateObj ti_sysbios_hal_Hwi_Module__gateObj__C = ((CT__ti_sysbios_hal_Hwi_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__gatePrms ti_sysbios_hal_Hwi_Module__gatePrms__C = ((CT__ti_sysbios_hal_Hwi_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__id ti_sysbios_hal_Hwi_Module__id__C = (xdc_Bits16)0x8018;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerDefined ti_sysbios_hal_Hwi_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerObj ti_sysbios_hal_Hwi_Module__loggerObj__C = ((CT__ti_sysbios_hal_Hwi_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerFxn0 ti_sysbios_hal_Hwi_Module__loggerFxn0__C = ((CT__ti_sysbios_hal_Hwi_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerFxn1 ti_sysbios_hal_Hwi_Module__loggerFxn1__C = ((CT__ti_sysbios_hal_Hwi_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerFxn2 ti_sysbios_hal_Hwi_Module__loggerFxn2__C = ((CT__ti_sysbios_hal_Hwi_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerFxn4 ti_sysbios_hal_Hwi_Module__loggerFxn4__C = ((CT__ti_sysbios_hal_Hwi_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerFxn8 ti_sysbios_hal_Hwi_Module__loggerFxn8__C = ((CT__ti_sysbios_hal_Hwi_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__startupDoneFxn ti_sysbios_hal_Hwi_Module__startupDoneFxn__C = ((CT__ti_sysbios_hal_Hwi_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Object__count ti_sysbios_hal_Hwi_Object__count__C = 1;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Object__heap ti_sysbios_hal_Hwi_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Object__sizeof ti_sysbios_hal_Hwi_Object__sizeof__C = sizeof(ti_sysbios_hal_Hwi_Object__);

/* Object__table__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Object__table ti_sysbios_hal_Hwi_Object__table__C = ti_sysbios_hal_Hwi_Object__table__V;

/* dispatcherAutoNestingSupport__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_dispatcherAutoNestingSupport ti_sysbios_hal_Hwi_dispatcherAutoNestingSupport__C = 1;

/* dispatcherSwiSupport__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_dispatcherSwiSupport ti_sysbios_hal_Hwi_dispatcherSwiSupport__C = 1;

/* dispatcherTaskSupport__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_dispatcherTaskSupport ti_sysbios_hal_Hwi_dispatcherTaskSupport__C = 1;

/* dispatcherIrpTrackingSupport__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_dispatcherIrpTrackingSupport ti_sysbios_hal_Hwi_dispatcherIrpTrackingSupport__C = 1;

/* E_stackOverflow__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_E_stackOverflow ti_sysbios_hal_Hwi_E_stackOverflow__C = (((xdc_runtime_Error_Id)3008) << 16 | 0);


/*
 * ======== ti.sysbios.hal.Hwi_HwiProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.hal.Timer INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_hal_Timer_Object__DESC__C;

/* Object__PARAMS__C */
__FAR__ const ti_sysbios_hal_Timer_Params ti_sysbios_hal_Timer_Object__PARAMS__C = {
    sizeof (ti_sysbios_hal_Timer_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_hal_Timer_Object__PARAMS__C.__iprms, /* instance */
    ti_sysbios_interfaces_ITimer_RunMode_CONTINUOUS,  /* runMode */
    ti_sysbios_interfaces_ITimer_StartMode_AUTO,  /* startMode */
    ((xdc_UArg)0),  /* arg */
    (xdc_UInt32)0x0,  /* period */
    ti_sysbios_interfaces_ITimer_PeriodType_MICROSECS,  /* periodType */
    {
        (xdc_Bits32)0x0,  /* hi */
        (xdc_Bits32)0x0,  /* lo */
    },  /* extFreq */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_hal_Timer_Module__ ti_sysbios_hal_Timer_Module__root__V = {
    {&ti_sysbios_hal_Timer_Module__root__V.link,  /* link.next */
    &ti_sysbios_hal_Timer_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_hal_Timer_Object__ ti_sysbios_hal_Timer_Object__table__V[1] = {
    {/* instance#0 */
        0,
        (ti_sysbios_hal_Timer_TimerProxy_Handle)&ti_sysbios_timers_timer64_Timer_Object__table__V[0],  /* pi */
    },
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_hal_Timer_Module__diagsEnabled ti_sysbios_hal_Timer_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_hal_Timer_Module__diagsIncluded ti_sysbios_hal_Timer_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_hal_Timer_Module__diagsMask ti_sysbios_hal_Timer_Module__diagsMask__C = ((CT__ti_sysbios_hal_Timer_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_hal_Timer_Module__gateObj ti_sysbios_hal_Timer_Module__gateObj__C = ((CT__ti_sysbios_hal_Timer_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_hal_Timer_Module__gatePrms ti_sysbios_hal_Timer_Module__gatePrms__C = ((CT__ti_sysbios_hal_Timer_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_hal_Timer_Module__id ti_sysbios_hal_Timer_Module__id__C = (xdc_Bits16)0x8019;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_hal_Timer_Module__loggerDefined ti_sysbios_hal_Timer_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_hal_Timer_Module__loggerObj ti_sysbios_hal_Timer_Module__loggerObj__C = ((CT__ti_sysbios_hal_Timer_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_hal_Timer_Module__loggerFxn0 ti_sysbios_hal_Timer_Module__loggerFxn0__C = ((CT__ti_sysbios_hal_Timer_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_hal_Timer_Module__loggerFxn1 ti_sysbios_hal_Timer_Module__loggerFxn1__C = ((CT__ti_sysbios_hal_Timer_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_hal_Timer_Module__loggerFxn2 ti_sysbios_hal_Timer_Module__loggerFxn2__C = ((CT__ti_sysbios_hal_Timer_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_hal_Timer_Module__loggerFxn4 ti_sysbios_hal_Timer_Module__loggerFxn4__C = ((CT__ti_sysbios_hal_Timer_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_hal_Timer_Module__loggerFxn8 ti_sysbios_hal_Timer_Module__loggerFxn8__C = ((CT__ti_sysbios_hal_Timer_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_hal_Timer_Module__startupDoneFxn ti_sysbios_hal_Timer_Module__startupDoneFxn__C = ((CT__ti_sysbios_hal_Timer_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_hal_Timer_Object__count ti_sysbios_hal_Timer_Object__count__C = 1;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_hal_Timer_Object__heap ti_sysbios_hal_Timer_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_hal_Timer_Object__sizeof ti_sysbios_hal_Timer_Object__sizeof__C = sizeof(ti_sysbios_hal_Timer_Object__);

/* Object__table__C */
__FAR__ const CT__ti_sysbios_hal_Timer_Object__table ti_sysbios_hal_Timer_Object__table__C = ti_sysbios_hal_Timer_Object__table__V;


/*
 * ======== ti.sysbios.hal.Timer_TimerProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.heaps.HeapMem INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_heaps_HeapMem_Object__DESC__C;

/* Object__PARAMS__C */
__FAR__ const ti_sysbios_heaps_HeapMem_Params ti_sysbios_heaps_HeapMem_Object__PARAMS__C = {
    sizeof (ti_sysbios_heaps_HeapMem_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_heaps_HeapMem_Object__PARAMS__C.__iprms, /* instance */
    ((xdc_Ptr)(0x0)),  /* buf */
    ((xdc_UArg)(0x0)),  /* size */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* --> ti_sysbios_heaps_HeapMem_Instance_State_0_buf__A */
__T1_ti_sysbios_heaps_HeapMem_Instance_State__buf ti_sysbios_heaps_HeapMem_Instance_State_0_buf__A[8192];

/* Module__root__V */
ti_sysbios_heaps_HeapMem_Module__ ti_sysbios_heaps_HeapMem_Module__root__V = {
    {&ti_sysbios_heaps_HeapMem_Module__root__V.link,  /* link.next */
    &ti_sysbios_heaps_HeapMem_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_heaps_HeapMem_Object__ ti_sysbios_heaps_HeapMem_Object__table__V[1] = {
    {/* instance#0 */
        &ti_sysbios_heaps_HeapMem_Module__FXNS__C,
        ((xdc_UArg)(0x8)),  /* align */
        ((void*)ti_sysbios_heaps_HeapMem_Instance_State_0_buf__A),  /* buf */
        {
            ((ti_sysbios_heaps_HeapMem_Header*)0),  /* next */
            ((xdc_UArg)(0x2000)),  /* size */
        },  /* head */
    },
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__diagsEnabled ti_sysbios_heaps_HeapMem_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__diagsIncluded ti_sysbios_heaps_HeapMem_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__diagsMask ti_sysbios_heaps_HeapMem_Module__diagsMask__C = ((CT__ti_sysbios_heaps_HeapMem_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__gateObj ti_sysbios_heaps_HeapMem_Module__gateObj__C = ((CT__ti_sysbios_heaps_HeapMem_Module__gateObj)((void*)(xdc_runtime_IGateProvider_Handle)&ti_sysbios_gates_GateMutex_Object__table__V[0]));

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__gatePrms ti_sysbios_heaps_HeapMem_Module__gatePrms__C = ((CT__ti_sysbios_heaps_HeapMem_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__id ti_sysbios_heaps_HeapMem_Module__id__C = (xdc_Bits16)0x8027;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerDefined ti_sysbios_heaps_HeapMem_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerObj ti_sysbios_heaps_HeapMem_Module__loggerObj__C = ((CT__ti_sysbios_heaps_HeapMem_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn0 ti_sysbios_heaps_HeapMem_Module__loggerFxn0__C = ((CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn1 ti_sysbios_heaps_HeapMem_Module__loggerFxn1__C = ((CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn2 ti_sysbios_heaps_HeapMem_Module__loggerFxn2__C = ((CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn4 ti_sysbios_heaps_HeapMem_Module__loggerFxn4__C = ((CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn8 ti_sysbios_heaps_HeapMem_Module__loggerFxn8__C = ((CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__startupDoneFxn ti_sysbios_heaps_HeapMem_Module__startupDoneFxn__C = ((CT__ti_sysbios_heaps_HeapMem_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Object__count ti_sysbios_heaps_HeapMem_Object__count__C = 1;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Object__heap ti_sysbios_heaps_HeapMem_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Object__sizeof ti_sysbios_heaps_HeapMem_Object__sizeof__C = sizeof(ti_sysbios_heaps_HeapMem_Object__);

/* Object__table__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Object__table ti_sysbios_heaps_HeapMem_Object__table__C = ti_sysbios_heaps_HeapMem_Object__table__V;

/* A_zeroBlock__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_A_zeroBlock ti_sysbios_heaps_HeapMem_A_zeroBlock__C = (((xdc_runtime_Assert_Id)1721) << 16 | 16);

/* A_heapSize__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_A_heapSize ti_sysbios_heaps_HeapMem_A_heapSize__C = (((xdc_runtime_Assert_Id)1757) << 16 | 16);

/* A_align__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_A_align ti_sysbios_heaps_HeapMem_A_align__C = (((xdc_runtime_Assert_Id)1802) << 16 | 16);

/* E_memory__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_E_memory ti_sysbios_heaps_HeapMem_E_memory__C = (((xdc_runtime_Error_Id)3320) << 16 | 0);

/* A_invalidFree__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_A_invalidFree ti_sysbios_heaps_HeapMem_A_invalidFree__C = (((xdc_runtime_Assert_Id)1693) << 16 | 16);

/* reqAlign__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_reqAlign ti_sysbios_heaps_HeapMem_reqAlign__C = (xdc_Int)0x8;

/* reqAlignMask__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_reqAlignMask ti_sysbios_heaps_HeapMem_reqAlignMask__C = (xdc_Int)0x7;


/*
 * ======== ti.sysbios.heaps.HeapMem_Module_GateProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.knl.Clock INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Clock_Object__DESC__C;

/* Object__PARAMS__C */
__FAR__ const ti_sysbios_knl_Clock_Params ti_sysbios_knl_Clock_Object__PARAMS__C = {
    sizeof (ti_sysbios_knl_Clock_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_knl_Clock_Object__PARAMS__C.__iprms, /* instance */
    0,  /* startFlag */
    (xdc_UInt)0x0,  /* period */
    ((xdc_UArg)0),  /* arg */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_knl_Clock_Module__ ti_sysbios_knl_Clock_Module__root__V = {
    {&ti_sysbios_knl_Clock_Module__root__V.link,  /* link.next */
    &ti_sysbios_knl_Clock_Module__root__V.link},  /* link.prev */
};

/* Module__state__V */
ti_sysbios_knl_Clock_Module_State__ ti_sysbios_knl_Clock_Module__state__V = {
    (xdc_UInt32)0x0,  /* ticks */
    (xdc_UInt)0x0,  /* swiCount */
    (ti_sysbios_hal_Timer_Handle)&ti_sysbios_hal_Timer_Object__table__V[0],  /* timer */
    ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_knl_Clock_doTick__I)),  /* doTickFunc */
    (ti_sysbios_knl_Swi_Handle)&ti_sysbios_knl_Swi_Object__table__V[0],  /* swi */
    (xdc_UInt32)0x0,  /* periodCounts */
    (xdc_UInt)0x0,  /* numTickSkip */
    (xdc_UInt)0x0,  /* skipsWorkFunc */
    0,  /* inWorkFunc */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Clock_Module__state__V.Object_field_clockQ.elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Clock_Module__state__V.Object_field_clockQ.elem)),  /* prev */
        },  /* elem */
    },  /* Object_field_clockQ */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Module__diagsEnabled ti_sysbios_knl_Clock_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Module__diagsIncluded ti_sysbios_knl_Clock_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Module__diagsMask ti_sysbios_knl_Clock_Module__diagsMask__C = ((CT__ti_sysbios_knl_Clock_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Module__gateObj ti_sysbios_knl_Clock_Module__gateObj__C = ((CT__ti_sysbios_knl_Clock_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Module__gatePrms ti_sysbios_knl_Clock_Module__gatePrms__C = ((CT__ti_sysbios_knl_Clock_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Module__id ti_sysbios_knl_Clock_Module__id__C = (xdc_Bits16)0x801c;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerDefined ti_sysbios_knl_Clock_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerObj ti_sysbios_knl_Clock_Module__loggerObj__C = ((CT__ti_sysbios_knl_Clock_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerFxn0 ti_sysbios_knl_Clock_Module__loggerFxn0__C = ((CT__ti_sysbios_knl_Clock_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerFxn1 ti_sysbios_knl_Clock_Module__loggerFxn1__C = ((CT__ti_sysbios_knl_Clock_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerFxn2 ti_sysbios_knl_Clock_Module__loggerFxn2__C = ((CT__ti_sysbios_knl_Clock_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerFxn4 ti_sysbios_knl_Clock_Module__loggerFxn4__C = ((CT__ti_sysbios_knl_Clock_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerFxn8 ti_sysbios_knl_Clock_Module__loggerFxn8__C = ((CT__ti_sysbios_knl_Clock_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Module__startupDoneFxn ti_sysbios_knl_Clock_Module__startupDoneFxn__C = ((CT__ti_sysbios_knl_Clock_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Object__count ti_sysbios_knl_Clock_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Object__heap ti_sysbios_knl_Clock_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Object__sizeof ti_sysbios_knl_Clock_Object__sizeof__C = sizeof(ti_sysbios_knl_Clock_Object__);

/* Object__table__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Object__table ti_sysbios_knl_Clock_Object__table__C = 0;

/* LW_delayed__C */
__FAR__ const CT__ti_sysbios_knl_Clock_LW_delayed ti_sysbios_knl_Clock_LW_delayed__C = (((xdc_runtime_Log_Event)4214) << 16 | 1024);

/* LM_tick__C */
__FAR__ const CT__ti_sysbios_knl_Clock_LM_tick ti_sysbios_knl_Clock_LM_tick__C = (((xdc_runtime_Log_Event)4236) << 16 | 768);

/* LM_begin__C */
__FAR__ const CT__ti_sysbios_knl_Clock_LM_begin ti_sysbios_knl_Clock_LM_begin__C = (((xdc_runtime_Log_Event)4254) << 16 | 768);

/* A_clockDisabled__C */
__FAR__ const CT__ti_sysbios_knl_Clock_A_clockDisabled ti_sysbios_knl_Clock_A_clockDisabled__C = (((xdc_runtime_Assert_Id)355) << 16 | 16);

/* A_badThreadType__C */
__FAR__ const CT__ti_sysbios_knl_Clock_A_badThreadType ti_sysbios_knl_Clock_A_badThreadType__C = (((xdc_runtime_Assert_Id)436) << 16 | 16);

/* tickSource__C */
__FAR__ const CT__ti_sysbios_knl_Clock_tickSource ti_sysbios_knl_Clock_tickSource__C = ti_sysbios_knl_Clock_TickSource_TIMER;

/* tickMode__C */
__FAR__ const CT__ti_sysbios_knl_Clock_tickMode ti_sysbios_knl_Clock_tickMode__C = ti_sysbios_knl_Clock_TickMode_PERIODIC;

/* timerId__C */
__FAR__ const CT__ti_sysbios_knl_Clock_timerId ti_sysbios_knl_Clock_timerId__C = (xdc_UInt)(-0x0 - 1);

/* tickPeriod__C */
__FAR__ const CT__ti_sysbios_knl_Clock_tickPeriod ti_sysbios_knl_Clock_tickPeriod__C = (xdc_UInt32)0x3e8;


/*
 * ======== ti.sysbios.knl.Idle INITIALIZERS ========
 */

/* --> ti_sysbios_knl_Idle_funcList__A */
const __T1_ti_sysbios_knl_Idle_funcList ti_sysbios_knl_Idle_funcList__A[1] = {
    ((xdc_Void(*)(xdc_Void))((xdc_Fxn)ti_sysbios_hal_Hwi_checkStack)),  /* [0] */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Module__diagsEnabled ti_sysbios_knl_Idle_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Module__diagsIncluded ti_sysbios_knl_Idle_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Module__diagsMask ti_sysbios_knl_Idle_Module__diagsMask__C = ((CT__ti_sysbios_knl_Idle_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Module__gateObj ti_sysbios_knl_Idle_Module__gateObj__C = ((CT__ti_sysbios_knl_Idle_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Module__gatePrms ti_sysbios_knl_Idle_Module__gatePrms__C = ((CT__ti_sysbios_knl_Idle_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Module__id ti_sysbios_knl_Idle_Module__id__C = (xdc_Bits16)0x801d;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerDefined ti_sysbios_knl_Idle_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerObj ti_sysbios_knl_Idle_Module__loggerObj__C = ((CT__ti_sysbios_knl_Idle_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerFxn0 ti_sysbios_knl_Idle_Module__loggerFxn0__C = ((CT__ti_sysbios_knl_Idle_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerFxn1 ti_sysbios_knl_Idle_Module__loggerFxn1__C = ((CT__ti_sysbios_knl_Idle_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerFxn2 ti_sysbios_knl_Idle_Module__loggerFxn2__C = ((CT__ti_sysbios_knl_Idle_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerFxn4 ti_sysbios_knl_Idle_Module__loggerFxn4__C = ((CT__ti_sysbios_knl_Idle_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerFxn8 ti_sysbios_knl_Idle_Module__loggerFxn8__C = ((CT__ti_sysbios_knl_Idle_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Module__startupDoneFxn ti_sysbios_knl_Idle_Module__startupDoneFxn__C = ((CT__ti_sysbios_knl_Idle_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Object__count ti_sysbios_knl_Idle_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Object__heap ti_sysbios_knl_Idle_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Object__sizeof ti_sysbios_knl_Idle_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Object__table ti_sysbios_knl_Idle_Object__table__C = 0;

/* funcList__C */
__FAR__ const CT__ti_sysbios_knl_Idle_funcList ti_sysbios_knl_Idle_funcList__C = {1, ((__T1_ti_sysbios_knl_Idle_funcList*)ti_sysbios_knl_Idle_funcList__A)};


/*
 * ======== ti.sysbios.knl.Intrinsics INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__diagsEnabled ti_sysbios_knl_Intrinsics_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__diagsIncluded ti_sysbios_knl_Intrinsics_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__diagsMask ti_sysbios_knl_Intrinsics_Module__diagsMask__C = ((CT__ti_sysbios_knl_Intrinsics_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__gateObj ti_sysbios_knl_Intrinsics_Module__gateObj__C = ((CT__ti_sysbios_knl_Intrinsics_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__gatePrms ti_sysbios_knl_Intrinsics_Module__gatePrms__C = ((CT__ti_sysbios_knl_Intrinsics_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__id ti_sysbios_knl_Intrinsics_Module__id__C = (xdc_Bits16)0x801e;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerDefined ti_sysbios_knl_Intrinsics_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerObj ti_sysbios_knl_Intrinsics_Module__loggerObj__C = ((CT__ti_sysbios_knl_Intrinsics_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn0 ti_sysbios_knl_Intrinsics_Module__loggerFxn0__C = ((CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn1 ti_sysbios_knl_Intrinsics_Module__loggerFxn1__C = ((CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn2 ti_sysbios_knl_Intrinsics_Module__loggerFxn2__C = ((CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn4 ti_sysbios_knl_Intrinsics_Module__loggerFxn4__C = ((CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn8 ti_sysbios_knl_Intrinsics_Module__loggerFxn8__C = ((CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__startupDoneFxn ti_sysbios_knl_Intrinsics_Module__startupDoneFxn__C = ((CT__ti_sysbios_knl_Intrinsics_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Object__count ti_sysbios_knl_Intrinsics_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Object__heap ti_sysbios_knl_Intrinsics_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Object__sizeof ti_sysbios_knl_Intrinsics_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Object__table ti_sysbios_knl_Intrinsics_Object__table__C = 0;


/*
 * ======== ti.sysbios.knl.Intrinsics_SupportProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.knl.Queue INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Queue_Object__DESC__C;

/* Object__PARAMS__C */
__FAR__ const ti_sysbios_knl_Queue_Params ti_sysbios_knl_Queue_Object__PARAMS__C = {
    sizeof (ti_sysbios_knl_Queue_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_knl_Queue_Object__PARAMS__C.__iprms, /* instance */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_knl_Queue_Module__ ti_sysbios_knl_Queue_Module__root__V = {
    {&ti_sysbios_knl_Queue_Module__root__V.link,  /* link.next */
    &ti_sysbios_knl_Queue_Module__root__V.link},  /* link.prev */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Module__diagsEnabled ti_sysbios_knl_Queue_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Module__diagsIncluded ti_sysbios_knl_Queue_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Module__diagsMask ti_sysbios_knl_Queue_Module__diagsMask__C = ((CT__ti_sysbios_knl_Queue_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Module__gateObj ti_sysbios_knl_Queue_Module__gateObj__C = ((CT__ti_sysbios_knl_Queue_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Module__gatePrms ti_sysbios_knl_Queue_Module__gatePrms__C = ((CT__ti_sysbios_knl_Queue_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Module__id ti_sysbios_knl_Queue_Module__id__C = (xdc_Bits16)0x801f;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerDefined ti_sysbios_knl_Queue_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerObj ti_sysbios_knl_Queue_Module__loggerObj__C = ((CT__ti_sysbios_knl_Queue_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerFxn0 ti_sysbios_knl_Queue_Module__loggerFxn0__C = ((CT__ti_sysbios_knl_Queue_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerFxn1 ti_sysbios_knl_Queue_Module__loggerFxn1__C = ((CT__ti_sysbios_knl_Queue_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerFxn2 ti_sysbios_knl_Queue_Module__loggerFxn2__C = ((CT__ti_sysbios_knl_Queue_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerFxn4 ti_sysbios_knl_Queue_Module__loggerFxn4__C = ((CT__ti_sysbios_knl_Queue_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerFxn8 ti_sysbios_knl_Queue_Module__loggerFxn8__C = ((CT__ti_sysbios_knl_Queue_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Module__startupDoneFxn ti_sysbios_knl_Queue_Module__startupDoneFxn__C = ((CT__ti_sysbios_knl_Queue_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Object__count ti_sysbios_knl_Queue_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Object__heap ti_sysbios_knl_Queue_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Object__sizeof ti_sysbios_knl_Queue_Object__sizeof__C = sizeof(ti_sysbios_knl_Queue_Object__);

/* Object__table__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Object__table ti_sysbios_knl_Queue_Object__table__C = 0;


/*
 * ======== ti.sysbios.knl.Semaphore INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Semaphore_Object__DESC__C;

/* Object__PARAMS__C */
__FAR__ const ti_sysbios_knl_Semaphore_Params ti_sysbios_knl_Semaphore_Object__PARAMS__C = {
    sizeof (ti_sysbios_knl_Semaphore_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_knl_Semaphore_Object__PARAMS__C.__iprms, /* instance */
    0,  /* event */
    (xdc_UInt)0x1,  /* eventId */
    ti_sysbios_knl_Semaphore_Mode_COUNTING,  /* mode */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_knl_Semaphore_Module__ ti_sysbios_knl_Semaphore_Module__root__V = {
    {&ti_sysbios_knl_Semaphore_Module__root__V.link,  /* link.next */
    &ti_sysbios_knl_Semaphore_Module__root__V.link},  /* link.prev */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__diagsEnabled ti_sysbios_knl_Semaphore_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__diagsIncluded ti_sysbios_knl_Semaphore_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__diagsMask ti_sysbios_knl_Semaphore_Module__diagsMask__C = ((CT__ti_sysbios_knl_Semaphore_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__gateObj ti_sysbios_knl_Semaphore_Module__gateObj__C = ((CT__ti_sysbios_knl_Semaphore_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__gatePrms ti_sysbios_knl_Semaphore_Module__gatePrms__C = ((CT__ti_sysbios_knl_Semaphore_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__id ti_sysbios_knl_Semaphore_Module__id__C = (xdc_Bits16)0x8020;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerDefined ti_sysbios_knl_Semaphore_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerObj ti_sysbios_knl_Semaphore_Module__loggerObj__C = ((CT__ti_sysbios_knl_Semaphore_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn0 ti_sysbios_knl_Semaphore_Module__loggerFxn0__C = ((CT__ti_sysbios_knl_Semaphore_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn1 ti_sysbios_knl_Semaphore_Module__loggerFxn1__C = ((CT__ti_sysbios_knl_Semaphore_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn2 ti_sysbios_knl_Semaphore_Module__loggerFxn2__C = ((CT__ti_sysbios_knl_Semaphore_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn4 ti_sysbios_knl_Semaphore_Module__loggerFxn4__C = ((CT__ti_sysbios_knl_Semaphore_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn8 ti_sysbios_knl_Semaphore_Module__loggerFxn8__C = ((CT__ti_sysbios_knl_Semaphore_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__startupDoneFxn ti_sysbios_knl_Semaphore_Module__startupDoneFxn__C = ((CT__ti_sysbios_knl_Semaphore_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_Object__count ti_sysbios_knl_Semaphore_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_Object__heap ti_sysbios_knl_Semaphore_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_Object__sizeof ti_sysbios_knl_Semaphore_Object__sizeof__C = sizeof(ti_sysbios_knl_Semaphore_Object__);

/* Object__table__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_Object__table ti_sysbios_knl_Semaphore_Object__table__C = 0;

/* LM_post__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_LM_post ti_sysbios_knl_Semaphore_LM_post__C = (((xdc_runtime_Log_Event)4286) << 16 | 768);

/* LM_pend__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_LM_pend ti_sysbios_knl_Semaphore_LM_pend__C = (((xdc_runtime_Log_Event)4316) << 16 | 768);

/* A_noEvents__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_A_noEvents ti_sysbios_knl_Semaphore_A_noEvents__C = (((xdc_runtime_Assert_Id)756) << 16 | 16);

/* A_invTimeout__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_A_invTimeout ti_sysbios_knl_Semaphore_A_invTimeout__C = (((xdc_runtime_Assert_Id)811) << 16 | 16);

/* A_badContext__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_A_badContext ti_sysbios_knl_Semaphore_A_badContext__C = (((xdc_runtime_Assert_Id)635) << 16 | 16);

/* supportsEvents__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_supportsEvents ti_sysbios_knl_Semaphore_supportsEvents__C = 0;

/* eventPost__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_eventPost ti_sysbios_knl_Semaphore_eventPost__C = ((CT__ti_sysbios_knl_Semaphore_eventPost)0);

/* eventSync__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_eventSync ti_sysbios_knl_Semaphore_eventSync__C = ((CT__ti_sysbios_knl_Semaphore_eventSync)0);


/*
 * ======== ti.sysbios.knl.Swi INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Swi_Object__DESC__C;

/* Object__PARAMS__C */
__FAR__ const ti_sysbios_knl_Swi_Params ti_sysbios_knl_Swi_Object__PARAMS__C = {
    sizeof (ti_sysbios_knl_Swi_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_knl_Swi_Object__PARAMS__C.__iprms, /* instance */
    ((xdc_UArg)(0x0)),  /* arg0 */
    ((xdc_UArg)(0x0)),  /* arg1 */
    (xdc_UInt)(-0x0 - 1),  /* priority */
    (xdc_UInt)0x0,  /* trigger */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_knl_Swi_Module__ ti_sysbios_knl_Swi_Module__root__V = {
    {&ti_sysbios_knl_Swi_Module__root__V.link,  /* link.next */
    &ti_sysbios_knl_Swi_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_knl_Swi_Object__ ti_sysbios_knl_Swi_Object__table__V[1] = {
    {/* instance#0 */
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Object__table__V[0].qElem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Object__table__V[0].qElem)),  /* prev */
        },  /* qElem */
        ((xdc_Void(*)(xdc_UArg,xdc_UArg))((xdc_Fxn)ti_sysbios_knl_Clock_workFunc__E)),  /* fxn */
        ((xdc_UArg)(0x0)),  /* arg0 */
        ((xdc_UArg)(0x0)),  /* arg1 */
        (xdc_UInt)0xf,  /* priority */
        (xdc_UInt)0x8000,  /* mask */
        0,  /* posted */
        (xdc_UInt)0x0,  /* initTrigger */
        (xdc_UInt)0x0,  /* trigger */
        (ti_sysbios_knl_Queue_Handle)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[15],  /* readyQ */
        ((void*)0),  /* hookEnv */
    },
};

/* --> ti_sysbios_knl_Swi_Module_State_0_readyQ__A */
__T1_ti_sysbios_knl_Swi_Module_State__readyQ ti_sysbios_knl_Swi_Module_State_0_readyQ__A[16] = {
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[0].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[0].elem)),  /* prev */
        },  /* elem */
    },  /* [0] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[1].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[1].elem)),  /* prev */
        },  /* elem */
    },  /* [1] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[2].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[2].elem)),  /* prev */
        },  /* elem */
    },  /* [2] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[3].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[3].elem)),  /* prev */
        },  /* elem */
    },  /* [3] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[4].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[4].elem)),  /* prev */
        },  /* elem */
    },  /* [4] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[5].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[5].elem)),  /* prev */
        },  /* elem */
    },  /* [5] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[6].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[6].elem)),  /* prev */
        },  /* elem */
    },  /* [6] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[7].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[7].elem)),  /* prev */
        },  /* elem */
    },  /* [7] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[8].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[8].elem)),  /* prev */
        },  /* elem */
    },  /* [8] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[9].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[9].elem)),  /* prev */
        },  /* elem */
    },  /* [9] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[10].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[10].elem)),  /* prev */
        },  /* elem */
    },  /* [10] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[11].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[11].elem)),  /* prev */
        },  /* elem */
    },  /* [11] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[12].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[12].elem)),  /* prev */
        },  /* elem */
    },  /* [12] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[13].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[13].elem)),  /* prev */
        },  /* elem */
    },  /* [13] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[14].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[14].elem)),  /* prev */
        },  /* elem */
    },  /* [14] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[15].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[15].elem)),  /* prev */
        },  /* elem */
    },  /* [15] */
};

/* Module__state__V */
ti_sysbios_knl_Swi_Module_State__ ti_sysbios_knl_Swi_Module__state__V = {
    1,  /* locked */
    (xdc_UInt)0x0,  /* curSet */
    (xdc_UInt)0x0,  /* curTrigger */
    0,  /* curSwi */
    0,  /* curQ */
    ((void*)ti_sysbios_knl_Swi_Module_State_0_readyQ__A),  /* readyQ */
    ((void*)0),  /* constructedSwis */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Module__diagsEnabled ti_sysbios_knl_Swi_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Module__diagsIncluded ti_sysbios_knl_Swi_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Module__diagsMask ti_sysbios_knl_Swi_Module__diagsMask__C = ((CT__ti_sysbios_knl_Swi_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Module__gateObj ti_sysbios_knl_Swi_Module__gateObj__C = ((CT__ti_sysbios_knl_Swi_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Module__gatePrms ti_sysbios_knl_Swi_Module__gatePrms__C = ((CT__ti_sysbios_knl_Swi_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Module__id ti_sysbios_knl_Swi_Module__id__C = (xdc_Bits16)0x8021;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerDefined ti_sysbios_knl_Swi_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerObj ti_sysbios_knl_Swi_Module__loggerObj__C = ((CT__ti_sysbios_knl_Swi_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerFxn0 ti_sysbios_knl_Swi_Module__loggerFxn0__C = ((CT__ti_sysbios_knl_Swi_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerFxn1 ti_sysbios_knl_Swi_Module__loggerFxn1__C = ((CT__ti_sysbios_knl_Swi_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerFxn2 ti_sysbios_knl_Swi_Module__loggerFxn2__C = ((CT__ti_sysbios_knl_Swi_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerFxn4 ti_sysbios_knl_Swi_Module__loggerFxn4__C = ((CT__ti_sysbios_knl_Swi_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerFxn8 ti_sysbios_knl_Swi_Module__loggerFxn8__C = ((CT__ti_sysbios_knl_Swi_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Module__startupDoneFxn ti_sysbios_knl_Swi_Module__startupDoneFxn__C = ((CT__ti_sysbios_knl_Swi_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Object__count ti_sysbios_knl_Swi_Object__count__C = 1;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Object__heap ti_sysbios_knl_Swi_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Object__sizeof ti_sysbios_knl_Swi_Object__sizeof__C = sizeof(ti_sysbios_knl_Swi_Object__);

/* Object__table__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Object__table ti_sysbios_knl_Swi_Object__table__C = ti_sysbios_knl_Swi_Object__table__V;

/* LM_begin__C */
__FAR__ const CT__ti_sysbios_knl_Swi_LM_begin ti_sysbios_knl_Swi_LM_begin__C = (((xdc_runtime_Log_Event)4359) << 16 | 768);

/* LD_end__C */
__FAR__ const CT__ti_sysbios_knl_Swi_LD_end ti_sysbios_knl_Swi_LD_end__C = (((xdc_runtime_Log_Event)4406) << 16 | 512);

/* LM_post__C */
__FAR__ const CT__ti_sysbios_knl_Swi_LM_post ti_sysbios_knl_Swi_LM_post__C = (((xdc_runtime_Log_Event)4424) << 16 | 768);

/* A_swiDisabled__C */
__FAR__ const CT__ti_sysbios_knl_Swi_A_swiDisabled ti_sysbios_knl_Swi_A_swiDisabled__C = (((xdc_runtime_Assert_Id)876) << 16 | 16);

/* A_badPriority__C */
__FAR__ const CT__ti_sysbios_knl_Swi_A_badPriority ti_sysbios_knl_Swi_A_badPriority__C = (((xdc_runtime_Assert_Id)933) << 16 | 16);

/* numPriorities__C */
__FAR__ const CT__ti_sysbios_knl_Swi_numPriorities ti_sysbios_knl_Swi_numPriorities__C = (xdc_UInt)0x10;

/* hooks__C */
__FAR__ const CT__ti_sysbios_knl_Swi_hooks ti_sysbios_knl_Swi_hooks__C = {0, 0};

/* taskDisable__C */
__FAR__ const CT__ti_sysbios_knl_Swi_taskDisable ti_sysbios_knl_Swi_taskDisable__C = ((CT__ti_sysbios_knl_Swi_taskDisable)((xdc_Fxn)ti_sysbios_knl_Task_disable__E));

/* taskRestore__C */
__FAR__ const CT__ti_sysbios_knl_Swi_taskRestore ti_sysbios_knl_Swi_taskRestore__C = ((CT__ti_sysbios_knl_Swi_taskRestore)((xdc_Fxn)ti_sysbios_knl_Task_restore__E));

/* numConstructedSwis__C */
__FAR__ const CT__ti_sysbios_knl_Swi_numConstructedSwis ti_sysbios_knl_Swi_numConstructedSwis__C = (xdc_UInt)0x0;


/*
 * ======== ti.sysbios.knl.Task INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Task_Object__DESC__C;

/* Object__PARAMS__C */
__FAR__ const ti_sysbios_knl_Task_Params ti_sysbios_knl_Task_Object__PARAMS__C = {
    sizeof (ti_sysbios_knl_Task_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_knl_Task_Object__PARAMS__C.__iprms, /* instance */
    ((xdc_UArg)(0x0)),  /* arg0 */
    ((xdc_UArg)(0x0)),  /* arg1 */
    (xdc_Int)0x1,  /* priority */
    ((xdc_Ptr)0),  /* stack */
    (xdc_SizeT)0x0,  /* stackSize */
    0,  /* stackHeap */
    ((xdc_Ptr)0),  /* env */
    1,  /* vitalTaskFlag */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* --> ti_sysbios_knl_Task_Instance_State_0_stack__A */
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_0_stack__A[2048];

/* --> ti_sysbios_knl_Task_Instance_State_0_hookEnv__A */
__T1_ti_sysbios_knl_Task_Instance_State__hookEnv ti_sysbios_knl_Task_Instance_State_0_hookEnv__A[1];

/* --> ti_sysbios_knl_Task_Instance_State_1_stack__A */
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_1_stack__A[2048];

/* --> ti_sysbios_knl_Task_Instance_State_1_hookEnv__A */
__T1_ti_sysbios_knl_Task_Instance_State__hookEnv ti_sysbios_knl_Task_Instance_State_1_hookEnv__A[1];

/* Module__root__V */
ti_sysbios_knl_Task_Module__ ti_sysbios_knl_Task_Module__root__V = {
    {&ti_sysbios_knl_Task_Module__root__V.link,  /* link.next */
    &ti_sysbios_knl_Task_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_knl_Task_Object__ ti_sysbios_knl_Task_Object__table__V[2] = {
    {/* instance#0 */
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Object__table__V[0].qElem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Object__table__V[0].qElem)),  /* prev */
        },  /* qElem */
        (xdc_Int)0x1,  /* priority */
        (xdc_UInt)0x2,  /* mask */
        ((xdc_Ptr)0),  /* context */
        ti_sysbios_knl_Task_Mode_READY,  /* mode */
        ((ti_sysbios_knl_Task_PendElem*)0),  /* pendElem */
        (xdc_SizeT)0x800,  /* stackSize */
        ((void*)ti_sysbios_knl_Task_Instance_State_0_stack__A),  /* stack */
        0,  /* stackHeap */
        ((xdc_Void(*)(xdc_UArg,xdc_UArg))((xdc_Fxn)task0Fxn)),  /* fxn */
        ((xdc_UArg)(0x0)),  /* arg0 */
        ((xdc_UArg)(0x0)),  /* arg1 */
        ((xdc_Ptr)0),  /* env */
        ((void*)ti_sysbios_knl_Task_Instance_State_0_hookEnv__A),  /* hookEnv */
        1,  /* vitalTaskFlag */
        0,  /* readyQ */
    },
    {/* instance#1 */
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Object__table__V[1].qElem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Object__table__V[1].qElem)),  /* prev */
        },  /* qElem */
        (xdc_Int)0x0,  /* priority */
        (xdc_UInt)0x1,  /* mask */
        ((xdc_Ptr)0),  /* context */
        ti_sysbios_knl_Task_Mode_READY,  /* mode */
        ((ti_sysbios_knl_Task_PendElem*)0),  /* pendElem */
        (xdc_SizeT)0x800,  /* stackSize */
        ((void*)ti_sysbios_knl_Task_Instance_State_1_stack__A),  /* stack */
        0,  /* stackHeap */
        ((xdc_Void(*)(xdc_UArg,xdc_UArg))((xdc_Fxn)ti_sysbios_knl_Idle_loop__E)),  /* fxn */
        ((xdc_UArg)(0x0)),  /* arg0 */
        ((xdc_UArg)(0x0)),  /* arg1 */
        ((xdc_Ptr)0),  /* env */
        ((void*)ti_sysbios_knl_Task_Instance_State_1_hookEnv__A),  /* hookEnv */
        1,  /* vitalTaskFlag */
        0,  /* readyQ */
    },
};

/* --> ti_sysbios_knl_Task_Module_State_0_readyQ__A */
__T1_ti_sysbios_knl_Task_Module_State__readyQ ti_sysbios_knl_Task_Module_State_0_readyQ__A[16] = {
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[0].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[0].elem)),  /* prev */
        },  /* elem */
    },  /* [0] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[1].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[1].elem)),  /* prev */
        },  /* elem */
    },  /* [1] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[2].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[2].elem)),  /* prev */
        },  /* elem */
    },  /* [2] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[3].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[3].elem)),  /* prev */
        },  /* elem */
    },  /* [3] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[4].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[4].elem)),  /* prev */
        },  /* elem */
    },  /* [4] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[5].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[5].elem)),  /* prev */
        },  /* elem */
    },  /* [5] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[6].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[6].elem)),  /* prev */
        },  /* elem */
    },  /* [6] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[7].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[7].elem)),  /* prev */
        },  /* elem */
    },  /* [7] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[8].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[8].elem)),  /* prev */
        },  /* elem */
    },  /* [8] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[9].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[9].elem)),  /* prev */
        },  /* elem */
    },  /* [9] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[10].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[10].elem)),  /* prev */
        },  /* elem */
    },  /* [10] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[11].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[11].elem)),  /* prev */
        },  /* elem */
    },  /* [11] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[12].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[12].elem)),  /* prev */
        },  /* elem */
    },  /* [12] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[13].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[13].elem)),  /* prev */
        },  /* elem */
    },  /* [13] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[14].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[14].elem)),  /* prev */
        },  /* elem */
    },  /* [14] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[15].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[15].elem)),  /* prev */
        },  /* elem */
    },  /* [15] */
};

/* Module__state__V */
ti_sysbios_knl_Task_Module_State__ ti_sysbios_knl_Task_Module__state__V = {
    1,  /* locked */
    (xdc_UInt)0x0,  /* curSet */
    0,  /* workFlag */
    (xdc_UInt)0x2,  /* vitalTasks */
    0,  /* curTask */
    0,  /* curQ */
    ((void*)ti_sysbios_knl_Task_Module_State_0_readyQ__A),  /* readyQ */
    (ti_sysbios_knl_Task_Handle)&ti_sysbios_knl_Task_Object__table__V[1],  /* idleTask */
    ((void*)0),  /* constructedTasks */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module__state__V.Object_field_inactiveQ.elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module__state__V.Object_field_inactiveQ.elem)),  /* prev */
        },  /* elem */
    },  /* Object_field_inactiveQ */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module__state__V.Object_field_terminatedQ.elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module__state__V.Object_field_terminatedQ.elem)),  /* prev */
        },  /* elem */
    },  /* Object_field_terminatedQ */
};

/* --> ti_sysbios_knl_Task_hooks__A */
const __T1_ti_sysbios_knl_Task_hooks ti_sysbios_knl_Task_hooks__A[1] = {
    {
        ((xdc_Void(*)(xdc_Int))0),  /* registerFxn */
        ((xdc_Void(*)(ti_sysbios_knl_Task_Handle,xdc_runtime_Error_Block*))0),  /* createFxn */
        ((xdc_Void(*)(ti_sysbios_knl_Task_Handle))0),  /* readyFxn */
        ((xdc_Void(*)(ti_sysbios_knl_Task_Handle,ti_sysbios_knl_Task_Handle))((xdc_Fxn)ti_sysbios_knl_Task_checkStacks)),  /* switchFxn */
        ((xdc_Void(*)(ti_sysbios_knl_Task_Handle))0),  /* exitFxn */
        ((xdc_Void(*)(ti_sysbios_knl_Task_Handle))0),  /* deleteFxn */
    },  /* [0] */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_knl_Task_Module__diagsEnabled ti_sysbios_knl_Task_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_knl_Task_Module__diagsIncluded ti_sysbios_knl_Task_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_knl_Task_Module__diagsMask ti_sysbios_knl_Task_Module__diagsMask__C = ((CT__ti_sysbios_knl_Task_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_knl_Task_Module__gateObj ti_sysbios_knl_Task_Module__gateObj__C = ((CT__ti_sysbios_knl_Task_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_knl_Task_Module__gatePrms ti_sysbios_knl_Task_Module__gatePrms__C = ((CT__ti_sysbios_knl_Task_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_knl_Task_Module__id ti_sysbios_knl_Task_Module__id__C = (xdc_Bits16)0x8022;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerDefined ti_sysbios_knl_Task_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerObj ti_sysbios_knl_Task_Module__loggerObj__C = ((CT__ti_sysbios_knl_Task_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerFxn0 ti_sysbios_knl_Task_Module__loggerFxn0__C = ((CT__ti_sysbios_knl_Task_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerFxn1 ti_sysbios_knl_Task_Module__loggerFxn1__C = ((CT__ti_sysbios_knl_Task_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerFxn2 ti_sysbios_knl_Task_Module__loggerFxn2__C = ((CT__ti_sysbios_knl_Task_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerFxn4 ti_sysbios_knl_Task_Module__loggerFxn4__C = ((CT__ti_sysbios_knl_Task_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerFxn8 ti_sysbios_knl_Task_Module__loggerFxn8__C = ((CT__ti_sysbios_knl_Task_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_knl_Task_Module__startupDoneFxn ti_sysbios_knl_Task_Module__startupDoneFxn__C = ((CT__ti_sysbios_knl_Task_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_knl_Task_Object__count ti_sysbios_knl_Task_Object__count__C = 2;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_knl_Task_Object__heap ti_sysbios_knl_Task_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_knl_Task_Object__sizeof ti_sysbios_knl_Task_Object__sizeof__C = sizeof(ti_sysbios_knl_Task_Object__);

/* Object__table__C */
__FAR__ const CT__ti_sysbios_knl_Task_Object__table ti_sysbios_knl_Task_Object__table__C = ti_sysbios_knl_Task_Object__table__V;

/* LM_switch__C */
__FAR__ const CT__ti_sysbios_knl_Task_LM_switch ti_sysbios_knl_Task_LM_switch__C = (((xdc_runtime_Log_Event)4464) << 16 | 768);

/* LM_sleep__C */
__FAR__ const CT__ti_sysbios_knl_Task_LM_sleep ti_sysbios_knl_Task_LM_sleep__C = (((xdc_runtime_Log_Event)4532) << 16 | 768);

/* LD_ready__C */
__FAR__ const CT__ti_sysbios_knl_Task_LD_ready ti_sysbios_knl_Task_LD_ready__C = (((xdc_runtime_Log_Event)4577) << 16 | 512);

/* LD_block__C */
__FAR__ const CT__ti_sysbios_knl_Task_LD_block ti_sysbios_knl_Task_LD_block__C = (((xdc_runtime_Log_Event)4618) << 16 | 512);

/* LM_yield__C */
__FAR__ const CT__ti_sysbios_knl_Task_LM_yield ti_sysbios_knl_Task_LM_yield__C = (((xdc_runtime_Log_Event)4650) << 16 | 768);

/* LM_setPri__C */
__FAR__ const CT__ti_sysbios_knl_Task_LM_setPri ti_sysbios_knl_Task_LM_setPri__C = (((xdc_runtime_Log_Event)4698) << 16 | 768);

/* LD_exit__C */
__FAR__ const CT__ti_sysbios_knl_Task_LD_exit ti_sysbios_knl_Task_LD_exit__C = (((xdc_runtime_Log_Event)4754) << 16 | 512);

/* E_stackOverflow__C */
__FAR__ const CT__ti_sysbios_knl_Task_E_stackOverflow ti_sysbios_knl_Task_E_stackOverflow__C = (((xdc_runtime_Error_Id)3045) << 16 | 0);

/* E_spOutOfBounds__C */
__FAR__ const CT__ti_sysbios_knl_Task_E_spOutOfBounds ti_sysbios_knl_Task_E_spOutOfBounds__C = (((xdc_runtime_Error_Id)3088) << 16 | 0);

/* A_badThreadType__C */
__FAR__ const CT__ti_sysbios_knl_Task_A_badThreadType ti_sysbios_knl_Task_A_badThreadType__C = (((xdc_runtime_Assert_Id)982) << 16 | 16);

/* A_badTaskState__C */
__FAR__ const CT__ti_sysbios_knl_Task_A_badTaskState ti_sysbios_knl_Task_A_badTaskState__C = (((xdc_runtime_Assert_Id)1051) << 16 | 16);

/* A_noPendElem__C */
__FAR__ const CT__ti_sysbios_knl_Task_A_noPendElem ti_sysbios_knl_Task_A_noPendElem__C = (((xdc_runtime_Assert_Id)1105) << 16 | 16);

/* A_taskDisabled__C */
__FAR__ const CT__ti_sysbios_knl_Task_A_taskDisabled ti_sysbios_knl_Task_A_taskDisabled__C = (((xdc_runtime_Assert_Id)1159) << 16 | 16);

/* A_badPriority__C */
__FAR__ const CT__ti_sysbios_knl_Task_A_badPriority ti_sysbios_knl_Task_A_badPriority__C = (((xdc_runtime_Assert_Id)1222) << 16 | 16);

/* A_badTimeout__C */
__FAR__ const CT__ti_sysbios_knl_Task_A_badTimeout ti_sysbios_knl_Task_A_badTimeout__C = (((xdc_runtime_Assert_Id)1272) << 16 | 16);

/* numPriorities__C */
__FAR__ const CT__ti_sysbios_knl_Task_numPriorities ti_sysbios_knl_Task_numPriorities__C = (xdc_UInt)0x10;

/* defaultStackSize__C */
__FAR__ const CT__ti_sysbios_knl_Task_defaultStackSize ti_sysbios_knl_Task_defaultStackSize__C = (xdc_SizeT)0x800;

/* defaultStackHeap__C */
__FAR__ const CT__ti_sysbios_knl_Task_defaultStackHeap ti_sysbios_knl_Task_defaultStackHeap__C = 0;

/* allBlockedFunc__C */
__FAR__ const CT__ti_sysbios_knl_Task_allBlockedFunc ti_sysbios_knl_Task_allBlockedFunc__C = ((CT__ti_sysbios_knl_Task_allBlockedFunc)((xdc_Fxn)ti_sysbios_knl_Task_allBlockedFunction__I));

/* initStackFlag__C */
__FAR__ const CT__ti_sysbios_knl_Task_initStackFlag ti_sysbios_knl_Task_initStackFlag__C = 1;

/* deleteTerminatedTasks__C */
__FAR__ const CT__ti_sysbios_knl_Task_deleteTerminatedTasks ti_sysbios_knl_Task_deleteTerminatedTasks__C = 0;

/* hooks__C */
__FAR__ const CT__ti_sysbios_knl_Task_hooks ti_sysbios_knl_Task_hooks__C = {1, ((__T1_ti_sysbios_knl_Task_hooks*)ti_sysbios_knl_Task_hooks__A)};

/* numConstructedTasks__C */
__FAR__ const CT__ti_sysbios_knl_Task_numConstructedTasks ti_sysbios_knl_Task_numConstructedTasks__C = (xdc_UInt)0x0;


/*
 * ======== ti.sysbios.knl.Task_SupportProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.timers.timer64.Timer INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_timers_timer64_Timer_Object__DESC__C;

/* Object__PARAMS__C */
__FAR__ const ti_sysbios_timers_timer64_Timer_Params ti_sysbios_timers_timer64_Timer_Object__PARAMS__C = {
    sizeof (ti_sysbios_timers_timer64_Timer_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_timers_timer64_Timer_Object__PARAMS__C.__iprms, /* instance */
    ti_sysbios_interfaces_ITimer_RunMode_CONTINUOUS,  /* runMode */
    ti_sysbios_interfaces_ITimer_StartMode_AUTO,  /* startMode */
    ((xdc_UArg)0),  /* arg */
    (xdc_UInt32)0x0,  /* period */
    ti_sysbios_interfaces_ITimer_PeriodType_MICROSECS,  /* periodType */
    {
        (xdc_Bits32)0x0,  /* hi */
        (xdc_Bits32)0x0,  /* lo */
    },  /* extFreq */
    {
        (xdc_Bits8)0x0,  /* tien */
        (xdc_Bits8)0x0,  /* invout */
        (xdc_Bits8)0x0,  /* invin */
        (xdc_UInt8)0x1,  /* pwid */
        (xdc_Bits8)0x0,  /* cp */
    },  /* controlInit */
    {
        0,  /* free */
        0,  /* soft */
    },  /* emuMgtInit */
    {
        (xdc_Bits8)0x0,  /* gpint12_eni */
        (xdc_Bits8)0x0,  /* gpint12_eno */
        (xdc_Bits8)0x0,  /* gpint12_invi */
        (xdc_Bits8)0x0,  /* gpint12_invo */
        (xdc_Bits8)0x0,  /* gpint34_eni */
        (xdc_Bits8)0x0,  /* gpint34_eno */
        (xdc_Bits8)0x0,  /* gpint34_invi */
        (xdc_Bits8)0x0,  /* gpint34_invo */
        (xdc_Bits8)0x0,  /* gpio_eni12 */
        (xdc_Bits8)0x0,  /* gpio_eno12 */
        (xdc_Bits8)0x0,  /* gpio_eni34 */
        (xdc_Bits8)0x0,  /* gpio_eno34 */
    },  /* gpioIntEn */
    {
        (xdc_Bits8)0x0,  /* gpio_dati12 */
        (xdc_Bits8)0x0,  /* gpio_dato12 */
        (xdc_Bits8)0x0,  /* gpio_dati34 */
        (xdc_Bits8)0x0,  /* gpio_dato34 */
        (xdc_Bits8)0x0,  /* gpio_diri12 */
        (xdc_Bits8)0x0,  /* gpio_diro12 */
        (xdc_Bits8)0x0,  /* gpio_diri34 */
        (xdc_Bits8)0x0,  /* gpio_diro34 */
    },  /* gpioDatDir */
    ti_sysbios_timers_timer64_Timer_Half_DEFAULT,  /* half */
    ((ti_sysbios_hal_Hwi_Params*)0),  /* hwiParams */
    (xdc_Int)(-0x0 - 1),  /* intNum */
    (xdc_UInt)0x0,  /* prescalar */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_timers_timer64_Timer_Module__ ti_sysbios_timers_timer64_Timer_Module__root__V = {
    {&ti_sysbios_timers_timer64_Timer_Module__root__V.link,  /* link.next */
    &ti_sysbios_timers_timer64_Timer_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_timers_timer64_Timer_Object__ ti_sysbios_timers_timer64_Timer_Object__table__V[1] = {
    {/* instance#0 */
        0,
        1,  /* staticInst */
        (xdc_Int)0x0,  /* id */
        ti_sysbios_timers_timer64_Timer_Half_LOWER,  /* half */
        (xdc_UInt)0x10,  /* tcrInit */
        (xdc_UInt)0x0,  /* emumgtInit */
        (xdc_UInt)0x0,  /* gpioIntEn */
        (xdc_UInt)0x0,  /* gpioDatDir */
        ti_sysbios_interfaces_ITimer_RunMode_CONTINUOUS,  /* runMode */
        ti_sysbios_interfaces_ITimer_StartMode_AUTO,  /* startMode */
        (xdc_UInt)0x3e8,  /* period */
        ti_sysbios_interfaces_ITimer_PeriodType_MICROSECS,  /* periodType */
        (xdc_UInt)0x0,  /* prescalar */
        (xdc_UInt)0x20,  /* intNum */
        ((xdc_UArg)0),  /* arg */
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_knl_Clock_doTick__I)),  /* tickFxn */
        {
            (xdc_Bits32)0x0,  /* hi */
            (xdc_Bits32)0x0,  /* lo */
        },  /* extFreq */
        (ti_sysbios_hal_Hwi_Handle)&ti_sysbios_hal_Hwi_Object__table__V[0],  /* hwi */
    },
};

/* --> ti_sysbios_timers_timer64_Timer_Module_State_0_intFreqs__A */
__T1_ti_sysbios_timers_timer64_Timer_Module_State__intFreqs ti_sysbios_timers_timer64_Timer_Module_State_0_intFreqs__A[2] = {
    {
        (xdc_Bits32)0x0,  /* hi */
        (xdc_Bits32)0x19bfcc0,  /* lo */
    },  /* [0] */
    {
        (xdc_Bits32)0x0,  /* hi */
        (xdc_Bits32)0x19bfcc0,  /* lo */
    },  /* [1] */
};

/* --> ti_sysbios_timers_timer64_Timer_Module_State_0_gctrl__A */
__T1_ti_sysbios_timers_timer64_Timer_Module_State__gctrl ti_sysbios_timers_timer64_Timer_Module_State_0_gctrl__A[2] = {
    {
        ti_sysbios_timers_timer64_Timer_Mode_UNCHAINED,  /* mode */
        1,  /* master */
        (xdc_UInt16)0x0,  /* ownerCoreId */
    },  /* [0] */
    {
        ti_sysbios_timers_timer64_Timer_Mode_UNCHAINED,  /* mode */
        1,  /* master */
        (xdc_UInt16)0x0,  /* ownerCoreId */
    },  /* [1] */
};

/* --> ti_sysbios_timers_timer64_Timer_Module_State_0_device__A */
__T1_ti_sysbios_timers_timer64_Timer_Module_State__device ti_sysbios_timers_timer64_Timer_Module_State_0_device__A[4] = {
    {
        (xdc_UInt)0x20,  /* intNum */
        (xdc_UInt)(-0x0 - 1),  /* eventId */
        ((xdc_Ptr)((void*)0x1c21400)),  /* baseAddr */
    },  /* [0] */
    {
        (xdc_UInt)0x21,  /* intNum */
        (xdc_UInt)(-0x0 - 1),  /* eventId */
        ((xdc_Ptr)((void*)0x1c21400)),  /* baseAddr */
    },  /* [1] */
    {
        (xdc_UInt)0x22,  /* intNum */
        (xdc_UInt)(-0x0 - 1),  /* eventId */
        ((xdc_Ptr)((void*)0x1c21800)),  /* baseAddr */
    },  /* [2] */
    {
        (xdc_UInt)0x23,  /* intNum */
        (xdc_UInt)(-0x0 - 1),  /* eventId */
        ((xdc_Ptr)((void*)0x1c21800)),  /* baseAddr */
    },  /* [3] */
};

/* --> ti_sysbios_timers_timer64_Timer_Module_State_0_handles__A */
__T1_ti_sysbios_timers_timer64_Timer_Module_State__handles ti_sysbios_timers_timer64_Timer_Module_State_0_handles__A[4] = {
    (ti_sysbios_timers_timer64_Timer_Handle)&ti_sysbios_timers_timer64_Timer_Object__table__V[0],  /* [0] */
    0,  /* [1] */
    0,  /* [2] */
    0,  /* [3] */
};

/* Module__state__V */
ti_sysbios_timers_timer64_Timer_Module_State__ ti_sysbios_timers_timer64_Timer_Module__state__V = {
    (xdc_Bits32)0xe,  /* availMask */
    ((void*)ti_sysbios_timers_timer64_Timer_Module_State_0_intFreqs__A),  /* intFreqs */
    ((void*)ti_sysbios_timers_timer64_Timer_Module_State_0_gctrl__A),  /* gctrl */
    ((void*)ti_sysbios_timers_timer64_Timer_Module_State_0_device__A),  /* device */
    ((void*)ti_sysbios_timers_timer64_Timer_Module_State_0_handles__A),  /* handles */
};

/* --> ti_sysbios_timers_timer64_Timer_timerSettings__A */
const __T1_ti_sysbios_timers_timer64_Timer_timerSettings ti_sysbios_timers_timer64_Timer_timerSettings__A[2] = {
    {
        ti_sysbios_timers_timer64_Timer_Mode_UNCHAINED,  /* mode */
        1,  /* master */
        (xdc_UInt16)0x0,  /* ownerCoreId */
    },  /* [0] */
    {
        ti_sysbios_timers_timer64_Timer_Mode_UNCHAINED,  /* mode */
        1,  /* master */
        (xdc_UInt16)0x0,  /* ownerCoreId */
    },  /* [1] */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_timers_timer64_Timer_Module__diagsEnabled ti_sysbios_timers_timer64_Timer_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_timers_timer64_Timer_Module__diagsIncluded ti_sysbios_timers_timer64_Timer_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_timers_timer64_Timer_Module__diagsMask ti_sysbios_timers_timer64_Timer_Module__diagsMask__C = ((CT__ti_sysbios_timers_timer64_Timer_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_timers_timer64_Timer_Module__gateObj ti_sysbios_timers_timer64_Timer_Module__gateObj__C = ((CT__ti_sysbios_timers_timer64_Timer_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_timers_timer64_Timer_Module__gatePrms ti_sysbios_timers_timer64_Timer_Module__gatePrms__C = ((CT__ti_sysbios_timers_timer64_Timer_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_timers_timer64_Timer_Module__id ti_sysbios_timers_timer64_Timer_Module__id__C = (xdc_Bits16)0x8025;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_timers_timer64_Timer_Module__loggerDefined ti_sysbios_timers_timer64_Timer_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_timers_timer64_Timer_Module__loggerObj ti_sysbios_timers_timer64_Timer_Module__loggerObj__C = ((CT__ti_sysbios_timers_timer64_Timer_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_timers_timer64_Timer_Module__loggerFxn0 ti_sysbios_timers_timer64_Timer_Module__loggerFxn0__C = ((CT__ti_sysbios_timers_timer64_Timer_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_timers_timer64_Timer_Module__loggerFxn1 ti_sysbios_timers_timer64_Timer_Module__loggerFxn1__C = ((CT__ti_sysbios_timers_timer64_Timer_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_timers_timer64_Timer_Module__loggerFxn2 ti_sysbios_timers_timer64_Timer_Module__loggerFxn2__C = ((CT__ti_sysbios_timers_timer64_Timer_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_timers_timer64_Timer_Module__loggerFxn4 ti_sysbios_timers_timer64_Timer_Module__loggerFxn4__C = ((CT__ti_sysbios_timers_timer64_Timer_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_timers_timer64_Timer_Module__loggerFxn8 ti_sysbios_timers_timer64_Timer_Module__loggerFxn8__C = ((CT__ti_sysbios_timers_timer64_Timer_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_timers_timer64_Timer_Module__startupDoneFxn ti_sysbios_timers_timer64_Timer_Module__startupDoneFxn__C = ((CT__ti_sysbios_timers_timer64_Timer_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_timers_timer64_Timer_Object__count ti_sysbios_timers_timer64_Timer_Object__count__C = 1;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_timers_timer64_Timer_Object__heap ti_sysbios_timers_timer64_Timer_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_timers_timer64_Timer_Object__sizeof ti_sysbios_timers_timer64_Timer_Object__sizeof__C = sizeof(ti_sysbios_timers_timer64_Timer_Object__);

/* Object__table__C */
__FAR__ const CT__ti_sysbios_timers_timer64_Timer_Object__table ti_sysbios_timers_timer64_Timer_Object__table__C = ti_sysbios_timers_timer64_Timer_Object__table__V;

/* A_notAvailable__C */
__FAR__ const CT__ti_sysbios_timers_timer64_Timer_A_notAvailable ti_sysbios_timers_timer64_Timer_A_notAvailable__C = (((xdc_runtime_Assert_Id)1307) << 16 | 16);

/* E_invalidTimer__C */
__FAR__ const CT__ti_sysbios_timers_timer64_Timer_E_invalidTimer ti_sysbios_timers_timer64_Timer_E_invalidTimer__C = (((xdc_runtime_Error_Id)3139) << 16 | 0);

/* E_notAvailable__C */
__FAR__ const CT__ti_sysbios_timers_timer64_Timer_E_notAvailable ti_sysbios_timers_timer64_Timer_E_notAvailable__C = (((xdc_runtime_Error_Id)3175) << 16 | 0);

/* E_cannotSupport__C */
__FAR__ const CT__ti_sysbios_timers_timer64_Timer_E_cannotSupport ti_sysbios_timers_timer64_Timer_E_cannotSupport__C = (((xdc_runtime_Error_Id)3214) << 16 | 0);

/* anyMask__C */
__FAR__ const CT__ti_sysbios_timers_timer64_Timer_anyMask ti_sysbios_timers_timer64_Timer_anyMask__C = (xdc_Bits32)0xf;

/* defaultHalf__C */
__FAR__ const CT__ti_sysbios_timers_timer64_Timer_defaultHalf ti_sysbios_timers_timer64_Timer_defaultHalf__C = ti_sysbios_timers_timer64_Timer_Half_LOWER;

/* timerSettings__C */
__FAR__ const CT__ti_sysbios_timers_timer64_Timer_timerSettings ti_sysbios_timers_timer64_Timer_timerSettings__C = ((CT__ti_sysbios_timers_timer64_Timer_timerSettings)ti_sysbios_timers_timer64_Timer_timerSettings__A);

/* startupNeeded__C */
__FAR__ const CT__ti_sysbios_timers_timer64_Timer_startupNeeded ti_sysbios_timers_timer64_Timer_startupNeeded__C = 1;

/* freqDivisor__C */
__FAR__ const CT__ti_sysbios_timers_timer64_Timer_freqDivisor ti_sysbios_timers_timer64_Timer_freqDivisor__C = (xdc_UInt)0x0;

/* numTimerDevices__C */
__FAR__ const CT__ti_sysbios_timers_timer64_Timer_numTimerDevices ti_sysbios_timers_timer64_Timer_numTimerDevices__C = (xdc_Int)0x4;

/* numLocalTimers__C */
__FAR__ const CT__ti_sysbios_timers_timer64_Timer_numLocalTimers ti_sysbios_timers_timer64_Timer_numLocalTimers__C = (xdc_Int)0x0;


/*
 * ======== ti.sysbios.timers.timer64.Timer_TimerSupportProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.xdcruntime.SemThreadSupport INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_xdcruntime_SemThreadSupport_Object__DESC__C;

/* Object__PARAMS__C */
__FAR__ const ti_sysbios_xdcruntime_SemThreadSupport_Params ti_sysbios_xdcruntime_SemThreadSupport_Object__PARAMS__C = {
    sizeof (ti_sysbios_xdcruntime_SemThreadSupport_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_xdcruntime_SemThreadSupport_Object__PARAMS__C.__iprms, /* instance */
    xdc_runtime_knl_ISemaphore_Mode_COUNTING,  /* mode */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_xdcruntime_SemThreadSupport_Module__ ti_sysbios_xdcruntime_SemThreadSupport_Module__root__V = {
    {&ti_sysbios_xdcruntime_SemThreadSupport_Module__root__V.link,  /* link.next */
    &ti_sysbios_xdcruntime_SemThreadSupport_Module__root__V.link},  /* link.prev */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_xdcruntime_SemThreadSupport_Module__diagsEnabled ti_sysbios_xdcruntime_SemThreadSupport_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_xdcruntime_SemThreadSupport_Module__diagsIncluded ti_sysbios_xdcruntime_SemThreadSupport_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_xdcruntime_SemThreadSupport_Module__diagsMask ti_sysbios_xdcruntime_SemThreadSupport_Module__diagsMask__C = ((CT__ti_sysbios_xdcruntime_SemThreadSupport_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_xdcruntime_SemThreadSupport_Module__gateObj ti_sysbios_xdcruntime_SemThreadSupport_Module__gateObj__C = ((CT__ti_sysbios_xdcruntime_SemThreadSupport_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_xdcruntime_SemThreadSupport_Module__gatePrms ti_sysbios_xdcruntime_SemThreadSupport_Module__gatePrms__C = ((CT__ti_sysbios_xdcruntime_SemThreadSupport_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_xdcruntime_SemThreadSupport_Module__id ti_sysbios_xdcruntime_SemThreadSupport_Module__id__C = (xdc_Bits16)0x8046;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_xdcruntime_SemThreadSupport_Module__loggerDefined ti_sysbios_xdcruntime_SemThreadSupport_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_xdcruntime_SemThreadSupport_Module__loggerObj ti_sysbios_xdcruntime_SemThreadSupport_Module__loggerObj__C = ((CT__ti_sysbios_xdcruntime_SemThreadSupport_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_xdcruntime_SemThreadSupport_Module__loggerFxn0 ti_sysbios_xdcruntime_SemThreadSupport_Module__loggerFxn0__C = ((CT__ti_sysbios_xdcruntime_SemThreadSupport_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_xdcruntime_SemThreadSupport_Module__loggerFxn1 ti_sysbios_xdcruntime_SemThreadSupport_Module__loggerFxn1__C = ((CT__ti_sysbios_xdcruntime_SemThreadSupport_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_xdcruntime_SemThreadSupport_Module__loggerFxn2 ti_sysbios_xdcruntime_SemThreadSupport_Module__loggerFxn2__C = ((CT__ti_sysbios_xdcruntime_SemThreadSupport_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_xdcruntime_SemThreadSupport_Module__loggerFxn4 ti_sysbios_xdcruntime_SemThreadSupport_Module__loggerFxn4__C = ((CT__ti_sysbios_xdcruntime_SemThreadSupport_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_xdcruntime_SemThreadSupport_Module__loggerFxn8 ti_sysbios_xdcruntime_SemThreadSupport_Module__loggerFxn8__C = ((CT__ti_sysbios_xdcruntime_SemThreadSupport_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_xdcruntime_SemThreadSupport_Module__startupDoneFxn ti_sysbios_xdcruntime_SemThreadSupport_Module__startupDoneFxn__C = ((CT__ti_sysbios_xdcruntime_SemThreadSupport_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_xdcruntime_SemThreadSupport_Object__count ti_sysbios_xdcruntime_SemThreadSupport_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_xdcruntime_SemThreadSupport_Object__heap ti_sysbios_xdcruntime_SemThreadSupport_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_xdcruntime_SemThreadSupport_Object__sizeof ti_sysbios_xdcruntime_SemThreadSupport_Object__sizeof__C = sizeof(ti_sysbios_xdcruntime_SemThreadSupport_Object__);

/* Object__table__C */
__FAR__ const CT__ti_sysbios_xdcruntime_SemThreadSupport_Object__table ti_sysbios_xdcruntime_SemThreadSupport_Object__table__C = 0;


/*
 * ======== xdc.runtime.Assert INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_Assert_Module__diagsEnabled xdc_runtime_Assert_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_Assert_Module__diagsIncluded xdc_runtime_Assert_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_Assert_Module__diagsMask xdc_runtime_Assert_Module__diagsMask__C = ((CT__xdc_runtime_Assert_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_Assert_Module__gateObj xdc_runtime_Assert_Module__gateObj__C = ((CT__xdc_runtime_Assert_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_Assert_Module__gatePrms xdc_runtime_Assert_Module__gatePrms__C = ((CT__xdc_runtime_Assert_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_Assert_Module__id xdc_runtime_Assert_Module__id__C = (xdc_Bits16)0x8002;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_Assert_Module__loggerDefined xdc_runtime_Assert_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_Assert_Module__loggerObj xdc_runtime_Assert_Module__loggerObj__C = ((CT__xdc_runtime_Assert_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_Assert_Module__loggerFxn0 xdc_runtime_Assert_Module__loggerFxn0__C = ((CT__xdc_runtime_Assert_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_Assert_Module__loggerFxn1 xdc_runtime_Assert_Module__loggerFxn1__C = ((CT__xdc_runtime_Assert_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_Assert_Module__loggerFxn2 xdc_runtime_Assert_Module__loggerFxn2__C = ((CT__xdc_runtime_Assert_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_Assert_Module__loggerFxn4 xdc_runtime_Assert_Module__loggerFxn4__C = ((CT__xdc_runtime_Assert_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_Assert_Module__loggerFxn8 xdc_runtime_Assert_Module__loggerFxn8__C = ((CT__xdc_runtime_Assert_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__xdc_runtime_Assert_Module__startupDoneFxn xdc_runtime_Assert_Module__startupDoneFxn__C = ((CT__xdc_runtime_Assert_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_Assert_Object__count xdc_runtime_Assert_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_Assert_Object__heap xdc_runtime_Assert_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_Assert_Object__sizeof xdc_runtime_Assert_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__xdc_runtime_Assert_Object__table xdc_runtime_Assert_Object__table__C = 0;

/* E_assertFailed__C */
__FAR__ const CT__xdc_runtime_Assert_E_assertFailed xdc_runtime_Assert_E_assertFailed__C = (((xdc_runtime_Error_Id)2768) << 16 | 0);


/*
 * ======== xdc.runtime.Core INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_Core_Module__diagsEnabled xdc_runtime_Core_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_Core_Module__diagsIncluded xdc_runtime_Core_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_Core_Module__diagsMask xdc_runtime_Core_Module__diagsMask__C = ((CT__xdc_runtime_Core_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_Core_Module__gateObj xdc_runtime_Core_Module__gateObj__C = ((CT__xdc_runtime_Core_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_Core_Module__gatePrms xdc_runtime_Core_Module__gatePrms__C = ((CT__xdc_runtime_Core_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_Core_Module__id xdc_runtime_Core_Module__id__C = (xdc_Bits16)0x8003;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_Core_Module__loggerDefined xdc_runtime_Core_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_Core_Module__loggerObj xdc_runtime_Core_Module__loggerObj__C = ((CT__xdc_runtime_Core_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_Core_Module__loggerFxn0 xdc_runtime_Core_Module__loggerFxn0__C = ((CT__xdc_runtime_Core_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_Core_Module__loggerFxn1 xdc_runtime_Core_Module__loggerFxn1__C = ((CT__xdc_runtime_Core_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_Core_Module__loggerFxn2 xdc_runtime_Core_Module__loggerFxn2__C = ((CT__xdc_runtime_Core_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_Core_Module__loggerFxn4 xdc_runtime_Core_Module__loggerFxn4__C = ((CT__xdc_runtime_Core_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_Core_Module__loggerFxn8 xdc_runtime_Core_Module__loggerFxn8__C = ((CT__xdc_runtime_Core_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__xdc_runtime_Core_Module__startupDoneFxn xdc_runtime_Core_Module__startupDoneFxn__C = ((CT__xdc_runtime_Core_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_Core_Object__count xdc_runtime_Core_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_Core_Object__heap xdc_runtime_Core_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_Core_Object__sizeof xdc_runtime_Core_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__xdc_runtime_Core_Object__table xdc_runtime_Core_Object__table__C = 0;

/* A_initializedParams__C */
__FAR__ const CT__xdc_runtime_Core_A_initializedParams xdc_runtime_Core_A_initializedParams__C = (((xdc_runtime_Assert_Id)1) << 16 | 16);


/*
 * ======== xdc.runtime.Defaults INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_Defaults_Module__diagsEnabled xdc_runtime_Defaults_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_Defaults_Module__diagsIncluded xdc_runtime_Defaults_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_Defaults_Module__diagsMask xdc_runtime_Defaults_Module__diagsMask__C = ((CT__xdc_runtime_Defaults_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_Defaults_Module__gateObj xdc_runtime_Defaults_Module__gateObj__C = ((CT__xdc_runtime_Defaults_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_Defaults_Module__gatePrms xdc_runtime_Defaults_Module__gatePrms__C = ((CT__xdc_runtime_Defaults_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_Defaults_Module__id xdc_runtime_Defaults_Module__id__C = (xdc_Bits16)0x8004;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerDefined xdc_runtime_Defaults_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerObj xdc_runtime_Defaults_Module__loggerObj__C = ((CT__xdc_runtime_Defaults_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerFxn0 xdc_runtime_Defaults_Module__loggerFxn0__C = ((CT__xdc_runtime_Defaults_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerFxn1 xdc_runtime_Defaults_Module__loggerFxn1__C = ((CT__xdc_runtime_Defaults_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerFxn2 xdc_runtime_Defaults_Module__loggerFxn2__C = ((CT__xdc_runtime_Defaults_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerFxn4 xdc_runtime_Defaults_Module__loggerFxn4__C = ((CT__xdc_runtime_Defaults_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerFxn8 xdc_runtime_Defaults_Module__loggerFxn8__C = ((CT__xdc_runtime_Defaults_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__xdc_runtime_Defaults_Module__startupDoneFxn xdc_runtime_Defaults_Module__startupDoneFxn__C = ((CT__xdc_runtime_Defaults_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_Defaults_Object__count xdc_runtime_Defaults_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_Defaults_Object__heap xdc_runtime_Defaults_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_Defaults_Object__sizeof xdc_runtime_Defaults_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__xdc_runtime_Defaults_Object__table xdc_runtime_Defaults_Object__table__C = 0;


/*
 * ======== xdc.runtime.Diags INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_Diags_Module__diagsEnabled xdc_runtime_Diags_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_Diags_Module__diagsIncluded xdc_runtime_Diags_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_Diags_Module__diagsMask xdc_runtime_Diags_Module__diagsMask__C = ((CT__xdc_runtime_Diags_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_Diags_Module__gateObj xdc_runtime_Diags_Module__gateObj__C = ((CT__xdc_runtime_Diags_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_Diags_Module__gatePrms xdc_runtime_Diags_Module__gatePrms__C = ((CT__xdc_runtime_Diags_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_Diags_Module__id xdc_runtime_Diags_Module__id__C = (xdc_Bits16)0x8005;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_Diags_Module__loggerDefined xdc_runtime_Diags_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_Diags_Module__loggerObj xdc_runtime_Diags_Module__loggerObj__C = ((CT__xdc_runtime_Diags_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_Diags_Module__loggerFxn0 xdc_runtime_Diags_Module__loggerFxn0__C = ((CT__xdc_runtime_Diags_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_Diags_Module__loggerFxn1 xdc_runtime_Diags_Module__loggerFxn1__C = ((CT__xdc_runtime_Diags_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_Diags_Module__loggerFxn2 xdc_runtime_Diags_Module__loggerFxn2__C = ((CT__xdc_runtime_Diags_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_Diags_Module__loggerFxn4 xdc_runtime_Diags_Module__loggerFxn4__C = ((CT__xdc_runtime_Diags_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_Diags_Module__loggerFxn8 xdc_runtime_Diags_Module__loggerFxn8__C = ((CT__xdc_runtime_Diags_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__xdc_runtime_Diags_Module__startupDoneFxn xdc_runtime_Diags_Module__startupDoneFxn__C = ((CT__xdc_runtime_Diags_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_Diags_Object__count xdc_runtime_Diags_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_Diags_Object__heap xdc_runtime_Diags_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_Diags_Object__sizeof xdc_runtime_Diags_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__xdc_runtime_Diags_Object__table xdc_runtime_Diags_Object__table__C = 0;

/* setMaskEnabled__C */
__FAR__ const CT__xdc_runtime_Diags_setMaskEnabled xdc_runtime_Diags_setMaskEnabled__C = 0;

/* dictBase__C */
__FAR__ const CT__xdc_runtime_Diags_dictBase xdc_runtime_Diags_dictBase__C = ((CT__xdc_runtime_Diags_dictBase)0);


/*
 * ======== xdc.runtime.Error INITIALIZERS ========
 */

/* Module__state__V */
xdc_runtime_Error_Module_State__ xdc_runtime_Error_Module__state__V = {
    (xdc_UInt16)0x0,  /* count */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_Error_Module__diagsEnabled xdc_runtime_Error_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_Error_Module__diagsIncluded xdc_runtime_Error_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_Error_Module__diagsMask xdc_runtime_Error_Module__diagsMask__C = ((CT__xdc_runtime_Error_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_Error_Module__gateObj xdc_runtime_Error_Module__gateObj__C = ((CT__xdc_runtime_Error_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_Error_Module__gatePrms xdc_runtime_Error_Module__gatePrms__C = ((CT__xdc_runtime_Error_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_Error_Module__id xdc_runtime_Error_Module__id__C = (xdc_Bits16)0x8006;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_Error_Module__loggerDefined xdc_runtime_Error_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_Error_Module__loggerObj xdc_runtime_Error_Module__loggerObj__C = ((CT__xdc_runtime_Error_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_Error_Module__loggerFxn0 xdc_runtime_Error_Module__loggerFxn0__C = ((CT__xdc_runtime_Error_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_Error_Module__loggerFxn1 xdc_runtime_Error_Module__loggerFxn1__C = ((CT__xdc_runtime_Error_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_Error_Module__loggerFxn2 xdc_runtime_Error_Module__loggerFxn2__C = ((CT__xdc_runtime_Error_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_Error_Module__loggerFxn4 xdc_runtime_Error_Module__loggerFxn4__C = ((CT__xdc_runtime_Error_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_Error_Module__loggerFxn8 xdc_runtime_Error_Module__loggerFxn8__C = ((CT__xdc_runtime_Error_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__xdc_runtime_Error_Module__startupDoneFxn xdc_runtime_Error_Module__startupDoneFxn__C = ((CT__xdc_runtime_Error_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_Error_Object__count xdc_runtime_Error_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_Error_Object__heap xdc_runtime_Error_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_Error_Object__sizeof xdc_runtime_Error_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__xdc_runtime_Error_Object__table xdc_runtime_Error_Object__table__C = 0;

/* E_generic__C */
__FAR__ const CT__xdc_runtime_Error_E_generic xdc_runtime_Error_E_generic__C = (((xdc_runtime_Error_Id)2790) << 16 | 0);

/* E_memory__C */
__FAR__ const CT__xdc_runtime_Error_E_memory xdc_runtime_Error_E_memory__C = (((xdc_runtime_Error_Id)2794) << 16 | 0);

/* E_msgCode__C */
__FAR__ const CT__xdc_runtime_Error_E_msgCode xdc_runtime_Error_E_msgCode__C = (((xdc_runtime_Error_Id)2828) << 16 | 0);

/* policy__C */
__FAR__ const CT__xdc_runtime_Error_policy xdc_runtime_Error_policy__C = xdc_runtime_Error_UNWIND;

/* raiseHook__C */
__FAR__ const CT__xdc_runtime_Error_raiseHook xdc_runtime_Error_raiseHook__C = ((CT__xdc_runtime_Error_raiseHook)((xdc_Fxn)ti_sysbios_BIOS_errorRaiseHook__I));

/* maxDepth__C */
__FAR__ const CT__xdc_runtime_Error_maxDepth xdc_runtime_Error_maxDepth__C = (xdc_UInt16)0x10;


/*
 * ======== xdc.runtime.Gate INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_Gate_Module__diagsEnabled xdc_runtime_Gate_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_Gate_Module__diagsIncluded xdc_runtime_Gate_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_Gate_Module__diagsMask xdc_runtime_Gate_Module__diagsMask__C = ((CT__xdc_runtime_Gate_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_Gate_Module__gateObj xdc_runtime_Gate_Module__gateObj__C = ((CT__xdc_runtime_Gate_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_Gate_Module__gatePrms xdc_runtime_Gate_Module__gatePrms__C = ((CT__xdc_runtime_Gate_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_Gate_Module__id xdc_runtime_Gate_Module__id__C = (xdc_Bits16)0x8007;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_Gate_Module__loggerDefined xdc_runtime_Gate_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_Gate_Module__loggerObj xdc_runtime_Gate_Module__loggerObj__C = ((CT__xdc_runtime_Gate_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_Gate_Module__loggerFxn0 xdc_runtime_Gate_Module__loggerFxn0__C = ((CT__xdc_runtime_Gate_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_Gate_Module__loggerFxn1 xdc_runtime_Gate_Module__loggerFxn1__C = ((CT__xdc_runtime_Gate_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_Gate_Module__loggerFxn2 xdc_runtime_Gate_Module__loggerFxn2__C = ((CT__xdc_runtime_Gate_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_Gate_Module__loggerFxn4 xdc_runtime_Gate_Module__loggerFxn4__C = ((CT__xdc_runtime_Gate_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_Gate_Module__loggerFxn8 xdc_runtime_Gate_Module__loggerFxn8__C = ((CT__xdc_runtime_Gate_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__xdc_runtime_Gate_Module__startupDoneFxn xdc_runtime_Gate_Module__startupDoneFxn__C = ((CT__xdc_runtime_Gate_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_Gate_Object__count xdc_runtime_Gate_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_Gate_Object__heap xdc_runtime_Gate_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_Gate_Object__sizeof xdc_runtime_Gate_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__xdc_runtime_Gate_Object__table xdc_runtime_Gate_Object__table__C = 0;


/*
 * ======== xdc.runtime.Log INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_Log_Module__diagsEnabled xdc_runtime_Log_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_Log_Module__diagsIncluded xdc_runtime_Log_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_Log_Module__diagsMask xdc_runtime_Log_Module__diagsMask__C = ((CT__xdc_runtime_Log_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_Log_Module__gateObj xdc_runtime_Log_Module__gateObj__C = ((CT__xdc_runtime_Log_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_Log_Module__gatePrms xdc_runtime_Log_Module__gatePrms__C = ((CT__xdc_runtime_Log_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_Log_Module__id xdc_runtime_Log_Module__id__C = (xdc_Bits16)0x8008;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_Log_Module__loggerDefined xdc_runtime_Log_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_Log_Module__loggerObj xdc_runtime_Log_Module__loggerObj__C = ((CT__xdc_runtime_Log_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_Log_Module__loggerFxn0 xdc_runtime_Log_Module__loggerFxn0__C = ((CT__xdc_runtime_Log_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_Log_Module__loggerFxn1 xdc_runtime_Log_Module__loggerFxn1__C = ((CT__xdc_runtime_Log_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_Log_Module__loggerFxn2 xdc_runtime_Log_Module__loggerFxn2__C = ((CT__xdc_runtime_Log_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_Log_Module__loggerFxn4 xdc_runtime_Log_Module__loggerFxn4__C = ((CT__xdc_runtime_Log_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_Log_Module__loggerFxn8 xdc_runtime_Log_Module__loggerFxn8__C = ((CT__xdc_runtime_Log_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__xdc_runtime_Log_Module__startupDoneFxn xdc_runtime_Log_Module__startupDoneFxn__C = ((CT__xdc_runtime_Log_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_Log_Object__count xdc_runtime_Log_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_Log_Object__heap xdc_runtime_Log_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_Log_Object__sizeof xdc_runtime_Log_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__xdc_runtime_Log_Object__table xdc_runtime_Log_Object__table__C = 0;

/* L_construct__C */
__FAR__ const CT__xdc_runtime_Log_L_construct xdc_runtime_Log_L_construct__C = (((xdc_runtime_Log_Event)4038) << 16 | 4);

/* L_create__C */
__FAR__ const CT__xdc_runtime_Log_L_create xdc_runtime_Log_L_create__C = (((xdc_runtime_Log_Event)4062) << 16 | 4);

/* L_destruct__C */
__FAR__ const CT__xdc_runtime_Log_L_destruct xdc_runtime_Log_L_destruct__C = (((xdc_runtime_Log_Event)4083) << 16 | 4);

/* L_delete__C */
__FAR__ const CT__xdc_runtime_Log_L_delete xdc_runtime_Log_L_delete__C = (((xdc_runtime_Log_Event)4102) << 16 | 4);

/* L_error__C */
__FAR__ const CT__xdc_runtime_Log_L_error xdc_runtime_Log_L_error__C = (((xdc_runtime_Log_Event)4119) << 16 | 192);

/* L_warning__C */
__FAR__ const CT__xdc_runtime_Log_L_warning xdc_runtime_Log_L_warning__C = (((xdc_runtime_Log_Event)4133) << 16 | 224);

/* L_info__C */
__FAR__ const CT__xdc_runtime_Log_L_info xdc_runtime_Log_L_info__C = (((xdc_runtime_Log_Event)4149) << 16 | 16384);

/* L_start__C */
__FAR__ const CT__xdc_runtime_Log_L_start xdc_runtime_Log_L_start__C = (((xdc_runtime_Log_Event)4156) << 16 | 32768);

/* L_stop__C */
__FAR__ const CT__xdc_runtime_Log_L_stop xdc_runtime_Log_L_stop__C = (((xdc_runtime_Log_Event)4167) << 16 | 32768);

/* L_startInstance__C */
__FAR__ const CT__xdc_runtime_Log_L_startInstance xdc_runtime_Log_L_startInstance__C = (((xdc_runtime_Log_Event)4177) << 16 | 32768);

/* L_stopInstance__C */
__FAR__ const CT__xdc_runtime_Log_L_stopInstance xdc_runtime_Log_L_stopInstance__C = (((xdc_runtime_Log_Event)4196) << 16 | 32768);


/*
 * ======== xdc.runtime.Main INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_Main_Module__diagsEnabled xdc_runtime_Main_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_Main_Module__diagsIncluded xdc_runtime_Main_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_Main_Module__diagsMask xdc_runtime_Main_Module__diagsMask__C = ((CT__xdc_runtime_Main_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_Main_Module__gateObj xdc_runtime_Main_Module__gateObj__C = ((CT__xdc_runtime_Main_Module__gateObj)((void*)(xdc_runtime_IGateProvider_Handle)&ti_sysbios_gates_GateHwi_Object__table__V[0]));

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_Main_Module__gatePrms xdc_runtime_Main_Module__gatePrms__C = ((CT__xdc_runtime_Main_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_Main_Module__id xdc_runtime_Main_Module__id__C = (xdc_Bits16)0x8009;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_Main_Module__loggerDefined xdc_runtime_Main_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_Main_Module__loggerObj xdc_runtime_Main_Module__loggerObj__C = ((CT__xdc_runtime_Main_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_Main_Module__loggerFxn0 xdc_runtime_Main_Module__loggerFxn0__C = ((CT__xdc_runtime_Main_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_Main_Module__loggerFxn1 xdc_runtime_Main_Module__loggerFxn1__C = ((CT__xdc_runtime_Main_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_Main_Module__loggerFxn2 xdc_runtime_Main_Module__loggerFxn2__C = ((CT__xdc_runtime_Main_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_Main_Module__loggerFxn4 xdc_runtime_Main_Module__loggerFxn4__C = ((CT__xdc_runtime_Main_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_Main_Module__loggerFxn8 xdc_runtime_Main_Module__loggerFxn8__C = ((CT__xdc_runtime_Main_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__xdc_runtime_Main_Module__startupDoneFxn xdc_runtime_Main_Module__startupDoneFxn__C = ((CT__xdc_runtime_Main_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_Main_Object__count xdc_runtime_Main_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_Main_Object__heap xdc_runtime_Main_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_Main_Object__sizeof xdc_runtime_Main_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__xdc_runtime_Main_Object__table xdc_runtime_Main_Object__table__C = 0;


/*
 * ======== xdc.runtime.Main_Module_GateProxy INITIALIZERS ========
 */


/*
 * ======== xdc.runtime.Memory INITIALIZERS ========
 */

/* Module__state__V */
xdc_runtime_Memory_Module_State__ xdc_runtime_Memory_Module__state__V = {
    (xdc_SizeT)0x8,  /* maxDefaultTypeAlign */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_Memory_Module__diagsEnabled xdc_runtime_Memory_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_Memory_Module__diagsIncluded xdc_runtime_Memory_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_Memory_Module__diagsMask xdc_runtime_Memory_Module__diagsMask__C = ((CT__xdc_runtime_Memory_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_Memory_Module__gateObj xdc_runtime_Memory_Module__gateObj__C = ((CT__xdc_runtime_Memory_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_Memory_Module__gatePrms xdc_runtime_Memory_Module__gatePrms__C = ((CT__xdc_runtime_Memory_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_Memory_Module__id xdc_runtime_Memory_Module__id__C = (xdc_Bits16)0x800a;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_Memory_Module__loggerDefined xdc_runtime_Memory_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_Memory_Module__loggerObj xdc_runtime_Memory_Module__loggerObj__C = ((CT__xdc_runtime_Memory_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_Memory_Module__loggerFxn0 xdc_runtime_Memory_Module__loggerFxn0__C = ((CT__xdc_runtime_Memory_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_Memory_Module__loggerFxn1 xdc_runtime_Memory_Module__loggerFxn1__C = ((CT__xdc_runtime_Memory_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_Memory_Module__loggerFxn2 xdc_runtime_Memory_Module__loggerFxn2__C = ((CT__xdc_runtime_Memory_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_Memory_Module__loggerFxn4 xdc_runtime_Memory_Module__loggerFxn4__C = ((CT__xdc_runtime_Memory_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_Memory_Module__loggerFxn8 xdc_runtime_Memory_Module__loggerFxn8__C = ((CT__xdc_runtime_Memory_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__xdc_runtime_Memory_Module__startupDoneFxn xdc_runtime_Memory_Module__startupDoneFxn__C = ((CT__xdc_runtime_Memory_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_Memory_Object__count xdc_runtime_Memory_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_Memory_Object__heap xdc_runtime_Memory_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_Memory_Object__sizeof xdc_runtime_Memory_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__xdc_runtime_Memory_Object__table xdc_runtime_Memory_Object__table__C = 0;

/* defaultHeapInstance__C */
__FAR__ const CT__xdc_runtime_Memory_defaultHeapInstance xdc_runtime_Memory_defaultHeapInstance__C = (xdc_runtime_IHeap_Handle)&ti_sysbios_heaps_HeapMem_Object__table__V[0];


/*
 * ======== xdc.runtime.Memory_HeapProxy INITIALIZERS ========
 */


/*
 * ======== xdc.runtime.Registry INITIALIZERS ========
 */

/* Module__state__V */
xdc_runtime_Registry_Module_State__ xdc_runtime_Registry_Module__state__V = {
    ((xdc_runtime_Types_RegDesc*)0),  /* listHead */
    (xdc_Bits16)0x7fff,  /* curId */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_Registry_Module__diagsEnabled xdc_runtime_Registry_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_Registry_Module__diagsIncluded xdc_runtime_Registry_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_Registry_Module__diagsMask xdc_runtime_Registry_Module__diagsMask__C = ((CT__xdc_runtime_Registry_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_Registry_Module__gateObj xdc_runtime_Registry_Module__gateObj__C = ((CT__xdc_runtime_Registry_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_Registry_Module__gatePrms xdc_runtime_Registry_Module__gatePrms__C = ((CT__xdc_runtime_Registry_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_Registry_Module__id xdc_runtime_Registry_Module__id__C = (xdc_Bits16)0x800b;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_Registry_Module__loggerDefined xdc_runtime_Registry_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_Registry_Module__loggerObj xdc_runtime_Registry_Module__loggerObj__C = ((CT__xdc_runtime_Registry_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_Registry_Module__loggerFxn0 xdc_runtime_Registry_Module__loggerFxn0__C = ((CT__xdc_runtime_Registry_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_Registry_Module__loggerFxn1 xdc_runtime_Registry_Module__loggerFxn1__C = ((CT__xdc_runtime_Registry_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_Registry_Module__loggerFxn2 xdc_runtime_Registry_Module__loggerFxn2__C = ((CT__xdc_runtime_Registry_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_Registry_Module__loggerFxn4 xdc_runtime_Registry_Module__loggerFxn4__C = ((CT__xdc_runtime_Registry_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_Registry_Module__loggerFxn8 xdc_runtime_Registry_Module__loggerFxn8__C = ((CT__xdc_runtime_Registry_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__xdc_runtime_Registry_Module__startupDoneFxn xdc_runtime_Registry_Module__startupDoneFxn__C = ((CT__xdc_runtime_Registry_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_Registry_Object__count xdc_runtime_Registry_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_Registry_Object__heap xdc_runtime_Registry_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_Registry_Object__sizeof xdc_runtime_Registry_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__xdc_runtime_Registry_Object__table xdc_runtime_Registry_Object__table__C = 0;


/*
 * ======== xdc.runtime.Startup INITIALIZERS ========
 */

/* Module__state__V */
xdc_runtime_Startup_Module_State__ xdc_runtime_Startup_Module__state__V = {
    ((xdc_Int*)0),  /* stateTab */
    0,  /* execFlag */
    0,  /* rtsDoneFlag */
};

/* --> xdc_runtime_Startup_firstFxns__A */
const __T1_xdc_runtime_Startup_firstFxns xdc_runtime_Startup_firstFxns__A[3] = {
    ((xdc_Void(*)(xdc_Void))((xdc_Fxn)ti_sysbios_family_arm_arm9_Cache_startup__I)),  /* [0] */
    ((xdc_Void(*)(xdc_Void))((xdc_Fxn)ti_sysbios_heaps_HeapMem_init__I)),  /* [1] */
    ((xdc_Void(*)(xdc_Void))((xdc_Fxn)ti_sysbios_hal_Hwi_initStack)),  /* [2] */
};

/* --> xdc_runtime_Startup_lastFxns__A */
const __T1_xdc_runtime_Startup_lastFxns xdc_runtime_Startup_lastFxns__A[1] = {
    ((xdc_Void(*)(xdc_Void))((xdc_Fxn)xdc_runtime_System_lastFxn__I)),  /* [0] */
};

/* --> xdc_runtime_Startup_sfxnTab__A */
const __T1_xdc_runtime_Startup_sfxnTab xdc_runtime_Startup_sfxnTab__A[14] = {
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)xdc_runtime_System_Module_startup__E)),  /* [0] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)xdc_runtime_SysMin_Module_startup__E)),  /* [1] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_family_arm_HwiCommon_Module_startup__E)),  /* [2] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_hal_Hwi_Module_startup__E)),  /* [3] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_hal_Timer_Module_startup__E)),  /* [4] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_knl_Clock_Module_startup__E)),  /* [5] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_knl_Swi_Module_startup__E)),  /* [6] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_knl_Task_Module_startup__E)),  /* [7] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_timers_timer64_Timer_Module_startup__E)),  /* [8] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sdo_utils_NameServer_Module_startup__E)),  /* [9] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sdo_io_Stream_Module_startup__E)),  /* [10] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_family_arm_dm6446_Hwi_Module_startup__E)),  /* [11] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_family_arm_exc_Exception_Module_startup__E)),  /* [12] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_family_arm_arm9_Mmu_Module_startup__E)),  /* [13] */
};

/* --> xdc_runtime_Startup_sfxnRts__A */
const __T1_xdc_runtime_Startup_sfxnRts xdc_runtime_Startup_sfxnRts__A[14] = {
    1,  /* [0] */
    1,  /* [1] */
    0,  /* [2] */
    0,  /* [3] */
    0,  /* [4] */
    0,  /* [5] */
    0,  /* [6] */
    0,  /* [7] */
    0,  /* [8] */
    0,  /* [9] */
    0,  /* [10] */
    0,  /* [11] */
    0,  /* [12] */
    0,  /* [13] */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_Startup_Module__diagsEnabled xdc_runtime_Startup_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_Startup_Module__diagsIncluded xdc_runtime_Startup_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_Startup_Module__diagsMask xdc_runtime_Startup_Module__diagsMask__C = ((CT__xdc_runtime_Startup_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_Startup_Module__gateObj xdc_runtime_Startup_Module__gateObj__C = ((CT__xdc_runtime_Startup_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_Startup_Module__gatePrms xdc_runtime_Startup_Module__gatePrms__C = ((CT__xdc_runtime_Startup_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_Startup_Module__id xdc_runtime_Startup_Module__id__C = (xdc_Bits16)0x800c;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_Startup_Module__loggerDefined xdc_runtime_Startup_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_Startup_Module__loggerObj xdc_runtime_Startup_Module__loggerObj__C = ((CT__xdc_runtime_Startup_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_Startup_Module__loggerFxn0 xdc_runtime_Startup_Module__loggerFxn0__C = ((CT__xdc_runtime_Startup_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_Startup_Module__loggerFxn1 xdc_runtime_Startup_Module__loggerFxn1__C = ((CT__xdc_runtime_Startup_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_Startup_Module__loggerFxn2 xdc_runtime_Startup_Module__loggerFxn2__C = ((CT__xdc_runtime_Startup_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_Startup_Module__loggerFxn4 xdc_runtime_Startup_Module__loggerFxn4__C = ((CT__xdc_runtime_Startup_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_Startup_Module__loggerFxn8 xdc_runtime_Startup_Module__loggerFxn8__C = ((CT__xdc_runtime_Startup_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__xdc_runtime_Startup_Module__startupDoneFxn xdc_runtime_Startup_Module__startupDoneFxn__C = ((CT__xdc_runtime_Startup_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_Startup_Object__count xdc_runtime_Startup_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_Startup_Object__heap xdc_runtime_Startup_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_Startup_Object__sizeof xdc_runtime_Startup_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__xdc_runtime_Startup_Object__table xdc_runtime_Startup_Object__table__C = 0;

/* maxPasses__C */
__FAR__ const CT__xdc_runtime_Startup_maxPasses xdc_runtime_Startup_maxPasses__C = (xdc_Int)0x20;

/* firstFxns__C */
__FAR__ const CT__xdc_runtime_Startup_firstFxns xdc_runtime_Startup_firstFxns__C = {3, ((__T1_xdc_runtime_Startup_firstFxns*)xdc_runtime_Startup_firstFxns__A)};

/* lastFxns__C */
__FAR__ const CT__xdc_runtime_Startup_lastFxns xdc_runtime_Startup_lastFxns__C = {1, ((__T1_xdc_runtime_Startup_lastFxns*)xdc_runtime_Startup_lastFxns__A)};

/* startModsFxn__C */
__FAR__ const CT__xdc_runtime_Startup_startModsFxn xdc_runtime_Startup_startModsFxn__C = ((CT__xdc_runtime_Startup_startModsFxn)((xdc_Fxn)xdc_runtime_Startup_startMods__I));

/* execImpl__C */
__FAR__ const CT__xdc_runtime_Startup_execImpl xdc_runtime_Startup_execImpl__C = ((CT__xdc_runtime_Startup_execImpl)((xdc_Fxn)xdc_runtime_Startup_exec__I));

/* sfxnTab__C */
__FAR__ const CT__xdc_runtime_Startup_sfxnTab xdc_runtime_Startup_sfxnTab__C = ((CT__xdc_runtime_Startup_sfxnTab)xdc_runtime_Startup_sfxnTab__A);

/* sfxnRts__C */
__FAR__ const CT__xdc_runtime_Startup_sfxnRts xdc_runtime_Startup_sfxnRts__C = ((CT__xdc_runtime_Startup_sfxnRts)xdc_runtime_Startup_sfxnRts__A);


/*
 * ======== xdc.runtime.SysMin INITIALIZERS ========
 */

/* --> xdc_runtime_SysMin_Module_State_0_outbuf__A */
__T1_xdc_runtime_SysMin_Module_State__outbuf xdc_runtime_SysMin_Module_State_0_outbuf__A[1024];

/* Module__state__V */
xdc_runtime_SysMin_Module_State__ xdc_runtime_SysMin_Module__state__V = {
    ((void*)xdc_runtime_SysMin_Module_State_0_outbuf__A),  /* outbuf */
    (xdc_UInt)0x0,  /* outidx */
    0,  /* wrapped */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_SysMin_Module__diagsEnabled xdc_runtime_SysMin_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_SysMin_Module__diagsIncluded xdc_runtime_SysMin_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_SysMin_Module__diagsMask xdc_runtime_SysMin_Module__diagsMask__C = ((CT__xdc_runtime_SysMin_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_SysMin_Module__gateObj xdc_runtime_SysMin_Module__gateObj__C = ((CT__xdc_runtime_SysMin_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_SysMin_Module__gatePrms xdc_runtime_SysMin_Module__gatePrms__C = ((CT__xdc_runtime_SysMin_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_SysMin_Module__id xdc_runtime_SysMin_Module__id__C = (xdc_Bits16)0x800e;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_SysMin_Module__loggerDefined xdc_runtime_SysMin_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_SysMin_Module__loggerObj xdc_runtime_SysMin_Module__loggerObj__C = ((CT__xdc_runtime_SysMin_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_SysMin_Module__loggerFxn0 xdc_runtime_SysMin_Module__loggerFxn0__C = ((CT__xdc_runtime_SysMin_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_SysMin_Module__loggerFxn1 xdc_runtime_SysMin_Module__loggerFxn1__C = ((CT__xdc_runtime_SysMin_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_SysMin_Module__loggerFxn2 xdc_runtime_SysMin_Module__loggerFxn2__C = ((CT__xdc_runtime_SysMin_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_SysMin_Module__loggerFxn4 xdc_runtime_SysMin_Module__loggerFxn4__C = ((CT__xdc_runtime_SysMin_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_SysMin_Module__loggerFxn8 xdc_runtime_SysMin_Module__loggerFxn8__C = ((CT__xdc_runtime_SysMin_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__xdc_runtime_SysMin_Module__startupDoneFxn xdc_runtime_SysMin_Module__startupDoneFxn__C = ((CT__xdc_runtime_SysMin_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_SysMin_Object__count xdc_runtime_SysMin_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_SysMin_Object__heap xdc_runtime_SysMin_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_SysMin_Object__sizeof xdc_runtime_SysMin_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__xdc_runtime_SysMin_Object__table xdc_runtime_SysMin_Object__table__C = 0;

/* bufSize__C */
__FAR__ const CT__xdc_runtime_SysMin_bufSize xdc_runtime_SysMin_bufSize__C = (xdc_SizeT)0x400;

/* flushAtExit__C */
__FAR__ const CT__xdc_runtime_SysMin_flushAtExit xdc_runtime_SysMin_flushAtExit__C = 1;

/* outputFxn__C */
__FAR__ const CT__xdc_runtime_SysMin_outputFxn xdc_runtime_SysMin_outputFxn__C = ((CT__xdc_runtime_SysMin_outputFxn)0);

/* outputFunc__C */
__FAR__ const CT__xdc_runtime_SysMin_outputFunc xdc_runtime_SysMin_outputFunc__C = ((CT__xdc_runtime_SysMin_outputFunc)((xdc_Fxn)xdc_runtime_SysMin_output__I));


/*
 * ======== xdc.runtime.System INITIALIZERS ========
 */

/* --> xdc_runtime_System_Module_State_0_atexitHandlers__A */
__T1_xdc_runtime_System_Module_State__atexitHandlers xdc_runtime_System_Module_State_0_atexitHandlers__A[8] = {
    ((xdc_Void(*)(xdc_Int))0),  /* [0] */
    ((xdc_Void(*)(xdc_Int))0),  /* [1] */
    ((xdc_Void(*)(xdc_Int))0),  /* [2] */
    ((xdc_Void(*)(xdc_Int))0),  /* [3] */
    ((xdc_Void(*)(xdc_Int))0),  /* [4] */
    ((xdc_Void(*)(xdc_Int))0),  /* [5] */
    ((xdc_Void(*)(xdc_Int))0),  /* [6] */
    ((xdc_Void(*)(xdc_Int))0),  /* [7] */
};

/* Module__state__V */
xdc_runtime_System_Module_State__ xdc_runtime_System_Module__state__V = {
    ((void*)xdc_runtime_System_Module_State_0_atexitHandlers__A),  /* atexitHandlers */
    (xdc_Int)0x0,  /* numAtexitHandlers */
    (xdc_Int)0xcafe,  /* exitStatus */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_System_Module__diagsEnabled xdc_runtime_System_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_System_Module__diagsIncluded xdc_runtime_System_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_System_Module__diagsMask xdc_runtime_System_Module__diagsMask__C = ((CT__xdc_runtime_System_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_System_Module__gateObj xdc_runtime_System_Module__gateObj__C = ((CT__xdc_runtime_System_Module__gateObj)((void*)(xdc_runtime_IGateProvider_Handle)&ti_sysbios_gates_GateHwi_Object__table__V[0]));

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_System_Module__gatePrms xdc_runtime_System_Module__gatePrms__C = ((CT__xdc_runtime_System_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_System_Module__id xdc_runtime_System_Module__id__C = (xdc_Bits16)0x800d;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_System_Module__loggerDefined xdc_runtime_System_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_System_Module__loggerObj xdc_runtime_System_Module__loggerObj__C = ((CT__xdc_runtime_System_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_System_Module__loggerFxn0 xdc_runtime_System_Module__loggerFxn0__C = ((CT__xdc_runtime_System_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_System_Module__loggerFxn1 xdc_runtime_System_Module__loggerFxn1__C = ((CT__xdc_runtime_System_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_System_Module__loggerFxn2 xdc_runtime_System_Module__loggerFxn2__C = ((CT__xdc_runtime_System_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_System_Module__loggerFxn4 xdc_runtime_System_Module__loggerFxn4__C = ((CT__xdc_runtime_System_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_System_Module__loggerFxn8 xdc_runtime_System_Module__loggerFxn8__C = ((CT__xdc_runtime_System_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__xdc_runtime_System_Module__startupDoneFxn xdc_runtime_System_Module__startupDoneFxn__C = ((CT__xdc_runtime_System_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_System_Object__count xdc_runtime_System_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_System_Object__heap xdc_runtime_System_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_System_Object__sizeof xdc_runtime_System_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__xdc_runtime_System_Object__table xdc_runtime_System_Object__table__C = 0;

/* A_cannotFitIntoArg__C */
__FAR__ const CT__xdc_runtime_System_A_cannotFitIntoArg xdc_runtime_System_A_cannotFitIntoArg__C = (((xdc_runtime_Assert_Id)307) << 16 | 16);

/* maxAtexitHandlers__C */
__FAR__ const CT__xdc_runtime_System_maxAtexitHandlers xdc_runtime_System_maxAtexitHandlers__C = (xdc_Int)0x8;

/* extendFxn__C */
__FAR__ const CT__xdc_runtime_System_extendFxn xdc_runtime_System_extendFxn__C = ((CT__xdc_runtime_System_extendFxn)((xdc_Fxn)xdc_runtime_System_printfExtend__I));


/*
 * ======== xdc.runtime.System_Module_GateProxy INITIALIZERS ========
 */


/*
 * ======== xdc.runtime.System_SupportProxy INITIALIZERS ========
 */


/*
 * ======== xdc.runtime.Text INITIALIZERS ========
 */

/* Module__state__V */
xdc_runtime_Text_Module_State__ xdc_runtime_Text_Module__state__V = {
    ((xdc_Ptr)((void*)&xdc_runtime_Text_charTab__A[0])),  /* charBase */
    ((xdc_Ptr)((void*)&xdc_runtime_Text_nodeTab__A[0])),  /* nodeBase */
};

/* --> xdc_runtime_Text_charTab__A */
const __T1_xdc_runtime_Text_charTab xdc_runtime_Text_charTab__A[5560] = {
    (xdc_Char)0x0,  /* [0] */
    (xdc_Char)0x41,  /* [1] */
    (xdc_Char)0x5f,  /* [2] */
    (xdc_Char)0x69,  /* [3] */
    (xdc_Char)0x6e,  /* [4] */
    (xdc_Char)0x69,  /* [5] */
    (xdc_Char)0x74,  /* [6] */
    (xdc_Char)0x69,  /* [7] */
    (xdc_Char)0x61,  /* [8] */
    (xdc_Char)0x6c,  /* [9] */
    (xdc_Char)0x69,  /* [10] */
    (xdc_Char)0x7a,  /* [11] */
    (xdc_Char)0x65,  /* [12] */
    (xdc_Char)0x64,  /* [13] */
    (xdc_Char)0x50,  /* [14] */
    (xdc_Char)0x61,  /* [15] */
    (xdc_Char)0x72,  /* [16] */
    (xdc_Char)0x61,  /* [17] */
    (xdc_Char)0x6d,  /* [18] */
    (xdc_Char)0x73,  /* [19] */
    (xdc_Char)0x3a,  /* [20] */
    (xdc_Char)0x20,  /* [21] */
    (xdc_Char)0x75,  /* [22] */
    (xdc_Char)0x6e,  /* [23] */
    (xdc_Char)0x69,  /* [24] */
    (xdc_Char)0x6e,  /* [25] */
    (xdc_Char)0x69,  /* [26] */
    (xdc_Char)0x74,  /* [27] */
    (xdc_Char)0x69,  /* [28] */
    (xdc_Char)0x61,  /* [29] */
    (xdc_Char)0x6c,  /* [30] */
    (xdc_Char)0x69,  /* [31] */
    (xdc_Char)0x7a,  /* [32] */
    (xdc_Char)0x65,  /* [33] */
    (xdc_Char)0x64,  /* [34] */
    (xdc_Char)0x20,  /* [35] */
    (xdc_Char)0x50,  /* [36] */
    (xdc_Char)0x61,  /* [37] */
    (xdc_Char)0x72,  /* [38] */
    (xdc_Char)0x61,  /* [39] */
    (xdc_Char)0x6d,  /* [40] */
    (xdc_Char)0x73,  /* [41] */
    (xdc_Char)0x20,  /* [42] */
    (xdc_Char)0x73,  /* [43] */
    (xdc_Char)0x74,  /* [44] */
    (xdc_Char)0x72,  /* [45] */
    (xdc_Char)0x75,  /* [46] */
    (xdc_Char)0x63,  /* [47] */
    (xdc_Char)0x74,  /* [48] */
    (xdc_Char)0x0,  /* [49] */
    (xdc_Char)0x48,  /* [50] */
    (xdc_Char)0x65,  /* [51] */
    (xdc_Char)0x61,  /* [52] */
    (xdc_Char)0x70,  /* [53] */
    (xdc_Char)0x4d,  /* [54] */
    (xdc_Char)0x69,  /* [55] */
    (xdc_Char)0x6e,  /* [56] */
    (xdc_Char)0x5f,  /* [57] */
    (xdc_Char)0x63,  /* [58] */
    (xdc_Char)0x72,  /* [59] */
    (xdc_Char)0x65,  /* [60] */
    (xdc_Char)0x61,  /* [61] */
    (xdc_Char)0x74,  /* [62] */
    (xdc_Char)0x65,  /* [63] */
    (xdc_Char)0x20,  /* [64] */
    (xdc_Char)0x63,  /* [65] */
    (xdc_Char)0x61,  /* [66] */
    (xdc_Char)0x6e,  /* [67] */
    (xdc_Char)0x6e,  /* [68] */
    (xdc_Char)0x6f,  /* [69] */
    (xdc_Char)0x74,  /* [70] */
    (xdc_Char)0x20,  /* [71] */
    (xdc_Char)0x68,  /* [72] */
    (xdc_Char)0x61,  /* [73] */
    (xdc_Char)0x76,  /* [74] */
    (xdc_Char)0x65,  /* [75] */
    (xdc_Char)0x20,  /* [76] */
    (xdc_Char)0x61,  /* [77] */
    (xdc_Char)0x20,  /* [78] */
    (xdc_Char)0x7a,  /* [79] */
    (xdc_Char)0x65,  /* [80] */
    (xdc_Char)0x72,  /* [81] */
    (xdc_Char)0x6f,  /* [82] */
    (xdc_Char)0x20,  /* [83] */
    (xdc_Char)0x73,  /* [84] */
    (xdc_Char)0x69,  /* [85] */
    (xdc_Char)0x7a,  /* [86] */
    (xdc_Char)0x65,  /* [87] */
    (xdc_Char)0x20,  /* [88] */
    (xdc_Char)0x76,  /* [89] */
    (xdc_Char)0x61,  /* [90] */
    (xdc_Char)0x6c,  /* [91] */
    (xdc_Char)0x75,  /* [92] */
    (xdc_Char)0x65,  /* [93] */
    (xdc_Char)0x0,  /* [94] */
    (xdc_Char)0x48,  /* [95] */
    (xdc_Char)0x65,  /* [96] */
    (xdc_Char)0x61,  /* [97] */
    (xdc_Char)0x70,  /* [98] */
    (xdc_Char)0x53,  /* [99] */
    (xdc_Char)0x74,  /* [100] */
    (xdc_Char)0x64,  /* [101] */
    (xdc_Char)0x5f,  /* [102] */
    (xdc_Char)0x63,  /* [103] */
    (xdc_Char)0x72,  /* [104] */
    (xdc_Char)0x65,  /* [105] */
    (xdc_Char)0x61,  /* [106] */
    (xdc_Char)0x74,  /* [107] */
    (xdc_Char)0x65,  /* [108] */
    (xdc_Char)0x20,  /* [109] */
    (xdc_Char)0x63,  /* [110] */
    (xdc_Char)0x61,  /* [111] */
    (xdc_Char)0x6e,  /* [112] */
    (xdc_Char)0x6e,  /* [113] */
    (xdc_Char)0x6f,  /* [114] */
    (xdc_Char)0x74,  /* [115] */
    (xdc_Char)0x20,  /* [116] */
    (xdc_Char)0x68,  /* [117] */
    (xdc_Char)0x61,  /* [118] */
    (xdc_Char)0x76,  /* [119] */
    (xdc_Char)0x65,  /* [120] */
    (xdc_Char)0x20,  /* [121] */
    (xdc_Char)0x61,  /* [122] */
    (xdc_Char)0x20,  /* [123] */
    (xdc_Char)0x7a,  /* [124] */
    (xdc_Char)0x65,  /* [125] */
    (xdc_Char)0x72,  /* [126] */
    (xdc_Char)0x6f,  /* [127] */
    (xdc_Char)0x20,  /* [128] */
    (xdc_Char)0x73,  /* [129] */
    (xdc_Char)0x69,  /* [130] */
    (xdc_Char)0x7a,  /* [131] */
    (xdc_Char)0x65,  /* [132] */
    (xdc_Char)0x20,  /* [133] */
    (xdc_Char)0x76,  /* [134] */
    (xdc_Char)0x61,  /* [135] */
    (xdc_Char)0x6c,  /* [136] */
    (xdc_Char)0x75,  /* [137] */
    (xdc_Char)0x65,  /* [138] */
    (xdc_Char)0x0,  /* [139] */
    (xdc_Char)0x48,  /* [140] */
    (xdc_Char)0x65,  /* [141] */
    (xdc_Char)0x61,  /* [142] */
    (xdc_Char)0x70,  /* [143] */
    (xdc_Char)0x53,  /* [144] */
    (xdc_Char)0x74,  /* [145] */
    (xdc_Char)0x64,  /* [146] */
    (xdc_Char)0x20,  /* [147] */
    (xdc_Char)0x69,  /* [148] */
    (xdc_Char)0x6e,  /* [149] */
    (xdc_Char)0x73,  /* [150] */
    (xdc_Char)0x74,  /* [151] */
    (xdc_Char)0x61,  /* [152] */
    (xdc_Char)0x6e,  /* [153] */
    (xdc_Char)0x63,  /* [154] */
    (xdc_Char)0x65,  /* [155] */
    (xdc_Char)0x20,  /* [156] */
    (xdc_Char)0x74,  /* [157] */
    (xdc_Char)0x6f,  /* [158] */
    (xdc_Char)0x74,  /* [159] */
    (xdc_Char)0x61,  /* [160] */
    (xdc_Char)0x6c,  /* [161] */
    (xdc_Char)0x46,  /* [162] */
    (xdc_Char)0x72,  /* [163] */
    (xdc_Char)0x65,  /* [164] */
    (xdc_Char)0x65,  /* [165] */
    (xdc_Char)0x53,  /* [166] */
    (xdc_Char)0x69,  /* [167] */
    (xdc_Char)0x7a,  /* [168] */
    (xdc_Char)0x65,  /* [169] */
    (xdc_Char)0x20,  /* [170] */
    (xdc_Char)0x69,  /* [171] */
    (xdc_Char)0x73,  /* [172] */
    (xdc_Char)0x20,  /* [173] */
    (xdc_Char)0x67,  /* [174] */
    (xdc_Char)0x72,  /* [175] */
    (xdc_Char)0x65,  /* [176] */
    (xdc_Char)0x61,  /* [177] */
    (xdc_Char)0x74,  /* [178] */
    (xdc_Char)0x65,  /* [179] */
    (xdc_Char)0x72,  /* [180] */
    (xdc_Char)0x20,  /* [181] */
    (xdc_Char)0x74,  /* [182] */
    (xdc_Char)0x68,  /* [183] */
    (xdc_Char)0x61,  /* [184] */
    (xdc_Char)0x6e,  /* [185] */
    (xdc_Char)0x20,  /* [186] */
    (xdc_Char)0x73,  /* [187] */
    (xdc_Char)0x74,  /* [188] */
    (xdc_Char)0x61,  /* [189] */
    (xdc_Char)0x72,  /* [190] */
    (xdc_Char)0x74,  /* [191] */
    (xdc_Char)0x69,  /* [192] */
    (xdc_Char)0x6e,  /* [193] */
    (xdc_Char)0x67,  /* [194] */
    (xdc_Char)0x20,  /* [195] */
    (xdc_Char)0x73,  /* [196] */
    (xdc_Char)0x69,  /* [197] */
    (xdc_Char)0x7a,  /* [198] */
    (xdc_Char)0x65,  /* [199] */
    (xdc_Char)0x0,  /* [200] */
    (xdc_Char)0x48,  /* [201] */
    (xdc_Char)0x65,  /* [202] */
    (xdc_Char)0x61,  /* [203] */
    (xdc_Char)0x70,  /* [204] */
    (xdc_Char)0x53,  /* [205] */
    (xdc_Char)0x74,  /* [206] */
    (xdc_Char)0x64,  /* [207] */
    (xdc_Char)0x5f,  /* [208] */
    (xdc_Char)0x61,  /* [209] */
    (xdc_Char)0x6c,  /* [210] */
    (xdc_Char)0x6c,  /* [211] */
    (xdc_Char)0x6f,  /* [212] */
    (xdc_Char)0x63,  /* [213] */
    (xdc_Char)0x20,  /* [214] */
    (xdc_Char)0x2d,  /* [215] */
    (xdc_Char)0x20,  /* [216] */
    (xdc_Char)0x72,  /* [217] */
    (xdc_Char)0x65,  /* [218] */
    (xdc_Char)0x71,  /* [219] */
    (xdc_Char)0x75,  /* [220] */
    (xdc_Char)0x65,  /* [221] */
    (xdc_Char)0x73,  /* [222] */
    (xdc_Char)0x74,  /* [223] */
    (xdc_Char)0x65,  /* [224] */
    (xdc_Char)0x64,  /* [225] */
    (xdc_Char)0x20,  /* [226] */
    (xdc_Char)0x61,  /* [227] */
    (xdc_Char)0x6c,  /* [228] */
    (xdc_Char)0x69,  /* [229] */
    (xdc_Char)0x67,  /* [230] */
    (xdc_Char)0x6e,  /* [231] */
    (xdc_Char)0x6d,  /* [232] */
    (xdc_Char)0x65,  /* [233] */
    (xdc_Char)0x6e,  /* [234] */
    (xdc_Char)0x74,  /* [235] */
    (xdc_Char)0x20,  /* [236] */
    (xdc_Char)0x69,  /* [237] */
    (xdc_Char)0x73,  /* [238] */
    (xdc_Char)0x20,  /* [239] */
    (xdc_Char)0x67,  /* [240] */
    (xdc_Char)0x72,  /* [241] */
    (xdc_Char)0x65,  /* [242] */
    (xdc_Char)0x61,  /* [243] */
    (xdc_Char)0x74,  /* [244] */
    (xdc_Char)0x65,  /* [245] */
    (xdc_Char)0x72,  /* [246] */
    (xdc_Char)0x20,  /* [247] */
    (xdc_Char)0x74,  /* [248] */
    (xdc_Char)0x68,  /* [249] */
    (xdc_Char)0x61,  /* [250] */
    (xdc_Char)0x6e,  /* [251] */
    (xdc_Char)0x20,  /* [252] */
    (xdc_Char)0x61,  /* [253] */
    (xdc_Char)0x6c,  /* [254] */
    (xdc_Char)0x6c,  /* [255] */
    (xdc_Char)0x6f,  /* [256] */
    (xdc_Char)0x77,  /* [257] */
    (xdc_Char)0x65,  /* [258] */
    (xdc_Char)0x64,  /* [259] */
    (xdc_Char)0x0,  /* [260] */
    (xdc_Char)0x41,  /* [261] */
    (xdc_Char)0x5f,  /* [262] */
    (xdc_Char)0x69,  /* [263] */
    (xdc_Char)0x6e,  /* [264] */
    (xdc_Char)0x76,  /* [265] */
    (xdc_Char)0x61,  /* [266] */
    (xdc_Char)0x6c,  /* [267] */
    (xdc_Char)0x69,  /* [268] */
    (xdc_Char)0x64,  /* [269] */
    (xdc_Char)0x4c,  /* [270] */
    (xdc_Char)0x6f,  /* [271] */
    (xdc_Char)0x67,  /* [272] */
    (xdc_Char)0x67,  /* [273] */
    (xdc_Char)0x65,  /* [274] */
    (xdc_Char)0x72,  /* [275] */
    (xdc_Char)0x3a,  /* [276] */
    (xdc_Char)0x20,  /* [277] */
    (xdc_Char)0x54,  /* [278] */
    (xdc_Char)0x68,  /* [279] */
    (xdc_Char)0x65,  /* [280] */
    (xdc_Char)0x20,  /* [281] */
    (xdc_Char)0x6c,  /* [282] */
    (xdc_Char)0x6f,  /* [283] */
    (xdc_Char)0x67,  /* [284] */
    (xdc_Char)0x67,  /* [285] */
    (xdc_Char)0x65,  /* [286] */
    (xdc_Char)0x72,  /* [287] */
    (xdc_Char)0x20,  /* [288] */
    (xdc_Char)0x69,  /* [289] */
    (xdc_Char)0x64,  /* [290] */
    (xdc_Char)0x20,  /* [291] */
    (xdc_Char)0x25,  /* [292] */
    (xdc_Char)0x64,  /* [293] */
    (xdc_Char)0x20,  /* [294] */
    (xdc_Char)0x69,  /* [295] */
    (xdc_Char)0x73,  /* [296] */
    (xdc_Char)0x20,  /* [297] */
    (xdc_Char)0x69,  /* [298] */
    (xdc_Char)0x6e,  /* [299] */
    (xdc_Char)0x76,  /* [300] */
    (xdc_Char)0x61,  /* [301] */
    (xdc_Char)0x6c,  /* [302] */
    (xdc_Char)0x69,  /* [303] */
    (xdc_Char)0x64,  /* [304] */
    (xdc_Char)0x2e,  /* [305] */
    (xdc_Char)0x0,  /* [306] */
    (xdc_Char)0x41,  /* [307] */
    (xdc_Char)0x5f,  /* [308] */
    (xdc_Char)0x63,  /* [309] */
    (xdc_Char)0x61,  /* [310] */
    (xdc_Char)0x6e,  /* [311] */
    (xdc_Char)0x6e,  /* [312] */
    (xdc_Char)0x6f,  /* [313] */
    (xdc_Char)0x74,  /* [314] */
    (xdc_Char)0x46,  /* [315] */
    (xdc_Char)0x69,  /* [316] */
    (xdc_Char)0x74,  /* [317] */
    (xdc_Char)0x49,  /* [318] */
    (xdc_Char)0x6e,  /* [319] */
    (xdc_Char)0x74,  /* [320] */
    (xdc_Char)0x6f,  /* [321] */
    (xdc_Char)0x41,  /* [322] */
    (xdc_Char)0x72,  /* [323] */
    (xdc_Char)0x67,  /* [324] */
    (xdc_Char)0x3a,  /* [325] */
    (xdc_Char)0x20,  /* [326] */
    (xdc_Char)0x73,  /* [327] */
    (xdc_Char)0x69,  /* [328] */
    (xdc_Char)0x7a,  /* [329] */
    (xdc_Char)0x65,  /* [330] */
    (xdc_Char)0x6f,  /* [331] */
    (xdc_Char)0x66,  /* [332] */
    (xdc_Char)0x28,  /* [333] */
    (xdc_Char)0x46,  /* [334] */
    (xdc_Char)0x6c,  /* [335] */
    (xdc_Char)0x6f,  /* [336] */
    (xdc_Char)0x61,  /* [337] */
    (xdc_Char)0x74,  /* [338] */
    (xdc_Char)0x29,  /* [339] */
    (xdc_Char)0x20,  /* [340] */
    (xdc_Char)0x3e,  /* [341] */
    (xdc_Char)0x20,  /* [342] */
    (xdc_Char)0x73,  /* [343] */
    (xdc_Char)0x69,  /* [344] */
    (xdc_Char)0x7a,  /* [345] */
    (xdc_Char)0x65,  /* [346] */
    (xdc_Char)0x6f,  /* [347] */
    (xdc_Char)0x66,  /* [348] */
    (xdc_Char)0x28,  /* [349] */
    (xdc_Char)0x41,  /* [350] */
    (xdc_Char)0x72,  /* [351] */
    (xdc_Char)0x67,  /* [352] */
    (xdc_Char)0x29,  /* [353] */
    (xdc_Char)0x0,  /* [354] */
    (xdc_Char)0x41,  /* [355] */
    (xdc_Char)0x5f,  /* [356] */
    (xdc_Char)0x63,  /* [357] */
    (xdc_Char)0x6c,  /* [358] */
    (xdc_Char)0x6f,  /* [359] */
    (xdc_Char)0x63,  /* [360] */
    (xdc_Char)0x6b,  /* [361] */
    (xdc_Char)0x44,  /* [362] */
    (xdc_Char)0x69,  /* [363] */
    (xdc_Char)0x73,  /* [364] */
    (xdc_Char)0x61,  /* [365] */
    (xdc_Char)0x62,  /* [366] */
    (xdc_Char)0x6c,  /* [367] */
    (xdc_Char)0x65,  /* [368] */
    (xdc_Char)0x64,  /* [369] */
    (xdc_Char)0x3a,  /* [370] */
    (xdc_Char)0x20,  /* [371] */
    (xdc_Char)0x43,  /* [372] */
    (xdc_Char)0x61,  /* [373] */
    (xdc_Char)0x6e,  /* [374] */
    (xdc_Char)0x6e,  /* [375] */
    (xdc_Char)0x6f,  /* [376] */
    (xdc_Char)0x74,  /* [377] */
    (xdc_Char)0x20,  /* [378] */
    (xdc_Char)0x63,  /* [379] */
    (xdc_Char)0x72,  /* [380] */
    (xdc_Char)0x65,  /* [381] */
    (xdc_Char)0x61,  /* [382] */
    (xdc_Char)0x74,  /* [383] */
    (xdc_Char)0x65,  /* [384] */
    (xdc_Char)0x20,  /* [385] */
    (xdc_Char)0x61,  /* [386] */
    (xdc_Char)0x20,  /* [387] */
    (xdc_Char)0x63,  /* [388] */
    (xdc_Char)0x6c,  /* [389] */
    (xdc_Char)0x6f,  /* [390] */
    (xdc_Char)0x63,  /* [391] */
    (xdc_Char)0x6b,  /* [392] */
    (xdc_Char)0x20,  /* [393] */
    (xdc_Char)0x69,  /* [394] */
    (xdc_Char)0x6e,  /* [395] */
    (xdc_Char)0x73,  /* [396] */
    (xdc_Char)0x74,  /* [397] */
    (xdc_Char)0x61,  /* [398] */
    (xdc_Char)0x6e,  /* [399] */
    (xdc_Char)0x63,  /* [400] */
    (xdc_Char)0x65,  /* [401] */
    (xdc_Char)0x20,  /* [402] */
    (xdc_Char)0x77,  /* [403] */
    (xdc_Char)0x68,  /* [404] */
    (xdc_Char)0x65,  /* [405] */
    (xdc_Char)0x6e,  /* [406] */
    (xdc_Char)0x20,  /* [407] */
    (xdc_Char)0x42,  /* [408] */
    (xdc_Char)0x49,  /* [409] */
    (xdc_Char)0x4f,  /* [410] */
    (xdc_Char)0x53,  /* [411] */
    (xdc_Char)0x2e,  /* [412] */
    (xdc_Char)0x63,  /* [413] */
    (xdc_Char)0x6c,  /* [414] */
    (xdc_Char)0x6f,  /* [415] */
    (xdc_Char)0x63,  /* [416] */
    (xdc_Char)0x6b,  /* [417] */
    (xdc_Char)0x45,  /* [418] */
    (xdc_Char)0x6e,  /* [419] */
    (xdc_Char)0x61,  /* [420] */
    (xdc_Char)0x62,  /* [421] */
    (xdc_Char)0x6c,  /* [422] */
    (xdc_Char)0x65,  /* [423] */
    (xdc_Char)0x64,  /* [424] */
    (xdc_Char)0x20,  /* [425] */
    (xdc_Char)0x69,  /* [426] */
    (xdc_Char)0x73,  /* [427] */
    (xdc_Char)0x20,  /* [428] */
    (xdc_Char)0x66,  /* [429] */
    (xdc_Char)0x61,  /* [430] */
    (xdc_Char)0x6c,  /* [431] */
    (xdc_Char)0x73,  /* [432] */
    (xdc_Char)0x65,  /* [433] */
    (xdc_Char)0x2e,  /* [434] */
    (xdc_Char)0x0,  /* [435] */
    (xdc_Char)0x41,  /* [436] */
    (xdc_Char)0x5f,  /* [437] */
    (xdc_Char)0x62,  /* [438] */
    (xdc_Char)0x61,  /* [439] */
    (xdc_Char)0x64,  /* [440] */
    (xdc_Char)0x54,  /* [441] */
    (xdc_Char)0x68,  /* [442] */
    (xdc_Char)0x72,  /* [443] */
    (xdc_Char)0x65,  /* [444] */
    (xdc_Char)0x61,  /* [445] */
    (xdc_Char)0x64,  /* [446] */
    (xdc_Char)0x54,  /* [447] */
    (xdc_Char)0x79,  /* [448] */
    (xdc_Char)0x70,  /* [449] */
    (xdc_Char)0x65,  /* [450] */
    (xdc_Char)0x3a,  /* [451] */
    (xdc_Char)0x20,  /* [452] */
    (xdc_Char)0x43,  /* [453] */
    (xdc_Char)0x61,  /* [454] */
    (xdc_Char)0x6e,  /* [455] */
    (xdc_Char)0x6e,  /* [456] */
    (xdc_Char)0x6f,  /* [457] */
    (xdc_Char)0x74,  /* [458] */
    (xdc_Char)0x20,  /* [459] */
    (xdc_Char)0x63,  /* [460] */
    (xdc_Char)0x72,  /* [461] */
    (xdc_Char)0x65,  /* [462] */
    (xdc_Char)0x61,  /* [463] */
    (xdc_Char)0x74,  /* [464] */
    (xdc_Char)0x65,  /* [465] */
    (xdc_Char)0x2f,  /* [466] */
    (xdc_Char)0x64,  /* [467] */
    (xdc_Char)0x65,  /* [468] */
    (xdc_Char)0x6c,  /* [469] */
    (xdc_Char)0x65,  /* [470] */
    (xdc_Char)0x74,  /* [471] */
    (xdc_Char)0x65,  /* [472] */
    (xdc_Char)0x20,  /* [473] */
    (xdc_Char)0x61,  /* [474] */
    (xdc_Char)0x20,  /* [475] */
    (xdc_Char)0x43,  /* [476] */
    (xdc_Char)0x6c,  /* [477] */
    (xdc_Char)0x6f,  /* [478] */
    (xdc_Char)0x63,  /* [479] */
    (xdc_Char)0x6b,  /* [480] */
    (xdc_Char)0x20,  /* [481] */
    (xdc_Char)0x66,  /* [482] */
    (xdc_Char)0x72,  /* [483] */
    (xdc_Char)0x6f,  /* [484] */
    (xdc_Char)0x6d,  /* [485] */
    (xdc_Char)0x20,  /* [486] */
    (xdc_Char)0x48,  /* [487] */
    (xdc_Char)0x77,  /* [488] */
    (xdc_Char)0x69,  /* [489] */
    (xdc_Char)0x20,  /* [490] */
    (xdc_Char)0x6f,  /* [491] */
    (xdc_Char)0x72,  /* [492] */
    (xdc_Char)0x20,  /* [493] */
    (xdc_Char)0x53,  /* [494] */
    (xdc_Char)0x77,  /* [495] */
    (xdc_Char)0x69,  /* [496] */
    (xdc_Char)0x20,  /* [497] */
    (xdc_Char)0x74,  /* [498] */
    (xdc_Char)0x68,  /* [499] */
    (xdc_Char)0x72,  /* [500] */
    (xdc_Char)0x65,  /* [501] */
    (xdc_Char)0x61,  /* [502] */
    (xdc_Char)0x64,  /* [503] */
    (xdc_Char)0x2e,  /* [504] */
    (xdc_Char)0x0,  /* [505] */
    (xdc_Char)0x41,  /* [506] */
    (xdc_Char)0x5f,  /* [507] */
    (xdc_Char)0x6e,  /* [508] */
    (xdc_Char)0x75,  /* [509] */
    (xdc_Char)0x6c,  /* [510] */
    (xdc_Char)0x6c,  /* [511] */
    (xdc_Char)0x45,  /* [512] */
    (xdc_Char)0x76,  /* [513] */
    (xdc_Char)0x65,  /* [514] */
    (xdc_Char)0x6e,  /* [515] */
    (xdc_Char)0x74,  /* [516] */
    (xdc_Char)0x4d,  /* [517] */
    (xdc_Char)0x61,  /* [518] */
    (xdc_Char)0x73,  /* [519] */
    (xdc_Char)0x6b,  /* [520] */
    (xdc_Char)0x73,  /* [521] */
    (xdc_Char)0x3a,  /* [522] */
    (xdc_Char)0x20,  /* [523] */
    (xdc_Char)0x6f,  /* [524] */
    (xdc_Char)0x72,  /* [525] */
    (xdc_Char)0x4d,  /* [526] */
    (xdc_Char)0x61,  /* [527] */
    (xdc_Char)0x73,  /* [528] */
    (xdc_Char)0x6b,  /* [529] */
    (xdc_Char)0x20,  /* [530] */
    (xdc_Char)0x61,  /* [531] */
    (xdc_Char)0x6e,  /* [532] */
    (xdc_Char)0x64,  /* [533] */
    (xdc_Char)0x20,  /* [534] */
    (xdc_Char)0x61,  /* [535] */
    (xdc_Char)0x6e,  /* [536] */
    (xdc_Char)0x64,  /* [537] */
    (xdc_Char)0x4d,  /* [538] */
    (xdc_Char)0x61,  /* [539] */
    (xdc_Char)0x73,  /* [540] */
    (xdc_Char)0x6b,  /* [541] */
    (xdc_Char)0x20,  /* [542] */
    (xdc_Char)0x61,  /* [543] */
    (xdc_Char)0x72,  /* [544] */
    (xdc_Char)0x65,  /* [545] */
    (xdc_Char)0x20,  /* [546] */
    (xdc_Char)0x6e,  /* [547] */
    (xdc_Char)0x75,  /* [548] */
    (xdc_Char)0x6c,  /* [549] */
    (xdc_Char)0x6c,  /* [550] */
    (xdc_Char)0x2e,  /* [551] */
    (xdc_Char)0x0,  /* [552] */
    (xdc_Char)0x41,  /* [553] */
    (xdc_Char)0x5f,  /* [554] */
    (xdc_Char)0x6e,  /* [555] */
    (xdc_Char)0x75,  /* [556] */
    (xdc_Char)0x6c,  /* [557] */
    (xdc_Char)0x6c,  /* [558] */
    (xdc_Char)0x45,  /* [559] */
    (xdc_Char)0x76,  /* [560] */
    (xdc_Char)0x65,  /* [561] */
    (xdc_Char)0x6e,  /* [562] */
    (xdc_Char)0x74,  /* [563] */
    (xdc_Char)0x49,  /* [564] */
    (xdc_Char)0x64,  /* [565] */
    (xdc_Char)0x3a,  /* [566] */
    (xdc_Char)0x20,  /* [567] */
    (xdc_Char)0x70,  /* [568] */
    (xdc_Char)0x6f,  /* [569] */
    (xdc_Char)0x73,  /* [570] */
    (xdc_Char)0x74,  /* [571] */
    (xdc_Char)0x65,  /* [572] */
    (xdc_Char)0x64,  /* [573] */
    (xdc_Char)0x20,  /* [574] */
    (xdc_Char)0x65,  /* [575] */
    (xdc_Char)0x76,  /* [576] */
    (xdc_Char)0x65,  /* [577] */
    (xdc_Char)0x6e,  /* [578] */
    (xdc_Char)0x74,  /* [579] */
    (xdc_Char)0x49,  /* [580] */
    (xdc_Char)0x64,  /* [581] */
    (xdc_Char)0x20,  /* [582] */
    (xdc_Char)0x69,  /* [583] */
    (xdc_Char)0x73,  /* [584] */
    (xdc_Char)0x20,  /* [585] */
    (xdc_Char)0x6e,  /* [586] */
    (xdc_Char)0x75,  /* [587] */
    (xdc_Char)0x6c,  /* [588] */
    (xdc_Char)0x6c,  /* [589] */
    (xdc_Char)0x2e,  /* [590] */
    (xdc_Char)0x0,  /* [591] */
    (xdc_Char)0x41,  /* [592] */
    (xdc_Char)0x5f,  /* [593] */
    (xdc_Char)0x65,  /* [594] */
    (xdc_Char)0x76,  /* [595] */
    (xdc_Char)0x65,  /* [596] */
    (xdc_Char)0x6e,  /* [597] */
    (xdc_Char)0x74,  /* [598] */
    (xdc_Char)0x49,  /* [599] */
    (xdc_Char)0x6e,  /* [600] */
    (xdc_Char)0x55,  /* [601] */
    (xdc_Char)0x73,  /* [602] */
    (xdc_Char)0x65,  /* [603] */
    (xdc_Char)0x3a,  /* [604] */
    (xdc_Char)0x20,  /* [605] */
    (xdc_Char)0x45,  /* [606] */
    (xdc_Char)0x76,  /* [607] */
    (xdc_Char)0x65,  /* [608] */
    (xdc_Char)0x6e,  /* [609] */
    (xdc_Char)0x74,  /* [610] */
    (xdc_Char)0x20,  /* [611] */
    (xdc_Char)0x6f,  /* [612] */
    (xdc_Char)0x62,  /* [613] */
    (xdc_Char)0x6a,  /* [614] */
    (xdc_Char)0x65,  /* [615] */
    (xdc_Char)0x63,  /* [616] */
    (xdc_Char)0x74,  /* [617] */
    (xdc_Char)0x20,  /* [618] */
    (xdc_Char)0x61,  /* [619] */
    (xdc_Char)0x6c,  /* [620] */
    (xdc_Char)0x72,  /* [621] */
    (xdc_Char)0x65,  /* [622] */
    (xdc_Char)0x61,  /* [623] */
    (xdc_Char)0x64,  /* [624] */
    (xdc_Char)0x79,  /* [625] */
    (xdc_Char)0x20,  /* [626] */
    (xdc_Char)0x69,  /* [627] */
    (xdc_Char)0x6e,  /* [628] */
    (xdc_Char)0x20,  /* [629] */
    (xdc_Char)0x75,  /* [630] */
    (xdc_Char)0x73,  /* [631] */
    (xdc_Char)0x65,  /* [632] */
    (xdc_Char)0x2e,  /* [633] */
    (xdc_Char)0x0,  /* [634] */
    (xdc_Char)0x41,  /* [635] */
    (xdc_Char)0x5f,  /* [636] */
    (xdc_Char)0x62,  /* [637] */
    (xdc_Char)0x61,  /* [638] */
    (xdc_Char)0x64,  /* [639] */
    (xdc_Char)0x43,  /* [640] */
    (xdc_Char)0x6f,  /* [641] */
    (xdc_Char)0x6e,  /* [642] */
    (xdc_Char)0x74,  /* [643] */
    (xdc_Char)0x65,  /* [644] */
    (xdc_Char)0x78,  /* [645] */
    (xdc_Char)0x74,  /* [646] */
    (xdc_Char)0x3a,  /* [647] */
    (xdc_Char)0x20,  /* [648] */
    (xdc_Char)0x62,  /* [649] */
    (xdc_Char)0x61,  /* [650] */
    (xdc_Char)0x64,  /* [651] */
    (xdc_Char)0x20,  /* [652] */
    (xdc_Char)0x63,  /* [653] */
    (xdc_Char)0x61,  /* [654] */
    (xdc_Char)0x6c,  /* [655] */
    (xdc_Char)0x6c,  /* [656] */
    (xdc_Char)0x69,  /* [657] */
    (xdc_Char)0x6e,  /* [658] */
    (xdc_Char)0x67,  /* [659] */
    (xdc_Char)0x20,  /* [660] */
    (xdc_Char)0x63,  /* [661] */
    (xdc_Char)0x6f,  /* [662] */
    (xdc_Char)0x6e,  /* [663] */
    (xdc_Char)0x74,  /* [664] */
    (xdc_Char)0x65,  /* [665] */
    (xdc_Char)0x78,  /* [666] */
    (xdc_Char)0x74,  /* [667] */
    (xdc_Char)0x2e,  /* [668] */
    (xdc_Char)0x20,  /* [669] */
    (xdc_Char)0x4d,  /* [670] */
    (xdc_Char)0x75,  /* [671] */
    (xdc_Char)0x73,  /* [672] */
    (xdc_Char)0x74,  /* [673] */
    (xdc_Char)0x20,  /* [674] */
    (xdc_Char)0x62,  /* [675] */
    (xdc_Char)0x65,  /* [676] */
    (xdc_Char)0x20,  /* [677] */
    (xdc_Char)0x63,  /* [678] */
    (xdc_Char)0x61,  /* [679] */
    (xdc_Char)0x6c,  /* [680] */
    (xdc_Char)0x6c,  /* [681] */
    (xdc_Char)0x65,  /* [682] */
    (xdc_Char)0x64,  /* [683] */
    (xdc_Char)0x20,  /* [684] */
    (xdc_Char)0x66,  /* [685] */
    (xdc_Char)0x72,  /* [686] */
    (xdc_Char)0x6f,  /* [687] */
    (xdc_Char)0x6d,  /* [688] */
    (xdc_Char)0x20,  /* [689] */
    (xdc_Char)0x61,  /* [690] */
    (xdc_Char)0x20,  /* [691] */
    (xdc_Char)0x54,  /* [692] */
    (xdc_Char)0x61,  /* [693] */
    (xdc_Char)0x73,  /* [694] */
    (xdc_Char)0x6b,  /* [695] */
    (xdc_Char)0x2e,  /* [696] */
    (xdc_Char)0x0,  /* [697] */
    (xdc_Char)0x4d,  /* [698] */
    (xdc_Char)0x61,  /* [699] */
    (xdc_Char)0x69,  /* [700] */
    (xdc_Char)0x6c,  /* [701] */
    (xdc_Char)0x62,  /* [702] */
    (xdc_Char)0x6f,  /* [703] */
    (xdc_Char)0x78,  /* [704] */
    (xdc_Char)0x5f,  /* [705] */
    (xdc_Char)0x63,  /* [706] */
    (xdc_Char)0x72,  /* [707] */
    (xdc_Char)0x65,  /* [708] */
    (xdc_Char)0x61,  /* [709] */
    (xdc_Char)0x74,  /* [710] */
    (xdc_Char)0x65,  /* [711] */
    (xdc_Char)0x27,  /* [712] */
    (xdc_Char)0x73,  /* [713] */
    (xdc_Char)0x20,  /* [714] */
    (xdc_Char)0x62,  /* [715] */
    (xdc_Char)0x75,  /* [716] */
    (xdc_Char)0x66,  /* [717] */
    (xdc_Char)0x53,  /* [718] */
    (xdc_Char)0x69,  /* [719] */
    (xdc_Char)0x7a,  /* [720] */
    (xdc_Char)0x65,  /* [721] */
    (xdc_Char)0x20,  /* [722] */
    (xdc_Char)0x70,  /* [723] */
    (xdc_Char)0x61,  /* [724] */
    (xdc_Char)0x72,  /* [725] */
    (xdc_Char)0x61,  /* [726] */
    (xdc_Char)0x6d,  /* [727] */
    (xdc_Char)0x65,  /* [728] */
    (xdc_Char)0x74,  /* [729] */
    (xdc_Char)0x65,  /* [730] */
    (xdc_Char)0x72,  /* [731] */
    (xdc_Char)0x20,  /* [732] */
    (xdc_Char)0x69,  /* [733] */
    (xdc_Char)0x73,  /* [734] */
    (xdc_Char)0x20,  /* [735] */
    (xdc_Char)0x69,  /* [736] */
    (xdc_Char)0x6e,  /* [737] */
    (xdc_Char)0x76,  /* [738] */
    (xdc_Char)0x61,  /* [739] */
    (xdc_Char)0x6c,  /* [740] */
    (xdc_Char)0x69,  /* [741] */
    (xdc_Char)0x64,  /* [742] */
    (xdc_Char)0x20,  /* [743] */
    (xdc_Char)0x28,  /* [744] */
    (xdc_Char)0x74,  /* [745] */
    (xdc_Char)0x6f,  /* [746] */
    (xdc_Char)0x6f,  /* [747] */
    (xdc_Char)0x20,  /* [748] */
    (xdc_Char)0x73,  /* [749] */
    (xdc_Char)0x6d,  /* [750] */
    (xdc_Char)0x61,  /* [751] */
    (xdc_Char)0x6c,  /* [752] */
    (xdc_Char)0x6c,  /* [753] */
    (xdc_Char)0x29,  /* [754] */
    (xdc_Char)0x0,  /* [755] */
    (xdc_Char)0x41,  /* [756] */
    (xdc_Char)0x5f,  /* [757] */
    (xdc_Char)0x6e,  /* [758] */
    (xdc_Char)0x6f,  /* [759] */
    (xdc_Char)0x45,  /* [760] */
    (xdc_Char)0x76,  /* [761] */
    (xdc_Char)0x65,  /* [762] */
    (xdc_Char)0x6e,  /* [763] */
    (xdc_Char)0x74,  /* [764] */
    (xdc_Char)0x73,  /* [765] */
    (xdc_Char)0x3a,  /* [766] */
    (xdc_Char)0x20,  /* [767] */
    (xdc_Char)0x54,  /* [768] */
    (xdc_Char)0x68,  /* [769] */
    (xdc_Char)0x65,  /* [770] */
    (xdc_Char)0x20,  /* [771] */
    (xdc_Char)0x45,  /* [772] */
    (xdc_Char)0x76,  /* [773] */
    (xdc_Char)0x65,  /* [774] */
    (xdc_Char)0x6e,  /* [775] */
    (xdc_Char)0x74,  /* [776] */
    (xdc_Char)0x2e,  /* [777] */
    (xdc_Char)0x73,  /* [778] */
    (xdc_Char)0x75,  /* [779] */
    (xdc_Char)0x70,  /* [780] */
    (xdc_Char)0x70,  /* [781] */
    (xdc_Char)0x6f,  /* [782] */
    (xdc_Char)0x72,  /* [783] */
    (xdc_Char)0x74,  /* [784] */
    (xdc_Char)0x73,  /* [785] */
    (xdc_Char)0x45,  /* [786] */
    (xdc_Char)0x76,  /* [787] */
    (xdc_Char)0x65,  /* [788] */
    (xdc_Char)0x6e,  /* [789] */
    (xdc_Char)0x74,  /* [790] */
    (xdc_Char)0x73,  /* [791] */
    (xdc_Char)0x20,  /* [792] */
    (xdc_Char)0x66,  /* [793] */
    (xdc_Char)0x6c,  /* [794] */
    (xdc_Char)0x61,  /* [795] */
    (xdc_Char)0x67,  /* [796] */
    (xdc_Char)0x20,  /* [797] */
    (xdc_Char)0x69,  /* [798] */
    (xdc_Char)0x73,  /* [799] */
    (xdc_Char)0x20,  /* [800] */
    (xdc_Char)0x64,  /* [801] */
    (xdc_Char)0x69,  /* [802] */
    (xdc_Char)0x73,  /* [803] */
    (xdc_Char)0x61,  /* [804] */
    (xdc_Char)0x62,  /* [805] */
    (xdc_Char)0x6c,  /* [806] */
    (xdc_Char)0x65,  /* [807] */
    (xdc_Char)0x64,  /* [808] */
    (xdc_Char)0x2e,  /* [809] */
    (xdc_Char)0x0,  /* [810] */
    (xdc_Char)0x41,  /* [811] */
    (xdc_Char)0x5f,  /* [812] */
    (xdc_Char)0x69,  /* [813] */
    (xdc_Char)0x6e,  /* [814] */
    (xdc_Char)0x76,  /* [815] */
    (xdc_Char)0x54,  /* [816] */
    (xdc_Char)0x69,  /* [817] */
    (xdc_Char)0x6d,  /* [818] */
    (xdc_Char)0x65,  /* [819] */
    (xdc_Char)0x6f,  /* [820] */
    (xdc_Char)0x75,  /* [821] */
    (xdc_Char)0x74,  /* [822] */
    (xdc_Char)0x3a,  /* [823] */
    (xdc_Char)0x20,  /* [824] */
    (xdc_Char)0x43,  /* [825] */
    (xdc_Char)0x61,  /* [826] */
    (xdc_Char)0x6e,  /* [827] */
    (xdc_Char)0x27,  /* [828] */
    (xdc_Char)0x74,  /* [829] */
    (xdc_Char)0x20,  /* [830] */
    (xdc_Char)0x75,  /* [831] */
    (xdc_Char)0x73,  /* [832] */
    (xdc_Char)0x65,  /* [833] */
    (xdc_Char)0x20,  /* [834] */
    (xdc_Char)0x42,  /* [835] */
    (xdc_Char)0x49,  /* [836] */
    (xdc_Char)0x4f,  /* [837] */
    (xdc_Char)0x53,  /* [838] */
    (xdc_Char)0x5f,  /* [839] */
    (xdc_Char)0x45,  /* [840] */
    (xdc_Char)0x56,  /* [841] */
    (xdc_Char)0x45,  /* [842] */
    (xdc_Char)0x4e,  /* [843] */
    (xdc_Char)0x54,  /* [844] */
    (xdc_Char)0x5f,  /* [845] */
    (xdc_Char)0x41,  /* [846] */
    (xdc_Char)0x43,  /* [847] */
    (xdc_Char)0x51,  /* [848] */
    (xdc_Char)0x55,  /* [849] */
    (xdc_Char)0x49,  /* [850] */
    (xdc_Char)0x52,  /* [851] */
    (xdc_Char)0x45,  /* [852] */
    (xdc_Char)0x44,  /* [853] */
    (xdc_Char)0x20,  /* [854] */
    (xdc_Char)0x77,  /* [855] */
    (xdc_Char)0x69,  /* [856] */
    (xdc_Char)0x74,  /* [857] */
    (xdc_Char)0x68,  /* [858] */
    (xdc_Char)0x20,  /* [859] */
    (xdc_Char)0x74,  /* [860] */
    (xdc_Char)0x68,  /* [861] */
    (xdc_Char)0x69,  /* [862] */
    (xdc_Char)0x73,  /* [863] */
    (xdc_Char)0x20,  /* [864] */
    (xdc_Char)0x53,  /* [865] */
    (xdc_Char)0x65,  /* [866] */
    (xdc_Char)0x6d,  /* [867] */
    (xdc_Char)0x61,  /* [868] */
    (xdc_Char)0x70,  /* [869] */
    (xdc_Char)0x68,  /* [870] */
    (xdc_Char)0x6f,  /* [871] */
    (xdc_Char)0x72,  /* [872] */
    (xdc_Char)0x65,  /* [873] */
    (xdc_Char)0x2e,  /* [874] */
    (xdc_Char)0x0,  /* [875] */
    (xdc_Char)0x41,  /* [876] */
    (xdc_Char)0x5f,  /* [877] */
    (xdc_Char)0x73,  /* [878] */
    (xdc_Char)0x77,  /* [879] */
    (xdc_Char)0x69,  /* [880] */
    (xdc_Char)0x44,  /* [881] */
    (xdc_Char)0x69,  /* [882] */
    (xdc_Char)0x73,  /* [883] */
    (xdc_Char)0x61,  /* [884] */
    (xdc_Char)0x62,  /* [885] */
    (xdc_Char)0x6c,  /* [886] */
    (xdc_Char)0x65,  /* [887] */
    (xdc_Char)0x64,  /* [888] */
    (xdc_Char)0x3a,  /* [889] */
    (xdc_Char)0x20,  /* [890] */
    (xdc_Char)0x43,  /* [891] */
    (xdc_Char)0x61,  /* [892] */
    (xdc_Char)0x6e,  /* [893] */
    (xdc_Char)0x6e,  /* [894] */
    (xdc_Char)0x6f,  /* [895] */
    (xdc_Char)0x74,  /* [896] */
    (xdc_Char)0x20,  /* [897] */
    (xdc_Char)0x63,  /* [898] */
    (xdc_Char)0x72,  /* [899] */
    (xdc_Char)0x65,  /* [900] */
    (xdc_Char)0x61,  /* [901] */
    (xdc_Char)0x74,  /* [902] */
    (xdc_Char)0x65,  /* [903] */
    (xdc_Char)0x20,  /* [904] */
    (xdc_Char)0x61,  /* [905] */
    (xdc_Char)0x20,  /* [906] */
    (xdc_Char)0x53,  /* [907] */
    (xdc_Char)0x77,  /* [908] */
    (xdc_Char)0x69,  /* [909] */
    (xdc_Char)0x20,  /* [910] */
    (xdc_Char)0x77,  /* [911] */
    (xdc_Char)0x68,  /* [912] */
    (xdc_Char)0x65,  /* [913] */
    (xdc_Char)0x6e,  /* [914] */
    (xdc_Char)0x20,  /* [915] */
    (xdc_Char)0x53,  /* [916] */
    (xdc_Char)0x77,  /* [917] */
    (xdc_Char)0x69,  /* [918] */
    (xdc_Char)0x20,  /* [919] */
    (xdc_Char)0x69,  /* [920] */
    (xdc_Char)0x73,  /* [921] */
    (xdc_Char)0x20,  /* [922] */
    (xdc_Char)0x64,  /* [923] */
    (xdc_Char)0x69,  /* [924] */
    (xdc_Char)0x73,  /* [925] */
    (xdc_Char)0x61,  /* [926] */
    (xdc_Char)0x62,  /* [927] */
    (xdc_Char)0x6c,  /* [928] */
    (xdc_Char)0x65,  /* [929] */
    (xdc_Char)0x64,  /* [930] */
    (xdc_Char)0x2e,  /* [931] */
    (xdc_Char)0x0,  /* [932] */
    (xdc_Char)0x41,  /* [933] */
    (xdc_Char)0x5f,  /* [934] */
    (xdc_Char)0x62,  /* [935] */
    (xdc_Char)0x61,  /* [936] */
    (xdc_Char)0x64,  /* [937] */
    (xdc_Char)0x50,  /* [938] */
    (xdc_Char)0x72,  /* [939] */
    (xdc_Char)0x69,  /* [940] */
    (xdc_Char)0x6f,  /* [941] */
    (xdc_Char)0x72,  /* [942] */
    (xdc_Char)0x69,  /* [943] */
    (xdc_Char)0x74,  /* [944] */
    (xdc_Char)0x79,  /* [945] */
    (xdc_Char)0x3a,  /* [946] */
    (xdc_Char)0x20,  /* [947] */
    (xdc_Char)0x41,  /* [948] */
    (xdc_Char)0x6e,  /* [949] */
    (xdc_Char)0x20,  /* [950] */
    (xdc_Char)0x69,  /* [951] */
    (xdc_Char)0x6e,  /* [952] */
    (xdc_Char)0x76,  /* [953] */
    (xdc_Char)0x61,  /* [954] */
    (xdc_Char)0x6c,  /* [955] */
    (xdc_Char)0x69,  /* [956] */
    (xdc_Char)0x64,  /* [957] */
    (xdc_Char)0x20,  /* [958] */
    (xdc_Char)0x53,  /* [959] */
    (xdc_Char)0x77,  /* [960] */
    (xdc_Char)0x69,  /* [961] */
    (xdc_Char)0x20,  /* [962] */
    (xdc_Char)0x70,  /* [963] */
    (xdc_Char)0x72,  /* [964] */
    (xdc_Char)0x69,  /* [965] */
    (xdc_Char)0x6f,  /* [966] */
    (xdc_Char)0x72,  /* [967] */
    (xdc_Char)0x69,  /* [968] */
    (xdc_Char)0x74,  /* [969] */
    (xdc_Char)0x79,  /* [970] */
    (xdc_Char)0x20,  /* [971] */
    (xdc_Char)0x77,  /* [972] */
    (xdc_Char)0x61,  /* [973] */
    (xdc_Char)0x73,  /* [974] */
    (xdc_Char)0x20,  /* [975] */
    (xdc_Char)0x75,  /* [976] */
    (xdc_Char)0x73,  /* [977] */
    (xdc_Char)0x65,  /* [978] */
    (xdc_Char)0x64,  /* [979] */
    (xdc_Char)0x2e,  /* [980] */
    (xdc_Char)0x0,  /* [981] */
    (xdc_Char)0x41,  /* [982] */
    (xdc_Char)0x5f,  /* [983] */
    (xdc_Char)0x62,  /* [984] */
    (xdc_Char)0x61,  /* [985] */
    (xdc_Char)0x64,  /* [986] */
    (xdc_Char)0x54,  /* [987] */
    (xdc_Char)0x68,  /* [988] */
    (xdc_Char)0x72,  /* [989] */
    (xdc_Char)0x65,  /* [990] */
    (xdc_Char)0x61,  /* [991] */
    (xdc_Char)0x64,  /* [992] */
    (xdc_Char)0x54,  /* [993] */
    (xdc_Char)0x79,  /* [994] */
    (xdc_Char)0x70,  /* [995] */
    (xdc_Char)0x65,  /* [996] */
    (xdc_Char)0x3a,  /* [997] */
    (xdc_Char)0x20,  /* [998] */
    (xdc_Char)0x43,  /* [999] */
    (xdc_Char)0x61,  /* [1000] */
    (xdc_Char)0x6e,  /* [1001] */
    (xdc_Char)0x6e,  /* [1002] */
    (xdc_Char)0x6f,  /* [1003] */
    (xdc_Char)0x74,  /* [1004] */
    (xdc_Char)0x20,  /* [1005] */
    (xdc_Char)0x63,  /* [1006] */
    (xdc_Char)0x72,  /* [1007] */
    (xdc_Char)0x65,  /* [1008] */
    (xdc_Char)0x61,  /* [1009] */
    (xdc_Char)0x74,  /* [1010] */
    (xdc_Char)0x65,  /* [1011] */
    (xdc_Char)0x2f,  /* [1012] */
    (xdc_Char)0x64,  /* [1013] */
    (xdc_Char)0x65,  /* [1014] */
    (xdc_Char)0x6c,  /* [1015] */
    (xdc_Char)0x65,  /* [1016] */
    (xdc_Char)0x74,  /* [1017] */
    (xdc_Char)0x65,  /* [1018] */
    (xdc_Char)0x20,  /* [1019] */
    (xdc_Char)0x61,  /* [1020] */
    (xdc_Char)0x20,  /* [1021] */
    (xdc_Char)0x74,  /* [1022] */
    (xdc_Char)0x61,  /* [1023] */
    (xdc_Char)0x73,  /* [1024] */
    (xdc_Char)0x6b,  /* [1025] */
    (xdc_Char)0x20,  /* [1026] */
    (xdc_Char)0x66,  /* [1027] */
    (xdc_Char)0x72,  /* [1028] */
    (xdc_Char)0x6f,  /* [1029] */
    (xdc_Char)0x6d,  /* [1030] */
    (xdc_Char)0x20,  /* [1031] */
    (xdc_Char)0x48,  /* [1032] */
    (xdc_Char)0x77,  /* [1033] */
    (xdc_Char)0x69,  /* [1034] */
    (xdc_Char)0x20,  /* [1035] */
    (xdc_Char)0x6f,  /* [1036] */
    (xdc_Char)0x72,  /* [1037] */
    (xdc_Char)0x20,  /* [1038] */
    (xdc_Char)0x53,  /* [1039] */
    (xdc_Char)0x77,  /* [1040] */
    (xdc_Char)0x69,  /* [1041] */
    (xdc_Char)0x20,  /* [1042] */
    (xdc_Char)0x74,  /* [1043] */
    (xdc_Char)0x68,  /* [1044] */
    (xdc_Char)0x72,  /* [1045] */
    (xdc_Char)0x65,  /* [1046] */
    (xdc_Char)0x61,  /* [1047] */
    (xdc_Char)0x64,  /* [1048] */
    (xdc_Char)0x2e,  /* [1049] */
    (xdc_Char)0x0,  /* [1050] */
    (xdc_Char)0x41,  /* [1051] */
    (xdc_Char)0x5f,  /* [1052] */
    (xdc_Char)0x62,  /* [1053] */
    (xdc_Char)0x61,  /* [1054] */
    (xdc_Char)0x64,  /* [1055] */
    (xdc_Char)0x54,  /* [1056] */
    (xdc_Char)0x61,  /* [1057] */
    (xdc_Char)0x73,  /* [1058] */
    (xdc_Char)0x6b,  /* [1059] */
    (xdc_Char)0x53,  /* [1060] */
    (xdc_Char)0x74,  /* [1061] */
    (xdc_Char)0x61,  /* [1062] */
    (xdc_Char)0x74,  /* [1063] */
    (xdc_Char)0x65,  /* [1064] */
    (xdc_Char)0x3a,  /* [1065] */
    (xdc_Char)0x20,  /* [1066] */
    (xdc_Char)0x43,  /* [1067] */
    (xdc_Char)0x61,  /* [1068] */
    (xdc_Char)0x6e,  /* [1069] */
    (xdc_Char)0x27,  /* [1070] */
    (xdc_Char)0x74,  /* [1071] */
    (xdc_Char)0x20,  /* [1072] */
    (xdc_Char)0x64,  /* [1073] */
    (xdc_Char)0x65,  /* [1074] */
    (xdc_Char)0x6c,  /* [1075] */
    (xdc_Char)0x65,  /* [1076] */
    (xdc_Char)0x74,  /* [1077] */
    (xdc_Char)0x65,  /* [1078] */
    (xdc_Char)0x20,  /* [1079] */
    (xdc_Char)0x61,  /* [1080] */
    (xdc_Char)0x20,  /* [1081] */
    (xdc_Char)0x74,  /* [1082] */
    (xdc_Char)0x61,  /* [1083] */
    (xdc_Char)0x73,  /* [1084] */
    (xdc_Char)0x6b,  /* [1085] */
    (xdc_Char)0x20,  /* [1086] */
    (xdc_Char)0x69,  /* [1087] */
    (xdc_Char)0x6e,  /* [1088] */
    (xdc_Char)0x20,  /* [1089] */
    (xdc_Char)0x52,  /* [1090] */
    (xdc_Char)0x55,  /* [1091] */
    (xdc_Char)0x4e,  /* [1092] */
    (xdc_Char)0x4e,  /* [1093] */
    (xdc_Char)0x49,  /* [1094] */
    (xdc_Char)0x4e,  /* [1095] */
    (xdc_Char)0x47,  /* [1096] */
    (xdc_Char)0x20,  /* [1097] */
    (xdc_Char)0x73,  /* [1098] */
    (xdc_Char)0x74,  /* [1099] */
    (xdc_Char)0x61,  /* [1100] */
    (xdc_Char)0x74,  /* [1101] */
    (xdc_Char)0x65,  /* [1102] */
    (xdc_Char)0x2e,  /* [1103] */
    (xdc_Char)0x0,  /* [1104] */
    (xdc_Char)0x41,  /* [1105] */
    (xdc_Char)0x5f,  /* [1106] */
    (xdc_Char)0x6e,  /* [1107] */
    (xdc_Char)0x6f,  /* [1108] */
    (xdc_Char)0x50,  /* [1109] */
    (xdc_Char)0x65,  /* [1110] */
    (xdc_Char)0x6e,  /* [1111] */
    (xdc_Char)0x64,  /* [1112] */
    (xdc_Char)0x45,  /* [1113] */
    (xdc_Char)0x6c,  /* [1114] */
    (xdc_Char)0x65,  /* [1115] */
    (xdc_Char)0x6d,  /* [1116] */
    (xdc_Char)0x3a,  /* [1117] */
    (xdc_Char)0x20,  /* [1118] */
    (xdc_Char)0x4e,  /* [1119] */
    (xdc_Char)0x6f,  /* [1120] */
    (xdc_Char)0x74,  /* [1121] */
    (xdc_Char)0x20,  /* [1122] */
    (xdc_Char)0x65,  /* [1123] */
    (xdc_Char)0x6e,  /* [1124] */
    (xdc_Char)0x6f,  /* [1125] */
    (xdc_Char)0x75,  /* [1126] */
    (xdc_Char)0x67,  /* [1127] */
    (xdc_Char)0x68,  /* [1128] */
    (xdc_Char)0x20,  /* [1129] */
    (xdc_Char)0x69,  /* [1130] */
    (xdc_Char)0x6e,  /* [1131] */
    (xdc_Char)0x66,  /* [1132] */
    (xdc_Char)0x6f,  /* [1133] */
    (xdc_Char)0x20,  /* [1134] */
    (xdc_Char)0x74,  /* [1135] */
    (xdc_Char)0x6f,  /* [1136] */
    (xdc_Char)0x20,  /* [1137] */
    (xdc_Char)0x64,  /* [1138] */
    (xdc_Char)0x65,  /* [1139] */
    (xdc_Char)0x6c,  /* [1140] */
    (xdc_Char)0x65,  /* [1141] */
    (xdc_Char)0x74,  /* [1142] */
    (xdc_Char)0x65,  /* [1143] */
    (xdc_Char)0x20,  /* [1144] */
    (xdc_Char)0x42,  /* [1145] */
    (xdc_Char)0x4c,  /* [1146] */
    (xdc_Char)0x4f,  /* [1147] */
    (xdc_Char)0x43,  /* [1148] */
    (xdc_Char)0x4b,  /* [1149] */
    (xdc_Char)0x45,  /* [1150] */
    (xdc_Char)0x44,  /* [1151] */
    (xdc_Char)0x20,  /* [1152] */
    (xdc_Char)0x74,  /* [1153] */
    (xdc_Char)0x61,  /* [1154] */
    (xdc_Char)0x73,  /* [1155] */
    (xdc_Char)0x6b,  /* [1156] */
    (xdc_Char)0x2e,  /* [1157] */
    (xdc_Char)0x0,  /* [1158] */
    (xdc_Char)0x41,  /* [1159] */
    (xdc_Char)0x5f,  /* [1160] */
    (xdc_Char)0x74,  /* [1161] */
    (xdc_Char)0x61,  /* [1162] */
    (xdc_Char)0x73,  /* [1163] */
    (xdc_Char)0x6b,  /* [1164] */
    (xdc_Char)0x44,  /* [1165] */
    (xdc_Char)0x69,  /* [1166] */
    (xdc_Char)0x73,  /* [1167] */
    (xdc_Char)0x61,  /* [1168] */
    (xdc_Char)0x62,  /* [1169] */
    (xdc_Char)0x6c,  /* [1170] */
    (xdc_Char)0x65,  /* [1171] */
    (xdc_Char)0x64,  /* [1172] */
    (xdc_Char)0x3a,  /* [1173] */
    (xdc_Char)0x20,  /* [1174] */
    (xdc_Char)0x43,  /* [1175] */
    (xdc_Char)0x61,  /* [1176] */
    (xdc_Char)0x6e,  /* [1177] */
    (xdc_Char)0x6e,  /* [1178] */
    (xdc_Char)0x6f,  /* [1179] */
    (xdc_Char)0x74,  /* [1180] */
    (xdc_Char)0x20,  /* [1181] */
    (xdc_Char)0x63,  /* [1182] */
    (xdc_Char)0x72,  /* [1183] */
    (xdc_Char)0x65,  /* [1184] */
    (xdc_Char)0x61,  /* [1185] */
    (xdc_Char)0x74,  /* [1186] */
    (xdc_Char)0x65,  /* [1187] */
    (xdc_Char)0x20,  /* [1188] */
    (xdc_Char)0x61,  /* [1189] */
    (xdc_Char)0x20,  /* [1190] */
    (xdc_Char)0x74,  /* [1191] */
    (xdc_Char)0x61,  /* [1192] */
    (xdc_Char)0x73,  /* [1193] */
    (xdc_Char)0x6b,  /* [1194] */
    (xdc_Char)0x20,  /* [1195] */
    (xdc_Char)0x77,  /* [1196] */
    (xdc_Char)0x68,  /* [1197] */
    (xdc_Char)0x65,  /* [1198] */
    (xdc_Char)0x6e,  /* [1199] */
    (xdc_Char)0x20,  /* [1200] */
    (xdc_Char)0x74,  /* [1201] */
    (xdc_Char)0x61,  /* [1202] */
    (xdc_Char)0x73,  /* [1203] */
    (xdc_Char)0x6b,  /* [1204] */
    (xdc_Char)0x69,  /* [1205] */
    (xdc_Char)0x6e,  /* [1206] */
    (xdc_Char)0x67,  /* [1207] */
    (xdc_Char)0x20,  /* [1208] */
    (xdc_Char)0x69,  /* [1209] */
    (xdc_Char)0x73,  /* [1210] */
    (xdc_Char)0x20,  /* [1211] */
    (xdc_Char)0x64,  /* [1212] */
    (xdc_Char)0x69,  /* [1213] */
    (xdc_Char)0x73,  /* [1214] */
    (xdc_Char)0x61,  /* [1215] */
    (xdc_Char)0x62,  /* [1216] */
    (xdc_Char)0x6c,  /* [1217] */
    (xdc_Char)0x65,  /* [1218] */
    (xdc_Char)0x64,  /* [1219] */
    (xdc_Char)0x2e,  /* [1220] */
    (xdc_Char)0x0,  /* [1221] */
    (xdc_Char)0x41,  /* [1222] */
    (xdc_Char)0x5f,  /* [1223] */
    (xdc_Char)0x62,  /* [1224] */
    (xdc_Char)0x61,  /* [1225] */
    (xdc_Char)0x64,  /* [1226] */
    (xdc_Char)0x50,  /* [1227] */
    (xdc_Char)0x72,  /* [1228] */
    (xdc_Char)0x69,  /* [1229] */
    (xdc_Char)0x6f,  /* [1230] */
    (xdc_Char)0x72,  /* [1231] */
    (xdc_Char)0x69,  /* [1232] */
    (xdc_Char)0x74,  /* [1233] */
    (xdc_Char)0x79,  /* [1234] */
    (xdc_Char)0x3a,  /* [1235] */
    (xdc_Char)0x20,  /* [1236] */
    (xdc_Char)0x41,  /* [1237] */
    (xdc_Char)0x6e,  /* [1238] */
    (xdc_Char)0x20,  /* [1239] */
    (xdc_Char)0x69,  /* [1240] */
    (xdc_Char)0x6e,  /* [1241] */
    (xdc_Char)0x76,  /* [1242] */
    (xdc_Char)0x61,  /* [1243] */
    (xdc_Char)0x6c,  /* [1244] */
    (xdc_Char)0x69,  /* [1245] */
    (xdc_Char)0x64,  /* [1246] */
    (xdc_Char)0x20,  /* [1247] */
    (xdc_Char)0x74,  /* [1248] */
    (xdc_Char)0x61,  /* [1249] */
    (xdc_Char)0x73,  /* [1250] */
    (xdc_Char)0x6b,  /* [1251] */
    (xdc_Char)0x20,  /* [1252] */
    (xdc_Char)0x70,  /* [1253] */
    (xdc_Char)0x72,  /* [1254] */
    (xdc_Char)0x69,  /* [1255] */
    (xdc_Char)0x6f,  /* [1256] */
    (xdc_Char)0x72,  /* [1257] */
    (xdc_Char)0x69,  /* [1258] */
    (xdc_Char)0x74,  /* [1259] */
    (xdc_Char)0x79,  /* [1260] */
    (xdc_Char)0x20,  /* [1261] */
    (xdc_Char)0x77,  /* [1262] */
    (xdc_Char)0x61,  /* [1263] */
    (xdc_Char)0x73,  /* [1264] */
    (xdc_Char)0x20,  /* [1265] */
    (xdc_Char)0x75,  /* [1266] */
    (xdc_Char)0x73,  /* [1267] */
    (xdc_Char)0x65,  /* [1268] */
    (xdc_Char)0x64,  /* [1269] */
    (xdc_Char)0x2e,  /* [1270] */
    (xdc_Char)0x0,  /* [1271] */
    (xdc_Char)0x41,  /* [1272] */
    (xdc_Char)0x5f,  /* [1273] */
    (xdc_Char)0x62,  /* [1274] */
    (xdc_Char)0x61,  /* [1275] */
    (xdc_Char)0x64,  /* [1276] */
    (xdc_Char)0x54,  /* [1277] */
    (xdc_Char)0x69,  /* [1278] */
    (xdc_Char)0x6d,  /* [1279] */
    (xdc_Char)0x65,  /* [1280] */
    (xdc_Char)0x6f,  /* [1281] */
    (xdc_Char)0x75,  /* [1282] */
    (xdc_Char)0x74,  /* [1283] */
    (xdc_Char)0x3a,  /* [1284] */
    (xdc_Char)0x20,  /* [1285] */
    (xdc_Char)0x43,  /* [1286] */
    (xdc_Char)0x61,  /* [1287] */
    (xdc_Char)0x6e,  /* [1288] */
    (xdc_Char)0x27,  /* [1289] */
    (xdc_Char)0x74,  /* [1290] */
    (xdc_Char)0x20,  /* [1291] */
    (xdc_Char)0x73,  /* [1292] */
    (xdc_Char)0x6c,  /* [1293] */
    (xdc_Char)0x65,  /* [1294] */
    (xdc_Char)0x65,  /* [1295] */
    (xdc_Char)0x70,  /* [1296] */
    (xdc_Char)0x20,  /* [1297] */
    (xdc_Char)0x46,  /* [1298] */
    (xdc_Char)0x4f,  /* [1299] */
    (xdc_Char)0x52,  /* [1300] */
    (xdc_Char)0x45,  /* [1301] */
    (xdc_Char)0x56,  /* [1302] */
    (xdc_Char)0x45,  /* [1303] */
    (xdc_Char)0x52,  /* [1304] */
    (xdc_Char)0x2e,  /* [1305] */
    (xdc_Char)0x0,  /* [1306] */
    (xdc_Char)0x41,  /* [1307] */
    (xdc_Char)0x5f,  /* [1308] */
    (xdc_Char)0x6e,  /* [1309] */
    (xdc_Char)0x6f,  /* [1310] */
    (xdc_Char)0x74,  /* [1311] */
    (xdc_Char)0x41,  /* [1312] */
    (xdc_Char)0x76,  /* [1313] */
    (xdc_Char)0x61,  /* [1314] */
    (xdc_Char)0x69,  /* [1315] */
    (xdc_Char)0x6c,  /* [1316] */
    (xdc_Char)0x61,  /* [1317] */
    (xdc_Char)0x62,  /* [1318] */
    (xdc_Char)0x6c,  /* [1319] */
    (xdc_Char)0x65,  /* [1320] */
    (xdc_Char)0x3a,  /* [1321] */
    (xdc_Char)0x20,  /* [1322] */
    (xdc_Char)0x73,  /* [1323] */
    (xdc_Char)0x74,  /* [1324] */
    (xdc_Char)0x61,  /* [1325] */
    (xdc_Char)0x74,  /* [1326] */
    (xdc_Char)0x69,  /* [1327] */
    (xdc_Char)0x63,  /* [1328] */
    (xdc_Char)0x20,  /* [1329] */
    (xdc_Char)0x63,  /* [1330] */
    (xdc_Char)0x72,  /* [1331] */
    (xdc_Char)0x65,  /* [1332] */
    (xdc_Char)0x61,  /* [1333] */
    (xdc_Char)0x74,  /* [1334] */
    (xdc_Char)0x65,  /* [1335] */
    (xdc_Char)0x64,  /* [1336] */
    (xdc_Char)0x20,  /* [1337] */
    (xdc_Char)0x74,  /* [1338] */
    (xdc_Char)0x69,  /* [1339] */
    (xdc_Char)0x6d,  /* [1340] */
    (xdc_Char)0x65,  /* [1341] */
    (xdc_Char)0x72,  /* [1342] */
    (xdc_Char)0x20,  /* [1343] */
    (xdc_Char)0x6e,  /* [1344] */
    (xdc_Char)0x6f,  /* [1345] */
    (xdc_Char)0x74,  /* [1346] */
    (xdc_Char)0x20,  /* [1347] */
    (xdc_Char)0x61,  /* [1348] */
    (xdc_Char)0x76,  /* [1349] */
    (xdc_Char)0x61,  /* [1350] */
    (xdc_Char)0x69,  /* [1351] */
    (xdc_Char)0x6c,  /* [1352] */
    (xdc_Char)0x61,  /* [1353] */
    (xdc_Char)0x62,  /* [1354] */
    (xdc_Char)0x6c,  /* [1355] */
    (xdc_Char)0x65,  /* [1356] */
    (xdc_Char)0x0,  /* [1357] */
    (xdc_Char)0x62,  /* [1358] */
    (xdc_Char)0x75,  /* [1359] */
    (xdc_Char)0x66,  /* [1360] */
    (xdc_Char)0x20,  /* [1361] */
    (xdc_Char)0x70,  /* [1362] */
    (xdc_Char)0x61,  /* [1363] */
    (xdc_Char)0x72,  /* [1364] */
    (xdc_Char)0x61,  /* [1365] */
    (xdc_Char)0x6d,  /* [1366] */
    (xdc_Char)0x65,  /* [1367] */
    (xdc_Char)0x74,  /* [1368] */
    (xdc_Char)0x65,  /* [1369] */
    (xdc_Char)0x72,  /* [1370] */
    (xdc_Char)0x20,  /* [1371] */
    (xdc_Char)0x63,  /* [1372] */
    (xdc_Char)0x61,  /* [1373] */
    (xdc_Char)0x6e,  /* [1374] */
    (xdc_Char)0x6e,  /* [1375] */
    (xdc_Char)0x6f,  /* [1376] */
    (xdc_Char)0x74,  /* [1377] */
    (xdc_Char)0x20,  /* [1378] */
    (xdc_Char)0x62,  /* [1379] */
    (xdc_Char)0x65,  /* [1380] */
    (xdc_Char)0x20,  /* [1381] */
    (xdc_Char)0x6e,  /* [1382] */
    (xdc_Char)0x75,  /* [1383] */
    (xdc_Char)0x6c,  /* [1384] */
    (xdc_Char)0x6c,  /* [1385] */
    (xdc_Char)0x0,  /* [1386] */
    (xdc_Char)0x62,  /* [1387] */
    (xdc_Char)0x75,  /* [1388] */
    (xdc_Char)0x66,  /* [1389] */
    (xdc_Char)0x20,  /* [1390] */
    (xdc_Char)0x6e,  /* [1391] */
    (xdc_Char)0x6f,  /* [1392] */
    (xdc_Char)0x74,  /* [1393] */
    (xdc_Char)0x20,  /* [1394] */
    (xdc_Char)0x70,  /* [1395] */
    (xdc_Char)0x72,  /* [1396] */
    (xdc_Char)0x6f,  /* [1397] */
    (xdc_Char)0x70,  /* [1398] */
    (xdc_Char)0x65,  /* [1399] */
    (xdc_Char)0x72,  /* [1400] */
    (xdc_Char)0x6c,  /* [1401] */
    (xdc_Char)0x79,  /* [1402] */
    (xdc_Char)0x20,  /* [1403] */
    (xdc_Char)0x61,  /* [1404] */
    (xdc_Char)0x6c,  /* [1405] */
    (xdc_Char)0x69,  /* [1406] */
    (xdc_Char)0x67,  /* [1407] */
    (xdc_Char)0x6e,  /* [1408] */
    (xdc_Char)0x65,  /* [1409] */
    (xdc_Char)0x64,  /* [1410] */
    (xdc_Char)0x0,  /* [1411] */
    (xdc_Char)0x61,  /* [1412] */
    (xdc_Char)0x6c,  /* [1413] */
    (xdc_Char)0x69,  /* [1414] */
    (xdc_Char)0x67,  /* [1415] */
    (xdc_Char)0x6e,  /* [1416] */
    (xdc_Char)0x20,  /* [1417] */
    (xdc_Char)0x70,  /* [1418] */
    (xdc_Char)0x61,  /* [1419] */
    (xdc_Char)0x72,  /* [1420] */
    (xdc_Char)0x61,  /* [1421] */
    (xdc_Char)0x6d,  /* [1422] */
    (xdc_Char)0x65,  /* [1423] */
    (xdc_Char)0x74,  /* [1424] */
    (xdc_Char)0x65,  /* [1425] */
    (xdc_Char)0x72,  /* [1426] */
    (xdc_Char)0x20,  /* [1427] */
    (xdc_Char)0x6d,  /* [1428] */
    (xdc_Char)0x75,  /* [1429] */
    (xdc_Char)0x73,  /* [1430] */
    (xdc_Char)0x74,  /* [1431] */
    (xdc_Char)0x20,  /* [1432] */
    (xdc_Char)0x62,  /* [1433] */
    (xdc_Char)0x65,  /* [1434] */
    (xdc_Char)0x20,  /* [1435] */
    (xdc_Char)0x30,  /* [1436] */
    (xdc_Char)0x20,  /* [1437] */
    (xdc_Char)0x6f,  /* [1438] */
    (xdc_Char)0x72,  /* [1439] */
    (xdc_Char)0x20,  /* [1440] */
    (xdc_Char)0x61,  /* [1441] */
    (xdc_Char)0x20,  /* [1442] */
    (xdc_Char)0x70,  /* [1443] */
    (xdc_Char)0x6f,  /* [1444] */
    (xdc_Char)0x77,  /* [1445] */
    (xdc_Char)0x65,  /* [1446] */
    (xdc_Char)0x72,  /* [1447] */
    (xdc_Char)0x20,  /* [1448] */
    (xdc_Char)0x6f,  /* [1449] */
    (xdc_Char)0x66,  /* [1450] */
    (xdc_Char)0x20,  /* [1451] */
    (xdc_Char)0x32,  /* [1452] */
    (xdc_Char)0x20,  /* [1453] */
    (xdc_Char)0x3e,  /* [1454] */
    (xdc_Char)0x3d,  /* [1455] */
    (xdc_Char)0x20,  /* [1456] */
    (xdc_Char)0x74,  /* [1457] */
    (xdc_Char)0x68,  /* [1458] */
    (xdc_Char)0x65,  /* [1459] */
    (xdc_Char)0x20,  /* [1460] */
    (xdc_Char)0x76,  /* [1461] */
    (xdc_Char)0x61,  /* [1462] */
    (xdc_Char)0x6c,  /* [1463] */
    (xdc_Char)0x75,  /* [1464] */
    (xdc_Char)0x65,  /* [1465] */
    (xdc_Char)0x20,  /* [1466] */
    (xdc_Char)0x6f,  /* [1467] */
    (xdc_Char)0x66,  /* [1468] */
    (xdc_Char)0x20,  /* [1469] */
    (xdc_Char)0x4d,  /* [1470] */
    (xdc_Char)0x65,  /* [1471] */
    (xdc_Char)0x6d,  /* [1472] */
    (xdc_Char)0x6f,  /* [1473] */
    (xdc_Char)0x72,  /* [1474] */
    (xdc_Char)0x79,  /* [1475] */
    (xdc_Char)0x5f,  /* [1476] */
    (xdc_Char)0x67,  /* [1477] */
    (xdc_Char)0x65,  /* [1478] */
    (xdc_Char)0x74,  /* [1479] */
    (xdc_Char)0x4d,  /* [1480] */
    (xdc_Char)0x61,  /* [1481] */
    (xdc_Char)0x78,  /* [1482] */
    (xdc_Char)0x44,  /* [1483] */
    (xdc_Char)0x65,  /* [1484] */
    (xdc_Char)0x66,  /* [1485] */
    (xdc_Char)0x61,  /* [1486] */
    (xdc_Char)0x75,  /* [1487] */
    (xdc_Char)0x6c,  /* [1488] */
    (xdc_Char)0x74,  /* [1489] */
    (xdc_Char)0x54,  /* [1490] */
    (xdc_Char)0x79,  /* [1491] */
    (xdc_Char)0x70,  /* [1492] */
    (xdc_Char)0x65,  /* [1493] */
    (xdc_Char)0x41,  /* [1494] */
    (xdc_Char)0x6c,  /* [1495] */
    (xdc_Char)0x69,  /* [1496] */
    (xdc_Char)0x67,  /* [1497] */
    (xdc_Char)0x6e,  /* [1498] */
    (xdc_Char)0x28,  /* [1499] */
    (xdc_Char)0x29,  /* [1500] */
    (xdc_Char)0x0,  /* [1501] */
    (xdc_Char)0x62,  /* [1502] */
    (xdc_Char)0x6c,  /* [1503] */
    (xdc_Char)0x6f,  /* [1504] */
    (xdc_Char)0x63,  /* [1505] */
    (xdc_Char)0x6b,  /* [1506] */
    (xdc_Char)0x53,  /* [1507] */
    (xdc_Char)0x69,  /* [1508] */
    (xdc_Char)0x7a,  /* [1509] */
    (xdc_Char)0x65,  /* [1510] */
    (xdc_Char)0x20,  /* [1511] */
    (xdc_Char)0x63,  /* [1512] */
    (xdc_Char)0x61,  /* [1513] */
    (xdc_Char)0x6e,  /* [1514] */
    (xdc_Char)0x6e,  /* [1515] */
    (xdc_Char)0x6f,  /* [1516] */
    (xdc_Char)0x74,  /* [1517] */
    (xdc_Char)0x20,  /* [1518] */
    (xdc_Char)0x62,  /* [1519] */
    (xdc_Char)0x65,  /* [1520] */
    (xdc_Char)0x20,  /* [1521] */
    (xdc_Char)0x7a,  /* [1522] */
    (xdc_Char)0x65,  /* [1523] */
    (xdc_Char)0x72,  /* [1524] */
    (xdc_Char)0x6f,  /* [1525] */
    (xdc_Char)0x0,  /* [1526] */
    (xdc_Char)0x6e,  /* [1527] */
    (xdc_Char)0x75,  /* [1528] */
    (xdc_Char)0x6d,  /* [1529] */
    (xdc_Char)0x42,  /* [1530] */
    (xdc_Char)0x6c,  /* [1531] */
    (xdc_Char)0x6f,  /* [1532] */
    (xdc_Char)0x63,  /* [1533] */
    (xdc_Char)0x6b,  /* [1534] */
    (xdc_Char)0x73,  /* [1535] */
    (xdc_Char)0x20,  /* [1536] */
    (xdc_Char)0x63,  /* [1537] */
    (xdc_Char)0x61,  /* [1538] */
    (xdc_Char)0x6e,  /* [1539] */
    (xdc_Char)0x6e,  /* [1540] */
    (xdc_Char)0x6f,  /* [1541] */
    (xdc_Char)0x74,  /* [1542] */
    (xdc_Char)0x20,  /* [1543] */
    (xdc_Char)0x62,  /* [1544] */
    (xdc_Char)0x65,  /* [1545] */
    (xdc_Char)0x20,  /* [1546] */
    (xdc_Char)0x7a,  /* [1547] */
    (xdc_Char)0x65,  /* [1548] */
    (xdc_Char)0x72,  /* [1549] */
    (xdc_Char)0x6f,  /* [1550] */
    (xdc_Char)0x0,  /* [1551] */
    (xdc_Char)0x62,  /* [1552] */
    (xdc_Char)0x75,  /* [1553] */
    (xdc_Char)0x66,  /* [1554] */
    (xdc_Char)0x53,  /* [1555] */
    (xdc_Char)0x69,  /* [1556] */
    (xdc_Char)0x7a,  /* [1557] */
    (xdc_Char)0x65,  /* [1558] */
    (xdc_Char)0x20,  /* [1559] */
    (xdc_Char)0x63,  /* [1560] */
    (xdc_Char)0x61,  /* [1561] */
    (xdc_Char)0x6e,  /* [1562] */
    (xdc_Char)0x6e,  /* [1563] */
    (xdc_Char)0x6f,  /* [1564] */
    (xdc_Char)0x74,  /* [1565] */
    (xdc_Char)0x20,  /* [1566] */
    (xdc_Char)0x62,  /* [1567] */
    (xdc_Char)0x65,  /* [1568] */
    (xdc_Char)0x20,  /* [1569] */
    (xdc_Char)0x7a,  /* [1570] */
    (xdc_Char)0x65,  /* [1571] */
    (xdc_Char)0x72,  /* [1572] */
    (xdc_Char)0x6f,  /* [1573] */
    (xdc_Char)0x0,  /* [1574] */
    (xdc_Char)0x48,  /* [1575] */
    (xdc_Char)0x65,  /* [1576] */
    (xdc_Char)0x61,  /* [1577] */
    (xdc_Char)0x70,  /* [1578] */
    (xdc_Char)0x42,  /* [1579] */
    (xdc_Char)0x75,  /* [1580] */
    (xdc_Char)0x66,  /* [1581] */
    (xdc_Char)0x5f,  /* [1582] */
    (xdc_Char)0x63,  /* [1583] */
    (xdc_Char)0x72,  /* [1584] */
    (xdc_Char)0x65,  /* [1585] */
    (xdc_Char)0x61,  /* [1586] */
    (xdc_Char)0x74,  /* [1587] */
    (xdc_Char)0x65,  /* [1588] */
    (xdc_Char)0x27,  /* [1589] */
    (xdc_Char)0x73,  /* [1590] */
    (xdc_Char)0x20,  /* [1591] */
    (xdc_Char)0x62,  /* [1592] */
    (xdc_Char)0x75,  /* [1593] */
    (xdc_Char)0x66,  /* [1594] */
    (xdc_Char)0x53,  /* [1595] */
    (xdc_Char)0x69,  /* [1596] */
    (xdc_Char)0x7a,  /* [1597] */
    (xdc_Char)0x65,  /* [1598] */
    (xdc_Char)0x20,  /* [1599] */
    (xdc_Char)0x70,  /* [1600] */
    (xdc_Char)0x61,  /* [1601] */
    (xdc_Char)0x72,  /* [1602] */
    (xdc_Char)0x61,  /* [1603] */
    (xdc_Char)0x6d,  /* [1604] */
    (xdc_Char)0x65,  /* [1605] */
    (xdc_Char)0x74,  /* [1606] */
    (xdc_Char)0x65,  /* [1607] */
    (xdc_Char)0x72,  /* [1608] */
    (xdc_Char)0x20,  /* [1609] */
    (xdc_Char)0x69,  /* [1610] */
    (xdc_Char)0x73,  /* [1611] */
    (xdc_Char)0x20,  /* [1612] */
    (xdc_Char)0x69,  /* [1613] */
    (xdc_Char)0x6e,  /* [1614] */
    (xdc_Char)0x76,  /* [1615] */
    (xdc_Char)0x61,  /* [1616] */
    (xdc_Char)0x6c,  /* [1617] */
    (xdc_Char)0x69,  /* [1618] */
    (xdc_Char)0x64,  /* [1619] */
    (xdc_Char)0x20,  /* [1620] */
    (xdc_Char)0x28,  /* [1621] */
    (xdc_Char)0x74,  /* [1622] */
    (xdc_Char)0x6f,  /* [1623] */
    (xdc_Char)0x6f,  /* [1624] */
    (xdc_Char)0x20,  /* [1625] */
    (xdc_Char)0x73,  /* [1626] */
    (xdc_Char)0x6d,  /* [1627] */
    (xdc_Char)0x61,  /* [1628] */
    (xdc_Char)0x6c,  /* [1629] */
    (xdc_Char)0x6c,  /* [1630] */
    (xdc_Char)0x29,  /* [1631] */
    (xdc_Char)0x0,  /* [1632] */
    (xdc_Char)0x43,  /* [1633] */
    (xdc_Char)0x61,  /* [1634] */
    (xdc_Char)0x6e,  /* [1635] */
    (xdc_Char)0x6e,  /* [1636] */
    (xdc_Char)0x6f,  /* [1637] */
    (xdc_Char)0x74,  /* [1638] */
    (xdc_Char)0x20,  /* [1639] */
    (xdc_Char)0x63,  /* [1640] */
    (xdc_Char)0x61,  /* [1641] */
    (xdc_Char)0x6c,  /* [1642] */
    (xdc_Char)0x6c,  /* [1643] */
    (xdc_Char)0x20,  /* [1644] */
    (xdc_Char)0x48,  /* [1645] */
    (xdc_Char)0x65,  /* [1646] */
    (xdc_Char)0x61,  /* [1647] */
    (xdc_Char)0x70,  /* [1648] */
    (xdc_Char)0x42,  /* [1649] */
    (xdc_Char)0x75,  /* [1650] */
    (xdc_Char)0x66,  /* [1651] */
    (xdc_Char)0x5f,  /* [1652] */
    (xdc_Char)0x66,  /* [1653] */
    (xdc_Char)0x72,  /* [1654] */
    (xdc_Char)0x65,  /* [1655] */
    (xdc_Char)0x65,  /* [1656] */
    (xdc_Char)0x20,  /* [1657] */
    (xdc_Char)0x77,  /* [1658] */
    (xdc_Char)0x68,  /* [1659] */
    (xdc_Char)0x65,  /* [1660] */
    (xdc_Char)0x6e,  /* [1661] */
    (xdc_Char)0x20,  /* [1662] */
    (xdc_Char)0x6e,  /* [1663] */
    (xdc_Char)0x6f,  /* [1664] */
    (xdc_Char)0x20,  /* [1665] */
    (xdc_Char)0x62,  /* [1666] */
    (xdc_Char)0x6c,  /* [1667] */
    (xdc_Char)0x6f,  /* [1668] */
    (xdc_Char)0x63,  /* [1669] */
    (xdc_Char)0x6b,  /* [1670] */
    (xdc_Char)0x73,  /* [1671] */
    (xdc_Char)0x20,  /* [1672] */
    (xdc_Char)0x68,  /* [1673] */
    (xdc_Char)0x61,  /* [1674] */
    (xdc_Char)0x76,  /* [1675] */
    (xdc_Char)0x65,  /* [1676] */
    (xdc_Char)0x20,  /* [1677] */
    (xdc_Char)0x62,  /* [1678] */
    (xdc_Char)0x65,  /* [1679] */
    (xdc_Char)0x65,  /* [1680] */
    (xdc_Char)0x6e,  /* [1681] */
    (xdc_Char)0x20,  /* [1682] */
    (xdc_Char)0x61,  /* [1683] */
    (xdc_Char)0x6c,  /* [1684] */
    (xdc_Char)0x6c,  /* [1685] */
    (xdc_Char)0x6f,  /* [1686] */
    (xdc_Char)0x63,  /* [1687] */
    (xdc_Char)0x61,  /* [1688] */
    (xdc_Char)0x74,  /* [1689] */
    (xdc_Char)0x65,  /* [1690] */
    (xdc_Char)0x64,  /* [1691] */
    (xdc_Char)0x0,  /* [1692] */
    (xdc_Char)0x41,  /* [1693] */
    (xdc_Char)0x5f,  /* [1694] */
    (xdc_Char)0x69,  /* [1695] */
    (xdc_Char)0x6e,  /* [1696] */
    (xdc_Char)0x76,  /* [1697] */
    (xdc_Char)0x61,  /* [1698] */
    (xdc_Char)0x6c,  /* [1699] */
    (xdc_Char)0x69,  /* [1700] */
    (xdc_Char)0x64,  /* [1701] */
    (xdc_Char)0x46,  /* [1702] */
    (xdc_Char)0x72,  /* [1703] */
    (xdc_Char)0x65,  /* [1704] */
    (xdc_Char)0x65,  /* [1705] */
    (xdc_Char)0x3a,  /* [1706] */
    (xdc_Char)0x20,  /* [1707] */
    (xdc_Char)0x49,  /* [1708] */
    (xdc_Char)0x6e,  /* [1709] */
    (xdc_Char)0x76,  /* [1710] */
    (xdc_Char)0x61,  /* [1711] */
    (xdc_Char)0x6c,  /* [1712] */
    (xdc_Char)0x69,  /* [1713] */
    (xdc_Char)0x64,  /* [1714] */
    (xdc_Char)0x20,  /* [1715] */
    (xdc_Char)0x66,  /* [1716] */
    (xdc_Char)0x72,  /* [1717] */
    (xdc_Char)0x65,  /* [1718] */
    (xdc_Char)0x65,  /* [1719] */
    (xdc_Char)0x0,  /* [1720] */
    (xdc_Char)0x41,  /* [1721] */
    (xdc_Char)0x5f,  /* [1722] */
    (xdc_Char)0x7a,  /* [1723] */
    (xdc_Char)0x65,  /* [1724] */
    (xdc_Char)0x72,  /* [1725] */
    (xdc_Char)0x6f,  /* [1726] */
    (xdc_Char)0x42,  /* [1727] */
    (xdc_Char)0x6c,  /* [1728] */
    (xdc_Char)0x6f,  /* [1729] */
    (xdc_Char)0x63,  /* [1730] */
    (xdc_Char)0x6b,  /* [1731] */
    (xdc_Char)0x3a,  /* [1732] */
    (xdc_Char)0x20,  /* [1733] */
    (xdc_Char)0x43,  /* [1734] */
    (xdc_Char)0x61,  /* [1735] */
    (xdc_Char)0x6e,  /* [1736] */
    (xdc_Char)0x6e,  /* [1737] */
    (xdc_Char)0x6f,  /* [1738] */
    (xdc_Char)0x74,  /* [1739] */
    (xdc_Char)0x20,  /* [1740] */
    (xdc_Char)0x61,  /* [1741] */
    (xdc_Char)0x6c,  /* [1742] */
    (xdc_Char)0x6c,  /* [1743] */
    (xdc_Char)0x6f,  /* [1744] */
    (xdc_Char)0x63,  /* [1745] */
    (xdc_Char)0x61,  /* [1746] */
    (xdc_Char)0x74,  /* [1747] */
    (xdc_Char)0x65,  /* [1748] */
    (xdc_Char)0x20,  /* [1749] */
    (xdc_Char)0x73,  /* [1750] */
    (xdc_Char)0x69,  /* [1751] */
    (xdc_Char)0x7a,  /* [1752] */
    (xdc_Char)0x65,  /* [1753] */
    (xdc_Char)0x20,  /* [1754] */
    (xdc_Char)0x30,  /* [1755] */
    (xdc_Char)0x0,  /* [1756] */
    (xdc_Char)0x41,  /* [1757] */
    (xdc_Char)0x5f,  /* [1758] */
    (xdc_Char)0x68,  /* [1759] */
    (xdc_Char)0x65,  /* [1760] */
    (xdc_Char)0x61,  /* [1761] */
    (xdc_Char)0x70,  /* [1762] */
    (xdc_Char)0x53,  /* [1763] */
    (xdc_Char)0x69,  /* [1764] */
    (xdc_Char)0x7a,  /* [1765] */
    (xdc_Char)0x65,  /* [1766] */
    (xdc_Char)0x3a,  /* [1767] */
    (xdc_Char)0x20,  /* [1768] */
    (xdc_Char)0x52,  /* [1769] */
    (xdc_Char)0x65,  /* [1770] */
    (xdc_Char)0x71,  /* [1771] */
    (xdc_Char)0x75,  /* [1772] */
    (xdc_Char)0x65,  /* [1773] */
    (xdc_Char)0x73,  /* [1774] */
    (xdc_Char)0x74,  /* [1775] */
    (xdc_Char)0x65,  /* [1776] */
    (xdc_Char)0x64,  /* [1777] */
    (xdc_Char)0x20,  /* [1778] */
    (xdc_Char)0x68,  /* [1779] */
    (xdc_Char)0x65,  /* [1780] */
    (xdc_Char)0x61,  /* [1781] */
    (xdc_Char)0x70,  /* [1782] */
    (xdc_Char)0x20,  /* [1783] */
    (xdc_Char)0x73,  /* [1784] */
    (xdc_Char)0x69,  /* [1785] */
    (xdc_Char)0x7a,  /* [1786] */
    (xdc_Char)0x65,  /* [1787] */
    (xdc_Char)0x20,  /* [1788] */
    (xdc_Char)0x69,  /* [1789] */
    (xdc_Char)0x73,  /* [1790] */
    (xdc_Char)0x20,  /* [1791] */
    (xdc_Char)0x74,  /* [1792] */
    (xdc_Char)0x6f,  /* [1793] */
    (xdc_Char)0x6f,  /* [1794] */
    (xdc_Char)0x20,  /* [1795] */
    (xdc_Char)0x73,  /* [1796] */
    (xdc_Char)0x6d,  /* [1797] */
    (xdc_Char)0x61,  /* [1798] */
    (xdc_Char)0x6c,  /* [1799] */
    (xdc_Char)0x6c,  /* [1800] */
    (xdc_Char)0x0,  /* [1801] */
    (xdc_Char)0x41,  /* [1802] */
    (xdc_Char)0x5f,  /* [1803] */
    (xdc_Char)0x61,  /* [1804] */
    (xdc_Char)0x6c,  /* [1805] */
    (xdc_Char)0x69,  /* [1806] */
    (xdc_Char)0x67,  /* [1807] */
    (xdc_Char)0x6e,  /* [1808] */
    (xdc_Char)0x3a,  /* [1809] */
    (xdc_Char)0x20,  /* [1810] */
    (xdc_Char)0x52,  /* [1811] */
    (xdc_Char)0x65,  /* [1812] */
    (xdc_Char)0x71,  /* [1813] */
    (xdc_Char)0x75,  /* [1814] */
    (xdc_Char)0x65,  /* [1815] */
    (xdc_Char)0x73,  /* [1816] */
    (xdc_Char)0x74,  /* [1817] */
    (xdc_Char)0x65,  /* [1818] */
    (xdc_Char)0x64,  /* [1819] */
    (xdc_Char)0x20,  /* [1820] */
    (xdc_Char)0x61,  /* [1821] */
    (xdc_Char)0x6c,  /* [1822] */
    (xdc_Char)0x69,  /* [1823] */
    (xdc_Char)0x67,  /* [1824] */
    (xdc_Char)0x6e,  /* [1825] */
    (xdc_Char)0x20,  /* [1826] */
    (xdc_Char)0x69,  /* [1827] */
    (xdc_Char)0x73,  /* [1828] */
    (xdc_Char)0x20,  /* [1829] */
    (xdc_Char)0x6e,  /* [1830] */
    (xdc_Char)0x6f,  /* [1831] */
    (xdc_Char)0x74,  /* [1832] */
    (xdc_Char)0x20,  /* [1833] */
    (xdc_Char)0x61,  /* [1834] */
    (xdc_Char)0x20,  /* [1835] */
    (xdc_Char)0x70,  /* [1836] */
    (xdc_Char)0x6f,  /* [1837] */
    (xdc_Char)0x77,  /* [1838] */
    (xdc_Char)0x65,  /* [1839] */
    (xdc_Char)0x72,  /* [1840] */
    (xdc_Char)0x20,  /* [1841] */
    (xdc_Char)0x6f,  /* [1842] */
    (xdc_Char)0x66,  /* [1843] */
    (xdc_Char)0x20,  /* [1844] */
    (xdc_Char)0x32,  /* [1845] */
    (xdc_Char)0x0,  /* [1846] */
    (xdc_Char)0x49,  /* [1847] */
    (xdc_Char)0x6e,  /* [1848] */
    (xdc_Char)0x76,  /* [1849] */
    (xdc_Char)0x61,  /* [1850] */
    (xdc_Char)0x6c,  /* [1851] */
    (xdc_Char)0x69,  /* [1852] */
    (xdc_Char)0x64,  /* [1853] */
    (xdc_Char)0x20,  /* [1854] */
    (xdc_Char)0x62,  /* [1855] */
    (xdc_Char)0x6c,  /* [1856] */
    (xdc_Char)0x6f,  /* [1857] */
    (xdc_Char)0x63,  /* [1858] */
    (xdc_Char)0x6b,  /* [1859] */
    (xdc_Char)0x20,  /* [1860] */
    (xdc_Char)0x61,  /* [1861] */
    (xdc_Char)0x64,  /* [1862] */
    (xdc_Char)0x64,  /* [1863] */
    (xdc_Char)0x72,  /* [1864] */
    (xdc_Char)0x65,  /* [1865] */
    (xdc_Char)0x73,  /* [1866] */
    (xdc_Char)0x73,  /* [1867] */
    (xdc_Char)0x20,  /* [1868] */
    (xdc_Char)0x6f,  /* [1869] */
    (xdc_Char)0x6e,  /* [1870] */
    (xdc_Char)0x20,  /* [1871] */
    (xdc_Char)0x74,  /* [1872] */
    (xdc_Char)0x68,  /* [1873] */
    (xdc_Char)0x65,  /* [1874] */
    (xdc_Char)0x20,  /* [1875] */
    (xdc_Char)0x66,  /* [1876] */
    (xdc_Char)0x72,  /* [1877] */
    (xdc_Char)0x65,  /* [1878] */
    (xdc_Char)0x65,  /* [1879] */
    (xdc_Char)0x2e,  /* [1880] */
    (xdc_Char)0x20,  /* [1881] */
    (xdc_Char)0x46,  /* [1882] */
    (xdc_Char)0x61,  /* [1883] */
    (xdc_Char)0x69,  /* [1884] */
    (xdc_Char)0x6c,  /* [1885] */
    (xdc_Char)0x65,  /* [1886] */
    (xdc_Char)0x64,  /* [1887] */
    (xdc_Char)0x20,  /* [1888] */
    (xdc_Char)0x74,  /* [1889] */
    (xdc_Char)0x6f,  /* [1890] */
    (xdc_Char)0x20,  /* [1891] */
    (xdc_Char)0x66,  /* [1892] */
    (xdc_Char)0x72,  /* [1893] */
    (xdc_Char)0x65,  /* [1894] */
    (xdc_Char)0x65,  /* [1895] */
    (xdc_Char)0x20,  /* [1896] */
    (xdc_Char)0x62,  /* [1897] */
    (xdc_Char)0x6c,  /* [1898] */
    (xdc_Char)0x6f,  /* [1899] */
    (xdc_Char)0x63,  /* [1900] */
    (xdc_Char)0x6b,  /* [1901] */
    (xdc_Char)0x20,  /* [1902] */
    (xdc_Char)0x62,  /* [1903] */
    (xdc_Char)0x61,  /* [1904] */
    (xdc_Char)0x63,  /* [1905] */
    (xdc_Char)0x6b,  /* [1906] */
    (xdc_Char)0x20,  /* [1907] */
    (xdc_Char)0x74,  /* [1908] */
    (xdc_Char)0x6f,  /* [1909] */
    (xdc_Char)0x20,  /* [1910] */
    (xdc_Char)0x68,  /* [1911] */
    (xdc_Char)0x65,  /* [1912] */
    (xdc_Char)0x61,  /* [1913] */
    (xdc_Char)0x70,  /* [1914] */
    (xdc_Char)0x2e,  /* [1915] */
    (xdc_Char)0x0,  /* [1916] */
    (xdc_Char)0x41,  /* [1917] */
    (xdc_Char)0x5f,  /* [1918] */
    (xdc_Char)0x62,  /* [1919] */
    (xdc_Char)0x61,  /* [1920] */
    (xdc_Char)0x64,  /* [1921] */
    (xdc_Char)0x43,  /* [1922] */
    (xdc_Char)0x6f,  /* [1923] */
    (xdc_Char)0x6e,  /* [1924] */
    (xdc_Char)0x74,  /* [1925] */
    (xdc_Char)0x65,  /* [1926] */
    (xdc_Char)0x78,  /* [1927] */
    (xdc_Char)0x74,  /* [1928] */
    (xdc_Char)0x3a,  /* [1929] */
    (xdc_Char)0x20,  /* [1930] */
    (xdc_Char)0x62,  /* [1931] */
    (xdc_Char)0x61,  /* [1932] */
    (xdc_Char)0x64,  /* [1933] */
    (xdc_Char)0x20,  /* [1934] */
    (xdc_Char)0x63,  /* [1935] */
    (xdc_Char)0x61,  /* [1936] */
    (xdc_Char)0x6c,  /* [1937] */
    (xdc_Char)0x6c,  /* [1938] */
    (xdc_Char)0x69,  /* [1939] */
    (xdc_Char)0x6e,  /* [1940] */
    (xdc_Char)0x67,  /* [1941] */
    (xdc_Char)0x20,  /* [1942] */
    (xdc_Char)0x63,  /* [1943] */
    (xdc_Char)0x6f,  /* [1944] */
    (xdc_Char)0x6e,  /* [1945] */
    (xdc_Char)0x74,  /* [1946] */
    (xdc_Char)0x65,  /* [1947] */
    (xdc_Char)0x78,  /* [1948] */
    (xdc_Char)0x74,  /* [1949] */
    (xdc_Char)0x2e,  /* [1950] */
    (xdc_Char)0x20,  /* [1951] */
    (xdc_Char)0x4d,  /* [1952] */
    (xdc_Char)0x61,  /* [1953] */
    (xdc_Char)0x79,  /* [1954] */
    (xdc_Char)0x20,  /* [1955] */
    (xdc_Char)0x6e,  /* [1956] */
    (xdc_Char)0x6f,  /* [1957] */
    (xdc_Char)0x74,  /* [1958] */
    (xdc_Char)0x20,  /* [1959] */
    (xdc_Char)0x62,  /* [1960] */
    (xdc_Char)0x65,  /* [1961] */
    (xdc_Char)0x20,  /* [1962] */
    (xdc_Char)0x65,  /* [1963] */
    (xdc_Char)0x6e,  /* [1964] */
    (xdc_Char)0x74,  /* [1965] */
    (xdc_Char)0x65,  /* [1966] */
    (xdc_Char)0x72,  /* [1967] */
    (xdc_Char)0x65,  /* [1968] */
    (xdc_Char)0x64,  /* [1969] */
    (xdc_Char)0x20,  /* [1970] */
    (xdc_Char)0x66,  /* [1971] */
    (xdc_Char)0x72,  /* [1972] */
    (xdc_Char)0x6f,  /* [1973] */
    (xdc_Char)0x6d,  /* [1974] */
    (xdc_Char)0x20,  /* [1975] */
    (xdc_Char)0x61,  /* [1976] */
    (xdc_Char)0x20,  /* [1977] */
    (xdc_Char)0x68,  /* [1978] */
    (xdc_Char)0x61,  /* [1979] */
    (xdc_Char)0x72,  /* [1980] */
    (xdc_Char)0x64,  /* [1981] */
    (xdc_Char)0x77,  /* [1982] */
    (xdc_Char)0x61,  /* [1983] */
    (xdc_Char)0x72,  /* [1984] */
    (xdc_Char)0x65,  /* [1985] */
    (xdc_Char)0x20,  /* [1986] */
    (xdc_Char)0x69,  /* [1987] */
    (xdc_Char)0x6e,  /* [1988] */
    (xdc_Char)0x74,  /* [1989] */
    (xdc_Char)0x65,  /* [1990] */
    (xdc_Char)0x72,  /* [1991] */
    (xdc_Char)0x72,  /* [1992] */
    (xdc_Char)0x75,  /* [1993] */
    (xdc_Char)0x70,  /* [1994] */
    (xdc_Char)0x74,  /* [1995] */
    (xdc_Char)0x20,  /* [1996] */
    (xdc_Char)0x74,  /* [1997] */
    (xdc_Char)0x68,  /* [1998] */
    (xdc_Char)0x72,  /* [1999] */
    (xdc_Char)0x65,  /* [2000] */
    (xdc_Char)0x61,  /* [2001] */
    (xdc_Char)0x64,  /* [2002] */
    (xdc_Char)0x2e,  /* [2003] */
    (xdc_Char)0x0,  /* [2004] */
    (xdc_Char)0x41,  /* [2005] */
    (xdc_Char)0x5f,  /* [2006] */
    (xdc_Char)0x62,  /* [2007] */
    (xdc_Char)0x61,  /* [2008] */
    (xdc_Char)0x64,  /* [2009] */
    (xdc_Char)0x43,  /* [2010] */
    (xdc_Char)0x6f,  /* [2011] */
    (xdc_Char)0x6e,  /* [2012] */
    (xdc_Char)0x74,  /* [2013] */
    (xdc_Char)0x65,  /* [2014] */
    (xdc_Char)0x78,  /* [2015] */
    (xdc_Char)0x74,  /* [2016] */
    (xdc_Char)0x3a,  /* [2017] */
    (xdc_Char)0x20,  /* [2018] */
    (xdc_Char)0x62,  /* [2019] */
    (xdc_Char)0x61,  /* [2020] */
    (xdc_Char)0x64,  /* [2021] */
    (xdc_Char)0x20,  /* [2022] */
    (xdc_Char)0x63,  /* [2023] */
    (xdc_Char)0x61,  /* [2024] */
    (xdc_Char)0x6c,  /* [2025] */
    (xdc_Char)0x6c,  /* [2026] */
    (xdc_Char)0x69,  /* [2027] */
    (xdc_Char)0x6e,  /* [2028] */
    (xdc_Char)0x67,  /* [2029] */
    (xdc_Char)0x20,  /* [2030] */
    (xdc_Char)0x63,  /* [2031] */
    (xdc_Char)0x6f,  /* [2032] */
    (xdc_Char)0x6e,  /* [2033] */
    (xdc_Char)0x74,  /* [2034] */
    (xdc_Char)0x65,  /* [2035] */
    (xdc_Char)0x78,  /* [2036] */
    (xdc_Char)0x74,  /* [2037] */
    (xdc_Char)0x2e,  /* [2038] */
    (xdc_Char)0x20,  /* [2039] */
    (xdc_Char)0x4d,  /* [2040] */
    (xdc_Char)0x61,  /* [2041] */
    (xdc_Char)0x79,  /* [2042] */
    (xdc_Char)0x20,  /* [2043] */
    (xdc_Char)0x6e,  /* [2044] */
    (xdc_Char)0x6f,  /* [2045] */
    (xdc_Char)0x74,  /* [2046] */
    (xdc_Char)0x20,  /* [2047] */
    (xdc_Char)0x62,  /* [2048] */
    (xdc_Char)0x65,  /* [2049] */
    (xdc_Char)0x20,  /* [2050] */
    (xdc_Char)0x65,  /* [2051] */
    (xdc_Char)0x6e,  /* [2052] */
    (xdc_Char)0x74,  /* [2053] */
    (xdc_Char)0x65,  /* [2054] */
    (xdc_Char)0x72,  /* [2055] */
    (xdc_Char)0x65,  /* [2056] */
    (xdc_Char)0x64,  /* [2057] */
    (xdc_Char)0x20,  /* [2058] */
    (xdc_Char)0x66,  /* [2059] */
    (xdc_Char)0x72,  /* [2060] */
    (xdc_Char)0x6f,  /* [2061] */
    (xdc_Char)0x6d,  /* [2062] */
    (xdc_Char)0x20,  /* [2063] */
    (xdc_Char)0x61,  /* [2064] */
    (xdc_Char)0x20,  /* [2065] */
    (xdc_Char)0x73,  /* [2066] */
    (xdc_Char)0x6f,  /* [2067] */
    (xdc_Char)0x66,  /* [2068] */
    (xdc_Char)0x74,  /* [2069] */
    (xdc_Char)0x77,  /* [2070] */
    (xdc_Char)0x61,  /* [2071] */
    (xdc_Char)0x72,  /* [2072] */
    (xdc_Char)0x65,  /* [2073] */
    (xdc_Char)0x20,  /* [2074] */
    (xdc_Char)0x6f,  /* [2075] */
    (xdc_Char)0x72,  /* [2076] */
    (xdc_Char)0x20,  /* [2077] */
    (xdc_Char)0x68,  /* [2078] */
    (xdc_Char)0x61,  /* [2079] */
    (xdc_Char)0x72,  /* [2080] */
    (xdc_Char)0x64,  /* [2081] */
    (xdc_Char)0x77,  /* [2082] */
    (xdc_Char)0x61,  /* [2083] */
    (xdc_Char)0x72,  /* [2084] */
    (xdc_Char)0x65,  /* [2085] */
    (xdc_Char)0x20,  /* [2086] */
    (xdc_Char)0x69,  /* [2087] */
    (xdc_Char)0x6e,  /* [2088] */
    (xdc_Char)0x74,  /* [2089] */
    (xdc_Char)0x65,  /* [2090] */
    (xdc_Char)0x72,  /* [2091] */
    (xdc_Char)0x72,  /* [2092] */
    (xdc_Char)0x75,  /* [2093] */
    (xdc_Char)0x70,  /* [2094] */
    (xdc_Char)0x74,  /* [2095] */
    (xdc_Char)0x20,  /* [2096] */
    (xdc_Char)0x74,  /* [2097] */
    (xdc_Char)0x68,  /* [2098] */
    (xdc_Char)0x72,  /* [2099] */
    (xdc_Char)0x65,  /* [2100] */
    (xdc_Char)0x61,  /* [2101] */
    (xdc_Char)0x64,  /* [2102] */
    (xdc_Char)0x2e,  /* [2103] */
    (xdc_Char)0x0,  /* [2104] */
    (xdc_Char)0x41,  /* [2105] */
    (xdc_Char)0x5f,  /* [2106] */
    (xdc_Char)0x62,  /* [2107] */
    (xdc_Char)0x61,  /* [2108] */
    (xdc_Char)0x64,  /* [2109] */
    (xdc_Char)0x43,  /* [2110] */
    (xdc_Char)0x6f,  /* [2111] */
    (xdc_Char)0x6e,  /* [2112] */
    (xdc_Char)0x74,  /* [2113] */
    (xdc_Char)0x65,  /* [2114] */
    (xdc_Char)0x78,  /* [2115] */
    (xdc_Char)0x74,  /* [2116] */
    (xdc_Char)0x3a,  /* [2117] */
    (xdc_Char)0x20,  /* [2118] */
    (xdc_Char)0x62,  /* [2119] */
    (xdc_Char)0x61,  /* [2120] */
    (xdc_Char)0x64,  /* [2121] */
    (xdc_Char)0x20,  /* [2122] */
    (xdc_Char)0x63,  /* [2123] */
    (xdc_Char)0x61,  /* [2124] */
    (xdc_Char)0x6c,  /* [2125] */
    (xdc_Char)0x6c,  /* [2126] */
    (xdc_Char)0x69,  /* [2127] */
    (xdc_Char)0x6e,  /* [2128] */
    (xdc_Char)0x67,  /* [2129] */
    (xdc_Char)0x20,  /* [2130] */
    (xdc_Char)0x63,  /* [2131] */
    (xdc_Char)0x6f,  /* [2132] */
    (xdc_Char)0x6e,  /* [2133] */
    (xdc_Char)0x74,  /* [2134] */
    (xdc_Char)0x65,  /* [2135] */
    (xdc_Char)0x78,  /* [2136] */
    (xdc_Char)0x74,  /* [2137] */
    (xdc_Char)0x2e,  /* [2138] */
    (xdc_Char)0x20,  /* [2139] */
    (xdc_Char)0x53,  /* [2140] */
    (xdc_Char)0x65,  /* [2141] */
    (xdc_Char)0x65,  /* [2142] */
    (xdc_Char)0x20,  /* [2143] */
    (xdc_Char)0x47,  /* [2144] */
    (xdc_Char)0x61,  /* [2145] */
    (xdc_Char)0x74,  /* [2146] */
    (xdc_Char)0x65,  /* [2147] */
    (xdc_Char)0x4d,  /* [2148] */
    (xdc_Char)0x75,  /* [2149] */
    (xdc_Char)0x74,  /* [2150] */
    (xdc_Char)0x65,  /* [2151] */
    (xdc_Char)0x78,  /* [2152] */
    (xdc_Char)0x50,  /* [2153] */
    (xdc_Char)0x72,  /* [2154] */
    (xdc_Char)0x69,  /* [2155] */
    (xdc_Char)0x20,  /* [2156] */
    (xdc_Char)0x41,  /* [2157] */
    (xdc_Char)0x50,  /* [2158] */
    (xdc_Char)0x49,  /* [2159] */
    (xdc_Char)0x20,  /* [2160] */
    (xdc_Char)0x64,  /* [2161] */
    (xdc_Char)0x6f,  /* [2162] */
    (xdc_Char)0x63,  /* [2163] */
    (xdc_Char)0x20,  /* [2164] */
    (xdc_Char)0x66,  /* [2165] */
    (xdc_Char)0x6f,  /* [2166] */
    (xdc_Char)0x72,  /* [2167] */
    (xdc_Char)0x20,  /* [2168] */
    (xdc_Char)0x64,  /* [2169] */
    (xdc_Char)0x65,  /* [2170] */
    (xdc_Char)0x74,  /* [2171] */
    (xdc_Char)0x61,  /* [2172] */
    (xdc_Char)0x69,  /* [2173] */
    (xdc_Char)0x6c,  /* [2174] */
    (xdc_Char)0x73,  /* [2175] */
    (xdc_Char)0x2e,  /* [2176] */
    (xdc_Char)0x0,  /* [2177] */
    (xdc_Char)0x41,  /* [2178] */
    (xdc_Char)0x5f,  /* [2179] */
    (xdc_Char)0x62,  /* [2180] */
    (xdc_Char)0x61,  /* [2181] */
    (xdc_Char)0x64,  /* [2182] */
    (xdc_Char)0x43,  /* [2183] */
    (xdc_Char)0x6f,  /* [2184] */
    (xdc_Char)0x6e,  /* [2185] */
    (xdc_Char)0x74,  /* [2186] */
    (xdc_Char)0x65,  /* [2187] */
    (xdc_Char)0x78,  /* [2188] */
    (xdc_Char)0x74,  /* [2189] */
    (xdc_Char)0x3a,  /* [2190] */
    (xdc_Char)0x20,  /* [2191] */
    (xdc_Char)0x62,  /* [2192] */
    (xdc_Char)0x61,  /* [2193] */
    (xdc_Char)0x64,  /* [2194] */
    (xdc_Char)0x20,  /* [2195] */
    (xdc_Char)0x63,  /* [2196] */
    (xdc_Char)0x61,  /* [2197] */
    (xdc_Char)0x6c,  /* [2198] */
    (xdc_Char)0x6c,  /* [2199] */
    (xdc_Char)0x69,  /* [2200] */
    (xdc_Char)0x6e,  /* [2201] */
    (xdc_Char)0x67,  /* [2202] */
    (xdc_Char)0x20,  /* [2203] */
    (xdc_Char)0x63,  /* [2204] */
    (xdc_Char)0x6f,  /* [2205] */
    (xdc_Char)0x6e,  /* [2206] */
    (xdc_Char)0x74,  /* [2207] */
    (xdc_Char)0x65,  /* [2208] */
    (xdc_Char)0x78,  /* [2209] */
    (xdc_Char)0x74,  /* [2210] */
    (xdc_Char)0x2e,  /* [2211] */
    (xdc_Char)0x20,  /* [2212] */
    (xdc_Char)0x53,  /* [2213] */
    (xdc_Char)0x65,  /* [2214] */
    (xdc_Char)0x65,  /* [2215] */
    (xdc_Char)0x20,  /* [2216] */
    (xdc_Char)0x47,  /* [2217] */
    (xdc_Char)0x61,  /* [2218] */
    (xdc_Char)0x74,  /* [2219] */
    (xdc_Char)0x65,  /* [2220] */
    (xdc_Char)0x4d,  /* [2221] */
    (xdc_Char)0x75,  /* [2222] */
    (xdc_Char)0x74,  /* [2223] */
    (xdc_Char)0x65,  /* [2224] */
    (xdc_Char)0x78,  /* [2225] */
    (xdc_Char)0x20,  /* [2226] */
    (xdc_Char)0x41,  /* [2227] */
    (xdc_Char)0x50,  /* [2228] */
    (xdc_Char)0x49,  /* [2229] */
    (xdc_Char)0x20,  /* [2230] */
    (xdc_Char)0x64,  /* [2231] */
    (xdc_Char)0x6f,  /* [2232] */
    (xdc_Char)0x63,  /* [2233] */
    (xdc_Char)0x20,  /* [2234] */
    (xdc_Char)0x66,  /* [2235] */
    (xdc_Char)0x6f,  /* [2236] */
    (xdc_Char)0x72,  /* [2237] */
    (xdc_Char)0x20,  /* [2238] */
    (xdc_Char)0x64,  /* [2239] */
    (xdc_Char)0x65,  /* [2240] */
    (xdc_Char)0x74,  /* [2241] */
    (xdc_Char)0x61,  /* [2242] */
    (xdc_Char)0x69,  /* [2243] */
    (xdc_Char)0x6c,  /* [2244] */
    (xdc_Char)0x73,  /* [2245] */
    (xdc_Char)0x2e,  /* [2246] */
    (xdc_Char)0x0,  /* [2247] */
    (xdc_Char)0x41,  /* [2248] */
    (xdc_Char)0x5f,  /* [2249] */
    (xdc_Char)0x7a,  /* [2250] */
    (xdc_Char)0x65,  /* [2251] */
    (xdc_Char)0x72,  /* [2252] */
    (xdc_Char)0x6f,  /* [2253] */
    (xdc_Char)0x54,  /* [2254] */
    (xdc_Char)0x69,  /* [2255] */
    (xdc_Char)0x6d,  /* [2256] */
    (xdc_Char)0x65,  /* [2257] */
    (xdc_Char)0x6f,  /* [2258] */
    (xdc_Char)0x75,  /* [2259] */
    (xdc_Char)0x74,  /* [2260] */
    (xdc_Char)0x3a,  /* [2261] */
    (xdc_Char)0x20,  /* [2262] */
    (xdc_Char)0x54,  /* [2263] */
    (xdc_Char)0x69,  /* [2264] */
    (xdc_Char)0x6d,  /* [2265] */
    (xdc_Char)0x65,  /* [2266] */
    (xdc_Char)0x6f,  /* [2267] */
    (xdc_Char)0x75,  /* [2268] */
    (xdc_Char)0x74,  /* [2269] */
    (xdc_Char)0x20,  /* [2270] */
    (xdc_Char)0x76,  /* [2271] */
    (xdc_Char)0x61,  /* [2272] */
    (xdc_Char)0x6c,  /* [2273] */
    (xdc_Char)0x75,  /* [2274] */
    (xdc_Char)0x65,  /* [2275] */
    (xdc_Char)0x20,  /* [2276] */
    (xdc_Char)0x61,  /* [2277] */
    (xdc_Char)0x6e,  /* [2278] */
    (xdc_Char)0x6e,  /* [2279] */
    (xdc_Char)0x6f,  /* [2280] */
    (xdc_Char)0x74,  /* [2281] */
    (xdc_Char)0x20,  /* [2282] */
    (xdc_Char)0x62,  /* [2283] */
    (xdc_Char)0x65,  /* [2284] */
    (xdc_Char)0x20,  /* [2285] */
    (xdc_Char)0x7a,  /* [2286] */
    (xdc_Char)0x65,  /* [2287] */
    (xdc_Char)0x72,  /* [2288] */
    (xdc_Char)0x6f,  /* [2289] */
    (xdc_Char)0x0,  /* [2290] */
    (xdc_Char)0x41,  /* [2291] */
    (xdc_Char)0x5f,  /* [2292] */
    (xdc_Char)0x69,  /* [2293] */
    (xdc_Char)0x6e,  /* [2294] */
    (xdc_Char)0x76,  /* [2295] */
    (xdc_Char)0x61,  /* [2296] */
    (xdc_Char)0x6c,  /* [2297] */
    (xdc_Char)0x69,  /* [2298] */
    (xdc_Char)0x64,  /* [2299] */
    (xdc_Char)0x4b,  /* [2300] */
    (xdc_Char)0x65,  /* [2301] */
    (xdc_Char)0x79,  /* [2302] */
    (xdc_Char)0x3a,  /* [2303] */
    (xdc_Char)0x20,  /* [2304] */
    (xdc_Char)0x74,  /* [2305] */
    (xdc_Char)0x68,  /* [2306] */
    (xdc_Char)0x65,  /* [2307] */
    (xdc_Char)0x20,  /* [2308] */
    (xdc_Char)0x6b,  /* [2309] */
    (xdc_Char)0x65,  /* [2310] */
    (xdc_Char)0x79,  /* [2311] */
    (xdc_Char)0x20,  /* [2312] */
    (xdc_Char)0x6d,  /* [2313] */
    (xdc_Char)0x75,  /* [2314] */
    (xdc_Char)0x73,  /* [2315] */
    (xdc_Char)0x74,  /* [2316] */
    (xdc_Char)0x20,  /* [2317] */
    (xdc_Char)0x62,  /* [2318] */
    (xdc_Char)0x65,  /* [2319] */
    (xdc_Char)0x20,  /* [2320] */
    (xdc_Char)0x73,  /* [2321] */
    (xdc_Char)0x65,  /* [2322] */
    (xdc_Char)0x74,  /* [2323] */
    (xdc_Char)0x20,  /* [2324] */
    (xdc_Char)0x74,  /* [2325] */
    (xdc_Char)0x6f,  /* [2326] */
    (xdc_Char)0x20,  /* [2327] */
    (xdc_Char)0x61,  /* [2328] */
    (xdc_Char)0x20,  /* [2329] */
    (xdc_Char)0x6e,  /* [2330] */
    (xdc_Char)0x6f,  /* [2331] */
    (xdc_Char)0x6e,  /* [2332] */
    (xdc_Char)0x2d,  /* [2333] */
    (xdc_Char)0x64,  /* [2334] */
    (xdc_Char)0x65,  /* [2335] */
    (xdc_Char)0x66,  /* [2336] */
    (xdc_Char)0x61,  /* [2337] */
    (xdc_Char)0x75,  /* [2338] */
    (xdc_Char)0x6c,  /* [2339] */
    (xdc_Char)0x74,  /* [2340] */
    (xdc_Char)0x20,  /* [2341] */
    (xdc_Char)0x76,  /* [2342] */
    (xdc_Char)0x61,  /* [2343] */
    (xdc_Char)0x6c,  /* [2344] */
    (xdc_Char)0x75,  /* [2345] */
    (xdc_Char)0x65,  /* [2346] */
    (xdc_Char)0x0,  /* [2347] */
    (xdc_Char)0x41,  /* [2348] */
    (xdc_Char)0x5f,  /* [2349] */
    (xdc_Char)0x69,  /* [2350] */
    (xdc_Char)0x6e,  /* [2351] */
    (xdc_Char)0x76,  /* [2352] */
    (xdc_Char)0x61,  /* [2353] */
    (xdc_Char)0x6c,  /* [2354] */
    (xdc_Char)0x69,  /* [2355] */
    (xdc_Char)0x64,  /* [2356] */
    (xdc_Char)0x4c,  /* [2357] */
    (xdc_Char)0x65,  /* [2358] */
    (xdc_Char)0x6e,  /* [2359] */
    (xdc_Char)0x3a,  /* [2360] */
    (xdc_Char)0x20,  /* [2361] */
    (xdc_Char)0x49,  /* [2362] */
    (xdc_Char)0x6e,  /* [2363] */
    (xdc_Char)0x76,  /* [2364] */
    (xdc_Char)0x61,  /* [2365] */
    (xdc_Char)0x6c,  /* [2366] */
    (xdc_Char)0x69,  /* [2367] */
    (xdc_Char)0x64,  /* [2368] */
    (xdc_Char)0x20,  /* [2369] */
    (xdc_Char)0x6c,  /* [2370] */
    (xdc_Char)0x65,  /* [2371] */
    (xdc_Char)0x6e,  /* [2372] */
    (xdc_Char)0x67,  /* [2373] */
    (xdc_Char)0x74,  /* [2374] */
    (xdc_Char)0x68,  /* [2375] */
    (xdc_Char)0x0,  /* [2376] */
    (xdc_Char)0x41,  /* [2377] */
    (xdc_Char)0x5f,  /* [2378] */
    (xdc_Char)0x69,  /* [2379] */
    (xdc_Char)0x6e,  /* [2380] */
    (xdc_Char)0x76,  /* [2381] */
    (xdc_Char)0x41,  /* [2382] */
    (xdc_Char)0x72,  /* [2383] */
    (xdc_Char)0x67,  /* [2384] */
    (xdc_Char)0x75,  /* [2385] */
    (xdc_Char)0x6d,  /* [2386] */
    (xdc_Char)0x65,  /* [2387] */
    (xdc_Char)0x6e,  /* [2388] */
    (xdc_Char)0x74,  /* [2389] */
    (xdc_Char)0x3a,  /* [2390] */
    (xdc_Char)0x20,  /* [2391] */
    (xdc_Char)0x49,  /* [2392] */
    (xdc_Char)0x6e,  /* [2393] */
    (xdc_Char)0x76,  /* [2394] */
    (xdc_Char)0x61,  /* [2395] */
    (xdc_Char)0x6c,  /* [2396] */
    (xdc_Char)0x69,  /* [2397] */
    (xdc_Char)0x64,  /* [2398] */
    (xdc_Char)0x20,  /* [2399] */
    (xdc_Char)0x61,  /* [2400] */
    (xdc_Char)0x72,  /* [2401] */
    (xdc_Char)0x67,  /* [2402] */
    (xdc_Char)0x75,  /* [2403] */
    (xdc_Char)0x6d,  /* [2404] */
    (xdc_Char)0x65,  /* [2405] */
    (xdc_Char)0x6e,  /* [2406] */
    (xdc_Char)0x74,  /* [2407] */
    (xdc_Char)0x20,  /* [2408] */
    (xdc_Char)0x73,  /* [2409] */
    (xdc_Char)0x75,  /* [2410] */
    (xdc_Char)0x70,  /* [2411] */
    (xdc_Char)0x70,  /* [2412] */
    (xdc_Char)0x6c,  /* [2413] */
    (xdc_Char)0x69,  /* [2414] */
    (xdc_Char)0x65,  /* [2415] */
    (xdc_Char)0x64,  /* [2416] */
    (xdc_Char)0x0,  /* [2417] */
    (xdc_Char)0x41,  /* [2418] */
    (xdc_Char)0x5f,  /* [2419] */
    (xdc_Char)0x69,  /* [2420] */
    (xdc_Char)0x6e,  /* [2421] */
    (xdc_Char)0x76,  /* [2422] */
    (xdc_Char)0x61,  /* [2423] */
    (xdc_Char)0x6c,  /* [2424] */
    (xdc_Char)0x69,  /* [2425] */
    (xdc_Char)0x64,  /* [2426] */
    (xdc_Char)0x4d,  /* [2427] */
    (xdc_Char)0x75,  /* [2428] */
    (xdc_Char)0x6c,  /* [2429] */
    (xdc_Char)0x74,  /* [2430] */
    (xdc_Char)0x69,  /* [2431] */
    (xdc_Char)0x50,  /* [2432] */
    (xdc_Char)0x72,  /* [2433] */
    (xdc_Char)0x6f,  /* [2434] */
    (xdc_Char)0x63,  /* [2435] */
    (xdc_Char)0x49,  /* [2436] */
    (xdc_Char)0x64,  /* [2437] */
    (xdc_Char)0x3a,  /* [2438] */
    (xdc_Char)0x20,  /* [2439] */
    (xdc_Char)0x49,  /* [2440] */
    (xdc_Char)0x6e,  /* [2441] */
    (xdc_Char)0x76,  /* [2442] */
    (xdc_Char)0x61,  /* [2443] */
    (xdc_Char)0x6c,  /* [2444] */
    (xdc_Char)0x69,  /* [2445] */
    (xdc_Char)0x64,  /* [2446] */
    (xdc_Char)0x20,  /* [2447] */
    (xdc_Char)0x4d,  /* [2448] */
    (xdc_Char)0x75,  /* [2449] */
    (xdc_Char)0x6c,  /* [2450] */
    (xdc_Char)0x74,  /* [2451] */
    (xdc_Char)0x69,  /* [2452] */
    (xdc_Char)0x50,  /* [2453] */
    (xdc_Char)0x72,  /* [2454] */
    (xdc_Char)0x6f,  /* [2455] */
    (xdc_Char)0x63,  /* [2456] */
    (xdc_Char)0x20,  /* [2457] */
    (xdc_Char)0x69,  /* [2458] */
    (xdc_Char)0x64,  /* [2459] */
    (xdc_Char)0x0,  /* [2460] */
    (xdc_Char)0x41,  /* [2461] */
    (xdc_Char)0x5f,  /* [2462] */
    (xdc_Char)0x69,  /* [2463] */
    (xdc_Char)0x6e,  /* [2464] */
    (xdc_Char)0x76,  /* [2465] */
    (xdc_Char)0x61,  /* [2466] */
    (xdc_Char)0x6c,  /* [2467] */
    (xdc_Char)0x69,  /* [2468] */
    (xdc_Char)0x64,  /* [2469] */
    (xdc_Char)0x50,  /* [2470] */
    (xdc_Char)0x72,  /* [2471] */
    (xdc_Char)0x6f,  /* [2472] */
    (xdc_Char)0x63,  /* [2473] */
    (xdc_Char)0x4e,  /* [2474] */
    (xdc_Char)0x61,  /* [2475] */
    (xdc_Char)0x6d,  /* [2476] */
    (xdc_Char)0x65,  /* [2477] */
    (xdc_Char)0x3a,  /* [2478] */
    (xdc_Char)0x20,  /* [2479] */
    (xdc_Char)0x4e,  /* [2480] */
    (xdc_Char)0x55,  /* [2481] */
    (xdc_Char)0x4c,  /* [2482] */
    (xdc_Char)0x4c,  /* [2483] */
    (xdc_Char)0x20,  /* [2484] */
    (xdc_Char)0x4d,  /* [2485] */
    (xdc_Char)0x75,  /* [2486] */
    (xdc_Char)0x6c,  /* [2487] */
    (xdc_Char)0x74,  /* [2488] */
    (xdc_Char)0x69,  /* [2489] */
    (xdc_Char)0x50,  /* [2490] */
    (xdc_Char)0x72,  /* [2491] */
    (xdc_Char)0x6f,  /* [2492] */
    (xdc_Char)0x63,  /* [2493] */
    (xdc_Char)0x20,  /* [2494] */
    (xdc_Char)0x6e,  /* [2495] */
    (xdc_Char)0x61,  /* [2496] */
    (xdc_Char)0x6d,  /* [2497] */
    (xdc_Char)0x65,  /* [2498] */
    (xdc_Char)0x20,  /* [2499] */
    (xdc_Char)0x65,  /* [2500] */
    (xdc_Char)0x6e,  /* [2501] */
    (xdc_Char)0x63,  /* [2502] */
    (xdc_Char)0x6f,  /* [2503] */
    (xdc_Char)0x75,  /* [2504] */
    (xdc_Char)0x6e,  /* [2505] */
    (xdc_Char)0x74,  /* [2506] */
    (xdc_Char)0x65,  /* [2507] */
    (xdc_Char)0x72,  /* [2508] */
    (xdc_Char)0x65,  /* [2509] */
    (xdc_Char)0x64,  /* [2510] */
    (xdc_Char)0x0,  /* [2511] */
    (xdc_Char)0x41,  /* [2512] */
    (xdc_Char)0x5f,  /* [2513] */
    (xdc_Char)0x62,  /* [2514] */
    (xdc_Char)0x61,  /* [2515] */
    (xdc_Char)0x64,  /* [2516] */
    (xdc_Char)0x4d,  /* [2517] */
    (xdc_Char)0x6f,  /* [2518] */
    (xdc_Char)0x64,  /* [2519] */
    (xdc_Char)0x65,  /* [2520] */
    (xdc_Char)0x3a,  /* [2521] */
    (xdc_Char)0x20,  /* [2522] */
    (xdc_Char)0x42,  /* [2523] */
    (xdc_Char)0x61,  /* [2524] */
    (xdc_Char)0x64,  /* [2525] */
    (xdc_Char)0x20,  /* [2526] */
    (xdc_Char)0x4d,  /* [2527] */
    (xdc_Char)0x6f,  /* [2528] */
    (xdc_Char)0x64,  /* [2529] */
    (xdc_Char)0x65,  /* [2530] */
    (xdc_Char)0x0,  /* [2531] */
    (xdc_Char)0x41,  /* [2532] */
    (xdc_Char)0x5f,  /* [2533] */
    (xdc_Char)0x70,  /* [2534] */
    (xdc_Char)0x65,  /* [2535] */
    (xdc_Char)0x6e,  /* [2536] */
    (xdc_Char)0x64,  /* [2537] */
    (xdc_Char)0x69,  /* [2538] */
    (xdc_Char)0x6e,  /* [2539] */
    (xdc_Char)0x67,  /* [2540] */
    (xdc_Char)0x52,  /* [2541] */
    (xdc_Char)0x65,  /* [2542] */
    (xdc_Char)0x63,  /* [2543] */
    (xdc_Char)0x6c,  /* [2544] */
    (xdc_Char)0x61,  /* [2545] */
    (xdc_Char)0x69,  /* [2546] */
    (xdc_Char)0x6d,  /* [2547] */
    (xdc_Char)0x73,  /* [2548] */
    (xdc_Char)0x3a,  /* [2549] */
    (xdc_Char)0x20,  /* [2550] */
    (xdc_Char)0x50,  /* [2551] */
    (xdc_Char)0x61,  /* [2552] */
    (xdc_Char)0x63,  /* [2553] */
    (xdc_Char)0x6b,  /* [2554] */
    (xdc_Char)0x65,  /* [2555] */
    (xdc_Char)0x74,  /* [2556] */
    (xdc_Char)0x73,  /* [2557] */
    (xdc_Char)0x20,  /* [2558] */
    (xdc_Char)0x69,  /* [2559] */
    (xdc_Char)0x73,  /* [2560] */
    (xdc_Char)0x73,  /* [2561] */
    (xdc_Char)0x75,  /* [2562] */
    (xdc_Char)0x65,  /* [2563] */
    (xdc_Char)0x64,  /* [2564] */
    (xdc_Char)0x20,  /* [2565] */
    (xdc_Char)0x62,  /* [2566] */
    (xdc_Char)0x75,  /* [2567] */
    (xdc_Char)0x74,  /* [2568] */
    (xdc_Char)0x20,  /* [2569] */
    (xdc_Char)0x6e,  /* [2570] */
    (xdc_Char)0x6f,  /* [2571] */
    (xdc_Char)0x74,  /* [2572] */
    (xdc_Char)0x20,  /* [2573] */
    (xdc_Char)0x72,  /* [2574] */
    (xdc_Char)0x65,  /* [2575] */
    (xdc_Char)0x63,  /* [2576] */
    (xdc_Char)0x6c,  /* [2577] */
    (xdc_Char)0x61,  /* [2578] */
    (xdc_Char)0x69,  /* [2579] */
    (xdc_Char)0x6d,  /* [2580] */
    (xdc_Char)0x65,  /* [2581] */
    (xdc_Char)0x64,  /* [2582] */
    (xdc_Char)0x0,  /* [2583] */
    (xdc_Char)0x41,  /* [2584] */
    (xdc_Char)0x5f,  /* [2585] */
    (xdc_Char)0x73,  /* [2586] */
    (xdc_Char)0x79,  /* [2587] */
    (xdc_Char)0x6e,  /* [2588] */
    (xdc_Char)0x63,  /* [2589] */
    (xdc_Char)0x4e,  /* [2590] */
    (xdc_Char)0x6f,  /* [2591] */
    (xdc_Char)0x6e,  /* [2592] */
    (xdc_Char)0x42,  /* [2593] */
    (xdc_Char)0x6c,  /* [2594] */
    (xdc_Char)0x6f,  /* [2595] */
    (xdc_Char)0x63,  /* [2596] */
    (xdc_Char)0x6b,  /* [2597] */
    (xdc_Char)0x69,  /* [2598] */
    (xdc_Char)0x6e,  /* [2599] */
    (xdc_Char)0x67,  /* [2600] */
    (xdc_Char)0x3a,  /* [2601] */
    (xdc_Char)0x20,  /* [2602] */
    (xdc_Char)0x49,  /* [2603] */
    (xdc_Char)0x53,  /* [2604] */
    (xdc_Char)0x79,  /* [2605] */
    (xdc_Char)0x6e,  /* [2606] */
    (xdc_Char)0x63,  /* [2607] */
    (xdc_Char)0x20,  /* [2608] */
    (xdc_Char)0x73,  /* [2609] */
    (xdc_Char)0x68,  /* [2610] */
    (xdc_Char)0x6f,  /* [2611] */
    (xdc_Char)0x75,  /* [2612] */
    (xdc_Char)0x6c,  /* [2613] */
    (xdc_Char)0x64,  /* [2614] */
    (xdc_Char)0x20,  /* [2615] */
    (xdc_Char)0x68,  /* [2616] */
    (xdc_Char)0x61,  /* [2617] */
    (xdc_Char)0x76,  /* [2618] */
    (xdc_Char)0x65,  /* [2619] */
    (xdc_Char)0x20,  /* [2620] */
    (xdc_Char)0x62,  /* [2621] */
    (xdc_Char)0x6c,  /* [2622] */
    (xdc_Char)0x6f,  /* [2623] */
    (xdc_Char)0x63,  /* [2624] */
    (xdc_Char)0x6b,  /* [2625] */
    (xdc_Char)0x69,  /* [2626] */
    (xdc_Char)0x6e,  /* [2627] */
    (xdc_Char)0x67,  /* [2628] */
    (xdc_Char)0x20,  /* [2629] */
    (xdc_Char)0x71,  /* [2630] */
    (xdc_Char)0x75,  /* [2631] */
    (xdc_Char)0x61,  /* [2632] */
    (xdc_Char)0x6c,  /* [2633] */
    (xdc_Char)0x69,  /* [2634] */
    (xdc_Char)0x74,  /* [2635] */
    (xdc_Char)0x79,  /* [2636] */
    (xdc_Char)0x0,  /* [2637] */
    (xdc_Char)0x41,  /* [2638] */
    (xdc_Char)0x5f,  /* [2639] */
    (xdc_Char)0x6e,  /* [2640] */
    (xdc_Char)0x75,  /* [2641] */
    (xdc_Char)0x6c,  /* [2642] */
    (xdc_Char)0x6c,  /* [2643] */
    (xdc_Char)0x50,  /* [2644] */
    (xdc_Char)0x6f,  /* [2645] */
    (xdc_Char)0x69,  /* [2646] */
    (xdc_Char)0x6e,  /* [2647] */
    (xdc_Char)0x74,  /* [2648] */
    (xdc_Char)0x65,  /* [2649] */
    (xdc_Char)0x72,  /* [2650] */
    (xdc_Char)0x3a,  /* [2651] */
    (xdc_Char)0x20,  /* [2652] */
    (xdc_Char)0x50,  /* [2653] */
    (xdc_Char)0x6f,  /* [2654] */
    (xdc_Char)0x69,  /* [2655] */
    (xdc_Char)0x6e,  /* [2656] */
    (xdc_Char)0x74,  /* [2657] */
    (xdc_Char)0x65,  /* [2658] */
    (xdc_Char)0x72,  /* [2659] */
    (xdc_Char)0x20,  /* [2660] */
    (xdc_Char)0x69,  /* [2661] */
    (xdc_Char)0x73,  /* [2662] */
    (xdc_Char)0x20,  /* [2663] */
    (xdc_Char)0x6e,  /* [2664] */
    (xdc_Char)0x75,  /* [2665] */
    (xdc_Char)0x6c,  /* [2666] */
    (xdc_Char)0x6c,  /* [2667] */
    (xdc_Char)0x0,  /* [2668] */
    (xdc_Char)0x41,  /* [2669] */
    (xdc_Char)0x5f,  /* [2670] */
    (xdc_Char)0x75,  /* [2671] */
    (xdc_Char)0x6e,  /* [2672] */
    (xdc_Char)0x6b,  /* [2673] */
    (xdc_Char)0x6e,  /* [2674] */
    (xdc_Char)0x6f,  /* [2675] */
    (xdc_Char)0x77,  /* [2676] */
    (xdc_Char)0x6e,  /* [2677] */
    (xdc_Char)0x44,  /* [2678] */
    (xdc_Char)0x65,  /* [2679] */
    (xdc_Char)0x73,  /* [2680] */
    (xdc_Char)0x63,  /* [2681] */
    (xdc_Char)0x54,  /* [2682] */
    (xdc_Char)0x79,  /* [2683] */
    (xdc_Char)0x70,  /* [2684] */
    (xdc_Char)0x65,  /* [2685] */
    (xdc_Char)0x3a,  /* [2686] */
    (xdc_Char)0x20,  /* [2687] */
    (xdc_Char)0x44,  /* [2688] */
    (xdc_Char)0x65,  /* [2689] */
    (xdc_Char)0x73,  /* [2690] */
    (xdc_Char)0x63,  /* [2691] */
    (xdc_Char)0x72,  /* [2692] */
    (xdc_Char)0x69,  /* [2693] */
    (xdc_Char)0x70,  /* [2694] */
    (xdc_Char)0x74,  /* [2695] */
    (xdc_Char)0x6f,  /* [2696] */
    (xdc_Char)0x72,  /* [2697] */
    (xdc_Char)0x20,  /* [2698] */
    (xdc_Char)0x74,  /* [2699] */
    (xdc_Char)0x79,  /* [2700] */
    (xdc_Char)0x70,  /* [2701] */
    (xdc_Char)0x65,  /* [2702] */
    (xdc_Char)0x20,  /* [2703] */
    (xdc_Char)0x69,  /* [2704] */
    (xdc_Char)0x73,  /* [2705] */
    (xdc_Char)0x20,  /* [2706] */
    (xdc_Char)0x6e,  /* [2707] */
    (xdc_Char)0x6f,  /* [2708] */
    (xdc_Char)0x74,  /* [2709] */
    (xdc_Char)0x20,  /* [2710] */
    (xdc_Char)0x72,  /* [2711] */
    (xdc_Char)0x65,  /* [2712] */
    (xdc_Char)0x63,  /* [2713] */
    (xdc_Char)0x6f,  /* [2714] */
    (xdc_Char)0x67,  /* [2715] */
    (xdc_Char)0x6e,  /* [2716] */
    (xdc_Char)0x69,  /* [2717] */
    (xdc_Char)0x7a,  /* [2718] */
    (xdc_Char)0x65,  /* [2719] */
    (xdc_Char)0x64,  /* [2720] */
    (xdc_Char)0x0,  /* [2721] */
    (xdc_Char)0x41,  /* [2722] */
    (xdc_Char)0x5f,  /* [2723] */
    (xdc_Char)0x6e,  /* [2724] */
    (xdc_Char)0x6f,  /* [2725] */
    (xdc_Char)0x52,  /* [2726] */
    (xdc_Char)0x65,  /* [2727] */
    (xdc_Char)0x61,  /* [2728] */
    (xdc_Char)0x64,  /* [2729] */
    (xdc_Char)0x79,  /* [2730] */
    (xdc_Char)0x50,  /* [2731] */
    (xdc_Char)0x61,  /* [2732] */
    (xdc_Char)0x63,  /* [2733] */
    (xdc_Char)0x6b,  /* [2734] */
    (xdc_Char)0x65,  /* [2735] */
    (xdc_Char)0x74,  /* [2736] */
    (xdc_Char)0x3a,  /* [2737] */
    (xdc_Char)0x20,  /* [2738] */
    (xdc_Char)0x20,  /* [2739] */
    (xdc_Char)0x4e,  /* [2740] */
    (xdc_Char)0x6f,  /* [2741] */
    (xdc_Char)0x20,  /* [2742] */
    (xdc_Char)0x70,  /* [2743] */
    (xdc_Char)0x61,  /* [2744] */
    (xdc_Char)0x63,  /* [2745] */
    (xdc_Char)0x6b,  /* [2746] */
    (xdc_Char)0x65,  /* [2747] */
    (xdc_Char)0x74,  /* [2748] */
    (xdc_Char)0x20,  /* [2749] */
    (xdc_Char)0x72,  /* [2750] */
    (xdc_Char)0x65,  /* [2751] */
    (xdc_Char)0x61,  /* [2752] */
    (xdc_Char)0x64,  /* [2753] */
    (xdc_Char)0x79,  /* [2754] */
    (xdc_Char)0x20,  /* [2755] */
    (xdc_Char)0x66,  /* [2756] */
    (xdc_Char)0x6f,  /* [2757] */
    (xdc_Char)0x72,  /* [2758] */
    (xdc_Char)0x20,  /* [2759] */
    (xdc_Char)0x72,  /* [2760] */
    (xdc_Char)0x65,  /* [2761] */
    (xdc_Char)0x63,  /* [2762] */
    (xdc_Char)0x6c,  /* [2763] */
    (xdc_Char)0x61,  /* [2764] */
    (xdc_Char)0x69,  /* [2765] */
    (xdc_Char)0x6d,  /* [2766] */
    (xdc_Char)0x0,  /* [2767] */
    (xdc_Char)0x61,  /* [2768] */
    (xdc_Char)0x73,  /* [2769] */
    (xdc_Char)0x73,  /* [2770] */
    (xdc_Char)0x65,  /* [2771] */
    (xdc_Char)0x72,  /* [2772] */
    (xdc_Char)0x74,  /* [2773] */
    (xdc_Char)0x69,  /* [2774] */
    (xdc_Char)0x6f,  /* [2775] */
    (xdc_Char)0x6e,  /* [2776] */
    (xdc_Char)0x20,  /* [2777] */
    (xdc_Char)0x66,  /* [2778] */
    (xdc_Char)0x61,  /* [2779] */
    (xdc_Char)0x69,  /* [2780] */
    (xdc_Char)0x6c,  /* [2781] */
    (xdc_Char)0x75,  /* [2782] */
    (xdc_Char)0x72,  /* [2783] */
    (xdc_Char)0x65,  /* [2784] */
    (xdc_Char)0x25,  /* [2785] */
    (xdc_Char)0x73,  /* [2786] */
    (xdc_Char)0x25,  /* [2787] */
    (xdc_Char)0x73,  /* [2788] */
    (xdc_Char)0x0,  /* [2789] */
    (xdc_Char)0x25,  /* [2790] */
    (xdc_Char)0x24,  /* [2791] */
    (xdc_Char)0x53,  /* [2792] */
    (xdc_Char)0x0,  /* [2793] */
    (xdc_Char)0x6f,  /* [2794] */
    (xdc_Char)0x75,  /* [2795] */
    (xdc_Char)0x74,  /* [2796] */
    (xdc_Char)0x20,  /* [2797] */
    (xdc_Char)0x6f,  /* [2798] */
    (xdc_Char)0x66,  /* [2799] */
    (xdc_Char)0x20,  /* [2800] */
    (xdc_Char)0x6d,  /* [2801] */
    (xdc_Char)0x65,  /* [2802] */
    (xdc_Char)0x6d,  /* [2803] */
    (xdc_Char)0x6f,  /* [2804] */
    (xdc_Char)0x72,  /* [2805] */
    (xdc_Char)0x79,  /* [2806] */
    (xdc_Char)0x3a,  /* [2807] */
    (xdc_Char)0x20,  /* [2808] */
    (xdc_Char)0x68,  /* [2809] */
    (xdc_Char)0x65,  /* [2810] */
    (xdc_Char)0x61,  /* [2811] */
    (xdc_Char)0x70,  /* [2812] */
    (xdc_Char)0x3d,  /* [2813] */
    (xdc_Char)0x30,  /* [2814] */
    (xdc_Char)0x78,  /* [2815] */
    (xdc_Char)0x25,  /* [2816] */
    (xdc_Char)0x78,  /* [2817] */
    (xdc_Char)0x2c,  /* [2818] */
    (xdc_Char)0x20,  /* [2819] */
    (xdc_Char)0x73,  /* [2820] */
    (xdc_Char)0x69,  /* [2821] */
    (xdc_Char)0x7a,  /* [2822] */
    (xdc_Char)0x65,  /* [2823] */
    (xdc_Char)0x3d,  /* [2824] */
    (xdc_Char)0x25,  /* [2825] */
    (xdc_Char)0x75,  /* [2826] */
    (xdc_Char)0x0,  /* [2827] */
    (xdc_Char)0x25,  /* [2828] */
    (xdc_Char)0x73,  /* [2829] */
    (xdc_Char)0x20,  /* [2830] */
    (xdc_Char)0x30,  /* [2831] */
    (xdc_Char)0x78,  /* [2832] */
    (xdc_Char)0x25,  /* [2833] */
    (xdc_Char)0x78,  /* [2834] */
    (xdc_Char)0x0,  /* [2835] */
    (xdc_Char)0x45,  /* [2836] */
    (xdc_Char)0x5f,  /* [2837] */
    (xdc_Char)0x62,  /* [2838] */
    (xdc_Char)0x61,  /* [2839] */
    (xdc_Char)0x64,  /* [2840] */
    (xdc_Char)0x4c,  /* [2841] */
    (xdc_Char)0x65,  /* [2842] */
    (xdc_Char)0x76,  /* [2843] */
    (xdc_Char)0x65,  /* [2844] */
    (xdc_Char)0x6c,  /* [2845] */
    (xdc_Char)0x3a,  /* [2846] */
    (xdc_Char)0x20,  /* [2847] */
    (xdc_Char)0x42,  /* [2848] */
    (xdc_Char)0x61,  /* [2849] */
    (xdc_Char)0x64,  /* [2850] */
    (xdc_Char)0x20,  /* [2851] */
    (xdc_Char)0x66,  /* [2852] */
    (xdc_Char)0x69,  /* [2853] */
    (xdc_Char)0x6c,  /* [2854] */
    (xdc_Char)0x74,  /* [2855] */
    (xdc_Char)0x65,  /* [2856] */
    (xdc_Char)0x72,  /* [2857] */
    (xdc_Char)0x20,  /* [2858] */
    (xdc_Char)0x6c,  /* [2859] */
    (xdc_Char)0x65,  /* [2860] */
    (xdc_Char)0x76,  /* [2861] */
    (xdc_Char)0x65,  /* [2862] */
    (xdc_Char)0x6c,  /* [2863] */
    (xdc_Char)0x20,  /* [2864] */
    (xdc_Char)0x76,  /* [2865] */
    (xdc_Char)0x61,  /* [2866] */
    (xdc_Char)0x6c,  /* [2867] */
    (xdc_Char)0x75,  /* [2868] */
    (xdc_Char)0x65,  /* [2869] */
    (xdc_Char)0x3a,  /* [2870] */
    (xdc_Char)0x20,  /* [2871] */
    (xdc_Char)0x25,  /* [2872] */
    (xdc_Char)0x64,  /* [2873] */
    (xdc_Char)0x0,  /* [2874] */
    (xdc_Char)0x66,  /* [2875] */
    (xdc_Char)0x72,  /* [2876] */
    (xdc_Char)0x65,  /* [2877] */
    (xdc_Char)0x65,  /* [2878] */
    (xdc_Char)0x28,  /* [2879] */
    (xdc_Char)0x29,  /* [2880] */
    (xdc_Char)0x20,  /* [2881] */
    (xdc_Char)0x69,  /* [2882] */
    (xdc_Char)0x6e,  /* [2883] */
    (xdc_Char)0x76,  /* [2884] */
    (xdc_Char)0x61,  /* [2885] */
    (xdc_Char)0x6c,  /* [2886] */
    (xdc_Char)0x69,  /* [2887] */
    (xdc_Char)0x64,  /* [2888] */
    (xdc_Char)0x20,  /* [2889] */
    (xdc_Char)0x69,  /* [2890] */
    (xdc_Char)0x6e,  /* [2891] */
    (xdc_Char)0x20,  /* [2892] */
    (xdc_Char)0x67,  /* [2893] */
    (xdc_Char)0x72,  /* [2894] */
    (xdc_Char)0x6f,  /* [2895] */
    (xdc_Char)0x77,  /* [2896] */
    (xdc_Char)0x74,  /* [2897] */
    (xdc_Char)0x68,  /* [2898] */
    (xdc_Char)0x2d,  /* [2899] */
    (xdc_Char)0x6f,  /* [2900] */
    (xdc_Char)0x6e,  /* [2901] */
    (xdc_Char)0x6c,  /* [2902] */
    (xdc_Char)0x79,  /* [2903] */
    (xdc_Char)0x20,  /* [2904] */
    (xdc_Char)0x48,  /* [2905] */
    (xdc_Char)0x65,  /* [2906] */
    (xdc_Char)0x61,  /* [2907] */
    (xdc_Char)0x70,  /* [2908] */
    (xdc_Char)0x4d,  /* [2909] */
    (xdc_Char)0x69,  /* [2910] */
    (xdc_Char)0x6e,  /* [2911] */
    (xdc_Char)0x0,  /* [2912] */
    (xdc_Char)0x54,  /* [2913] */
    (xdc_Char)0x68,  /* [2914] */
    (xdc_Char)0x65,  /* [2915] */
    (xdc_Char)0x20,  /* [2916] */
    (xdc_Char)0x52,  /* [2917] */
    (xdc_Char)0x54,  /* [2918] */
    (xdc_Char)0x53,  /* [2919] */
    (xdc_Char)0x20,  /* [2920] */
    (xdc_Char)0x68,  /* [2921] */
    (xdc_Char)0x65,  /* [2922] */
    (xdc_Char)0x61,  /* [2923] */
    (xdc_Char)0x70,  /* [2924] */
    (xdc_Char)0x20,  /* [2925] */
    (xdc_Char)0x69,  /* [2926] */
    (xdc_Char)0x73,  /* [2927] */
    (xdc_Char)0x20,  /* [2928] */
    (xdc_Char)0x75,  /* [2929] */
    (xdc_Char)0x73,  /* [2930] */
    (xdc_Char)0x65,  /* [2931] */
    (xdc_Char)0x64,  /* [2932] */
    (xdc_Char)0x20,  /* [2933] */
    (xdc_Char)0x75,  /* [2934] */
    (xdc_Char)0x70,  /* [2935] */
    (xdc_Char)0x2e,  /* [2936] */
    (xdc_Char)0x20,  /* [2937] */
    (xdc_Char)0x45,  /* [2938] */
    (xdc_Char)0x78,  /* [2939] */
    (xdc_Char)0x61,  /* [2940] */
    (xdc_Char)0x6d,  /* [2941] */
    (xdc_Char)0x69,  /* [2942] */
    (xdc_Char)0x6e,  /* [2943] */
    (xdc_Char)0x65,  /* [2944] */
    (xdc_Char)0x20,  /* [2945] */
    (xdc_Char)0x50,  /* [2946] */
    (xdc_Char)0x72,  /* [2947] */
    (xdc_Char)0x6f,  /* [2948] */
    (xdc_Char)0x67,  /* [2949] */
    (xdc_Char)0x72,  /* [2950] */
    (xdc_Char)0x61,  /* [2951] */
    (xdc_Char)0x6d,  /* [2952] */
    (xdc_Char)0x2e,  /* [2953] */
    (xdc_Char)0x68,  /* [2954] */
    (xdc_Char)0x65,  /* [2955] */
    (xdc_Char)0x61,  /* [2956] */
    (xdc_Char)0x70,  /* [2957] */
    (xdc_Char)0x2e,  /* [2958] */
    (xdc_Char)0x0,  /* [2959] */
    (xdc_Char)0x45,  /* [2960] */
    (xdc_Char)0x5f,  /* [2961] */
    (xdc_Char)0x62,  /* [2962] */
    (xdc_Char)0x61,  /* [2963] */
    (xdc_Char)0x64,  /* [2964] */
    (xdc_Char)0x43,  /* [2965] */
    (xdc_Char)0x6f,  /* [2966] */
    (xdc_Char)0x6d,  /* [2967] */
    (xdc_Char)0x6d,  /* [2968] */
    (xdc_Char)0x61,  /* [2969] */
    (xdc_Char)0x6e,  /* [2970] */
    (xdc_Char)0x64,  /* [2971] */
    (xdc_Char)0x3a,  /* [2972] */
    (xdc_Char)0x20,  /* [2973] */
    (xdc_Char)0x52,  /* [2974] */
    (xdc_Char)0x65,  /* [2975] */
    (xdc_Char)0x63,  /* [2976] */
    (xdc_Char)0x65,  /* [2977] */
    (xdc_Char)0x69,  /* [2978] */
    (xdc_Char)0x76,  /* [2979] */
    (xdc_Char)0x65,  /* [2980] */
    (xdc_Char)0x64,  /* [2981] */
    (xdc_Char)0x20,  /* [2982] */
    (xdc_Char)0x69,  /* [2983] */
    (xdc_Char)0x6e,  /* [2984] */
    (xdc_Char)0x76,  /* [2985] */
    (xdc_Char)0x61,  /* [2986] */
    (xdc_Char)0x6c,  /* [2987] */
    (xdc_Char)0x69,  /* [2988] */
    (xdc_Char)0x64,  /* [2989] */
    (xdc_Char)0x20,  /* [2990] */
    (xdc_Char)0x63,  /* [2991] */
    (xdc_Char)0x6f,  /* [2992] */
    (xdc_Char)0x6d,  /* [2993] */
    (xdc_Char)0x6d,  /* [2994] */
    (xdc_Char)0x61,  /* [2995] */
    (xdc_Char)0x6e,  /* [2996] */
    (xdc_Char)0x64,  /* [2997] */
    (xdc_Char)0x2c,  /* [2998] */
    (xdc_Char)0x20,  /* [2999] */
    (xdc_Char)0x69,  /* [3000] */
    (xdc_Char)0x64,  /* [3001] */
    (xdc_Char)0x3a,  /* [3002] */
    (xdc_Char)0x20,  /* [3003] */
    (xdc_Char)0x25,  /* [3004] */
    (xdc_Char)0x64,  /* [3005] */
    (xdc_Char)0x2e,  /* [3006] */
    (xdc_Char)0x0,  /* [3007] */
    (xdc_Char)0x45,  /* [3008] */
    (xdc_Char)0x5f,  /* [3009] */
    (xdc_Char)0x73,  /* [3010] */
    (xdc_Char)0x74,  /* [3011] */
    (xdc_Char)0x61,  /* [3012] */
    (xdc_Char)0x63,  /* [3013] */
    (xdc_Char)0x6b,  /* [3014] */
    (xdc_Char)0x4f,  /* [3015] */
    (xdc_Char)0x76,  /* [3016] */
    (xdc_Char)0x65,  /* [3017] */
    (xdc_Char)0x72,  /* [3018] */
    (xdc_Char)0x66,  /* [3019] */
    (xdc_Char)0x6c,  /* [3020] */
    (xdc_Char)0x6f,  /* [3021] */
    (xdc_Char)0x77,  /* [3022] */
    (xdc_Char)0x3a,  /* [3023] */
    (xdc_Char)0x20,  /* [3024] */
    (xdc_Char)0x49,  /* [3025] */
    (xdc_Char)0x53,  /* [3026] */
    (xdc_Char)0x52,  /* [3027] */
    (xdc_Char)0x20,  /* [3028] */
    (xdc_Char)0x73,  /* [3029] */
    (xdc_Char)0x74,  /* [3030] */
    (xdc_Char)0x61,  /* [3031] */
    (xdc_Char)0x63,  /* [3032] */
    (xdc_Char)0x6b,  /* [3033] */
    (xdc_Char)0x20,  /* [3034] */
    (xdc_Char)0x6f,  /* [3035] */
    (xdc_Char)0x76,  /* [3036] */
    (xdc_Char)0x65,  /* [3037] */
    (xdc_Char)0x72,  /* [3038] */
    (xdc_Char)0x66,  /* [3039] */
    (xdc_Char)0x6c,  /* [3040] */
    (xdc_Char)0x6f,  /* [3041] */
    (xdc_Char)0x77,  /* [3042] */
    (xdc_Char)0x2e,  /* [3043] */
    (xdc_Char)0x0,  /* [3044] */
    (xdc_Char)0x45,  /* [3045] */
    (xdc_Char)0x5f,  /* [3046] */
    (xdc_Char)0x73,  /* [3047] */
    (xdc_Char)0x74,  /* [3048] */
    (xdc_Char)0x61,  /* [3049] */
    (xdc_Char)0x63,  /* [3050] */
    (xdc_Char)0x6b,  /* [3051] */
    (xdc_Char)0x4f,  /* [3052] */
    (xdc_Char)0x76,  /* [3053] */
    (xdc_Char)0x65,  /* [3054] */
    (xdc_Char)0x72,  /* [3055] */
    (xdc_Char)0x66,  /* [3056] */
    (xdc_Char)0x6c,  /* [3057] */
    (xdc_Char)0x6f,  /* [3058] */
    (xdc_Char)0x77,  /* [3059] */
    (xdc_Char)0x3a,  /* [3060] */
    (xdc_Char)0x20,  /* [3061] */
    (xdc_Char)0x54,  /* [3062] */
    (xdc_Char)0x61,  /* [3063] */
    (xdc_Char)0x73,  /* [3064] */
    (xdc_Char)0x6b,  /* [3065] */
    (xdc_Char)0x20,  /* [3066] */
    (xdc_Char)0x30,  /* [3067] */
    (xdc_Char)0x78,  /* [3068] */
    (xdc_Char)0x25,  /* [3069] */
    (xdc_Char)0x78,  /* [3070] */
    (xdc_Char)0x20,  /* [3071] */
    (xdc_Char)0x73,  /* [3072] */
    (xdc_Char)0x74,  /* [3073] */
    (xdc_Char)0x61,  /* [3074] */
    (xdc_Char)0x63,  /* [3075] */
    (xdc_Char)0x6b,  /* [3076] */
    (xdc_Char)0x20,  /* [3077] */
    (xdc_Char)0x6f,  /* [3078] */
    (xdc_Char)0x76,  /* [3079] */
    (xdc_Char)0x65,  /* [3080] */
    (xdc_Char)0x72,  /* [3081] */
    (xdc_Char)0x66,  /* [3082] */
    (xdc_Char)0x6c,  /* [3083] */
    (xdc_Char)0x6f,  /* [3084] */
    (xdc_Char)0x77,  /* [3085] */
    (xdc_Char)0x2e,  /* [3086] */
    (xdc_Char)0x0,  /* [3087] */
    (xdc_Char)0x45,  /* [3088] */
    (xdc_Char)0x5f,  /* [3089] */
    (xdc_Char)0x73,  /* [3090] */
    (xdc_Char)0x70,  /* [3091] */
    (xdc_Char)0x4f,  /* [3092] */
    (xdc_Char)0x75,  /* [3093] */
    (xdc_Char)0x74,  /* [3094] */
    (xdc_Char)0x4f,  /* [3095] */
    (xdc_Char)0x66,  /* [3096] */
    (xdc_Char)0x42,  /* [3097] */
    (xdc_Char)0x6f,  /* [3098] */
    (xdc_Char)0x75,  /* [3099] */
    (xdc_Char)0x6e,  /* [3100] */
    (xdc_Char)0x64,  /* [3101] */
    (xdc_Char)0x73,  /* [3102] */
    (xdc_Char)0x3a,  /* [3103] */
    (xdc_Char)0x20,  /* [3104] */
    (xdc_Char)0x54,  /* [3105] */
    (xdc_Char)0x61,  /* [3106] */
    (xdc_Char)0x73,  /* [3107] */
    (xdc_Char)0x6b,  /* [3108] */
    (xdc_Char)0x20,  /* [3109] */
    (xdc_Char)0x30,  /* [3110] */
    (xdc_Char)0x78,  /* [3111] */
    (xdc_Char)0x25,  /* [3112] */
    (xdc_Char)0x78,  /* [3113] */
    (xdc_Char)0x20,  /* [3114] */
    (xdc_Char)0x73,  /* [3115] */
    (xdc_Char)0x74,  /* [3116] */
    (xdc_Char)0x61,  /* [3117] */
    (xdc_Char)0x63,  /* [3118] */
    (xdc_Char)0x6b,  /* [3119] */
    (xdc_Char)0x20,  /* [3120] */
    (xdc_Char)0x65,  /* [3121] */
    (xdc_Char)0x72,  /* [3122] */
    (xdc_Char)0x72,  /* [3123] */
    (xdc_Char)0x6f,  /* [3124] */
    (xdc_Char)0x72,  /* [3125] */
    (xdc_Char)0x2c,  /* [3126] */
    (xdc_Char)0x20,  /* [3127] */
    (xdc_Char)0x53,  /* [3128] */
    (xdc_Char)0x50,  /* [3129] */
    (xdc_Char)0x20,  /* [3130] */
    (xdc_Char)0x3d,  /* [3131] */
    (xdc_Char)0x20,  /* [3132] */
    (xdc_Char)0x30,  /* [3133] */
    (xdc_Char)0x78,  /* [3134] */
    (xdc_Char)0x25,  /* [3135] */
    (xdc_Char)0x78,  /* [3136] */
    (xdc_Char)0x2e,  /* [3137] */
    (xdc_Char)0x0,  /* [3138] */
    (xdc_Char)0x45,  /* [3139] */
    (xdc_Char)0x5f,  /* [3140] */
    (xdc_Char)0x69,  /* [3141] */
    (xdc_Char)0x6e,  /* [3142] */
    (xdc_Char)0x76,  /* [3143] */
    (xdc_Char)0x61,  /* [3144] */
    (xdc_Char)0x6c,  /* [3145] */
    (xdc_Char)0x69,  /* [3146] */
    (xdc_Char)0x64,  /* [3147] */
    (xdc_Char)0x54,  /* [3148] */
    (xdc_Char)0x69,  /* [3149] */
    (xdc_Char)0x6d,  /* [3150] */
    (xdc_Char)0x65,  /* [3151] */
    (xdc_Char)0x72,  /* [3152] */
    (xdc_Char)0x3a,  /* [3153] */
    (xdc_Char)0x20,  /* [3154] */
    (xdc_Char)0x49,  /* [3155] */
    (xdc_Char)0x6e,  /* [3156] */
    (xdc_Char)0x76,  /* [3157] */
    (xdc_Char)0x61,  /* [3158] */
    (xdc_Char)0x6c,  /* [3159] */
    (xdc_Char)0x69,  /* [3160] */
    (xdc_Char)0x64,  /* [3161] */
    (xdc_Char)0x20,  /* [3162] */
    (xdc_Char)0x54,  /* [3163] */
    (xdc_Char)0x69,  /* [3164] */
    (xdc_Char)0x6d,  /* [3165] */
    (xdc_Char)0x65,  /* [3166] */
    (xdc_Char)0x72,  /* [3167] */
    (xdc_Char)0x20,  /* [3168] */
    (xdc_Char)0x49,  /* [3169] */
    (xdc_Char)0x64,  /* [3170] */
    (xdc_Char)0x20,  /* [3171] */
    (xdc_Char)0x25,  /* [3172] */
    (xdc_Char)0x64,  /* [3173] */
    (xdc_Char)0x0,  /* [3174] */
    (xdc_Char)0x45,  /* [3175] */
    (xdc_Char)0x5f,  /* [3176] */
    (xdc_Char)0x6e,  /* [3177] */
    (xdc_Char)0x6f,  /* [3178] */
    (xdc_Char)0x74,  /* [3179] */
    (xdc_Char)0x41,  /* [3180] */
    (xdc_Char)0x76,  /* [3181] */
    (xdc_Char)0x61,  /* [3182] */
    (xdc_Char)0x69,  /* [3183] */
    (xdc_Char)0x6c,  /* [3184] */
    (xdc_Char)0x61,  /* [3185] */
    (xdc_Char)0x62,  /* [3186] */
    (xdc_Char)0x6c,  /* [3187] */
    (xdc_Char)0x65,  /* [3188] */
    (xdc_Char)0x3a,  /* [3189] */
    (xdc_Char)0x20,  /* [3190] */
    (xdc_Char)0x54,  /* [3191] */
    (xdc_Char)0x69,  /* [3192] */
    (xdc_Char)0x6d,  /* [3193] */
    (xdc_Char)0x65,  /* [3194] */
    (xdc_Char)0x72,  /* [3195] */
    (xdc_Char)0x20,  /* [3196] */
    (xdc_Char)0x6e,  /* [3197] */
    (xdc_Char)0x6f,  /* [3198] */
    (xdc_Char)0x74,  /* [3199] */
    (xdc_Char)0x20,  /* [3200] */
    (xdc_Char)0x61,  /* [3201] */
    (xdc_Char)0x76,  /* [3202] */
    (xdc_Char)0x61,  /* [3203] */
    (xdc_Char)0x69,  /* [3204] */
    (xdc_Char)0x6c,  /* [3205] */
    (xdc_Char)0x61,  /* [3206] */
    (xdc_Char)0x62,  /* [3207] */
    (xdc_Char)0x6c,  /* [3208] */
    (xdc_Char)0x65,  /* [3209] */
    (xdc_Char)0x20,  /* [3210] */
    (xdc_Char)0x25,  /* [3211] */
    (xdc_Char)0x64,  /* [3212] */
    (xdc_Char)0x0,  /* [3213] */
    (xdc_Char)0x45,  /* [3214] */
    (xdc_Char)0x5f,  /* [3215] */
    (xdc_Char)0x63,  /* [3216] */
    (xdc_Char)0x61,  /* [3217] */
    (xdc_Char)0x6e,  /* [3218] */
    (xdc_Char)0x6e,  /* [3219] */
    (xdc_Char)0x6f,  /* [3220] */
    (xdc_Char)0x74,  /* [3221] */
    (xdc_Char)0x53,  /* [3222] */
    (xdc_Char)0x75,  /* [3223] */
    (xdc_Char)0x70,  /* [3224] */
    (xdc_Char)0x70,  /* [3225] */
    (xdc_Char)0x6f,  /* [3226] */
    (xdc_Char)0x72,  /* [3227] */
    (xdc_Char)0x74,  /* [3228] */
    (xdc_Char)0x3a,  /* [3229] */
    (xdc_Char)0x20,  /* [3230] */
    (xdc_Char)0x54,  /* [3231] */
    (xdc_Char)0x69,  /* [3232] */
    (xdc_Char)0x6d,  /* [3233] */
    (xdc_Char)0x65,  /* [3234] */
    (xdc_Char)0x72,  /* [3235] */
    (xdc_Char)0x20,  /* [3236] */
    (xdc_Char)0x63,  /* [3237] */
    (xdc_Char)0x61,  /* [3238] */
    (xdc_Char)0x6e,  /* [3239] */
    (xdc_Char)0x6e,  /* [3240] */
    (xdc_Char)0x6f,  /* [3241] */
    (xdc_Char)0x74,  /* [3242] */
    (xdc_Char)0x20,  /* [3243] */
    (xdc_Char)0x73,  /* [3244] */
    (xdc_Char)0x75,  /* [3245] */
    (xdc_Char)0x70,  /* [3246] */
    (xdc_Char)0x70,  /* [3247] */
    (xdc_Char)0x6f,  /* [3248] */
    (xdc_Char)0x72,  /* [3249] */
    (xdc_Char)0x74,  /* [3250] */
    (xdc_Char)0x20,  /* [3251] */
    (xdc_Char)0x72,  /* [3252] */
    (xdc_Char)0x65,  /* [3253] */
    (xdc_Char)0x71,  /* [3254] */
    (xdc_Char)0x75,  /* [3255] */
    (xdc_Char)0x65,  /* [3256] */
    (xdc_Char)0x73,  /* [3257] */
    (xdc_Char)0x74,  /* [3258] */
    (xdc_Char)0x65,  /* [3259] */
    (xdc_Char)0x64,  /* [3260] */
    (xdc_Char)0x20,  /* [3261] */
    (xdc_Char)0x70,  /* [3262] */
    (xdc_Char)0x65,  /* [3263] */
    (xdc_Char)0x72,  /* [3264] */
    (xdc_Char)0x69,  /* [3265] */
    (xdc_Char)0x6f,  /* [3266] */
    (xdc_Char)0x64,  /* [3267] */
    (xdc_Char)0x20,  /* [3268] */
    (xdc_Char)0x25,  /* [3269] */
    (xdc_Char)0x64,  /* [3270] */
    (xdc_Char)0x0,  /* [3271] */
    (xdc_Char)0x72,  /* [3272] */
    (xdc_Char)0x65,  /* [3273] */
    (xdc_Char)0x71,  /* [3274] */
    (xdc_Char)0x75,  /* [3275] */
    (xdc_Char)0x65,  /* [3276] */
    (xdc_Char)0x73,  /* [3277] */
    (xdc_Char)0x74,  /* [3278] */
    (xdc_Char)0x65,  /* [3279] */
    (xdc_Char)0x64,  /* [3280] */
    (xdc_Char)0x20,  /* [3281] */
    (xdc_Char)0x73,  /* [3282] */
    (xdc_Char)0x69,  /* [3283] */
    (xdc_Char)0x7a,  /* [3284] */
    (xdc_Char)0x65,  /* [3285] */
    (xdc_Char)0x20,  /* [3286] */
    (xdc_Char)0x69,  /* [3287] */
    (xdc_Char)0x73,  /* [3288] */
    (xdc_Char)0x20,  /* [3289] */
    (xdc_Char)0x74,  /* [3290] */
    (xdc_Char)0x6f,  /* [3291] */
    (xdc_Char)0x6f,  /* [3292] */
    (xdc_Char)0x20,  /* [3293] */
    (xdc_Char)0x62,  /* [3294] */
    (xdc_Char)0x69,  /* [3295] */
    (xdc_Char)0x67,  /* [3296] */
    (xdc_Char)0x3a,  /* [3297] */
    (xdc_Char)0x20,  /* [3298] */
    (xdc_Char)0x68,  /* [3299] */
    (xdc_Char)0x61,  /* [3300] */
    (xdc_Char)0x6e,  /* [3301] */
    (xdc_Char)0x64,  /* [3302] */
    (xdc_Char)0x6c,  /* [3303] */
    (xdc_Char)0x65,  /* [3304] */
    (xdc_Char)0x3d,  /* [3305] */
    (xdc_Char)0x30,  /* [3306] */
    (xdc_Char)0x78,  /* [3307] */
    (xdc_Char)0x25,  /* [3308] */
    (xdc_Char)0x78,  /* [3309] */
    (xdc_Char)0x2c,  /* [3310] */
    (xdc_Char)0x20,  /* [3311] */
    (xdc_Char)0x73,  /* [3312] */
    (xdc_Char)0x69,  /* [3313] */
    (xdc_Char)0x7a,  /* [3314] */
    (xdc_Char)0x65,  /* [3315] */
    (xdc_Char)0x3d,  /* [3316] */
    (xdc_Char)0x25,  /* [3317] */
    (xdc_Char)0x75,  /* [3318] */
    (xdc_Char)0x0,  /* [3319] */
    (xdc_Char)0x6f,  /* [3320] */
    (xdc_Char)0x75,  /* [3321] */
    (xdc_Char)0x74,  /* [3322] */
    (xdc_Char)0x20,  /* [3323] */
    (xdc_Char)0x6f,  /* [3324] */
    (xdc_Char)0x66,  /* [3325] */
    (xdc_Char)0x20,  /* [3326] */
    (xdc_Char)0x6d,  /* [3327] */
    (xdc_Char)0x65,  /* [3328] */
    (xdc_Char)0x6d,  /* [3329] */
    (xdc_Char)0x6f,  /* [3330] */
    (xdc_Char)0x72,  /* [3331] */
    (xdc_Char)0x79,  /* [3332] */
    (xdc_Char)0x3a,  /* [3333] */
    (xdc_Char)0x20,  /* [3334] */
    (xdc_Char)0x68,  /* [3335] */
    (xdc_Char)0x61,  /* [3336] */
    (xdc_Char)0x6e,  /* [3337] */
    (xdc_Char)0x64,  /* [3338] */
    (xdc_Char)0x6c,  /* [3339] */
    (xdc_Char)0x65,  /* [3340] */
    (xdc_Char)0x3d,  /* [3341] */
    (xdc_Char)0x30,  /* [3342] */
    (xdc_Char)0x78,  /* [3343] */
    (xdc_Char)0x25,  /* [3344] */
    (xdc_Char)0x78,  /* [3345] */
    (xdc_Char)0x2c,  /* [3346] */
    (xdc_Char)0x20,  /* [3347] */
    (xdc_Char)0x73,  /* [3348] */
    (xdc_Char)0x69,  /* [3349] */
    (xdc_Char)0x7a,  /* [3350] */
    (xdc_Char)0x65,  /* [3351] */
    (xdc_Char)0x3d,  /* [3352] */
    (xdc_Char)0x25,  /* [3353] */
    (xdc_Char)0x75,  /* [3354] */
    (xdc_Char)0x0,  /* [3355] */
    (xdc_Char)0x45,  /* [3356] */
    (xdc_Char)0x5f,  /* [3357] */
    (xdc_Char)0x6d,  /* [3358] */
    (xdc_Char)0x61,  /* [3359] */
    (xdc_Char)0x78,  /* [3360] */
    (xdc_Char)0x52,  /* [3361] */
    (xdc_Char)0x65,  /* [3362] */
    (xdc_Char)0x61,  /* [3363] */
    (xdc_Char)0x63,  /* [3364] */
    (xdc_Char)0x68,  /* [3365] */
    (xdc_Char)0x65,  /* [3366] */
    (xdc_Char)0x64,  /* [3367] */
    (xdc_Char)0x3a,  /* [3368] */
    (xdc_Char)0x20,  /* [3369] */
    (xdc_Char)0x41,  /* [3370] */
    (xdc_Char)0x6c,  /* [3371] */
    (xdc_Char)0x6c,  /* [3372] */
    (xdc_Char)0x20,  /* [3373] */
    (xdc_Char)0x65,  /* [3374] */
    (xdc_Char)0x6e,  /* [3375] */
    (xdc_Char)0x74,  /* [3376] */
    (xdc_Char)0x72,  /* [3377] */
    (xdc_Char)0x69,  /* [3378] */
    (xdc_Char)0x65,  /* [3379] */
    (xdc_Char)0x73,  /* [3380] */
    (xdc_Char)0x20,  /* [3381] */
    (xdc_Char)0x69,  /* [3382] */
    (xdc_Char)0x6e,  /* [3383] */
    (xdc_Char)0x20,  /* [3384] */
    (xdc_Char)0x75,  /* [3385] */
    (xdc_Char)0x73,  /* [3386] */
    (xdc_Char)0x65,  /* [3387] */
    (xdc_Char)0x2e,  /* [3388] */
    (xdc_Char)0x20,  /* [3389] */
    (xdc_Char)0x4e,  /* [3390] */
    (xdc_Char)0x61,  /* [3391] */
    (xdc_Char)0x6d,  /* [3392] */
    (xdc_Char)0x65,  /* [3393] */
    (xdc_Char)0x53,  /* [3394] */
    (xdc_Char)0x65,  /* [3395] */
    (xdc_Char)0x72,  /* [3396] */
    (xdc_Char)0x76,  /* [3397] */
    (xdc_Char)0x65,  /* [3398] */
    (xdc_Char)0x72,  /* [3399] */
    (xdc_Char)0x2e,  /* [3400] */
    (xdc_Char)0x6d,  /* [3401] */
    (xdc_Char)0x61,  /* [3402] */
    (xdc_Char)0x78,  /* [3403] */
    (xdc_Char)0x52,  /* [3404] */
    (xdc_Char)0x75,  /* [3405] */
    (xdc_Char)0x6e,  /* [3406] */
    (xdc_Char)0x74,  /* [3407] */
    (xdc_Char)0x69,  /* [3408] */
    (xdc_Char)0x6d,  /* [3409] */
    (xdc_Char)0x65,  /* [3410] */
    (xdc_Char)0x45,  /* [3411] */
    (xdc_Char)0x6e,  /* [3412] */
    (xdc_Char)0x74,  /* [3413] */
    (xdc_Char)0x72,  /* [3414] */
    (xdc_Char)0x69,  /* [3415] */
    (xdc_Char)0x65,  /* [3416] */
    (xdc_Char)0x73,  /* [3417] */
    (xdc_Char)0x20,  /* [3418] */
    (xdc_Char)0x69,  /* [3419] */
    (xdc_Char)0x73,  /* [3420] */
    (xdc_Char)0x20,  /* [3421] */
    (xdc_Char)0x25,  /* [3422] */
    (xdc_Char)0x64,  /* [3423] */
    (xdc_Char)0x0,  /* [3424] */
    (xdc_Char)0x45,  /* [3425] */
    (xdc_Char)0x5f,  /* [3426] */
    (xdc_Char)0x65,  /* [3427] */
    (xdc_Char)0x6e,  /* [3428] */
    (xdc_Char)0x74,  /* [3429] */
    (xdc_Char)0x72,  /* [3430] */
    (xdc_Char)0x79,  /* [3431] */
    (xdc_Char)0x45,  /* [3432] */
    (xdc_Char)0x78,  /* [3433] */
    (xdc_Char)0x69,  /* [3434] */
    (xdc_Char)0x73,  /* [3435] */
    (xdc_Char)0x74,  /* [3436] */
    (xdc_Char)0x73,  /* [3437] */
    (xdc_Char)0x3a,  /* [3438] */
    (xdc_Char)0x20,  /* [3439] */
    (xdc_Char)0x25,  /* [3440] */
    (xdc_Char)0x73,  /* [3441] */
    (xdc_Char)0x20,  /* [3442] */
    (xdc_Char)0x6e,  /* [3443] */
    (xdc_Char)0x61,  /* [3444] */
    (xdc_Char)0x6d,  /* [3445] */
    (xdc_Char)0x65,  /* [3446] */
    (xdc_Char)0x20,  /* [3447] */
    (xdc_Char)0x61,  /* [3448] */
    (xdc_Char)0x6c,  /* [3449] */
    (xdc_Char)0x72,  /* [3450] */
    (xdc_Char)0x65,  /* [3451] */
    (xdc_Char)0x61,  /* [3452] */
    (xdc_Char)0x64,  /* [3453] */
    (xdc_Char)0x79,  /* [3454] */
    (xdc_Char)0x20,  /* [3455] */
    (xdc_Char)0x69,  /* [3456] */
    (xdc_Char)0x6e,  /* [3457] */
    (xdc_Char)0x20,  /* [3458] */
    (xdc_Char)0x74,  /* [3459] */
    (xdc_Char)0x61,  /* [3460] */
    (xdc_Char)0x62,  /* [3461] */
    (xdc_Char)0x6c,  /* [3462] */
    (xdc_Char)0x65,  /* [3463] */
    (xdc_Char)0x20,  /* [3464] */
    (xdc_Char)0x0,  /* [3465] */
    (xdc_Char)0x47,  /* [3466] */
    (xdc_Char)0x65,  /* [3467] */
    (xdc_Char)0x6e,  /* [3468] */
    (xdc_Char)0x65,  /* [3469] */
    (xdc_Char)0x72,  /* [3470] */
    (xdc_Char)0x69,  /* [3471] */
    (xdc_Char)0x63,  /* [3472] */
    (xdc_Char)0x20,  /* [3473] */
    (xdc_Char)0x46,  /* [3474] */
    (xdc_Char)0x61,  /* [3475] */
    (xdc_Char)0x69,  /* [3476] */
    (xdc_Char)0x6c,  /* [3477] */
    (xdc_Char)0x75,  /* [3478] */
    (xdc_Char)0x72,  /* [3479] */
    (xdc_Char)0x65,  /* [3480] */
    (xdc_Char)0x0,  /* [3481] */
    (xdc_Char)0x49,  /* [3482] */
    (xdc_Char)0x6c,  /* [3483] */
    (xdc_Char)0x6c,  /* [3484] */
    (xdc_Char)0x65,  /* [3485] */
    (xdc_Char)0x67,  /* [3486] */
    (xdc_Char)0x61,  /* [3487] */
    (xdc_Char)0x6c,  /* [3488] */
    (xdc_Char)0x20,  /* [3489] */
    (xdc_Char)0x4d,  /* [3490] */
    (xdc_Char)0x6f,  /* [3491] */
    (xdc_Char)0x64,  /* [3492] */
    (xdc_Char)0x65,  /* [3493] */
    (xdc_Char)0x0,  /* [3494] */
    (xdc_Char)0x4e,  /* [3495] */
    (xdc_Char)0x6f,  /* [3496] */
    (xdc_Char)0x74,  /* [3497] */
    (xdc_Char)0x20,  /* [3498] */
    (xdc_Char)0x69,  /* [3499] */
    (xdc_Char)0x6d,  /* [3500] */
    (xdc_Char)0x70,  /* [3501] */
    (xdc_Char)0x6c,  /* [3502] */
    (xdc_Char)0x65,  /* [3503] */
    (xdc_Char)0x6d,  /* [3504] */
    (xdc_Char)0x65,  /* [3505] */
    (xdc_Char)0x6e,  /* [3506] */
    (xdc_Char)0x74,  /* [3507] */
    (xdc_Char)0x65,  /* [3508] */
    (xdc_Char)0x64,  /* [3509] */
    (xdc_Char)0x0,  /* [3510] */
    (xdc_Char)0x42,  /* [3511] */
    (xdc_Char)0x61,  /* [3512] */
    (xdc_Char)0x64,  /* [3513] */
    (xdc_Char)0x20,  /* [3514] */
    (xdc_Char)0x61,  /* [3515] */
    (xdc_Char)0x72,  /* [3516] */
    (xdc_Char)0x67,  /* [3517] */
    (xdc_Char)0x73,  /* [3518] */
    (xdc_Char)0x0,  /* [3519] */
    (xdc_Char)0x43,  /* [3520] */
    (xdc_Char)0x68,  /* [3521] */
    (xdc_Char)0x61,  /* [3522] */
    (xdc_Char)0x6e,  /* [3523] */
    (xdc_Char)0x6e,  /* [3524] */
    (xdc_Char)0x65,  /* [3525] */
    (xdc_Char)0x6c,  /* [3526] */
    (xdc_Char)0x20,  /* [3527] */
    (xdc_Char)0x69,  /* [3528] */
    (xdc_Char)0x6e,  /* [3529] */
    (xdc_Char)0x20,  /* [3530] */
    (xdc_Char)0x75,  /* [3531] */
    (xdc_Char)0x73,  /* [3532] */
    (xdc_Char)0x65,  /* [3533] */
    (xdc_Char)0x0,  /* [3534] */
    (xdc_Char)0x49,  /* [3535] */
    (xdc_Char)0x6e,  /* [3536] */
    (xdc_Char)0x76,  /* [3537] */
    (xdc_Char)0x61,  /* [3538] */
    (xdc_Char)0x6c,  /* [3539] */
    (xdc_Char)0x69,  /* [3540] */
    (xdc_Char)0x64,  /* [3541] */
    (xdc_Char)0x20,  /* [3542] */
    (xdc_Char)0x64,  /* [3543] */
    (xdc_Char)0x65,  /* [3544] */
    (xdc_Char)0x76,  /* [3545] */
    (xdc_Char)0x4e,  /* [3546] */
    (xdc_Char)0x75,  /* [3547] */
    (xdc_Char)0x6d,  /* [3548] */
    (xdc_Char)0x0,  /* [3549] */
    (xdc_Char)0x41,  /* [3550] */
    (xdc_Char)0x62,  /* [3551] */
    (xdc_Char)0x6f,  /* [3552] */
    (xdc_Char)0x72,  /* [3553] */
    (xdc_Char)0x74,  /* [3554] */
    (xdc_Char)0x65,  /* [3555] */
    (xdc_Char)0x64,  /* [3556] */
    (xdc_Char)0x20,  /* [3557] */
    (xdc_Char)0x50,  /* [3558] */
    (xdc_Char)0x61,  /* [3559] */
    (xdc_Char)0x63,  /* [3560] */
    (xdc_Char)0x6b,  /* [3561] */
    (xdc_Char)0x65,  /* [3562] */
    (xdc_Char)0x74,  /* [3563] */
    (xdc_Char)0x0,  /* [3564] */
    (xdc_Char)0x45,  /* [3565] */
    (xdc_Char)0x5f,  /* [3566] */
    (xdc_Char)0x6e,  /* [3567] */
    (xdc_Char)0x6f,  /* [3568] */
    (xdc_Char)0x74,  /* [3569] */
    (xdc_Char)0x46,  /* [3570] */
    (xdc_Char)0x6f,  /* [3571] */
    (xdc_Char)0x75,  /* [3572] */
    (xdc_Char)0x6e,  /* [3573] */
    (xdc_Char)0x64,  /* [3574] */
    (xdc_Char)0x3a,  /* [3575] */
    (xdc_Char)0x20,  /* [3576] */
    (xdc_Char)0x25,  /* [3577] */
    (xdc_Char)0x73,  /* [3578] */
    (xdc_Char)0x20,  /* [3579] */
    (xdc_Char)0x6e,  /* [3580] */
    (xdc_Char)0x61,  /* [3581] */
    (xdc_Char)0x6d,  /* [3582] */
    (xdc_Char)0x65,  /* [3583] */
    (xdc_Char)0x20,  /* [3584] */
    (xdc_Char)0x6e,  /* [3585] */
    (xdc_Char)0x6f,  /* [3586] */
    (xdc_Char)0x74,  /* [3587] */
    (xdc_Char)0x20,  /* [3588] */
    (xdc_Char)0x66,  /* [3589] */
    (xdc_Char)0x6f,  /* [3590] */
    (xdc_Char)0x75,  /* [3591] */
    (xdc_Char)0x6e,  /* [3592] */
    (xdc_Char)0x64,  /* [3593] */
    (xdc_Char)0x0,  /* [3594] */
    (xdc_Char)0x45,  /* [3595] */
    (xdc_Char)0x5f,  /* [3596] */
    (xdc_Char)0x6e,  /* [3597] */
    (xdc_Char)0x6f,  /* [3598] */
    (xdc_Char)0x50,  /* [3599] */
    (xdc_Char)0x61,  /* [3600] */
    (xdc_Char)0x63,  /* [3601] */
    (xdc_Char)0x6b,  /* [3602] */
    (xdc_Char)0x65,  /* [3603] */
    (xdc_Char)0x74,  /* [3604] */
    (xdc_Char)0x73,  /* [3605] */
    (xdc_Char)0x3a,  /* [3606] */
    (xdc_Char)0x20,  /* [3607] */
    (xdc_Char)0x4e,  /* [3608] */
    (xdc_Char)0x6f,  /* [3609] */
    (xdc_Char)0x20,  /* [3610] */
    (xdc_Char)0x70,  /* [3611] */
    (xdc_Char)0x61,  /* [3612] */
    (xdc_Char)0x63,  /* [3613] */
    (xdc_Char)0x6b,  /* [3614] */
    (xdc_Char)0x65,  /* [3615] */
    (xdc_Char)0x74,  /* [3616] */
    (xdc_Char)0x73,  /* [3617] */
    (xdc_Char)0x20,  /* [3618] */
    (xdc_Char)0x61,  /* [3619] */
    (xdc_Char)0x76,  /* [3620] */
    (xdc_Char)0x61,  /* [3621] */
    (xdc_Char)0x69,  /* [3622] */
    (xdc_Char)0x6c,  /* [3623] */
    (xdc_Char)0x61,  /* [3624] */
    (xdc_Char)0x62,  /* [3625] */
    (xdc_Char)0x6c,  /* [3626] */
    (xdc_Char)0x65,  /* [3627] */
    (xdc_Char)0x2e,  /* [3628] */
    (xdc_Char)0x20,  /* [3629] */
    (xdc_Char)0x6d,  /* [3630] */
    (xdc_Char)0x61,  /* [3631] */
    (xdc_Char)0x78,  /* [3632] */
    (xdc_Char)0x49,  /* [3633] */
    (xdc_Char)0x73,  /* [3634] */
    (xdc_Char)0x73,  /* [3635] */
    (xdc_Char)0x75,  /* [3636] */
    (xdc_Char)0x65,  /* [3637] */
    (xdc_Char)0x73,  /* [3638] */
    (xdc_Char)0x20,  /* [3639] */
    (xdc_Char)0x69,  /* [3640] */
    (xdc_Char)0x73,  /* [3641] */
    (xdc_Char)0x20,  /* [3642] */
    (xdc_Char)0x25,  /* [3643] */
    (xdc_Char)0x64,  /* [3644] */
    (xdc_Char)0x0,  /* [3645] */
    (xdc_Char)0x45,  /* [3646] */
    (xdc_Char)0x5f,  /* [3647] */
    (xdc_Char)0x6e,  /* [3648] */
    (xdc_Char)0x6f,  /* [3649] */
    (xdc_Char)0x42,  /* [3650] */
    (xdc_Char)0x75,  /* [3651] */
    (xdc_Char)0x66,  /* [3652] */
    (xdc_Char)0x66,  /* [3653] */
    (xdc_Char)0x65,  /* [3654] */
    (xdc_Char)0x72,  /* [3655] */
    (xdc_Char)0x73,  /* [3656] */
    (xdc_Char)0x49,  /* [3657] */
    (xdc_Char)0x73,  /* [3658] */
    (xdc_Char)0x73,  /* [3659] */
    (xdc_Char)0x75,  /* [3660] */
    (xdc_Char)0x65,  /* [3661] */
    (xdc_Char)0x64,  /* [3662] */
    (xdc_Char)0x3a,  /* [3663] */
    (xdc_Char)0x20,  /* [3664] */
    (xdc_Char)0x4e,  /* [3665] */
    (xdc_Char)0x6f,  /* [3666] */
    (xdc_Char)0x20,  /* [3667] */
    (xdc_Char)0x6f,  /* [3668] */
    (xdc_Char)0x75,  /* [3669] */
    (xdc_Char)0x74,  /* [3670] */
    (xdc_Char)0x73,  /* [3671] */
    (xdc_Char)0x74,  /* [3672] */
    (xdc_Char)0x61,  /* [3673] */
    (xdc_Char)0x6e,  /* [3674] */
    (xdc_Char)0x64,  /* [3675] */
    (xdc_Char)0x69,  /* [3676] */
    (xdc_Char)0x6e,  /* [3677] */
    (xdc_Char)0x67,  /* [3678] */
    (xdc_Char)0x20,  /* [3679] */
    (xdc_Char)0x62,  /* [3680] */
    (xdc_Char)0x75,  /* [3681] */
    (xdc_Char)0x66,  /* [3682] */
    (xdc_Char)0x66,  /* [3683] */
    (xdc_Char)0x65,  /* [3684] */
    (xdc_Char)0x72,  /* [3685] */
    (xdc_Char)0x73,  /* [3686] */
    (xdc_Char)0x0,  /* [3687] */
    (xdc_Char)0x45,  /* [3688] */
    (xdc_Char)0x5f,  /* [3689] */
    (xdc_Char)0x74,  /* [3690] */
    (xdc_Char)0x69,  /* [3691] */
    (xdc_Char)0x6d,  /* [3692] */
    (xdc_Char)0x65,  /* [3693] */
    (xdc_Char)0x6f,  /* [3694] */
    (xdc_Char)0x75,  /* [3695] */
    (xdc_Char)0x74,  /* [3696] */
    (xdc_Char)0x3a,  /* [3697] */
    (xdc_Char)0x20,  /* [3698] */
    (xdc_Char)0x54,  /* [3699] */
    (xdc_Char)0x69,  /* [3700] */
    (xdc_Char)0x6d,  /* [3701] */
    (xdc_Char)0x65,  /* [3702] */
    (xdc_Char)0x6f,  /* [3703] */
    (xdc_Char)0x75,  /* [3704] */
    (xdc_Char)0x74,  /* [3705] */
    (xdc_Char)0x0,  /* [3706] */
    (xdc_Char)0x45,  /* [3707] */
    (xdc_Char)0x5f,  /* [3708] */
    (xdc_Char)0x6e,  /* [3709] */
    (xdc_Char)0x75,  /* [3710] */
    (xdc_Char)0x6c,  /* [3711] */
    (xdc_Char)0x6c,  /* [3712] */
    (xdc_Char)0x50,  /* [3713] */
    (xdc_Char)0x61,  /* [3714] */
    (xdc_Char)0x72,  /* [3715] */
    (xdc_Char)0x61,  /* [3716] */
    (xdc_Char)0x6d,  /* [3717] */
    (xdc_Char)0x73,  /* [3718] */
    (xdc_Char)0x3a,  /* [3719] */
    (xdc_Char)0x20,  /* [3720] */
    (xdc_Char)0x63,  /* [3721] */
    (xdc_Char)0x68,  /* [3722] */
    (xdc_Char)0x61,  /* [3723] */
    (xdc_Char)0x6e,  /* [3724] */
    (xdc_Char)0x50,  /* [3725] */
    (xdc_Char)0x61,  /* [3726] */
    (xdc_Char)0x72,  /* [3727] */
    (xdc_Char)0x61,  /* [3728] */
    (xdc_Char)0x6d,  /* [3729] */
    (xdc_Char)0x73,  /* [3730] */
    (xdc_Char)0x20,  /* [3731] */
    (xdc_Char)0x69,  /* [3732] */
    (xdc_Char)0x73,  /* [3733] */
    (xdc_Char)0x20,  /* [3734] */
    (xdc_Char)0x6e,  /* [3735] */
    (xdc_Char)0x75,  /* [3736] */
    (xdc_Char)0x6c,  /* [3737] */
    (xdc_Char)0x6c,  /* [3738] */
    (xdc_Char)0x2e,  /* [3739] */
    (xdc_Char)0x0,  /* [3740] */
    (xdc_Char)0x45,  /* [3741] */
    (xdc_Char)0x5f,  /* [3742] */
    (xdc_Char)0x61,  /* [3743] */
    (xdc_Char)0x6c,  /* [3744] */
    (xdc_Char)0x72,  /* [3745] */
    (xdc_Char)0x65,  /* [3746] */
    (xdc_Char)0x61,  /* [3747] */
    (xdc_Char)0x64,  /* [3748] */
    (xdc_Char)0x79,  /* [3749] */
    (xdc_Char)0x44,  /* [3750] */
    (xdc_Char)0x65,  /* [3751] */
    (xdc_Char)0x66,  /* [3752] */
    (xdc_Char)0x69,  /* [3753] */
    (xdc_Char)0x6e,  /* [3754] */
    (xdc_Char)0x65,  /* [3755] */
    (xdc_Char)0x64,  /* [3756] */
    (xdc_Char)0x3a,  /* [3757] */
    (xdc_Char)0x20,  /* [3758] */
    (xdc_Char)0x48,  /* [3759] */
    (xdc_Char)0x77,  /* [3760] */
    (xdc_Char)0x69,  /* [3761] */
    (xdc_Char)0x20,  /* [3762] */
    (xdc_Char)0x61,  /* [3763] */
    (xdc_Char)0x6c,  /* [3764] */
    (xdc_Char)0x72,  /* [3765] */
    (xdc_Char)0x65,  /* [3766] */
    (xdc_Char)0x61,  /* [3767] */
    (xdc_Char)0x64,  /* [3768] */
    (xdc_Char)0x79,  /* [3769] */
    (xdc_Char)0x20,  /* [3770] */
    (xdc_Char)0x64,  /* [3771] */
    (xdc_Char)0x65,  /* [3772] */
    (xdc_Char)0x66,  /* [3773] */
    (xdc_Char)0x69,  /* [3774] */
    (xdc_Char)0x6e,  /* [3775] */
    (xdc_Char)0x65,  /* [3776] */
    (xdc_Char)0x64,  /* [3777] */
    (xdc_Char)0x3a,  /* [3778] */
    (xdc_Char)0x20,  /* [3779] */
    (xdc_Char)0x69,  /* [3780] */
    (xdc_Char)0x6e,  /* [3781] */
    (xdc_Char)0x74,  /* [3782] */
    (xdc_Char)0x72,  /* [3783] */
    (xdc_Char)0x23,  /* [3784] */
    (xdc_Char)0x20,  /* [3785] */
    (xdc_Char)0x25,  /* [3786] */
    (xdc_Char)0x64,  /* [3787] */
    (xdc_Char)0x0,  /* [3788] */
    (xdc_Char)0x45,  /* [3789] */
    (xdc_Char)0x5f,  /* [3790] */
    (xdc_Char)0x73,  /* [3791] */
    (xdc_Char)0x77,  /* [3792] */
    (xdc_Char)0x69,  /* [3793] */
    (xdc_Char)0x3a,  /* [3794] */
    (xdc_Char)0x20,  /* [3795] */
    (xdc_Char)0x70,  /* [3796] */
    (xdc_Char)0x63,  /* [3797] */
    (xdc_Char)0x20,  /* [3798] */
    (xdc_Char)0x3d,  /* [3799] */
    (xdc_Char)0x20,  /* [3800] */
    (xdc_Char)0x30,  /* [3801] */
    (xdc_Char)0x78,  /* [3802] */
    (xdc_Char)0x25,  /* [3803] */
    (xdc_Char)0x30,  /* [3804] */
    (xdc_Char)0x38,  /* [3805] */
    (xdc_Char)0x78,  /* [3806] */
    (xdc_Char)0x2c,  /* [3807] */
    (xdc_Char)0x20,  /* [3808] */
    (xdc_Char)0x6c,  /* [3809] */
    (xdc_Char)0x72,  /* [3810] */
    (xdc_Char)0x20,  /* [3811] */
    (xdc_Char)0x3d,  /* [3812] */
    (xdc_Char)0x20,  /* [3813] */
    (xdc_Char)0x30,  /* [3814] */
    (xdc_Char)0x78,  /* [3815] */
    (xdc_Char)0x25,  /* [3816] */
    (xdc_Char)0x30,  /* [3817] */
    (xdc_Char)0x38,  /* [3818] */
    (xdc_Char)0x78,  /* [3819] */
    (xdc_Char)0x2e,  /* [3820] */
    (xdc_Char)0x0,  /* [3821] */
    (xdc_Char)0x45,  /* [3822] */
    (xdc_Char)0x5f,  /* [3823] */
    (xdc_Char)0x70,  /* [3824] */
    (xdc_Char)0x72,  /* [3825] */
    (xdc_Char)0x65,  /* [3826] */
    (xdc_Char)0x66,  /* [3827] */
    (xdc_Char)0x65,  /* [3828] */
    (xdc_Char)0x74,  /* [3829] */
    (xdc_Char)0x63,  /* [3830] */
    (xdc_Char)0x68,  /* [3831] */
    (xdc_Char)0x41,  /* [3832] */
    (xdc_Char)0x62,  /* [3833] */
    (xdc_Char)0x6f,  /* [3834] */
    (xdc_Char)0x72,  /* [3835] */
    (xdc_Char)0x74,  /* [3836] */
    (xdc_Char)0x3a,  /* [3837] */
    (xdc_Char)0x20,  /* [3838] */
    (xdc_Char)0x70,  /* [3839] */
    (xdc_Char)0x63,  /* [3840] */
    (xdc_Char)0x20,  /* [3841] */
    (xdc_Char)0x3d,  /* [3842] */
    (xdc_Char)0x20,  /* [3843] */
    (xdc_Char)0x30,  /* [3844] */
    (xdc_Char)0x78,  /* [3845] */
    (xdc_Char)0x25,  /* [3846] */
    (xdc_Char)0x30,  /* [3847] */
    (xdc_Char)0x38,  /* [3848] */
    (xdc_Char)0x78,  /* [3849] */
    (xdc_Char)0x2c,  /* [3850] */
    (xdc_Char)0x20,  /* [3851] */
    (xdc_Char)0x6c,  /* [3852] */
    (xdc_Char)0x72,  /* [3853] */
    (xdc_Char)0x20,  /* [3854] */
    (xdc_Char)0x3d,  /* [3855] */
    (xdc_Char)0x20,  /* [3856] */
    (xdc_Char)0x30,  /* [3857] */
    (xdc_Char)0x78,  /* [3858] */
    (xdc_Char)0x25,  /* [3859] */
    (xdc_Char)0x30,  /* [3860] */
    (xdc_Char)0x38,  /* [3861] */
    (xdc_Char)0x78,  /* [3862] */
    (xdc_Char)0x2e,  /* [3863] */
    (xdc_Char)0x0,  /* [3864] */
    (xdc_Char)0x45,  /* [3865] */
    (xdc_Char)0x5f,  /* [3866] */
    (xdc_Char)0x64,  /* [3867] */
    (xdc_Char)0x61,  /* [3868] */
    (xdc_Char)0x74,  /* [3869] */
    (xdc_Char)0x61,  /* [3870] */
    (xdc_Char)0x41,  /* [3871] */
    (xdc_Char)0x62,  /* [3872] */
    (xdc_Char)0x6f,  /* [3873] */
    (xdc_Char)0x72,  /* [3874] */
    (xdc_Char)0x74,  /* [3875] */
    (xdc_Char)0x3a,  /* [3876] */
    (xdc_Char)0x20,  /* [3877] */
    (xdc_Char)0x70,  /* [3878] */
    (xdc_Char)0x63,  /* [3879] */
    (xdc_Char)0x20,  /* [3880] */
    (xdc_Char)0x3d,  /* [3881] */
    (xdc_Char)0x20,  /* [3882] */
    (xdc_Char)0x30,  /* [3883] */
    (xdc_Char)0x78,  /* [3884] */
    (xdc_Char)0x25,  /* [3885] */
    (xdc_Char)0x30,  /* [3886] */
    (xdc_Char)0x38,  /* [3887] */
    (xdc_Char)0x78,  /* [3888] */
    (xdc_Char)0x2c,  /* [3889] */
    (xdc_Char)0x20,  /* [3890] */
    (xdc_Char)0x6c,  /* [3891] */
    (xdc_Char)0x72,  /* [3892] */
    (xdc_Char)0x20,  /* [3893] */
    (xdc_Char)0x3d,  /* [3894] */
    (xdc_Char)0x20,  /* [3895] */
    (xdc_Char)0x30,  /* [3896] */
    (xdc_Char)0x78,  /* [3897] */
    (xdc_Char)0x25,  /* [3898] */
    (xdc_Char)0x30,  /* [3899] */
    (xdc_Char)0x38,  /* [3900] */
    (xdc_Char)0x78,  /* [3901] */
    (xdc_Char)0x2e,  /* [3902] */
    (xdc_Char)0x0,  /* [3903] */
    (xdc_Char)0x45,  /* [3904] */
    (xdc_Char)0x5f,  /* [3905] */
    (xdc_Char)0x75,  /* [3906] */
    (xdc_Char)0x6e,  /* [3907] */
    (xdc_Char)0x64,  /* [3908] */
    (xdc_Char)0x65,  /* [3909] */
    (xdc_Char)0x66,  /* [3910] */
    (xdc_Char)0x69,  /* [3911] */
    (xdc_Char)0x6e,  /* [3912] */
    (xdc_Char)0x65,  /* [3913] */
    (xdc_Char)0x64,  /* [3914] */
    (xdc_Char)0x49,  /* [3915] */
    (xdc_Char)0x6e,  /* [3916] */
    (xdc_Char)0x73,  /* [3917] */
    (xdc_Char)0x74,  /* [3918] */
    (xdc_Char)0x72,  /* [3919] */
    (xdc_Char)0x75,  /* [3920] */
    (xdc_Char)0x63,  /* [3921] */
    (xdc_Char)0x74,  /* [3922] */
    (xdc_Char)0x69,  /* [3923] */
    (xdc_Char)0x6f,  /* [3924] */
    (xdc_Char)0x6e,  /* [3925] */
    (xdc_Char)0x3a,  /* [3926] */
    (xdc_Char)0x20,  /* [3927] */
    (xdc_Char)0x70,  /* [3928] */
    (xdc_Char)0x63,  /* [3929] */
    (xdc_Char)0x20,  /* [3930] */
    (xdc_Char)0x3d,  /* [3931] */
    (xdc_Char)0x20,  /* [3932] */
    (xdc_Char)0x30,  /* [3933] */
    (xdc_Char)0x78,  /* [3934] */
    (xdc_Char)0x25,  /* [3935] */
    (xdc_Char)0x30,  /* [3936] */
    (xdc_Char)0x38,  /* [3937] */
    (xdc_Char)0x78,  /* [3938] */
    (xdc_Char)0x2c,  /* [3939] */
    (xdc_Char)0x20,  /* [3940] */
    (xdc_Char)0x6c,  /* [3941] */
    (xdc_Char)0x72,  /* [3942] */
    (xdc_Char)0x20,  /* [3943] */
    (xdc_Char)0x3d,  /* [3944] */
    (xdc_Char)0x20,  /* [3945] */
    (xdc_Char)0x30,  /* [3946] */
    (xdc_Char)0x78,  /* [3947] */
    (xdc_Char)0x25,  /* [3948] */
    (xdc_Char)0x30,  /* [3949] */
    (xdc_Char)0x38,  /* [3950] */
    (xdc_Char)0x78,  /* [3951] */
    (xdc_Char)0x2e,  /* [3952] */
    (xdc_Char)0x0,  /* [3953] */
    (xdc_Char)0x45,  /* [3954] */
    (xdc_Char)0x5f,  /* [3955] */
    (xdc_Char)0x70,  /* [3956] */
    (xdc_Char)0x72,  /* [3957] */
    (xdc_Char)0x69,  /* [3958] */
    (xdc_Char)0x6f,  /* [3959] */
    (xdc_Char)0x72,  /* [3960] */
    (xdc_Char)0x69,  /* [3961] */
    (xdc_Char)0x74,  /* [3962] */
    (xdc_Char)0x79,  /* [3963] */
    (xdc_Char)0x3a,  /* [3964] */
    (xdc_Char)0x20,  /* [3965] */
    (xdc_Char)0x54,  /* [3966] */
    (xdc_Char)0x68,  /* [3967] */
    (xdc_Char)0x72,  /* [3968] */
    (xdc_Char)0x65,  /* [3969] */
    (xdc_Char)0x61,  /* [3970] */
    (xdc_Char)0x64,  /* [3971] */
    (xdc_Char)0x20,  /* [3972] */
    (xdc_Char)0x70,  /* [3973] */
    (xdc_Char)0x72,  /* [3974] */
    (xdc_Char)0x69,  /* [3975] */
    (xdc_Char)0x6f,  /* [3976] */
    (xdc_Char)0x72,  /* [3977] */
    (xdc_Char)0x69,  /* [3978] */
    (xdc_Char)0x74,  /* [3979] */
    (xdc_Char)0x79,  /* [3980] */
    (xdc_Char)0x20,  /* [3981] */
    (xdc_Char)0x69,  /* [3982] */
    (xdc_Char)0x73,  /* [3983] */
    (xdc_Char)0x20,  /* [3984] */
    (xdc_Char)0x69,  /* [3985] */
    (xdc_Char)0x6e,  /* [3986] */
    (xdc_Char)0x76,  /* [3987] */
    (xdc_Char)0x61,  /* [3988] */
    (xdc_Char)0x6c,  /* [3989] */
    (xdc_Char)0x69,  /* [3990] */
    (xdc_Char)0x64,  /* [3991] */
    (xdc_Char)0x20,  /* [3992] */
    (xdc_Char)0x25,  /* [3993] */
    (xdc_Char)0x64,  /* [3994] */
    (xdc_Char)0x0,  /* [3995] */
    (xdc_Char)0x45,  /* [3996] */
    (xdc_Char)0x5f,  /* [3997] */
    (xdc_Char)0x6f,  /* [3998] */
    (xdc_Char)0x70,  /* [3999] */
    (xdc_Char)0x65,  /* [4000] */
    (xdc_Char)0x6e,  /* [4001] */
    (xdc_Char)0x46,  /* [4002] */
    (xdc_Char)0x61,  /* [4003] */
    (xdc_Char)0x69,  /* [4004] */
    (xdc_Char)0x6c,  /* [4005] */
    (xdc_Char)0x3a,  /* [4006] */
    (xdc_Char)0x20,  /* [4007] */
    (xdc_Char)0x44,  /* [4008] */
    (xdc_Char)0x72,  /* [4009] */
    (xdc_Char)0x69,  /* [4010] */
    (xdc_Char)0x76,  /* [4011] */
    (xdc_Char)0x65,  /* [4012] */
    (xdc_Char)0x72,  /* [4013] */
    (xdc_Char)0x20,  /* [4014] */
    (xdc_Char)0x66,  /* [4015] */
    (xdc_Char)0x61,  /* [4016] */
    (xdc_Char)0x69,  /* [4017] */
    (xdc_Char)0x6c,  /* [4018] */
    (xdc_Char)0x65,  /* [4019] */
    (xdc_Char)0x64,  /* [4020] */
    (xdc_Char)0x20,  /* [4021] */
    (xdc_Char)0x74,  /* [4022] */
    (xdc_Char)0x6f,  /* [4023] */
    (xdc_Char)0x20,  /* [4024] */
    (xdc_Char)0x6f,  /* [4025] */
    (xdc_Char)0x70,  /* [4026] */
    (xdc_Char)0x65,  /* [4027] */
    (xdc_Char)0x6e,  /* [4028] */
    (xdc_Char)0x20,  /* [4029] */
    (xdc_Char)0x63,  /* [4030] */
    (xdc_Char)0x68,  /* [4031] */
    (xdc_Char)0x61,  /* [4032] */
    (xdc_Char)0x6e,  /* [4033] */
    (xdc_Char)0x6e,  /* [4034] */
    (xdc_Char)0x65,  /* [4035] */
    (xdc_Char)0x6c,  /* [4036] */
    (xdc_Char)0x0,  /* [4037] */
    (xdc_Char)0x3c,  /* [4038] */
    (xdc_Char)0x2d,  /* [4039] */
    (xdc_Char)0x2d,  /* [4040] */
    (xdc_Char)0x20,  /* [4041] */
    (xdc_Char)0x63,  /* [4042] */
    (xdc_Char)0x6f,  /* [4043] */
    (xdc_Char)0x6e,  /* [4044] */
    (xdc_Char)0x73,  /* [4045] */
    (xdc_Char)0x74,  /* [4046] */
    (xdc_Char)0x72,  /* [4047] */
    (xdc_Char)0x75,  /* [4048] */
    (xdc_Char)0x63,  /* [4049] */
    (xdc_Char)0x74,  /* [4050] */
    (xdc_Char)0x3a,  /* [4051] */
    (xdc_Char)0x20,  /* [4052] */
    (xdc_Char)0x25,  /* [4053] */
    (xdc_Char)0x70,  /* [4054] */
    (xdc_Char)0x28,  /* [4055] */
    (xdc_Char)0x27,  /* [4056] */
    (xdc_Char)0x25,  /* [4057] */
    (xdc_Char)0x73,  /* [4058] */
    (xdc_Char)0x27,  /* [4059] */
    (xdc_Char)0x29,  /* [4060] */
    (xdc_Char)0x0,  /* [4061] */
    (xdc_Char)0x3c,  /* [4062] */
    (xdc_Char)0x2d,  /* [4063] */
    (xdc_Char)0x2d,  /* [4064] */
    (xdc_Char)0x20,  /* [4065] */
    (xdc_Char)0x63,  /* [4066] */
    (xdc_Char)0x72,  /* [4067] */
    (xdc_Char)0x65,  /* [4068] */
    (xdc_Char)0x61,  /* [4069] */
    (xdc_Char)0x74,  /* [4070] */
    (xdc_Char)0x65,  /* [4071] */
    (xdc_Char)0x3a,  /* [4072] */
    (xdc_Char)0x20,  /* [4073] */
    (xdc_Char)0x25,  /* [4074] */
    (xdc_Char)0x70,  /* [4075] */
    (xdc_Char)0x28,  /* [4076] */
    (xdc_Char)0x27,  /* [4077] */
    (xdc_Char)0x25,  /* [4078] */
    (xdc_Char)0x73,  /* [4079] */
    (xdc_Char)0x27,  /* [4080] */
    (xdc_Char)0x29,  /* [4081] */
    (xdc_Char)0x0,  /* [4082] */
    (xdc_Char)0x2d,  /* [4083] */
    (xdc_Char)0x2d,  /* [4084] */
    (xdc_Char)0x3e,  /* [4085] */
    (xdc_Char)0x20,  /* [4086] */
    (xdc_Char)0x64,  /* [4087] */
    (xdc_Char)0x65,  /* [4088] */
    (xdc_Char)0x73,  /* [4089] */
    (xdc_Char)0x74,  /* [4090] */
    (xdc_Char)0x72,  /* [4091] */
    (xdc_Char)0x75,  /* [4092] */
    (xdc_Char)0x63,  /* [4093] */
    (xdc_Char)0x74,  /* [4094] */
    (xdc_Char)0x3a,  /* [4095] */
    (xdc_Char)0x20,  /* [4096] */
    (xdc_Char)0x28,  /* [4097] */
    (xdc_Char)0x25,  /* [4098] */
    (xdc_Char)0x70,  /* [4099] */
    (xdc_Char)0x29,  /* [4100] */
    (xdc_Char)0x0,  /* [4101] */
    (xdc_Char)0x2d,  /* [4102] */
    (xdc_Char)0x2d,  /* [4103] */
    (xdc_Char)0x3e,  /* [4104] */
    (xdc_Char)0x20,  /* [4105] */
    (xdc_Char)0x64,  /* [4106] */
    (xdc_Char)0x65,  /* [4107] */
    (xdc_Char)0x6c,  /* [4108] */
    (xdc_Char)0x65,  /* [4109] */
    (xdc_Char)0x74,  /* [4110] */
    (xdc_Char)0x65,  /* [4111] */
    (xdc_Char)0x3a,  /* [4112] */
    (xdc_Char)0x20,  /* [4113] */
    (xdc_Char)0x28,  /* [4114] */
    (xdc_Char)0x25,  /* [4115] */
    (xdc_Char)0x70,  /* [4116] */
    (xdc_Char)0x29,  /* [4117] */
    (xdc_Char)0x0,  /* [4118] */
    (xdc_Char)0x45,  /* [4119] */
    (xdc_Char)0x52,  /* [4120] */
    (xdc_Char)0x52,  /* [4121] */
    (xdc_Char)0x4f,  /* [4122] */
    (xdc_Char)0x52,  /* [4123] */
    (xdc_Char)0x3a,  /* [4124] */
    (xdc_Char)0x20,  /* [4125] */
    (xdc_Char)0x25,  /* [4126] */
    (xdc_Char)0x24,  /* [4127] */
    (xdc_Char)0x46,  /* [4128] */
    (xdc_Char)0x25,  /* [4129] */
    (xdc_Char)0x24,  /* [4130] */
    (xdc_Char)0x53,  /* [4131] */
    (xdc_Char)0x0,  /* [4132] */
    (xdc_Char)0x57,  /* [4133] */
    (xdc_Char)0x41,  /* [4134] */
    (xdc_Char)0x52,  /* [4135] */
    (xdc_Char)0x4e,  /* [4136] */
    (xdc_Char)0x49,  /* [4137] */
    (xdc_Char)0x4e,  /* [4138] */
    (xdc_Char)0x47,  /* [4139] */
    (xdc_Char)0x3a,  /* [4140] */
    (xdc_Char)0x20,  /* [4141] */
    (xdc_Char)0x25,  /* [4142] */
    (xdc_Char)0x24,  /* [4143] */
    (xdc_Char)0x46,  /* [4144] */
    (xdc_Char)0x25,  /* [4145] */
    (xdc_Char)0x24,  /* [4146] */
    (xdc_Char)0x53,  /* [4147] */
    (xdc_Char)0x0,  /* [4148] */
    (xdc_Char)0x25,  /* [4149] */
    (xdc_Char)0x24,  /* [4150] */
    (xdc_Char)0x46,  /* [4151] */
    (xdc_Char)0x25,  /* [4152] */
    (xdc_Char)0x24,  /* [4153] */
    (xdc_Char)0x53,  /* [4154] */
    (xdc_Char)0x0,  /* [4155] */
    (xdc_Char)0x53,  /* [4156] */
    (xdc_Char)0x74,  /* [4157] */
    (xdc_Char)0x61,  /* [4158] */
    (xdc_Char)0x72,  /* [4159] */
    (xdc_Char)0x74,  /* [4160] */
    (xdc_Char)0x3a,  /* [4161] */
    (xdc_Char)0x20,  /* [4162] */
    (xdc_Char)0x25,  /* [4163] */
    (xdc_Char)0x24,  /* [4164] */
    (xdc_Char)0x53,  /* [4165] */
    (xdc_Char)0x0,  /* [4166] */
    (xdc_Char)0x53,  /* [4167] */
    (xdc_Char)0x74,  /* [4168] */
    (xdc_Char)0x6f,  /* [4169] */
    (xdc_Char)0x70,  /* [4170] */
    (xdc_Char)0x3a,  /* [4171] */
    (xdc_Char)0x20,  /* [4172] */
    (xdc_Char)0x25,  /* [4173] */
    (xdc_Char)0x24,  /* [4174] */
    (xdc_Char)0x53,  /* [4175] */
    (xdc_Char)0x0,  /* [4176] */
    (xdc_Char)0x53,  /* [4177] */
    (xdc_Char)0x74,  /* [4178] */
    (xdc_Char)0x61,  /* [4179] */
    (xdc_Char)0x72,  /* [4180] */
    (xdc_Char)0x74,  /* [4181] */
    (xdc_Char)0x49,  /* [4182] */
    (xdc_Char)0x6e,  /* [4183] */
    (xdc_Char)0x73,  /* [4184] */
    (xdc_Char)0x74,  /* [4185] */
    (xdc_Char)0x61,  /* [4186] */
    (xdc_Char)0x6e,  /* [4187] */
    (xdc_Char)0x63,  /* [4188] */
    (xdc_Char)0x65,  /* [4189] */
    (xdc_Char)0x3a,  /* [4190] */
    (xdc_Char)0x20,  /* [4191] */
    (xdc_Char)0x25,  /* [4192] */
    (xdc_Char)0x24,  /* [4193] */
    (xdc_Char)0x53,  /* [4194] */
    (xdc_Char)0x0,  /* [4195] */
    (xdc_Char)0x53,  /* [4196] */
    (xdc_Char)0x74,  /* [4197] */
    (xdc_Char)0x6f,  /* [4198] */
    (xdc_Char)0x70,  /* [4199] */
    (xdc_Char)0x49,  /* [4200] */
    (xdc_Char)0x6e,  /* [4201] */
    (xdc_Char)0x73,  /* [4202] */
    (xdc_Char)0x74,  /* [4203] */
    (xdc_Char)0x61,  /* [4204] */
    (xdc_Char)0x6e,  /* [4205] */
    (xdc_Char)0x63,  /* [4206] */
    (xdc_Char)0x65,  /* [4207] */
    (xdc_Char)0x3a,  /* [4208] */
    (xdc_Char)0x20,  /* [4209] */
    (xdc_Char)0x25,  /* [4210] */
    (xdc_Char)0x24,  /* [4211] */
    (xdc_Char)0x53,  /* [4212] */
    (xdc_Char)0x0,  /* [4213] */
    (xdc_Char)0x4c,  /* [4214] */
    (xdc_Char)0x57,  /* [4215] */
    (xdc_Char)0x5f,  /* [4216] */
    (xdc_Char)0x64,  /* [4217] */
    (xdc_Char)0x65,  /* [4218] */
    (xdc_Char)0x6c,  /* [4219] */
    (xdc_Char)0x61,  /* [4220] */
    (xdc_Char)0x79,  /* [4221] */
    (xdc_Char)0x65,  /* [4222] */
    (xdc_Char)0x64,  /* [4223] */
    (xdc_Char)0x3a,  /* [4224] */
    (xdc_Char)0x20,  /* [4225] */
    (xdc_Char)0x64,  /* [4226] */
    (xdc_Char)0x65,  /* [4227] */
    (xdc_Char)0x6c,  /* [4228] */
    (xdc_Char)0x61,  /* [4229] */
    (xdc_Char)0x79,  /* [4230] */
    (xdc_Char)0x3a,  /* [4231] */
    (xdc_Char)0x20,  /* [4232] */
    (xdc_Char)0x25,  /* [4233] */
    (xdc_Char)0x64,  /* [4234] */
    (xdc_Char)0x0,  /* [4235] */
    (xdc_Char)0x4c,  /* [4236] */
    (xdc_Char)0x4d,  /* [4237] */
    (xdc_Char)0x5f,  /* [4238] */
    (xdc_Char)0x74,  /* [4239] */
    (xdc_Char)0x69,  /* [4240] */
    (xdc_Char)0x63,  /* [4241] */
    (xdc_Char)0x6b,  /* [4242] */
    (xdc_Char)0x3a,  /* [4243] */
    (xdc_Char)0x20,  /* [4244] */
    (xdc_Char)0x74,  /* [4245] */
    (xdc_Char)0x69,  /* [4246] */
    (xdc_Char)0x63,  /* [4247] */
    (xdc_Char)0x6b,  /* [4248] */
    (xdc_Char)0x3a,  /* [4249] */
    (xdc_Char)0x20,  /* [4250] */
    (xdc_Char)0x25,  /* [4251] */
    (xdc_Char)0x64,  /* [4252] */
    (xdc_Char)0x0,  /* [4253] */
    (xdc_Char)0x4c,  /* [4254] */
    (xdc_Char)0x4d,  /* [4255] */
    (xdc_Char)0x5f,  /* [4256] */
    (xdc_Char)0x62,  /* [4257] */
    (xdc_Char)0x65,  /* [4258] */
    (xdc_Char)0x67,  /* [4259] */
    (xdc_Char)0x69,  /* [4260] */
    (xdc_Char)0x6e,  /* [4261] */
    (xdc_Char)0x3a,  /* [4262] */
    (xdc_Char)0x20,  /* [4263] */
    (xdc_Char)0x63,  /* [4264] */
    (xdc_Char)0x6c,  /* [4265] */
    (xdc_Char)0x6b,  /* [4266] */
    (xdc_Char)0x3a,  /* [4267] */
    (xdc_Char)0x20,  /* [4268] */
    (xdc_Char)0x30,  /* [4269] */
    (xdc_Char)0x78,  /* [4270] */
    (xdc_Char)0x25,  /* [4271] */
    (xdc_Char)0x78,  /* [4272] */
    (xdc_Char)0x2c,  /* [4273] */
    (xdc_Char)0x20,  /* [4274] */
    (xdc_Char)0x66,  /* [4275] */
    (xdc_Char)0x75,  /* [4276] */
    (xdc_Char)0x6e,  /* [4277] */
    (xdc_Char)0x63,  /* [4278] */
    (xdc_Char)0x3a,  /* [4279] */
    (xdc_Char)0x20,  /* [4280] */
    (xdc_Char)0x30,  /* [4281] */
    (xdc_Char)0x78,  /* [4282] */
    (xdc_Char)0x25,  /* [4283] */
    (xdc_Char)0x78,  /* [4284] */
    (xdc_Char)0x0,  /* [4285] */
    (xdc_Char)0x4c,  /* [4286] */
    (xdc_Char)0x4d,  /* [4287] */
    (xdc_Char)0x5f,  /* [4288] */
    (xdc_Char)0x70,  /* [4289] */
    (xdc_Char)0x6f,  /* [4290] */
    (xdc_Char)0x73,  /* [4291] */
    (xdc_Char)0x74,  /* [4292] */
    (xdc_Char)0x3a,  /* [4293] */
    (xdc_Char)0x20,  /* [4294] */
    (xdc_Char)0x73,  /* [4295] */
    (xdc_Char)0x65,  /* [4296] */
    (xdc_Char)0x6d,  /* [4297] */
    (xdc_Char)0x3a,  /* [4298] */
    (xdc_Char)0x20,  /* [4299] */
    (xdc_Char)0x30,  /* [4300] */
    (xdc_Char)0x78,  /* [4301] */
    (xdc_Char)0x25,  /* [4302] */
    (xdc_Char)0x78,  /* [4303] */
    (xdc_Char)0x2c,  /* [4304] */
    (xdc_Char)0x20,  /* [4305] */
    (xdc_Char)0x63,  /* [4306] */
    (xdc_Char)0x6f,  /* [4307] */
    (xdc_Char)0x75,  /* [4308] */
    (xdc_Char)0x6e,  /* [4309] */
    (xdc_Char)0x74,  /* [4310] */
    (xdc_Char)0x3a,  /* [4311] */
    (xdc_Char)0x20,  /* [4312] */
    (xdc_Char)0x25,  /* [4313] */
    (xdc_Char)0x64,  /* [4314] */
    (xdc_Char)0x0,  /* [4315] */
    (xdc_Char)0x4c,  /* [4316] */
    (xdc_Char)0x4d,  /* [4317] */
    (xdc_Char)0x5f,  /* [4318] */
    (xdc_Char)0x70,  /* [4319] */
    (xdc_Char)0x65,  /* [4320] */
    (xdc_Char)0x6e,  /* [4321] */
    (xdc_Char)0x64,  /* [4322] */
    (xdc_Char)0x3a,  /* [4323] */
    (xdc_Char)0x20,  /* [4324] */
    (xdc_Char)0x73,  /* [4325] */
    (xdc_Char)0x65,  /* [4326] */
    (xdc_Char)0x6d,  /* [4327] */
    (xdc_Char)0x3a,  /* [4328] */
    (xdc_Char)0x20,  /* [4329] */
    (xdc_Char)0x30,  /* [4330] */
    (xdc_Char)0x78,  /* [4331] */
    (xdc_Char)0x25,  /* [4332] */
    (xdc_Char)0x78,  /* [4333] */
    (xdc_Char)0x2c,  /* [4334] */
    (xdc_Char)0x20,  /* [4335] */
    (xdc_Char)0x63,  /* [4336] */
    (xdc_Char)0x6f,  /* [4337] */
    (xdc_Char)0x75,  /* [4338] */
    (xdc_Char)0x6e,  /* [4339] */
    (xdc_Char)0x74,  /* [4340] */
    (xdc_Char)0x3a,  /* [4341] */
    (xdc_Char)0x20,  /* [4342] */
    (xdc_Char)0x25,  /* [4343] */
    (xdc_Char)0x64,  /* [4344] */
    (xdc_Char)0x2c,  /* [4345] */
    (xdc_Char)0x20,  /* [4346] */
    (xdc_Char)0x74,  /* [4347] */
    (xdc_Char)0x69,  /* [4348] */
    (xdc_Char)0x6d,  /* [4349] */
    (xdc_Char)0x65,  /* [4350] */
    (xdc_Char)0x6f,  /* [4351] */
    (xdc_Char)0x75,  /* [4352] */
    (xdc_Char)0x74,  /* [4353] */
    (xdc_Char)0x3a,  /* [4354] */
    (xdc_Char)0x20,  /* [4355] */
    (xdc_Char)0x25,  /* [4356] */
    (xdc_Char)0x64,  /* [4357] */
    (xdc_Char)0x0,  /* [4358] */
    (xdc_Char)0x4c,  /* [4359] */
    (xdc_Char)0x4d,  /* [4360] */
    (xdc_Char)0x5f,  /* [4361] */
    (xdc_Char)0x62,  /* [4362] */
    (xdc_Char)0x65,  /* [4363] */
    (xdc_Char)0x67,  /* [4364] */
    (xdc_Char)0x69,  /* [4365] */
    (xdc_Char)0x6e,  /* [4366] */
    (xdc_Char)0x3a,  /* [4367] */
    (xdc_Char)0x20,  /* [4368] */
    (xdc_Char)0x73,  /* [4369] */
    (xdc_Char)0x77,  /* [4370] */
    (xdc_Char)0x69,  /* [4371] */
    (xdc_Char)0x3a,  /* [4372] */
    (xdc_Char)0x20,  /* [4373] */
    (xdc_Char)0x30,  /* [4374] */
    (xdc_Char)0x78,  /* [4375] */
    (xdc_Char)0x25,  /* [4376] */
    (xdc_Char)0x78,  /* [4377] */
    (xdc_Char)0x2c,  /* [4378] */
    (xdc_Char)0x20,  /* [4379] */
    (xdc_Char)0x66,  /* [4380] */
    (xdc_Char)0x75,  /* [4381] */
    (xdc_Char)0x6e,  /* [4382] */
    (xdc_Char)0x63,  /* [4383] */
    (xdc_Char)0x3a,  /* [4384] */
    (xdc_Char)0x20,  /* [4385] */
    (xdc_Char)0x30,  /* [4386] */
    (xdc_Char)0x78,  /* [4387] */
    (xdc_Char)0x25,  /* [4388] */
    (xdc_Char)0x78,  /* [4389] */
    (xdc_Char)0x2c,  /* [4390] */
    (xdc_Char)0x20,  /* [4391] */
    (xdc_Char)0x70,  /* [4392] */
    (xdc_Char)0x72,  /* [4393] */
    (xdc_Char)0x65,  /* [4394] */
    (xdc_Char)0x54,  /* [4395] */
    (xdc_Char)0x68,  /* [4396] */
    (xdc_Char)0x72,  /* [4397] */
    (xdc_Char)0x65,  /* [4398] */
    (xdc_Char)0x61,  /* [4399] */
    (xdc_Char)0x64,  /* [4400] */
    (xdc_Char)0x3a,  /* [4401] */
    (xdc_Char)0x20,  /* [4402] */
    (xdc_Char)0x25,  /* [4403] */
    (xdc_Char)0x64,  /* [4404] */
    (xdc_Char)0x0,  /* [4405] */
    (xdc_Char)0x4c,  /* [4406] */
    (xdc_Char)0x44,  /* [4407] */
    (xdc_Char)0x5f,  /* [4408] */
    (xdc_Char)0x65,  /* [4409] */
    (xdc_Char)0x6e,  /* [4410] */
    (xdc_Char)0x64,  /* [4411] */
    (xdc_Char)0x3a,  /* [4412] */
    (xdc_Char)0x20,  /* [4413] */
    (xdc_Char)0x73,  /* [4414] */
    (xdc_Char)0x77,  /* [4415] */
    (xdc_Char)0x69,  /* [4416] */
    (xdc_Char)0x3a,  /* [4417] */
    (xdc_Char)0x20,  /* [4418] */
    (xdc_Char)0x30,  /* [4419] */
    (xdc_Char)0x78,  /* [4420] */
    (xdc_Char)0x25,  /* [4421] */
    (xdc_Char)0x78,  /* [4422] */
    (xdc_Char)0x0,  /* [4423] */
    (xdc_Char)0x4c,  /* [4424] */
    (xdc_Char)0x4d,  /* [4425] */
    (xdc_Char)0x5f,  /* [4426] */
    (xdc_Char)0x70,  /* [4427] */
    (xdc_Char)0x6f,  /* [4428] */
    (xdc_Char)0x73,  /* [4429] */
    (xdc_Char)0x74,  /* [4430] */
    (xdc_Char)0x3a,  /* [4431] */
    (xdc_Char)0x20,  /* [4432] */
    (xdc_Char)0x73,  /* [4433] */
    (xdc_Char)0x77,  /* [4434] */
    (xdc_Char)0x69,  /* [4435] */
    (xdc_Char)0x3a,  /* [4436] */
    (xdc_Char)0x20,  /* [4437] */
    (xdc_Char)0x30,  /* [4438] */
    (xdc_Char)0x78,  /* [4439] */
    (xdc_Char)0x25,  /* [4440] */
    (xdc_Char)0x78,  /* [4441] */
    (xdc_Char)0x2c,  /* [4442] */
    (xdc_Char)0x20,  /* [4443] */
    (xdc_Char)0x66,  /* [4444] */
    (xdc_Char)0x75,  /* [4445] */
    (xdc_Char)0x6e,  /* [4446] */
    (xdc_Char)0x63,  /* [4447] */
    (xdc_Char)0x3a,  /* [4448] */
    (xdc_Char)0x20,  /* [4449] */
    (xdc_Char)0x30,  /* [4450] */
    (xdc_Char)0x78,  /* [4451] */
    (xdc_Char)0x25,  /* [4452] */
    (xdc_Char)0x78,  /* [4453] */
    (xdc_Char)0x2c,  /* [4454] */
    (xdc_Char)0x20,  /* [4455] */
    (xdc_Char)0x70,  /* [4456] */
    (xdc_Char)0x72,  /* [4457] */
    (xdc_Char)0x69,  /* [4458] */
    (xdc_Char)0x3a,  /* [4459] */
    (xdc_Char)0x20,  /* [4460] */
    (xdc_Char)0x25,  /* [4461] */
    (xdc_Char)0x64,  /* [4462] */
    (xdc_Char)0x0,  /* [4463] */
    (xdc_Char)0x4c,  /* [4464] */
    (xdc_Char)0x4d,  /* [4465] */
    (xdc_Char)0x5f,  /* [4466] */
    (xdc_Char)0x73,  /* [4467] */
    (xdc_Char)0x77,  /* [4468] */
    (xdc_Char)0x69,  /* [4469] */
    (xdc_Char)0x74,  /* [4470] */
    (xdc_Char)0x63,  /* [4471] */
    (xdc_Char)0x68,  /* [4472] */
    (xdc_Char)0x3a,  /* [4473] */
    (xdc_Char)0x20,  /* [4474] */
    (xdc_Char)0x6f,  /* [4475] */
    (xdc_Char)0x6c,  /* [4476] */
    (xdc_Char)0x64,  /* [4477] */
    (xdc_Char)0x74,  /* [4478] */
    (xdc_Char)0x73,  /* [4479] */
    (xdc_Char)0x6b,  /* [4480] */
    (xdc_Char)0x3a,  /* [4481] */
    (xdc_Char)0x20,  /* [4482] */
    (xdc_Char)0x30,  /* [4483] */
    (xdc_Char)0x78,  /* [4484] */
    (xdc_Char)0x25,  /* [4485] */
    (xdc_Char)0x78,  /* [4486] */
    (xdc_Char)0x2c,  /* [4487] */
    (xdc_Char)0x20,  /* [4488] */
    (xdc_Char)0x6f,  /* [4489] */
    (xdc_Char)0x6c,  /* [4490] */
    (xdc_Char)0x64,  /* [4491] */
    (xdc_Char)0x66,  /* [4492] */
    (xdc_Char)0x75,  /* [4493] */
    (xdc_Char)0x6e,  /* [4494] */
    (xdc_Char)0x63,  /* [4495] */
    (xdc_Char)0x3a,  /* [4496] */
    (xdc_Char)0x20,  /* [4497] */
    (xdc_Char)0x30,  /* [4498] */
    (xdc_Char)0x78,  /* [4499] */
    (xdc_Char)0x25,  /* [4500] */
    (xdc_Char)0x78,  /* [4501] */
    (xdc_Char)0x2c,  /* [4502] */
    (xdc_Char)0x20,  /* [4503] */
    (xdc_Char)0x6e,  /* [4504] */
    (xdc_Char)0x65,  /* [4505] */
    (xdc_Char)0x77,  /* [4506] */
    (xdc_Char)0x74,  /* [4507] */
    (xdc_Char)0x73,  /* [4508] */
    (xdc_Char)0x6b,  /* [4509] */
    (xdc_Char)0x3a,  /* [4510] */
    (xdc_Char)0x20,  /* [4511] */
    (xdc_Char)0x30,  /* [4512] */
    (xdc_Char)0x78,  /* [4513] */
    (xdc_Char)0x25,  /* [4514] */
    (xdc_Char)0x78,  /* [4515] */
    (xdc_Char)0x2c,  /* [4516] */
    (xdc_Char)0x20,  /* [4517] */
    (xdc_Char)0x6e,  /* [4518] */
    (xdc_Char)0x65,  /* [4519] */
    (xdc_Char)0x77,  /* [4520] */
    (xdc_Char)0x66,  /* [4521] */
    (xdc_Char)0x75,  /* [4522] */
    (xdc_Char)0x6e,  /* [4523] */
    (xdc_Char)0x63,  /* [4524] */
    (xdc_Char)0x3a,  /* [4525] */
    (xdc_Char)0x20,  /* [4526] */
    (xdc_Char)0x30,  /* [4527] */
    (xdc_Char)0x78,  /* [4528] */
    (xdc_Char)0x25,  /* [4529] */
    (xdc_Char)0x78,  /* [4530] */
    (xdc_Char)0x0,  /* [4531] */
    (xdc_Char)0x4c,  /* [4532] */
    (xdc_Char)0x4d,  /* [4533] */
    (xdc_Char)0x5f,  /* [4534] */
    (xdc_Char)0x73,  /* [4535] */
    (xdc_Char)0x6c,  /* [4536] */
    (xdc_Char)0x65,  /* [4537] */
    (xdc_Char)0x65,  /* [4538] */
    (xdc_Char)0x70,  /* [4539] */
    (xdc_Char)0x3a,  /* [4540] */
    (xdc_Char)0x20,  /* [4541] */
    (xdc_Char)0x74,  /* [4542] */
    (xdc_Char)0x73,  /* [4543] */
    (xdc_Char)0x6b,  /* [4544] */
    (xdc_Char)0x3a,  /* [4545] */
    (xdc_Char)0x20,  /* [4546] */
    (xdc_Char)0x30,  /* [4547] */
    (xdc_Char)0x78,  /* [4548] */
    (xdc_Char)0x25,  /* [4549] */
    (xdc_Char)0x78,  /* [4550] */
    (xdc_Char)0x2c,  /* [4551] */
    (xdc_Char)0x20,  /* [4552] */
    (xdc_Char)0x66,  /* [4553] */
    (xdc_Char)0x75,  /* [4554] */
    (xdc_Char)0x6e,  /* [4555] */
    (xdc_Char)0x63,  /* [4556] */
    (xdc_Char)0x3a,  /* [4557] */
    (xdc_Char)0x20,  /* [4558] */
    (xdc_Char)0x30,  /* [4559] */
    (xdc_Char)0x78,  /* [4560] */
    (xdc_Char)0x25,  /* [4561] */
    (xdc_Char)0x78,  /* [4562] */
    (xdc_Char)0x2c,  /* [4563] */
    (xdc_Char)0x20,  /* [4564] */
    (xdc_Char)0x74,  /* [4565] */
    (xdc_Char)0x69,  /* [4566] */
    (xdc_Char)0x6d,  /* [4567] */
    (xdc_Char)0x65,  /* [4568] */
    (xdc_Char)0x6f,  /* [4569] */
    (xdc_Char)0x75,  /* [4570] */
    (xdc_Char)0x74,  /* [4571] */
    (xdc_Char)0x3a,  /* [4572] */
    (xdc_Char)0x20,  /* [4573] */
    (xdc_Char)0x25,  /* [4574] */
    (xdc_Char)0x64,  /* [4575] */
    (xdc_Char)0x0,  /* [4576] */
    (xdc_Char)0x4c,  /* [4577] */
    (xdc_Char)0x44,  /* [4578] */
    (xdc_Char)0x5f,  /* [4579] */
    (xdc_Char)0x72,  /* [4580] */
    (xdc_Char)0x65,  /* [4581] */
    (xdc_Char)0x61,  /* [4582] */
    (xdc_Char)0x64,  /* [4583] */
    (xdc_Char)0x79,  /* [4584] */
    (xdc_Char)0x3a,  /* [4585] */
    (xdc_Char)0x20,  /* [4586] */
    (xdc_Char)0x74,  /* [4587] */
    (xdc_Char)0x73,  /* [4588] */
    (xdc_Char)0x6b,  /* [4589] */
    (xdc_Char)0x3a,  /* [4590] */
    (xdc_Char)0x20,  /* [4591] */
    (xdc_Char)0x30,  /* [4592] */
    (xdc_Char)0x78,  /* [4593] */
    (xdc_Char)0x25,  /* [4594] */
    (xdc_Char)0x78,  /* [4595] */
    (xdc_Char)0x2c,  /* [4596] */
    (xdc_Char)0x20,  /* [4597] */
    (xdc_Char)0x66,  /* [4598] */
    (xdc_Char)0x75,  /* [4599] */
    (xdc_Char)0x6e,  /* [4600] */
    (xdc_Char)0x63,  /* [4601] */
    (xdc_Char)0x3a,  /* [4602] */
    (xdc_Char)0x20,  /* [4603] */
    (xdc_Char)0x30,  /* [4604] */
    (xdc_Char)0x78,  /* [4605] */
    (xdc_Char)0x25,  /* [4606] */
    (xdc_Char)0x78,  /* [4607] */
    (xdc_Char)0x2c,  /* [4608] */
    (xdc_Char)0x20,  /* [4609] */
    (xdc_Char)0x70,  /* [4610] */
    (xdc_Char)0x72,  /* [4611] */
    (xdc_Char)0x69,  /* [4612] */
    (xdc_Char)0x3a,  /* [4613] */
    (xdc_Char)0x20,  /* [4614] */
    (xdc_Char)0x25,  /* [4615] */
    (xdc_Char)0x64,  /* [4616] */
    (xdc_Char)0x0,  /* [4617] */
    (xdc_Char)0x4c,  /* [4618] */
    (xdc_Char)0x44,  /* [4619] */
    (xdc_Char)0x5f,  /* [4620] */
    (xdc_Char)0x62,  /* [4621] */
    (xdc_Char)0x6c,  /* [4622] */
    (xdc_Char)0x6f,  /* [4623] */
    (xdc_Char)0x63,  /* [4624] */
    (xdc_Char)0x6b,  /* [4625] */
    (xdc_Char)0x3a,  /* [4626] */
    (xdc_Char)0x20,  /* [4627] */
    (xdc_Char)0x74,  /* [4628] */
    (xdc_Char)0x73,  /* [4629] */
    (xdc_Char)0x6b,  /* [4630] */
    (xdc_Char)0x3a,  /* [4631] */
    (xdc_Char)0x20,  /* [4632] */
    (xdc_Char)0x30,  /* [4633] */
    (xdc_Char)0x78,  /* [4634] */
    (xdc_Char)0x25,  /* [4635] */
    (xdc_Char)0x78,  /* [4636] */
    (xdc_Char)0x2c,  /* [4637] */
    (xdc_Char)0x20,  /* [4638] */
    (xdc_Char)0x66,  /* [4639] */
    (xdc_Char)0x75,  /* [4640] */
    (xdc_Char)0x6e,  /* [4641] */
    (xdc_Char)0x63,  /* [4642] */
    (xdc_Char)0x3a,  /* [4643] */
    (xdc_Char)0x20,  /* [4644] */
    (xdc_Char)0x30,  /* [4645] */
    (xdc_Char)0x78,  /* [4646] */
    (xdc_Char)0x25,  /* [4647] */
    (xdc_Char)0x78,  /* [4648] */
    (xdc_Char)0x0,  /* [4649] */
    (xdc_Char)0x4c,  /* [4650] */
    (xdc_Char)0x4d,  /* [4651] */
    (xdc_Char)0x5f,  /* [4652] */
    (xdc_Char)0x79,  /* [4653] */
    (xdc_Char)0x69,  /* [4654] */
    (xdc_Char)0x65,  /* [4655] */
    (xdc_Char)0x6c,  /* [4656] */
    (xdc_Char)0x64,  /* [4657] */
    (xdc_Char)0x3a,  /* [4658] */
    (xdc_Char)0x20,  /* [4659] */
    (xdc_Char)0x74,  /* [4660] */
    (xdc_Char)0x73,  /* [4661] */
    (xdc_Char)0x6b,  /* [4662] */
    (xdc_Char)0x3a,  /* [4663] */
    (xdc_Char)0x20,  /* [4664] */
    (xdc_Char)0x30,  /* [4665] */
    (xdc_Char)0x78,  /* [4666] */
    (xdc_Char)0x25,  /* [4667] */
    (xdc_Char)0x78,  /* [4668] */
    (xdc_Char)0x2c,  /* [4669] */
    (xdc_Char)0x20,  /* [4670] */
    (xdc_Char)0x66,  /* [4671] */
    (xdc_Char)0x75,  /* [4672] */
    (xdc_Char)0x6e,  /* [4673] */
    (xdc_Char)0x63,  /* [4674] */
    (xdc_Char)0x3a,  /* [4675] */
    (xdc_Char)0x20,  /* [4676] */
    (xdc_Char)0x30,  /* [4677] */
    (xdc_Char)0x78,  /* [4678] */
    (xdc_Char)0x25,  /* [4679] */
    (xdc_Char)0x78,  /* [4680] */
    (xdc_Char)0x2c,  /* [4681] */
    (xdc_Char)0x20,  /* [4682] */
    (xdc_Char)0x63,  /* [4683] */
    (xdc_Char)0x75,  /* [4684] */
    (xdc_Char)0x72,  /* [4685] */
    (xdc_Char)0x72,  /* [4686] */
    (xdc_Char)0x54,  /* [4687] */
    (xdc_Char)0x68,  /* [4688] */
    (xdc_Char)0x72,  /* [4689] */
    (xdc_Char)0x65,  /* [4690] */
    (xdc_Char)0x61,  /* [4691] */
    (xdc_Char)0x64,  /* [4692] */
    (xdc_Char)0x3a,  /* [4693] */
    (xdc_Char)0x20,  /* [4694] */
    (xdc_Char)0x25,  /* [4695] */
    (xdc_Char)0x64,  /* [4696] */
    (xdc_Char)0x0,  /* [4697] */
    (xdc_Char)0x4c,  /* [4698] */
    (xdc_Char)0x4d,  /* [4699] */
    (xdc_Char)0x5f,  /* [4700] */
    (xdc_Char)0x73,  /* [4701] */
    (xdc_Char)0x65,  /* [4702] */
    (xdc_Char)0x74,  /* [4703] */
    (xdc_Char)0x50,  /* [4704] */
    (xdc_Char)0x72,  /* [4705] */
    (xdc_Char)0x69,  /* [4706] */
    (xdc_Char)0x3a,  /* [4707] */
    (xdc_Char)0x20,  /* [4708] */
    (xdc_Char)0x74,  /* [4709] */
    (xdc_Char)0x73,  /* [4710] */
    (xdc_Char)0x6b,  /* [4711] */
    (xdc_Char)0x3a,  /* [4712] */
    (xdc_Char)0x20,  /* [4713] */
    (xdc_Char)0x30,  /* [4714] */
    (xdc_Char)0x78,  /* [4715] */
    (xdc_Char)0x25,  /* [4716] */
    (xdc_Char)0x78,  /* [4717] */
    (xdc_Char)0x2c,  /* [4718] */
    (xdc_Char)0x20,  /* [4719] */
    (xdc_Char)0x66,  /* [4720] */
    (xdc_Char)0x75,  /* [4721] */
    (xdc_Char)0x6e,  /* [4722] */
    (xdc_Char)0x63,  /* [4723] */
    (xdc_Char)0x3a,  /* [4724] */
    (xdc_Char)0x20,  /* [4725] */
    (xdc_Char)0x30,  /* [4726] */
    (xdc_Char)0x78,  /* [4727] */
    (xdc_Char)0x25,  /* [4728] */
    (xdc_Char)0x78,  /* [4729] */
    (xdc_Char)0x2c,  /* [4730] */
    (xdc_Char)0x20,  /* [4731] */
    (xdc_Char)0x6f,  /* [4732] */
    (xdc_Char)0x6c,  /* [4733] */
    (xdc_Char)0x64,  /* [4734] */
    (xdc_Char)0x50,  /* [4735] */
    (xdc_Char)0x72,  /* [4736] */
    (xdc_Char)0x69,  /* [4737] */
    (xdc_Char)0x3a,  /* [4738] */
    (xdc_Char)0x20,  /* [4739] */
    (xdc_Char)0x25,  /* [4740] */
    (xdc_Char)0x64,  /* [4741] */
    (xdc_Char)0x2c,  /* [4742] */
    (xdc_Char)0x20,  /* [4743] */
    (xdc_Char)0x6e,  /* [4744] */
    (xdc_Char)0x65,  /* [4745] */
    (xdc_Char)0x77,  /* [4746] */
    (xdc_Char)0x50,  /* [4747] */
    (xdc_Char)0x72,  /* [4748] */
    (xdc_Char)0x69,  /* [4749] */
    (xdc_Char)0x20,  /* [4750] */
    (xdc_Char)0x25,  /* [4751] */
    (xdc_Char)0x64,  /* [4752] */
    (xdc_Char)0x0,  /* [4753] */
    (xdc_Char)0x4c,  /* [4754] */
    (xdc_Char)0x44,  /* [4755] */
    (xdc_Char)0x5f,  /* [4756] */
    (xdc_Char)0x65,  /* [4757] */
    (xdc_Char)0x78,  /* [4758] */
    (xdc_Char)0x69,  /* [4759] */
    (xdc_Char)0x74,  /* [4760] */
    (xdc_Char)0x3a,  /* [4761] */
    (xdc_Char)0x20,  /* [4762] */
    (xdc_Char)0x74,  /* [4763] */
    (xdc_Char)0x73,  /* [4764] */
    (xdc_Char)0x6b,  /* [4765] */
    (xdc_Char)0x3a,  /* [4766] */
    (xdc_Char)0x20,  /* [4767] */
    (xdc_Char)0x30,  /* [4768] */
    (xdc_Char)0x78,  /* [4769] */
    (xdc_Char)0x25,  /* [4770] */
    (xdc_Char)0x78,  /* [4771] */
    (xdc_Char)0x2c,  /* [4772] */
    (xdc_Char)0x20,  /* [4773] */
    (xdc_Char)0x66,  /* [4774] */
    (xdc_Char)0x75,  /* [4775] */
    (xdc_Char)0x6e,  /* [4776] */
    (xdc_Char)0x63,  /* [4777] */
    (xdc_Char)0x3a,  /* [4778] */
    (xdc_Char)0x20,  /* [4779] */
    (xdc_Char)0x30,  /* [4780] */
    (xdc_Char)0x78,  /* [4781] */
    (xdc_Char)0x25,  /* [4782] */
    (xdc_Char)0x78,  /* [4783] */
    (xdc_Char)0x0,  /* [4784] */
    (xdc_Char)0x4c,  /* [4785] */
    (xdc_Char)0x4d,  /* [4786] */
    (xdc_Char)0x5f,  /* [4787] */
    (xdc_Char)0x73,  /* [4788] */
    (xdc_Char)0x74,  /* [4789] */
    (xdc_Char)0x61,  /* [4790] */
    (xdc_Char)0x72,  /* [4791] */
    (xdc_Char)0x74,  /* [4792] */
    (xdc_Char)0x49,  /* [4793] */
    (xdc_Char)0x4f,  /* [4794] */
    (xdc_Char)0x3a,  /* [4795] */
    (xdc_Char)0x20,  /* [4796] */
    (xdc_Char)0x62,  /* [4797] */
    (xdc_Char)0x75,  /* [4798] */
    (xdc_Char)0x66,  /* [4799] */
    (xdc_Char)0x3a,  /* [4800] */
    (xdc_Char)0x20,  /* [4801] */
    (xdc_Char)0x30,  /* [4802] */
    (xdc_Char)0x78,  /* [4803] */
    (xdc_Char)0x25,  /* [4804] */
    (xdc_Char)0x78,  /* [4805] */
    (xdc_Char)0x2c,  /* [4806] */
    (xdc_Char)0x20,  /* [4807] */
    (xdc_Char)0x73,  /* [4808] */
    (xdc_Char)0x69,  /* [4809] */
    (xdc_Char)0x7a,  /* [4810] */
    (xdc_Char)0x65,  /* [4811] */
    (xdc_Char)0x3a,  /* [4812] */
    (xdc_Char)0x20,  /* [4813] */
    (xdc_Char)0x30,  /* [4814] */
    (xdc_Char)0x78,  /* [4815] */
    (xdc_Char)0x25,  /* [4816] */
    (xdc_Char)0x78,  /* [4817] */
    (xdc_Char)0x2c,  /* [4818] */
    (xdc_Char)0x20,  /* [4819] */
    (xdc_Char)0x61,  /* [4820] */
    (xdc_Char)0x72,  /* [4821] */
    (xdc_Char)0x67,  /* [4822] */
    (xdc_Char)0x3a,  /* [4823] */
    (xdc_Char)0x20,  /* [4824] */
    (xdc_Char)0x30,  /* [4825] */
    (xdc_Char)0x78,  /* [4826] */
    (xdc_Char)0x25,  /* [4827] */
    (xdc_Char)0x78,  /* [4828] */
    (xdc_Char)0x0,  /* [4829] */
    (xdc_Char)0x4c,  /* [4830] */
    (xdc_Char)0x4d,  /* [4831] */
    (xdc_Char)0x5f,  /* [4832] */
    (xdc_Char)0x69,  /* [4833] */
    (xdc_Char)0x6f,  /* [4834] */
    (xdc_Char)0x43,  /* [4835] */
    (xdc_Char)0x6f,  /* [4836] */
    (xdc_Char)0x6d,  /* [4837] */
    (xdc_Char)0x70,  /* [4838] */
    (xdc_Char)0x6c,  /* [4839] */
    (xdc_Char)0x65,  /* [4840] */
    (xdc_Char)0x74,  /* [4841] */
    (xdc_Char)0x65,  /* [4842] */
    (xdc_Char)0x3a,  /* [4843] */
    (xdc_Char)0x20,  /* [4844] */
    (xdc_Char)0x62,  /* [4845] */
    (xdc_Char)0x75,  /* [4846] */
    (xdc_Char)0x66,  /* [4847] */
    (xdc_Char)0x3a,  /* [4848] */
    (xdc_Char)0x20,  /* [4849] */
    (xdc_Char)0x30,  /* [4850] */
    (xdc_Char)0x78,  /* [4851] */
    (xdc_Char)0x25,  /* [4852] */
    (xdc_Char)0x78,  /* [4853] */
    (xdc_Char)0x2c,  /* [4854] */
    (xdc_Char)0x20,  /* [4855] */
    (xdc_Char)0x73,  /* [4856] */
    (xdc_Char)0x69,  /* [4857] */
    (xdc_Char)0x7a,  /* [4858] */
    (xdc_Char)0x65,  /* [4859] */
    (xdc_Char)0x3a,  /* [4860] */
    (xdc_Char)0x20,  /* [4861] */
    (xdc_Char)0x30,  /* [4862] */
    (xdc_Char)0x78,  /* [4863] */
    (xdc_Char)0x25,  /* [4864] */
    (xdc_Char)0x78,  /* [4865] */
    (xdc_Char)0x2c,  /* [4866] */
    (xdc_Char)0x20,  /* [4867] */
    (xdc_Char)0x61,  /* [4868] */
    (xdc_Char)0x72,  /* [4869] */
    (xdc_Char)0x67,  /* [4870] */
    (xdc_Char)0x3a,  /* [4871] */
    (xdc_Char)0x20,  /* [4872] */
    (xdc_Char)0x30,  /* [4873] */
    (xdc_Char)0x78,  /* [4874] */
    (xdc_Char)0x25,  /* [4875] */
    (xdc_Char)0x78,  /* [4876] */
    (xdc_Char)0x0,  /* [4877] */
    (xdc_Char)0x4c,  /* [4878] */
    (xdc_Char)0x4d,  /* [4879] */
    (xdc_Char)0x5f,  /* [4880] */
    (xdc_Char)0x62,  /* [4881] */
    (xdc_Char)0x65,  /* [4882] */
    (xdc_Char)0x67,  /* [4883] */
    (xdc_Char)0x69,  /* [4884] */
    (xdc_Char)0x6e,  /* [4885] */
    (xdc_Char)0x3a,  /* [4886] */
    (xdc_Char)0x20,  /* [4887] */
    (xdc_Char)0x68,  /* [4888] */
    (xdc_Char)0x77,  /* [4889] */
    (xdc_Char)0x69,  /* [4890] */
    (xdc_Char)0x3a,  /* [4891] */
    (xdc_Char)0x20,  /* [4892] */
    (xdc_Char)0x30,  /* [4893] */
    (xdc_Char)0x78,  /* [4894] */
    (xdc_Char)0x25,  /* [4895] */
    (xdc_Char)0x78,  /* [4896] */
    (xdc_Char)0x2c,  /* [4897] */
    (xdc_Char)0x20,  /* [4898] */
    (xdc_Char)0x66,  /* [4899] */
    (xdc_Char)0x75,  /* [4900] */
    (xdc_Char)0x6e,  /* [4901] */
    (xdc_Char)0x63,  /* [4902] */
    (xdc_Char)0x3a,  /* [4903] */
    (xdc_Char)0x20,  /* [4904] */
    (xdc_Char)0x30,  /* [4905] */
    (xdc_Char)0x78,  /* [4906] */
    (xdc_Char)0x25,  /* [4907] */
    (xdc_Char)0x78,  /* [4908] */
    (xdc_Char)0x2c,  /* [4909] */
    (xdc_Char)0x20,  /* [4910] */
    (xdc_Char)0x70,  /* [4911] */
    (xdc_Char)0x72,  /* [4912] */
    (xdc_Char)0x65,  /* [4913] */
    (xdc_Char)0x54,  /* [4914] */
    (xdc_Char)0x68,  /* [4915] */
    (xdc_Char)0x72,  /* [4916] */
    (xdc_Char)0x65,  /* [4917] */
    (xdc_Char)0x61,  /* [4918] */
    (xdc_Char)0x64,  /* [4919] */
    (xdc_Char)0x3a,  /* [4920] */
    (xdc_Char)0x20,  /* [4921] */
    (xdc_Char)0x25,  /* [4922] */
    (xdc_Char)0x64,  /* [4923] */
    (xdc_Char)0x2c,  /* [4924] */
    (xdc_Char)0x20,  /* [4925] */
    (xdc_Char)0x69,  /* [4926] */
    (xdc_Char)0x6e,  /* [4927] */
    (xdc_Char)0x74,  /* [4928] */
    (xdc_Char)0x4e,  /* [4929] */
    (xdc_Char)0x75,  /* [4930] */
    (xdc_Char)0x6d,  /* [4931] */
    (xdc_Char)0x3a,  /* [4932] */
    (xdc_Char)0x20,  /* [4933] */
    (xdc_Char)0x25,  /* [4934] */
    (xdc_Char)0x64,  /* [4935] */
    (xdc_Char)0x2c,  /* [4936] */
    (xdc_Char)0x20,  /* [4937] */
    (xdc_Char)0x69,  /* [4938] */
    (xdc_Char)0x72,  /* [4939] */
    (xdc_Char)0x70,  /* [4940] */
    (xdc_Char)0x3a,  /* [4941] */
    (xdc_Char)0x20,  /* [4942] */
    (xdc_Char)0x30,  /* [4943] */
    (xdc_Char)0x78,  /* [4944] */
    (xdc_Char)0x25,  /* [4945] */
    (xdc_Char)0x78,  /* [4946] */
    (xdc_Char)0x0,  /* [4947] */
    (xdc_Char)0x4c,  /* [4948] */
    (xdc_Char)0x44,  /* [4949] */
    (xdc_Char)0x5f,  /* [4950] */
    (xdc_Char)0x65,  /* [4951] */
    (xdc_Char)0x6e,  /* [4952] */
    (xdc_Char)0x64,  /* [4953] */
    (xdc_Char)0x3a,  /* [4954] */
    (xdc_Char)0x20,  /* [4955] */
    (xdc_Char)0x68,  /* [4956] */
    (xdc_Char)0x77,  /* [4957] */
    (xdc_Char)0x69,  /* [4958] */
    (xdc_Char)0x3a,  /* [4959] */
    (xdc_Char)0x20,  /* [4960] */
    (xdc_Char)0x30,  /* [4961] */
    (xdc_Char)0x78,  /* [4962] */
    (xdc_Char)0x25,  /* [4963] */
    (xdc_Char)0x78,  /* [4964] */
    (xdc_Char)0x0,  /* [4965] */
    (xdc_Char)0x78,  /* [4966] */
    (xdc_Char)0x64,  /* [4967] */
    (xdc_Char)0x63,  /* [4968] */
    (xdc_Char)0x2e,  /* [4969] */
    (xdc_Char)0x0,  /* [4970] */
    (xdc_Char)0x72,  /* [4971] */
    (xdc_Char)0x75,  /* [4972] */
    (xdc_Char)0x6e,  /* [4973] */
    (xdc_Char)0x74,  /* [4974] */
    (xdc_Char)0x69,  /* [4975] */
    (xdc_Char)0x6d,  /* [4976] */
    (xdc_Char)0x65,  /* [4977] */
    (xdc_Char)0x2e,  /* [4978] */
    (xdc_Char)0x0,  /* [4979] */
    (xdc_Char)0x41,  /* [4980] */
    (xdc_Char)0x73,  /* [4981] */
    (xdc_Char)0x73,  /* [4982] */
    (xdc_Char)0x65,  /* [4983] */
    (xdc_Char)0x72,  /* [4984] */
    (xdc_Char)0x74,  /* [4985] */
    (xdc_Char)0x0,  /* [4986] */
    (xdc_Char)0x43,  /* [4987] */
    (xdc_Char)0x6f,  /* [4988] */
    (xdc_Char)0x72,  /* [4989] */
    (xdc_Char)0x65,  /* [4990] */
    (xdc_Char)0x0,  /* [4991] */
    (xdc_Char)0x44,  /* [4992] */
    (xdc_Char)0x65,  /* [4993] */
    (xdc_Char)0x66,  /* [4994] */
    (xdc_Char)0x61,  /* [4995] */
    (xdc_Char)0x75,  /* [4996] */
    (xdc_Char)0x6c,  /* [4997] */
    (xdc_Char)0x74,  /* [4998] */
    (xdc_Char)0x73,  /* [4999] */
    (xdc_Char)0x0,  /* [5000] */
    (xdc_Char)0x44,  /* [5001] */
    (xdc_Char)0x69,  /* [5002] */
    (xdc_Char)0x61,  /* [5003] */
    (xdc_Char)0x67,  /* [5004] */
    (xdc_Char)0x73,  /* [5005] */
    (xdc_Char)0x0,  /* [5006] */
    (xdc_Char)0x45,  /* [5007] */
    (xdc_Char)0x72,  /* [5008] */
    (xdc_Char)0x72,  /* [5009] */
    (xdc_Char)0x6f,  /* [5010] */
    (xdc_Char)0x72,  /* [5011] */
    (xdc_Char)0x0,  /* [5012] */
    (xdc_Char)0x47,  /* [5013] */
    (xdc_Char)0x61,  /* [5014] */
    (xdc_Char)0x74,  /* [5015] */
    (xdc_Char)0x65,  /* [5016] */
    (xdc_Char)0x0,  /* [5017] */
    (xdc_Char)0x4c,  /* [5018] */
    (xdc_Char)0x6f,  /* [5019] */
    (xdc_Char)0x67,  /* [5020] */
    (xdc_Char)0x0,  /* [5021] */
    (xdc_Char)0x4d,  /* [5022] */
    (xdc_Char)0x61,  /* [5023] */
    (xdc_Char)0x69,  /* [5024] */
    (xdc_Char)0x6e,  /* [5025] */
    (xdc_Char)0x0,  /* [5026] */
    (xdc_Char)0x4d,  /* [5027] */
    (xdc_Char)0x65,  /* [5028] */
    (xdc_Char)0x6d,  /* [5029] */
    (xdc_Char)0x6f,  /* [5030] */
    (xdc_Char)0x72,  /* [5031] */
    (xdc_Char)0x79,  /* [5032] */
    (xdc_Char)0x0,  /* [5033] */
    (xdc_Char)0x52,  /* [5034] */
    (xdc_Char)0x65,  /* [5035] */
    (xdc_Char)0x67,  /* [5036] */
    (xdc_Char)0x69,  /* [5037] */
    (xdc_Char)0x73,  /* [5038] */
    (xdc_Char)0x74,  /* [5039] */
    (xdc_Char)0x72,  /* [5040] */
    (xdc_Char)0x79,  /* [5041] */
    (xdc_Char)0x0,  /* [5042] */
    (xdc_Char)0x53,  /* [5043] */
    (xdc_Char)0x74,  /* [5044] */
    (xdc_Char)0x61,  /* [5045] */
    (xdc_Char)0x72,  /* [5046] */
    (xdc_Char)0x74,  /* [5047] */
    (xdc_Char)0x75,  /* [5048] */
    (xdc_Char)0x70,  /* [5049] */
    (xdc_Char)0x0,  /* [5050] */
    (xdc_Char)0x53,  /* [5051] */
    (xdc_Char)0x79,  /* [5052] */
    (xdc_Char)0x73,  /* [5053] */
    (xdc_Char)0x74,  /* [5054] */
    (xdc_Char)0x65,  /* [5055] */
    (xdc_Char)0x6d,  /* [5056] */
    (xdc_Char)0x0,  /* [5057] */
    (xdc_Char)0x53,  /* [5058] */
    (xdc_Char)0x79,  /* [5059] */
    (xdc_Char)0x73,  /* [5060] */
    (xdc_Char)0x4d,  /* [5061] */
    (xdc_Char)0x69,  /* [5062] */
    (xdc_Char)0x6e,  /* [5063] */
    (xdc_Char)0x0,  /* [5064] */
    (xdc_Char)0x54,  /* [5065] */
    (xdc_Char)0x65,  /* [5066] */
    (xdc_Char)0x78,  /* [5067] */
    (xdc_Char)0x74,  /* [5068] */
    (xdc_Char)0x0,  /* [5069] */
    (xdc_Char)0x74,  /* [5070] */
    (xdc_Char)0x69,  /* [5071] */
    (xdc_Char)0x2e,  /* [5072] */
    (xdc_Char)0x0,  /* [5073] */
    (xdc_Char)0x73,  /* [5074] */
    (xdc_Char)0x79,  /* [5075] */
    (xdc_Char)0x73,  /* [5076] */
    (xdc_Char)0x62,  /* [5077] */
    (xdc_Char)0x69,  /* [5078] */
    (xdc_Char)0x6f,  /* [5079] */
    (xdc_Char)0x73,  /* [5080] */
    (xdc_Char)0x2e,  /* [5081] */
    (xdc_Char)0x0,  /* [5082] */
    (xdc_Char)0x66,  /* [5083] */
    (xdc_Char)0x61,  /* [5084] */
    (xdc_Char)0x6d,  /* [5085] */
    (xdc_Char)0x69,  /* [5086] */
    (xdc_Char)0x6c,  /* [5087] */
    (xdc_Char)0x79,  /* [5088] */
    (xdc_Char)0x2e,  /* [5089] */
    (xdc_Char)0x0,  /* [5090] */
    (xdc_Char)0x61,  /* [5091] */
    (xdc_Char)0x72,  /* [5092] */
    (xdc_Char)0x6d,  /* [5093] */
    (xdc_Char)0x2e,  /* [5094] */
    (xdc_Char)0x0,  /* [5095] */
    (xdc_Char)0x48,  /* [5096] */
    (xdc_Char)0x77,  /* [5097] */
    (xdc_Char)0x69,  /* [5098] */
    (xdc_Char)0x43,  /* [5099] */
    (xdc_Char)0x6f,  /* [5100] */
    (xdc_Char)0x6d,  /* [5101] */
    (xdc_Char)0x6d,  /* [5102] */
    (xdc_Char)0x6f,  /* [5103] */
    (xdc_Char)0x6e,  /* [5104] */
    (xdc_Char)0x0,  /* [5105] */
    (xdc_Char)0x49,  /* [5106] */
    (xdc_Char)0x6e,  /* [5107] */
    (xdc_Char)0x74,  /* [5108] */
    (xdc_Char)0x72,  /* [5109] */
    (xdc_Char)0x69,  /* [5110] */
    (xdc_Char)0x6e,  /* [5111] */
    (xdc_Char)0x73,  /* [5112] */
    (xdc_Char)0x69,  /* [5113] */
    (xdc_Char)0x63,  /* [5114] */
    (xdc_Char)0x73,  /* [5115] */
    (xdc_Char)0x53,  /* [5116] */
    (xdc_Char)0x75,  /* [5117] */
    (xdc_Char)0x70,  /* [5118] */
    (xdc_Char)0x70,  /* [5119] */
    (xdc_Char)0x6f,  /* [5120] */
    (xdc_Char)0x72,  /* [5121] */
    (xdc_Char)0x74,  /* [5122] */
    (xdc_Char)0x0,  /* [5123] */
    (xdc_Char)0x54,  /* [5124] */
    (xdc_Char)0x61,  /* [5125] */
    (xdc_Char)0x73,  /* [5126] */
    (xdc_Char)0x6b,  /* [5127] */
    (xdc_Char)0x53,  /* [5128] */
    (xdc_Char)0x75,  /* [5129] */
    (xdc_Char)0x70,  /* [5130] */
    (xdc_Char)0x70,  /* [5131] */
    (xdc_Char)0x6f,  /* [5132] */
    (xdc_Char)0x72,  /* [5133] */
    (xdc_Char)0x74,  /* [5134] */
    (xdc_Char)0x0,  /* [5135] */
    (xdc_Char)0x42,  /* [5136] */
    (xdc_Char)0x49,  /* [5137] */
    (xdc_Char)0x4f,  /* [5138] */
    (xdc_Char)0x53,  /* [5139] */
    (xdc_Char)0x0,  /* [5140] */
    (xdc_Char)0x68,  /* [5141] */
    (xdc_Char)0x61,  /* [5142] */
    (xdc_Char)0x6c,  /* [5143] */
    (xdc_Char)0x2e,  /* [5144] */
    (xdc_Char)0x0,  /* [5145] */
    (xdc_Char)0x48,  /* [5146] */
    (xdc_Char)0x77,  /* [5147] */
    (xdc_Char)0x69,  /* [5148] */
    (xdc_Char)0x0,  /* [5149] */
    (xdc_Char)0x54,  /* [5150] */
    (xdc_Char)0x69,  /* [5151] */
    (xdc_Char)0x6d,  /* [5152] */
    (xdc_Char)0x65,  /* [5153] */
    (xdc_Char)0x72,  /* [5154] */
    (xdc_Char)0x0,  /* [5155] */
    (xdc_Char)0x43,  /* [5156] */
    (xdc_Char)0x61,  /* [5157] */
    (xdc_Char)0x63,  /* [5158] */
    (xdc_Char)0x68,  /* [5159] */
    (xdc_Char)0x65,  /* [5160] */
    (xdc_Char)0x0,  /* [5161] */
    (xdc_Char)0x6b,  /* [5162] */
    (xdc_Char)0x6e,  /* [5163] */
    (xdc_Char)0x6c,  /* [5164] */
    (xdc_Char)0x2e,  /* [5165] */
    (xdc_Char)0x0,  /* [5166] */
    (xdc_Char)0x43,  /* [5167] */
    (xdc_Char)0x6c,  /* [5168] */
    (xdc_Char)0x6f,  /* [5169] */
    (xdc_Char)0x63,  /* [5170] */
    (xdc_Char)0x6b,  /* [5171] */
    (xdc_Char)0x0,  /* [5172] */
    (xdc_Char)0x49,  /* [5173] */
    (xdc_Char)0x64,  /* [5174] */
    (xdc_Char)0x6c,  /* [5175] */
    (xdc_Char)0x65,  /* [5176] */
    (xdc_Char)0x0,  /* [5177] */
    (xdc_Char)0x49,  /* [5178] */
    (xdc_Char)0x6e,  /* [5179] */
    (xdc_Char)0x74,  /* [5180] */
    (xdc_Char)0x72,  /* [5181] */
    (xdc_Char)0x69,  /* [5182] */
    (xdc_Char)0x6e,  /* [5183] */
    (xdc_Char)0x73,  /* [5184] */
    (xdc_Char)0x69,  /* [5185] */
    (xdc_Char)0x63,  /* [5186] */
    (xdc_Char)0x73,  /* [5187] */
    (xdc_Char)0x0,  /* [5188] */
    (xdc_Char)0x51,  /* [5189] */
    (xdc_Char)0x75,  /* [5190] */
    (xdc_Char)0x65,  /* [5191] */
    (xdc_Char)0x75,  /* [5192] */
    (xdc_Char)0x65,  /* [5193] */
    (xdc_Char)0x0,  /* [5194] */
    (xdc_Char)0x53,  /* [5195] */
    (xdc_Char)0x65,  /* [5196] */
    (xdc_Char)0x6d,  /* [5197] */
    (xdc_Char)0x61,  /* [5198] */
    (xdc_Char)0x70,  /* [5199] */
    (xdc_Char)0x68,  /* [5200] */
    (xdc_Char)0x6f,  /* [5201] */
    (xdc_Char)0x72,  /* [5202] */
    (xdc_Char)0x65,  /* [5203] */
    (xdc_Char)0x0,  /* [5204] */
    (xdc_Char)0x53,  /* [5205] */
    (xdc_Char)0x77,  /* [5206] */
    (xdc_Char)0x69,  /* [5207] */
    (xdc_Char)0x0,  /* [5208] */
    (xdc_Char)0x54,  /* [5209] */
    (xdc_Char)0x61,  /* [5210] */
    (xdc_Char)0x73,  /* [5211] */
    (xdc_Char)0x6b,  /* [5212] */
    (xdc_Char)0x0,  /* [5213] */
    (xdc_Char)0x74,  /* [5214] */
    (xdc_Char)0x69,  /* [5215] */
    (xdc_Char)0x6d,  /* [5216] */
    (xdc_Char)0x65,  /* [5217] */
    (xdc_Char)0x72,  /* [5218] */
    (xdc_Char)0x73,  /* [5219] */
    (xdc_Char)0x2e,  /* [5220] */
    (xdc_Char)0x0,  /* [5221] */
    (xdc_Char)0x74,  /* [5222] */
    (xdc_Char)0x69,  /* [5223] */
    (xdc_Char)0x6d,  /* [5224] */
    (xdc_Char)0x65,  /* [5225] */
    (xdc_Char)0x72,  /* [5226] */
    (xdc_Char)0x36,  /* [5227] */
    (xdc_Char)0x34,  /* [5228] */
    (xdc_Char)0x2e,  /* [5229] */
    (xdc_Char)0x0,  /* [5230] */
    (xdc_Char)0x68,  /* [5231] */
    (xdc_Char)0x65,  /* [5232] */
    (xdc_Char)0x61,  /* [5233] */
    (xdc_Char)0x70,  /* [5234] */
    (xdc_Char)0x73,  /* [5235] */
    (xdc_Char)0x2e,  /* [5236] */
    (xdc_Char)0x0,  /* [5237] */
    (xdc_Char)0x48,  /* [5238] */
    (xdc_Char)0x65,  /* [5239] */
    (xdc_Char)0x61,  /* [5240] */
    (xdc_Char)0x70,  /* [5241] */
    (xdc_Char)0x4d,  /* [5242] */
    (xdc_Char)0x65,  /* [5243] */
    (xdc_Char)0x6d,  /* [5244] */
    (xdc_Char)0x0,  /* [5245] */
    (xdc_Char)0x67,  /* [5246] */
    (xdc_Char)0x61,  /* [5247] */
    (xdc_Char)0x74,  /* [5248] */
    (xdc_Char)0x65,  /* [5249] */
    (xdc_Char)0x73,  /* [5250] */
    (xdc_Char)0x2e,  /* [5251] */
    (xdc_Char)0x0,  /* [5252] */
    (xdc_Char)0x47,  /* [5253] */
    (xdc_Char)0x61,  /* [5254] */
    (xdc_Char)0x74,  /* [5255] */
    (xdc_Char)0x65,  /* [5256] */
    (xdc_Char)0x48,  /* [5257] */
    (xdc_Char)0x77,  /* [5258] */
    (xdc_Char)0x69,  /* [5259] */
    (xdc_Char)0x0,  /* [5260] */
    (xdc_Char)0x47,  /* [5261] */
    (xdc_Char)0x61,  /* [5262] */
    (xdc_Char)0x74,  /* [5263] */
    (xdc_Char)0x65,  /* [5264] */
    (xdc_Char)0x53,  /* [5265] */
    (xdc_Char)0x77,  /* [5266] */
    (xdc_Char)0x69,  /* [5267] */
    (xdc_Char)0x0,  /* [5268] */
    (xdc_Char)0x47,  /* [5269] */
    (xdc_Char)0x61,  /* [5270] */
    (xdc_Char)0x74,  /* [5271] */
    (xdc_Char)0x65,  /* [5272] */
    (xdc_Char)0x4d,  /* [5273] */
    (xdc_Char)0x75,  /* [5274] */
    (xdc_Char)0x74,  /* [5275] */
    (xdc_Char)0x65,  /* [5276] */
    (xdc_Char)0x78,  /* [5277] */
    (xdc_Char)0x0,  /* [5278] */
    (xdc_Char)0x53,  /* [5279] */
    (xdc_Char)0x79,  /* [5280] */
    (xdc_Char)0x6e,  /* [5281] */
    (xdc_Char)0x63,  /* [5282] */
    (xdc_Char)0x0,  /* [5283] */
    (xdc_Char)0x53,  /* [5284] */
    (xdc_Char)0x65,  /* [5285] */
    (xdc_Char)0x6d,  /* [5286] */
    (xdc_Char)0x54,  /* [5287] */
    (xdc_Char)0x68,  /* [5288] */
    (xdc_Char)0x72,  /* [5289] */
    (xdc_Char)0x65,  /* [5290] */
    (xdc_Char)0x61,  /* [5291] */
    (xdc_Char)0x64,  /* [5292] */
    (xdc_Char)0x0,  /* [5293] */
    (xdc_Char)0x53,  /* [5294] */
    (xdc_Char)0x79,  /* [5295] */
    (xdc_Char)0x6e,  /* [5296] */
    (xdc_Char)0x63,  /* [5297] */
    (xdc_Char)0x4e,  /* [5298] */
    (xdc_Char)0x75,  /* [5299] */
    (xdc_Char)0x6c,  /* [5300] */
    (xdc_Char)0x6c,  /* [5301] */
    (xdc_Char)0x0,  /* [5302] */
    (xdc_Char)0x53,  /* [5303] */
    (xdc_Char)0x79,  /* [5304] */
    (xdc_Char)0x6e,  /* [5305] */
    (xdc_Char)0x63,  /* [5306] */
    (xdc_Char)0x53,  /* [5307] */
    (xdc_Char)0x65,  /* [5308] */
    (xdc_Char)0x6d,  /* [5309] */
    (xdc_Char)0x54,  /* [5310] */
    (xdc_Char)0x68,  /* [5311] */
    (xdc_Char)0x72,  /* [5312] */
    (xdc_Char)0x65,  /* [5313] */
    (xdc_Char)0x61,  /* [5314] */
    (xdc_Char)0x64,  /* [5315] */
    (xdc_Char)0x0,  /* [5316] */
    (xdc_Char)0x73,  /* [5317] */
    (xdc_Char)0x64,  /* [5318] */
    (xdc_Char)0x6f,  /* [5319] */
    (xdc_Char)0x2e,  /* [5320] */
    (xdc_Char)0x0,  /* [5321] */
    (xdc_Char)0x75,  /* [5322] */
    (xdc_Char)0x74,  /* [5323] */
    (xdc_Char)0x69,  /* [5324] */
    (xdc_Char)0x6c,  /* [5325] */
    (xdc_Char)0x73,  /* [5326] */
    (xdc_Char)0x2e,  /* [5327] */
    (xdc_Char)0x0,  /* [5328] */
    (xdc_Char)0x4e,  /* [5329] */
    (xdc_Char)0x61,  /* [5330] */
    (xdc_Char)0x6d,  /* [5331] */
    (xdc_Char)0x65,  /* [5332] */
    (xdc_Char)0x53,  /* [5333] */
    (xdc_Char)0x65,  /* [5334] */
    (xdc_Char)0x72,  /* [5335] */
    (xdc_Char)0x76,  /* [5336] */
    (xdc_Char)0x65,  /* [5337] */
    (xdc_Char)0x72,  /* [5338] */
    (xdc_Char)0x0,  /* [5339] */
    (xdc_Char)0x4e,  /* [5340] */
    (xdc_Char)0x61,  /* [5341] */
    (xdc_Char)0x6d,  /* [5342] */
    (xdc_Char)0x65,  /* [5343] */
    (xdc_Char)0x53,  /* [5344] */
    (xdc_Char)0x65,  /* [5345] */
    (xdc_Char)0x72,  /* [5346] */
    (xdc_Char)0x76,  /* [5347] */
    (xdc_Char)0x65,  /* [5348] */
    (xdc_Char)0x72,  /* [5349] */
    (xdc_Char)0x52,  /* [5350] */
    (xdc_Char)0x65,  /* [5351] */
    (xdc_Char)0x6d,  /* [5352] */
    (xdc_Char)0x6f,  /* [5353] */
    (xdc_Char)0x74,  /* [5354] */
    (xdc_Char)0x65,  /* [5355] */
    (xdc_Char)0x4e,  /* [5356] */
    (xdc_Char)0x75,  /* [5357] */
    (xdc_Char)0x6c,  /* [5358] */
    (xdc_Char)0x6c,  /* [5359] */
    (xdc_Char)0x0,  /* [5360] */
    (xdc_Char)0x4d,  /* [5361] */
    (xdc_Char)0x75,  /* [5362] */
    (xdc_Char)0x6c,  /* [5363] */
    (xdc_Char)0x74,  /* [5364] */
    (xdc_Char)0x69,  /* [5365] */
    (xdc_Char)0x50,  /* [5366] */
    (xdc_Char)0x72,  /* [5367] */
    (xdc_Char)0x6f,  /* [5368] */
    (xdc_Char)0x63,  /* [5369] */
    (xdc_Char)0x0,  /* [5370] */
    (xdc_Char)0x4c,  /* [5371] */
    (xdc_Char)0x69,  /* [5372] */
    (xdc_Char)0x73,  /* [5373] */
    (xdc_Char)0x74,  /* [5374] */
    (xdc_Char)0x0,  /* [5375] */
    (xdc_Char)0x69,  /* [5376] */
    (xdc_Char)0x6f,  /* [5377] */
    (xdc_Char)0x2e,  /* [5378] */
    (xdc_Char)0x0,  /* [5379] */
    (xdc_Char)0x44,  /* [5380] */
    (xdc_Char)0x72,  /* [5381] */
    (xdc_Char)0x69,  /* [5382] */
    (xdc_Char)0x76,  /* [5383] */
    (xdc_Char)0x65,  /* [5384] */
    (xdc_Char)0x72,  /* [5385] */
    (xdc_Char)0x54,  /* [5386] */
    (xdc_Char)0x79,  /* [5387] */
    (xdc_Char)0x70,  /* [5388] */
    (xdc_Char)0x65,  /* [5389] */
    (xdc_Char)0x73,  /* [5390] */
    (xdc_Char)0x0,  /* [5391] */
    (xdc_Char)0x44,  /* [5392] */
    (xdc_Char)0x72,  /* [5393] */
    (xdc_Char)0x69,  /* [5394] */
    (xdc_Char)0x76,  /* [5395] */
    (xdc_Char)0x65,  /* [5396] */
    (xdc_Char)0x72,  /* [5397] */
    (xdc_Char)0x54,  /* [5398] */
    (xdc_Char)0x61,  /* [5399] */
    (xdc_Char)0x62,  /* [5400] */
    (xdc_Char)0x6c,  /* [5401] */
    (xdc_Char)0x65,  /* [5402] */
    (xdc_Char)0x0,  /* [5403] */
    (xdc_Char)0x53,  /* [5404] */
    (xdc_Char)0x74,  /* [5405] */
    (xdc_Char)0x72,  /* [5406] */
    (xdc_Char)0x65,  /* [5407] */
    (xdc_Char)0x61,  /* [5408] */
    (xdc_Char)0x6d,  /* [5409] */
    (xdc_Char)0x0,  /* [5410] */
    (xdc_Char)0x64,  /* [5411] */
    (xdc_Char)0x72,  /* [5412] */
    (xdc_Char)0x69,  /* [5413] */
    (xdc_Char)0x76,  /* [5414] */
    (xdc_Char)0x65,  /* [5415] */
    (xdc_Char)0x72,  /* [5416] */
    (xdc_Char)0x73,  /* [5417] */
    (xdc_Char)0x2e,  /* [5418] */
    (xdc_Char)0x0,  /* [5419] */
    (xdc_Char)0x47,  /* [5420] */
    (xdc_Char)0x65,  /* [5421] */
    (xdc_Char)0x6e,  /* [5422] */
    (xdc_Char)0x65,  /* [5423] */
    (xdc_Char)0x72,  /* [5424] */
    (xdc_Char)0x61,  /* [5425] */
    (xdc_Char)0x74,  /* [5426] */
    (xdc_Char)0x6f,  /* [5427] */
    (xdc_Char)0x72,  /* [5428] */
    (xdc_Char)0x0,  /* [5429] */
    (xdc_Char)0x64,  /* [5430] */
    (xdc_Char)0x6d,  /* [5431] */
    (xdc_Char)0x36,  /* [5432] */
    (xdc_Char)0x34,  /* [5433] */
    (xdc_Char)0x34,  /* [5434] */
    (xdc_Char)0x36,  /* [5435] */
    (xdc_Char)0x2e,  /* [5436] */
    (xdc_Char)0x0,  /* [5437] */
    (xdc_Char)0x54,  /* [5438] */
    (xdc_Char)0x69,  /* [5439] */
    (xdc_Char)0x6d,  /* [5440] */
    (xdc_Char)0x65,  /* [5441] */
    (xdc_Char)0x72,  /* [5442] */
    (xdc_Char)0x53,  /* [5443] */
    (xdc_Char)0x75,  /* [5444] */
    (xdc_Char)0x70,  /* [5445] */
    (xdc_Char)0x70,  /* [5446] */
    (xdc_Char)0x6f,  /* [5447] */
    (xdc_Char)0x72,  /* [5448] */
    (xdc_Char)0x74,  /* [5449] */
    (xdc_Char)0x0,  /* [5450] */
    (xdc_Char)0x65,  /* [5451] */
    (xdc_Char)0x78,  /* [5452] */
    (xdc_Char)0x63,  /* [5453] */
    (xdc_Char)0x2e,  /* [5454] */
    (xdc_Char)0x0,  /* [5455] */
    (xdc_Char)0x45,  /* [5456] */
    (xdc_Char)0x78,  /* [5457] */
    (xdc_Char)0x63,  /* [5458] */
    (xdc_Char)0x65,  /* [5459] */
    (xdc_Char)0x70,  /* [5460] */
    (xdc_Char)0x74,  /* [5461] */
    (xdc_Char)0x69,  /* [5462] */
    (xdc_Char)0x6f,  /* [5463] */
    (xdc_Char)0x6e,  /* [5464] */
    (xdc_Char)0x0,  /* [5465] */
    (xdc_Char)0x61,  /* [5466] */
    (xdc_Char)0x72,  /* [5467] */
    (xdc_Char)0x6d,  /* [5468] */
    (xdc_Char)0x39,  /* [5469] */
    (xdc_Char)0x2e,  /* [5470] */
    (xdc_Char)0x0,  /* [5471] */
    (xdc_Char)0x4d,  /* [5472] */
    (xdc_Char)0x6d,  /* [5473] */
    (xdc_Char)0x75,  /* [5474] */
    (xdc_Char)0x0,  /* [5475] */
    (xdc_Char)0x78,  /* [5476] */
    (xdc_Char)0x64,  /* [5477] */
    (xdc_Char)0x63,  /* [5478] */
    (xdc_Char)0x72,  /* [5479] */
    (xdc_Char)0x75,  /* [5480] */
    (xdc_Char)0x6e,  /* [5481] */
    (xdc_Char)0x74,  /* [5482] */
    (xdc_Char)0x69,  /* [5483] */
    (xdc_Char)0x6d,  /* [5484] */
    (xdc_Char)0x65,  /* [5485] */
    (xdc_Char)0x2e,  /* [5486] */
    (xdc_Char)0x0,  /* [5487] */
    (xdc_Char)0x53,  /* [5488] */
    (xdc_Char)0x65,  /* [5489] */
    (xdc_Char)0x6d,  /* [5490] */
    (xdc_Char)0x54,  /* [5491] */
    (xdc_Char)0x68,  /* [5492] */
    (xdc_Char)0x72,  /* [5493] */
    (xdc_Char)0x65,  /* [5494] */
    (xdc_Char)0x61,  /* [5495] */
    (xdc_Char)0x64,  /* [5496] */
    (xdc_Char)0x53,  /* [5497] */
    (xdc_Char)0x75,  /* [5498] */
    (xdc_Char)0x70,  /* [5499] */
    (xdc_Char)0x70,  /* [5500] */
    (xdc_Char)0x6f,  /* [5501] */
    (xdc_Char)0x72,  /* [5502] */
    (xdc_Char)0x74,  /* [5503] */
    (xdc_Char)0x0,  /* [5504] */
    (xdc_Char)0x63,  /* [5505] */
    (xdc_Char)0x6f,  /* [5506] */
    (xdc_Char)0x6e,  /* [5507] */
    (xdc_Char)0x76,  /* [5508] */
    (xdc_Char)0x65,  /* [5509] */
    (xdc_Char)0x72,  /* [5510] */
    (xdc_Char)0x74,  /* [5511] */
    (xdc_Char)0x65,  /* [5512] */
    (xdc_Char)0x72,  /* [5513] */
    (xdc_Char)0x73,  /* [5514] */
    (xdc_Char)0x2e,  /* [5515] */
    (xdc_Char)0x0,  /* [5516] */
    (xdc_Char)0x44,  /* [5517] */
    (xdc_Char)0x72,  /* [5518] */
    (xdc_Char)0x69,  /* [5519] */
    (xdc_Char)0x76,  /* [5520] */
    (xdc_Char)0x65,  /* [5521] */
    (xdc_Char)0x72,  /* [5522] */
    (xdc_Char)0x41,  /* [5523] */
    (xdc_Char)0x64,  /* [5524] */
    (xdc_Char)0x61,  /* [5525] */
    (xdc_Char)0x70,  /* [5526] */
    (xdc_Char)0x74,  /* [5527] */
    (xdc_Char)0x65,  /* [5528] */
    (xdc_Char)0x72,  /* [5529] */
    (xdc_Char)0x0,  /* [5530] */
    (xdc_Char)0x74,  /* [5531] */
    (xdc_Char)0x69,  /* [5532] */
    (xdc_Char)0x2e,  /* [5533] */
    (xdc_Char)0x73,  /* [5534] */
    (xdc_Char)0x79,  /* [5535] */
    (xdc_Char)0x73,  /* [5536] */
    (xdc_Char)0x62,  /* [5537] */
    (xdc_Char)0x69,  /* [5538] */
    (xdc_Char)0x6f,  /* [5539] */
    (xdc_Char)0x73,  /* [5540] */
    (xdc_Char)0x2e,  /* [5541] */
    (xdc_Char)0x6b,  /* [5542] */
    (xdc_Char)0x6e,  /* [5543] */
    (xdc_Char)0x6c,  /* [5544] */
    (xdc_Char)0x2e,  /* [5545] */
    (xdc_Char)0x54,  /* [5546] */
    (xdc_Char)0x61,  /* [5547] */
    (xdc_Char)0x73,  /* [5548] */
    (xdc_Char)0x6b,  /* [5549] */
    (xdc_Char)0x2e,  /* [5550] */
    (xdc_Char)0x49,  /* [5551] */
    (xdc_Char)0x64,  /* [5552] */
    (xdc_Char)0x6c,  /* [5553] */
    (xdc_Char)0x65,  /* [5554] */
    (xdc_Char)0x54,  /* [5555] */
    (xdc_Char)0x61,  /* [5556] */
    (xdc_Char)0x73,  /* [5557] */
    (xdc_Char)0x6b,  /* [5558] */
    (xdc_Char)0x0,  /* [5559] */
};

/* --> xdc_runtime_Text_nodeTab__A */
const __T1_xdc_runtime_Text_nodeTab xdc_runtime_Text_nodeTab__A[73] = {
    {
        (xdc_Bits16)0x0,  /* left */
        (xdc_Bits16)0x0,  /* right */
    },  /* [0] */
    {
        (xdc_Bits16)0x1366,  /* left */
        (xdc_Bits16)0x136b,  /* right */
    },  /* [1] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1374,  /* right */
    },  /* [2] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x137b,  /* right */
    },  /* [3] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1380,  /* right */
    },  /* [4] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1389,  /* right */
    },  /* [5] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x138f,  /* right */
    },  /* [6] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1395,  /* right */
    },  /* [7] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x139a,  /* right */
    },  /* [8] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x139e,  /* right */
    },  /* [9] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x13a3,  /* right */
    },  /* [10] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x13aa,  /* right */
    },  /* [11] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x13b3,  /* right */
    },  /* [12] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x13bb,  /* right */
    },  /* [13] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x13c2,  /* right */
    },  /* [14] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x13c9,  /* right */
    },  /* [15] */
    {
        (xdc_Bits16)0x13ce,  /* left */
        (xdc_Bits16)0x13d2,  /* right */
    },  /* [16] */
    {
        (xdc_Bits16)0x8010,  /* left */
        (xdc_Bits16)0x13db,  /* right */
    },  /* [17] */
    {
        (xdc_Bits16)0x8011,  /* left */
        (xdc_Bits16)0x13e3,  /* right */
    },  /* [18] */
    {
        (xdc_Bits16)0x8012,  /* left */
        (xdc_Bits16)0x13e8,  /* right */
    },  /* [19] */
    {
        (xdc_Bits16)0x8012,  /* left */
        (xdc_Bits16)0x13f2,  /* right */
    },  /* [20] */
    {
        (xdc_Bits16)0x8012,  /* left */
        (xdc_Bits16)0x1404,  /* right */
    },  /* [21] */
    {
        (xdc_Bits16)0x8010,  /* left */
        (xdc_Bits16)0x1410,  /* right */
    },  /* [22] */
    {
        (xdc_Bits16)0x8010,  /* left */
        (xdc_Bits16)0x1415,  /* right */
    },  /* [23] */
    {
        (xdc_Bits16)0x8017,  /* left */
        (xdc_Bits16)0x141a,  /* right */
    },  /* [24] */
    {
        (xdc_Bits16)0x8017,  /* left */
        (xdc_Bits16)0x141e,  /* right */
    },  /* [25] */
    {
        (xdc_Bits16)0x8017,  /* left */
        (xdc_Bits16)0x1424,  /* right */
    },  /* [26] */
    {
        (xdc_Bits16)0x8010,  /* left */
        (xdc_Bits16)0x142a,  /* right */
    },  /* [27] */
    {
        (xdc_Bits16)0x801b,  /* left */
        (xdc_Bits16)0x142f,  /* right */
    },  /* [28] */
    {
        (xdc_Bits16)0x801b,  /* left */
        (xdc_Bits16)0x1435,  /* right */
    },  /* [29] */
    {
        (xdc_Bits16)0x801b,  /* left */
        (xdc_Bits16)0x143a,  /* right */
    },  /* [30] */
    {
        (xdc_Bits16)0x801b,  /* left */
        (xdc_Bits16)0x1445,  /* right */
    },  /* [31] */
    {
        (xdc_Bits16)0x801b,  /* left */
        (xdc_Bits16)0x144b,  /* right */
    },  /* [32] */
    {
        (xdc_Bits16)0x801b,  /* left */
        (xdc_Bits16)0x1455,  /* right */
    },  /* [33] */
    {
        (xdc_Bits16)0x801b,  /* left */
        (xdc_Bits16)0x1459,  /* right */
    },  /* [34] */
    {
        (xdc_Bits16)0x8010,  /* left */
        (xdc_Bits16)0x145e,  /* right */
    },  /* [35] */
    {
        (xdc_Bits16)0x8023,  /* left */
        (xdc_Bits16)0x1466,  /* right */
    },  /* [36] */
    {
        (xdc_Bits16)0x8024,  /* left */
        (xdc_Bits16)0x141e,  /* right */
    },  /* [37] */
    {
        (xdc_Bits16)0x8010,  /* left */
        (xdc_Bits16)0x146f,  /* right */
    },  /* [38] */
    {
        (xdc_Bits16)0x8026,  /* left */
        (xdc_Bits16)0x1476,  /* right */
    },  /* [39] */
    {
        (xdc_Bits16)0x8010,  /* left */
        (xdc_Bits16)0x147e,  /* right */
    },  /* [40] */
    {
        (xdc_Bits16)0x8028,  /* left */
        (xdc_Bits16)0x1485,  /* right */
    },  /* [41] */
    {
        (xdc_Bits16)0x8028,  /* left */
        (xdc_Bits16)0x148d,  /* right */
    },  /* [42] */
    {
        (xdc_Bits16)0x8028,  /* left */
        (xdc_Bits16)0x1495,  /* right */
    },  /* [43] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x142a,  /* right */
    },  /* [44] */
    {
        (xdc_Bits16)0x802c,  /* left */
        (xdc_Bits16)0x149f,  /* right */
    },  /* [45] */
    {
        (xdc_Bits16)0x802c,  /* left */
        (xdc_Bits16)0x14a4,  /* right */
    },  /* [46] */
    {
        (xdc_Bits16)0x802c,  /* left */
        (xdc_Bits16)0x14ae,  /* right */
    },  /* [47] */
    {
        (xdc_Bits16)0x802c,  /* left */
        (xdc_Bits16)0x14b7,  /* right */
    },  /* [48] */
    {
        (xdc_Bits16)0x13ce,  /* left */
        (xdc_Bits16)0x14c5,  /* right */
    },  /* [49] */
    {
        (xdc_Bits16)0x8031,  /* left */
        (xdc_Bits16)0x14ca,  /* right */
    },  /* [50] */
    {
        (xdc_Bits16)0x8032,  /* left */
        (xdc_Bits16)0x14d1,  /* right */
    },  /* [51] */
    {
        (xdc_Bits16)0x8032,  /* left */
        (xdc_Bits16)0x14dc,  /* right */
    },  /* [52] */
    {
        (xdc_Bits16)0x8032,  /* left */
        (xdc_Bits16)0x14f1,  /* right */
    },  /* [53] */
    {
        (xdc_Bits16)0x8032,  /* left */
        (xdc_Bits16)0x14fb,  /* right */
    },  /* [54] */
    {
        (xdc_Bits16)0x8031,  /* left */
        (xdc_Bits16)0x1500,  /* right */
    },  /* [55] */
    {
        (xdc_Bits16)0x8037,  /* left */
        (xdc_Bits16)0x1504,  /* right */
    },  /* [56] */
    {
        (xdc_Bits16)0x8037,  /* left */
        (xdc_Bits16)0x1510,  /* right */
    },  /* [57] */
    {
        (xdc_Bits16)0x8037,  /* left */
        (xdc_Bits16)0x151c,  /* right */
    },  /* [58] */
    {
        (xdc_Bits16)0x8037,  /* left */
        (xdc_Bits16)0x1523,  /* right */
    },  /* [59] */
    {
        (xdc_Bits16)0x803b,  /* left */
        (xdc_Bits16)0x152c,  /* right */
    },  /* [60] */
    {
        (xdc_Bits16)0x8012,  /* left */
        (xdc_Bits16)0x1536,  /* right */
    },  /* [61] */
    {
        (xdc_Bits16)0x803d,  /* left */
        (xdc_Bits16)0x141a,  /* right */
    },  /* [62] */
    {
        (xdc_Bits16)0x803d,  /* left */
        (xdc_Bits16)0x153e,  /* right */
    },  /* [63] */
    {
        (xdc_Bits16)0x8012,  /* left */
        (xdc_Bits16)0x154b,  /* right */
    },  /* [64] */
    {
        (xdc_Bits16)0x8040,  /* left */
        (xdc_Bits16)0x1550,  /* right */
    },  /* [65] */
    {
        (xdc_Bits16)0x8012,  /* left */
        (xdc_Bits16)0x155a,  /* right */
    },  /* [66] */
    {
        (xdc_Bits16)0x8042,  /* left */
        (xdc_Bits16)0x1424,  /* right */
    },  /* [67] */
    {
        (xdc_Bits16)0x8042,  /* left */
        (xdc_Bits16)0x1560,  /* right */
    },  /* [68] */
    {
        (xdc_Bits16)0x8010,  /* left */
        (xdc_Bits16)0x1564,  /* right */
    },  /* [69] */
    {
        (xdc_Bits16)0x8045,  /* left */
        (xdc_Bits16)0x1570,  /* right */
    },  /* [70] */
    {
        (xdc_Bits16)0x8037,  /* left */
        (xdc_Bits16)0x1581,  /* right */
    },  /* [71] */
    {
        (xdc_Bits16)0x8047,  /* left */
        (xdc_Bits16)0x158d,  /* right */
    },  /* [72] */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_Text_Module__diagsEnabled xdc_runtime_Text_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_Text_Module__diagsIncluded xdc_runtime_Text_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_Text_Module__diagsMask xdc_runtime_Text_Module__diagsMask__C = ((CT__xdc_runtime_Text_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_Text_Module__gateObj xdc_runtime_Text_Module__gateObj__C = ((CT__xdc_runtime_Text_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_Text_Module__gatePrms xdc_runtime_Text_Module__gatePrms__C = ((CT__xdc_runtime_Text_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_Text_Module__id xdc_runtime_Text_Module__id__C = (xdc_Bits16)0x800f;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_Text_Module__loggerDefined xdc_runtime_Text_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_Text_Module__loggerObj xdc_runtime_Text_Module__loggerObj__C = ((CT__xdc_runtime_Text_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_Text_Module__loggerFxn0 xdc_runtime_Text_Module__loggerFxn0__C = ((CT__xdc_runtime_Text_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_Text_Module__loggerFxn1 xdc_runtime_Text_Module__loggerFxn1__C = ((CT__xdc_runtime_Text_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_Text_Module__loggerFxn2 xdc_runtime_Text_Module__loggerFxn2__C = ((CT__xdc_runtime_Text_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_Text_Module__loggerFxn4 xdc_runtime_Text_Module__loggerFxn4__C = ((CT__xdc_runtime_Text_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_Text_Module__loggerFxn8 xdc_runtime_Text_Module__loggerFxn8__C = ((CT__xdc_runtime_Text_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__xdc_runtime_Text_Module__startupDoneFxn xdc_runtime_Text_Module__startupDoneFxn__C = ((CT__xdc_runtime_Text_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_Text_Object__count xdc_runtime_Text_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_Text_Object__heap xdc_runtime_Text_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_Text_Object__sizeof xdc_runtime_Text_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__xdc_runtime_Text_Object__table xdc_runtime_Text_Object__table__C = 0;

/* nameUnknown__C */
__FAR__ const CT__xdc_runtime_Text_nameUnknown xdc_runtime_Text_nameUnknown__C = "{unknown-instance-name}";

/* nameEmpty__C */
__FAR__ const CT__xdc_runtime_Text_nameEmpty xdc_runtime_Text_nameEmpty__C = "{empty-instance-name}";

/* nameStatic__C */
__FAR__ const CT__xdc_runtime_Text_nameStatic xdc_runtime_Text_nameStatic__C = "{static-instance-name}";

/* isLoaded__C */
__FAR__ const CT__xdc_runtime_Text_isLoaded xdc_runtime_Text_isLoaded__C = 1;

/* charTab__C */
__FAR__ const CT__xdc_runtime_Text_charTab xdc_runtime_Text_charTab__C = ((CT__xdc_runtime_Text_charTab)xdc_runtime_Text_charTab__A);

/* nodeTab__C */
__FAR__ const CT__xdc_runtime_Text_nodeTab xdc_runtime_Text_nodeTab__C = ((CT__xdc_runtime_Text_nodeTab)xdc_runtime_Text_nodeTab__A);

/* charCnt__C */
__FAR__ const CT__xdc_runtime_Text_charCnt xdc_runtime_Text_charCnt__C = (xdc_Int16)0x15b8;

/* nodeCnt__C */
__FAR__ const CT__xdc_runtime_Text_nodeCnt xdc_runtime_Text_nodeCnt__C = (xdc_Int16)0x49;

/* unnamedModsLastId__C */
__FAR__ const CT__xdc_runtime_Text_unnamedModsLastId xdc_runtime_Text_unnamedModsLastId__C = (xdc_UInt16)0x4000;

/* registryModsLastId__C */
__FAR__ const CT__xdc_runtime_Text_registryModsLastId xdc_runtime_Text_registryModsLastId__C = (xdc_UInt16)0x7fff;

/* visitRopeFxn__C */
__FAR__ const CT__xdc_runtime_Text_visitRopeFxn xdc_runtime_Text_visitRopeFxn__C = ((CT__xdc_runtime_Text_visitRopeFxn)((xdc_Fxn)xdc_runtime_Text_visitRope__I));

/* visitRopeFxn2__C */
__FAR__ const CT__xdc_runtime_Text_visitRopeFxn2 xdc_runtime_Text_visitRopeFxn2__C = ((CT__xdc_runtime_Text_visitRopeFxn2)((xdc_Fxn)xdc_runtime_Text_visitRope2__I));


/*
 * ======== xdc.runtime.knl.SemThread INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc xdc_runtime_knl_SemThread_Object__DESC__C;

/* Object__PARAMS__C */
__FAR__ const xdc_runtime_knl_SemThread_Params xdc_runtime_knl_SemThread_Object__PARAMS__C = {
    sizeof (xdc_runtime_knl_SemThread_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&xdc_runtime_knl_SemThread_Object__PARAMS__C.__iprms, /* instance */
    xdc_runtime_knl_ISemaphore_Mode_COUNTING,  /* mode */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
xdc_runtime_knl_SemThread_Module__ xdc_runtime_knl_SemThread_Module__root__V = {
    {&xdc_runtime_knl_SemThread_Module__root__V.link,  /* link.next */
    &xdc_runtime_knl_SemThread_Module__root__V.link},  /* link.prev */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_knl_SemThread_Module__diagsEnabled xdc_runtime_knl_SemThread_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_knl_SemThread_Module__diagsIncluded xdc_runtime_knl_SemThread_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_knl_SemThread_Module__diagsMask xdc_runtime_knl_SemThread_Module__diagsMask__C = ((CT__xdc_runtime_knl_SemThread_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_knl_SemThread_Module__gateObj xdc_runtime_knl_SemThread_Module__gateObj__C = ((CT__xdc_runtime_knl_SemThread_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_knl_SemThread_Module__gatePrms xdc_runtime_knl_SemThread_Module__gatePrms__C = ((CT__xdc_runtime_knl_SemThread_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_knl_SemThread_Module__id xdc_runtime_knl_SemThread_Module__id__C = (xdc_Bits16)0x802e;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_knl_SemThread_Module__loggerDefined xdc_runtime_knl_SemThread_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_knl_SemThread_Module__loggerObj xdc_runtime_knl_SemThread_Module__loggerObj__C = ((CT__xdc_runtime_knl_SemThread_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_knl_SemThread_Module__loggerFxn0 xdc_runtime_knl_SemThread_Module__loggerFxn0__C = ((CT__xdc_runtime_knl_SemThread_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_knl_SemThread_Module__loggerFxn1 xdc_runtime_knl_SemThread_Module__loggerFxn1__C = ((CT__xdc_runtime_knl_SemThread_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_knl_SemThread_Module__loggerFxn2 xdc_runtime_knl_SemThread_Module__loggerFxn2__C = ((CT__xdc_runtime_knl_SemThread_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_knl_SemThread_Module__loggerFxn4 xdc_runtime_knl_SemThread_Module__loggerFxn4__C = ((CT__xdc_runtime_knl_SemThread_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_knl_SemThread_Module__loggerFxn8 xdc_runtime_knl_SemThread_Module__loggerFxn8__C = ((CT__xdc_runtime_knl_SemThread_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__xdc_runtime_knl_SemThread_Module__startupDoneFxn xdc_runtime_knl_SemThread_Module__startupDoneFxn__C = ((CT__xdc_runtime_knl_SemThread_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_knl_SemThread_Object__count xdc_runtime_knl_SemThread_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_knl_SemThread_Object__heap xdc_runtime_knl_SemThread_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_knl_SemThread_Object__sizeof xdc_runtime_knl_SemThread_Object__sizeof__C = sizeof(xdc_runtime_knl_SemThread_Object__);

/* Object__table__C */
__FAR__ const CT__xdc_runtime_knl_SemThread_Object__table xdc_runtime_knl_SemThread_Object__table__C = 0;


/*
 * ======== xdc.runtime.knl.SemThread_Proxy INITIALIZERS ========
 */


/*
 * ======== xdc.runtime.knl.Sync INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_knl_Sync_Module__diagsEnabled xdc_runtime_knl_Sync_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_knl_Sync_Module__diagsIncluded xdc_runtime_knl_Sync_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_knl_Sync_Module__diagsMask xdc_runtime_knl_Sync_Module__diagsMask__C = ((CT__xdc_runtime_knl_Sync_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_knl_Sync_Module__gateObj xdc_runtime_knl_Sync_Module__gateObj__C = ((CT__xdc_runtime_knl_Sync_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_knl_Sync_Module__gatePrms xdc_runtime_knl_Sync_Module__gatePrms__C = ((CT__xdc_runtime_knl_Sync_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_knl_Sync_Module__id xdc_runtime_knl_Sync_Module__id__C = (xdc_Bits16)0x802d;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_knl_Sync_Module__loggerDefined xdc_runtime_knl_Sync_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_knl_Sync_Module__loggerObj xdc_runtime_knl_Sync_Module__loggerObj__C = ((CT__xdc_runtime_knl_Sync_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_knl_Sync_Module__loggerFxn0 xdc_runtime_knl_Sync_Module__loggerFxn0__C = ((CT__xdc_runtime_knl_Sync_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_knl_Sync_Module__loggerFxn1 xdc_runtime_knl_Sync_Module__loggerFxn1__C = ((CT__xdc_runtime_knl_Sync_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_knl_Sync_Module__loggerFxn2 xdc_runtime_knl_Sync_Module__loggerFxn2__C = ((CT__xdc_runtime_knl_Sync_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_knl_Sync_Module__loggerFxn4 xdc_runtime_knl_Sync_Module__loggerFxn4__C = ((CT__xdc_runtime_knl_Sync_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_knl_Sync_Module__loggerFxn8 xdc_runtime_knl_Sync_Module__loggerFxn8__C = ((CT__xdc_runtime_knl_Sync_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__xdc_runtime_knl_Sync_Module__startupDoneFxn xdc_runtime_knl_Sync_Module__startupDoneFxn__C = ((CT__xdc_runtime_knl_Sync_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_knl_Sync_Object__count xdc_runtime_knl_Sync_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_knl_Sync_Object__heap xdc_runtime_knl_Sync_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_knl_Sync_Object__sizeof xdc_runtime_knl_Sync_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__xdc_runtime_knl_Sync_Object__table xdc_runtime_knl_Sync_Object__table__C = 0;


/*
 * ======== xdc.runtime.knl.SyncNull INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc xdc_runtime_knl_SyncNull_Object__DESC__C;

/* Object__PARAMS__C */
__FAR__ const xdc_runtime_knl_SyncNull_Params xdc_runtime_knl_SyncNull_Object__PARAMS__C = {
    sizeof (xdc_runtime_knl_SyncNull_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&xdc_runtime_knl_SyncNull_Object__PARAMS__C.__iprms, /* instance */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
xdc_runtime_knl_SyncNull_Module__ xdc_runtime_knl_SyncNull_Module__root__V = {
    {&xdc_runtime_knl_SyncNull_Module__root__V.link,  /* link.next */
    &xdc_runtime_knl_SyncNull_Module__root__V.link},  /* link.prev */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_knl_SyncNull_Module__diagsEnabled xdc_runtime_knl_SyncNull_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_knl_SyncNull_Module__diagsIncluded xdc_runtime_knl_SyncNull_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_knl_SyncNull_Module__diagsMask xdc_runtime_knl_SyncNull_Module__diagsMask__C = ((CT__xdc_runtime_knl_SyncNull_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_knl_SyncNull_Module__gateObj xdc_runtime_knl_SyncNull_Module__gateObj__C = ((CT__xdc_runtime_knl_SyncNull_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_knl_SyncNull_Module__gatePrms xdc_runtime_knl_SyncNull_Module__gatePrms__C = ((CT__xdc_runtime_knl_SyncNull_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_knl_SyncNull_Module__id xdc_runtime_knl_SyncNull_Module__id__C = (xdc_Bits16)0x802f;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_knl_SyncNull_Module__loggerDefined xdc_runtime_knl_SyncNull_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_knl_SyncNull_Module__loggerObj xdc_runtime_knl_SyncNull_Module__loggerObj__C = ((CT__xdc_runtime_knl_SyncNull_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_knl_SyncNull_Module__loggerFxn0 xdc_runtime_knl_SyncNull_Module__loggerFxn0__C = ((CT__xdc_runtime_knl_SyncNull_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_knl_SyncNull_Module__loggerFxn1 xdc_runtime_knl_SyncNull_Module__loggerFxn1__C = ((CT__xdc_runtime_knl_SyncNull_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_knl_SyncNull_Module__loggerFxn2 xdc_runtime_knl_SyncNull_Module__loggerFxn2__C = ((CT__xdc_runtime_knl_SyncNull_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_knl_SyncNull_Module__loggerFxn4 xdc_runtime_knl_SyncNull_Module__loggerFxn4__C = ((CT__xdc_runtime_knl_SyncNull_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_knl_SyncNull_Module__loggerFxn8 xdc_runtime_knl_SyncNull_Module__loggerFxn8__C = ((CT__xdc_runtime_knl_SyncNull_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__xdc_runtime_knl_SyncNull_Module__startupDoneFxn xdc_runtime_knl_SyncNull_Module__startupDoneFxn__C = ((CT__xdc_runtime_knl_SyncNull_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_knl_SyncNull_Object__count xdc_runtime_knl_SyncNull_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_knl_SyncNull_Object__heap xdc_runtime_knl_SyncNull_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_knl_SyncNull_Object__sizeof xdc_runtime_knl_SyncNull_Object__sizeof__C = sizeof(xdc_runtime_knl_SyncNull_Object__);

/* Object__table__C */
__FAR__ const CT__xdc_runtime_knl_SyncNull_Object__table xdc_runtime_knl_SyncNull_Object__table__C = 0;


/*
 * ======== xdc.runtime.knl.SyncSemThread INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc xdc_runtime_knl_SyncSemThread_Object__DESC__C;

/* Object__PARAMS__C */
__FAR__ const xdc_runtime_knl_SyncSemThread_Params xdc_runtime_knl_SyncSemThread_Object__PARAMS__C = {
    sizeof (xdc_runtime_knl_SyncSemThread_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&xdc_runtime_knl_SyncSemThread_Object__PARAMS__C.__iprms, /* instance */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
xdc_runtime_knl_SyncSemThread_Module__ xdc_runtime_knl_SyncSemThread_Module__root__V = {
    {&xdc_runtime_knl_SyncSemThread_Module__root__V.link,  /* link.next */
    &xdc_runtime_knl_SyncSemThread_Module__root__V.link},  /* link.prev */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_knl_SyncSemThread_Module__diagsEnabled xdc_runtime_knl_SyncSemThread_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_knl_SyncSemThread_Module__diagsIncluded xdc_runtime_knl_SyncSemThread_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_knl_SyncSemThread_Module__diagsMask xdc_runtime_knl_SyncSemThread_Module__diagsMask__C = ((CT__xdc_runtime_knl_SyncSemThread_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_knl_SyncSemThread_Module__gateObj xdc_runtime_knl_SyncSemThread_Module__gateObj__C = ((CT__xdc_runtime_knl_SyncSemThread_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_knl_SyncSemThread_Module__gatePrms xdc_runtime_knl_SyncSemThread_Module__gatePrms__C = ((CT__xdc_runtime_knl_SyncSemThread_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_knl_SyncSemThread_Module__id xdc_runtime_knl_SyncSemThread_Module__id__C = (xdc_Bits16)0x8030;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_knl_SyncSemThread_Module__loggerDefined xdc_runtime_knl_SyncSemThread_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_knl_SyncSemThread_Module__loggerObj xdc_runtime_knl_SyncSemThread_Module__loggerObj__C = ((CT__xdc_runtime_knl_SyncSemThread_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_knl_SyncSemThread_Module__loggerFxn0 xdc_runtime_knl_SyncSemThread_Module__loggerFxn0__C = ((CT__xdc_runtime_knl_SyncSemThread_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_knl_SyncSemThread_Module__loggerFxn1 xdc_runtime_knl_SyncSemThread_Module__loggerFxn1__C = ((CT__xdc_runtime_knl_SyncSemThread_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_knl_SyncSemThread_Module__loggerFxn2 xdc_runtime_knl_SyncSemThread_Module__loggerFxn2__C = ((CT__xdc_runtime_knl_SyncSemThread_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_knl_SyncSemThread_Module__loggerFxn4 xdc_runtime_knl_SyncSemThread_Module__loggerFxn4__C = ((CT__xdc_runtime_knl_SyncSemThread_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_knl_SyncSemThread_Module__loggerFxn8 xdc_runtime_knl_SyncSemThread_Module__loggerFxn8__C = ((CT__xdc_runtime_knl_SyncSemThread_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__xdc_runtime_knl_SyncSemThread_Module__startupDoneFxn xdc_runtime_knl_SyncSemThread_Module__startupDoneFxn__C = ((CT__xdc_runtime_knl_SyncSemThread_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_knl_SyncSemThread_Object__count xdc_runtime_knl_SyncSemThread_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_knl_SyncSemThread_Object__heap xdc_runtime_knl_SyncSemThread_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_knl_SyncSemThread_Object__sizeof xdc_runtime_knl_SyncSemThread_Object__sizeof__C = sizeof(xdc_runtime_knl_SyncSemThread_Object__);

/* Object__table__C */
__FAR__ const CT__xdc_runtime_knl_SyncSemThread_Object__table xdc_runtime_knl_SyncSemThread_Object__table__C = 0;


/*
 * ======== xdc.runtime.knl.Sync_Proxy INITIALIZERS ========
 */


/*
 * ======== ti.sdo.io.DriverTable FUNCTION STUBS ========
 */

/* add__E */
xdc_Void ti_sdo_io_DriverTable_add__E( xdc_String name, ti_sdo_io_IDriver_Handle driverHandle, xdc_runtime_Error_Block* eb ) 
{
    ti_sdo_io_DriverTable_add__F(name, driverHandle, eb);
}

/* remove__E */
xdc_Void ti_sdo_io_DriverTable_remove__E( xdc_String name, xdc_runtime_Error_Block* eb ) 
{
    ti_sdo_io_DriverTable_remove__F(name, eb);
}

/* match__E */
xdc_Int ti_sdo_io_DriverTable_match__E( xdc_String name, ti_sdo_io_IDriver_Handle* handle, xdc_runtime_Error_Block* eb ) 
{
    return ti_sdo_io_DriverTable_match__F(name, handle, eb);
}


/*
 * ======== ti.sdo.io.Stream FUNCTION STUBS ========
 */

/* add__E */
xdc_Void ti_sdo_io_Stream_add__E( xdc_String name, ti_sdo_io_IConverter_Handle handle, xdc_runtime_Error_Block* eb ) 
{
    ti_sdo_io_Stream_add__F(name, handle, eb);
}

/* remove__E */
xdc_Void ti_sdo_io_Stream_remove__E( xdc_String name, xdc_runtime_Error_Block* eb ) 
{
    ti_sdo_io_Stream_remove__F(name, eb);
}

/* match__E */
xdc_Int ti_sdo_io_Stream_match__E( xdc_String name, ti_sdo_io_IConverter_Handle* handle, xdc_runtime_Error_Block* eb ) 
{
    return ti_sdo_io_Stream_match__F(name, handle, eb);
}

/* completedLog__E */
xdc_Void ti_sdo_io_Stream_completedLog__E( xdc_UArg buf, xdc_UArg size, xdc_UArg arg ) 
{
    ti_sdo_io_Stream_completedLog__F(buf, size, arg);
}

/* issue__E */
xdc_Void ti_sdo_io_Stream_issue__E( ti_sdo_io_Stream_Handle __inst, xdc_Ptr buf, xdc_SizeT size, xdc_UArg arg, xdc_runtime_Error_Block* eb ) 
{
    ti_sdo_io_Stream_issue__F((void*)__inst, buf, size, arg, eb);
}

/* reclaim__E */
xdc_SizeT ti_sdo_io_Stream_reclaim__E( ti_sdo_io_Stream_Handle __inst, xdc_Ptr* pbufp, xdc_UInt timeout, xdc_UArg* parg, xdc_runtime_Error_Block* eb ) 
{
    return ti_sdo_io_Stream_reclaim__F((void*)__inst, pbufp, timeout, parg, eb);
}

/* read__E */
xdc_SizeT ti_sdo_io_Stream_read__E( ti_sdo_io_Stream_Handle __inst, xdc_Ptr bufp, xdc_SizeT size, xdc_UInt timeout, xdc_runtime_Error_Block* eb ) 
{
    return ti_sdo_io_Stream_read__F((void*)__inst, bufp, size, timeout, eb);
}

/* write__E */
xdc_SizeT ti_sdo_io_Stream_write__E( ti_sdo_io_Stream_Handle __inst, xdc_Ptr bufp, xdc_SizeT size, xdc_UInt timeout, xdc_runtime_Error_Block* eb ) 
{
    return ti_sdo_io_Stream_write__F((void*)__inst, bufp, size, timeout, eb);
}

/* submit__E */
xdc_SizeT ti_sdo_io_Stream_submit__E( ti_sdo_io_Stream_Handle __inst, xdc_Ptr bufp, xdc_SizeT size, ti_sdo_io_DriverTypes_PacketCmd cmd, xdc_UInt timeout, xdc_runtime_Error_Block* eb ) 
{
    return ti_sdo_io_Stream_submit__F((void*)__inst, bufp, size, cmd, timeout, eb);
}

/* control__E */
xdc_Void ti_sdo_io_Stream_control__E( ti_sdo_io_Stream_Handle __inst, ti_sdo_io_DriverTypes_ControlCmd cmd, xdc_UArg cmdArg, xdc_runtime_Error_Block* eb ) 
{
    ti_sdo_io_Stream_control__F((void*)__inst, cmd, cmdArg, eb);
}

/* abort__E */
xdc_UInt ti_sdo_io_Stream_abort__E( ti_sdo_io_Stream_Handle __inst, xdc_runtime_Error_Block* eb ) 
{
    return ti_sdo_io_Stream_abort__F((void*)__inst, eb);
}

/* prime__E */
xdc_Void ti_sdo_io_Stream_prime__E( ti_sdo_io_Stream_Handle __inst, xdc_Ptr buf, xdc_UArg arg, xdc_runtime_Error_Block* eb ) 
{
    ti_sdo_io_Stream_prime__F((void*)__inst, buf, arg, eb);
}

/* Module_startup */
xdc_Int ti_sdo_io_Stream_Module_startup__E( xdc_Int state )
{
    return ti_sdo_io_Stream_Module_startup__F(state);
}


/*
 * ======== ti.sdo.io.converters.DriverAdapter FUNCTION STUBS ========
 */

/* open__E */
xdc_Void ti_sdo_io_converters_DriverAdapter_open__E( ti_sdo_io_converters_DriverAdapter_Handle __inst, xdc_String name, xdc_UInt mode, xdc_UArg chanParams, ti_sdo_io_IConverter_DoneFxn cbFxn, xdc_UArg cbArg, xdc_runtime_Error_Block* eb ) 
{
    ti_sdo_io_converters_DriverAdapter_open__F((void*)__inst, name, mode, chanParams, cbFxn, cbArg, eb);
}

/* close__E */
xdc_Void ti_sdo_io_converters_DriverAdapter_close__E( ti_sdo_io_converters_DriverAdapter_Handle __inst, xdc_runtime_Error_Block* eb ) 
{
    ti_sdo_io_converters_DriverAdapter_close__F((void*)__inst, eb);
}

/* issue__E */
xdc_Void ti_sdo_io_converters_DriverAdapter_issue__E( ti_sdo_io_converters_DriverAdapter_Handle __inst, ti_sdo_io_DriverTypes_Packet* packet, xdc_runtime_Error_Block* eb ) 
{
    ti_sdo_io_converters_DriverAdapter_issue__F((void*)__inst, packet, eb);
}

/* reclaim__E */
xdc_Void ti_sdo_io_converters_DriverAdapter_reclaim__E( ti_sdo_io_converters_DriverAdapter_Handle __inst, ti_sdo_io_DriverTypes_Packet** packetp, xdc_runtime_Error_Block* eb ) 
{
    ti_sdo_io_converters_DriverAdapter_reclaim__F((void*)__inst, packetp, eb);
}

/* control__E */
xdc_Void ti_sdo_io_converters_DriverAdapter_control__E( ti_sdo_io_converters_DriverAdapter_Handle __inst, ti_sdo_io_DriverTypes_ControlCmd cmd, xdc_UArg cmdArg, xdc_runtime_Error_Block* eb ) 
{
    ti_sdo_io_converters_DriverAdapter_control__F((void*)__inst, cmd, cmdArg, eb);
}

/* query__E */
xdc_Bool ti_sdo_io_converters_DriverAdapter_query__E( ti_sdo_io_converters_DriverAdapter_Handle __inst, xdc_Int qual ) 
{
    return ti_sdo_io_converters_DriverAdapter_query__F((void*)__inst, qual);
}

/* callback__E */
xdc_Void ti_sdo_io_converters_DriverAdapter_callback__E( xdc_UArg cbArg, ti_sdo_io_DriverTypes_Packet* packet ) 
{
    ti_sdo_io_converters_DriverAdapter_callback__F(cbArg, packet);
}


/*
 * ======== ti.sdo.io.drivers.Generator FUNCTION STUBS ========
 */

/* open__E */
xdc_Ptr ti_sdo_io_drivers_Generator_open__E( ti_sdo_io_drivers_Generator_Handle __inst, xdc_String name, xdc_UInt mode, xdc_UArg chanParams, ti_sdo_io_DriverTypes_DoneFxn cbFxn, xdc_UArg cbArg, xdc_runtime_Error_Block* eb ) 
{
    return ti_sdo_io_drivers_Generator_open__F((void*)__inst, name, mode, chanParams, cbFxn, cbArg, eb);
}

/* close__E */
xdc_Void ti_sdo_io_drivers_Generator_close__E( ti_sdo_io_drivers_Generator_Handle __inst, xdc_Ptr chanHandle, xdc_runtime_Error_Block* eb ) 
{
    ti_sdo_io_drivers_Generator_close__F((void*)__inst, chanHandle, eb);
}

/* submit__E */
xdc_UInt ti_sdo_io_drivers_Generator_submit__E( ti_sdo_io_drivers_Generator_Handle __inst, xdc_Ptr chanHandle, ti_sdo_io_DriverTypes_Packet* packet, xdc_runtime_Error_Block* eb ) 
{
    return ti_sdo_io_drivers_Generator_submit__F((void*)__inst, chanHandle, packet, eb);
}

/* control__E */
xdc_Void ti_sdo_io_drivers_Generator_control__E( ti_sdo_io_drivers_Generator_Handle __inst, xdc_Ptr chanHandle, ti_sdo_io_DriverTypes_ControlCmd cmd, xdc_UArg cmdArgs, xdc_runtime_Error_Block* eb ) 
{
    ti_sdo_io_drivers_Generator_control__F((void*)__inst, chanHandle, cmd, cmdArgs, eb);
}

/* simulateIsr__E */
xdc_Void ti_sdo_io_drivers_Generator_simulateIsr__E( xdc_UArg arg ) 
{
    ti_sdo_io_drivers_Generator_simulateIsr__F(arg);
}


/*
 * ======== ti.sdo.utils.MultiProc FUNCTION STUBS ========
 */

/* getClusterId__E */
xdc_UInt16 ti_sdo_utils_MultiProc_getClusterId__E( xdc_UInt16 procId ) 
{
    return ti_sdo_utils_MultiProc_getClusterId__F(procId);
}

/* dummy__E */
xdc_Void ti_sdo_utils_MultiProc_dummy__E( void ) 
{
    ti_sdo_utils_MultiProc_dummy__F();
}

/* Module_startup */
xdc_Int ti_sdo_utils_NameServer_Module_startup__E( xdc_Int state )
{
    return ti_sdo_utils_NameServer_Module_startup__F(state);
}


/*
 * ======== ti.sdo.utils.NameServerRemoteNull FUNCTION STUBS ========
 */

/* get__E */
xdc_Int ti_sdo_utils_NameServerRemoteNull_get__E( ti_sdo_utils_NameServerRemoteNull_Handle __inst, xdc_String instanceName, xdc_String name, xdc_Ptr value, xdc_UInt32* valueLen, xdc_runtime_knl_ISync_Handle syncHandle, xdc_runtime_Error_Block* eb ) 
{
    return ti_sdo_utils_NameServerRemoteNull_get__F((void*)__inst, instanceName, name, value, valueLen, syncHandle, eb);
}

/* Module_startup */
xdc_Int ti_sysbios_family_arm_HwiCommon_Module_startup__E( xdc_Int state )
{
    return ti_sysbios_family_arm_HwiCommon_Module_startup__F(state);
}

/* Module_startup */
xdc_Int ti_sysbios_family_arm_arm9_Mmu_Module_startup__E( xdc_Int state )
{
    return ti_sysbios_family_arm_arm9_Mmu_Module_startup__F(state);
}


/*
 * ======== ti.sysbios.family.arm.dm6446.Hwi FUNCTION STUBS ========
 */

/* getStackInfo__E */
xdc_Bool ti_sysbios_family_arm_dm6446_Hwi_getStackInfo__E( ti_sysbios_interfaces_IHwi_StackInfo* stkInfo, xdc_Bool computeStackDepth ) 
{
    return ti_sysbios_family_arm_dm6446_Hwi_getStackInfo__F(stkInfo, computeStackDepth);
}

/* Module_startup */
xdc_Int ti_sysbios_family_arm_dm6446_Hwi_Module_startup__E( xdc_Int state )
{
    return ti_sysbios_family_arm_dm6446_Hwi_Module_startup__F(state);
}

/* Module_startup */
xdc_Int ti_sysbios_family_arm_exc_Exception_Module_startup__E( xdc_Int state )
{
    return ti_sysbios_family_arm_exc_Exception_Module_startup__F(state);
}


/*
 * ======== ti.sysbios.gates.GateHwi FUNCTION STUBS ========
 */

/* query__E */
xdc_Bool ti_sysbios_gates_GateHwi_query__E( xdc_Int qual ) 
{
    return ti_sysbios_gates_GateHwi_query__F(qual);
}


/*
 * ======== ti.sysbios.gates.GateMutex FUNCTION STUBS ========
 */

/* query__E */
xdc_Bool ti_sysbios_gates_GateMutex_query__E( xdc_Int qual ) 
{
    return ti_sysbios_gates_GateMutex_query__F(qual);
}


/*
 * ======== ti.sysbios.gates.GateSwi FUNCTION STUBS ========
 */

/* query__E */
xdc_Bool ti_sysbios_gates_GateSwi_query__E( xdc_Int qual ) 
{
    return ti_sysbios_gates_GateSwi_query__F(qual);
}


/*
 * ======== ti.sysbios.hal.Hwi FUNCTION STUBS ========
 */

/* getStackInfo__E */
xdc_Bool ti_sysbios_hal_Hwi_getStackInfo__E( ti_sysbios_interfaces_IHwi_StackInfo* stkInfo, xdc_Bool computeStackDepth ) 
{
    return ti_sysbios_hal_Hwi_getStackInfo__F(stkInfo, computeStackDepth);
}

/* Module_startup */
xdc_Int ti_sysbios_hal_Hwi_Module_startup__E( xdc_Int state )
{
    return ti_sysbios_hal_Hwi_Module_startup__F(state);
}

/* Module_startup */
xdc_Int ti_sysbios_hal_Timer_Module_startup__E( xdc_Int state )
{
    return ti_sysbios_hal_Timer_Module_startup__F(state);
}

/* Module_startup */
xdc_Int ti_sysbios_knl_Clock_Module_startup__E( xdc_Int state )
{
    return ti_sysbios_knl_Clock_Module_startup__F(state);
}

/* Module_startup */
xdc_Int ti_sysbios_knl_Swi_Module_startup__E( xdc_Int state )
{
    return ti_sysbios_knl_Swi_Module_startup__F(state);
}

/* Module_startup */
xdc_Int ti_sysbios_knl_Task_Module_startup__E( xdc_Int state )
{
    return ti_sysbios_knl_Task_Module_startup__F(state);
}

/* Module_startup */
xdc_Int ti_sysbios_timers_timer64_Timer_Module_startup__E( xdc_Int state )
{
    return ti_sysbios_timers_timer64_Timer_Module_startup__F(state);
}


/*
 * ======== ti.sysbios.xdcruntime.SemThreadSupport FUNCTION STUBS ========
 */

/* pend__E */
xdc_Int ti_sysbios_xdcruntime_SemThreadSupport_pend__E( ti_sysbios_xdcruntime_SemThreadSupport_Handle __inst, xdc_UInt timeout, xdc_runtime_Error_Block* eb ) 
{
    return ti_sysbios_xdcruntime_SemThreadSupport_pend__F((void*)__inst, timeout, eb);
}

/* post__E */
xdc_Bool ti_sysbios_xdcruntime_SemThreadSupport_post__E( ti_sysbios_xdcruntime_SemThreadSupport_Handle __inst, xdc_runtime_Error_Block* eb ) 
{
    return ti_sysbios_xdcruntime_SemThreadSupport_post__F((void*)__inst, eb);
}


/*
 * ======== xdc.runtime.Diags FUNCTION STUBS ========
 */

/* setMask__E */
xdc_Void xdc_runtime_Diags_setMask__E( xdc_String control ) 
{
    xdc_runtime_Diags_setMask__F(control);
}


/*
 * ======== xdc.runtime.Error FUNCTION STUBS ========
 */

/* check__E */
xdc_Bool xdc_runtime_Error_check__E( xdc_runtime_Error_Block* eb ) 
{
    return xdc_runtime_Error_check__F(eb);
}

/* getData__E */
xdc_runtime_Error_Data* xdc_runtime_Error_getData__E( xdc_runtime_Error_Block* eb ) 
{
    return xdc_runtime_Error_getData__F(eb);
}

/* getCode__E */
xdc_UInt16 xdc_runtime_Error_getCode__E( xdc_runtime_Error_Block* eb ) 
{
    return xdc_runtime_Error_getCode__F(eb);
}

/* getId__E */
xdc_runtime_Error_Id xdc_runtime_Error_getId__E( xdc_runtime_Error_Block* eb ) 
{
    return xdc_runtime_Error_getId__F(eb);
}

/* getMsg__E */
xdc_String xdc_runtime_Error_getMsg__E( xdc_runtime_Error_Block* eb ) 
{
    return xdc_runtime_Error_getMsg__F(eb);
}

/* getSite__E */
xdc_runtime_Types_Site* xdc_runtime_Error_getSite__E( xdc_runtime_Error_Block* eb ) 
{
    return xdc_runtime_Error_getSite__F(eb);
}

/* init__E */
xdc_Void xdc_runtime_Error_init__E( xdc_runtime_Error_Block* eb ) 
{
    xdc_runtime_Error_init__F(eb);
}

/* print__E */
xdc_Void xdc_runtime_Error_print__E( xdc_runtime_Error_Block* eb ) 
{
    xdc_runtime_Error_print__F(eb);
}

/* raiseX__E */
xdc_Void xdc_runtime_Error_raiseX__E( xdc_runtime_Error_Block* eb, xdc_runtime_Types_ModuleId mod, xdc_String file, xdc_Int line, xdc_runtime_Error_Id id, xdc_IArg arg1, xdc_IArg arg2 ) 
{
    xdc_runtime_Error_raiseX__F(eb, mod, file, line, id, arg1, arg2);
}


/*
 * ======== xdc.runtime.Gate FUNCTION STUBS ========
 */

/* enterSystem__E */
xdc_IArg xdc_runtime_Gate_enterSystem__E( void ) 
{
    return xdc_runtime_Gate_enterSystem__F();
}

/* leaveSystem__E */
xdc_Void xdc_runtime_Gate_leaveSystem__E( xdc_IArg key ) 
{
    xdc_runtime_Gate_leaveSystem__F(key);
}


/*
 * ======== xdc.runtime.Log FUNCTION STUBS ========
 */

/* doPrint__E */
xdc_Void xdc_runtime_Log_doPrint__E( xdc_runtime_Log_EventRec* evRec ) 
{
    xdc_runtime_Log_doPrint__F(evRec);
}


/*
 * ======== xdc.runtime.Memory FUNCTION STUBS ========
 */

/* alloc__E */
xdc_Ptr xdc_runtime_Memory_alloc__E( xdc_runtime_IHeap_Handle heap, xdc_SizeT size, xdc_SizeT align, xdc_runtime_Error_Block* eb ) 
{
    return xdc_runtime_Memory_alloc__F(heap, size, align, eb);
}

/* calloc__E */
xdc_Ptr xdc_runtime_Memory_calloc__E( xdc_runtime_IHeap_Handle heap, xdc_SizeT size, xdc_SizeT align, xdc_runtime_Error_Block* eb ) 
{
    return xdc_runtime_Memory_calloc__F(heap, size, align, eb);
}

/* free__E */
xdc_Void xdc_runtime_Memory_free__E( xdc_runtime_IHeap_Handle heap, xdc_Ptr block, xdc_SizeT size ) 
{
    xdc_runtime_Memory_free__F(heap, block, size);
}

/* getStats__E */
xdc_Void xdc_runtime_Memory_getStats__E( xdc_runtime_IHeap_Handle heap, xdc_runtime_Memory_Stats* stats ) 
{
    xdc_runtime_Memory_getStats__F(heap, stats);
}

/* query__E */
xdc_Bool xdc_runtime_Memory_query__E( xdc_runtime_IHeap_Handle heap, xdc_Int qual ) 
{
    return xdc_runtime_Memory_query__F(heap, qual);
}

/* getMaxDefaultTypeAlign__E */
xdc_SizeT xdc_runtime_Memory_getMaxDefaultTypeAlign__E( void ) 
{
    return xdc_runtime_Memory_getMaxDefaultTypeAlign__F();
}

/* valloc__E */
xdc_Ptr xdc_runtime_Memory_valloc__E( xdc_runtime_IHeap_Handle heap, xdc_SizeT size, xdc_SizeT align, xdc_Char value, xdc_runtime_Error_Block* eb ) 
{
    return xdc_runtime_Memory_valloc__F(heap, size, align, value, eb);
}


/*
 * ======== xdc.runtime.Registry FUNCTION STUBS ========
 */

/* addModule__E */
xdc_runtime_Registry_Result xdc_runtime_Registry_addModule__E( xdc_runtime_Registry_Desc* desc, xdc_String modName ) 
{
    return xdc_runtime_Registry_addModule__F(desc, modName);
}

/* findByName__E */
xdc_runtime_Registry_Desc* xdc_runtime_Registry_findByName__E( xdc_String modName ) 
{
    return xdc_runtime_Registry_findByName__F(modName);
}

/* findByNamePattern__E */
xdc_runtime_Registry_Desc* xdc_runtime_Registry_findByNamePattern__E( xdc_String namePat, xdc_Int len, xdc_runtime_Registry_Desc* prev ) 
{
    return xdc_runtime_Registry_findByNamePattern__F(namePat, len, prev);
}

/* findById__E */
xdc_runtime_Registry_Desc* xdc_runtime_Registry_findById__E( xdc_runtime_Types_ModuleId mid ) 
{
    return xdc_runtime_Registry_findById__F(mid);
}

/* getMask__E */
xdc_Bool xdc_runtime_Registry_getMask__E( xdc_String name, xdc_runtime_Types_DiagsMask* mask ) 
{
    return xdc_runtime_Registry_getMask__F(name, mask);
}

/* isMember__E */
xdc_Bool xdc_runtime_Registry_isMember__E( xdc_runtime_Types_ModuleId mid ) 
{
    return xdc_runtime_Registry_isMember__F(mid);
}

/* getNextModule__E */
xdc_runtime_Registry_Desc* xdc_runtime_Registry_getNextModule__E( xdc_runtime_Registry_Desc* desc ) 
{
    return xdc_runtime_Registry_getNextModule__F(desc);
}

/* getModuleName__E */
xdc_String xdc_runtime_Registry_getModuleName__E( xdc_runtime_Registry_Desc* desc ) 
{
    return xdc_runtime_Registry_getModuleName__F(desc);
}

/* getModuleId__E */
xdc_runtime_Types_ModuleId xdc_runtime_Registry_getModuleId__E( xdc_runtime_Registry_Desc* desc ) 
{
    return xdc_runtime_Registry_getModuleId__F(desc);
}


/*
 * ======== xdc.runtime.Startup FUNCTION STUBS ========
 */

/* exec__E */
xdc_Void xdc_runtime_Startup_exec__E( void ) 
{
    xdc_runtime_Startup_exec__F();
}

/* rtsDone__E */
xdc_Bool xdc_runtime_Startup_rtsDone__E( void ) 
{
    return xdc_runtime_Startup_rtsDone__F();
}


/*
 * ======== xdc.runtime.SysMin FUNCTION STUBS ========
 */

/* abort__E */
xdc_Void xdc_runtime_SysMin_abort__E( xdc_String str ) 
{
    xdc_runtime_SysMin_abort__F(str);
}

/* exit__E */
xdc_Void xdc_runtime_SysMin_exit__E( xdc_Int stat ) 
{
    xdc_runtime_SysMin_exit__F(stat);
}

/* flush__E */
xdc_Void xdc_runtime_SysMin_flush__E( void ) 
{
    xdc_runtime_SysMin_flush__F();
}

/* putch__E */
xdc_Void xdc_runtime_SysMin_putch__E( xdc_Char ch ) 
{
    xdc_runtime_SysMin_putch__F(ch);
}

/* ready__E */
xdc_Bool xdc_runtime_SysMin_ready__E( void ) 
{
    return xdc_runtime_SysMin_ready__F();
}

/* Module_startup */
xdc_Int xdc_runtime_SysMin_Module_startup__E( xdc_Int state )
{
    return xdc_runtime_SysMin_Module_startup__F(state);
}


/*
 * ======== xdc.runtime.System FUNCTION STUBS ========
 */

/* abort__E */
xdc_Void xdc_runtime_System_abort__E( xdc_String str ) 
{
    xdc_runtime_System_abort__F(str);
}

/* atexit__E */
xdc_Bool xdc_runtime_System_atexit__E( xdc_runtime_System_AtexitHandler handler ) 
{
    return xdc_runtime_System_atexit__F(handler);
}

/* exit__E */
xdc_Void xdc_runtime_System_exit__E( xdc_Int stat ) 
{
    xdc_runtime_System_exit__F(stat);
}

/* putch__E */
xdc_Void xdc_runtime_System_putch__E( xdc_Char ch ) 
{
    xdc_runtime_System_putch__F(ch);
}

/* flush__E */
xdc_Void xdc_runtime_System_flush__E( void ) 
{
    xdc_runtime_System_flush__F();
}

/* printf_va__E */
xdc_Int xdc_runtime_System_printf_va__E( xdc_String fmt, va_list __va ) 
{
    return xdc_runtime_System_printf_va__F(fmt, __va);
}

/* printf__E */
xdc_Int xdc_runtime_System_printf__E( xdc_String fmt, ... ) 
{
    xdc_Int __ret;

    va_list __va; va_start(__va, fmt);
    __ret = xdc_runtime_System_printf_va__F(fmt, __va);

    va_end(__va);
    return __ret;
}

/* aprintf_va__E */
xdc_Int xdc_runtime_System_aprintf_va__E( xdc_String fmt, va_list __va ) 
{
    return xdc_runtime_System_aprintf_va__F(fmt, __va);
}

/* aprintf__E */
xdc_Int xdc_runtime_System_aprintf__E( xdc_String fmt, ... ) 
{
    xdc_Int __ret;

    va_list __va; va_start(__va, fmt);
    __ret = xdc_runtime_System_aprintf_va__F(fmt, __va);

    va_end(__va);
    return __ret;
}

/* sprintf_va__E */
xdc_Int xdc_runtime_System_sprintf_va__E( xdc_Char buf[], xdc_String fmt, va_list __va ) 
{
    return xdc_runtime_System_sprintf_va__F(buf, fmt, __va);
}

/* sprintf__E */
xdc_Int xdc_runtime_System_sprintf__E( xdc_Char buf[], xdc_String fmt, ... ) 
{
    xdc_Int __ret;

    va_list __va; va_start(__va, fmt);
    __ret = xdc_runtime_System_sprintf_va__F(buf, fmt, __va);

    va_end(__va);
    return __ret;
}

/* asprintf_va__E */
xdc_Int xdc_runtime_System_asprintf_va__E( xdc_Char buf[], xdc_String fmt, va_list __va ) 
{
    return xdc_runtime_System_asprintf_va__F(buf, fmt, __va);
}

/* asprintf__E */
xdc_Int xdc_runtime_System_asprintf__E( xdc_Char buf[], xdc_String fmt, ... ) 
{
    xdc_Int __ret;

    va_list __va; va_start(__va, fmt);
    __ret = xdc_runtime_System_asprintf_va__F(buf, fmt, __va);

    va_end(__va);
    return __ret;
}

/* vprintf__E */
xdc_Int xdc_runtime_System_vprintf__E( xdc_String fmt, xdc_VaList va ) 
{
    return xdc_runtime_System_vprintf__F(fmt, va);
}

/* avprintf__E */
xdc_Int xdc_runtime_System_avprintf__E( xdc_String fmt, xdc_VaList va ) 
{
    return xdc_runtime_System_avprintf__F(fmt, va);
}

/* vsprintf__E */
xdc_Int xdc_runtime_System_vsprintf__E( xdc_Char buf[], xdc_String fmt, xdc_VaList va ) 
{
    return xdc_runtime_System_vsprintf__F(buf, fmt, va);
}

/* avsprintf__E */
xdc_Int xdc_runtime_System_avsprintf__E( xdc_Char buf[], xdc_String fmt, xdc_VaList va ) 
{
    return xdc_runtime_System_avsprintf__F(buf, fmt, va);
}

/* Module_startup */
xdc_Int xdc_runtime_System_Module_startup__E( xdc_Int state )
{
    return xdc_runtime_System_Module_startup__F(state);
}


/*
 * ======== xdc.runtime.Text FUNCTION STUBS ========
 */

/* cordText__E */
xdc_String xdc_runtime_Text_cordText__E( xdc_runtime_Text_CordAddr cord ) 
{
    return xdc_runtime_Text_cordText__F(cord);
}

/* ropeText__E */
xdc_String xdc_runtime_Text_ropeText__E( xdc_runtime_Text_RopeId rope ) 
{
    return xdc_runtime_Text_ropeText__F(rope);
}

/* matchRope__E */
xdc_Int xdc_runtime_Text_matchRope__E( xdc_runtime_Text_RopeId rope, xdc_String pat, xdc_Int* lenp ) 
{
    return xdc_runtime_Text_matchRope__F(rope, pat, lenp);
}

/* putLab__E */
xdc_Int xdc_runtime_Text_putLab__E( xdc_runtime_Types_Label* lab, xdc_Char** bufp, xdc_Int len ) 
{
    return xdc_runtime_Text_putLab__F(lab, bufp, len);
}

/* putMod__E */
xdc_Int xdc_runtime_Text_putMod__E( xdc_runtime_Types_ModuleId mid, xdc_Char** bufp, xdc_Int len ) 
{
    return xdc_runtime_Text_putMod__F(mid, bufp, len);
}

/* putSite__E */
xdc_Int xdc_runtime_Text_putSite__E( xdc_runtime_Types_Site* site, xdc_Char** bufp, xdc_Int len ) 
{
    return xdc_runtime_Text_putSite__F(site, bufp, len);
}


/*
 * ======== xdc.runtime.knl.SemThread FUNCTION STUBS ========
 */

/* pend__E */
xdc_Int xdc_runtime_knl_SemThread_pend__E( xdc_runtime_knl_SemThread_Handle __inst, xdc_UInt timeout, xdc_runtime_Error_Block* eb ) 
{
    return xdc_runtime_knl_SemThread_pend__F((void*)__inst, timeout, eb);
}

/* post__E */
xdc_Bool xdc_runtime_knl_SemThread_post__E( xdc_runtime_knl_SemThread_Handle __inst, xdc_runtime_Error_Block* eb ) 
{
    return xdc_runtime_knl_SemThread_post__F((void*)__inst, eb);
}


/*
 * ======== xdc.runtime.knl.Sync FUNCTION STUBS ========
 */

/* query__E */
xdc_Bool xdc_runtime_knl_Sync_query__E( xdc_runtime_knl_ISync_Handle sync, xdc_Int qual ) 
{
    return xdc_runtime_knl_Sync_query__F(sync, qual);
}

/* signal__E */
xdc_Void xdc_runtime_knl_Sync_signal__E( xdc_runtime_knl_ISync_Handle sync ) 
{
    xdc_runtime_knl_Sync_signal__F(sync);
}

/* wait__E */
xdc_Int xdc_runtime_knl_Sync_wait__E( xdc_runtime_knl_ISync_Handle sync, xdc_UInt timeout, xdc_runtime_Error_Block* eb ) 
{
    return xdc_runtime_knl_Sync_wait__F(sync, timeout, eb);
}


/*
 * ======== xdc.runtime.knl.SyncNull FUNCTION STUBS ========
 */

/* query__E */
xdc_Bool xdc_runtime_knl_SyncNull_query__E( xdc_runtime_knl_SyncNull_Handle __inst, xdc_Int qual ) 
{
    return xdc_runtime_knl_SyncNull_query__F((void*)__inst, qual);
}

/* signal__E */
xdc_Void xdc_runtime_knl_SyncNull_signal__E( xdc_runtime_knl_SyncNull_Handle __inst ) 
{
    xdc_runtime_knl_SyncNull_signal__F((void*)__inst);
}

/* wait__E */
xdc_Int xdc_runtime_knl_SyncNull_wait__E( xdc_runtime_knl_SyncNull_Handle __inst, xdc_UInt timeout, xdc_runtime_Error_Block* eb ) 
{
    return xdc_runtime_knl_SyncNull_wait__F((void*)__inst, timeout, eb);
}


/*
 * ======== xdc.runtime.knl.SyncSemThread FUNCTION STUBS ========
 */

/* query__E */
xdc_Bool xdc_runtime_knl_SyncSemThread_query__E( xdc_runtime_knl_SyncSemThread_Handle __inst, xdc_Int qual ) 
{
    return xdc_runtime_knl_SyncSemThread_query__F((void*)__inst, qual);
}

/* signal__E */
xdc_Void xdc_runtime_knl_SyncSemThread_signal__E( xdc_runtime_knl_SyncSemThread_Handle __inst ) 
{
    xdc_runtime_knl_SyncSemThread_signal__F((void*)__inst);
}

/* wait__E */
xdc_Int xdc_runtime_knl_SyncSemThread_wait__E( xdc_runtime_knl_SyncSemThread_Handle __inst, xdc_UInt timeout, xdc_runtime_Error_Block* eb ) 
{
    return xdc_runtime_knl_SyncSemThread_wait__F((void*)__inst, timeout, eb);
}


/*
 * ======== ti.sdo.utils.NameServer_SetupProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sdo.utils.NameServerRemoteNull */

/* Module__startupDone__S */
xdc_Bool ti_sdo_utils_NameServer_SetupProxy_Module__startupDone__S( void ) 
{
    return ti_sdo_utils_NameServerRemoteNull_Module__startupDone__S();
}

/* Object__create__S */
xdc_Ptr ti_sdo_utils_NameServer_SetupProxy_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const ti_sdo_utils_NameServer_SetupProxy___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    return ti_sdo_utils_NameServerRemoteNull_Object__create__S(oa, osz, aa, (ti_sdo_utils_NameServerRemoteNull___ParamsPtr)pa, sizeof(ti_sdo_utils_INameServerRemote_Params), eb);
}

/* Object__delete__S */
void ti_sdo_utils_NameServer_SetupProxy_Object__delete__S( Ptr instp ) 
{
    ti_sdo_utils_NameServerRemoteNull_Object__delete__S(instp);
}

/* Params__init__S */
void ti_sdo_utils_NameServer_SetupProxy_Params__init__S( xdc_Ptr dst, const xdc_Ptr src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sdo_utils_NameServerRemoteNull_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label* ti_sdo_utils_NameServer_SetupProxy_Handle__label__S( Ptr obj, xdc_runtime_Types_Label* lab )
{
    return ti_sdo_utils_NameServerRemoteNull_Handle__label__S(obj, lab);
}

/* attach__E */
xdc_Int ti_sdo_utils_NameServer_SetupProxy_attach__E( xdc_UInt16 remoteProcId, xdc_Ptr sharedAddr )
{
    return ti_sdo_utils_NameServerRemoteNull_attach(remoteProcId, sharedAddr);
}

/* detach__E */
xdc_Int ti_sdo_utils_NameServer_SetupProxy_detach__E( xdc_UInt16 remoteProcId )
{
    return ti_sdo_utils_NameServerRemoteNull_detach(remoteProcId);
}

/* sharedMemReq__E */
xdc_SizeT ti_sdo_utils_NameServer_SetupProxy_sharedMemReq__E( xdc_Ptr sharedAddr )
{
    return ti_sdo_utils_NameServerRemoteNull_sharedMemReq(sharedAddr);
}

/* get__E */
xdc_Int ti_sdo_utils_NameServer_SetupProxy_get__E( ti_sdo_utils_NameServer_SetupProxy_Handle __inst, xdc_String instanceName, xdc_String name, xdc_Ptr value, xdc_UInt32* valueLen, xdc_runtime_knl_ISync_Handle syncHandle, xdc_runtime_Error_Block* eb )
{
    return ti_sdo_utils_NameServerRemoteNull_get((ti_sdo_utils_NameServerRemoteNull_Handle)__inst, instanceName, name, value, valueLen, syncHandle, eb);
}


/*
 * ======== ti.sysbios.BIOS_RtsGateProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.gates.GateMutex */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_BIOS_RtsGateProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_gates_GateMutex_Module__startupDone__S();
}

/* Object__create__S */
xdc_Ptr ti_sysbios_BIOS_RtsGateProxy_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const ti_sysbios_BIOS_RtsGateProxy___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    return ti_sysbios_gates_GateMutex_Object__create__S(oa, osz, aa, (ti_sysbios_gates_GateMutex___ParamsPtr)pa, sizeof(xdc_runtime_IGateProvider_Params), eb);
}

/* Object__delete__S */
void ti_sysbios_BIOS_RtsGateProxy_Object__delete__S( Ptr instp ) 
{
    ti_sysbios_gates_GateMutex_Object__delete__S(instp);
}

/* Params__init__S */
void ti_sysbios_BIOS_RtsGateProxy_Params__init__S( xdc_Ptr dst, const xdc_Ptr src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_gates_GateMutex_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label* ti_sysbios_BIOS_RtsGateProxy_Handle__label__S( Ptr obj, xdc_runtime_Types_Label* lab )
{
    return ti_sysbios_gates_GateMutex_Handle__label__S(obj, lab);
}

/* query__E */
xdc_Bool ti_sysbios_BIOS_RtsGateProxy_query__E( xdc_Int qual )
{
    return ti_sysbios_gates_GateMutex_query(qual);
}

/* enter__E */
xdc_IArg ti_sysbios_BIOS_RtsGateProxy_enter__E( ti_sysbios_BIOS_RtsGateProxy_Handle __inst )
{
    return ti_sysbios_gates_GateMutex_enter((ti_sysbios_gates_GateMutex_Handle)__inst);
}

/* leave__E */
xdc_Void ti_sysbios_BIOS_RtsGateProxy_leave__E( ti_sysbios_BIOS_RtsGateProxy_Handle __inst, xdc_IArg key )
{
    ti_sysbios_gates_GateMutex_leave((ti_sysbios_gates_GateMutex_Handle)__inst, key);
}


/*
 * ======== ti.sysbios.hal.Cache_CacheProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.family.arm.arm9.Cache */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_hal_Cache_CacheProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_family_arm_arm9_Cache_Module__startupDone__S();
}

/* enable__E */
xdc_Void ti_sysbios_hal_Cache_CacheProxy_enable__E( xdc_Bits16 type )
{
    ti_sysbios_family_arm_arm9_Cache_enable(type);
}

/* disable__E */
xdc_Void ti_sysbios_hal_Cache_CacheProxy_disable__E( xdc_Bits16 type )
{
    ti_sysbios_family_arm_arm9_Cache_disable(type);
}

/* inv__E */
xdc_Void ti_sysbios_hal_Cache_CacheProxy_inv__E( xdc_Ptr blockPtr, xdc_SizeT byteCnt, xdc_Bits16 type, xdc_Bool wait )
{
    ti_sysbios_family_arm_arm9_Cache_inv(blockPtr, byteCnt, type, wait);
}

/* wb__E */
xdc_Void ti_sysbios_hal_Cache_CacheProxy_wb__E( xdc_Ptr blockPtr, xdc_SizeT byteCnt, xdc_Bits16 type, xdc_Bool wait )
{
    ti_sysbios_family_arm_arm9_Cache_wb(blockPtr, byteCnt, type, wait);
}

/* wbInv__E */
xdc_Void ti_sysbios_hal_Cache_CacheProxy_wbInv__E( xdc_Ptr blockPtr, xdc_SizeT byteCnt, xdc_Bits16 type, xdc_Bool wait )
{
    ti_sysbios_family_arm_arm9_Cache_wbInv(blockPtr, byteCnt, type, wait);
}

/* wbAll__E */
xdc_Void ti_sysbios_hal_Cache_CacheProxy_wbAll__E( void )
{
    ti_sysbios_family_arm_arm9_Cache_wbAll();
}

/* wbInvAll__E */
xdc_Void ti_sysbios_hal_Cache_CacheProxy_wbInvAll__E( void )
{
    ti_sysbios_family_arm_arm9_Cache_wbInvAll();
}

/* wait__E */
xdc_Void ti_sysbios_hal_Cache_CacheProxy_wait__E( void )
{
    ti_sysbios_family_arm_arm9_Cache_wait();
}


/*
 * ======== ti.sysbios.hal.Hwi_HwiProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.family.arm.dm6446.Hwi */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_hal_Hwi_HwiProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_family_arm_dm6446_Hwi_Module__startupDone__S();
}

/* Object__create__S */
xdc_Ptr ti_sysbios_hal_Hwi_HwiProxy_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const ti_sysbios_hal_Hwi_HwiProxy___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    return ti_sysbios_family_arm_dm6446_Hwi_Object__create__S(oa, osz, aa, (ti_sysbios_family_arm_dm6446_Hwi___ParamsPtr)pa, sizeof(ti_sysbios_interfaces_IHwi_Params), eb);
}

/* Object__delete__S */
void ti_sysbios_hal_Hwi_HwiProxy_Object__delete__S( Ptr instp ) 
{
    ti_sysbios_family_arm_dm6446_Hwi_Object__delete__S(instp);
}

/* Params__init__S */
void ti_sysbios_hal_Hwi_HwiProxy_Params__init__S( xdc_Ptr dst, const xdc_Ptr src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_family_arm_dm6446_Hwi_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label* ti_sysbios_hal_Hwi_HwiProxy_Handle__label__S( Ptr obj, xdc_runtime_Types_Label* lab )
{
    return ti_sysbios_family_arm_dm6446_Hwi_Handle__label__S(obj, lab);
}

/* getStackInfo__E */
xdc_Bool ti_sysbios_hal_Hwi_HwiProxy_getStackInfo__E( ti_sysbios_interfaces_IHwi_StackInfo* stkInfo, xdc_Bool computeStackDepth )
{
    return ti_sysbios_family_arm_dm6446_Hwi_getStackInfo(stkInfo, computeStackDepth);
}

/* startup__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_startup__E( void )
{
    ti_sysbios_family_arm_dm6446_Hwi_startup();
}

/* disable__E */
xdc_UInt ti_sysbios_hal_Hwi_HwiProxy_disable__E( void )
{
    return ti_sysbios_family_arm_dm6446_Hwi_disable();
}

/* enable__E */
xdc_UInt ti_sysbios_hal_Hwi_HwiProxy_enable__E( void )
{
    return ti_sysbios_family_arm_dm6446_Hwi_enable();
}

/* restore__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_restore__E( xdc_UInt key )
{
    ti_sysbios_family_arm_dm6446_Hwi_restore(key);
}

/* switchFromBootStack__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_switchFromBootStack__E( void )
{
    ti_sysbios_family_arm_dm6446_Hwi_switchFromBootStack();
}

/* post__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_post__E( xdc_UInt intNum )
{
    ti_sysbios_family_arm_dm6446_Hwi_post(intNum);
}

/* getTaskSP__E */
xdc_Char* ti_sysbios_hal_Hwi_HwiProxy_getTaskSP__E( void )
{
    return ti_sysbios_family_arm_dm6446_Hwi_getTaskSP();
}

/* disableInterrupt__E */
xdc_UInt ti_sysbios_hal_Hwi_HwiProxy_disableInterrupt__E( xdc_UInt intNum )
{
    return ti_sysbios_family_arm_dm6446_Hwi_disableInterrupt(intNum);
}

/* enableInterrupt__E */
xdc_UInt ti_sysbios_hal_Hwi_HwiProxy_enableInterrupt__E( xdc_UInt intNum )
{
    return ti_sysbios_family_arm_dm6446_Hwi_enableInterrupt(intNum);
}

/* restoreInterrupt__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_restoreInterrupt__E( xdc_UInt intNum, xdc_UInt key )
{
    ti_sysbios_family_arm_dm6446_Hwi_restoreInterrupt(intNum, key);
}

/* clearInterrupt__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_clearInterrupt__E( xdc_UInt intNum )
{
    ti_sysbios_family_arm_dm6446_Hwi_clearInterrupt(intNum);
}

/* getFunc__E */
ti_sysbios_interfaces_IHwi_FuncPtr ti_sysbios_hal_Hwi_HwiProxy_getFunc__E( ti_sysbios_hal_Hwi_HwiProxy_Handle __inst, xdc_UArg* arg )
{
    return ti_sysbios_family_arm_dm6446_Hwi_getFunc((ti_sysbios_family_arm_dm6446_Hwi_Handle)__inst, arg);
}

/* setFunc__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_setFunc__E( ti_sysbios_hal_Hwi_HwiProxy_Handle __inst, ti_sysbios_interfaces_IHwi_FuncPtr fxn, xdc_UArg arg )
{
    ti_sysbios_family_arm_dm6446_Hwi_setFunc((ti_sysbios_family_arm_dm6446_Hwi_Handle)__inst, fxn, arg);
}

/* getHookContext__E */
xdc_Ptr ti_sysbios_hal_Hwi_HwiProxy_getHookContext__E( ti_sysbios_hal_Hwi_HwiProxy_Handle __inst, xdc_Int id )
{
    return ti_sysbios_family_arm_dm6446_Hwi_getHookContext((ti_sysbios_family_arm_dm6446_Hwi_Handle)__inst, id);
}

/* setHookContext__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_setHookContext__E( ti_sysbios_hal_Hwi_HwiProxy_Handle __inst, xdc_Int id, xdc_Ptr hookContext )
{
    ti_sysbios_family_arm_dm6446_Hwi_setHookContext((ti_sysbios_family_arm_dm6446_Hwi_Handle)__inst, id, hookContext);
}

/* getIrp__E */
ti_sysbios_interfaces_IHwi_Irp ti_sysbios_hal_Hwi_HwiProxy_getIrp__E( ti_sysbios_hal_Hwi_HwiProxy_Handle __inst )
{
    return ti_sysbios_family_arm_dm6446_Hwi_getIrp((ti_sysbios_family_arm_dm6446_Hwi_Handle)__inst);
}


/*
 * ======== ti.sysbios.hal.Timer_TimerProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.timers.timer64.Timer */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_hal_Timer_TimerProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_timers_timer64_Timer_Module__startupDone__S();
}

/* Object__create__S */
xdc_Ptr ti_sysbios_hal_Timer_TimerProxy_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const ti_sysbios_hal_Timer_TimerProxy___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    return ti_sysbios_timers_timer64_Timer_Object__create__S(oa, osz, aa, (ti_sysbios_timers_timer64_Timer___ParamsPtr)pa, sizeof(ti_sysbios_interfaces_ITimer_Params), eb);
}

/* Object__delete__S */
void ti_sysbios_hal_Timer_TimerProxy_Object__delete__S( Ptr instp ) 
{
    ti_sysbios_timers_timer64_Timer_Object__delete__S(instp);
}

/* Params__init__S */
void ti_sysbios_hal_Timer_TimerProxy_Params__init__S( xdc_Ptr dst, const xdc_Ptr src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_timers_timer64_Timer_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label* ti_sysbios_hal_Timer_TimerProxy_Handle__label__S( Ptr obj, xdc_runtime_Types_Label* lab )
{
    return ti_sysbios_timers_timer64_Timer_Handle__label__S(obj, lab);
}

/* getNumTimers__E */
xdc_UInt ti_sysbios_hal_Timer_TimerProxy_getNumTimers__E( void )
{
    return ti_sysbios_timers_timer64_Timer_getNumTimers();
}

/* getStatus__E */
ti_sysbios_interfaces_ITimer_Status ti_sysbios_hal_Timer_TimerProxy_getStatus__E( xdc_UInt id )
{
    return ti_sysbios_timers_timer64_Timer_getStatus(id);
}

/* startup__E */
xdc_Void ti_sysbios_hal_Timer_TimerProxy_startup__E( void )
{
    ti_sysbios_timers_timer64_Timer_startup();
}

/* getMaxTicks__E */
xdc_UInt32 ti_sysbios_hal_Timer_TimerProxy_getMaxTicks__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst, xdc_UInt32 periodCounts )
{
    return ti_sysbios_timers_timer64_Timer_getMaxTicks((ti_sysbios_timers_timer64_Timer_Handle)__inst, periodCounts);
}

/* setNextTick__E */
xdc_Void ti_sysbios_hal_Timer_TimerProxy_setNextTick__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst, xdc_UInt32 newPeriod, xdc_UInt32 countsPerTick )
{
    ti_sysbios_timers_timer64_Timer_setNextTick((ti_sysbios_timers_timer64_Timer_Handle)__inst, newPeriod, countsPerTick);
}

/* start__E */
xdc_Void ti_sysbios_hal_Timer_TimerProxy_start__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst )
{
    ti_sysbios_timers_timer64_Timer_start((ti_sysbios_timers_timer64_Timer_Handle)__inst);
}

/* stop__E */
xdc_Void ti_sysbios_hal_Timer_TimerProxy_stop__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst )
{
    ti_sysbios_timers_timer64_Timer_stop((ti_sysbios_timers_timer64_Timer_Handle)__inst);
}

/* setPeriod__E */
xdc_Void ti_sysbios_hal_Timer_TimerProxy_setPeriod__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst, xdc_UInt32 period )
{
    ti_sysbios_timers_timer64_Timer_setPeriod((ti_sysbios_timers_timer64_Timer_Handle)__inst, period);
}

/* setPeriodMicroSecs__E */
xdc_Bool ti_sysbios_hal_Timer_TimerProxy_setPeriodMicroSecs__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst, xdc_UInt32 microsecs )
{
    return ti_sysbios_timers_timer64_Timer_setPeriodMicroSecs((ti_sysbios_timers_timer64_Timer_Handle)__inst, microsecs);
}

/* getPeriod__E */
xdc_UInt32 ti_sysbios_hal_Timer_TimerProxy_getPeriod__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst )
{
    return ti_sysbios_timers_timer64_Timer_getPeriod((ti_sysbios_timers_timer64_Timer_Handle)__inst);
}

/* getCount__E */
xdc_UInt32 ti_sysbios_hal_Timer_TimerProxy_getCount__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst )
{
    return ti_sysbios_timers_timer64_Timer_getCount((ti_sysbios_timers_timer64_Timer_Handle)__inst);
}

/* getFreq__E */
xdc_Void ti_sysbios_hal_Timer_TimerProxy_getFreq__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst, xdc_runtime_Types_FreqHz* freq )
{
    ti_sysbios_timers_timer64_Timer_getFreq((ti_sysbios_timers_timer64_Timer_Handle)__inst, freq);
}

/* getFunc__E */
ti_sysbios_interfaces_ITimer_FuncPtr ti_sysbios_hal_Timer_TimerProxy_getFunc__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst, xdc_UArg* arg )
{
    return ti_sysbios_timers_timer64_Timer_getFunc((ti_sysbios_timers_timer64_Timer_Handle)__inst, arg);
}

/* setFunc__E */
xdc_Void ti_sysbios_hal_Timer_TimerProxy_setFunc__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst, ti_sysbios_interfaces_ITimer_FuncPtr fxn, xdc_UArg arg )
{
    ti_sysbios_timers_timer64_Timer_setFunc((ti_sysbios_timers_timer64_Timer_Handle)__inst, fxn, arg);
}

/* trigger__E */
xdc_Void ti_sysbios_hal_Timer_TimerProxy_trigger__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst, xdc_UInt32 cycles )
{
    ti_sysbios_timers_timer64_Timer_trigger((ti_sysbios_timers_timer64_Timer_Handle)__inst, cycles);
}

/* getExpiredCounts__E */
xdc_UInt32 ti_sysbios_hal_Timer_TimerProxy_getExpiredCounts__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst )
{
    return ti_sysbios_timers_timer64_Timer_getExpiredCounts((ti_sysbios_timers_timer64_Timer_Handle)__inst);
}


/*
 * ======== ti.sysbios.heaps.HeapMem_Module_GateProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.gates.GateMutex */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_gates_GateMutex_Module__startupDone__S();
}

/* Object__create__S */
xdc_Ptr ti_sysbios_heaps_HeapMem_Module_GateProxy_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const ti_sysbios_heaps_HeapMem_Module_GateProxy___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    return ti_sysbios_gates_GateMutex_Object__create__S(oa, osz, aa, (ti_sysbios_gates_GateMutex___ParamsPtr)pa, sizeof(xdc_runtime_IGateProvider_Params), eb);
}

/* Object__delete__S */
void ti_sysbios_heaps_HeapMem_Module_GateProxy_Object__delete__S( Ptr instp ) 
{
    ti_sysbios_gates_GateMutex_Object__delete__S(instp);
}

/* Params__init__S */
void ti_sysbios_heaps_HeapMem_Module_GateProxy_Params__init__S( xdc_Ptr dst, const xdc_Ptr src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_gates_GateMutex_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label* ti_sysbios_heaps_HeapMem_Module_GateProxy_Handle__label__S( Ptr obj, xdc_runtime_Types_Label* lab )
{
    return ti_sysbios_gates_GateMutex_Handle__label__S(obj, lab);
}

/* query__E */
xdc_Bool ti_sysbios_heaps_HeapMem_Module_GateProxy_query__E( xdc_Int qual )
{
    return ti_sysbios_gates_GateMutex_query(qual);
}

/* enter__E */
xdc_IArg ti_sysbios_heaps_HeapMem_Module_GateProxy_enter__E( ti_sysbios_heaps_HeapMem_Module_GateProxy_Handle __inst )
{
    return ti_sysbios_gates_GateMutex_enter((ti_sysbios_gates_GateMutex_Handle)__inst);
}

/* leave__E */
xdc_Void ti_sysbios_heaps_HeapMem_Module_GateProxy_leave__E( ti_sysbios_heaps_HeapMem_Module_GateProxy_Handle __inst, xdc_IArg key )
{
    ti_sysbios_gates_GateMutex_leave((ti_sysbios_gates_GateMutex_Handle)__inst, key);
}


/*
 * ======== ti.sysbios.knl.Intrinsics_SupportProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.family.arm.IntrinsicsSupport */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Intrinsics_SupportProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_family_arm_IntrinsicsSupport_Module__startupDone__S();
}

/* maxbit__E */
xdc_UInt ti_sysbios_knl_Intrinsics_SupportProxy_maxbit__E( xdc_UInt bits )
{
    return ti_sysbios_family_arm_IntrinsicsSupport_maxbit(bits);
}


/*
 * ======== ti.sysbios.knl.Task_SupportProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.family.arm.TaskSupport */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Task_SupportProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_family_arm_TaskSupport_Module__startupDone__S();
}

/* start__E */
xdc_Ptr ti_sysbios_knl_Task_SupportProxy_start__E( xdc_Ptr curTask, ti_sysbios_interfaces_ITaskSupport_FuncPtr enter, ti_sysbios_interfaces_ITaskSupport_FuncPtr exit, xdc_runtime_Error_Block* eb )
{
    return ti_sysbios_family_arm_TaskSupport_start(curTask, enter, exit, eb);
}

/* swap__E */
xdc_Void ti_sysbios_knl_Task_SupportProxy_swap__E( xdc_Ptr* oldtskContext, xdc_Ptr* newtskContext )
{
    ti_sysbios_family_arm_TaskSupport_swap(oldtskContext, newtskContext);
}

/* checkStack__E */
xdc_Bool ti_sysbios_knl_Task_SupportProxy_checkStack__E( xdc_Char* stack, xdc_SizeT size )
{
    return ti_sysbios_family_arm_TaskSupport_checkStack(stack, size);
}

/* stackUsed__E */
xdc_SizeT ti_sysbios_knl_Task_SupportProxy_stackUsed__E( xdc_Char* stack, xdc_SizeT size )
{
    return ti_sysbios_family_arm_TaskSupport_stackUsed(stack, size);
}

/* getStackAlignment__E */
xdc_UInt ti_sysbios_knl_Task_SupportProxy_getStackAlignment__E( void )
{
    return ti_sysbios_family_arm_TaskSupport_getStackAlignment();
}

/* getDefaultStackSize__E */
xdc_SizeT ti_sysbios_knl_Task_SupportProxy_getDefaultStackSize__E( void )
{
    return ti_sysbios_family_arm_TaskSupport_getDefaultStackSize();
}


/*
 * ======== ti.sysbios.timers.timer64.Timer_TimerSupportProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.family.arm.dm6446.TimerSupport */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_timers_timer64_Timer_TimerSupportProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_family_arm_dm6446_TimerSupport_Module__startupDone__S();
}

/* enable__E */
xdc_Void ti_sysbios_timers_timer64_Timer_TimerSupportProxy_enable__E( xdc_UInt timerId, xdc_runtime_Error_Block* eb )
{
    ti_sysbios_family_arm_dm6446_TimerSupport_enable(timerId, eb);
}


/*
 * ======== xdc.runtime.Main_Module_GateProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.gates.GateHwi */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Main_Module_GateProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_gates_GateHwi_Module__startupDone__S();
}

/* Object__create__S */
xdc_Ptr xdc_runtime_Main_Module_GateProxy_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const xdc_runtime_Main_Module_GateProxy___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    return ti_sysbios_gates_GateHwi_Object__create__S(oa, osz, aa, (ti_sysbios_gates_GateHwi___ParamsPtr)pa, sizeof(xdc_runtime_IGateProvider_Params), eb);
}

/* Object__delete__S */
void xdc_runtime_Main_Module_GateProxy_Object__delete__S( Ptr instp ) 
{
    ti_sysbios_gates_GateHwi_Object__delete__S(instp);
}

/* Params__init__S */
void xdc_runtime_Main_Module_GateProxy_Params__init__S( xdc_Ptr dst, const xdc_Ptr src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_gates_GateHwi_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label* xdc_runtime_Main_Module_GateProxy_Handle__label__S( Ptr obj, xdc_runtime_Types_Label* lab )
{
    return ti_sysbios_gates_GateHwi_Handle__label__S(obj, lab);
}

/* query__E */
xdc_Bool xdc_runtime_Main_Module_GateProxy_query__E( xdc_Int qual )
{
    return ti_sysbios_gates_GateHwi_query(qual);
}

/* enter__E */
xdc_IArg xdc_runtime_Main_Module_GateProxy_enter__E( xdc_runtime_Main_Module_GateProxy_Handle __inst )
{
    return ti_sysbios_gates_GateHwi_enter((ti_sysbios_gates_GateHwi_Handle)__inst);
}

/* leave__E */
xdc_Void xdc_runtime_Main_Module_GateProxy_leave__E( xdc_runtime_Main_Module_GateProxy_Handle __inst, xdc_IArg key )
{
    ti_sysbios_gates_GateHwi_leave((ti_sysbios_gates_GateHwi_Handle)__inst, key);
}


/*
 * ======== xdc.runtime.Memory_HeapProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.heaps.HeapMem */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Memory_HeapProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_heaps_HeapMem_Module__startupDone__S();
}

/* Object__create__S */
xdc_Ptr xdc_runtime_Memory_HeapProxy_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const xdc_runtime_Memory_HeapProxy___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    return ti_sysbios_heaps_HeapMem_Object__create__S(oa, osz, aa, (ti_sysbios_heaps_HeapMem___ParamsPtr)pa, sizeof(xdc_runtime_IHeap_Params), eb);
}

/* Object__delete__S */
void xdc_runtime_Memory_HeapProxy_Object__delete__S( Ptr instp ) 
{
    ti_sysbios_heaps_HeapMem_Object__delete__S(instp);
}

/* Params__init__S */
void xdc_runtime_Memory_HeapProxy_Params__init__S( xdc_Ptr dst, const xdc_Ptr src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_heaps_HeapMem_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label* xdc_runtime_Memory_HeapProxy_Handle__label__S( Ptr obj, xdc_runtime_Types_Label* lab )
{
    return ti_sysbios_heaps_HeapMem_Handle__label__S(obj, lab);
}

/* alloc__E */
xdc_Ptr xdc_runtime_Memory_HeapProxy_alloc__E( xdc_runtime_Memory_HeapProxy_Handle __inst, xdc_SizeT size, xdc_SizeT align, xdc_runtime_Error_Block* eb )
{
    return xdc_runtime_IHeap_alloc((xdc_runtime_IHeap_Handle)__inst, size, align, eb);
}

/* free__E */
xdc_Void xdc_runtime_Memory_HeapProxy_free__E( xdc_runtime_Memory_HeapProxy_Handle __inst, xdc_Ptr block, xdc_SizeT size )
{
    xdc_runtime_IHeap_free((xdc_runtime_IHeap_Handle)__inst, block, size);
}

/* isBlocking__E */
xdc_Bool xdc_runtime_Memory_HeapProxy_isBlocking__E( xdc_runtime_Memory_HeapProxy_Handle __inst )
{
    return xdc_runtime_IHeap_isBlocking((xdc_runtime_IHeap_Handle)__inst);
}

/* getStats__E */
xdc_Void xdc_runtime_Memory_HeapProxy_getStats__E( xdc_runtime_Memory_HeapProxy_Handle __inst, xdc_runtime_Memory_Stats* stats )
{
    xdc_runtime_IHeap_getStats((xdc_runtime_IHeap_Handle)__inst, stats);
}


/*
 * ======== xdc.runtime.System_Module_GateProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.gates.GateHwi */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_System_Module_GateProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_gates_GateHwi_Module__startupDone__S();
}

/* Object__create__S */
xdc_Ptr xdc_runtime_System_Module_GateProxy_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const xdc_runtime_System_Module_GateProxy___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    return ti_sysbios_gates_GateHwi_Object__create__S(oa, osz, aa, (ti_sysbios_gates_GateHwi___ParamsPtr)pa, sizeof(xdc_runtime_IGateProvider_Params), eb);
}

/* Object__delete__S */
void xdc_runtime_System_Module_GateProxy_Object__delete__S( Ptr instp ) 
{
    ti_sysbios_gates_GateHwi_Object__delete__S(instp);
}

/* Params__init__S */
void xdc_runtime_System_Module_GateProxy_Params__init__S( xdc_Ptr dst, const xdc_Ptr src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_gates_GateHwi_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label* xdc_runtime_System_Module_GateProxy_Handle__label__S( Ptr obj, xdc_runtime_Types_Label* lab )
{
    return ti_sysbios_gates_GateHwi_Handle__label__S(obj, lab);
}

/* query__E */
xdc_Bool xdc_runtime_System_Module_GateProxy_query__E( xdc_Int qual )
{
    return ti_sysbios_gates_GateHwi_query(qual);
}

/* enter__E */
xdc_IArg xdc_runtime_System_Module_GateProxy_enter__E( xdc_runtime_System_Module_GateProxy_Handle __inst )
{
    return ti_sysbios_gates_GateHwi_enter((ti_sysbios_gates_GateHwi_Handle)__inst);
}

/* leave__E */
xdc_Void xdc_runtime_System_Module_GateProxy_leave__E( xdc_runtime_System_Module_GateProxy_Handle __inst, xdc_IArg key )
{
    ti_sysbios_gates_GateHwi_leave((ti_sysbios_gates_GateHwi_Handle)__inst, key);
}


/*
 * ======== xdc.runtime.System_SupportProxy PROXY BODY ========
 */

/* DELEGATES TO xdc.runtime.SysMin */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_System_SupportProxy_Module__startupDone__S( void ) 
{
    return xdc_runtime_SysMin_Module__startupDone__S();
}

/* abort__E */
xdc_Void xdc_runtime_System_SupportProxy_abort__E( xdc_String str )
{
    xdc_runtime_SysMin_abort(str);
}

/* exit__E */
xdc_Void xdc_runtime_System_SupportProxy_exit__E( xdc_Int stat )
{
    xdc_runtime_SysMin_exit(stat);
}

/* flush__E */
xdc_Void xdc_runtime_System_SupportProxy_flush__E( void )
{
    xdc_runtime_SysMin_flush();
}

/* putch__E */
xdc_Void xdc_runtime_System_SupportProxy_putch__E( xdc_Char ch )
{
    xdc_runtime_SysMin_putch(ch);
}

/* ready__E */
xdc_Bool xdc_runtime_System_SupportProxy_ready__E( void )
{
    return xdc_runtime_SysMin_ready();
}


/*
 * ======== xdc.runtime.knl.SemThread_Proxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.xdcruntime.SemThreadSupport */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_knl_SemThread_Proxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_xdcruntime_SemThreadSupport_Module__startupDone__S();
}

/* Object__create__S */
xdc_Ptr xdc_runtime_knl_SemThread_Proxy_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const xdc_runtime_knl_SemThread_Proxy___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    return ti_sysbios_xdcruntime_SemThreadSupport_Object__create__S(oa, osz, aa, (ti_sysbios_xdcruntime_SemThreadSupport___ParamsPtr)pa, sizeof(xdc_runtime_knl_ISemThreadSupport_Params), eb);
}

/* Object__delete__S */
void xdc_runtime_knl_SemThread_Proxy_Object__delete__S( Ptr instp ) 
{
    ti_sysbios_xdcruntime_SemThreadSupport_Object__delete__S(instp);
}

/* Params__init__S */
void xdc_runtime_knl_SemThread_Proxy_Params__init__S( xdc_Ptr dst, const xdc_Ptr src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_xdcruntime_SemThreadSupport_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label* xdc_runtime_knl_SemThread_Proxy_Handle__label__S( Ptr obj, xdc_runtime_Types_Label* lab )
{
    return ti_sysbios_xdcruntime_SemThreadSupport_Handle__label__S(obj, lab);
}

/* pend__E */
xdc_Int xdc_runtime_knl_SemThread_Proxy_pend__E( xdc_runtime_knl_SemThread_Proxy_Handle __inst, xdc_UInt timeout, xdc_runtime_Error_Block* eb )
{
    return ti_sysbios_xdcruntime_SemThreadSupport_pend((ti_sysbios_xdcruntime_SemThreadSupport_Handle)__inst, timeout, eb);
}

/* post__E */
xdc_Bool xdc_runtime_knl_SemThread_Proxy_post__E( xdc_runtime_knl_SemThread_Proxy_Handle __inst, xdc_runtime_Error_Block* eb )
{
    return ti_sysbios_xdcruntime_SemThreadSupport_post((ti_sysbios_xdcruntime_SemThreadSupport_Handle)__inst, eb);
}


/*
 * ======== xdc.runtime.knl.Sync_Proxy PROXY BODY ========
 */

/* DELEGATES TO xdc.runtime.knl.SyncNull */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_knl_Sync_Proxy_Module__startupDone__S( void ) 
{
    return xdc_runtime_knl_SyncNull_Module__startupDone__S();
}

/* Object__create__S */
xdc_Ptr xdc_runtime_knl_Sync_Proxy_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const xdc_runtime_knl_Sync_Proxy___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    return xdc_runtime_knl_SyncNull_Object__create__S(oa, osz, aa, (xdc_runtime_knl_SyncNull___ParamsPtr)pa, sizeof(xdc_runtime_knl_ISync_Params), eb);
}

/* Object__delete__S */
void xdc_runtime_knl_Sync_Proxy_Object__delete__S( Ptr instp ) 
{
    xdc_runtime_knl_SyncNull_Object__delete__S(instp);
}

/* Params__init__S */
void xdc_runtime_knl_Sync_Proxy_Params__init__S( xdc_Ptr dst, const xdc_Ptr src, xdc_SizeT psz, xdc_SizeT isz )
{
    xdc_runtime_knl_SyncNull_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label* xdc_runtime_knl_Sync_Proxy_Handle__label__S( Ptr obj, xdc_runtime_Types_Label* lab )
{
    return xdc_runtime_knl_SyncNull_Handle__label__S(obj, lab);
}

/* query__E */
xdc_Bool xdc_runtime_knl_Sync_Proxy_query__E( xdc_runtime_knl_Sync_Proxy_Handle __inst, xdc_Int qual )
{
    return xdc_runtime_knl_ISync_query((xdc_runtime_knl_ISync_Handle)__inst, qual);
}

/* signal__E */
xdc_Void xdc_runtime_knl_Sync_Proxy_signal__E( xdc_runtime_knl_Sync_Proxy_Handle __inst )
{
    xdc_runtime_knl_ISync_signal((xdc_runtime_knl_ISync_Handle)__inst);
}

/* wait__E */
xdc_Int xdc_runtime_knl_Sync_Proxy_wait__E( xdc_runtime_knl_Sync_Proxy_Handle __inst, xdc_UInt timeout, xdc_runtime_Error_Block* eb )
{
    return xdc_runtime_knl_ISync_wait((xdc_runtime_knl_ISync_Handle)__inst, timeout, eb);
}


/*
 * ======== ti.sdo.io.Stream OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sdo_io_Stream_Object2__ s0; char c; } ti_sdo_io_Stream___S1;
__FAR__ const xdc_runtime_Core_ObjDesc ti_sdo_io_Stream_Object__DESC__C = {
    (Ptr)-1, /* fxnTab */
    &ti_sdo_io_Stream_Module__root__V.link, /* modLink */
    sizeof(ti_sdo_io_Stream___S1) - sizeof(ti_sdo_io_Stream_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sdo_io_Stream_Object2__), /* objSize */
    (Ptr)&ti_sdo_io_Stream_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sdo_io_Stream_Params), /* prmsSize */
};



/*
 * ======== ti.sdo.io.converters.DriverAdapter OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sdo_io_converters_DriverAdapter_Object2__ s0; char c; } ti_sdo_io_converters_DriverAdapter___S1;
__FAR__ const xdc_runtime_Core_ObjDesc ti_sdo_io_converters_DriverAdapter_Object__DESC__C = {
    (Ptr)&ti_sdo_io_converters_DriverAdapter_Module__FXNS__C, /* fxnTab */
    &ti_sdo_io_converters_DriverAdapter_Module__root__V.link, /* modLink */
    sizeof(ti_sdo_io_converters_DriverAdapter___S1) - sizeof(ti_sdo_io_converters_DriverAdapter_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sdo_io_converters_DriverAdapter_Object2__), /* objSize */
    (Ptr)&ti_sdo_io_converters_DriverAdapter_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sdo_io_converters_DriverAdapter_Params), /* prmsSize */
};



/*
 * ======== ti.sdo.io.drivers.Generator OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sdo_io_drivers_Generator_Object2__ s0; char c; } ti_sdo_io_drivers_Generator___S1;
__FAR__ const xdc_runtime_Core_ObjDesc ti_sdo_io_drivers_Generator_Object__DESC__C = {
    (Ptr)&ti_sdo_io_drivers_Generator_Module__FXNS__C, /* fxnTab */
    &ti_sdo_io_drivers_Generator_Module__root__V.link, /* modLink */
    sizeof(ti_sdo_io_drivers_Generator___S1) - sizeof(ti_sdo_io_drivers_Generator_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sdo_io_drivers_Generator_Object2__), /* objSize */
    (Ptr)&ti_sdo_io_drivers_Generator_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sdo_io_drivers_Generator_Params), /* prmsSize */
};



/*
 * ======== ti.sdo.utils.List OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sdo_utils_List_Object2__ s0; char c; } ti_sdo_utils_List___S1;
__FAR__ const xdc_runtime_Core_ObjDesc ti_sdo_utils_List_Object__DESC__C = {
    (Ptr)-1, /* fxnTab */
    &ti_sdo_utils_List_Module__root__V.link, /* modLink */
    sizeof(ti_sdo_utils_List___S1) - sizeof(ti_sdo_utils_List_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sdo_utils_List_Object2__), /* objSize */
    (Ptr)&ti_sdo_utils_List_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sdo_utils_List_Params), /* prmsSize */
};



/*
 * ======== ti.sdo.utils.NameServer OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sdo_utils_NameServer_Object2__ s0; char c; } ti_sdo_utils_NameServer___S1;
__FAR__ const xdc_runtime_Core_ObjDesc ti_sdo_utils_NameServer_Object__DESC__C = {
    (Ptr)-1, /* fxnTab */
    &ti_sdo_utils_NameServer_Module__root__V.link, /* modLink */
    sizeof(ti_sdo_utils_NameServer___S1) - sizeof(ti_sdo_utils_NameServer_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sdo_utils_NameServer_Object2__), /* objSize */
    (Ptr)&ti_sdo_utils_NameServer_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sdo_utils_NameServer_Params), /* prmsSize */
};



/*
 * ======== ti.sdo.utils.NameServerRemoteNull OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sdo_utils_NameServerRemoteNull_Object2__ s0; char c; } ti_sdo_utils_NameServerRemoteNull___S1;
__FAR__ const xdc_runtime_Core_ObjDesc ti_sdo_utils_NameServerRemoteNull_Object__DESC__C = {
    (Ptr)0, /* fxnTab */
    &ti_sdo_utils_NameServerRemoteNull_Module__root__V.link, /* modLink */
    sizeof(ti_sdo_utils_NameServerRemoteNull___S1) - sizeof(ti_sdo_utils_NameServerRemoteNull_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sdo_utils_NameServerRemoteNull_Object2__), /* objSize */
    (Ptr)&ti_sdo_utils_NameServerRemoteNull_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sdo_utils_NameServerRemoteNull_Params), /* prmsSize */
};



/*
 * ======== ti.sysbios.family.arm.dm6446.Hwi OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_family_arm_dm6446_Hwi_Object2__ s0; char c; } ti_sysbios_family_arm_dm6446_Hwi___S1;
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_family_arm_dm6446_Hwi_Object__DESC__C = {
    (Ptr)0, /* fxnTab */
    &ti_sysbios_family_arm_dm6446_Hwi_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_family_arm_dm6446_Hwi___S1) - sizeof(ti_sysbios_family_arm_dm6446_Hwi_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_family_arm_dm6446_Hwi_Object2__), /* objSize */
    (Ptr)&ti_sysbios_family_arm_dm6446_Hwi_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_family_arm_dm6446_Hwi_Params), /* prmsSize */
};



/*
 * ======== ti.sysbios.gates.GateHwi OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_gates_GateHwi_Object2__ s0; char c; } ti_sysbios_gates_GateHwi___S1;
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_gates_GateHwi_Object__DESC__C = {
    (Ptr)&ti_sysbios_gates_GateHwi_Module__FXNS__C, /* fxnTab */
    &ti_sysbios_gates_GateHwi_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_gates_GateHwi___S1) - sizeof(ti_sysbios_gates_GateHwi_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_gates_GateHwi_Object2__), /* objSize */
    (Ptr)&ti_sysbios_gates_GateHwi_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_gates_GateHwi_Params), /* prmsSize */
};



/*
 * ======== ti.sysbios.gates.GateMutex OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_gates_GateMutex_Object2__ s0; char c; } ti_sysbios_gates_GateMutex___S1;
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_gates_GateMutex_Object__DESC__C = {
    (Ptr)&ti_sysbios_gates_GateMutex_Module__FXNS__C, /* fxnTab */
    &ti_sysbios_gates_GateMutex_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_gates_GateMutex___S1) - sizeof(ti_sysbios_gates_GateMutex_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_gates_GateMutex_Object2__), /* objSize */
    (Ptr)&ti_sysbios_gates_GateMutex_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_gates_GateMutex_Params), /* prmsSize */
};



/*
 * ======== ti.sysbios.gates.GateSwi OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_gates_GateSwi_Object2__ s0; char c; } ti_sysbios_gates_GateSwi___S1;
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_gates_GateSwi_Object__DESC__C = {
    (Ptr)&ti_sysbios_gates_GateSwi_Module__FXNS__C, /* fxnTab */
    &ti_sysbios_gates_GateSwi_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_gates_GateSwi___S1) - sizeof(ti_sysbios_gates_GateSwi_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_gates_GateSwi_Object2__), /* objSize */
    (Ptr)&ti_sysbios_gates_GateSwi_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_gates_GateSwi_Params), /* prmsSize */
};



/*
 * ======== ti.sysbios.hal.Hwi OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_hal_Hwi_Object2__ s0; char c; } ti_sysbios_hal_Hwi___S1;
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_hal_Hwi_Object__DESC__C = {
    (Ptr)0, /* fxnTab */
    &ti_sysbios_hal_Hwi_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_hal_Hwi___S1) - sizeof(ti_sysbios_hal_Hwi_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_hal_Hwi_Object2__), /* objSize */
    (Ptr)&ti_sysbios_hal_Hwi_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_hal_Hwi_Params), /* prmsSize */
};



/*
 * ======== ti.sysbios.hal.Timer OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_hal_Timer_Object2__ s0; char c; } ti_sysbios_hal_Timer___S1;
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_hal_Timer_Object__DESC__C = {
    (Ptr)0, /* fxnTab */
    &ti_sysbios_hal_Timer_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_hal_Timer___S1) - sizeof(ti_sysbios_hal_Timer_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_hal_Timer_Object2__), /* objSize */
    (Ptr)&ti_sysbios_hal_Timer_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_hal_Timer_Params), /* prmsSize */
};



/*
 * ======== ti.sysbios.heaps.HeapMem OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_heaps_HeapMem_Object2__ s0; char c; } ti_sysbios_heaps_HeapMem___S1;
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_heaps_HeapMem_Object__DESC__C = {
    (Ptr)&ti_sysbios_heaps_HeapMem_Module__FXNS__C, /* fxnTab */
    &ti_sysbios_heaps_HeapMem_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_heaps_HeapMem___S1) - sizeof(ti_sysbios_heaps_HeapMem_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_heaps_HeapMem_Object2__), /* objSize */
    (Ptr)&ti_sysbios_heaps_HeapMem_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_heaps_HeapMem_Params), /* prmsSize */
};



/*
 * ======== ti.sysbios.knl.Clock OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_knl_Clock_Object2__ s0; char c; } ti_sysbios_knl_Clock___S1;
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Clock_Object__DESC__C = {
    (Ptr)-1, /* fxnTab */
    &ti_sysbios_knl_Clock_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_knl_Clock___S1) - sizeof(ti_sysbios_knl_Clock_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_knl_Clock_Object2__), /* objSize */
    (Ptr)&ti_sysbios_knl_Clock_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_knl_Clock_Params), /* prmsSize */
};



/*
 * ======== ti.sysbios.knl.Queue OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_knl_Queue_Object2__ s0; char c; } ti_sysbios_knl_Queue___S1;
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Queue_Object__DESC__C = {
    (Ptr)-1, /* fxnTab */
    &ti_sysbios_knl_Queue_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_knl_Queue___S1) - sizeof(ti_sysbios_knl_Queue_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_knl_Queue_Object2__), /* objSize */
    (Ptr)&ti_sysbios_knl_Queue_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_knl_Queue_Params), /* prmsSize */
};



/*
 * ======== ti.sysbios.knl.Semaphore OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_knl_Semaphore_Object2__ s0; char c; } ti_sysbios_knl_Semaphore___S1;
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Semaphore_Object__DESC__C = {
    (Ptr)-1, /* fxnTab */
    &ti_sysbios_knl_Semaphore_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_knl_Semaphore___S1) - sizeof(ti_sysbios_knl_Semaphore_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_knl_Semaphore_Object2__), /* objSize */
    (Ptr)&ti_sysbios_knl_Semaphore_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_knl_Semaphore_Params), /* prmsSize */
};



/*
 * ======== ti.sysbios.knl.Swi OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_knl_Swi_Object2__ s0; char c; } ti_sysbios_knl_Swi___S1;
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Swi_Object__DESC__C = {
    (Ptr)-1, /* fxnTab */
    &ti_sysbios_knl_Swi_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_knl_Swi___S1) - sizeof(ti_sysbios_knl_Swi_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_knl_Swi_Object2__), /* objSize */
    (Ptr)&ti_sysbios_knl_Swi_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_knl_Swi_Params), /* prmsSize */
};



/*
 * ======== ti.sysbios.knl.Task OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_knl_Task_Object2__ s0; char c; } ti_sysbios_knl_Task___S1;
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Task_Object__DESC__C = {
    (Ptr)-1, /* fxnTab */
    &ti_sysbios_knl_Task_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_knl_Task___S1) - sizeof(ti_sysbios_knl_Task_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_knl_Task_Object2__), /* objSize */
    (Ptr)&ti_sysbios_knl_Task_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_knl_Task_Params), /* prmsSize */
};



/*
 * ======== ti.sysbios.timers.timer64.Timer OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_timers_timer64_Timer_Object2__ s0; char c; } ti_sysbios_timers_timer64_Timer___S1;
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_timers_timer64_Timer_Object__DESC__C = {
    (Ptr)0, /* fxnTab */
    &ti_sysbios_timers_timer64_Timer_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_timers_timer64_Timer___S1) - sizeof(ti_sysbios_timers_timer64_Timer_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_timers_timer64_Timer_Object2__), /* objSize */
    (Ptr)&ti_sysbios_timers_timer64_Timer_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_timers_timer64_Timer_Params), /* prmsSize */
};



/*
 * ======== ti.sysbios.xdcruntime.SemThreadSupport OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_xdcruntime_SemThreadSupport_Object2__ s0; char c; } ti_sysbios_xdcruntime_SemThreadSupport___S1;
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_xdcruntime_SemThreadSupport_Object__DESC__C = {
    (Ptr)0, /* fxnTab */
    &ti_sysbios_xdcruntime_SemThreadSupport_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_xdcruntime_SemThreadSupport___S1) - sizeof(ti_sysbios_xdcruntime_SemThreadSupport_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_xdcruntime_SemThreadSupport_Object2__), /* objSize */
    (Ptr)&ti_sysbios_xdcruntime_SemThreadSupport_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_xdcruntime_SemThreadSupport_Params), /* prmsSize */
};



/*
 * ======== xdc.runtime.knl.SemThread OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { xdc_runtime_knl_SemThread_Object2__ s0; char c; } xdc_runtime_knl_SemThread___S1;
__FAR__ const xdc_runtime_Core_ObjDesc xdc_runtime_knl_SemThread_Object__DESC__C = {
    (Ptr)&xdc_runtime_knl_SemThread_Module__FXNS__C, /* fxnTab */
    &xdc_runtime_knl_SemThread_Module__root__V.link, /* modLink */
    sizeof(xdc_runtime_knl_SemThread___S1) - sizeof(xdc_runtime_knl_SemThread_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(xdc_runtime_knl_SemThread_Object2__), /* objSize */
    (Ptr)&xdc_runtime_knl_SemThread_Object__PARAMS__C, /* prmsInit */
    sizeof(xdc_runtime_knl_SemThread_Params), /* prmsSize */
};



/*
 * ======== xdc.runtime.knl.SyncNull OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { xdc_runtime_knl_SyncNull_Object2__ s0; char c; } xdc_runtime_knl_SyncNull___S1;
__FAR__ const xdc_runtime_Core_ObjDesc xdc_runtime_knl_SyncNull_Object__DESC__C = {
    (Ptr)&xdc_runtime_knl_SyncNull_Module__FXNS__C, /* fxnTab */
    &xdc_runtime_knl_SyncNull_Module__root__V.link, /* modLink */
    sizeof(xdc_runtime_knl_SyncNull___S1) - sizeof(xdc_runtime_knl_SyncNull_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(xdc_runtime_knl_SyncNull_Object2__), /* objSize */
    (Ptr)&xdc_runtime_knl_SyncNull_Object__PARAMS__C, /* prmsInit */
    sizeof(xdc_runtime_knl_SyncNull_Params), /* prmsSize */
};



/*
 * ======== xdc.runtime.knl.SyncSemThread OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { xdc_runtime_knl_SyncSemThread_Object2__ s0; char c; } xdc_runtime_knl_SyncSemThread___S1;
__FAR__ const xdc_runtime_Core_ObjDesc xdc_runtime_knl_SyncSemThread_Object__DESC__C = {
    (Ptr)&xdc_runtime_knl_SyncSemThread_Module__FXNS__C, /* fxnTab */
    &xdc_runtime_knl_SyncSemThread_Module__root__V.link, /* modLink */
    sizeof(xdc_runtime_knl_SyncSemThread___S1) - sizeof(xdc_runtime_knl_SyncSemThread_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(xdc_runtime_knl_SyncSemThread_Object2__), /* objSize */
    (Ptr)&xdc_runtime_knl_SyncSemThread_Object__PARAMS__C, /* prmsInit */
    sizeof(xdc_runtime_knl_SyncSemThread_Params), /* prmsSize */
};



/*
 * ======== ti.sdo.io.DriverTable SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sdo_io_DriverTable_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== ti.sdo.io.DriverTypes SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sdo_io_DriverTypes_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== ti.sdo.io.Stream SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sdo_io_Stream_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sdo_io_Stream_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sdo_io_Stream_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sdo_io_Stream_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sdo_io_Stream_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sdo_io_Stream_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sdo_io_Stream_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sdo_io_Stream_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sdo_io_Stream_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sdo_io_Stream_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sdo_io_Stream_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sdo_io_Stream_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sdo_io_Stream_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sdo_io_Stream_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sdo_io_Stream_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sdo_io_Stream_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sdo_io_Stream_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sdo_io_Stream_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sdo_io_Stream_Module__startupDone__S( void ) 
{
    return ti_sdo_io_Stream_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label* ti_sdo_io_Stream_Handle__label__S( xdc_Ptr obj, xdc_runtime_Types_Label* lab ) 
{
    lab->handle = obj;
    lab->modId = 32826;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sdo_io_Stream_Params__init__S( xdc_Ptr prms, xdc_Ptr src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sdo_io_Stream_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sdo_io_Stream_Object__get__S( xdc_Ptr oa, xdc_Int i ) 
{
    if (oa) {
        return ((ti_sdo_io_Stream_Object__*)oa) + i;
    }

    if (ti_sdo_io_Stream_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sdo_io_Stream_Object__*)ti_sdo_io_Stream_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sdo_io_Stream_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sdo_io_Stream_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sdo_io_Stream_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sdo_io_Stream_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sdo_io_Stream_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sdo_io_Stream_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const ti_sdo_io_Stream___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    ti_sdo_io_Stream_Params prms;
    ti_sdo_io_Stream_Object* obj;
    int iStat;

    ti_sdo_io_Stream_Args__create* args = aa;
    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sdo_io_Stream_Object__DESC__C, oa, osz, &prms, (xdc_Ptr)pa, psz, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sdo_io_Stream_Instance_init__F(obj, args->name, args->mode, &prms, eb);
    if (xdc_runtime_Error_check(eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sdo_io_Stream_Object__DESC__C, obj, (xdc_Fxn)ti_sdo_io_Stream_Instance_finalize__F, iStat, (xdc_Bool)(oa != NULL));
        return NULL;
    }

    return obj;
}

/* Object__destruct__S */
xdc_Void ti_sdo_io_Stream_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sdo_io_Stream_Object__DESC__C, obj, (xdc_Fxn)ti_sdo_io_Stream_Instance_finalize__F, 0, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sdo_io_Stream_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sdo_io_Stream_Object__DESC__C, *((ti_sdo_io_Stream_Object**)instp), (xdc_Fxn)ti_sdo_io_Stream_Instance_finalize__F, 0, FALSE);
    *((ti_sdo_io_Stream_Handle*)instp) = NULL;
}


/*
 * ======== ti.sdo.io.converters.DriverAdapter SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sdo_io_converters_DriverAdapter_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sdo_io_converters_DriverAdapter_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sdo_io_converters_DriverAdapter_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sdo_io_converters_DriverAdapter_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sdo_io_converters_DriverAdapter_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sdo_io_converters_DriverAdapter_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sdo_io_converters_DriverAdapter_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sdo_io_converters_DriverAdapter_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sdo_io_converters_DriverAdapter_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sdo_io_converters_DriverAdapter_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sdo_io_converters_DriverAdapter_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sdo_io_converters_DriverAdapter_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sdo_io_converters_DriverAdapter_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sdo_io_converters_DriverAdapter_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sdo_io_converters_DriverAdapter_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sdo_io_converters_DriverAdapter_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sdo_io_converters_DriverAdapter_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sdo_io_converters_DriverAdapter_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sdo_io_converters_DriverAdapter_Module__startupDone__S( void ) 
{
    return 1;
}

/* Handle__label__S */
xdc_runtime_Types_Label* ti_sdo_io_converters_DriverAdapter_Handle__label__S( xdc_Ptr obj, xdc_runtime_Types_Label* lab ) 
{
    lab->handle = obj;
    lab->modId = 32840;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sdo_io_converters_DriverAdapter_Params__init__S( xdc_Ptr prms, xdc_Ptr src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sdo_io_converters_DriverAdapter_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sdo_io_converters_DriverAdapter_Object__get__S( xdc_Ptr oa, xdc_Int i ) 
{
    if (oa) {
        return ((ti_sdo_io_converters_DriverAdapter_Object__*)oa) + i;
    }

    if (ti_sdo_io_converters_DriverAdapter_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sdo_io_converters_DriverAdapter_Object__*)ti_sdo_io_converters_DriverAdapter_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sdo_io_converters_DriverAdapter_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sdo_io_converters_DriverAdapter_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sdo_io_converters_DriverAdapter_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sdo_io_converters_DriverAdapter_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sdo_io_converters_DriverAdapter_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sdo_io_converters_DriverAdapter_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const ti_sdo_io_converters_DriverAdapter___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    ti_sdo_io_converters_DriverAdapter_Params prms;
    ti_sdo_io_converters_DriverAdapter_Object* obj;

    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sdo_io_converters_DriverAdapter_Object__DESC__C, oa, osz, &prms, (xdc_Ptr)pa, psz, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sdo_io_converters_DriverAdapter_Instance_init__F(obj, &prms);
    return obj;
}

/* Object__destruct__S */
xdc_Void ti_sdo_io_converters_DriverAdapter_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sdo_io_converters_DriverAdapter_Object__DESC__C, obj, NULL, -1, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sdo_io_converters_DriverAdapter_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sdo_io_converters_DriverAdapter_Object__DESC__C, *((ti_sdo_io_converters_DriverAdapter_Object**)instp), NULL, -1, FALSE);
    *((ti_sdo_io_converters_DriverAdapter_Handle*)instp) = NULL;
}


/*
 * ======== ti.sdo.io.drivers.Generator SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sdo_io_drivers_Generator_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sdo_io_drivers_Generator_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sdo_io_drivers_Generator_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sdo_io_drivers_Generator_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sdo_io_drivers_Generator_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sdo_io_drivers_Generator_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sdo_io_drivers_Generator_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sdo_io_drivers_Generator_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sdo_io_drivers_Generator_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sdo_io_drivers_Generator_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sdo_io_drivers_Generator_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sdo_io_drivers_Generator_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sdo_io_drivers_Generator_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sdo_io_drivers_Generator_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sdo_io_drivers_Generator_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sdo_io_drivers_Generator_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sdo_io_drivers_Generator_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sdo_io_drivers_Generator_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sdo_io_drivers_Generator_Module__startupDone__S( void ) 
{
    return 1;
}

/* Handle__label__S */
xdc_runtime_Types_Label* ti_sdo_io_drivers_Generator_Handle__label__S( xdc_Ptr obj, xdc_runtime_Types_Label* lab ) 
{
    lab->handle = obj;
    lab->modId = 32828;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sdo_io_drivers_Generator_Params__init__S( xdc_Ptr prms, xdc_Ptr src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sdo_io_drivers_Generator_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sdo_io_drivers_Generator_Object__get__S( xdc_Ptr oa, xdc_Int i ) 
{
    if (oa) {
        return ((ti_sdo_io_drivers_Generator_Object__*)oa) + i;
    }

    if (ti_sdo_io_drivers_Generator_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sdo_io_drivers_Generator_Object__*)ti_sdo_io_drivers_Generator_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sdo_io_drivers_Generator_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sdo_io_drivers_Generator_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sdo_io_drivers_Generator_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sdo_io_drivers_Generator_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sdo_io_drivers_Generator_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sdo_io_drivers_Generator_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const ti_sdo_io_drivers_Generator___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    ti_sdo_io_drivers_Generator_Params prms;
    ti_sdo_io_drivers_Generator_Object* obj;

    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sdo_io_drivers_Generator_Object__DESC__C, oa, osz, &prms, (xdc_Ptr)pa, psz, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sdo_io_drivers_Generator_Instance_init__F(obj, &prms);
    return obj;
}

/* Object__destruct__S */
xdc_Void ti_sdo_io_drivers_Generator_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sdo_io_drivers_Generator_Object__DESC__C, obj, NULL, -1, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sdo_io_drivers_Generator_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sdo_io_drivers_Generator_Object__DESC__C, *((ti_sdo_io_drivers_Generator_Object**)instp), NULL, -1, FALSE);
    *((ti_sdo_io_drivers_Generator_Handle*)instp) = NULL;
}


/*
 * ======== ti.sdo.utils.List SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sdo_utils_List_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sdo_utils_List_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sdo_utils_List_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sdo_utils_List_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sdo_utils_List_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sdo_utils_List_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sdo_utils_List_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sdo_utils_List_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sdo_utils_List_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sdo_utils_List_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sdo_utils_List_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sdo_utils_List_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sdo_utils_List_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sdo_utils_List_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sdo_utils_List_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sdo_utils_List_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sdo_utils_List_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sdo_utils_List_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sdo_utils_List_Module__startupDone__S( void ) 
{
    return 1;
}

/* Handle__label__S */
xdc_runtime_Types_Label* ti_sdo_utils_List_Handle__label__S( xdc_Ptr obj, xdc_runtime_Types_Label* lab ) 
{
    lab->handle = obj;
    lab->modId = 32822;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sdo_utils_List_Params__init__S( xdc_Ptr prms, xdc_Ptr src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sdo_utils_List_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sdo_utils_List_Object__get__S( xdc_Ptr oa, xdc_Int i ) 
{
    if (oa) {
        return ((ti_sdo_utils_List_Object__*)oa) + i;
    }

    if (ti_sdo_utils_List_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sdo_utils_List_Object__*)ti_sdo_utils_List_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sdo_utils_List_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sdo_utils_List_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sdo_utils_List_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sdo_utils_List_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sdo_utils_List_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sdo_utils_List_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const ti_sdo_utils_List___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    ti_sdo_utils_List_Params prms;
    ti_sdo_utils_List_Object* obj;

    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sdo_utils_List_Object__DESC__C, oa, osz, &prms, (xdc_Ptr)pa, psz, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sdo_utils_List_Instance_init__F(obj, &prms);
    return obj;
}

/* Object__destruct__S */
xdc_Void ti_sdo_utils_List_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sdo_utils_List_Object__DESC__C, obj, NULL, -1, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sdo_utils_List_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sdo_utils_List_Object__DESC__C, *((ti_sdo_utils_List_Object**)instp), NULL, -1, FALSE);
    *((ti_sdo_utils_List_Handle*)instp) = NULL;
}


/*
 * ======== ti.sdo.utils.MultiProc SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sdo_utils_MultiProc_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== ti.sdo.utils.NameServer SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sdo_utils_NameServer_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sdo_utils_NameServer_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sdo_utils_NameServer_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sdo_utils_NameServer_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sdo_utils_NameServer_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sdo_utils_NameServer_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sdo_utils_NameServer_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sdo_utils_NameServer_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sdo_utils_NameServer_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sdo_utils_NameServer_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sdo_utils_NameServer_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sdo_utils_NameServer_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sdo_utils_NameServer_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sdo_utils_NameServer_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sdo_utils_NameServer_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sdo_utils_NameServer_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sdo_utils_NameServer_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sdo_utils_NameServer_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sdo_utils_NameServer_Module__startupDone__S( void ) 
{
    return ti_sdo_utils_NameServer_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label* ti_sdo_utils_NameServer_Handle__label__S( xdc_Ptr obj, xdc_runtime_Types_Label* lab ) 
{
    lab->handle = obj;
    lab->modId = 32819;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sdo_utils_NameServer_Params__init__S( xdc_Ptr prms, xdc_Ptr src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sdo_utils_NameServer_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sdo_utils_NameServer_Object__get__S( xdc_Ptr oa, xdc_Int i ) 
{
    if (oa) {
        return ((ti_sdo_utils_NameServer_Object__*)oa) + i;
    }

    if (ti_sdo_utils_NameServer_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sdo_utils_NameServer_Object__*)ti_sdo_utils_NameServer_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sdo_utils_NameServer_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sdo_utils_NameServer_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sdo_utils_NameServer_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sdo_utils_NameServer_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sdo_utils_NameServer_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sdo_utils_NameServer_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const ti_sdo_utils_NameServer___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    ti_sdo_utils_NameServer_Params prms;
    ti_sdo_utils_NameServer_Object* obj;
    int iStat;

    ti_sdo_utils_NameServer_Args__create* args = aa;
    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sdo_utils_NameServer_Object__DESC__C, oa, osz, &prms, (xdc_Ptr)pa, psz, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sdo_utils_NameServer_Instance_init__F(obj, args->name, &prms, eb);
    if (xdc_runtime_Error_check(eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sdo_utils_NameServer_Object__DESC__C, obj, (xdc_Fxn)ti_sdo_utils_NameServer_Instance_finalize__F, iStat, (xdc_Bool)(oa != NULL));
        return NULL;
    }

    return obj;
}

/* Object__destruct__S */
xdc_Void ti_sdo_utils_NameServer_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sdo_utils_NameServer_Object__DESC__C, obj, (xdc_Fxn)ti_sdo_utils_NameServer_Instance_finalize__F, 0, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sdo_utils_NameServer_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sdo_utils_NameServer_Object__DESC__C, *((ti_sdo_utils_NameServer_Object**)instp), (xdc_Fxn)ti_sdo_utils_NameServer_Instance_finalize__F, 0, FALSE);
    *((ti_sdo_utils_NameServer_Handle*)instp) = NULL;
}


/*
 * ======== ti.sdo.utils.NameServerRemoteNull SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sdo_utils_NameServerRemoteNull_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sdo_utils_NameServerRemoteNull_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sdo_utils_NameServerRemoteNull_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sdo_utils_NameServerRemoteNull_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sdo_utils_NameServerRemoteNull_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sdo_utils_NameServerRemoteNull_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sdo_utils_NameServerRemoteNull_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sdo_utils_NameServerRemoteNull_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sdo_utils_NameServerRemoteNull_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sdo_utils_NameServerRemoteNull_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sdo_utils_NameServerRemoteNull_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sdo_utils_NameServerRemoteNull_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sdo_utils_NameServerRemoteNull_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sdo_utils_NameServerRemoteNull_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sdo_utils_NameServerRemoteNull_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sdo_utils_NameServerRemoteNull_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sdo_utils_NameServerRemoteNull_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sdo_utils_NameServerRemoteNull_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sdo_utils_NameServerRemoteNull_Module__startupDone__S( void ) 
{
    return 1;
}

/* Handle__label__S */
xdc_runtime_Types_Label* ti_sdo_utils_NameServerRemoteNull_Handle__label__S( xdc_Ptr obj, xdc_runtime_Types_Label* lab ) 
{
    lab->handle = obj;
    lab->modId = 32820;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sdo_utils_NameServerRemoteNull_Params__init__S( xdc_Ptr prms, xdc_Ptr src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sdo_utils_NameServerRemoteNull_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sdo_utils_NameServerRemoteNull_Object__get__S( xdc_Ptr oa, xdc_Int i ) 
{
    if (oa) {
        return ((ti_sdo_utils_NameServerRemoteNull_Object__*)oa) + i;
    }

    if (ti_sdo_utils_NameServerRemoteNull_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sdo_utils_NameServerRemoteNull_Object__*)ti_sdo_utils_NameServerRemoteNull_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sdo_utils_NameServerRemoteNull_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sdo_utils_NameServerRemoteNull_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sdo_utils_NameServerRemoteNull_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sdo_utils_NameServerRemoteNull_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sdo_utils_NameServerRemoteNull_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sdo_utils_NameServerRemoteNull_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const ti_sdo_utils_NameServerRemoteNull___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    ti_sdo_utils_NameServerRemoteNull_Params prms;
    ti_sdo_utils_NameServerRemoteNull_Object* obj;

    ti_sdo_utils_NameServerRemoteNull_Args__create* args = aa;
    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sdo_utils_NameServerRemoteNull_Object__DESC__C, oa, osz, &prms, (xdc_Ptr)pa, psz, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sdo_utils_NameServerRemoteNull_Instance_init__F(obj, args->procId, &prms);
    return obj;
}

/* Object__destruct__S */
xdc_Void ti_sdo_utils_NameServerRemoteNull_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sdo_utils_NameServerRemoteNull_Object__DESC__C, obj, NULL, -1, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sdo_utils_NameServerRemoteNull_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sdo_utils_NameServerRemoteNull_Object__DESC__C, *((ti_sdo_utils_NameServerRemoteNull_Object**)instp), NULL, -1, FALSE);
    *((ti_sdo_utils_NameServerRemoteNull_Handle*)instp) = NULL;
}


/*
 * ======== ti.sdo.utils.NameServer_SetupProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sdo_utils_NameServer_SetupProxy_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sdo_utils_NameServer_SetupProxy_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sdo_utils_NameServer_SetupProxy_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sdo_utils_NameServer_SetupProxy_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sdo_utils_NameServer_SetupProxy_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sdo_utils_NameServer_SetupProxy_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sdo_utils_NameServer_SetupProxy_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sdo_utils_NameServer_SetupProxy_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sdo_utils_NameServer_SetupProxy_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sdo_utils_NameServer_SetupProxy_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sdo_utils_NameServer_SetupProxy_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sdo_utils_NameServer_SetupProxy_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sdo_utils_NameServer_SetupProxy_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sdo_utils_NameServer_SetupProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sdo_utils_NameServer_SetupProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sdo_utils_NameServer_SetupProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sdo_utils_NameServer_SetupProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sdo_utils_NameServer_SetupProxy_Module_GateProxy_query
xdc_Bool ti_sdo_utils_NameServer_SetupProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr ti_sdo_utils_NameServer_SetupProxy_Proxy__delegate__S( void )
{
    return 0;
}



/*
 * ======== ti.sysbios.BIOS SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_BIOS_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== ti.sysbios.BIOS_RtsGateProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_BIOS_RtsGateProxy_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_BIOS_RtsGateProxy_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_BIOS_RtsGateProxy_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_BIOS_RtsGateProxy_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_BIOS_RtsGateProxy_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_BIOS_RtsGateProxy_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_BIOS_RtsGateProxy_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_BIOS_RtsGateProxy_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_BIOS_RtsGateProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_BIOS_RtsGateProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_BIOS_RtsGateProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_BIOS_RtsGateProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_BIOS_RtsGateProxy_Module_GateProxy_query
xdc_Bool ti_sysbios_BIOS_RtsGateProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr ti_sysbios_BIOS_RtsGateProxy_Proxy__delegate__S( void )
{
    return (xdc_Ptr)&ti_sysbios_gates_GateMutex_Module__FXNS__C;
}



/*
 * ======== ti.sysbios.family.arm.HwiCommon SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_family_arm_HwiCommon_Module__startupDone__S( void ) 
{
    return ti_sysbios_family_arm_HwiCommon_Module__startupDone__F();
}



/*
 * ======== ti.sysbios.family.arm.IntrinsicsSupport SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_family_arm_IntrinsicsSupport_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== ti.sysbios.family.arm.TaskSupport SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_family_arm_TaskSupport_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== ti.sysbios.family.arm.arm9.Cache SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_family_arm_arm9_Cache_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== ti.sysbios.family.arm.arm9.Mmu SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_family_arm_arm9_Mmu_Module__startupDone__S( void ) 
{
    return ti_sysbios_family_arm_arm9_Mmu_Module__startupDone__F();
}



/*
 * ======== ti.sysbios.family.arm.dm6446.Hwi SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_family_arm_dm6446_Hwi_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_family_arm_dm6446_Hwi_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_family_arm_dm6446_Hwi_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_family_arm_dm6446_Hwi_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_family_arm_dm6446_Hwi_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_family_arm_dm6446_Hwi_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_family_arm_dm6446_Hwi_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_family_arm_dm6446_Hwi_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_family_arm_dm6446_Hwi_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_family_arm_dm6446_Hwi_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_family_arm_dm6446_Hwi_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_family_arm_dm6446_Hwi_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_family_arm_dm6446_Hwi_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_family_arm_dm6446_Hwi_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_family_arm_dm6446_Hwi_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_family_arm_dm6446_Hwi_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_family_arm_dm6446_Hwi_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_family_arm_dm6446_Hwi_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_family_arm_dm6446_Hwi_Module__startupDone__S( void ) 
{
    return ti_sysbios_family_arm_dm6446_Hwi_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label* ti_sysbios_family_arm_dm6446_Hwi_Handle__label__S( xdc_Ptr obj, xdc_runtime_Types_Label* lab ) 
{
    lab->handle = obj;
    lab->modId = 32830;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_family_arm_dm6446_Hwi_Params__init__S( xdc_Ptr prms, xdc_Ptr src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_family_arm_dm6446_Hwi_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_family_arm_dm6446_Hwi_Object__get__S( xdc_Ptr oa, xdc_Int i ) 
{
    if (oa) {
        return ((ti_sysbios_family_arm_dm6446_Hwi_Object__*)oa) + i;
    }

    if (ti_sysbios_family_arm_dm6446_Hwi_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_family_arm_dm6446_Hwi_Object__*)ti_sysbios_family_arm_dm6446_Hwi_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_family_arm_dm6446_Hwi_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_family_arm_dm6446_Hwi_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_family_arm_dm6446_Hwi_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_family_arm_dm6446_Hwi_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_family_arm_dm6446_Hwi_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_family_arm_dm6446_Hwi_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const ti_sysbios_family_arm_dm6446_Hwi___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    ti_sysbios_family_arm_dm6446_Hwi_Params prms;
    ti_sysbios_family_arm_dm6446_Hwi_Object* obj;
    int iStat;

    ti_sysbios_family_arm_dm6446_Hwi_Args__create* args = aa;
    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_family_arm_dm6446_Hwi_Object__DESC__C, oa, osz, &prms, (xdc_Ptr)pa, psz, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_family_arm_dm6446_Hwi_Instance_init__F(obj, args->intNum, args->hwiFxn, &prms, eb);
    if (xdc_runtime_Error_check(eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_arm_dm6446_Hwi_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_family_arm_dm6446_Hwi_Instance_finalize__F, iStat, (xdc_Bool)(oa != NULL));
        return NULL;
    }

    return obj;
}

/* Object__destruct__S */
xdc_Void ti_sysbios_family_arm_dm6446_Hwi_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_arm_dm6446_Hwi_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_family_arm_dm6446_Hwi_Instance_finalize__F, 0, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_family_arm_dm6446_Hwi_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_arm_dm6446_Hwi_Object__DESC__C, *((ti_sysbios_family_arm_dm6446_Hwi_Object**)instp), (xdc_Fxn)ti_sysbios_family_arm_dm6446_Hwi_Instance_finalize__F, 0, FALSE);
    *((ti_sysbios_family_arm_dm6446_Hwi_Handle*)instp) = NULL;
}


/*
 * ======== ti.sysbios.family.arm.dm6446.TimerSupport SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_family_arm_dm6446_TimerSupport_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== ti.sysbios.family.arm.exc.Exception SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_family_arm_exc_Exception_Module__startupDone__S( void ) 
{
    return ti_sysbios_family_arm_exc_Exception_Module__startupDone__F();
}



/*
 * ======== ti.sysbios.gates.GateHwi SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_gates_GateHwi_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_gates_GateHwi_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_gates_GateHwi_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_gates_GateHwi_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_gates_GateHwi_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_gates_GateHwi_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_gates_GateHwi_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_gates_GateHwi_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_gates_GateHwi_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_gates_GateHwi_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_gates_GateHwi_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_gates_GateHwi_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_gates_GateHwi_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_gates_GateHwi_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_gates_GateHwi_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_gates_GateHwi_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_gates_GateHwi_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_gates_GateHwi_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_gates_GateHwi_Module__startupDone__S( void ) 
{
    return 1;
}

/* Handle__label__S */
xdc_runtime_Types_Label* ti_sysbios_gates_GateHwi_Handle__label__S( xdc_Ptr obj, xdc_runtime_Types_Label* lab ) 
{
    lab->handle = obj;
    lab->modId = 32809;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_gates_GateHwi_Params__init__S( xdc_Ptr prms, xdc_Ptr src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_gates_GateHwi_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_gates_GateHwi_Object__get__S( xdc_Ptr oa, xdc_Int i ) 
{
    if (oa) {
        return ((ti_sysbios_gates_GateHwi_Object__*)oa) + i;
    }

    if (ti_sysbios_gates_GateHwi_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_gates_GateHwi_Object__*)ti_sysbios_gates_GateHwi_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_gates_GateHwi_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_gates_GateHwi_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_gates_GateHwi_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_gates_GateHwi_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_gates_GateHwi_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_gates_GateHwi_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const ti_sysbios_gates_GateHwi___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    ti_sysbios_gates_GateHwi_Params prms;
    ti_sysbios_gates_GateHwi_Object* obj;

    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_gates_GateHwi_Object__DESC__C, oa, osz, &prms, (xdc_Ptr)pa, psz, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_gates_GateHwi_Instance_init__F(obj, &prms);
    return obj;
}

/* Object__destruct__S */
xdc_Void ti_sysbios_gates_GateHwi_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_gates_GateHwi_Object__DESC__C, obj, NULL, -1, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_gates_GateHwi_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_gates_GateHwi_Object__DESC__C, *((ti_sysbios_gates_GateHwi_Object**)instp), NULL, -1, FALSE);
    *((ti_sysbios_gates_GateHwi_Handle*)instp) = NULL;
}


/*
 * ======== ti.sysbios.gates.GateMutex SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_gates_GateMutex_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_gates_GateMutex_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_gates_GateMutex_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_gates_GateMutex_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_gates_GateMutex_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_gates_GateMutex_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_gates_GateMutex_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_gates_GateMutex_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_gates_GateMutex_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_gates_GateMutex_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_gates_GateMutex_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_gates_GateMutex_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_gates_GateMutex_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_gates_GateMutex_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_gates_GateMutex_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_gates_GateMutex_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_gates_GateMutex_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_gates_GateMutex_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_gates_GateMutex_Module__startupDone__S( void ) 
{
    return 1;
}

/* Handle__label__S */
xdc_runtime_Types_Label* ti_sysbios_gates_GateMutex_Handle__label__S( xdc_Ptr obj, xdc_runtime_Types_Label* lab ) 
{
    lab->handle = obj;
    lab->modId = 32811;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_gates_GateMutex_Params__init__S( xdc_Ptr prms, xdc_Ptr src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_gates_GateMutex_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_gates_GateMutex_Object__get__S( xdc_Ptr oa, xdc_Int i ) 
{
    if (oa) {
        return ((ti_sysbios_gates_GateMutex_Object__*)oa) + i;
    }

    if (ti_sysbios_gates_GateMutex_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_gates_GateMutex_Object__*)ti_sysbios_gates_GateMutex_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_gates_GateMutex_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_gates_GateMutex_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_gates_GateMutex_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_gates_GateMutex_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_gates_GateMutex_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_gates_GateMutex_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const ti_sysbios_gates_GateMutex___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    ti_sysbios_gates_GateMutex_Params prms;
    ti_sysbios_gates_GateMutex_Object* obj;

    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_gates_GateMutex_Object__DESC__C, oa, osz, &prms, (xdc_Ptr)pa, psz, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_gates_GateMutex_Instance_init__F(obj, &prms);
    return obj;
}

/* Object__destruct__S */
xdc_Void ti_sysbios_gates_GateMutex_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_gates_GateMutex_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_gates_GateMutex_Instance_finalize__F, -1, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_gates_GateMutex_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_gates_GateMutex_Object__DESC__C, *((ti_sysbios_gates_GateMutex_Object**)instp), (xdc_Fxn)ti_sysbios_gates_GateMutex_Instance_finalize__F, -1, FALSE);
    *((ti_sysbios_gates_GateMutex_Handle*)instp) = NULL;
}


/*
 * ======== ti.sysbios.gates.GateSwi SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_gates_GateSwi_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_gates_GateSwi_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_gates_GateSwi_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_gates_GateSwi_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_gates_GateSwi_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_gates_GateSwi_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_gates_GateSwi_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_gates_GateSwi_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_gates_GateSwi_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_gates_GateSwi_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_gates_GateSwi_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_gates_GateSwi_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_gates_GateSwi_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_gates_GateSwi_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_gates_GateSwi_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_gates_GateSwi_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_gates_GateSwi_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_gates_GateSwi_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_gates_GateSwi_Module__startupDone__S( void ) 
{
    return 1;
}

/* Handle__label__S */
xdc_runtime_Types_Label* ti_sysbios_gates_GateSwi_Handle__label__S( xdc_Ptr obj, xdc_runtime_Types_Label* lab ) 
{
    lab->handle = obj;
    lab->modId = 32810;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_gates_GateSwi_Params__init__S( xdc_Ptr prms, xdc_Ptr src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_gates_GateSwi_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_gates_GateSwi_Object__get__S( xdc_Ptr oa, xdc_Int i ) 
{
    if (oa) {
        return ((ti_sysbios_gates_GateSwi_Object__*)oa) + i;
    }

    if (ti_sysbios_gates_GateSwi_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_gates_GateSwi_Object__*)ti_sysbios_gates_GateSwi_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_gates_GateSwi_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_gates_GateSwi_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_gates_GateSwi_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_gates_GateSwi_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_gates_GateSwi_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_gates_GateSwi_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const ti_sysbios_gates_GateSwi___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    ti_sysbios_gates_GateSwi_Params prms;
    ti_sysbios_gates_GateSwi_Object* obj;

    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_gates_GateSwi_Object__DESC__C, oa, osz, &prms, (xdc_Ptr)pa, psz, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_gates_GateSwi_Instance_init__F(obj, &prms);
    return obj;
}

/* Object__destruct__S */
xdc_Void ti_sysbios_gates_GateSwi_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_gates_GateSwi_Object__DESC__C, obj, NULL, -1, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_gates_GateSwi_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_gates_GateSwi_Object__DESC__C, *((ti_sysbios_gates_GateSwi_Object**)instp), NULL, -1, FALSE);
    *((ti_sysbios_gates_GateSwi_Handle*)instp) = NULL;
}


/*
 * ======== ti.sysbios.hal.Cache SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_hal_Cache_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== ti.sysbios.hal.Cache_CacheProxy SYSTEM FUNCTIONS ========
 */

xdc_Bool ti_sysbios_hal_Cache_CacheProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr ti_sysbios_hal_Cache_CacheProxy_Proxy__delegate__S( void )
{
    return 0;
}


/*
 * ======== ti.sysbios.hal.Hwi SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_hal_Hwi_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_hal_Hwi_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_hal_Hwi_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_hal_Hwi_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_hal_Hwi_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_hal_Hwi_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_hal_Hwi_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_hal_Hwi_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_hal_Hwi_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_hal_Hwi_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_hal_Hwi_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_hal_Hwi_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_hal_Hwi_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_hal_Hwi_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_hal_Hwi_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_hal_Hwi_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_hal_Hwi_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_hal_Hwi_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_hal_Hwi_Module__startupDone__S( void ) 
{
    return ti_sysbios_hal_Hwi_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label* ti_sysbios_hal_Hwi_Handle__label__S( xdc_Ptr obj, xdc_runtime_Types_Label* lab ) 
{
    lab->handle = obj;
    lab->modId = 32792;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_hal_Hwi_Params__init__S( xdc_Ptr prms, xdc_Ptr src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_hal_Hwi_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_hal_Hwi_Object__get__S( xdc_Ptr oa, xdc_Int i ) 
{
    if (oa) {
        return ((ti_sysbios_hal_Hwi_Object__*)oa) + i;
    }

    if (ti_sysbios_hal_Hwi_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_hal_Hwi_Object__*)ti_sysbios_hal_Hwi_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_hal_Hwi_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_hal_Hwi_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_hal_Hwi_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_hal_Hwi_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_hal_Hwi_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_hal_Hwi_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const ti_sysbios_hal_Hwi___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    ti_sysbios_hal_Hwi_Params prms;
    ti_sysbios_hal_Hwi_Object* obj;
    int iStat;

    ti_sysbios_hal_Hwi_Args__create* args = aa;
    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_hal_Hwi_Object__DESC__C, oa, osz, &prms, (xdc_Ptr)pa, psz, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_hal_Hwi_Instance_init__F(obj, args->intNum, args->hwiFxn, &prms, eb);
    if (xdc_runtime_Error_check(eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_hal_Hwi_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_hal_Hwi_Instance_finalize__F, iStat, (xdc_Bool)(oa != NULL));
        return NULL;
    }

    return obj;
}

/* Object__destruct__S */
xdc_Void ti_sysbios_hal_Hwi_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_hal_Hwi_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_hal_Hwi_Instance_finalize__F, 0, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_hal_Hwi_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_hal_Hwi_Object__DESC__C, *((ti_sysbios_hal_Hwi_Object**)instp), (xdc_Fxn)ti_sysbios_hal_Hwi_Instance_finalize__F, 0, FALSE);
    *((ti_sysbios_hal_Hwi_Handle*)instp) = NULL;
}


/*
 * ======== ti.sysbios.hal.Hwi_HwiProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_hal_Hwi_HwiProxy_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_hal_Hwi_HwiProxy_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_hal_Hwi_HwiProxy_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_hal_Hwi_HwiProxy_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_hal_Hwi_HwiProxy_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_hal_Hwi_HwiProxy_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_hal_Hwi_HwiProxy_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_hal_Hwi_HwiProxy_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_hal_Hwi_HwiProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_hal_Hwi_HwiProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_hal_Hwi_HwiProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_hal_Hwi_HwiProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_hal_Hwi_HwiProxy_Module_GateProxy_query
xdc_Bool ti_sysbios_hal_Hwi_HwiProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr ti_sysbios_hal_Hwi_HwiProxy_Proxy__delegate__S( void )
{
    return 0;
}



/*
 * ======== ti.sysbios.hal.Timer SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_hal_Timer_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_hal_Timer_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_hal_Timer_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_hal_Timer_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_hal_Timer_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_hal_Timer_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_hal_Timer_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_hal_Timer_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_hal_Timer_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_hal_Timer_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_hal_Timer_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_hal_Timer_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_hal_Timer_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_hal_Timer_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_hal_Timer_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_hal_Timer_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_hal_Timer_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_hal_Timer_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_hal_Timer_Module__startupDone__S( void ) 
{
    return ti_sysbios_hal_Timer_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label* ti_sysbios_hal_Timer_Handle__label__S( xdc_Ptr obj, xdc_runtime_Types_Label* lab ) 
{
    lab->handle = obj;
    lab->modId = 32793;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_hal_Timer_Params__init__S( xdc_Ptr prms, xdc_Ptr src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_hal_Timer_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_hal_Timer_Object__get__S( xdc_Ptr oa, xdc_Int i ) 
{
    if (oa) {
        return ((ti_sysbios_hal_Timer_Object__*)oa) + i;
    }

    if (ti_sysbios_hal_Timer_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_hal_Timer_Object__*)ti_sysbios_hal_Timer_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_hal_Timer_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_hal_Timer_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_hal_Timer_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_hal_Timer_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_hal_Timer_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_hal_Timer_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const ti_sysbios_hal_Timer___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    ti_sysbios_hal_Timer_Params prms;
    ti_sysbios_hal_Timer_Object* obj;
    int iStat;

    ti_sysbios_hal_Timer_Args__create* args = aa;
    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_hal_Timer_Object__DESC__C, oa, osz, &prms, (xdc_Ptr)pa, psz, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_hal_Timer_Instance_init__F(obj, args->id, args->tickFxn, &prms, eb);
    if (xdc_runtime_Error_check(eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_hal_Timer_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_hal_Timer_Instance_finalize__F, iStat, (xdc_Bool)(oa != NULL));
        return NULL;
    }

    return obj;
}

/* Object__destruct__S */
xdc_Void ti_sysbios_hal_Timer_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_hal_Timer_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_hal_Timer_Instance_finalize__F, 0, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_hal_Timer_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_hal_Timer_Object__DESC__C, *((ti_sysbios_hal_Timer_Object**)instp), (xdc_Fxn)ti_sysbios_hal_Timer_Instance_finalize__F, 0, FALSE);
    *((ti_sysbios_hal_Timer_Handle*)instp) = NULL;
}


/*
 * ======== ti.sysbios.hal.Timer_TimerProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_hal_Timer_TimerProxy_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_hal_Timer_TimerProxy_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_hal_Timer_TimerProxy_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_hal_Timer_TimerProxy_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_hal_Timer_TimerProxy_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_hal_Timer_TimerProxy_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_hal_Timer_TimerProxy_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_hal_Timer_TimerProxy_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_hal_Timer_TimerProxy_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_hal_Timer_TimerProxy_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_hal_Timer_TimerProxy_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_hal_Timer_TimerProxy_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_hal_Timer_TimerProxy_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_hal_Timer_TimerProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_hal_Timer_TimerProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_hal_Timer_TimerProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_hal_Timer_TimerProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_hal_Timer_TimerProxy_Module_GateProxy_query
xdc_Bool ti_sysbios_hal_Timer_TimerProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr ti_sysbios_hal_Timer_TimerProxy_Proxy__delegate__S( void )
{
    return 0;
}



/*
 * ======== ti.sysbios.heaps.HeapMem SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_heaps_HeapMem_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_heaps_HeapMem_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_heaps_HeapMem_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_heaps_HeapMem_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_heaps_HeapMem_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_heaps_HeapMem_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_heaps_HeapMem_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_heaps_HeapMem_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_heaps_HeapMem_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_heaps_HeapMem_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_heaps_HeapMem_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_heaps_HeapMem_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_heaps_HeapMem_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_heaps_HeapMem_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_heaps_HeapMem_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_heaps_HeapMem_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_heaps_HeapMem_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_heaps_HeapMem_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_heaps_HeapMem_Module__startupDone__S( void ) 
{
    return 1;
}

/* Handle__label__S */
xdc_runtime_Types_Label* ti_sysbios_heaps_HeapMem_Handle__label__S( xdc_Ptr obj, xdc_runtime_Types_Label* lab ) 
{
    lab->handle = obj;
    lab->modId = 32807;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_heaps_HeapMem_Params__init__S( xdc_Ptr prms, xdc_Ptr src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_heaps_HeapMem_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_heaps_HeapMem_Object__get__S( xdc_Ptr oa, xdc_Int i ) 
{
    if (oa) {
        return ((ti_sysbios_heaps_HeapMem_Object__*)oa) + i;
    }

    if (ti_sysbios_heaps_HeapMem_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_heaps_HeapMem_Object__*)ti_sysbios_heaps_HeapMem_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_heaps_HeapMem_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_heaps_HeapMem_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_heaps_HeapMem_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_heaps_HeapMem_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_heaps_HeapMem_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_heaps_HeapMem_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const ti_sysbios_heaps_HeapMem___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    ti_sysbios_heaps_HeapMem_Params prms;
    ti_sysbios_heaps_HeapMem_Object* obj;

    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_heaps_HeapMem_Object__DESC__C, oa, osz, &prms, (xdc_Ptr)pa, psz, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_heaps_HeapMem_Instance_init__F(obj, &prms);
    return obj;
}

/* Object__destruct__S */
xdc_Void ti_sysbios_heaps_HeapMem_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_heaps_HeapMem_Object__DESC__C, obj, NULL, -1, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_heaps_HeapMem_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_heaps_HeapMem_Object__DESC__C, *((ti_sysbios_heaps_HeapMem_Object**)instp), NULL, -1, FALSE);
    *((ti_sysbios_heaps_HeapMem_Handle*)instp) = NULL;
}


/*
 * ======== ti.sysbios.heaps.HeapMem_Module_GateProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_heaps_HeapMem_Module_GateProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_heaps_HeapMem_Module_GateProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_heaps_HeapMem_Module_GateProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_heaps_HeapMem_Module_GateProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_heaps_HeapMem_Module_GateProxy_Module_GateProxy_query
xdc_Bool ti_sysbios_heaps_HeapMem_Module_GateProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr ti_sysbios_heaps_HeapMem_Module_GateProxy_Proxy__delegate__S( void )
{
    return (xdc_Ptr)&ti_sysbios_gates_GateMutex_Module__FXNS__C;
}



/*
 * ======== ti.sysbios.knl.Clock SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_knl_Clock_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_knl_Clock_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_knl_Clock_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_knl_Clock_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_knl_Clock_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_knl_Clock_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_knl_Clock_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_knl_Clock_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_knl_Clock_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_knl_Clock_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_knl_Clock_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_knl_Clock_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_knl_Clock_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_knl_Clock_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_knl_Clock_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_knl_Clock_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_knl_Clock_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_knl_Clock_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Clock_Module__startupDone__S( void ) 
{
    return ti_sysbios_knl_Clock_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label* ti_sysbios_knl_Clock_Handle__label__S( xdc_Ptr obj, xdc_runtime_Types_Label* lab ) 
{
    lab->handle = obj;
    lab->modId = 32796;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_knl_Clock_Params__init__S( xdc_Ptr prms, xdc_Ptr src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_knl_Clock_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_knl_Clock_Object__get__S( xdc_Ptr oa, xdc_Int i ) 
{
    if (oa) {
        return ((ti_sysbios_knl_Clock_Object__*)oa) + i;
    }

    if (ti_sysbios_knl_Clock_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_knl_Clock_Object__*)ti_sysbios_knl_Clock_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_knl_Clock_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_knl_Clock_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_knl_Clock_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_knl_Clock_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_knl_Clock_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_knl_Clock_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const ti_sysbios_knl_Clock___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    ti_sysbios_knl_Clock_Params prms;
    ti_sysbios_knl_Clock_Object* obj;

    ti_sysbios_knl_Clock_Args__create* args = aa;
    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Clock_Object__DESC__C, oa, osz, &prms, (xdc_Ptr)pa, psz, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_knl_Clock_Instance_init__F(obj, args->clockFxn, args->timeout, &prms);
    return obj;
}

/* Object__destruct__S */
xdc_Void ti_sysbios_knl_Clock_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Clock_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_knl_Clock_Instance_finalize__F, -1, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_knl_Clock_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Clock_Object__DESC__C, *((ti_sysbios_knl_Clock_Object**)instp), (xdc_Fxn)ti_sysbios_knl_Clock_Instance_finalize__F, -1, FALSE);
    *((ti_sysbios_knl_Clock_Handle*)instp) = NULL;
}


/*
 * ======== ti.sysbios.knl.Idle SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Idle_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== ti.sysbios.knl.Intrinsics SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Intrinsics_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== ti.sysbios.knl.Intrinsics_SupportProxy SYSTEM FUNCTIONS ========
 */

xdc_Bool ti_sysbios_knl_Intrinsics_SupportProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr ti_sysbios_knl_Intrinsics_SupportProxy_Proxy__delegate__S( void )
{
    return 0;
}


/*
 * ======== ti.sysbios.knl.Queue SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_knl_Queue_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_knl_Queue_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_knl_Queue_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_knl_Queue_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_knl_Queue_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_knl_Queue_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_knl_Queue_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_knl_Queue_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_knl_Queue_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_knl_Queue_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_knl_Queue_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_knl_Queue_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_knl_Queue_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_knl_Queue_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_knl_Queue_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_knl_Queue_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_knl_Queue_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_knl_Queue_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Queue_Module__startupDone__S( void ) 
{
    return 1;
}

/* Handle__label__S */
xdc_runtime_Types_Label* ti_sysbios_knl_Queue_Handle__label__S( xdc_Ptr obj, xdc_runtime_Types_Label* lab ) 
{
    lab->handle = obj;
    lab->modId = 32799;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_knl_Queue_Params__init__S( xdc_Ptr prms, xdc_Ptr src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_knl_Queue_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_knl_Queue_Object__get__S( xdc_Ptr oa, xdc_Int i ) 
{
    if (oa) {
        return ((ti_sysbios_knl_Queue_Object__*)oa) + i;
    }

    if (ti_sysbios_knl_Queue_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_knl_Queue_Object__*)ti_sysbios_knl_Queue_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_knl_Queue_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_knl_Queue_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_knl_Queue_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_knl_Queue_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_knl_Queue_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_knl_Queue_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const ti_sysbios_knl_Queue___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    ti_sysbios_knl_Queue_Params prms;
    ti_sysbios_knl_Queue_Object* obj;

    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Queue_Object__DESC__C, oa, osz, &prms, (xdc_Ptr)pa, psz, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_knl_Queue_Instance_init__F(obj, &prms);
    return obj;
}

/* Object__destruct__S */
xdc_Void ti_sysbios_knl_Queue_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Queue_Object__DESC__C, obj, NULL, -1, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_knl_Queue_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Queue_Object__DESC__C, *((ti_sysbios_knl_Queue_Object**)instp), NULL, -1, FALSE);
    *((ti_sysbios_knl_Queue_Handle*)instp) = NULL;
}


/*
 * ======== ti.sysbios.knl.Semaphore SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_knl_Semaphore_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_knl_Semaphore_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_knl_Semaphore_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_knl_Semaphore_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_knl_Semaphore_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_knl_Semaphore_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_knl_Semaphore_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_knl_Semaphore_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_knl_Semaphore_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_knl_Semaphore_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_knl_Semaphore_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_knl_Semaphore_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_knl_Semaphore_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_knl_Semaphore_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_knl_Semaphore_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_knl_Semaphore_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_knl_Semaphore_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_knl_Semaphore_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Semaphore_Module__startupDone__S( void ) 
{
    return 1;
}

/* Handle__label__S */
xdc_runtime_Types_Label* ti_sysbios_knl_Semaphore_Handle__label__S( xdc_Ptr obj, xdc_runtime_Types_Label* lab ) 
{
    lab->handle = obj;
    lab->modId = 32800;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_knl_Semaphore_Params__init__S( xdc_Ptr prms, xdc_Ptr src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_knl_Semaphore_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_knl_Semaphore_Object__get__S( xdc_Ptr oa, xdc_Int i ) 
{
    if (oa) {
        return ((ti_sysbios_knl_Semaphore_Object__*)oa) + i;
    }

    if (ti_sysbios_knl_Semaphore_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_knl_Semaphore_Object__*)ti_sysbios_knl_Semaphore_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_knl_Semaphore_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_knl_Semaphore_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_knl_Semaphore_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_knl_Semaphore_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_knl_Semaphore_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_knl_Semaphore_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const ti_sysbios_knl_Semaphore___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    ti_sysbios_knl_Semaphore_Params prms;
    ti_sysbios_knl_Semaphore_Object* obj;

    ti_sysbios_knl_Semaphore_Args__create* args = aa;
    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Semaphore_Object__DESC__C, oa, osz, &prms, (xdc_Ptr)pa, psz, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_knl_Semaphore_Instance_init__F(obj, args->count, &prms);
    return obj;
}

/* Object__destruct__S */
xdc_Void ti_sysbios_knl_Semaphore_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Semaphore_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_knl_Semaphore_Instance_finalize__F, -1, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_knl_Semaphore_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Semaphore_Object__DESC__C, *((ti_sysbios_knl_Semaphore_Object**)instp), (xdc_Fxn)ti_sysbios_knl_Semaphore_Instance_finalize__F, -1, FALSE);
    *((ti_sysbios_knl_Semaphore_Handle*)instp) = NULL;
}


/*
 * ======== ti.sysbios.knl.Swi SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_knl_Swi_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_knl_Swi_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_knl_Swi_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_knl_Swi_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_knl_Swi_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_knl_Swi_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_knl_Swi_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_knl_Swi_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_knl_Swi_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_knl_Swi_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_knl_Swi_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_knl_Swi_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_knl_Swi_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_knl_Swi_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_knl_Swi_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_knl_Swi_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_knl_Swi_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_knl_Swi_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Swi_Module__startupDone__S( void ) 
{
    return ti_sysbios_knl_Swi_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label* ti_sysbios_knl_Swi_Handle__label__S( xdc_Ptr obj, xdc_runtime_Types_Label* lab ) 
{
    lab->handle = obj;
    lab->modId = 32801;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_knl_Swi_Params__init__S( xdc_Ptr prms, xdc_Ptr src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_knl_Swi_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_knl_Swi_Object__get__S( xdc_Ptr oa, xdc_Int i ) 
{
    if (oa) {
        return ((ti_sysbios_knl_Swi_Object__*)oa) + i;
    }

    if (ti_sysbios_knl_Swi_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_knl_Swi_Object__*)ti_sysbios_knl_Swi_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_knl_Swi_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_knl_Swi_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_knl_Swi_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_knl_Swi_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_knl_Swi_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_knl_Swi_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const ti_sysbios_knl_Swi___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    ti_sysbios_knl_Swi_Params prms;
    ti_sysbios_knl_Swi_Object* obj;
    int iStat;

    ti_sysbios_knl_Swi_Args__create* args = aa;
    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Swi_Object__DESC__C, oa, osz, &prms, (xdc_Ptr)pa, psz, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_knl_Swi_Instance_init__F(obj, args->fxn, &prms, eb);
    if (xdc_runtime_Error_check(eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Swi_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_knl_Swi_Instance_finalize__F, iStat, (xdc_Bool)(oa != NULL));
        return NULL;
    }

    return obj;
}

/* Object__destruct__S */
xdc_Void ti_sysbios_knl_Swi_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Swi_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_knl_Swi_Instance_finalize__F, 0, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_knl_Swi_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Swi_Object__DESC__C, *((ti_sysbios_knl_Swi_Object**)instp), (xdc_Fxn)ti_sysbios_knl_Swi_Instance_finalize__F, 0, FALSE);
    *((ti_sysbios_knl_Swi_Handle*)instp) = NULL;
}


/*
 * ======== ti.sysbios.knl.Task SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_knl_Task_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_knl_Task_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_knl_Task_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_knl_Task_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_knl_Task_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_knl_Task_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_knl_Task_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_knl_Task_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_knl_Task_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_knl_Task_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_knl_Task_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_knl_Task_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_knl_Task_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_knl_Task_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_knl_Task_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_knl_Task_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_knl_Task_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_knl_Task_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Task_Module__startupDone__S( void ) 
{
    return ti_sysbios_knl_Task_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label* ti_sysbios_knl_Task_Handle__label__S( xdc_Ptr obj, xdc_runtime_Types_Label* lab ) 
{
    lab->handle = obj;
    lab->modId = 32802;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_knl_Task_Params__init__S( xdc_Ptr prms, xdc_Ptr src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_knl_Task_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_knl_Task_Object__get__S( xdc_Ptr oa, xdc_Int i ) 
{
    if (oa) {
        return ((ti_sysbios_knl_Task_Object__*)oa) + i;
    }

    if (ti_sysbios_knl_Task_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_knl_Task_Object__*)ti_sysbios_knl_Task_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_knl_Task_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_knl_Task_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_knl_Task_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_knl_Task_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_knl_Task_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_knl_Task_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const ti_sysbios_knl_Task___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    ti_sysbios_knl_Task_Params prms;
    ti_sysbios_knl_Task_Object* obj;
    int iStat;

    ti_sysbios_knl_Task_Args__create* args = aa;
    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Task_Object__DESC__C, oa, osz, &prms, (xdc_Ptr)pa, psz, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_knl_Task_Instance_init__F(obj, args->fxn, &prms, eb);
    if (xdc_runtime_Error_check(eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Task_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_knl_Task_Instance_finalize__F, iStat, (xdc_Bool)(oa != NULL));
        return NULL;
    }

    return obj;
}

/* Object__destruct__S */
xdc_Void ti_sysbios_knl_Task_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Task_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_knl_Task_Instance_finalize__F, 0, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_knl_Task_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Task_Object__DESC__C, *((ti_sysbios_knl_Task_Object**)instp), (xdc_Fxn)ti_sysbios_knl_Task_Instance_finalize__F, 0, FALSE);
    *((ti_sysbios_knl_Task_Handle*)instp) = NULL;
}


/*
 * ======== ti.sysbios.knl.Task_SupportProxy SYSTEM FUNCTIONS ========
 */

xdc_Bool ti_sysbios_knl_Task_SupportProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr ti_sysbios_knl_Task_SupportProxy_Proxy__delegate__S( void )
{
    return 0;
}


/*
 * ======== ti.sysbios.timers.timer64.Timer SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_timers_timer64_Timer_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_timers_timer64_Timer_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_timers_timer64_Timer_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_timers_timer64_Timer_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_timers_timer64_Timer_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_timers_timer64_Timer_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_timers_timer64_Timer_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_timers_timer64_Timer_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_timers_timer64_Timer_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_timers_timer64_Timer_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_timers_timer64_Timer_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_timers_timer64_Timer_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_timers_timer64_Timer_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_timers_timer64_Timer_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_timers_timer64_Timer_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_timers_timer64_Timer_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_timers_timer64_Timer_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_timers_timer64_Timer_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_timers_timer64_Timer_Module__startupDone__S( void ) 
{
    return ti_sysbios_timers_timer64_Timer_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label* ti_sysbios_timers_timer64_Timer_Handle__label__S( xdc_Ptr obj, xdc_runtime_Types_Label* lab ) 
{
    lab->handle = obj;
    lab->modId = 32805;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_timers_timer64_Timer_Params__init__S( xdc_Ptr prms, xdc_Ptr src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_timers_timer64_Timer_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_timers_timer64_Timer_Object__get__S( xdc_Ptr oa, xdc_Int i ) 
{
    if (oa) {
        return ((ti_sysbios_timers_timer64_Timer_Object__*)oa) + i;
    }

    if (ti_sysbios_timers_timer64_Timer_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_timers_timer64_Timer_Object__*)ti_sysbios_timers_timer64_Timer_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_timers_timer64_Timer_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_timers_timer64_Timer_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_timers_timer64_Timer_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_timers_timer64_Timer_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_timers_timer64_Timer_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_timers_timer64_Timer_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const ti_sysbios_timers_timer64_Timer___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    ti_sysbios_timers_timer64_Timer_Params prms;
    ti_sysbios_timers_timer64_Timer_Object* obj;
    int iStat;

    ti_sysbios_timers_timer64_Timer_Args__create* args = aa;
    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_timers_timer64_Timer_Object__DESC__C, oa, osz, &prms, (xdc_Ptr)pa, psz, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_timers_timer64_Timer_Instance_init__F(obj, args->id, args->tickFxn, &prms, eb);
    if (xdc_runtime_Error_check(eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_timers_timer64_Timer_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_timers_timer64_Timer_Instance_finalize__F, iStat, (xdc_Bool)(oa != NULL));
        return NULL;
    }

    return obj;
}

/* Object__destruct__S */
xdc_Void ti_sysbios_timers_timer64_Timer_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_timers_timer64_Timer_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_timers_timer64_Timer_Instance_finalize__F, 0, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_timers_timer64_Timer_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_timers_timer64_Timer_Object__DESC__C, *((ti_sysbios_timers_timer64_Timer_Object**)instp), (xdc_Fxn)ti_sysbios_timers_timer64_Timer_Instance_finalize__F, 0, FALSE);
    *((ti_sysbios_timers_timer64_Timer_Handle*)instp) = NULL;
}


/*
 * ======== ti.sysbios.timers.timer64.Timer_TimerSupportProxy SYSTEM FUNCTIONS ========
 */

xdc_Bool ti_sysbios_timers_timer64_Timer_TimerSupportProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr ti_sysbios_timers_timer64_Timer_TimerSupportProxy_Proxy__delegate__S( void )
{
    return 0;
}


/*
 * ======== ti.sysbios.xdcruntime.SemThreadSupport SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_xdcruntime_SemThreadSupport_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_xdcruntime_SemThreadSupport_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_xdcruntime_SemThreadSupport_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_xdcruntime_SemThreadSupport_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_xdcruntime_SemThreadSupport_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_xdcruntime_SemThreadSupport_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_xdcruntime_SemThreadSupport_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_xdcruntime_SemThreadSupport_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_xdcruntime_SemThreadSupport_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_xdcruntime_SemThreadSupport_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_xdcruntime_SemThreadSupport_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_xdcruntime_SemThreadSupport_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_xdcruntime_SemThreadSupport_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_xdcruntime_SemThreadSupport_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_xdcruntime_SemThreadSupport_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_xdcruntime_SemThreadSupport_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_xdcruntime_SemThreadSupport_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_xdcruntime_SemThreadSupport_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_xdcruntime_SemThreadSupport_Module__startupDone__S( void ) 
{
    return 1;
}

/* Handle__label__S */
xdc_runtime_Types_Label* ti_sysbios_xdcruntime_SemThreadSupport_Handle__label__S( xdc_Ptr obj, xdc_runtime_Types_Label* lab ) 
{
    lab->handle = obj;
    lab->modId = 32838;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_xdcruntime_SemThreadSupport_Params__init__S( xdc_Ptr prms, xdc_Ptr src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_xdcruntime_SemThreadSupport_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_xdcruntime_SemThreadSupport_Object__get__S( xdc_Ptr oa, xdc_Int i ) 
{
    if (oa) {
        return ((ti_sysbios_xdcruntime_SemThreadSupport_Object__*)oa) + i;
    }

    if (ti_sysbios_xdcruntime_SemThreadSupport_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_xdcruntime_SemThreadSupport_Object__*)ti_sysbios_xdcruntime_SemThreadSupport_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_xdcruntime_SemThreadSupport_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_xdcruntime_SemThreadSupport_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_xdcruntime_SemThreadSupport_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_xdcruntime_SemThreadSupport_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_xdcruntime_SemThreadSupport_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_xdcruntime_SemThreadSupport_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const ti_sysbios_xdcruntime_SemThreadSupport___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    ti_sysbios_xdcruntime_SemThreadSupport_Params prms;
    ti_sysbios_xdcruntime_SemThreadSupport_Object* obj;

    ti_sysbios_xdcruntime_SemThreadSupport_Args__create* args = aa;
    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_xdcruntime_SemThreadSupport_Object__DESC__C, oa, osz, &prms, (xdc_Ptr)pa, psz, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_xdcruntime_SemThreadSupport_Instance_init__F(obj, args->count, &prms);
    return obj;
}

/* Object__destruct__S */
xdc_Void ti_sysbios_xdcruntime_SemThreadSupport_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_xdcruntime_SemThreadSupport_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_xdcruntime_SemThreadSupport_Instance_finalize__F, -1, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_xdcruntime_SemThreadSupport_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_xdcruntime_SemThreadSupport_Object__DESC__C, *((ti_sysbios_xdcruntime_SemThreadSupport_Object**)instp), (xdc_Fxn)ti_sysbios_xdcruntime_SemThreadSupport_Instance_finalize__F, -1, FALSE);
    *((ti_sysbios_xdcruntime_SemThreadSupport_Handle*)instp) = NULL;
}


/*
 * ======== xdc.runtime.Assert SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Assert_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== xdc.runtime.Core SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Core_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== xdc.runtime.Defaults SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Defaults_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== xdc.runtime.Diags SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Diags_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== xdc.runtime.Error SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Error_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== xdc.runtime.Gate SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Gate_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== xdc.runtime.Log SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Log_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== xdc.runtime.Main SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Main_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== xdc.runtime.Main_Module_GateProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID xdc_runtime_Main_Module_GateProxy_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL xdc_runtime_Main_Module_GateProxy_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB xdc_runtime_Main_Module_GateProxy_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK xdc_runtime_Main_Module_GateProxy_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF xdc_runtime_Main_Module_GateProxy_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ xdc_runtime_Main_Module_GateProxy_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 xdc_runtime_Main_Module_GateProxy_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 xdc_runtime_Main_Module_GateProxy_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 xdc_runtime_Main_Module_GateProxy_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 xdc_runtime_Main_Module_GateProxy_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 xdc_runtime_Main_Module_GateProxy_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ xdc_runtime_Main_Module_GateProxy_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS xdc_runtime_Main_Module_GateProxy_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create xdc_runtime_Main_Module_GateProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete xdc_runtime_Main_Module_GateProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter xdc_runtime_Main_Module_GateProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave xdc_runtime_Main_Module_GateProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query xdc_runtime_Main_Module_GateProxy_Module_GateProxy_query
xdc_Bool xdc_runtime_Main_Module_GateProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr xdc_runtime_Main_Module_GateProxy_Proxy__delegate__S( void )
{
    return (xdc_Ptr)&ti_sysbios_gates_GateHwi_Module__FXNS__C;
}



/*
 * ======== xdc.runtime.Memory SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Memory_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== xdc.runtime.Memory_HeapProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID xdc_runtime_Memory_HeapProxy_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL xdc_runtime_Memory_HeapProxy_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB xdc_runtime_Memory_HeapProxy_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK xdc_runtime_Memory_HeapProxy_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF xdc_runtime_Memory_HeapProxy_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ xdc_runtime_Memory_HeapProxy_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 xdc_runtime_Memory_HeapProxy_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 xdc_runtime_Memory_HeapProxy_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 xdc_runtime_Memory_HeapProxy_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 xdc_runtime_Memory_HeapProxy_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 xdc_runtime_Memory_HeapProxy_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ xdc_runtime_Memory_HeapProxy_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS xdc_runtime_Memory_HeapProxy_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create xdc_runtime_Memory_HeapProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete xdc_runtime_Memory_HeapProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter xdc_runtime_Memory_HeapProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave xdc_runtime_Memory_HeapProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query xdc_runtime_Memory_HeapProxy_Module_GateProxy_query
xdc_Bool xdc_runtime_Memory_HeapProxy_Proxy__abstract__S( void )
{
    return 1;
}
xdc_Ptr xdc_runtime_Memory_HeapProxy_Proxy__delegate__S( void )
{
    return (xdc_Ptr)&ti_sysbios_heaps_HeapMem_Module__FXNS__C;
}



/*
 * ======== xdc.runtime.Registry SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Registry_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== xdc.runtime.Startup SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Startup_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== xdc.runtime.SysMin SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_SysMin_Module__startupDone__S( void ) 
{
    return xdc_runtime_SysMin_Module__startupDone__F();
}



/*
 * ======== xdc.runtime.System SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_System_Module__startupDone__S( void ) 
{
    return xdc_runtime_System_Module__startupDone__F();
}



/*
 * ======== xdc.runtime.System_Module_GateProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID xdc_runtime_System_Module_GateProxy_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL xdc_runtime_System_Module_GateProxy_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB xdc_runtime_System_Module_GateProxy_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK xdc_runtime_System_Module_GateProxy_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF xdc_runtime_System_Module_GateProxy_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ xdc_runtime_System_Module_GateProxy_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 xdc_runtime_System_Module_GateProxy_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 xdc_runtime_System_Module_GateProxy_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 xdc_runtime_System_Module_GateProxy_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 xdc_runtime_System_Module_GateProxy_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 xdc_runtime_System_Module_GateProxy_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ xdc_runtime_System_Module_GateProxy_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS xdc_runtime_System_Module_GateProxy_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create xdc_runtime_System_Module_GateProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete xdc_runtime_System_Module_GateProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter xdc_runtime_System_Module_GateProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave xdc_runtime_System_Module_GateProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query xdc_runtime_System_Module_GateProxy_Module_GateProxy_query
xdc_Bool xdc_runtime_System_Module_GateProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr xdc_runtime_System_Module_GateProxy_Proxy__delegate__S( void )
{
    return (xdc_Ptr)&ti_sysbios_gates_GateHwi_Module__FXNS__C;
}



/*
 * ======== xdc.runtime.System_SupportProxy SYSTEM FUNCTIONS ========
 */

xdc_Bool xdc_runtime_System_SupportProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr xdc_runtime_System_SupportProxy_Proxy__delegate__S( void )
{
    return (xdc_Ptr)&xdc_runtime_SysMin_Module__FXNS__C;
}


/*
 * ======== xdc.runtime.Text SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Text_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== xdc.runtime.knl.SemThread SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID xdc_runtime_knl_SemThread_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL xdc_runtime_knl_SemThread_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB xdc_runtime_knl_SemThread_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK xdc_runtime_knl_SemThread_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF xdc_runtime_knl_SemThread_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ xdc_runtime_knl_SemThread_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 xdc_runtime_knl_SemThread_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 xdc_runtime_knl_SemThread_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 xdc_runtime_knl_SemThread_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 xdc_runtime_knl_SemThread_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 xdc_runtime_knl_SemThread_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ xdc_runtime_knl_SemThread_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS xdc_runtime_knl_SemThread_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create xdc_runtime_knl_SemThread_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete xdc_runtime_knl_SemThread_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter xdc_runtime_knl_SemThread_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave xdc_runtime_knl_SemThread_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query xdc_runtime_knl_SemThread_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool xdc_runtime_knl_SemThread_Module__startupDone__S( void ) 
{
    return 1;
}

/* Handle__label__S */
xdc_runtime_Types_Label* xdc_runtime_knl_SemThread_Handle__label__S( xdc_Ptr obj, xdc_runtime_Types_Label* lab ) 
{
    lab->handle = obj;
    lab->modId = 32814;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void xdc_runtime_knl_SemThread_Params__init__S( xdc_Ptr prms, xdc_Ptr src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &xdc_runtime_knl_SemThread_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr xdc_runtime_knl_SemThread_Object__get__S( xdc_Ptr oa, xdc_Int i ) 
{
    if (oa) {
        return ((xdc_runtime_knl_SemThread_Object__*)oa) + i;
    }

    if (xdc_runtime_knl_SemThread_Object__count__C == 0) {
        return NULL;
    }

    return ((xdc_runtime_knl_SemThread_Object__*)xdc_runtime_knl_SemThread_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr xdc_runtime_knl_SemThread_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)xdc_runtime_knl_SemThread_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&xdc_runtime_knl_SemThread_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr xdc_runtime_knl_SemThread_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&xdc_runtime_knl_SemThread_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr xdc_runtime_knl_SemThread_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const xdc_runtime_knl_SemThread___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    xdc_runtime_knl_SemThread_Params prms;
    xdc_runtime_knl_SemThread_Object* obj;
    int iStat;

    xdc_runtime_knl_SemThread_Args__create* args = aa;
    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&xdc_runtime_knl_SemThread_Object__DESC__C, oa, osz, &prms, (xdc_Ptr)pa, psz, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = xdc_runtime_knl_SemThread_Instance_init__F(obj, args->count, &prms, eb);
    if (xdc_runtime_Error_check(eb)) {
        xdc_runtime_Core_deleteObject__I(&xdc_runtime_knl_SemThread_Object__DESC__C, obj, (xdc_Fxn)xdc_runtime_knl_SemThread_Instance_finalize__F, iStat, (xdc_Bool)(oa != NULL));
        return NULL;
    }

    return obj;
}

/* Object__destruct__S */
xdc_Void xdc_runtime_knl_SemThread_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&xdc_runtime_knl_SemThread_Object__DESC__C, obj, (xdc_Fxn)xdc_runtime_knl_SemThread_Instance_finalize__F, 0, TRUE);
}

/* Object__delete__S */
xdc_Void xdc_runtime_knl_SemThread_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&xdc_runtime_knl_SemThread_Object__DESC__C, *((xdc_runtime_knl_SemThread_Object**)instp), (xdc_Fxn)xdc_runtime_knl_SemThread_Instance_finalize__F, 0, FALSE);
    *((xdc_runtime_knl_SemThread_Handle*)instp) = NULL;
}


/*
 * ======== xdc.runtime.knl.SemThread_Proxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID xdc_runtime_knl_SemThread_Proxy_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL xdc_runtime_knl_SemThread_Proxy_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB xdc_runtime_knl_SemThread_Proxy_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK xdc_runtime_knl_SemThread_Proxy_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF xdc_runtime_knl_SemThread_Proxy_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ xdc_runtime_knl_SemThread_Proxy_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 xdc_runtime_knl_SemThread_Proxy_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 xdc_runtime_knl_SemThread_Proxy_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 xdc_runtime_knl_SemThread_Proxy_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 xdc_runtime_knl_SemThread_Proxy_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 xdc_runtime_knl_SemThread_Proxy_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ xdc_runtime_knl_SemThread_Proxy_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS xdc_runtime_knl_SemThread_Proxy_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create xdc_runtime_knl_SemThread_Proxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete xdc_runtime_knl_SemThread_Proxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter xdc_runtime_knl_SemThread_Proxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave xdc_runtime_knl_SemThread_Proxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query xdc_runtime_knl_SemThread_Proxy_Module_GateProxy_query
xdc_Bool xdc_runtime_knl_SemThread_Proxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr xdc_runtime_knl_SemThread_Proxy_Proxy__delegate__S( void )
{
    return 0;
}



/*
 * ======== xdc.runtime.knl.Sync SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_knl_Sync_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== xdc.runtime.knl.SyncNull SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID xdc_runtime_knl_SyncNull_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL xdc_runtime_knl_SyncNull_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB xdc_runtime_knl_SyncNull_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK xdc_runtime_knl_SyncNull_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF xdc_runtime_knl_SyncNull_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ xdc_runtime_knl_SyncNull_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 xdc_runtime_knl_SyncNull_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 xdc_runtime_knl_SyncNull_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 xdc_runtime_knl_SyncNull_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 xdc_runtime_knl_SyncNull_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 xdc_runtime_knl_SyncNull_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ xdc_runtime_knl_SyncNull_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS xdc_runtime_knl_SyncNull_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create xdc_runtime_knl_SyncNull_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete xdc_runtime_knl_SyncNull_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter xdc_runtime_knl_SyncNull_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave xdc_runtime_knl_SyncNull_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query xdc_runtime_knl_SyncNull_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool xdc_runtime_knl_SyncNull_Module__startupDone__S( void ) 
{
    return 1;
}

/* Handle__label__S */
xdc_runtime_Types_Label* xdc_runtime_knl_SyncNull_Handle__label__S( xdc_Ptr obj, xdc_runtime_Types_Label* lab ) 
{
    lab->handle = obj;
    lab->modId = 32815;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void xdc_runtime_knl_SyncNull_Params__init__S( xdc_Ptr prms, xdc_Ptr src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &xdc_runtime_knl_SyncNull_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr xdc_runtime_knl_SyncNull_Object__get__S( xdc_Ptr oa, xdc_Int i ) 
{
    if (oa) {
        return ((xdc_runtime_knl_SyncNull_Object__*)oa) + i;
    }

    if (xdc_runtime_knl_SyncNull_Object__count__C == 0) {
        return NULL;
    }

    return ((xdc_runtime_knl_SyncNull_Object__*)xdc_runtime_knl_SyncNull_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr xdc_runtime_knl_SyncNull_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)xdc_runtime_knl_SyncNull_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&xdc_runtime_knl_SyncNull_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr xdc_runtime_knl_SyncNull_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&xdc_runtime_knl_SyncNull_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr xdc_runtime_knl_SyncNull_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const xdc_runtime_knl_SyncNull___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    xdc_runtime_knl_SyncNull_Params prms;
    xdc_runtime_knl_SyncNull_Object* obj;

    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&xdc_runtime_knl_SyncNull_Object__DESC__C, oa, osz, &prms, (xdc_Ptr)pa, psz, eb);
    if (obj == NULL) {
        return NULL;
    }

    return obj;
}

/* Object__destruct__S */
xdc_Void xdc_runtime_knl_SyncNull_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&xdc_runtime_knl_SyncNull_Object__DESC__C, obj, NULL, -1, TRUE);
}

/* Object__delete__S */
xdc_Void xdc_runtime_knl_SyncNull_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&xdc_runtime_knl_SyncNull_Object__DESC__C, *((xdc_runtime_knl_SyncNull_Object**)instp), NULL, -1, FALSE);
    *((xdc_runtime_knl_SyncNull_Handle*)instp) = NULL;
}


/*
 * ======== xdc.runtime.knl.SyncSemThread SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID xdc_runtime_knl_SyncSemThread_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL xdc_runtime_knl_SyncSemThread_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB xdc_runtime_knl_SyncSemThread_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK xdc_runtime_knl_SyncSemThread_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF xdc_runtime_knl_SyncSemThread_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ xdc_runtime_knl_SyncSemThread_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 xdc_runtime_knl_SyncSemThread_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 xdc_runtime_knl_SyncSemThread_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 xdc_runtime_knl_SyncSemThread_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 xdc_runtime_knl_SyncSemThread_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 xdc_runtime_knl_SyncSemThread_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ xdc_runtime_knl_SyncSemThread_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS xdc_runtime_knl_SyncSemThread_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create xdc_runtime_knl_SyncSemThread_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete xdc_runtime_knl_SyncSemThread_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter xdc_runtime_knl_SyncSemThread_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave xdc_runtime_knl_SyncSemThread_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query xdc_runtime_knl_SyncSemThread_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool xdc_runtime_knl_SyncSemThread_Module__startupDone__S( void ) 
{
    return 1;
}

/* Handle__label__S */
xdc_runtime_Types_Label* xdc_runtime_knl_SyncSemThread_Handle__label__S( xdc_Ptr obj, xdc_runtime_Types_Label* lab ) 
{
    lab->handle = obj;
    lab->modId = 32816;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void xdc_runtime_knl_SyncSemThread_Params__init__S( xdc_Ptr prms, xdc_Ptr src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &xdc_runtime_knl_SyncSemThread_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr xdc_runtime_knl_SyncSemThread_Object__get__S( xdc_Ptr oa, xdc_Int i ) 
{
    if (oa) {
        return ((xdc_runtime_knl_SyncSemThread_Object__*)oa) + i;
    }

    if (xdc_runtime_knl_SyncSemThread_Object__count__C == 0) {
        return NULL;
    }

    return ((xdc_runtime_knl_SyncSemThread_Object__*)xdc_runtime_knl_SyncSemThread_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr xdc_runtime_knl_SyncSemThread_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)xdc_runtime_knl_SyncSemThread_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&xdc_runtime_knl_SyncSemThread_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr xdc_runtime_knl_SyncSemThread_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&xdc_runtime_knl_SyncSemThread_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr xdc_runtime_knl_SyncSemThread_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const xdc_runtime_knl_SyncSemThread___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    xdc_runtime_knl_SyncSemThread_Params prms;
    xdc_runtime_knl_SyncSemThread_Object* obj;
    int iStat;

    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&xdc_runtime_knl_SyncSemThread_Object__DESC__C, oa, osz, &prms, (xdc_Ptr)pa, psz, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = xdc_runtime_knl_SyncSemThread_Instance_init__F(obj, &prms, eb);
    if (xdc_runtime_Error_check(eb)) {
        xdc_runtime_Core_deleteObject__I(&xdc_runtime_knl_SyncSemThread_Object__DESC__C, obj, (xdc_Fxn)xdc_runtime_knl_SyncSemThread_Instance_finalize__F, iStat, (xdc_Bool)(oa != NULL));
        return NULL;
    }

    return obj;
}

/* Object__destruct__S */
xdc_Void xdc_runtime_knl_SyncSemThread_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&xdc_runtime_knl_SyncSemThread_Object__DESC__C, obj, (xdc_Fxn)xdc_runtime_knl_SyncSemThread_Instance_finalize__F, 0, TRUE);
}

/* Object__delete__S */
xdc_Void xdc_runtime_knl_SyncSemThread_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&xdc_runtime_knl_SyncSemThread_Object__DESC__C, *((xdc_runtime_knl_SyncSemThread_Object**)instp), (xdc_Fxn)xdc_runtime_knl_SyncSemThread_Instance_finalize__F, 0, FALSE);
    *((xdc_runtime_knl_SyncSemThread_Handle*)instp) = NULL;
}


/*
 * ======== xdc.runtime.knl.Sync_Proxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID xdc_runtime_knl_Sync_Proxy_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL xdc_runtime_knl_Sync_Proxy_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB xdc_runtime_knl_Sync_Proxy_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK xdc_runtime_knl_Sync_Proxy_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF xdc_runtime_knl_Sync_Proxy_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ xdc_runtime_knl_Sync_Proxy_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 xdc_runtime_knl_Sync_Proxy_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 xdc_runtime_knl_Sync_Proxy_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 xdc_runtime_knl_Sync_Proxy_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 xdc_runtime_knl_Sync_Proxy_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 xdc_runtime_knl_Sync_Proxy_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ xdc_runtime_knl_Sync_Proxy_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS xdc_runtime_knl_Sync_Proxy_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create xdc_runtime_knl_Sync_Proxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete xdc_runtime_knl_Sync_Proxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter xdc_runtime_knl_Sync_Proxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave xdc_runtime_knl_Sync_Proxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query xdc_runtime_knl_Sync_Proxy_Module_GateProxy_query
xdc_Bool xdc_runtime_knl_Sync_Proxy_Proxy__abstract__S( void )
{
    return 1;
}
xdc_Ptr xdc_runtime_knl_Sync_Proxy_Proxy__delegate__S( void )
{
    return (xdc_Ptr)&xdc_runtime_knl_SyncNull_Module__FXNS__C;
}



/*
 * ======== INITIALIZATION ENTRY POINT ========
 */

extern int __xdc__init(void);
#ifdef __GNUC__
#if __GNUC__ >= 4
    __attribute__ ((externally_visible))
#endif
#endif
__FAR__ int (* volatile __xdc__init__addr)(void) = &__xdc__init;


/*
 * ======== PROGRAM GLOBALS ========
 */


/*
 * ======== CONSTANTS ========
 */

#pragma DATA_SECTION(xdc_runtime_IModule_Interface__BASE__C, ".const:xdc_runtime_IModule_Interface__BASE__C");
#pragma DATA_SECTION(ti_sdo_io_IConverter_Interface__BASE__C, ".const:ti_sdo_io_IConverter_Interface__BASE__C");
#pragma DATA_SECTION(ti_sdo_io_IDriver_Interface__BASE__C, ".const:ti_sdo_io_IDriver_Interface__BASE__C");
#pragma DATA_SECTION(xdc_runtime_IGateProvider_Interface__BASE__C, ".const:xdc_runtime_IGateProvider_Interface__BASE__C");
#pragma DATA_SECTION(xdc_runtime_IHeap_Interface__BASE__C, ".const:xdc_runtime_IHeap_Interface__BASE__C");
#pragma DATA_SECTION(xdc_runtime_ISystemSupport_Interface__BASE__C, ".const:xdc_runtime_ISystemSupport_Interface__BASE__C");
#pragma DATA_SECTION(xdc_runtime_knl_ISemaphore_Interface__BASE__C, ".const:xdc_runtime_knl_ISemaphore_Interface__BASE__C");
#pragma DATA_SECTION(xdc_runtime_knl_ISync_Interface__BASE__C, ".const:xdc_runtime_knl_ISync_Interface__BASE__C");
#pragma DATA_SECTION(ti_sdo_io_converters_DriverAdapter_Module__FXNS__C, ".const:ti_sdo_io_converters_DriverAdapter_Module__FXNS__C");
#pragma DATA_SECTION(ti_sdo_io_drivers_Generator_Module__FXNS__C, ".const:ti_sdo_io_drivers_Generator_Module__FXNS__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__FXNS__C, ".const:ti_sysbios_gates_GateHwi_Module__FXNS__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__FXNS__C, ".const:ti_sysbios_gates_GateMutex_Module__FXNS__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateSwi_Module__FXNS__C, ".const:ti_sysbios_gates_GateSwi_Module__FXNS__C");
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__FXNS__C, ".const:ti_sysbios_heaps_HeapMem_Module__FXNS__C");
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__FXNS__C, ".const:xdc_runtime_SysMin_Module__FXNS__C");
#pragma DATA_SECTION(xdc_runtime_knl_SemThread_Module__FXNS__C, ".const:xdc_runtime_knl_SemThread_Module__FXNS__C");
#pragma DATA_SECTION(xdc_runtime_knl_SyncNull_Module__FXNS__C, ".const:xdc_runtime_knl_SyncNull_Module__FXNS__C");
#pragma DATA_SECTION(xdc_runtime_knl_SyncSemThread_Module__FXNS__C, ".const:xdc_runtime_knl_SyncSemThread_Module__FXNS__C");
#pragma DATA_SECTION(ti_sdo_io_Stream_Object__PARAMS__C, ".const:ti_sdo_io_Stream_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sdo_io_converters_DriverAdapter_Object__PARAMS__C, ".const:ti_sdo_io_converters_DriverAdapter_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sdo_io_drivers_Generator_Object__PARAMS__C, ".const:ti_sdo_io_drivers_Generator_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sdo_utils_List_Object__PARAMS__C, ".const:ti_sdo_utils_List_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sdo_utils_NameServer_Object__PARAMS__C, ".const:ti_sdo_utils_NameServer_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sdo_utils_NameServerRemoteNull_Object__PARAMS__C, ".const:ti_sdo_utils_NameServerRemoteNull_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_dm6446_Hwi_Object__PARAMS__C, ".const:ti_sysbios_family_arm_dm6446_Hwi_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Object__PARAMS__C, ".const:ti_sysbios_gates_GateHwi_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Object__PARAMS__C, ".const:ti_sysbios_gates_GateMutex_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateSwi_Object__PARAMS__C, ".const:ti_sysbios_gates_GateSwi_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Object__PARAMS__C, ".const:ti_sysbios_hal_Hwi_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Object__PARAMS__C, ".const:ti_sysbios_hal_Timer_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Object__PARAMS__C, ".const:ti_sysbios_heaps_HeapMem_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Object__PARAMS__C, ".const:ti_sysbios_knl_Clock_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Object__PARAMS__C, ".const:ti_sysbios_knl_Queue_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Object__PARAMS__C, ".const:ti_sysbios_knl_Semaphore_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Object__PARAMS__C, ".const:ti_sysbios_knl_Swi_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_Object__PARAMS__C, ".const:ti_sysbios_knl_Task_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_timers_timer64_Timer_Object__PARAMS__C, ".const:ti_sysbios_timers_timer64_Timer_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_xdcruntime_SemThreadSupport_Object__PARAMS__C, ".const:ti_sysbios_xdcruntime_SemThreadSupport_Object__PARAMS__C");
#pragma DATA_SECTION(xdc_runtime_knl_SemThread_Object__PARAMS__C, ".const:xdc_runtime_knl_SemThread_Object__PARAMS__C");
#pragma DATA_SECTION(xdc_runtime_knl_SyncNull_Object__PARAMS__C, ".const:xdc_runtime_knl_SyncNull_Object__PARAMS__C");
#pragma DATA_SECTION(xdc_runtime_knl_SyncSemThread_Object__PARAMS__C, ".const:xdc_runtime_knl_SyncSemThread_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sdo_io_Stream_Instance_State_freeList__O, ".const:ti_sdo_io_Stream_Instance_State_freeList__O");
#pragma DATA_SECTION(ti_sdo_io_converters_DriverAdapter_Instance_State_fromDriver__O, ".const:ti_sdo_io_converters_DriverAdapter_Instance_State_fromDriver__O");
#pragma DATA_SECTION(ti_sdo_io_drivers_Generator_Module_State_chanList__O, ".const:ti_sdo_io_drivers_Generator_Module_State_chanList__O");
#pragma DATA_SECTION(ti_sdo_utils_NameServer_Instance_State_freeList__O, ".const:ti_sdo_utils_NameServer_Instance_State_freeList__O");
#pragma DATA_SECTION(ti_sdo_utils_NameServer_Instance_State_nameList__O, ".const:ti_sdo_utils_NameServer_Instance_State_nameList__O");
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Instance_State_sem__O, ".const:ti_sysbios_gates_GateMutex_Instance_State_sem__O");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module_State_clockQ__O, ".const:ti_sysbios_knl_Clock_Module_State_clockQ__O");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Instance_State_pendQ__O, ".const:ti_sysbios_knl_Semaphore_Instance_State_pendQ__O");
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module_State_inactiveQ__O, ".const:ti_sysbios_knl_Task_Module_State_inactiveQ__O");
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module_State_terminatedQ__O, ".const:ti_sysbios_knl_Task_Module_State_terminatedQ__O");
#pragma DATA_SECTION(ti_sysbios_xdcruntime_SemThreadSupport_Instance_State_sem__O, ".const:ti_sysbios_xdcruntime_SemThreadSupport_Instance_State_sem__O");
#pragma DATA_SECTION(ti_sdo_io_DriverTable_Module__diagsEnabled__C, ".const:ti_sdo_io_DriverTable_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_sdo_io_DriverTable_Module__diagsIncluded__C, ".const:ti_sdo_io_DriverTable_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_sdo_io_DriverTable_Module__diagsMask__C, ".const:ti_sdo_io_DriverTable_Module__diagsMask__C");
#pragma DATA_SECTION(ti_sdo_io_DriverTable_Module__gateObj__C, ".const:ti_sdo_io_DriverTable_Module__gateObj__C");
#pragma DATA_SECTION(ti_sdo_io_DriverTable_Module__gatePrms__C, ".const:ti_sdo_io_DriverTable_Module__gatePrms__C");
#pragma DATA_SECTION(ti_sdo_io_DriverTable_Module__id__C, ".const:ti_sdo_io_DriverTable_Module__id__C");
#pragma DATA_SECTION(ti_sdo_io_DriverTable_Module__loggerDefined__C, ".const:ti_sdo_io_DriverTable_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_sdo_io_DriverTable_Module__loggerObj__C, ".const:ti_sdo_io_DriverTable_Module__loggerObj__C");
#pragma DATA_SECTION(ti_sdo_io_DriverTable_Module__loggerFxn0__C, ".const:ti_sdo_io_DriverTable_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_sdo_io_DriverTable_Module__loggerFxn1__C, ".const:ti_sdo_io_DriverTable_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_sdo_io_DriverTable_Module__loggerFxn2__C, ".const:ti_sdo_io_DriverTable_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_sdo_io_DriverTable_Module__loggerFxn4__C, ".const:ti_sdo_io_DriverTable_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_sdo_io_DriverTable_Module__loggerFxn8__C, ".const:ti_sdo_io_DriverTable_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_sdo_io_DriverTable_Module__startupDoneFxn__C, ".const:ti_sdo_io_DriverTable_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_sdo_io_DriverTable_Object__count__C, ".const:ti_sdo_io_DriverTable_Object__count__C");
#pragma DATA_SECTION(ti_sdo_io_DriverTable_Object__heap__C, ".const:ti_sdo_io_DriverTable_Object__heap__C");
#pragma DATA_SECTION(ti_sdo_io_DriverTable_Object__sizeof__C, ".const:ti_sdo_io_DriverTable_Object__sizeof__C");
#pragma DATA_SECTION(ti_sdo_io_DriverTable_Object__table__C, ".const:ti_sdo_io_DriverTable_Object__table__C");
#pragma DATA_SECTION(ti_sdo_io_DriverTable_maxRuntimeEntries__C, ".const:ti_sdo_io_DriverTable_maxRuntimeEntries__C");
#pragma DATA_SECTION(ti_sdo_io_DriverTable_gate__C, ".const:ti_sdo_io_DriverTable_gate__C");
#pragma DATA_SECTION(ti_sdo_io_DriverTable_maxNameLen__C, ".const:ti_sdo_io_DriverTable_maxNameLen__C");
#pragma DATA_SECTION(ti_sdo_io_DriverTypes_Module__diagsEnabled__C, ".const:ti_sdo_io_DriverTypes_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_sdo_io_DriverTypes_Module__diagsIncluded__C, ".const:ti_sdo_io_DriverTypes_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_sdo_io_DriverTypes_Module__diagsMask__C, ".const:ti_sdo_io_DriverTypes_Module__diagsMask__C");
#pragma DATA_SECTION(ti_sdo_io_DriverTypes_Module__gateObj__C, ".const:ti_sdo_io_DriverTypes_Module__gateObj__C");
#pragma DATA_SECTION(ti_sdo_io_DriverTypes_Module__gatePrms__C, ".const:ti_sdo_io_DriverTypes_Module__gatePrms__C");
#pragma DATA_SECTION(ti_sdo_io_DriverTypes_Module__id__C, ".const:ti_sdo_io_DriverTypes_Module__id__C");
#pragma DATA_SECTION(ti_sdo_io_DriverTypes_Module__loggerDefined__C, ".const:ti_sdo_io_DriverTypes_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_sdo_io_DriverTypes_Module__loggerObj__C, ".const:ti_sdo_io_DriverTypes_Module__loggerObj__C");
#pragma DATA_SECTION(ti_sdo_io_DriverTypes_Module__loggerFxn0__C, ".const:ti_sdo_io_DriverTypes_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_sdo_io_DriverTypes_Module__loggerFxn1__C, ".const:ti_sdo_io_DriverTypes_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_sdo_io_DriverTypes_Module__loggerFxn2__C, ".const:ti_sdo_io_DriverTypes_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_sdo_io_DriverTypes_Module__loggerFxn4__C, ".const:ti_sdo_io_DriverTypes_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_sdo_io_DriverTypes_Module__loggerFxn8__C, ".const:ti_sdo_io_DriverTypes_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_sdo_io_DriverTypes_Module__startupDoneFxn__C, ".const:ti_sdo_io_DriverTypes_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_sdo_io_DriverTypes_Object__count__C, ".const:ti_sdo_io_DriverTypes_Object__count__C");
#pragma DATA_SECTION(ti_sdo_io_DriverTypes_Object__heap__C, ".const:ti_sdo_io_DriverTypes_Object__heap__C");
#pragma DATA_SECTION(ti_sdo_io_DriverTypes_Object__sizeof__C, ".const:ti_sdo_io_DriverTypes_Object__sizeof__C");
#pragma DATA_SECTION(ti_sdo_io_DriverTypes_Object__table__C, ".const:ti_sdo_io_DriverTypes_Object__table__C");
#pragma DATA_SECTION(ti_sdo_io_DriverTypes_READ__C, ".const:ti_sdo_io_DriverTypes_READ__C");
#pragma DATA_SECTION(ti_sdo_io_DriverTypes_WRITE__C, ".const:ti_sdo_io_DriverTypes_WRITE__C");
#pragma DATA_SECTION(ti_sdo_io_DriverTypes_CHAN_ABORT__C, ".const:ti_sdo_io_DriverTypes_CHAN_ABORT__C");
#pragma DATA_SECTION(ti_sdo_io_DriverTypes_CHAN_RESET__C, ".const:ti_sdo_io_DriverTypes_CHAN_RESET__C");
#pragma DATA_SECTION(ti_sdo_io_DriverTypes_DEVICE_RESET__C, ".const:ti_sdo_io_DriverTypes_DEVICE_RESET__C");
#pragma DATA_SECTION(ti_sdo_io_DriverTypes_EBADIO__C, ".const:ti_sdo_io_DriverTypes_EBADIO__C");
#pragma DATA_SECTION(ti_sdo_io_DriverTypes_EBADMODE__C, ".const:ti_sdo_io_DriverTypes_EBADMODE__C");
#pragma DATA_SECTION(ti_sdo_io_DriverTypes_ENOTIMPL__C, ".const:ti_sdo_io_DriverTypes_ENOTIMPL__C");
#pragma DATA_SECTION(ti_sdo_io_DriverTypes_EBADARGS__C, ".const:ti_sdo_io_DriverTypes_EBADARGS__C");
#pragma DATA_SECTION(ti_sdo_io_DriverTypes_EINUSE__C, ".const:ti_sdo_io_DriverTypes_EINUSE__C");
#pragma DATA_SECTION(ti_sdo_io_DriverTypes_EINVALIDDEV__C, ".const:ti_sdo_io_DriverTypes_EINVALIDDEV__C");
#pragma DATA_SECTION(ti_sdo_io_DriverTypes_EABORTED__C, ".const:ti_sdo_io_DriverTypes_EABORTED__C");
#pragma DATA_SECTION(ti_sdo_io_DriverTypes_LM_startIO__C, ".const:ti_sdo_io_DriverTypes_LM_startIO__C");
#pragma DATA_SECTION(ti_sdo_io_DriverTypes_LM_ioComplete__C, ".const:ti_sdo_io_DriverTypes_LM_ioComplete__C");
#pragma DATA_SECTION(ti_sdo_io_Stream_Object__DESC__C, ".const:ti_sdo_io_Stream_Object__DESC__C");
#pragma DATA_SECTION(ti_sdo_io_Stream_Object__PARAMS__C, ".const:ti_sdo_io_Stream_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sdo_io_Stream_Module__diagsEnabled__C, ".const:ti_sdo_io_Stream_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_sdo_io_Stream_Module__diagsIncluded__C, ".const:ti_sdo_io_Stream_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_sdo_io_Stream_Module__diagsMask__C, ".const:ti_sdo_io_Stream_Module__diagsMask__C");
#pragma DATA_SECTION(ti_sdo_io_Stream_Module__gateObj__C, ".const:ti_sdo_io_Stream_Module__gateObj__C");
#pragma DATA_SECTION(ti_sdo_io_Stream_Module__gatePrms__C, ".const:ti_sdo_io_Stream_Module__gatePrms__C");
#pragma DATA_SECTION(ti_sdo_io_Stream_Module__id__C, ".const:ti_sdo_io_Stream_Module__id__C");
#pragma DATA_SECTION(ti_sdo_io_Stream_Module__loggerDefined__C, ".const:ti_sdo_io_Stream_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_sdo_io_Stream_Module__loggerObj__C, ".const:ti_sdo_io_Stream_Module__loggerObj__C");
#pragma DATA_SECTION(ti_sdo_io_Stream_Module__loggerFxn0__C, ".const:ti_sdo_io_Stream_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_sdo_io_Stream_Module__loggerFxn1__C, ".const:ti_sdo_io_Stream_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_sdo_io_Stream_Module__loggerFxn2__C, ".const:ti_sdo_io_Stream_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_sdo_io_Stream_Module__loggerFxn4__C, ".const:ti_sdo_io_Stream_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_sdo_io_Stream_Module__loggerFxn8__C, ".const:ti_sdo_io_Stream_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_sdo_io_Stream_Module__startupDoneFxn__C, ".const:ti_sdo_io_Stream_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_sdo_io_Stream_Object__count__C, ".const:ti_sdo_io_Stream_Object__count__C");
#pragma DATA_SECTION(ti_sdo_io_Stream_Object__heap__C, ".const:ti_sdo_io_Stream_Object__heap__C");
#pragma DATA_SECTION(ti_sdo_io_Stream_Object__sizeof__C, ".const:ti_sdo_io_Stream_Object__sizeof__C");
#pragma DATA_SECTION(ti_sdo_io_Stream_Object__table__C, ".const:ti_sdo_io_Stream_Object__table__C");
#pragma DATA_SECTION(ti_sdo_io_Stream_E_notFound__C, ".const:ti_sdo_io_Stream_E_notFound__C");
#pragma DATA_SECTION(ti_sdo_io_Stream_E_noPackets__C, ".const:ti_sdo_io_Stream_E_noPackets__C");
#pragma DATA_SECTION(ti_sdo_io_Stream_E_noBuffersIssued__C, ".const:ti_sdo_io_Stream_E_noBuffersIssued__C");
#pragma DATA_SECTION(ti_sdo_io_Stream_E_timeout__C, ".const:ti_sdo_io_Stream_E_timeout__C");
#pragma DATA_SECTION(ti_sdo_io_Stream_A_badMode__C, ".const:ti_sdo_io_Stream_A_badMode__C");
#pragma DATA_SECTION(ti_sdo_io_Stream_A_pendingReclaims__C, ".const:ti_sdo_io_Stream_A_pendingReclaims__C");
#pragma DATA_SECTION(ti_sdo_io_Stream_A_syncNonBlocking__C, ".const:ti_sdo_io_Stream_A_syncNonBlocking__C");
#pragma DATA_SECTION(ti_sdo_io_Stream_maxRuntimeEntries__C, ".const:ti_sdo_io_Stream_maxRuntimeEntries__C");
#pragma DATA_SECTION(ti_sdo_io_Stream_gate__C, ".const:ti_sdo_io_Stream_gate__C");
#pragma DATA_SECTION(ti_sdo_io_Stream_maxNameLen__C, ".const:ti_sdo_io_Stream_maxNameLen__C");
#pragma DATA_SECTION(ti_sdo_io_converters_DriverAdapter_Object__DESC__C, ".const:ti_sdo_io_converters_DriverAdapter_Object__DESC__C");
#pragma DATA_SECTION(ti_sdo_io_converters_DriverAdapter_Object__PARAMS__C, ".const:ti_sdo_io_converters_DriverAdapter_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sdo_io_converters_DriverAdapter_Module__diagsEnabled__C, ".const:ti_sdo_io_converters_DriverAdapter_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_sdo_io_converters_DriverAdapter_Module__diagsIncluded__C, ".const:ti_sdo_io_converters_DriverAdapter_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_sdo_io_converters_DriverAdapter_Module__diagsMask__C, ".const:ti_sdo_io_converters_DriverAdapter_Module__diagsMask__C");
#pragma DATA_SECTION(ti_sdo_io_converters_DriverAdapter_Module__gateObj__C, ".const:ti_sdo_io_converters_DriverAdapter_Module__gateObj__C");
#pragma DATA_SECTION(ti_sdo_io_converters_DriverAdapter_Module__gatePrms__C, ".const:ti_sdo_io_converters_DriverAdapter_Module__gatePrms__C");
#pragma DATA_SECTION(ti_sdo_io_converters_DriverAdapter_Module__id__C, ".const:ti_sdo_io_converters_DriverAdapter_Module__id__C");
#pragma DATA_SECTION(ti_sdo_io_converters_DriverAdapter_Module__loggerDefined__C, ".const:ti_sdo_io_converters_DriverAdapter_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_sdo_io_converters_DriverAdapter_Module__loggerObj__C, ".const:ti_sdo_io_converters_DriverAdapter_Module__loggerObj__C");
#pragma DATA_SECTION(ti_sdo_io_converters_DriverAdapter_Module__loggerFxn0__C, ".const:ti_sdo_io_converters_DriverAdapter_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_sdo_io_converters_DriverAdapter_Module__loggerFxn1__C, ".const:ti_sdo_io_converters_DriverAdapter_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_sdo_io_converters_DriverAdapter_Module__loggerFxn2__C, ".const:ti_sdo_io_converters_DriverAdapter_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_sdo_io_converters_DriverAdapter_Module__loggerFxn4__C, ".const:ti_sdo_io_converters_DriverAdapter_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_sdo_io_converters_DriverAdapter_Module__loggerFxn8__C, ".const:ti_sdo_io_converters_DriverAdapter_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_sdo_io_converters_DriverAdapter_Module__startupDoneFxn__C, ".const:ti_sdo_io_converters_DriverAdapter_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_sdo_io_converters_DriverAdapter_Object__count__C, ".const:ti_sdo_io_converters_DriverAdapter_Object__count__C");
#pragma DATA_SECTION(ti_sdo_io_converters_DriverAdapter_Object__heap__C, ".const:ti_sdo_io_converters_DriverAdapter_Object__heap__C");
#pragma DATA_SECTION(ti_sdo_io_converters_DriverAdapter_Object__sizeof__C, ".const:ti_sdo_io_converters_DriverAdapter_Object__sizeof__C");
#pragma DATA_SECTION(ti_sdo_io_converters_DriverAdapter_Object__table__C, ".const:ti_sdo_io_converters_DriverAdapter_Object__table__C");
#pragma DATA_SECTION(ti_sdo_io_converters_DriverAdapter_E_openFail__C, ".const:ti_sdo_io_converters_DriverAdapter_E_openFail__C");
#pragma DATA_SECTION(ti_sdo_io_converters_DriverAdapter_A_noReadyPacket__C, ".const:ti_sdo_io_converters_DriverAdapter_A_noReadyPacket__C");
#pragma DATA_SECTION(ti_sdo_io_drivers_Generator_Object__DESC__C, ".const:ti_sdo_io_drivers_Generator_Object__DESC__C");
#pragma DATA_SECTION(ti_sdo_io_drivers_Generator_Object__PARAMS__C, ".const:ti_sdo_io_drivers_Generator_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sdo_io_drivers_Generator_Module__diagsEnabled__C, ".const:ti_sdo_io_drivers_Generator_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_sdo_io_drivers_Generator_Module__diagsIncluded__C, ".const:ti_sdo_io_drivers_Generator_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_sdo_io_drivers_Generator_Module__diagsMask__C, ".const:ti_sdo_io_drivers_Generator_Module__diagsMask__C");
#pragma DATA_SECTION(ti_sdo_io_drivers_Generator_Module__gateObj__C, ".const:ti_sdo_io_drivers_Generator_Module__gateObj__C");
#pragma DATA_SECTION(ti_sdo_io_drivers_Generator_Module__gatePrms__C, ".const:ti_sdo_io_drivers_Generator_Module__gatePrms__C");
#pragma DATA_SECTION(ti_sdo_io_drivers_Generator_Module__id__C, ".const:ti_sdo_io_drivers_Generator_Module__id__C");
#pragma DATA_SECTION(ti_sdo_io_drivers_Generator_Module__loggerDefined__C, ".const:ti_sdo_io_drivers_Generator_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_sdo_io_drivers_Generator_Module__loggerObj__C, ".const:ti_sdo_io_drivers_Generator_Module__loggerObj__C");
#pragma DATA_SECTION(ti_sdo_io_drivers_Generator_Module__loggerFxn0__C, ".const:ti_sdo_io_drivers_Generator_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_sdo_io_drivers_Generator_Module__loggerFxn1__C, ".const:ti_sdo_io_drivers_Generator_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_sdo_io_drivers_Generator_Module__loggerFxn2__C, ".const:ti_sdo_io_drivers_Generator_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_sdo_io_drivers_Generator_Module__loggerFxn4__C, ".const:ti_sdo_io_drivers_Generator_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_sdo_io_drivers_Generator_Module__loggerFxn8__C, ".const:ti_sdo_io_drivers_Generator_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_sdo_io_drivers_Generator_Module__startupDoneFxn__C, ".const:ti_sdo_io_drivers_Generator_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_sdo_io_drivers_Generator_Object__count__C, ".const:ti_sdo_io_drivers_Generator_Object__count__C");
#pragma DATA_SECTION(ti_sdo_io_drivers_Generator_Object__heap__C, ".const:ti_sdo_io_drivers_Generator_Object__heap__C");
#pragma DATA_SECTION(ti_sdo_io_drivers_Generator_Object__sizeof__C, ".const:ti_sdo_io_drivers_Generator_Object__sizeof__C");
#pragma DATA_SECTION(ti_sdo_io_drivers_Generator_Object__table__C, ".const:ti_sdo_io_drivers_Generator_Object__table__C");
#pragma DATA_SECTION(ti_sdo_io_drivers_Generator_E_nullParams__C, ".const:ti_sdo_io_drivers_Generator_E_nullParams__C");
#pragma DATA_SECTION(ti_sdo_utils_List_Object__DESC__C, ".const:ti_sdo_utils_List_Object__DESC__C");
#pragma DATA_SECTION(ti_sdo_utils_List_Object__PARAMS__C, ".const:ti_sdo_utils_List_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sdo_utils_List_Module__diagsEnabled__C, ".const:ti_sdo_utils_List_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_sdo_utils_List_Module__diagsIncluded__C, ".const:ti_sdo_utils_List_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_sdo_utils_List_Module__diagsMask__C, ".const:ti_sdo_utils_List_Module__diagsMask__C");
#pragma DATA_SECTION(ti_sdo_utils_List_Module__gateObj__C, ".const:ti_sdo_utils_List_Module__gateObj__C");
#pragma DATA_SECTION(ti_sdo_utils_List_Module__gatePrms__C, ".const:ti_sdo_utils_List_Module__gatePrms__C");
#pragma DATA_SECTION(ti_sdo_utils_List_Module__id__C, ".const:ti_sdo_utils_List_Module__id__C");
#pragma DATA_SECTION(ti_sdo_utils_List_Module__loggerDefined__C, ".const:ti_sdo_utils_List_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_sdo_utils_List_Module__loggerObj__C, ".const:ti_sdo_utils_List_Module__loggerObj__C");
#pragma DATA_SECTION(ti_sdo_utils_List_Module__loggerFxn0__C, ".const:ti_sdo_utils_List_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_sdo_utils_List_Module__loggerFxn1__C, ".const:ti_sdo_utils_List_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_sdo_utils_List_Module__loggerFxn2__C, ".const:ti_sdo_utils_List_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_sdo_utils_List_Module__loggerFxn4__C, ".const:ti_sdo_utils_List_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_sdo_utils_List_Module__loggerFxn8__C, ".const:ti_sdo_utils_List_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_sdo_utils_List_Module__startupDoneFxn__C, ".const:ti_sdo_utils_List_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_sdo_utils_List_Object__count__C, ".const:ti_sdo_utils_List_Object__count__C");
#pragma DATA_SECTION(ti_sdo_utils_List_Object__heap__C, ".const:ti_sdo_utils_List_Object__heap__C");
#pragma DATA_SECTION(ti_sdo_utils_List_Object__sizeof__C, ".const:ti_sdo_utils_List_Object__sizeof__C");
#pragma DATA_SECTION(ti_sdo_utils_List_Object__table__C, ".const:ti_sdo_utils_List_Object__table__C");
#pragma DATA_SECTION(ti_sdo_utils_MultiProc_nameList__A, ".const:ti_sdo_utils_MultiProc_nameList__A");
#pragma DATA_SECTION(ti_sdo_utils_MultiProc_Module__diagsEnabled__C, ".const:ti_sdo_utils_MultiProc_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_sdo_utils_MultiProc_Module__diagsIncluded__C, ".const:ti_sdo_utils_MultiProc_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_sdo_utils_MultiProc_Module__diagsMask__C, ".const:ti_sdo_utils_MultiProc_Module__diagsMask__C");
#pragma DATA_SECTION(ti_sdo_utils_MultiProc_Module__gateObj__C, ".const:ti_sdo_utils_MultiProc_Module__gateObj__C");
#pragma DATA_SECTION(ti_sdo_utils_MultiProc_Module__gatePrms__C, ".const:ti_sdo_utils_MultiProc_Module__gatePrms__C");
#pragma DATA_SECTION(ti_sdo_utils_MultiProc_Module__id__C, ".const:ti_sdo_utils_MultiProc_Module__id__C");
#pragma DATA_SECTION(ti_sdo_utils_MultiProc_Module__loggerDefined__C, ".const:ti_sdo_utils_MultiProc_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_sdo_utils_MultiProc_Module__loggerObj__C, ".const:ti_sdo_utils_MultiProc_Module__loggerObj__C");
#pragma DATA_SECTION(ti_sdo_utils_MultiProc_Module__loggerFxn0__C, ".const:ti_sdo_utils_MultiProc_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_sdo_utils_MultiProc_Module__loggerFxn1__C, ".const:ti_sdo_utils_MultiProc_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_sdo_utils_MultiProc_Module__loggerFxn2__C, ".const:ti_sdo_utils_MultiProc_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_sdo_utils_MultiProc_Module__loggerFxn4__C, ".const:ti_sdo_utils_MultiProc_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_sdo_utils_MultiProc_Module__loggerFxn8__C, ".const:ti_sdo_utils_MultiProc_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_sdo_utils_MultiProc_Module__startupDoneFxn__C, ".const:ti_sdo_utils_MultiProc_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_sdo_utils_MultiProc_Object__count__C, ".const:ti_sdo_utils_MultiProc_Object__count__C");
#pragma DATA_SECTION(ti_sdo_utils_MultiProc_Object__heap__C, ".const:ti_sdo_utils_MultiProc_Object__heap__C");
#pragma DATA_SECTION(ti_sdo_utils_MultiProc_Object__sizeof__C, ".const:ti_sdo_utils_MultiProc_Object__sizeof__C");
#pragma DATA_SECTION(ti_sdo_utils_MultiProc_Object__table__C, ".const:ti_sdo_utils_MultiProc_Object__table__C");
#pragma DATA_SECTION(ti_sdo_utils_MultiProc_A_invalidMultiProcId__C, ".const:ti_sdo_utils_MultiProc_A_invalidMultiProcId__C");
#pragma DATA_SECTION(ti_sdo_utils_MultiProc_A_invalidProcName__C, ".const:ti_sdo_utils_MultiProc_A_invalidProcName__C");
#pragma DATA_SECTION(ti_sdo_utils_MultiProc_nameList__C, ".const:ti_sdo_utils_MultiProc_nameList__C");
#pragma DATA_SECTION(ti_sdo_utils_MultiProc_numProcsInCluster__C, ".const:ti_sdo_utils_MultiProc_numProcsInCluster__C");
#pragma DATA_SECTION(ti_sdo_utils_MultiProc_numProcessors__C, ".const:ti_sdo_utils_MultiProc_numProcessors__C");
#pragma DATA_SECTION(ti_sdo_utils_MultiProc_procIdList__C, ".const:ti_sdo_utils_MultiProc_procIdList__C");
#pragma DATA_SECTION(ti_sdo_utils_NameServer_Object__DESC__C, ".const:ti_sdo_utils_NameServer_Object__DESC__C");
#pragma DATA_SECTION(ti_sdo_utils_NameServer_Object__PARAMS__C, ".const:ti_sdo_utils_NameServer_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sdo_utils_NameServer_Module__diagsEnabled__C, ".const:ti_sdo_utils_NameServer_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_sdo_utils_NameServer_Module__diagsIncluded__C, ".const:ti_sdo_utils_NameServer_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_sdo_utils_NameServer_Module__diagsMask__C, ".const:ti_sdo_utils_NameServer_Module__diagsMask__C");
#pragma DATA_SECTION(ti_sdo_utils_NameServer_Module__gateObj__C, ".const:ti_sdo_utils_NameServer_Module__gateObj__C");
#pragma DATA_SECTION(ti_sdo_utils_NameServer_Module__gatePrms__C, ".const:ti_sdo_utils_NameServer_Module__gatePrms__C");
#pragma DATA_SECTION(ti_sdo_utils_NameServer_Module__id__C, ".const:ti_sdo_utils_NameServer_Module__id__C");
#pragma DATA_SECTION(ti_sdo_utils_NameServer_Module__loggerDefined__C, ".const:ti_sdo_utils_NameServer_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_sdo_utils_NameServer_Module__loggerObj__C, ".const:ti_sdo_utils_NameServer_Module__loggerObj__C");
#pragma DATA_SECTION(ti_sdo_utils_NameServer_Module__loggerFxn0__C, ".const:ti_sdo_utils_NameServer_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_sdo_utils_NameServer_Module__loggerFxn1__C, ".const:ti_sdo_utils_NameServer_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_sdo_utils_NameServer_Module__loggerFxn2__C, ".const:ti_sdo_utils_NameServer_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_sdo_utils_NameServer_Module__loggerFxn4__C, ".const:ti_sdo_utils_NameServer_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_sdo_utils_NameServer_Module__loggerFxn8__C, ".const:ti_sdo_utils_NameServer_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_sdo_utils_NameServer_Module__startupDoneFxn__C, ".const:ti_sdo_utils_NameServer_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_sdo_utils_NameServer_Object__count__C, ".const:ti_sdo_utils_NameServer_Object__count__C");
#pragma DATA_SECTION(ti_sdo_utils_NameServer_Object__heap__C, ".const:ti_sdo_utils_NameServer_Object__heap__C");
#pragma DATA_SECTION(ti_sdo_utils_NameServer_Object__sizeof__C, ".const:ti_sdo_utils_NameServer_Object__sizeof__C");
#pragma DATA_SECTION(ti_sdo_utils_NameServer_Object__table__C, ".const:ti_sdo_utils_NameServer_Object__table__C");
#pragma DATA_SECTION(ti_sdo_utils_NameServer_A_invalidLen__C, ".const:ti_sdo_utils_NameServer_A_invalidLen__C");
#pragma DATA_SECTION(ti_sdo_utils_NameServer_A_invArgument__C, ".const:ti_sdo_utils_NameServer_A_invArgument__C");
#pragma DATA_SECTION(ti_sdo_utils_NameServer_E_maxReached__C, ".const:ti_sdo_utils_NameServer_E_maxReached__C");
#pragma DATA_SECTION(ti_sdo_utils_NameServer_E_entryExists__C, ".const:ti_sdo_utils_NameServer_E_entryExists__C");
#pragma DATA_SECTION(ti_sdo_utils_NameServer_singleProcessor__C, ".const:ti_sdo_utils_NameServer_singleProcessor__C");
#pragma DATA_SECTION(ti_sdo_utils_NameServerRemoteNull_Object__DESC__C, ".const:ti_sdo_utils_NameServerRemoteNull_Object__DESC__C");
#pragma DATA_SECTION(ti_sdo_utils_NameServerRemoteNull_Object__PARAMS__C, ".const:ti_sdo_utils_NameServerRemoteNull_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sdo_utils_NameServerRemoteNull_Module__diagsEnabled__C, ".const:ti_sdo_utils_NameServerRemoteNull_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_sdo_utils_NameServerRemoteNull_Module__diagsIncluded__C, ".const:ti_sdo_utils_NameServerRemoteNull_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_sdo_utils_NameServerRemoteNull_Module__diagsMask__C, ".const:ti_sdo_utils_NameServerRemoteNull_Module__diagsMask__C");
#pragma DATA_SECTION(ti_sdo_utils_NameServerRemoteNull_Module__gateObj__C, ".const:ti_sdo_utils_NameServerRemoteNull_Module__gateObj__C");
#pragma DATA_SECTION(ti_sdo_utils_NameServerRemoteNull_Module__gatePrms__C, ".const:ti_sdo_utils_NameServerRemoteNull_Module__gatePrms__C");
#pragma DATA_SECTION(ti_sdo_utils_NameServerRemoteNull_Module__id__C, ".const:ti_sdo_utils_NameServerRemoteNull_Module__id__C");
#pragma DATA_SECTION(ti_sdo_utils_NameServerRemoteNull_Module__loggerDefined__C, ".const:ti_sdo_utils_NameServerRemoteNull_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_sdo_utils_NameServerRemoteNull_Module__loggerObj__C, ".const:ti_sdo_utils_NameServerRemoteNull_Module__loggerObj__C");
#pragma DATA_SECTION(ti_sdo_utils_NameServerRemoteNull_Module__loggerFxn0__C, ".const:ti_sdo_utils_NameServerRemoteNull_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_sdo_utils_NameServerRemoteNull_Module__loggerFxn1__C, ".const:ti_sdo_utils_NameServerRemoteNull_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_sdo_utils_NameServerRemoteNull_Module__loggerFxn2__C, ".const:ti_sdo_utils_NameServerRemoteNull_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_sdo_utils_NameServerRemoteNull_Module__loggerFxn4__C, ".const:ti_sdo_utils_NameServerRemoteNull_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_sdo_utils_NameServerRemoteNull_Module__loggerFxn8__C, ".const:ti_sdo_utils_NameServerRemoteNull_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_sdo_utils_NameServerRemoteNull_Module__startupDoneFxn__C, ".const:ti_sdo_utils_NameServerRemoteNull_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_sdo_utils_NameServerRemoteNull_Object__count__C, ".const:ti_sdo_utils_NameServerRemoteNull_Object__count__C");
#pragma DATA_SECTION(ti_sdo_utils_NameServerRemoteNull_Object__heap__C, ".const:ti_sdo_utils_NameServerRemoteNull_Object__heap__C");
#pragma DATA_SECTION(ti_sdo_utils_NameServerRemoteNull_Object__sizeof__C, ".const:ti_sdo_utils_NameServerRemoteNull_Object__sizeof__C");
#pragma DATA_SECTION(ti_sdo_utils_NameServerRemoteNull_Object__table__C, ".const:ti_sdo_utils_NameServerRemoteNull_Object__table__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__diagsEnabled__C, ".const:ti_sysbios_BIOS_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__diagsIncluded__C, ".const:ti_sysbios_BIOS_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__diagsMask__C, ".const:ti_sysbios_BIOS_Module__diagsMask__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__gateObj__C, ".const:ti_sysbios_BIOS_Module__gateObj__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__gatePrms__C, ".const:ti_sysbios_BIOS_Module__gatePrms__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__id__C, ".const:ti_sysbios_BIOS_Module__id__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerDefined__C, ".const:ti_sysbios_BIOS_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerObj__C, ".const:ti_sysbios_BIOS_Module__loggerObj__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerFxn0__C, ".const:ti_sysbios_BIOS_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerFxn1__C, ".const:ti_sysbios_BIOS_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerFxn2__C, ".const:ti_sysbios_BIOS_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerFxn4__C, ".const:ti_sysbios_BIOS_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerFxn8__C, ".const:ti_sysbios_BIOS_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__startupDoneFxn__C, ".const:ti_sysbios_BIOS_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_Object__count__C, ".const:ti_sysbios_BIOS_Object__count__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_Object__heap__C, ".const:ti_sysbios_BIOS_Object__heap__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_Object__sizeof__C, ".const:ti_sysbios_BIOS_Object__sizeof__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_Object__table__C, ".const:ti_sysbios_BIOS_Object__table__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_smpEnabled__C, ".const:ti_sysbios_BIOS_smpEnabled__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_cpuFreq__C, ".const:ti_sysbios_BIOS_cpuFreq__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_taskEnabled__C, ".const:ti_sysbios_BIOS_taskEnabled__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_swiEnabled__C, ".const:ti_sysbios_BIOS_swiEnabled__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_clockEnabled__C, ".const:ti_sysbios_BIOS_clockEnabled__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_heapSize__C, ".const:ti_sysbios_BIOS_heapSize__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_heapSection__C, ".const:ti_sysbios_BIOS_heapSection__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_installedErrorHook__C, ".const:ti_sysbios_BIOS_installedErrorHook__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_HwiCommon_Module__diagsEnabled__C, ".const:ti_sysbios_family_arm_HwiCommon_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_HwiCommon_Module__diagsIncluded__C, ".const:ti_sysbios_family_arm_HwiCommon_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_HwiCommon_Module__diagsMask__C, ".const:ti_sysbios_family_arm_HwiCommon_Module__diagsMask__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_HwiCommon_Module__gateObj__C, ".const:ti_sysbios_family_arm_HwiCommon_Module__gateObj__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_HwiCommon_Module__gatePrms__C, ".const:ti_sysbios_family_arm_HwiCommon_Module__gatePrms__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_HwiCommon_Module__id__C, ".const:ti_sysbios_family_arm_HwiCommon_Module__id__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_HwiCommon_Module__loggerDefined__C, ".const:ti_sysbios_family_arm_HwiCommon_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_HwiCommon_Module__loggerObj__C, ".const:ti_sysbios_family_arm_HwiCommon_Module__loggerObj__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_HwiCommon_Module__loggerFxn0__C, ".const:ti_sysbios_family_arm_HwiCommon_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_HwiCommon_Module__loggerFxn1__C, ".const:ti_sysbios_family_arm_HwiCommon_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_HwiCommon_Module__loggerFxn2__C, ".const:ti_sysbios_family_arm_HwiCommon_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_HwiCommon_Module__loggerFxn4__C, ".const:ti_sysbios_family_arm_HwiCommon_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_HwiCommon_Module__loggerFxn8__C, ".const:ti_sysbios_family_arm_HwiCommon_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_HwiCommon_Module__startupDoneFxn__C, ".const:ti_sysbios_family_arm_HwiCommon_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_HwiCommon_Object__count__C, ".const:ti_sysbios_family_arm_HwiCommon_Object__count__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_HwiCommon_Object__heap__C, ".const:ti_sysbios_family_arm_HwiCommon_Object__heap__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_HwiCommon_Object__sizeof__C, ".const:ti_sysbios_family_arm_HwiCommon_Object__sizeof__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_HwiCommon_Object__table__C, ".const:ti_sysbios_family_arm_HwiCommon_Object__table__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_IntrinsicsSupport_Module__diagsEnabled__C, ".const:ti_sysbios_family_arm_IntrinsicsSupport_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_IntrinsicsSupport_Module__diagsIncluded__C, ".const:ti_sysbios_family_arm_IntrinsicsSupport_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_IntrinsicsSupport_Module__diagsMask__C, ".const:ti_sysbios_family_arm_IntrinsicsSupport_Module__diagsMask__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_IntrinsicsSupport_Module__gateObj__C, ".const:ti_sysbios_family_arm_IntrinsicsSupport_Module__gateObj__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_IntrinsicsSupport_Module__gatePrms__C, ".const:ti_sysbios_family_arm_IntrinsicsSupport_Module__gatePrms__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_IntrinsicsSupport_Module__id__C, ".const:ti_sysbios_family_arm_IntrinsicsSupport_Module__id__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_IntrinsicsSupport_Module__loggerDefined__C, ".const:ti_sysbios_family_arm_IntrinsicsSupport_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_IntrinsicsSupport_Module__loggerObj__C, ".const:ti_sysbios_family_arm_IntrinsicsSupport_Module__loggerObj__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_IntrinsicsSupport_Module__loggerFxn0__C, ".const:ti_sysbios_family_arm_IntrinsicsSupport_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_IntrinsicsSupport_Module__loggerFxn1__C, ".const:ti_sysbios_family_arm_IntrinsicsSupport_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_IntrinsicsSupport_Module__loggerFxn2__C, ".const:ti_sysbios_family_arm_IntrinsicsSupport_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_IntrinsicsSupport_Module__loggerFxn4__C, ".const:ti_sysbios_family_arm_IntrinsicsSupport_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_IntrinsicsSupport_Module__loggerFxn8__C, ".const:ti_sysbios_family_arm_IntrinsicsSupport_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_IntrinsicsSupport_Module__startupDoneFxn__C, ".const:ti_sysbios_family_arm_IntrinsicsSupport_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_IntrinsicsSupport_Object__count__C, ".const:ti_sysbios_family_arm_IntrinsicsSupport_Object__count__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_IntrinsicsSupport_Object__heap__C, ".const:ti_sysbios_family_arm_IntrinsicsSupport_Object__heap__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_IntrinsicsSupport_Object__sizeof__C, ".const:ti_sysbios_family_arm_IntrinsicsSupport_Object__sizeof__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_IntrinsicsSupport_Object__table__C, ".const:ti_sysbios_family_arm_IntrinsicsSupport_Object__table__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_TaskSupport_Module__diagsEnabled__C, ".const:ti_sysbios_family_arm_TaskSupport_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_TaskSupport_Module__diagsIncluded__C, ".const:ti_sysbios_family_arm_TaskSupport_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_TaskSupport_Module__diagsMask__C, ".const:ti_sysbios_family_arm_TaskSupport_Module__diagsMask__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_TaskSupport_Module__gateObj__C, ".const:ti_sysbios_family_arm_TaskSupport_Module__gateObj__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_TaskSupport_Module__gatePrms__C, ".const:ti_sysbios_family_arm_TaskSupport_Module__gatePrms__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_TaskSupport_Module__id__C, ".const:ti_sysbios_family_arm_TaskSupport_Module__id__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_TaskSupport_Module__loggerDefined__C, ".const:ti_sysbios_family_arm_TaskSupport_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_TaskSupport_Module__loggerObj__C, ".const:ti_sysbios_family_arm_TaskSupport_Module__loggerObj__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_TaskSupport_Module__loggerFxn0__C, ".const:ti_sysbios_family_arm_TaskSupport_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_TaskSupport_Module__loggerFxn1__C, ".const:ti_sysbios_family_arm_TaskSupport_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_TaskSupport_Module__loggerFxn2__C, ".const:ti_sysbios_family_arm_TaskSupport_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_TaskSupport_Module__loggerFxn4__C, ".const:ti_sysbios_family_arm_TaskSupport_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_TaskSupport_Module__loggerFxn8__C, ".const:ti_sysbios_family_arm_TaskSupport_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_TaskSupport_Module__startupDoneFxn__C, ".const:ti_sysbios_family_arm_TaskSupport_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_TaskSupport_Object__count__C, ".const:ti_sysbios_family_arm_TaskSupport_Object__count__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_TaskSupport_Object__heap__C, ".const:ti_sysbios_family_arm_TaskSupport_Object__heap__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_TaskSupport_Object__sizeof__C, ".const:ti_sysbios_family_arm_TaskSupport_Object__sizeof__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_TaskSupport_Object__table__C, ".const:ti_sysbios_family_arm_TaskSupport_Object__table__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_TaskSupport_defaultStackSize__C, ".const:ti_sysbios_family_arm_TaskSupport_defaultStackSize__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_TaskSupport_stackAlignment__C, ".const:ti_sysbios_family_arm_TaskSupport_stackAlignment__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_arm9_Cache_Module__diagsEnabled__C, ".const:ti_sysbios_family_arm_arm9_Cache_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_arm9_Cache_Module__diagsIncluded__C, ".const:ti_sysbios_family_arm_arm9_Cache_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_arm9_Cache_Module__diagsMask__C, ".const:ti_sysbios_family_arm_arm9_Cache_Module__diagsMask__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_arm9_Cache_Module__gateObj__C, ".const:ti_sysbios_family_arm_arm9_Cache_Module__gateObj__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_arm9_Cache_Module__gatePrms__C, ".const:ti_sysbios_family_arm_arm9_Cache_Module__gatePrms__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_arm9_Cache_Module__id__C, ".const:ti_sysbios_family_arm_arm9_Cache_Module__id__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_arm9_Cache_Module__loggerDefined__C, ".const:ti_sysbios_family_arm_arm9_Cache_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_arm9_Cache_Module__loggerObj__C, ".const:ti_sysbios_family_arm_arm9_Cache_Module__loggerObj__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_arm9_Cache_Module__loggerFxn0__C, ".const:ti_sysbios_family_arm_arm9_Cache_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_arm9_Cache_Module__loggerFxn1__C, ".const:ti_sysbios_family_arm_arm9_Cache_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_arm9_Cache_Module__loggerFxn2__C, ".const:ti_sysbios_family_arm_arm9_Cache_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_arm9_Cache_Module__loggerFxn4__C, ".const:ti_sysbios_family_arm_arm9_Cache_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_arm9_Cache_Module__loggerFxn8__C, ".const:ti_sysbios_family_arm_arm9_Cache_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_arm9_Cache_Module__startupDoneFxn__C, ".const:ti_sysbios_family_arm_arm9_Cache_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_arm9_Cache_Object__count__C, ".const:ti_sysbios_family_arm_arm9_Cache_Object__count__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_arm9_Cache_Object__heap__C, ".const:ti_sysbios_family_arm_arm9_Cache_Object__heap__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_arm9_Cache_Object__sizeof__C, ".const:ti_sysbios_family_arm_arm9_Cache_Object__sizeof__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_arm9_Cache_Object__table__C, ".const:ti_sysbios_family_arm_arm9_Cache_Object__table__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_arm9_Cache_enableCache__C, ".const:ti_sysbios_family_arm_arm9_Cache_enableCache__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_arm9_Mmu_Module__diagsEnabled__C, ".const:ti_sysbios_family_arm_arm9_Mmu_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_arm9_Mmu_Module__diagsIncluded__C, ".const:ti_sysbios_family_arm_arm9_Mmu_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_arm9_Mmu_Module__diagsMask__C, ".const:ti_sysbios_family_arm_arm9_Mmu_Module__diagsMask__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_arm9_Mmu_Module__gateObj__C, ".const:ti_sysbios_family_arm_arm9_Mmu_Module__gateObj__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_arm9_Mmu_Module__gatePrms__C, ".const:ti_sysbios_family_arm_arm9_Mmu_Module__gatePrms__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_arm9_Mmu_Module__id__C, ".const:ti_sysbios_family_arm_arm9_Mmu_Module__id__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_arm9_Mmu_Module__loggerDefined__C, ".const:ti_sysbios_family_arm_arm9_Mmu_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_arm9_Mmu_Module__loggerObj__C, ".const:ti_sysbios_family_arm_arm9_Mmu_Module__loggerObj__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_arm9_Mmu_Module__loggerFxn0__C, ".const:ti_sysbios_family_arm_arm9_Mmu_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_arm9_Mmu_Module__loggerFxn1__C, ".const:ti_sysbios_family_arm_arm9_Mmu_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_arm9_Mmu_Module__loggerFxn2__C, ".const:ti_sysbios_family_arm_arm9_Mmu_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_arm9_Mmu_Module__loggerFxn4__C, ".const:ti_sysbios_family_arm_arm9_Mmu_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_arm9_Mmu_Module__loggerFxn8__C, ".const:ti_sysbios_family_arm_arm9_Mmu_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_arm9_Mmu_Module__startupDoneFxn__C, ".const:ti_sysbios_family_arm_arm9_Mmu_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_arm9_Mmu_Object__count__C, ".const:ti_sysbios_family_arm_arm9_Mmu_Object__count__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_arm9_Mmu_Object__heap__C, ".const:ti_sysbios_family_arm_arm9_Mmu_Object__heap__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_arm9_Mmu_Object__sizeof__C, ".const:ti_sysbios_family_arm_arm9_Mmu_Object__sizeof__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_arm9_Mmu_Object__table__C, ".const:ti_sysbios_family_arm_arm9_Mmu_Object__table__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_arm9_Mmu_A_nullPointer__C, ".const:ti_sysbios_family_arm_arm9_Mmu_A_nullPointer__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_arm9_Mmu_A_unknownDescType__C, ".const:ti_sysbios_family_arm_arm9_Mmu_A_unknownDescType__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_arm9_Mmu_defaultAttrs__C, ".const:ti_sysbios_family_arm_arm9_Mmu_defaultAttrs__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_arm9_Mmu_enableMMU__C, ".const:ti_sysbios_family_arm_arm9_Mmu_enableMMU__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_dm6446_Hwi_Object__DESC__C, ".const:ti_sysbios_family_arm_dm6446_Hwi_Object__DESC__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_dm6446_Hwi_Object__PARAMS__C, ".const:ti_sysbios_family_arm_dm6446_Hwi_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_dm6446_Hwi_Module__diagsEnabled__C, ".const:ti_sysbios_family_arm_dm6446_Hwi_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_dm6446_Hwi_Module__diagsIncluded__C, ".const:ti_sysbios_family_arm_dm6446_Hwi_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_dm6446_Hwi_Module__diagsMask__C, ".const:ti_sysbios_family_arm_dm6446_Hwi_Module__diagsMask__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_dm6446_Hwi_Module__gateObj__C, ".const:ti_sysbios_family_arm_dm6446_Hwi_Module__gateObj__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_dm6446_Hwi_Module__gatePrms__C, ".const:ti_sysbios_family_arm_dm6446_Hwi_Module__gatePrms__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_dm6446_Hwi_Module__id__C, ".const:ti_sysbios_family_arm_dm6446_Hwi_Module__id__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_dm6446_Hwi_Module__loggerDefined__C, ".const:ti_sysbios_family_arm_dm6446_Hwi_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_dm6446_Hwi_Module__loggerObj__C, ".const:ti_sysbios_family_arm_dm6446_Hwi_Module__loggerObj__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_dm6446_Hwi_Module__loggerFxn0__C, ".const:ti_sysbios_family_arm_dm6446_Hwi_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_dm6446_Hwi_Module__loggerFxn1__C, ".const:ti_sysbios_family_arm_dm6446_Hwi_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_dm6446_Hwi_Module__loggerFxn2__C, ".const:ti_sysbios_family_arm_dm6446_Hwi_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_dm6446_Hwi_Module__loggerFxn4__C, ".const:ti_sysbios_family_arm_dm6446_Hwi_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_dm6446_Hwi_Module__loggerFxn8__C, ".const:ti_sysbios_family_arm_dm6446_Hwi_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_dm6446_Hwi_Module__startupDoneFxn__C, ".const:ti_sysbios_family_arm_dm6446_Hwi_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_dm6446_Hwi_Object__count__C, ".const:ti_sysbios_family_arm_dm6446_Hwi_Object__count__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_dm6446_Hwi_Object__heap__C, ".const:ti_sysbios_family_arm_dm6446_Hwi_Object__heap__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_dm6446_Hwi_Object__sizeof__C, ".const:ti_sysbios_family_arm_dm6446_Hwi_Object__sizeof__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_dm6446_Hwi_Object__table__C, ".const:ti_sysbios_family_arm_dm6446_Hwi_Object__table__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_dm6446_Hwi_dispatcherAutoNestingSupport__C, ".const:ti_sysbios_family_arm_dm6446_Hwi_dispatcherAutoNestingSupport__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_dm6446_Hwi_dispatcherSwiSupport__C, ".const:ti_sysbios_family_arm_dm6446_Hwi_dispatcherSwiSupport__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_dm6446_Hwi_dispatcherTaskSupport__C, ".const:ti_sysbios_family_arm_dm6446_Hwi_dispatcherTaskSupport__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_dm6446_Hwi_dispatcherIrpTrackingSupport__C, ".const:ti_sysbios_family_arm_dm6446_Hwi_dispatcherIrpTrackingSupport__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_dm6446_Hwi_fiqStack__C, ".const:ti_sysbios_family_arm_dm6446_Hwi_fiqStack__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_dm6446_Hwi_eabaseSize__C, ".const:ti_sysbios_family_arm_dm6446_Hwi_eabaseSize__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_dm6446_Hwi_E_alreadyDefined__C, ".const:ti_sysbios_family_arm_dm6446_Hwi_E_alreadyDefined__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_dm6446_Hwi_LM_begin__C, ".const:ti_sysbios_family_arm_dm6446_Hwi_LM_begin__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_dm6446_Hwi_LD_end__C, ".const:ti_sysbios_family_arm_dm6446_Hwi_LD_end__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_dm6446_Hwi_swiDisable__C, ".const:ti_sysbios_family_arm_dm6446_Hwi_swiDisable__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_dm6446_Hwi_swiRestoreHwi__C, ".const:ti_sysbios_family_arm_dm6446_Hwi_swiRestoreHwi__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_dm6446_Hwi_taskDisable__C, ".const:ti_sysbios_family_arm_dm6446_Hwi_taskDisable__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_dm6446_Hwi_taskRestoreHwi__C, ".const:ti_sysbios_family_arm_dm6446_Hwi_taskRestoreHwi__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_dm6446_Hwi_hooks__C, ".const:ti_sysbios_family_arm_dm6446_Hwi_hooks__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_dm6446_TimerSupport_timer__A, ".const:ti_sysbios_family_arm_dm6446_TimerSupport_timer__A");
#pragma DATA_SECTION(ti_sysbios_family_arm_dm6446_TimerSupport_Module__diagsEnabled__C, ".const:ti_sysbios_family_arm_dm6446_TimerSupport_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_dm6446_TimerSupport_Module__diagsIncluded__C, ".const:ti_sysbios_family_arm_dm6446_TimerSupport_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_dm6446_TimerSupport_Module__diagsMask__C, ".const:ti_sysbios_family_arm_dm6446_TimerSupport_Module__diagsMask__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_dm6446_TimerSupport_Module__gateObj__C, ".const:ti_sysbios_family_arm_dm6446_TimerSupport_Module__gateObj__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_dm6446_TimerSupport_Module__gatePrms__C, ".const:ti_sysbios_family_arm_dm6446_TimerSupport_Module__gatePrms__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_dm6446_TimerSupport_Module__id__C, ".const:ti_sysbios_family_arm_dm6446_TimerSupport_Module__id__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_dm6446_TimerSupport_Module__loggerDefined__C, ".const:ti_sysbios_family_arm_dm6446_TimerSupport_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_dm6446_TimerSupport_Module__loggerObj__C, ".const:ti_sysbios_family_arm_dm6446_TimerSupport_Module__loggerObj__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_dm6446_TimerSupport_Module__loggerFxn0__C, ".const:ti_sysbios_family_arm_dm6446_TimerSupport_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_dm6446_TimerSupport_Module__loggerFxn1__C, ".const:ti_sysbios_family_arm_dm6446_TimerSupport_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_dm6446_TimerSupport_Module__loggerFxn2__C, ".const:ti_sysbios_family_arm_dm6446_TimerSupport_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_dm6446_TimerSupport_Module__loggerFxn4__C, ".const:ti_sysbios_family_arm_dm6446_TimerSupport_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_dm6446_TimerSupport_Module__loggerFxn8__C, ".const:ti_sysbios_family_arm_dm6446_TimerSupport_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_dm6446_TimerSupport_Module__startupDoneFxn__C, ".const:ti_sysbios_family_arm_dm6446_TimerSupport_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_dm6446_TimerSupport_Object__count__C, ".const:ti_sysbios_family_arm_dm6446_TimerSupport_Object__count__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_dm6446_TimerSupport_Object__heap__C, ".const:ti_sysbios_family_arm_dm6446_TimerSupport_Object__heap__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_dm6446_TimerSupport_Object__sizeof__C, ".const:ti_sysbios_family_arm_dm6446_TimerSupport_Object__sizeof__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_dm6446_TimerSupport_Object__table__C, ".const:ti_sysbios_family_arm_dm6446_TimerSupport_Object__table__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_dm6446_TimerSupport_timer__C, ".const:ti_sysbios_family_arm_dm6446_TimerSupport_timer__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_exc_Exception_Module__diagsEnabled__C, ".const:ti_sysbios_family_arm_exc_Exception_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_exc_Exception_Module__diagsIncluded__C, ".const:ti_sysbios_family_arm_exc_Exception_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_exc_Exception_Module__diagsMask__C, ".const:ti_sysbios_family_arm_exc_Exception_Module__diagsMask__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_exc_Exception_Module__gateObj__C, ".const:ti_sysbios_family_arm_exc_Exception_Module__gateObj__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_exc_Exception_Module__gatePrms__C, ".const:ti_sysbios_family_arm_exc_Exception_Module__gatePrms__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_exc_Exception_Module__id__C, ".const:ti_sysbios_family_arm_exc_Exception_Module__id__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_exc_Exception_Module__loggerDefined__C, ".const:ti_sysbios_family_arm_exc_Exception_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_exc_Exception_Module__loggerObj__C, ".const:ti_sysbios_family_arm_exc_Exception_Module__loggerObj__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_exc_Exception_Module__loggerFxn0__C, ".const:ti_sysbios_family_arm_exc_Exception_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_exc_Exception_Module__loggerFxn1__C, ".const:ti_sysbios_family_arm_exc_Exception_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_exc_Exception_Module__loggerFxn2__C, ".const:ti_sysbios_family_arm_exc_Exception_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_exc_Exception_Module__loggerFxn4__C, ".const:ti_sysbios_family_arm_exc_Exception_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_exc_Exception_Module__loggerFxn8__C, ".const:ti_sysbios_family_arm_exc_Exception_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_exc_Exception_Module__startupDoneFxn__C, ".const:ti_sysbios_family_arm_exc_Exception_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_exc_Exception_Object__count__C, ".const:ti_sysbios_family_arm_exc_Exception_Object__count__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_exc_Exception_Object__heap__C, ".const:ti_sysbios_family_arm_exc_Exception_Object__heap__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_exc_Exception_Object__sizeof__C, ".const:ti_sysbios_family_arm_exc_Exception_Object__sizeof__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_exc_Exception_Object__table__C, ".const:ti_sysbios_family_arm_exc_Exception_Object__table__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_exc_Exception_E_swi__C, ".const:ti_sysbios_family_arm_exc_Exception_E_swi__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_exc_Exception_E_prefetchAbort__C, ".const:ti_sysbios_family_arm_exc_Exception_E_prefetchAbort__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_exc_Exception_E_dataAbort__C, ".const:ti_sysbios_family_arm_exc_Exception_E_dataAbort__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_exc_Exception_E_undefinedInstruction__C, ".const:ti_sysbios_family_arm_exc_Exception_E_undefinedInstruction__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_exc_Exception_enableDecode__C, ".const:ti_sysbios_family_arm_exc_Exception_enableDecode__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_exc_Exception_excStack__C, ".const:ti_sysbios_family_arm_exc_Exception_excStack__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_exc_Exception_excHookFunc__C, ".const:ti_sysbios_family_arm_exc_Exception_excHookFunc__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Object__DESC__C, ".const:ti_sysbios_gates_GateHwi_Object__DESC__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Object__PARAMS__C, ".const:ti_sysbios_gates_GateHwi_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__diagsEnabled__C, ".const:ti_sysbios_gates_GateHwi_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__diagsIncluded__C, ".const:ti_sysbios_gates_GateHwi_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__diagsMask__C, ".const:ti_sysbios_gates_GateHwi_Module__diagsMask__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__gateObj__C, ".const:ti_sysbios_gates_GateHwi_Module__gateObj__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__gatePrms__C, ".const:ti_sysbios_gates_GateHwi_Module__gatePrms__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__id__C, ".const:ti_sysbios_gates_GateHwi_Module__id__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerDefined__C, ".const:ti_sysbios_gates_GateHwi_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerObj__C, ".const:ti_sysbios_gates_GateHwi_Module__loggerObj__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerFxn0__C, ".const:ti_sysbios_gates_GateHwi_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerFxn1__C, ".const:ti_sysbios_gates_GateHwi_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerFxn2__C, ".const:ti_sysbios_gates_GateHwi_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerFxn4__C, ".const:ti_sysbios_gates_GateHwi_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerFxn8__C, ".const:ti_sysbios_gates_GateHwi_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__startupDoneFxn__C, ".const:ti_sysbios_gates_GateHwi_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Object__count__C, ".const:ti_sysbios_gates_GateHwi_Object__count__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Object__heap__C, ".const:ti_sysbios_gates_GateHwi_Object__heap__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Object__sizeof__C, ".const:ti_sysbios_gates_GateHwi_Object__sizeof__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Object__table__C, ".const:ti_sysbios_gates_GateHwi_Object__table__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Object__DESC__C, ".const:ti_sysbios_gates_GateMutex_Object__DESC__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Object__PARAMS__C, ".const:ti_sysbios_gates_GateMutex_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__diagsEnabled__C, ".const:ti_sysbios_gates_GateMutex_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__diagsIncluded__C, ".const:ti_sysbios_gates_GateMutex_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__diagsMask__C, ".const:ti_sysbios_gates_GateMutex_Module__diagsMask__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__gateObj__C, ".const:ti_sysbios_gates_GateMutex_Module__gateObj__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__gatePrms__C, ".const:ti_sysbios_gates_GateMutex_Module__gatePrms__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__id__C, ".const:ti_sysbios_gates_GateMutex_Module__id__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerDefined__C, ".const:ti_sysbios_gates_GateMutex_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerObj__C, ".const:ti_sysbios_gates_GateMutex_Module__loggerObj__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerFxn0__C, ".const:ti_sysbios_gates_GateMutex_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerFxn1__C, ".const:ti_sysbios_gates_GateMutex_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerFxn2__C, ".const:ti_sysbios_gates_GateMutex_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerFxn4__C, ".const:ti_sysbios_gates_GateMutex_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerFxn8__C, ".const:ti_sysbios_gates_GateMutex_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__startupDoneFxn__C, ".const:ti_sysbios_gates_GateMutex_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Object__count__C, ".const:ti_sysbios_gates_GateMutex_Object__count__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Object__heap__C, ".const:ti_sysbios_gates_GateMutex_Object__heap__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Object__sizeof__C, ".const:ti_sysbios_gates_GateMutex_Object__sizeof__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Object__table__C, ".const:ti_sysbios_gates_GateMutex_Object__table__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_A_badContext__C, ".const:ti_sysbios_gates_GateMutex_A_badContext__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateSwi_Object__DESC__C, ".const:ti_sysbios_gates_GateSwi_Object__DESC__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateSwi_Object__PARAMS__C, ".const:ti_sysbios_gates_GateSwi_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateSwi_Module__diagsEnabled__C, ".const:ti_sysbios_gates_GateSwi_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateSwi_Module__diagsIncluded__C, ".const:ti_sysbios_gates_GateSwi_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateSwi_Module__diagsMask__C, ".const:ti_sysbios_gates_GateSwi_Module__diagsMask__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateSwi_Module__gateObj__C, ".const:ti_sysbios_gates_GateSwi_Module__gateObj__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateSwi_Module__gatePrms__C, ".const:ti_sysbios_gates_GateSwi_Module__gatePrms__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateSwi_Module__id__C, ".const:ti_sysbios_gates_GateSwi_Module__id__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateSwi_Module__loggerDefined__C, ".const:ti_sysbios_gates_GateSwi_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateSwi_Module__loggerObj__C, ".const:ti_sysbios_gates_GateSwi_Module__loggerObj__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateSwi_Module__loggerFxn0__C, ".const:ti_sysbios_gates_GateSwi_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateSwi_Module__loggerFxn1__C, ".const:ti_sysbios_gates_GateSwi_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateSwi_Module__loggerFxn2__C, ".const:ti_sysbios_gates_GateSwi_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateSwi_Module__loggerFxn4__C, ".const:ti_sysbios_gates_GateSwi_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateSwi_Module__loggerFxn8__C, ".const:ti_sysbios_gates_GateSwi_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateSwi_Module__startupDoneFxn__C, ".const:ti_sysbios_gates_GateSwi_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateSwi_Object__count__C, ".const:ti_sysbios_gates_GateSwi_Object__count__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateSwi_Object__heap__C, ".const:ti_sysbios_gates_GateSwi_Object__heap__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateSwi_Object__sizeof__C, ".const:ti_sysbios_gates_GateSwi_Object__sizeof__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateSwi_Object__table__C, ".const:ti_sysbios_gates_GateSwi_Object__table__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateSwi_A_badContext__C, ".const:ti_sysbios_gates_GateSwi_A_badContext__C");
#pragma DATA_SECTION(ti_sysbios_hal_Cache_Module__diagsEnabled__C, ".const:ti_sysbios_hal_Cache_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_sysbios_hal_Cache_Module__diagsIncluded__C, ".const:ti_sysbios_hal_Cache_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_sysbios_hal_Cache_Module__diagsMask__C, ".const:ti_sysbios_hal_Cache_Module__diagsMask__C");
#pragma DATA_SECTION(ti_sysbios_hal_Cache_Module__gateObj__C, ".const:ti_sysbios_hal_Cache_Module__gateObj__C");
#pragma DATA_SECTION(ti_sysbios_hal_Cache_Module__gatePrms__C, ".const:ti_sysbios_hal_Cache_Module__gatePrms__C");
#pragma DATA_SECTION(ti_sysbios_hal_Cache_Module__id__C, ".const:ti_sysbios_hal_Cache_Module__id__C");
#pragma DATA_SECTION(ti_sysbios_hal_Cache_Module__loggerDefined__C, ".const:ti_sysbios_hal_Cache_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_sysbios_hal_Cache_Module__loggerObj__C, ".const:ti_sysbios_hal_Cache_Module__loggerObj__C");
#pragma DATA_SECTION(ti_sysbios_hal_Cache_Module__loggerFxn0__C, ".const:ti_sysbios_hal_Cache_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_sysbios_hal_Cache_Module__loggerFxn1__C, ".const:ti_sysbios_hal_Cache_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_sysbios_hal_Cache_Module__loggerFxn2__C, ".const:ti_sysbios_hal_Cache_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_sysbios_hal_Cache_Module__loggerFxn4__C, ".const:ti_sysbios_hal_Cache_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_sysbios_hal_Cache_Module__loggerFxn8__C, ".const:ti_sysbios_hal_Cache_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_sysbios_hal_Cache_Module__startupDoneFxn__C, ".const:ti_sysbios_hal_Cache_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_sysbios_hal_Cache_Object__count__C, ".const:ti_sysbios_hal_Cache_Object__count__C");
#pragma DATA_SECTION(ti_sysbios_hal_Cache_Object__heap__C, ".const:ti_sysbios_hal_Cache_Object__heap__C");
#pragma DATA_SECTION(ti_sysbios_hal_Cache_Object__sizeof__C, ".const:ti_sysbios_hal_Cache_Object__sizeof__C");
#pragma DATA_SECTION(ti_sysbios_hal_Cache_Object__table__C, ".const:ti_sysbios_hal_Cache_Object__table__C");
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Object__DESC__C, ".const:ti_sysbios_hal_Hwi_Object__DESC__C");
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Object__PARAMS__C, ".const:ti_sysbios_hal_Hwi_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__diagsEnabled__C, ".const:ti_sysbios_hal_Hwi_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__diagsIncluded__C, ".const:ti_sysbios_hal_Hwi_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__diagsMask__C, ".const:ti_sysbios_hal_Hwi_Module__diagsMask__C");
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__gateObj__C, ".const:ti_sysbios_hal_Hwi_Module__gateObj__C");
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__gatePrms__C, ".const:ti_sysbios_hal_Hwi_Module__gatePrms__C");
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__id__C, ".const:ti_sysbios_hal_Hwi_Module__id__C");
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerDefined__C, ".const:ti_sysbios_hal_Hwi_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerObj__C, ".const:ti_sysbios_hal_Hwi_Module__loggerObj__C");
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerFxn0__C, ".const:ti_sysbios_hal_Hwi_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerFxn1__C, ".const:ti_sysbios_hal_Hwi_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerFxn2__C, ".const:ti_sysbios_hal_Hwi_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerFxn4__C, ".const:ti_sysbios_hal_Hwi_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerFxn8__C, ".const:ti_sysbios_hal_Hwi_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__startupDoneFxn__C, ".const:ti_sysbios_hal_Hwi_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Object__count__C, ".const:ti_sysbios_hal_Hwi_Object__count__C");
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Object__heap__C, ".const:ti_sysbios_hal_Hwi_Object__heap__C");
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Object__sizeof__C, ".const:ti_sysbios_hal_Hwi_Object__sizeof__C");
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Object__table__C, ".const:ti_sysbios_hal_Hwi_Object__table__C");
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_dispatcherAutoNestingSupport__C, ".const:ti_sysbios_hal_Hwi_dispatcherAutoNestingSupport__C");
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_dispatcherSwiSupport__C, ".const:ti_sysbios_hal_Hwi_dispatcherSwiSupport__C");
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_dispatcherTaskSupport__C, ".const:ti_sysbios_hal_Hwi_dispatcherTaskSupport__C");
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_dispatcherIrpTrackingSupport__C, ".const:ti_sysbios_hal_Hwi_dispatcherIrpTrackingSupport__C");
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_E_stackOverflow__C, ".const:ti_sysbios_hal_Hwi_E_stackOverflow__C");
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Object__DESC__C, ".const:ti_sysbios_hal_Timer_Object__DESC__C");
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Object__PARAMS__C, ".const:ti_sysbios_hal_Timer_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__diagsEnabled__C, ".const:ti_sysbios_hal_Timer_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__diagsIncluded__C, ".const:ti_sysbios_hal_Timer_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__diagsMask__C, ".const:ti_sysbios_hal_Timer_Module__diagsMask__C");
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__gateObj__C, ".const:ti_sysbios_hal_Timer_Module__gateObj__C");
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__gatePrms__C, ".const:ti_sysbios_hal_Timer_Module__gatePrms__C");
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__id__C, ".const:ti_sysbios_hal_Timer_Module__id__C");
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__loggerDefined__C, ".const:ti_sysbios_hal_Timer_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__loggerObj__C, ".const:ti_sysbios_hal_Timer_Module__loggerObj__C");
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__loggerFxn0__C, ".const:ti_sysbios_hal_Timer_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__loggerFxn1__C, ".const:ti_sysbios_hal_Timer_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__loggerFxn2__C, ".const:ti_sysbios_hal_Timer_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__loggerFxn4__C, ".const:ti_sysbios_hal_Timer_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__loggerFxn8__C, ".const:ti_sysbios_hal_Timer_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__startupDoneFxn__C, ".const:ti_sysbios_hal_Timer_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Object__count__C, ".const:ti_sysbios_hal_Timer_Object__count__C");
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Object__heap__C, ".const:ti_sysbios_hal_Timer_Object__heap__C");
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Object__sizeof__C, ".const:ti_sysbios_hal_Timer_Object__sizeof__C");
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Object__table__C, ".const:ti_sysbios_hal_Timer_Object__table__C");
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Object__DESC__C, ".const:ti_sysbios_heaps_HeapMem_Object__DESC__C");
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Object__PARAMS__C, ".const:ti_sysbios_heaps_HeapMem_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__diagsEnabled__C, ".const:ti_sysbios_heaps_HeapMem_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__diagsIncluded__C, ".const:ti_sysbios_heaps_HeapMem_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__diagsMask__C, ".const:ti_sysbios_heaps_HeapMem_Module__diagsMask__C");
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__gateObj__C, ".const:ti_sysbios_heaps_HeapMem_Module__gateObj__C");
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__gatePrms__C, ".const:ti_sysbios_heaps_HeapMem_Module__gatePrms__C");
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__id__C, ".const:ti_sysbios_heaps_HeapMem_Module__id__C");
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__loggerDefined__C, ".const:ti_sysbios_heaps_HeapMem_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__loggerObj__C, ".const:ti_sysbios_heaps_HeapMem_Module__loggerObj__C");
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__loggerFxn0__C, ".const:ti_sysbios_heaps_HeapMem_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__loggerFxn1__C, ".const:ti_sysbios_heaps_HeapMem_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__loggerFxn2__C, ".const:ti_sysbios_heaps_HeapMem_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__loggerFxn4__C, ".const:ti_sysbios_heaps_HeapMem_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__loggerFxn8__C, ".const:ti_sysbios_heaps_HeapMem_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__startupDoneFxn__C, ".const:ti_sysbios_heaps_HeapMem_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Object__count__C, ".const:ti_sysbios_heaps_HeapMem_Object__count__C");
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Object__heap__C, ".const:ti_sysbios_heaps_HeapMem_Object__heap__C");
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Object__sizeof__C, ".const:ti_sysbios_heaps_HeapMem_Object__sizeof__C");
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Object__table__C, ".const:ti_sysbios_heaps_HeapMem_Object__table__C");
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_A_zeroBlock__C, ".const:ti_sysbios_heaps_HeapMem_A_zeroBlock__C");
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_A_heapSize__C, ".const:ti_sysbios_heaps_HeapMem_A_heapSize__C");
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_A_align__C, ".const:ti_sysbios_heaps_HeapMem_A_align__C");
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_E_memory__C, ".const:ti_sysbios_heaps_HeapMem_E_memory__C");
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_A_invalidFree__C, ".const:ti_sysbios_heaps_HeapMem_A_invalidFree__C");
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_reqAlign__C, ".const:ti_sysbios_heaps_HeapMem_reqAlign__C");
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_reqAlignMask__C, ".const:ti_sysbios_heaps_HeapMem_reqAlignMask__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Object__DESC__C, ".const:ti_sysbios_knl_Clock_Object__DESC__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Object__PARAMS__C, ".const:ti_sysbios_knl_Clock_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Clock_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Clock_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__diagsMask__C, ".const:ti_sysbios_knl_Clock_Module__diagsMask__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__gateObj__C, ".const:ti_sysbios_knl_Clock_Module__gateObj__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__gatePrms__C, ".const:ti_sysbios_knl_Clock_Module__gatePrms__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__id__C, ".const:ti_sysbios_knl_Clock_Module__id__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerDefined__C, ".const:ti_sysbios_knl_Clock_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerObj__C, ".const:ti_sysbios_knl_Clock_Module__loggerObj__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Clock_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Clock_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Clock_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Clock_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Clock_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__startupDoneFxn__C, ".const:ti_sysbios_knl_Clock_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Object__count__C, ".const:ti_sysbios_knl_Clock_Object__count__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Object__heap__C, ".const:ti_sysbios_knl_Clock_Object__heap__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Object__sizeof__C, ".const:ti_sysbios_knl_Clock_Object__sizeof__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Object__table__C, ".const:ti_sysbios_knl_Clock_Object__table__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_LW_delayed__C, ".const:ti_sysbios_knl_Clock_LW_delayed__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_LM_tick__C, ".const:ti_sysbios_knl_Clock_LM_tick__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_LM_begin__C, ".const:ti_sysbios_knl_Clock_LM_begin__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_A_clockDisabled__C, ".const:ti_sysbios_knl_Clock_A_clockDisabled__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_A_badThreadType__C, ".const:ti_sysbios_knl_Clock_A_badThreadType__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_tickSource__C, ".const:ti_sysbios_knl_Clock_tickSource__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_tickMode__C, ".const:ti_sysbios_knl_Clock_tickMode__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_timerId__C, ".const:ti_sysbios_knl_Clock_timerId__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_tickPeriod__C, ".const:ti_sysbios_knl_Clock_tickPeriod__C");
#pragma DATA_SECTION(ti_sysbios_knl_Idle_funcList__A, ".const:ti_sysbios_knl_Idle_funcList__A");
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Idle_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Idle_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__diagsMask__C, ".const:ti_sysbios_knl_Idle_Module__diagsMask__C");
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__gateObj__C, ".const:ti_sysbios_knl_Idle_Module__gateObj__C");
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__gatePrms__C, ".const:ti_sysbios_knl_Idle_Module__gatePrms__C");
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__id__C, ".const:ti_sysbios_knl_Idle_Module__id__C");
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerDefined__C, ".const:ti_sysbios_knl_Idle_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerObj__C, ".const:ti_sysbios_knl_Idle_Module__loggerObj__C");
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Idle_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Idle_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Idle_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Idle_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Idle_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__startupDoneFxn__C, ".const:ti_sysbios_knl_Idle_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Object__count__C, ".const:ti_sysbios_knl_Idle_Object__count__C");
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Object__heap__C, ".const:ti_sysbios_knl_Idle_Object__heap__C");
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Object__sizeof__C, ".const:ti_sysbios_knl_Idle_Object__sizeof__C");
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Object__table__C, ".const:ti_sysbios_knl_Idle_Object__table__C");
#pragma DATA_SECTION(ti_sysbios_knl_Idle_funcList__C, ".const:ti_sysbios_knl_Idle_funcList__C");
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Intrinsics_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Intrinsics_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__diagsMask__C, ".const:ti_sysbios_knl_Intrinsics_Module__diagsMask__C");
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__gateObj__C, ".const:ti_sysbios_knl_Intrinsics_Module__gateObj__C");
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__gatePrms__C, ".const:ti_sysbios_knl_Intrinsics_Module__gatePrms__C");
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__id__C, ".const:ti_sysbios_knl_Intrinsics_Module__id__C");
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerDefined__C, ".const:ti_sysbios_knl_Intrinsics_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerObj__C, ".const:ti_sysbios_knl_Intrinsics_Module__loggerObj__C");
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Intrinsics_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Intrinsics_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Intrinsics_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Intrinsics_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Intrinsics_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__startupDoneFxn__C, ".const:ti_sysbios_knl_Intrinsics_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Object__count__C, ".const:ti_sysbios_knl_Intrinsics_Object__count__C");
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Object__heap__C, ".const:ti_sysbios_knl_Intrinsics_Object__heap__C");
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Object__sizeof__C, ".const:ti_sysbios_knl_Intrinsics_Object__sizeof__C");
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Object__table__C, ".const:ti_sysbios_knl_Intrinsics_Object__table__C");
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Object__DESC__C, ".const:ti_sysbios_knl_Queue_Object__DESC__C");
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Object__PARAMS__C, ".const:ti_sysbios_knl_Queue_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Queue_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Queue_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__diagsMask__C, ".const:ti_sysbios_knl_Queue_Module__diagsMask__C");
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__gateObj__C, ".const:ti_sysbios_knl_Queue_Module__gateObj__C");
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__gatePrms__C, ".const:ti_sysbios_knl_Queue_Module__gatePrms__C");
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__id__C, ".const:ti_sysbios_knl_Queue_Module__id__C");
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerDefined__C, ".const:ti_sysbios_knl_Queue_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerObj__C, ".const:ti_sysbios_knl_Queue_Module__loggerObj__C");
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Queue_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Queue_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Queue_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Queue_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Queue_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__startupDoneFxn__C, ".const:ti_sysbios_knl_Queue_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Object__count__C, ".const:ti_sysbios_knl_Queue_Object__count__C");
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Object__heap__C, ".const:ti_sysbios_knl_Queue_Object__heap__C");
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Object__sizeof__C, ".const:ti_sysbios_knl_Queue_Object__sizeof__C");
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Object__table__C, ".const:ti_sysbios_knl_Queue_Object__table__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Object__DESC__C, ".const:ti_sysbios_knl_Semaphore_Object__DESC__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Object__PARAMS__C, ".const:ti_sysbios_knl_Semaphore_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Semaphore_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Semaphore_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__diagsMask__C, ".const:ti_sysbios_knl_Semaphore_Module__diagsMask__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__gateObj__C, ".const:ti_sysbios_knl_Semaphore_Module__gateObj__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__gatePrms__C, ".const:ti_sysbios_knl_Semaphore_Module__gatePrms__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__id__C, ".const:ti_sysbios_knl_Semaphore_Module__id__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerDefined__C, ".const:ti_sysbios_knl_Semaphore_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerObj__C, ".const:ti_sysbios_knl_Semaphore_Module__loggerObj__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Semaphore_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Semaphore_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Semaphore_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Semaphore_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Semaphore_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__startupDoneFxn__C, ".const:ti_sysbios_knl_Semaphore_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Object__count__C, ".const:ti_sysbios_knl_Semaphore_Object__count__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Object__heap__C, ".const:ti_sysbios_knl_Semaphore_Object__heap__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Object__sizeof__C, ".const:ti_sysbios_knl_Semaphore_Object__sizeof__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Object__table__C, ".const:ti_sysbios_knl_Semaphore_Object__table__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_LM_post__C, ".const:ti_sysbios_knl_Semaphore_LM_post__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_LM_pend__C, ".const:ti_sysbios_knl_Semaphore_LM_pend__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_A_noEvents__C, ".const:ti_sysbios_knl_Semaphore_A_noEvents__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_A_invTimeout__C, ".const:ti_sysbios_knl_Semaphore_A_invTimeout__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_A_badContext__C, ".const:ti_sysbios_knl_Semaphore_A_badContext__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_supportsEvents__C, ".const:ti_sysbios_knl_Semaphore_supportsEvents__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_eventPost__C, ".const:ti_sysbios_knl_Semaphore_eventPost__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_eventSync__C, ".const:ti_sysbios_knl_Semaphore_eventSync__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Object__DESC__C, ".const:ti_sysbios_knl_Swi_Object__DESC__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Object__PARAMS__C, ".const:ti_sysbios_knl_Swi_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Swi_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Swi_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__diagsMask__C, ".const:ti_sysbios_knl_Swi_Module__diagsMask__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__gateObj__C, ".const:ti_sysbios_knl_Swi_Module__gateObj__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__gatePrms__C, ".const:ti_sysbios_knl_Swi_Module__gatePrms__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__id__C, ".const:ti_sysbios_knl_Swi_Module__id__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerDefined__C, ".const:ti_sysbios_knl_Swi_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerObj__C, ".const:ti_sysbios_knl_Swi_Module__loggerObj__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Swi_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Swi_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Swi_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Swi_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Swi_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__startupDoneFxn__C, ".const:ti_sysbios_knl_Swi_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Object__count__C, ".const:ti_sysbios_knl_Swi_Object__count__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Object__heap__C, ".const:ti_sysbios_knl_Swi_Object__heap__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Object__sizeof__C, ".const:ti_sysbios_knl_Swi_Object__sizeof__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Object__table__C, ".const:ti_sysbios_knl_Swi_Object__table__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_LM_begin__C, ".const:ti_sysbios_knl_Swi_LM_begin__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_LD_end__C, ".const:ti_sysbios_knl_Swi_LD_end__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_LM_post__C, ".const:ti_sysbios_knl_Swi_LM_post__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_A_swiDisabled__C, ".const:ti_sysbios_knl_Swi_A_swiDisabled__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_A_badPriority__C, ".const:ti_sysbios_knl_Swi_A_badPriority__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_numPriorities__C, ".const:ti_sysbios_knl_Swi_numPriorities__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_hooks__C, ".const:ti_sysbios_knl_Swi_hooks__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_taskDisable__C, ".const:ti_sysbios_knl_Swi_taskDisable__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_taskRestore__C, ".const:ti_sysbios_knl_Swi_taskRestore__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_numConstructedSwis__C, ".const:ti_sysbios_knl_Swi_numConstructedSwis__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_Object__DESC__C, ".const:ti_sysbios_knl_Task_Object__DESC__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_Object__PARAMS__C, ".const:ti_sysbios_knl_Task_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_hooks__A, ".const:ti_sysbios_knl_Task_hooks__A");
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Task_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Task_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__diagsMask__C, ".const:ti_sysbios_knl_Task_Module__diagsMask__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__gateObj__C, ".const:ti_sysbios_knl_Task_Module__gateObj__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__gatePrms__C, ".const:ti_sysbios_knl_Task_Module__gatePrms__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__id__C, ".const:ti_sysbios_knl_Task_Module__id__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerDefined__C, ".const:ti_sysbios_knl_Task_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerObj__C, ".const:ti_sysbios_knl_Task_Module__loggerObj__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Task_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Task_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Task_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Task_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Task_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__startupDoneFxn__C, ".const:ti_sysbios_knl_Task_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_Object__count__C, ".const:ti_sysbios_knl_Task_Object__count__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_Object__heap__C, ".const:ti_sysbios_knl_Task_Object__heap__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_Object__sizeof__C, ".const:ti_sysbios_knl_Task_Object__sizeof__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_Object__table__C, ".const:ti_sysbios_knl_Task_Object__table__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_LM_switch__C, ".const:ti_sysbios_knl_Task_LM_switch__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_LM_sleep__C, ".const:ti_sysbios_knl_Task_LM_sleep__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_LD_ready__C, ".const:ti_sysbios_knl_Task_LD_ready__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_LD_block__C, ".const:ti_sysbios_knl_Task_LD_block__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_LM_yield__C, ".const:ti_sysbios_knl_Task_LM_yield__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_LM_setPri__C, ".const:ti_sysbios_knl_Task_LM_setPri__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_LD_exit__C, ".const:ti_sysbios_knl_Task_LD_exit__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_E_stackOverflow__C, ".const:ti_sysbios_knl_Task_E_stackOverflow__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_E_spOutOfBounds__C, ".const:ti_sysbios_knl_Task_E_spOutOfBounds__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_badThreadType__C, ".const:ti_sysbios_knl_Task_A_badThreadType__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_badTaskState__C, ".const:ti_sysbios_knl_Task_A_badTaskState__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_noPendElem__C, ".const:ti_sysbios_knl_Task_A_noPendElem__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_taskDisabled__C, ".const:ti_sysbios_knl_Task_A_taskDisabled__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_badPriority__C, ".const:ti_sysbios_knl_Task_A_badPriority__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_badTimeout__C, ".const:ti_sysbios_knl_Task_A_badTimeout__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_numPriorities__C, ".const:ti_sysbios_knl_Task_numPriorities__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_defaultStackSize__C, ".const:ti_sysbios_knl_Task_defaultStackSize__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_defaultStackHeap__C, ".const:ti_sysbios_knl_Task_defaultStackHeap__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_allBlockedFunc__C, ".const:ti_sysbios_knl_Task_allBlockedFunc__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_initStackFlag__C, ".const:ti_sysbios_knl_Task_initStackFlag__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_deleteTerminatedTasks__C, ".const:ti_sysbios_knl_Task_deleteTerminatedTasks__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_hooks__C, ".const:ti_sysbios_knl_Task_hooks__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_numConstructedTasks__C, ".const:ti_sysbios_knl_Task_numConstructedTasks__C");
#pragma DATA_SECTION(ti_sysbios_timers_timer64_Timer_Object__DESC__C, ".const:ti_sysbios_timers_timer64_Timer_Object__DESC__C");
#pragma DATA_SECTION(ti_sysbios_timers_timer64_Timer_Object__PARAMS__C, ".const:ti_sysbios_timers_timer64_Timer_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_timers_timer64_Timer_timerSettings__A, ".const:ti_sysbios_timers_timer64_Timer_timerSettings__A");
#pragma DATA_SECTION(ti_sysbios_timers_timer64_Timer_Module__diagsEnabled__C, ".const:ti_sysbios_timers_timer64_Timer_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_sysbios_timers_timer64_Timer_Module__diagsIncluded__C, ".const:ti_sysbios_timers_timer64_Timer_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_sysbios_timers_timer64_Timer_Module__diagsMask__C, ".const:ti_sysbios_timers_timer64_Timer_Module__diagsMask__C");
#pragma DATA_SECTION(ti_sysbios_timers_timer64_Timer_Module__gateObj__C, ".const:ti_sysbios_timers_timer64_Timer_Module__gateObj__C");
#pragma DATA_SECTION(ti_sysbios_timers_timer64_Timer_Module__gatePrms__C, ".const:ti_sysbios_timers_timer64_Timer_Module__gatePrms__C");
#pragma DATA_SECTION(ti_sysbios_timers_timer64_Timer_Module__id__C, ".const:ti_sysbios_timers_timer64_Timer_Module__id__C");
#pragma DATA_SECTION(ti_sysbios_timers_timer64_Timer_Module__loggerDefined__C, ".const:ti_sysbios_timers_timer64_Timer_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_sysbios_timers_timer64_Timer_Module__loggerObj__C, ".const:ti_sysbios_timers_timer64_Timer_Module__loggerObj__C");
#pragma DATA_SECTION(ti_sysbios_timers_timer64_Timer_Module__loggerFxn0__C, ".const:ti_sysbios_timers_timer64_Timer_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_sysbios_timers_timer64_Timer_Module__loggerFxn1__C, ".const:ti_sysbios_timers_timer64_Timer_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_sysbios_timers_timer64_Timer_Module__loggerFxn2__C, ".const:ti_sysbios_timers_timer64_Timer_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_sysbios_timers_timer64_Timer_Module__loggerFxn4__C, ".const:ti_sysbios_timers_timer64_Timer_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_sysbios_timers_timer64_Timer_Module__loggerFxn8__C, ".const:ti_sysbios_timers_timer64_Timer_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_sysbios_timers_timer64_Timer_Module__startupDoneFxn__C, ".const:ti_sysbios_timers_timer64_Timer_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_sysbios_timers_timer64_Timer_Object__count__C, ".const:ti_sysbios_timers_timer64_Timer_Object__count__C");
#pragma DATA_SECTION(ti_sysbios_timers_timer64_Timer_Object__heap__C, ".const:ti_sysbios_timers_timer64_Timer_Object__heap__C");
#pragma DATA_SECTION(ti_sysbios_timers_timer64_Timer_Object__sizeof__C, ".const:ti_sysbios_timers_timer64_Timer_Object__sizeof__C");
#pragma DATA_SECTION(ti_sysbios_timers_timer64_Timer_Object__table__C, ".const:ti_sysbios_timers_timer64_Timer_Object__table__C");
#pragma DATA_SECTION(ti_sysbios_timers_timer64_Timer_A_notAvailable__C, ".const:ti_sysbios_timers_timer64_Timer_A_notAvailable__C");
#pragma DATA_SECTION(ti_sysbios_timers_timer64_Timer_E_invalidTimer__C, ".const:ti_sysbios_timers_timer64_Timer_E_invalidTimer__C");
#pragma DATA_SECTION(ti_sysbios_timers_timer64_Timer_E_notAvailable__C, ".const:ti_sysbios_timers_timer64_Timer_E_notAvailable__C");
#pragma DATA_SECTION(ti_sysbios_timers_timer64_Timer_E_cannotSupport__C, ".const:ti_sysbios_timers_timer64_Timer_E_cannotSupport__C");
#pragma DATA_SECTION(ti_sysbios_timers_timer64_Timer_anyMask__C, ".const:ti_sysbios_timers_timer64_Timer_anyMask__C");
#pragma DATA_SECTION(ti_sysbios_timers_timer64_Timer_defaultHalf__C, ".const:ti_sysbios_timers_timer64_Timer_defaultHalf__C");
#pragma DATA_SECTION(ti_sysbios_timers_timer64_Timer_timerSettings__C, ".const:ti_sysbios_timers_timer64_Timer_timerSettings__C");
#pragma DATA_SECTION(ti_sysbios_timers_timer64_Timer_startupNeeded__C, ".const:ti_sysbios_timers_timer64_Timer_startupNeeded__C");
#pragma DATA_SECTION(ti_sysbios_timers_timer64_Timer_freqDivisor__C, ".const:ti_sysbios_timers_timer64_Timer_freqDivisor__C");
#pragma DATA_SECTION(ti_sysbios_timers_timer64_Timer_numTimerDevices__C, ".const:ti_sysbios_timers_timer64_Timer_numTimerDevices__C");
#pragma DATA_SECTION(ti_sysbios_timers_timer64_Timer_numLocalTimers__C, ".const:ti_sysbios_timers_timer64_Timer_numLocalTimers__C");
#pragma DATA_SECTION(ti_sysbios_xdcruntime_SemThreadSupport_Object__DESC__C, ".const:ti_sysbios_xdcruntime_SemThreadSupport_Object__DESC__C");
#pragma DATA_SECTION(ti_sysbios_xdcruntime_SemThreadSupport_Object__PARAMS__C, ".const:ti_sysbios_xdcruntime_SemThreadSupport_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_xdcruntime_SemThreadSupport_Module__diagsEnabled__C, ".const:ti_sysbios_xdcruntime_SemThreadSupport_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_sysbios_xdcruntime_SemThreadSupport_Module__diagsIncluded__C, ".const:ti_sysbios_xdcruntime_SemThreadSupport_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_sysbios_xdcruntime_SemThreadSupport_Module__diagsMask__C, ".const:ti_sysbios_xdcruntime_SemThreadSupport_Module__diagsMask__C");
#pragma DATA_SECTION(ti_sysbios_xdcruntime_SemThreadSupport_Module__gateObj__C, ".const:ti_sysbios_xdcruntime_SemThreadSupport_Module__gateObj__C");
#pragma DATA_SECTION(ti_sysbios_xdcruntime_SemThreadSupport_Module__gatePrms__C, ".const:ti_sysbios_xdcruntime_SemThreadSupport_Module__gatePrms__C");
#pragma DATA_SECTION(ti_sysbios_xdcruntime_SemThreadSupport_Module__id__C, ".const:ti_sysbios_xdcruntime_SemThreadSupport_Module__id__C");
#pragma DATA_SECTION(ti_sysbios_xdcruntime_SemThreadSupport_Module__loggerDefined__C, ".const:ti_sysbios_xdcruntime_SemThreadSupport_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_sysbios_xdcruntime_SemThreadSupport_Module__loggerObj__C, ".const:ti_sysbios_xdcruntime_SemThreadSupport_Module__loggerObj__C");
#pragma DATA_SECTION(ti_sysbios_xdcruntime_SemThreadSupport_Module__loggerFxn0__C, ".const:ti_sysbios_xdcruntime_SemThreadSupport_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_sysbios_xdcruntime_SemThreadSupport_Module__loggerFxn1__C, ".const:ti_sysbios_xdcruntime_SemThreadSupport_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_sysbios_xdcruntime_SemThreadSupport_Module__loggerFxn2__C, ".const:ti_sysbios_xdcruntime_SemThreadSupport_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_sysbios_xdcruntime_SemThreadSupport_Module__loggerFxn4__C, ".const:ti_sysbios_xdcruntime_SemThreadSupport_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_sysbios_xdcruntime_SemThreadSupport_Module__loggerFxn8__C, ".const:ti_sysbios_xdcruntime_SemThreadSupport_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_sysbios_xdcruntime_SemThreadSupport_Module__startupDoneFxn__C, ".const:ti_sysbios_xdcruntime_SemThreadSupport_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_sysbios_xdcruntime_SemThreadSupport_Object__count__C, ".const:ti_sysbios_xdcruntime_SemThreadSupport_Object__count__C");
#pragma DATA_SECTION(ti_sysbios_xdcruntime_SemThreadSupport_Object__heap__C, ".const:ti_sysbios_xdcruntime_SemThreadSupport_Object__heap__C");
#pragma DATA_SECTION(ti_sysbios_xdcruntime_SemThreadSupport_Object__sizeof__C, ".const:ti_sysbios_xdcruntime_SemThreadSupport_Object__sizeof__C");
#pragma DATA_SECTION(ti_sysbios_xdcruntime_SemThreadSupport_Object__table__C, ".const:ti_sysbios_xdcruntime_SemThreadSupport_Object__table__C");
#pragma DATA_SECTION(xdc_runtime_Assert_Module__diagsEnabled__C, ".const:xdc_runtime_Assert_Module__diagsEnabled__C");
#pragma DATA_SECTION(xdc_runtime_Assert_Module__diagsIncluded__C, ".const:xdc_runtime_Assert_Module__diagsIncluded__C");
#pragma DATA_SECTION(xdc_runtime_Assert_Module__diagsMask__C, ".const:xdc_runtime_Assert_Module__diagsMask__C");
#pragma DATA_SECTION(xdc_runtime_Assert_Module__gateObj__C, ".const:xdc_runtime_Assert_Module__gateObj__C");
#pragma DATA_SECTION(xdc_runtime_Assert_Module__gatePrms__C, ".const:xdc_runtime_Assert_Module__gatePrms__C");
#pragma DATA_SECTION(xdc_runtime_Assert_Module__id__C, ".const:xdc_runtime_Assert_Module__id__C");
#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerDefined__C, ".const:xdc_runtime_Assert_Module__loggerDefined__C");
#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerObj__C, ".const:xdc_runtime_Assert_Module__loggerObj__C");
#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerFxn0__C, ".const:xdc_runtime_Assert_Module__loggerFxn0__C");
#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerFxn1__C, ".const:xdc_runtime_Assert_Module__loggerFxn1__C");
#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerFxn2__C, ".const:xdc_runtime_Assert_Module__loggerFxn2__C");
#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerFxn4__C, ".const:xdc_runtime_Assert_Module__loggerFxn4__C");
#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerFxn8__C, ".const:xdc_runtime_Assert_Module__loggerFxn8__C");
#pragma DATA_SECTION(xdc_runtime_Assert_Module__startupDoneFxn__C, ".const:xdc_runtime_Assert_Module__startupDoneFxn__C");
#pragma DATA_SECTION(xdc_runtime_Assert_Object__count__C, ".const:xdc_runtime_Assert_Object__count__C");
#pragma DATA_SECTION(xdc_runtime_Assert_Object__heap__C, ".const:xdc_runtime_Assert_Object__heap__C");
#pragma DATA_SECTION(xdc_runtime_Assert_Object__sizeof__C, ".const:xdc_runtime_Assert_Object__sizeof__C");
#pragma DATA_SECTION(xdc_runtime_Assert_Object__table__C, ".const:xdc_runtime_Assert_Object__table__C");
#pragma DATA_SECTION(xdc_runtime_Assert_E_assertFailed__C, ".const:xdc_runtime_Assert_E_assertFailed__C");
#pragma DATA_SECTION(xdc_runtime_Core_Module__diagsEnabled__C, ".const:xdc_runtime_Core_Module__diagsEnabled__C");
#pragma DATA_SECTION(xdc_runtime_Core_Module__diagsIncluded__C, ".const:xdc_runtime_Core_Module__diagsIncluded__C");
#pragma DATA_SECTION(xdc_runtime_Core_Module__diagsMask__C, ".const:xdc_runtime_Core_Module__diagsMask__C");
#pragma DATA_SECTION(xdc_runtime_Core_Module__gateObj__C, ".const:xdc_runtime_Core_Module__gateObj__C");
#pragma DATA_SECTION(xdc_runtime_Core_Module__gatePrms__C, ".const:xdc_runtime_Core_Module__gatePrms__C");
#pragma DATA_SECTION(xdc_runtime_Core_Module__id__C, ".const:xdc_runtime_Core_Module__id__C");
#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerDefined__C, ".const:xdc_runtime_Core_Module__loggerDefined__C");
#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerObj__C, ".const:xdc_runtime_Core_Module__loggerObj__C");
#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerFxn0__C, ".const:xdc_runtime_Core_Module__loggerFxn0__C");
#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerFxn1__C, ".const:xdc_runtime_Core_Module__loggerFxn1__C");
#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerFxn2__C, ".const:xdc_runtime_Core_Module__loggerFxn2__C");
#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerFxn4__C, ".const:xdc_runtime_Core_Module__loggerFxn4__C");
#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerFxn8__C, ".const:xdc_runtime_Core_Module__loggerFxn8__C");
#pragma DATA_SECTION(xdc_runtime_Core_Module__startupDoneFxn__C, ".const:xdc_runtime_Core_Module__startupDoneFxn__C");
#pragma DATA_SECTION(xdc_runtime_Core_Object__count__C, ".const:xdc_runtime_Core_Object__count__C");
#pragma DATA_SECTION(xdc_runtime_Core_Object__heap__C, ".const:xdc_runtime_Core_Object__heap__C");
#pragma DATA_SECTION(xdc_runtime_Core_Object__sizeof__C, ".const:xdc_runtime_Core_Object__sizeof__C");
#pragma DATA_SECTION(xdc_runtime_Core_Object__table__C, ".const:xdc_runtime_Core_Object__table__C");
#pragma DATA_SECTION(xdc_runtime_Core_A_initializedParams__C, ".const:xdc_runtime_Core_A_initializedParams__C");
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__diagsEnabled__C, ".const:xdc_runtime_Defaults_Module__diagsEnabled__C");
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__diagsIncluded__C, ".const:xdc_runtime_Defaults_Module__diagsIncluded__C");
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__diagsMask__C, ".const:xdc_runtime_Defaults_Module__diagsMask__C");
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__gateObj__C, ".const:xdc_runtime_Defaults_Module__gateObj__C");
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__gatePrms__C, ".const:xdc_runtime_Defaults_Module__gatePrms__C");
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__id__C, ".const:xdc_runtime_Defaults_Module__id__C");
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerDefined__C, ".const:xdc_runtime_Defaults_Module__loggerDefined__C");
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerObj__C, ".const:xdc_runtime_Defaults_Module__loggerObj__C");
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerFxn0__C, ".const:xdc_runtime_Defaults_Module__loggerFxn0__C");
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerFxn1__C, ".const:xdc_runtime_Defaults_Module__loggerFxn1__C");
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerFxn2__C, ".const:xdc_runtime_Defaults_Module__loggerFxn2__C");
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerFxn4__C, ".const:xdc_runtime_Defaults_Module__loggerFxn4__C");
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerFxn8__C, ".const:xdc_runtime_Defaults_Module__loggerFxn8__C");
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__startupDoneFxn__C, ".const:xdc_runtime_Defaults_Module__startupDoneFxn__C");
#pragma DATA_SECTION(xdc_runtime_Defaults_Object__count__C, ".const:xdc_runtime_Defaults_Object__count__C");
#pragma DATA_SECTION(xdc_runtime_Defaults_Object__heap__C, ".const:xdc_runtime_Defaults_Object__heap__C");
#pragma DATA_SECTION(xdc_runtime_Defaults_Object__sizeof__C, ".const:xdc_runtime_Defaults_Object__sizeof__C");
#pragma DATA_SECTION(xdc_runtime_Defaults_Object__table__C, ".const:xdc_runtime_Defaults_Object__table__C");
#pragma DATA_SECTION(xdc_runtime_Diags_Module__diagsEnabled__C, ".const:xdc_runtime_Diags_Module__diagsEnabled__C");
#pragma DATA_SECTION(xdc_runtime_Diags_Module__diagsIncluded__C, ".const:xdc_runtime_Diags_Module__diagsIncluded__C");
#pragma DATA_SECTION(xdc_runtime_Diags_Module__diagsMask__C, ".const:xdc_runtime_Diags_Module__diagsMask__C");
#pragma DATA_SECTION(xdc_runtime_Diags_Module__gateObj__C, ".const:xdc_runtime_Diags_Module__gateObj__C");
#pragma DATA_SECTION(xdc_runtime_Diags_Module__gatePrms__C, ".const:xdc_runtime_Diags_Module__gatePrms__C");
#pragma DATA_SECTION(xdc_runtime_Diags_Module__id__C, ".const:xdc_runtime_Diags_Module__id__C");
#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerDefined__C, ".const:xdc_runtime_Diags_Module__loggerDefined__C");
#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerObj__C, ".const:xdc_runtime_Diags_Module__loggerObj__C");
#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerFxn0__C, ".const:xdc_runtime_Diags_Module__loggerFxn0__C");
#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerFxn1__C, ".const:xdc_runtime_Diags_Module__loggerFxn1__C");
#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerFxn2__C, ".const:xdc_runtime_Diags_Module__loggerFxn2__C");
#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerFxn4__C, ".const:xdc_runtime_Diags_Module__loggerFxn4__C");
#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerFxn8__C, ".const:xdc_runtime_Diags_Module__loggerFxn8__C");
#pragma DATA_SECTION(xdc_runtime_Diags_Module__startupDoneFxn__C, ".const:xdc_runtime_Diags_Module__startupDoneFxn__C");
#pragma DATA_SECTION(xdc_runtime_Diags_Object__count__C, ".const:xdc_runtime_Diags_Object__count__C");
#pragma DATA_SECTION(xdc_runtime_Diags_Object__heap__C, ".const:xdc_runtime_Diags_Object__heap__C");
#pragma DATA_SECTION(xdc_runtime_Diags_Object__sizeof__C, ".const:xdc_runtime_Diags_Object__sizeof__C");
#pragma DATA_SECTION(xdc_runtime_Diags_Object__table__C, ".const:xdc_runtime_Diags_Object__table__C");
#pragma DATA_SECTION(xdc_runtime_Diags_setMaskEnabled__C, ".const:xdc_runtime_Diags_setMaskEnabled__C");
#pragma DATA_SECTION(xdc_runtime_Diags_dictBase__C, ".const:xdc_runtime_Diags_dictBase__C");
#pragma DATA_SECTION(xdc_runtime_Error_Module__diagsEnabled__C, ".const:xdc_runtime_Error_Module__diagsEnabled__C");
#pragma DATA_SECTION(xdc_runtime_Error_Module__diagsIncluded__C, ".const:xdc_runtime_Error_Module__diagsIncluded__C");
#pragma DATA_SECTION(xdc_runtime_Error_Module__diagsMask__C, ".const:xdc_runtime_Error_Module__diagsMask__C");
#pragma DATA_SECTION(xdc_runtime_Error_Module__gateObj__C, ".const:xdc_runtime_Error_Module__gateObj__C");
#pragma DATA_SECTION(xdc_runtime_Error_Module__gatePrms__C, ".const:xdc_runtime_Error_Module__gatePrms__C");
#pragma DATA_SECTION(xdc_runtime_Error_Module__id__C, ".const:xdc_runtime_Error_Module__id__C");
#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerDefined__C, ".const:xdc_runtime_Error_Module__loggerDefined__C");
#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerObj__C, ".const:xdc_runtime_Error_Module__loggerObj__C");
#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerFxn0__C, ".const:xdc_runtime_Error_Module__loggerFxn0__C");
#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerFxn1__C, ".const:xdc_runtime_Error_Module__loggerFxn1__C");
#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerFxn2__C, ".const:xdc_runtime_Error_Module__loggerFxn2__C");
#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerFxn4__C, ".const:xdc_runtime_Error_Module__loggerFxn4__C");
#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerFxn8__C, ".const:xdc_runtime_Error_Module__loggerFxn8__C");
#pragma DATA_SECTION(xdc_runtime_Error_Module__startupDoneFxn__C, ".const:xdc_runtime_Error_Module__startupDoneFxn__C");
#pragma DATA_SECTION(xdc_runtime_Error_Object__count__C, ".const:xdc_runtime_Error_Object__count__C");
#pragma DATA_SECTION(xdc_runtime_Error_Object__heap__C, ".const:xdc_runtime_Error_Object__heap__C");
#pragma DATA_SECTION(xdc_runtime_Error_Object__sizeof__C, ".const:xdc_runtime_Error_Object__sizeof__C");
#pragma DATA_SECTION(xdc_runtime_Error_Object__table__C, ".const:xdc_runtime_Error_Object__table__C");
#pragma DATA_SECTION(xdc_runtime_Error_E_generic__C, ".const:xdc_runtime_Error_E_generic__C");
#pragma DATA_SECTION(xdc_runtime_Error_E_memory__C, ".const:xdc_runtime_Error_E_memory__C");
#pragma DATA_SECTION(xdc_runtime_Error_E_msgCode__C, ".const:xdc_runtime_Error_E_msgCode__C");
#pragma DATA_SECTION(xdc_runtime_Error_policy__C, ".const:xdc_runtime_Error_policy__C");
#pragma DATA_SECTION(xdc_runtime_Error_raiseHook__C, ".const:xdc_runtime_Error_raiseHook__C");
#pragma DATA_SECTION(xdc_runtime_Error_maxDepth__C, ".const:xdc_runtime_Error_maxDepth__C");
#pragma DATA_SECTION(xdc_runtime_Gate_Module__diagsEnabled__C, ".const:xdc_runtime_Gate_Module__diagsEnabled__C");
#pragma DATA_SECTION(xdc_runtime_Gate_Module__diagsIncluded__C, ".const:xdc_runtime_Gate_Module__diagsIncluded__C");
#pragma DATA_SECTION(xdc_runtime_Gate_Module__diagsMask__C, ".const:xdc_runtime_Gate_Module__diagsMask__C");
#pragma DATA_SECTION(xdc_runtime_Gate_Module__gateObj__C, ".const:xdc_runtime_Gate_Module__gateObj__C");
#pragma DATA_SECTION(xdc_runtime_Gate_Module__gatePrms__C, ".const:xdc_runtime_Gate_Module__gatePrms__C");
#pragma DATA_SECTION(xdc_runtime_Gate_Module__id__C, ".const:xdc_runtime_Gate_Module__id__C");
#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerDefined__C, ".const:xdc_runtime_Gate_Module__loggerDefined__C");
#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerObj__C, ".const:xdc_runtime_Gate_Module__loggerObj__C");
#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerFxn0__C, ".const:xdc_runtime_Gate_Module__loggerFxn0__C");
#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerFxn1__C, ".const:xdc_runtime_Gate_Module__loggerFxn1__C");
#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerFxn2__C, ".const:xdc_runtime_Gate_Module__loggerFxn2__C");
#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerFxn4__C, ".const:xdc_runtime_Gate_Module__loggerFxn4__C");
#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerFxn8__C, ".const:xdc_runtime_Gate_Module__loggerFxn8__C");
#pragma DATA_SECTION(xdc_runtime_Gate_Module__startupDoneFxn__C, ".const:xdc_runtime_Gate_Module__startupDoneFxn__C");
#pragma DATA_SECTION(xdc_runtime_Gate_Object__count__C, ".const:xdc_runtime_Gate_Object__count__C");
#pragma DATA_SECTION(xdc_runtime_Gate_Object__heap__C, ".const:xdc_runtime_Gate_Object__heap__C");
#pragma DATA_SECTION(xdc_runtime_Gate_Object__sizeof__C, ".const:xdc_runtime_Gate_Object__sizeof__C");
#pragma DATA_SECTION(xdc_runtime_Gate_Object__table__C, ".const:xdc_runtime_Gate_Object__table__C");
#pragma DATA_SECTION(xdc_runtime_Log_Module__diagsEnabled__C, ".const:xdc_runtime_Log_Module__diagsEnabled__C");
#pragma DATA_SECTION(xdc_runtime_Log_Module__diagsIncluded__C, ".const:xdc_runtime_Log_Module__diagsIncluded__C");
#pragma DATA_SECTION(xdc_runtime_Log_Module__diagsMask__C, ".const:xdc_runtime_Log_Module__diagsMask__C");
#pragma DATA_SECTION(xdc_runtime_Log_Module__gateObj__C, ".const:xdc_runtime_Log_Module__gateObj__C");
#pragma DATA_SECTION(xdc_runtime_Log_Module__gatePrms__C, ".const:xdc_runtime_Log_Module__gatePrms__C");
#pragma DATA_SECTION(xdc_runtime_Log_Module__id__C, ".const:xdc_runtime_Log_Module__id__C");
#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerDefined__C, ".const:xdc_runtime_Log_Module__loggerDefined__C");
#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerObj__C, ".const:xdc_runtime_Log_Module__loggerObj__C");
#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerFxn0__C, ".const:xdc_runtime_Log_Module__loggerFxn0__C");
#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerFxn1__C, ".const:xdc_runtime_Log_Module__loggerFxn1__C");
#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerFxn2__C, ".const:xdc_runtime_Log_Module__loggerFxn2__C");
#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerFxn4__C, ".const:xdc_runtime_Log_Module__loggerFxn4__C");
#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerFxn8__C, ".const:xdc_runtime_Log_Module__loggerFxn8__C");
#pragma DATA_SECTION(xdc_runtime_Log_Module__startupDoneFxn__C, ".const:xdc_runtime_Log_Module__startupDoneFxn__C");
#pragma DATA_SECTION(xdc_runtime_Log_Object__count__C, ".const:xdc_runtime_Log_Object__count__C");
#pragma DATA_SECTION(xdc_runtime_Log_Object__heap__C, ".const:xdc_runtime_Log_Object__heap__C");
#pragma DATA_SECTION(xdc_runtime_Log_Object__sizeof__C, ".const:xdc_runtime_Log_Object__sizeof__C");
#pragma DATA_SECTION(xdc_runtime_Log_Object__table__C, ".const:xdc_runtime_Log_Object__table__C");
#pragma DATA_SECTION(xdc_runtime_Log_L_construct__C, ".const:xdc_runtime_Log_L_construct__C");
#pragma DATA_SECTION(xdc_runtime_Log_L_create__C, ".const:xdc_runtime_Log_L_create__C");
#pragma DATA_SECTION(xdc_runtime_Log_L_destruct__C, ".const:xdc_runtime_Log_L_destruct__C");
#pragma DATA_SECTION(xdc_runtime_Log_L_delete__C, ".const:xdc_runtime_Log_L_delete__C");
#pragma DATA_SECTION(xdc_runtime_Log_L_error__C, ".const:xdc_runtime_Log_L_error__C");
#pragma DATA_SECTION(xdc_runtime_Log_L_warning__C, ".const:xdc_runtime_Log_L_warning__C");
#pragma DATA_SECTION(xdc_runtime_Log_L_info__C, ".const:xdc_runtime_Log_L_info__C");
#pragma DATA_SECTION(xdc_runtime_Log_L_start__C, ".const:xdc_runtime_Log_L_start__C");
#pragma DATA_SECTION(xdc_runtime_Log_L_stop__C, ".const:xdc_runtime_Log_L_stop__C");
#pragma DATA_SECTION(xdc_runtime_Log_L_startInstance__C, ".const:xdc_runtime_Log_L_startInstance__C");
#pragma DATA_SECTION(xdc_runtime_Log_L_stopInstance__C, ".const:xdc_runtime_Log_L_stopInstance__C");
#pragma DATA_SECTION(xdc_runtime_Main_Module__diagsEnabled__C, ".const:xdc_runtime_Main_Module__diagsEnabled__C");
#pragma DATA_SECTION(xdc_runtime_Main_Module__diagsIncluded__C, ".const:xdc_runtime_Main_Module__diagsIncluded__C");
#pragma DATA_SECTION(xdc_runtime_Main_Module__diagsMask__C, ".const:xdc_runtime_Main_Module__diagsMask__C");
#pragma DATA_SECTION(xdc_runtime_Main_Module__gateObj__C, ".const:xdc_runtime_Main_Module__gateObj__C");
#pragma DATA_SECTION(xdc_runtime_Main_Module__gatePrms__C, ".const:xdc_runtime_Main_Module__gatePrms__C");
#pragma DATA_SECTION(xdc_runtime_Main_Module__id__C, ".const:xdc_runtime_Main_Module__id__C");
#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerDefined__C, ".const:xdc_runtime_Main_Module__loggerDefined__C");
#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerObj__C, ".const:xdc_runtime_Main_Module__loggerObj__C");
#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerFxn0__C, ".const:xdc_runtime_Main_Module__loggerFxn0__C");
#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerFxn1__C, ".const:xdc_runtime_Main_Module__loggerFxn1__C");
#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerFxn2__C, ".const:xdc_runtime_Main_Module__loggerFxn2__C");
#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerFxn4__C, ".const:xdc_runtime_Main_Module__loggerFxn4__C");
#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerFxn8__C, ".const:xdc_runtime_Main_Module__loggerFxn8__C");
#pragma DATA_SECTION(xdc_runtime_Main_Module__startupDoneFxn__C, ".const:xdc_runtime_Main_Module__startupDoneFxn__C");
#pragma DATA_SECTION(xdc_runtime_Main_Object__count__C, ".const:xdc_runtime_Main_Object__count__C");
#pragma DATA_SECTION(xdc_runtime_Main_Object__heap__C, ".const:xdc_runtime_Main_Object__heap__C");
#pragma DATA_SECTION(xdc_runtime_Main_Object__sizeof__C, ".const:xdc_runtime_Main_Object__sizeof__C");
#pragma DATA_SECTION(xdc_runtime_Main_Object__table__C, ".const:xdc_runtime_Main_Object__table__C");
#pragma DATA_SECTION(xdc_runtime_Memory_Module__diagsEnabled__C, ".const:xdc_runtime_Memory_Module__diagsEnabled__C");
#pragma DATA_SECTION(xdc_runtime_Memory_Module__diagsIncluded__C, ".const:xdc_runtime_Memory_Module__diagsIncluded__C");
#pragma DATA_SECTION(xdc_runtime_Memory_Module__diagsMask__C, ".const:xdc_runtime_Memory_Module__diagsMask__C");
#pragma DATA_SECTION(xdc_runtime_Memory_Module__gateObj__C, ".const:xdc_runtime_Memory_Module__gateObj__C");
#pragma DATA_SECTION(xdc_runtime_Memory_Module__gatePrms__C, ".const:xdc_runtime_Memory_Module__gatePrms__C");
#pragma DATA_SECTION(xdc_runtime_Memory_Module__id__C, ".const:xdc_runtime_Memory_Module__id__C");
#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerDefined__C, ".const:xdc_runtime_Memory_Module__loggerDefined__C");
#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerObj__C, ".const:xdc_runtime_Memory_Module__loggerObj__C");
#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerFxn0__C, ".const:xdc_runtime_Memory_Module__loggerFxn0__C");
#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerFxn1__C, ".const:xdc_runtime_Memory_Module__loggerFxn1__C");
#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerFxn2__C, ".const:xdc_runtime_Memory_Module__loggerFxn2__C");
#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerFxn4__C, ".const:xdc_runtime_Memory_Module__loggerFxn4__C");
#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerFxn8__C, ".const:xdc_runtime_Memory_Module__loggerFxn8__C");
#pragma DATA_SECTION(xdc_runtime_Memory_Module__startupDoneFxn__C, ".const:xdc_runtime_Memory_Module__startupDoneFxn__C");
#pragma DATA_SECTION(xdc_runtime_Memory_Object__count__C, ".const:xdc_runtime_Memory_Object__count__C");
#pragma DATA_SECTION(xdc_runtime_Memory_Object__heap__C, ".const:xdc_runtime_Memory_Object__heap__C");
#pragma DATA_SECTION(xdc_runtime_Memory_Object__sizeof__C, ".const:xdc_runtime_Memory_Object__sizeof__C");
#pragma DATA_SECTION(xdc_runtime_Memory_Object__table__C, ".const:xdc_runtime_Memory_Object__table__C");
#pragma DATA_SECTION(xdc_runtime_Memory_defaultHeapInstance__C, ".const:xdc_runtime_Memory_defaultHeapInstance__C");
#pragma DATA_SECTION(xdc_runtime_Registry_Module__diagsEnabled__C, ".const:xdc_runtime_Registry_Module__diagsEnabled__C");
#pragma DATA_SECTION(xdc_runtime_Registry_Module__diagsIncluded__C, ".const:xdc_runtime_Registry_Module__diagsIncluded__C");
#pragma DATA_SECTION(xdc_runtime_Registry_Module__diagsMask__C, ".const:xdc_runtime_Registry_Module__diagsMask__C");
#pragma DATA_SECTION(xdc_runtime_Registry_Module__gateObj__C, ".const:xdc_runtime_Registry_Module__gateObj__C");
#pragma DATA_SECTION(xdc_runtime_Registry_Module__gatePrms__C, ".const:xdc_runtime_Registry_Module__gatePrms__C");
#pragma DATA_SECTION(xdc_runtime_Registry_Module__id__C, ".const:xdc_runtime_Registry_Module__id__C");
#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerDefined__C, ".const:xdc_runtime_Registry_Module__loggerDefined__C");
#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerObj__C, ".const:xdc_runtime_Registry_Module__loggerObj__C");
#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerFxn0__C, ".const:xdc_runtime_Registry_Module__loggerFxn0__C");
#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerFxn1__C, ".const:xdc_runtime_Registry_Module__loggerFxn1__C");
#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerFxn2__C, ".const:xdc_runtime_Registry_Module__loggerFxn2__C");
#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerFxn4__C, ".const:xdc_runtime_Registry_Module__loggerFxn4__C");
#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerFxn8__C, ".const:xdc_runtime_Registry_Module__loggerFxn8__C");
#pragma DATA_SECTION(xdc_runtime_Registry_Module__startupDoneFxn__C, ".const:xdc_runtime_Registry_Module__startupDoneFxn__C");
#pragma DATA_SECTION(xdc_runtime_Registry_Object__count__C, ".const:xdc_runtime_Registry_Object__count__C");
#pragma DATA_SECTION(xdc_runtime_Registry_Object__heap__C, ".const:xdc_runtime_Registry_Object__heap__C");
#pragma DATA_SECTION(xdc_runtime_Registry_Object__sizeof__C, ".const:xdc_runtime_Registry_Object__sizeof__C");
#pragma DATA_SECTION(xdc_runtime_Registry_Object__table__C, ".const:xdc_runtime_Registry_Object__table__C");
#pragma DATA_SECTION(xdc_runtime_Startup_firstFxns__A, ".const:xdc_runtime_Startup_firstFxns__A");
#pragma DATA_SECTION(xdc_runtime_Startup_lastFxns__A, ".const:xdc_runtime_Startup_lastFxns__A");
#pragma DATA_SECTION(xdc_runtime_Startup_sfxnTab__A, ".const:xdc_runtime_Startup_sfxnTab__A");
#pragma DATA_SECTION(xdc_runtime_Startup_sfxnRts__A, ".const:xdc_runtime_Startup_sfxnRts__A");
#pragma DATA_SECTION(xdc_runtime_Startup_Module__diagsEnabled__C, ".const:xdc_runtime_Startup_Module__diagsEnabled__C");
#pragma DATA_SECTION(xdc_runtime_Startup_Module__diagsIncluded__C, ".const:xdc_runtime_Startup_Module__diagsIncluded__C");
#pragma DATA_SECTION(xdc_runtime_Startup_Module__diagsMask__C, ".const:xdc_runtime_Startup_Module__diagsMask__C");
#pragma DATA_SECTION(xdc_runtime_Startup_Module__gateObj__C, ".const:xdc_runtime_Startup_Module__gateObj__C");
#pragma DATA_SECTION(xdc_runtime_Startup_Module__gatePrms__C, ".const:xdc_runtime_Startup_Module__gatePrms__C");
#pragma DATA_SECTION(xdc_runtime_Startup_Module__id__C, ".const:xdc_runtime_Startup_Module__id__C");
#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerDefined__C, ".const:xdc_runtime_Startup_Module__loggerDefined__C");
#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerObj__C, ".const:xdc_runtime_Startup_Module__loggerObj__C");
#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerFxn0__C, ".const:xdc_runtime_Startup_Module__loggerFxn0__C");
#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerFxn1__C, ".const:xdc_runtime_Startup_Module__loggerFxn1__C");
#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerFxn2__C, ".const:xdc_runtime_Startup_Module__loggerFxn2__C");
#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerFxn4__C, ".const:xdc_runtime_Startup_Module__loggerFxn4__C");
#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerFxn8__C, ".const:xdc_runtime_Startup_Module__loggerFxn8__C");
#pragma DATA_SECTION(xdc_runtime_Startup_Module__startupDoneFxn__C, ".const:xdc_runtime_Startup_Module__startupDoneFxn__C");
#pragma DATA_SECTION(xdc_runtime_Startup_Object__count__C, ".const:xdc_runtime_Startup_Object__count__C");
#pragma DATA_SECTION(xdc_runtime_Startup_Object__heap__C, ".const:xdc_runtime_Startup_Object__heap__C");
#pragma DATA_SECTION(xdc_runtime_Startup_Object__sizeof__C, ".const:xdc_runtime_Startup_Object__sizeof__C");
#pragma DATA_SECTION(xdc_runtime_Startup_Object__table__C, ".const:xdc_runtime_Startup_Object__table__C");
#pragma DATA_SECTION(xdc_runtime_Startup_maxPasses__C, ".const:xdc_runtime_Startup_maxPasses__C");
#pragma DATA_SECTION(xdc_runtime_Startup_firstFxns__C, ".const:xdc_runtime_Startup_firstFxns__C");
#pragma DATA_SECTION(xdc_runtime_Startup_lastFxns__C, ".const:xdc_runtime_Startup_lastFxns__C");
#pragma DATA_SECTION(xdc_runtime_Startup_startModsFxn__C, ".const:xdc_runtime_Startup_startModsFxn__C");
#pragma DATA_SECTION(xdc_runtime_Startup_execImpl__C, ".const:xdc_runtime_Startup_execImpl__C");
#pragma DATA_SECTION(xdc_runtime_Startup_sfxnTab__C, ".const:xdc_runtime_Startup_sfxnTab__C");
#pragma DATA_SECTION(xdc_runtime_Startup_sfxnRts__C, ".const:xdc_runtime_Startup_sfxnRts__C");
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__diagsEnabled__C, ".const:xdc_runtime_SysMin_Module__diagsEnabled__C");
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__diagsIncluded__C, ".const:xdc_runtime_SysMin_Module__diagsIncluded__C");
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__diagsMask__C, ".const:xdc_runtime_SysMin_Module__diagsMask__C");
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__gateObj__C, ".const:xdc_runtime_SysMin_Module__gateObj__C");
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__gatePrms__C, ".const:xdc_runtime_SysMin_Module__gatePrms__C");
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__id__C, ".const:xdc_runtime_SysMin_Module__id__C");
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__loggerDefined__C, ".const:xdc_runtime_SysMin_Module__loggerDefined__C");
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__loggerObj__C, ".const:xdc_runtime_SysMin_Module__loggerObj__C");
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__loggerFxn0__C, ".const:xdc_runtime_SysMin_Module__loggerFxn0__C");
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__loggerFxn1__C, ".const:xdc_runtime_SysMin_Module__loggerFxn1__C");
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__loggerFxn2__C, ".const:xdc_runtime_SysMin_Module__loggerFxn2__C");
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__loggerFxn4__C, ".const:xdc_runtime_SysMin_Module__loggerFxn4__C");
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__loggerFxn8__C, ".const:xdc_runtime_SysMin_Module__loggerFxn8__C");
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__startupDoneFxn__C, ".const:xdc_runtime_SysMin_Module__startupDoneFxn__C");
#pragma DATA_SECTION(xdc_runtime_SysMin_Object__count__C, ".const:xdc_runtime_SysMin_Object__count__C");
#pragma DATA_SECTION(xdc_runtime_SysMin_Object__heap__C, ".const:xdc_runtime_SysMin_Object__heap__C");
#pragma DATA_SECTION(xdc_runtime_SysMin_Object__sizeof__C, ".const:xdc_runtime_SysMin_Object__sizeof__C");
#pragma DATA_SECTION(xdc_runtime_SysMin_Object__table__C, ".const:xdc_runtime_SysMin_Object__table__C");
#pragma DATA_SECTION(xdc_runtime_SysMin_bufSize__C, ".const:xdc_runtime_SysMin_bufSize__C");
#pragma DATA_SECTION(xdc_runtime_SysMin_flushAtExit__C, ".const:xdc_runtime_SysMin_flushAtExit__C");
#pragma DATA_SECTION(xdc_runtime_SysMin_outputFxn__C, ".const:xdc_runtime_SysMin_outputFxn__C");
#pragma DATA_SECTION(xdc_runtime_SysMin_outputFunc__C, ".const:xdc_runtime_SysMin_outputFunc__C");
#pragma DATA_SECTION(xdc_runtime_System_Module__diagsEnabled__C, ".const:xdc_runtime_System_Module__diagsEnabled__C");
#pragma DATA_SECTION(xdc_runtime_System_Module__diagsIncluded__C, ".const:xdc_runtime_System_Module__diagsIncluded__C");
#pragma DATA_SECTION(xdc_runtime_System_Module__diagsMask__C, ".const:xdc_runtime_System_Module__diagsMask__C");
#pragma DATA_SECTION(xdc_runtime_System_Module__gateObj__C, ".const:xdc_runtime_System_Module__gateObj__C");
#pragma DATA_SECTION(xdc_runtime_System_Module__gatePrms__C, ".const:xdc_runtime_System_Module__gatePrms__C");
#pragma DATA_SECTION(xdc_runtime_System_Module__id__C, ".const:xdc_runtime_System_Module__id__C");
#pragma DATA_SECTION(xdc_runtime_System_Module__loggerDefined__C, ".const:xdc_runtime_System_Module__loggerDefined__C");
#pragma DATA_SECTION(xdc_runtime_System_Module__loggerObj__C, ".const:xdc_runtime_System_Module__loggerObj__C");
#pragma DATA_SECTION(xdc_runtime_System_Module__loggerFxn0__C, ".const:xdc_runtime_System_Module__loggerFxn0__C");
#pragma DATA_SECTION(xdc_runtime_System_Module__loggerFxn1__C, ".const:xdc_runtime_System_Module__loggerFxn1__C");
#pragma DATA_SECTION(xdc_runtime_System_Module__loggerFxn2__C, ".const:xdc_runtime_System_Module__loggerFxn2__C");
#pragma DATA_SECTION(xdc_runtime_System_Module__loggerFxn4__C, ".const:xdc_runtime_System_Module__loggerFxn4__C");
#pragma DATA_SECTION(xdc_runtime_System_Module__loggerFxn8__C, ".const:xdc_runtime_System_Module__loggerFxn8__C");
#pragma DATA_SECTION(xdc_runtime_System_Module__startupDoneFxn__C, ".const:xdc_runtime_System_Module__startupDoneFxn__C");
#pragma DATA_SECTION(xdc_runtime_System_Object__count__C, ".const:xdc_runtime_System_Object__count__C");
#pragma DATA_SECTION(xdc_runtime_System_Object__heap__C, ".const:xdc_runtime_System_Object__heap__C");
#pragma DATA_SECTION(xdc_runtime_System_Object__sizeof__C, ".const:xdc_runtime_System_Object__sizeof__C");
#pragma DATA_SECTION(xdc_runtime_System_Object__table__C, ".const:xdc_runtime_System_Object__table__C");
#pragma DATA_SECTION(xdc_runtime_System_A_cannotFitIntoArg__C, ".const:xdc_runtime_System_A_cannotFitIntoArg__C");
#pragma DATA_SECTION(xdc_runtime_System_maxAtexitHandlers__C, ".const:xdc_runtime_System_maxAtexitHandlers__C");
#pragma DATA_SECTION(xdc_runtime_System_extendFxn__C, ".const:xdc_runtime_System_extendFxn__C");
#pragma DATA_SECTION(xdc_runtime_Text_charTab__A, ".const:xdc_runtime_Text_charTab__A");
#pragma DATA_SECTION(xdc_runtime_Text_nodeTab__A, ".const:xdc_runtime_Text_nodeTab__A");
#pragma DATA_SECTION(xdc_runtime_Text_Module__diagsEnabled__C, ".const:xdc_runtime_Text_Module__diagsEnabled__C");
#pragma DATA_SECTION(xdc_runtime_Text_Module__diagsIncluded__C, ".const:xdc_runtime_Text_Module__diagsIncluded__C");
#pragma DATA_SECTION(xdc_runtime_Text_Module__diagsMask__C, ".const:xdc_runtime_Text_Module__diagsMask__C");
#pragma DATA_SECTION(xdc_runtime_Text_Module__gateObj__C, ".const:xdc_runtime_Text_Module__gateObj__C");
#pragma DATA_SECTION(xdc_runtime_Text_Module__gatePrms__C, ".const:xdc_runtime_Text_Module__gatePrms__C");
#pragma DATA_SECTION(xdc_runtime_Text_Module__id__C, ".const:xdc_runtime_Text_Module__id__C");
#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerDefined__C, ".const:xdc_runtime_Text_Module__loggerDefined__C");
#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerObj__C, ".const:xdc_runtime_Text_Module__loggerObj__C");
#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerFxn0__C, ".const:xdc_runtime_Text_Module__loggerFxn0__C");
#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerFxn1__C, ".const:xdc_runtime_Text_Module__loggerFxn1__C");
#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerFxn2__C, ".const:xdc_runtime_Text_Module__loggerFxn2__C");
#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerFxn4__C, ".const:xdc_runtime_Text_Module__loggerFxn4__C");
#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerFxn8__C, ".const:xdc_runtime_Text_Module__loggerFxn8__C");
#pragma DATA_SECTION(xdc_runtime_Text_Module__startupDoneFxn__C, ".const:xdc_runtime_Text_Module__startupDoneFxn__C");
#pragma DATA_SECTION(xdc_runtime_Text_Object__count__C, ".const:xdc_runtime_Text_Object__count__C");
#pragma DATA_SECTION(xdc_runtime_Text_Object__heap__C, ".const:xdc_runtime_Text_Object__heap__C");
#pragma DATA_SECTION(xdc_runtime_Text_Object__sizeof__C, ".const:xdc_runtime_Text_Object__sizeof__C");
#pragma DATA_SECTION(xdc_runtime_Text_Object__table__C, ".const:xdc_runtime_Text_Object__table__C");
#pragma DATA_SECTION(xdc_runtime_Text_nameUnknown__C, ".const:xdc_runtime_Text_nameUnknown__C");
#pragma DATA_SECTION(xdc_runtime_Text_nameEmpty__C, ".const:xdc_runtime_Text_nameEmpty__C");
#pragma DATA_SECTION(xdc_runtime_Text_nameStatic__C, ".const:xdc_runtime_Text_nameStatic__C");
#pragma DATA_SECTION(xdc_runtime_Text_isLoaded__C, ".const:xdc_runtime_Text_isLoaded__C");
#pragma DATA_SECTION(xdc_runtime_Text_charTab__C, ".const:xdc_runtime_Text_charTab__C");
#pragma DATA_SECTION(xdc_runtime_Text_nodeTab__C, ".const:xdc_runtime_Text_nodeTab__C");
#pragma DATA_SECTION(xdc_runtime_Text_charCnt__C, ".const:xdc_runtime_Text_charCnt__C");
#pragma DATA_SECTION(xdc_runtime_Text_nodeCnt__C, ".const:xdc_runtime_Text_nodeCnt__C");
#pragma DATA_SECTION(xdc_runtime_Text_unnamedModsLastId__C, ".const:xdc_runtime_Text_unnamedModsLastId__C");
#pragma DATA_SECTION(xdc_runtime_Text_registryModsLastId__C, ".const:xdc_runtime_Text_registryModsLastId__C");
#pragma DATA_SECTION(xdc_runtime_Text_visitRopeFxn__C, ".const:xdc_runtime_Text_visitRopeFxn__C");
#pragma DATA_SECTION(xdc_runtime_Text_visitRopeFxn2__C, ".const:xdc_runtime_Text_visitRopeFxn2__C");
#pragma DATA_SECTION(xdc_runtime_knl_SemThread_Object__DESC__C, ".const:xdc_runtime_knl_SemThread_Object__DESC__C");
#pragma DATA_SECTION(xdc_runtime_knl_SemThread_Object__PARAMS__C, ".const:xdc_runtime_knl_SemThread_Object__PARAMS__C");
#pragma DATA_SECTION(xdc_runtime_knl_SemThread_Module__diagsEnabled__C, ".const:xdc_runtime_knl_SemThread_Module__diagsEnabled__C");
#pragma DATA_SECTION(xdc_runtime_knl_SemThread_Module__diagsIncluded__C, ".const:xdc_runtime_knl_SemThread_Module__diagsIncluded__C");
#pragma DATA_SECTION(xdc_runtime_knl_SemThread_Module__diagsMask__C, ".const:xdc_runtime_knl_SemThread_Module__diagsMask__C");
#pragma DATA_SECTION(xdc_runtime_knl_SemThread_Module__gateObj__C, ".const:xdc_runtime_knl_SemThread_Module__gateObj__C");
#pragma DATA_SECTION(xdc_runtime_knl_SemThread_Module__gatePrms__C, ".const:xdc_runtime_knl_SemThread_Module__gatePrms__C");
#pragma DATA_SECTION(xdc_runtime_knl_SemThread_Module__id__C, ".const:xdc_runtime_knl_SemThread_Module__id__C");
#pragma DATA_SECTION(xdc_runtime_knl_SemThread_Module__loggerDefined__C, ".const:xdc_runtime_knl_SemThread_Module__loggerDefined__C");
#pragma DATA_SECTION(xdc_runtime_knl_SemThread_Module__loggerObj__C, ".const:xdc_runtime_knl_SemThread_Module__loggerObj__C");
#pragma DATA_SECTION(xdc_runtime_knl_SemThread_Module__loggerFxn0__C, ".const:xdc_runtime_knl_SemThread_Module__loggerFxn0__C");
#pragma DATA_SECTION(xdc_runtime_knl_SemThread_Module__loggerFxn1__C, ".const:xdc_runtime_knl_SemThread_Module__loggerFxn1__C");
#pragma DATA_SECTION(xdc_runtime_knl_SemThread_Module__loggerFxn2__C, ".const:xdc_runtime_knl_SemThread_Module__loggerFxn2__C");
#pragma DATA_SECTION(xdc_runtime_knl_SemThread_Module__loggerFxn4__C, ".const:xdc_runtime_knl_SemThread_Module__loggerFxn4__C");
#pragma DATA_SECTION(xdc_runtime_knl_SemThread_Module__loggerFxn8__C, ".const:xdc_runtime_knl_SemThread_Module__loggerFxn8__C");
#pragma DATA_SECTION(xdc_runtime_knl_SemThread_Module__startupDoneFxn__C, ".const:xdc_runtime_knl_SemThread_Module__startupDoneFxn__C");
#pragma DATA_SECTION(xdc_runtime_knl_SemThread_Object__count__C, ".const:xdc_runtime_knl_SemThread_Object__count__C");
#pragma DATA_SECTION(xdc_runtime_knl_SemThread_Object__heap__C, ".const:xdc_runtime_knl_SemThread_Object__heap__C");
#pragma DATA_SECTION(xdc_runtime_knl_SemThread_Object__sizeof__C, ".const:xdc_runtime_knl_SemThread_Object__sizeof__C");
#pragma DATA_SECTION(xdc_runtime_knl_SemThread_Object__table__C, ".const:xdc_runtime_knl_SemThread_Object__table__C");
#pragma DATA_SECTION(xdc_runtime_knl_Sync_Module__diagsEnabled__C, ".const:xdc_runtime_knl_Sync_Module__diagsEnabled__C");
#pragma DATA_SECTION(xdc_runtime_knl_Sync_Module__diagsIncluded__C, ".const:xdc_runtime_knl_Sync_Module__diagsIncluded__C");
#pragma DATA_SECTION(xdc_runtime_knl_Sync_Module__diagsMask__C, ".const:xdc_runtime_knl_Sync_Module__diagsMask__C");
#pragma DATA_SECTION(xdc_runtime_knl_Sync_Module__gateObj__C, ".const:xdc_runtime_knl_Sync_Module__gateObj__C");
#pragma DATA_SECTION(xdc_runtime_knl_Sync_Module__gatePrms__C, ".const:xdc_runtime_knl_Sync_Module__gatePrms__C");
#pragma DATA_SECTION(xdc_runtime_knl_Sync_Module__id__C, ".const:xdc_runtime_knl_Sync_Module__id__C");
#pragma DATA_SECTION(xdc_runtime_knl_Sync_Module__loggerDefined__C, ".const:xdc_runtime_knl_Sync_Module__loggerDefined__C");
#pragma DATA_SECTION(xdc_runtime_knl_Sync_Module__loggerObj__C, ".const:xdc_runtime_knl_Sync_Module__loggerObj__C");
#pragma DATA_SECTION(xdc_runtime_knl_Sync_Module__loggerFxn0__C, ".const:xdc_runtime_knl_Sync_Module__loggerFxn0__C");
#pragma DATA_SECTION(xdc_runtime_knl_Sync_Module__loggerFxn1__C, ".const:xdc_runtime_knl_Sync_Module__loggerFxn1__C");
#pragma DATA_SECTION(xdc_runtime_knl_Sync_Module__loggerFxn2__C, ".const:xdc_runtime_knl_Sync_Module__loggerFxn2__C");
#pragma DATA_SECTION(xdc_runtime_knl_Sync_Module__loggerFxn4__C, ".const:xdc_runtime_knl_Sync_Module__loggerFxn4__C");
#pragma DATA_SECTION(xdc_runtime_knl_Sync_Module__loggerFxn8__C, ".const:xdc_runtime_knl_Sync_Module__loggerFxn8__C");
#pragma DATA_SECTION(xdc_runtime_knl_Sync_Module__startupDoneFxn__C, ".const:xdc_runtime_knl_Sync_Module__startupDoneFxn__C");
#pragma DATA_SECTION(xdc_runtime_knl_Sync_Object__count__C, ".const:xdc_runtime_knl_Sync_Object__count__C");
#pragma DATA_SECTION(xdc_runtime_knl_Sync_Object__heap__C, ".const:xdc_runtime_knl_Sync_Object__heap__C");
#pragma DATA_SECTION(xdc_runtime_knl_Sync_Object__sizeof__C, ".const:xdc_runtime_knl_Sync_Object__sizeof__C");
#pragma DATA_SECTION(xdc_runtime_knl_Sync_Object__table__C, ".const:xdc_runtime_knl_Sync_Object__table__C");
#pragma DATA_SECTION(xdc_runtime_knl_SyncNull_Object__DESC__C, ".const:xdc_runtime_knl_SyncNull_Object__DESC__C");
#pragma DATA_SECTION(xdc_runtime_knl_SyncNull_Object__PARAMS__C, ".const:xdc_runtime_knl_SyncNull_Object__PARAMS__C");
#pragma DATA_SECTION(xdc_runtime_knl_SyncNull_Module__diagsEnabled__C, ".const:xdc_runtime_knl_SyncNull_Module__diagsEnabled__C");
#pragma DATA_SECTION(xdc_runtime_knl_SyncNull_Module__diagsIncluded__C, ".const:xdc_runtime_knl_SyncNull_Module__diagsIncluded__C");
#pragma DATA_SECTION(xdc_runtime_knl_SyncNull_Module__diagsMask__C, ".const:xdc_runtime_knl_SyncNull_Module__diagsMask__C");
#pragma DATA_SECTION(xdc_runtime_knl_SyncNull_Module__gateObj__C, ".const:xdc_runtime_knl_SyncNull_Module__gateObj__C");
#pragma DATA_SECTION(xdc_runtime_knl_SyncNull_Module__gatePrms__C, ".const:xdc_runtime_knl_SyncNull_Module__gatePrms__C");
#pragma DATA_SECTION(xdc_runtime_knl_SyncNull_Module__id__C, ".const:xdc_runtime_knl_SyncNull_Module__id__C");
#pragma DATA_SECTION(xdc_runtime_knl_SyncNull_Module__loggerDefined__C, ".const:xdc_runtime_knl_SyncNull_Module__loggerDefined__C");
#pragma DATA_SECTION(xdc_runtime_knl_SyncNull_Module__loggerObj__C, ".const:xdc_runtime_knl_SyncNull_Module__loggerObj__C");
#pragma DATA_SECTION(xdc_runtime_knl_SyncNull_Module__loggerFxn0__C, ".const:xdc_runtime_knl_SyncNull_Module__loggerFxn0__C");
#pragma DATA_SECTION(xdc_runtime_knl_SyncNull_Module__loggerFxn1__C, ".const:xdc_runtime_knl_SyncNull_Module__loggerFxn1__C");
#pragma DATA_SECTION(xdc_runtime_knl_SyncNull_Module__loggerFxn2__C, ".const:xdc_runtime_knl_SyncNull_Module__loggerFxn2__C");
#pragma DATA_SECTION(xdc_runtime_knl_SyncNull_Module__loggerFxn4__C, ".const:xdc_runtime_knl_SyncNull_Module__loggerFxn4__C");
#pragma DATA_SECTION(xdc_runtime_knl_SyncNull_Module__loggerFxn8__C, ".const:xdc_runtime_knl_SyncNull_Module__loggerFxn8__C");
#pragma DATA_SECTION(xdc_runtime_knl_SyncNull_Module__startupDoneFxn__C, ".const:xdc_runtime_knl_SyncNull_Module__startupDoneFxn__C");
#pragma DATA_SECTION(xdc_runtime_knl_SyncNull_Object__count__C, ".const:xdc_runtime_knl_SyncNull_Object__count__C");
#pragma DATA_SECTION(xdc_runtime_knl_SyncNull_Object__heap__C, ".const:xdc_runtime_knl_SyncNull_Object__heap__C");
#pragma DATA_SECTION(xdc_runtime_knl_SyncNull_Object__sizeof__C, ".const:xdc_runtime_knl_SyncNull_Object__sizeof__C");
#pragma DATA_SECTION(xdc_runtime_knl_SyncNull_Object__table__C, ".const:xdc_runtime_knl_SyncNull_Object__table__C");
#pragma DATA_SECTION(xdc_runtime_knl_SyncSemThread_Object__DESC__C, ".const:xdc_runtime_knl_SyncSemThread_Object__DESC__C");
#pragma DATA_SECTION(xdc_runtime_knl_SyncSemThread_Object__PARAMS__C, ".const:xdc_runtime_knl_SyncSemThread_Object__PARAMS__C");
#pragma DATA_SECTION(xdc_runtime_knl_SyncSemThread_Module__diagsEnabled__C, ".const:xdc_runtime_knl_SyncSemThread_Module__diagsEnabled__C");
#pragma DATA_SECTION(xdc_runtime_knl_SyncSemThread_Module__diagsIncluded__C, ".const:xdc_runtime_knl_SyncSemThread_Module__diagsIncluded__C");
#pragma DATA_SECTION(xdc_runtime_knl_SyncSemThread_Module__diagsMask__C, ".const:xdc_runtime_knl_SyncSemThread_Module__diagsMask__C");
#pragma DATA_SECTION(xdc_runtime_knl_SyncSemThread_Module__gateObj__C, ".const:xdc_runtime_knl_SyncSemThread_Module__gateObj__C");
#pragma DATA_SECTION(xdc_runtime_knl_SyncSemThread_Module__gatePrms__C, ".const:xdc_runtime_knl_SyncSemThread_Module__gatePrms__C");
#pragma DATA_SECTION(xdc_runtime_knl_SyncSemThread_Module__id__C, ".const:xdc_runtime_knl_SyncSemThread_Module__id__C");
#pragma DATA_SECTION(xdc_runtime_knl_SyncSemThread_Module__loggerDefined__C, ".const:xdc_runtime_knl_SyncSemThread_Module__loggerDefined__C");
#pragma DATA_SECTION(xdc_runtime_knl_SyncSemThread_Module__loggerObj__C, ".const:xdc_runtime_knl_SyncSemThread_Module__loggerObj__C");
#pragma DATA_SECTION(xdc_runtime_knl_SyncSemThread_Module__loggerFxn0__C, ".const:xdc_runtime_knl_SyncSemThread_Module__loggerFxn0__C");
#pragma DATA_SECTION(xdc_runtime_knl_SyncSemThread_Module__loggerFxn1__C, ".const:xdc_runtime_knl_SyncSemThread_Module__loggerFxn1__C");
#pragma DATA_SECTION(xdc_runtime_knl_SyncSemThread_Module__loggerFxn2__C, ".const:xdc_runtime_knl_SyncSemThread_Module__loggerFxn2__C");
#pragma DATA_SECTION(xdc_runtime_knl_SyncSemThread_Module__loggerFxn4__C, ".const:xdc_runtime_knl_SyncSemThread_Module__loggerFxn4__C");
#pragma DATA_SECTION(xdc_runtime_knl_SyncSemThread_Module__loggerFxn8__C, ".const:xdc_runtime_knl_SyncSemThread_Module__loggerFxn8__C");
#pragma DATA_SECTION(xdc_runtime_knl_SyncSemThread_Module__startupDoneFxn__C, ".const:xdc_runtime_knl_SyncSemThread_Module__startupDoneFxn__C");
#pragma DATA_SECTION(xdc_runtime_knl_SyncSemThread_Object__count__C, ".const:xdc_runtime_knl_SyncSemThread_Object__count__C");
#pragma DATA_SECTION(xdc_runtime_knl_SyncSemThread_Object__heap__C, ".const:xdc_runtime_knl_SyncSemThread_Object__heap__C");
#pragma DATA_SECTION(xdc_runtime_knl_SyncSemThread_Object__sizeof__C, ".const:xdc_runtime_knl_SyncSemThread_Object__sizeof__C");
#pragma DATA_SECTION(xdc_runtime_knl_SyncSemThread_Object__table__C, ".const:xdc_runtime_knl_SyncSemThread_Object__table__C");
