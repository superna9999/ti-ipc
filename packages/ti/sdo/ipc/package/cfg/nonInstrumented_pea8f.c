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

#include <ti/sdo/utils/NameServerRemoteNull.h>
#include <ti/sysbios/BIOS.h>
#include <ti/sysbios/family/arm/IntrinsicsSupport.h>
#include <ti/sysbios/family/arm/TaskSupport.h>
#include <ti/sysbios/family/arm/a8/Cache.h>
#include <ti/sysbios/family/arm/a8/Mmu.h>
#include <ti/sysbios/family/arm/a8/TimestampProvider.h>
#include <ti/sysbios/family/arm/a8/intcps/Hwi.h>
#include <ti/sysbios/family/arm/a8/ti81xx/TimerSupport.h>
#include <ti/sysbios/family/arm/exc/Exception.h>
#include <ti/sysbios/gates/GateHwi.h>
#include <ti/sysbios/gates/GateMutex.h>
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
#include <ti/sysbios/timers/dmtimer/Timer.h>
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
#include <xdc/runtime/Timestamp.h>


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
 * ======== ti.sysbios.family.arm.IntrinsicsSupport INTERNALS ========
 */


/*
 * ======== ti.sysbios.family.arm.TaskSupport INTERNALS ========
 */


/*
 * ======== ti.sysbios.family.arm.a8.Cache INTERNALS ========
 */


/*
 * ======== ti.sysbios.family.arm.a8.Mmu INTERNALS ========
 */


/*
 * ======== ti.sysbios.family.arm.a8.TimestampProvider INTERNALS ========
 */


/*
 * ======== ti.sysbios.family.arm.a8.intcps.Hwi INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_family_arm_a8_intcps_Hwi_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_family_arm_a8_intcps_Hwi_Module__;

/* Module__root__V */
extern ti_sysbios_family_arm_a8_intcps_Hwi_Module__ ti_sysbios_family_arm_a8_intcps_Hwi_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_family_arm_a8_intcps_Hwi_Object__ {
    const ti_sysbios_family_arm_a8_intcps_Hwi_Fxns__* __fxns;
    ti_sysbios_family_arm_a8_intcps_Hwi_Type type;
    xdc_UInt priority;
    xdc_UArg arg;
    ti_sysbios_family_arm_a8_intcps_Hwi_FuncPtr fxn;
    ti_sysbios_family_arm_a8_intcps_Hwi_Irp irp;
    __TA_ti_sysbios_family_arm_a8_intcps_Hwi_Instance_State__hookEnv hookEnv;
} ti_sysbios_family_arm_a8_intcps_Hwi_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_family_arm_a8_intcps_Hwi_Object__ obj;
} ti_sysbios_family_arm_a8_intcps_Hwi_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_family_arm_a8_intcps_Hwi___VERS
    #define ti_sysbios_family_arm_a8_intcps_Hwi___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_family_arm_a8_intcps_Hwi___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.family.arm.a8.ti81xx.TimerSupport INTERNALS ========
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

/* <-- ti_sysbios_family_arm_a8_intcps_Hwi_Object */

/* Object */
typedef ti_sysbios_family_arm_a8_intcps_Hwi_Object__ ti_sysbios_hal_Hwi_HwiProxy_Object__;

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
typedef struct ti_sysbios_timers_dmtimer_Timer_Object__ {
    const ti_sysbios_timers_dmtimer_Timer_Fxns__* __fxns;
    xdc_Bool staticInst;
    xdc_Int id;
    xdc_UInt tiocpCfg;
    xdc_UInt tmar;
    xdc_UInt tier;
    xdc_UInt twer;
    xdc_UInt tclr;
    xdc_UInt tsicr;
    ti_sysbios_interfaces_ITimer_RunMode runMode;
    ti_sysbios_interfaces_ITimer_StartMode startMode;
    xdc_UInt period;
    ti_sysbios_interfaces_ITimer_PeriodType periodType;
    xdc_UInt intNum;
    xdc_UArg arg;
    ti_sysbios_hal_Hwi_FuncPtr tickFxn;
    xdc_runtime_Types_FreqHz extFreq;
    ti_sysbios_hal_Hwi_Handle hwi;
    xdc_UInt prevThreshold;
    xdc_UInt rollovers;
} ti_sysbios_timers_dmtimer_Timer_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_timers_dmtimer_Timer_Object__ obj;
} ti_sysbios_timers_dmtimer_Timer_Object2__;

/* Object */
typedef ti_sysbios_timers_dmtimer_Timer_Object__ ti_sysbios_hal_Timer_TimerProxy_Object__;

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
 * ======== ti.sysbios.timers.dmtimer.Timer INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_timers_dmtimer_Timer_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_timers_dmtimer_Timer_Module__;

/* Module__root__V */
extern ti_sysbios_timers_dmtimer_Timer_Module__ ti_sysbios_timers_dmtimer_Timer_Module__root__V;

/* <-- ti_sysbios_timers_dmtimer_Timer_Object */

/* __ParamsPtr */
#ifdef ti_sysbios_timers_dmtimer_Timer___VERS
    #define ti_sysbios_timers_dmtimer_Timer___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_timers_dmtimer_Timer___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.timers.dmtimer.Timer_TimerSupportProxy INTERNALS ========
 */


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
 * ======== xdc.runtime.Timestamp INTERNALS ========
 */


/*
 * ======== xdc.runtime.Timestamp_SupportProxy INTERNALS ========
 */


/*
 * ======== ti.sysbios.gates.GateHwi INHERITS ========
 */

__FAR__ const xdc_runtime_Types_Base xdc_runtime_IModule_Interface__BASE__C = {0};
__FAR__ const xdc_runtime_Types_Base xdc_runtime_IGateProvider_Interface__BASE__C = {(void*)&xdc_runtime_IModule_Interface__BASE__C};


/*
 * ======== ti.sysbios.gates.GateMutex INHERITS ========
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
 * ======== xdc.runtime.Timestamp INHERITS ========
 */

__FAR__ const xdc_runtime_Types_Base xdc_runtime_ITimestampClient_Interface__BASE__C = {(void*)&xdc_runtime_IModule_Interface__BASE__C};


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
        0x8027, /* __mid */
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
        0x8028, /* __mid */
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
        0x8037, /* __mid */
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
 * ======== xdc.runtime.Timestamp VTABLE ========
 */

/* Module__FXNS__C */
const xdc_runtime_Timestamp_Fxns__ xdc_runtime_Timestamp_Module__FXNS__C = {
    (void*)&xdc_runtime_ITimestampClient_Interface__BASE__C, /* base__ */
    &xdc_runtime_Timestamp_Module__FXNS__C.__sfxns, /* __sysp */
    xdc_runtime_Timestamp_get32__E,
    xdc_runtime_Timestamp_get64__E,
    xdc_runtime_Timestamp_getFreq__E,
    {
        NULL, /* __create */
        NULL, /* __delete */
        NULL, /* __label */
        0x8010, /* __mid */
    } /* __sfxns */
};


/*
 * ======== ti.sdo.utils.NameServerRemoteNull DECLARATIONS ========
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
 * ======== ti.sysbios.family.arm.IntrinsicsSupport DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.family.arm.TaskSupport DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.family.arm.a8.Cache DECLARATIONS ========
 */

/* Module_State__ */
typedef struct ti_sysbios_family_arm_a8_Cache_Module_State__ {
    xdc_Bits32 l1dInfo;
    xdc_Bits32 l1pInfo;
    xdc_Bits32 l2Info;
    xdc_SizeT l2WaySize;
    xdc_Bits32 lockRegister;
    __TA_ti_sysbios_family_arm_a8_Cache_Module_State__baseAddresses baseAddresses;
} ti_sysbios_family_arm_a8_Cache_Module_State__;

/* Module__state__V */
ti_sysbios_family_arm_a8_Cache_Module_State__ ti_sysbios_family_arm_a8_Cache_Module__state__V;


/*
 * ======== ti.sysbios.family.arm.a8.Mmu DECLARATIONS ========
 */

/* Module_State__ */
typedef struct ti_sysbios_family_arm_a8_Mmu_Module_State__ {
    __TA_ti_sysbios_family_arm_a8_Mmu_Module_State__tableBuf tableBuf;
} ti_sysbios_family_arm_a8_Mmu_Module_State__;

/* --> ti_sysbios_family_arm_a8_Mmu_Module_State_0_tableBuf__A */
__T1_ti_sysbios_family_arm_a8_Mmu_Module_State__tableBuf ti_sysbios_family_arm_a8_Mmu_Module_State_0_tableBuf__A[4096];
#ifdef __ti__sect
    #pragma DATA_SECTION(ti_sysbios_family_arm_a8_Mmu_Module_State_0_tableBuf__A, "ti.sysbios.family.arm.a8.mmuTableSection");
#endif
#ifdef __GNUC__
#if __GNUC__ >= 4
__T1_ti_sysbios_family_arm_a8_Mmu_Module_State__tableBuf ti_sysbios_family_arm_a8_Mmu_Module_State_0_tableBuf__A[4096] __attribute__ ((section("ti.sysbios.family.arm.a8.mmuTableSection")));
#endif
#endif
#ifdef __ti__align
    #pragma DATA_ALIGN(ti_sysbios_family_arm_a8_Mmu_Module_State_0_tableBuf__A, 16384);
#endif
#ifdef __GNUC__
#if __GNUC__ >= 4
__T1_ti_sysbios_family_arm_a8_Mmu_Module_State__tableBuf ti_sysbios_family_arm_a8_Mmu_Module_State_0_tableBuf__A[4096] __attribute__ ((aligned(16384)));
#endif
#endif

/* Module__state__V */
ti_sysbios_family_arm_a8_Mmu_Module_State__ ti_sysbios_family_arm_a8_Mmu_Module__state__V;


/*
 * ======== ti.sysbios.family.arm.a8.TimestampProvider DECLARATIONS ========
 */

/* Module_State__ */
typedef struct ti_sysbios_family_arm_a8_TimestampProvider_Module_State__ {
    xdc_UInt32 upper32Bits;
} ti_sysbios_family_arm_a8_TimestampProvider_Module_State__;

/* Module__state__V */
ti_sysbios_family_arm_a8_TimestampProvider_Module_State__ ti_sysbios_family_arm_a8_TimestampProvider_Module__state__V;


/*
 * ======== ti.sysbios.family.arm.a8.intcps.Hwi DECLARATIONS ========
 */

/* Object__table__V */
ti_sysbios_family_arm_a8_intcps_Hwi_Object__ ti_sysbios_family_arm_a8_intcps_Hwi_Object__table__V[1];

/* Module_State__ */
typedef struct ti_sysbios_family_arm_a8_intcps_Hwi_Module_State__ {
    xdc_Bits32 mir0Mask;
    xdc_Bits32 mir1Mask;
    xdc_Bits32 mir2Mask;
    xdc_Bits32 mir3Mask;
    xdc_UInt spuriousInts;
    xdc_UInt lastSpuriousInt;
    xdc_UInt irp;
    xdc_Char* taskSP;
    xdc_Char* isrStack;
    xdc_Ptr isrStackBase;
    xdc_Ptr isrStackSize;
    __TA_ti_sysbios_family_arm_a8_intcps_Hwi_Module_State__fiqStack fiqStack;
    xdc_SizeT fiqStackSize;
    __TA_ti_sysbios_family_arm_a8_intcps_Hwi_Module_State__dispatchTable dispatchTable;
    ti_sysbios_family_arm_a8_intcps_Hwi_Object__ Object_field_nonPluggedHwi;
} ti_sysbios_family_arm_a8_intcps_Hwi_Module_State__;

/* --> __TI_STACK_BASE */
extern void* __TI_STACK_BASE;

/* --> __TI_STACK_SIZE */
extern void* __TI_STACK_SIZE;

/* --> ti_sysbios_family_arm_a8_intcps_Hwi_Module_State_0_fiqStack__A */
__T1_ti_sysbios_family_arm_a8_intcps_Hwi_Module_State__fiqStack ti_sysbios_family_arm_a8_intcps_Hwi_Module_State_0_fiqStack__A[1024];
#ifdef __ti__align
    #pragma DATA_ALIGN(ti_sysbios_family_arm_a8_intcps_Hwi_Module_State_0_fiqStack__A, 4);
#endif
#ifdef __GNUC__
#if __GNUC__ >= 4
__T1_ti_sysbios_family_arm_a8_intcps_Hwi_Module_State__fiqStack ti_sysbios_family_arm_a8_intcps_Hwi_Module_State_0_fiqStack__A[1024] __attribute__ ((aligned(4)));
#endif
#endif

/* Module__state__V */
ti_sysbios_family_arm_a8_intcps_Hwi_Module_State__ ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V;

/* --> ti_sysbios_knl_Swi_disable__E */
extern xdc_UInt ti_sysbios_knl_Swi_disable__E(xdc_Void);

/* --> ti_sysbios_knl_Swi_restoreHwi__E */
extern xdc_Void ti_sysbios_knl_Swi_restoreHwi__E(xdc_UInt);

/* --> ti_sysbios_knl_Task_disable__E */
extern xdc_UInt ti_sysbios_knl_Task_disable__E(xdc_Void);

/* --> ti_sysbios_knl_Task_restoreHwi__E */
extern xdc_Void ti_sysbios_knl_Task_restoreHwi__E(xdc_UInt);


/*
 * ======== ti.sysbios.family.arm.a8.ti81xx.TimerSupport DECLARATIONS ========
 */

/* Module_State__ */
typedef struct ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Module_State__ {
    __TA_ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Module_State__intNums intNums;
} ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Module_State__;

/* --> ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Module_State_0_intNums__A */
__T1_ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Module_State__intNums ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Module_State_0_intNums__A[5];

/* Module__state__V */
ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Module_State__ ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Module__state__V;


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
__T1_ti_sysbios_heaps_HeapMem_Instance_State__buf ti_sysbios_heaps_HeapMem_Instance_State_0_buf__A[4096];
#ifdef __ti__align
    #pragma DATA_ALIGN(ti_sysbios_heaps_HeapMem_Instance_State_0_buf__A, 8);
#endif
#ifdef __GNUC__
#if __GNUC__ >= 4
__T1_ti_sysbios_heaps_HeapMem_Instance_State__buf ti_sysbios_heaps_HeapMem_Instance_State_0_buf__A[4096] __attribute__ ((aligned(8)));
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

/* --> ti_sysbios_knl_Task_Instance_State_0_hookEnv__A */
__T1_ti_sysbios_knl_Task_Instance_State__hookEnv ti_sysbios_knl_Task_Instance_State_0_hookEnv__A[1];

/* Object__table__V */
ti_sysbios_knl_Task_Object__ ti_sysbios_knl_Task_Object__table__V[1];

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
 * ======== ti.sysbios.timers.dmtimer.Timer DECLARATIONS ========
 */

/* Object__table__V */
ti_sysbios_timers_dmtimer_Timer_Object__ ti_sysbios_timers_dmtimer_Timer_Object__table__V[1];

/* Module_State__ */
typedef struct ti_sysbios_timers_dmtimer_Timer_Module_State__ {
    xdc_Bits32 availMask;
    xdc_runtime_Types_FreqHz intFreq;
    __TA_ti_sysbios_timers_dmtimer_Timer_Module_State__device device;
    __TA_ti_sysbios_timers_dmtimer_Timer_Module_State__handles handles;
    xdc_Bool firstInit;
} ti_sysbios_timers_dmtimer_Timer_Module_State__;

/* --> ti_sysbios_timers_dmtimer_Timer_Module_State_0_device__A */
__T1_ti_sysbios_timers_dmtimer_Timer_Module_State__device ti_sysbios_timers_dmtimer_Timer_Module_State_0_device__A[5];

/* --> ti_sysbios_timers_dmtimer_Timer_Module_State_0_handles__A */
__T1_ti_sysbios_timers_dmtimer_Timer_Module_State__handles ti_sysbios_timers_dmtimer_Timer_Module_State_0_handles__A[5];

/* Module__state__V */
ti_sysbios_timers_dmtimer_Timer_Module_State__ ti_sysbios_timers_dmtimer_Timer_Module__state__V;


/*
 * ======== ti.sysbios.timers.dmtimer.Timer_TimerSupportProxy DECLARATIONS ========
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

/* --> ti_sysbios_family_arm_a8_Mmu_Module_startup__E */
extern xdc_Int ti_sysbios_family_arm_a8_Mmu_Module_startup__E(xdc_Int);

/* --> ti_sysbios_family_arm_a8_TimestampProvider_Module_startup__E */
extern xdc_Int ti_sysbios_family_arm_a8_TimestampProvider_Module_startup__E(xdc_Int);

/* --> ti_sysbios_family_arm_a8_intcps_Hwi_Module_startup__E */
extern xdc_Int ti_sysbios_family_arm_a8_intcps_Hwi_Module_startup__E(xdc_Int);

/* --> ti_sysbios_family_arm_exc_Exception_Module_startup__E */
extern xdc_Int ti_sysbios_family_arm_exc_Exception_Module_startup__E(xdc_Int);

/* --> ti_sysbios_timers_dmtimer_Timer_Module_startup__E */
extern xdc_Int ti_sysbios_timers_dmtimer_Timer_Module_startup__E(xdc_Int);

/* --> ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Module_startup__E */
extern xdc_Int ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Module_startup__E(xdc_Int);

/* --> xdc_runtime_Startup_sfxnTab__A */
const __T1_xdc_runtime_Startup_sfxnTab xdc_runtime_Startup_sfxnTab__A[13];

/* --> xdc_runtime_Startup_sfxnRts__A */
const __T1_xdc_runtime_Startup_sfxnRts xdc_runtime_Startup_sfxnRts__A[13];


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
const __T1_xdc_runtime_Text_charTab xdc_runtime_Text_charTab__A[7244];

/* --> xdc_runtime_Text_nodeTab__A */
const __T1_xdc_runtime_Text_nodeTab xdc_runtime_Text_nodeTab__A[56];


/*
 * ======== xdc.runtime.Timestamp DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Timestamp_SupportProxy DECLARATIONS ========
 */


/*
 * ======== OBJECT OFFSETS ========
 */

__FAR__ const xdc_SizeT ti_sysbios_family_arm_a8_intcps_Hwi_Module_State_nonPluggedHwi__O = offsetof(ti_sysbios_family_arm_a8_intcps_Hwi_Module_State__, Object_field_nonPluggedHwi);


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
 * ======== xdc.cfg.Program TEMPLATE ========
 */

/*
 *  ======== __ASM__ ========
 *  Define absolute path prefix for this executable's
 *  configuration generated files.
 */
xdc__META(__ASM__, "@(#)__ASM__ = /db/vtree/library/trees/ipc/ipc-h32/src/ti/sdo/ipc/package/cfg/nonInstrumented_pea8f");

/*
 *  ======== __ISA__ ========
 *  Define the ISA of this executable.  This symbol is used by platform
 *  specific "exec" commands that support more than one ISA; e.g., gdb
 */
xdc__META(__ISA__, "@(#)__ISA__ = v7A");

/*
 *  ======== __PLAT__ ========
 *  Define the name of the platform that can run this executable.  This
 *  symbol is used by platform independent "exec" commands
 */
xdc__META(__PLAT__, "@(#)__PLAT__ = ti.sdo.ipc.examples.platforms.evmTI816X.host");

/*
 *  ======== __TARG__ ========
 *  Define the name of the target used to build this executable.
 */
xdc__META(__TARG__, "@(#)__TARG__ = ti.targets.arm.elf.A8F");

/*
 *  ======== __TRDR__ ========
 *  Define the name of the class that can read/parse this executable.
 */
xdc__META(__TRDR__, "@(#)__TRDR__ = ti.targets.omf.elf.Elf32");


/*
 * ======== xdc.cfg.SourceDir TEMPLATE ========
 */



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
xdc_Bool ti_sysbios_hal_Hwi_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[2] < 0;
}
xdc_Bool ti_sysbios_hal_Timer_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[3] < 0;
}
xdc_Bool ti_sysbios_knl_Clock_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[4] < 0;
}
xdc_Bool ti_sysbios_knl_Swi_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[5] < 0;
}
xdc_Bool ti_sysbios_knl_Task_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[6] < 0;
}
xdc_Bool ti_sysbios_family_arm_a8_Mmu_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[7] < 0;
}
xdc_Bool ti_sysbios_family_arm_a8_TimestampProvider_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[8] < 0;
}
xdc_Bool ti_sysbios_family_arm_a8_intcps_Hwi_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[9] < 0;
}
xdc_Bool ti_sysbios_family_arm_exc_Exception_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[10] < 0;
}
xdc_Bool ti_sysbios_timers_dmtimer_Timer_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[11] < 0;
}
xdc_Bool ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[12] < 0;
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
    xdc_Int state[13];
    xdc_runtime_Startup_startModsFxn__C(state, 13);
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
    xdc_String stack[7];
    xdc_runtime_Text_visitRope2__I(rope, visFxn, visState, stack);
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
 * ======== ti.sysbios.family.arm.a8.Mmu TEMPLATE ========
 */


#include <ti/sysbios/family/arm/a8/Mmu.h>

Void ti_sysbios_family_arm_a8_Mmu_initTableBuf__I(ti_sysbios_family_arm_a8_Mmu_Module_State *mmuModule)
{
     mmuModule->tableBuf[0] = 0xe0e;
     mmuModule->tableBuf[1026] = 0x40200e0e;
     mmuModule->tableBuf[1027] = 0x40300e0e;
     mmuModule->tableBuf[1028] = 0x40400e0e;
     mmuModule->tableBuf[1152] = 0x48000e12;
     mmuModule->tableBuf[1154] = 0x48200e12;
     mmuModule->tableBuf[2048] = 0x80000e0e;
     mmuModule->tableBuf[2049] = 0x80100e0e;
     mmuModule->tableBuf[2050] = 0x80200e0e;
     mmuModule->tableBuf[2051] = 0x80300e0e;
     mmuModule->tableBuf[2052] = 0x80400e0e;
     mmuModule->tableBuf[2053] = 0x80500e0e;
     mmuModule->tableBuf[2054] = 0x80600e0e;
     mmuModule->tableBuf[2055] = 0x80700e0e;
     mmuModule->tableBuf[2056] = 0x80800e0e;
     mmuModule->tableBuf[2057] = 0x80900e0e;
     mmuModule->tableBuf[2058] = 0x80a00e0e;
     mmuModule->tableBuf[2059] = 0x80b00e0e;
     mmuModule->tableBuf[2060] = 0x80c00e0e;
     mmuModule->tableBuf[2061] = 0x80d00e0e;
     mmuModule->tableBuf[2062] = 0x80e00e0e;
     mmuModule->tableBuf[2063] = 0x80f00e0e;
     mmuModule->tableBuf[2064] = 0x81000e0e;
     mmuModule->tableBuf[2065] = 0x81100e0e;
     mmuModule->tableBuf[2066] = 0x81200e0e;
     mmuModule->tableBuf[2067] = 0x81300e0e;
     mmuModule->tableBuf[2068] = 0x81400e0e;
     mmuModule->tableBuf[2069] = 0x81500e0e;
     mmuModule->tableBuf[2070] = 0x81600e0e;
     mmuModule->tableBuf[2071] = 0x81700e0e;
     mmuModule->tableBuf[2072] = 0x81800e0e;
     mmuModule->tableBuf[2073] = 0x81900e0e;
     mmuModule->tableBuf[2074] = 0x81a00e0e;
     mmuModule->tableBuf[2075] = 0x81b00e0e;
     mmuModule->tableBuf[2076] = 0x81c00e0e;
     mmuModule->tableBuf[2077] = 0x81d00e0e;
     mmuModule->tableBuf[2078] = 0x81e00e0e;
     mmuModule->tableBuf[2079] = 0x81f00e0e;
     mmuModule->tableBuf[2080] = 0x82000e0e;
     mmuModule->tableBuf[2081] = 0x82100e0e;
     mmuModule->tableBuf[2082] = 0x82200e0e;
     mmuModule->tableBuf[2083] = 0x82300e0e;
     mmuModule->tableBuf[2084] = 0x82400e0e;
     mmuModule->tableBuf[2085] = 0x82500e0e;
     mmuModule->tableBuf[2086] = 0x82600e0e;
     mmuModule->tableBuf[2087] = 0x82700e0e;
     mmuModule->tableBuf[2088] = 0x82800e0e;
     mmuModule->tableBuf[2089] = 0x82900e0e;
     mmuModule->tableBuf[2090] = 0x82a00e0e;
     mmuModule->tableBuf[2091] = 0x82b00e0e;
     mmuModule->tableBuf[2092] = 0x82c00e0e;
     mmuModule->tableBuf[2093] = 0x82d00e0e;
     mmuModule->tableBuf[2094] = 0x82e00e0e;
     mmuModule->tableBuf[2095] = 0x82f00e0e;
     mmuModule->tableBuf[2096] = 0x83000e0e;
     mmuModule->tableBuf[2097] = 0x83100e0e;
     mmuModule->tableBuf[2098] = 0x83200e0e;
     mmuModule->tableBuf[2099] = 0x83300e0e;
     mmuModule->tableBuf[2100] = 0x83400e0e;
     mmuModule->tableBuf[2101] = 0x83500e0e;
     mmuModule->tableBuf[2102] = 0x83600e0e;
     mmuModule->tableBuf[2103] = 0x83700e0e;
     mmuModule->tableBuf[2104] = 0x83800e0e;
     mmuModule->tableBuf[2105] = 0x83900e0e;
     mmuModule->tableBuf[2106] = 0x83a00e0e;
     mmuModule->tableBuf[2107] = 0x83b00e0e;
     mmuModule->tableBuf[2108] = 0x83c00e0e;
     mmuModule->tableBuf[2109] = 0x83d00e0e;
     mmuModule->tableBuf[2110] = 0x83e00e0e;
     mmuModule->tableBuf[2111] = 0x83f00e0e;
     mmuModule->tableBuf[2112] = 0x84000e0e;
     mmuModule->tableBuf[2113] = 0x84100e0e;
     mmuModule->tableBuf[2114] = 0x84200e0e;
     mmuModule->tableBuf[2115] = 0x84300e0e;
     mmuModule->tableBuf[2116] = 0x84400e0e;
     mmuModule->tableBuf[2117] = 0x84500e0e;
     mmuModule->tableBuf[2118] = 0x84600e0e;
     mmuModule->tableBuf[2119] = 0x84700e0e;
     mmuModule->tableBuf[2120] = 0x84800e0e;
     mmuModule->tableBuf[2121] = 0x84900e0e;
     mmuModule->tableBuf[2122] = 0x84a00e0e;
     mmuModule->tableBuf[2123] = 0x84b00e0e;
     mmuModule->tableBuf[2124] = 0x84c00e0e;
     mmuModule->tableBuf[2125] = 0x84d00e0e;
     mmuModule->tableBuf[2126] = 0x84e00e0e;
     mmuModule->tableBuf[2127] = 0x84f00e0e;
     mmuModule->tableBuf[2128] = 0x85000e0e;
     mmuModule->tableBuf[2129] = 0x85100e0e;
     mmuModule->tableBuf[2130] = 0x85200e0e;
     mmuModule->tableBuf[2131] = 0x85300e0e;
     mmuModule->tableBuf[2132] = 0x85400e0e;
     mmuModule->tableBuf[2133] = 0x85500e0e;
     mmuModule->tableBuf[2134] = 0x85600e0e;
     mmuModule->tableBuf[2135] = 0x85700e0e;
     mmuModule->tableBuf[2136] = 0x85800e0e;
     mmuModule->tableBuf[2137] = 0x85900e0e;
     mmuModule->tableBuf[2138] = 0x85a00e0e;
     mmuModule->tableBuf[2139] = 0x85b00e0e;
     mmuModule->tableBuf[2140] = 0x85c00e0e;
     mmuModule->tableBuf[2141] = 0x85d00e0e;
     mmuModule->tableBuf[2142] = 0x85e00e0e;
     mmuModule->tableBuf[2143] = 0x85f00e0e;
     mmuModule->tableBuf[2144] = 0x86000e0e;
     mmuModule->tableBuf[2145] = 0x86100e0e;
     mmuModule->tableBuf[2146] = 0x86200e0e;
     mmuModule->tableBuf[2147] = 0x86300e0e;
     mmuModule->tableBuf[2148] = 0x86400e0e;
     mmuModule->tableBuf[2149] = 0x86500e0e;
     mmuModule->tableBuf[2150] = 0x86600e0e;
     mmuModule->tableBuf[2151] = 0x86700e0e;
     mmuModule->tableBuf[2152] = 0x86800e0e;
     mmuModule->tableBuf[2153] = 0x86900e0e;
     mmuModule->tableBuf[2154] = 0x86a00e0e;
     mmuModule->tableBuf[2155] = 0x86b00e0e;
     mmuModule->tableBuf[2156] = 0x86c00e0e;
     mmuModule->tableBuf[2157] = 0x86d00e0e;
     mmuModule->tableBuf[2158] = 0x86e00e0e;
     mmuModule->tableBuf[2159] = 0x86f00e0e;
     mmuModule->tableBuf[2160] = 0x87000e0e;
     mmuModule->tableBuf[2161] = 0x87100e0e;
     mmuModule->tableBuf[2162] = 0x87200e0e;
     mmuModule->tableBuf[2163] = 0x87300e0e;
     mmuModule->tableBuf[2164] = 0x87400e0e;
     mmuModule->tableBuf[2165] = 0x87500e0e;
     mmuModule->tableBuf[2166] = 0x87600e0e;
     mmuModule->tableBuf[2167] = 0x87700e0e;
     mmuModule->tableBuf[2168] = 0x87800e0e;
     mmuModule->tableBuf[2169] = 0x87900e0e;
     mmuModule->tableBuf[2170] = 0x87a00e0e;
     mmuModule->tableBuf[2171] = 0x87b00e0e;
     mmuModule->tableBuf[2172] = 0x87c00e0e;
     mmuModule->tableBuf[2173] = 0x87d00e0e;
     mmuModule->tableBuf[2174] = 0x87e00e0e;
     mmuModule->tableBuf[2175] = 0x87f00e0e;
     mmuModule->tableBuf[2176] = 0x88000e0e;
     mmuModule->tableBuf[2177] = 0x88100e0e;
     mmuModule->tableBuf[2178] = 0x88200e0e;
     mmuModule->tableBuf[2179] = 0x88300e0e;
     mmuModule->tableBuf[2180] = 0x88400e0e;
     mmuModule->tableBuf[2181] = 0x88500e0e;
     mmuModule->tableBuf[2182] = 0x88600e0e;
     mmuModule->tableBuf[2183] = 0x88700e0e;
     mmuModule->tableBuf[2184] = 0x88800e0e;
     mmuModule->tableBuf[2185] = 0x88900e0e;
     mmuModule->tableBuf[2186] = 0x88a00e0e;
     mmuModule->tableBuf[2187] = 0x88b00e0e;
     mmuModule->tableBuf[2188] = 0x88c00e0e;
     mmuModule->tableBuf[2189] = 0x88d00e0e;
     mmuModule->tableBuf[2190] = 0x88e00e0e;
     mmuModule->tableBuf[2191] = 0x88f00e0e;
     mmuModule->tableBuf[2192] = 0x89000e0e;
     mmuModule->tableBuf[2193] = 0x89100e0e;
     mmuModule->tableBuf[2194] = 0x89200e0e;
     mmuModule->tableBuf[2195] = 0x89300e0e;
     mmuModule->tableBuf[2196] = 0x89400e0e;
     mmuModule->tableBuf[2197] = 0x89500e0e;
     mmuModule->tableBuf[2198] = 0x89600e0e;
     mmuModule->tableBuf[2199] = 0x89700e0e;
     mmuModule->tableBuf[2200] = 0x89800e0e;
     mmuModule->tableBuf[2201] = 0x89900e0e;
     mmuModule->tableBuf[2202] = 0x89a00e0e;
     mmuModule->tableBuf[2203] = 0x89b00e0e;
     mmuModule->tableBuf[2204] = 0x89c00e0e;
     mmuModule->tableBuf[2205] = 0x89d00e0e;
     mmuModule->tableBuf[2206] = 0x89e00e0e;
     mmuModule->tableBuf[2207] = 0x89f00e0e;
     mmuModule->tableBuf[2208] = 0x8a000e0e;
     mmuModule->tableBuf[2209] = 0x8a100e0e;
     mmuModule->tableBuf[2210] = 0x8a200e0e;
     mmuModule->tableBuf[2211] = 0x8a300e0e;
     mmuModule->tableBuf[2212] = 0x8a400e0e;
     mmuModule->tableBuf[2213] = 0x8a500e0e;
     mmuModule->tableBuf[2214] = 0x8a600e0e;
     mmuModule->tableBuf[2215] = 0x8a700e0e;
     mmuModule->tableBuf[2216] = 0x8a800e0e;
     mmuModule->tableBuf[2217] = 0x8a900e0e;
     mmuModule->tableBuf[2218] = 0x8aa00e0e;
     mmuModule->tableBuf[2219] = 0x8ab00e0e;
     mmuModule->tableBuf[2220] = 0x8ac00e0e;
     mmuModule->tableBuf[2221] = 0x8ad00e0e;
     mmuModule->tableBuf[2222] = 0x8ae00e0e;
     mmuModule->tableBuf[2223] = 0x8af00e0e;
     mmuModule->tableBuf[2272] = 0x8e000e0e;
     mmuModule->tableBuf[2273] = 0x8e100e0e;
     mmuModule->tableBuf[2274] = 0x8e200e0e;
     mmuModule->tableBuf[2275] = 0x8e300e0e;
     mmuModule->tableBuf[2276] = 0x8e400e0e;
     mmuModule->tableBuf[2277] = 0x8e500e0e;
     mmuModule->tableBuf[2278] = 0x8e600e0e;
     mmuModule->tableBuf[2279] = 0x8e700e0e;
     mmuModule->tableBuf[2280] = 0x8e800e0e;
     mmuModule->tableBuf[2281] = 0x8e900e0e;
     mmuModule->tableBuf[2282] = 0x8ea00e0e;
     mmuModule->tableBuf[2283] = 0x8eb00e0e;
     mmuModule->tableBuf[2284] = 0x8ec00e0e;
     mmuModule->tableBuf[2285] = 0x8ed00e0e;
     mmuModule->tableBuf[2286] = 0x8ee00e0e;
     mmuModule->tableBuf[2287] = 0x8ef00e0e;
}

/*
 * ======== ti.sdo.utils.Build TEMPLATE ========
 */



/*
 * ======== ti.sdo.ipc.Build TEMPLATE ========
 */



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
 * ======== ti.sysbios.family.arm.a8.intcps.Hwi TEMPLATE ========
 */


#pragma DATA_SECTION(ti_sysbios_family_arm_a8_intcps_Hwi_vectors, ".vecs");
#pragma DATA_ALIGN(ti_sysbios_family_arm_a8_intcps_Hwi_vectors, 0x400);

extern Void _c_int00();
extern Void ti_sysbios_family_arm_exc_Exception_excHandlerAsm__I();
extern Void ti_sysbios_family_arm_exc_Exception_excHandlerAsm__I();
extern Void ti_sysbios_family_arm_exc_Exception_excHandlerAsm__I();
extern Void ti_sysbios_family_arm_exc_Exception_excHandlerDataAsm__I();
extern Void ti_sysbios_family_arm_a8_intcps_Hwi_dispatchIRQ__I();
extern Void ti_sysbios_family_arm_a8_intcps_Hwi_dispatchFIQC__I();

const UInt32 ti_sysbios_family_arm_a8_intcps_Hwi_vectors[] = {
    (UInt32)(0xE59FF018),       /*   ldr  pc, resetFunc         */
    (UInt32)(0xE59FF018),       /*   ldr  pc, undefInstFunc     */
    (UInt32)(0xE59FF018),       /*   ldr  pc, swiFunc           */
    (UInt32)(0xE59FF018),       /*   ldr  pc, prefetchAbortFunc */
    (UInt32)(0xE59FF018),       /*   ldr  pc, dataAbortFunc     */
    (UInt32)(0xE59FF018),       /*   ldr  pc, reservedFunc      */
    (UInt32)(0xE59FF018),       /*   ldr  pc, irqFunc           */
    (UInt32)(0xE59FF018),       /*   ldr  pc, fiqFunc           */

/* resetFunc */
    (UInt32)(&_c_int00),    /* c_int00 */ 

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
    (UInt32)(&ti_sysbios_family_arm_a8_intcps_Hwi_dispatchIRQ__I),

/* fiqFunc */
    (UInt32)(&ti_sysbios_family_arm_a8_intcps_Hwi_dispatchFIQC__I)
};


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
__FAR__ const CT__ti_sdo_utils_NameServerRemoteNull_Module__id ti_sdo_utils_NameServerRemoteNull_Module__id__C = (xdc_Bits16)0x802b;

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
 * ======== ti.sysbios.BIOS INITIALIZERS ========
 */

/* Module__state__V */
ti_sysbios_BIOS_Module_State__ ti_sysbios_BIOS_Module__state__V = {
    {
        (xdc_Bits32)0x0,  /* hi */
        (xdc_Bits32)0x3b9aca00,  /* lo */
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
__FAR__ const CT__ti_sysbios_BIOS_Module__id ti_sysbios_BIOS_Module__id__C = (xdc_Bits16)0x802c;

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
    (xdc_Bits32)0x3b9aca00,  /* lo */
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
 * ======== ti.sysbios.family.arm.a8.Cache INITIALIZERS ========
 */

/* Module__state__V */
ti_sysbios_family_arm_a8_Cache_Module_State__ ti_sysbios_family_arm_a8_Cache_Module__state__V = {
    (xdc_Bits32)0x0,  /* l1dInfo */
    (xdc_Bits32)0x0,  /* l1pInfo */
    (xdc_Bits32)0x0,  /* l2Info */
    (xdc_SizeT)0x0,  /* l2WaySize */
    (xdc_Bits32)0x0,  /* lockRegister */
    {
        ((xdc_Ptr)(0x0)),  /* [0] */
        ((xdc_Ptr)(0x0)),  /* [1] */
        ((xdc_Ptr)(0x0)),  /* [2] */
        ((xdc_Ptr)(0x0)),  /* [3] */
        ((xdc_Ptr)(0x0)),  /* [4] */
        ((xdc_Ptr)(0x0)),  /* [5] */
        ((xdc_Ptr)(0x0)),  /* [6] */
        ((xdc_Ptr)(0x0)),  /* [7] */
    },  /* baseAddresses */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_family_arm_a8_Cache_Module__diagsEnabled ti_sysbios_family_arm_a8_Cache_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_family_arm_a8_Cache_Module__diagsIncluded ti_sysbios_family_arm_a8_Cache_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_family_arm_a8_Cache_Module__diagsMask ti_sysbios_family_arm_a8_Cache_Module__diagsMask__C = ((CT__ti_sysbios_family_arm_a8_Cache_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_family_arm_a8_Cache_Module__gateObj ti_sysbios_family_arm_a8_Cache_Module__gateObj__C = ((CT__ti_sysbios_family_arm_a8_Cache_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_family_arm_a8_Cache_Module__gatePrms ti_sysbios_family_arm_a8_Cache_Module__gatePrms__C = ((CT__ti_sysbios_family_arm_a8_Cache_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_family_arm_a8_Cache_Module__id ti_sysbios_family_arm_a8_Cache_Module__id__C = (xdc_Bits16)0x8023;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_family_arm_a8_Cache_Module__loggerDefined ti_sysbios_family_arm_a8_Cache_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_family_arm_a8_Cache_Module__loggerObj ti_sysbios_family_arm_a8_Cache_Module__loggerObj__C = ((CT__ti_sysbios_family_arm_a8_Cache_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_family_arm_a8_Cache_Module__loggerFxn0 ti_sysbios_family_arm_a8_Cache_Module__loggerFxn0__C = ((CT__ti_sysbios_family_arm_a8_Cache_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_family_arm_a8_Cache_Module__loggerFxn1 ti_sysbios_family_arm_a8_Cache_Module__loggerFxn1__C = ((CT__ti_sysbios_family_arm_a8_Cache_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_family_arm_a8_Cache_Module__loggerFxn2 ti_sysbios_family_arm_a8_Cache_Module__loggerFxn2__C = ((CT__ti_sysbios_family_arm_a8_Cache_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_family_arm_a8_Cache_Module__loggerFxn4 ti_sysbios_family_arm_a8_Cache_Module__loggerFxn4__C = ((CT__ti_sysbios_family_arm_a8_Cache_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_family_arm_a8_Cache_Module__loggerFxn8 ti_sysbios_family_arm_a8_Cache_Module__loggerFxn8__C = ((CT__ti_sysbios_family_arm_a8_Cache_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_family_arm_a8_Cache_Module__startupDoneFxn ti_sysbios_family_arm_a8_Cache_Module__startupDoneFxn__C = ((CT__ti_sysbios_family_arm_a8_Cache_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_family_arm_a8_Cache_Object__count ti_sysbios_family_arm_a8_Cache_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_family_arm_a8_Cache_Object__heap ti_sysbios_family_arm_a8_Cache_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_family_arm_a8_Cache_Object__sizeof ti_sysbios_family_arm_a8_Cache_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__ti_sysbios_family_arm_a8_Cache_Object__table ti_sysbios_family_arm_a8_Cache_Object__table__C = 0;

/* A_badBlockLength__C */
__FAR__ const CT__ti_sysbios_family_arm_a8_Cache_A_badBlockLength ti_sysbios_family_arm_a8_Cache_A_badBlockLength__C = (((xdc_runtime_Assert_Id)1307) << 16 | 16);

/* A_blockCrossesPage__C */
__FAR__ const CT__ti_sysbios_family_arm_a8_Cache_A_blockCrossesPage ti_sysbios_family_arm_a8_Cache_A_blockCrossesPage__C = (((xdc_runtime_Assert_Id)1373) << 16 | 16);

/* enableCache__C */
__FAR__ const CT__ti_sysbios_family_arm_a8_Cache_enableCache ti_sysbios_family_arm_a8_Cache_enableCache__C = 1;

/* unlockL2Cache__C */
__FAR__ const CT__ti_sysbios_family_arm_a8_Cache_unlockL2Cache ti_sysbios_family_arm_a8_Cache_unlockL2Cache__C = 1;

/* branchPredictionEnabled__C */
__FAR__ const CT__ti_sysbios_family_arm_a8_Cache_branchPredictionEnabled ti_sysbios_family_arm_a8_Cache_branchPredictionEnabled__C = 1;


/*
 * ======== ti.sysbios.family.arm.a8.Mmu INITIALIZERS ========
 */

/* --> ti_sysbios_family_arm_a8_Mmu_Module_State_0_tableBuf__A */
__T1_ti_sysbios_family_arm_a8_Mmu_Module_State__tableBuf ti_sysbios_family_arm_a8_Mmu_Module_State_0_tableBuf__A[4096];

/* Module__state__V */
ti_sysbios_family_arm_a8_Mmu_Module_State__ ti_sysbios_family_arm_a8_Mmu_Module__state__V = {
    ((void*)ti_sysbios_family_arm_a8_Mmu_Module_State_0_tableBuf__A),  /* tableBuf */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_family_arm_a8_Mmu_Module__diagsEnabled ti_sysbios_family_arm_a8_Mmu_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_family_arm_a8_Mmu_Module__diagsIncluded ti_sysbios_family_arm_a8_Mmu_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_family_arm_a8_Mmu_Module__diagsMask ti_sysbios_family_arm_a8_Mmu_Module__diagsMask__C = ((CT__ti_sysbios_family_arm_a8_Mmu_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_family_arm_a8_Mmu_Module__gateObj ti_sysbios_family_arm_a8_Mmu_Module__gateObj__C = ((CT__ti_sysbios_family_arm_a8_Mmu_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_family_arm_a8_Mmu_Module__gatePrms ti_sysbios_family_arm_a8_Mmu_Module__gatePrms__C = ((CT__ti_sysbios_family_arm_a8_Mmu_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_family_arm_a8_Mmu_Module__id ti_sysbios_family_arm_a8_Mmu_Module__id__C = (xdc_Bits16)0x8024;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_family_arm_a8_Mmu_Module__loggerDefined ti_sysbios_family_arm_a8_Mmu_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_family_arm_a8_Mmu_Module__loggerObj ti_sysbios_family_arm_a8_Mmu_Module__loggerObj__C = ((CT__ti_sysbios_family_arm_a8_Mmu_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_family_arm_a8_Mmu_Module__loggerFxn0 ti_sysbios_family_arm_a8_Mmu_Module__loggerFxn0__C = ((CT__ti_sysbios_family_arm_a8_Mmu_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_family_arm_a8_Mmu_Module__loggerFxn1 ti_sysbios_family_arm_a8_Mmu_Module__loggerFxn1__C = ((CT__ti_sysbios_family_arm_a8_Mmu_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_family_arm_a8_Mmu_Module__loggerFxn2 ti_sysbios_family_arm_a8_Mmu_Module__loggerFxn2__C = ((CT__ti_sysbios_family_arm_a8_Mmu_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_family_arm_a8_Mmu_Module__loggerFxn4 ti_sysbios_family_arm_a8_Mmu_Module__loggerFxn4__C = ((CT__ti_sysbios_family_arm_a8_Mmu_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_family_arm_a8_Mmu_Module__loggerFxn8 ti_sysbios_family_arm_a8_Mmu_Module__loggerFxn8__C = ((CT__ti_sysbios_family_arm_a8_Mmu_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_family_arm_a8_Mmu_Module__startupDoneFxn ti_sysbios_family_arm_a8_Mmu_Module__startupDoneFxn__C = ((CT__ti_sysbios_family_arm_a8_Mmu_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_family_arm_a8_Mmu_Object__count ti_sysbios_family_arm_a8_Mmu_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_family_arm_a8_Mmu_Object__heap ti_sysbios_family_arm_a8_Mmu_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_family_arm_a8_Mmu_Object__sizeof ti_sysbios_family_arm_a8_Mmu_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__ti_sysbios_family_arm_a8_Mmu_Object__table ti_sysbios_family_arm_a8_Mmu_Object__table__C = 0;

/* A_nullPointer__C */
__FAR__ const CT__ti_sysbios_family_arm_a8_Mmu_A_nullPointer ti_sysbios_family_arm_a8_Mmu_A_nullPointer__C = (((xdc_runtime_Assert_Id)1436) << 16 | 16);

/* A_unknownDescType__C */
__FAR__ const CT__ti_sysbios_family_arm_a8_Mmu_A_unknownDescType ti_sysbios_family_arm_a8_Mmu_A_unknownDescType__C = (((xdc_runtime_Assert_Id)1467) << 16 | 16);

/* defaultAttrs__C */
__FAR__ const CT__ti_sysbios_family_arm_a8_Mmu_defaultAttrs ti_sysbios_family_arm_a8_Mmu_defaultAttrs__C = {
    ti_sysbios_family_arm_a8_Mmu_FirstLevelDesc_SECTION,  /* type */
    0,  /* bufferable */
    0,  /* cacheable */
    0,  /* shareable */
    0,  /* noexecute */
    (xdc_UInt8)0x1,  /* imp */
    (xdc_UInt8)0x0,  /* domain */
    (xdc_UInt8)0x3,  /* accPerm */
};

/* enableMMU__C */
__FAR__ const CT__ti_sysbios_family_arm_a8_Mmu_enableMMU ti_sysbios_family_arm_a8_Mmu_enableMMU__C = 1;


/*
 * ======== ti.sysbios.family.arm.a8.TimestampProvider INITIALIZERS ========
 */

/* Module__state__V */
ti_sysbios_family_arm_a8_TimestampProvider_Module_State__ ti_sysbios_family_arm_a8_TimestampProvider_Module__state__V = {
    (xdc_UInt32)0x0,  /* upper32Bits */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_family_arm_a8_TimestampProvider_Module__diagsEnabled ti_sysbios_family_arm_a8_TimestampProvider_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_family_arm_a8_TimestampProvider_Module__diagsIncluded ti_sysbios_family_arm_a8_TimestampProvider_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_family_arm_a8_TimestampProvider_Module__diagsMask ti_sysbios_family_arm_a8_TimestampProvider_Module__diagsMask__C = ((CT__ti_sysbios_family_arm_a8_TimestampProvider_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_family_arm_a8_TimestampProvider_Module__gateObj ti_sysbios_family_arm_a8_TimestampProvider_Module__gateObj__C = ((CT__ti_sysbios_family_arm_a8_TimestampProvider_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_family_arm_a8_TimestampProvider_Module__gatePrms ti_sysbios_family_arm_a8_TimestampProvider_Module__gatePrms__C = ((CT__ti_sysbios_family_arm_a8_TimestampProvider_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_family_arm_a8_TimestampProvider_Module__id ti_sysbios_family_arm_a8_TimestampProvider_Module__id__C = (xdc_Bits16)0x8025;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_family_arm_a8_TimestampProvider_Module__loggerDefined ti_sysbios_family_arm_a8_TimestampProvider_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_family_arm_a8_TimestampProvider_Module__loggerObj ti_sysbios_family_arm_a8_TimestampProvider_Module__loggerObj__C = ((CT__ti_sysbios_family_arm_a8_TimestampProvider_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_family_arm_a8_TimestampProvider_Module__loggerFxn0 ti_sysbios_family_arm_a8_TimestampProvider_Module__loggerFxn0__C = ((CT__ti_sysbios_family_arm_a8_TimestampProvider_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_family_arm_a8_TimestampProvider_Module__loggerFxn1 ti_sysbios_family_arm_a8_TimestampProvider_Module__loggerFxn1__C = ((CT__ti_sysbios_family_arm_a8_TimestampProvider_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_family_arm_a8_TimestampProvider_Module__loggerFxn2 ti_sysbios_family_arm_a8_TimestampProvider_Module__loggerFxn2__C = ((CT__ti_sysbios_family_arm_a8_TimestampProvider_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_family_arm_a8_TimestampProvider_Module__loggerFxn4 ti_sysbios_family_arm_a8_TimestampProvider_Module__loggerFxn4__C = ((CT__ti_sysbios_family_arm_a8_TimestampProvider_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_family_arm_a8_TimestampProvider_Module__loggerFxn8 ti_sysbios_family_arm_a8_TimestampProvider_Module__loggerFxn8__C = ((CT__ti_sysbios_family_arm_a8_TimestampProvider_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_family_arm_a8_TimestampProvider_Module__startupDoneFxn ti_sysbios_family_arm_a8_TimestampProvider_Module__startupDoneFxn__C = ((CT__ti_sysbios_family_arm_a8_TimestampProvider_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_family_arm_a8_TimestampProvider_Object__count ti_sysbios_family_arm_a8_TimestampProvider_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_family_arm_a8_TimestampProvider_Object__heap ti_sysbios_family_arm_a8_TimestampProvider_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_family_arm_a8_TimestampProvider_Object__sizeof ti_sysbios_family_arm_a8_TimestampProvider_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__ti_sysbios_family_arm_a8_TimestampProvider_Object__table ti_sysbios_family_arm_a8_TimestampProvider_Object__table__C = 0;


/*
 * ======== ti.sysbios.family.arm.a8.intcps.Hwi INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_family_arm_a8_intcps_Hwi_Object__DESC__C;

/* Object__PARAMS__C */
__FAR__ const ti_sysbios_family_arm_a8_intcps_Hwi_Params ti_sysbios_family_arm_a8_intcps_Hwi_Object__PARAMS__C = {
    sizeof (ti_sysbios_family_arm_a8_intcps_Hwi_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_family_arm_a8_intcps_Hwi_Object__PARAMS__C.__iprms, /* instance */
    ti_sysbios_interfaces_IHwi_MaskingOption_LOWER,  /* maskSetting */
    ((xdc_UArg)(0x0)),  /* arg */
    1,  /* enableInt */
    (xdc_Int)(-0x0 - 1),  /* eventId */
    (xdc_Int)(-0x0 - 1),  /* priority */
    ti_sysbios_family_arm_a8_intcps_Hwi_Type_IRQ,  /* type */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_family_arm_a8_intcps_Hwi_Module__ ti_sysbios_family_arm_a8_intcps_Hwi_Module__root__V = {
    {&ti_sysbios_family_arm_a8_intcps_Hwi_Module__root__V.link,  /* link.next */
    &ti_sysbios_family_arm_a8_intcps_Hwi_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_family_arm_a8_intcps_Hwi_Object__ ti_sysbios_family_arm_a8_intcps_Hwi_Object__table__V[1] = {
    {/* instance#0 */
        0,
        ti_sysbios_family_arm_a8_intcps_Hwi_Type_IRQ,  /* type */
        (xdc_UInt)0x3f,  /* priority */
        ((xdc_UArg)((void*)(ti_sysbios_timers_dmtimer_Timer_Handle)&ti_sysbios_timers_dmtimer_Timer_Object__table__V[0])),  /* arg */
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_timers_dmtimer_Timer_stub__E)),  /* fxn */
        ((xdc_UArg)0),  /* irp */
        ((void*)0),  /* hookEnv */
    },
};

/* --> ti_sysbios_family_arm_a8_intcps_Hwi_Module_State_0_fiqStack__A */
__T1_ti_sysbios_family_arm_a8_intcps_Hwi_Module_State__fiqStack ti_sysbios_family_arm_a8_intcps_Hwi_Module_State_0_fiqStack__A[1024];

/* Module__state__V */
ti_sysbios_family_arm_a8_intcps_Hwi_Module_State__ ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V = {
    (xdc_Bits32)(-0x1 - 1),  /* mir0Mask */
    (xdc_Bits32)0xffffffff,  /* mir1Mask */
    (xdc_Bits32)(-0x8 - 1),  /* mir2Mask */
    (xdc_Bits32)0xffffffff,  /* mir3Mask */
    (xdc_UInt)0x0,  /* spuriousInts */
    (xdc_UInt)0x0,  /* lastSpuriousInt */
    (xdc_UInt)0x0,  /* irp */
    ((xdc_Char*)0),  /* taskSP */
    ((xdc_Char*)0),  /* isrStack */
    ((xdc_Ptr)((void*)&__TI_STACK_BASE)),  /* isrStackBase */
    ((xdc_Ptr)((void*)&__TI_STACK_SIZE)),  /* isrStackSize */
    ((void*)ti_sysbios_family_arm_a8_intcps_Hwi_Module_State_0_fiqStack__A),  /* fiqStack */
    (xdc_SizeT)0x400,  /* fiqStackSize */
    {
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [0] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [1] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [2] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [3] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [4] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [5] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [6] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [7] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [8] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [9] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [10] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [11] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [12] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [13] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [14] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [15] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [16] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [17] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [18] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [19] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [20] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [21] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [22] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [23] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [24] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [25] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [26] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [27] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [28] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [29] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [30] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [31] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [32] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [33] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [34] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [35] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [36] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [37] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [38] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [39] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [40] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [41] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [42] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [43] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [44] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [45] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [46] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [47] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [48] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [49] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [50] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [51] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [52] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [53] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [54] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [55] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [56] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [57] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [58] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [59] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [60] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [61] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [62] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [63] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [64] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [65] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [66] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Object__table__V[0],  /* [67] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [68] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [69] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [70] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [71] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [72] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [73] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [74] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [75] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [76] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [77] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [78] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [79] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [80] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [81] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [82] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [83] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [84] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [85] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [86] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [87] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [88] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [89] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [90] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [91] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [92] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [93] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [94] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [95] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [96] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [97] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [98] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [99] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [100] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [101] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [102] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [103] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [104] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [105] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [106] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [107] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [108] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [109] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [110] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [111] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [112] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [113] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [114] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [115] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [116] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [117] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [118] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [119] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [120] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [121] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [122] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [123] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [124] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [125] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [126] */
        (ti_sysbios_family_arm_a8_intcps_Hwi_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [127] */
    },  /* dispatchTable */
    {
        0,
        ti_sysbios_family_arm_a8_intcps_Hwi_Type_IRQ,  /* type */
        (xdc_UInt)0x3f,  /* priority */
        ((xdc_UArg)(0x0)),  /* arg */
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_arm_a8_intcps_Hwi_nonPluggedHwiHandler__I)),  /* fxn */
        ((xdc_UArg)0),  /* irp */
        ((void*)0),  /* hookEnv */
    },  /* Object_field_nonPluggedHwi */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_family_arm_a8_intcps_Hwi_Module__diagsEnabled ti_sysbios_family_arm_a8_intcps_Hwi_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_family_arm_a8_intcps_Hwi_Module__diagsIncluded ti_sysbios_family_arm_a8_intcps_Hwi_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_family_arm_a8_intcps_Hwi_Module__diagsMask ti_sysbios_family_arm_a8_intcps_Hwi_Module__diagsMask__C = ((CT__ti_sysbios_family_arm_a8_intcps_Hwi_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_family_arm_a8_intcps_Hwi_Module__gateObj ti_sysbios_family_arm_a8_intcps_Hwi_Module__gateObj__C = ((CT__ti_sysbios_family_arm_a8_intcps_Hwi_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_family_arm_a8_intcps_Hwi_Module__gatePrms ti_sysbios_family_arm_a8_intcps_Hwi_Module__gatePrms__C = ((CT__ti_sysbios_family_arm_a8_intcps_Hwi_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_family_arm_a8_intcps_Hwi_Module__id ti_sysbios_family_arm_a8_intcps_Hwi_Module__id__C = (xdc_Bits16)0x802e;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_family_arm_a8_intcps_Hwi_Module__loggerDefined ti_sysbios_family_arm_a8_intcps_Hwi_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_family_arm_a8_intcps_Hwi_Module__loggerObj ti_sysbios_family_arm_a8_intcps_Hwi_Module__loggerObj__C = ((CT__ti_sysbios_family_arm_a8_intcps_Hwi_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_family_arm_a8_intcps_Hwi_Module__loggerFxn0 ti_sysbios_family_arm_a8_intcps_Hwi_Module__loggerFxn0__C = ((CT__ti_sysbios_family_arm_a8_intcps_Hwi_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_family_arm_a8_intcps_Hwi_Module__loggerFxn1 ti_sysbios_family_arm_a8_intcps_Hwi_Module__loggerFxn1__C = ((CT__ti_sysbios_family_arm_a8_intcps_Hwi_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_family_arm_a8_intcps_Hwi_Module__loggerFxn2 ti_sysbios_family_arm_a8_intcps_Hwi_Module__loggerFxn2__C = ((CT__ti_sysbios_family_arm_a8_intcps_Hwi_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_family_arm_a8_intcps_Hwi_Module__loggerFxn4 ti_sysbios_family_arm_a8_intcps_Hwi_Module__loggerFxn4__C = ((CT__ti_sysbios_family_arm_a8_intcps_Hwi_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_family_arm_a8_intcps_Hwi_Module__loggerFxn8 ti_sysbios_family_arm_a8_intcps_Hwi_Module__loggerFxn8__C = ((CT__ti_sysbios_family_arm_a8_intcps_Hwi_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_family_arm_a8_intcps_Hwi_Module__startupDoneFxn ti_sysbios_family_arm_a8_intcps_Hwi_Module__startupDoneFxn__C = ((CT__ti_sysbios_family_arm_a8_intcps_Hwi_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_family_arm_a8_intcps_Hwi_Object__count ti_sysbios_family_arm_a8_intcps_Hwi_Object__count__C = 1;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_family_arm_a8_intcps_Hwi_Object__heap ti_sysbios_family_arm_a8_intcps_Hwi_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_family_arm_a8_intcps_Hwi_Object__sizeof ti_sysbios_family_arm_a8_intcps_Hwi_Object__sizeof__C = sizeof(ti_sysbios_family_arm_a8_intcps_Hwi_Object__);

/* Object__table__C */
__FAR__ const CT__ti_sysbios_family_arm_a8_intcps_Hwi_Object__table ti_sysbios_family_arm_a8_intcps_Hwi_Object__table__C = ti_sysbios_family_arm_a8_intcps_Hwi_Object__table__V;

/* dispatcherAutoNestingSupport__C */
__FAR__ const CT__ti_sysbios_family_arm_a8_intcps_Hwi_dispatcherAutoNestingSupport ti_sysbios_family_arm_a8_intcps_Hwi_dispatcherAutoNestingSupport__C = 1;

/* dispatcherSwiSupport__C */
__FAR__ const CT__ti_sysbios_family_arm_a8_intcps_Hwi_dispatcherSwiSupport ti_sysbios_family_arm_a8_intcps_Hwi_dispatcherSwiSupport__C = 1;

/* dispatcherTaskSupport__C */
__FAR__ const CT__ti_sysbios_family_arm_a8_intcps_Hwi_dispatcherTaskSupport ti_sysbios_family_arm_a8_intcps_Hwi_dispatcherTaskSupport__C = 1;

/* dispatcherIrpTrackingSupport__C */
__FAR__ const CT__ti_sysbios_family_arm_a8_intcps_Hwi_dispatcherIrpTrackingSupport ti_sysbios_family_arm_a8_intcps_Hwi_dispatcherIrpTrackingSupport__C = 1;

/* NUM_PRIORITIES__C */
__FAR__ const CT__ti_sysbios_family_arm_a8_intcps_Hwi_NUM_PRIORITIES ti_sysbios_family_arm_a8_intcps_Hwi_NUM_PRIORITIES__C = (xdc_Int)0x40;

/* fiqStack__C */
__FAR__ const CT__ti_sysbios_family_arm_a8_intcps_Hwi_fiqStack ti_sysbios_family_arm_a8_intcps_Hwi_fiqStack__C = ((CT__ti_sysbios_family_arm_a8_intcps_Hwi_fiqStack)0);

/* excStack__C */
__FAR__ const CT__ti_sysbios_family_arm_a8_intcps_Hwi_excStack ti_sysbios_family_arm_a8_intcps_Hwi_excStack__C = ((CT__ti_sysbios_family_arm_a8_intcps_Hwi_excStack)0);

/* mir0Mask__C */
__FAR__ const CT__ti_sysbios_family_arm_a8_intcps_Hwi_mir0Mask ti_sysbios_family_arm_a8_intcps_Hwi_mir0Mask__C = (xdc_Bits32)0xffffffff;

/* mir1Mask__C */
__FAR__ const CT__ti_sysbios_family_arm_a8_intcps_Hwi_mir1Mask ti_sysbios_family_arm_a8_intcps_Hwi_mir1Mask__C = (xdc_Bits32)0xffffffff;

/* mir2Mask__C */
__FAR__ const CT__ti_sysbios_family_arm_a8_intcps_Hwi_mir2Mask ti_sysbios_family_arm_a8_intcps_Hwi_mir2Mask__C = (xdc_Bits32)0xffffffff;

/* mir3Mask__C */
__FAR__ const CT__ti_sysbios_family_arm_a8_intcps_Hwi_mir3Mask ti_sysbios_family_arm_a8_intcps_Hwi_mir3Mask__C = (xdc_Bits32)0xffffffff;

/* E_alreadyDefined__C */
__FAR__ const CT__ti_sysbios_family_arm_a8_intcps_Hwi_E_alreadyDefined ti_sysbios_family_arm_a8_intcps_Hwi_E_alreadyDefined__C = (((xdc_runtime_Error_Id)5200) << 16 | 0);

/* E_handleNotFound__C */
__FAR__ const CT__ti_sysbios_family_arm_a8_intcps_Hwi_E_handleNotFound ti_sysbios_family_arm_a8_intcps_Hwi_E_handleNotFound__C = (((xdc_runtime_Error_Id)5250) << 16 | 0);

/* E_undefined__C */
__FAR__ const CT__ti_sysbios_family_arm_a8_intcps_Hwi_E_undefined ti_sysbios_family_arm_a8_intcps_Hwi_E_undefined__C = (((xdc_runtime_Error_Id)5295) << 16 | 0);

/* E_badIntNum__C */
__FAR__ const CT__ti_sysbios_family_arm_a8_intcps_Hwi_E_badIntNum ti_sysbios_family_arm_a8_intcps_Hwi_E_badIntNum__C = (((xdc_runtime_Error_Id)5334) << 16 | 0);

/* E_excMin__C */
__FAR__ const CT__ti_sysbios_family_arm_a8_intcps_Hwi_E_excMin ti_sysbios_family_arm_a8_intcps_Hwi_E_excMin__C = (((xdc_runtime_Error_Id)5374) << 16 | 0);

/* LM_begin__C */
__FAR__ const CT__ti_sysbios_family_arm_a8_intcps_Hwi_LM_begin ti_sysbios_family_arm_a8_intcps_Hwi_LM_begin__C = (((xdc_runtime_Log_Event)6719) << 16 | 768);

/* LD_end__C */
__FAR__ const CT__ti_sysbios_family_arm_a8_intcps_Hwi_LD_end ti_sysbios_family_arm_a8_intcps_Hwi_LD_end__C = (((xdc_runtime_Log_Event)6789) << 16 | 512);

/* swiDisable__C */
__FAR__ const CT__ti_sysbios_family_arm_a8_intcps_Hwi_swiDisable ti_sysbios_family_arm_a8_intcps_Hwi_swiDisable__C = ((CT__ti_sysbios_family_arm_a8_intcps_Hwi_swiDisable)((xdc_Fxn)ti_sysbios_knl_Swi_disable__E));

/* swiRestoreHwi__C */
__FAR__ const CT__ti_sysbios_family_arm_a8_intcps_Hwi_swiRestoreHwi ti_sysbios_family_arm_a8_intcps_Hwi_swiRestoreHwi__C = ((CT__ti_sysbios_family_arm_a8_intcps_Hwi_swiRestoreHwi)((xdc_Fxn)ti_sysbios_knl_Swi_restoreHwi__E));

/* taskDisable__C */
__FAR__ const CT__ti_sysbios_family_arm_a8_intcps_Hwi_taskDisable ti_sysbios_family_arm_a8_intcps_Hwi_taskDisable__C = ((CT__ti_sysbios_family_arm_a8_intcps_Hwi_taskDisable)((xdc_Fxn)ti_sysbios_knl_Task_disable__E));

/* taskRestoreHwi__C */
__FAR__ const CT__ti_sysbios_family_arm_a8_intcps_Hwi_taskRestoreHwi ti_sysbios_family_arm_a8_intcps_Hwi_taskRestoreHwi__C = ((CT__ti_sysbios_family_arm_a8_intcps_Hwi_taskRestoreHwi)((xdc_Fxn)ti_sysbios_knl_Task_restoreHwi__E));

/* hooks__C */
__FAR__ const CT__ti_sysbios_family_arm_a8_intcps_Hwi_hooks ti_sysbios_family_arm_a8_intcps_Hwi_hooks__C = {0, 0};


/*
 * ======== ti.sysbios.family.arm.a8.ti81xx.TimerSupport INITIALIZERS ========
 */

/* --> ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Module_State_0_intNums__A */
__T1_ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Module_State__intNums ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Module_State_0_intNums__A[5] = {
    (xdc_UInt8)0x43,  /* [0] */
    (xdc_UInt8)0x44,  /* [1] */
    (xdc_UInt8)0x5c,  /* [2] */
    (xdc_UInt8)0x5d,  /* [3] */
    (xdc_UInt8)0x5e,  /* [4] */
};

/* Module__state__V */
ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Module_State__ ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Module__state__V = {
    ((void*)ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Module_State_0_intNums__A),  /* intNums */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Module__diagsEnabled ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Module__diagsIncluded ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Module__diagsMask ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Module__diagsMask__C = ((CT__ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Module__gateObj ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Module__gateObj__C = ((CT__ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Module__gatePrms ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Module__gatePrms__C = ((CT__ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Module__id ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Module__id__C = (xdc_Bits16)0x8035;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Module__loggerDefined ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Module__loggerObj ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Module__loggerObj__C = ((CT__ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Module__loggerFxn0 ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Module__loggerFxn0__C = ((CT__ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Module__loggerFxn1 ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Module__loggerFxn1__C = ((CT__ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Module__loggerFxn2 ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Module__loggerFxn2__C = ((CT__ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Module__loggerFxn4 ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Module__loggerFxn4__C = ((CT__ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Module__loggerFxn8 ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Module__loggerFxn8__C = ((CT__ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Module__startupDoneFxn ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Module__startupDoneFxn__C = ((CT__ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Object__count ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Object__heap ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Object__sizeof ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Object__table ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Object__table__C = 0;


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
__FAR__ const CT__ti_sysbios_family_arm_exc_Exception_Module__id ti_sysbios_family_arm_exc_Exception_Module__id__C = (xdc_Bits16)0x8030;

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
__FAR__ const CT__ti_sysbios_family_arm_exc_Exception_E_swi ti_sysbios_family_arm_exc_Exception_E_swi__C = (((xdc_runtime_Error_Id)5413) << 16 | 0);

/* E_prefetchAbort__C */
__FAR__ const CT__ti_sysbios_family_arm_exc_Exception_E_prefetchAbort ti_sysbios_family_arm_exc_Exception_E_prefetchAbort__C = (((xdc_runtime_Error_Id)5446) << 16 | 0);

/* E_dataAbort__C */
__FAR__ const CT__ti_sysbios_family_arm_exc_Exception_E_dataAbort ti_sysbios_family_arm_exc_Exception_E_dataAbort__C = (((xdc_runtime_Error_Id)5489) << 16 | 0);

/* E_undefinedInstruction__C */
__FAR__ const CT__ti_sysbios_family_arm_exc_Exception_E_undefinedInstruction ti_sysbios_family_arm_exc_Exception_E_undefinedInstruction__C = (((xdc_runtime_Error_Id)5528) << 16 | 0);

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
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__id ti_sysbios_gates_GateHwi_Module__id__C = (xdc_Bits16)0x8027;

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
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__id ti_sysbios_gates_GateMutex_Module__id__C = (xdc_Bits16)0x8028;

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
__FAR__ const CT__ti_sysbios_gates_GateMutex_A_badContext ti_sysbios_gates_GateMutex_A_badContext__C = (((xdc_runtime_Assert_Id)1781) << 16 | 16);


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
__FAR__ const CT__ti_sysbios_hal_Cache_Module__id ti_sysbios_hal_Cache_Module__id__C = (xdc_Bits16)0x8019;

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
    ti_sysbios_interfaces_IHwi_MaskingOption_LOWER,  /* maskSetting */
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
        (ti_sysbios_hal_Hwi_HwiProxy_Handle)&ti_sysbios_family_arm_a8_intcps_Hwi_Object__table__V[0],  /* pi */
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
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__id ti_sysbios_hal_Hwi_Module__id__C = (xdc_Bits16)0x8017;

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
__FAR__ const CT__ti_sysbios_hal_Hwi_E_stackOverflow ti_sysbios_hal_Hwi_E_stackOverflow__C = (((xdc_runtime_Error_Id)4572) << 16 | 0);


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
        (ti_sysbios_hal_Timer_TimerProxy_Handle)&ti_sysbios_timers_dmtimer_Timer_Object__table__V[0],  /* pi */
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
__FAR__ const CT__ti_sysbios_hal_Timer_Module__id ti_sysbios_hal_Timer_Module__id__C = (xdc_Bits16)0x8018;

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
__T1_ti_sysbios_heaps_HeapMem_Instance_State__buf ti_sysbios_heaps_HeapMem_Instance_State_0_buf__A[4096];

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
            ((xdc_UArg)(0x1000)),  /* size */
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
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__id ti_sysbios_heaps_HeapMem_Module__id__C = (xdc_Bits16)0x8037;

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
__FAR__ const CT__ti_sysbios_heaps_HeapMem_A_zeroBlock ti_sysbios_heaps_HeapMem_A_zeroBlock__C = (((xdc_runtime_Assert_Id)4136) << 16 | 16);

/* A_heapSize__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_A_heapSize ti_sysbios_heaps_HeapMem_A_heapSize__C = (((xdc_runtime_Assert_Id)4172) << 16 | 16);

/* A_align__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_A_align ti_sysbios_heaps_HeapMem_A_align__C = (((xdc_runtime_Assert_Id)4217) << 16 | 16);

/* E_memory__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_E_memory ti_sysbios_heaps_HeapMem_E_memory__C = (((xdc_runtime_Error_Id)5936) << 16 | 0);

/* A_invalidFree__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_A_invalidFree ti_sysbios_heaps_HeapMem_A_invalidFree__C = (((xdc_runtime_Assert_Id)4108) << 16 | 16);

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
__FAR__ const CT__ti_sysbios_knl_Clock_Module__id ti_sysbios_knl_Clock_Module__id__C = (xdc_Bits16)0x801b;

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
__FAR__ const CT__ti_sysbios_knl_Clock_LW_delayed ti_sysbios_knl_Clock_LW_delayed__C = (((xdc_runtime_Log_Event)6148) << 16 | 1024);

/* LM_tick__C */
__FAR__ const CT__ti_sysbios_knl_Clock_LM_tick ti_sysbios_knl_Clock_LM_tick__C = (((xdc_runtime_Log_Event)6170) << 16 | 768);

/* LM_begin__C */
__FAR__ const CT__ti_sysbios_knl_Clock_LM_begin ti_sysbios_knl_Clock_LM_begin__C = (((xdc_runtime_Log_Event)6188) << 16 | 768);

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
__FAR__ const CT__ti_sysbios_knl_Idle_Module__id ti_sysbios_knl_Idle_Module__id__C = (xdc_Bits16)0x801c;

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
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__id ti_sysbios_knl_Intrinsics_Module__id__C = (xdc_Bits16)0x801d;

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
__FAR__ const CT__ti_sysbios_knl_Queue_Module__id ti_sysbios_knl_Queue_Module__id__C = (xdc_Bits16)0x801e;

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
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__id ti_sysbios_knl_Semaphore_Module__id__C = (xdc_Bits16)0x801f;

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
__FAR__ const CT__ti_sysbios_knl_Semaphore_LM_post ti_sysbios_knl_Semaphore_LM_post__C = (((xdc_runtime_Log_Event)6220) << 16 | 768);

/* LM_pend__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_LM_pend ti_sysbios_knl_Semaphore_LM_pend__C = (((xdc_runtime_Log_Event)6250) << 16 | 768);

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
__FAR__ const CT__ti_sysbios_knl_Swi_Module__id ti_sysbios_knl_Swi_Module__id__C = (xdc_Bits16)0x8020;

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
__FAR__ const CT__ti_sysbios_knl_Swi_LM_begin ti_sysbios_knl_Swi_LM_begin__C = (((xdc_runtime_Log_Event)6293) << 16 | 768);

/* LD_end__C */
__FAR__ const CT__ti_sysbios_knl_Swi_LD_end ti_sysbios_knl_Swi_LD_end__C = (((xdc_runtime_Log_Event)6340) << 16 | 512);

/* LM_post__C */
__FAR__ const CT__ti_sysbios_knl_Swi_LM_post ti_sysbios_knl_Swi_LM_post__C = (((xdc_runtime_Log_Event)6358) << 16 | 768);

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

/* Module__root__V */
ti_sysbios_knl_Task_Module__ ti_sysbios_knl_Task_Module__root__V = {
    {&ti_sysbios_knl_Task_Module__root__V.link,  /* link.next */
    &ti_sysbios_knl_Task_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_knl_Task_Object__ ti_sysbios_knl_Task_Object__table__V[1] = {
    {/* instance#0 */
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Object__table__V[0].qElem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Object__table__V[0].qElem)),  /* prev */
        },  /* qElem */
        (xdc_Int)0x0,  /* priority */
        (xdc_UInt)0x1,  /* mask */
        ((xdc_Ptr)0),  /* context */
        ti_sysbios_knl_Task_Mode_READY,  /* mode */
        ((ti_sysbios_knl_Task_PendElem*)0),  /* pendElem */
        (xdc_SizeT)0x800,  /* stackSize */
        ((void*)ti_sysbios_knl_Task_Instance_State_0_stack__A),  /* stack */
        0,  /* stackHeap */
        ((xdc_Void(*)(xdc_UArg,xdc_UArg))((xdc_Fxn)ti_sysbios_knl_Idle_loop__E)),  /* fxn */
        ((xdc_UArg)(0x0)),  /* arg0 */
        ((xdc_UArg)(0x0)),  /* arg1 */
        ((xdc_Ptr)0),  /* env */
        ((void*)ti_sysbios_knl_Task_Instance_State_0_hookEnv__A),  /* hookEnv */
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
    (xdc_UInt)0x1,  /* vitalTasks */
    0,  /* curTask */
    0,  /* curQ */
    ((void*)ti_sysbios_knl_Task_Module_State_0_readyQ__A),  /* readyQ */
    (ti_sysbios_knl_Task_Handle)&ti_sysbios_knl_Task_Object__table__V[0],  /* idleTask */
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
__FAR__ const CT__ti_sysbios_knl_Task_Module__id ti_sysbios_knl_Task_Module__id__C = (xdc_Bits16)0x8021;

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
__FAR__ const CT__ti_sysbios_knl_Task_Object__count ti_sysbios_knl_Task_Object__count__C = 1;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_knl_Task_Object__heap ti_sysbios_knl_Task_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_knl_Task_Object__sizeof ti_sysbios_knl_Task_Object__sizeof__C = sizeof(ti_sysbios_knl_Task_Object__);

/* Object__table__C */
__FAR__ const CT__ti_sysbios_knl_Task_Object__table ti_sysbios_knl_Task_Object__table__C = ti_sysbios_knl_Task_Object__table__V;

/* LM_switch__C */
__FAR__ const CT__ti_sysbios_knl_Task_LM_switch ti_sysbios_knl_Task_LM_switch__C = (((xdc_runtime_Log_Event)6398) << 16 | 768);

/* LM_sleep__C */
__FAR__ const CT__ti_sysbios_knl_Task_LM_sleep ti_sysbios_knl_Task_LM_sleep__C = (((xdc_runtime_Log_Event)6466) << 16 | 768);

/* LD_ready__C */
__FAR__ const CT__ti_sysbios_knl_Task_LD_ready ti_sysbios_knl_Task_LD_ready__C = (((xdc_runtime_Log_Event)6511) << 16 | 512);

/* LD_block__C */
__FAR__ const CT__ti_sysbios_knl_Task_LD_block ti_sysbios_knl_Task_LD_block__C = (((xdc_runtime_Log_Event)6552) << 16 | 512);

/* LM_yield__C */
__FAR__ const CT__ti_sysbios_knl_Task_LM_yield ti_sysbios_knl_Task_LM_yield__C = (((xdc_runtime_Log_Event)6584) << 16 | 768);

/* LM_setPri__C */
__FAR__ const CT__ti_sysbios_knl_Task_LM_setPri ti_sysbios_knl_Task_LM_setPri__C = (((xdc_runtime_Log_Event)6632) << 16 | 768);

/* LD_exit__C */
__FAR__ const CT__ti_sysbios_knl_Task_LD_exit ti_sysbios_knl_Task_LD_exit__C = (((xdc_runtime_Log_Event)6688) << 16 | 512);

/* E_stackOverflow__C */
__FAR__ const CT__ti_sysbios_knl_Task_E_stackOverflow ti_sysbios_knl_Task_E_stackOverflow__C = (((xdc_runtime_Error_Id)4609) << 16 | 0);

/* E_spOutOfBounds__C */
__FAR__ const CT__ti_sysbios_knl_Task_E_spOutOfBounds ti_sysbios_knl_Task_E_spOutOfBounds__C = (((xdc_runtime_Error_Id)4652) << 16 | 0);

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
 * ======== ti.sysbios.timers.dmtimer.Timer INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_timers_dmtimer_Timer_Object__DESC__C;

/* Object__PARAMS__C */
__FAR__ const ti_sysbios_timers_dmtimer_Timer_Params ti_sysbios_timers_dmtimer_Timer_Object__PARAMS__C = {
    sizeof (ti_sysbios_timers_dmtimer_Timer_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_timers_dmtimer_Timer_Object__PARAMS__C.__iprms, /* instance */
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
        (xdc_Bits8)0x0,  /* idlemode */
        (xdc_Bits8)0x0,  /* emufree */
        (xdc_Bits8)0x1,  /* softreset */
    },  /* tiocpCfg */
    {
        (xdc_Bits8)0x0,  /* mat_it_ena */
        (xdc_Bits8)0x1,  /* ovf_it_ena */
        (xdc_Bits8)0x0,  /* tcar_it_ena */
    },  /* tier */
    {
        (xdc_Bits8)0x0,  /* mat_wup_ena */
        (xdc_Bits8)0x0,  /* ovf_wup_ena */
        (xdc_Bits8)0x0,  /* tcar_wup_ena */
    },  /* twer */
    {
        (xdc_Bits32)0x0,  /* ptv */
        (xdc_Bits8)0x0,  /* pre */
        (xdc_Bits8)0x0,  /* ce */
        (xdc_Bits8)0x0,  /* scpwm */
        (xdc_Bits16)0x0,  /* tcm */
        (xdc_Bits16)0x0,  /* trg */
        (xdc_Bits8)0x0,  /* pt */
        (xdc_Bits8)0x0,  /* captmode */
        (xdc_Bits8)0x0,  /* gpocfg */
    },  /* tclr */
    {
        (xdc_Bits8)0x0,  /* sft */
        (xdc_Bits8)0x1,  /* posted */
    },  /* tsicr */
    (xdc_UInt32)0x0,  /* tmar */
    (xdc_Int)(-0x0 - 1),  /* intNum */
    ((ti_sysbios_hal_Hwi_Params*)0),  /* hwiParams */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_timers_dmtimer_Timer_Module__ ti_sysbios_timers_dmtimer_Timer_Module__root__V = {
    {&ti_sysbios_timers_dmtimer_Timer_Module__root__V.link,  /* link.next */
    &ti_sysbios_timers_dmtimer_Timer_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_timers_dmtimer_Timer_Object__ ti_sysbios_timers_dmtimer_Timer_Object__table__V[1] = {
    {/* instance#0 */
        0,
        1,  /* staticInst */
        (xdc_Int)0x0,  /* id */
        (xdc_UInt)0x1,  /* tiocpCfg */
        (xdc_UInt)0x0,  /* tmar */
        (xdc_UInt)0x2,  /* tier */
        (xdc_UInt)0x0,  /* twer */
        (xdc_UInt)0x0,  /* tclr */
        (xdc_UInt)0x4,  /* tsicr */
        ti_sysbios_interfaces_ITimer_RunMode_CONTINUOUS,  /* runMode */
        ti_sysbios_interfaces_ITimer_StartMode_AUTO,  /* startMode */
        (xdc_UInt)0x3e8,  /* period */
        ti_sysbios_interfaces_ITimer_PeriodType_MICROSECS,  /* periodType */
        (xdc_UInt)0x43,  /* intNum */
        ((xdc_UArg)0),  /* arg */
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_knl_Clock_doTick__I)),  /* tickFxn */
        {
            (xdc_Bits32)0x0,  /* hi */
            (xdc_Bits32)0x0,  /* lo */
        },  /* extFreq */
        (ti_sysbios_hal_Hwi_Handle)&ti_sysbios_hal_Hwi_Object__table__V[0],  /* hwi */
        (xdc_UInt)0x0,  /* prevThreshold */
        (xdc_UInt)0x0,  /* rollovers */
    },
};

/* --> ti_sysbios_timers_dmtimer_Timer_Module_State_0_device__A */
__T1_ti_sysbios_timers_dmtimer_Timer_Module_State__device ti_sysbios_timers_dmtimer_Timer_Module_State_0_device__A[5] = {
    {
        (xdc_UInt)0x43,  /* intNum */
        (xdc_UInt)(-0x0 - 1),  /* eventId */
        ((xdc_Ptr)((void*)0x4802e000)),  /* baseAddr */
    },  /* [0] */
    {
        (xdc_UInt)0x44,  /* intNum */
        (xdc_UInt)(-0x0 - 1),  /* eventId */
        ((xdc_Ptr)((void*)0x48040000)),  /* baseAddr */
    },  /* [1] */
    {
        (xdc_UInt)0x5c,  /* intNum */
        (xdc_UInt)(-0x0 - 1),  /* eventId */
        ((xdc_Ptr)((void*)0x48044000)),  /* baseAddr */
    },  /* [2] */
    {
        (xdc_UInt)0x5d,  /* intNum */
        (xdc_UInt)(-0x0 - 1),  /* eventId */
        ((xdc_Ptr)((void*)0x48046000)),  /* baseAddr */
    },  /* [3] */
    {
        (xdc_UInt)0x5e,  /* intNum */
        (xdc_UInt)(-0x0 - 1),  /* eventId */
        ((xdc_Ptr)((void*)0x48048000)),  /* baseAddr */
    },  /* [4] */
};

/* --> ti_sysbios_timers_dmtimer_Timer_Module_State_0_handles__A */
__T1_ti_sysbios_timers_dmtimer_Timer_Module_State__handles ti_sysbios_timers_dmtimer_Timer_Module_State_0_handles__A[5] = {
    (ti_sysbios_timers_dmtimer_Timer_Handle)&ti_sysbios_timers_dmtimer_Timer_Object__table__V[0],  /* [0] */
    0,  /* [1] */
    0,  /* [2] */
    0,  /* [3] */
    0,  /* [4] */
};

/* Module__state__V */
ti_sysbios_timers_dmtimer_Timer_Module_State__ ti_sysbios_timers_dmtimer_Timer_Module__state__V = {
    (xdc_Bits32)0x1e,  /* availMask */
    {
        (xdc_Bits32)0x0,  /* hi */
        (xdc_Bits32)0x8000,  /* lo */
    },  /* intFreq */
    ((void*)ti_sysbios_timers_dmtimer_Timer_Module_State_0_device__A),  /* device */
    ((void*)ti_sysbios_timers_dmtimer_Timer_Module_State_0_handles__A),  /* handles */
    1,  /* firstInit */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_timers_dmtimer_Timer_Module__diagsEnabled ti_sysbios_timers_dmtimer_Timer_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_timers_dmtimer_Timer_Module__diagsIncluded ti_sysbios_timers_dmtimer_Timer_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_timers_dmtimer_Timer_Module__diagsMask ti_sysbios_timers_dmtimer_Timer_Module__diagsMask__C = ((CT__ti_sysbios_timers_dmtimer_Timer_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_timers_dmtimer_Timer_Module__gateObj ti_sysbios_timers_dmtimer_Timer_Module__gateObj__C = ((CT__ti_sysbios_timers_dmtimer_Timer_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_timers_dmtimer_Timer_Module__gatePrms ti_sysbios_timers_dmtimer_Timer_Module__gatePrms__C = ((CT__ti_sysbios_timers_dmtimer_Timer_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_timers_dmtimer_Timer_Module__id ti_sysbios_timers_dmtimer_Timer_Module__id__C = (xdc_Bits16)0x8033;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_timers_dmtimer_Timer_Module__loggerDefined ti_sysbios_timers_dmtimer_Timer_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_timers_dmtimer_Timer_Module__loggerObj ti_sysbios_timers_dmtimer_Timer_Module__loggerObj__C = ((CT__ti_sysbios_timers_dmtimer_Timer_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_timers_dmtimer_Timer_Module__loggerFxn0 ti_sysbios_timers_dmtimer_Timer_Module__loggerFxn0__C = ((CT__ti_sysbios_timers_dmtimer_Timer_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_timers_dmtimer_Timer_Module__loggerFxn1 ti_sysbios_timers_dmtimer_Timer_Module__loggerFxn1__C = ((CT__ti_sysbios_timers_dmtimer_Timer_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_timers_dmtimer_Timer_Module__loggerFxn2 ti_sysbios_timers_dmtimer_Timer_Module__loggerFxn2__C = ((CT__ti_sysbios_timers_dmtimer_Timer_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_timers_dmtimer_Timer_Module__loggerFxn4 ti_sysbios_timers_dmtimer_Timer_Module__loggerFxn4__C = ((CT__ti_sysbios_timers_dmtimer_Timer_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_timers_dmtimer_Timer_Module__loggerFxn8 ti_sysbios_timers_dmtimer_Timer_Module__loggerFxn8__C = ((CT__ti_sysbios_timers_dmtimer_Timer_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_timers_dmtimer_Timer_Module__startupDoneFxn ti_sysbios_timers_dmtimer_Timer_Module__startupDoneFxn__C = ((CT__ti_sysbios_timers_dmtimer_Timer_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_timers_dmtimer_Timer_Object__count ti_sysbios_timers_dmtimer_Timer_Object__count__C = 1;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_timers_dmtimer_Timer_Object__heap ti_sysbios_timers_dmtimer_Timer_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_timers_dmtimer_Timer_Object__sizeof ti_sysbios_timers_dmtimer_Timer_Object__sizeof__C = sizeof(ti_sysbios_timers_dmtimer_Timer_Object__);

/* Object__table__C */
__FAR__ const CT__ti_sysbios_timers_dmtimer_Timer_Object__table ti_sysbios_timers_dmtimer_Timer_Object__table__C = ti_sysbios_timers_dmtimer_Timer_Object__table__V;

/* A_notAvailable__C */
__FAR__ const CT__ti_sysbios_timers_dmtimer_Timer_A_notAvailable ti_sysbios_timers_dmtimer_Timer_A_notAvailable__C = (((xdc_runtime_Assert_Id)3718) << 16 | 16);

/* E_invalidTimer__C */
__FAR__ const CT__ti_sysbios_timers_dmtimer_Timer_E_invalidTimer ti_sysbios_timers_dmtimer_Timer_E_invalidTimer__C = (((xdc_runtime_Error_Id)5620) << 16 | 0);

/* E_notAvailable__C */
__FAR__ const CT__ti_sysbios_timers_dmtimer_Timer_E_notAvailable ti_sysbios_timers_dmtimer_Timer_E_notAvailable__C = (((xdc_runtime_Error_Id)5656) << 16 | 0);

/* E_cannotSupport__C */
__FAR__ const CT__ti_sysbios_timers_dmtimer_Timer_E_cannotSupport ti_sysbios_timers_dmtimer_Timer_E_cannotSupport__C = (((xdc_runtime_Error_Id)5695) << 16 | 0);

/* E_freqMismatch__C */
__FAR__ const CT__ti_sysbios_timers_dmtimer_Timer_E_freqMismatch ti_sysbios_timers_dmtimer_Timer_E_freqMismatch__C = (((xdc_runtime_Error_Id)5753) << 16 | 0);

/* anyMask__C */
__FAR__ const CT__ti_sysbios_timers_dmtimer_Timer_anyMask ti_sysbios_timers_dmtimer_Timer_anyMask__C = (xdc_Bits32)0x1f;

/* checkFrequency__C */
__FAR__ const CT__ti_sysbios_timers_dmtimer_Timer_checkFrequency ti_sysbios_timers_dmtimer_Timer_checkFrequency__C = 1;

/* startupNeeded__C */
__FAR__ const CT__ti_sysbios_timers_dmtimer_Timer_startupNeeded ti_sysbios_timers_dmtimer_Timer_startupNeeded__C = 1;

/* numTimerDevices__C */
__FAR__ const CT__ti_sysbios_timers_dmtimer_Timer_numTimerDevices ti_sysbios_timers_dmtimer_Timer_numTimerDevices__C = (xdc_Int)0x5;


/*
 * ======== ti.sysbios.timers.dmtimer.Timer_TimerSupportProxy INITIALIZERS ========
 */


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
__FAR__ const CT__xdc_runtime_Assert_E_assertFailed xdc_runtime_Assert_E_assertFailed__C = (((xdc_runtime_Error_Id)4332) << 16 | 0);


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
__FAR__ const CT__xdc_runtime_Error_E_generic xdc_runtime_Error_E_generic__C = (((xdc_runtime_Error_Id)4354) << 16 | 0);

/* E_memory__C */
__FAR__ const CT__xdc_runtime_Error_E_memory xdc_runtime_Error_E_memory__C = (((xdc_runtime_Error_Id)4358) << 16 | 0);

/* E_msgCode__C */
__FAR__ const CT__xdc_runtime_Error_E_msgCode xdc_runtime_Error_E_msgCode__C = (((xdc_runtime_Error_Id)4392) << 16 | 0);

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
__FAR__ const CT__xdc_runtime_Log_L_construct xdc_runtime_Log_L_construct__C = (((xdc_runtime_Log_Event)5972) << 16 | 4);

/* L_create__C */
__FAR__ const CT__xdc_runtime_Log_L_create xdc_runtime_Log_L_create__C = (((xdc_runtime_Log_Event)5996) << 16 | 4);

/* L_destruct__C */
__FAR__ const CT__xdc_runtime_Log_L_destruct xdc_runtime_Log_L_destruct__C = (((xdc_runtime_Log_Event)6017) << 16 | 4);

/* L_delete__C */
__FAR__ const CT__xdc_runtime_Log_L_delete xdc_runtime_Log_L_delete__C = (((xdc_runtime_Log_Event)6036) << 16 | 4);

/* L_error__C */
__FAR__ const CT__xdc_runtime_Log_L_error xdc_runtime_Log_L_error__C = (((xdc_runtime_Log_Event)6053) << 16 | 192);

/* L_warning__C */
__FAR__ const CT__xdc_runtime_Log_L_warning xdc_runtime_Log_L_warning__C = (((xdc_runtime_Log_Event)6067) << 16 | 224);

/* L_info__C */
__FAR__ const CT__xdc_runtime_Log_L_info xdc_runtime_Log_L_info__C = (((xdc_runtime_Log_Event)6083) << 16 | 16384);

/* L_start__C */
__FAR__ const CT__xdc_runtime_Log_L_start xdc_runtime_Log_L_start__C = (((xdc_runtime_Log_Event)6090) << 16 | 32768);

/* L_stop__C */
__FAR__ const CT__xdc_runtime_Log_L_stop xdc_runtime_Log_L_stop__C = (((xdc_runtime_Log_Event)6101) << 16 | 32768);

/* L_startInstance__C */
__FAR__ const CT__xdc_runtime_Log_L_startInstance xdc_runtime_Log_L_startInstance__C = (((xdc_runtime_Log_Event)6111) << 16 | 32768);

/* L_stopInstance__C */
__FAR__ const CT__xdc_runtime_Log_L_stopInstance xdc_runtime_Log_L_stopInstance__C = (((xdc_runtime_Log_Event)6130) << 16 | 32768);


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
    ((xdc_Void(*)(xdc_Void))((xdc_Fxn)ti_sysbios_family_arm_a8_Cache_startup__I)),  /* [0] */
    ((xdc_Void(*)(xdc_Void))((xdc_Fxn)ti_sysbios_heaps_HeapMem_init__I)),  /* [1] */
    ((xdc_Void(*)(xdc_Void))((xdc_Fxn)ti_sysbios_hal_Hwi_initStack)),  /* [2] */
};

/* --> xdc_runtime_Startup_lastFxns__A */
const __T1_xdc_runtime_Startup_lastFxns xdc_runtime_Startup_lastFxns__A[1] = {
    ((xdc_Void(*)(xdc_Void))((xdc_Fxn)xdc_runtime_System_lastFxn__I)),  /* [0] */
};

/* --> xdc_runtime_Startup_sfxnTab__A */
const __T1_xdc_runtime_Startup_sfxnTab xdc_runtime_Startup_sfxnTab__A[13] = {
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)xdc_runtime_System_Module_startup__E)),  /* [0] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)xdc_runtime_SysMin_Module_startup__E)),  /* [1] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_hal_Hwi_Module_startup__E)),  /* [2] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_hal_Timer_Module_startup__E)),  /* [3] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_knl_Clock_Module_startup__E)),  /* [4] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_knl_Swi_Module_startup__E)),  /* [5] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_knl_Task_Module_startup__E)),  /* [6] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_family_arm_a8_Mmu_Module_startup__E)),  /* [7] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_family_arm_a8_TimestampProvider_Module_startup__E)),  /* [8] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_family_arm_a8_intcps_Hwi_Module_startup__E)),  /* [9] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_family_arm_exc_Exception_Module_startup__E)),  /* [10] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_timers_dmtimer_Timer_Module_startup__E)),  /* [11] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Module_startup__E)),  /* [12] */
};

/* --> xdc_runtime_Startup_sfxnRts__A */
const __T1_xdc_runtime_Startup_sfxnRts xdc_runtime_Startup_sfxnRts__A[13] = {
    1,  /* [0] */
    1,  /* [1] */
    0,  /* [2] */
    0,  /* [3] */
    0,  /* [4] */
    0,  /* [5] */
    0,  /* [6] */
    0,  /* [7] */
    1,  /* [8] */
    0,  /* [9] */
    0,  /* [10] */
    0,  /* [11] */
    0,  /* [12] */
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
const __T1_xdc_runtime_Text_charTab xdc_runtime_Text_charTab__A[7244] = {
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
    (xdc_Char)0x62,  /* [1309] */
    (xdc_Char)0x61,  /* [1310] */
    (xdc_Char)0x64,  /* [1311] */
    (xdc_Char)0x42,  /* [1312] */
    (xdc_Char)0x6c,  /* [1313] */
    (xdc_Char)0x6f,  /* [1314] */
    (xdc_Char)0x63,  /* [1315] */
    (xdc_Char)0x6b,  /* [1316] */
    (xdc_Char)0x4c,  /* [1317] */
    (xdc_Char)0x65,  /* [1318] */
    (xdc_Char)0x6e,  /* [1319] */
    (xdc_Char)0x67,  /* [1320] */
    (xdc_Char)0x74,  /* [1321] */
    (xdc_Char)0x68,  /* [1322] */
    (xdc_Char)0x3a,  /* [1323] */
    (xdc_Char)0x20,  /* [1324] */
    (xdc_Char)0x42,  /* [1325] */
    (xdc_Char)0x6c,  /* [1326] */
    (xdc_Char)0x6f,  /* [1327] */
    (xdc_Char)0x63,  /* [1328] */
    (xdc_Char)0x6b,  /* [1329] */
    (xdc_Char)0x20,  /* [1330] */
    (xdc_Char)0x6c,  /* [1331] */
    (xdc_Char)0x65,  /* [1332] */
    (xdc_Char)0x6e,  /* [1333] */
    (xdc_Char)0x67,  /* [1334] */
    (xdc_Char)0x74,  /* [1335] */
    (xdc_Char)0x68,  /* [1336] */
    (xdc_Char)0x20,  /* [1337] */
    (xdc_Char)0x74,  /* [1338] */
    (xdc_Char)0x6f,  /* [1339] */
    (xdc_Char)0x6f,  /* [1340] */
    (xdc_Char)0x20,  /* [1341] */
    (xdc_Char)0x6c,  /* [1342] */
    (xdc_Char)0x61,  /* [1343] */
    (xdc_Char)0x72,  /* [1344] */
    (xdc_Char)0x67,  /* [1345] */
    (xdc_Char)0x65,  /* [1346] */
    (xdc_Char)0x2e,  /* [1347] */
    (xdc_Char)0x20,  /* [1348] */
    (xdc_Char)0x4d,  /* [1349] */
    (xdc_Char)0x75,  /* [1350] */
    (xdc_Char)0x73,  /* [1351] */
    (xdc_Char)0x74,  /* [1352] */
    (xdc_Char)0x20,  /* [1353] */
    (xdc_Char)0x62,  /* [1354] */
    (xdc_Char)0x65,  /* [1355] */
    (xdc_Char)0x20,  /* [1356] */
    (xdc_Char)0x3c,  /* [1357] */
    (xdc_Char)0x3d,  /* [1358] */
    (xdc_Char)0x20,  /* [1359] */
    (xdc_Char)0x4c,  /* [1360] */
    (xdc_Char)0x32,  /* [1361] */
    (xdc_Char)0x20,  /* [1362] */
    (xdc_Char)0x77,  /* [1363] */
    (xdc_Char)0x61,  /* [1364] */
    (xdc_Char)0x79,  /* [1365] */
    (xdc_Char)0x20,  /* [1366] */
    (xdc_Char)0x73,  /* [1367] */
    (xdc_Char)0x69,  /* [1368] */
    (xdc_Char)0x7a,  /* [1369] */
    (xdc_Char)0x65,  /* [1370] */
    (xdc_Char)0x2e,  /* [1371] */
    (xdc_Char)0x0,  /* [1372] */
    (xdc_Char)0x41,  /* [1373] */
    (xdc_Char)0x5f,  /* [1374] */
    (xdc_Char)0x62,  /* [1375] */
    (xdc_Char)0x6c,  /* [1376] */
    (xdc_Char)0x6f,  /* [1377] */
    (xdc_Char)0x63,  /* [1378] */
    (xdc_Char)0x6b,  /* [1379] */
    (xdc_Char)0x43,  /* [1380] */
    (xdc_Char)0x72,  /* [1381] */
    (xdc_Char)0x6f,  /* [1382] */
    (xdc_Char)0x73,  /* [1383] */
    (xdc_Char)0x73,  /* [1384] */
    (xdc_Char)0x65,  /* [1385] */
    (xdc_Char)0x73,  /* [1386] */
    (xdc_Char)0x50,  /* [1387] */
    (xdc_Char)0x61,  /* [1388] */
    (xdc_Char)0x67,  /* [1389] */
    (xdc_Char)0x65,  /* [1390] */
    (xdc_Char)0x3a,  /* [1391] */
    (xdc_Char)0x20,  /* [1392] */
    (xdc_Char)0x4d,  /* [1393] */
    (xdc_Char)0x65,  /* [1394] */
    (xdc_Char)0x6d,  /* [1395] */
    (xdc_Char)0x6f,  /* [1396] */
    (xdc_Char)0x72,  /* [1397] */
    (xdc_Char)0x79,  /* [1398] */
    (xdc_Char)0x20,  /* [1399] */
    (xdc_Char)0x62,  /* [1400] */
    (xdc_Char)0x6c,  /* [1401] */
    (xdc_Char)0x6f,  /* [1402] */
    (xdc_Char)0x63,  /* [1403] */
    (xdc_Char)0x6b,  /* [1404] */
    (xdc_Char)0x20,  /* [1405] */
    (xdc_Char)0x63,  /* [1406] */
    (xdc_Char)0x72,  /* [1407] */
    (xdc_Char)0x6f,  /* [1408] */
    (xdc_Char)0x73,  /* [1409] */
    (xdc_Char)0x73,  /* [1410] */
    (xdc_Char)0x65,  /* [1411] */
    (xdc_Char)0x73,  /* [1412] */
    (xdc_Char)0x20,  /* [1413] */
    (xdc_Char)0x4c,  /* [1414] */
    (xdc_Char)0x32,  /* [1415] */
    (xdc_Char)0x20,  /* [1416] */
    (xdc_Char)0x77,  /* [1417] */
    (xdc_Char)0x61,  /* [1418] */
    (xdc_Char)0x79,  /* [1419] */
    (xdc_Char)0x20,  /* [1420] */
    (xdc_Char)0x70,  /* [1421] */
    (xdc_Char)0x61,  /* [1422] */
    (xdc_Char)0x67,  /* [1423] */
    (xdc_Char)0x65,  /* [1424] */
    (xdc_Char)0x20,  /* [1425] */
    (xdc_Char)0x62,  /* [1426] */
    (xdc_Char)0x6f,  /* [1427] */
    (xdc_Char)0x75,  /* [1428] */
    (xdc_Char)0x6e,  /* [1429] */
    (xdc_Char)0x64,  /* [1430] */
    (xdc_Char)0x61,  /* [1431] */
    (xdc_Char)0x72,  /* [1432] */
    (xdc_Char)0x79,  /* [1433] */
    (xdc_Char)0x2e,  /* [1434] */
    (xdc_Char)0x0,  /* [1435] */
    (xdc_Char)0x41,  /* [1436] */
    (xdc_Char)0x5f,  /* [1437] */
    (xdc_Char)0x6e,  /* [1438] */
    (xdc_Char)0x75,  /* [1439] */
    (xdc_Char)0x6c,  /* [1440] */
    (xdc_Char)0x6c,  /* [1441] */
    (xdc_Char)0x50,  /* [1442] */
    (xdc_Char)0x6f,  /* [1443] */
    (xdc_Char)0x69,  /* [1444] */
    (xdc_Char)0x6e,  /* [1445] */
    (xdc_Char)0x74,  /* [1446] */
    (xdc_Char)0x65,  /* [1447] */
    (xdc_Char)0x72,  /* [1448] */
    (xdc_Char)0x3a,  /* [1449] */
    (xdc_Char)0x20,  /* [1450] */
    (xdc_Char)0x50,  /* [1451] */
    (xdc_Char)0x6f,  /* [1452] */
    (xdc_Char)0x69,  /* [1453] */
    (xdc_Char)0x6e,  /* [1454] */
    (xdc_Char)0x74,  /* [1455] */
    (xdc_Char)0x65,  /* [1456] */
    (xdc_Char)0x72,  /* [1457] */
    (xdc_Char)0x20,  /* [1458] */
    (xdc_Char)0x69,  /* [1459] */
    (xdc_Char)0x73,  /* [1460] */
    (xdc_Char)0x20,  /* [1461] */
    (xdc_Char)0x6e,  /* [1462] */
    (xdc_Char)0x75,  /* [1463] */
    (xdc_Char)0x6c,  /* [1464] */
    (xdc_Char)0x6c,  /* [1465] */
    (xdc_Char)0x0,  /* [1466] */
    (xdc_Char)0x41,  /* [1467] */
    (xdc_Char)0x5f,  /* [1468] */
    (xdc_Char)0x75,  /* [1469] */
    (xdc_Char)0x6e,  /* [1470] */
    (xdc_Char)0x6b,  /* [1471] */
    (xdc_Char)0x6e,  /* [1472] */
    (xdc_Char)0x6f,  /* [1473] */
    (xdc_Char)0x77,  /* [1474] */
    (xdc_Char)0x6e,  /* [1475] */
    (xdc_Char)0x44,  /* [1476] */
    (xdc_Char)0x65,  /* [1477] */
    (xdc_Char)0x73,  /* [1478] */
    (xdc_Char)0x63,  /* [1479] */
    (xdc_Char)0x54,  /* [1480] */
    (xdc_Char)0x79,  /* [1481] */
    (xdc_Char)0x70,  /* [1482] */
    (xdc_Char)0x65,  /* [1483] */
    (xdc_Char)0x3a,  /* [1484] */
    (xdc_Char)0x20,  /* [1485] */
    (xdc_Char)0x44,  /* [1486] */
    (xdc_Char)0x65,  /* [1487] */
    (xdc_Char)0x73,  /* [1488] */
    (xdc_Char)0x63,  /* [1489] */
    (xdc_Char)0x72,  /* [1490] */
    (xdc_Char)0x69,  /* [1491] */
    (xdc_Char)0x70,  /* [1492] */
    (xdc_Char)0x74,  /* [1493] */
    (xdc_Char)0x6f,  /* [1494] */
    (xdc_Char)0x72,  /* [1495] */
    (xdc_Char)0x20,  /* [1496] */
    (xdc_Char)0x74,  /* [1497] */
    (xdc_Char)0x79,  /* [1498] */
    (xdc_Char)0x70,  /* [1499] */
    (xdc_Char)0x65,  /* [1500] */
    (xdc_Char)0x20,  /* [1501] */
    (xdc_Char)0x69,  /* [1502] */
    (xdc_Char)0x73,  /* [1503] */
    (xdc_Char)0x20,  /* [1504] */
    (xdc_Char)0x6e,  /* [1505] */
    (xdc_Char)0x6f,  /* [1506] */
    (xdc_Char)0x74,  /* [1507] */
    (xdc_Char)0x20,  /* [1508] */
    (xdc_Char)0x72,  /* [1509] */
    (xdc_Char)0x65,  /* [1510] */
    (xdc_Char)0x63,  /* [1511] */
    (xdc_Char)0x6f,  /* [1512] */
    (xdc_Char)0x67,  /* [1513] */
    (xdc_Char)0x6e,  /* [1514] */
    (xdc_Char)0x69,  /* [1515] */
    (xdc_Char)0x7a,  /* [1516] */
    (xdc_Char)0x65,  /* [1517] */
    (xdc_Char)0x64,  /* [1518] */
    (xdc_Char)0x0,  /* [1519] */
    (xdc_Char)0x41,  /* [1520] */
    (xdc_Char)0x5f,  /* [1521] */
    (xdc_Char)0x62,  /* [1522] */
    (xdc_Char)0x61,  /* [1523] */
    (xdc_Char)0x64,  /* [1524] */
    (xdc_Char)0x43,  /* [1525] */
    (xdc_Char)0x6f,  /* [1526] */
    (xdc_Char)0x6e,  /* [1527] */
    (xdc_Char)0x74,  /* [1528] */
    (xdc_Char)0x65,  /* [1529] */
    (xdc_Char)0x78,  /* [1530] */
    (xdc_Char)0x74,  /* [1531] */
    (xdc_Char)0x3a,  /* [1532] */
    (xdc_Char)0x20,  /* [1533] */
    (xdc_Char)0x62,  /* [1534] */
    (xdc_Char)0x61,  /* [1535] */
    (xdc_Char)0x64,  /* [1536] */
    (xdc_Char)0x20,  /* [1537] */
    (xdc_Char)0x63,  /* [1538] */
    (xdc_Char)0x61,  /* [1539] */
    (xdc_Char)0x6c,  /* [1540] */
    (xdc_Char)0x6c,  /* [1541] */
    (xdc_Char)0x69,  /* [1542] */
    (xdc_Char)0x6e,  /* [1543] */
    (xdc_Char)0x67,  /* [1544] */
    (xdc_Char)0x20,  /* [1545] */
    (xdc_Char)0x63,  /* [1546] */
    (xdc_Char)0x6f,  /* [1547] */
    (xdc_Char)0x6e,  /* [1548] */
    (xdc_Char)0x74,  /* [1549] */
    (xdc_Char)0x65,  /* [1550] */
    (xdc_Char)0x78,  /* [1551] */
    (xdc_Char)0x74,  /* [1552] */
    (xdc_Char)0x2e,  /* [1553] */
    (xdc_Char)0x20,  /* [1554] */
    (xdc_Char)0x4d,  /* [1555] */
    (xdc_Char)0x61,  /* [1556] */
    (xdc_Char)0x79,  /* [1557] */
    (xdc_Char)0x20,  /* [1558] */
    (xdc_Char)0x6e,  /* [1559] */
    (xdc_Char)0x6f,  /* [1560] */
    (xdc_Char)0x74,  /* [1561] */
    (xdc_Char)0x20,  /* [1562] */
    (xdc_Char)0x62,  /* [1563] */
    (xdc_Char)0x65,  /* [1564] */
    (xdc_Char)0x20,  /* [1565] */
    (xdc_Char)0x65,  /* [1566] */
    (xdc_Char)0x6e,  /* [1567] */
    (xdc_Char)0x74,  /* [1568] */
    (xdc_Char)0x65,  /* [1569] */
    (xdc_Char)0x72,  /* [1570] */
    (xdc_Char)0x65,  /* [1571] */
    (xdc_Char)0x64,  /* [1572] */
    (xdc_Char)0x20,  /* [1573] */
    (xdc_Char)0x66,  /* [1574] */
    (xdc_Char)0x72,  /* [1575] */
    (xdc_Char)0x6f,  /* [1576] */
    (xdc_Char)0x6d,  /* [1577] */
    (xdc_Char)0x20,  /* [1578] */
    (xdc_Char)0x61,  /* [1579] */
    (xdc_Char)0x20,  /* [1580] */
    (xdc_Char)0x68,  /* [1581] */
    (xdc_Char)0x61,  /* [1582] */
    (xdc_Char)0x72,  /* [1583] */
    (xdc_Char)0x64,  /* [1584] */
    (xdc_Char)0x77,  /* [1585] */
    (xdc_Char)0x61,  /* [1586] */
    (xdc_Char)0x72,  /* [1587] */
    (xdc_Char)0x65,  /* [1588] */
    (xdc_Char)0x20,  /* [1589] */
    (xdc_Char)0x69,  /* [1590] */
    (xdc_Char)0x6e,  /* [1591] */
    (xdc_Char)0x74,  /* [1592] */
    (xdc_Char)0x65,  /* [1593] */
    (xdc_Char)0x72,  /* [1594] */
    (xdc_Char)0x72,  /* [1595] */
    (xdc_Char)0x75,  /* [1596] */
    (xdc_Char)0x70,  /* [1597] */
    (xdc_Char)0x74,  /* [1598] */
    (xdc_Char)0x20,  /* [1599] */
    (xdc_Char)0x74,  /* [1600] */
    (xdc_Char)0x68,  /* [1601] */
    (xdc_Char)0x72,  /* [1602] */
    (xdc_Char)0x65,  /* [1603] */
    (xdc_Char)0x61,  /* [1604] */
    (xdc_Char)0x64,  /* [1605] */
    (xdc_Char)0x2e,  /* [1606] */
    (xdc_Char)0x0,  /* [1607] */
    (xdc_Char)0x41,  /* [1608] */
    (xdc_Char)0x5f,  /* [1609] */
    (xdc_Char)0x62,  /* [1610] */
    (xdc_Char)0x61,  /* [1611] */
    (xdc_Char)0x64,  /* [1612] */
    (xdc_Char)0x43,  /* [1613] */
    (xdc_Char)0x6f,  /* [1614] */
    (xdc_Char)0x6e,  /* [1615] */
    (xdc_Char)0x74,  /* [1616] */
    (xdc_Char)0x65,  /* [1617] */
    (xdc_Char)0x78,  /* [1618] */
    (xdc_Char)0x74,  /* [1619] */
    (xdc_Char)0x3a,  /* [1620] */
    (xdc_Char)0x20,  /* [1621] */
    (xdc_Char)0x62,  /* [1622] */
    (xdc_Char)0x61,  /* [1623] */
    (xdc_Char)0x64,  /* [1624] */
    (xdc_Char)0x20,  /* [1625] */
    (xdc_Char)0x63,  /* [1626] */
    (xdc_Char)0x61,  /* [1627] */
    (xdc_Char)0x6c,  /* [1628] */
    (xdc_Char)0x6c,  /* [1629] */
    (xdc_Char)0x69,  /* [1630] */
    (xdc_Char)0x6e,  /* [1631] */
    (xdc_Char)0x67,  /* [1632] */
    (xdc_Char)0x20,  /* [1633] */
    (xdc_Char)0x63,  /* [1634] */
    (xdc_Char)0x6f,  /* [1635] */
    (xdc_Char)0x6e,  /* [1636] */
    (xdc_Char)0x74,  /* [1637] */
    (xdc_Char)0x65,  /* [1638] */
    (xdc_Char)0x78,  /* [1639] */
    (xdc_Char)0x74,  /* [1640] */
    (xdc_Char)0x2e,  /* [1641] */
    (xdc_Char)0x20,  /* [1642] */
    (xdc_Char)0x4d,  /* [1643] */
    (xdc_Char)0x61,  /* [1644] */
    (xdc_Char)0x79,  /* [1645] */
    (xdc_Char)0x20,  /* [1646] */
    (xdc_Char)0x6e,  /* [1647] */
    (xdc_Char)0x6f,  /* [1648] */
    (xdc_Char)0x74,  /* [1649] */
    (xdc_Char)0x20,  /* [1650] */
    (xdc_Char)0x62,  /* [1651] */
    (xdc_Char)0x65,  /* [1652] */
    (xdc_Char)0x20,  /* [1653] */
    (xdc_Char)0x65,  /* [1654] */
    (xdc_Char)0x6e,  /* [1655] */
    (xdc_Char)0x74,  /* [1656] */
    (xdc_Char)0x65,  /* [1657] */
    (xdc_Char)0x72,  /* [1658] */
    (xdc_Char)0x65,  /* [1659] */
    (xdc_Char)0x64,  /* [1660] */
    (xdc_Char)0x20,  /* [1661] */
    (xdc_Char)0x66,  /* [1662] */
    (xdc_Char)0x72,  /* [1663] */
    (xdc_Char)0x6f,  /* [1664] */
    (xdc_Char)0x6d,  /* [1665] */
    (xdc_Char)0x20,  /* [1666] */
    (xdc_Char)0x61,  /* [1667] */
    (xdc_Char)0x20,  /* [1668] */
    (xdc_Char)0x73,  /* [1669] */
    (xdc_Char)0x6f,  /* [1670] */
    (xdc_Char)0x66,  /* [1671] */
    (xdc_Char)0x74,  /* [1672] */
    (xdc_Char)0x77,  /* [1673] */
    (xdc_Char)0x61,  /* [1674] */
    (xdc_Char)0x72,  /* [1675] */
    (xdc_Char)0x65,  /* [1676] */
    (xdc_Char)0x20,  /* [1677] */
    (xdc_Char)0x6f,  /* [1678] */
    (xdc_Char)0x72,  /* [1679] */
    (xdc_Char)0x20,  /* [1680] */
    (xdc_Char)0x68,  /* [1681] */
    (xdc_Char)0x61,  /* [1682] */
    (xdc_Char)0x72,  /* [1683] */
    (xdc_Char)0x64,  /* [1684] */
    (xdc_Char)0x77,  /* [1685] */
    (xdc_Char)0x61,  /* [1686] */
    (xdc_Char)0x72,  /* [1687] */
    (xdc_Char)0x65,  /* [1688] */
    (xdc_Char)0x20,  /* [1689] */
    (xdc_Char)0x69,  /* [1690] */
    (xdc_Char)0x6e,  /* [1691] */
    (xdc_Char)0x74,  /* [1692] */
    (xdc_Char)0x65,  /* [1693] */
    (xdc_Char)0x72,  /* [1694] */
    (xdc_Char)0x72,  /* [1695] */
    (xdc_Char)0x75,  /* [1696] */
    (xdc_Char)0x70,  /* [1697] */
    (xdc_Char)0x74,  /* [1698] */
    (xdc_Char)0x20,  /* [1699] */
    (xdc_Char)0x74,  /* [1700] */
    (xdc_Char)0x68,  /* [1701] */
    (xdc_Char)0x72,  /* [1702] */
    (xdc_Char)0x65,  /* [1703] */
    (xdc_Char)0x61,  /* [1704] */
    (xdc_Char)0x64,  /* [1705] */
    (xdc_Char)0x2e,  /* [1706] */
    (xdc_Char)0x0,  /* [1707] */
    (xdc_Char)0x41,  /* [1708] */
    (xdc_Char)0x5f,  /* [1709] */
    (xdc_Char)0x62,  /* [1710] */
    (xdc_Char)0x61,  /* [1711] */
    (xdc_Char)0x64,  /* [1712] */
    (xdc_Char)0x43,  /* [1713] */
    (xdc_Char)0x6f,  /* [1714] */
    (xdc_Char)0x6e,  /* [1715] */
    (xdc_Char)0x74,  /* [1716] */
    (xdc_Char)0x65,  /* [1717] */
    (xdc_Char)0x78,  /* [1718] */
    (xdc_Char)0x74,  /* [1719] */
    (xdc_Char)0x3a,  /* [1720] */
    (xdc_Char)0x20,  /* [1721] */
    (xdc_Char)0x62,  /* [1722] */
    (xdc_Char)0x61,  /* [1723] */
    (xdc_Char)0x64,  /* [1724] */
    (xdc_Char)0x20,  /* [1725] */
    (xdc_Char)0x63,  /* [1726] */
    (xdc_Char)0x61,  /* [1727] */
    (xdc_Char)0x6c,  /* [1728] */
    (xdc_Char)0x6c,  /* [1729] */
    (xdc_Char)0x69,  /* [1730] */
    (xdc_Char)0x6e,  /* [1731] */
    (xdc_Char)0x67,  /* [1732] */
    (xdc_Char)0x20,  /* [1733] */
    (xdc_Char)0x63,  /* [1734] */
    (xdc_Char)0x6f,  /* [1735] */
    (xdc_Char)0x6e,  /* [1736] */
    (xdc_Char)0x74,  /* [1737] */
    (xdc_Char)0x65,  /* [1738] */
    (xdc_Char)0x78,  /* [1739] */
    (xdc_Char)0x74,  /* [1740] */
    (xdc_Char)0x2e,  /* [1741] */
    (xdc_Char)0x20,  /* [1742] */
    (xdc_Char)0x53,  /* [1743] */
    (xdc_Char)0x65,  /* [1744] */
    (xdc_Char)0x65,  /* [1745] */
    (xdc_Char)0x20,  /* [1746] */
    (xdc_Char)0x47,  /* [1747] */
    (xdc_Char)0x61,  /* [1748] */
    (xdc_Char)0x74,  /* [1749] */
    (xdc_Char)0x65,  /* [1750] */
    (xdc_Char)0x4d,  /* [1751] */
    (xdc_Char)0x75,  /* [1752] */
    (xdc_Char)0x74,  /* [1753] */
    (xdc_Char)0x65,  /* [1754] */
    (xdc_Char)0x78,  /* [1755] */
    (xdc_Char)0x50,  /* [1756] */
    (xdc_Char)0x72,  /* [1757] */
    (xdc_Char)0x69,  /* [1758] */
    (xdc_Char)0x20,  /* [1759] */
    (xdc_Char)0x41,  /* [1760] */
    (xdc_Char)0x50,  /* [1761] */
    (xdc_Char)0x49,  /* [1762] */
    (xdc_Char)0x20,  /* [1763] */
    (xdc_Char)0x64,  /* [1764] */
    (xdc_Char)0x6f,  /* [1765] */
    (xdc_Char)0x63,  /* [1766] */
    (xdc_Char)0x20,  /* [1767] */
    (xdc_Char)0x66,  /* [1768] */
    (xdc_Char)0x6f,  /* [1769] */
    (xdc_Char)0x72,  /* [1770] */
    (xdc_Char)0x20,  /* [1771] */
    (xdc_Char)0x64,  /* [1772] */
    (xdc_Char)0x65,  /* [1773] */
    (xdc_Char)0x74,  /* [1774] */
    (xdc_Char)0x61,  /* [1775] */
    (xdc_Char)0x69,  /* [1776] */
    (xdc_Char)0x6c,  /* [1777] */
    (xdc_Char)0x73,  /* [1778] */
    (xdc_Char)0x2e,  /* [1779] */
    (xdc_Char)0x0,  /* [1780] */
    (xdc_Char)0x41,  /* [1781] */
    (xdc_Char)0x5f,  /* [1782] */
    (xdc_Char)0x62,  /* [1783] */
    (xdc_Char)0x61,  /* [1784] */
    (xdc_Char)0x64,  /* [1785] */
    (xdc_Char)0x43,  /* [1786] */
    (xdc_Char)0x6f,  /* [1787] */
    (xdc_Char)0x6e,  /* [1788] */
    (xdc_Char)0x74,  /* [1789] */
    (xdc_Char)0x65,  /* [1790] */
    (xdc_Char)0x78,  /* [1791] */
    (xdc_Char)0x74,  /* [1792] */
    (xdc_Char)0x3a,  /* [1793] */
    (xdc_Char)0x20,  /* [1794] */
    (xdc_Char)0x62,  /* [1795] */
    (xdc_Char)0x61,  /* [1796] */
    (xdc_Char)0x64,  /* [1797] */
    (xdc_Char)0x20,  /* [1798] */
    (xdc_Char)0x63,  /* [1799] */
    (xdc_Char)0x61,  /* [1800] */
    (xdc_Char)0x6c,  /* [1801] */
    (xdc_Char)0x6c,  /* [1802] */
    (xdc_Char)0x69,  /* [1803] */
    (xdc_Char)0x6e,  /* [1804] */
    (xdc_Char)0x67,  /* [1805] */
    (xdc_Char)0x20,  /* [1806] */
    (xdc_Char)0x63,  /* [1807] */
    (xdc_Char)0x6f,  /* [1808] */
    (xdc_Char)0x6e,  /* [1809] */
    (xdc_Char)0x74,  /* [1810] */
    (xdc_Char)0x65,  /* [1811] */
    (xdc_Char)0x78,  /* [1812] */
    (xdc_Char)0x74,  /* [1813] */
    (xdc_Char)0x2e,  /* [1814] */
    (xdc_Char)0x20,  /* [1815] */
    (xdc_Char)0x53,  /* [1816] */
    (xdc_Char)0x65,  /* [1817] */
    (xdc_Char)0x65,  /* [1818] */
    (xdc_Char)0x20,  /* [1819] */
    (xdc_Char)0x47,  /* [1820] */
    (xdc_Char)0x61,  /* [1821] */
    (xdc_Char)0x74,  /* [1822] */
    (xdc_Char)0x65,  /* [1823] */
    (xdc_Char)0x4d,  /* [1824] */
    (xdc_Char)0x75,  /* [1825] */
    (xdc_Char)0x74,  /* [1826] */
    (xdc_Char)0x65,  /* [1827] */
    (xdc_Char)0x78,  /* [1828] */
    (xdc_Char)0x20,  /* [1829] */
    (xdc_Char)0x41,  /* [1830] */
    (xdc_Char)0x50,  /* [1831] */
    (xdc_Char)0x49,  /* [1832] */
    (xdc_Char)0x20,  /* [1833] */
    (xdc_Char)0x64,  /* [1834] */
    (xdc_Char)0x6f,  /* [1835] */
    (xdc_Char)0x63,  /* [1836] */
    (xdc_Char)0x20,  /* [1837] */
    (xdc_Char)0x66,  /* [1838] */
    (xdc_Char)0x6f,  /* [1839] */
    (xdc_Char)0x72,  /* [1840] */
    (xdc_Char)0x20,  /* [1841] */
    (xdc_Char)0x64,  /* [1842] */
    (xdc_Char)0x65,  /* [1843] */
    (xdc_Char)0x74,  /* [1844] */
    (xdc_Char)0x61,  /* [1845] */
    (xdc_Char)0x69,  /* [1846] */
    (xdc_Char)0x6c,  /* [1847] */
    (xdc_Char)0x73,  /* [1848] */
    (xdc_Char)0x2e,  /* [1849] */
    (xdc_Char)0x0,  /* [1850] */
    (xdc_Char)0x41,  /* [1851] */
    (xdc_Char)0x5f,  /* [1852] */
    (xdc_Char)0x7a,  /* [1853] */
    (xdc_Char)0x65,  /* [1854] */
    (xdc_Char)0x72,  /* [1855] */
    (xdc_Char)0x6f,  /* [1856] */
    (xdc_Char)0x54,  /* [1857] */
    (xdc_Char)0x69,  /* [1858] */
    (xdc_Char)0x6d,  /* [1859] */
    (xdc_Char)0x65,  /* [1860] */
    (xdc_Char)0x6f,  /* [1861] */
    (xdc_Char)0x75,  /* [1862] */
    (xdc_Char)0x74,  /* [1863] */
    (xdc_Char)0x3a,  /* [1864] */
    (xdc_Char)0x20,  /* [1865] */
    (xdc_Char)0x54,  /* [1866] */
    (xdc_Char)0x69,  /* [1867] */
    (xdc_Char)0x6d,  /* [1868] */
    (xdc_Char)0x65,  /* [1869] */
    (xdc_Char)0x6f,  /* [1870] */
    (xdc_Char)0x75,  /* [1871] */
    (xdc_Char)0x74,  /* [1872] */
    (xdc_Char)0x20,  /* [1873] */
    (xdc_Char)0x76,  /* [1874] */
    (xdc_Char)0x61,  /* [1875] */
    (xdc_Char)0x6c,  /* [1876] */
    (xdc_Char)0x75,  /* [1877] */
    (xdc_Char)0x65,  /* [1878] */
    (xdc_Char)0x20,  /* [1879] */
    (xdc_Char)0x61,  /* [1880] */
    (xdc_Char)0x6e,  /* [1881] */
    (xdc_Char)0x6e,  /* [1882] */
    (xdc_Char)0x6f,  /* [1883] */
    (xdc_Char)0x74,  /* [1884] */
    (xdc_Char)0x20,  /* [1885] */
    (xdc_Char)0x62,  /* [1886] */
    (xdc_Char)0x65,  /* [1887] */
    (xdc_Char)0x20,  /* [1888] */
    (xdc_Char)0x7a,  /* [1889] */
    (xdc_Char)0x65,  /* [1890] */
    (xdc_Char)0x72,  /* [1891] */
    (xdc_Char)0x6f,  /* [1892] */
    (xdc_Char)0x0,  /* [1893] */
    (xdc_Char)0x41,  /* [1894] */
    (xdc_Char)0x5f,  /* [1895] */
    (xdc_Char)0x69,  /* [1896] */
    (xdc_Char)0x6e,  /* [1897] */
    (xdc_Char)0x76,  /* [1898] */
    (xdc_Char)0x61,  /* [1899] */
    (xdc_Char)0x6c,  /* [1900] */
    (xdc_Char)0x69,  /* [1901] */
    (xdc_Char)0x64,  /* [1902] */
    (xdc_Char)0x4b,  /* [1903] */
    (xdc_Char)0x65,  /* [1904] */
    (xdc_Char)0x79,  /* [1905] */
    (xdc_Char)0x3a,  /* [1906] */
    (xdc_Char)0x20,  /* [1907] */
    (xdc_Char)0x74,  /* [1908] */
    (xdc_Char)0x68,  /* [1909] */
    (xdc_Char)0x65,  /* [1910] */
    (xdc_Char)0x20,  /* [1911] */
    (xdc_Char)0x6b,  /* [1912] */
    (xdc_Char)0x65,  /* [1913] */
    (xdc_Char)0x79,  /* [1914] */
    (xdc_Char)0x20,  /* [1915] */
    (xdc_Char)0x6d,  /* [1916] */
    (xdc_Char)0x75,  /* [1917] */
    (xdc_Char)0x73,  /* [1918] */
    (xdc_Char)0x74,  /* [1919] */
    (xdc_Char)0x20,  /* [1920] */
    (xdc_Char)0x62,  /* [1921] */
    (xdc_Char)0x65,  /* [1922] */
    (xdc_Char)0x20,  /* [1923] */
    (xdc_Char)0x73,  /* [1924] */
    (xdc_Char)0x65,  /* [1925] */
    (xdc_Char)0x74,  /* [1926] */
    (xdc_Char)0x20,  /* [1927] */
    (xdc_Char)0x74,  /* [1928] */
    (xdc_Char)0x6f,  /* [1929] */
    (xdc_Char)0x20,  /* [1930] */
    (xdc_Char)0x61,  /* [1931] */
    (xdc_Char)0x20,  /* [1932] */
    (xdc_Char)0x6e,  /* [1933] */
    (xdc_Char)0x6f,  /* [1934] */
    (xdc_Char)0x6e,  /* [1935] */
    (xdc_Char)0x2d,  /* [1936] */
    (xdc_Char)0x64,  /* [1937] */
    (xdc_Char)0x65,  /* [1938] */
    (xdc_Char)0x66,  /* [1939] */
    (xdc_Char)0x61,  /* [1940] */
    (xdc_Char)0x75,  /* [1941] */
    (xdc_Char)0x6c,  /* [1942] */
    (xdc_Char)0x74,  /* [1943] */
    (xdc_Char)0x20,  /* [1944] */
    (xdc_Char)0x76,  /* [1945] */
    (xdc_Char)0x61,  /* [1946] */
    (xdc_Char)0x6c,  /* [1947] */
    (xdc_Char)0x75,  /* [1948] */
    (xdc_Char)0x65,  /* [1949] */
    (xdc_Char)0x0,  /* [1950] */
    (xdc_Char)0x41,  /* [1951] */
    (xdc_Char)0x5f,  /* [1952] */
    (xdc_Char)0x69,  /* [1953] */
    (xdc_Char)0x6e,  /* [1954] */
    (xdc_Char)0x76,  /* [1955] */
    (xdc_Char)0x61,  /* [1956] */
    (xdc_Char)0x6c,  /* [1957] */
    (xdc_Char)0x69,  /* [1958] */
    (xdc_Char)0x64,  /* [1959] */
    (xdc_Char)0x4c,  /* [1960] */
    (xdc_Char)0x65,  /* [1961] */
    (xdc_Char)0x6e,  /* [1962] */
    (xdc_Char)0x3a,  /* [1963] */
    (xdc_Char)0x20,  /* [1964] */
    (xdc_Char)0x49,  /* [1965] */
    (xdc_Char)0x6e,  /* [1966] */
    (xdc_Char)0x76,  /* [1967] */
    (xdc_Char)0x61,  /* [1968] */
    (xdc_Char)0x6c,  /* [1969] */
    (xdc_Char)0x69,  /* [1970] */
    (xdc_Char)0x64,  /* [1971] */
    (xdc_Char)0x20,  /* [1972] */
    (xdc_Char)0x6c,  /* [1973] */
    (xdc_Char)0x65,  /* [1974] */
    (xdc_Char)0x6e,  /* [1975] */
    (xdc_Char)0x67,  /* [1976] */
    (xdc_Char)0x74,  /* [1977] */
    (xdc_Char)0x68,  /* [1978] */
    (xdc_Char)0x0,  /* [1979] */
    (xdc_Char)0x41,  /* [1980] */
    (xdc_Char)0x5f,  /* [1981] */
    (xdc_Char)0x69,  /* [1982] */
    (xdc_Char)0x6e,  /* [1983] */
    (xdc_Char)0x76,  /* [1984] */
    (xdc_Char)0x41,  /* [1985] */
    (xdc_Char)0x72,  /* [1986] */
    (xdc_Char)0x67,  /* [1987] */
    (xdc_Char)0x75,  /* [1988] */
    (xdc_Char)0x6d,  /* [1989] */
    (xdc_Char)0x65,  /* [1990] */
    (xdc_Char)0x6e,  /* [1991] */
    (xdc_Char)0x74,  /* [1992] */
    (xdc_Char)0x3a,  /* [1993] */
    (xdc_Char)0x20,  /* [1994] */
    (xdc_Char)0x49,  /* [1995] */
    (xdc_Char)0x6e,  /* [1996] */
    (xdc_Char)0x76,  /* [1997] */
    (xdc_Char)0x61,  /* [1998] */
    (xdc_Char)0x6c,  /* [1999] */
    (xdc_Char)0x69,  /* [2000] */
    (xdc_Char)0x64,  /* [2001] */
    (xdc_Char)0x20,  /* [2002] */
    (xdc_Char)0x61,  /* [2003] */
    (xdc_Char)0x72,  /* [2004] */
    (xdc_Char)0x67,  /* [2005] */
    (xdc_Char)0x75,  /* [2006] */
    (xdc_Char)0x6d,  /* [2007] */
    (xdc_Char)0x65,  /* [2008] */
    (xdc_Char)0x6e,  /* [2009] */
    (xdc_Char)0x74,  /* [2010] */
    (xdc_Char)0x20,  /* [2011] */
    (xdc_Char)0x73,  /* [2012] */
    (xdc_Char)0x75,  /* [2013] */
    (xdc_Char)0x70,  /* [2014] */
    (xdc_Char)0x70,  /* [2015] */
    (xdc_Char)0x6c,  /* [2016] */
    (xdc_Char)0x69,  /* [2017] */
    (xdc_Char)0x65,  /* [2018] */
    (xdc_Char)0x64,  /* [2019] */
    (xdc_Char)0x0,  /* [2020] */
    (xdc_Char)0x41,  /* [2021] */
    (xdc_Char)0x5f,  /* [2022] */
    (xdc_Char)0x69,  /* [2023] */
    (xdc_Char)0x6e,  /* [2024] */
    (xdc_Char)0x76,  /* [2025] */
    (xdc_Char)0x61,  /* [2026] */
    (xdc_Char)0x6c,  /* [2027] */
    (xdc_Char)0x69,  /* [2028] */
    (xdc_Char)0x64,  /* [2029] */
    (xdc_Char)0x4d,  /* [2030] */
    (xdc_Char)0x75,  /* [2031] */
    (xdc_Char)0x6c,  /* [2032] */
    (xdc_Char)0x74,  /* [2033] */
    (xdc_Char)0x69,  /* [2034] */
    (xdc_Char)0x50,  /* [2035] */
    (xdc_Char)0x72,  /* [2036] */
    (xdc_Char)0x6f,  /* [2037] */
    (xdc_Char)0x63,  /* [2038] */
    (xdc_Char)0x49,  /* [2039] */
    (xdc_Char)0x64,  /* [2040] */
    (xdc_Char)0x3a,  /* [2041] */
    (xdc_Char)0x20,  /* [2042] */
    (xdc_Char)0x49,  /* [2043] */
    (xdc_Char)0x6e,  /* [2044] */
    (xdc_Char)0x76,  /* [2045] */
    (xdc_Char)0x61,  /* [2046] */
    (xdc_Char)0x6c,  /* [2047] */
    (xdc_Char)0x69,  /* [2048] */
    (xdc_Char)0x64,  /* [2049] */
    (xdc_Char)0x20,  /* [2050] */
    (xdc_Char)0x4d,  /* [2051] */
    (xdc_Char)0x75,  /* [2052] */
    (xdc_Char)0x6c,  /* [2053] */
    (xdc_Char)0x74,  /* [2054] */
    (xdc_Char)0x69,  /* [2055] */
    (xdc_Char)0x50,  /* [2056] */
    (xdc_Char)0x72,  /* [2057] */
    (xdc_Char)0x6f,  /* [2058] */
    (xdc_Char)0x63,  /* [2059] */
    (xdc_Char)0x20,  /* [2060] */
    (xdc_Char)0x69,  /* [2061] */
    (xdc_Char)0x64,  /* [2062] */
    (xdc_Char)0x0,  /* [2063] */
    (xdc_Char)0x41,  /* [2064] */
    (xdc_Char)0x5f,  /* [2065] */
    (xdc_Char)0x69,  /* [2066] */
    (xdc_Char)0x6e,  /* [2067] */
    (xdc_Char)0x76,  /* [2068] */
    (xdc_Char)0x61,  /* [2069] */
    (xdc_Char)0x6c,  /* [2070] */
    (xdc_Char)0x69,  /* [2071] */
    (xdc_Char)0x64,  /* [2072] */
    (xdc_Char)0x50,  /* [2073] */
    (xdc_Char)0x72,  /* [2074] */
    (xdc_Char)0x6f,  /* [2075] */
    (xdc_Char)0x63,  /* [2076] */
    (xdc_Char)0x4e,  /* [2077] */
    (xdc_Char)0x61,  /* [2078] */
    (xdc_Char)0x6d,  /* [2079] */
    (xdc_Char)0x65,  /* [2080] */
    (xdc_Char)0x3a,  /* [2081] */
    (xdc_Char)0x20,  /* [2082] */
    (xdc_Char)0x4e,  /* [2083] */
    (xdc_Char)0x55,  /* [2084] */
    (xdc_Char)0x4c,  /* [2085] */
    (xdc_Char)0x4c,  /* [2086] */
    (xdc_Char)0x20,  /* [2087] */
    (xdc_Char)0x4d,  /* [2088] */
    (xdc_Char)0x75,  /* [2089] */
    (xdc_Char)0x6c,  /* [2090] */
    (xdc_Char)0x74,  /* [2091] */
    (xdc_Char)0x69,  /* [2092] */
    (xdc_Char)0x50,  /* [2093] */
    (xdc_Char)0x72,  /* [2094] */
    (xdc_Char)0x6f,  /* [2095] */
    (xdc_Char)0x63,  /* [2096] */
    (xdc_Char)0x20,  /* [2097] */
    (xdc_Char)0x6e,  /* [2098] */
    (xdc_Char)0x61,  /* [2099] */
    (xdc_Char)0x6d,  /* [2100] */
    (xdc_Char)0x65,  /* [2101] */
    (xdc_Char)0x20,  /* [2102] */
    (xdc_Char)0x65,  /* [2103] */
    (xdc_Char)0x6e,  /* [2104] */
    (xdc_Char)0x63,  /* [2105] */
    (xdc_Char)0x6f,  /* [2106] */
    (xdc_Char)0x75,  /* [2107] */
    (xdc_Char)0x6e,  /* [2108] */
    (xdc_Char)0x74,  /* [2109] */
    (xdc_Char)0x65,  /* [2110] */
    (xdc_Char)0x72,  /* [2111] */
    (xdc_Char)0x65,  /* [2112] */
    (xdc_Char)0x64,  /* [2113] */
    (xdc_Char)0x0,  /* [2114] */
    (xdc_Char)0x41,  /* [2115] */
    (xdc_Char)0x5f,  /* [2116] */
    (xdc_Char)0x6e,  /* [2117] */
    (xdc_Char)0x75,  /* [2118] */
    (xdc_Char)0x6c,  /* [2119] */
    (xdc_Char)0x6c,  /* [2120] */
    (xdc_Char)0x48,  /* [2121] */
    (xdc_Char)0x61,  /* [2122] */
    (xdc_Char)0x6e,  /* [2123] */
    (xdc_Char)0x64,  /* [2124] */
    (xdc_Char)0x6c,  /* [2125] */
    (xdc_Char)0x65,  /* [2126] */
    (xdc_Char)0x3a,  /* [2127] */
    (xdc_Char)0x20,  /* [2128] */
    (xdc_Char)0x4e,  /* [2129] */
    (xdc_Char)0x75,  /* [2130] */
    (xdc_Char)0x6c,  /* [2131] */
    (xdc_Char)0x6c,  /* [2132] */
    (xdc_Char)0x20,  /* [2133] */
    (xdc_Char)0x68,  /* [2134] */
    (xdc_Char)0x61,  /* [2135] */
    (xdc_Char)0x6e,  /* [2136] */
    (xdc_Char)0x64,  /* [2137] */
    (xdc_Char)0x6c,  /* [2138] */
    (xdc_Char)0x65,  /* [2139] */
    (xdc_Char)0x20,  /* [2140] */
    (xdc_Char)0x70,  /* [2141] */
    (xdc_Char)0x61,  /* [2142] */
    (xdc_Char)0x73,  /* [2143] */
    (xdc_Char)0x73,  /* [2144] */
    (xdc_Char)0x65,  /* [2145] */
    (xdc_Char)0x64,  /* [2146] */
    (xdc_Char)0x20,  /* [2147] */
    (xdc_Char)0x74,  /* [2148] */
    (xdc_Char)0x6f,  /* [2149] */
    (xdc_Char)0x20,  /* [2150] */
    (xdc_Char)0x63,  /* [2151] */
    (xdc_Char)0x72,  /* [2152] */
    (xdc_Char)0x65,  /* [2153] */
    (xdc_Char)0x61,  /* [2154] */
    (xdc_Char)0x74,  /* [2155] */
    (xdc_Char)0x65,  /* [2156] */
    (xdc_Char)0x0,  /* [2157] */
    (xdc_Char)0x41,  /* [2158] */
    (xdc_Char)0x5f,  /* [2159] */
    (xdc_Char)0x69,  /* [2160] */
    (xdc_Char)0x6e,  /* [2161] */
    (xdc_Char)0x76,  /* [2162] */
    (xdc_Char)0x61,  /* [2163] */
    (xdc_Char)0x6c,  /* [2164] */
    (xdc_Char)0x69,  /* [2165] */
    (xdc_Char)0x64,  /* [2166] */
    (xdc_Char)0x43,  /* [2167] */
    (xdc_Char)0x6f,  /* [2168] */
    (xdc_Char)0x6e,  /* [2169] */
    (xdc_Char)0x74,  /* [2170] */
    (xdc_Char)0x65,  /* [2171] */
    (xdc_Char)0x78,  /* [2172] */
    (xdc_Char)0x74,  /* [2173] */
    (xdc_Char)0x3a,  /* [2174] */
    (xdc_Char)0x20,  /* [2175] */
    (xdc_Char)0x43,  /* [2176] */
    (xdc_Char)0x61,  /* [2177] */
    (xdc_Char)0x6c,  /* [2178] */
    (xdc_Char)0x6c,  /* [2179] */
    (xdc_Char)0x69,  /* [2180] */
    (xdc_Char)0x6e,  /* [2181] */
    (xdc_Char)0x67,  /* [2182] */
    (xdc_Char)0x20,  /* [2183] */
    (xdc_Char)0x47,  /* [2184] */
    (xdc_Char)0x61,  /* [2185] */
    (xdc_Char)0x74,  /* [2186] */
    (xdc_Char)0x65,  /* [2187] */
    (xdc_Char)0x4d,  /* [2188] */
    (xdc_Char)0x50,  /* [2189] */
    (xdc_Char)0x5f,  /* [2190] */
    (xdc_Char)0x63,  /* [2191] */
    (xdc_Char)0x6c,  /* [2192] */
    (xdc_Char)0x6f,  /* [2193] */
    (xdc_Char)0x73,  /* [2194] */
    (xdc_Char)0x65,  /* [2195] */
    (xdc_Char)0x20,  /* [2196] */
    (xdc_Char)0x77,  /* [2197] */
    (xdc_Char)0x69,  /* [2198] */
    (xdc_Char)0x74,  /* [2199] */
    (xdc_Char)0x68,  /* [2200] */
    (xdc_Char)0x20,  /* [2201] */
    (xdc_Char)0x74,  /* [2202] */
    (xdc_Char)0x68,  /* [2203] */
    (xdc_Char)0x65,  /* [2204] */
    (xdc_Char)0x20,  /* [2205] */
    (xdc_Char)0x77,  /* [2206] */
    (xdc_Char)0x72,  /* [2207] */
    (xdc_Char)0x6f,  /* [2208] */
    (xdc_Char)0x6e,  /* [2209] */
    (xdc_Char)0x67,  /* [2210] */
    (xdc_Char)0x20,  /* [2211] */
    (xdc_Char)0x68,  /* [2212] */
    (xdc_Char)0x61,  /* [2213] */
    (xdc_Char)0x6e,  /* [2214] */
    (xdc_Char)0x64,  /* [2215] */
    (xdc_Char)0x6c,  /* [2216] */
    (xdc_Char)0x65,  /* [2217] */
    (xdc_Char)0x0,  /* [2218] */
    (xdc_Char)0x41,  /* [2219] */
    (xdc_Char)0x5f,  /* [2220] */
    (xdc_Char)0x69,  /* [2221] */
    (xdc_Char)0x6e,  /* [2222] */
    (xdc_Char)0x76,  /* [2223] */
    (xdc_Char)0x61,  /* [2224] */
    (xdc_Char)0x6c,  /* [2225] */
    (xdc_Char)0x69,  /* [2226] */
    (xdc_Char)0x64,  /* [2227] */
    (xdc_Char)0x44,  /* [2228] */
    (xdc_Char)0x65,  /* [2229] */
    (xdc_Char)0x6c,  /* [2230] */
    (xdc_Char)0x65,  /* [2231] */
    (xdc_Char)0x74,  /* [2232] */
    (xdc_Char)0x65,  /* [2233] */
    (xdc_Char)0x3a,  /* [2234] */
    (xdc_Char)0x20,  /* [2235] */
    (xdc_Char)0x43,  /* [2236] */
    (xdc_Char)0x61,  /* [2237] */
    (xdc_Char)0x6c,  /* [2238] */
    (xdc_Char)0x6c,  /* [2239] */
    (xdc_Char)0x69,  /* [2240] */
    (xdc_Char)0x6e,  /* [2241] */
    (xdc_Char)0x67,  /* [2242] */
    (xdc_Char)0x20,  /* [2243] */
    (xdc_Char)0x47,  /* [2244] */
    (xdc_Char)0x61,  /* [2245] */
    (xdc_Char)0x74,  /* [2246] */
    (xdc_Char)0x65,  /* [2247] */
    (xdc_Char)0x4d,  /* [2248] */
    (xdc_Char)0x50,  /* [2249] */
    (xdc_Char)0x5f,  /* [2250] */
    (xdc_Char)0x64,  /* [2251] */
    (xdc_Char)0x65,  /* [2252] */
    (xdc_Char)0x6c,  /* [2253] */
    (xdc_Char)0x65,  /* [2254] */
    (xdc_Char)0x74,  /* [2255] */
    (xdc_Char)0x65,  /* [2256] */
    (xdc_Char)0x20,  /* [2257] */
    (xdc_Char)0x69,  /* [2258] */
    (xdc_Char)0x6e,  /* [2259] */
    (xdc_Char)0x63,  /* [2260] */
    (xdc_Char)0x6f,  /* [2261] */
    (xdc_Char)0x72,  /* [2262] */
    (xdc_Char)0x72,  /* [2263] */
    (xdc_Char)0x65,  /* [2264] */
    (xdc_Char)0x63,  /* [2265] */
    (xdc_Char)0x74,  /* [2266] */
    (xdc_Char)0x6c,  /* [2267] */
    (xdc_Char)0x79,  /* [2268] */
    (xdc_Char)0x0,  /* [2269] */
    (xdc_Char)0x41,  /* [2270] */
    (xdc_Char)0x5f,  /* [2271] */
    (xdc_Char)0x69,  /* [2272] */
    (xdc_Char)0x6e,  /* [2273] */
    (xdc_Char)0x76,  /* [2274] */
    (xdc_Char)0x61,  /* [2275] */
    (xdc_Char)0x6c,  /* [2276] */
    (xdc_Char)0x69,  /* [2277] */
    (xdc_Char)0x64,  /* [2278] */
    (xdc_Char)0x43,  /* [2279] */
    (xdc_Char)0x6f,  /* [2280] */
    (xdc_Char)0x6e,  /* [2281] */
    (xdc_Char)0x74,  /* [2282] */
    (xdc_Char)0x65,  /* [2283] */
    (xdc_Char)0x78,  /* [2284] */
    (xdc_Char)0x74,  /* [2285] */
    (xdc_Char)0x3a,  /* [2286] */
    (xdc_Char)0x20,  /* [2287] */
    (xdc_Char)0x43,  /* [2288] */
    (xdc_Char)0x61,  /* [2289] */
    (xdc_Char)0x6e,  /* [2290] */
    (xdc_Char)0x6e,  /* [2291] */
    (xdc_Char)0x6f,  /* [2292] */
    (xdc_Char)0x74,  /* [2293] */
    (xdc_Char)0x20,  /* [2294] */
    (xdc_Char)0x63,  /* [2295] */
    (xdc_Char)0x61,  /* [2296] */
    (xdc_Char)0x6c,  /* [2297] */
    (xdc_Char)0x6c,  /* [2298] */
    (xdc_Char)0x20,  /* [2299] */
    (xdc_Char)0x77,  /* [2300] */
    (xdc_Char)0x69,  /* [2301] */
    (xdc_Char)0x74,  /* [2302] */
    (xdc_Char)0x68,  /* [2303] */
    (xdc_Char)0x20,  /* [2304] */
    (xdc_Char)0x61,  /* [2305] */
    (xdc_Char)0x6e,  /* [2306] */
    (xdc_Char)0x20,  /* [2307] */
    (xdc_Char)0x6f,  /* [2308] */
    (xdc_Char)0x70,  /* [2309] */
    (xdc_Char)0x65,  /* [2310] */
    (xdc_Char)0x6e,  /* [2311] */
    (xdc_Char)0x2f,  /* [2312] */
    (xdc_Char)0x63,  /* [2313] */
    (xdc_Char)0x72,  /* [2314] */
    (xdc_Char)0x65,  /* [2315] */
    (xdc_Char)0x61,  /* [2316] */
    (xdc_Char)0x74,  /* [2317] */
    (xdc_Char)0x65,  /* [2318] */
    (xdc_Char)0x20,  /* [2319] */
    (xdc_Char)0x68,  /* [2320] */
    (xdc_Char)0x61,  /* [2321] */
    (xdc_Char)0x6e,  /* [2322] */
    (xdc_Char)0x64,  /* [2323] */
    (xdc_Char)0x6c,  /* [2324] */
    (xdc_Char)0x65,  /* [2325] */
    (xdc_Char)0x0,  /* [2326] */
    (xdc_Char)0x41,  /* [2327] */
    (xdc_Char)0x5f,  /* [2328] */
    (xdc_Char)0x63,  /* [2329] */
    (xdc_Char)0x61,  /* [2330] */
    (xdc_Char)0x6e,  /* [2331] */
    (xdc_Char)0x6e,  /* [2332] */
    (xdc_Char)0x6f,  /* [2333] */
    (xdc_Char)0x74,  /* [2334] */
    (xdc_Char)0x46,  /* [2335] */
    (xdc_Char)0x72,  /* [2336] */
    (xdc_Char)0x65,  /* [2337] */
    (xdc_Char)0x65,  /* [2338] */
    (xdc_Char)0x53,  /* [2339] */
    (xdc_Char)0x74,  /* [2340] */
    (xdc_Char)0x61,  /* [2341] */
    (xdc_Char)0x74,  /* [2342] */
    (xdc_Char)0x69,  /* [2343] */
    (xdc_Char)0x63,  /* [2344] */
    (xdc_Char)0x4d,  /* [2345] */
    (xdc_Char)0x73,  /* [2346] */
    (xdc_Char)0x67,  /* [2347] */
    (xdc_Char)0x3a,  /* [2348] */
    (xdc_Char)0x20,  /* [2349] */
    (xdc_Char)0x43,  /* [2350] */
    (xdc_Char)0x61,  /* [2351] */
    (xdc_Char)0x6e,  /* [2352] */
    (xdc_Char)0x6e,  /* [2353] */
    (xdc_Char)0x6f,  /* [2354] */
    (xdc_Char)0x74,  /* [2355] */
    (xdc_Char)0x20,  /* [2356] */
    (xdc_Char)0x63,  /* [2357] */
    (xdc_Char)0x61,  /* [2358] */
    (xdc_Char)0x6c,  /* [2359] */
    (xdc_Char)0x6c,  /* [2360] */
    (xdc_Char)0x20,  /* [2361] */
    (xdc_Char)0x4d,  /* [2362] */
    (xdc_Char)0x65,  /* [2363] */
    (xdc_Char)0x73,  /* [2364] */
    (xdc_Char)0x73,  /* [2365] */
    (xdc_Char)0x61,  /* [2366] */
    (xdc_Char)0x67,  /* [2367] */
    (xdc_Char)0x65,  /* [2368] */
    (xdc_Char)0x51,  /* [2369] */
    (xdc_Char)0x5f,  /* [2370] */
    (xdc_Char)0x66,  /* [2371] */
    (xdc_Char)0x72,  /* [2372] */
    (xdc_Char)0x65,  /* [2373] */
    (xdc_Char)0x65,  /* [2374] */
    (xdc_Char)0x20,  /* [2375] */
    (xdc_Char)0x77,  /* [2376] */
    (xdc_Char)0x69,  /* [2377] */
    (xdc_Char)0x74,  /* [2378] */
    (xdc_Char)0x68,  /* [2379] */
    (xdc_Char)0x20,  /* [2380] */
    (xdc_Char)0x73,  /* [2381] */
    (xdc_Char)0x74,  /* [2382] */
    (xdc_Char)0x61,  /* [2383] */
    (xdc_Char)0x74,  /* [2384] */
    (xdc_Char)0x69,  /* [2385] */
    (xdc_Char)0x63,  /* [2386] */
    (xdc_Char)0x20,  /* [2387] */
    (xdc_Char)0x6d,  /* [2388] */
    (xdc_Char)0x73,  /* [2389] */
    (xdc_Char)0x67,  /* [2390] */
    (xdc_Char)0x0,  /* [2391] */
    (xdc_Char)0x41,  /* [2392] */
    (xdc_Char)0x5f,  /* [2393] */
    (xdc_Char)0x69,  /* [2394] */
    (xdc_Char)0x6e,  /* [2395] */
    (xdc_Char)0x76,  /* [2396] */
    (xdc_Char)0x61,  /* [2397] */
    (xdc_Char)0x6c,  /* [2398] */
    (xdc_Char)0x69,  /* [2399] */
    (xdc_Char)0x64,  /* [2400] */
    (xdc_Char)0x4d,  /* [2401] */
    (xdc_Char)0x73,  /* [2402] */
    (xdc_Char)0x67,  /* [2403] */
    (xdc_Char)0x3a,  /* [2404] */
    (xdc_Char)0x20,  /* [2405] */
    (xdc_Char)0x49,  /* [2406] */
    (xdc_Char)0x6e,  /* [2407] */
    (xdc_Char)0x76,  /* [2408] */
    (xdc_Char)0x61,  /* [2409] */
    (xdc_Char)0x6c,  /* [2410] */
    (xdc_Char)0x69,  /* [2411] */
    (xdc_Char)0x64,  /* [2412] */
    (xdc_Char)0x20,  /* [2413] */
    (xdc_Char)0x6d,  /* [2414] */
    (xdc_Char)0x65,  /* [2415] */
    (xdc_Char)0x73,  /* [2416] */
    (xdc_Char)0x73,  /* [2417] */
    (xdc_Char)0x61,  /* [2418] */
    (xdc_Char)0x67,  /* [2419] */
    (xdc_Char)0x65,  /* [2420] */
    (xdc_Char)0x0,  /* [2421] */
    (xdc_Char)0x41,  /* [2422] */
    (xdc_Char)0x5f,  /* [2423] */
    (xdc_Char)0x69,  /* [2424] */
    (xdc_Char)0x6e,  /* [2425] */
    (xdc_Char)0x76,  /* [2426] */
    (xdc_Char)0x61,  /* [2427] */
    (xdc_Char)0x6c,  /* [2428] */
    (xdc_Char)0x69,  /* [2429] */
    (xdc_Char)0x64,  /* [2430] */
    (xdc_Char)0x51,  /* [2431] */
    (xdc_Char)0x75,  /* [2432] */
    (xdc_Char)0x65,  /* [2433] */
    (xdc_Char)0x75,  /* [2434] */
    (xdc_Char)0x65,  /* [2435] */
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
    (xdc_Char)0x71,  /* [2448] */
    (xdc_Char)0x75,  /* [2449] */
    (xdc_Char)0x65,  /* [2450] */
    (xdc_Char)0x75,  /* [2451] */
    (xdc_Char)0x65,  /* [2452] */
    (xdc_Char)0x49,  /* [2453] */
    (xdc_Char)0x64,  /* [2454] */
    (xdc_Char)0x20,  /* [2455] */
    (xdc_Char)0x69,  /* [2456] */
    (xdc_Char)0x73,  /* [2457] */
    (xdc_Char)0x20,  /* [2458] */
    (xdc_Char)0x75,  /* [2459] */
    (xdc_Char)0x73,  /* [2460] */
    (xdc_Char)0x65,  /* [2461] */
    (xdc_Char)0x64,  /* [2462] */
    (xdc_Char)0x0,  /* [2463] */
    (xdc_Char)0x41,  /* [2464] */
    (xdc_Char)0x5f,  /* [2465] */
    (xdc_Char)0x68,  /* [2466] */
    (xdc_Char)0x65,  /* [2467] */
    (xdc_Char)0x61,  /* [2468] */
    (xdc_Char)0x70,  /* [2469] */
    (xdc_Char)0x49,  /* [2470] */
    (xdc_Char)0x64,  /* [2471] */
    (xdc_Char)0x49,  /* [2472] */
    (xdc_Char)0x6e,  /* [2473] */
    (xdc_Char)0x76,  /* [2474] */
    (xdc_Char)0x61,  /* [2475] */
    (xdc_Char)0x6c,  /* [2476] */
    (xdc_Char)0x69,  /* [2477] */
    (xdc_Char)0x64,  /* [2478] */
    (xdc_Char)0x3a,  /* [2479] */
    (xdc_Char)0x20,  /* [2480] */
    (xdc_Char)0x68,  /* [2481] */
    (xdc_Char)0x65,  /* [2482] */
    (xdc_Char)0x61,  /* [2483] */
    (xdc_Char)0x70,  /* [2484] */
    (xdc_Char)0x49,  /* [2485] */
    (xdc_Char)0x64,  /* [2486] */
    (xdc_Char)0x20,  /* [2487] */
    (xdc_Char)0x69,  /* [2488] */
    (xdc_Char)0x73,  /* [2489] */
    (xdc_Char)0x20,  /* [2490] */
    (xdc_Char)0x69,  /* [2491] */
    (xdc_Char)0x6e,  /* [2492] */
    (xdc_Char)0x76,  /* [2493] */
    (xdc_Char)0x61,  /* [2494] */
    (xdc_Char)0x6c,  /* [2495] */
    (xdc_Char)0x69,  /* [2496] */
    (xdc_Char)0x64,  /* [2497] */
    (xdc_Char)0x0,  /* [2498] */
    (xdc_Char)0x41,  /* [2499] */
    (xdc_Char)0x5f,  /* [2500] */
    (xdc_Char)0x70,  /* [2501] */
    (xdc_Char)0x72,  /* [2502] */
    (xdc_Char)0x6f,  /* [2503] */
    (xdc_Char)0x63,  /* [2504] */
    (xdc_Char)0x49,  /* [2505] */
    (xdc_Char)0x64,  /* [2506] */
    (xdc_Char)0x49,  /* [2507] */
    (xdc_Char)0x6e,  /* [2508] */
    (xdc_Char)0x76,  /* [2509] */
    (xdc_Char)0x61,  /* [2510] */
    (xdc_Char)0x6c,  /* [2511] */
    (xdc_Char)0x69,  /* [2512] */
    (xdc_Char)0x64,  /* [2513] */
    (xdc_Char)0x3a,  /* [2514] */
    (xdc_Char)0x20,  /* [2515] */
    (xdc_Char)0x70,  /* [2516] */
    (xdc_Char)0x72,  /* [2517] */
    (xdc_Char)0x6f,  /* [2518] */
    (xdc_Char)0x63,  /* [2519] */
    (xdc_Char)0x49,  /* [2520] */
    (xdc_Char)0x64,  /* [2521] */
    (xdc_Char)0x20,  /* [2522] */
    (xdc_Char)0x69,  /* [2523] */
    (xdc_Char)0x73,  /* [2524] */
    (xdc_Char)0x20,  /* [2525] */
    (xdc_Char)0x69,  /* [2526] */
    (xdc_Char)0x6e,  /* [2527] */
    (xdc_Char)0x76,  /* [2528] */
    (xdc_Char)0x61,  /* [2529] */
    (xdc_Char)0x6c,  /* [2530] */
    (xdc_Char)0x69,  /* [2531] */
    (xdc_Char)0x64,  /* [2532] */
    (xdc_Char)0x0,  /* [2533] */
    (xdc_Char)0x41,  /* [2534] */
    (xdc_Char)0x5f,  /* [2535] */
    (xdc_Char)0x69,  /* [2536] */
    (xdc_Char)0x6e,  /* [2537] */
    (xdc_Char)0x76,  /* [2538] */
    (xdc_Char)0x61,  /* [2539] */
    (xdc_Char)0x6c,  /* [2540] */
    (xdc_Char)0x69,  /* [2541] */
    (xdc_Char)0x64,  /* [2542] */
    (xdc_Char)0x4f,  /* [2543] */
    (xdc_Char)0x62,  /* [2544] */
    (xdc_Char)0x6a,  /* [2545] */
    (xdc_Char)0x3a,  /* [2546] */
    (xdc_Char)0x20,  /* [2547] */
    (xdc_Char)0x61,  /* [2548] */
    (xdc_Char)0x6e,  /* [2549] */
    (xdc_Char)0x20,  /* [2550] */
    (xdc_Char)0x69,  /* [2551] */
    (xdc_Char)0x6e,  /* [2552] */
    (xdc_Char)0x76,  /* [2553] */
    (xdc_Char)0x61,  /* [2554] */
    (xdc_Char)0x6c,  /* [2555] */
    (xdc_Char)0x69,  /* [2556] */
    (xdc_Char)0x64,  /* [2557] */
    (xdc_Char)0x20,  /* [2558] */
    (xdc_Char)0x6f,  /* [2559] */
    (xdc_Char)0x62,  /* [2560] */
    (xdc_Char)0x6a,  /* [2561] */
    (xdc_Char)0x20,  /* [2562] */
    (xdc_Char)0x69,  /* [2563] */
    (xdc_Char)0x73,  /* [2564] */
    (xdc_Char)0x20,  /* [2565] */
    (xdc_Char)0x75,  /* [2566] */
    (xdc_Char)0x73,  /* [2567] */
    (xdc_Char)0x65,  /* [2568] */
    (xdc_Char)0x64,  /* [2569] */
    (xdc_Char)0x0,  /* [2570] */
    (xdc_Char)0x41,  /* [2571] */
    (xdc_Char)0x5f,  /* [2572] */
    (xdc_Char)0x69,  /* [2573] */
    (xdc_Char)0x6e,  /* [2574] */
    (xdc_Char)0x76,  /* [2575] */
    (xdc_Char)0x61,  /* [2576] */
    (xdc_Char)0x6c,  /* [2577] */
    (xdc_Char)0x69,  /* [2578] */
    (xdc_Char)0x64,  /* [2579] */
    (xdc_Char)0x50,  /* [2580] */
    (xdc_Char)0x61,  /* [2581] */
    (xdc_Char)0x72,  /* [2582] */
    (xdc_Char)0x61,  /* [2583] */
    (xdc_Char)0x6d,  /* [2584] */
    (xdc_Char)0x3a,  /* [2585] */
    (xdc_Char)0x20,  /* [2586] */
    (xdc_Char)0x61,  /* [2587] */
    (xdc_Char)0x6e,  /* [2588] */
    (xdc_Char)0x20,  /* [2589] */
    (xdc_Char)0x69,  /* [2590] */
    (xdc_Char)0x6e,  /* [2591] */
    (xdc_Char)0x76,  /* [2592] */
    (xdc_Char)0x61,  /* [2593] */
    (xdc_Char)0x6c,  /* [2594] */
    (xdc_Char)0x69,  /* [2595] */
    (xdc_Char)0x64,  /* [2596] */
    (xdc_Char)0x20,  /* [2597] */
    (xdc_Char)0x70,  /* [2598] */
    (xdc_Char)0x61,  /* [2599] */
    (xdc_Char)0x72,  /* [2600] */
    (xdc_Char)0x61,  /* [2601] */
    (xdc_Char)0x6d,  /* [2602] */
    (xdc_Char)0x65,  /* [2603] */
    (xdc_Char)0x74,  /* [2604] */
    (xdc_Char)0x65,  /* [2605] */
    (xdc_Char)0x72,  /* [2606] */
    (xdc_Char)0x20,  /* [2607] */
    (xdc_Char)0x77,  /* [2608] */
    (xdc_Char)0x61,  /* [2609] */
    (xdc_Char)0x73,  /* [2610] */
    (xdc_Char)0x20,  /* [2611] */
    (xdc_Char)0x70,  /* [2612] */
    (xdc_Char)0x61,  /* [2613] */
    (xdc_Char)0x73,  /* [2614] */
    (xdc_Char)0x73,  /* [2615] */
    (xdc_Char)0x65,  /* [2616] */
    (xdc_Char)0x64,  /* [2617] */
    (xdc_Char)0x20,  /* [2618] */
    (xdc_Char)0x69,  /* [2619] */
    (xdc_Char)0x6e,  /* [2620] */
    (xdc_Char)0x0,  /* [2621] */
    (xdc_Char)0x41,  /* [2622] */
    (xdc_Char)0x5f,  /* [2623] */
    (xdc_Char)0x75,  /* [2624] */
    (xdc_Char)0x6e,  /* [2625] */
    (xdc_Char)0x72,  /* [2626] */
    (xdc_Char)0x65,  /* [2627] */
    (xdc_Char)0x67,  /* [2628] */
    (xdc_Char)0x69,  /* [2629] */
    (xdc_Char)0x73,  /* [2630] */
    (xdc_Char)0x74,  /* [2631] */
    (xdc_Char)0x65,  /* [2632] */
    (xdc_Char)0x72,  /* [2633] */
    (xdc_Char)0x65,  /* [2634] */
    (xdc_Char)0x64,  /* [2635] */
    (xdc_Char)0x54,  /* [2636] */
    (xdc_Char)0x72,  /* [2637] */
    (xdc_Char)0x61,  /* [2638] */
    (xdc_Char)0x6e,  /* [2639] */
    (xdc_Char)0x73,  /* [2640] */
    (xdc_Char)0x70,  /* [2641] */
    (xdc_Char)0x6f,  /* [2642] */
    (xdc_Char)0x72,  /* [2643] */
    (xdc_Char)0x74,  /* [2644] */
    (xdc_Char)0x3a,  /* [2645] */
    (xdc_Char)0x20,  /* [2646] */
    (xdc_Char)0x74,  /* [2647] */
    (xdc_Char)0x72,  /* [2648] */
    (xdc_Char)0x61,  /* [2649] */
    (xdc_Char)0x6e,  /* [2650] */
    (xdc_Char)0x73,  /* [2651] */
    (xdc_Char)0x70,  /* [2652] */
    (xdc_Char)0x6f,  /* [2653] */
    (xdc_Char)0x72,  /* [2654] */
    (xdc_Char)0x74,  /* [2655] */
    (xdc_Char)0x20,  /* [2656] */
    (xdc_Char)0x69,  /* [2657] */
    (xdc_Char)0x73,  /* [2658] */
    (xdc_Char)0x20,  /* [2659] */
    (xdc_Char)0x6e,  /* [2660] */
    (xdc_Char)0x6f,  /* [2661] */
    (xdc_Char)0x74,  /* [2662] */
    (xdc_Char)0x20,  /* [2663] */
    (xdc_Char)0x72,  /* [2664] */
    (xdc_Char)0x65,  /* [2665] */
    (xdc_Char)0x67,  /* [2666] */
    (xdc_Char)0x69,  /* [2667] */
    (xdc_Char)0x73,  /* [2668] */
    (xdc_Char)0x74,  /* [2669] */
    (xdc_Char)0x65,  /* [2670] */
    (xdc_Char)0x72,  /* [2671] */
    (xdc_Char)0x65,  /* [2672] */
    (xdc_Char)0x64,  /* [2673] */
    (xdc_Char)0x0,  /* [2674] */
    (xdc_Char)0x41,  /* [2675] */
    (xdc_Char)0x5f,  /* [2676] */
    (xdc_Char)0x69,  /* [2677] */
    (xdc_Char)0x6e,  /* [2678] */
    (xdc_Char)0x76,  /* [2679] */
    (xdc_Char)0x61,  /* [2680] */
    (xdc_Char)0x6c,  /* [2681] */
    (xdc_Char)0x69,  /* [2682] */
    (xdc_Char)0x64,  /* [2683] */
    (xdc_Char)0x55,  /* [2684] */
    (xdc_Char)0x6e,  /* [2685] */
    (xdc_Char)0x62,  /* [2686] */
    (xdc_Char)0x6c,  /* [2687] */
    (xdc_Char)0x6f,  /* [2688] */
    (xdc_Char)0x63,  /* [2689] */
    (xdc_Char)0x6b,  /* [2690] */
    (xdc_Char)0x3a,  /* [2691] */
    (xdc_Char)0x20,  /* [2692] */
    (xdc_Char)0x54,  /* [2693] */
    (xdc_Char)0x72,  /* [2694] */
    (xdc_Char)0x79,  /* [2695] */
    (xdc_Char)0x69,  /* [2696] */
    (xdc_Char)0x6e,  /* [2697] */
    (xdc_Char)0x67,  /* [2698] */
    (xdc_Char)0x20,  /* [2699] */
    (xdc_Char)0x74,  /* [2700] */
    (xdc_Char)0x6f,  /* [2701] */
    (xdc_Char)0x20,  /* [2702] */
    (xdc_Char)0x75,  /* [2703] */
    (xdc_Char)0x6e,  /* [2704] */
    (xdc_Char)0x62,  /* [2705] */
    (xdc_Char)0x6c,  /* [2706] */
    (xdc_Char)0x6f,  /* [2707] */
    (xdc_Char)0x63,  /* [2708] */
    (xdc_Char)0x6b,  /* [2709] */
    (xdc_Char)0x20,  /* [2710] */
    (xdc_Char)0x61,  /* [2711] */
    (xdc_Char)0x20,  /* [2712] */
    (xdc_Char)0x72,  /* [2713] */
    (xdc_Char)0x65,  /* [2714] */
    (xdc_Char)0x6d,  /* [2715] */
    (xdc_Char)0x6f,  /* [2716] */
    (xdc_Char)0x74,  /* [2717] */
    (xdc_Char)0x65,  /* [2718] */
    (xdc_Char)0x20,  /* [2719] */
    (xdc_Char)0x4d,  /* [2720] */
    (xdc_Char)0x65,  /* [2721] */
    (xdc_Char)0x73,  /* [2722] */
    (xdc_Char)0x73,  /* [2723] */
    (xdc_Char)0x61,  /* [2724] */
    (xdc_Char)0x67,  /* [2725] */
    (xdc_Char)0x65,  /* [2726] */
    (xdc_Char)0x51,  /* [2727] */
    (xdc_Char)0x20,  /* [2728] */
    (xdc_Char)0x6f,  /* [2729] */
    (xdc_Char)0x72,  /* [2730] */
    (xdc_Char)0x20,  /* [2731] */
    (xdc_Char)0x61,  /* [2732] */
    (xdc_Char)0x20,  /* [2733] */
    (xdc_Char)0x71,  /* [2734] */
    (xdc_Char)0x75,  /* [2735] */
    (xdc_Char)0x65,  /* [2736] */
    (xdc_Char)0x75,  /* [2737] */
    (xdc_Char)0x65,  /* [2738] */
    (xdc_Char)0x20,  /* [2739] */
    (xdc_Char)0x77,  /* [2740] */
    (xdc_Char)0x69,  /* [2741] */
    (xdc_Char)0x74,  /* [2742] */
    (xdc_Char)0x68,  /* [2743] */
    (xdc_Char)0x20,  /* [2744] */
    (xdc_Char)0x6e,  /* [2745] */
    (xdc_Char)0x6f,  /* [2746] */
    (xdc_Char)0x6e,  /* [2747] */
    (xdc_Char)0x2d,  /* [2748] */
    (xdc_Char)0x62,  /* [2749] */
    (xdc_Char)0x6c,  /* [2750] */
    (xdc_Char)0x6f,  /* [2751] */
    (xdc_Char)0x63,  /* [2752] */
    (xdc_Char)0x6b,  /* [2753] */
    (xdc_Char)0x69,  /* [2754] */
    (xdc_Char)0x6e,  /* [2755] */
    (xdc_Char)0x67,  /* [2756] */
    (xdc_Char)0x20,  /* [2757] */
    (xdc_Char)0x73,  /* [2758] */
    (xdc_Char)0x79,  /* [2759] */
    (xdc_Char)0x6e,  /* [2760] */
    (xdc_Char)0x63,  /* [2761] */
    (xdc_Char)0x68,  /* [2762] */
    (xdc_Char)0x72,  /* [2763] */
    (xdc_Char)0x6f,  /* [2764] */
    (xdc_Char)0x6e,  /* [2765] */
    (xdc_Char)0x69,  /* [2766] */
    (xdc_Char)0x7a,  /* [2767] */
    (xdc_Char)0x65,  /* [2768] */
    (xdc_Char)0x72,  /* [2769] */
    (xdc_Char)0x0,  /* [2770] */
    (xdc_Char)0x41,  /* [2771] */
    (xdc_Char)0x5f,  /* [2772] */
    (xdc_Char)0x69,  /* [2773] */
    (xdc_Char)0x64,  /* [2774] */
    (xdc_Char)0x54,  /* [2775] */
    (xdc_Char)0x6f,  /* [2776] */
    (xdc_Char)0x6f,  /* [2777] */
    (xdc_Char)0x4c,  /* [2778] */
    (xdc_Char)0x61,  /* [2779] */
    (xdc_Char)0x72,  /* [2780] */
    (xdc_Char)0x67,  /* [2781] */
    (xdc_Char)0x65,  /* [2782] */
    (xdc_Char)0x3a,  /* [2783] */
    (xdc_Char)0x20,  /* [2784] */
    (xdc_Char)0x69,  /* [2785] */
    (xdc_Char)0x64,  /* [2786] */
    (xdc_Char)0x20,  /* [2787] */
    (xdc_Char)0x63,  /* [2788] */
    (xdc_Char)0x61,  /* [2789] */
    (xdc_Char)0x6e,  /* [2790] */
    (xdc_Char)0x6e,  /* [2791] */
    (xdc_Char)0x6f,  /* [2792] */
    (xdc_Char)0x74,  /* [2793] */
    (xdc_Char)0x20,  /* [2794] */
    (xdc_Char)0x62,  /* [2795] */
    (xdc_Char)0x65,  /* [2796] */
    (xdc_Char)0x20,  /* [2797] */
    (xdc_Char)0x6c,  /* [2798] */
    (xdc_Char)0x61,  /* [2799] */
    (xdc_Char)0x72,  /* [2800] */
    (xdc_Char)0x67,  /* [2801] */
    (xdc_Char)0x65,  /* [2802] */
    (xdc_Char)0x72,  /* [2803] */
    (xdc_Char)0x20,  /* [2804] */
    (xdc_Char)0x74,  /* [2805] */
    (xdc_Char)0x68,  /* [2806] */
    (xdc_Char)0x61,  /* [2807] */
    (xdc_Char)0x6e,  /* [2808] */
    (xdc_Char)0x20,  /* [2809] */
    (xdc_Char)0x6e,  /* [2810] */
    (xdc_Char)0x75,  /* [2811] */
    (xdc_Char)0x6d,  /* [2812] */
    (xdc_Char)0x45,  /* [2813] */
    (xdc_Char)0x6e,  /* [2814] */
    (xdc_Char)0x74,  /* [2815] */
    (xdc_Char)0x72,  /* [2816] */
    (xdc_Char)0x69,  /* [2817] */
    (xdc_Char)0x65,  /* [2818] */
    (xdc_Char)0x73,  /* [2819] */
    (xdc_Char)0x0,  /* [2820] */
    (xdc_Char)0x41,  /* [2821] */
    (xdc_Char)0x5f,  /* [2822] */
    (xdc_Char)0x61,  /* [2823] */
    (xdc_Char)0x64,  /* [2824] */
    (xdc_Char)0x64,  /* [2825] */
    (xdc_Char)0x72,  /* [2826] */
    (xdc_Char)0x4f,  /* [2827] */
    (xdc_Char)0x75,  /* [2828] */
    (xdc_Char)0x74,  /* [2829] */
    (xdc_Char)0x4f,  /* [2830] */
    (xdc_Char)0x66,  /* [2831] */
    (xdc_Char)0x52,  /* [2832] */
    (xdc_Char)0x61,  /* [2833] */
    (xdc_Char)0x6e,  /* [2834] */
    (xdc_Char)0x67,  /* [2835] */
    (xdc_Char)0x65,  /* [2836] */
    (xdc_Char)0x3a,  /* [2837] */
    (xdc_Char)0x20,  /* [2838] */
    (xdc_Char)0x41,  /* [2839] */
    (xdc_Char)0x64,  /* [2840] */
    (xdc_Char)0x64,  /* [2841] */
    (xdc_Char)0x72,  /* [2842] */
    (xdc_Char)0x65,  /* [2843] */
    (xdc_Char)0x73,  /* [2844] */
    (xdc_Char)0x73,  /* [2845] */
    (xdc_Char)0x20,  /* [2846] */
    (xdc_Char)0x69,  /* [2847] */
    (xdc_Char)0x73,  /* [2848] */
    (xdc_Char)0x20,  /* [2849] */
    (xdc_Char)0x6f,  /* [2850] */
    (xdc_Char)0x75,  /* [2851] */
    (xdc_Char)0x74,  /* [2852] */
    (xdc_Char)0x20,  /* [2853] */
    (xdc_Char)0x6f,  /* [2854] */
    (xdc_Char)0x66,  /* [2855] */
    (xdc_Char)0x20,  /* [2856] */
    (xdc_Char)0x72,  /* [2857] */
    (xdc_Char)0x65,  /* [2858] */
    (xdc_Char)0x67,  /* [2859] */
    (xdc_Char)0x69,  /* [2860] */
    (xdc_Char)0x6f,  /* [2861] */
    (xdc_Char)0x6e,  /* [2862] */
    (xdc_Char)0x20,  /* [2863] */
    (xdc_Char)0x69,  /* [2864] */
    (xdc_Char)0x64,  /* [2865] */
    (xdc_Char)0x27,  /* [2866] */
    (xdc_Char)0x73,  /* [2867] */
    (xdc_Char)0x20,  /* [2868] */
    (xdc_Char)0x72,  /* [2869] */
    (xdc_Char)0x61,  /* [2870] */
    (xdc_Char)0x6e,  /* [2871] */
    (xdc_Char)0x67,  /* [2872] */
    (xdc_Char)0x65,  /* [2873] */
    (xdc_Char)0x0,  /* [2874] */
    (xdc_Char)0x41,  /* [2875] */
    (xdc_Char)0x5f,  /* [2876] */
    (xdc_Char)0x72,  /* [2877] */
    (xdc_Char)0x65,  /* [2878] */
    (xdc_Char)0x67,  /* [2879] */
    (xdc_Char)0x69,  /* [2880] */
    (xdc_Char)0x6f,  /* [2881] */
    (xdc_Char)0x6e,  /* [2882] */
    (xdc_Char)0x30,  /* [2883] */
    (xdc_Char)0x43,  /* [2884] */
    (xdc_Char)0x6c,  /* [2885] */
    (xdc_Char)0x65,  /* [2886] */
    (xdc_Char)0x61,  /* [2887] */
    (xdc_Char)0x72,  /* [2888] */
    (xdc_Char)0x3a,  /* [2889] */
    (xdc_Char)0x20,  /* [2890] */
    (xdc_Char)0x52,  /* [2891] */
    (xdc_Char)0x65,  /* [2892] */
    (xdc_Char)0x67,  /* [2893] */
    (xdc_Char)0x69,  /* [2894] */
    (xdc_Char)0x6f,  /* [2895] */
    (xdc_Char)0x6e,  /* [2896] */
    (xdc_Char)0x20,  /* [2897] */
    (xdc_Char)0x30,  /* [2898] */
    (xdc_Char)0x20,  /* [2899] */
    (xdc_Char)0x63,  /* [2900] */
    (xdc_Char)0x61,  /* [2901] */
    (xdc_Char)0x6e,  /* [2902] */
    (xdc_Char)0x6e,  /* [2903] */
    (xdc_Char)0x6f,  /* [2904] */
    (xdc_Char)0x74,  /* [2905] */
    (xdc_Char)0x20,  /* [2906] */
    (xdc_Char)0x62,  /* [2907] */
    (xdc_Char)0x65,  /* [2908] */
    (xdc_Char)0x20,  /* [2909] */
    (xdc_Char)0x63,  /* [2910] */
    (xdc_Char)0x6c,  /* [2911] */
    (xdc_Char)0x65,  /* [2912] */
    (xdc_Char)0x61,  /* [2913] */
    (xdc_Char)0x72,  /* [2914] */
    (xdc_Char)0x65,  /* [2915] */
    (xdc_Char)0x64,  /* [2916] */
    (xdc_Char)0x0,  /* [2917] */
    (xdc_Char)0x41,  /* [2918] */
    (xdc_Char)0x5f,  /* [2919] */
    (xdc_Char)0x72,  /* [2920] */
    (xdc_Char)0x65,  /* [2921] */
    (xdc_Char)0x67,  /* [2922] */
    (xdc_Char)0x69,  /* [2923] */
    (xdc_Char)0x6f,  /* [2924] */
    (xdc_Char)0x6e,  /* [2925] */
    (xdc_Char)0x30,  /* [2926] */
    (xdc_Char)0x49,  /* [2927] */
    (xdc_Char)0x6e,  /* [2928] */
    (xdc_Char)0x76,  /* [2929] */
    (xdc_Char)0x61,  /* [2930] */
    (xdc_Char)0x6c,  /* [2931] */
    (xdc_Char)0x69,  /* [2932] */
    (xdc_Char)0x64,  /* [2933] */
    (xdc_Char)0x3a,  /* [2934] */
    (xdc_Char)0x20,  /* [2935] */
    (xdc_Char)0x52,  /* [2936] */
    (xdc_Char)0x65,  /* [2937] */
    (xdc_Char)0x67,  /* [2938] */
    (xdc_Char)0x69,  /* [2939] */
    (xdc_Char)0x6f,  /* [2940] */
    (xdc_Char)0x6e,  /* [2941] */
    (xdc_Char)0x20,  /* [2942] */
    (xdc_Char)0x7a,  /* [2943] */
    (xdc_Char)0x65,  /* [2944] */
    (xdc_Char)0x72,  /* [2945] */
    (xdc_Char)0x6f,  /* [2946] */
    (xdc_Char)0x20,  /* [2947] */
    (xdc_Char)0x69,  /* [2948] */
    (xdc_Char)0x73,  /* [2949] */
    (xdc_Char)0x20,  /* [2950] */
    (xdc_Char)0x69,  /* [2951] */
    (xdc_Char)0x6e,  /* [2952] */
    (xdc_Char)0x76,  /* [2953] */
    (xdc_Char)0x61,  /* [2954] */
    (xdc_Char)0x6c,  /* [2955] */
    (xdc_Char)0x69,  /* [2956] */
    (xdc_Char)0x64,  /* [2957] */
    (xdc_Char)0x0,  /* [2958] */
    (xdc_Char)0x41,  /* [2959] */
    (xdc_Char)0x5f,  /* [2960] */
    (xdc_Char)0x72,  /* [2961] */
    (xdc_Char)0x65,  /* [2962] */
    (xdc_Char)0x67,  /* [2963] */
    (xdc_Char)0x69,  /* [2964] */
    (xdc_Char)0x6f,  /* [2965] */
    (xdc_Char)0x6e,  /* [2966] */
    (xdc_Char)0x49,  /* [2967] */
    (xdc_Char)0x6e,  /* [2968] */
    (xdc_Char)0x76,  /* [2969] */
    (xdc_Char)0x61,  /* [2970] */
    (xdc_Char)0x6c,  /* [2971] */
    (xdc_Char)0x69,  /* [2972] */
    (xdc_Char)0x64,  /* [2973] */
    (xdc_Char)0x3a,  /* [2974] */
    (xdc_Char)0x20,  /* [2975] */
    (xdc_Char)0x52,  /* [2976] */
    (xdc_Char)0x65,  /* [2977] */
    (xdc_Char)0x67,  /* [2978] */
    (xdc_Char)0x69,  /* [2979] */
    (xdc_Char)0x6f,  /* [2980] */
    (xdc_Char)0x6e,  /* [2981] */
    (xdc_Char)0x20,  /* [2982] */
    (xdc_Char)0x69,  /* [2983] */
    (xdc_Char)0x73,  /* [2984] */
    (xdc_Char)0x20,  /* [2985] */
    (xdc_Char)0x69,  /* [2986] */
    (xdc_Char)0x6e,  /* [2987] */
    (xdc_Char)0x76,  /* [2988] */
    (xdc_Char)0x61,  /* [2989] */
    (xdc_Char)0x6c,  /* [2990] */
    (xdc_Char)0x69,  /* [2991] */
    (xdc_Char)0x64,  /* [2992] */
    (xdc_Char)0x0,  /* [2993] */
    (xdc_Char)0x41,  /* [2994] */
    (xdc_Char)0x5f,  /* [2995] */
    (xdc_Char)0x72,  /* [2996] */
    (xdc_Char)0x65,  /* [2997] */
    (xdc_Char)0x73,  /* [2998] */
    (xdc_Char)0x65,  /* [2999] */
    (xdc_Char)0x72,  /* [3000] */
    (xdc_Char)0x76,  /* [3001] */
    (xdc_Char)0x65,  /* [3002] */
    (xdc_Char)0x54,  /* [3003] */
    (xdc_Char)0x6f,  /* [3004] */
    (xdc_Char)0x6f,  /* [3005] */
    (xdc_Char)0x4d,  /* [3006] */
    (xdc_Char)0x75,  /* [3007] */
    (xdc_Char)0x63,  /* [3008] */
    (xdc_Char)0x68,  /* [3009] */
    (xdc_Char)0x3a,  /* [3010] */
    (xdc_Char)0x20,  /* [3011] */
    (xdc_Char)0x54,  /* [3012] */
    (xdc_Char)0x72,  /* [3013] */
    (xdc_Char)0x79,  /* [3014] */
    (xdc_Char)0x69,  /* [3015] */
    (xdc_Char)0x6e,  /* [3016] */
    (xdc_Char)0x67,  /* [3017] */
    (xdc_Char)0x20,  /* [3018] */
    (xdc_Char)0x74,  /* [3019] */
    (xdc_Char)0x6f,  /* [3020] */
    (xdc_Char)0x20,  /* [3021] */
    (xdc_Char)0x72,  /* [3022] */
    (xdc_Char)0x65,  /* [3023] */
    (xdc_Char)0x73,  /* [3024] */
    (xdc_Char)0x65,  /* [3025] */
    (xdc_Char)0x72,  /* [3026] */
    (xdc_Char)0x76,  /* [3027] */
    (xdc_Char)0x65,  /* [3028] */
    (xdc_Char)0x20,  /* [3029] */
    (xdc_Char)0x74,  /* [3030] */
    (xdc_Char)0x6f,  /* [3031] */
    (xdc_Char)0x6f,  /* [3032] */
    (xdc_Char)0x20,  /* [3033] */
    (xdc_Char)0x6d,  /* [3034] */
    (xdc_Char)0x75,  /* [3035] */
    (xdc_Char)0x63,  /* [3036] */
    (xdc_Char)0x68,  /* [3037] */
    (xdc_Char)0x20,  /* [3038] */
    (xdc_Char)0x6d,  /* [3039] */
    (xdc_Char)0x65,  /* [3040] */
    (xdc_Char)0x6d,  /* [3041] */
    (xdc_Char)0x6f,  /* [3042] */
    (xdc_Char)0x72,  /* [3043] */
    (xdc_Char)0x79,  /* [3044] */
    (xdc_Char)0x0,  /* [3045] */
    (xdc_Char)0x41,  /* [3046] */
    (xdc_Char)0x5f,  /* [3047] */
    (xdc_Char)0x63,  /* [3048] */
    (xdc_Char)0x61,  /* [3049] */
    (xdc_Char)0x63,  /* [3050] */
    (xdc_Char)0x68,  /* [3051] */
    (xdc_Char)0x65,  /* [3052] */
    (xdc_Char)0x4c,  /* [3053] */
    (xdc_Char)0x69,  /* [3054] */
    (xdc_Char)0x6e,  /* [3055] */
    (xdc_Char)0x65,  /* [3056] */
    (xdc_Char)0x53,  /* [3057] */
    (xdc_Char)0x69,  /* [3058] */
    (xdc_Char)0x7a,  /* [3059] */
    (xdc_Char)0x65,  /* [3060] */
    (xdc_Char)0x49,  /* [3061] */
    (xdc_Char)0x73,  /* [3062] */
    (xdc_Char)0x5a,  /* [3063] */
    (xdc_Char)0x65,  /* [3064] */
    (xdc_Char)0x72,  /* [3065] */
    (xdc_Char)0x6f,  /* [3066] */
    (xdc_Char)0x3a,  /* [3067] */
    (xdc_Char)0x20,  /* [3068] */
    (xdc_Char)0x63,  /* [3069] */
    (xdc_Char)0x61,  /* [3070] */
    (xdc_Char)0x63,  /* [3071] */
    (xdc_Char)0x68,  /* [3072] */
    (xdc_Char)0x65,  /* [3073] */
    (xdc_Char)0x20,  /* [3074] */
    (xdc_Char)0x6c,  /* [3075] */
    (xdc_Char)0x69,  /* [3076] */
    (xdc_Char)0x6e,  /* [3077] */
    (xdc_Char)0x65,  /* [3078] */
    (xdc_Char)0x20,  /* [3079] */
    (xdc_Char)0x73,  /* [3080] */
    (xdc_Char)0x69,  /* [3081] */
    (xdc_Char)0x7a,  /* [3082] */
    (xdc_Char)0x65,  /* [3083] */
    (xdc_Char)0x20,  /* [3084] */
    (xdc_Char)0x63,  /* [3085] */
    (xdc_Char)0x61,  /* [3086] */
    (xdc_Char)0x6e,  /* [3087] */
    (xdc_Char)0x6e,  /* [3088] */
    (xdc_Char)0x6f,  /* [3089] */
    (xdc_Char)0x74,  /* [3090] */
    (xdc_Char)0x20,  /* [3091] */
    (xdc_Char)0x62,  /* [3092] */
    (xdc_Char)0x65,  /* [3093] */
    (xdc_Char)0x20,  /* [3094] */
    (xdc_Char)0x7a,  /* [3095] */
    (xdc_Char)0x65,  /* [3096] */
    (xdc_Char)0x72,  /* [3097] */
    (xdc_Char)0x6f,  /* [3098] */
    (xdc_Char)0x0,  /* [3099] */
    (xdc_Char)0x41,  /* [3100] */
    (xdc_Char)0x5f,  /* [3101] */
    (xdc_Char)0x6f,  /* [3102] */
    (xdc_Char)0x76,  /* [3103] */
    (xdc_Char)0x65,  /* [3104] */
    (xdc_Char)0x72,  /* [3105] */
    (xdc_Char)0x6c,  /* [3106] */
    (xdc_Char)0x61,  /* [3107] */
    (xdc_Char)0x70,  /* [3108] */
    (xdc_Char)0x3a,  /* [3109] */
    (xdc_Char)0x20,  /* [3110] */
    (xdc_Char)0x53,  /* [3111] */
    (xdc_Char)0x68,  /* [3112] */
    (xdc_Char)0x61,  /* [3113] */
    (xdc_Char)0x72,  /* [3114] */
    (xdc_Char)0x65,  /* [3115] */
    (xdc_Char)0x64,  /* [3116] */
    (xdc_Char)0x20,  /* [3117] */
    (xdc_Char)0x72,  /* [3118] */
    (xdc_Char)0x65,  /* [3119] */
    (xdc_Char)0x67,  /* [3120] */
    (xdc_Char)0x69,  /* [3121] */
    (xdc_Char)0x6f,  /* [3122] */
    (xdc_Char)0x6e,  /* [3123] */
    (xdc_Char)0x20,  /* [3124] */
    (xdc_Char)0x6f,  /* [3125] */
    (xdc_Char)0x76,  /* [3126] */
    (xdc_Char)0x65,  /* [3127] */
    (xdc_Char)0x72,  /* [3128] */
    (xdc_Char)0x6c,  /* [3129] */
    (xdc_Char)0x61,  /* [3130] */
    (xdc_Char)0x70,  /* [3131] */
    (xdc_Char)0x73,  /* [3132] */
    (xdc_Char)0x0,  /* [3133] */
    (xdc_Char)0x41,  /* [3134] */
    (xdc_Char)0x5f,  /* [3135] */
    (xdc_Char)0x61,  /* [3136] */
    (xdc_Char)0x6c,  /* [3137] */
    (xdc_Char)0x72,  /* [3138] */
    (xdc_Char)0x65,  /* [3139] */
    (xdc_Char)0x61,  /* [3140] */
    (xdc_Char)0x64,  /* [3141] */
    (xdc_Char)0x79,  /* [3142] */
    (xdc_Char)0x45,  /* [3143] */
    (xdc_Char)0x78,  /* [3144] */
    (xdc_Char)0x69,  /* [3145] */
    (xdc_Char)0x73,  /* [3146] */
    (xdc_Char)0x74,  /* [3147] */
    (xdc_Char)0x73,  /* [3148] */
    (xdc_Char)0x3a,  /* [3149] */
    (xdc_Char)0x20,  /* [3150] */
    (xdc_Char)0x54,  /* [3151] */
    (xdc_Char)0x72,  /* [3152] */
    (xdc_Char)0x79,  /* [3153] */
    (xdc_Char)0x69,  /* [3154] */
    (xdc_Char)0x6e,  /* [3155] */
    (xdc_Char)0x67,  /* [3156] */
    (xdc_Char)0x20,  /* [3157] */
    (xdc_Char)0x74,  /* [3158] */
    (xdc_Char)0x6f,  /* [3159] */
    (xdc_Char)0x20,  /* [3160] */
    (xdc_Char)0x6f,  /* [3161] */
    (xdc_Char)0x76,  /* [3162] */
    (xdc_Char)0x65,  /* [3163] */
    (xdc_Char)0x72,  /* [3164] */
    (xdc_Char)0x77,  /* [3165] */
    (xdc_Char)0x72,  /* [3166] */
    (xdc_Char)0x69,  /* [3167] */
    (xdc_Char)0x74,  /* [3168] */
    (xdc_Char)0x65,  /* [3169] */
    (xdc_Char)0x20,  /* [3170] */
    (xdc_Char)0x61,  /* [3171] */
    (xdc_Char)0x6e,  /* [3172] */
    (xdc_Char)0x20,  /* [3173] */
    (xdc_Char)0x65,  /* [3174] */
    (xdc_Char)0x78,  /* [3175] */
    (xdc_Char)0x69,  /* [3176] */
    (xdc_Char)0x73,  /* [3177] */
    (xdc_Char)0x74,  /* [3178] */
    (xdc_Char)0x69,  /* [3179] */
    (xdc_Char)0x6e,  /* [3180] */
    (xdc_Char)0x67,  /* [3181] */
    (xdc_Char)0x20,  /* [3182] */
    (xdc_Char)0x76,  /* [3183] */
    (xdc_Char)0x61,  /* [3184] */
    (xdc_Char)0x6c,  /* [3185] */
    (xdc_Char)0x69,  /* [3186] */
    (xdc_Char)0x64,  /* [3187] */
    (xdc_Char)0x20,  /* [3188] */
    (xdc_Char)0x65,  /* [3189] */
    (xdc_Char)0x6e,  /* [3190] */
    (xdc_Char)0x74,  /* [3191] */
    (xdc_Char)0x72,  /* [3192] */
    (xdc_Char)0x79,  /* [3193] */
    (xdc_Char)0x0,  /* [3194] */
    (xdc_Char)0x41,  /* [3195] */
    (xdc_Char)0x5f,  /* [3196] */
    (xdc_Char)0x6e,  /* [3197] */
    (xdc_Char)0x6f,  /* [3198] */
    (xdc_Char)0x48,  /* [3199] */
    (xdc_Char)0x65,  /* [3200] */
    (xdc_Char)0x61,  /* [3201] */
    (xdc_Char)0x70,  /* [3202] */
    (xdc_Char)0x3a,  /* [3203] */
    (xdc_Char)0x20,  /* [3204] */
    (xdc_Char)0x52,  /* [3205] */
    (xdc_Char)0x65,  /* [3206] */
    (xdc_Char)0x67,  /* [3207] */
    (xdc_Char)0x69,  /* [3208] */
    (xdc_Char)0x6f,  /* [3209] */
    (xdc_Char)0x6e,  /* [3210] */
    (xdc_Char)0x20,  /* [3211] */
    (xdc_Char)0x68,  /* [3212] */
    (xdc_Char)0x61,  /* [3213] */
    (xdc_Char)0x73,  /* [3214] */
    (xdc_Char)0x20,  /* [3215] */
    (xdc_Char)0x6e,  /* [3216] */
    (xdc_Char)0x6f,  /* [3217] */
    (xdc_Char)0x20,  /* [3218] */
    (xdc_Char)0x68,  /* [3219] */
    (xdc_Char)0x65,  /* [3220] */
    (xdc_Char)0x61,  /* [3221] */
    (xdc_Char)0x70,  /* [3222] */
    (xdc_Char)0x0,  /* [3223] */
    (xdc_Char)0x41,  /* [3224] */
    (xdc_Char)0x5f,  /* [3225] */
    (xdc_Char)0x61,  /* [3226] */
    (xdc_Char)0x64,  /* [3227] */
    (xdc_Char)0x64,  /* [3228] */
    (xdc_Char)0x72,  /* [3229] */
    (xdc_Char)0x4e,  /* [3230] */
    (xdc_Char)0x6f,  /* [3231] */
    (xdc_Char)0x74,  /* [3232] */
    (xdc_Char)0x49,  /* [3233] */
    (xdc_Char)0x6e,  /* [3234] */
    (xdc_Char)0x53,  /* [3235] */
    (xdc_Char)0x68,  /* [3236] */
    (xdc_Char)0x61,  /* [3237] */
    (xdc_Char)0x72,  /* [3238] */
    (xdc_Char)0x65,  /* [3239] */
    (xdc_Char)0x64,  /* [3240] */
    (xdc_Char)0x52,  /* [3241] */
    (xdc_Char)0x65,  /* [3242] */
    (xdc_Char)0x67,  /* [3243] */
    (xdc_Char)0x69,  /* [3244] */
    (xdc_Char)0x6f,  /* [3245] */
    (xdc_Char)0x6e,  /* [3246] */
    (xdc_Char)0x3a,  /* [3247] */
    (xdc_Char)0x20,  /* [3248] */
    (xdc_Char)0x41,  /* [3249] */
    (xdc_Char)0x64,  /* [3250] */
    (xdc_Char)0x64,  /* [3251] */
    (xdc_Char)0x72,  /* [3252] */
    (xdc_Char)0x65,  /* [3253] */
    (xdc_Char)0x73,  /* [3254] */
    (xdc_Char)0x73,  /* [3255] */
    (xdc_Char)0x20,  /* [3256] */
    (xdc_Char)0x6e,  /* [3257] */
    (xdc_Char)0x6f,  /* [3258] */
    (xdc_Char)0x74,  /* [3259] */
    (xdc_Char)0x20,  /* [3260] */
    (xdc_Char)0x69,  /* [3261] */
    (xdc_Char)0x6e,  /* [3262] */
    (xdc_Char)0x20,  /* [3263] */
    (xdc_Char)0x61,  /* [3264] */
    (xdc_Char)0x6e,  /* [3265] */
    (xdc_Char)0x79,  /* [3266] */
    (xdc_Char)0x20,  /* [3267] */
    (xdc_Char)0x73,  /* [3268] */
    (xdc_Char)0x68,  /* [3269] */
    (xdc_Char)0x61,  /* [3270] */
    (xdc_Char)0x72,  /* [3271] */
    (xdc_Char)0x65,  /* [3272] */
    (xdc_Char)0x64,  /* [3273] */
    (xdc_Char)0x20,  /* [3274] */
    (xdc_Char)0x72,  /* [3275] */
    (xdc_Char)0x65,  /* [3276] */
    (xdc_Char)0x67,  /* [3277] */
    (xdc_Char)0x69,  /* [3278] */
    (xdc_Char)0x6f,  /* [3279] */
    (xdc_Char)0x6e,  /* [3280] */
    (xdc_Char)0x0,  /* [3281] */
    (xdc_Char)0x41,  /* [3282] */
    (xdc_Char)0x5f,  /* [3283] */
    (xdc_Char)0x61,  /* [3284] */
    (xdc_Char)0x64,  /* [3285] */
    (xdc_Char)0x64,  /* [3286] */
    (xdc_Char)0x72,  /* [3287] */
    (xdc_Char)0x4e,  /* [3288] */
    (xdc_Char)0x6f,  /* [3289] */
    (xdc_Char)0x74,  /* [3290] */
    (xdc_Char)0x43,  /* [3291] */
    (xdc_Char)0x61,  /* [3292] */
    (xdc_Char)0x63,  /* [3293] */
    (xdc_Char)0x68,  /* [3294] */
    (xdc_Char)0x65,  /* [3295] */
    (xdc_Char)0x41,  /* [3296] */
    (xdc_Char)0x6c,  /* [3297] */
    (xdc_Char)0x69,  /* [3298] */
    (xdc_Char)0x67,  /* [3299] */
    (xdc_Char)0x6e,  /* [3300] */
    (xdc_Char)0x65,  /* [3301] */
    (xdc_Char)0x64,  /* [3302] */
    (xdc_Char)0x3a,  /* [3303] */
    (xdc_Char)0x20,  /* [3304] */
    (xdc_Char)0x41,  /* [3305] */
    (xdc_Char)0x64,  /* [3306] */
    (xdc_Char)0x64,  /* [3307] */
    (xdc_Char)0x72,  /* [3308] */
    (xdc_Char)0x65,  /* [3309] */
    (xdc_Char)0x73,  /* [3310] */
    (xdc_Char)0x73,  /* [3311] */
    (xdc_Char)0x20,  /* [3312] */
    (xdc_Char)0x69,  /* [3313] */
    (xdc_Char)0x73,  /* [3314] */
    (xdc_Char)0x20,  /* [3315] */
    (xdc_Char)0x6e,  /* [3316] */
    (xdc_Char)0x6f,  /* [3317] */
    (xdc_Char)0x74,  /* [3318] */
    (xdc_Char)0x20,  /* [3319] */
    (xdc_Char)0x63,  /* [3320] */
    (xdc_Char)0x61,  /* [3321] */
    (xdc_Char)0x63,  /* [3322] */
    (xdc_Char)0x68,  /* [3323] */
    (xdc_Char)0x65,  /* [3324] */
    (xdc_Char)0x20,  /* [3325] */
    (xdc_Char)0x61,  /* [3326] */
    (xdc_Char)0x6c,  /* [3327] */
    (xdc_Char)0x69,  /* [3328] */
    (xdc_Char)0x67,  /* [3329] */
    (xdc_Char)0x6e,  /* [3330] */
    (xdc_Char)0x65,  /* [3331] */
    (xdc_Char)0x64,  /* [3332] */
    (xdc_Char)0x0,  /* [3333] */
    (xdc_Char)0x41,  /* [3334] */
    (xdc_Char)0x5f,  /* [3335] */
    (xdc_Char)0x6e,  /* [3336] */
    (xdc_Char)0x75,  /* [3337] */
    (xdc_Char)0x6c,  /* [3338] */
    (xdc_Char)0x6c,  /* [3339] */
    (xdc_Char)0x41,  /* [3340] */
    (xdc_Char)0x72,  /* [3341] */
    (xdc_Char)0x67,  /* [3342] */
    (xdc_Char)0x75,  /* [3343] */
    (xdc_Char)0x6d,  /* [3344] */
    (xdc_Char)0x65,  /* [3345] */
    (xdc_Char)0x6e,  /* [3346] */
    (xdc_Char)0x74,  /* [3347] */
    (xdc_Char)0x3a,  /* [3348] */
    (xdc_Char)0x20,  /* [3349] */
    (xdc_Char)0x52,  /* [3350] */
    (xdc_Char)0x65,  /* [3351] */
    (xdc_Char)0x71,  /* [3352] */
    (xdc_Char)0x75,  /* [3353] */
    (xdc_Char)0x69,  /* [3354] */
    (xdc_Char)0x72,  /* [3355] */
    (xdc_Char)0x65,  /* [3356] */
    (xdc_Char)0x64,  /* [3357] */
    (xdc_Char)0x20,  /* [3358] */
    (xdc_Char)0x61,  /* [3359] */
    (xdc_Char)0x72,  /* [3360] */
    (xdc_Char)0x67,  /* [3361] */
    (xdc_Char)0x75,  /* [3362] */
    (xdc_Char)0x6d,  /* [3363] */
    (xdc_Char)0x65,  /* [3364] */
    (xdc_Char)0x6e,  /* [3365] */
    (xdc_Char)0x74,  /* [3366] */
    (xdc_Char)0x20,  /* [3367] */
    (xdc_Char)0x69,  /* [3368] */
    (xdc_Char)0x73,  /* [3369] */
    (xdc_Char)0x20,  /* [3370] */
    (xdc_Char)0x6e,  /* [3371] */
    (xdc_Char)0x75,  /* [3372] */
    (xdc_Char)0x6c,  /* [3373] */
    (xdc_Char)0x6c,  /* [3374] */
    (xdc_Char)0x0,  /* [3375] */
    (xdc_Char)0x41,  /* [3376] */
    (xdc_Char)0x5f,  /* [3377] */
    (xdc_Char)0x69,  /* [3378] */
    (xdc_Char)0x6e,  /* [3379] */
    (xdc_Char)0x76,  /* [3380] */
    (xdc_Char)0x50,  /* [3381] */
    (xdc_Char)0x61,  /* [3382] */
    (xdc_Char)0x72,  /* [3383] */
    (xdc_Char)0x61,  /* [3384] */
    (xdc_Char)0x6d,  /* [3385] */
    (xdc_Char)0x3a,  /* [3386] */
    (xdc_Char)0x20,  /* [3387] */
    (xdc_Char)0x49,  /* [3388] */
    (xdc_Char)0x6e,  /* [3389] */
    (xdc_Char)0x76,  /* [3390] */
    (xdc_Char)0x61,  /* [3391] */
    (xdc_Char)0x6c,  /* [3392] */
    (xdc_Char)0x69,  /* [3393] */
    (xdc_Char)0x64,  /* [3394] */
    (xdc_Char)0x20,  /* [3395] */
    (xdc_Char)0x63,  /* [3396] */
    (xdc_Char)0x6f,  /* [3397] */
    (xdc_Char)0x6e,  /* [3398] */
    (xdc_Char)0x66,  /* [3399] */
    (xdc_Char)0x69,  /* [3400] */
    (xdc_Char)0x67,  /* [3401] */
    (xdc_Char)0x75,  /* [3402] */
    (xdc_Char)0x72,  /* [3403] */
    (xdc_Char)0x61,  /* [3404] */
    (xdc_Char)0x74,  /* [3405] */
    (xdc_Char)0x69,  /* [3406] */
    (xdc_Char)0x6f,  /* [3407] */
    (xdc_Char)0x6e,  /* [3408] */
    (xdc_Char)0x20,  /* [3409] */
    (xdc_Char)0x70,  /* [3410] */
    (xdc_Char)0x61,  /* [3411] */
    (xdc_Char)0x72,  /* [3412] */
    (xdc_Char)0x61,  /* [3413] */
    (xdc_Char)0x6d,  /* [3414] */
    (xdc_Char)0x65,  /* [3415] */
    (xdc_Char)0x74,  /* [3416] */
    (xdc_Char)0x65,  /* [3417] */
    (xdc_Char)0x72,  /* [3418] */
    (xdc_Char)0x20,  /* [3419] */
    (xdc_Char)0x73,  /* [3420] */
    (xdc_Char)0x75,  /* [3421] */
    (xdc_Char)0x70,  /* [3422] */
    (xdc_Char)0x70,  /* [3423] */
    (xdc_Char)0x6c,  /* [3424] */
    (xdc_Char)0x69,  /* [3425] */
    (xdc_Char)0x65,  /* [3426] */
    (xdc_Char)0x64,  /* [3427] */
    (xdc_Char)0x0,  /* [3428] */
    (xdc_Char)0x41,  /* [3429] */
    (xdc_Char)0x5f,  /* [3430] */
    (xdc_Char)0x69,  /* [3431] */
    (xdc_Char)0x6e,  /* [3432] */
    (xdc_Char)0x74,  /* [3433] */
    (xdc_Char)0x65,  /* [3434] */
    (xdc_Char)0x72,  /* [3435] */
    (xdc_Char)0x6e,  /* [3436] */
    (xdc_Char)0x61,  /* [3437] */
    (xdc_Char)0x6c,  /* [3438] */
    (xdc_Char)0x3a,  /* [3439] */
    (xdc_Char)0x20,  /* [3440] */
    (xdc_Char)0x41,  /* [3441] */
    (xdc_Char)0x6e,  /* [3442] */
    (xdc_Char)0x20,  /* [3443] */
    (xdc_Char)0x69,  /* [3444] */
    (xdc_Char)0x6e,  /* [3445] */
    (xdc_Char)0x74,  /* [3446] */
    (xdc_Char)0x65,  /* [3447] */
    (xdc_Char)0x72,  /* [3448] */
    (xdc_Char)0x6e,  /* [3449] */
    (xdc_Char)0x61,  /* [3450] */
    (xdc_Char)0x6c,  /* [3451] */
    (xdc_Char)0x20,  /* [3452] */
    (xdc_Char)0x65,  /* [3453] */
    (xdc_Char)0x72,  /* [3454] */
    (xdc_Char)0x72,  /* [3455] */
    (xdc_Char)0x6f,  /* [3456] */
    (xdc_Char)0x72,  /* [3457] */
    (xdc_Char)0x20,  /* [3458] */
    (xdc_Char)0x68,  /* [3459] */
    (xdc_Char)0x61,  /* [3460] */
    (xdc_Char)0x73,  /* [3461] */
    (xdc_Char)0x20,  /* [3462] */
    (xdc_Char)0x6f,  /* [3463] */
    (xdc_Char)0x63,  /* [3464] */
    (xdc_Char)0x63,  /* [3465] */
    (xdc_Char)0x75,  /* [3466] */
    (xdc_Char)0x72,  /* [3467] */
    (xdc_Char)0x72,  /* [3468] */
    (xdc_Char)0x65,  /* [3469] */
    (xdc_Char)0x64,  /* [3470] */
    (xdc_Char)0x0,  /* [3471] */
    (xdc_Char)0x41,  /* [3472] */
    (xdc_Char)0x5f,  /* [3473] */
    (xdc_Char)0x61,  /* [3474] */
    (xdc_Char)0x6c,  /* [3475] */
    (xdc_Char)0x72,  /* [3476] */
    (xdc_Char)0x65,  /* [3477] */
    (xdc_Char)0x61,  /* [3478] */
    (xdc_Char)0x64,  /* [3479] */
    (xdc_Char)0x79,  /* [3480] */
    (xdc_Char)0x52,  /* [3481] */
    (xdc_Char)0x65,  /* [3482] */
    (xdc_Char)0x67,  /* [3483] */
    (xdc_Char)0x69,  /* [3484] */
    (xdc_Char)0x73,  /* [3485] */
    (xdc_Char)0x74,  /* [3486] */
    (xdc_Char)0x65,  /* [3487] */
    (xdc_Char)0x72,  /* [3488] */
    (xdc_Char)0x65,  /* [3489] */
    (xdc_Char)0x64,  /* [3490] */
    (xdc_Char)0x3a,  /* [3491] */
    (xdc_Char)0x20,  /* [3492] */
    (xdc_Char)0x4e,  /* [3493] */
    (xdc_Char)0x6f,  /* [3494] */
    (xdc_Char)0x74,  /* [3495] */
    (xdc_Char)0x69,  /* [3496] */
    (xdc_Char)0x66,  /* [3497] */
    (xdc_Char)0x79,  /* [3498] */
    (xdc_Char)0x20,  /* [3499] */
    (xdc_Char)0x69,  /* [3500] */
    (xdc_Char)0x6e,  /* [3501] */
    (xdc_Char)0x73,  /* [3502] */
    (xdc_Char)0x74,  /* [3503] */
    (xdc_Char)0x61,  /* [3504] */
    (xdc_Char)0x6e,  /* [3505] */
    (xdc_Char)0x63,  /* [3506] */
    (xdc_Char)0x65,  /* [3507] */
    (xdc_Char)0x20,  /* [3508] */
    (xdc_Char)0x66,  /* [3509] */
    (xdc_Char)0x6f,  /* [3510] */
    (xdc_Char)0x72,  /* [3511] */
    (xdc_Char)0x20,  /* [3512] */
    (xdc_Char)0x74,  /* [3513] */
    (xdc_Char)0x68,  /* [3514] */
    (xdc_Char)0x65,  /* [3515] */
    (xdc_Char)0x20,  /* [3516] */
    (xdc_Char)0x70,  /* [3517] */
    (xdc_Char)0x72,  /* [3518] */
    (xdc_Char)0x6f,  /* [3519] */
    (xdc_Char)0x63,  /* [3520] */
    (xdc_Char)0x65,  /* [3521] */
    (xdc_Char)0x73,  /* [3522] */
    (xdc_Char)0x73,  /* [3523] */
    (xdc_Char)0x6f,  /* [3524] */
    (xdc_Char)0x72,  /* [3525] */
    (xdc_Char)0x2f,  /* [3526] */
    (xdc_Char)0x6c,  /* [3527] */
    (xdc_Char)0x69,  /* [3528] */
    (xdc_Char)0x6e,  /* [3529] */
    (xdc_Char)0x65,  /* [3530] */
    (xdc_Char)0x20,  /* [3531] */
    (xdc_Char)0x61,  /* [3532] */
    (xdc_Char)0x6c,  /* [3533] */
    (xdc_Char)0x72,  /* [3534] */
    (xdc_Char)0x65,  /* [3535] */
    (xdc_Char)0x61,  /* [3536] */
    (xdc_Char)0x64,  /* [3537] */
    (xdc_Char)0x79,  /* [3538] */
    (xdc_Char)0x20,  /* [3539] */
    (xdc_Char)0x72,  /* [3540] */
    (xdc_Char)0x65,  /* [3541] */
    (xdc_Char)0x67,  /* [3542] */
    (xdc_Char)0x69,  /* [3543] */
    (xdc_Char)0x73,  /* [3544] */
    (xdc_Char)0x74,  /* [3545] */
    (xdc_Char)0x65,  /* [3546] */
    (xdc_Char)0x72,  /* [3547] */
    (xdc_Char)0x65,  /* [3548] */
    (xdc_Char)0x64,  /* [3549] */
    (xdc_Char)0x0,  /* [3550] */
    (xdc_Char)0x41,  /* [3551] */
    (xdc_Char)0x5f,  /* [3552] */
    (xdc_Char)0x6e,  /* [3553] */
    (xdc_Char)0x6f,  /* [3554] */
    (xdc_Char)0x74,  /* [3555] */
    (xdc_Char)0x52,  /* [3556] */
    (xdc_Char)0x65,  /* [3557] */
    (xdc_Char)0x67,  /* [3558] */
    (xdc_Char)0x69,  /* [3559] */
    (xdc_Char)0x73,  /* [3560] */
    (xdc_Char)0x74,  /* [3561] */
    (xdc_Char)0x65,  /* [3562] */
    (xdc_Char)0x72,  /* [3563] */
    (xdc_Char)0x65,  /* [3564] */
    (xdc_Char)0x64,  /* [3565] */
    (xdc_Char)0x3a,  /* [3566] */
    (xdc_Char)0x20,  /* [3567] */
    (xdc_Char)0x4e,  /* [3568] */
    (xdc_Char)0x6f,  /* [3569] */
    (xdc_Char)0x74,  /* [3570] */
    (xdc_Char)0x69,  /* [3571] */
    (xdc_Char)0x66,  /* [3572] */
    (xdc_Char)0x79,  /* [3573] */
    (xdc_Char)0x20,  /* [3574] */
    (xdc_Char)0x69,  /* [3575] */
    (xdc_Char)0x6e,  /* [3576] */
    (xdc_Char)0x73,  /* [3577] */
    (xdc_Char)0x74,  /* [3578] */
    (xdc_Char)0x61,  /* [3579] */
    (xdc_Char)0x6e,  /* [3580] */
    (xdc_Char)0x63,  /* [3581] */
    (xdc_Char)0x65,  /* [3582] */
    (xdc_Char)0x20,  /* [3583] */
    (xdc_Char)0x6e,  /* [3584] */
    (xdc_Char)0x6f,  /* [3585] */
    (xdc_Char)0x74,  /* [3586] */
    (xdc_Char)0x20,  /* [3587] */
    (xdc_Char)0x79,  /* [3588] */
    (xdc_Char)0x65,  /* [3589] */
    (xdc_Char)0x74,  /* [3590] */
    (xdc_Char)0x20,  /* [3591] */
    (xdc_Char)0x72,  /* [3592] */
    (xdc_Char)0x65,  /* [3593] */
    (xdc_Char)0x67,  /* [3594] */
    (xdc_Char)0x69,  /* [3595] */
    (xdc_Char)0x73,  /* [3596] */
    (xdc_Char)0x74,  /* [3597] */
    (xdc_Char)0x65,  /* [3598] */
    (xdc_Char)0x72,  /* [3599] */
    (xdc_Char)0x65,  /* [3600] */
    (xdc_Char)0x64,  /* [3601] */
    (xdc_Char)0x20,  /* [3602] */
    (xdc_Char)0x66,  /* [3603] */
    (xdc_Char)0x6f,  /* [3604] */
    (xdc_Char)0x72,  /* [3605] */
    (xdc_Char)0x20,  /* [3606] */
    (xdc_Char)0x74,  /* [3607] */
    (xdc_Char)0x68,  /* [3608] */
    (xdc_Char)0x65,  /* [3609] */
    (xdc_Char)0x20,  /* [3610] */
    (xdc_Char)0x70,  /* [3611] */
    (xdc_Char)0x72,  /* [3612] */
    (xdc_Char)0x6f,  /* [3613] */
    (xdc_Char)0x63,  /* [3614] */
    (xdc_Char)0x65,  /* [3615] */
    (xdc_Char)0x73,  /* [3616] */
    (xdc_Char)0x73,  /* [3617] */
    (xdc_Char)0x6f,  /* [3618] */
    (xdc_Char)0x72,  /* [3619] */
    (xdc_Char)0x2f,  /* [3620] */
    (xdc_Char)0x6c,  /* [3621] */
    (xdc_Char)0x69,  /* [3622] */
    (xdc_Char)0x6e,  /* [3623] */
    (xdc_Char)0x65,  /* [3624] */
    (xdc_Char)0x0,  /* [3625] */
    (xdc_Char)0x41,  /* [3626] */
    (xdc_Char)0x5f,  /* [3627] */
    (xdc_Char)0x72,  /* [3628] */
    (xdc_Char)0x65,  /* [3629] */
    (xdc_Char)0x73,  /* [3630] */
    (xdc_Char)0x65,  /* [3631] */
    (xdc_Char)0x72,  /* [3632] */
    (xdc_Char)0x76,  /* [3633] */
    (xdc_Char)0x65,  /* [3634] */
    (xdc_Char)0x64,  /* [3635] */
    (xdc_Char)0x45,  /* [3636] */
    (xdc_Char)0x76,  /* [3637] */
    (xdc_Char)0x65,  /* [3638] */
    (xdc_Char)0x6e,  /* [3639] */
    (xdc_Char)0x74,  /* [3640] */
    (xdc_Char)0x3a,  /* [3641] */
    (xdc_Char)0x20,  /* [3642] */
    (xdc_Char)0x49,  /* [3643] */
    (xdc_Char)0x6d,  /* [3644] */
    (xdc_Char)0x70,  /* [3645] */
    (xdc_Char)0x72,  /* [3646] */
    (xdc_Char)0x6f,  /* [3647] */
    (xdc_Char)0x70,  /* [3648] */
    (xdc_Char)0x65,  /* [3649] */
    (xdc_Char)0x72,  /* [3650] */
    (xdc_Char)0x20,  /* [3651] */
    (xdc_Char)0x75,  /* [3652] */
    (xdc_Char)0x73,  /* [3653] */
    (xdc_Char)0x65,  /* [3654] */
    (xdc_Char)0x20,  /* [3655] */
    (xdc_Char)0x6f,  /* [3656] */
    (xdc_Char)0x66,  /* [3657] */
    (xdc_Char)0x20,  /* [3658] */
    (xdc_Char)0x61,  /* [3659] */
    (xdc_Char)0x20,  /* [3660] */
    (xdc_Char)0x72,  /* [3661] */
    (xdc_Char)0x65,  /* [3662] */
    (xdc_Char)0x73,  /* [3663] */
    (xdc_Char)0x65,  /* [3664] */
    (xdc_Char)0x72,  /* [3665] */
    (xdc_Char)0x76,  /* [3666] */
    (xdc_Char)0x65,  /* [3667] */
    (xdc_Char)0x64,  /* [3668] */
    (xdc_Char)0x20,  /* [3669] */
    (xdc_Char)0x65,  /* [3670] */
    (xdc_Char)0x76,  /* [3671] */
    (xdc_Char)0x65,  /* [3672] */
    (xdc_Char)0x6e,  /* [3673] */
    (xdc_Char)0x74,  /* [3674] */
    (xdc_Char)0x0,  /* [3675] */
    (xdc_Char)0x41,  /* [3676] */
    (xdc_Char)0x5f,  /* [3677] */
    (xdc_Char)0x6f,  /* [3678] */
    (xdc_Char)0x75,  /* [3679] */
    (xdc_Char)0x74,  /* [3680] */
    (xdc_Char)0x4f,  /* [3681] */
    (xdc_Char)0x66,  /* [3682] */
    (xdc_Char)0x4f,  /* [3683] */
    (xdc_Char)0x72,  /* [3684] */
    (xdc_Char)0x64,  /* [3685] */
    (xdc_Char)0x65,  /* [3686] */
    (xdc_Char)0x72,  /* [3687] */
    (xdc_Char)0x4e,  /* [3688] */
    (xdc_Char)0x65,  /* [3689] */
    (xdc_Char)0x73,  /* [3690] */
    (xdc_Char)0x74,  /* [3691] */
    (xdc_Char)0x69,  /* [3692] */
    (xdc_Char)0x6e,  /* [3693] */
    (xdc_Char)0x67,  /* [3694] */
    (xdc_Char)0x3a,  /* [3695] */
    (xdc_Char)0x20,  /* [3696] */
    (xdc_Char)0x4f,  /* [3697] */
    (xdc_Char)0x75,  /* [3698] */
    (xdc_Char)0x74,  /* [3699] */
    (xdc_Char)0x20,  /* [3700] */
    (xdc_Char)0x6f,  /* [3701] */
    (xdc_Char)0x66,  /* [3702] */
    (xdc_Char)0x20,  /* [3703] */
    (xdc_Char)0x6f,  /* [3704] */
    (xdc_Char)0x72,  /* [3705] */
    (xdc_Char)0x64,  /* [3706] */
    (xdc_Char)0x65,  /* [3707] */
    (xdc_Char)0x72,  /* [3708] */
    (xdc_Char)0x20,  /* [3709] */
    (xdc_Char)0x6e,  /* [3710] */
    (xdc_Char)0x65,  /* [3711] */
    (xdc_Char)0x73,  /* [3712] */
    (xdc_Char)0x74,  /* [3713] */
    (xdc_Char)0x69,  /* [3714] */
    (xdc_Char)0x6e,  /* [3715] */
    (xdc_Char)0x67,  /* [3716] */
    (xdc_Char)0x0,  /* [3717] */
    (xdc_Char)0x41,  /* [3718] */
    (xdc_Char)0x5f,  /* [3719] */
    (xdc_Char)0x6e,  /* [3720] */
    (xdc_Char)0x6f,  /* [3721] */
    (xdc_Char)0x74,  /* [3722] */
    (xdc_Char)0x41,  /* [3723] */
    (xdc_Char)0x76,  /* [3724] */
    (xdc_Char)0x61,  /* [3725] */
    (xdc_Char)0x69,  /* [3726] */
    (xdc_Char)0x6c,  /* [3727] */
    (xdc_Char)0x61,  /* [3728] */
    (xdc_Char)0x62,  /* [3729] */
    (xdc_Char)0x6c,  /* [3730] */
    (xdc_Char)0x65,  /* [3731] */
    (xdc_Char)0x3a,  /* [3732] */
    (xdc_Char)0x20,  /* [3733] */
    (xdc_Char)0x73,  /* [3734] */
    (xdc_Char)0x74,  /* [3735] */
    (xdc_Char)0x61,  /* [3736] */
    (xdc_Char)0x74,  /* [3737] */
    (xdc_Char)0x69,  /* [3738] */
    (xdc_Char)0x63,  /* [3739] */
    (xdc_Char)0x61,  /* [3740] */
    (xdc_Char)0x6c,  /* [3741] */
    (xdc_Char)0x6c,  /* [3742] */
    (xdc_Char)0x79,  /* [3743] */
    (xdc_Char)0x20,  /* [3744] */
    (xdc_Char)0x63,  /* [3745] */
    (xdc_Char)0x72,  /* [3746] */
    (xdc_Char)0x65,  /* [3747] */
    (xdc_Char)0x61,  /* [3748] */
    (xdc_Char)0x74,  /* [3749] */
    (xdc_Char)0x65,  /* [3750] */
    (xdc_Char)0x64,  /* [3751] */
    (xdc_Char)0x20,  /* [3752] */
    (xdc_Char)0x74,  /* [3753] */
    (xdc_Char)0x69,  /* [3754] */
    (xdc_Char)0x6d,  /* [3755] */
    (xdc_Char)0x65,  /* [3756] */
    (xdc_Char)0x72,  /* [3757] */
    (xdc_Char)0x20,  /* [3758] */
    (xdc_Char)0x6e,  /* [3759] */
    (xdc_Char)0x6f,  /* [3760] */
    (xdc_Char)0x74,  /* [3761] */
    (xdc_Char)0x20,  /* [3762] */
    (xdc_Char)0x61,  /* [3763] */
    (xdc_Char)0x76,  /* [3764] */
    (xdc_Char)0x61,  /* [3765] */
    (xdc_Char)0x69,  /* [3766] */
    (xdc_Char)0x6c,  /* [3767] */
    (xdc_Char)0x61,  /* [3768] */
    (xdc_Char)0x62,  /* [3769] */
    (xdc_Char)0x6c,  /* [3770] */
    (xdc_Char)0x65,  /* [3771] */
    (xdc_Char)0x0,  /* [3772] */
    (xdc_Char)0x62,  /* [3773] */
    (xdc_Char)0x75,  /* [3774] */
    (xdc_Char)0x66,  /* [3775] */
    (xdc_Char)0x20,  /* [3776] */
    (xdc_Char)0x70,  /* [3777] */
    (xdc_Char)0x61,  /* [3778] */
    (xdc_Char)0x72,  /* [3779] */
    (xdc_Char)0x61,  /* [3780] */
    (xdc_Char)0x6d,  /* [3781] */
    (xdc_Char)0x65,  /* [3782] */
    (xdc_Char)0x74,  /* [3783] */
    (xdc_Char)0x65,  /* [3784] */
    (xdc_Char)0x72,  /* [3785] */
    (xdc_Char)0x20,  /* [3786] */
    (xdc_Char)0x63,  /* [3787] */
    (xdc_Char)0x61,  /* [3788] */
    (xdc_Char)0x6e,  /* [3789] */
    (xdc_Char)0x6e,  /* [3790] */
    (xdc_Char)0x6f,  /* [3791] */
    (xdc_Char)0x74,  /* [3792] */
    (xdc_Char)0x20,  /* [3793] */
    (xdc_Char)0x62,  /* [3794] */
    (xdc_Char)0x65,  /* [3795] */
    (xdc_Char)0x20,  /* [3796] */
    (xdc_Char)0x6e,  /* [3797] */
    (xdc_Char)0x75,  /* [3798] */
    (xdc_Char)0x6c,  /* [3799] */
    (xdc_Char)0x6c,  /* [3800] */
    (xdc_Char)0x0,  /* [3801] */
    (xdc_Char)0x62,  /* [3802] */
    (xdc_Char)0x75,  /* [3803] */
    (xdc_Char)0x66,  /* [3804] */
    (xdc_Char)0x20,  /* [3805] */
    (xdc_Char)0x6e,  /* [3806] */
    (xdc_Char)0x6f,  /* [3807] */
    (xdc_Char)0x74,  /* [3808] */
    (xdc_Char)0x20,  /* [3809] */
    (xdc_Char)0x70,  /* [3810] */
    (xdc_Char)0x72,  /* [3811] */
    (xdc_Char)0x6f,  /* [3812] */
    (xdc_Char)0x70,  /* [3813] */
    (xdc_Char)0x65,  /* [3814] */
    (xdc_Char)0x72,  /* [3815] */
    (xdc_Char)0x6c,  /* [3816] */
    (xdc_Char)0x79,  /* [3817] */
    (xdc_Char)0x20,  /* [3818] */
    (xdc_Char)0x61,  /* [3819] */
    (xdc_Char)0x6c,  /* [3820] */
    (xdc_Char)0x69,  /* [3821] */
    (xdc_Char)0x67,  /* [3822] */
    (xdc_Char)0x6e,  /* [3823] */
    (xdc_Char)0x65,  /* [3824] */
    (xdc_Char)0x64,  /* [3825] */
    (xdc_Char)0x0,  /* [3826] */
    (xdc_Char)0x61,  /* [3827] */
    (xdc_Char)0x6c,  /* [3828] */
    (xdc_Char)0x69,  /* [3829] */
    (xdc_Char)0x67,  /* [3830] */
    (xdc_Char)0x6e,  /* [3831] */
    (xdc_Char)0x20,  /* [3832] */
    (xdc_Char)0x70,  /* [3833] */
    (xdc_Char)0x61,  /* [3834] */
    (xdc_Char)0x72,  /* [3835] */
    (xdc_Char)0x61,  /* [3836] */
    (xdc_Char)0x6d,  /* [3837] */
    (xdc_Char)0x65,  /* [3838] */
    (xdc_Char)0x74,  /* [3839] */
    (xdc_Char)0x65,  /* [3840] */
    (xdc_Char)0x72,  /* [3841] */
    (xdc_Char)0x20,  /* [3842] */
    (xdc_Char)0x6d,  /* [3843] */
    (xdc_Char)0x75,  /* [3844] */
    (xdc_Char)0x73,  /* [3845] */
    (xdc_Char)0x74,  /* [3846] */
    (xdc_Char)0x20,  /* [3847] */
    (xdc_Char)0x62,  /* [3848] */
    (xdc_Char)0x65,  /* [3849] */
    (xdc_Char)0x20,  /* [3850] */
    (xdc_Char)0x30,  /* [3851] */
    (xdc_Char)0x20,  /* [3852] */
    (xdc_Char)0x6f,  /* [3853] */
    (xdc_Char)0x72,  /* [3854] */
    (xdc_Char)0x20,  /* [3855] */
    (xdc_Char)0x61,  /* [3856] */
    (xdc_Char)0x20,  /* [3857] */
    (xdc_Char)0x70,  /* [3858] */
    (xdc_Char)0x6f,  /* [3859] */
    (xdc_Char)0x77,  /* [3860] */
    (xdc_Char)0x65,  /* [3861] */
    (xdc_Char)0x72,  /* [3862] */
    (xdc_Char)0x20,  /* [3863] */
    (xdc_Char)0x6f,  /* [3864] */
    (xdc_Char)0x66,  /* [3865] */
    (xdc_Char)0x20,  /* [3866] */
    (xdc_Char)0x32,  /* [3867] */
    (xdc_Char)0x20,  /* [3868] */
    (xdc_Char)0x3e,  /* [3869] */
    (xdc_Char)0x3d,  /* [3870] */
    (xdc_Char)0x20,  /* [3871] */
    (xdc_Char)0x74,  /* [3872] */
    (xdc_Char)0x68,  /* [3873] */
    (xdc_Char)0x65,  /* [3874] */
    (xdc_Char)0x20,  /* [3875] */
    (xdc_Char)0x76,  /* [3876] */
    (xdc_Char)0x61,  /* [3877] */
    (xdc_Char)0x6c,  /* [3878] */
    (xdc_Char)0x75,  /* [3879] */
    (xdc_Char)0x65,  /* [3880] */
    (xdc_Char)0x20,  /* [3881] */
    (xdc_Char)0x6f,  /* [3882] */
    (xdc_Char)0x66,  /* [3883] */
    (xdc_Char)0x20,  /* [3884] */
    (xdc_Char)0x4d,  /* [3885] */
    (xdc_Char)0x65,  /* [3886] */
    (xdc_Char)0x6d,  /* [3887] */
    (xdc_Char)0x6f,  /* [3888] */
    (xdc_Char)0x72,  /* [3889] */
    (xdc_Char)0x79,  /* [3890] */
    (xdc_Char)0x5f,  /* [3891] */
    (xdc_Char)0x67,  /* [3892] */
    (xdc_Char)0x65,  /* [3893] */
    (xdc_Char)0x74,  /* [3894] */
    (xdc_Char)0x4d,  /* [3895] */
    (xdc_Char)0x61,  /* [3896] */
    (xdc_Char)0x78,  /* [3897] */
    (xdc_Char)0x44,  /* [3898] */
    (xdc_Char)0x65,  /* [3899] */
    (xdc_Char)0x66,  /* [3900] */
    (xdc_Char)0x61,  /* [3901] */
    (xdc_Char)0x75,  /* [3902] */
    (xdc_Char)0x6c,  /* [3903] */
    (xdc_Char)0x74,  /* [3904] */
    (xdc_Char)0x54,  /* [3905] */
    (xdc_Char)0x79,  /* [3906] */
    (xdc_Char)0x70,  /* [3907] */
    (xdc_Char)0x65,  /* [3908] */
    (xdc_Char)0x41,  /* [3909] */
    (xdc_Char)0x6c,  /* [3910] */
    (xdc_Char)0x69,  /* [3911] */
    (xdc_Char)0x67,  /* [3912] */
    (xdc_Char)0x6e,  /* [3913] */
    (xdc_Char)0x28,  /* [3914] */
    (xdc_Char)0x29,  /* [3915] */
    (xdc_Char)0x0,  /* [3916] */
    (xdc_Char)0x62,  /* [3917] */
    (xdc_Char)0x6c,  /* [3918] */
    (xdc_Char)0x6f,  /* [3919] */
    (xdc_Char)0x63,  /* [3920] */
    (xdc_Char)0x6b,  /* [3921] */
    (xdc_Char)0x53,  /* [3922] */
    (xdc_Char)0x69,  /* [3923] */
    (xdc_Char)0x7a,  /* [3924] */
    (xdc_Char)0x65,  /* [3925] */
    (xdc_Char)0x20,  /* [3926] */
    (xdc_Char)0x63,  /* [3927] */
    (xdc_Char)0x61,  /* [3928] */
    (xdc_Char)0x6e,  /* [3929] */
    (xdc_Char)0x6e,  /* [3930] */
    (xdc_Char)0x6f,  /* [3931] */
    (xdc_Char)0x74,  /* [3932] */
    (xdc_Char)0x20,  /* [3933] */
    (xdc_Char)0x62,  /* [3934] */
    (xdc_Char)0x65,  /* [3935] */
    (xdc_Char)0x20,  /* [3936] */
    (xdc_Char)0x7a,  /* [3937] */
    (xdc_Char)0x65,  /* [3938] */
    (xdc_Char)0x72,  /* [3939] */
    (xdc_Char)0x6f,  /* [3940] */
    (xdc_Char)0x0,  /* [3941] */
    (xdc_Char)0x6e,  /* [3942] */
    (xdc_Char)0x75,  /* [3943] */
    (xdc_Char)0x6d,  /* [3944] */
    (xdc_Char)0x42,  /* [3945] */
    (xdc_Char)0x6c,  /* [3946] */
    (xdc_Char)0x6f,  /* [3947] */
    (xdc_Char)0x63,  /* [3948] */
    (xdc_Char)0x6b,  /* [3949] */
    (xdc_Char)0x73,  /* [3950] */
    (xdc_Char)0x20,  /* [3951] */
    (xdc_Char)0x63,  /* [3952] */
    (xdc_Char)0x61,  /* [3953] */
    (xdc_Char)0x6e,  /* [3954] */
    (xdc_Char)0x6e,  /* [3955] */
    (xdc_Char)0x6f,  /* [3956] */
    (xdc_Char)0x74,  /* [3957] */
    (xdc_Char)0x20,  /* [3958] */
    (xdc_Char)0x62,  /* [3959] */
    (xdc_Char)0x65,  /* [3960] */
    (xdc_Char)0x20,  /* [3961] */
    (xdc_Char)0x7a,  /* [3962] */
    (xdc_Char)0x65,  /* [3963] */
    (xdc_Char)0x72,  /* [3964] */
    (xdc_Char)0x6f,  /* [3965] */
    (xdc_Char)0x0,  /* [3966] */
    (xdc_Char)0x62,  /* [3967] */
    (xdc_Char)0x75,  /* [3968] */
    (xdc_Char)0x66,  /* [3969] */
    (xdc_Char)0x53,  /* [3970] */
    (xdc_Char)0x69,  /* [3971] */
    (xdc_Char)0x7a,  /* [3972] */
    (xdc_Char)0x65,  /* [3973] */
    (xdc_Char)0x20,  /* [3974] */
    (xdc_Char)0x63,  /* [3975] */
    (xdc_Char)0x61,  /* [3976] */
    (xdc_Char)0x6e,  /* [3977] */
    (xdc_Char)0x6e,  /* [3978] */
    (xdc_Char)0x6f,  /* [3979] */
    (xdc_Char)0x74,  /* [3980] */
    (xdc_Char)0x20,  /* [3981] */
    (xdc_Char)0x62,  /* [3982] */
    (xdc_Char)0x65,  /* [3983] */
    (xdc_Char)0x20,  /* [3984] */
    (xdc_Char)0x7a,  /* [3985] */
    (xdc_Char)0x65,  /* [3986] */
    (xdc_Char)0x72,  /* [3987] */
    (xdc_Char)0x6f,  /* [3988] */
    (xdc_Char)0x0,  /* [3989] */
    (xdc_Char)0x48,  /* [3990] */
    (xdc_Char)0x65,  /* [3991] */
    (xdc_Char)0x61,  /* [3992] */
    (xdc_Char)0x70,  /* [3993] */
    (xdc_Char)0x42,  /* [3994] */
    (xdc_Char)0x75,  /* [3995] */
    (xdc_Char)0x66,  /* [3996] */
    (xdc_Char)0x5f,  /* [3997] */
    (xdc_Char)0x63,  /* [3998] */
    (xdc_Char)0x72,  /* [3999] */
    (xdc_Char)0x65,  /* [4000] */
    (xdc_Char)0x61,  /* [4001] */
    (xdc_Char)0x74,  /* [4002] */
    (xdc_Char)0x65,  /* [4003] */
    (xdc_Char)0x27,  /* [4004] */
    (xdc_Char)0x73,  /* [4005] */
    (xdc_Char)0x20,  /* [4006] */
    (xdc_Char)0x62,  /* [4007] */
    (xdc_Char)0x75,  /* [4008] */
    (xdc_Char)0x66,  /* [4009] */
    (xdc_Char)0x53,  /* [4010] */
    (xdc_Char)0x69,  /* [4011] */
    (xdc_Char)0x7a,  /* [4012] */
    (xdc_Char)0x65,  /* [4013] */
    (xdc_Char)0x20,  /* [4014] */
    (xdc_Char)0x70,  /* [4015] */
    (xdc_Char)0x61,  /* [4016] */
    (xdc_Char)0x72,  /* [4017] */
    (xdc_Char)0x61,  /* [4018] */
    (xdc_Char)0x6d,  /* [4019] */
    (xdc_Char)0x65,  /* [4020] */
    (xdc_Char)0x74,  /* [4021] */
    (xdc_Char)0x65,  /* [4022] */
    (xdc_Char)0x72,  /* [4023] */
    (xdc_Char)0x20,  /* [4024] */
    (xdc_Char)0x69,  /* [4025] */
    (xdc_Char)0x73,  /* [4026] */
    (xdc_Char)0x20,  /* [4027] */
    (xdc_Char)0x69,  /* [4028] */
    (xdc_Char)0x6e,  /* [4029] */
    (xdc_Char)0x76,  /* [4030] */
    (xdc_Char)0x61,  /* [4031] */
    (xdc_Char)0x6c,  /* [4032] */
    (xdc_Char)0x69,  /* [4033] */
    (xdc_Char)0x64,  /* [4034] */
    (xdc_Char)0x20,  /* [4035] */
    (xdc_Char)0x28,  /* [4036] */
    (xdc_Char)0x74,  /* [4037] */
    (xdc_Char)0x6f,  /* [4038] */
    (xdc_Char)0x6f,  /* [4039] */
    (xdc_Char)0x20,  /* [4040] */
    (xdc_Char)0x73,  /* [4041] */
    (xdc_Char)0x6d,  /* [4042] */
    (xdc_Char)0x61,  /* [4043] */
    (xdc_Char)0x6c,  /* [4044] */
    (xdc_Char)0x6c,  /* [4045] */
    (xdc_Char)0x29,  /* [4046] */
    (xdc_Char)0x0,  /* [4047] */
    (xdc_Char)0x43,  /* [4048] */
    (xdc_Char)0x61,  /* [4049] */
    (xdc_Char)0x6e,  /* [4050] */
    (xdc_Char)0x6e,  /* [4051] */
    (xdc_Char)0x6f,  /* [4052] */
    (xdc_Char)0x74,  /* [4053] */
    (xdc_Char)0x20,  /* [4054] */
    (xdc_Char)0x63,  /* [4055] */
    (xdc_Char)0x61,  /* [4056] */
    (xdc_Char)0x6c,  /* [4057] */
    (xdc_Char)0x6c,  /* [4058] */
    (xdc_Char)0x20,  /* [4059] */
    (xdc_Char)0x48,  /* [4060] */
    (xdc_Char)0x65,  /* [4061] */
    (xdc_Char)0x61,  /* [4062] */
    (xdc_Char)0x70,  /* [4063] */
    (xdc_Char)0x42,  /* [4064] */
    (xdc_Char)0x75,  /* [4065] */
    (xdc_Char)0x66,  /* [4066] */
    (xdc_Char)0x5f,  /* [4067] */
    (xdc_Char)0x66,  /* [4068] */
    (xdc_Char)0x72,  /* [4069] */
    (xdc_Char)0x65,  /* [4070] */
    (xdc_Char)0x65,  /* [4071] */
    (xdc_Char)0x20,  /* [4072] */
    (xdc_Char)0x77,  /* [4073] */
    (xdc_Char)0x68,  /* [4074] */
    (xdc_Char)0x65,  /* [4075] */
    (xdc_Char)0x6e,  /* [4076] */
    (xdc_Char)0x20,  /* [4077] */
    (xdc_Char)0x6e,  /* [4078] */
    (xdc_Char)0x6f,  /* [4079] */
    (xdc_Char)0x20,  /* [4080] */
    (xdc_Char)0x62,  /* [4081] */
    (xdc_Char)0x6c,  /* [4082] */
    (xdc_Char)0x6f,  /* [4083] */
    (xdc_Char)0x63,  /* [4084] */
    (xdc_Char)0x6b,  /* [4085] */
    (xdc_Char)0x73,  /* [4086] */
    (xdc_Char)0x20,  /* [4087] */
    (xdc_Char)0x68,  /* [4088] */
    (xdc_Char)0x61,  /* [4089] */
    (xdc_Char)0x76,  /* [4090] */
    (xdc_Char)0x65,  /* [4091] */
    (xdc_Char)0x20,  /* [4092] */
    (xdc_Char)0x62,  /* [4093] */
    (xdc_Char)0x65,  /* [4094] */
    (xdc_Char)0x65,  /* [4095] */
    (xdc_Char)0x6e,  /* [4096] */
    (xdc_Char)0x20,  /* [4097] */
    (xdc_Char)0x61,  /* [4098] */
    (xdc_Char)0x6c,  /* [4099] */
    (xdc_Char)0x6c,  /* [4100] */
    (xdc_Char)0x6f,  /* [4101] */
    (xdc_Char)0x63,  /* [4102] */
    (xdc_Char)0x61,  /* [4103] */
    (xdc_Char)0x74,  /* [4104] */
    (xdc_Char)0x65,  /* [4105] */
    (xdc_Char)0x64,  /* [4106] */
    (xdc_Char)0x0,  /* [4107] */
    (xdc_Char)0x41,  /* [4108] */
    (xdc_Char)0x5f,  /* [4109] */
    (xdc_Char)0x69,  /* [4110] */
    (xdc_Char)0x6e,  /* [4111] */
    (xdc_Char)0x76,  /* [4112] */
    (xdc_Char)0x61,  /* [4113] */
    (xdc_Char)0x6c,  /* [4114] */
    (xdc_Char)0x69,  /* [4115] */
    (xdc_Char)0x64,  /* [4116] */
    (xdc_Char)0x46,  /* [4117] */
    (xdc_Char)0x72,  /* [4118] */
    (xdc_Char)0x65,  /* [4119] */
    (xdc_Char)0x65,  /* [4120] */
    (xdc_Char)0x3a,  /* [4121] */
    (xdc_Char)0x20,  /* [4122] */
    (xdc_Char)0x49,  /* [4123] */
    (xdc_Char)0x6e,  /* [4124] */
    (xdc_Char)0x76,  /* [4125] */
    (xdc_Char)0x61,  /* [4126] */
    (xdc_Char)0x6c,  /* [4127] */
    (xdc_Char)0x69,  /* [4128] */
    (xdc_Char)0x64,  /* [4129] */
    (xdc_Char)0x20,  /* [4130] */
    (xdc_Char)0x66,  /* [4131] */
    (xdc_Char)0x72,  /* [4132] */
    (xdc_Char)0x65,  /* [4133] */
    (xdc_Char)0x65,  /* [4134] */
    (xdc_Char)0x0,  /* [4135] */
    (xdc_Char)0x41,  /* [4136] */
    (xdc_Char)0x5f,  /* [4137] */
    (xdc_Char)0x7a,  /* [4138] */
    (xdc_Char)0x65,  /* [4139] */
    (xdc_Char)0x72,  /* [4140] */
    (xdc_Char)0x6f,  /* [4141] */
    (xdc_Char)0x42,  /* [4142] */
    (xdc_Char)0x6c,  /* [4143] */
    (xdc_Char)0x6f,  /* [4144] */
    (xdc_Char)0x63,  /* [4145] */
    (xdc_Char)0x6b,  /* [4146] */
    (xdc_Char)0x3a,  /* [4147] */
    (xdc_Char)0x20,  /* [4148] */
    (xdc_Char)0x43,  /* [4149] */
    (xdc_Char)0x61,  /* [4150] */
    (xdc_Char)0x6e,  /* [4151] */
    (xdc_Char)0x6e,  /* [4152] */
    (xdc_Char)0x6f,  /* [4153] */
    (xdc_Char)0x74,  /* [4154] */
    (xdc_Char)0x20,  /* [4155] */
    (xdc_Char)0x61,  /* [4156] */
    (xdc_Char)0x6c,  /* [4157] */
    (xdc_Char)0x6c,  /* [4158] */
    (xdc_Char)0x6f,  /* [4159] */
    (xdc_Char)0x63,  /* [4160] */
    (xdc_Char)0x61,  /* [4161] */
    (xdc_Char)0x74,  /* [4162] */
    (xdc_Char)0x65,  /* [4163] */
    (xdc_Char)0x20,  /* [4164] */
    (xdc_Char)0x73,  /* [4165] */
    (xdc_Char)0x69,  /* [4166] */
    (xdc_Char)0x7a,  /* [4167] */
    (xdc_Char)0x65,  /* [4168] */
    (xdc_Char)0x20,  /* [4169] */
    (xdc_Char)0x30,  /* [4170] */
    (xdc_Char)0x0,  /* [4171] */
    (xdc_Char)0x41,  /* [4172] */
    (xdc_Char)0x5f,  /* [4173] */
    (xdc_Char)0x68,  /* [4174] */
    (xdc_Char)0x65,  /* [4175] */
    (xdc_Char)0x61,  /* [4176] */
    (xdc_Char)0x70,  /* [4177] */
    (xdc_Char)0x53,  /* [4178] */
    (xdc_Char)0x69,  /* [4179] */
    (xdc_Char)0x7a,  /* [4180] */
    (xdc_Char)0x65,  /* [4181] */
    (xdc_Char)0x3a,  /* [4182] */
    (xdc_Char)0x20,  /* [4183] */
    (xdc_Char)0x52,  /* [4184] */
    (xdc_Char)0x65,  /* [4185] */
    (xdc_Char)0x71,  /* [4186] */
    (xdc_Char)0x75,  /* [4187] */
    (xdc_Char)0x65,  /* [4188] */
    (xdc_Char)0x73,  /* [4189] */
    (xdc_Char)0x74,  /* [4190] */
    (xdc_Char)0x65,  /* [4191] */
    (xdc_Char)0x64,  /* [4192] */
    (xdc_Char)0x20,  /* [4193] */
    (xdc_Char)0x68,  /* [4194] */
    (xdc_Char)0x65,  /* [4195] */
    (xdc_Char)0x61,  /* [4196] */
    (xdc_Char)0x70,  /* [4197] */
    (xdc_Char)0x20,  /* [4198] */
    (xdc_Char)0x73,  /* [4199] */
    (xdc_Char)0x69,  /* [4200] */
    (xdc_Char)0x7a,  /* [4201] */
    (xdc_Char)0x65,  /* [4202] */
    (xdc_Char)0x20,  /* [4203] */
    (xdc_Char)0x69,  /* [4204] */
    (xdc_Char)0x73,  /* [4205] */
    (xdc_Char)0x20,  /* [4206] */
    (xdc_Char)0x74,  /* [4207] */
    (xdc_Char)0x6f,  /* [4208] */
    (xdc_Char)0x6f,  /* [4209] */
    (xdc_Char)0x20,  /* [4210] */
    (xdc_Char)0x73,  /* [4211] */
    (xdc_Char)0x6d,  /* [4212] */
    (xdc_Char)0x61,  /* [4213] */
    (xdc_Char)0x6c,  /* [4214] */
    (xdc_Char)0x6c,  /* [4215] */
    (xdc_Char)0x0,  /* [4216] */
    (xdc_Char)0x41,  /* [4217] */
    (xdc_Char)0x5f,  /* [4218] */
    (xdc_Char)0x61,  /* [4219] */
    (xdc_Char)0x6c,  /* [4220] */
    (xdc_Char)0x69,  /* [4221] */
    (xdc_Char)0x67,  /* [4222] */
    (xdc_Char)0x6e,  /* [4223] */
    (xdc_Char)0x3a,  /* [4224] */
    (xdc_Char)0x20,  /* [4225] */
    (xdc_Char)0x52,  /* [4226] */
    (xdc_Char)0x65,  /* [4227] */
    (xdc_Char)0x71,  /* [4228] */
    (xdc_Char)0x75,  /* [4229] */
    (xdc_Char)0x65,  /* [4230] */
    (xdc_Char)0x73,  /* [4231] */
    (xdc_Char)0x74,  /* [4232] */
    (xdc_Char)0x65,  /* [4233] */
    (xdc_Char)0x64,  /* [4234] */
    (xdc_Char)0x20,  /* [4235] */
    (xdc_Char)0x61,  /* [4236] */
    (xdc_Char)0x6c,  /* [4237] */
    (xdc_Char)0x69,  /* [4238] */
    (xdc_Char)0x67,  /* [4239] */
    (xdc_Char)0x6e,  /* [4240] */
    (xdc_Char)0x20,  /* [4241] */
    (xdc_Char)0x69,  /* [4242] */
    (xdc_Char)0x73,  /* [4243] */
    (xdc_Char)0x20,  /* [4244] */
    (xdc_Char)0x6e,  /* [4245] */
    (xdc_Char)0x6f,  /* [4246] */
    (xdc_Char)0x74,  /* [4247] */
    (xdc_Char)0x20,  /* [4248] */
    (xdc_Char)0x61,  /* [4249] */
    (xdc_Char)0x20,  /* [4250] */
    (xdc_Char)0x70,  /* [4251] */
    (xdc_Char)0x6f,  /* [4252] */
    (xdc_Char)0x77,  /* [4253] */
    (xdc_Char)0x65,  /* [4254] */
    (xdc_Char)0x72,  /* [4255] */
    (xdc_Char)0x20,  /* [4256] */
    (xdc_Char)0x6f,  /* [4257] */
    (xdc_Char)0x66,  /* [4258] */
    (xdc_Char)0x20,  /* [4259] */
    (xdc_Char)0x32,  /* [4260] */
    (xdc_Char)0x0,  /* [4261] */
    (xdc_Char)0x49,  /* [4262] */
    (xdc_Char)0x6e,  /* [4263] */
    (xdc_Char)0x76,  /* [4264] */
    (xdc_Char)0x61,  /* [4265] */
    (xdc_Char)0x6c,  /* [4266] */
    (xdc_Char)0x69,  /* [4267] */
    (xdc_Char)0x64,  /* [4268] */
    (xdc_Char)0x20,  /* [4269] */
    (xdc_Char)0x62,  /* [4270] */
    (xdc_Char)0x6c,  /* [4271] */
    (xdc_Char)0x6f,  /* [4272] */
    (xdc_Char)0x63,  /* [4273] */
    (xdc_Char)0x6b,  /* [4274] */
    (xdc_Char)0x20,  /* [4275] */
    (xdc_Char)0x61,  /* [4276] */
    (xdc_Char)0x64,  /* [4277] */
    (xdc_Char)0x64,  /* [4278] */
    (xdc_Char)0x72,  /* [4279] */
    (xdc_Char)0x65,  /* [4280] */
    (xdc_Char)0x73,  /* [4281] */
    (xdc_Char)0x73,  /* [4282] */
    (xdc_Char)0x20,  /* [4283] */
    (xdc_Char)0x6f,  /* [4284] */
    (xdc_Char)0x6e,  /* [4285] */
    (xdc_Char)0x20,  /* [4286] */
    (xdc_Char)0x74,  /* [4287] */
    (xdc_Char)0x68,  /* [4288] */
    (xdc_Char)0x65,  /* [4289] */
    (xdc_Char)0x20,  /* [4290] */
    (xdc_Char)0x66,  /* [4291] */
    (xdc_Char)0x72,  /* [4292] */
    (xdc_Char)0x65,  /* [4293] */
    (xdc_Char)0x65,  /* [4294] */
    (xdc_Char)0x2e,  /* [4295] */
    (xdc_Char)0x20,  /* [4296] */
    (xdc_Char)0x46,  /* [4297] */
    (xdc_Char)0x61,  /* [4298] */
    (xdc_Char)0x69,  /* [4299] */
    (xdc_Char)0x6c,  /* [4300] */
    (xdc_Char)0x65,  /* [4301] */
    (xdc_Char)0x64,  /* [4302] */
    (xdc_Char)0x20,  /* [4303] */
    (xdc_Char)0x74,  /* [4304] */
    (xdc_Char)0x6f,  /* [4305] */
    (xdc_Char)0x20,  /* [4306] */
    (xdc_Char)0x66,  /* [4307] */
    (xdc_Char)0x72,  /* [4308] */
    (xdc_Char)0x65,  /* [4309] */
    (xdc_Char)0x65,  /* [4310] */
    (xdc_Char)0x20,  /* [4311] */
    (xdc_Char)0x62,  /* [4312] */
    (xdc_Char)0x6c,  /* [4313] */
    (xdc_Char)0x6f,  /* [4314] */
    (xdc_Char)0x63,  /* [4315] */
    (xdc_Char)0x6b,  /* [4316] */
    (xdc_Char)0x20,  /* [4317] */
    (xdc_Char)0x62,  /* [4318] */
    (xdc_Char)0x61,  /* [4319] */
    (xdc_Char)0x63,  /* [4320] */
    (xdc_Char)0x6b,  /* [4321] */
    (xdc_Char)0x20,  /* [4322] */
    (xdc_Char)0x74,  /* [4323] */
    (xdc_Char)0x6f,  /* [4324] */
    (xdc_Char)0x20,  /* [4325] */
    (xdc_Char)0x68,  /* [4326] */
    (xdc_Char)0x65,  /* [4327] */
    (xdc_Char)0x61,  /* [4328] */
    (xdc_Char)0x70,  /* [4329] */
    (xdc_Char)0x2e,  /* [4330] */
    (xdc_Char)0x0,  /* [4331] */
    (xdc_Char)0x61,  /* [4332] */
    (xdc_Char)0x73,  /* [4333] */
    (xdc_Char)0x73,  /* [4334] */
    (xdc_Char)0x65,  /* [4335] */
    (xdc_Char)0x72,  /* [4336] */
    (xdc_Char)0x74,  /* [4337] */
    (xdc_Char)0x69,  /* [4338] */
    (xdc_Char)0x6f,  /* [4339] */
    (xdc_Char)0x6e,  /* [4340] */
    (xdc_Char)0x20,  /* [4341] */
    (xdc_Char)0x66,  /* [4342] */
    (xdc_Char)0x61,  /* [4343] */
    (xdc_Char)0x69,  /* [4344] */
    (xdc_Char)0x6c,  /* [4345] */
    (xdc_Char)0x75,  /* [4346] */
    (xdc_Char)0x72,  /* [4347] */
    (xdc_Char)0x65,  /* [4348] */
    (xdc_Char)0x25,  /* [4349] */
    (xdc_Char)0x73,  /* [4350] */
    (xdc_Char)0x25,  /* [4351] */
    (xdc_Char)0x73,  /* [4352] */
    (xdc_Char)0x0,  /* [4353] */
    (xdc_Char)0x25,  /* [4354] */
    (xdc_Char)0x24,  /* [4355] */
    (xdc_Char)0x53,  /* [4356] */
    (xdc_Char)0x0,  /* [4357] */
    (xdc_Char)0x6f,  /* [4358] */
    (xdc_Char)0x75,  /* [4359] */
    (xdc_Char)0x74,  /* [4360] */
    (xdc_Char)0x20,  /* [4361] */
    (xdc_Char)0x6f,  /* [4362] */
    (xdc_Char)0x66,  /* [4363] */
    (xdc_Char)0x20,  /* [4364] */
    (xdc_Char)0x6d,  /* [4365] */
    (xdc_Char)0x65,  /* [4366] */
    (xdc_Char)0x6d,  /* [4367] */
    (xdc_Char)0x6f,  /* [4368] */
    (xdc_Char)0x72,  /* [4369] */
    (xdc_Char)0x79,  /* [4370] */
    (xdc_Char)0x3a,  /* [4371] */
    (xdc_Char)0x20,  /* [4372] */
    (xdc_Char)0x68,  /* [4373] */
    (xdc_Char)0x65,  /* [4374] */
    (xdc_Char)0x61,  /* [4375] */
    (xdc_Char)0x70,  /* [4376] */
    (xdc_Char)0x3d,  /* [4377] */
    (xdc_Char)0x30,  /* [4378] */
    (xdc_Char)0x78,  /* [4379] */
    (xdc_Char)0x25,  /* [4380] */
    (xdc_Char)0x78,  /* [4381] */
    (xdc_Char)0x2c,  /* [4382] */
    (xdc_Char)0x20,  /* [4383] */
    (xdc_Char)0x73,  /* [4384] */
    (xdc_Char)0x69,  /* [4385] */
    (xdc_Char)0x7a,  /* [4386] */
    (xdc_Char)0x65,  /* [4387] */
    (xdc_Char)0x3d,  /* [4388] */
    (xdc_Char)0x25,  /* [4389] */
    (xdc_Char)0x75,  /* [4390] */
    (xdc_Char)0x0,  /* [4391] */
    (xdc_Char)0x25,  /* [4392] */
    (xdc_Char)0x73,  /* [4393] */
    (xdc_Char)0x20,  /* [4394] */
    (xdc_Char)0x30,  /* [4395] */
    (xdc_Char)0x78,  /* [4396] */
    (xdc_Char)0x25,  /* [4397] */
    (xdc_Char)0x78,  /* [4398] */
    (xdc_Char)0x0,  /* [4399] */
    (xdc_Char)0x45,  /* [4400] */
    (xdc_Char)0x5f,  /* [4401] */
    (xdc_Char)0x62,  /* [4402] */
    (xdc_Char)0x61,  /* [4403] */
    (xdc_Char)0x64,  /* [4404] */
    (xdc_Char)0x4c,  /* [4405] */
    (xdc_Char)0x65,  /* [4406] */
    (xdc_Char)0x76,  /* [4407] */
    (xdc_Char)0x65,  /* [4408] */
    (xdc_Char)0x6c,  /* [4409] */
    (xdc_Char)0x3a,  /* [4410] */
    (xdc_Char)0x20,  /* [4411] */
    (xdc_Char)0x42,  /* [4412] */
    (xdc_Char)0x61,  /* [4413] */
    (xdc_Char)0x64,  /* [4414] */
    (xdc_Char)0x20,  /* [4415] */
    (xdc_Char)0x66,  /* [4416] */
    (xdc_Char)0x69,  /* [4417] */
    (xdc_Char)0x6c,  /* [4418] */
    (xdc_Char)0x74,  /* [4419] */
    (xdc_Char)0x65,  /* [4420] */
    (xdc_Char)0x72,  /* [4421] */
    (xdc_Char)0x20,  /* [4422] */
    (xdc_Char)0x6c,  /* [4423] */
    (xdc_Char)0x65,  /* [4424] */
    (xdc_Char)0x76,  /* [4425] */
    (xdc_Char)0x65,  /* [4426] */
    (xdc_Char)0x6c,  /* [4427] */
    (xdc_Char)0x20,  /* [4428] */
    (xdc_Char)0x76,  /* [4429] */
    (xdc_Char)0x61,  /* [4430] */
    (xdc_Char)0x6c,  /* [4431] */
    (xdc_Char)0x75,  /* [4432] */
    (xdc_Char)0x65,  /* [4433] */
    (xdc_Char)0x3a,  /* [4434] */
    (xdc_Char)0x20,  /* [4435] */
    (xdc_Char)0x25,  /* [4436] */
    (xdc_Char)0x64,  /* [4437] */
    (xdc_Char)0x0,  /* [4438] */
    (xdc_Char)0x66,  /* [4439] */
    (xdc_Char)0x72,  /* [4440] */
    (xdc_Char)0x65,  /* [4441] */
    (xdc_Char)0x65,  /* [4442] */
    (xdc_Char)0x28,  /* [4443] */
    (xdc_Char)0x29,  /* [4444] */
    (xdc_Char)0x20,  /* [4445] */
    (xdc_Char)0x69,  /* [4446] */
    (xdc_Char)0x6e,  /* [4447] */
    (xdc_Char)0x76,  /* [4448] */
    (xdc_Char)0x61,  /* [4449] */
    (xdc_Char)0x6c,  /* [4450] */
    (xdc_Char)0x69,  /* [4451] */
    (xdc_Char)0x64,  /* [4452] */
    (xdc_Char)0x20,  /* [4453] */
    (xdc_Char)0x69,  /* [4454] */
    (xdc_Char)0x6e,  /* [4455] */
    (xdc_Char)0x20,  /* [4456] */
    (xdc_Char)0x67,  /* [4457] */
    (xdc_Char)0x72,  /* [4458] */
    (xdc_Char)0x6f,  /* [4459] */
    (xdc_Char)0x77,  /* [4460] */
    (xdc_Char)0x74,  /* [4461] */
    (xdc_Char)0x68,  /* [4462] */
    (xdc_Char)0x2d,  /* [4463] */
    (xdc_Char)0x6f,  /* [4464] */
    (xdc_Char)0x6e,  /* [4465] */
    (xdc_Char)0x6c,  /* [4466] */
    (xdc_Char)0x79,  /* [4467] */
    (xdc_Char)0x20,  /* [4468] */
    (xdc_Char)0x48,  /* [4469] */
    (xdc_Char)0x65,  /* [4470] */
    (xdc_Char)0x61,  /* [4471] */
    (xdc_Char)0x70,  /* [4472] */
    (xdc_Char)0x4d,  /* [4473] */
    (xdc_Char)0x69,  /* [4474] */
    (xdc_Char)0x6e,  /* [4475] */
    (xdc_Char)0x0,  /* [4476] */
    (xdc_Char)0x54,  /* [4477] */
    (xdc_Char)0x68,  /* [4478] */
    (xdc_Char)0x65,  /* [4479] */
    (xdc_Char)0x20,  /* [4480] */
    (xdc_Char)0x52,  /* [4481] */
    (xdc_Char)0x54,  /* [4482] */
    (xdc_Char)0x53,  /* [4483] */
    (xdc_Char)0x20,  /* [4484] */
    (xdc_Char)0x68,  /* [4485] */
    (xdc_Char)0x65,  /* [4486] */
    (xdc_Char)0x61,  /* [4487] */
    (xdc_Char)0x70,  /* [4488] */
    (xdc_Char)0x20,  /* [4489] */
    (xdc_Char)0x69,  /* [4490] */
    (xdc_Char)0x73,  /* [4491] */
    (xdc_Char)0x20,  /* [4492] */
    (xdc_Char)0x75,  /* [4493] */
    (xdc_Char)0x73,  /* [4494] */
    (xdc_Char)0x65,  /* [4495] */
    (xdc_Char)0x64,  /* [4496] */
    (xdc_Char)0x20,  /* [4497] */
    (xdc_Char)0x75,  /* [4498] */
    (xdc_Char)0x70,  /* [4499] */
    (xdc_Char)0x2e,  /* [4500] */
    (xdc_Char)0x20,  /* [4501] */
    (xdc_Char)0x45,  /* [4502] */
    (xdc_Char)0x78,  /* [4503] */
    (xdc_Char)0x61,  /* [4504] */
    (xdc_Char)0x6d,  /* [4505] */
    (xdc_Char)0x69,  /* [4506] */
    (xdc_Char)0x6e,  /* [4507] */
    (xdc_Char)0x65,  /* [4508] */
    (xdc_Char)0x20,  /* [4509] */
    (xdc_Char)0x50,  /* [4510] */
    (xdc_Char)0x72,  /* [4511] */
    (xdc_Char)0x6f,  /* [4512] */
    (xdc_Char)0x67,  /* [4513] */
    (xdc_Char)0x72,  /* [4514] */
    (xdc_Char)0x61,  /* [4515] */
    (xdc_Char)0x6d,  /* [4516] */
    (xdc_Char)0x2e,  /* [4517] */
    (xdc_Char)0x68,  /* [4518] */
    (xdc_Char)0x65,  /* [4519] */
    (xdc_Char)0x61,  /* [4520] */
    (xdc_Char)0x70,  /* [4521] */
    (xdc_Char)0x2e,  /* [4522] */
    (xdc_Char)0x0,  /* [4523] */
    (xdc_Char)0x45,  /* [4524] */
    (xdc_Char)0x5f,  /* [4525] */
    (xdc_Char)0x62,  /* [4526] */
    (xdc_Char)0x61,  /* [4527] */
    (xdc_Char)0x64,  /* [4528] */
    (xdc_Char)0x43,  /* [4529] */
    (xdc_Char)0x6f,  /* [4530] */
    (xdc_Char)0x6d,  /* [4531] */
    (xdc_Char)0x6d,  /* [4532] */
    (xdc_Char)0x61,  /* [4533] */
    (xdc_Char)0x6e,  /* [4534] */
    (xdc_Char)0x64,  /* [4535] */
    (xdc_Char)0x3a,  /* [4536] */
    (xdc_Char)0x20,  /* [4537] */
    (xdc_Char)0x52,  /* [4538] */
    (xdc_Char)0x65,  /* [4539] */
    (xdc_Char)0x63,  /* [4540] */
    (xdc_Char)0x65,  /* [4541] */
    (xdc_Char)0x69,  /* [4542] */
    (xdc_Char)0x76,  /* [4543] */
    (xdc_Char)0x65,  /* [4544] */
    (xdc_Char)0x64,  /* [4545] */
    (xdc_Char)0x20,  /* [4546] */
    (xdc_Char)0x69,  /* [4547] */
    (xdc_Char)0x6e,  /* [4548] */
    (xdc_Char)0x76,  /* [4549] */
    (xdc_Char)0x61,  /* [4550] */
    (xdc_Char)0x6c,  /* [4551] */
    (xdc_Char)0x69,  /* [4552] */
    (xdc_Char)0x64,  /* [4553] */
    (xdc_Char)0x20,  /* [4554] */
    (xdc_Char)0x63,  /* [4555] */
    (xdc_Char)0x6f,  /* [4556] */
    (xdc_Char)0x6d,  /* [4557] */
    (xdc_Char)0x6d,  /* [4558] */
    (xdc_Char)0x61,  /* [4559] */
    (xdc_Char)0x6e,  /* [4560] */
    (xdc_Char)0x64,  /* [4561] */
    (xdc_Char)0x2c,  /* [4562] */
    (xdc_Char)0x20,  /* [4563] */
    (xdc_Char)0x69,  /* [4564] */
    (xdc_Char)0x64,  /* [4565] */
    (xdc_Char)0x3a,  /* [4566] */
    (xdc_Char)0x20,  /* [4567] */
    (xdc_Char)0x25,  /* [4568] */
    (xdc_Char)0x64,  /* [4569] */
    (xdc_Char)0x2e,  /* [4570] */
    (xdc_Char)0x0,  /* [4571] */
    (xdc_Char)0x45,  /* [4572] */
    (xdc_Char)0x5f,  /* [4573] */
    (xdc_Char)0x73,  /* [4574] */
    (xdc_Char)0x74,  /* [4575] */
    (xdc_Char)0x61,  /* [4576] */
    (xdc_Char)0x63,  /* [4577] */
    (xdc_Char)0x6b,  /* [4578] */
    (xdc_Char)0x4f,  /* [4579] */
    (xdc_Char)0x76,  /* [4580] */
    (xdc_Char)0x65,  /* [4581] */
    (xdc_Char)0x72,  /* [4582] */
    (xdc_Char)0x66,  /* [4583] */
    (xdc_Char)0x6c,  /* [4584] */
    (xdc_Char)0x6f,  /* [4585] */
    (xdc_Char)0x77,  /* [4586] */
    (xdc_Char)0x3a,  /* [4587] */
    (xdc_Char)0x20,  /* [4588] */
    (xdc_Char)0x49,  /* [4589] */
    (xdc_Char)0x53,  /* [4590] */
    (xdc_Char)0x52,  /* [4591] */
    (xdc_Char)0x20,  /* [4592] */
    (xdc_Char)0x73,  /* [4593] */
    (xdc_Char)0x74,  /* [4594] */
    (xdc_Char)0x61,  /* [4595] */
    (xdc_Char)0x63,  /* [4596] */
    (xdc_Char)0x6b,  /* [4597] */
    (xdc_Char)0x20,  /* [4598] */
    (xdc_Char)0x6f,  /* [4599] */
    (xdc_Char)0x76,  /* [4600] */
    (xdc_Char)0x65,  /* [4601] */
    (xdc_Char)0x72,  /* [4602] */
    (xdc_Char)0x66,  /* [4603] */
    (xdc_Char)0x6c,  /* [4604] */
    (xdc_Char)0x6f,  /* [4605] */
    (xdc_Char)0x77,  /* [4606] */
    (xdc_Char)0x2e,  /* [4607] */
    (xdc_Char)0x0,  /* [4608] */
    (xdc_Char)0x45,  /* [4609] */
    (xdc_Char)0x5f,  /* [4610] */
    (xdc_Char)0x73,  /* [4611] */
    (xdc_Char)0x74,  /* [4612] */
    (xdc_Char)0x61,  /* [4613] */
    (xdc_Char)0x63,  /* [4614] */
    (xdc_Char)0x6b,  /* [4615] */
    (xdc_Char)0x4f,  /* [4616] */
    (xdc_Char)0x76,  /* [4617] */
    (xdc_Char)0x65,  /* [4618] */
    (xdc_Char)0x72,  /* [4619] */
    (xdc_Char)0x66,  /* [4620] */
    (xdc_Char)0x6c,  /* [4621] */
    (xdc_Char)0x6f,  /* [4622] */
    (xdc_Char)0x77,  /* [4623] */
    (xdc_Char)0x3a,  /* [4624] */
    (xdc_Char)0x20,  /* [4625] */
    (xdc_Char)0x54,  /* [4626] */
    (xdc_Char)0x61,  /* [4627] */
    (xdc_Char)0x73,  /* [4628] */
    (xdc_Char)0x6b,  /* [4629] */
    (xdc_Char)0x20,  /* [4630] */
    (xdc_Char)0x30,  /* [4631] */
    (xdc_Char)0x78,  /* [4632] */
    (xdc_Char)0x25,  /* [4633] */
    (xdc_Char)0x78,  /* [4634] */
    (xdc_Char)0x20,  /* [4635] */
    (xdc_Char)0x73,  /* [4636] */
    (xdc_Char)0x74,  /* [4637] */
    (xdc_Char)0x61,  /* [4638] */
    (xdc_Char)0x63,  /* [4639] */
    (xdc_Char)0x6b,  /* [4640] */
    (xdc_Char)0x20,  /* [4641] */
    (xdc_Char)0x6f,  /* [4642] */
    (xdc_Char)0x76,  /* [4643] */
    (xdc_Char)0x65,  /* [4644] */
    (xdc_Char)0x72,  /* [4645] */
    (xdc_Char)0x66,  /* [4646] */
    (xdc_Char)0x6c,  /* [4647] */
    (xdc_Char)0x6f,  /* [4648] */
    (xdc_Char)0x77,  /* [4649] */
    (xdc_Char)0x2e,  /* [4650] */
    (xdc_Char)0x0,  /* [4651] */
    (xdc_Char)0x45,  /* [4652] */
    (xdc_Char)0x5f,  /* [4653] */
    (xdc_Char)0x73,  /* [4654] */
    (xdc_Char)0x70,  /* [4655] */
    (xdc_Char)0x4f,  /* [4656] */
    (xdc_Char)0x75,  /* [4657] */
    (xdc_Char)0x74,  /* [4658] */
    (xdc_Char)0x4f,  /* [4659] */
    (xdc_Char)0x66,  /* [4660] */
    (xdc_Char)0x42,  /* [4661] */
    (xdc_Char)0x6f,  /* [4662] */
    (xdc_Char)0x75,  /* [4663] */
    (xdc_Char)0x6e,  /* [4664] */
    (xdc_Char)0x64,  /* [4665] */
    (xdc_Char)0x73,  /* [4666] */
    (xdc_Char)0x3a,  /* [4667] */
    (xdc_Char)0x20,  /* [4668] */
    (xdc_Char)0x54,  /* [4669] */
    (xdc_Char)0x61,  /* [4670] */
    (xdc_Char)0x73,  /* [4671] */
    (xdc_Char)0x6b,  /* [4672] */
    (xdc_Char)0x20,  /* [4673] */
    (xdc_Char)0x30,  /* [4674] */
    (xdc_Char)0x78,  /* [4675] */
    (xdc_Char)0x25,  /* [4676] */
    (xdc_Char)0x78,  /* [4677] */
    (xdc_Char)0x20,  /* [4678] */
    (xdc_Char)0x73,  /* [4679] */
    (xdc_Char)0x74,  /* [4680] */
    (xdc_Char)0x61,  /* [4681] */
    (xdc_Char)0x63,  /* [4682] */
    (xdc_Char)0x6b,  /* [4683] */
    (xdc_Char)0x20,  /* [4684] */
    (xdc_Char)0x65,  /* [4685] */
    (xdc_Char)0x72,  /* [4686] */
    (xdc_Char)0x72,  /* [4687] */
    (xdc_Char)0x6f,  /* [4688] */
    (xdc_Char)0x72,  /* [4689] */
    (xdc_Char)0x2c,  /* [4690] */
    (xdc_Char)0x20,  /* [4691] */
    (xdc_Char)0x53,  /* [4692] */
    (xdc_Char)0x50,  /* [4693] */
    (xdc_Char)0x20,  /* [4694] */
    (xdc_Char)0x3d,  /* [4695] */
    (xdc_Char)0x20,  /* [4696] */
    (xdc_Char)0x30,  /* [4697] */
    (xdc_Char)0x78,  /* [4698] */
    (xdc_Char)0x25,  /* [4699] */
    (xdc_Char)0x78,  /* [4700] */
    (xdc_Char)0x2e,  /* [4701] */
    (xdc_Char)0x0,  /* [4702] */
    (xdc_Char)0x45,  /* [4703] */
    (xdc_Char)0x5f,  /* [4704] */
    (xdc_Char)0x6d,  /* [4705] */
    (xdc_Char)0x61,  /* [4706] */
    (xdc_Char)0x78,  /* [4707] */
    (xdc_Char)0x52,  /* [4708] */
    (xdc_Char)0x65,  /* [4709] */
    (xdc_Char)0x61,  /* [4710] */
    (xdc_Char)0x63,  /* [4711] */
    (xdc_Char)0x68,  /* [4712] */
    (xdc_Char)0x65,  /* [4713] */
    (xdc_Char)0x64,  /* [4714] */
    (xdc_Char)0x3a,  /* [4715] */
    (xdc_Char)0x20,  /* [4716] */
    (xdc_Char)0x41,  /* [4717] */
    (xdc_Char)0x6c,  /* [4718] */
    (xdc_Char)0x6c,  /* [4719] */
    (xdc_Char)0x20,  /* [4720] */
    (xdc_Char)0x65,  /* [4721] */
    (xdc_Char)0x6e,  /* [4722] */
    (xdc_Char)0x74,  /* [4723] */
    (xdc_Char)0x72,  /* [4724] */
    (xdc_Char)0x69,  /* [4725] */
    (xdc_Char)0x65,  /* [4726] */
    (xdc_Char)0x73,  /* [4727] */
    (xdc_Char)0x20,  /* [4728] */
    (xdc_Char)0x69,  /* [4729] */
    (xdc_Char)0x6e,  /* [4730] */
    (xdc_Char)0x20,  /* [4731] */
    (xdc_Char)0x75,  /* [4732] */
    (xdc_Char)0x73,  /* [4733] */
    (xdc_Char)0x65,  /* [4734] */
    (xdc_Char)0x2e,  /* [4735] */
    (xdc_Char)0x20,  /* [4736] */
    (xdc_Char)0x4e,  /* [4737] */
    (xdc_Char)0x61,  /* [4738] */
    (xdc_Char)0x6d,  /* [4739] */
    (xdc_Char)0x65,  /* [4740] */
    (xdc_Char)0x53,  /* [4741] */
    (xdc_Char)0x65,  /* [4742] */
    (xdc_Char)0x72,  /* [4743] */
    (xdc_Char)0x76,  /* [4744] */
    (xdc_Char)0x65,  /* [4745] */
    (xdc_Char)0x72,  /* [4746] */
    (xdc_Char)0x2e,  /* [4747] */
    (xdc_Char)0x6d,  /* [4748] */
    (xdc_Char)0x61,  /* [4749] */
    (xdc_Char)0x78,  /* [4750] */
    (xdc_Char)0x52,  /* [4751] */
    (xdc_Char)0x75,  /* [4752] */
    (xdc_Char)0x6e,  /* [4753] */
    (xdc_Char)0x74,  /* [4754] */
    (xdc_Char)0x69,  /* [4755] */
    (xdc_Char)0x6d,  /* [4756] */
    (xdc_Char)0x65,  /* [4757] */
    (xdc_Char)0x45,  /* [4758] */
    (xdc_Char)0x6e,  /* [4759] */
    (xdc_Char)0x74,  /* [4760] */
    (xdc_Char)0x72,  /* [4761] */
    (xdc_Char)0x69,  /* [4762] */
    (xdc_Char)0x65,  /* [4763] */
    (xdc_Char)0x73,  /* [4764] */
    (xdc_Char)0x20,  /* [4765] */
    (xdc_Char)0x69,  /* [4766] */
    (xdc_Char)0x73,  /* [4767] */
    (xdc_Char)0x20,  /* [4768] */
    (xdc_Char)0x25,  /* [4769] */
    (xdc_Char)0x64,  /* [4770] */
    (xdc_Char)0x0,  /* [4771] */
    (xdc_Char)0x45,  /* [4772] */
    (xdc_Char)0x5f,  /* [4773] */
    (xdc_Char)0x65,  /* [4774] */
    (xdc_Char)0x6e,  /* [4775] */
    (xdc_Char)0x74,  /* [4776] */
    (xdc_Char)0x72,  /* [4777] */
    (xdc_Char)0x79,  /* [4778] */
    (xdc_Char)0x45,  /* [4779] */
    (xdc_Char)0x78,  /* [4780] */
    (xdc_Char)0x69,  /* [4781] */
    (xdc_Char)0x73,  /* [4782] */
    (xdc_Char)0x74,  /* [4783] */
    (xdc_Char)0x73,  /* [4784] */
    (xdc_Char)0x3a,  /* [4785] */
    (xdc_Char)0x20,  /* [4786] */
    (xdc_Char)0x25,  /* [4787] */
    (xdc_Char)0x73,  /* [4788] */
    (xdc_Char)0x20,  /* [4789] */
    (xdc_Char)0x6e,  /* [4790] */
    (xdc_Char)0x61,  /* [4791] */
    (xdc_Char)0x6d,  /* [4792] */
    (xdc_Char)0x65,  /* [4793] */
    (xdc_Char)0x20,  /* [4794] */
    (xdc_Char)0x61,  /* [4795] */
    (xdc_Char)0x6c,  /* [4796] */
    (xdc_Char)0x72,  /* [4797] */
    (xdc_Char)0x65,  /* [4798] */
    (xdc_Char)0x61,  /* [4799] */
    (xdc_Char)0x64,  /* [4800] */
    (xdc_Char)0x79,  /* [4801] */
    (xdc_Char)0x20,  /* [4802] */
    (xdc_Char)0x69,  /* [4803] */
    (xdc_Char)0x6e,  /* [4804] */
    (xdc_Char)0x20,  /* [4805] */
    (xdc_Char)0x74,  /* [4806] */
    (xdc_Char)0x61,  /* [4807] */
    (xdc_Char)0x62,  /* [4808] */
    (xdc_Char)0x6c,  /* [4809] */
    (xdc_Char)0x65,  /* [4810] */
    (xdc_Char)0x20,  /* [4811] */
    (xdc_Char)0x0,  /* [4812] */
    (xdc_Char)0x45,  /* [4813] */
    (xdc_Char)0x5f,  /* [4814] */
    (xdc_Char)0x67,  /* [4815] */
    (xdc_Char)0x61,  /* [4816] */
    (xdc_Char)0x74,  /* [4817] */
    (xdc_Char)0x65,  /* [4818] */
    (xdc_Char)0x55,  /* [4819] */
    (xdc_Char)0x6e,  /* [4820] */
    (xdc_Char)0x61,  /* [4821] */
    (xdc_Char)0x76,  /* [4822] */
    (xdc_Char)0x61,  /* [4823] */
    (xdc_Char)0x69,  /* [4824] */
    (xdc_Char)0x6c,  /* [4825] */
    (xdc_Char)0x61,  /* [4826] */
    (xdc_Char)0x62,  /* [4827] */
    (xdc_Char)0x6c,  /* [4828] */
    (xdc_Char)0x65,  /* [4829] */
    (xdc_Char)0x3a,  /* [4830] */
    (xdc_Char)0x20,  /* [4831] */
    (xdc_Char)0x4e,  /* [4832] */
    (xdc_Char)0x6f,  /* [4833] */
    (xdc_Char)0x20,  /* [4834] */
    (xdc_Char)0x67,  /* [4835] */
    (xdc_Char)0x61,  /* [4836] */
    (xdc_Char)0x74,  /* [4837] */
    (xdc_Char)0x65,  /* [4838] */
    (xdc_Char)0x73,  /* [4839] */
    (xdc_Char)0x20,  /* [4840] */
    (xdc_Char)0x6f,  /* [4841] */
    (xdc_Char)0x66,  /* [4842] */
    (xdc_Char)0x20,  /* [4843] */
    (xdc_Char)0x72,  /* [4844] */
    (xdc_Char)0x65,  /* [4845] */
    (xdc_Char)0x71,  /* [4846] */
    (xdc_Char)0x75,  /* [4847] */
    (xdc_Char)0x65,  /* [4848] */
    (xdc_Char)0x73,  /* [4849] */
    (xdc_Char)0x74,  /* [4850] */
    (xdc_Char)0x65,  /* [4851] */
    (xdc_Char)0x64,  /* [4852] */
    (xdc_Char)0x20,  /* [4853] */
    (xdc_Char)0x74,  /* [4854] */
    (xdc_Char)0x79,  /* [4855] */
    (xdc_Char)0x70,  /* [4856] */
    (xdc_Char)0x65,  /* [4857] */
    (xdc_Char)0x20,  /* [4858] */
    (xdc_Char)0x61,  /* [4859] */
    (xdc_Char)0x72,  /* [4860] */
    (xdc_Char)0x65,  /* [4861] */
    (xdc_Char)0x20,  /* [4862] */
    (xdc_Char)0x61,  /* [4863] */
    (xdc_Char)0x76,  /* [4864] */
    (xdc_Char)0x61,  /* [4865] */
    (xdc_Char)0x69,  /* [4866] */
    (xdc_Char)0x6c,  /* [4867] */
    (xdc_Char)0x61,  /* [4868] */
    (xdc_Char)0x62,  /* [4869] */
    (xdc_Char)0x6c,  /* [4870] */
    (xdc_Char)0x65,  /* [4871] */
    (xdc_Char)0x0,  /* [4872] */
    (xdc_Char)0x45,  /* [4873] */
    (xdc_Char)0x5f,  /* [4874] */
    (xdc_Char)0x6c,  /* [4875] */
    (xdc_Char)0x6f,  /* [4876] */
    (xdc_Char)0x63,  /* [4877] */
    (xdc_Char)0x61,  /* [4878] */
    (xdc_Char)0x6c,  /* [4879] */
    (xdc_Char)0x47,  /* [4880] */
    (xdc_Char)0x61,  /* [4881] */
    (xdc_Char)0x74,  /* [4882] */
    (xdc_Char)0x65,  /* [4883] */
    (xdc_Char)0x3a,  /* [4884] */
    (xdc_Char)0x20,  /* [4885] */
    (xdc_Char)0x4f,  /* [4886] */
    (xdc_Char)0x6e,  /* [4887] */
    (xdc_Char)0x6c,  /* [4888] */
    (xdc_Char)0x79,  /* [4889] */
    (xdc_Char)0x20,  /* [4890] */
    (xdc_Char)0x63,  /* [4891] */
    (xdc_Char)0x72,  /* [4892] */
    (xdc_Char)0x65,  /* [4893] */
    (xdc_Char)0x61,  /* [4894] */
    (xdc_Char)0x74,  /* [4895] */
    (xdc_Char)0x6f,  /* [4896] */
    (xdc_Char)0x72,  /* [4897] */
    (xdc_Char)0x20,  /* [4898] */
    (xdc_Char)0x63,  /* [4899] */
    (xdc_Char)0x61,  /* [4900] */
    (xdc_Char)0x6e,  /* [4901] */
    (xdc_Char)0x20,  /* [4902] */
    (xdc_Char)0x6f,  /* [4903] */
    (xdc_Char)0x70,  /* [4904] */
    (xdc_Char)0x65,  /* [4905] */
    (xdc_Char)0x6e,  /* [4906] */
    (xdc_Char)0x20,  /* [4907] */
    (xdc_Char)0x6c,  /* [4908] */
    (xdc_Char)0x6f,  /* [4909] */
    (xdc_Char)0x63,  /* [4910] */
    (xdc_Char)0x61,  /* [4911] */
    (xdc_Char)0x6c,  /* [4912] */
    (xdc_Char)0x20,  /* [4913] */
    (xdc_Char)0x47,  /* [4914] */
    (xdc_Char)0x61,  /* [4915] */
    (xdc_Char)0x74,  /* [4916] */
    (xdc_Char)0x65,  /* [4917] */
    (xdc_Char)0x0,  /* [4918] */
    (xdc_Char)0x45,  /* [4919] */
    (xdc_Char)0x5f,  /* [4920] */
    (xdc_Char)0x6d,  /* [4921] */
    (xdc_Char)0x61,  /* [4922] */
    (xdc_Char)0x78,  /* [4923] */
    (xdc_Char)0x52,  /* [4924] */
    (xdc_Char)0x65,  /* [4925] */
    (xdc_Char)0x61,  /* [4926] */
    (xdc_Char)0x63,  /* [4927] */
    (xdc_Char)0x68,  /* [4928] */
    (xdc_Char)0x65,  /* [4929] */
    (xdc_Char)0x64,  /* [4930] */
    (xdc_Char)0x3a,  /* [4931] */
    (xdc_Char)0x20,  /* [4932] */
    (xdc_Char)0x41,  /* [4933] */
    (xdc_Char)0x6c,  /* [4934] */
    (xdc_Char)0x6c,  /* [4935] */
    (xdc_Char)0x20,  /* [4936] */
    (xdc_Char)0x6f,  /* [4937] */
    (xdc_Char)0x62,  /* [4938] */
    (xdc_Char)0x6a,  /* [4939] */
    (xdc_Char)0x65,  /* [4940] */
    (xdc_Char)0x63,  /* [4941] */
    (xdc_Char)0x74,  /* [4942] */
    (xdc_Char)0x73,  /* [4943] */
    (xdc_Char)0x20,  /* [4944] */
    (xdc_Char)0x69,  /* [4945] */
    (xdc_Char)0x6e,  /* [4946] */
    (xdc_Char)0x20,  /* [4947] */
    (xdc_Char)0x75,  /* [4948] */
    (xdc_Char)0x73,  /* [4949] */
    (xdc_Char)0x65,  /* [4950] */
    (xdc_Char)0x2e,  /* [4951] */
    (xdc_Char)0x20,  /* [4952] */
    (xdc_Char)0x4d,  /* [4953] */
    (xdc_Char)0x65,  /* [4954] */
    (xdc_Char)0x73,  /* [4955] */
    (xdc_Char)0x73,  /* [4956] */
    (xdc_Char)0x61,  /* [4957] */
    (xdc_Char)0x67,  /* [4958] */
    (xdc_Char)0x65,  /* [4959] */
    (xdc_Char)0x51,  /* [4960] */
    (xdc_Char)0x2e,  /* [4961] */
    (xdc_Char)0x6d,  /* [4962] */
    (xdc_Char)0x61,  /* [4963] */
    (xdc_Char)0x78,  /* [4964] */
    (xdc_Char)0x52,  /* [4965] */
    (xdc_Char)0x75,  /* [4966] */
    (xdc_Char)0x6e,  /* [4967] */
    (xdc_Char)0x74,  /* [4968] */
    (xdc_Char)0x69,  /* [4969] */
    (xdc_Char)0x6d,  /* [4970] */
    (xdc_Char)0x65,  /* [4971] */
    (xdc_Char)0x45,  /* [4972] */
    (xdc_Char)0x6e,  /* [4973] */
    (xdc_Char)0x74,  /* [4974] */
    (xdc_Char)0x72,  /* [4975] */
    (xdc_Char)0x69,  /* [4976] */
    (xdc_Char)0x65,  /* [4977] */
    (xdc_Char)0x73,  /* [4978] */
    (xdc_Char)0x20,  /* [4979] */
    (xdc_Char)0x69,  /* [4980] */
    (xdc_Char)0x73,  /* [4981] */
    (xdc_Char)0x20,  /* [4982] */
    (xdc_Char)0x25,  /* [4983] */
    (xdc_Char)0x64,  /* [4984] */
    (xdc_Char)0x0,  /* [4985] */
    (xdc_Char)0x45,  /* [4986] */
    (xdc_Char)0x5f,  /* [4987] */
    (xdc_Char)0x75,  /* [4988] */
    (xdc_Char)0x6e,  /* [4989] */
    (xdc_Char)0x72,  /* [4990] */
    (xdc_Char)0x65,  /* [4991] */
    (xdc_Char)0x67,  /* [4992] */
    (xdc_Char)0x69,  /* [4993] */
    (xdc_Char)0x73,  /* [4994] */
    (xdc_Char)0x74,  /* [4995] */
    (xdc_Char)0x65,  /* [4996] */
    (xdc_Char)0x72,  /* [4997] */
    (xdc_Char)0x48,  /* [4998] */
    (xdc_Char)0x65,  /* [4999] */
    (xdc_Char)0x61,  /* [5000] */
    (xdc_Char)0x70,  /* [5001] */
    (xdc_Char)0x49,  /* [5002] */
    (xdc_Char)0x64,  /* [5003] */
    (xdc_Char)0x3a,  /* [5004] */
    (xdc_Char)0x20,  /* [5005] */
    (xdc_Char)0x48,  /* [5006] */
    (xdc_Char)0x65,  /* [5007] */
    (xdc_Char)0x61,  /* [5008] */
    (xdc_Char)0x70,  /* [5009] */
    (xdc_Char)0x20,  /* [5010] */
    (xdc_Char)0x69,  /* [5011] */
    (xdc_Char)0x64,  /* [5012] */
    (xdc_Char)0x20,  /* [5013] */
    (xdc_Char)0x25,  /* [5014] */
    (xdc_Char)0x64,  /* [5015] */
    (xdc_Char)0x20,  /* [5016] */
    (xdc_Char)0x6e,  /* [5017] */
    (xdc_Char)0x6f,  /* [5018] */
    (xdc_Char)0x74,  /* [5019] */
    (xdc_Char)0x20,  /* [5020] */
    (xdc_Char)0x72,  /* [5021] */
    (xdc_Char)0x65,  /* [5022] */
    (xdc_Char)0x67,  /* [5023] */
    (xdc_Char)0x69,  /* [5024] */
    (xdc_Char)0x73,  /* [5025] */
    (xdc_Char)0x74,  /* [5026] */
    (xdc_Char)0x65,  /* [5027] */
    (xdc_Char)0x72,  /* [5028] */
    (xdc_Char)0x65,  /* [5029] */
    (xdc_Char)0x64,  /* [5030] */
    (xdc_Char)0x0,  /* [5031] */
    (xdc_Char)0x45,  /* [5032] */
    (xdc_Char)0x5f,  /* [5033] */
    (xdc_Char)0x6e,  /* [5034] */
    (xdc_Char)0x61,  /* [5035] */
    (xdc_Char)0x6d,  /* [5036] */
    (xdc_Char)0x65,  /* [5037] */
    (xdc_Char)0x46,  /* [5038] */
    (xdc_Char)0x61,  /* [5039] */
    (xdc_Char)0x69,  /* [5040] */
    (xdc_Char)0x6c,  /* [5041] */
    (xdc_Char)0x65,  /* [5042] */
    (xdc_Char)0x64,  /* [5043] */
    (xdc_Char)0x3a,  /* [5044] */
    (xdc_Char)0x20,  /* [5045] */
    (xdc_Char)0x27,  /* [5046] */
    (xdc_Char)0x25,  /* [5047] */
    (xdc_Char)0x73,  /* [5048] */
    (xdc_Char)0x27,  /* [5049] */
    (xdc_Char)0x20,  /* [5050] */
    (xdc_Char)0x6e,  /* [5051] */
    (xdc_Char)0x61,  /* [5052] */
    (xdc_Char)0x6d,  /* [5053] */
    (xdc_Char)0x65,  /* [5054] */
    (xdc_Char)0x20,  /* [5055] */
    (xdc_Char)0x66,  /* [5056] */
    (xdc_Char)0x61,  /* [5057] */
    (xdc_Char)0x69,  /* [5058] */
    (xdc_Char)0x6c,  /* [5059] */
    (xdc_Char)0x65,  /* [5060] */
    (xdc_Char)0x64,  /* [5061] */
    (xdc_Char)0x20,  /* [5062] */
    (xdc_Char)0x74,  /* [5063] */
    (xdc_Char)0x6f,  /* [5064] */
    (xdc_Char)0x20,  /* [5065] */
    (xdc_Char)0x62,  /* [5066] */
    (xdc_Char)0x65,  /* [5067] */
    (xdc_Char)0x20,  /* [5068] */
    (xdc_Char)0x61,  /* [5069] */
    (xdc_Char)0x64,  /* [5070] */
    (xdc_Char)0x64,  /* [5071] */
    (xdc_Char)0x65,  /* [5072] */
    (xdc_Char)0x64,  /* [5073] */
    (xdc_Char)0x20,  /* [5074] */
    (xdc_Char)0x74,  /* [5075] */
    (xdc_Char)0x6f,  /* [5076] */
    (xdc_Char)0x20,  /* [5077] */
    (xdc_Char)0x4e,  /* [5078] */
    (xdc_Char)0x61,  /* [5079] */
    (xdc_Char)0x6d,  /* [5080] */
    (xdc_Char)0x65,  /* [5081] */
    (xdc_Char)0x53,  /* [5082] */
    (xdc_Char)0x65,  /* [5083] */
    (xdc_Char)0x72,  /* [5084] */
    (xdc_Char)0x76,  /* [5085] */
    (xdc_Char)0x65,  /* [5086] */
    (xdc_Char)0x72,  /* [5087] */
    (xdc_Char)0x0,  /* [5088] */
    (xdc_Char)0x45,  /* [5089] */
    (xdc_Char)0x5f,  /* [5090] */
    (xdc_Char)0x69,  /* [5091] */
    (xdc_Char)0x6e,  /* [5092] */
    (xdc_Char)0x74,  /* [5093] */
    (xdc_Char)0x65,  /* [5094] */
    (xdc_Char)0x72,  /* [5095] */
    (xdc_Char)0x6e,  /* [5096] */
    (xdc_Char)0x61,  /* [5097] */
    (xdc_Char)0x6c,  /* [5098] */
    (xdc_Char)0x3a,  /* [5099] */
    (xdc_Char)0x20,  /* [5100] */
    (xdc_Char)0x41,  /* [5101] */
    (xdc_Char)0x6e,  /* [5102] */
    (xdc_Char)0x20,  /* [5103] */
    (xdc_Char)0x69,  /* [5104] */
    (xdc_Char)0x6e,  /* [5105] */
    (xdc_Char)0x74,  /* [5106] */
    (xdc_Char)0x65,  /* [5107] */
    (xdc_Char)0x72,  /* [5108] */
    (xdc_Char)0x6e,  /* [5109] */
    (xdc_Char)0x61,  /* [5110] */
    (xdc_Char)0x6c,  /* [5111] */
    (xdc_Char)0x20,  /* [5112] */
    (xdc_Char)0x65,  /* [5113] */
    (xdc_Char)0x72,  /* [5114] */
    (xdc_Char)0x72,  /* [5115] */
    (xdc_Char)0x6f,  /* [5116] */
    (xdc_Char)0x72,  /* [5117] */
    (xdc_Char)0x20,  /* [5118] */
    (xdc_Char)0x6f,  /* [5119] */
    (xdc_Char)0x63,  /* [5120] */
    (xdc_Char)0x63,  /* [5121] */
    (xdc_Char)0x75,  /* [5122] */
    (xdc_Char)0x72,  /* [5123] */
    (xdc_Char)0x72,  /* [5124] */
    (xdc_Char)0x65,  /* [5125] */
    (xdc_Char)0x64,  /* [5126] */
    (xdc_Char)0x0,  /* [5127] */
    (xdc_Char)0x45,  /* [5128] */
    (xdc_Char)0x5f,  /* [5129] */
    (xdc_Char)0x76,  /* [5130] */
    (xdc_Char)0x65,  /* [5131] */
    (xdc_Char)0x72,  /* [5132] */
    (xdc_Char)0x73,  /* [5133] */
    (xdc_Char)0x69,  /* [5134] */
    (xdc_Char)0x6f,  /* [5135] */
    (xdc_Char)0x6e,  /* [5136] */
    (xdc_Char)0x4d,  /* [5137] */
    (xdc_Char)0x69,  /* [5138] */
    (xdc_Char)0x73,  /* [5139] */
    (xdc_Char)0x6d,  /* [5140] */
    (xdc_Char)0x61,  /* [5141] */
    (xdc_Char)0x74,  /* [5142] */
    (xdc_Char)0x63,  /* [5143] */
    (xdc_Char)0x68,  /* [5144] */
    (xdc_Char)0x3a,  /* [5145] */
    (xdc_Char)0x20,  /* [5146] */
    (xdc_Char)0x49,  /* [5147] */
    (xdc_Char)0x50,  /* [5148] */
    (xdc_Char)0x43,  /* [5149] */
    (xdc_Char)0x20,  /* [5150] */
    (xdc_Char)0x4d,  /* [5151] */
    (xdc_Char)0x6f,  /* [5152] */
    (xdc_Char)0x64,  /* [5153] */
    (xdc_Char)0x75,  /* [5154] */
    (xdc_Char)0x6c,  /* [5155] */
    (xdc_Char)0x65,  /* [5156] */
    (xdc_Char)0x20,  /* [5157] */
    (xdc_Char)0x76,  /* [5158] */
    (xdc_Char)0x65,  /* [5159] */
    (xdc_Char)0x72,  /* [5160] */
    (xdc_Char)0x73,  /* [5161] */
    (xdc_Char)0x69,  /* [5162] */
    (xdc_Char)0x6f,  /* [5163] */
    (xdc_Char)0x6e,  /* [5164] */
    (xdc_Char)0x20,  /* [5165] */
    (xdc_Char)0x6d,  /* [5166] */
    (xdc_Char)0x69,  /* [5167] */
    (xdc_Char)0x73,  /* [5168] */
    (xdc_Char)0x6d,  /* [5169] */
    (xdc_Char)0x61,  /* [5170] */
    (xdc_Char)0x74,  /* [5171] */
    (xdc_Char)0x63,  /* [5172] */
    (xdc_Char)0x68,  /* [5173] */
    (xdc_Char)0x3a,  /* [5174] */
    (xdc_Char)0x20,  /* [5175] */
    (xdc_Char)0x63,  /* [5176] */
    (xdc_Char)0x72,  /* [5177] */
    (xdc_Char)0x65,  /* [5178] */
    (xdc_Char)0x61,  /* [5179] */
    (xdc_Char)0x74,  /* [5180] */
    (xdc_Char)0x6f,  /* [5181] */
    (xdc_Char)0x72,  /* [5182] */
    (xdc_Char)0x3a,  /* [5183] */
    (xdc_Char)0x20,  /* [5184] */
    (xdc_Char)0x25,  /* [5185] */
    (xdc_Char)0x64,  /* [5186] */
    (xdc_Char)0x2c,  /* [5187] */
    (xdc_Char)0x20,  /* [5188] */
    (xdc_Char)0x6f,  /* [5189] */
    (xdc_Char)0x70,  /* [5190] */
    (xdc_Char)0x65,  /* [5191] */
    (xdc_Char)0x6e,  /* [5192] */
    (xdc_Char)0x65,  /* [5193] */
    (xdc_Char)0x72,  /* [5194] */
    (xdc_Char)0x3a,  /* [5195] */
    (xdc_Char)0x20,  /* [5196] */
    (xdc_Char)0x25,  /* [5197] */
    (xdc_Char)0x64,  /* [5198] */
    (xdc_Char)0x0,  /* [5199] */
    (xdc_Char)0x45,  /* [5200] */
    (xdc_Char)0x5f,  /* [5201] */
    (xdc_Char)0x61,  /* [5202] */
    (xdc_Char)0x6c,  /* [5203] */
    (xdc_Char)0x72,  /* [5204] */
    (xdc_Char)0x65,  /* [5205] */
    (xdc_Char)0x61,  /* [5206] */
    (xdc_Char)0x64,  /* [5207] */
    (xdc_Char)0x79,  /* [5208] */
    (xdc_Char)0x44,  /* [5209] */
    (xdc_Char)0x65,  /* [5210] */
    (xdc_Char)0x66,  /* [5211] */
    (xdc_Char)0x69,  /* [5212] */
    (xdc_Char)0x6e,  /* [5213] */
    (xdc_Char)0x65,  /* [5214] */
    (xdc_Char)0x64,  /* [5215] */
    (xdc_Char)0x3a,  /* [5216] */
    (xdc_Char)0x20,  /* [5217] */
    (xdc_Char)0x48,  /* [5218] */
    (xdc_Char)0x77,  /* [5219] */
    (xdc_Char)0x69,  /* [5220] */
    (xdc_Char)0x20,  /* [5221] */
    (xdc_Char)0x61,  /* [5222] */
    (xdc_Char)0x6c,  /* [5223] */
    (xdc_Char)0x72,  /* [5224] */
    (xdc_Char)0x65,  /* [5225] */
    (xdc_Char)0x61,  /* [5226] */
    (xdc_Char)0x64,  /* [5227] */
    (xdc_Char)0x79,  /* [5228] */
    (xdc_Char)0x20,  /* [5229] */
    (xdc_Char)0x64,  /* [5230] */
    (xdc_Char)0x65,  /* [5231] */
    (xdc_Char)0x66,  /* [5232] */
    (xdc_Char)0x69,  /* [5233] */
    (xdc_Char)0x6e,  /* [5234] */
    (xdc_Char)0x65,  /* [5235] */
    (xdc_Char)0x64,  /* [5236] */
    (xdc_Char)0x2c,  /* [5237] */
    (xdc_Char)0x20,  /* [5238] */
    (xdc_Char)0x69,  /* [5239] */
    (xdc_Char)0x6e,  /* [5240] */
    (xdc_Char)0x74,  /* [5241] */
    (xdc_Char)0x6e,  /* [5242] */
    (xdc_Char)0x75,  /* [5243] */
    (xdc_Char)0x6d,  /* [5244] */
    (xdc_Char)0x3a,  /* [5245] */
    (xdc_Char)0x20,  /* [5246] */
    (xdc_Char)0x25,  /* [5247] */
    (xdc_Char)0x64,  /* [5248] */
    (xdc_Char)0x0,  /* [5249] */
    (xdc_Char)0x45,  /* [5250] */
    (xdc_Char)0x5f,  /* [5251] */
    (xdc_Char)0x68,  /* [5252] */
    (xdc_Char)0x61,  /* [5253] */
    (xdc_Char)0x6e,  /* [5254] */
    (xdc_Char)0x64,  /* [5255] */
    (xdc_Char)0x6c,  /* [5256] */
    (xdc_Char)0x65,  /* [5257] */
    (xdc_Char)0x4e,  /* [5258] */
    (xdc_Char)0x6f,  /* [5259] */
    (xdc_Char)0x74,  /* [5260] */
    (xdc_Char)0x46,  /* [5261] */
    (xdc_Char)0x6f,  /* [5262] */
    (xdc_Char)0x75,  /* [5263] */
    (xdc_Char)0x6e,  /* [5264] */
    (xdc_Char)0x64,  /* [5265] */
    (xdc_Char)0x3a,  /* [5266] */
    (xdc_Char)0x20,  /* [5267] */
    (xdc_Char)0x48,  /* [5268] */
    (xdc_Char)0x77,  /* [5269] */
    (xdc_Char)0x69,  /* [5270] */
    (xdc_Char)0x20,  /* [5271] */
    (xdc_Char)0x68,  /* [5272] */
    (xdc_Char)0x61,  /* [5273] */
    (xdc_Char)0x6e,  /* [5274] */
    (xdc_Char)0x64,  /* [5275] */
    (xdc_Char)0x6c,  /* [5276] */
    (xdc_Char)0x65,  /* [5277] */
    (xdc_Char)0x20,  /* [5278] */
    (xdc_Char)0x6e,  /* [5279] */
    (xdc_Char)0x6f,  /* [5280] */
    (xdc_Char)0x74,  /* [5281] */
    (xdc_Char)0x20,  /* [5282] */
    (xdc_Char)0x66,  /* [5283] */
    (xdc_Char)0x6f,  /* [5284] */
    (xdc_Char)0x75,  /* [5285] */
    (xdc_Char)0x6e,  /* [5286] */
    (xdc_Char)0x64,  /* [5287] */
    (xdc_Char)0x3a,  /* [5288] */
    (xdc_Char)0x20,  /* [5289] */
    (xdc_Char)0x30,  /* [5290] */
    (xdc_Char)0x78,  /* [5291] */
    (xdc_Char)0x25,  /* [5292] */
    (xdc_Char)0x78,  /* [5293] */
    (xdc_Char)0x0,  /* [5294] */
    (xdc_Char)0x45,  /* [5295] */
    (xdc_Char)0x5f,  /* [5296] */
    (xdc_Char)0x75,  /* [5297] */
    (xdc_Char)0x6e,  /* [5298] */
    (xdc_Char)0x64,  /* [5299] */
    (xdc_Char)0x65,  /* [5300] */
    (xdc_Char)0x66,  /* [5301] */
    (xdc_Char)0x69,  /* [5302] */
    (xdc_Char)0x6e,  /* [5303] */
    (xdc_Char)0x65,  /* [5304] */
    (xdc_Char)0x64,  /* [5305] */
    (xdc_Char)0x3a,  /* [5306] */
    (xdc_Char)0x20,  /* [5307] */
    (xdc_Char)0x48,  /* [5308] */
    (xdc_Char)0x77,  /* [5309] */
    (xdc_Char)0x69,  /* [5310] */
    (xdc_Char)0x20,  /* [5311] */
    (xdc_Char)0x75,  /* [5312] */
    (xdc_Char)0x6e,  /* [5313] */
    (xdc_Char)0x64,  /* [5314] */
    (xdc_Char)0x65,  /* [5315] */
    (xdc_Char)0x66,  /* [5316] */
    (xdc_Char)0x69,  /* [5317] */
    (xdc_Char)0x6e,  /* [5318] */
    (xdc_Char)0x65,  /* [5319] */
    (xdc_Char)0x64,  /* [5320] */
    (xdc_Char)0x2c,  /* [5321] */
    (xdc_Char)0x20,  /* [5322] */
    (xdc_Char)0x69,  /* [5323] */
    (xdc_Char)0x6e,  /* [5324] */
    (xdc_Char)0x74,  /* [5325] */
    (xdc_Char)0x6e,  /* [5326] */
    (xdc_Char)0x75,  /* [5327] */
    (xdc_Char)0x6d,  /* [5328] */
    (xdc_Char)0x3a,  /* [5329] */
    (xdc_Char)0x20,  /* [5330] */
    (xdc_Char)0x25,  /* [5331] */
    (xdc_Char)0x64,  /* [5332] */
    (xdc_Char)0x0,  /* [5333] */
    (xdc_Char)0x45,  /* [5334] */
    (xdc_Char)0x5f,  /* [5335] */
    (xdc_Char)0x62,  /* [5336] */
    (xdc_Char)0x61,  /* [5337] */
    (xdc_Char)0x64,  /* [5338] */
    (xdc_Char)0x49,  /* [5339] */
    (xdc_Char)0x6e,  /* [5340] */
    (xdc_Char)0x74,  /* [5341] */
    (xdc_Char)0x4e,  /* [5342] */
    (xdc_Char)0x75,  /* [5343] */
    (xdc_Char)0x6d,  /* [5344] */
    (xdc_Char)0x2c,  /* [5345] */
    (xdc_Char)0x20,  /* [5346] */
    (xdc_Char)0x69,  /* [5347] */
    (xdc_Char)0x6e,  /* [5348] */
    (xdc_Char)0x74,  /* [5349] */
    (xdc_Char)0x6e,  /* [5350] */
    (xdc_Char)0x75,  /* [5351] */
    (xdc_Char)0x6d,  /* [5352] */
    (xdc_Char)0x3a,  /* [5353] */
    (xdc_Char)0x20,  /* [5354] */
    (xdc_Char)0x25,  /* [5355] */
    (xdc_Char)0x64,  /* [5356] */
    (xdc_Char)0x20,  /* [5357] */
    (xdc_Char)0x69,  /* [5358] */
    (xdc_Char)0x73,  /* [5359] */
    (xdc_Char)0x20,  /* [5360] */
    (xdc_Char)0x6f,  /* [5361] */
    (xdc_Char)0x75,  /* [5362] */
    (xdc_Char)0x74,  /* [5363] */
    (xdc_Char)0x20,  /* [5364] */
    (xdc_Char)0x6f,  /* [5365] */
    (xdc_Char)0x66,  /* [5366] */
    (xdc_Char)0x20,  /* [5367] */
    (xdc_Char)0x72,  /* [5368] */
    (xdc_Char)0x61,  /* [5369] */
    (xdc_Char)0x6e,  /* [5370] */
    (xdc_Char)0x67,  /* [5371] */
    (xdc_Char)0x65,  /* [5372] */
    (xdc_Char)0x0,  /* [5373] */
    (xdc_Char)0x45,  /* [5374] */
    (xdc_Char)0x5f,  /* [5375] */
    (xdc_Char)0x65,  /* [5376] */
    (xdc_Char)0x78,  /* [5377] */
    (xdc_Char)0x63,  /* [5378] */
    (xdc_Char)0x65,  /* [5379] */
    (xdc_Char)0x70,  /* [5380] */
    (xdc_Char)0x74,  /* [5381] */
    (xdc_Char)0x69,  /* [5382] */
    (xdc_Char)0x6f,  /* [5383] */
    (xdc_Char)0x6e,  /* [5384] */
    (xdc_Char)0x3a,  /* [5385] */
    (xdc_Char)0x20,  /* [5386] */
    (xdc_Char)0x70,  /* [5387] */
    (xdc_Char)0x63,  /* [5388] */
    (xdc_Char)0x20,  /* [5389] */
    (xdc_Char)0x3d,  /* [5390] */
    (xdc_Char)0x20,  /* [5391] */
    (xdc_Char)0x30,  /* [5392] */
    (xdc_Char)0x78,  /* [5393] */
    (xdc_Char)0x25,  /* [5394] */
    (xdc_Char)0x30,  /* [5395] */
    (xdc_Char)0x38,  /* [5396] */
    (xdc_Char)0x78,  /* [5397] */
    (xdc_Char)0x2c,  /* [5398] */
    (xdc_Char)0x20,  /* [5399] */
    (xdc_Char)0x6c,  /* [5400] */
    (xdc_Char)0x72,  /* [5401] */
    (xdc_Char)0x20,  /* [5402] */
    (xdc_Char)0x3d,  /* [5403] */
    (xdc_Char)0x20,  /* [5404] */
    (xdc_Char)0x30,  /* [5405] */
    (xdc_Char)0x78,  /* [5406] */
    (xdc_Char)0x25,  /* [5407] */
    (xdc_Char)0x30,  /* [5408] */
    (xdc_Char)0x38,  /* [5409] */
    (xdc_Char)0x78,  /* [5410] */
    (xdc_Char)0x2e,  /* [5411] */
    (xdc_Char)0x0,  /* [5412] */
    (xdc_Char)0x45,  /* [5413] */
    (xdc_Char)0x5f,  /* [5414] */
    (xdc_Char)0x73,  /* [5415] */
    (xdc_Char)0x77,  /* [5416] */
    (xdc_Char)0x69,  /* [5417] */
    (xdc_Char)0x3a,  /* [5418] */
    (xdc_Char)0x20,  /* [5419] */
    (xdc_Char)0x70,  /* [5420] */
    (xdc_Char)0x63,  /* [5421] */
    (xdc_Char)0x20,  /* [5422] */
    (xdc_Char)0x3d,  /* [5423] */
    (xdc_Char)0x20,  /* [5424] */
    (xdc_Char)0x30,  /* [5425] */
    (xdc_Char)0x78,  /* [5426] */
    (xdc_Char)0x25,  /* [5427] */
    (xdc_Char)0x30,  /* [5428] */
    (xdc_Char)0x38,  /* [5429] */
    (xdc_Char)0x78,  /* [5430] */
    (xdc_Char)0x2c,  /* [5431] */
    (xdc_Char)0x20,  /* [5432] */
    (xdc_Char)0x6c,  /* [5433] */
    (xdc_Char)0x72,  /* [5434] */
    (xdc_Char)0x20,  /* [5435] */
    (xdc_Char)0x3d,  /* [5436] */
    (xdc_Char)0x20,  /* [5437] */
    (xdc_Char)0x30,  /* [5438] */
    (xdc_Char)0x78,  /* [5439] */
    (xdc_Char)0x25,  /* [5440] */
    (xdc_Char)0x30,  /* [5441] */
    (xdc_Char)0x38,  /* [5442] */
    (xdc_Char)0x78,  /* [5443] */
    (xdc_Char)0x2e,  /* [5444] */
    (xdc_Char)0x0,  /* [5445] */
    (xdc_Char)0x45,  /* [5446] */
    (xdc_Char)0x5f,  /* [5447] */
    (xdc_Char)0x70,  /* [5448] */
    (xdc_Char)0x72,  /* [5449] */
    (xdc_Char)0x65,  /* [5450] */
    (xdc_Char)0x66,  /* [5451] */
    (xdc_Char)0x65,  /* [5452] */
    (xdc_Char)0x74,  /* [5453] */
    (xdc_Char)0x63,  /* [5454] */
    (xdc_Char)0x68,  /* [5455] */
    (xdc_Char)0x41,  /* [5456] */
    (xdc_Char)0x62,  /* [5457] */
    (xdc_Char)0x6f,  /* [5458] */
    (xdc_Char)0x72,  /* [5459] */
    (xdc_Char)0x74,  /* [5460] */
    (xdc_Char)0x3a,  /* [5461] */
    (xdc_Char)0x20,  /* [5462] */
    (xdc_Char)0x70,  /* [5463] */
    (xdc_Char)0x63,  /* [5464] */
    (xdc_Char)0x20,  /* [5465] */
    (xdc_Char)0x3d,  /* [5466] */
    (xdc_Char)0x20,  /* [5467] */
    (xdc_Char)0x30,  /* [5468] */
    (xdc_Char)0x78,  /* [5469] */
    (xdc_Char)0x25,  /* [5470] */
    (xdc_Char)0x30,  /* [5471] */
    (xdc_Char)0x38,  /* [5472] */
    (xdc_Char)0x78,  /* [5473] */
    (xdc_Char)0x2c,  /* [5474] */
    (xdc_Char)0x20,  /* [5475] */
    (xdc_Char)0x6c,  /* [5476] */
    (xdc_Char)0x72,  /* [5477] */
    (xdc_Char)0x20,  /* [5478] */
    (xdc_Char)0x3d,  /* [5479] */
    (xdc_Char)0x20,  /* [5480] */
    (xdc_Char)0x30,  /* [5481] */
    (xdc_Char)0x78,  /* [5482] */
    (xdc_Char)0x25,  /* [5483] */
    (xdc_Char)0x30,  /* [5484] */
    (xdc_Char)0x38,  /* [5485] */
    (xdc_Char)0x78,  /* [5486] */
    (xdc_Char)0x2e,  /* [5487] */
    (xdc_Char)0x0,  /* [5488] */
    (xdc_Char)0x45,  /* [5489] */
    (xdc_Char)0x5f,  /* [5490] */
    (xdc_Char)0x64,  /* [5491] */
    (xdc_Char)0x61,  /* [5492] */
    (xdc_Char)0x74,  /* [5493] */
    (xdc_Char)0x61,  /* [5494] */
    (xdc_Char)0x41,  /* [5495] */
    (xdc_Char)0x62,  /* [5496] */
    (xdc_Char)0x6f,  /* [5497] */
    (xdc_Char)0x72,  /* [5498] */
    (xdc_Char)0x74,  /* [5499] */
    (xdc_Char)0x3a,  /* [5500] */
    (xdc_Char)0x20,  /* [5501] */
    (xdc_Char)0x70,  /* [5502] */
    (xdc_Char)0x63,  /* [5503] */
    (xdc_Char)0x20,  /* [5504] */
    (xdc_Char)0x3d,  /* [5505] */
    (xdc_Char)0x20,  /* [5506] */
    (xdc_Char)0x30,  /* [5507] */
    (xdc_Char)0x78,  /* [5508] */
    (xdc_Char)0x25,  /* [5509] */
    (xdc_Char)0x30,  /* [5510] */
    (xdc_Char)0x38,  /* [5511] */
    (xdc_Char)0x78,  /* [5512] */
    (xdc_Char)0x2c,  /* [5513] */
    (xdc_Char)0x20,  /* [5514] */
    (xdc_Char)0x6c,  /* [5515] */
    (xdc_Char)0x72,  /* [5516] */
    (xdc_Char)0x20,  /* [5517] */
    (xdc_Char)0x3d,  /* [5518] */
    (xdc_Char)0x20,  /* [5519] */
    (xdc_Char)0x30,  /* [5520] */
    (xdc_Char)0x78,  /* [5521] */
    (xdc_Char)0x25,  /* [5522] */
    (xdc_Char)0x30,  /* [5523] */
    (xdc_Char)0x38,  /* [5524] */
    (xdc_Char)0x78,  /* [5525] */
    (xdc_Char)0x2e,  /* [5526] */
    (xdc_Char)0x0,  /* [5527] */
    (xdc_Char)0x45,  /* [5528] */
    (xdc_Char)0x5f,  /* [5529] */
    (xdc_Char)0x75,  /* [5530] */
    (xdc_Char)0x6e,  /* [5531] */
    (xdc_Char)0x64,  /* [5532] */
    (xdc_Char)0x65,  /* [5533] */
    (xdc_Char)0x66,  /* [5534] */
    (xdc_Char)0x69,  /* [5535] */
    (xdc_Char)0x6e,  /* [5536] */
    (xdc_Char)0x65,  /* [5537] */
    (xdc_Char)0x64,  /* [5538] */
    (xdc_Char)0x49,  /* [5539] */
    (xdc_Char)0x6e,  /* [5540] */
    (xdc_Char)0x73,  /* [5541] */
    (xdc_Char)0x74,  /* [5542] */
    (xdc_Char)0x72,  /* [5543] */
    (xdc_Char)0x75,  /* [5544] */
    (xdc_Char)0x63,  /* [5545] */
    (xdc_Char)0x74,  /* [5546] */
    (xdc_Char)0x69,  /* [5547] */
    (xdc_Char)0x6f,  /* [5548] */
    (xdc_Char)0x6e,  /* [5549] */
    (xdc_Char)0x3a,  /* [5550] */
    (xdc_Char)0x20,  /* [5551] */
    (xdc_Char)0x70,  /* [5552] */
    (xdc_Char)0x63,  /* [5553] */
    (xdc_Char)0x20,  /* [5554] */
    (xdc_Char)0x3d,  /* [5555] */
    (xdc_Char)0x20,  /* [5556] */
    (xdc_Char)0x30,  /* [5557] */
    (xdc_Char)0x78,  /* [5558] */
    (xdc_Char)0x25,  /* [5559] */
    (xdc_Char)0x30,  /* [5560] */
    (xdc_Char)0x38,  /* [5561] */
    (xdc_Char)0x78,  /* [5562] */
    (xdc_Char)0x2c,  /* [5563] */
    (xdc_Char)0x20,  /* [5564] */
    (xdc_Char)0x6c,  /* [5565] */
    (xdc_Char)0x72,  /* [5566] */
    (xdc_Char)0x20,  /* [5567] */
    (xdc_Char)0x3d,  /* [5568] */
    (xdc_Char)0x20,  /* [5569] */
    (xdc_Char)0x30,  /* [5570] */
    (xdc_Char)0x78,  /* [5571] */
    (xdc_Char)0x25,  /* [5572] */
    (xdc_Char)0x30,  /* [5573] */
    (xdc_Char)0x38,  /* [5574] */
    (xdc_Char)0x78,  /* [5575] */
    (xdc_Char)0x2e,  /* [5576] */
    (xdc_Char)0x0,  /* [5577] */
    (xdc_Char)0x45,  /* [5578] */
    (xdc_Char)0x5f,  /* [5579] */
    (xdc_Char)0x70,  /* [5580] */
    (xdc_Char)0x72,  /* [5581] */
    (xdc_Char)0x69,  /* [5582] */
    (xdc_Char)0x6f,  /* [5583] */
    (xdc_Char)0x72,  /* [5584] */
    (xdc_Char)0x69,  /* [5585] */
    (xdc_Char)0x74,  /* [5586] */
    (xdc_Char)0x79,  /* [5587] */
    (xdc_Char)0x3a,  /* [5588] */
    (xdc_Char)0x20,  /* [5589] */
    (xdc_Char)0x54,  /* [5590] */
    (xdc_Char)0x68,  /* [5591] */
    (xdc_Char)0x72,  /* [5592] */
    (xdc_Char)0x65,  /* [5593] */
    (xdc_Char)0x61,  /* [5594] */
    (xdc_Char)0x64,  /* [5595] */
    (xdc_Char)0x20,  /* [5596] */
    (xdc_Char)0x70,  /* [5597] */
    (xdc_Char)0x72,  /* [5598] */
    (xdc_Char)0x69,  /* [5599] */
    (xdc_Char)0x6f,  /* [5600] */
    (xdc_Char)0x72,  /* [5601] */
    (xdc_Char)0x69,  /* [5602] */
    (xdc_Char)0x74,  /* [5603] */
    (xdc_Char)0x79,  /* [5604] */
    (xdc_Char)0x20,  /* [5605] */
    (xdc_Char)0x69,  /* [5606] */
    (xdc_Char)0x73,  /* [5607] */
    (xdc_Char)0x20,  /* [5608] */
    (xdc_Char)0x69,  /* [5609] */
    (xdc_Char)0x6e,  /* [5610] */
    (xdc_Char)0x76,  /* [5611] */
    (xdc_Char)0x61,  /* [5612] */
    (xdc_Char)0x6c,  /* [5613] */
    (xdc_Char)0x69,  /* [5614] */
    (xdc_Char)0x64,  /* [5615] */
    (xdc_Char)0x20,  /* [5616] */
    (xdc_Char)0x25,  /* [5617] */
    (xdc_Char)0x64,  /* [5618] */
    (xdc_Char)0x0,  /* [5619] */
    (xdc_Char)0x45,  /* [5620] */
    (xdc_Char)0x5f,  /* [5621] */
    (xdc_Char)0x69,  /* [5622] */
    (xdc_Char)0x6e,  /* [5623] */
    (xdc_Char)0x76,  /* [5624] */
    (xdc_Char)0x61,  /* [5625] */
    (xdc_Char)0x6c,  /* [5626] */
    (xdc_Char)0x69,  /* [5627] */
    (xdc_Char)0x64,  /* [5628] */
    (xdc_Char)0x54,  /* [5629] */
    (xdc_Char)0x69,  /* [5630] */
    (xdc_Char)0x6d,  /* [5631] */
    (xdc_Char)0x65,  /* [5632] */
    (xdc_Char)0x72,  /* [5633] */
    (xdc_Char)0x3a,  /* [5634] */
    (xdc_Char)0x20,  /* [5635] */
    (xdc_Char)0x49,  /* [5636] */
    (xdc_Char)0x6e,  /* [5637] */
    (xdc_Char)0x76,  /* [5638] */
    (xdc_Char)0x61,  /* [5639] */
    (xdc_Char)0x6c,  /* [5640] */
    (xdc_Char)0x69,  /* [5641] */
    (xdc_Char)0x64,  /* [5642] */
    (xdc_Char)0x20,  /* [5643] */
    (xdc_Char)0x54,  /* [5644] */
    (xdc_Char)0x69,  /* [5645] */
    (xdc_Char)0x6d,  /* [5646] */
    (xdc_Char)0x65,  /* [5647] */
    (xdc_Char)0x72,  /* [5648] */
    (xdc_Char)0x20,  /* [5649] */
    (xdc_Char)0x49,  /* [5650] */
    (xdc_Char)0x64,  /* [5651] */
    (xdc_Char)0x20,  /* [5652] */
    (xdc_Char)0x25,  /* [5653] */
    (xdc_Char)0x64,  /* [5654] */
    (xdc_Char)0x0,  /* [5655] */
    (xdc_Char)0x45,  /* [5656] */
    (xdc_Char)0x5f,  /* [5657] */
    (xdc_Char)0x6e,  /* [5658] */
    (xdc_Char)0x6f,  /* [5659] */
    (xdc_Char)0x74,  /* [5660] */
    (xdc_Char)0x41,  /* [5661] */
    (xdc_Char)0x76,  /* [5662] */
    (xdc_Char)0x61,  /* [5663] */
    (xdc_Char)0x69,  /* [5664] */
    (xdc_Char)0x6c,  /* [5665] */
    (xdc_Char)0x61,  /* [5666] */
    (xdc_Char)0x62,  /* [5667] */
    (xdc_Char)0x6c,  /* [5668] */
    (xdc_Char)0x65,  /* [5669] */
    (xdc_Char)0x3a,  /* [5670] */
    (xdc_Char)0x20,  /* [5671] */
    (xdc_Char)0x54,  /* [5672] */
    (xdc_Char)0x69,  /* [5673] */
    (xdc_Char)0x6d,  /* [5674] */
    (xdc_Char)0x65,  /* [5675] */
    (xdc_Char)0x72,  /* [5676] */
    (xdc_Char)0x20,  /* [5677] */
    (xdc_Char)0x6e,  /* [5678] */
    (xdc_Char)0x6f,  /* [5679] */
    (xdc_Char)0x74,  /* [5680] */
    (xdc_Char)0x20,  /* [5681] */
    (xdc_Char)0x61,  /* [5682] */
    (xdc_Char)0x76,  /* [5683] */
    (xdc_Char)0x61,  /* [5684] */
    (xdc_Char)0x69,  /* [5685] */
    (xdc_Char)0x6c,  /* [5686] */
    (xdc_Char)0x61,  /* [5687] */
    (xdc_Char)0x62,  /* [5688] */
    (xdc_Char)0x6c,  /* [5689] */
    (xdc_Char)0x65,  /* [5690] */
    (xdc_Char)0x20,  /* [5691] */
    (xdc_Char)0x25,  /* [5692] */
    (xdc_Char)0x64,  /* [5693] */
    (xdc_Char)0x0,  /* [5694] */
    (xdc_Char)0x45,  /* [5695] */
    (xdc_Char)0x5f,  /* [5696] */
    (xdc_Char)0x63,  /* [5697] */
    (xdc_Char)0x61,  /* [5698] */
    (xdc_Char)0x6e,  /* [5699] */
    (xdc_Char)0x6e,  /* [5700] */
    (xdc_Char)0x6f,  /* [5701] */
    (xdc_Char)0x74,  /* [5702] */
    (xdc_Char)0x53,  /* [5703] */
    (xdc_Char)0x75,  /* [5704] */
    (xdc_Char)0x70,  /* [5705] */
    (xdc_Char)0x70,  /* [5706] */
    (xdc_Char)0x6f,  /* [5707] */
    (xdc_Char)0x72,  /* [5708] */
    (xdc_Char)0x74,  /* [5709] */
    (xdc_Char)0x3a,  /* [5710] */
    (xdc_Char)0x20,  /* [5711] */
    (xdc_Char)0x54,  /* [5712] */
    (xdc_Char)0x69,  /* [5713] */
    (xdc_Char)0x6d,  /* [5714] */
    (xdc_Char)0x65,  /* [5715] */
    (xdc_Char)0x72,  /* [5716] */
    (xdc_Char)0x20,  /* [5717] */
    (xdc_Char)0x63,  /* [5718] */
    (xdc_Char)0x61,  /* [5719] */
    (xdc_Char)0x6e,  /* [5720] */
    (xdc_Char)0x6e,  /* [5721] */
    (xdc_Char)0x6f,  /* [5722] */
    (xdc_Char)0x74,  /* [5723] */
    (xdc_Char)0x20,  /* [5724] */
    (xdc_Char)0x73,  /* [5725] */
    (xdc_Char)0x75,  /* [5726] */
    (xdc_Char)0x70,  /* [5727] */
    (xdc_Char)0x70,  /* [5728] */
    (xdc_Char)0x6f,  /* [5729] */
    (xdc_Char)0x72,  /* [5730] */
    (xdc_Char)0x74,  /* [5731] */
    (xdc_Char)0x20,  /* [5732] */
    (xdc_Char)0x72,  /* [5733] */
    (xdc_Char)0x65,  /* [5734] */
    (xdc_Char)0x71,  /* [5735] */
    (xdc_Char)0x75,  /* [5736] */
    (xdc_Char)0x65,  /* [5737] */
    (xdc_Char)0x73,  /* [5738] */
    (xdc_Char)0x74,  /* [5739] */
    (xdc_Char)0x65,  /* [5740] */
    (xdc_Char)0x64,  /* [5741] */
    (xdc_Char)0x20,  /* [5742] */
    (xdc_Char)0x70,  /* [5743] */
    (xdc_Char)0x65,  /* [5744] */
    (xdc_Char)0x72,  /* [5745] */
    (xdc_Char)0x69,  /* [5746] */
    (xdc_Char)0x6f,  /* [5747] */
    (xdc_Char)0x64,  /* [5748] */
    (xdc_Char)0x20,  /* [5749] */
    (xdc_Char)0x25,  /* [5750] */
    (xdc_Char)0x64,  /* [5751] */
    (xdc_Char)0x0,  /* [5752] */
    (xdc_Char)0x45,  /* [5753] */
    (xdc_Char)0x5f,  /* [5754] */
    (xdc_Char)0x66,  /* [5755] */
    (xdc_Char)0x72,  /* [5756] */
    (xdc_Char)0x65,  /* [5757] */
    (xdc_Char)0x71,  /* [5758] */
    (xdc_Char)0x4d,  /* [5759] */
    (xdc_Char)0x69,  /* [5760] */
    (xdc_Char)0x73,  /* [5761] */
    (xdc_Char)0x6d,  /* [5762] */
    (xdc_Char)0x61,  /* [5763] */
    (xdc_Char)0x74,  /* [5764] */
    (xdc_Char)0x63,  /* [5765] */
    (xdc_Char)0x68,  /* [5766] */
    (xdc_Char)0x3a,  /* [5767] */
    (xdc_Char)0x20,  /* [5768] */
    (xdc_Char)0x46,  /* [5769] */
    (xdc_Char)0x72,  /* [5770] */
    (xdc_Char)0x65,  /* [5771] */
    (xdc_Char)0x71,  /* [5772] */
    (xdc_Char)0x75,  /* [5773] */
    (xdc_Char)0x65,  /* [5774] */
    (xdc_Char)0x6e,  /* [5775] */
    (xdc_Char)0x63,  /* [5776] */
    (xdc_Char)0x79,  /* [5777] */
    (xdc_Char)0x20,  /* [5778] */
    (xdc_Char)0x6d,  /* [5779] */
    (xdc_Char)0x69,  /* [5780] */
    (xdc_Char)0x73,  /* [5781] */
    (xdc_Char)0x6d,  /* [5782] */
    (xdc_Char)0x61,  /* [5783] */
    (xdc_Char)0x74,  /* [5784] */
    (xdc_Char)0x63,  /* [5785] */
    (xdc_Char)0x68,  /* [5786] */
    (xdc_Char)0x3a,  /* [5787] */
    (xdc_Char)0x20,  /* [5788] */
    (xdc_Char)0x45,  /* [5789] */
    (xdc_Char)0x78,  /* [5790] */
    (xdc_Char)0x70,  /* [5791] */
    (xdc_Char)0x65,  /* [5792] */
    (xdc_Char)0x63,  /* [5793] */
    (xdc_Char)0x74,  /* [5794] */
    (xdc_Char)0x65,  /* [5795] */
    (xdc_Char)0x64,  /* [5796] */
    (xdc_Char)0x20,  /* [5797] */
    (xdc_Char)0x25,  /* [5798] */
    (xdc_Char)0x64,  /* [5799] */
    (xdc_Char)0x20,  /* [5800] */
    (xdc_Char)0x48,  /* [5801] */
    (xdc_Char)0x7a,  /* [5802] */
    (xdc_Char)0x2c,  /* [5803] */
    (xdc_Char)0x20,  /* [5804] */
    (xdc_Char)0x61,  /* [5805] */
    (xdc_Char)0x63,  /* [5806] */
    (xdc_Char)0x74,  /* [5807] */
    (xdc_Char)0x75,  /* [5808] */
    (xdc_Char)0x61,  /* [5809] */
    (xdc_Char)0x6c,  /* [5810] */
    (xdc_Char)0x3a,  /* [5811] */
    (xdc_Char)0x20,  /* [5812] */
    (xdc_Char)0x25,  /* [5813] */
    (xdc_Char)0x64,  /* [5814] */
    (xdc_Char)0x20,  /* [5815] */
    (xdc_Char)0x48,  /* [5816] */
    (xdc_Char)0x7a,  /* [5817] */
    (xdc_Char)0x2e,  /* [5818] */
    (xdc_Char)0x20,  /* [5819] */
    (xdc_Char)0x20,  /* [5820] */
    (xdc_Char)0x59,  /* [5821] */
    (xdc_Char)0x6f,  /* [5822] */
    (xdc_Char)0x75,  /* [5823] */
    (xdc_Char)0x20,  /* [5824] */
    (xdc_Char)0x6e,  /* [5825] */
    (xdc_Char)0x65,  /* [5826] */
    (xdc_Char)0x65,  /* [5827] */
    (xdc_Char)0x64,  /* [5828] */
    (xdc_Char)0x20,  /* [5829] */
    (xdc_Char)0x74,  /* [5830] */
    (xdc_Char)0x6f,  /* [5831] */
    (xdc_Char)0x20,  /* [5832] */
    (xdc_Char)0x6d,  /* [5833] */
    (xdc_Char)0x6f,  /* [5834] */
    (xdc_Char)0x64,  /* [5835] */
    (xdc_Char)0x69,  /* [5836] */
    (xdc_Char)0x66,  /* [5837] */
    (xdc_Char)0x79,  /* [5838] */
    (xdc_Char)0x20,  /* [5839] */
    (xdc_Char)0x54,  /* [5840] */
    (xdc_Char)0x69,  /* [5841] */
    (xdc_Char)0x6d,  /* [5842] */
    (xdc_Char)0x65,  /* [5843] */
    (xdc_Char)0x72,  /* [5844] */
    (xdc_Char)0x2e,  /* [5845] */
    (xdc_Char)0x69,  /* [5846] */
    (xdc_Char)0x6e,  /* [5847] */
    (xdc_Char)0x74,  /* [5848] */
    (xdc_Char)0x46,  /* [5849] */
    (xdc_Char)0x72,  /* [5850] */
    (xdc_Char)0x65,  /* [5851] */
    (xdc_Char)0x71,  /* [5852] */
    (xdc_Char)0x2e,  /* [5853] */
    (xdc_Char)0x6c,  /* [5854] */
    (xdc_Char)0x6f,  /* [5855] */
    (xdc_Char)0x20,  /* [5856] */
    (xdc_Char)0x74,  /* [5857] */
    (xdc_Char)0x6f,  /* [5858] */
    (xdc_Char)0x20,  /* [5859] */
    (xdc_Char)0x6d,  /* [5860] */
    (xdc_Char)0x61,  /* [5861] */
    (xdc_Char)0x74,  /* [5862] */
    (xdc_Char)0x63,  /* [5863] */
    (xdc_Char)0x68,  /* [5864] */
    (xdc_Char)0x20,  /* [5865] */
    (xdc_Char)0x74,  /* [5866] */
    (xdc_Char)0x68,  /* [5867] */
    (xdc_Char)0x65,  /* [5868] */
    (xdc_Char)0x20,  /* [5869] */
    (xdc_Char)0x61,  /* [5870] */
    (xdc_Char)0x63,  /* [5871] */
    (xdc_Char)0x74,  /* [5872] */
    (xdc_Char)0x75,  /* [5873] */
    (xdc_Char)0x61,  /* [5874] */
    (xdc_Char)0x6c,  /* [5875] */
    (xdc_Char)0x20,  /* [5876] */
    (xdc_Char)0x66,  /* [5877] */
    (xdc_Char)0x72,  /* [5878] */
    (xdc_Char)0x65,  /* [5879] */
    (xdc_Char)0x71,  /* [5880] */
    (xdc_Char)0x75,  /* [5881] */
    (xdc_Char)0x65,  /* [5882] */
    (xdc_Char)0x6e,  /* [5883] */
    (xdc_Char)0x63,  /* [5884] */
    (xdc_Char)0x79,  /* [5885] */
    (xdc_Char)0x2e,  /* [5886] */
    (xdc_Char)0x0,  /* [5887] */
    (xdc_Char)0x72,  /* [5888] */
    (xdc_Char)0x65,  /* [5889] */
    (xdc_Char)0x71,  /* [5890] */
    (xdc_Char)0x75,  /* [5891] */
    (xdc_Char)0x65,  /* [5892] */
    (xdc_Char)0x73,  /* [5893] */
    (xdc_Char)0x74,  /* [5894] */
    (xdc_Char)0x65,  /* [5895] */
    (xdc_Char)0x64,  /* [5896] */
    (xdc_Char)0x20,  /* [5897] */
    (xdc_Char)0x73,  /* [5898] */
    (xdc_Char)0x69,  /* [5899] */
    (xdc_Char)0x7a,  /* [5900] */
    (xdc_Char)0x65,  /* [5901] */
    (xdc_Char)0x20,  /* [5902] */
    (xdc_Char)0x69,  /* [5903] */
    (xdc_Char)0x73,  /* [5904] */
    (xdc_Char)0x20,  /* [5905] */
    (xdc_Char)0x74,  /* [5906] */
    (xdc_Char)0x6f,  /* [5907] */
    (xdc_Char)0x6f,  /* [5908] */
    (xdc_Char)0x20,  /* [5909] */
    (xdc_Char)0x62,  /* [5910] */
    (xdc_Char)0x69,  /* [5911] */
    (xdc_Char)0x67,  /* [5912] */
    (xdc_Char)0x3a,  /* [5913] */
    (xdc_Char)0x20,  /* [5914] */
    (xdc_Char)0x68,  /* [5915] */
    (xdc_Char)0x61,  /* [5916] */
    (xdc_Char)0x6e,  /* [5917] */
    (xdc_Char)0x64,  /* [5918] */
    (xdc_Char)0x6c,  /* [5919] */
    (xdc_Char)0x65,  /* [5920] */
    (xdc_Char)0x3d,  /* [5921] */
    (xdc_Char)0x30,  /* [5922] */
    (xdc_Char)0x78,  /* [5923] */
    (xdc_Char)0x25,  /* [5924] */
    (xdc_Char)0x78,  /* [5925] */
    (xdc_Char)0x2c,  /* [5926] */
    (xdc_Char)0x20,  /* [5927] */
    (xdc_Char)0x73,  /* [5928] */
    (xdc_Char)0x69,  /* [5929] */
    (xdc_Char)0x7a,  /* [5930] */
    (xdc_Char)0x65,  /* [5931] */
    (xdc_Char)0x3d,  /* [5932] */
    (xdc_Char)0x25,  /* [5933] */
    (xdc_Char)0x75,  /* [5934] */
    (xdc_Char)0x0,  /* [5935] */
    (xdc_Char)0x6f,  /* [5936] */
    (xdc_Char)0x75,  /* [5937] */
    (xdc_Char)0x74,  /* [5938] */
    (xdc_Char)0x20,  /* [5939] */
    (xdc_Char)0x6f,  /* [5940] */
    (xdc_Char)0x66,  /* [5941] */
    (xdc_Char)0x20,  /* [5942] */
    (xdc_Char)0x6d,  /* [5943] */
    (xdc_Char)0x65,  /* [5944] */
    (xdc_Char)0x6d,  /* [5945] */
    (xdc_Char)0x6f,  /* [5946] */
    (xdc_Char)0x72,  /* [5947] */
    (xdc_Char)0x79,  /* [5948] */
    (xdc_Char)0x3a,  /* [5949] */
    (xdc_Char)0x20,  /* [5950] */
    (xdc_Char)0x68,  /* [5951] */
    (xdc_Char)0x61,  /* [5952] */
    (xdc_Char)0x6e,  /* [5953] */
    (xdc_Char)0x64,  /* [5954] */
    (xdc_Char)0x6c,  /* [5955] */
    (xdc_Char)0x65,  /* [5956] */
    (xdc_Char)0x3d,  /* [5957] */
    (xdc_Char)0x30,  /* [5958] */
    (xdc_Char)0x78,  /* [5959] */
    (xdc_Char)0x25,  /* [5960] */
    (xdc_Char)0x78,  /* [5961] */
    (xdc_Char)0x2c,  /* [5962] */
    (xdc_Char)0x20,  /* [5963] */
    (xdc_Char)0x73,  /* [5964] */
    (xdc_Char)0x69,  /* [5965] */
    (xdc_Char)0x7a,  /* [5966] */
    (xdc_Char)0x65,  /* [5967] */
    (xdc_Char)0x3d,  /* [5968] */
    (xdc_Char)0x25,  /* [5969] */
    (xdc_Char)0x75,  /* [5970] */
    (xdc_Char)0x0,  /* [5971] */
    (xdc_Char)0x3c,  /* [5972] */
    (xdc_Char)0x2d,  /* [5973] */
    (xdc_Char)0x2d,  /* [5974] */
    (xdc_Char)0x20,  /* [5975] */
    (xdc_Char)0x63,  /* [5976] */
    (xdc_Char)0x6f,  /* [5977] */
    (xdc_Char)0x6e,  /* [5978] */
    (xdc_Char)0x73,  /* [5979] */
    (xdc_Char)0x74,  /* [5980] */
    (xdc_Char)0x72,  /* [5981] */
    (xdc_Char)0x75,  /* [5982] */
    (xdc_Char)0x63,  /* [5983] */
    (xdc_Char)0x74,  /* [5984] */
    (xdc_Char)0x3a,  /* [5985] */
    (xdc_Char)0x20,  /* [5986] */
    (xdc_Char)0x25,  /* [5987] */
    (xdc_Char)0x70,  /* [5988] */
    (xdc_Char)0x28,  /* [5989] */
    (xdc_Char)0x27,  /* [5990] */
    (xdc_Char)0x25,  /* [5991] */
    (xdc_Char)0x73,  /* [5992] */
    (xdc_Char)0x27,  /* [5993] */
    (xdc_Char)0x29,  /* [5994] */
    (xdc_Char)0x0,  /* [5995] */
    (xdc_Char)0x3c,  /* [5996] */
    (xdc_Char)0x2d,  /* [5997] */
    (xdc_Char)0x2d,  /* [5998] */
    (xdc_Char)0x20,  /* [5999] */
    (xdc_Char)0x63,  /* [6000] */
    (xdc_Char)0x72,  /* [6001] */
    (xdc_Char)0x65,  /* [6002] */
    (xdc_Char)0x61,  /* [6003] */
    (xdc_Char)0x74,  /* [6004] */
    (xdc_Char)0x65,  /* [6005] */
    (xdc_Char)0x3a,  /* [6006] */
    (xdc_Char)0x20,  /* [6007] */
    (xdc_Char)0x25,  /* [6008] */
    (xdc_Char)0x70,  /* [6009] */
    (xdc_Char)0x28,  /* [6010] */
    (xdc_Char)0x27,  /* [6011] */
    (xdc_Char)0x25,  /* [6012] */
    (xdc_Char)0x73,  /* [6013] */
    (xdc_Char)0x27,  /* [6014] */
    (xdc_Char)0x29,  /* [6015] */
    (xdc_Char)0x0,  /* [6016] */
    (xdc_Char)0x2d,  /* [6017] */
    (xdc_Char)0x2d,  /* [6018] */
    (xdc_Char)0x3e,  /* [6019] */
    (xdc_Char)0x20,  /* [6020] */
    (xdc_Char)0x64,  /* [6021] */
    (xdc_Char)0x65,  /* [6022] */
    (xdc_Char)0x73,  /* [6023] */
    (xdc_Char)0x74,  /* [6024] */
    (xdc_Char)0x72,  /* [6025] */
    (xdc_Char)0x75,  /* [6026] */
    (xdc_Char)0x63,  /* [6027] */
    (xdc_Char)0x74,  /* [6028] */
    (xdc_Char)0x3a,  /* [6029] */
    (xdc_Char)0x20,  /* [6030] */
    (xdc_Char)0x28,  /* [6031] */
    (xdc_Char)0x25,  /* [6032] */
    (xdc_Char)0x70,  /* [6033] */
    (xdc_Char)0x29,  /* [6034] */
    (xdc_Char)0x0,  /* [6035] */
    (xdc_Char)0x2d,  /* [6036] */
    (xdc_Char)0x2d,  /* [6037] */
    (xdc_Char)0x3e,  /* [6038] */
    (xdc_Char)0x20,  /* [6039] */
    (xdc_Char)0x64,  /* [6040] */
    (xdc_Char)0x65,  /* [6041] */
    (xdc_Char)0x6c,  /* [6042] */
    (xdc_Char)0x65,  /* [6043] */
    (xdc_Char)0x74,  /* [6044] */
    (xdc_Char)0x65,  /* [6045] */
    (xdc_Char)0x3a,  /* [6046] */
    (xdc_Char)0x20,  /* [6047] */
    (xdc_Char)0x28,  /* [6048] */
    (xdc_Char)0x25,  /* [6049] */
    (xdc_Char)0x70,  /* [6050] */
    (xdc_Char)0x29,  /* [6051] */
    (xdc_Char)0x0,  /* [6052] */
    (xdc_Char)0x45,  /* [6053] */
    (xdc_Char)0x52,  /* [6054] */
    (xdc_Char)0x52,  /* [6055] */
    (xdc_Char)0x4f,  /* [6056] */
    (xdc_Char)0x52,  /* [6057] */
    (xdc_Char)0x3a,  /* [6058] */
    (xdc_Char)0x20,  /* [6059] */
    (xdc_Char)0x25,  /* [6060] */
    (xdc_Char)0x24,  /* [6061] */
    (xdc_Char)0x46,  /* [6062] */
    (xdc_Char)0x25,  /* [6063] */
    (xdc_Char)0x24,  /* [6064] */
    (xdc_Char)0x53,  /* [6065] */
    (xdc_Char)0x0,  /* [6066] */
    (xdc_Char)0x57,  /* [6067] */
    (xdc_Char)0x41,  /* [6068] */
    (xdc_Char)0x52,  /* [6069] */
    (xdc_Char)0x4e,  /* [6070] */
    (xdc_Char)0x49,  /* [6071] */
    (xdc_Char)0x4e,  /* [6072] */
    (xdc_Char)0x47,  /* [6073] */
    (xdc_Char)0x3a,  /* [6074] */
    (xdc_Char)0x20,  /* [6075] */
    (xdc_Char)0x25,  /* [6076] */
    (xdc_Char)0x24,  /* [6077] */
    (xdc_Char)0x46,  /* [6078] */
    (xdc_Char)0x25,  /* [6079] */
    (xdc_Char)0x24,  /* [6080] */
    (xdc_Char)0x53,  /* [6081] */
    (xdc_Char)0x0,  /* [6082] */
    (xdc_Char)0x25,  /* [6083] */
    (xdc_Char)0x24,  /* [6084] */
    (xdc_Char)0x46,  /* [6085] */
    (xdc_Char)0x25,  /* [6086] */
    (xdc_Char)0x24,  /* [6087] */
    (xdc_Char)0x53,  /* [6088] */
    (xdc_Char)0x0,  /* [6089] */
    (xdc_Char)0x53,  /* [6090] */
    (xdc_Char)0x74,  /* [6091] */
    (xdc_Char)0x61,  /* [6092] */
    (xdc_Char)0x72,  /* [6093] */
    (xdc_Char)0x74,  /* [6094] */
    (xdc_Char)0x3a,  /* [6095] */
    (xdc_Char)0x20,  /* [6096] */
    (xdc_Char)0x25,  /* [6097] */
    (xdc_Char)0x24,  /* [6098] */
    (xdc_Char)0x53,  /* [6099] */
    (xdc_Char)0x0,  /* [6100] */
    (xdc_Char)0x53,  /* [6101] */
    (xdc_Char)0x74,  /* [6102] */
    (xdc_Char)0x6f,  /* [6103] */
    (xdc_Char)0x70,  /* [6104] */
    (xdc_Char)0x3a,  /* [6105] */
    (xdc_Char)0x20,  /* [6106] */
    (xdc_Char)0x25,  /* [6107] */
    (xdc_Char)0x24,  /* [6108] */
    (xdc_Char)0x53,  /* [6109] */
    (xdc_Char)0x0,  /* [6110] */
    (xdc_Char)0x53,  /* [6111] */
    (xdc_Char)0x74,  /* [6112] */
    (xdc_Char)0x61,  /* [6113] */
    (xdc_Char)0x72,  /* [6114] */
    (xdc_Char)0x74,  /* [6115] */
    (xdc_Char)0x49,  /* [6116] */
    (xdc_Char)0x6e,  /* [6117] */
    (xdc_Char)0x73,  /* [6118] */
    (xdc_Char)0x74,  /* [6119] */
    (xdc_Char)0x61,  /* [6120] */
    (xdc_Char)0x6e,  /* [6121] */
    (xdc_Char)0x63,  /* [6122] */
    (xdc_Char)0x65,  /* [6123] */
    (xdc_Char)0x3a,  /* [6124] */
    (xdc_Char)0x20,  /* [6125] */
    (xdc_Char)0x25,  /* [6126] */
    (xdc_Char)0x24,  /* [6127] */
    (xdc_Char)0x53,  /* [6128] */
    (xdc_Char)0x0,  /* [6129] */
    (xdc_Char)0x53,  /* [6130] */
    (xdc_Char)0x74,  /* [6131] */
    (xdc_Char)0x6f,  /* [6132] */
    (xdc_Char)0x70,  /* [6133] */
    (xdc_Char)0x49,  /* [6134] */
    (xdc_Char)0x6e,  /* [6135] */
    (xdc_Char)0x73,  /* [6136] */
    (xdc_Char)0x74,  /* [6137] */
    (xdc_Char)0x61,  /* [6138] */
    (xdc_Char)0x6e,  /* [6139] */
    (xdc_Char)0x63,  /* [6140] */
    (xdc_Char)0x65,  /* [6141] */
    (xdc_Char)0x3a,  /* [6142] */
    (xdc_Char)0x20,  /* [6143] */
    (xdc_Char)0x25,  /* [6144] */
    (xdc_Char)0x24,  /* [6145] */
    (xdc_Char)0x53,  /* [6146] */
    (xdc_Char)0x0,  /* [6147] */
    (xdc_Char)0x4c,  /* [6148] */
    (xdc_Char)0x57,  /* [6149] */
    (xdc_Char)0x5f,  /* [6150] */
    (xdc_Char)0x64,  /* [6151] */
    (xdc_Char)0x65,  /* [6152] */
    (xdc_Char)0x6c,  /* [6153] */
    (xdc_Char)0x61,  /* [6154] */
    (xdc_Char)0x79,  /* [6155] */
    (xdc_Char)0x65,  /* [6156] */
    (xdc_Char)0x64,  /* [6157] */
    (xdc_Char)0x3a,  /* [6158] */
    (xdc_Char)0x20,  /* [6159] */
    (xdc_Char)0x64,  /* [6160] */
    (xdc_Char)0x65,  /* [6161] */
    (xdc_Char)0x6c,  /* [6162] */
    (xdc_Char)0x61,  /* [6163] */
    (xdc_Char)0x79,  /* [6164] */
    (xdc_Char)0x3a,  /* [6165] */
    (xdc_Char)0x20,  /* [6166] */
    (xdc_Char)0x25,  /* [6167] */
    (xdc_Char)0x64,  /* [6168] */
    (xdc_Char)0x0,  /* [6169] */
    (xdc_Char)0x4c,  /* [6170] */
    (xdc_Char)0x4d,  /* [6171] */
    (xdc_Char)0x5f,  /* [6172] */
    (xdc_Char)0x74,  /* [6173] */
    (xdc_Char)0x69,  /* [6174] */
    (xdc_Char)0x63,  /* [6175] */
    (xdc_Char)0x6b,  /* [6176] */
    (xdc_Char)0x3a,  /* [6177] */
    (xdc_Char)0x20,  /* [6178] */
    (xdc_Char)0x74,  /* [6179] */
    (xdc_Char)0x69,  /* [6180] */
    (xdc_Char)0x63,  /* [6181] */
    (xdc_Char)0x6b,  /* [6182] */
    (xdc_Char)0x3a,  /* [6183] */
    (xdc_Char)0x20,  /* [6184] */
    (xdc_Char)0x25,  /* [6185] */
    (xdc_Char)0x64,  /* [6186] */
    (xdc_Char)0x0,  /* [6187] */
    (xdc_Char)0x4c,  /* [6188] */
    (xdc_Char)0x4d,  /* [6189] */
    (xdc_Char)0x5f,  /* [6190] */
    (xdc_Char)0x62,  /* [6191] */
    (xdc_Char)0x65,  /* [6192] */
    (xdc_Char)0x67,  /* [6193] */
    (xdc_Char)0x69,  /* [6194] */
    (xdc_Char)0x6e,  /* [6195] */
    (xdc_Char)0x3a,  /* [6196] */
    (xdc_Char)0x20,  /* [6197] */
    (xdc_Char)0x63,  /* [6198] */
    (xdc_Char)0x6c,  /* [6199] */
    (xdc_Char)0x6b,  /* [6200] */
    (xdc_Char)0x3a,  /* [6201] */
    (xdc_Char)0x20,  /* [6202] */
    (xdc_Char)0x30,  /* [6203] */
    (xdc_Char)0x78,  /* [6204] */
    (xdc_Char)0x25,  /* [6205] */
    (xdc_Char)0x78,  /* [6206] */
    (xdc_Char)0x2c,  /* [6207] */
    (xdc_Char)0x20,  /* [6208] */
    (xdc_Char)0x66,  /* [6209] */
    (xdc_Char)0x75,  /* [6210] */
    (xdc_Char)0x6e,  /* [6211] */
    (xdc_Char)0x63,  /* [6212] */
    (xdc_Char)0x3a,  /* [6213] */
    (xdc_Char)0x20,  /* [6214] */
    (xdc_Char)0x30,  /* [6215] */
    (xdc_Char)0x78,  /* [6216] */
    (xdc_Char)0x25,  /* [6217] */
    (xdc_Char)0x78,  /* [6218] */
    (xdc_Char)0x0,  /* [6219] */
    (xdc_Char)0x4c,  /* [6220] */
    (xdc_Char)0x4d,  /* [6221] */
    (xdc_Char)0x5f,  /* [6222] */
    (xdc_Char)0x70,  /* [6223] */
    (xdc_Char)0x6f,  /* [6224] */
    (xdc_Char)0x73,  /* [6225] */
    (xdc_Char)0x74,  /* [6226] */
    (xdc_Char)0x3a,  /* [6227] */
    (xdc_Char)0x20,  /* [6228] */
    (xdc_Char)0x73,  /* [6229] */
    (xdc_Char)0x65,  /* [6230] */
    (xdc_Char)0x6d,  /* [6231] */
    (xdc_Char)0x3a,  /* [6232] */
    (xdc_Char)0x20,  /* [6233] */
    (xdc_Char)0x30,  /* [6234] */
    (xdc_Char)0x78,  /* [6235] */
    (xdc_Char)0x25,  /* [6236] */
    (xdc_Char)0x78,  /* [6237] */
    (xdc_Char)0x2c,  /* [6238] */
    (xdc_Char)0x20,  /* [6239] */
    (xdc_Char)0x63,  /* [6240] */
    (xdc_Char)0x6f,  /* [6241] */
    (xdc_Char)0x75,  /* [6242] */
    (xdc_Char)0x6e,  /* [6243] */
    (xdc_Char)0x74,  /* [6244] */
    (xdc_Char)0x3a,  /* [6245] */
    (xdc_Char)0x20,  /* [6246] */
    (xdc_Char)0x25,  /* [6247] */
    (xdc_Char)0x64,  /* [6248] */
    (xdc_Char)0x0,  /* [6249] */
    (xdc_Char)0x4c,  /* [6250] */
    (xdc_Char)0x4d,  /* [6251] */
    (xdc_Char)0x5f,  /* [6252] */
    (xdc_Char)0x70,  /* [6253] */
    (xdc_Char)0x65,  /* [6254] */
    (xdc_Char)0x6e,  /* [6255] */
    (xdc_Char)0x64,  /* [6256] */
    (xdc_Char)0x3a,  /* [6257] */
    (xdc_Char)0x20,  /* [6258] */
    (xdc_Char)0x73,  /* [6259] */
    (xdc_Char)0x65,  /* [6260] */
    (xdc_Char)0x6d,  /* [6261] */
    (xdc_Char)0x3a,  /* [6262] */
    (xdc_Char)0x20,  /* [6263] */
    (xdc_Char)0x30,  /* [6264] */
    (xdc_Char)0x78,  /* [6265] */
    (xdc_Char)0x25,  /* [6266] */
    (xdc_Char)0x78,  /* [6267] */
    (xdc_Char)0x2c,  /* [6268] */
    (xdc_Char)0x20,  /* [6269] */
    (xdc_Char)0x63,  /* [6270] */
    (xdc_Char)0x6f,  /* [6271] */
    (xdc_Char)0x75,  /* [6272] */
    (xdc_Char)0x6e,  /* [6273] */
    (xdc_Char)0x74,  /* [6274] */
    (xdc_Char)0x3a,  /* [6275] */
    (xdc_Char)0x20,  /* [6276] */
    (xdc_Char)0x25,  /* [6277] */
    (xdc_Char)0x64,  /* [6278] */
    (xdc_Char)0x2c,  /* [6279] */
    (xdc_Char)0x20,  /* [6280] */
    (xdc_Char)0x74,  /* [6281] */
    (xdc_Char)0x69,  /* [6282] */
    (xdc_Char)0x6d,  /* [6283] */
    (xdc_Char)0x65,  /* [6284] */
    (xdc_Char)0x6f,  /* [6285] */
    (xdc_Char)0x75,  /* [6286] */
    (xdc_Char)0x74,  /* [6287] */
    (xdc_Char)0x3a,  /* [6288] */
    (xdc_Char)0x20,  /* [6289] */
    (xdc_Char)0x25,  /* [6290] */
    (xdc_Char)0x64,  /* [6291] */
    (xdc_Char)0x0,  /* [6292] */
    (xdc_Char)0x4c,  /* [6293] */
    (xdc_Char)0x4d,  /* [6294] */
    (xdc_Char)0x5f,  /* [6295] */
    (xdc_Char)0x62,  /* [6296] */
    (xdc_Char)0x65,  /* [6297] */
    (xdc_Char)0x67,  /* [6298] */
    (xdc_Char)0x69,  /* [6299] */
    (xdc_Char)0x6e,  /* [6300] */
    (xdc_Char)0x3a,  /* [6301] */
    (xdc_Char)0x20,  /* [6302] */
    (xdc_Char)0x73,  /* [6303] */
    (xdc_Char)0x77,  /* [6304] */
    (xdc_Char)0x69,  /* [6305] */
    (xdc_Char)0x3a,  /* [6306] */
    (xdc_Char)0x20,  /* [6307] */
    (xdc_Char)0x30,  /* [6308] */
    (xdc_Char)0x78,  /* [6309] */
    (xdc_Char)0x25,  /* [6310] */
    (xdc_Char)0x78,  /* [6311] */
    (xdc_Char)0x2c,  /* [6312] */
    (xdc_Char)0x20,  /* [6313] */
    (xdc_Char)0x66,  /* [6314] */
    (xdc_Char)0x75,  /* [6315] */
    (xdc_Char)0x6e,  /* [6316] */
    (xdc_Char)0x63,  /* [6317] */
    (xdc_Char)0x3a,  /* [6318] */
    (xdc_Char)0x20,  /* [6319] */
    (xdc_Char)0x30,  /* [6320] */
    (xdc_Char)0x78,  /* [6321] */
    (xdc_Char)0x25,  /* [6322] */
    (xdc_Char)0x78,  /* [6323] */
    (xdc_Char)0x2c,  /* [6324] */
    (xdc_Char)0x20,  /* [6325] */
    (xdc_Char)0x70,  /* [6326] */
    (xdc_Char)0x72,  /* [6327] */
    (xdc_Char)0x65,  /* [6328] */
    (xdc_Char)0x54,  /* [6329] */
    (xdc_Char)0x68,  /* [6330] */
    (xdc_Char)0x72,  /* [6331] */
    (xdc_Char)0x65,  /* [6332] */
    (xdc_Char)0x61,  /* [6333] */
    (xdc_Char)0x64,  /* [6334] */
    (xdc_Char)0x3a,  /* [6335] */
    (xdc_Char)0x20,  /* [6336] */
    (xdc_Char)0x25,  /* [6337] */
    (xdc_Char)0x64,  /* [6338] */
    (xdc_Char)0x0,  /* [6339] */
    (xdc_Char)0x4c,  /* [6340] */
    (xdc_Char)0x44,  /* [6341] */
    (xdc_Char)0x5f,  /* [6342] */
    (xdc_Char)0x65,  /* [6343] */
    (xdc_Char)0x6e,  /* [6344] */
    (xdc_Char)0x64,  /* [6345] */
    (xdc_Char)0x3a,  /* [6346] */
    (xdc_Char)0x20,  /* [6347] */
    (xdc_Char)0x73,  /* [6348] */
    (xdc_Char)0x77,  /* [6349] */
    (xdc_Char)0x69,  /* [6350] */
    (xdc_Char)0x3a,  /* [6351] */
    (xdc_Char)0x20,  /* [6352] */
    (xdc_Char)0x30,  /* [6353] */
    (xdc_Char)0x78,  /* [6354] */
    (xdc_Char)0x25,  /* [6355] */
    (xdc_Char)0x78,  /* [6356] */
    (xdc_Char)0x0,  /* [6357] */
    (xdc_Char)0x4c,  /* [6358] */
    (xdc_Char)0x4d,  /* [6359] */
    (xdc_Char)0x5f,  /* [6360] */
    (xdc_Char)0x70,  /* [6361] */
    (xdc_Char)0x6f,  /* [6362] */
    (xdc_Char)0x73,  /* [6363] */
    (xdc_Char)0x74,  /* [6364] */
    (xdc_Char)0x3a,  /* [6365] */
    (xdc_Char)0x20,  /* [6366] */
    (xdc_Char)0x73,  /* [6367] */
    (xdc_Char)0x77,  /* [6368] */
    (xdc_Char)0x69,  /* [6369] */
    (xdc_Char)0x3a,  /* [6370] */
    (xdc_Char)0x20,  /* [6371] */
    (xdc_Char)0x30,  /* [6372] */
    (xdc_Char)0x78,  /* [6373] */
    (xdc_Char)0x25,  /* [6374] */
    (xdc_Char)0x78,  /* [6375] */
    (xdc_Char)0x2c,  /* [6376] */
    (xdc_Char)0x20,  /* [6377] */
    (xdc_Char)0x66,  /* [6378] */
    (xdc_Char)0x75,  /* [6379] */
    (xdc_Char)0x6e,  /* [6380] */
    (xdc_Char)0x63,  /* [6381] */
    (xdc_Char)0x3a,  /* [6382] */
    (xdc_Char)0x20,  /* [6383] */
    (xdc_Char)0x30,  /* [6384] */
    (xdc_Char)0x78,  /* [6385] */
    (xdc_Char)0x25,  /* [6386] */
    (xdc_Char)0x78,  /* [6387] */
    (xdc_Char)0x2c,  /* [6388] */
    (xdc_Char)0x20,  /* [6389] */
    (xdc_Char)0x70,  /* [6390] */
    (xdc_Char)0x72,  /* [6391] */
    (xdc_Char)0x69,  /* [6392] */
    (xdc_Char)0x3a,  /* [6393] */
    (xdc_Char)0x20,  /* [6394] */
    (xdc_Char)0x25,  /* [6395] */
    (xdc_Char)0x64,  /* [6396] */
    (xdc_Char)0x0,  /* [6397] */
    (xdc_Char)0x4c,  /* [6398] */
    (xdc_Char)0x4d,  /* [6399] */
    (xdc_Char)0x5f,  /* [6400] */
    (xdc_Char)0x73,  /* [6401] */
    (xdc_Char)0x77,  /* [6402] */
    (xdc_Char)0x69,  /* [6403] */
    (xdc_Char)0x74,  /* [6404] */
    (xdc_Char)0x63,  /* [6405] */
    (xdc_Char)0x68,  /* [6406] */
    (xdc_Char)0x3a,  /* [6407] */
    (xdc_Char)0x20,  /* [6408] */
    (xdc_Char)0x6f,  /* [6409] */
    (xdc_Char)0x6c,  /* [6410] */
    (xdc_Char)0x64,  /* [6411] */
    (xdc_Char)0x74,  /* [6412] */
    (xdc_Char)0x73,  /* [6413] */
    (xdc_Char)0x6b,  /* [6414] */
    (xdc_Char)0x3a,  /* [6415] */
    (xdc_Char)0x20,  /* [6416] */
    (xdc_Char)0x30,  /* [6417] */
    (xdc_Char)0x78,  /* [6418] */
    (xdc_Char)0x25,  /* [6419] */
    (xdc_Char)0x78,  /* [6420] */
    (xdc_Char)0x2c,  /* [6421] */
    (xdc_Char)0x20,  /* [6422] */
    (xdc_Char)0x6f,  /* [6423] */
    (xdc_Char)0x6c,  /* [6424] */
    (xdc_Char)0x64,  /* [6425] */
    (xdc_Char)0x66,  /* [6426] */
    (xdc_Char)0x75,  /* [6427] */
    (xdc_Char)0x6e,  /* [6428] */
    (xdc_Char)0x63,  /* [6429] */
    (xdc_Char)0x3a,  /* [6430] */
    (xdc_Char)0x20,  /* [6431] */
    (xdc_Char)0x30,  /* [6432] */
    (xdc_Char)0x78,  /* [6433] */
    (xdc_Char)0x25,  /* [6434] */
    (xdc_Char)0x78,  /* [6435] */
    (xdc_Char)0x2c,  /* [6436] */
    (xdc_Char)0x20,  /* [6437] */
    (xdc_Char)0x6e,  /* [6438] */
    (xdc_Char)0x65,  /* [6439] */
    (xdc_Char)0x77,  /* [6440] */
    (xdc_Char)0x74,  /* [6441] */
    (xdc_Char)0x73,  /* [6442] */
    (xdc_Char)0x6b,  /* [6443] */
    (xdc_Char)0x3a,  /* [6444] */
    (xdc_Char)0x20,  /* [6445] */
    (xdc_Char)0x30,  /* [6446] */
    (xdc_Char)0x78,  /* [6447] */
    (xdc_Char)0x25,  /* [6448] */
    (xdc_Char)0x78,  /* [6449] */
    (xdc_Char)0x2c,  /* [6450] */
    (xdc_Char)0x20,  /* [6451] */
    (xdc_Char)0x6e,  /* [6452] */
    (xdc_Char)0x65,  /* [6453] */
    (xdc_Char)0x77,  /* [6454] */
    (xdc_Char)0x66,  /* [6455] */
    (xdc_Char)0x75,  /* [6456] */
    (xdc_Char)0x6e,  /* [6457] */
    (xdc_Char)0x63,  /* [6458] */
    (xdc_Char)0x3a,  /* [6459] */
    (xdc_Char)0x20,  /* [6460] */
    (xdc_Char)0x30,  /* [6461] */
    (xdc_Char)0x78,  /* [6462] */
    (xdc_Char)0x25,  /* [6463] */
    (xdc_Char)0x78,  /* [6464] */
    (xdc_Char)0x0,  /* [6465] */
    (xdc_Char)0x4c,  /* [6466] */
    (xdc_Char)0x4d,  /* [6467] */
    (xdc_Char)0x5f,  /* [6468] */
    (xdc_Char)0x73,  /* [6469] */
    (xdc_Char)0x6c,  /* [6470] */
    (xdc_Char)0x65,  /* [6471] */
    (xdc_Char)0x65,  /* [6472] */
    (xdc_Char)0x70,  /* [6473] */
    (xdc_Char)0x3a,  /* [6474] */
    (xdc_Char)0x20,  /* [6475] */
    (xdc_Char)0x74,  /* [6476] */
    (xdc_Char)0x73,  /* [6477] */
    (xdc_Char)0x6b,  /* [6478] */
    (xdc_Char)0x3a,  /* [6479] */
    (xdc_Char)0x20,  /* [6480] */
    (xdc_Char)0x30,  /* [6481] */
    (xdc_Char)0x78,  /* [6482] */
    (xdc_Char)0x25,  /* [6483] */
    (xdc_Char)0x78,  /* [6484] */
    (xdc_Char)0x2c,  /* [6485] */
    (xdc_Char)0x20,  /* [6486] */
    (xdc_Char)0x66,  /* [6487] */
    (xdc_Char)0x75,  /* [6488] */
    (xdc_Char)0x6e,  /* [6489] */
    (xdc_Char)0x63,  /* [6490] */
    (xdc_Char)0x3a,  /* [6491] */
    (xdc_Char)0x20,  /* [6492] */
    (xdc_Char)0x30,  /* [6493] */
    (xdc_Char)0x78,  /* [6494] */
    (xdc_Char)0x25,  /* [6495] */
    (xdc_Char)0x78,  /* [6496] */
    (xdc_Char)0x2c,  /* [6497] */
    (xdc_Char)0x20,  /* [6498] */
    (xdc_Char)0x74,  /* [6499] */
    (xdc_Char)0x69,  /* [6500] */
    (xdc_Char)0x6d,  /* [6501] */
    (xdc_Char)0x65,  /* [6502] */
    (xdc_Char)0x6f,  /* [6503] */
    (xdc_Char)0x75,  /* [6504] */
    (xdc_Char)0x74,  /* [6505] */
    (xdc_Char)0x3a,  /* [6506] */
    (xdc_Char)0x20,  /* [6507] */
    (xdc_Char)0x25,  /* [6508] */
    (xdc_Char)0x64,  /* [6509] */
    (xdc_Char)0x0,  /* [6510] */
    (xdc_Char)0x4c,  /* [6511] */
    (xdc_Char)0x44,  /* [6512] */
    (xdc_Char)0x5f,  /* [6513] */
    (xdc_Char)0x72,  /* [6514] */
    (xdc_Char)0x65,  /* [6515] */
    (xdc_Char)0x61,  /* [6516] */
    (xdc_Char)0x64,  /* [6517] */
    (xdc_Char)0x79,  /* [6518] */
    (xdc_Char)0x3a,  /* [6519] */
    (xdc_Char)0x20,  /* [6520] */
    (xdc_Char)0x74,  /* [6521] */
    (xdc_Char)0x73,  /* [6522] */
    (xdc_Char)0x6b,  /* [6523] */
    (xdc_Char)0x3a,  /* [6524] */
    (xdc_Char)0x20,  /* [6525] */
    (xdc_Char)0x30,  /* [6526] */
    (xdc_Char)0x78,  /* [6527] */
    (xdc_Char)0x25,  /* [6528] */
    (xdc_Char)0x78,  /* [6529] */
    (xdc_Char)0x2c,  /* [6530] */
    (xdc_Char)0x20,  /* [6531] */
    (xdc_Char)0x66,  /* [6532] */
    (xdc_Char)0x75,  /* [6533] */
    (xdc_Char)0x6e,  /* [6534] */
    (xdc_Char)0x63,  /* [6535] */
    (xdc_Char)0x3a,  /* [6536] */
    (xdc_Char)0x20,  /* [6537] */
    (xdc_Char)0x30,  /* [6538] */
    (xdc_Char)0x78,  /* [6539] */
    (xdc_Char)0x25,  /* [6540] */
    (xdc_Char)0x78,  /* [6541] */
    (xdc_Char)0x2c,  /* [6542] */
    (xdc_Char)0x20,  /* [6543] */
    (xdc_Char)0x70,  /* [6544] */
    (xdc_Char)0x72,  /* [6545] */
    (xdc_Char)0x69,  /* [6546] */
    (xdc_Char)0x3a,  /* [6547] */
    (xdc_Char)0x20,  /* [6548] */
    (xdc_Char)0x25,  /* [6549] */
    (xdc_Char)0x64,  /* [6550] */
    (xdc_Char)0x0,  /* [6551] */
    (xdc_Char)0x4c,  /* [6552] */
    (xdc_Char)0x44,  /* [6553] */
    (xdc_Char)0x5f,  /* [6554] */
    (xdc_Char)0x62,  /* [6555] */
    (xdc_Char)0x6c,  /* [6556] */
    (xdc_Char)0x6f,  /* [6557] */
    (xdc_Char)0x63,  /* [6558] */
    (xdc_Char)0x6b,  /* [6559] */
    (xdc_Char)0x3a,  /* [6560] */
    (xdc_Char)0x20,  /* [6561] */
    (xdc_Char)0x74,  /* [6562] */
    (xdc_Char)0x73,  /* [6563] */
    (xdc_Char)0x6b,  /* [6564] */
    (xdc_Char)0x3a,  /* [6565] */
    (xdc_Char)0x20,  /* [6566] */
    (xdc_Char)0x30,  /* [6567] */
    (xdc_Char)0x78,  /* [6568] */
    (xdc_Char)0x25,  /* [6569] */
    (xdc_Char)0x78,  /* [6570] */
    (xdc_Char)0x2c,  /* [6571] */
    (xdc_Char)0x20,  /* [6572] */
    (xdc_Char)0x66,  /* [6573] */
    (xdc_Char)0x75,  /* [6574] */
    (xdc_Char)0x6e,  /* [6575] */
    (xdc_Char)0x63,  /* [6576] */
    (xdc_Char)0x3a,  /* [6577] */
    (xdc_Char)0x20,  /* [6578] */
    (xdc_Char)0x30,  /* [6579] */
    (xdc_Char)0x78,  /* [6580] */
    (xdc_Char)0x25,  /* [6581] */
    (xdc_Char)0x78,  /* [6582] */
    (xdc_Char)0x0,  /* [6583] */
    (xdc_Char)0x4c,  /* [6584] */
    (xdc_Char)0x4d,  /* [6585] */
    (xdc_Char)0x5f,  /* [6586] */
    (xdc_Char)0x79,  /* [6587] */
    (xdc_Char)0x69,  /* [6588] */
    (xdc_Char)0x65,  /* [6589] */
    (xdc_Char)0x6c,  /* [6590] */
    (xdc_Char)0x64,  /* [6591] */
    (xdc_Char)0x3a,  /* [6592] */
    (xdc_Char)0x20,  /* [6593] */
    (xdc_Char)0x74,  /* [6594] */
    (xdc_Char)0x73,  /* [6595] */
    (xdc_Char)0x6b,  /* [6596] */
    (xdc_Char)0x3a,  /* [6597] */
    (xdc_Char)0x20,  /* [6598] */
    (xdc_Char)0x30,  /* [6599] */
    (xdc_Char)0x78,  /* [6600] */
    (xdc_Char)0x25,  /* [6601] */
    (xdc_Char)0x78,  /* [6602] */
    (xdc_Char)0x2c,  /* [6603] */
    (xdc_Char)0x20,  /* [6604] */
    (xdc_Char)0x66,  /* [6605] */
    (xdc_Char)0x75,  /* [6606] */
    (xdc_Char)0x6e,  /* [6607] */
    (xdc_Char)0x63,  /* [6608] */
    (xdc_Char)0x3a,  /* [6609] */
    (xdc_Char)0x20,  /* [6610] */
    (xdc_Char)0x30,  /* [6611] */
    (xdc_Char)0x78,  /* [6612] */
    (xdc_Char)0x25,  /* [6613] */
    (xdc_Char)0x78,  /* [6614] */
    (xdc_Char)0x2c,  /* [6615] */
    (xdc_Char)0x20,  /* [6616] */
    (xdc_Char)0x63,  /* [6617] */
    (xdc_Char)0x75,  /* [6618] */
    (xdc_Char)0x72,  /* [6619] */
    (xdc_Char)0x72,  /* [6620] */
    (xdc_Char)0x54,  /* [6621] */
    (xdc_Char)0x68,  /* [6622] */
    (xdc_Char)0x72,  /* [6623] */
    (xdc_Char)0x65,  /* [6624] */
    (xdc_Char)0x61,  /* [6625] */
    (xdc_Char)0x64,  /* [6626] */
    (xdc_Char)0x3a,  /* [6627] */
    (xdc_Char)0x20,  /* [6628] */
    (xdc_Char)0x25,  /* [6629] */
    (xdc_Char)0x64,  /* [6630] */
    (xdc_Char)0x0,  /* [6631] */
    (xdc_Char)0x4c,  /* [6632] */
    (xdc_Char)0x4d,  /* [6633] */
    (xdc_Char)0x5f,  /* [6634] */
    (xdc_Char)0x73,  /* [6635] */
    (xdc_Char)0x65,  /* [6636] */
    (xdc_Char)0x74,  /* [6637] */
    (xdc_Char)0x50,  /* [6638] */
    (xdc_Char)0x72,  /* [6639] */
    (xdc_Char)0x69,  /* [6640] */
    (xdc_Char)0x3a,  /* [6641] */
    (xdc_Char)0x20,  /* [6642] */
    (xdc_Char)0x74,  /* [6643] */
    (xdc_Char)0x73,  /* [6644] */
    (xdc_Char)0x6b,  /* [6645] */
    (xdc_Char)0x3a,  /* [6646] */
    (xdc_Char)0x20,  /* [6647] */
    (xdc_Char)0x30,  /* [6648] */
    (xdc_Char)0x78,  /* [6649] */
    (xdc_Char)0x25,  /* [6650] */
    (xdc_Char)0x78,  /* [6651] */
    (xdc_Char)0x2c,  /* [6652] */
    (xdc_Char)0x20,  /* [6653] */
    (xdc_Char)0x66,  /* [6654] */
    (xdc_Char)0x75,  /* [6655] */
    (xdc_Char)0x6e,  /* [6656] */
    (xdc_Char)0x63,  /* [6657] */
    (xdc_Char)0x3a,  /* [6658] */
    (xdc_Char)0x20,  /* [6659] */
    (xdc_Char)0x30,  /* [6660] */
    (xdc_Char)0x78,  /* [6661] */
    (xdc_Char)0x25,  /* [6662] */
    (xdc_Char)0x78,  /* [6663] */
    (xdc_Char)0x2c,  /* [6664] */
    (xdc_Char)0x20,  /* [6665] */
    (xdc_Char)0x6f,  /* [6666] */
    (xdc_Char)0x6c,  /* [6667] */
    (xdc_Char)0x64,  /* [6668] */
    (xdc_Char)0x50,  /* [6669] */
    (xdc_Char)0x72,  /* [6670] */
    (xdc_Char)0x69,  /* [6671] */
    (xdc_Char)0x3a,  /* [6672] */
    (xdc_Char)0x20,  /* [6673] */
    (xdc_Char)0x25,  /* [6674] */
    (xdc_Char)0x64,  /* [6675] */
    (xdc_Char)0x2c,  /* [6676] */
    (xdc_Char)0x20,  /* [6677] */
    (xdc_Char)0x6e,  /* [6678] */
    (xdc_Char)0x65,  /* [6679] */
    (xdc_Char)0x77,  /* [6680] */
    (xdc_Char)0x50,  /* [6681] */
    (xdc_Char)0x72,  /* [6682] */
    (xdc_Char)0x69,  /* [6683] */
    (xdc_Char)0x20,  /* [6684] */
    (xdc_Char)0x25,  /* [6685] */
    (xdc_Char)0x64,  /* [6686] */
    (xdc_Char)0x0,  /* [6687] */
    (xdc_Char)0x4c,  /* [6688] */
    (xdc_Char)0x44,  /* [6689] */
    (xdc_Char)0x5f,  /* [6690] */
    (xdc_Char)0x65,  /* [6691] */
    (xdc_Char)0x78,  /* [6692] */
    (xdc_Char)0x69,  /* [6693] */
    (xdc_Char)0x74,  /* [6694] */
    (xdc_Char)0x3a,  /* [6695] */
    (xdc_Char)0x20,  /* [6696] */
    (xdc_Char)0x74,  /* [6697] */
    (xdc_Char)0x73,  /* [6698] */
    (xdc_Char)0x6b,  /* [6699] */
    (xdc_Char)0x3a,  /* [6700] */
    (xdc_Char)0x20,  /* [6701] */
    (xdc_Char)0x30,  /* [6702] */
    (xdc_Char)0x78,  /* [6703] */
    (xdc_Char)0x25,  /* [6704] */
    (xdc_Char)0x78,  /* [6705] */
    (xdc_Char)0x2c,  /* [6706] */
    (xdc_Char)0x20,  /* [6707] */
    (xdc_Char)0x66,  /* [6708] */
    (xdc_Char)0x75,  /* [6709] */
    (xdc_Char)0x6e,  /* [6710] */
    (xdc_Char)0x63,  /* [6711] */
    (xdc_Char)0x3a,  /* [6712] */
    (xdc_Char)0x20,  /* [6713] */
    (xdc_Char)0x30,  /* [6714] */
    (xdc_Char)0x78,  /* [6715] */
    (xdc_Char)0x25,  /* [6716] */
    (xdc_Char)0x78,  /* [6717] */
    (xdc_Char)0x0,  /* [6718] */
    (xdc_Char)0x4c,  /* [6719] */
    (xdc_Char)0x4d,  /* [6720] */
    (xdc_Char)0x5f,  /* [6721] */
    (xdc_Char)0x62,  /* [6722] */
    (xdc_Char)0x65,  /* [6723] */
    (xdc_Char)0x67,  /* [6724] */
    (xdc_Char)0x69,  /* [6725] */
    (xdc_Char)0x6e,  /* [6726] */
    (xdc_Char)0x3a,  /* [6727] */
    (xdc_Char)0x20,  /* [6728] */
    (xdc_Char)0x68,  /* [6729] */
    (xdc_Char)0x77,  /* [6730] */
    (xdc_Char)0x69,  /* [6731] */
    (xdc_Char)0x3a,  /* [6732] */
    (xdc_Char)0x20,  /* [6733] */
    (xdc_Char)0x30,  /* [6734] */
    (xdc_Char)0x78,  /* [6735] */
    (xdc_Char)0x25,  /* [6736] */
    (xdc_Char)0x78,  /* [6737] */
    (xdc_Char)0x2c,  /* [6738] */
    (xdc_Char)0x20,  /* [6739] */
    (xdc_Char)0x66,  /* [6740] */
    (xdc_Char)0x75,  /* [6741] */
    (xdc_Char)0x6e,  /* [6742] */
    (xdc_Char)0x63,  /* [6743] */
    (xdc_Char)0x3a,  /* [6744] */
    (xdc_Char)0x20,  /* [6745] */
    (xdc_Char)0x30,  /* [6746] */
    (xdc_Char)0x78,  /* [6747] */
    (xdc_Char)0x25,  /* [6748] */
    (xdc_Char)0x78,  /* [6749] */
    (xdc_Char)0x2c,  /* [6750] */
    (xdc_Char)0x20,  /* [6751] */
    (xdc_Char)0x70,  /* [6752] */
    (xdc_Char)0x72,  /* [6753] */
    (xdc_Char)0x65,  /* [6754] */
    (xdc_Char)0x54,  /* [6755] */
    (xdc_Char)0x68,  /* [6756] */
    (xdc_Char)0x72,  /* [6757] */
    (xdc_Char)0x65,  /* [6758] */
    (xdc_Char)0x61,  /* [6759] */
    (xdc_Char)0x64,  /* [6760] */
    (xdc_Char)0x3a,  /* [6761] */
    (xdc_Char)0x20,  /* [6762] */
    (xdc_Char)0x25,  /* [6763] */
    (xdc_Char)0x64,  /* [6764] */
    (xdc_Char)0x2c,  /* [6765] */
    (xdc_Char)0x20,  /* [6766] */
    (xdc_Char)0x69,  /* [6767] */
    (xdc_Char)0x6e,  /* [6768] */
    (xdc_Char)0x74,  /* [6769] */
    (xdc_Char)0x4e,  /* [6770] */
    (xdc_Char)0x75,  /* [6771] */
    (xdc_Char)0x6d,  /* [6772] */
    (xdc_Char)0x3a,  /* [6773] */
    (xdc_Char)0x20,  /* [6774] */
    (xdc_Char)0x25,  /* [6775] */
    (xdc_Char)0x64,  /* [6776] */
    (xdc_Char)0x2c,  /* [6777] */
    (xdc_Char)0x20,  /* [6778] */
    (xdc_Char)0x69,  /* [6779] */
    (xdc_Char)0x72,  /* [6780] */
    (xdc_Char)0x70,  /* [6781] */
    (xdc_Char)0x3a,  /* [6782] */
    (xdc_Char)0x20,  /* [6783] */
    (xdc_Char)0x30,  /* [6784] */
    (xdc_Char)0x78,  /* [6785] */
    (xdc_Char)0x25,  /* [6786] */
    (xdc_Char)0x78,  /* [6787] */
    (xdc_Char)0x0,  /* [6788] */
    (xdc_Char)0x4c,  /* [6789] */
    (xdc_Char)0x44,  /* [6790] */
    (xdc_Char)0x5f,  /* [6791] */
    (xdc_Char)0x65,  /* [6792] */
    (xdc_Char)0x6e,  /* [6793] */
    (xdc_Char)0x64,  /* [6794] */
    (xdc_Char)0x3a,  /* [6795] */
    (xdc_Char)0x20,  /* [6796] */
    (xdc_Char)0x68,  /* [6797] */
    (xdc_Char)0x77,  /* [6798] */
    (xdc_Char)0x69,  /* [6799] */
    (xdc_Char)0x3a,  /* [6800] */
    (xdc_Char)0x20,  /* [6801] */
    (xdc_Char)0x30,  /* [6802] */
    (xdc_Char)0x78,  /* [6803] */
    (xdc_Char)0x25,  /* [6804] */
    (xdc_Char)0x78,  /* [6805] */
    (xdc_Char)0x0,  /* [6806] */
    (xdc_Char)0x78,  /* [6807] */
    (xdc_Char)0x64,  /* [6808] */
    (xdc_Char)0x63,  /* [6809] */
    (xdc_Char)0x2e,  /* [6810] */
    (xdc_Char)0x0,  /* [6811] */
    (xdc_Char)0x72,  /* [6812] */
    (xdc_Char)0x75,  /* [6813] */
    (xdc_Char)0x6e,  /* [6814] */
    (xdc_Char)0x74,  /* [6815] */
    (xdc_Char)0x69,  /* [6816] */
    (xdc_Char)0x6d,  /* [6817] */
    (xdc_Char)0x65,  /* [6818] */
    (xdc_Char)0x2e,  /* [6819] */
    (xdc_Char)0x0,  /* [6820] */
    (xdc_Char)0x41,  /* [6821] */
    (xdc_Char)0x73,  /* [6822] */
    (xdc_Char)0x73,  /* [6823] */
    (xdc_Char)0x65,  /* [6824] */
    (xdc_Char)0x72,  /* [6825] */
    (xdc_Char)0x74,  /* [6826] */
    (xdc_Char)0x0,  /* [6827] */
    (xdc_Char)0x43,  /* [6828] */
    (xdc_Char)0x6f,  /* [6829] */
    (xdc_Char)0x72,  /* [6830] */
    (xdc_Char)0x65,  /* [6831] */
    (xdc_Char)0x0,  /* [6832] */
    (xdc_Char)0x44,  /* [6833] */
    (xdc_Char)0x65,  /* [6834] */
    (xdc_Char)0x66,  /* [6835] */
    (xdc_Char)0x61,  /* [6836] */
    (xdc_Char)0x75,  /* [6837] */
    (xdc_Char)0x6c,  /* [6838] */
    (xdc_Char)0x74,  /* [6839] */
    (xdc_Char)0x73,  /* [6840] */
    (xdc_Char)0x0,  /* [6841] */
    (xdc_Char)0x44,  /* [6842] */
    (xdc_Char)0x69,  /* [6843] */
    (xdc_Char)0x61,  /* [6844] */
    (xdc_Char)0x67,  /* [6845] */
    (xdc_Char)0x73,  /* [6846] */
    (xdc_Char)0x0,  /* [6847] */
    (xdc_Char)0x45,  /* [6848] */
    (xdc_Char)0x72,  /* [6849] */
    (xdc_Char)0x72,  /* [6850] */
    (xdc_Char)0x6f,  /* [6851] */
    (xdc_Char)0x72,  /* [6852] */
    (xdc_Char)0x0,  /* [6853] */
    (xdc_Char)0x47,  /* [6854] */
    (xdc_Char)0x61,  /* [6855] */
    (xdc_Char)0x74,  /* [6856] */
    (xdc_Char)0x65,  /* [6857] */
    (xdc_Char)0x0,  /* [6858] */
    (xdc_Char)0x4c,  /* [6859] */
    (xdc_Char)0x6f,  /* [6860] */
    (xdc_Char)0x67,  /* [6861] */
    (xdc_Char)0x0,  /* [6862] */
    (xdc_Char)0x4d,  /* [6863] */
    (xdc_Char)0x61,  /* [6864] */
    (xdc_Char)0x69,  /* [6865] */
    (xdc_Char)0x6e,  /* [6866] */
    (xdc_Char)0x0,  /* [6867] */
    (xdc_Char)0x4d,  /* [6868] */
    (xdc_Char)0x65,  /* [6869] */
    (xdc_Char)0x6d,  /* [6870] */
    (xdc_Char)0x6f,  /* [6871] */
    (xdc_Char)0x72,  /* [6872] */
    (xdc_Char)0x79,  /* [6873] */
    (xdc_Char)0x0,  /* [6874] */
    (xdc_Char)0x52,  /* [6875] */
    (xdc_Char)0x65,  /* [6876] */
    (xdc_Char)0x67,  /* [6877] */
    (xdc_Char)0x69,  /* [6878] */
    (xdc_Char)0x73,  /* [6879] */
    (xdc_Char)0x74,  /* [6880] */
    (xdc_Char)0x72,  /* [6881] */
    (xdc_Char)0x79,  /* [6882] */
    (xdc_Char)0x0,  /* [6883] */
    (xdc_Char)0x53,  /* [6884] */
    (xdc_Char)0x74,  /* [6885] */
    (xdc_Char)0x61,  /* [6886] */
    (xdc_Char)0x72,  /* [6887] */
    (xdc_Char)0x74,  /* [6888] */
    (xdc_Char)0x75,  /* [6889] */
    (xdc_Char)0x70,  /* [6890] */
    (xdc_Char)0x0,  /* [6891] */
    (xdc_Char)0x53,  /* [6892] */
    (xdc_Char)0x79,  /* [6893] */
    (xdc_Char)0x73,  /* [6894] */
    (xdc_Char)0x74,  /* [6895] */
    (xdc_Char)0x65,  /* [6896] */
    (xdc_Char)0x6d,  /* [6897] */
    (xdc_Char)0x0,  /* [6898] */
    (xdc_Char)0x53,  /* [6899] */
    (xdc_Char)0x79,  /* [6900] */
    (xdc_Char)0x73,  /* [6901] */
    (xdc_Char)0x4d,  /* [6902] */
    (xdc_Char)0x69,  /* [6903] */
    (xdc_Char)0x6e,  /* [6904] */
    (xdc_Char)0x0,  /* [6905] */
    (xdc_Char)0x54,  /* [6906] */
    (xdc_Char)0x65,  /* [6907] */
    (xdc_Char)0x78,  /* [6908] */
    (xdc_Char)0x74,  /* [6909] */
    (xdc_Char)0x0,  /* [6910] */
    (xdc_Char)0x54,  /* [6911] */
    (xdc_Char)0x69,  /* [6912] */
    (xdc_Char)0x6d,  /* [6913] */
    (xdc_Char)0x65,  /* [6914] */
    (xdc_Char)0x73,  /* [6915] */
    (xdc_Char)0x74,  /* [6916] */
    (xdc_Char)0x61,  /* [6917] */
    (xdc_Char)0x6d,  /* [6918] */
    (xdc_Char)0x70,  /* [6919] */
    (xdc_Char)0x0,  /* [6920] */
    (xdc_Char)0x74,  /* [6921] */
    (xdc_Char)0x69,  /* [6922] */
    (xdc_Char)0x2e,  /* [6923] */
    (xdc_Char)0x0,  /* [6924] */
    (xdc_Char)0x73,  /* [6925] */
    (xdc_Char)0x79,  /* [6926] */
    (xdc_Char)0x73,  /* [6927] */
    (xdc_Char)0x62,  /* [6928] */
    (xdc_Char)0x69,  /* [6929] */
    (xdc_Char)0x6f,  /* [6930] */
    (xdc_Char)0x73,  /* [6931] */
    (xdc_Char)0x2e,  /* [6932] */
    (xdc_Char)0x0,  /* [6933] */
    (xdc_Char)0x66,  /* [6934] */
    (xdc_Char)0x61,  /* [6935] */
    (xdc_Char)0x6d,  /* [6936] */
    (xdc_Char)0x69,  /* [6937] */
    (xdc_Char)0x6c,  /* [6938] */
    (xdc_Char)0x79,  /* [6939] */
    (xdc_Char)0x2e,  /* [6940] */
    (xdc_Char)0x0,  /* [6941] */
    (xdc_Char)0x61,  /* [6942] */
    (xdc_Char)0x72,  /* [6943] */
    (xdc_Char)0x6d,  /* [6944] */
    (xdc_Char)0x2e,  /* [6945] */
    (xdc_Char)0x0,  /* [6946] */
    (xdc_Char)0x49,  /* [6947] */
    (xdc_Char)0x6e,  /* [6948] */
    (xdc_Char)0x74,  /* [6949] */
    (xdc_Char)0x72,  /* [6950] */
    (xdc_Char)0x69,  /* [6951] */
    (xdc_Char)0x6e,  /* [6952] */
    (xdc_Char)0x73,  /* [6953] */
    (xdc_Char)0x69,  /* [6954] */
    (xdc_Char)0x63,  /* [6955] */
    (xdc_Char)0x73,  /* [6956] */
    (xdc_Char)0x53,  /* [6957] */
    (xdc_Char)0x75,  /* [6958] */
    (xdc_Char)0x70,  /* [6959] */
    (xdc_Char)0x70,  /* [6960] */
    (xdc_Char)0x6f,  /* [6961] */
    (xdc_Char)0x72,  /* [6962] */
    (xdc_Char)0x74,  /* [6963] */
    (xdc_Char)0x0,  /* [6964] */
    (xdc_Char)0x54,  /* [6965] */
    (xdc_Char)0x61,  /* [6966] */
    (xdc_Char)0x73,  /* [6967] */
    (xdc_Char)0x6b,  /* [6968] */
    (xdc_Char)0x53,  /* [6969] */
    (xdc_Char)0x75,  /* [6970] */
    (xdc_Char)0x70,  /* [6971] */
    (xdc_Char)0x70,  /* [6972] */
    (xdc_Char)0x6f,  /* [6973] */
    (xdc_Char)0x72,  /* [6974] */
    (xdc_Char)0x74,  /* [6975] */
    (xdc_Char)0x0,  /* [6976] */
    (xdc_Char)0x68,  /* [6977] */
    (xdc_Char)0x61,  /* [6978] */
    (xdc_Char)0x6c,  /* [6979] */
    (xdc_Char)0x2e,  /* [6980] */
    (xdc_Char)0x0,  /* [6981] */
    (xdc_Char)0x48,  /* [6982] */
    (xdc_Char)0x77,  /* [6983] */
    (xdc_Char)0x69,  /* [6984] */
    (xdc_Char)0x0,  /* [6985] */
    (xdc_Char)0x54,  /* [6986] */
    (xdc_Char)0x69,  /* [6987] */
    (xdc_Char)0x6d,  /* [6988] */
    (xdc_Char)0x65,  /* [6989] */
    (xdc_Char)0x72,  /* [6990] */
    (xdc_Char)0x0,  /* [6991] */
    (xdc_Char)0x43,  /* [6992] */
    (xdc_Char)0x61,  /* [6993] */
    (xdc_Char)0x63,  /* [6994] */
    (xdc_Char)0x68,  /* [6995] */
    (xdc_Char)0x65,  /* [6996] */
    (xdc_Char)0x0,  /* [6997] */
    (xdc_Char)0x6b,  /* [6998] */
    (xdc_Char)0x6e,  /* [6999] */
    (xdc_Char)0x6c,  /* [7000] */
    (xdc_Char)0x2e,  /* [7001] */
    (xdc_Char)0x0,  /* [7002] */
    (xdc_Char)0x43,  /* [7003] */
    (xdc_Char)0x6c,  /* [7004] */
    (xdc_Char)0x6f,  /* [7005] */
    (xdc_Char)0x63,  /* [7006] */
    (xdc_Char)0x6b,  /* [7007] */
    (xdc_Char)0x0,  /* [7008] */
    (xdc_Char)0x49,  /* [7009] */
    (xdc_Char)0x64,  /* [7010] */
    (xdc_Char)0x6c,  /* [7011] */
    (xdc_Char)0x65,  /* [7012] */
    (xdc_Char)0x0,  /* [7013] */
    (xdc_Char)0x49,  /* [7014] */
    (xdc_Char)0x6e,  /* [7015] */
    (xdc_Char)0x74,  /* [7016] */
    (xdc_Char)0x72,  /* [7017] */
    (xdc_Char)0x69,  /* [7018] */
    (xdc_Char)0x6e,  /* [7019] */
    (xdc_Char)0x73,  /* [7020] */
    (xdc_Char)0x69,  /* [7021] */
    (xdc_Char)0x63,  /* [7022] */
    (xdc_Char)0x73,  /* [7023] */
    (xdc_Char)0x0,  /* [7024] */
    (xdc_Char)0x51,  /* [7025] */
    (xdc_Char)0x75,  /* [7026] */
    (xdc_Char)0x65,  /* [7027] */
    (xdc_Char)0x75,  /* [7028] */
    (xdc_Char)0x65,  /* [7029] */
    (xdc_Char)0x0,  /* [7030] */
    (xdc_Char)0x53,  /* [7031] */
    (xdc_Char)0x65,  /* [7032] */
    (xdc_Char)0x6d,  /* [7033] */
    (xdc_Char)0x61,  /* [7034] */
    (xdc_Char)0x70,  /* [7035] */
    (xdc_Char)0x68,  /* [7036] */
    (xdc_Char)0x6f,  /* [7037] */
    (xdc_Char)0x72,  /* [7038] */
    (xdc_Char)0x65,  /* [7039] */
    (xdc_Char)0x0,  /* [7040] */
    (xdc_Char)0x53,  /* [7041] */
    (xdc_Char)0x77,  /* [7042] */
    (xdc_Char)0x69,  /* [7043] */
    (xdc_Char)0x0,  /* [7044] */
    (xdc_Char)0x54,  /* [7045] */
    (xdc_Char)0x61,  /* [7046] */
    (xdc_Char)0x73,  /* [7047] */
    (xdc_Char)0x6b,  /* [7048] */
    (xdc_Char)0x0,  /* [7049] */
    (xdc_Char)0x61,  /* [7050] */
    (xdc_Char)0x38,  /* [7051] */
    (xdc_Char)0x2e,  /* [7052] */
    (xdc_Char)0x0,  /* [7053] */
    (xdc_Char)0x4d,  /* [7054] */
    (xdc_Char)0x6d,  /* [7055] */
    (xdc_Char)0x75,  /* [7056] */
    (xdc_Char)0x0,  /* [7057] */
    (xdc_Char)0x54,  /* [7058] */
    (xdc_Char)0x69,  /* [7059] */
    (xdc_Char)0x6d,  /* [7060] */
    (xdc_Char)0x65,  /* [7061] */
    (xdc_Char)0x73,  /* [7062] */
    (xdc_Char)0x74,  /* [7063] */
    (xdc_Char)0x61,  /* [7064] */
    (xdc_Char)0x6d,  /* [7065] */
    (xdc_Char)0x70,  /* [7066] */
    (xdc_Char)0x50,  /* [7067] */
    (xdc_Char)0x72,  /* [7068] */
    (xdc_Char)0x6f,  /* [7069] */
    (xdc_Char)0x76,  /* [7070] */
    (xdc_Char)0x69,  /* [7071] */
    (xdc_Char)0x64,  /* [7072] */
    (xdc_Char)0x65,  /* [7073] */
    (xdc_Char)0x72,  /* [7074] */
    (xdc_Char)0x0,  /* [7075] */
    (xdc_Char)0x67,  /* [7076] */
    (xdc_Char)0x61,  /* [7077] */
    (xdc_Char)0x74,  /* [7078] */
    (xdc_Char)0x65,  /* [7079] */
    (xdc_Char)0x73,  /* [7080] */
    (xdc_Char)0x2e,  /* [7081] */
    (xdc_Char)0x0,  /* [7082] */
    (xdc_Char)0x47,  /* [7083] */
    (xdc_Char)0x61,  /* [7084] */
    (xdc_Char)0x74,  /* [7085] */
    (xdc_Char)0x65,  /* [7086] */
    (xdc_Char)0x48,  /* [7087] */
    (xdc_Char)0x77,  /* [7088] */
    (xdc_Char)0x69,  /* [7089] */
    (xdc_Char)0x0,  /* [7090] */
    (xdc_Char)0x47,  /* [7091] */
    (xdc_Char)0x61,  /* [7092] */
    (xdc_Char)0x74,  /* [7093] */
    (xdc_Char)0x65,  /* [7094] */
    (xdc_Char)0x4d,  /* [7095] */
    (xdc_Char)0x75,  /* [7096] */
    (xdc_Char)0x74,  /* [7097] */
    (xdc_Char)0x65,  /* [7098] */
    (xdc_Char)0x78,  /* [7099] */
    (xdc_Char)0x0,  /* [7100] */
    (xdc_Char)0x73,  /* [7101] */
    (xdc_Char)0x64,  /* [7102] */
    (xdc_Char)0x6f,  /* [7103] */
    (xdc_Char)0x2e,  /* [7104] */
    (xdc_Char)0x0,  /* [7105] */
    (xdc_Char)0x75,  /* [7106] */
    (xdc_Char)0x74,  /* [7107] */
    (xdc_Char)0x69,  /* [7108] */
    (xdc_Char)0x6c,  /* [7109] */
    (xdc_Char)0x73,  /* [7110] */
    (xdc_Char)0x2e,  /* [7111] */
    (xdc_Char)0x0,  /* [7112] */
    (xdc_Char)0x4e,  /* [7113] */
    (xdc_Char)0x61,  /* [7114] */
    (xdc_Char)0x6d,  /* [7115] */
    (xdc_Char)0x65,  /* [7116] */
    (xdc_Char)0x53,  /* [7117] */
    (xdc_Char)0x65,  /* [7118] */
    (xdc_Char)0x72,  /* [7119] */
    (xdc_Char)0x76,  /* [7120] */
    (xdc_Char)0x65,  /* [7121] */
    (xdc_Char)0x72,  /* [7122] */
    (xdc_Char)0x52,  /* [7123] */
    (xdc_Char)0x65,  /* [7124] */
    (xdc_Char)0x6d,  /* [7125] */
    (xdc_Char)0x6f,  /* [7126] */
    (xdc_Char)0x74,  /* [7127] */
    (xdc_Char)0x65,  /* [7128] */
    (xdc_Char)0x4e,  /* [7129] */
    (xdc_Char)0x75,  /* [7130] */
    (xdc_Char)0x6c,  /* [7131] */
    (xdc_Char)0x6c,  /* [7132] */
    (xdc_Char)0x0,  /* [7133] */
    (xdc_Char)0x42,  /* [7134] */
    (xdc_Char)0x49,  /* [7135] */
    (xdc_Char)0x4f,  /* [7136] */
    (xdc_Char)0x53,  /* [7137] */
    (xdc_Char)0x0,  /* [7138] */
    (xdc_Char)0x69,  /* [7139] */
    (xdc_Char)0x6e,  /* [7140] */
    (xdc_Char)0x74,  /* [7141] */
    (xdc_Char)0x63,  /* [7142] */
    (xdc_Char)0x70,  /* [7143] */
    (xdc_Char)0x73,  /* [7144] */
    (xdc_Char)0x2e,  /* [7145] */
    (xdc_Char)0x0,  /* [7146] */
    (xdc_Char)0x65,  /* [7147] */
    (xdc_Char)0x78,  /* [7148] */
    (xdc_Char)0x63,  /* [7149] */
    (xdc_Char)0x2e,  /* [7150] */
    (xdc_Char)0x0,  /* [7151] */
    (xdc_Char)0x45,  /* [7152] */
    (xdc_Char)0x78,  /* [7153] */
    (xdc_Char)0x63,  /* [7154] */
    (xdc_Char)0x65,  /* [7155] */
    (xdc_Char)0x70,  /* [7156] */
    (xdc_Char)0x74,  /* [7157] */
    (xdc_Char)0x69,  /* [7158] */
    (xdc_Char)0x6f,  /* [7159] */
    (xdc_Char)0x6e,  /* [7160] */
    (xdc_Char)0x0,  /* [7161] */
    (xdc_Char)0x74,  /* [7162] */
    (xdc_Char)0x69,  /* [7163] */
    (xdc_Char)0x6d,  /* [7164] */
    (xdc_Char)0x65,  /* [7165] */
    (xdc_Char)0x72,  /* [7166] */
    (xdc_Char)0x73,  /* [7167] */
    (xdc_Char)0x2e,  /* [7168] */
    (xdc_Char)0x0,  /* [7169] */
    (xdc_Char)0x64,  /* [7170] */
    (xdc_Char)0x6d,  /* [7171] */
    (xdc_Char)0x74,  /* [7172] */
    (xdc_Char)0x69,  /* [7173] */
    (xdc_Char)0x6d,  /* [7174] */
    (xdc_Char)0x65,  /* [7175] */
    (xdc_Char)0x72,  /* [7176] */
    (xdc_Char)0x2e,  /* [7177] */
    (xdc_Char)0x0,  /* [7178] */
    (xdc_Char)0x74,  /* [7179] */
    (xdc_Char)0x69,  /* [7180] */
    (xdc_Char)0x38,  /* [7181] */
    (xdc_Char)0x31,  /* [7182] */
    (xdc_Char)0x78,  /* [7183] */
    (xdc_Char)0x78,  /* [7184] */
    (xdc_Char)0x2e,  /* [7185] */
    (xdc_Char)0x0,  /* [7186] */
    (xdc_Char)0x54,  /* [7187] */
    (xdc_Char)0x69,  /* [7188] */
    (xdc_Char)0x6d,  /* [7189] */
    (xdc_Char)0x65,  /* [7190] */
    (xdc_Char)0x72,  /* [7191] */
    (xdc_Char)0x53,  /* [7192] */
    (xdc_Char)0x75,  /* [7193] */
    (xdc_Char)0x70,  /* [7194] */
    (xdc_Char)0x70,  /* [7195] */
    (xdc_Char)0x6f,  /* [7196] */
    (xdc_Char)0x72,  /* [7197] */
    (xdc_Char)0x74,  /* [7198] */
    (xdc_Char)0x0,  /* [7199] */
    (xdc_Char)0x68,  /* [7200] */
    (xdc_Char)0x65,  /* [7201] */
    (xdc_Char)0x61,  /* [7202] */
    (xdc_Char)0x70,  /* [7203] */
    (xdc_Char)0x73,  /* [7204] */
    (xdc_Char)0x2e,  /* [7205] */
    (xdc_Char)0x0,  /* [7206] */
    (xdc_Char)0x48,  /* [7207] */
    (xdc_Char)0x65,  /* [7208] */
    (xdc_Char)0x61,  /* [7209] */
    (xdc_Char)0x70,  /* [7210] */
    (xdc_Char)0x4d,  /* [7211] */
    (xdc_Char)0x65,  /* [7212] */
    (xdc_Char)0x6d,  /* [7213] */
    (xdc_Char)0x0,  /* [7214] */
    (xdc_Char)0x74,  /* [7215] */
    (xdc_Char)0x69,  /* [7216] */
    (xdc_Char)0x2e,  /* [7217] */
    (xdc_Char)0x73,  /* [7218] */
    (xdc_Char)0x79,  /* [7219] */
    (xdc_Char)0x73,  /* [7220] */
    (xdc_Char)0x62,  /* [7221] */
    (xdc_Char)0x69,  /* [7222] */
    (xdc_Char)0x6f,  /* [7223] */
    (xdc_Char)0x73,  /* [7224] */
    (xdc_Char)0x2e,  /* [7225] */
    (xdc_Char)0x6b,  /* [7226] */
    (xdc_Char)0x6e,  /* [7227] */
    (xdc_Char)0x6c,  /* [7228] */
    (xdc_Char)0x2e,  /* [7229] */
    (xdc_Char)0x54,  /* [7230] */
    (xdc_Char)0x61,  /* [7231] */
    (xdc_Char)0x73,  /* [7232] */
    (xdc_Char)0x6b,  /* [7233] */
    (xdc_Char)0x2e,  /* [7234] */
    (xdc_Char)0x49,  /* [7235] */
    (xdc_Char)0x64,  /* [7236] */
    (xdc_Char)0x6c,  /* [7237] */
    (xdc_Char)0x65,  /* [7238] */
    (xdc_Char)0x54,  /* [7239] */
    (xdc_Char)0x61,  /* [7240] */
    (xdc_Char)0x73,  /* [7241] */
    (xdc_Char)0x6b,  /* [7242] */
    (xdc_Char)0x0,  /* [7243] */
};

/* --> xdc_runtime_Text_nodeTab__A */
const __T1_xdc_runtime_Text_nodeTab xdc_runtime_Text_nodeTab__A[56] = {
    {
        (xdc_Bits16)0x0,  /* left */
        (xdc_Bits16)0x0,  /* right */
    },  /* [0] */
    {
        (xdc_Bits16)0x1a97,  /* left */
        (xdc_Bits16)0x1a9c,  /* right */
    },  /* [1] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1aa5,  /* right */
    },  /* [2] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1aac,  /* right */
    },  /* [3] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1ab1,  /* right */
    },  /* [4] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1aba,  /* right */
    },  /* [5] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1ac0,  /* right */
    },  /* [6] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1ac6,  /* right */
    },  /* [7] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1acb,  /* right */
    },  /* [8] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1acf,  /* right */
    },  /* [9] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1ad4,  /* right */
    },  /* [10] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1adb,  /* right */
    },  /* [11] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1ae4,  /* right */
    },  /* [12] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1aec,  /* right */
    },  /* [13] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1af3,  /* right */
    },  /* [14] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1afa,  /* right */
    },  /* [15] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1aff,  /* right */
    },  /* [16] */
    {
        (xdc_Bits16)0x1b09,  /* left */
        (xdc_Bits16)0x1b0d,  /* right */
    },  /* [17] */
    {
        (xdc_Bits16)0x8011,  /* left */
        (xdc_Bits16)0x1b16,  /* right */
    },  /* [18] */
    {
        (xdc_Bits16)0x8012,  /* left */
        (xdc_Bits16)0x1b1e,  /* right */
    },  /* [19] */
    {
        (xdc_Bits16)0x8013,  /* left */
        (xdc_Bits16)0x1b23,  /* right */
    },  /* [20] */
    {
        (xdc_Bits16)0x8013,  /* left */
        (xdc_Bits16)0x1b35,  /* right */
    },  /* [21] */
    {
        (xdc_Bits16)0x8011,  /* left */
        (xdc_Bits16)0x1b41,  /* right */
    },  /* [22] */
    {
        (xdc_Bits16)0x8016,  /* left */
        (xdc_Bits16)0x1b46,  /* right */
    },  /* [23] */
    {
        (xdc_Bits16)0x8016,  /* left */
        (xdc_Bits16)0x1b4a,  /* right */
    },  /* [24] */
    {
        (xdc_Bits16)0x8016,  /* left */
        (xdc_Bits16)0x1b50,  /* right */
    },  /* [25] */
    {
        (xdc_Bits16)0x8011,  /* left */
        (xdc_Bits16)0x1b56,  /* right */
    },  /* [26] */
    {
        (xdc_Bits16)0x801a,  /* left */
        (xdc_Bits16)0x1b5b,  /* right */
    },  /* [27] */
    {
        (xdc_Bits16)0x801a,  /* left */
        (xdc_Bits16)0x1b61,  /* right */
    },  /* [28] */
    {
        (xdc_Bits16)0x801a,  /* left */
        (xdc_Bits16)0x1b66,  /* right */
    },  /* [29] */
    {
        (xdc_Bits16)0x801a,  /* left */
        (xdc_Bits16)0x1b71,  /* right */
    },  /* [30] */
    {
        (xdc_Bits16)0x801a,  /* left */
        (xdc_Bits16)0x1b77,  /* right */
    },  /* [31] */
    {
        (xdc_Bits16)0x801a,  /* left */
        (xdc_Bits16)0x1b81,  /* right */
    },  /* [32] */
    {
        (xdc_Bits16)0x801a,  /* left */
        (xdc_Bits16)0x1b85,  /* right */
    },  /* [33] */
    {
        (xdc_Bits16)0x8013,  /* left */
        (xdc_Bits16)0x1b8a,  /* right */
    },  /* [34] */
    {
        (xdc_Bits16)0x8022,  /* left */
        (xdc_Bits16)0x1b50,  /* right */
    },  /* [35] */
    {
        (xdc_Bits16)0x8022,  /* left */
        (xdc_Bits16)0x1b8e,  /* right */
    },  /* [36] */
    {
        (xdc_Bits16)0x8022,  /* left */
        (xdc_Bits16)0x1b92,  /* right */
    },  /* [37] */
    {
        (xdc_Bits16)0x8011,  /* left */
        (xdc_Bits16)0x1ba4,  /* right */
    },  /* [38] */
    {
        (xdc_Bits16)0x8026,  /* left */
        (xdc_Bits16)0x1bab,  /* right */
    },  /* [39] */
    {
        (xdc_Bits16)0x8026,  /* left */
        (xdc_Bits16)0x1bb3,  /* right */
    },  /* [40] */
    {
        (xdc_Bits16)0x1b09,  /* left */
        (xdc_Bits16)0x1bbd,  /* right */
    },  /* [41] */
    {
        (xdc_Bits16)0x8029,  /* left */
        (xdc_Bits16)0x1bc2,  /* right */
    },  /* [42] */
    {
        (xdc_Bits16)0x802a,  /* left */
        (xdc_Bits16)0x1bc9,  /* right */
    },  /* [43] */
    {
        (xdc_Bits16)0x8011,  /* left */
        (xdc_Bits16)0x1bde,  /* right */
    },  /* [44] */
    {
        (xdc_Bits16)0x8022,  /* left */
        (xdc_Bits16)0x1be3,  /* right */
    },  /* [45] */
    {
        (xdc_Bits16)0x802d,  /* left */
        (xdc_Bits16)0x1b46,  /* right */
    },  /* [46] */
    {
        (xdc_Bits16)0x8013,  /* left */
        (xdc_Bits16)0x1beb,  /* right */
    },  /* [47] */
    {
        (xdc_Bits16)0x802f,  /* left */
        (xdc_Bits16)0x1bf0,  /* right */
    },  /* [48] */
    {
        (xdc_Bits16)0x8011,  /* left */
        (xdc_Bits16)0x1bfa,  /* right */
    },  /* [49] */
    {
        (xdc_Bits16)0x8031,  /* left */
        (xdc_Bits16)0x1c02,  /* right */
    },  /* [50] */
    {
        (xdc_Bits16)0x8032,  /* left */
        (xdc_Bits16)0x1b4a,  /* right */
    },  /* [51] */
    {
        (xdc_Bits16)0x8022,  /* left */
        (xdc_Bits16)0x1c0b,  /* right */
    },  /* [52] */
    {
        (xdc_Bits16)0x8034,  /* left */
        (xdc_Bits16)0x1c13,  /* right */
    },  /* [53] */
    {
        (xdc_Bits16)0x8011,  /* left */
        (xdc_Bits16)0x1c20,  /* right */
    },  /* [54] */
    {
        (xdc_Bits16)0x8036,  /* left */
        (xdc_Bits16)0x1c27,  /* right */
    },  /* [55] */
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
__FAR__ const CT__xdc_runtime_Text_charCnt xdc_runtime_Text_charCnt__C = (xdc_Int16)0x1c4c;

/* nodeCnt__C */
__FAR__ const CT__xdc_runtime_Text_nodeCnt xdc_runtime_Text_nodeCnt__C = (xdc_Int16)0x38;

/* unnamedModsLastId__C */
__FAR__ const CT__xdc_runtime_Text_unnamedModsLastId xdc_runtime_Text_unnamedModsLastId__C = (xdc_UInt16)0x4000;

/* registryModsLastId__C */
__FAR__ const CT__xdc_runtime_Text_registryModsLastId xdc_runtime_Text_registryModsLastId__C = (xdc_UInt16)0x7fff;

/* visitRopeFxn__C */
__FAR__ const CT__xdc_runtime_Text_visitRopeFxn xdc_runtime_Text_visitRopeFxn__C = ((CT__xdc_runtime_Text_visitRopeFxn)((xdc_Fxn)xdc_runtime_Text_visitRope__I));

/* visitRopeFxn2__C */
__FAR__ const CT__xdc_runtime_Text_visitRopeFxn2 xdc_runtime_Text_visitRopeFxn2__C = ((CT__xdc_runtime_Text_visitRopeFxn2)((xdc_Fxn)xdc_runtime_Text_visitRope2__I));


/*
 * ======== xdc.runtime.Timestamp INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_Timestamp_Module__diagsEnabled xdc_runtime_Timestamp_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_Timestamp_Module__diagsIncluded xdc_runtime_Timestamp_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_Timestamp_Module__diagsMask xdc_runtime_Timestamp_Module__diagsMask__C = ((CT__xdc_runtime_Timestamp_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_Timestamp_Module__gateObj xdc_runtime_Timestamp_Module__gateObj__C = ((CT__xdc_runtime_Timestamp_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_Timestamp_Module__gatePrms xdc_runtime_Timestamp_Module__gatePrms__C = ((CT__xdc_runtime_Timestamp_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_Timestamp_Module__id xdc_runtime_Timestamp_Module__id__C = (xdc_Bits16)0x8010;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_Timestamp_Module__loggerDefined xdc_runtime_Timestamp_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_Timestamp_Module__loggerObj xdc_runtime_Timestamp_Module__loggerObj__C = ((CT__xdc_runtime_Timestamp_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_Timestamp_Module__loggerFxn0 xdc_runtime_Timestamp_Module__loggerFxn0__C = ((CT__xdc_runtime_Timestamp_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_Timestamp_Module__loggerFxn1 xdc_runtime_Timestamp_Module__loggerFxn1__C = ((CT__xdc_runtime_Timestamp_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_Timestamp_Module__loggerFxn2 xdc_runtime_Timestamp_Module__loggerFxn2__C = ((CT__xdc_runtime_Timestamp_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_Timestamp_Module__loggerFxn4 xdc_runtime_Timestamp_Module__loggerFxn4__C = ((CT__xdc_runtime_Timestamp_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_Timestamp_Module__loggerFxn8 xdc_runtime_Timestamp_Module__loggerFxn8__C = ((CT__xdc_runtime_Timestamp_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__xdc_runtime_Timestamp_Module__startupDoneFxn xdc_runtime_Timestamp_Module__startupDoneFxn__C = ((CT__xdc_runtime_Timestamp_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_Timestamp_Object__count xdc_runtime_Timestamp_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_Timestamp_Object__heap xdc_runtime_Timestamp_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_Timestamp_Object__sizeof xdc_runtime_Timestamp_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__xdc_runtime_Timestamp_Object__table xdc_runtime_Timestamp_Object__table__C = 0;


/*
 * ======== xdc.runtime.Timestamp_SupportProxy INITIALIZERS ========
 */


/*
 * ======== ti.sdo.utils.NameServerRemoteNull FUNCTION STUBS ========
 */

/* get__E */
xdc_Int ti_sdo_utils_NameServerRemoteNull_get__E( ti_sdo_utils_NameServerRemoteNull_Handle __inst, xdc_String instanceName, xdc_String name, xdc_Ptr value, xdc_UInt32* valueLen, xdc_runtime_knl_ISync_Handle syncHandle, xdc_runtime_Error_Block* eb ) 
{
    return ti_sdo_utils_NameServerRemoteNull_get__F((void*)__inst, instanceName, name, value, valueLen, syncHandle, eb);
}

/* Module_startup */
xdc_Int ti_sysbios_family_arm_a8_Mmu_Module_startup__E( xdc_Int state )
{
    return ti_sysbios_family_arm_a8_Mmu_Module_startup__F(state);
}

/* Module_startup */
xdc_Int ti_sysbios_family_arm_a8_TimestampProvider_Module_startup__E( xdc_Int state )
{
    return ti_sysbios_family_arm_a8_TimestampProvider_Module_startup__F(state);
}


/*
 * ======== ti.sysbios.family.arm.a8.intcps.Hwi FUNCTION STUBS ========
 */

/* getStackInfo__E */
xdc_Bool ti_sysbios_family_arm_a8_intcps_Hwi_getStackInfo__E( ti_sysbios_interfaces_IHwi_StackInfo* stkInfo, xdc_Bool computeStackDepth ) 
{
    return ti_sysbios_family_arm_a8_intcps_Hwi_getStackInfo__F(stkInfo, computeStackDepth);
}

/* Module_startup */
xdc_Int ti_sysbios_family_arm_a8_intcps_Hwi_Module_startup__E( xdc_Int state )
{
    return ti_sysbios_family_arm_a8_intcps_Hwi_Module_startup__F(state);
}

/* Module_startup */
xdc_Int ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Module_startup__E( xdc_Int state )
{
    return ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Module_startup__F(state);
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


/*
 * ======== ti.sysbios.timers.dmtimer.Timer FUNCTION STUBS ========
 */

/* setAvailMask__E */
xdc_Void ti_sysbios_timers_dmtimer_Timer_setAvailMask__E( xdc_UArg arg ) 
{
    ti_sysbios_timers_dmtimer_Timer_setAvailMask__F(arg);
}

/* Module_startup */
xdc_Int ti_sysbios_timers_dmtimer_Timer_Module_startup__E( xdc_Int state )
{
    return ti_sysbios_timers_dmtimer_Timer_Module_startup__F(state);
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
 * ======== xdc.runtime.Timestamp FUNCTION STUBS ========
 */

/* get32__E */
xdc_Bits32 xdc_runtime_Timestamp_get32__E( void ) 
{
    return xdc_runtime_Timestamp_get32__F();
}

/* get64__E */
xdc_Void xdc_runtime_Timestamp_get64__E( xdc_runtime_Types_Timestamp64* result ) 
{
    xdc_runtime_Timestamp_get64__F(result);
}

/* getFreq__E */
xdc_Void xdc_runtime_Timestamp_getFreq__E( xdc_runtime_Types_FreqHz* freq ) 
{
    xdc_runtime_Timestamp_getFreq__F(freq);
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

/* DELEGATES TO ti.sysbios.family.arm.a8.Cache */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_hal_Cache_CacheProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_family_arm_a8_Cache_Module__startupDone__S();
}

/* enable__E */
xdc_Void ti_sysbios_hal_Cache_CacheProxy_enable__E( xdc_Bits16 type )
{
    ti_sysbios_family_arm_a8_Cache_enable(type);
}

/* disable__E */
xdc_Void ti_sysbios_hal_Cache_CacheProxy_disable__E( xdc_Bits16 type )
{
    ti_sysbios_family_arm_a8_Cache_disable(type);
}

/* inv__E */
xdc_Void ti_sysbios_hal_Cache_CacheProxy_inv__E( xdc_Ptr blockPtr, xdc_SizeT byteCnt, xdc_Bits16 type, xdc_Bool wait )
{
    ti_sysbios_family_arm_a8_Cache_inv(blockPtr, byteCnt, type, wait);
}

/* wb__E */
xdc_Void ti_sysbios_hal_Cache_CacheProxy_wb__E( xdc_Ptr blockPtr, xdc_SizeT byteCnt, xdc_Bits16 type, xdc_Bool wait )
{
    ti_sysbios_family_arm_a8_Cache_wb(blockPtr, byteCnt, type, wait);
}

/* wbInv__E */
xdc_Void ti_sysbios_hal_Cache_CacheProxy_wbInv__E( xdc_Ptr blockPtr, xdc_SizeT byteCnt, xdc_Bits16 type, xdc_Bool wait )
{
    ti_sysbios_family_arm_a8_Cache_wbInv(blockPtr, byteCnt, type, wait);
}

/* wbAll__E */
xdc_Void ti_sysbios_hal_Cache_CacheProxy_wbAll__E( void )
{
    ti_sysbios_family_arm_a8_Cache_wbAll();
}

/* wbInvAll__E */
xdc_Void ti_sysbios_hal_Cache_CacheProxy_wbInvAll__E( void )
{
    ti_sysbios_family_arm_a8_Cache_wbInvAll();
}

/* wait__E */
xdc_Void ti_sysbios_hal_Cache_CacheProxy_wait__E( void )
{
    ti_sysbios_family_arm_a8_Cache_wait();
}


/*
 * ======== ti.sysbios.hal.Hwi_HwiProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.family.arm.a8.intcps.Hwi */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_hal_Hwi_HwiProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_family_arm_a8_intcps_Hwi_Module__startupDone__S();
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
    return ti_sysbios_family_arm_a8_intcps_Hwi_Object__create__S(oa, osz, aa, (ti_sysbios_family_arm_a8_intcps_Hwi___ParamsPtr)pa, sizeof(ti_sysbios_interfaces_IHwi_Params), eb);
}

/* Object__delete__S */
void ti_sysbios_hal_Hwi_HwiProxy_Object__delete__S( Ptr instp ) 
{
    ti_sysbios_family_arm_a8_intcps_Hwi_Object__delete__S(instp);
}

/* Params__init__S */
void ti_sysbios_hal_Hwi_HwiProxy_Params__init__S( xdc_Ptr dst, const xdc_Ptr src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_family_arm_a8_intcps_Hwi_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label* ti_sysbios_hal_Hwi_HwiProxy_Handle__label__S( Ptr obj, xdc_runtime_Types_Label* lab )
{
    return ti_sysbios_family_arm_a8_intcps_Hwi_Handle__label__S(obj, lab);
}

/* getStackInfo__E */
xdc_Bool ti_sysbios_hal_Hwi_HwiProxy_getStackInfo__E( ti_sysbios_interfaces_IHwi_StackInfo* stkInfo, xdc_Bool computeStackDepth )
{
    return ti_sysbios_family_arm_a8_intcps_Hwi_getStackInfo(stkInfo, computeStackDepth);
}

/* startup__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_startup__E( void )
{
    ti_sysbios_family_arm_a8_intcps_Hwi_startup();
}

/* disable__E */
xdc_UInt ti_sysbios_hal_Hwi_HwiProxy_disable__E( void )
{
    return ti_sysbios_family_arm_a8_intcps_Hwi_disable();
}

/* enable__E */
xdc_UInt ti_sysbios_hal_Hwi_HwiProxy_enable__E( void )
{
    return ti_sysbios_family_arm_a8_intcps_Hwi_enable();
}

/* restore__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_restore__E( xdc_UInt key )
{
    ti_sysbios_family_arm_a8_intcps_Hwi_restore(key);
}

/* switchFromBootStack__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_switchFromBootStack__E( void )
{
    ti_sysbios_family_arm_a8_intcps_Hwi_switchFromBootStack();
}

/* post__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_post__E( xdc_UInt intNum )
{
    ti_sysbios_family_arm_a8_intcps_Hwi_post(intNum);
}

/* getTaskSP__E */
xdc_Char* ti_sysbios_hal_Hwi_HwiProxy_getTaskSP__E( void )
{
    return ti_sysbios_family_arm_a8_intcps_Hwi_getTaskSP();
}

/* disableInterrupt__E */
xdc_UInt ti_sysbios_hal_Hwi_HwiProxy_disableInterrupt__E( xdc_UInt intNum )
{
    return ti_sysbios_family_arm_a8_intcps_Hwi_disableInterrupt(intNum);
}

/* enableInterrupt__E */
xdc_UInt ti_sysbios_hal_Hwi_HwiProxy_enableInterrupt__E( xdc_UInt intNum )
{
    return ti_sysbios_family_arm_a8_intcps_Hwi_enableInterrupt(intNum);
}

/* restoreInterrupt__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_restoreInterrupt__E( xdc_UInt intNum, xdc_UInt key )
{
    ti_sysbios_family_arm_a8_intcps_Hwi_restoreInterrupt(intNum, key);
}

/* clearInterrupt__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_clearInterrupt__E( xdc_UInt intNum )
{
    ti_sysbios_family_arm_a8_intcps_Hwi_clearInterrupt(intNum);
}

/* getFunc__E */
ti_sysbios_interfaces_IHwi_FuncPtr ti_sysbios_hal_Hwi_HwiProxy_getFunc__E( ti_sysbios_hal_Hwi_HwiProxy_Handle __inst, xdc_UArg* arg )
{
    return ti_sysbios_family_arm_a8_intcps_Hwi_getFunc((ti_sysbios_family_arm_a8_intcps_Hwi_Handle)__inst, arg);
}

/* setFunc__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_setFunc__E( ti_sysbios_hal_Hwi_HwiProxy_Handle __inst, ti_sysbios_interfaces_IHwi_FuncPtr fxn, xdc_UArg arg )
{
    ti_sysbios_family_arm_a8_intcps_Hwi_setFunc((ti_sysbios_family_arm_a8_intcps_Hwi_Handle)__inst, fxn, arg);
}

/* getHookContext__E */
xdc_Ptr ti_sysbios_hal_Hwi_HwiProxy_getHookContext__E( ti_sysbios_hal_Hwi_HwiProxy_Handle __inst, xdc_Int id )
{
    return ti_sysbios_family_arm_a8_intcps_Hwi_getHookContext((ti_sysbios_family_arm_a8_intcps_Hwi_Handle)__inst, id);
}

/* setHookContext__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_setHookContext__E( ti_sysbios_hal_Hwi_HwiProxy_Handle __inst, xdc_Int id, xdc_Ptr hookContext )
{
    ti_sysbios_family_arm_a8_intcps_Hwi_setHookContext((ti_sysbios_family_arm_a8_intcps_Hwi_Handle)__inst, id, hookContext);
}

/* getIrp__E */
ti_sysbios_interfaces_IHwi_Irp ti_sysbios_hal_Hwi_HwiProxy_getIrp__E( ti_sysbios_hal_Hwi_HwiProxy_Handle __inst )
{
    return ti_sysbios_family_arm_a8_intcps_Hwi_getIrp((ti_sysbios_family_arm_a8_intcps_Hwi_Handle)__inst);
}


/*
 * ======== ti.sysbios.hal.Timer_TimerProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.timers.dmtimer.Timer */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_hal_Timer_TimerProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_timers_dmtimer_Timer_Module__startupDone__S();
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
    return ti_sysbios_timers_dmtimer_Timer_Object__create__S(oa, osz, aa, (ti_sysbios_timers_dmtimer_Timer___ParamsPtr)pa, sizeof(ti_sysbios_interfaces_ITimer_Params), eb);
}

/* Object__delete__S */
void ti_sysbios_hal_Timer_TimerProxy_Object__delete__S( Ptr instp ) 
{
    ti_sysbios_timers_dmtimer_Timer_Object__delete__S(instp);
}

/* Params__init__S */
void ti_sysbios_hal_Timer_TimerProxy_Params__init__S( xdc_Ptr dst, const xdc_Ptr src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_timers_dmtimer_Timer_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label* ti_sysbios_hal_Timer_TimerProxy_Handle__label__S( Ptr obj, xdc_runtime_Types_Label* lab )
{
    return ti_sysbios_timers_dmtimer_Timer_Handle__label__S(obj, lab);
}

/* getNumTimers__E */
xdc_UInt ti_sysbios_hal_Timer_TimerProxy_getNumTimers__E( void )
{
    return ti_sysbios_timers_dmtimer_Timer_getNumTimers();
}

/* getStatus__E */
ti_sysbios_interfaces_ITimer_Status ti_sysbios_hal_Timer_TimerProxy_getStatus__E( xdc_UInt id )
{
    return ti_sysbios_timers_dmtimer_Timer_getStatus(id);
}

/* startup__E */
xdc_Void ti_sysbios_hal_Timer_TimerProxy_startup__E( void )
{
    ti_sysbios_timers_dmtimer_Timer_startup();
}

/* getMaxTicks__E */
xdc_UInt32 ti_sysbios_hal_Timer_TimerProxy_getMaxTicks__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst, xdc_UInt32 periodCounts )
{
    return ti_sysbios_timers_dmtimer_Timer_getMaxTicks((ti_sysbios_timers_dmtimer_Timer_Handle)__inst, periodCounts);
}

/* setNextTick__E */
xdc_Void ti_sysbios_hal_Timer_TimerProxy_setNextTick__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst, xdc_UInt32 newPeriod, xdc_UInt32 countsPerTick )
{
    ti_sysbios_timers_dmtimer_Timer_setNextTick((ti_sysbios_timers_dmtimer_Timer_Handle)__inst, newPeriod, countsPerTick);
}

/* start__E */
xdc_Void ti_sysbios_hal_Timer_TimerProxy_start__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst )
{
    ti_sysbios_timers_dmtimer_Timer_start((ti_sysbios_timers_dmtimer_Timer_Handle)__inst);
}

/* stop__E */
xdc_Void ti_sysbios_hal_Timer_TimerProxy_stop__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst )
{
    ti_sysbios_timers_dmtimer_Timer_stop((ti_sysbios_timers_dmtimer_Timer_Handle)__inst);
}

/* setPeriod__E */
xdc_Void ti_sysbios_hal_Timer_TimerProxy_setPeriod__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst, xdc_UInt32 period )
{
    ti_sysbios_timers_dmtimer_Timer_setPeriod((ti_sysbios_timers_dmtimer_Timer_Handle)__inst, period);
}

/* setPeriodMicroSecs__E */
xdc_Bool ti_sysbios_hal_Timer_TimerProxy_setPeriodMicroSecs__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst, xdc_UInt32 microsecs )
{
    return ti_sysbios_timers_dmtimer_Timer_setPeriodMicroSecs((ti_sysbios_timers_dmtimer_Timer_Handle)__inst, microsecs);
}

/* getPeriod__E */
xdc_UInt32 ti_sysbios_hal_Timer_TimerProxy_getPeriod__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst )
{
    return ti_sysbios_timers_dmtimer_Timer_getPeriod((ti_sysbios_timers_dmtimer_Timer_Handle)__inst);
}

/* getCount__E */
xdc_UInt32 ti_sysbios_hal_Timer_TimerProxy_getCount__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst )
{
    return ti_sysbios_timers_dmtimer_Timer_getCount((ti_sysbios_timers_dmtimer_Timer_Handle)__inst);
}

/* getFreq__E */
xdc_Void ti_sysbios_hal_Timer_TimerProxy_getFreq__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst, xdc_runtime_Types_FreqHz* freq )
{
    ti_sysbios_timers_dmtimer_Timer_getFreq((ti_sysbios_timers_dmtimer_Timer_Handle)__inst, freq);
}

/* getFunc__E */
ti_sysbios_interfaces_ITimer_FuncPtr ti_sysbios_hal_Timer_TimerProxy_getFunc__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst, xdc_UArg* arg )
{
    return ti_sysbios_timers_dmtimer_Timer_getFunc((ti_sysbios_timers_dmtimer_Timer_Handle)__inst, arg);
}

/* setFunc__E */
xdc_Void ti_sysbios_hal_Timer_TimerProxy_setFunc__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst, ti_sysbios_interfaces_ITimer_FuncPtr fxn, xdc_UArg arg )
{
    ti_sysbios_timers_dmtimer_Timer_setFunc((ti_sysbios_timers_dmtimer_Timer_Handle)__inst, fxn, arg);
}

/* trigger__E */
xdc_Void ti_sysbios_hal_Timer_TimerProxy_trigger__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst, xdc_UInt32 cycles )
{
    ti_sysbios_timers_dmtimer_Timer_trigger((ti_sysbios_timers_dmtimer_Timer_Handle)__inst, cycles);
}

/* getExpiredCounts__E */
xdc_UInt32 ti_sysbios_hal_Timer_TimerProxy_getExpiredCounts__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst )
{
    return ti_sysbios_timers_dmtimer_Timer_getExpiredCounts((ti_sysbios_timers_dmtimer_Timer_Handle)__inst);
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
 * ======== ti.sysbios.timers.dmtimer.Timer_TimerSupportProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.family.arm.a8.ti81xx.TimerSupport */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_timers_dmtimer_Timer_TimerSupportProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Module__startupDone__S();
}

/* enable__E */
xdc_Void ti_sysbios_timers_dmtimer_Timer_TimerSupportProxy_enable__E( xdc_UInt timerId, xdc_runtime_Error_Block* eb )
{
    ti_sysbios_family_arm_a8_ti81xx_TimerSupport_enable(timerId, eb);
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
 * ======== xdc.runtime.Timestamp_SupportProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.family.arm.a8.TimestampProvider */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Timestamp_SupportProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_family_arm_a8_TimestampProvider_Module__startupDone__S();
}

/* get32__E */
xdc_Bits32 xdc_runtime_Timestamp_SupportProxy_get32__E( void )
{
    return ti_sysbios_family_arm_a8_TimestampProvider_get32();
}

/* get64__E */
xdc_Void xdc_runtime_Timestamp_SupportProxy_get64__E( xdc_runtime_Types_Timestamp64* result )
{
    ti_sysbios_family_arm_a8_TimestampProvider_get64(result);
}

/* getFreq__E */
xdc_Void xdc_runtime_Timestamp_SupportProxy_getFreq__E( xdc_runtime_Types_FreqHz* freq )
{
    ti_sysbios_family_arm_a8_TimestampProvider_getFreq(freq);
}


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
 * ======== ti.sysbios.family.arm.a8.intcps.Hwi OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_family_arm_a8_intcps_Hwi_Object2__ s0; char c; } ti_sysbios_family_arm_a8_intcps_Hwi___S1;
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_family_arm_a8_intcps_Hwi_Object__DESC__C = {
    (Ptr)0, /* fxnTab */
    &ti_sysbios_family_arm_a8_intcps_Hwi_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_family_arm_a8_intcps_Hwi___S1) - sizeof(ti_sysbios_family_arm_a8_intcps_Hwi_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_family_arm_a8_intcps_Hwi_Object2__), /* objSize */
    (Ptr)&ti_sysbios_family_arm_a8_intcps_Hwi_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_family_arm_a8_intcps_Hwi_Params), /* prmsSize */
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
 * ======== ti.sysbios.timers.dmtimer.Timer OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_timers_dmtimer_Timer_Object2__ s0; char c; } ti_sysbios_timers_dmtimer_Timer___S1;
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_timers_dmtimer_Timer_Object__DESC__C = {
    (Ptr)0, /* fxnTab */
    &ti_sysbios_timers_dmtimer_Timer_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_timers_dmtimer_Timer___S1) - sizeof(ti_sysbios_timers_dmtimer_Timer_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_timers_dmtimer_Timer_Object2__), /* objSize */
    (Ptr)&ti_sysbios_timers_dmtimer_Timer_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_timers_dmtimer_Timer_Params), /* prmsSize */
};



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
    lab->modId = 32811;
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
 * ======== ti.sysbios.family.arm.a8.Cache SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_family_arm_a8_Cache_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== ti.sysbios.family.arm.a8.Mmu SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_family_arm_a8_Mmu_Module__startupDone__S( void ) 
{
    return ti_sysbios_family_arm_a8_Mmu_Module__startupDone__F();
}



/*
 * ======== ti.sysbios.family.arm.a8.TimestampProvider SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_family_arm_a8_TimestampProvider_Module__startupDone__S( void ) 
{
    return ti_sysbios_family_arm_a8_TimestampProvider_Module__startupDone__F();
}



/*
 * ======== ti.sysbios.family.arm.a8.intcps.Hwi SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_family_arm_a8_intcps_Hwi_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_family_arm_a8_intcps_Hwi_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_family_arm_a8_intcps_Hwi_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_family_arm_a8_intcps_Hwi_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_family_arm_a8_intcps_Hwi_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_family_arm_a8_intcps_Hwi_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_family_arm_a8_intcps_Hwi_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_family_arm_a8_intcps_Hwi_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_family_arm_a8_intcps_Hwi_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_family_arm_a8_intcps_Hwi_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_family_arm_a8_intcps_Hwi_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_family_arm_a8_intcps_Hwi_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_family_arm_a8_intcps_Hwi_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_family_arm_a8_intcps_Hwi_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_family_arm_a8_intcps_Hwi_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_family_arm_a8_intcps_Hwi_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_family_arm_a8_intcps_Hwi_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_family_arm_a8_intcps_Hwi_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_family_arm_a8_intcps_Hwi_Module__startupDone__S( void ) 
{
    return ti_sysbios_family_arm_a8_intcps_Hwi_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label* ti_sysbios_family_arm_a8_intcps_Hwi_Handle__label__S( xdc_Ptr obj, xdc_runtime_Types_Label* lab ) 
{
    lab->handle = obj;
    lab->modId = 32814;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_family_arm_a8_intcps_Hwi_Params__init__S( xdc_Ptr prms, xdc_Ptr src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_family_arm_a8_intcps_Hwi_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_family_arm_a8_intcps_Hwi_Object__get__S( xdc_Ptr oa, xdc_Int i ) 
{
    if (oa) {
        return ((ti_sysbios_family_arm_a8_intcps_Hwi_Object__*)oa) + i;
    }

    if (ti_sysbios_family_arm_a8_intcps_Hwi_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_family_arm_a8_intcps_Hwi_Object__*)ti_sysbios_family_arm_a8_intcps_Hwi_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_family_arm_a8_intcps_Hwi_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_family_arm_a8_intcps_Hwi_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_family_arm_a8_intcps_Hwi_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_family_arm_a8_intcps_Hwi_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_family_arm_a8_intcps_Hwi_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const ti_sysbios_family_arm_a8_intcps_Hwi___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    ti_sysbios_family_arm_a8_intcps_Hwi_Params prms;
    ti_sysbios_family_arm_a8_intcps_Hwi_Object* obj;
    int iStat;

    ti_sysbios_family_arm_a8_intcps_Hwi_Args__create* args = aa;
    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_family_arm_a8_intcps_Hwi_Object__DESC__C, oa, osz, &prms, (xdc_Ptr)pa, psz, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_family_arm_a8_intcps_Hwi_Instance_init__F(obj, args->intNum, args->hwiFxn, &prms, eb);
    if (xdc_runtime_Error_check(eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_arm_a8_intcps_Hwi_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_family_arm_a8_intcps_Hwi_Instance_finalize__F, iStat, (xdc_Bool)(oa != NULL));
        return NULL;
    }

    return obj;
}

/* Object__destruct__S */
xdc_Void ti_sysbios_family_arm_a8_intcps_Hwi_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_arm_a8_intcps_Hwi_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_family_arm_a8_intcps_Hwi_Instance_finalize__F, 0, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_family_arm_a8_intcps_Hwi_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_arm_a8_intcps_Hwi_Object__DESC__C, *((ti_sysbios_family_arm_a8_intcps_Hwi_Object**)instp), (xdc_Fxn)ti_sysbios_family_arm_a8_intcps_Hwi_Instance_finalize__F, 0, FALSE);
    *((ti_sysbios_family_arm_a8_intcps_Hwi_Handle*)instp) = NULL;
}


/*
 * ======== ti.sysbios.family.arm.a8.ti81xx.TimerSupport SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Module__startupDone__S( void ) 
{
    return ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Module__startupDone__F();
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
    lab->modId = 32807;
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
    lab->modId = 32808;
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
    lab->modId = 32791;
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
    lab->modId = 32792;
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
    lab->modId = 32823;
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
    lab->modId = 32795;
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
    lab->modId = 32798;
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
    lab->modId = 32799;
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
    lab->modId = 32800;
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
    lab->modId = 32801;
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
 * ======== ti.sysbios.timers.dmtimer.Timer SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_timers_dmtimer_Timer_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_timers_dmtimer_Timer_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_timers_dmtimer_Timer_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_timers_dmtimer_Timer_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_timers_dmtimer_Timer_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_timers_dmtimer_Timer_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_timers_dmtimer_Timer_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_timers_dmtimer_Timer_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_timers_dmtimer_Timer_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_timers_dmtimer_Timer_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_timers_dmtimer_Timer_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_timers_dmtimer_Timer_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_timers_dmtimer_Timer_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_timers_dmtimer_Timer_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_timers_dmtimer_Timer_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_timers_dmtimer_Timer_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_timers_dmtimer_Timer_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_timers_dmtimer_Timer_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_timers_dmtimer_Timer_Module__startupDone__S( void ) 
{
    return ti_sysbios_timers_dmtimer_Timer_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label* ti_sysbios_timers_dmtimer_Timer_Handle__label__S( xdc_Ptr obj, xdc_runtime_Types_Label* lab ) 
{
    lab->handle = obj;
    lab->modId = 32819;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_timers_dmtimer_Timer_Params__init__S( xdc_Ptr prms, xdc_Ptr src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_timers_dmtimer_Timer_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_timers_dmtimer_Timer_Object__get__S( xdc_Ptr oa, xdc_Int i ) 
{
    if (oa) {
        return ((ti_sysbios_timers_dmtimer_Timer_Object__*)oa) + i;
    }

    if (ti_sysbios_timers_dmtimer_Timer_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_timers_dmtimer_Timer_Object__*)ti_sysbios_timers_dmtimer_Timer_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_timers_dmtimer_Timer_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_timers_dmtimer_Timer_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_timers_dmtimer_Timer_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_timers_dmtimer_Timer_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_timers_dmtimer_Timer_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_timers_dmtimer_Timer_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const ti_sysbios_timers_dmtimer_Timer___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    ti_sysbios_timers_dmtimer_Timer_Params prms;
    ti_sysbios_timers_dmtimer_Timer_Object* obj;
    int iStat;

    ti_sysbios_timers_dmtimer_Timer_Args__create* args = aa;
    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_timers_dmtimer_Timer_Object__DESC__C, oa, osz, &prms, (xdc_Ptr)pa, psz, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_timers_dmtimer_Timer_Instance_init__F(obj, args->id, args->tickFxn, &prms, eb);
    if (xdc_runtime_Error_check(eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_timers_dmtimer_Timer_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_timers_dmtimer_Timer_Instance_finalize__F, iStat, (xdc_Bool)(oa != NULL));
        return NULL;
    }

    return obj;
}

/* Object__destruct__S */
xdc_Void ti_sysbios_timers_dmtimer_Timer_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_timers_dmtimer_Timer_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_timers_dmtimer_Timer_Instance_finalize__F, 0, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_timers_dmtimer_Timer_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_timers_dmtimer_Timer_Object__DESC__C, *((ti_sysbios_timers_dmtimer_Timer_Object**)instp), (xdc_Fxn)ti_sysbios_timers_dmtimer_Timer_Instance_finalize__F, 0, FALSE);
    *((ti_sysbios_timers_dmtimer_Timer_Handle*)instp) = NULL;
}


/*
 * ======== ti.sysbios.timers.dmtimer.Timer_TimerSupportProxy SYSTEM FUNCTIONS ========
 */

xdc_Bool ti_sysbios_timers_dmtimer_Timer_TimerSupportProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr ti_sysbios_timers_dmtimer_Timer_TimerSupportProxy_Proxy__delegate__S( void )
{
    return 0;
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
 * ======== xdc.runtime.Timestamp SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Timestamp_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== xdc.runtime.Timestamp_SupportProxy SYSTEM FUNCTIONS ========
 */

xdc_Bool xdc_runtime_Timestamp_SupportProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr xdc_runtime_Timestamp_SupportProxy_Proxy__delegate__S( void )
{
    return 0;
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
#pragma DATA_SECTION(xdc_runtime_IGateProvider_Interface__BASE__C, ".const:xdc_runtime_IGateProvider_Interface__BASE__C");
#pragma DATA_SECTION(xdc_runtime_IHeap_Interface__BASE__C, ".const:xdc_runtime_IHeap_Interface__BASE__C");
#pragma DATA_SECTION(xdc_runtime_ISystemSupport_Interface__BASE__C, ".const:xdc_runtime_ISystemSupport_Interface__BASE__C");
#pragma DATA_SECTION(xdc_runtime_ITimestampClient_Interface__BASE__C, ".const:xdc_runtime_ITimestampClient_Interface__BASE__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__FXNS__C, ".const:ti_sysbios_gates_GateHwi_Module__FXNS__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__FXNS__C, ".const:ti_sysbios_gates_GateMutex_Module__FXNS__C");
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__FXNS__C, ".const:ti_sysbios_heaps_HeapMem_Module__FXNS__C");
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__FXNS__C, ".const:xdc_runtime_SysMin_Module__FXNS__C");
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__FXNS__C, ".const:xdc_runtime_Timestamp_Module__FXNS__C");
#pragma DATA_SECTION(ti_sdo_utils_NameServerRemoteNull_Object__PARAMS__C, ".const:ti_sdo_utils_NameServerRemoteNull_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_intcps_Hwi_Object__PARAMS__C, ".const:ti_sysbios_family_arm_a8_intcps_Hwi_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Object__PARAMS__C, ".const:ti_sysbios_gates_GateHwi_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Object__PARAMS__C, ".const:ti_sysbios_gates_GateMutex_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Object__PARAMS__C, ".const:ti_sysbios_hal_Hwi_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Object__PARAMS__C, ".const:ti_sysbios_hal_Timer_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Object__PARAMS__C, ".const:ti_sysbios_heaps_HeapMem_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Object__PARAMS__C, ".const:ti_sysbios_knl_Clock_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Object__PARAMS__C, ".const:ti_sysbios_knl_Queue_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Object__PARAMS__C, ".const:ti_sysbios_knl_Semaphore_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Object__PARAMS__C, ".const:ti_sysbios_knl_Swi_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_Object__PARAMS__C, ".const:ti_sysbios_knl_Task_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_timers_dmtimer_Timer_Object__PARAMS__C, ".const:ti_sysbios_timers_dmtimer_Timer_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_intcps_Hwi_Module_State_nonPluggedHwi__O, ".const:ti_sysbios_family_arm_a8_intcps_Hwi_Module_State_nonPluggedHwi__O");
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Instance_State_sem__O, ".const:ti_sysbios_gates_GateMutex_Instance_State_sem__O");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module_State_clockQ__O, ".const:ti_sysbios_knl_Clock_Module_State_clockQ__O");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Instance_State_pendQ__O, ".const:ti_sysbios_knl_Semaphore_Instance_State_pendQ__O");
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module_State_inactiveQ__O, ".const:ti_sysbios_knl_Task_Module_State_inactiveQ__O");
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module_State_terminatedQ__O, ".const:ti_sysbios_knl_Task_Module_State_terminatedQ__O");
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
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_Cache_Module__diagsEnabled__C, ".const:ti_sysbios_family_arm_a8_Cache_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_Cache_Module__diagsIncluded__C, ".const:ti_sysbios_family_arm_a8_Cache_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_Cache_Module__diagsMask__C, ".const:ti_sysbios_family_arm_a8_Cache_Module__diagsMask__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_Cache_Module__gateObj__C, ".const:ti_sysbios_family_arm_a8_Cache_Module__gateObj__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_Cache_Module__gatePrms__C, ".const:ti_sysbios_family_arm_a8_Cache_Module__gatePrms__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_Cache_Module__id__C, ".const:ti_sysbios_family_arm_a8_Cache_Module__id__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_Cache_Module__loggerDefined__C, ".const:ti_sysbios_family_arm_a8_Cache_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_Cache_Module__loggerObj__C, ".const:ti_sysbios_family_arm_a8_Cache_Module__loggerObj__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_Cache_Module__loggerFxn0__C, ".const:ti_sysbios_family_arm_a8_Cache_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_Cache_Module__loggerFxn1__C, ".const:ti_sysbios_family_arm_a8_Cache_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_Cache_Module__loggerFxn2__C, ".const:ti_sysbios_family_arm_a8_Cache_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_Cache_Module__loggerFxn4__C, ".const:ti_sysbios_family_arm_a8_Cache_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_Cache_Module__loggerFxn8__C, ".const:ti_sysbios_family_arm_a8_Cache_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_Cache_Module__startupDoneFxn__C, ".const:ti_sysbios_family_arm_a8_Cache_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_Cache_Object__count__C, ".const:ti_sysbios_family_arm_a8_Cache_Object__count__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_Cache_Object__heap__C, ".const:ti_sysbios_family_arm_a8_Cache_Object__heap__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_Cache_Object__sizeof__C, ".const:ti_sysbios_family_arm_a8_Cache_Object__sizeof__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_Cache_Object__table__C, ".const:ti_sysbios_family_arm_a8_Cache_Object__table__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_Cache_A_badBlockLength__C, ".const:ti_sysbios_family_arm_a8_Cache_A_badBlockLength__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_Cache_A_blockCrossesPage__C, ".const:ti_sysbios_family_arm_a8_Cache_A_blockCrossesPage__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_Cache_enableCache__C, ".const:ti_sysbios_family_arm_a8_Cache_enableCache__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_Cache_unlockL2Cache__C, ".const:ti_sysbios_family_arm_a8_Cache_unlockL2Cache__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_Cache_branchPredictionEnabled__C, ".const:ti_sysbios_family_arm_a8_Cache_branchPredictionEnabled__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_Mmu_Module__diagsEnabled__C, ".const:ti_sysbios_family_arm_a8_Mmu_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_Mmu_Module__diagsIncluded__C, ".const:ti_sysbios_family_arm_a8_Mmu_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_Mmu_Module__diagsMask__C, ".const:ti_sysbios_family_arm_a8_Mmu_Module__diagsMask__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_Mmu_Module__gateObj__C, ".const:ti_sysbios_family_arm_a8_Mmu_Module__gateObj__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_Mmu_Module__gatePrms__C, ".const:ti_sysbios_family_arm_a8_Mmu_Module__gatePrms__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_Mmu_Module__id__C, ".const:ti_sysbios_family_arm_a8_Mmu_Module__id__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_Mmu_Module__loggerDefined__C, ".const:ti_sysbios_family_arm_a8_Mmu_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_Mmu_Module__loggerObj__C, ".const:ti_sysbios_family_arm_a8_Mmu_Module__loggerObj__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_Mmu_Module__loggerFxn0__C, ".const:ti_sysbios_family_arm_a8_Mmu_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_Mmu_Module__loggerFxn1__C, ".const:ti_sysbios_family_arm_a8_Mmu_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_Mmu_Module__loggerFxn2__C, ".const:ti_sysbios_family_arm_a8_Mmu_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_Mmu_Module__loggerFxn4__C, ".const:ti_sysbios_family_arm_a8_Mmu_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_Mmu_Module__loggerFxn8__C, ".const:ti_sysbios_family_arm_a8_Mmu_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_Mmu_Module__startupDoneFxn__C, ".const:ti_sysbios_family_arm_a8_Mmu_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_Mmu_Object__count__C, ".const:ti_sysbios_family_arm_a8_Mmu_Object__count__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_Mmu_Object__heap__C, ".const:ti_sysbios_family_arm_a8_Mmu_Object__heap__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_Mmu_Object__sizeof__C, ".const:ti_sysbios_family_arm_a8_Mmu_Object__sizeof__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_Mmu_Object__table__C, ".const:ti_sysbios_family_arm_a8_Mmu_Object__table__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_Mmu_A_nullPointer__C, ".const:ti_sysbios_family_arm_a8_Mmu_A_nullPointer__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_Mmu_A_unknownDescType__C, ".const:ti_sysbios_family_arm_a8_Mmu_A_unknownDescType__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_Mmu_defaultAttrs__C, ".const:ti_sysbios_family_arm_a8_Mmu_defaultAttrs__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_Mmu_enableMMU__C, ".const:ti_sysbios_family_arm_a8_Mmu_enableMMU__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_TimestampProvider_Module__diagsEnabled__C, ".const:ti_sysbios_family_arm_a8_TimestampProvider_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_TimestampProvider_Module__diagsIncluded__C, ".const:ti_sysbios_family_arm_a8_TimestampProvider_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_TimestampProvider_Module__diagsMask__C, ".const:ti_sysbios_family_arm_a8_TimestampProvider_Module__diagsMask__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_TimestampProvider_Module__gateObj__C, ".const:ti_sysbios_family_arm_a8_TimestampProvider_Module__gateObj__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_TimestampProvider_Module__gatePrms__C, ".const:ti_sysbios_family_arm_a8_TimestampProvider_Module__gatePrms__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_TimestampProvider_Module__id__C, ".const:ti_sysbios_family_arm_a8_TimestampProvider_Module__id__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_TimestampProvider_Module__loggerDefined__C, ".const:ti_sysbios_family_arm_a8_TimestampProvider_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_TimestampProvider_Module__loggerObj__C, ".const:ti_sysbios_family_arm_a8_TimestampProvider_Module__loggerObj__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_TimestampProvider_Module__loggerFxn0__C, ".const:ti_sysbios_family_arm_a8_TimestampProvider_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_TimestampProvider_Module__loggerFxn1__C, ".const:ti_sysbios_family_arm_a8_TimestampProvider_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_TimestampProvider_Module__loggerFxn2__C, ".const:ti_sysbios_family_arm_a8_TimestampProvider_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_TimestampProvider_Module__loggerFxn4__C, ".const:ti_sysbios_family_arm_a8_TimestampProvider_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_TimestampProvider_Module__loggerFxn8__C, ".const:ti_sysbios_family_arm_a8_TimestampProvider_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_TimestampProvider_Module__startupDoneFxn__C, ".const:ti_sysbios_family_arm_a8_TimestampProvider_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_TimestampProvider_Object__count__C, ".const:ti_sysbios_family_arm_a8_TimestampProvider_Object__count__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_TimestampProvider_Object__heap__C, ".const:ti_sysbios_family_arm_a8_TimestampProvider_Object__heap__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_TimestampProvider_Object__sizeof__C, ".const:ti_sysbios_family_arm_a8_TimestampProvider_Object__sizeof__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_TimestampProvider_Object__table__C, ".const:ti_sysbios_family_arm_a8_TimestampProvider_Object__table__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_intcps_Hwi_Object__DESC__C, ".const:ti_sysbios_family_arm_a8_intcps_Hwi_Object__DESC__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_intcps_Hwi_Object__PARAMS__C, ".const:ti_sysbios_family_arm_a8_intcps_Hwi_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_intcps_Hwi_Module__diagsEnabled__C, ".const:ti_sysbios_family_arm_a8_intcps_Hwi_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_intcps_Hwi_Module__diagsIncluded__C, ".const:ti_sysbios_family_arm_a8_intcps_Hwi_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_intcps_Hwi_Module__diagsMask__C, ".const:ti_sysbios_family_arm_a8_intcps_Hwi_Module__diagsMask__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_intcps_Hwi_Module__gateObj__C, ".const:ti_sysbios_family_arm_a8_intcps_Hwi_Module__gateObj__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_intcps_Hwi_Module__gatePrms__C, ".const:ti_sysbios_family_arm_a8_intcps_Hwi_Module__gatePrms__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_intcps_Hwi_Module__id__C, ".const:ti_sysbios_family_arm_a8_intcps_Hwi_Module__id__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_intcps_Hwi_Module__loggerDefined__C, ".const:ti_sysbios_family_arm_a8_intcps_Hwi_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_intcps_Hwi_Module__loggerObj__C, ".const:ti_sysbios_family_arm_a8_intcps_Hwi_Module__loggerObj__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_intcps_Hwi_Module__loggerFxn0__C, ".const:ti_sysbios_family_arm_a8_intcps_Hwi_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_intcps_Hwi_Module__loggerFxn1__C, ".const:ti_sysbios_family_arm_a8_intcps_Hwi_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_intcps_Hwi_Module__loggerFxn2__C, ".const:ti_sysbios_family_arm_a8_intcps_Hwi_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_intcps_Hwi_Module__loggerFxn4__C, ".const:ti_sysbios_family_arm_a8_intcps_Hwi_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_intcps_Hwi_Module__loggerFxn8__C, ".const:ti_sysbios_family_arm_a8_intcps_Hwi_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_intcps_Hwi_Module__startupDoneFxn__C, ".const:ti_sysbios_family_arm_a8_intcps_Hwi_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_intcps_Hwi_Object__count__C, ".const:ti_sysbios_family_arm_a8_intcps_Hwi_Object__count__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_intcps_Hwi_Object__heap__C, ".const:ti_sysbios_family_arm_a8_intcps_Hwi_Object__heap__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_intcps_Hwi_Object__sizeof__C, ".const:ti_sysbios_family_arm_a8_intcps_Hwi_Object__sizeof__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_intcps_Hwi_Object__table__C, ".const:ti_sysbios_family_arm_a8_intcps_Hwi_Object__table__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_intcps_Hwi_dispatcherAutoNestingSupport__C, ".const:ti_sysbios_family_arm_a8_intcps_Hwi_dispatcherAutoNestingSupport__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_intcps_Hwi_dispatcherSwiSupport__C, ".const:ti_sysbios_family_arm_a8_intcps_Hwi_dispatcherSwiSupport__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_intcps_Hwi_dispatcherTaskSupport__C, ".const:ti_sysbios_family_arm_a8_intcps_Hwi_dispatcherTaskSupport__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_intcps_Hwi_dispatcherIrpTrackingSupport__C, ".const:ti_sysbios_family_arm_a8_intcps_Hwi_dispatcherIrpTrackingSupport__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_intcps_Hwi_NUM_PRIORITIES__C, ".const:ti_sysbios_family_arm_a8_intcps_Hwi_NUM_PRIORITIES__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_intcps_Hwi_fiqStack__C, ".const:ti_sysbios_family_arm_a8_intcps_Hwi_fiqStack__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_intcps_Hwi_excStack__C, ".const:ti_sysbios_family_arm_a8_intcps_Hwi_excStack__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_intcps_Hwi_mir0Mask__C, ".const:ti_sysbios_family_arm_a8_intcps_Hwi_mir0Mask__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_intcps_Hwi_mir1Mask__C, ".const:ti_sysbios_family_arm_a8_intcps_Hwi_mir1Mask__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_intcps_Hwi_mir2Mask__C, ".const:ti_sysbios_family_arm_a8_intcps_Hwi_mir2Mask__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_intcps_Hwi_mir3Mask__C, ".const:ti_sysbios_family_arm_a8_intcps_Hwi_mir3Mask__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_intcps_Hwi_E_alreadyDefined__C, ".const:ti_sysbios_family_arm_a8_intcps_Hwi_E_alreadyDefined__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_intcps_Hwi_E_handleNotFound__C, ".const:ti_sysbios_family_arm_a8_intcps_Hwi_E_handleNotFound__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_intcps_Hwi_E_undefined__C, ".const:ti_sysbios_family_arm_a8_intcps_Hwi_E_undefined__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_intcps_Hwi_E_badIntNum__C, ".const:ti_sysbios_family_arm_a8_intcps_Hwi_E_badIntNum__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_intcps_Hwi_E_excMin__C, ".const:ti_sysbios_family_arm_a8_intcps_Hwi_E_excMin__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_intcps_Hwi_LM_begin__C, ".const:ti_sysbios_family_arm_a8_intcps_Hwi_LM_begin__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_intcps_Hwi_LD_end__C, ".const:ti_sysbios_family_arm_a8_intcps_Hwi_LD_end__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_intcps_Hwi_swiDisable__C, ".const:ti_sysbios_family_arm_a8_intcps_Hwi_swiDisable__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_intcps_Hwi_swiRestoreHwi__C, ".const:ti_sysbios_family_arm_a8_intcps_Hwi_swiRestoreHwi__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_intcps_Hwi_taskDisable__C, ".const:ti_sysbios_family_arm_a8_intcps_Hwi_taskDisable__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_intcps_Hwi_taskRestoreHwi__C, ".const:ti_sysbios_family_arm_a8_intcps_Hwi_taskRestoreHwi__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_intcps_Hwi_hooks__C, ".const:ti_sysbios_family_arm_a8_intcps_Hwi_hooks__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Module__diagsEnabled__C, ".const:ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Module__diagsIncluded__C, ".const:ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Module__diagsMask__C, ".const:ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Module__diagsMask__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Module__gateObj__C, ".const:ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Module__gateObj__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Module__gatePrms__C, ".const:ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Module__gatePrms__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Module__id__C, ".const:ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Module__id__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Module__loggerDefined__C, ".const:ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Module__loggerObj__C, ".const:ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Module__loggerObj__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Module__loggerFxn0__C, ".const:ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Module__loggerFxn1__C, ".const:ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Module__loggerFxn2__C, ".const:ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Module__loggerFxn4__C, ".const:ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Module__loggerFxn8__C, ".const:ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Module__startupDoneFxn__C, ".const:ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Object__count__C, ".const:ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Object__count__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Object__heap__C, ".const:ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Object__heap__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Object__sizeof__C, ".const:ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Object__sizeof__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Object__table__C, ".const:ti_sysbios_family_arm_a8_ti81xx_TimerSupport_Object__table__C");
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
#pragma DATA_SECTION(ti_sysbios_timers_dmtimer_Timer_Object__DESC__C, ".const:ti_sysbios_timers_dmtimer_Timer_Object__DESC__C");
#pragma DATA_SECTION(ti_sysbios_timers_dmtimer_Timer_Object__PARAMS__C, ".const:ti_sysbios_timers_dmtimer_Timer_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_timers_dmtimer_Timer_Module__diagsEnabled__C, ".const:ti_sysbios_timers_dmtimer_Timer_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_sysbios_timers_dmtimer_Timer_Module__diagsIncluded__C, ".const:ti_sysbios_timers_dmtimer_Timer_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_sysbios_timers_dmtimer_Timer_Module__diagsMask__C, ".const:ti_sysbios_timers_dmtimer_Timer_Module__diagsMask__C");
#pragma DATA_SECTION(ti_sysbios_timers_dmtimer_Timer_Module__gateObj__C, ".const:ti_sysbios_timers_dmtimer_Timer_Module__gateObj__C");
#pragma DATA_SECTION(ti_sysbios_timers_dmtimer_Timer_Module__gatePrms__C, ".const:ti_sysbios_timers_dmtimer_Timer_Module__gatePrms__C");
#pragma DATA_SECTION(ti_sysbios_timers_dmtimer_Timer_Module__id__C, ".const:ti_sysbios_timers_dmtimer_Timer_Module__id__C");
#pragma DATA_SECTION(ti_sysbios_timers_dmtimer_Timer_Module__loggerDefined__C, ".const:ti_sysbios_timers_dmtimer_Timer_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_sysbios_timers_dmtimer_Timer_Module__loggerObj__C, ".const:ti_sysbios_timers_dmtimer_Timer_Module__loggerObj__C");
#pragma DATA_SECTION(ti_sysbios_timers_dmtimer_Timer_Module__loggerFxn0__C, ".const:ti_sysbios_timers_dmtimer_Timer_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_sysbios_timers_dmtimer_Timer_Module__loggerFxn1__C, ".const:ti_sysbios_timers_dmtimer_Timer_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_sysbios_timers_dmtimer_Timer_Module__loggerFxn2__C, ".const:ti_sysbios_timers_dmtimer_Timer_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_sysbios_timers_dmtimer_Timer_Module__loggerFxn4__C, ".const:ti_sysbios_timers_dmtimer_Timer_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_sysbios_timers_dmtimer_Timer_Module__loggerFxn8__C, ".const:ti_sysbios_timers_dmtimer_Timer_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_sysbios_timers_dmtimer_Timer_Module__startupDoneFxn__C, ".const:ti_sysbios_timers_dmtimer_Timer_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_sysbios_timers_dmtimer_Timer_Object__count__C, ".const:ti_sysbios_timers_dmtimer_Timer_Object__count__C");
#pragma DATA_SECTION(ti_sysbios_timers_dmtimer_Timer_Object__heap__C, ".const:ti_sysbios_timers_dmtimer_Timer_Object__heap__C");
#pragma DATA_SECTION(ti_sysbios_timers_dmtimer_Timer_Object__sizeof__C, ".const:ti_sysbios_timers_dmtimer_Timer_Object__sizeof__C");
#pragma DATA_SECTION(ti_sysbios_timers_dmtimer_Timer_Object__table__C, ".const:ti_sysbios_timers_dmtimer_Timer_Object__table__C");
#pragma DATA_SECTION(ti_sysbios_timers_dmtimer_Timer_A_notAvailable__C, ".const:ti_sysbios_timers_dmtimer_Timer_A_notAvailable__C");
#pragma DATA_SECTION(ti_sysbios_timers_dmtimer_Timer_E_invalidTimer__C, ".const:ti_sysbios_timers_dmtimer_Timer_E_invalidTimer__C");
#pragma DATA_SECTION(ti_sysbios_timers_dmtimer_Timer_E_notAvailable__C, ".const:ti_sysbios_timers_dmtimer_Timer_E_notAvailable__C");
#pragma DATA_SECTION(ti_sysbios_timers_dmtimer_Timer_E_cannotSupport__C, ".const:ti_sysbios_timers_dmtimer_Timer_E_cannotSupport__C");
#pragma DATA_SECTION(ti_sysbios_timers_dmtimer_Timer_E_freqMismatch__C, ".const:ti_sysbios_timers_dmtimer_Timer_E_freqMismatch__C");
#pragma DATA_SECTION(ti_sysbios_timers_dmtimer_Timer_anyMask__C, ".const:ti_sysbios_timers_dmtimer_Timer_anyMask__C");
#pragma DATA_SECTION(ti_sysbios_timers_dmtimer_Timer_checkFrequency__C, ".const:ti_sysbios_timers_dmtimer_Timer_checkFrequency__C");
#pragma DATA_SECTION(ti_sysbios_timers_dmtimer_Timer_startupNeeded__C, ".const:ti_sysbios_timers_dmtimer_Timer_startupNeeded__C");
#pragma DATA_SECTION(ti_sysbios_timers_dmtimer_Timer_numTimerDevices__C, ".const:ti_sysbios_timers_dmtimer_Timer_numTimerDevices__C");
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
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__diagsEnabled__C, ".const:xdc_runtime_Timestamp_Module__diagsEnabled__C");
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__diagsIncluded__C, ".const:xdc_runtime_Timestamp_Module__diagsIncluded__C");
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__diagsMask__C, ".const:xdc_runtime_Timestamp_Module__diagsMask__C");
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__gateObj__C, ".const:xdc_runtime_Timestamp_Module__gateObj__C");
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__gatePrms__C, ".const:xdc_runtime_Timestamp_Module__gatePrms__C");
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__id__C, ".const:xdc_runtime_Timestamp_Module__id__C");
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__loggerDefined__C, ".const:xdc_runtime_Timestamp_Module__loggerDefined__C");
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__loggerObj__C, ".const:xdc_runtime_Timestamp_Module__loggerObj__C");
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__loggerFxn0__C, ".const:xdc_runtime_Timestamp_Module__loggerFxn0__C");
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__loggerFxn1__C, ".const:xdc_runtime_Timestamp_Module__loggerFxn1__C");
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__loggerFxn2__C, ".const:xdc_runtime_Timestamp_Module__loggerFxn2__C");
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__loggerFxn4__C, ".const:xdc_runtime_Timestamp_Module__loggerFxn4__C");
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__loggerFxn8__C, ".const:xdc_runtime_Timestamp_Module__loggerFxn8__C");
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__startupDoneFxn__C, ".const:xdc_runtime_Timestamp_Module__startupDoneFxn__C");
#pragma DATA_SECTION(xdc_runtime_Timestamp_Object__count__C, ".const:xdc_runtime_Timestamp_Object__count__C");
#pragma DATA_SECTION(xdc_runtime_Timestamp_Object__heap__C, ".const:xdc_runtime_Timestamp_Object__heap__C");
#pragma DATA_SECTION(xdc_runtime_Timestamp_Object__sizeof__C, ".const:xdc_runtime_Timestamp_Object__sizeof__C");
#pragma DATA_SECTION(xdc_runtime_Timestamp_Object__table__C, ".const:xdc_runtime_Timestamp_Object__table__C");
