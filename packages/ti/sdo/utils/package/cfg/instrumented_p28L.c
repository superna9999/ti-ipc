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
#include <ti/sysbios/family/c28/Hwi.h>
#include <ti/sysbios/family/c28/IntrinsicsSupport.h>
#include <ti/sysbios/family/c28/TaskSupport.h>
#include <ti/sysbios/family/c28/Timer.h>
#include <ti/sysbios/gates/GateHwi.h>
#include <ti/sysbios/gates/GateMutex.h>
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
 * ======== ti.sysbios.family.c28.Hwi INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_family_c28_Hwi_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_family_c28_Hwi_Module__;

/* Module__root__V */
extern ti_sysbios_family_c28_Hwi_Module__ ti_sysbios_family_c28_Hwi_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_family_c28_Hwi_Object__ {
    const ti_sysbios_family_c28_Hwi_Fxns__* __fxns;
    xdc_UInt intNum;
    xdc_Bool enableInt;
    xdc_Bool enableAck;
    xdc_Bits16 disableMask;
    xdc_Bits16 restoreMask;
    xdc_Bits16 ierBitMask;
    xdc_UArg arg;
    ti_sysbios_family_c28_Hwi_FuncPtr fxn;
    ti_sysbios_family_c28_Hwi_Irp irp;
    __TA_ti_sysbios_family_c28_Hwi_Instance_State__hookEnv hookEnv;
} ti_sysbios_family_c28_Hwi_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_family_c28_Hwi_Object__ obj;
} ti_sysbios_family_c28_Hwi_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_family_c28_Hwi___VERS
    #define ti_sysbios_family_c28_Hwi___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_family_c28_Hwi___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.family.c28.IntrinsicsSupport INTERNALS ========
 */


/*
 * ======== ti.sysbios.family.c28.TaskSupport INTERNALS ========
 */


/*
 * ======== ti.sysbios.family.c28.Timer INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_family_c28_Timer_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_family_c28_Timer_Module__;

/* Module__root__V */
extern ti_sysbios_family_c28_Timer_Module__ ti_sysbios_family_c28_Timer_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_family_c28_Timer_Object__ {
    const ti_sysbios_family_c28_Timer_Fxns__* __fxns;
    xdc_Int id;
    ti_sysbios_family_c28_Timer_EmulationMode emulationModeInit;
    ti_sysbios_interfaces_ITimer_RunMode runMode;
    ti_sysbios_interfaces_ITimer_StartMode startMode;
    xdc_UInt32 period;
    ti_sysbios_interfaces_ITimer_PeriodType periodType;
    xdc_UInt16 prescale;
    xdc_UInt intNum;
    xdc_UArg arg;
    ti_sysbios_family_c28_Hwi_FuncPtr tickFxn;
    xdc_runtime_Types_FreqHz extFreq;
    ti_sysbios_family_c28_Hwi_Handle hwi;
} ti_sysbios_family_c28_Timer_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_family_c28_Timer_Object__ obj;
} ti_sysbios_family_c28_Timer_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_family_c28_Timer___VERS
    #define ti_sysbios_family_c28_Timer___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_family_c28_Timer___ParamsPtr xdc_Ptr
#endif


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

/* <-- ti_sysbios_family_c28_Hwi_Object */

/* Object */
typedef ti_sysbios_family_c28_Hwi_Object__ ti_sysbios_hal_Hwi_HwiProxy_Object__;

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

/* <-- ti_sysbios_family_c28_Timer_Object */

/* Object */
typedef ti_sysbios_family_c28_Timer_Object__ ti_sysbios_hal_Timer_TimerProxy_Object__;

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
        0x8023, /* __mid */
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
        0x8024, /* __mid */
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
        0x802a, /* __mid */
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
 * ======== ti.sysbios.family.c28.Hwi DECLARATIONS ========
 */

/* Object__table__V */
ti_sysbios_family_c28_Hwi_Object__ ti_sysbios_family_c28_Hwi_Object__table__V[1];

/* Module_State__ */
typedef struct ti_sysbios_family_c28_Hwi_Module_State__ {
    xdc_Bits16 ierMask;
    xdc_Char* isrStack;
    xdc_Char* taskSP;
    __TA_ti_sysbios_family_c28_Hwi_Module_State__dispatchTable dispatchTable;
    ti_sysbios_family_c28_Hwi_Irp irp;
    xdc_Bool globalEnable;
    xdc_Bits16 shadowIER;
} ti_sysbios_family_c28_Hwi_Module_State__;

/* --> ti_sysbios_family_c28_Hwi_Module_State_0_dispatchTable__A */
__T1_ti_sysbios_family_c28_Hwi_Module_State__dispatchTable ti_sysbios_family_c28_Hwi_Module_State_0_dispatchTable__A[128];

/* Module__state__V */
ti_sysbios_family_c28_Hwi_Module_State__ ti_sysbios_family_c28_Hwi_Module__state__V;

/* --> ti_sysbios_knl_Swi_disable__E */
extern xdc_UInt ti_sysbios_knl_Swi_disable__E(xdc_Void);

/* --> ti_sysbios_knl_Swi_restoreHwi__E */
extern xdc_Void ti_sysbios_knl_Swi_restoreHwi__E(xdc_UInt);

/* --> ti_sysbios_knl_Task_disable__E */
extern xdc_UInt ti_sysbios_knl_Task_disable__E(xdc_Void);

/* --> ti_sysbios_knl_Task_restoreHwi__E */
extern xdc_Void ti_sysbios_knl_Task_restoreHwi__E(xdc_UInt);


/*
 * ======== ti.sysbios.family.c28.IntrinsicsSupport DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.family.c28.TaskSupport DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.family.c28.Timer DECLARATIONS ========
 */

/* Object__table__V */
ti_sysbios_family_c28_Timer_Object__ ti_sysbios_family_c28_Timer_Object__table__V[1];

/* Module_State__ */
typedef struct ti_sysbios_family_c28_Timer_Module_State__ {
    xdc_Char availMask;
    __TA_ti_sysbios_family_c28_Timer_Module_State__staticTimers staticTimers;
} ti_sysbios_family_c28_Timer_Module_State__;

/* Module__state__V */
ti_sysbios_family_c28_Timer_Module_State__ ti_sysbios_family_c28_Timer_Module__state__V;


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
 * ======== ti.sysbios.hal.Hwi DECLARATIONS ========
 */


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
__T1_ti_sysbios_heaps_HeapMem_Instance_State__buf ti_sysbios_heaps_HeapMem_Instance_State_0_buf__A[4099];
#ifdef __ti__sect
    #pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Instance_State_0_buf__A, ".ebss:taskStackSection");
#endif
#ifdef __GNUC__
#if __GNUC__ >= 4
__T1_ti_sysbios_heaps_HeapMem_Instance_State__buf ti_sysbios_heaps_HeapMem_Instance_State_0_buf__A[4099] __attribute__ ((section(".ebss:taskStackSection")));
#endif
#endif
#ifdef __ti__align
    #pragma DATA_ALIGN(ti_sysbios_heaps_HeapMem_Instance_State_0_buf__A, 4);
#endif
#ifdef __GNUC__
#if __GNUC__ >= 4
__T1_ti_sysbios_heaps_HeapMem_Instance_State__buf ti_sysbios_heaps_HeapMem_Instance_State_0_buf__A[4099] __attribute__ ((aligned(4)));
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
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_0_stack__A[256];
#ifdef __ti__sect
    #pragma DATA_SECTION(ti_sysbios_knl_Task_Instance_State_0_stack__A, ".ebss:taskStackSection");
#endif
#ifdef __GNUC__
#if __GNUC__ >= 4
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_0_stack__A[256] __attribute__ ((section(".ebss:taskStackSection")));
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
const __T1_xdc_runtime_Startup_firstFxns xdc_runtime_Startup_firstFxns__A[2];

/* --> xdc_runtime_Startup_lastFxns__A */
const __T1_xdc_runtime_Startup_lastFxns xdc_runtime_Startup_lastFxns__A[1];

/* --> xdc_runtime_System_Module_startup__E */
extern xdc_Int xdc_runtime_System_Module_startup__E(xdc_Int);

/* --> xdc_runtime_SysMin_Module_startup__E */
extern xdc_Int xdc_runtime_SysMin_Module_startup__E(xdc_Int);

/* --> ti_sysbios_family_c28_Hwi_Module_startup__E */
extern xdc_Int ti_sysbios_family_c28_Hwi_Module_startup__E(xdc_Int);

/* --> ti_sysbios_family_c28_Timer_Module_startup__E */
extern xdc_Int ti_sysbios_family_c28_Timer_Module_startup__E(xdc_Int);

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

/* --> xdc_runtime_Startup_sfxnTab__A */
const __T1_xdc_runtime_Startup_sfxnTab xdc_runtime_Startup_sfxnTab__A[9];

/* --> xdc_runtime_Startup_sfxnRts__A */
const __T1_xdc_runtime_Startup_sfxnRts xdc_runtime_Startup_sfxnRts__A[9];


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
const __T1_xdc_runtime_Text_charTab xdc_runtime_Text_charTab__A[4770];

/* --> xdc_runtime_Text_nodeTab__A */
const __T1_xdc_runtime_Text_nodeTab xdc_runtime_Text_nodeTab__A[43];


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
xdc__META(__ASM__, "@(#)__ASM__ = /db/vtree/library/trees/ipc/ipc-h32/src/ti/sdo/utils/package/cfg/instrumented_p28L");

/*
 *  ======== __ISA__ ========
 *  Define the ISA of this executable.  This symbol is used by platform
 *  specific "exec" commands that support more than one ISA; e.g., gdb
 */
xdc__META(__ISA__, "@(#)__ISA__ = 28");

/*
 *  ======== __PLAT__ ========
 *  Define the name of the platform that can run this executable.  This
 *  symbol is used by platform independent "exec" commands
 */
xdc__META(__PLAT__, "@(#)__PLAT__ = ti.platforms.ezdsp28235");

/*
 *  ======== __TARG__ ========
 *  Define the name of the target used to build this executable.
 */
xdc__META(__TARG__, "@(#)__TARG__ = ti.targets.C28_large");

/*
 *  ======== __TRDR__ ========
 *  Define the name of the class that can read/parse this executable.
 */
xdc__META(__TRDR__, "@(#)__TRDR__ = ti.targets.omf.cof.Coff");


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
xdc_Bool ti_sysbios_family_c28_Hwi_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[2] < 0;
}
xdc_Bool ti_sysbios_family_c28_Timer_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[3] < 0;
}
xdc_Bool ti_sysbios_hal_Hwi_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[4] < 0;
}
xdc_Bool ti_sysbios_hal_Timer_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[5] < 0;
}
xdc_Bool ti_sysbios_knl_Clock_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[6] < 0;
}
xdc_Bool ti_sysbios_knl_Swi_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[7] < 0;
}
xdc_Bool ti_sysbios_knl_Task_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[8] < 0;
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
    xdc_Int state[9];
    xdc_runtime_Startup_startModsFxn__C(state, 9);
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

extern Void ti_catalog_c2800_init_Boot_init(void);  /* user defined reset function */

/*
 *  ======== xdc_runtime_Startup_reset__I ========
 *  This function is called by bootstrap initialization code as early as
 *  possible in the startup process.  This function calls all functions in
 *  the Reset.fxns array _as well as_ Startup.resetFxn (if it's non-NULL)
 */
xdc_Void xdc_runtime_Startup_reset__I(void)
{
    ti_catalog_c2800_init_Boot_init();
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
    xdc_String stack[5];
    xdc_runtime_Text_visitRope2__I(rope, visFxn, visState, stack);
}


/*
 * ======== ti.catalog.c2800.init.Boot TEMPLATE ========
 */

    extern ti_catalog_c2800_init_Boot_disableWatchdog();
    extern ti_catalog_c2800_init_Boot_configurePll280x(UInt16 pllcrDIV);
    extern ti_catalog_c2800_init_Boot_configurePll281x(UInt16 pllcrDIV, UInt16 pllstsDIVSEL);
    extern ti_catalog_c2800_init_Boot_configurePll2802x(UInt16 pllcrDIV, UInt16 pllstsDIVSEL);
    extern ti_catalog_c2800_init_Boot_configurePll2834x(UInt16 pllcrDIV, UInt16 pllstsDIVSEL);
    extern ti_catalog_c2800_init_Boot_configEzdspXintf();

#if defined(__ti__)
#pragma CODE_SECTION(ti_catalog_c2800_init_Boot_init, ".text:.bootCodeSection")
#pragma CODE_SECTION(ti_catalog_c2800_init_Boot_50usDelay, ".text:.bootCodeSection")
#endif

/*
 *  ======== ti_catalog_c2800_init_Boot_init ========
 */
Void ti_catalog_c2800_init_Boot_init()
{
    ti_catalog_c2800_init_Boot_disableWatchdog();
    /* share function with 2802x_2803x_2806x ... */
    ti_catalog_c2800_init_Boot_configurePll2802x(10, 2);
    ti_catalog_c2800_init_Boot_configEzdspXintf();
}

/*
 *  ======== ti_catalog_c2800_init_Boot_50usDelay ========
 */
Void ti_catalog_c2800_init_Boot_50usDelay()
{
asm("   MOV     @AH,#0;\n                          \
        MOV     @AL,#1500;\n                          \
");
asm("_ti_catalog_c2800_init_Boot_loop:\n                \
        SUB     ACC,#1;\n                               \
        BF      _ti_catalog_c2800_init_Boot_loop,GEQ;\n \
");
}
/*
 *  ======== ti_catalog_c2800_init_Boot_limpAbort ========
 */
Void ti_catalog_c2800_init_Boot_limpAbort(Void)
{
    extern ti_catalog_c2800_init_Boot_defaultLimpAbortFunction();
    ti_catalog_c2800_init_Boot_defaultLimpAbortFunction();
}


/*
 * ======== ti.sysbios.family.c28.Hwi TEMPLATE ========
 */


extern Void c_int00(Void);
extern Void ti_sysbios_family_c28_Hwi_dispatchTable(Void);
extern Void ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I(Void);

/* Interrupt vector table.  This will be copied to 0xd00 at boot time. */
const UInt32 ti_sysbios_family_c28_Hwi_vectors[] = {
    /* 0 */  (UInt32)c_int00,
    /* 1 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 2 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 3 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 4 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 5 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 6 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 7 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 8 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 9 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 10 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 11 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 12 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 13 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 14 */  (UInt32)ti_sysbios_family_c28_Hwi_dispatchTable + (3 * (14-1)),
    /* 15 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 16 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 17 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 18 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 19 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 20 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 21 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 22 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 23 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 24 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 25 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 26 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 27 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 28 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 29 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 30 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 31 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 32 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 33 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 34 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 35 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 36 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 37 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 38 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 39 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 40 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 41 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 42 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 43 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 44 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 45 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 46 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 47 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 48 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 49 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 50 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 51 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 52 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 53 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 54 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 55 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 56 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 57 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 58 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 59 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 60 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 61 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 62 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 63 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 64 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 65 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 66 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 67 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 68 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 69 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 70 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 71 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 72 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 73 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 74 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 75 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 76 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 77 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 78 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 79 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 80 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 81 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 82 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 83 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 84 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 85 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 86 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 87 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 88 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 89 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 90 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 91 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 92 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 93 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 94 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 95 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 96 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 97 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 98 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 99 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 100 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 101 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 102 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 103 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 104 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 105 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 106 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 107 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 108 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 109 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 110 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 111 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 112 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 113 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 114 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 115 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 116 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 117 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 118 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 119 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 120 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 121 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 122 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 123 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 124 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 125 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 126 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
    /* 127 */  (UInt32)ti_sysbios_family_c28_Hwi_unPluggedInterrupt__I,
};

extern cregister volatile UInt IER;


/*
 * ======== NON-ZERO LATENCY IMPLEMENTATION ========
 */

/*
 * ======== Hwi_startup ========
 */
Void ti_sysbios_family_c28_Hwi_startup__E()
{
    __enable_interrupts();
}

/*
 * ======== Hwi_disable ========
 */
UInt ti_sysbios_family_c28_Hwi_disable__E()
{
    UInt key;

    key = __disable_interrupts();

    return (key);
}

/*
 *  ======== Hwi_enable ========
 */
UInt ti_sysbios_family_c28_Hwi_enable__E()
{
    UInt key;

    key = __enable_interrupts();

    return (key);
}

/*
 *  ======== Hwi_restore ========
 */

Void ti_sysbios_family_c28_Hwi_restore__E(UInt key)
{
    __restore_interrupts(key);
}

/*
 *  ======== Hwi_disableIER ========
 */
Bits16 ti_sysbios_family_c28_Hwi_disableIER__E(Bits16 mask)
{
    UInt key;
    Bits16 oldIER;

    key = __disable_interrupts();

    oldIER = IER;
    IER &= ~mask;

    __restore_interrupts(key);

    return (oldIER);
}

/*
 *  ======== Hwi_enableIER ========
 */
Bits16 ti_sysbios_family_c28_Hwi_enableIER__E(Bits16 mask)
{
    UInt key;
    Bits16 oldIER;

    key = __disable_interrupts();

    oldIER = IER;
    IER |= mask;

    __restore_interrupts(key);

    return (oldIER);
}

/*
 *  ======== Hwi_restoreIER ========
 */
Bits16 ti_sysbios_family_c28_Hwi_restoreIER__E(Bits16 mask)
{
    UInt key;
    Bits16 oldIER;

    key = __disable_interrupts();

    oldIER = IER;
    IER = mask;

    __restore_interrupts(key);

    return (oldIER);
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
__FAR__ const CT__ti_sdo_utils_NameServerRemoteNull_Module__id ti_sdo_utils_NameServerRemoteNull_Module__id__C = (xdc_Bits16)0x8027;

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
        (xdc_Bits32)0x8f0d180,  /* lo */
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
__FAR__ const CT__ti_sysbios_BIOS_Module__id ti_sysbios_BIOS_Module__id__C = (xdc_Bits16)0x8028;

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
    (xdc_Bits32)0x8f0d180,  /* lo */
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
__FAR__ const CT__ti_sysbios_BIOS_heapSection ti_sysbios_BIOS_heapSection__C = ".ebss:taskStackSection";

/* installedErrorHook__C */
__FAR__ const CT__ti_sysbios_BIOS_installedErrorHook ti_sysbios_BIOS_installedErrorHook__C = ((CT__ti_sysbios_BIOS_installedErrorHook)((xdc_Fxn)xdc_runtime_Error_print__E));


/*
 * ======== ti.sysbios.BIOS_RtsGateProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.family.c28.Hwi INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_family_c28_Hwi_Object__DESC__C;

/* Object__PARAMS__C */
__FAR__ const ti_sysbios_family_c28_Hwi_Params ti_sysbios_family_c28_Hwi_Object__PARAMS__C = {
    sizeof (ti_sysbios_family_c28_Hwi_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_family_c28_Hwi_Object__PARAMS__C.__iprms, /* instance */
    ti_sysbios_interfaces_IHwi_MaskingOption_SELF,  /* maskSetting */
    ((xdc_UArg)(0x0)),  /* arg */
    1,  /* enableInt */
    (xdc_Int)(-0x0 - 1),  /* eventId */
    (xdc_Int)0x0,  /* priority */
    (xdc_Bits16)0x0,  /* disableMask */
    (xdc_Bits16)0x0,  /* restoreMask */
    1,  /* enableAck */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_family_c28_Hwi_Module__ ti_sysbios_family_c28_Hwi_Module__root__V = {
    {&ti_sysbios_family_c28_Hwi_Module__root__V.link,  /* link.next */
    &ti_sysbios_family_c28_Hwi_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_family_c28_Hwi_Object__ ti_sysbios_family_c28_Hwi_Object__table__V[1] = {
    {/* instance#0 */
        0,
        (xdc_UInt)0xe,  /* intNum */
        1,  /* enableInt */
        1,  /* enableAck */
        (xdc_Bits16)0x2000,  /* disableMask */
        (xdc_Bits16)0x2000,  /* restoreMask */
        (xdc_Bits16)0x2000,  /* ierBitMask */
        ((xdc_UArg)0),  /* arg */
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_knl_Clock_doTick__I)),  /* fxn */
        ((xdc_UArg)0),  /* irp */
        ((void*)0),  /* hookEnv */
    },
};

/* --> ti_sysbios_family_c28_Hwi_Module_State_0_dispatchTable__A */
__T1_ti_sysbios_family_c28_Hwi_Module_State__dispatchTable ti_sysbios_family_c28_Hwi_Module_State_0_dispatchTable__A[128] = {
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
    (ti_sysbios_family_c28_Hwi_Handle)&ti_sysbios_family_c28_Hwi_Object__table__V[0],  /* [14] */
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
    0,  /* [32] */
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
    0,  /* [64] */
    0,  /* [65] */
    0,  /* [66] */
    0,  /* [67] */
    0,  /* [68] */
    0,  /* [69] */
    0,  /* [70] */
    0,  /* [71] */
    0,  /* [72] */
    0,  /* [73] */
    0,  /* [74] */
    0,  /* [75] */
    0,  /* [76] */
    0,  /* [77] */
    0,  /* [78] */
    0,  /* [79] */
    0,  /* [80] */
    0,  /* [81] */
    0,  /* [82] */
    0,  /* [83] */
    0,  /* [84] */
    0,  /* [85] */
    0,  /* [86] */
    0,  /* [87] */
    0,  /* [88] */
    0,  /* [89] */
    0,  /* [90] */
    0,  /* [91] */
    0,  /* [92] */
    0,  /* [93] */
    0,  /* [94] */
    0,  /* [95] */
    0,  /* [96] */
    0,  /* [97] */
    0,  /* [98] */
    0,  /* [99] */
    0,  /* [100] */
    0,  /* [101] */
    0,  /* [102] */
    0,  /* [103] */
    0,  /* [104] */
    0,  /* [105] */
    0,  /* [106] */
    0,  /* [107] */
    0,  /* [108] */
    0,  /* [109] */
    0,  /* [110] */
    0,  /* [111] */
    0,  /* [112] */
    0,  /* [113] */
    0,  /* [114] */
    0,  /* [115] */
    0,  /* [116] */
    0,  /* [117] */
    0,  /* [118] */
    0,  /* [119] */
    0,  /* [120] */
    0,  /* [121] */
    0,  /* [122] */
    0,  /* [123] */
    0,  /* [124] */
    0,  /* [125] */
    0,  /* [126] */
    0,  /* [127] */
};

/* Module__state__V */
ti_sysbios_family_c28_Hwi_Module_State__ ti_sysbios_family_c28_Hwi_Module__state__V = {
    (xdc_Bits16)0x2000,  /* ierMask */
    ((xdc_Char*)0),  /* isrStack */
    ((xdc_Char*)0),  /* taskSP */
    ((void*)ti_sysbios_family_c28_Hwi_Module_State_0_dispatchTable__A),  /* dispatchTable */
    ((xdc_UArg)0),  /* irp */
    0,  /* globalEnable */
    (xdc_Bits16)0x0,  /* shadowIER */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_family_c28_Hwi_Module__diagsEnabled ti_sysbios_family_c28_Hwi_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_family_c28_Hwi_Module__diagsIncluded ti_sysbios_family_c28_Hwi_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_family_c28_Hwi_Module__diagsMask ti_sysbios_family_c28_Hwi_Module__diagsMask__C = ((CT__ti_sysbios_family_c28_Hwi_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_family_c28_Hwi_Module__gateObj ti_sysbios_family_c28_Hwi_Module__gateObj__C = ((CT__ti_sysbios_family_c28_Hwi_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_family_c28_Hwi_Module__gatePrms ti_sysbios_family_c28_Hwi_Module__gatePrms__C = ((CT__ti_sysbios_family_c28_Hwi_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_family_c28_Hwi_Module__id ti_sysbios_family_c28_Hwi_Module__id__C = (xdc_Bits16)0x8013;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_family_c28_Hwi_Module__loggerDefined ti_sysbios_family_c28_Hwi_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_family_c28_Hwi_Module__loggerObj ti_sysbios_family_c28_Hwi_Module__loggerObj__C = ((CT__ti_sysbios_family_c28_Hwi_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_family_c28_Hwi_Module__loggerFxn0 ti_sysbios_family_c28_Hwi_Module__loggerFxn0__C = ((CT__ti_sysbios_family_c28_Hwi_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_family_c28_Hwi_Module__loggerFxn1 ti_sysbios_family_c28_Hwi_Module__loggerFxn1__C = ((CT__ti_sysbios_family_c28_Hwi_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_family_c28_Hwi_Module__loggerFxn2 ti_sysbios_family_c28_Hwi_Module__loggerFxn2__C = ((CT__ti_sysbios_family_c28_Hwi_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_family_c28_Hwi_Module__loggerFxn4 ti_sysbios_family_c28_Hwi_Module__loggerFxn4__C = ((CT__ti_sysbios_family_c28_Hwi_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_family_c28_Hwi_Module__loggerFxn8 ti_sysbios_family_c28_Hwi_Module__loggerFxn8__C = ((CT__ti_sysbios_family_c28_Hwi_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_family_c28_Hwi_Module__startupDoneFxn ti_sysbios_family_c28_Hwi_Module__startupDoneFxn__C = ((CT__ti_sysbios_family_c28_Hwi_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_family_c28_Hwi_Object__count ti_sysbios_family_c28_Hwi_Object__count__C = 1;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_family_c28_Hwi_Object__heap ti_sysbios_family_c28_Hwi_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_family_c28_Hwi_Object__sizeof ti_sysbios_family_c28_Hwi_Object__sizeof__C = sizeof(ti_sysbios_family_c28_Hwi_Object__);

/* Object__table__C */
__FAR__ const CT__ti_sysbios_family_c28_Hwi_Object__table ti_sysbios_family_c28_Hwi_Object__table__C = ti_sysbios_family_c28_Hwi_Object__table__V;

/* dispatcherAutoNestingSupport__C */
__FAR__ const CT__ti_sysbios_family_c28_Hwi_dispatcherAutoNestingSupport ti_sysbios_family_c28_Hwi_dispatcherAutoNestingSupport__C = 1;

/* dispatcherSwiSupport__C */
__FAR__ const CT__ti_sysbios_family_c28_Hwi_dispatcherSwiSupport ti_sysbios_family_c28_Hwi_dispatcherSwiSupport__C = 1;

/* dispatcherTaskSupport__C */
__FAR__ const CT__ti_sysbios_family_c28_Hwi_dispatcherTaskSupport ti_sysbios_family_c28_Hwi_dispatcherTaskSupport__C = 1;

/* dispatcherIrpTrackingSupport__C */
__FAR__ const CT__ti_sysbios_family_c28_Hwi_dispatcherIrpTrackingSupport ti_sysbios_family_c28_Hwi_dispatcherIrpTrackingSupport__C = 1;

/* A_badIntNum__C */
__FAR__ const CT__ti_sysbios_family_c28_Hwi_A_badIntNum ti_sysbios_family_c28_Hwi_A_badIntNum__C = (((xdc_runtime_Assert_Id)355) << 16 | 16);

/* A_invalidArg__C */
__FAR__ const CT__ti_sysbios_family_c28_Hwi_A_invalidArg ti_sysbios_family_c28_Hwi_A_invalidArg__C = (((xdc_runtime_Assert_Id)393) << 16 | 16);

/* A_zeroLatencyConflict__C */
__FAR__ const CT__ti_sysbios_family_c28_Hwi_A_zeroLatencyConflict ti_sysbios_family_c28_Hwi_A_zeroLatencyConflict__C = (((xdc_runtime_Assert_Id)424) << 16 | 16);

/* E_unpluggedInterrupt__C */
__FAR__ const CT__ti_sysbios_family_c28_Hwi_E_unpluggedInterrupt ti_sysbios_family_c28_Hwi_E_unpluggedInterrupt__C = (((xdc_runtime_Error_Id)3007) << 16 | 0);

/* E_alreadyDefined__C */
__FAR__ const CT__ti_sysbios_family_c28_Hwi_E_alreadyDefined ti_sysbios_family_c28_Hwi_E_alreadyDefined__C = (((xdc_runtime_Error_Id)3067) << 16 | 0);

/* zeroLatencyIERMask__C */
__FAR__ const CT__ti_sysbios_family_c28_Hwi_zeroLatencyIERMask ti_sysbios_family_c28_Hwi_zeroLatencyIERMask__C = (xdc_Bits16)0x0;

/* LM_begin__C */
__FAR__ const CT__ti_sysbios_family_c28_Hwi_LM_begin ti_sysbios_family_c28_Hwi_LM_begin__C = (((xdc_runtime_Log_Event)3777) << 16 | 768);

/* LD_end__C */
__FAR__ const CT__ti_sysbios_family_c28_Hwi_LD_end ti_sysbios_family_c28_Hwi_LD_end__C = (((xdc_runtime_Log_Event)3847) << 16 | 512);

/* swiDisable__C */
__FAR__ const CT__ti_sysbios_family_c28_Hwi_swiDisable ti_sysbios_family_c28_Hwi_swiDisable__C = ((CT__ti_sysbios_family_c28_Hwi_swiDisable)((xdc_Fxn)ti_sysbios_knl_Swi_disable__E));

/* swiRestoreHwi__C */
__FAR__ const CT__ti_sysbios_family_c28_Hwi_swiRestoreHwi ti_sysbios_family_c28_Hwi_swiRestoreHwi__C = ((CT__ti_sysbios_family_c28_Hwi_swiRestoreHwi)((xdc_Fxn)ti_sysbios_knl_Swi_restoreHwi__E));

/* taskDisable__C */
__FAR__ const CT__ti_sysbios_family_c28_Hwi_taskDisable ti_sysbios_family_c28_Hwi_taskDisable__C = ((CT__ti_sysbios_family_c28_Hwi_taskDisable)((xdc_Fxn)ti_sysbios_knl_Task_disable__E));

/* taskRestoreHwi__C */
__FAR__ const CT__ti_sysbios_family_c28_Hwi_taskRestoreHwi ti_sysbios_family_c28_Hwi_taskRestoreHwi__C = ((CT__ti_sysbios_family_c28_Hwi_taskRestoreHwi)((xdc_Fxn)ti_sysbios_knl_Task_restoreHwi__E));

/* hooks__C */
__FAR__ const CT__ti_sysbios_family_c28_Hwi_hooks ti_sysbios_family_c28_Hwi_hooks__C = {0, 0};


/*
 * ======== ti.sysbios.family.c28.IntrinsicsSupport INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_family_c28_IntrinsicsSupport_Module__diagsEnabled ti_sysbios_family_c28_IntrinsicsSupport_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_family_c28_IntrinsicsSupport_Module__diagsIncluded ti_sysbios_family_c28_IntrinsicsSupport_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_family_c28_IntrinsicsSupport_Module__diagsMask ti_sysbios_family_c28_IntrinsicsSupport_Module__diagsMask__C = ((CT__ti_sysbios_family_c28_IntrinsicsSupport_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_family_c28_IntrinsicsSupport_Module__gateObj ti_sysbios_family_c28_IntrinsicsSupport_Module__gateObj__C = ((CT__ti_sysbios_family_c28_IntrinsicsSupport_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_family_c28_IntrinsicsSupport_Module__gatePrms ti_sysbios_family_c28_IntrinsicsSupport_Module__gatePrms__C = ((CT__ti_sysbios_family_c28_IntrinsicsSupport_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_family_c28_IntrinsicsSupport_Module__id ti_sysbios_family_c28_IntrinsicsSupport_Module__id__C = (xdc_Bits16)0x8015;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_family_c28_IntrinsicsSupport_Module__loggerDefined ti_sysbios_family_c28_IntrinsicsSupport_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_family_c28_IntrinsicsSupport_Module__loggerObj ti_sysbios_family_c28_IntrinsicsSupport_Module__loggerObj__C = ((CT__ti_sysbios_family_c28_IntrinsicsSupport_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_family_c28_IntrinsicsSupport_Module__loggerFxn0 ti_sysbios_family_c28_IntrinsicsSupport_Module__loggerFxn0__C = ((CT__ti_sysbios_family_c28_IntrinsicsSupport_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_family_c28_IntrinsicsSupport_Module__loggerFxn1 ti_sysbios_family_c28_IntrinsicsSupport_Module__loggerFxn1__C = ((CT__ti_sysbios_family_c28_IntrinsicsSupport_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_family_c28_IntrinsicsSupport_Module__loggerFxn2 ti_sysbios_family_c28_IntrinsicsSupport_Module__loggerFxn2__C = ((CT__ti_sysbios_family_c28_IntrinsicsSupport_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_family_c28_IntrinsicsSupport_Module__loggerFxn4 ti_sysbios_family_c28_IntrinsicsSupport_Module__loggerFxn4__C = ((CT__ti_sysbios_family_c28_IntrinsicsSupport_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_family_c28_IntrinsicsSupport_Module__loggerFxn8 ti_sysbios_family_c28_IntrinsicsSupport_Module__loggerFxn8__C = ((CT__ti_sysbios_family_c28_IntrinsicsSupport_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_family_c28_IntrinsicsSupport_Module__startupDoneFxn ti_sysbios_family_c28_IntrinsicsSupport_Module__startupDoneFxn__C = ((CT__ti_sysbios_family_c28_IntrinsicsSupport_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_family_c28_IntrinsicsSupport_Object__count ti_sysbios_family_c28_IntrinsicsSupport_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_family_c28_IntrinsicsSupport_Object__heap ti_sysbios_family_c28_IntrinsicsSupport_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_family_c28_IntrinsicsSupport_Object__sizeof ti_sysbios_family_c28_IntrinsicsSupport_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__ti_sysbios_family_c28_IntrinsicsSupport_Object__table ti_sysbios_family_c28_IntrinsicsSupport_Object__table__C = 0;


/*
 * ======== ti.sysbios.family.c28.TaskSupport INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_family_c28_TaskSupport_Module__diagsEnabled ti_sysbios_family_c28_TaskSupport_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_family_c28_TaskSupport_Module__diagsIncluded ti_sysbios_family_c28_TaskSupport_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_family_c28_TaskSupport_Module__diagsMask ti_sysbios_family_c28_TaskSupport_Module__diagsMask__C = ((CT__ti_sysbios_family_c28_TaskSupport_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_family_c28_TaskSupport_Module__gateObj ti_sysbios_family_c28_TaskSupport_Module__gateObj__C = ((CT__ti_sysbios_family_c28_TaskSupport_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_family_c28_TaskSupport_Module__gatePrms ti_sysbios_family_c28_TaskSupport_Module__gatePrms__C = ((CT__ti_sysbios_family_c28_TaskSupport_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_family_c28_TaskSupport_Module__id ti_sysbios_family_c28_TaskSupport_Module__id__C = (xdc_Bits16)0x8016;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_family_c28_TaskSupport_Module__loggerDefined ti_sysbios_family_c28_TaskSupport_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_family_c28_TaskSupport_Module__loggerObj ti_sysbios_family_c28_TaskSupport_Module__loggerObj__C = ((CT__ti_sysbios_family_c28_TaskSupport_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_family_c28_TaskSupport_Module__loggerFxn0 ti_sysbios_family_c28_TaskSupport_Module__loggerFxn0__C = ((CT__ti_sysbios_family_c28_TaskSupport_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_family_c28_TaskSupport_Module__loggerFxn1 ti_sysbios_family_c28_TaskSupport_Module__loggerFxn1__C = ((CT__ti_sysbios_family_c28_TaskSupport_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_family_c28_TaskSupport_Module__loggerFxn2 ti_sysbios_family_c28_TaskSupport_Module__loggerFxn2__C = ((CT__ti_sysbios_family_c28_TaskSupport_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_family_c28_TaskSupport_Module__loggerFxn4 ti_sysbios_family_c28_TaskSupport_Module__loggerFxn4__C = ((CT__ti_sysbios_family_c28_TaskSupport_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_family_c28_TaskSupport_Module__loggerFxn8 ti_sysbios_family_c28_TaskSupport_Module__loggerFxn8__C = ((CT__ti_sysbios_family_c28_TaskSupport_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_family_c28_TaskSupport_Module__startupDoneFxn ti_sysbios_family_c28_TaskSupport_Module__startupDoneFxn__C = ((CT__ti_sysbios_family_c28_TaskSupport_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_family_c28_TaskSupport_Object__count ti_sysbios_family_c28_TaskSupport_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_family_c28_TaskSupport_Object__heap ti_sysbios_family_c28_TaskSupport_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_family_c28_TaskSupport_Object__sizeof ti_sysbios_family_c28_TaskSupport_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__ti_sysbios_family_c28_TaskSupport_Object__table ti_sysbios_family_c28_TaskSupport_Object__table__C = 0;

/* defaultStackSize__C */
__FAR__ const CT__ti_sysbios_family_c28_TaskSupport_defaultStackSize ti_sysbios_family_c28_TaskSupport_defaultStackSize__C = (xdc_SizeT)0x100;

/* stackAlignment__C */
__FAR__ const CT__ti_sysbios_family_c28_TaskSupport_stackAlignment ti_sysbios_family_c28_TaskSupport_stackAlignment__C = (xdc_UInt)0x0;

/* E_invalidStack__C */
__FAR__ const CT__ti_sysbios_family_c28_TaskSupport_E_invalidStack ti_sysbios_family_c28_TaskSupport_E_invalidStack__C = (((xdc_runtime_Error_Id)3154) << 16 | 0);


/*
 * ======== ti.sysbios.family.c28.Timer INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_family_c28_Timer_Object__DESC__C;

/* Object__PARAMS__C */
__FAR__ const ti_sysbios_family_c28_Timer_Params ti_sysbios_family_c28_Timer_Object__PARAMS__C = {
    sizeof (ti_sysbios_family_c28_Timer_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_family_c28_Timer_Object__PARAMS__C.__iprms, /* instance */
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
        (xdc_UInt)0x0,  /* free */
        (xdc_UInt)0x0,  /* soft */
    },  /* emulationModeInit */
    (xdc_UInt16)0x0,  /* prescale */
    ((ti_sysbios_family_c28_Hwi_Params*)0),  /* hwiParams */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_family_c28_Timer_Module__ ti_sysbios_family_c28_Timer_Module__root__V = {
    {&ti_sysbios_family_c28_Timer_Module__root__V.link,  /* link.next */
    &ti_sysbios_family_c28_Timer_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_family_c28_Timer_Object__ ti_sysbios_family_c28_Timer_Object__table__V[1] = {
    {/* instance#0 */
        0,
        (xdc_Int)0x2,  /* id */
        {
            (xdc_UInt)0x0,  /* free */
            (xdc_UInt)0x0,  /* soft */
        },  /* emulationModeInit */
        ti_sysbios_interfaces_ITimer_RunMode_CONTINUOUS,  /* runMode */
        ti_sysbios_interfaces_ITimer_StartMode_AUTO,  /* startMode */
        (xdc_UInt32)0x249f0,  /* period */
        ti_sysbios_interfaces_ITimer_PeriodType_COUNTS,  /* periodType */
        (xdc_UInt16)0x0,  /* prescale */
        (xdc_UInt)0xe,  /* intNum */
        ((xdc_UArg)0),  /* arg */
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_knl_Clock_doTick__I)),  /* tickFxn */
        {
            (xdc_Bits32)0x0,  /* hi */
            (xdc_Bits32)0x0,  /* lo */
        },  /* extFreq */
        (ti_sysbios_family_c28_Hwi_Handle)&ti_sysbios_family_c28_Hwi_Object__table__V[0],  /* hwi */
    },
};

/* Module__state__V */
ti_sysbios_family_c28_Timer_Module_State__ ti_sysbios_family_c28_Timer_Module__state__V = {
    (xdc_Char)0x3,  /* availMask */
    {
        0,  /* [0] */
        0,  /* [1] */
        (ti_sysbios_family_c28_Timer_Handle)&ti_sysbios_family_c28_Timer_Object__table__V[0],  /* [2] */
    },  /* staticTimers */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_family_c28_Timer_Module__diagsEnabled ti_sysbios_family_c28_Timer_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_family_c28_Timer_Module__diagsIncluded ti_sysbios_family_c28_Timer_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_family_c28_Timer_Module__diagsMask ti_sysbios_family_c28_Timer_Module__diagsMask__C = ((CT__ti_sysbios_family_c28_Timer_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_family_c28_Timer_Module__gateObj ti_sysbios_family_c28_Timer_Module__gateObj__C = ((CT__ti_sysbios_family_c28_Timer_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_family_c28_Timer_Module__gatePrms ti_sysbios_family_c28_Timer_Module__gatePrms__C = ((CT__ti_sysbios_family_c28_Timer_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_family_c28_Timer_Module__id ti_sysbios_family_c28_Timer_Module__id__C = (xdc_Bits16)0x8014;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_family_c28_Timer_Module__loggerDefined ti_sysbios_family_c28_Timer_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_family_c28_Timer_Module__loggerObj ti_sysbios_family_c28_Timer_Module__loggerObj__C = ((CT__ti_sysbios_family_c28_Timer_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_family_c28_Timer_Module__loggerFxn0 ti_sysbios_family_c28_Timer_Module__loggerFxn0__C = ((CT__ti_sysbios_family_c28_Timer_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_family_c28_Timer_Module__loggerFxn1 ti_sysbios_family_c28_Timer_Module__loggerFxn1__C = ((CT__ti_sysbios_family_c28_Timer_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_family_c28_Timer_Module__loggerFxn2 ti_sysbios_family_c28_Timer_Module__loggerFxn2__C = ((CT__ti_sysbios_family_c28_Timer_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_family_c28_Timer_Module__loggerFxn4 ti_sysbios_family_c28_Timer_Module__loggerFxn4__C = ((CT__ti_sysbios_family_c28_Timer_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_family_c28_Timer_Module__loggerFxn8 ti_sysbios_family_c28_Timer_Module__loggerFxn8__C = ((CT__ti_sysbios_family_c28_Timer_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_family_c28_Timer_Module__startupDoneFxn ti_sysbios_family_c28_Timer_Module__startupDoneFxn__C = ((CT__ti_sysbios_family_c28_Timer_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_family_c28_Timer_Object__count ti_sysbios_family_c28_Timer_Object__count__C = 1;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_family_c28_Timer_Object__heap ti_sysbios_family_c28_Timer_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_family_c28_Timer_Object__sizeof ti_sysbios_family_c28_Timer_Object__sizeof__C = sizeof(ti_sysbios_family_c28_Timer_Object__);

/* Object__table__C */
__FAR__ const CT__ti_sysbios_family_c28_Timer_Object__table ti_sysbios_family_c28_Timer_Object__table__C = ti_sysbios_family_c28_Timer_Object__table__V;

/* A_invalidTimer__C */
__FAR__ const CT__ti_sysbios_family_c28_Timer_A_invalidTimer ti_sysbios_family_c28_Timer_A_invalidTimer__C = (((xdc_runtime_Assert_Id)483) << 16 | 16);

/* E_notAvailable__C */
__FAR__ const CT__ti_sysbios_family_c28_Timer_E_notAvailable ti_sysbios_family_c28_Timer_E_notAvailable__C = (((xdc_runtime_Error_Id)3115) << 16 | 0);

/* A_invalidRunMode__C */
__FAR__ const CT__ti_sysbios_family_c28_Timer_A_invalidRunMode ti_sysbios_family_c28_Timer_A_invalidRunMode__C = (((xdc_runtime_Assert_Id)520) << 16 | 16);

/* A_invalidHwiMask__C */
__FAR__ const CT__ti_sysbios_family_c28_Timer_A_invalidHwiMask ti_sysbios_family_c28_Timer_A_invalidHwiMask__C = (((xdc_runtime_Assert_Id)554) << 16 | 16);

/* E_cannotSupport__C */
__FAR__ const CT__ti_sysbios_family_c28_Timer_E_cannotSupport ti_sysbios_family_c28_Timer_E_cannotSupport__C = (((xdc_runtime_Assert_Id)606) << 16 | 16);

/* anyMask__C */
__FAR__ const CT__ti_sysbios_family_c28_Timer_anyMask ti_sysbios_family_c28_Timer_anyMask__C = (xdc_UInt)0x7;

/* startupNeeded__C */
__FAR__ const CT__ti_sysbios_family_c28_Timer_startupNeeded ti_sysbios_family_c28_Timer_startupNeeded__C = (xdc_UInt)0x1;


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
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__id ti_sysbios_gates_GateHwi_Module__id__C = (xdc_Bits16)0x8023;

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
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__id ti_sysbios_gates_GateMutex_Module__id__C = (xdc_Bits16)0x8024;

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
__FAR__ const CT__ti_sysbios_gates_GateMutex_A_badContext ti_sysbios_gates_GateMutex_A_badContext__C = (((xdc_runtime_Assert_Id)1874) << 16 | 16);


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
__FAR__ const CT__ti_sysbios_hal_Hwi_Object__count ti_sysbios_hal_Hwi_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Object__heap ti_sysbios_hal_Hwi_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Object__sizeof ti_sysbios_hal_Hwi_Object__sizeof__C = sizeof(ti_sysbios_hal_Hwi_Object__);

/* Object__table__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Object__table ti_sysbios_hal_Hwi_Object__table__C = 0;

/* dispatcherAutoNestingSupport__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_dispatcherAutoNestingSupport ti_sysbios_hal_Hwi_dispatcherAutoNestingSupport__C = 1;

/* dispatcherSwiSupport__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_dispatcherSwiSupport ti_sysbios_hal_Hwi_dispatcherSwiSupport__C = 1;

/* dispatcherTaskSupport__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_dispatcherTaskSupport ti_sysbios_hal_Hwi_dispatcherTaskSupport__C = 1;

/* dispatcherIrpTrackingSupport__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_dispatcherIrpTrackingSupport ti_sysbios_hal_Hwi_dispatcherIrpTrackingSupport__C = 1;

/* E_stackOverflow__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_E_stackOverflow ti_sysbios_hal_Hwi_E_stackOverflow__C = (((xdc_runtime_Error_Id)3234) << 16 | 0);


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
        (ti_sysbios_hal_Timer_TimerProxy_Handle)&ti_sysbios_family_c28_Timer_Object__table__V[0],  /* pi */
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
__T1_ti_sysbios_heaps_HeapMem_Instance_State__buf ti_sysbios_heaps_HeapMem_Instance_State_0_buf__A[4099];

/* Module__root__V */
ti_sysbios_heaps_HeapMem_Module__ ti_sysbios_heaps_HeapMem_Module__root__V = {
    {&ti_sysbios_heaps_HeapMem_Module__root__V.link,  /* link.next */
    &ti_sysbios_heaps_HeapMem_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_heaps_HeapMem_Object__ ti_sysbios_heaps_HeapMem_Object__table__V[1] = {
    {/* instance#0 */
        &ti_sysbios_heaps_HeapMem_Module__FXNS__C,
        ((xdc_UArg)(0x4)),  /* align */
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
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__id ti_sysbios_heaps_HeapMem_Module__id__C = (xdc_Bits16)0x802a;

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
__FAR__ const CT__ti_sysbios_heaps_HeapMem_A_zeroBlock ti_sysbios_heaps_HeapMem_A_zeroBlock__C = (((xdc_runtime_Assert_Id)2571) << 16 | 16);

/* A_heapSize__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_A_heapSize ti_sysbios_heaps_HeapMem_A_heapSize__C = (((xdc_runtime_Assert_Id)2607) << 16 | 16);

/* A_align__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_A_align ti_sysbios_heaps_HeapMem_A_align__C = (((xdc_runtime_Assert_Id)2652) << 16 | 16);

/* E_memory__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_E_memory ti_sysbios_heaps_HeapMem_E_memory__C = (((xdc_runtime_Error_Id)3565) << 16 | 0);

/* A_invalidFree__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_A_invalidFree ti_sysbios_heaps_HeapMem_A_invalidFree__C = (((xdc_runtime_Assert_Id)2543) << 16 | 16);

/* reqAlign__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_reqAlign ti_sysbios_heaps_HeapMem_reqAlign__C = (xdc_Int)0x4;

/* reqAlignMask__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_reqAlignMask ti_sysbios_heaps_HeapMem_reqAlignMask__C = (xdc_Int)0x3;


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
__FAR__ const CT__ti_sysbios_knl_Clock_LW_delayed ti_sysbios_knl_Clock_LW_delayed__C = (((xdc_runtime_Log_Event)3865) << 16 | 1024);

/* LM_tick__C */
__FAR__ const CT__ti_sysbios_knl_Clock_LM_tick ti_sysbios_knl_Clock_LM_tick__C = (((xdc_runtime_Log_Event)3887) << 16 | 768);

/* LM_begin__C */
__FAR__ const CT__ti_sysbios_knl_Clock_LM_begin ti_sysbios_knl_Clock_LM_begin__C = (((xdc_runtime_Log_Event)3905) << 16 | 768);

/* A_clockDisabled__C */
__FAR__ const CT__ti_sysbios_knl_Clock_A_clockDisabled ti_sysbios_knl_Clock_A_clockDisabled__C = (((xdc_runtime_Assert_Id)661) << 16 | 16);

/* A_badThreadType__C */
__FAR__ const CT__ti_sysbios_knl_Clock_A_badThreadType ti_sysbios_knl_Clock_A_badThreadType__C = (((xdc_runtime_Assert_Id)742) << 16 | 16);

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
__FAR__ const CT__ti_sysbios_knl_Semaphore_LM_post ti_sysbios_knl_Semaphore_LM_post__C = (((xdc_runtime_Log_Event)3937) << 16 | 768);

/* LM_pend__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_LM_pend ti_sysbios_knl_Semaphore_LM_pend__C = (((xdc_runtime_Log_Event)3967) << 16 | 768);

/* A_noEvents__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_A_noEvents ti_sysbios_knl_Semaphore_A_noEvents__C = (((xdc_runtime_Assert_Id)1062) << 16 | 16);

/* A_invTimeout__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_A_invTimeout ti_sysbios_knl_Semaphore_A_invTimeout__C = (((xdc_runtime_Assert_Id)1117) << 16 | 16);

/* A_badContext__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_A_badContext ti_sysbios_knl_Semaphore_A_badContext__C = (((xdc_runtime_Assert_Id)941) << 16 | 16);

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
__FAR__ const CT__ti_sysbios_knl_Swi_LM_begin ti_sysbios_knl_Swi_LM_begin__C = (((xdc_runtime_Log_Event)4010) << 16 | 768);

/* LD_end__C */
__FAR__ const CT__ti_sysbios_knl_Swi_LD_end ti_sysbios_knl_Swi_LD_end__C = (((xdc_runtime_Log_Event)4057) << 16 | 512);

/* LM_post__C */
__FAR__ const CT__ti_sysbios_knl_Swi_LM_post ti_sysbios_knl_Swi_LM_post__C = (((xdc_runtime_Log_Event)4075) << 16 | 768);

/* A_swiDisabled__C */
__FAR__ const CT__ti_sysbios_knl_Swi_A_swiDisabled ti_sysbios_knl_Swi_A_swiDisabled__C = (((xdc_runtime_Assert_Id)1182) << 16 | 16);

/* A_badPriority__C */
__FAR__ const CT__ti_sysbios_knl_Swi_A_badPriority ti_sysbios_knl_Swi_A_badPriority__C = (((xdc_runtime_Assert_Id)1239) << 16 | 16);

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
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_0_stack__A[256];

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
        (xdc_SizeT)0x100,  /* stackSize */
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
__FAR__ const CT__ti_sysbios_knl_Task_LM_switch ti_sysbios_knl_Task_LM_switch__C = (((xdc_runtime_Log_Event)4115) << 16 | 768);

/* LM_sleep__C */
__FAR__ const CT__ti_sysbios_knl_Task_LM_sleep ti_sysbios_knl_Task_LM_sleep__C = (((xdc_runtime_Log_Event)4183) << 16 | 768);

/* LD_ready__C */
__FAR__ const CT__ti_sysbios_knl_Task_LD_ready ti_sysbios_knl_Task_LD_ready__C = (((xdc_runtime_Log_Event)4228) << 16 | 512);

/* LD_block__C */
__FAR__ const CT__ti_sysbios_knl_Task_LD_block ti_sysbios_knl_Task_LD_block__C = (((xdc_runtime_Log_Event)4269) << 16 | 512);

/* LM_yield__C */
__FAR__ const CT__ti_sysbios_knl_Task_LM_yield ti_sysbios_knl_Task_LM_yield__C = (((xdc_runtime_Log_Event)4301) << 16 | 768);

/* LM_setPri__C */
__FAR__ const CT__ti_sysbios_knl_Task_LM_setPri ti_sysbios_knl_Task_LM_setPri__C = (((xdc_runtime_Log_Event)4349) << 16 | 768);

/* LD_exit__C */
__FAR__ const CT__ti_sysbios_knl_Task_LD_exit ti_sysbios_knl_Task_LD_exit__C = (((xdc_runtime_Log_Event)4405) << 16 | 512);

/* E_stackOverflow__C */
__FAR__ const CT__ti_sysbios_knl_Task_E_stackOverflow ti_sysbios_knl_Task_E_stackOverflow__C = (((xdc_runtime_Error_Id)3271) << 16 | 0);

/* E_spOutOfBounds__C */
__FAR__ const CT__ti_sysbios_knl_Task_E_spOutOfBounds ti_sysbios_knl_Task_E_spOutOfBounds__C = (((xdc_runtime_Error_Id)3314) << 16 | 0);

/* A_badThreadType__C */
__FAR__ const CT__ti_sysbios_knl_Task_A_badThreadType ti_sysbios_knl_Task_A_badThreadType__C = (((xdc_runtime_Assert_Id)1288) << 16 | 16);

/* A_badTaskState__C */
__FAR__ const CT__ti_sysbios_knl_Task_A_badTaskState ti_sysbios_knl_Task_A_badTaskState__C = (((xdc_runtime_Assert_Id)1357) << 16 | 16);

/* A_noPendElem__C */
__FAR__ const CT__ti_sysbios_knl_Task_A_noPendElem ti_sysbios_knl_Task_A_noPendElem__C = (((xdc_runtime_Assert_Id)1411) << 16 | 16);

/* A_taskDisabled__C */
__FAR__ const CT__ti_sysbios_knl_Task_A_taskDisabled ti_sysbios_knl_Task_A_taskDisabled__C = (((xdc_runtime_Assert_Id)1465) << 16 | 16);

/* A_badPriority__C */
__FAR__ const CT__ti_sysbios_knl_Task_A_badPriority ti_sysbios_knl_Task_A_badPriority__C = (((xdc_runtime_Assert_Id)1528) << 16 | 16);

/* A_badTimeout__C */
__FAR__ const CT__ti_sysbios_knl_Task_A_badTimeout ti_sysbios_knl_Task_A_badTimeout__C = (((xdc_runtime_Assert_Id)1578) << 16 | 16);

/* numPriorities__C */
__FAR__ const CT__ti_sysbios_knl_Task_numPriorities ti_sysbios_knl_Task_numPriorities__C = (xdc_UInt)0x10;

/* defaultStackSize__C */
__FAR__ const CT__ti_sysbios_knl_Task_defaultStackSize ti_sysbios_knl_Task_defaultStackSize__C = (xdc_SizeT)0x100;

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
__FAR__ const CT__xdc_runtime_Assert_E_assertFailed xdc_runtime_Assert_E_assertFailed__C = (((xdc_runtime_Error_Id)2767) << 16 | 0);


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
__FAR__ const CT__xdc_runtime_Error_E_generic xdc_runtime_Error_E_generic__C = (((xdc_runtime_Error_Id)2789) << 16 | 0);

/* E_memory__C */
__FAR__ const CT__xdc_runtime_Error_E_memory xdc_runtime_Error_E_memory__C = (((xdc_runtime_Error_Id)2793) << 16 | 0);

/* E_msgCode__C */
__FAR__ const CT__xdc_runtime_Error_E_msgCode xdc_runtime_Error_E_msgCode__C = (((xdc_runtime_Error_Id)2827) << 16 | 0);

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
__FAR__ const CT__xdc_runtime_Log_L_construct xdc_runtime_Log_L_construct__C = (((xdc_runtime_Log_Event)3601) << 16 | 4);

/* L_create__C */
__FAR__ const CT__xdc_runtime_Log_L_create xdc_runtime_Log_L_create__C = (((xdc_runtime_Log_Event)3625) << 16 | 4);

/* L_destruct__C */
__FAR__ const CT__xdc_runtime_Log_L_destruct xdc_runtime_Log_L_destruct__C = (((xdc_runtime_Log_Event)3646) << 16 | 4);

/* L_delete__C */
__FAR__ const CT__xdc_runtime_Log_L_delete xdc_runtime_Log_L_delete__C = (((xdc_runtime_Log_Event)3665) << 16 | 4);

/* L_error__C */
__FAR__ const CT__xdc_runtime_Log_L_error xdc_runtime_Log_L_error__C = (((xdc_runtime_Log_Event)3682) << 16 | 192);

/* L_warning__C */
__FAR__ const CT__xdc_runtime_Log_L_warning xdc_runtime_Log_L_warning__C = (((xdc_runtime_Log_Event)3696) << 16 | 224);

/* L_info__C */
__FAR__ const CT__xdc_runtime_Log_L_info xdc_runtime_Log_L_info__C = (((xdc_runtime_Log_Event)3712) << 16 | 16384);

/* L_start__C */
__FAR__ const CT__xdc_runtime_Log_L_start xdc_runtime_Log_L_start__C = (((xdc_runtime_Log_Event)3719) << 16 | 32768);

/* L_stop__C */
__FAR__ const CT__xdc_runtime_Log_L_stop xdc_runtime_Log_L_stop__C = (((xdc_runtime_Log_Event)3730) << 16 | 32768);

/* L_startInstance__C */
__FAR__ const CT__xdc_runtime_Log_L_startInstance xdc_runtime_Log_L_startInstance__C = (((xdc_runtime_Log_Event)3740) << 16 | 32768);

/* L_stopInstance__C */
__FAR__ const CT__xdc_runtime_Log_L_stopInstance xdc_runtime_Log_L_stopInstance__C = (((xdc_runtime_Log_Event)3759) << 16 | 32768);


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
    (xdc_SizeT)0x2,  /* maxDefaultTypeAlign */
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
const __T1_xdc_runtime_Startup_firstFxns xdc_runtime_Startup_firstFxns__A[2] = {
    ((xdc_Void(*)(xdc_Void))((xdc_Fxn)ti_sysbios_heaps_HeapMem_init__I)),  /* [0] */
    ((xdc_Void(*)(xdc_Void))((xdc_Fxn)ti_sysbios_hal_Hwi_initStack)),  /* [1] */
};

/* --> xdc_runtime_Startup_lastFxns__A */
const __T1_xdc_runtime_Startup_lastFxns xdc_runtime_Startup_lastFxns__A[1] = {
    ((xdc_Void(*)(xdc_Void))((xdc_Fxn)xdc_runtime_System_lastFxn__I)),  /* [0] */
};

/* --> xdc_runtime_Startup_sfxnTab__A */
const __T1_xdc_runtime_Startup_sfxnTab xdc_runtime_Startup_sfxnTab__A[9] = {
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)xdc_runtime_System_Module_startup__E)),  /* [0] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)xdc_runtime_SysMin_Module_startup__E)),  /* [1] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_family_c28_Hwi_Module_startup__E)),  /* [2] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_family_c28_Timer_Module_startup__E)),  /* [3] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_hal_Hwi_Module_startup__E)),  /* [4] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_hal_Timer_Module_startup__E)),  /* [5] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_knl_Clock_Module_startup__E)),  /* [6] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_knl_Swi_Module_startup__E)),  /* [7] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_knl_Task_Module_startup__E)),  /* [8] */
};

/* --> xdc_runtime_Startup_sfxnRts__A */
const __T1_xdc_runtime_Startup_sfxnRts xdc_runtime_Startup_sfxnRts__A[9] = {
    1,  /* [0] */
    1,  /* [1] */
    0,  /* [2] */
    0,  /* [3] */
    0,  /* [4] */
    0,  /* [5] */
    0,  /* [6] */
    0,  /* [7] */
    0,  /* [8] */
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
__FAR__ const CT__xdc_runtime_Startup_firstFxns xdc_runtime_Startup_firstFxns__C = {2, ((__T1_xdc_runtime_Startup_firstFxns*)xdc_runtime_Startup_firstFxns__A)};

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
const __T1_xdc_runtime_Text_charTab xdc_runtime_Text_charTab__A[4770] = {
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
    (xdc_Char)0x62,  /* [357] */
    (xdc_Char)0x61,  /* [358] */
    (xdc_Char)0x64,  /* [359] */
    (xdc_Char)0x49,  /* [360] */
    (xdc_Char)0x6e,  /* [361] */
    (xdc_Char)0x74,  /* [362] */
    (xdc_Char)0x4e,  /* [363] */
    (xdc_Char)0x75,  /* [364] */
    (xdc_Char)0x6d,  /* [365] */
    (xdc_Char)0x3a,  /* [366] */
    (xdc_Char)0x20,  /* [367] */
    (xdc_Char)0x49,  /* [368] */
    (xdc_Char)0x6e,  /* [369] */
    (xdc_Char)0x76,  /* [370] */
    (xdc_Char)0x61,  /* [371] */
    (xdc_Char)0x6c,  /* [372] */
    (xdc_Char)0x69,  /* [373] */
    (xdc_Char)0x64,  /* [374] */
    (xdc_Char)0x20,  /* [375] */
    (xdc_Char)0x69,  /* [376] */
    (xdc_Char)0x6e,  /* [377] */
    (xdc_Char)0x74,  /* [378] */
    (xdc_Char)0x65,  /* [379] */
    (xdc_Char)0x72,  /* [380] */
    (xdc_Char)0x72,  /* [381] */
    (xdc_Char)0x75,  /* [382] */
    (xdc_Char)0x70,  /* [383] */
    (xdc_Char)0x74,  /* [384] */
    (xdc_Char)0x20,  /* [385] */
    (xdc_Char)0x6e,  /* [386] */
    (xdc_Char)0x75,  /* [387] */
    (xdc_Char)0x6d,  /* [388] */
    (xdc_Char)0x62,  /* [389] */
    (xdc_Char)0x65,  /* [390] */
    (xdc_Char)0x72,  /* [391] */
    (xdc_Char)0x0,  /* [392] */
    (xdc_Char)0x41,  /* [393] */
    (xdc_Char)0x5f,  /* [394] */
    (xdc_Char)0x69,  /* [395] */
    (xdc_Char)0x6e,  /* [396] */
    (xdc_Char)0x76,  /* [397] */
    (xdc_Char)0x61,  /* [398] */
    (xdc_Char)0x6c,  /* [399] */
    (xdc_Char)0x69,  /* [400] */
    (xdc_Char)0x64,  /* [401] */
    (xdc_Char)0x41,  /* [402] */
    (xdc_Char)0x72,  /* [403] */
    (xdc_Char)0x67,  /* [404] */
    (xdc_Char)0x3a,  /* [405] */
    (xdc_Char)0x20,  /* [406] */
    (xdc_Char)0x49,  /* [407] */
    (xdc_Char)0x6e,  /* [408] */
    (xdc_Char)0x76,  /* [409] */
    (xdc_Char)0x61,  /* [410] */
    (xdc_Char)0x6c,  /* [411] */
    (xdc_Char)0x69,  /* [412] */
    (xdc_Char)0x64,  /* [413] */
    (xdc_Char)0x20,  /* [414] */
    (xdc_Char)0x61,  /* [415] */
    (xdc_Char)0x72,  /* [416] */
    (xdc_Char)0x67,  /* [417] */
    (xdc_Char)0x75,  /* [418] */
    (xdc_Char)0x6d,  /* [419] */
    (xdc_Char)0x65,  /* [420] */
    (xdc_Char)0x6e,  /* [421] */
    (xdc_Char)0x74,  /* [422] */
    (xdc_Char)0x0,  /* [423] */
    (xdc_Char)0x41,  /* [424] */
    (xdc_Char)0x5f,  /* [425] */
    (xdc_Char)0x7a,  /* [426] */
    (xdc_Char)0x65,  /* [427] */
    (xdc_Char)0x72,  /* [428] */
    (xdc_Char)0x6f,  /* [429] */
    (xdc_Char)0x4c,  /* [430] */
    (xdc_Char)0x61,  /* [431] */
    (xdc_Char)0x74,  /* [432] */
    (xdc_Char)0x65,  /* [433] */
    (xdc_Char)0x6e,  /* [434] */
    (xdc_Char)0x63,  /* [435] */
    (xdc_Char)0x79,  /* [436] */
    (xdc_Char)0x43,  /* [437] */
    (xdc_Char)0x6f,  /* [438] */
    (xdc_Char)0x6e,  /* [439] */
    (xdc_Char)0x66,  /* [440] */
    (xdc_Char)0x6c,  /* [441] */
    (xdc_Char)0x69,  /* [442] */
    (xdc_Char)0x63,  /* [443] */
    (xdc_Char)0x74,  /* [444] */
    (xdc_Char)0x3a,  /* [445] */
    (xdc_Char)0x20,  /* [446] */
    (xdc_Char)0x43,  /* [447] */
    (xdc_Char)0x6f,  /* [448] */
    (xdc_Char)0x6e,  /* [449] */
    (xdc_Char)0x66,  /* [450] */
    (xdc_Char)0x6c,  /* [451] */
    (xdc_Char)0x69,  /* [452] */
    (xdc_Char)0x63,  /* [453] */
    (xdc_Char)0x74,  /* [454] */
    (xdc_Char)0x20,  /* [455] */
    (xdc_Char)0x77,  /* [456] */
    (xdc_Char)0x69,  /* [457] */
    (xdc_Char)0x74,  /* [458] */
    (xdc_Char)0x68,  /* [459] */
    (xdc_Char)0x20,  /* [460] */
    (xdc_Char)0x7a,  /* [461] */
    (xdc_Char)0x65,  /* [462] */
    (xdc_Char)0x72,  /* [463] */
    (xdc_Char)0x6f,  /* [464] */
    (xdc_Char)0x20,  /* [465] */
    (xdc_Char)0x6c,  /* [466] */
    (xdc_Char)0x61,  /* [467] */
    (xdc_Char)0x74,  /* [468] */
    (xdc_Char)0x65,  /* [469] */
    (xdc_Char)0x6e,  /* [470] */
    (xdc_Char)0x63,  /* [471] */
    (xdc_Char)0x79,  /* [472] */
    (xdc_Char)0x20,  /* [473] */
    (xdc_Char)0x49,  /* [474] */
    (xdc_Char)0x45,  /* [475] */
    (xdc_Char)0x52,  /* [476] */
    (xdc_Char)0x20,  /* [477] */
    (xdc_Char)0x6d,  /* [478] */
    (xdc_Char)0x61,  /* [479] */
    (xdc_Char)0x73,  /* [480] */
    (xdc_Char)0x6b,  /* [481] */
    (xdc_Char)0x0,  /* [482] */
    (xdc_Char)0x41,  /* [483] */
    (xdc_Char)0x5f,  /* [484] */
    (xdc_Char)0x69,  /* [485] */
    (xdc_Char)0x6e,  /* [486] */
    (xdc_Char)0x76,  /* [487] */
    (xdc_Char)0x61,  /* [488] */
    (xdc_Char)0x6c,  /* [489] */
    (xdc_Char)0x69,  /* [490] */
    (xdc_Char)0x64,  /* [491] */
    (xdc_Char)0x54,  /* [492] */
    (xdc_Char)0x69,  /* [493] */
    (xdc_Char)0x6d,  /* [494] */
    (xdc_Char)0x65,  /* [495] */
    (xdc_Char)0x72,  /* [496] */
    (xdc_Char)0x3a,  /* [497] */
    (xdc_Char)0x20,  /* [498] */
    (xdc_Char)0x54,  /* [499] */
    (xdc_Char)0x69,  /* [500] */
    (xdc_Char)0x6d,  /* [501] */
    (xdc_Char)0x65,  /* [502] */
    (xdc_Char)0x72,  /* [503] */
    (xdc_Char)0x20,  /* [504] */
    (xdc_Char)0x69,  /* [505] */
    (xdc_Char)0x64,  /* [506] */
    (xdc_Char)0x20,  /* [507] */
    (xdc_Char)0x6d,  /* [508] */
    (xdc_Char)0x75,  /* [509] */
    (xdc_Char)0x73,  /* [510] */
    (xdc_Char)0x74,  /* [511] */
    (xdc_Char)0x20,  /* [512] */
    (xdc_Char)0x62,  /* [513] */
    (xdc_Char)0x65,  /* [514] */
    (xdc_Char)0x20,  /* [515] */
    (xdc_Char)0x30,  /* [516] */
    (xdc_Char)0x2d,  /* [517] */
    (xdc_Char)0x32,  /* [518] */
    (xdc_Char)0x0,  /* [519] */
    (xdc_Char)0x41,  /* [520] */
    (xdc_Char)0x5f,  /* [521] */
    (xdc_Char)0x69,  /* [522] */
    (xdc_Char)0x6e,  /* [523] */
    (xdc_Char)0x76,  /* [524] */
    (xdc_Char)0x61,  /* [525] */
    (xdc_Char)0x6c,  /* [526] */
    (xdc_Char)0x69,  /* [527] */
    (xdc_Char)0x64,  /* [528] */
    (xdc_Char)0x52,  /* [529] */
    (xdc_Char)0x75,  /* [530] */
    (xdc_Char)0x6e,  /* [531] */
    (xdc_Char)0x4d,  /* [532] */
    (xdc_Char)0x6f,  /* [533] */
    (xdc_Char)0x64,  /* [534] */
    (xdc_Char)0x65,  /* [535] */
    (xdc_Char)0x3a,  /* [536] */
    (xdc_Char)0x20,  /* [537] */
    (xdc_Char)0x49,  /* [538] */
    (xdc_Char)0x6e,  /* [539] */
    (xdc_Char)0x76,  /* [540] */
    (xdc_Char)0x61,  /* [541] */
    (xdc_Char)0x6c,  /* [542] */
    (xdc_Char)0x69,  /* [543] */
    (xdc_Char)0x64,  /* [544] */
    (xdc_Char)0x20,  /* [545] */
    (xdc_Char)0x52,  /* [546] */
    (xdc_Char)0x75,  /* [547] */
    (xdc_Char)0x6e,  /* [548] */
    (xdc_Char)0x4d,  /* [549] */
    (xdc_Char)0x6f,  /* [550] */
    (xdc_Char)0x64,  /* [551] */
    (xdc_Char)0x65,  /* [552] */
    (xdc_Char)0x0,  /* [553] */
    (xdc_Char)0x41,  /* [554] */
    (xdc_Char)0x5f,  /* [555] */
    (xdc_Char)0x49,  /* [556] */
    (xdc_Char)0x6e,  /* [557] */
    (xdc_Char)0x76,  /* [558] */
    (xdc_Char)0x61,  /* [559] */
    (xdc_Char)0x6c,  /* [560] */
    (xdc_Char)0x69,  /* [561] */
    (xdc_Char)0x64,  /* [562] */
    (xdc_Char)0x4d,  /* [563] */
    (xdc_Char)0x61,  /* [564] */
    (xdc_Char)0x73,  /* [565] */
    (xdc_Char)0x6b,  /* [566] */
    (xdc_Char)0x3a,  /* [567] */
    (xdc_Char)0x20,  /* [568] */
    (xdc_Char)0x4d,  /* [569] */
    (xdc_Char)0x61,  /* [570] */
    (xdc_Char)0x73,  /* [571] */
    (xdc_Char)0x6b,  /* [572] */
    (xdc_Char)0x20,  /* [573] */
    (xdc_Char)0x69,  /* [574] */
    (xdc_Char)0x6e,  /* [575] */
    (xdc_Char)0x20,  /* [576] */
    (xdc_Char)0x68,  /* [577] */
    (xdc_Char)0x77,  /* [578] */
    (xdc_Char)0x69,  /* [579] */
    (xdc_Char)0x50,  /* [580] */
    (xdc_Char)0x61,  /* [581] */
    (xdc_Char)0x72,  /* [582] */
    (xdc_Char)0x61,  /* [583] */
    (xdc_Char)0x6d,  /* [584] */
    (xdc_Char)0x73,  /* [585] */
    (xdc_Char)0x20,  /* [586] */
    (xdc_Char)0x63,  /* [587] */
    (xdc_Char)0x61,  /* [588] */
    (xdc_Char)0x6e,  /* [589] */
    (xdc_Char)0x6e,  /* [590] */
    (xdc_Char)0x6f,  /* [591] */
    (xdc_Char)0x74,  /* [592] */
    (xdc_Char)0x20,  /* [593] */
    (xdc_Char)0x65,  /* [594] */
    (xdc_Char)0x6e,  /* [595] */
    (xdc_Char)0x61,  /* [596] */
    (xdc_Char)0x62,  /* [597] */
    (xdc_Char)0x6c,  /* [598] */
    (xdc_Char)0x65,  /* [599] */
    (xdc_Char)0x20,  /* [600] */
    (xdc_Char)0x73,  /* [601] */
    (xdc_Char)0x65,  /* [602] */
    (xdc_Char)0x6c,  /* [603] */
    (xdc_Char)0x66,  /* [604] */
    (xdc_Char)0x0,  /* [605] */
    (xdc_Char)0x45,  /* [606] */
    (xdc_Char)0x5f,  /* [607] */
    (xdc_Char)0x63,  /* [608] */
    (xdc_Char)0x61,  /* [609] */
    (xdc_Char)0x6e,  /* [610] */
    (xdc_Char)0x6e,  /* [611] */
    (xdc_Char)0x6f,  /* [612] */
    (xdc_Char)0x74,  /* [613] */
    (xdc_Char)0x53,  /* [614] */
    (xdc_Char)0x75,  /* [615] */
    (xdc_Char)0x70,  /* [616] */
    (xdc_Char)0x70,  /* [617] */
    (xdc_Char)0x6f,  /* [618] */
    (xdc_Char)0x72,  /* [619] */
    (xdc_Char)0x74,  /* [620] */
    (xdc_Char)0x3a,  /* [621] */
    (xdc_Char)0x20,  /* [622] */
    (xdc_Char)0x54,  /* [623] */
    (xdc_Char)0x69,  /* [624] */
    (xdc_Char)0x6d,  /* [625] */
    (xdc_Char)0x65,  /* [626] */
    (xdc_Char)0x72,  /* [627] */
    (xdc_Char)0x20,  /* [628] */
    (xdc_Char)0x63,  /* [629] */
    (xdc_Char)0x61,  /* [630] */
    (xdc_Char)0x6e,  /* [631] */
    (xdc_Char)0x6e,  /* [632] */
    (xdc_Char)0x6f,  /* [633] */
    (xdc_Char)0x74,  /* [634] */
    (xdc_Char)0x20,  /* [635] */
    (xdc_Char)0x73,  /* [636] */
    (xdc_Char)0x75,  /* [637] */
    (xdc_Char)0x70,  /* [638] */
    (xdc_Char)0x70,  /* [639] */
    (xdc_Char)0x6f,  /* [640] */
    (xdc_Char)0x72,  /* [641] */
    (xdc_Char)0x74,  /* [642] */
    (xdc_Char)0x20,  /* [643] */
    (xdc_Char)0x72,  /* [644] */
    (xdc_Char)0x65,  /* [645] */
    (xdc_Char)0x71,  /* [646] */
    (xdc_Char)0x75,  /* [647] */
    (xdc_Char)0x65,  /* [648] */
    (xdc_Char)0x73,  /* [649] */
    (xdc_Char)0x74,  /* [650] */
    (xdc_Char)0x65,  /* [651] */
    (xdc_Char)0x64,  /* [652] */
    (xdc_Char)0x20,  /* [653] */
    (xdc_Char)0x70,  /* [654] */
    (xdc_Char)0x65,  /* [655] */
    (xdc_Char)0x72,  /* [656] */
    (xdc_Char)0x69,  /* [657] */
    (xdc_Char)0x6f,  /* [658] */
    (xdc_Char)0x64,  /* [659] */
    (xdc_Char)0x0,  /* [660] */
    (xdc_Char)0x41,  /* [661] */
    (xdc_Char)0x5f,  /* [662] */
    (xdc_Char)0x63,  /* [663] */
    (xdc_Char)0x6c,  /* [664] */
    (xdc_Char)0x6f,  /* [665] */
    (xdc_Char)0x63,  /* [666] */
    (xdc_Char)0x6b,  /* [667] */
    (xdc_Char)0x44,  /* [668] */
    (xdc_Char)0x69,  /* [669] */
    (xdc_Char)0x73,  /* [670] */
    (xdc_Char)0x61,  /* [671] */
    (xdc_Char)0x62,  /* [672] */
    (xdc_Char)0x6c,  /* [673] */
    (xdc_Char)0x65,  /* [674] */
    (xdc_Char)0x64,  /* [675] */
    (xdc_Char)0x3a,  /* [676] */
    (xdc_Char)0x20,  /* [677] */
    (xdc_Char)0x43,  /* [678] */
    (xdc_Char)0x61,  /* [679] */
    (xdc_Char)0x6e,  /* [680] */
    (xdc_Char)0x6e,  /* [681] */
    (xdc_Char)0x6f,  /* [682] */
    (xdc_Char)0x74,  /* [683] */
    (xdc_Char)0x20,  /* [684] */
    (xdc_Char)0x63,  /* [685] */
    (xdc_Char)0x72,  /* [686] */
    (xdc_Char)0x65,  /* [687] */
    (xdc_Char)0x61,  /* [688] */
    (xdc_Char)0x74,  /* [689] */
    (xdc_Char)0x65,  /* [690] */
    (xdc_Char)0x20,  /* [691] */
    (xdc_Char)0x61,  /* [692] */
    (xdc_Char)0x20,  /* [693] */
    (xdc_Char)0x63,  /* [694] */
    (xdc_Char)0x6c,  /* [695] */
    (xdc_Char)0x6f,  /* [696] */
    (xdc_Char)0x63,  /* [697] */
    (xdc_Char)0x6b,  /* [698] */
    (xdc_Char)0x20,  /* [699] */
    (xdc_Char)0x69,  /* [700] */
    (xdc_Char)0x6e,  /* [701] */
    (xdc_Char)0x73,  /* [702] */
    (xdc_Char)0x74,  /* [703] */
    (xdc_Char)0x61,  /* [704] */
    (xdc_Char)0x6e,  /* [705] */
    (xdc_Char)0x63,  /* [706] */
    (xdc_Char)0x65,  /* [707] */
    (xdc_Char)0x20,  /* [708] */
    (xdc_Char)0x77,  /* [709] */
    (xdc_Char)0x68,  /* [710] */
    (xdc_Char)0x65,  /* [711] */
    (xdc_Char)0x6e,  /* [712] */
    (xdc_Char)0x20,  /* [713] */
    (xdc_Char)0x42,  /* [714] */
    (xdc_Char)0x49,  /* [715] */
    (xdc_Char)0x4f,  /* [716] */
    (xdc_Char)0x53,  /* [717] */
    (xdc_Char)0x2e,  /* [718] */
    (xdc_Char)0x63,  /* [719] */
    (xdc_Char)0x6c,  /* [720] */
    (xdc_Char)0x6f,  /* [721] */
    (xdc_Char)0x63,  /* [722] */
    (xdc_Char)0x6b,  /* [723] */
    (xdc_Char)0x45,  /* [724] */
    (xdc_Char)0x6e,  /* [725] */
    (xdc_Char)0x61,  /* [726] */
    (xdc_Char)0x62,  /* [727] */
    (xdc_Char)0x6c,  /* [728] */
    (xdc_Char)0x65,  /* [729] */
    (xdc_Char)0x64,  /* [730] */
    (xdc_Char)0x20,  /* [731] */
    (xdc_Char)0x69,  /* [732] */
    (xdc_Char)0x73,  /* [733] */
    (xdc_Char)0x20,  /* [734] */
    (xdc_Char)0x66,  /* [735] */
    (xdc_Char)0x61,  /* [736] */
    (xdc_Char)0x6c,  /* [737] */
    (xdc_Char)0x73,  /* [738] */
    (xdc_Char)0x65,  /* [739] */
    (xdc_Char)0x2e,  /* [740] */
    (xdc_Char)0x0,  /* [741] */
    (xdc_Char)0x41,  /* [742] */
    (xdc_Char)0x5f,  /* [743] */
    (xdc_Char)0x62,  /* [744] */
    (xdc_Char)0x61,  /* [745] */
    (xdc_Char)0x64,  /* [746] */
    (xdc_Char)0x54,  /* [747] */
    (xdc_Char)0x68,  /* [748] */
    (xdc_Char)0x72,  /* [749] */
    (xdc_Char)0x65,  /* [750] */
    (xdc_Char)0x61,  /* [751] */
    (xdc_Char)0x64,  /* [752] */
    (xdc_Char)0x54,  /* [753] */
    (xdc_Char)0x79,  /* [754] */
    (xdc_Char)0x70,  /* [755] */
    (xdc_Char)0x65,  /* [756] */
    (xdc_Char)0x3a,  /* [757] */
    (xdc_Char)0x20,  /* [758] */
    (xdc_Char)0x43,  /* [759] */
    (xdc_Char)0x61,  /* [760] */
    (xdc_Char)0x6e,  /* [761] */
    (xdc_Char)0x6e,  /* [762] */
    (xdc_Char)0x6f,  /* [763] */
    (xdc_Char)0x74,  /* [764] */
    (xdc_Char)0x20,  /* [765] */
    (xdc_Char)0x63,  /* [766] */
    (xdc_Char)0x72,  /* [767] */
    (xdc_Char)0x65,  /* [768] */
    (xdc_Char)0x61,  /* [769] */
    (xdc_Char)0x74,  /* [770] */
    (xdc_Char)0x65,  /* [771] */
    (xdc_Char)0x2f,  /* [772] */
    (xdc_Char)0x64,  /* [773] */
    (xdc_Char)0x65,  /* [774] */
    (xdc_Char)0x6c,  /* [775] */
    (xdc_Char)0x65,  /* [776] */
    (xdc_Char)0x74,  /* [777] */
    (xdc_Char)0x65,  /* [778] */
    (xdc_Char)0x20,  /* [779] */
    (xdc_Char)0x61,  /* [780] */
    (xdc_Char)0x20,  /* [781] */
    (xdc_Char)0x43,  /* [782] */
    (xdc_Char)0x6c,  /* [783] */
    (xdc_Char)0x6f,  /* [784] */
    (xdc_Char)0x63,  /* [785] */
    (xdc_Char)0x6b,  /* [786] */
    (xdc_Char)0x20,  /* [787] */
    (xdc_Char)0x66,  /* [788] */
    (xdc_Char)0x72,  /* [789] */
    (xdc_Char)0x6f,  /* [790] */
    (xdc_Char)0x6d,  /* [791] */
    (xdc_Char)0x20,  /* [792] */
    (xdc_Char)0x48,  /* [793] */
    (xdc_Char)0x77,  /* [794] */
    (xdc_Char)0x69,  /* [795] */
    (xdc_Char)0x20,  /* [796] */
    (xdc_Char)0x6f,  /* [797] */
    (xdc_Char)0x72,  /* [798] */
    (xdc_Char)0x20,  /* [799] */
    (xdc_Char)0x53,  /* [800] */
    (xdc_Char)0x77,  /* [801] */
    (xdc_Char)0x69,  /* [802] */
    (xdc_Char)0x20,  /* [803] */
    (xdc_Char)0x74,  /* [804] */
    (xdc_Char)0x68,  /* [805] */
    (xdc_Char)0x72,  /* [806] */
    (xdc_Char)0x65,  /* [807] */
    (xdc_Char)0x61,  /* [808] */
    (xdc_Char)0x64,  /* [809] */
    (xdc_Char)0x2e,  /* [810] */
    (xdc_Char)0x0,  /* [811] */
    (xdc_Char)0x41,  /* [812] */
    (xdc_Char)0x5f,  /* [813] */
    (xdc_Char)0x6e,  /* [814] */
    (xdc_Char)0x75,  /* [815] */
    (xdc_Char)0x6c,  /* [816] */
    (xdc_Char)0x6c,  /* [817] */
    (xdc_Char)0x45,  /* [818] */
    (xdc_Char)0x76,  /* [819] */
    (xdc_Char)0x65,  /* [820] */
    (xdc_Char)0x6e,  /* [821] */
    (xdc_Char)0x74,  /* [822] */
    (xdc_Char)0x4d,  /* [823] */
    (xdc_Char)0x61,  /* [824] */
    (xdc_Char)0x73,  /* [825] */
    (xdc_Char)0x6b,  /* [826] */
    (xdc_Char)0x73,  /* [827] */
    (xdc_Char)0x3a,  /* [828] */
    (xdc_Char)0x20,  /* [829] */
    (xdc_Char)0x6f,  /* [830] */
    (xdc_Char)0x72,  /* [831] */
    (xdc_Char)0x4d,  /* [832] */
    (xdc_Char)0x61,  /* [833] */
    (xdc_Char)0x73,  /* [834] */
    (xdc_Char)0x6b,  /* [835] */
    (xdc_Char)0x20,  /* [836] */
    (xdc_Char)0x61,  /* [837] */
    (xdc_Char)0x6e,  /* [838] */
    (xdc_Char)0x64,  /* [839] */
    (xdc_Char)0x20,  /* [840] */
    (xdc_Char)0x61,  /* [841] */
    (xdc_Char)0x6e,  /* [842] */
    (xdc_Char)0x64,  /* [843] */
    (xdc_Char)0x4d,  /* [844] */
    (xdc_Char)0x61,  /* [845] */
    (xdc_Char)0x73,  /* [846] */
    (xdc_Char)0x6b,  /* [847] */
    (xdc_Char)0x20,  /* [848] */
    (xdc_Char)0x61,  /* [849] */
    (xdc_Char)0x72,  /* [850] */
    (xdc_Char)0x65,  /* [851] */
    (xdc_Char)0x20,  /* [852] */
    (xdc_Char)0x6e,  /* [853] */
    (xdc_Char)0x75,  /* [854] */
    (xdc_Char)0x6c,  /* [855] */
    (xdc_Char)0x6c,  /* [856] */
    (xdc_Char)0x2e,  /* [857] */
    (xdc_Char)0x0,  /* [858] */
    (xdc_Char)0x41,  /* [859] */
    (xdc_Char)0x5f,  /* [860] */
    (xdc_Char)0x6e,  /* [861] */
    (xdc_Char)0x75,  /* [862] */
    (xdc_Char)0x6c,  /* [863] */
    (xdc_Char)0x6c,  /* [864] */
    (xdc_Char)0x45,  /* [865] */
    (xdc_Char)0x76,  /* [866] */
    (xdc_Char)0x65,  /* [867] */
    (xdc_Char)0x6e,  /* [868] */
    (xdc_Char)0x74,  /* [869] */
    (xdc_Char)0x49,  /* [870] */
    (xdc_Char)0x64,  /* [871] */
    (xdc_Char)0x3a,  /* [872] */
    (xdc_Char)0x20,  /* [873] */
    (xdc_Char)0x70,  /* [874] */
    (xdc_Char)0x6f,  /* [875] */
    (xdc_Char)0x73,  /* [876] */
    (xdc_Char)0x74,  /* [877] */
    (xdc_Char)0x65,  /* [878] */
    (xdc_Char)0x64,  /* [879] */
    (xdc_Char)0x20,  /* [880] */
    (xdc_Char)0x65,  /* [881] */
    (xdc_Char)0x76,  /* [882] */
    (xdc_Char)0x65,  /* [883] */
    (xdc_Char)0x6e,  /* [884] */
    (xdc_Char)0x74,  /* [885] */
    (xdc_Char)0x49,  /* [886] */
    (xdc_Char)0x64,  /* [887] */
    (xdc_Char)0x20,  /* [888] */
    (xdc_Char)0x69,  /* [889] */
    (xdc_Char)0x73,  /* [890] */
    (xdc_Char)0x20,  /* [891] */
    (xdc_Char)0x6e,  /* [892] */
    (xdc_Char)0x75,  /* [893] */
    (xdc_Char)0x6c,  /* [894] */
    (xdc_Char)0x6c,  /* [895] */
    (xdc_Char)0x2e,  /* [896] */
    (xdc_Char)0x0,  /* [897] */
    (xdc_Char)0x41,  /* [898] */
    (xdc_Char)0x5f,  /* [899] */
    (xdc_Char)0x65,  /* [900] */
    (xdc_Char)0x76,  /* [901] */
    (xdc_Char)0x65,  /* [902] */
    (xdc_Char)0x6e,  /* [903] */
    (xdc_Char)0x74,  /* [904] */
    (xdc_Char)0x49,  /* [905] */
    (xdc_Char)0x6e,  /* [906] */
    (xdc_Char)0x55,  /* [907] */
    (xdc_Char)0x73,  /* [908] */
    (xdc_Char)0x65,  /* [909] */
    (xdc_Char)0x3a,  /* [910] */
    (xdc_Char)0x20,  /* [911] */
    (xdc_Char)0x45,  /* [912] */
    (xdc_Char)0x76,  /* [913] */
    (xdc_Char)0x65,  /* [914] */
    (xdc_Char)0x6e,  /* [915] */
    (xdc_Char)0x74,  /* [916] */
    (xdc_Char)0x20,  /* [917] */
    (xdc_Char)0x6f,  /* [918] */
    (xdc_Char)0x62,  /* [919] */
    (xdc_Char)0x6a,  /* [920] */
    (xdc_Char)0x65,  /* [921] */
    (xdc_Char)0x63,  /* [922] */
    (xdc_Char)0x74,  /* [923] */
    (xdc_Char)0x20,  /* [924] */
    (xdc_Char)0x61,  /* [925] */
    (xdc_Char)0x6c,  /* [926] */
    (xdc_Char)0x72,  /* [927] */
    (xdc_Char)0x65,  /* [928] */
    (xdc_Char)0x61,  /* [929] */
    (xdc_Char)0x64,  /* [930] */
    (xdc_Char)0x79,  /* [931] */
    (xdc_Char)0x20,  /* [932] */
    (xdc_Char)0x69,  /* [933] */
    (xdc_Char)0x6e,  /* [934] */
    (xdc_Char)0x20,  /* [935] */
    (xdc_Char)0x75,  /* [936] */
    (xdc_Char)0x73,  /* [937] */
    (xdc_Char)0x65,  /* [938] */
    (xdc_Char)0x2e,  /* [939] */
    (xdc_Char)0x0,  /* [940] */
    (xdc_Char)0x41,  /* [941] */
    (xdc_Char)0x5f,  /* [942] */
    (xdc_Char)0x62,  /* [943] */
    (xdc_Char)0x61,  /* [944] */
    (xdc_Char)0x64,  /* [945] */
    (xdc_Char)0x43,  /* [946] */
    (xdc_Char)0x6f,  /* [947] */
    (xdc_Char)0x6e,  /* [948] */
    (xdc_Char)0x74,  /* [949] */
    (xdc_Char)0x65,  /* [950] */
    (xdc_Char)0x78,  /* [951] */
    (xdc_Char)0x74,  /* [952] */
    (xdc_Char)0x3a,  /* [953] */
    (xdc_Char)0x20,  /* [954] */
    (xdc_Char)0x62,  /* [955] */
    (xdc_Char)0x61,  /* [956] */
    (xdc_Char)0x64,  /* [957] */
    (xdc_Char)0x20,  /* [958] */
    (xdc_Char)0x63,  /* [959] */
    (xdc_Char)0x61,  /* [960] */
    (xdc_Char)0x6c,  /* [961] */
    (xdc_Char)0x6c,  /* [962] */
    (xdc_Char)0x69,  /* [963] */
    (xdc_Char)0x6e,  /* [964] */
    (xdc_Char)0x67,  /* [965] */
    (xdc_Char)0x20,  /* [966] */
    (xdc_Char)0x63,  /* [967] */
    (xdc_Char)0x6f,  /* [968] */
    (xdc_Char)0x6e,  /* [969] */
    (xdc_Char)0x74,  /* [970] */
    (xdc_Char)0x65,  /* [971] */
    (xdc_Char)0x78,  /* [972] */
    (xdc_Char)0x74,  /* [973] */
    (xdc_Char)0x2e,  /* [974] */
    (xdc_Char)0x20,  /* [975] */
    (xdc_Char)0x4d,  /* [976] */
    (xdc_Char)0x75,  /* [977] */
    (xdc_Char)0x73,  /* [978] */
    (xdc_Char)0x74,  /* [979] */
    (xdc_Char)0x20,  /* [980] */
    (xdc_Char)0x62,  /* [981] */
    (xdc_Char)0x65,  /* [982] */
    (xdc_Char)0x20,  /* [983] */
    (xdc_Char)0x63,  /* [984] */
    (xdc_Char)0x61,  /* [985] */
    (xdc_Char)0x6c,  /* [986] */
    (xdc_Char)0x6c,  /* [987] */
    (xdc_Char)0x65,  /* [988] */
    (xdc_Char)0x64,  /* [989] */
    (xdc_Char)0x20,  /* [990] */
    (xdc_Char)0x66,  /* [991] */
    (xdc_Char)0x72,  /* [992] */
    (xdc_Char)0x6f,  /* [993] */
    (xdc_Char)0x6d,  /* [994] */
    (xdc_Char)0x20,  /* [995] */
    (xdc_Char)0x61,  /* [996] */
    (xdc_Char)0x20,  /* [997] */
    (xdc_Char)0x54,  /* [998] */
    (xdc_Char)0x61,  /* [999] */
    (xdc_Char)0x73,  /* [1000] */
    (xdc_Char)0x6b,  /* [1001] */
    (xdc_Char)0x2e,  /* [1002] */
    (xdc_Char)0x0,  /* [1003] */
    (xdc_Char)0x4d,  /* [1004] */
    (xdc_Char)0x61,  /* [1005] */
    (xdc_Char)0x69,  /* [1006] */
    (xdc_Char)0x6c,  /* [1007] */
    (xdc_Char)0x62,  /* [1008] */
    (xdc_Char)0x6f,  /* [1009] */
    (xdc_Char)0x78,  /* [1010] */
    (xdc_Char)0x5f,  /* [1011] */
    (xdc_Char)0x63,  /* [1012] */
    (xdc_Char)0x72,  /* [1013] */
    (xdc_Char)0x65,  /* [1014] */
    (xdc_Char)0x61,  /* [1015] */
    (xdc_Char)0x74,  /* [1016] */
    (xdc_Char)0x65,  /* [1017] */
    (xdc_Char)0x27,  /* [1018] */
    (xdc_Char)0x73,  /* [1019] */
    (xdc_Char)0x20,  /* [1020] */
    (xdc_Char)0x62,  /* [1021] */
    (xdc_Char)0x75,  /* [1022] */
    (xdc_Char)0x66,  /* [1023] */
    (xdc_Char)0x53,  /* [1024] */
    (xdc_Char)0x69,  /* [1025] */
    (xdc_Char)0x7a,  /* [1026] */
    (xdc_Char)0x65,  /* [1027] */
    (xdc_Char)0x20,  /* [1028] */
    (xdc_Char)0x70,  /* [1029] */
    (xdc_Char)0x61,  /* [1030] */
    (xdc_Char)0x72,  /* [1031] */
    (xdc_Char)0x61,  /* [1032] */
    (xdc_Char)0x6d,  /* [1033] */
    (xdc_Char)0x65,  /* [1034] */
    (xdc_Char)0x74,  /* [1035] */
    (xdc_Char)0x65,  /* [1036] */
    (xdc_Char)0x72,  /* [1037] */
    (xdc_Char)0x20,  /* [1038] */
    (xdc_Char)0x69,  /* [1039] */
    (xdc_Char)0x73,  /* [1040] */
    (xdc_Char)0x20,  /* [1041] */
    (xdc_Char)0x69,  /* [1042] */
    (xdc_Char)0x6e,  /* [1043] */
    (xdc_Char)0x76,  /* [1044] */
    (xdc_Char)0x61,  /* [1045] */
    (xdc_Char)0x6c,  /* [1046] */
    (xdc_Char)0x69,  /* [1047] */
    (xdc_Char)0x64,  /* [1048] */
    (xdc_Char)0x20,  /* [1049] */
    (xdc_Char)0x28,  /* [1050] */
    (xdc_Char)0x74,  /* [1051] */
    (xdc_Char)0x6f,  /* [1052] */
    (xdc_Char)0x6f,  /* [1053] */
    (xdc_Char)0x20,  /* [1054] */
    (xdc_Char)0x73,  /* [1055] */
    (xdc_Char)0x6d,  /* [1056] */
    (xdc_Char)0x61,  /* [1057] */
    (xdc_Char)0x6c,  /* [1058] */
    (xdc_Char)0x6c,  /* [1059] */
    (xdc_Char)0x29,  /* [1060] */
    (xdc_Char)0x0,  /* [1061] */
    (xdc_Char)0x41,  /* [1062] */
    (xdc_Char)0x5f,  /* [1063] */
    (xdc_Char)0x6e,  /* [1064] */
    (xdc_Char)0x6f,  /* [1065] */
    (xdc_Char)0x45,  /* [1066] */
    (xdc_Char)0x76,  /* [1067] */
    (xdc_Char)0x65,  /* [1068] */
    (xdc_Char)0x6e,  /* [1069] */
    (xdc_Char)0x74,  /* [1070] */
    (xdc_Char)0x73,  /* [1071] */
    (xdc_Char)0x3a,  /* [1072] */
    (xdc_Char)0x20,  /* [1073] */
    (xdc_Char)0x54,  /* [1074] */
    (xdc_Char)0x68,  /* [1075] */
    (xdc_Char)0x65,  /* [1076] */
    (xdc_Char)0x20,  /* [1077] */
    (xdc_Char)0x45,  /* [1078] */
    (xdc_Char)0x76,  /* [1079] */
    (xdc_Char)0x65,  /* [1080] */
    (xdc_Char)0x6e,  /* [1081] */
    (xdc_Char)0x74,  /* [1082] */
    (xdc_Char)0x2e,  /* [1083] */
    (xdc_Char)0x73,  /* [1084] */
    (xdc_Char)0x75,  /* [1085] */
    (xdc_Char)0x70,  /* [1086] */
    (xdc_Char)0x70,  /* [1087] */
    (xdc_Char)0x6f,  /* [1088] */
    (xdc_Char)0x72,  /* [1089] */
    (xdc_Char)0x74,  /* [1090] */
    (xdc_Char)0x73,  /* [1091] */
    (xdc_Char)0x45,  /* [1092] */
    (xdc_Char)0x76,  /* [1093] */
    (xdc_Char)0x65,  /* [1094] */
    (xdc_Char)0x6e,  /* [1095] */
    (xdc_Char)0x74,  /* [1096] */
    (xdc_Char)0x73,  /* [1097] */
    (xdc_Char)0x20,  /* [1098] */
    (xdc_Char)0x66,  /* [1099] */
    (xdc_Char)0x6c,  /* [1100] */
    (xdc_Char)0x61,  /* [1101] */
    (xdc_Char)0x67,  /* [1102] */
    (xdc_Char)0x20,  /* [1103] */
    (xdc_Char)0x69,  /* [1104] */
    (xdc_Char)0x73,  /* [1105] */
    (xdc_Char)0x20,  /* [1106] */
    (xdc_Char)0x64,  /* [1107] */
    (xdc_Char)0x69,  /* [1108] */
    (xdc_Char)0x73,  /* [1109] */
    (xdc_Char)0x61,  /* [1110] */
    (xdc_Char)0x62,  /* [1111] */
    (xdc_Char)0x6c,  /* [1112] */
    (xdc_Char)0x65,  /* [1113] */
    (xdc_Char)0x64,  /* [1114] */
    (xdc_Char)0x2e,  /* [1115] */
    (xdc_Char)0x0,  /* [1116] */
    (xdc_Char)0x41,  /* [1117] */
    (xdc_Char)0x5f,  /* [1118] */
    (xdc_Char)0x69,  /* [1119] */
    (xdc_Char)0x6e,  /* [1120] */
    (xdc_Char)0x76,  /* [1121] */
    (xdc_Char)0x54,  /* [1122] */
    (xdc_Char)0x69,  /* [1123] */
    (xdc_Char)0x6d,  /* [1124] */
    (xdc_Char)0x65,  /* [1125] */
    (xdc_Char)0x6f,  /* [1126] */
    (xdc_Char)0x75,  /* [1127] */
    (xdc_Char)0x74,  /* [1128] */
    (xdc_Char)0x3a,  /* [1129] */
    (xdc_Char)0x20,  /* [1130] */
    (xdc_Char)0x43,  /* [1131] */
    (xdc_Char)0x61,  /* [1132] */
    (xdc_Char)0x6e,  /* [1133] */
    (xdc_Char)0x27,  /* [1134] */
    (xdc_Char)0x74,  /* [1135] */
    (xdc_Char)0x20,  /* [1136] */
    (xdc_Char)0x75,  /* [1137] */
    (xdc_Char)0x73,  /* [1138] */
    (xdc_Char)0x65,  /* [1139] */
    (xdc_Char)0x20,  /* [1140] */
    (xdc_Char)0x42,  /* [1141] */
    (xdc_Char)0x49,  /* [1142] */
    (xdc_Char)0x4f,  /* [1143] */
    (xdc_Char)0x53,  /* [1144] */
    (xdc_Char)0x5f,  /* [1145] */
    (xdc_Char)0x45,  /* [1146] */
    (xdc_Char)0x56,  /* [1147] */
    (xdc_Char)0x45,  /* [1148] */
    (xdc_Char)0x4e,  /* [1149] */
    (xdc_Char)0x54,  /* [1150] */
    (xdc_Char)0x5f,  /* [1151] */
    (xdc_Char)0x41,  /* [1152] */
    (xdc_Char)0x43,  /* [1153] */
    (xdc_Char)0x51,  /* [1154] */
    (xdc_Char)0x55,  /* [1155] */
    (xdc_Char)0x49,  /* [1156] */
    (xdc_Char)0x52,  /* [1157] */
    (xdc_Char)0x45,  /* [1158] */
    (xdc_Char)0x44,  /* [1159] */
    (xdc_Char)0x20,  /* [1160] */
    (xdc_Char)0x77,  /* [1161] */
    (xdc_Char)0x69,  /* [1162] */
    (xdc_Char)0x74,  /* [1163] */
    (xdc_Char)0x68,  /* [1164] */
    (xdc_Char)0x20,  /* [1165] */
    (xdc_Char)0x74,  /* [1166] */
    (xdc_Char)0x68,  /* [1167] */
    (xdc_Char)0x69,  /* [1168] */
    (xdc_Char)0x73,  /* [1169] */
    (xdc_Char)0x20,  /* [1170] */
    (xdc_Char)0x53,  /* [1171] */
    (xdc_Char)0x65,  /* [1172] */
    (xdc_Char)0x6d,  /* [1173] */
    (xdc_Char)0x61,  /* [1174] */
    (xdc_Char)0x70,  /* [1175] */
    (xdc_Char)0x68,  /* [1176] */
    (xdc_Char)0x6f,  /* [1177] */
    (xdc_Char)0x72,  /* [1178] */
    (xdc_Char)0x65,  /* [1179] */
    (xdc_Char)0x2e,  /* [1180] */
    (xdc_Char)0x0,  /* [1181] */
    (xdc_Char)0x41,  /* [1182] */
    (xdc_Char)0x5f,  /* [1183] */
    (xdc_Char)0x73,  /* [1184] */
    (xdc_Char)0x77,  /* [1185] */
    (xdc_Char)0x69,  /* [1186] */
    (xdc_Char)0x44,  /* [1187] */
    (xdc_Char)0x69,  /* [1188] */
    (xdc_Char)0x73,  /* [1189] */
    (xdc_Char)0x61,  /* [1190] */
    (xdc_Char)0x62,  /* [1191] */
    (xdc_Char)0x6c,  /* [1192] */
    (xdc_Char)0x65,  /* [1193] */
    (xdc_Char)0x64,  /* [1194] */
    (xdc_Char)0x3a,  /* [1195] */
    (xdc_Char)0x20,  /* [1196] */
    (xdc_Char)0x43,  /* [1197] */
    (xdc_Char)0x61,  /* [1198] */
    (xdc_Char)0x6e,  /* [1199] */
    (xdc_Char)0x6e,  /* [1200] */
    (xdc_Char)0x6f,  /* [1201] */
    (xdc_Char)0x74,  /* [1202] */
    (xdc_Char)0x20,  /* [1203] */
    (xdc_Char)0x63,  /* [1204] */
    (xdc_Char)0x72,  /* [1205] */
    (xdc_Char)0x65,  /* [1206] */
    (xdc_Char)0x61,  /* [1207] */
    (xdc_Char)0x74,  /* [1208] */
    (xdc_Char)0x65,  /* [1209] */
    (xdc_Char)0x20,  /* [1210] */
    (xdc_Char)0x61,  /* [1211] */
    (xdc_Char)0x20,  /* [1212] */
    (xdc_Char)0x53,  /* [1213] */
    (xdc_Char)0x77,  /* [1214] */
    (xdc_Char)0x69,  /* [1215] */
    (xdc_Char)0x20,  /* [1216] */
    (xdc_Char)0x77,  /* [1217] */
    (xdc_Char)0x68,  /* [1218] */
    (xdc_Char)0x65,  /* [1219] */
    (xdc_Char)0x6e,  /* [1220] */
    (xdc_Char)0x20,  /* [1221] */
    (xdc_Char)0x53,  /* [1222] */
    (xdc_Char)0x77,  /* [1223] */
    (xdc_Char)0x69,  /* [1224] */
    (xdc_Char)0x20,  /* [1225] */
    (xdc_Char)0x69,  /* [1226] */
    (xdc_Char)0x73,  /* [1227] */
    (xdc_Char)0x20,  /* [1228] */
    (xdc_Char)0x64,  /* [1229] */
    (xdc_Char)0x69,  /* [1230] */
    (xdc_Char)0x73,  /* [1231] */
    (xdc_Char)0x61,  /* [1232] */
    (xdc_Char)0x62,  /* [1233] */
    (xdc_Char)0x6c,  /* [1234] */
    (xdc_Char)0x65,  /* [1235] */
    (xdc_Char)0x64,  /* [1236] */
    (xdc_Char)0x2e,  /* [1237] */
    (xdc_Char)0x0,  /* [1238] */
    (xdc_Char)0x41,  /* [1239] */
    (xdc_Char)0x5f,  /* [1240] */
    (xdc_Char)0x62,  /* [1241] */
    (xdc_Char)0x61,  /* [1242] */
    (xdc_Char)0x64,  /* [1243] */
    (xdc_Char)0x50,  /* [1244] */
    (xdc_Char)0x72,  /* [1245] */
    (xdc_Char)0x69,  /* [1246] */
    (xdc_Char)0x6f,  /* [1247] */
    (xdc_Char)0x72,  /* [1248] */
    (xdc_Char)0x69,  /* [1249] */
    (xdc_Char)0x74,  /* [1250] */
    (xdc_Char)0x79,  /* [1251] */
    (xdc_Char)0x3a,  /* [1252] */
    (xdc_Char)0x20,  /* [1253] */
    (xdc_Char)0x41,  /* [1254] */
    (xdc_Char)0x6e,  /* [1255] */
    (xdc_Char)0x20,  /* [1256] */
    (xdc_Char)0x69,  /* [1257] */
    (xdc_Char)0x6e,  /* [1258] */
    (xdc_Char)0x76,  /* [1259] */
    (xdc_Char)0x61,  /* [1260] */
    (xdc_Char)0x6c,  /* [1261] */
    (xdc_Char)0x69,  /* [1262] */
    (xdc_Char)0x64,  /* [1263] */
    (xdc_Char)0x20,  /* [1264] */
    (xdc_Char)0x53,  /* [1265] */
    (xdc_Char)0x77,  /* [1266] */
    (xdc_Char)0x69,  /* [1267] */
    (xdc_Char)0x20,  /* [1268] */
    (xdc_Char)0x70,  /* [1269] */
    (xdc_Char)0x72,  /* [1270] */
    (xdc_Char)0x69,  /* [1271] */
    (xdc_Char)0x6f,  /* [1272] */
    (xdc_Char)0x72,  /* [1273] */
    (xdc_Char)0x69,  /* [1274] */
    (xdc_Char)0x74,  /* [1275] */
    (xdc_Char)0x79,  /* [1276] */
    (xdc_Char)0x20,  /* [1277] */
    (xdc_Char)0x77,  /* [1278] */
    (xdc_Char)0x61,  /* [1279] */
    (xdc_Char)0x73,  /* [1280] */
    (xdc_Char)0x20,  /* [1281] */
    (xdc_Char)0x75,  /* [1282] */
    (xdc_Char)0x73,  /* [1283] */
    (xdc_Char)0x65,  /* [1284] */
    (xdc_Char)0x64,  /* [1285] */
    (xdc_Char)0x2e,  /* [1286] */
    (xdc_Char)0x0,  /* [1287] */
    (xdc_Char)0x41,  /* [1288] */
    (xdc_Char)0x5f,  /* [1289] */
    (xdc_Char)0x62,  /* [1290] */
    (xdc_Char)0x61,  /* [1291] */
    (xdc_Char)0x64,  /* [1292] */
    (xdc_Char)0x54,  /* [1293] */
    (xdc_Char)0x68,  /* [1294] */
    (xdc_Char)0x72,  /* [1295] */
    (xdc_Char)0x65,  /* [1296] */
    (xdc_Char)0x61,  /* [1297] */
    (xdc_Char)0x64,  /* [1298] */
    (xdc_Char)0x54,  /* [1299] */
    (xdc_Char)0x79,  /* [1300] */
    (xdc_Char)0x70,  /* [1301] */
    (xdc_Char)0x65,  /* [1302] */
    (xdc_Char)0x3a,  /* [1303] */
    (xdc_Char)0x20,  /* [1304] */
    (xdc_Char)0x43,  /* [1305] */
    (xdc_Char)0x61,  /* [1306] */
    (xdc_Char)0x6e,  /* [1307] */
    (xdc_Char)0x6e,  /* [1308] */
    (xdc_Char)0x6f,  /* [1309] */
    (xdc_Char)0x74,  /* [1310] */
    (xdc_Char)0x20,  /* [1311] */
    (xdc_Char)0x63,  /* [1312] */
    (xdc_Char)0x72,  /* [1313] */
    (xdc_Char)0x65,  /* [1314] */
    (xdc_Char)0x61,  /* [1315] */
    (xdc_Char)0x74,  /* [1316] */
    (xdc_Char)0x65,  /* [1317] */
    (xdc_Char)0x2f,  /* [1318] */
    (xdc_Char)0x64,  /* [1319] */
    (xdc_Char)0x65,  /* [1320] */
    (xdc_Char)0x6c,  /* [1321] */
    (xdc_Char)0x65,  /* [1322] */
    (xdc_Char)0x74,  /* [1323] */
    (xdc_Char)0x65,  /* [1324] */
    (xdc_Char)0x20,  /* [1325] */
    (xdc_Char)0x61,  /* [1326] */
    (xdc_Char)0x20,  /* [1327] */
    (xdc_Char)0x74,  /* [1328] */
    (xdc_Char)0x61,  /* [1329] */
    (xdc_Char)0x73,  /* [1330] */
    (xdc_Char)0x6b,  /* [1331] */
    (xdc_Char)0x20,  /* [1332] */
    (xdc_Char)0x66,  /* [1333] */
    (xdc_Char)0x72,  /* [1334] */
    (xdc_Char)0x6f,  /* [1335] */
    (xdc_Char)0x6d,  /* [1336] */
    (xdc_Char)0x20,  /* [1337] */
    (xdc_Char)0x48,  /* [1338] */
    (xdc_Char)0x77,  /* [1339] */
    (xdc_Char)0x69,  /* [1340] */
    (xdc_Char)0x20,  /* [1341] */
    (xdc_Char)0x6f,  /* [1342] */
    (xdc_Char)0x72,  /* [1343] */
    (xdc_Char)0x20,  /* [1344] */
    (xdc_Char)0x53,  /* [1345] */
    (xdc_Char)0x77,  /* [1346] */
    (xdc_Char)0x69,  /* [1347] */
    (xdc_Char)0x20,  /* [1348] */
    (xdc_Char)0x74,  /* [1349] */
    (xdc_Char)0x68,  /* [1350] */
    (xdc_Char)0x72,  /* [1351] */
    (xdc_Char)0x65,  /* [1352] */
    (xdc_Char)0x61,  /* [1353] */
    (xdc_Char)0x64,  /* [1354] */
    (xdc_Char)0x2e,  /* [1355] */
    (xdc_Char)0x0,  /* [1356] */
    (xdc_Char)0x41,  /* [1357] */
    (xdc_Char)0x5f,  /* [1358] */
    (xdc_Char)0x62,  /* [1359] */
    (xdc_Char)0x61,  /* [1360] */
    (xdc_Char)0x64,  /* [1361] */
    (xdc_Char)0x54,  /* [1362] */
    (xdc_Char)0x61,  /* [1363] */
    (xdc_Char)0x73,  /* [1364] */
    (xdc_Char)0x6b,  /* [1365] */
    (xdc_Char)0x53,  /* [1366] */
    (xdc_Char)0x74,  /* [1367] */
    (xdc_Char)0x61,  /* [1368] */
    (xdc_Char)0x74,  /* [1369] */
    (xdc_Char)0x65,  /* [1370] */
    (xdc_Char)0x3a,  /* [1371] */
    (xdc_Char)0x20,  /* [1372] */
    (xdc_Char)0x43,  /* [1373] */
    (xdc_Char)0x61,  /* [1374] */
    (xdc_Char)0x6e,  /* [1375] */
    (xdc_Char)0x27,  /* [1376] */
    (xdc_Char)0x74,  /* [1377] */
    (xdc_Char)0x20,  /* [1378] */
    (xdc_Char)0x64,  /* [1379] */
    (xdc_Char)0x65,  /* [1380] */
    (xdc_Char)0x6c,  /* [1381] */
    (xdc_Char)0x65,  /* [1382] */
    (xdc_Char)0x74,  /* [1383] */
    (xdc_Char)0x65,  /* [1384] */
    (xdc_Char)0x20,  /* [1385] */
    (xdc_Char)0x61,  /* [1386] */
    (xdc_Char)0x20,  /* [1387] */
    (xdc_Char)0x74,  /* [1388] */
    (xdc_Char)0x61,  /* [1389] */
    (xdc_Char)0x73,  /* [1390] */
    (xdc_Char)0x6b,  /* [1391] */
    (xdc_Char)0x20,  /* [1392] */
    (xdc_Char)0x69,  /* [1393] */
    (xdc_Char)0x6e,  /* [1394] */
    (xdc_Char)0x20,  /* [1395] */
    (xdc_Char)0x52,  /* [1396] */
    (xdc_Char)0x55,  /* [1397] */
    (xdc_Char)0x4e,  /* [1398] */
    (xdc_Char)0x4e,  /* [1399] */
    (xdc_Char)0x49,  /* [1400] */
    (xdc_Char)0x4e,  /* [1401] */
    (xdc_Char)0x47,  /* [1402] */
    (xdc_Char)0x20,  /* [1403] */
    (xdc_Char)0x73,  /* [1404] */
    (xdc_Char)0x74,  /* [1405] */
    (xdc_Char)0x61,  /* [1406] */
    (xdc_Char)0x74,  /* [1407] */
    (xdc_Char)0x65,  /* [1408] */
    (xdc_Char)0x2e,  /* [1409] */
    (xdc_Char)0x0,  /* [1410] */
    (xdc_Char)0x41,  /* [1411] */
    (xdc_Char)0x5f,  /* [1412] */
    (xdc_Char)0x6e,  /* [1413] */
    (xdc_Char)0x6f,  /* [1414] */
    (xdc_Char)0x50,  /* [1415] */
    (xdc_Char)0x65,  /* [1416] */
    (xdc_Char)0x6e,  /* [1417] */
    (xdc_Char)0x64,  /* [1418] */
    (xdc_Char)0x45,  /* [1419] */
    (xdc_Char)0x6c,  /* [1420] */
    (xdc_Char)0x65,  /* [1421] */
    (xdc_Char)0x6d,  /* [1422] */
    (xdc_Char)0x3a,  /* [1423] */
    (xdc_Char)0x20,  /* [1424] */
    (xdc_Char)0x4e,  /* [1425] */
    (xdc_Char)0x6f,  /* [1426] */
    (xdc_Char)0x74,  /* [1427] */
    (xdc_Char)0x20,  /* [1428] */
    (xdc_Char)0x65,  /* [1429] */
    (xdc_Char)0x6e,  /* [1430] */
    (xdc_Char)0x6f,  /* [1431] */
    (xdc_Char)0x75,  /* [1432] */
    (xdc_Char)0x67,  /* [1433] */
    (xdc_Char)0x68,  /* [1434] */
    (xdc_Char)0x20,  /* [1435] */
    (xdc_Char)0x69,  /* [1436] */
    (xdc_Char)0x6e,  /* [1437] */
    (xdc_Char)0x66,  /* [1438] */
    (xdc_Char)0x6f,  /* [1439] */
    (xdc_Char)0x20,  /* [1440] */
    (xdc_Char)0x74,  /* [1441] */
    (xdc_Char)0x6f,  /* [1442] */
    (xdc_Char)0x20,  /* [1443] */
    (xdc_Char)0x64,  /* [1444] */
    (xdc_Char)0x65,  /* [1445] */
    (xdc_Char)0x6c,  /* [1446] */
    (xdc_Char)0x65,  /* [1447] */
    (xdc_Char)0x74,  /* [1448] */
    (xdc_Char)0x65,  /* [1449] */
    (xdc_Char)0x20,  /* [1450] */
    (xdc_Char)0x42,  /* [1451] */
    (xdc_Char)0x4c,  /* [1452] */
    (xdc_Char)0x4f,  /* [1453] */
    (xdc_Char)0x43,  /* [1454] */
    (xdc_Char)0x4b,  /* [1455] */
    (xdc_Char)0x45,  /* [1456] */
    (xdc_Char)0x44,  /* [1457] */
    (xdc_Char)0x20,  /* [1458] */
    (xdc_Char)0x74,  /* [1459] */
    (xdc_Char)0x61,  /* [1460] */
    (xdc_Char)0x73,  /* [1461] */
    (xdc_Char)0x6b,  /* [1462] */
    (xdc_Char)0x2e,  /* [1463] */
    (xdc_Char)0x0,  /* [1464] */
    (xdc_Char)0x41,  /* [1465] */
    (xdc_Char)0x5f,  /* [1466] */
    (xdc_Char)0x74,  /* [1467] */
    (xdc_Char)0x61,  /* [1468] */
    (xdc_Char)0x73,  /* [1469] */
    (xdc_Char)0x6b,  /* [1470] */
    (xdc_Char)0x44,  /* [1471] */
    (xdc_Char)0x69,  /* [1472] */
    (xdc_Char)0x73,  /* [1473] */
    (xdc_Char)0x61,  /* [1474] */
    (xdc_Char)0x62,  /* [1475] */
    (xdc_Char)0x6c,  /* [1476] */
    (xdc_Char)0x65,  /* [1477] */
    (xdc_Char)0x64,  /* [1478] */
    (xdc_Char)0x3a,  /* [1479] */
    (xdc_Char)0x20,  /* [1480] */
    (xdc_Char)0x43,  /* [1481] */
    (xdc_Char)0x61,  /* [1482] */
    (xdc_Char)0x6e,  /* [1483] */
    (xdc_Char)0x6e,  /* [1484] */
    (xdc_Char)0x6f,  /* [1485] */
    (xdc_Char)0x74,  /* [1486] */
    (xdc_Char)0x20,  /* [1487] */
    (xdc_Char)0x63,  /* [1488] */
    (xdc_Char)0x72,  /* [1489] */
    (xdc_Char)0x65,  /* [1490] */
    (xdc_Char)0x61,  /* [1491] */
    (xdc_Char)0x74,  /* [1492] */
    (xdc_Char)0x65,  /* [1493] */
    (xdc_Char)0x20,  /* [1494] */
    (xdc_Char)0x61,  /* [1495] */
    (xdc_Char)0x20,  /* [1496] */
    (xdc_Char)0x74,  /* [1497] */
    (xdc_Char)0x61,  /* [1498] */
    (xdc_Char)0x73,  /* [1499] */
    (xdc_Char)0x6b,  /* [1500] */
    (xdc_Char)0x20,  /* [1501] */
    (xdc_Char)0x77,  /* [1502] */
    (xdc_Char)0x68,  /* [1503] */
    (xdc_Char)0x65,  /* [1504] */
    (xdc_Char)0x6e,  /* [1505] */
    (xdc_Char)0x20,  /* [1506] */
    (xdc_Char)0x74,  /* [1507] */
    (xdc_Char)0x61,  /* [1508] */
    (xdc_Char)0x73,  /* [1509] */
    (xdc_Char)0x6b,  /* [1510] */
    (xdc_Char)0x69,  /* [1511] */
    (xdc_Char)0x6e,  /* [1512] */
    (xdc_Char)0x67,  /* [1513] */
    (xdc_Char)0x20,  /* [1514] */
    (xdc_Char)0x69,  /* [1515] */
    (xdc_Char)0x73,  /* [1516] */
    (xdc_Char)0x20,  /* [1517] */
    (xdc_Char)0x64,  /* [1518] */
    (xdc_Char)0x69,  /* [1519] */
    (xdc_Char)0x73,  /* [1520] */
    (xdc_Char)0x61,  /* [1521] */
    (xdc_Char)0x62,  /* [1522] */
    (xdc_Char)0x6c,  /* [1523] */
    (xdc_Char)0x65,  /* [1524] */
    (xdc_Char)0x64,  /* [1525] */
    (xdc_Char)0x2e,  /* [1526] */
    (xdc_Char)0x0,  /* [1527] */
    (xdc_Char)0x41,  /* [1528] */
    (xdc_Char)0x5f,  /* [1529] */
    (xdc_Char)0x62,  /* [1530] */
    (xdc_Char)0x61,  /* [1531] */
    (xdc_Char)0x64,  /* [1532] */
    (xdc_Char)0x50,  /* [1533] */
    (xdc_Char)0x72,  /* [1534] */
    (xdc_Char)0x69,  /* [1535] */
    (xdc_Char)0x6f,  /* [1536] */
    (xdc_Char)0x72,  /* [1537] */
    (xdc_Char)0x69,  /* [1538] */
    (xdc_Char)0x74,  /* [1539] */
    (xdc_Char)0x79,  /* [1540] */
    (xdc_Char)0x3a,  /* [1541] */
    (xdc_Char)0x20,  /* [1542] */
    (xdc_Char)0x41,  /* [1543] */
    (xdc_Char)0x6e,  /* [1544] */
    (xdc_Char)0x20,  /* [1545] */
    (xdc_Char)0x69,  /* [1546] */
    (xdc_Char)0x6e,  /* [1547] */
    (xdc_Char)0x76,  /* [1548] */
    (xdc_Char)0x61,  /* [1549] */
    (xdc_Char)0x6c,  /* [1550] */
    (xdc_Char)0x69,  /* [1551] */
    (xdc_Char)0x64,  /* [1552] */
    (xdc_Char)0x20,  /* [1553] */
    (xdc_Char)0x74,  /* [1554] */
    (xdc_Char)0x61,  /* [1555] */
    (xdc_Char)0x73,  /* [1556] */
    (xdc_Char)0x6b,  /* [1557] */
    (xdc_Char)0x20,  /* [1558] */
    (xdc_Char)0x70,  /* [1559] */
    (xdc_Char)0x72,  /* [1560] */
    (xdc_Char)0x69,  /* [1561] */
    (xdc_Char)0x6f,  /* [1562] */
    (xdc_Char)0x72,  /* [1563] */
    (xdc_Char)0x69,  /* [1564] */
    (xdc_Char)0x74,  /* [1565] */
    (xdc_Char)0x79,  /* [1566] */
    (xdc_Char)0x20,  /* [1567] */
    (xdc_Char)0x77,  /* [1568] */
    (xdc_Char)0x61,  /* [1569] */
    (xdc_Char)0x73,  /* [1570] */
    (xdc_Char)0x20,  /* [1571] */
    (xdc_Char)0x75,  /* [1572] */
    (xdc_Char)0x73,  /* [1573] */
    (xdc_Char)0x65,  /* [1574] */
    (xdc_Char)0x64,  /* [1575] */
    (xdc_Char)0x2e,  /* [1576] */
    (xdc_Char)0x0,  /* [1577] */
    (xdc_Char)0x41,  /* [1578] */
    (xdc_Char)0x5f,  /* [1579] */
    (xdc_Char)0x62,  /* [1580] */
    (xdc_Char)0x61,  /* [1581] */
    (xdc_Char)0x64,  /* [1582] */
    (xdc_Char)0x54,  /* [1583] */
    (xdc_Char)0x69,  /* [1584] */
    (xdc_Char)0x6d,  /* [1585] */
    (xdc_Char)0x65,  /* [1586] */
    (xdc_Char)0x6f,  /* [1587] */
    (xdc_Char)0x75,  /* [1588] */
    (xdc_Char)0x74,  /* [1589] */
    (xdc_Char)0x3a,  /* [1590] */
    (xdc_Char)0x20,  /* [1591] */
    (xdc_Char)0x43,  /* [1592] */
    (xdc_Char)0x61,  /* [1593] */
    (xdc_Char)0x6e,  /* [1594] */
    (xdc_Char)0x27,  /* [1595] */
    (xdc_Char)0x74,  /* [1596] */
    (xdc_Char)0x20,  /* [1597] */
    (xdc_Char)0x73,  /* [1598] */
    (xdc_Char)0x6c,  /* [1599] */
    (xdc_Char)0x65,  /* [1600] */
    (xdc_Char)0x65,  /* [1601] */
    (xdc_Char)0x70,  /* [1602] */
    (xdc_Char)0x20,  /* [1603] */
    (xdc_Char)0x46,  /* [1604] */
    (xdc_Char)0x4f,  /* [1605] */
    (xdc_Char)0x52,  /* [1606] */
    (xdc_Char)0x45,  /* [1607] */
    (xdc_Char)0x56,  /* [1608] */
    (xdc_Char)0x45,  /* [1609] */
    (xdc_Char)0x52,  /* [1610] */
    (xdc_Char)0x2e,  /* [1611] */
    (xdc_Char)0x0,  /* [1612] */
    (xdc_Char)0x41,  /* [1613] */
    (xdc_Char)0x5f,  /* [1614] */
    (xdc_Char)0x62,  /* [1615] */
    (xdc_Char)0x61,  /* [1616] */
    (xdc_Char)0x64,  /* [1617] */
    (xdc_Char)0x43,  /* [1618] */
    (xdc_Char)0x6f,  /* [1619] */
    (xdc_Char)0x6e,  /* [1620] */
    (xdc_Char)0x74,  /* [1621] */
    (xdc_Char)0x65,  /* [1622] */
    (xdc_Char)0x78,  /* [1623] */
    (xdc_Char)0x74,  /* [1624] */
    (xdc_Char)0x3a,  /* [1625] */
    (xdc_Char)0x20,  /* [1626] */
    (xdc_Char)0x62,  /* [1627] */
    (xdc_Char)0x61,  /* [1628] */
    (xdc_Char)0x64,  /* [1629] */
    (xdc_Char)0x20,  /* [1630] */
    (xdc_Char)0x63,  /* [1631] */
    (xdc_Char)0x61,  /* [1632] */
    (xdc_Char)0x6c,  /* [1633] */
    (xdc_Char)0x6c,  /* [1634] */
    (xdc_Char)0x69,  /* [1635] */
    (xdc_Char)0x6e,  /* [1636] */
    (xdc_Char)0x67,  /* [1637] */
    (xdc_Char)0x20,  /* [1638] */
    (xdc_Char)0x63,  /* [1639] */
    (xdc_Char)0x6f,  /* [1640] */
    (xdc_Char)0x6e,  /* [1641] */
    (xdc_Char)0x74,  /* [1642] */
    (xdc_Char)0x65,  /* [1643] */
    (xdc_Char)0x78,  /* [1644] */
    (xdc_Char)0x74,  /* [1645] */
    (xdc_Char)0x2e,  /* [1646] */
    (xdc_Char)0x20,  /* [1647] */
    (xdc_Char)0x4d,  /* [1648] */
    (xdc_Char)0x61,  /* [1649] */
    (xdc_Char)0x79,  /* [1650] */
    (xdc_Char)0x20,  /* [1651] */
    (xdc_Char)0x6e,  /* [1652] */
    (xdc_Char)0x6f,  /* [1653] */
    (xdc_Char)0x74,  /* [1654] */
    (xdc_Char)0x20,  /* [1655] */
    (xdc_Char)0x62,  /* [1656] */
    (xdc_Char)0x65,  /* [1657] */
    (xdc_Char)0x20,  /* [1658] */
    (xdc_Char)0x65,  /* [1659] */
    (xdc_Char)0x6e,  /* [1660] */
    (xdc_Char)0x74,  /* [1661] */
    (xdc_Char)0x65,  /* [1662] */
    (xdc_Char)0x72,  /* [1663] */
    (xdc_Char)0x65,  /* [1664] */
    (xdc_Char)0x64,  /* [1665] */
    (xdc_Char)0x20,  /* [1666] */
    (xdc_Char)0x66,  /* [1667] */
    (xdc_Char)0x72,  /* [1668] */
    (xdc_Char)0x6f,  /* [1669] */
    (xdc_Char)0x6d,  /* [1670] */
    (xdc_Char)0x20,  /* [1671] */
    (xdc_Char)0x61,  /* [1672] */
    (xdc_Char)0x20,  /* [1673] */
    (xdc_Char)0x68,  /* [1674] */
    (xdc_Char)0x61,  /* [1675] */
    (xdc_Char)0x72,  /* [1676] */
    (xdc_Char)0x64,  /* [1677] */
    (xdc_Char)0x77,  /* [1678] */
    (xdc_Char)0x61,  /* [1679] */
    (xdc_Char)0x72,  /* [1680] */
    (xdc_Char)0x65,  /* [1681] */
    (xdc_Char)0x20,  /* [1682] */
    (xdc_Char)0x69,  /* [1683] */
    (xdc_Char)0x6e,  /* [1684] */
    (xdc_Char)0x74,  /* [1685] */
    (xdc_Char)0x65,  /* [1686] */
    (xdc_Char)0x72,  /* [1687] */
    (xdc_Char)0x72,  /* [1688] */
    (xdc_Char)0x75,  /* [1689] */
    (xdc_Char)0x70,  /* [1690] */
    (xdc_Char)0x74,  /* [1691] */
    (xdc_Char)0x20,  /* [1692] */
    (xdc_Char)0x74,  /* [1693] */
    (xdc_Char)0x68,  /* [1694] */
    (xdc_Char)0x72,  /* [1695] */
    (xdc_Char)0x65,  /* [1696] */
    (xdc_Char)0x61,  /* [1697] */
    (xdc_Char)0x64,  /* [1698] */
    (xdc_Char)0x2e,  /* [1699] */
    (xdc_Char)0x0,  /* [1700] */
    (xdc_Char)0x41,  /* [1701] */
    (xdc_Char)0x5f,  /* [1702] */
    (xdc_Char)0x62,  /* [1703] */
    (xdc_Char)0x61,  /* [1704] */
    (xdc_Char)0x64,  /* [1705] */
    (xdc_Char)0x43,  /* [1706] */
    (xdc_Char)0x6f,  /* [1707] */
    (xdc_Char)0x6e,  /* [1708] */
    (xdc_Char)0x74,  /* [1709] */
    (xdc_Char)0x65,  /* [1710] */
    (xdc_Char)0x78,  /* [1711] */
    (xdc_Char)0x74,  /* [1712] */
    (xdc_Char)0x3a,  /* [1713] */
    (xdc_Char)0x20,  /* [1714] */
    (xdc_Char)0x62,  /* [1715] */
    (xdc_Char)0x61,  /* [1716] */
    (xdc_Char)0x64,  /* [1717] */
    (xdc_Char)0x20,  /* [1718] */
    (xdc_Char)0x63,  /* [1719] */
    (xdc_Char)0x61,  /* [1720] */
    (xdc_Char)0x6c,  /* [1721] */
    (xdc_Char)0x6c,  /* [1722] */
    (xdc_Char)0x69,  /* [1723] */
    (xdc_Char)0x6e,  /* [1724] */
    (xdc_Char)0x67,  /* [1725] */
    (xdc_Char)0x20,  /* [1726] */
    (xdc_Char)0x63,  /* [1727] */
    (xdc_Char)0x6f,  /* [1728] */
    (xdc_Char)0x6e,  /* [1729] */
    (xdc_Char)0x74,  /* [1730] */
    (xdc_Char)0x65,  /* [1731] */
    (xdc_Char)0x78,  /* [1732] */
    (xdc_Char)0x74,  /* [1733] */
    (xdc_Char)0x2e,  /* [1734] */
    (xdc_Char)0x20,  /* [1735] */
    (xdc_Char)0x4d,  /* [1736] */
    (xdc_Char)0x61,  /* [1737] */
    (xdc_Char)0x79,  /* [1738] */
    (xdc_Char)0x20,  /* [1739] */
    (xdc_Char)0x6e,  /* [1740] */
    (xdc_Char)0x6f,  /* [1741] */
    (xdc_Char)0x74,  /* [1742] */
    (xdc_Char)0x20,  /* [1743] */
    (xdc_Char)0x62,  /* [1744] */
    (xdc_Char)0x65,  /* [1745] */
    (xdc_Char)0x20,  /* [1746] */
    (xdc_Char)0x65,  /* [1747] */
    (xdc_Char)0x6e,  /* [1748] */
    (xdc_Char)0x74,  /* [1749] */
    (xdc_Char)0x65,  /* [1750] */
    (xdc_Char)0x72,  /* [1751] */
    (xdc_Char)0x65,  /* [1752] */
    (xdc_Char)0x64,  /* [1753] */
    (xdc_Char)0x20,  /* [1754] */
    (xdc_Char)0x66,  /* [1755] */
    (xdc_Char)0x72,  /* [1756] */
    (xdc_Char)0x6f,  /* [1757] */
    (xdc_Char)0x6d,  /* [1758] */
    (xdc_Char)0x20,  /* [1759] */
    (xdc_Char)0x61,  /* [1760] */
    (xdc_Char)0x20,  /* [1761] */
    (xdc_Char)0x73,  /* [1762] */
    (xdc_Char)0x6f,  /* [1763] */
    (xdc_Char)0x66,  /* [1764] */
    (xdc_Char)0x74,  /* [1765] */
    (xdc_Char)0x77,  /* [1766] */
    (xdc_Char)0x61,  /* [1767] */
    (xdc_Char)0x72,  /* [1768] */
    (xdc_Char)0x65,  /* [1769] */
    (xdc_Char)0x20,  /* [1770] */
    (xdc_Char)0x6f,  /* [1771] */
    (xdc_Char)0x72,  /* [1772] */
    (xdc_Char)0x20,  /* [1773] */
    (xdc_Char)0x68,  /* [1774] */
    (xdc_Char)0x61,  /* [1775] */
    (xdc_Char)0x72,  /* [1776] */
    (xdc_Char)0x64,  /* [1777] */
    (xdc_Char)0x77,  /* [1778] */
    (xdc_Char)0x61,  /* [1779] */
    (xdc_Char)0x72,  /* [1780] */
    (xdc_Char)0x65,  /* [1781] */
    (xdc_Char)0x20,  /* [1782] */
    (xdc_Char)0x69,  /* [1783] */
    (xdc_Char)0x6e,  /* [1784] */
    (xdc_Char)0x74,  /* [1785] */
    (xdc_Char)0x65,  /* [1786] */
    (xdc_Char)0x72,  /* [1787] */
    (xdc_Char)0x72,  /* [1788] */
    (xdc_Char)0x75,  /* [1789] */
    (xdc_Char)0x70,  /* [1790] */
    (xdc_Char)0x74,  /* [1791] */
    (xdc_Char)0x20,  /* [1792] */
    (xdc_Char)0x74,  /* [1793] */
    (xdc_Char)0x68,  /* [1794] */
    (xdc_Char)0x72,  /* [1795] */
    (xdc_Char)0x65,  /* [1796] */
    (xdc_Char)0x61,  /* [1797] */
    (xdc_Char)0x64,  /* [1798] */
    (xdc_Char)0x2e,  /* [1799] */
    (xdc_Char)0x0,  /* [1800] */
    (xdc_Char)0x41,  /* [1801] */
    (xdc_Char)0x5f,  /* [1802] */
    (xdc_Char)0x62,  /* [1803] */
    (xdc_Char)0x61,  /* [1804] */
    (xdc_Char)0x64,  /* [1805] */
    (xdc_Char)0x43,  /* [1806] */
    (xdc_Char)0x6f,  /* [1807] */
    (xdc_Char)0x6e,  /* [1808] */
    (xdc_Char)0x74,  /* [1809] */
    (xdc_Char)0x65,  /* [1810] */
    (xdc_Char)0x78,  /* [1811] */
    (xdc_Char)0x74,  /* [1812] */
    (xdc_Char)0x3a,  /* [1813] */
    (xdc_Char)0x20,  /* [1814] */
    (xdc_Char)0x62,  /* [1815] */
    (xdc_Char)0x61,  /* [1816] */
    (xdc_Char)0x64,  /* [1817] */
    (xdc_Char)0x20,  /* [1818] */
    (xdc_Char)0x63,  /* [1819] */
    (xdc_Char)0x61,  /* [1820] */
    (xdc_Char)0x6c,  /* [1821] */
    (xdc_Char)0x6c,  /* [1822] */
    (xdc_Char)0x69,  /* [1823] */
    (xdc_Char)0x6e,  /* [1824] */
    (xdc_Char)0x67,  /* [1825] */
    (xdc_Char)0x20,  /* [1826] */
    (xdc_Char)0x63,  /* [1827] */
    (xdc_Char)0x6f,  /* [1828] */
    (xdc_Char)0x6e,  /* [1829] */
    (xdc_Char)0x74,  /* [1830] */
    (xdc_Char)0x65,  /* [1831] */
    (xdc_Char)0x78,  /* [1832] */
    (xdc_Char)0x74,  /* [1833] */
    (xdc_Char)0x2e,  /* [1834] */
    (xdc_Char)0x20,  /* [1835] */
    (xdc_Char)0x53,  /* [1836] */
    (xdc_Char)0x65,  /* [1837] */
    (xdc_Char)0x65,  /* [1838] */
    (xdc_Char)0x20,  /* [1839] */
    (xdc_Char)0x47,  /* [1840] */
    (xdc_Char)0x61,  /* [1841] */
    (xdc_Char)0x74,  /* [1842] */
    (xdc_Char)0x65,  /* [1843] */
    (xdc_Char)0x4d,  /* [1844] */
    (xdc_Char)0x75,  /* [1845] */
    (xdc_Char)0x74,  /* [1846] */
    (xdc_Char)0x65,  /* [1847] */
    (xdc_Char)0x78,  /* [1848] */
    (xdc_Char)0x50,  /* [1849] */
    (xdc_Char)0x72,  /* [1850] */
    (xdc_Char)0x69,  /* [1851] */
    (xdc_Char)0x20,  /* [1852] */
    (xdc_Char)0x41,  /* [1853] */
    (xdc_Char)0x50,  /* [1854] */
    (xdc_Char)0x49,  /* [1855] */
    (xdc_Char)0x20,  /* [1856] */
    (xdc_Char)0x64,  /* [1857] */
    (xdc_Char)0x6f,  /* [1858] */
    (xdc_Char)0x63,  /* [1859] */
    (xdc_Char)0x20,  /* [1860] */
    (xdc_Char)0x66,  /* [1861] */
    (xdc_Char)0x6f,  /* [1862] */
    (xdc_Char)0x72,  /* [1863] */
    (xdc_Char)0x20,  /* [1864] */
    (xdc_Char)0x64,  /* [1865] */
    (xdc_Char)0x65,  /* [1866] */
    (xdc_Char)0x74,  /* [1867] */
    (xdc_Char)0x61,  /* [1868] */
    (xdc_Char)0x69,  /* [1869] */
    (xdc_Char)0x6c,  /* [1870] */
    (xdc_Char)0x73,  /* [1871] */
    (xdc_Char)0x2e,  /* [1872] */
    (xdc_Char)0x0,  /* [1873] */
    (xdc_Char)0x41,  /* [1874] */
    (xdc_Char)0x5f,  /* [1875] */
    (xdc_Char)0x62,  /* [1876] */
    (xdc_Char)0x61,  /* [1877] */
    (xdc_Char)0x64,  /* [1878] */
    (xdc_Char)0x43,  /* [1879] */
    (xdc_Char)0x6f,  /* [1880] */
    (xdc_Char)0x6e,  /* [1881] */
    (xdc_Char)0x74,  /* [1882] */
    (xdc_Char)0x65,  /* [1883] */
    (xdc_Char)0x78,  /* [1884] */
    (xdc_Char)0x74,  /* [1885] */
    (xdc_Char)0x3a,  /* [1886] */
    (xdc_Char)0x20,  /* [1887] */
    (xdc_Char)0x62,  /* [1888] */
    (xdc_Char)0x61,  /* [1889] */
    (xdc_Char)0x64,  /* [1890] */
    (xdc_Char)0x20,  /* [1891] */
    (xdc_Char)0x63,  /* [1892] */
    (xdc_Char)0x61,  /* [1893] */
    (xdc_Char)0x6c,  /* [1894] */
    (xdc_Char)0x6c,  /* [1895] */
    (xdc_Char)0x69,  /* [1896] */
    (xdc_Char)0x6e,  /* [1897] */
    (xdc_Char)0x67,  /* [1898] */
    (xdc_Char)0x20,  /* [1899] */
    (xdc_Char)0x63,  /* [1900] */
    (xdc_Char)0x6f,  /* [1901] */
    (xdc_Char)0x6e,  /* [1902] */
    (xdc_Char)0x74,  /* [1903] */
    (xdc_Char)0x65,  /* [1904] */
    (xdc_Char)0x78,  /* [1905] */
    (xdc_Char)0x74,  /* [1906] */
    (xdc_Char)0x2e,  /* [1907] */
    (xdc_Char)0x20,  /* [1908] */
    (xdc_Char)0x53,  /* [1909] */
    (xdc_Char)0x65,  /* [1910] */
    (xdc_Char)0x65,  /* [1911] */
    (xdc_Char)0x20,  /* [1912] */
    (xdc_Char)0x47,  /* [1913] */
    (xdc_Char)0x61,  /* [1914] */
    (xdc_Char)0x74,  /* [1915] */
    (xdc_Char)0x65,  /* [1916] */
    (xdc_Char)0x4d,  /* [1917] */
    (xdc_Char)0x75,  /* [1918] */
    (xdc_Char)0x74,  /* [1919] */
    (xdc_Char)0x65,  /* [1920] */
    (xdc_Char)0x78,  /* [1921] */
    (xdc_Char)0x20,  /* [1922] */
    (xdc_Char)0x41,  /* [1923] */
    (xdc_Char)0x50,  /* [1924] */
    (xdc_Char)0x49,  /* [1925] */
    (xdc_Char)0x20,  /* [1926] */
    (xdc_Char)0x64,  /* [1927] */
    (xdc_Char)0x6f,  /* [1928] */
    (xdc_Char)0x63,  /* [1929] */
    (xdc_Char)0x20,  /* [1930] */
    (xdc_Char)0x66,  /* [1931] */
    (xdc_Char)0x6f,  /* [1932] */
    (xdc_Char)0x72,  /* [1933] */
    (xdc_Char)0x20,  /* [1934] */
    (xdc_Char)0x64,  /* [1935] */
    (xdc_Char)0x65,  /* [1936] */
    (xdc_Char)0x74,  /* [1937] */
    (xdc_Char)0x61,  /* [1938] */
    (xdc_Char)0x69,  /* [1939] */
    (xdc_Char)0x6c,  /* [1940] */
    (xdc_Char)0x73,  /* [1941] */
    (xdc_Char)0x2e,  /* [1942] */
    (xdc_Char)0x0,  /* [1943] */
    (xdc_Char)0x41,  /* [1944] */
    (xdc_Char)0x5f,  /* [1945] */
    (xdc_Char)0x7a,  /* [1946] */
    (xdc_Char)0x65,  /* [1947] */
    (xdc_Char)0x72,  /* [1948] */
    (xdc_Char)0x6f,  /* [1949] */
    (xdc_Char)0x54,  /* [1950] */
    (xdc_Char)0x69,  /* [1951] */
    (xdc_Char)0x6d,  /* [1952] */
    (xdc_Char)0x65,  /* [1953] */
    (xdc_Char)0x6f,  /* [1954] */
    (xdc_Char)0x75,  /* [1955] */
    (xdc_Char)0x74,  /* [1956] */
    (xdc_Char)0x3a,  /* [1957] */
    (xdc_Char)0x20,  /* [1958] */
    (xdc_Char)0x54,  /* [1959] */
    (xdc_Char)0x69,  /* [1960] */
    (xdc_Char)0x6d,  /* [1961] */
    (xdc_Char)0x65,  /* [1962] */
    (xdc_Char)0x6f,  /* [1963] */
    (xdc_Char)0x75,  /* [1964] */
    (xdc_Char)0x74,  /* [1965] */
    (xdc_Char)0x20,  /* [1966] */
    (xdc_Char)0x76,  /* [1967] */
    (xdc_Char)0x61,  /* [1968] */
    (xdc_Char)0x6c,  /* [1969] */
    (xdc_Char)0x75,  /* [1970] */
    (xdc_Char)0x65,  /* [1971] */
    (xdc_Char)0x20,  /* [1972] */
    (xdc_Char)0x61,  /* [1973] */
    (xdc_Char)0x6e,  /* [1974] */
    (xdc_Char)0x6e,  /* [1975] */
    (xdc_Char)0x6f,  /* [1976] */
    (xdc_Char)0x74,  /* [1977] */
    (xdc_Char)0x20,  /* [1978] */
    (xdc_Char)0x62,  /* [1979] */
    (xdc_Char)0x65,  /* [1980] */
    (xdc_Char)0x20,  /* [1981] */
    (xdc_Char)0x7a,  /* [1982] */
    (xdc_Char)0x65,  /* [1983] */
    (xdc_Char)0x72,  /* [1984] */
    (xdc_Char)0x6f,  /* [1985] */
    (xdc_Char)0x0,  /* [1986] */
    (xdc_Char)0x41,  /* [1987] */
    (xdc_Char)0x5f,  /* [1988] */
    (xdc_Char)0x69,  /* [1989] */
    (xdc_Char)0x6e,  /* [1990] */
    (xdc_Char)0x76,  /* [1991] */
    (xdc_Char)0x61,  /* [1992] */
    (xdc_Char)0x6c,  /* [1993] */
    (xdc_Char)0x69,  /* [1994] */
    (xdc_Char)0x64,  /* [1995] */
    (xdc_Char)0x4b,  /* [1996] */
    (xdc_Char)0x65,  /* [1997] */
    (xdc_Char)0x79,  /* [1998] */
    (xdc_Char)0x3a,  /* [1999] */
    (xdc_Char)0x20,  /* [2000] */
    (xdc_Char)0x74,  /* [2001] */
    (xdc_Char)0x68,  /* [2002] */
    (xdc_Char)0x65,  /* [2003] */
    (xdc_Char)0x20,  /* [2004] */
    (xdc_Char)0x6b,  /* [2005] */
    (xdc_Char)0x65,  /* [2006] */
    (xdc_Char)0x79,  /* [2007] */
    (xdc_Char)0x20,  /* [2008] */
    (xdc_Char)0x6d,  /* [2009] */
    (xdc_Char)0x75,  /* [2010] */
    (xdc_Char)0x73,  /* [2011] */
    (xdc_Char)0x74,  /* [2012] */
    (xdc_Char)0x20,  /* [2013] */
    (xdc_Char)0x62,  /* [2014] */
    (xdc_Char)0x65,  /* [2015] */
    (xdc_Char)0x20,  /* [2016] */
    (xdc_Char)0x73,  /* [2017] */
    (xdc_Char)0x65,  /* [2018] */
    (xdc_Char)0x74,  /* [2019] */
    (xdc_Char)0x20,  /* [2020] */
    (xdc_Char)0x74,  /* [2021] */
    (xdc_Char)0x6f,  /* [2022] */
    (xdc_Char)0x20,  /* [2023] */
    (xdc_Char)0x61,  /* [2024] */
    (xdc_Char)0x20,  /* [2025] */
    (xdc_Char)0x6e,  /* [2026] */
    (xdc_Char)0x6f,  /* [2027] */
    (xdc_Char)0x6e,  /* [2028] */
    (xdc_Char)0x2d,  /* [2029] */
    (xdc_Char)0x64,  /* [2030] */
    (xdc_Char)0x65,  /* [2031] */
    (xdc_Char)0x66,  /* [2032] */
    (xdc_Char)0x61,  /* [2033] */
    (xdc_Char)0x75,  /* [2034] */
    (xdc_Char)0x6c,  /* [2035] */
    (xdc_Char)0x74,  /* [2036] */
    (xdc_Char)0x20,  /* [2037] */
    (xdc_Char)0x76,  /* [2038] */
    (xdc_Char)0x61,  /* [2039] */
    (xdc_Char)0x6c,  /* [2040] */
    (xdc_Char)0x75,  /* [2041] */
    (xdc_Char)0x65,  /* [2042] */
    (xdc_Char)0x0,  /* [2043] */
    (xdc_Char)0x41,  /* [2044] */
    (xdc_Char)0x5f,  /* [2045] */
    (xdc_Char)0x69,  /* [2046] */
    (xdc_Char)0x6e,  /* [2047] */
    (xdc_Char)0x76,  /* [2048] */
    (xdc_Char)0x61,  /* [2049] */
    (xdc_Char)0x6c,  /* [2050] */
    (xdc_Char)0x69,  /* [2051] */
    (xdc_Char)0x64,  /* [2052] */
    (xdc_Char)0x4c,  /* [2053] */
    (xdc_Char)0x65,  /* [2054] */
    (xdc_Char)0x6e,  /* [2055] */
    (xdc_Char)0x3a,  /* [2056] */
    (xdc_Char)0x20,  /* [2057] */
    (xdc_Char)0x49,  /* [2058] */
    (xdc_Char)0x6e,  /* [2059] */
    (xdc_Char)0x76,  /* [2060] */
    (xdc_Char)0x61,  /* [2061] */
    (xdc_Char)0x6c,  /* [2062] */
    (xdc_Char)0x69,  /* [2063] */
    (xdc_Char)0x64,  /* [2064] */
    (xdc_Char)0x20,  /* [2065] */
    (xdc_Char)0x6c,  /* [2066] */
    (xdc_Char)0x65,  /* [2067] */
    (xdc_Char)0x6e,  /* [2068] */
    (xdc_Char)0x67,  /* [2069] */
    (xdc_Char)0x74,  /* [2070] */
    (xdc_Char)0x68,  /* [2071] */
    (xdc_Char)0x0,  /* [2072] */
    (xdc_Char)0x41,  /* [2073] */
    (xdc_Char)0x5f,  /* [2074] */
    (xdc_Char)0x69,  /* [2075] */
    (xdc_Char)0x6e,  /* [2076] */
    (xdc_Char)0x76,  /* [2077] */
    (xdc_Char)0x41,  /* [2078] */
    (xdc_Char)0x72,  /* [2079] */
    (xdc_Char)0x67,  /* [2080] */
    (xdc_Char)0x75,  /* [2081] */
    (xdc_Char)0x6d,  /* [2082] */
    (xdc_Char)0x65,  /* [2083] */
    (xdc_Char)0x6e,  /* [2084] */
    (xdc_Char)0x74,  /* [2085] */
    (xdc_Char)0x3a,  /* [2086] */
    (xdc_Char)0x20,  /* [2087] */
    (xdc_Char)0x49,  /* [2088] */
    (xdc_Char)0x6e,  /* [2089] */
    (xdc_Char)0x76,  /* [2090] */
    (xdc_Char)0x61,  /* [2091] */
    (xdc_Char)0x6c,  /* [2092] */
    (xdc_Char)0x69,  /* [2093] */
    (xdc_Char)0x64,  /* [2094] */
    (xdc_Char)0x20,  /* [2095] */
    (xdc_Char)0x61,  /* [2096] */
    (xdc_Char)0x72,  /* [2097] */
    (xdc_Char)0x67,  /* [2098] */
    (xdc_Char)0x75,  /* [2099] */
    (xdc_Char)0x6d,  /* [2100] */
    (xdc_Char)0x65,  /* [2101] */
    (xdc_Char)0x6e,  /* [2102] */
    (xdc_Char)0x74,  /* [2103] */
    (xdc_Char)0x20,  /* [2104] */
    (xdc_Char)0x73,  /* [2105] */
    (xdc_Char)0x75,  /* [2106] */
    (xdc_Char)0x70,  /* [2107] */
    (xdc_Char)0x70,  /* [2108] */
    (xdc_Char)0x6c,  /* [2109] */
    (xdc_Char)0x69,  /* [2110] */
    (xdc_Char)0x65,  /* [2111] */
    (xdc_Char)0x64,  /* [2112] */
    (xdc_Char)0x0,  /* [2113] */
    (xdc_Char)0x41,  /* [2114] */
    (xdc_Char)0x5f,  /* [2115] */
    (xdc_Char)0x69,  /* [2116] */
    (xdc_Char)0x6e,  /* [2117] */
    (xdc_Char)0x76,  /* [2118] */
    (xdc_Char)0x61,  /* [2119] */
    (xdc_Char)0x6c,  /* [2120] */
    (xdc_Char)0x69,  /* [2121] */
    (xdc_Char)0x64,  /* [2122] */
    (xdc_Char)0x4d,  /* [2123] */
    (xdc_Char)0x75,  /* [2124] */
    (xdc_Char)0x6c,  /* [2125] */
    (xdc_Char)0x74,  /* [2126] */
    (xdc_Char)0x69,  /* [2127] */
    (xdc_Char)0x50,  /* [2128] */
    (xdc_Char)0x72,  /* [2129] */
    (xdc_Char)0x6f,  /* [2130] */
    (xdc_Char)0x63,  /* [2131] */
    (xdc_Char)0x49,  /* [2132] */
    (xdc_Char)0x64,  /* [2133] */
    (xdc_Char)0x3a,  /* [2134] */
    (xdc_Char)0x20,  /* [2135] */
    (xdc_Char)0x49,  /* [2136] */
    (xdc_Char)0x6e,  /* [2137] */
    (xdc_Char)0x76,  /* [2138] */
    (xdc_Char)0x61,  /* [2139] */
    (xdc_Char)0x6c,  /* [2140] */
    (xdc_Char)0x69,  /* [2141] */
    (xdc_Char)0x64,  /* [2142] */
    (xdc_Char)0x20,  /* [2143] */
    (xdc_Char)0x4d,  /* [2144] */
    (xdc_Char)0x75,  /* [2145] */
    (xdc_Char)0x6c,  /* [2146] */
    (xdc_Char)0x74,  /* [2147] */
    (xdc_Char)0x69,  /* [2148] */
    (xdc_Char)0x50,  /* [2149] */
    (xdc_Char)0x72,  /* [2150] */
    (xdc_Char)0x6f,  /* [2151] */
    (xdc_Char)0x63,  /* [2152] */
    (xdc_Char)0x20,  /* [2153] */
    (xdc_Char)0x69,  /* [2154] */
    (xdc_Char)0x64,  /* [2155] */
    (xdc_Char)0x0,  /* [2156] */
    (xdc_Char)0x41,  /* [2157] */
    (xdc_Char)0x5f,  /* [2158] */
    (xdc_Char)0x69,  /* [2159] */
    (xdc_Char)0x6e,  /* [2160] */
    (xdc_Char)0x76,  /* [2161] */
    (xdc_Char)0x61,  /* [2162] */
    (xdc_Char)0x6c,  /* [2163] */
    (xdc_Char)0x69,  /* [2164] */
    (xdc_Char)0x64,  /* [2165] */
    (xdc_Char)0x50,  /* [2166] */
    (xdc_Char)0x72,  /* [2167] */
    (xdc_Char)0x6f,  /* [2168] */
    (xdc_Char)0x63,  /* [2169] */
    (xdc_Char)0x4e,  /* [2170] */
    (xdc_Char)0x61,  /* [2171] */
    (xdc_Char)0x6d,  /* [2172] */
    (xdc_Char)0x65,  /* [2173] */
    (xdc_Char)0x3a,  /* [2174] */
    (xdc_Char)0x20,  /* [2175] */
    (xdc_Char)0x4e,  /* [2176] */
    (xdc_Char)0x55,  /* [2177] */
    (xdc_Char)0x4c,  /* [2178] */
    (xdc_Char)0x4c,  /* [2179] */
    (xdc_Char)0x20,  /* [2180] */
    (xdc_Char)0x4d,  /* [2181] */
    (xdc_Char)0x75,  /* [2182] */
    (xdc_Char)0x6c,  /* [2183] */
    (xdc_Char)0x74,  /* [2184] */
    (xdc_Char)0x69,  /* [2185] */
    (xdc_Char)0x50,  /* [2186] */
    (xdc_Char)0x72,  /* [2187] */
    (xdc_Char)0x6f,  /* [2188] */
    (xdc_Char)0x63,  /* [2189] */
    (xdc_Char)0x20,  /* [2190] */
    (xdc_Char)0x6e,  /* [2191] */
    (xdc_Char)0x61,  /* [2192] */
    (xdc_Char)0x6d,  /* [2193] */
    (xdc_Char)0x65,  /* [2194] */
    (xdc_Char)0x20,  /* [2195] */
    (xdc_Char)0x65,  /* [2196] */
    (xdc_Char)0x6e,  /* [2197] */
    (xdc_Char)0x63,  /* [2198] */
    (xdc_Char)0x6f,  /* [2199] */
    (xdc_Char)0x75,  /* [2200] */
    (xdc_Char)0x6e,  /* [2201] */
    (xdc_Char)0x74,  /* [2202] */
    (xdc_Char)0x65,  /* [2203] */
    (xdc_Char)0x72,  /* [2204] */
    (xdc_Char)0x65,  /* [2205] */
    (xdc_Char)0x64,  /* [2206] */
    (xdc_Char)0x0,  /* [2207] */
    (xdc_Char)0x62,  /* [2208] */
    (xdc_Char)0x75,  /* [2209] */
    (xdc_Char)0x66,  /* [2210] */
    (xdc_Char)0x20,  /* [2211] */
    (xdc_Char)0x70,  /* [2212] */
    (xdc_Char)0x61,  /* [2213] */
    (xdc_Char)0x72,  /* [2214] */
    (xdc_Char)0x61,  /* [2215] */
    (xdc_Char)0x6d,  /* [2216] */
    (xdc_Char)0x65,  /* [2217] */
    (xdc_Char)0x74,  /* [2218] */
    (xdc_Char)0x65,  /* [2219] */
    (xdc_Char)0x72,  /* [2220] */
    (xdc_Char)0x20,  /* [2221] */
    (xdc_Char)0x63,  /* [2222] */
    (xdc_Char)0x61,  /* [2223] */
    (xdc_Char)0x6e,  /* [2224] */
    (xdc_Char)0x6e,  /* [2225] */
    (xdc_Char)0x6f,  /* [2226] */
    (xdc_Char)0x74,  /* [2227] */
    (xdc_Char)0x20,  /* [2228] */
    (xdc_Char)0x62,  /* [2229] */
    (xdc_Char)0x65,  /* [2230] */
    (xdc_Char)0x20,  /* [2231] */
    (xdc_Char)0x6e,  /* [2232] */
    (xdc_Char)0x75,  /* [2233] */
    (xdc_Char)0x6c,  /* [2234] */
    (xdc_Char)0x6c,  /* [2235] */
    (xdc_Char)0x0,  /* [2236] */
    (xdc_Char)0x62,  /* [2237] */
    (xdc_Char)0x75,  /* [2238] */
    (xdc_Char)0x66,  /* [2239] */
    (xdc_Char)0x20,  /* [2240] */
    (xdc_Char)0x6e,  /* [2241] */
    (xdc_Char)0x6f,  /* [2242] */
    (xdc_Char)0x74,  /* [2243] */
    (xdc_Char)0x20,  /* [2244] */
    (xdc_Char)0x70,  /* [2245] */
    (xdc_Char)0x72,  /* [2246] */
    (xdc_Char)0x6f,  /* [2247] */
    (xdc_Char)0x70,  /* [2248] */
    (xdc_Char)0x65,  /* [2249] */
    (xdc_Char)0x72,  /* [2250] */
    (xdc_Char)0x6c,  /* [2251] */
    (xdc_Char)0x79,  /* [2252] */
    (xdc_Char)0x20,  /* [2253] */
    (xdc_Char)0x61,  /* [2254] */
    (xdc_Char)0x6c,  /* [2255] */
    (xdc_Char)0x69,  /* [2256] */
    (xdc_Char)0x67,  /* [2257] */
    (xdc_Char)0x6e,  /* [2258] */
    (xdc_Char)0x65,  /* [2259] */
    (xdc_Char)0x64,  /* [2260] */
    (xdc_Char)0x0,  /* [2261] */
    (xdc_Char)0x61,  /* [2262] */
    (xdc_Char)0x6c,  /* [2263] */
    (xdc_Char)0x69,  /* [2264] */
    (xdc_Char)0x67,  /* [2265] */
    (xdc_Char)0x6e,  /* [2266] */
    (xdc_Char)0x20,  /* [2267] */
    (xdc_Char)0x70,  /* [2268] */
    (xdc_Char)0x61,  /* [2269] */
    (xdc_Char)0x72,  /* [2270] */
    (xdc_Char)0x61,  /* [2271] */
    (xdc_Char)0x6d,  /* [2272] */
    (xdc_Char)0x65,  /* [2273] */
    (xdc_Char)0x74,  /* [2274] */
    (xdc_Char)0x65,  /* [2275] */
    (xdc_Char)0x72,  /* [2276] */
    (xdc_Char)0x20,  /* [2277] */
    (xdc_Char)0x6d,  /* [2278] */
    (xdc_Char)0x75,  /* [2279] */
    (xdc_Char)0x73,  /* [2280] */
    (xdc_Char)0x74,  /* [2281] */
    (xdc_Char)0x20,  /* [2282] */
    (xdc_Char)0x62,  /* [2283] */
    (xdc_Char)0x65,  /* [2284] */
    (xdc_Char)0x20,  /* [2285] */
    (xdc_Char)0x30,  /* [2286] */
    (xdc_Char)0x20,  /* [2287] */
    (xdc_Char)0x6f,  /* [2288] */
    (xdc_Char)0x72,  /* [2289] */
    (xdc_Char)0x20,  /* [2290] */
    (xdc_Char)0x61,  /* [2291] */
    (xdc_Char)0x20,  /* [2292] */
    (xdc_Char)0x70,  /* [2293] */
    (xdc_Char)0x6f,  /* [2294] */
    (xdc_Char)0x77,  /* [2295] */
    (xdc_Char)0x65,  /* [2296] */
    (xdc_Char)0x72,  /* [2297] */
    (xdc_Char)0x20,  /* [2298] */
    (xdc_Char)0x6f,  /* [2299] */
    (xdc_Char)0x66,  /* [2300] */
    (xdc_Char)0x20,  /* [2301] */
    (xdc_Char)0x32,  /* [2302] */
    (xdc_Char)0x20,  /* [2303] */
    (xdc_Char)0x3e,  /* [2304] */
    (xdc_Char)0x3d,  /* [2305] */
    (xdc_Char)0x20,  /* [2306] */
    (xdc_Char)0x74,  /* [2307] */
    (xdc_Char)0x68,  /* [2308] */
    (xdc_Char)0x65,  /* [2309] */
    (xdc_Char)0x20,  /* [2310] */
    (xdc_Char)0x76,  /* [2311] */
    (xdc_Char)0x61,  /* [2312] */
    (xdc_Char)0x6c,  /* [2313] */
    (xdc_Char)0x75,  /* [2314] */
    (xdc_Char)0x65,  /* [2315] */
    (xdc_Char)0x20,  /* [2316] */
    (xdc_Char)0x6f,  /* [2317] */
    (xdc_Char)0x66,  /* [2318] */
    (xdc_Char)0x20,  /* [2319] */
    (xdc_Char)0x4d,  /* [2320] */
    (xdc_Char)0x65,  /* [2321] */
    (xdc_Char)0x6d,  /* [2322] */
    (xdc_Char)0x6f,  /* [2323] */
    (xdc_Char)0x72,  /* [2324] */
    (xdc_Char)0x79,  /* [2325] */
    (xdc_Char)0x5f,  /* [2326] */
    (xdc_Char)0x67,  /* [2327] */
    (xdc_Char)0x65,  /* [2328] */
    (xdc_Char)0x74,  /* [2329] */
    (xdc_Char)0x4d,  /* [2330] */
    (xdc_Char)0x61,  /* [2331] */
    (xdc_Char)0x78,  /* [2332] */
    (xdc_Char)0x44,  /* [2333] */
    (xdc_Char)0x65,  /* [2334] */
    (xdc_Char)0x66,  /* [2335] */
    (xdc_Char)0x61,  /* [2336] */
    (xdc_Char)0x75,  /* [2337] */
    (xdc_Char)0x6c,  /* [2338] */
    (xdc_Char)0x74,  /* [2339] */
    (xdc_Char)0x54,  /* [2340] */
    (xdc_Char)0x79,  /* [2341] */
    (xdc_Char)0x70,  /* [2342] */
    (xdc_Char)0x65,  /* [2343] */
    (xdc_Char)0x41,  /* [2344] */
    (xdc_Char)0x6c,  /* [2345] */
    (xdc_Char)0x69,  /* [2346] */
    (xdc_Char)0x67,  /* [2347] */
    (xdc_Char)0x6e,  /* [2348] */
    (xdc_Char)0x28,  /* [2349] */
    (xdc_Char)0x29,  /* [2350] */
    (xdc_Char)0x0,  /* [2351] */
    (xdc_Char)0x62,  /* [2352] */
    (xdc_Char)0x6c,  /* [2353] */
    (xdc_Char)0x6f,  /* [2354] */
    (xdc_Char)0x63,  /* [2355] */
    (xdc_Char)0x6b,  /* [2356] */
    (xdc_Char)0x53,  /* [2357] */
    (xdc_Char)0x69,  /* [2358] */
    (xdc_Char)0x7a,  /* [2359] */
    (xdc_Char)0x65,  /* [2360] */
    (xdc_Char)0x20,  /* [2361] */
    (xdc_Char)0x63,  /* [2362] */
    (xdc_Char)0x61,  /* [2363] */
    (xdc_Char)0x6e,  /* [2364] */
    (xdc_Char)0x6e,  /* [2365] */
    (xdc_Char)0x6f,  /* [2366] */
    (xdc_Char)0x74,  /* [2367] */
    (xdc_Char)0x20,  /* [2368] */
    (xdc_Char)0x62,  /* [2369] */
    (xdc_Char)0x65,  /* [2370] */
    (xdc_Char)0x20,  /* [2371] */
    (xdc_Char)0x7a,  /* [2372] */
    (xdc_Char)0x65,  /* [2373] */
    (xdc_Char)0x72,  /* [2374] */
    (xdc_Char)0x6f,  /* [2375] */
    (xdc_Char)0x0,  /* [2376] */
    (xdc_Char)0x6e,  /* [2377] */
    (xdc_Char)0x75,  /* [2378] */
    (xdc_Char)0x6d,  /* [2379] */
    (xdc_Char)0x42,  /* [2380] */
    (xdc_Char)0x6c,  /* [2381] */
    (xdc_Char)0x6f,  /* [2382] */
    (xdc_Char)0x63,  /* [2383] */
    (xdc_Char)0x6b,  /* [2384] */
    (xdc_Char)0x73,  /* [2385] */
    (xdc_Char)0x20,  /* [2386] */
    (xdc_Char)0x63,  /* [2387] */
    (xdc_Char)0x61,  /* [2388] */
    (xdc_Char)0x6e,  /* [2389] */
    (xdc_Char)0x6e,  /* [2390] */
    (xdc_Char)0x6f,  /* [2391] */
    (xdc_Char)0x74,  /* [2392] */
    (xdc_Char)0x20,  /* [2393] */
    (xdc_Char)0x62,  /* [2394] */
    (xdc_Char)0x65,  /* [2395] */
    (xdc_Char)0x20,  /* [2396] */
    (xdc_Char)0x7a,  /* [2397] */
    (xdc_Char)0x65,  /* [2398] */
    (xdc_Char)0x72,  /* [2399] */
    (xdc_Char)0x6f,  /* [2400] */
    (xdc_Char)0x0,  /* [2401] */
    (xdc_Char)0x62,  /* [2402] */
    (xdc_Char)0x75,  /* [2403] */
    (xdc_Char)0x66,  /* [2404] */
    (xdc_Char)0x53,  /* [2405] */
    (xdc_Char)0x69,  /* [2406] */
    (xdc_Char)0x7a,  /* [2407] */
    (xdc_Char)0x65,  /* [2408] */
    (xdc_Char)0x20,  /* [2409] */
    (xdc_Char)0x63,  /* [2410] */
    (xdc_Char)0x61,  /* [2411] */
    (xdc_Char)0x6e,  /* [2412] */
    (xdc_Char)0x6e,  /* [2413] */
    (xdc_Char)0x6f,  /* [2414] */
    (xdc_Char)0x74,  /* [2415] */
    (xdc_Char)0x20,  /* [2416] */
    (xdc_Char)0x62,  /* [2417] */
    (xdc_Char)0x65,  /* [2418] */
    (xdc_Char)0x20,  /* [2419] */
    (xdc_Char)0x7a,  /* [2420] */
    (xdc_Char)0x65,  /* [2421] */
    (xdc_Char)0x72,  /* [2422] */
    (xdc_Char)0x6f,  /* [2423] */
    (xdc_Char)0x0,  /* [2424] */
    (xdc_Char)0x48,  /* [2425] */
    (xdc_Char)0x65,  /* [2426] */
    (xdc_Char)0x61,  /* [2427] */
    (xdc_Char)0x70,  /* [2428] */
    (xdc_Char)0x42,  /* [2429] */
    (xdc_Char)0x75,  /* [2430] */
    (xdc_Char)0x66,  /* [2431] */
    (xdc_Char)0x5f,  /* [2432] */
    (xdc_Char)0x63,  /* [2433] */
    (xdc_Char)0x72,  /* [2434] */
    (xdc_Char)0x65,  /* [2435] */
    (xdc_Char)0x61,  /* [2436] */
    (xdc_Char)0x74,  /* [2437] */
    (xdc_Char)0x65,  /* [2438] */
    (xdc_Char)0x27,  /* [2439] */
    (xdc_Char)0x73,  /* [2440] */
    (xdc_Char)0x20,  /* [2441] */
    (xdc_Char)0x62,  /* [2442] */
    (xdc_Char)0x75,  /* [2443] */
    (xdc_Char)0x66,  /* [2444] */
    (xdc_Char)0x53,  /* [2445] */
    (xdc_Char)0x69,  /* [2446] */
    (xdc_Char)0x7a,  /* [2447] */
    (xdc_Char)0x65,  /* [2448] */
    (xdc_Char)0x20,  /* [2449] */
    (xdc_Char)0x70,  /* [2450] */
    (xdc_Char)0x61,  /* [2451] */
    (xdc_Char)0x72,  /* [2452] */
    (xdc_Char)0x61,  /* [2453] */
    (xdc_Char)0x6d,  /* [2454] */
    (xdc_Char)0x65,  /* [2455] */
    (xdc_Char)0x74,  /* [2456] */
    (xdc_Char)0x65,  /* [2457] */
    (xdc_Char)0x72,  /* [2458] */
    (xdc_Char)0x20,  /* [2459] */
    (xdc_Char)0x69,  /* [2460] */
    (xdc_Char)0x73,  /* [2461] */
    (xdc_Char)0x20,  /* [2462] */
    (xdc_Char)0x69,  /* [2463] */
    (xdc_Char)0x6e,  /* [2464] */
    (xdc_Char)0x76,  /* [2465] */
    (xdc_Char)0x61,  /* [2466] */
    (xdc_Char)0x6c,  /* [2467] */
    (xdc_Char)0x69,  /* [2468] */
    (xdc_Char)0x64,  /* [2469] */
    (xdc_Char)0x20,  /* [2470] */
    (xdc_Char)0x28,  /* [2471] */
    (xdc_Char)0x74,  /* [2472] */
    (xdc_Char)0x6f,  /* [2473] */
    (xdc_Char)0x6f,  /* [2474] */
    (xdc_Char)0x20,  /* [2475] */
    (xdc_Char)0x73,  /* [2476] */
    (xdc_Char)0x6d,  /* [2477] */
    (xdc_Char)0x61,  /* [2478] */
    (xdc_Char)0x6c,  /* [2479] */
    (xdc_Char)0x6c,  /* [2480] */
    (xdc_Char)0x29,  /* [2481] */
    (xdc_Char)0x0,  /* [2482] */
    (xdc_Char)0x43,  /* [2483] */
    (xdc_Char)0x61,  /* [2484] */
    (xdc_Char)0x6e,  /* [2485] */
    (xdc_Char)0x6e,  /* [2486] */
    (xdc_Char)0x6f,  /* [2487] */
    (xdc_Char)0x74,  /* [2488] */
    (xdc_Char)0x20,  /* [2489] */
    (xdc_Char)0x63,  /* [2490] */
    (xdc_Char)0x61,  /* [2491] */
    (xdc_Char)0x6c,  /* [2492] */
    (xdc_Char)0x6c,  /* [2493] */
    (xdc_Char)0x20,  /* [2494] */
    (xdc_Char)0x48,  /* [2495] */
    (xdc_Char)0x65,  /* [2496] */
    (xdc_Char)0x61,  /* [2497] */
    (xdc_Char)0x70,  /* [2498] */
    (xdc_Char)0x42,  /* [2499] */
    (xdc_Char)0x75,  /* [2500] */
    (xdc_Char)0x66,  /* [2501] */
    (xdc_Char)0x5f,  /* [2502] */
    (xdc_Char)0x66,  /* [2503] */
    (xdc_Char)0x72,  /* [2504] */
    (xdc_Char)0x65,  /* [2505] */
    (xdc_Char)0x65,  /* [2506] */
    (xdc_Char)0x20,  /* [2507] */
    (xdc_Char)0x77,  /* [2508] */
    (xdc_Char)0x68,  /* [2509] */
    (xdc_Char)0x65,  /* [2510] */
    (xdc_Char)0x6e,  /* [2511] */
    (xdc_Char)0x20,  /* [2512] */
    (xdc_Char)0x6e,  /* [2513] */
    (xdc_Char)0x6f,  /* [2514] */
    (xdc_Char)0x20,  /* [2515] */
    (xdc_Char)0x62,  /* [2516] */
    (xdc_Char)0x6c,  /* [2517] */
    (xdc_Char)0x6f,  /* [2518] */
    (xdc_Char)0x63,  /* [2519] */
    (xdc_Char)0x6b,  /* [2520] */
    (xdc_Char)0x73,  /* [2521] */
    (xdc_Char)0x20,  /* [2522] */
    (xdc_Char)0x68,  /* [2523] */
    (xdc_Char)0x61,  /* [2524] */
    (xdc_Char)0x76,  /* [2525] */
    (xdc_Char)0x65,  /* [2526] */
    (xdc_Char)0x20,  /* [2527] */
    (xdc_Char)0x62,  /* [2528] */
    (xdc_Char)0x65,  /* [2529] */
    (xdc_Char)0x65,  /* [2530] */
    (xdc_Char)0x6e,  /* [2531] */
    (xdc_Char)0x20,  /* [2532] */
    (xdc_Char)0x61,  /* [2533] */
    (xdc_Char)0x6c,  /* [2534] */
    (xdc_Char)0x6c,  /* [2535] */
    (xdc_Char)0x6f,  /* [2536] */
    (xdc_Char)0x63,  /* [2537] */
    (xdc_Char)0x61,  /* [2538] */
    (xdc_Char)0x74,  /* [2539] */
    (xdc_Char)0x65,  /* [2540] */
    (xdc_Char)0x64,  /* [2541] */
    (xdc_Char)0x0,  /* [2542] */
    (xdc_Char)0x41,  /* [2543] */
    (xdc_Char)0x5f,  /* [2544] */
    (xdc_Char)0x69,  /* [2545] */
    (xdc_Char)0x6e,  /* [2546] */
    (xdc_Char)0x76,  /* [2547] */
    (xdc_Char)0x61,  /* [2548] */
    (xdc_Char)0x6c,  /* [2549] */
    (xdc_Char)0x69,  /* [2550] */
    (xdc_Char)0x64,  /* [2551] */
    (xdc_Char)0x46,  /* [2552] */
    (xdc_Char)0x72,  /* [2553] */
    (xdc_Char)0x65,  /* [2554] */
    (xdc_Char)0x65,  /* [2555] */
    (xdc_Char)0x3a,  /* [2556] */
    (xdc_Char)0x20,  /* [2557] */
    (xdc_Char)0x49,  /* [2558] */
    (xdc_Char)0x6e,  /* [2559] */
    (xdc_Char)0x76,  /* [2560] */
    (xdc_Char)0x61,  /* [2561] */
    (xdc_Char)0x6c,  /* [2562] */
    (xdc_Char)0x69,  /* [2563] */
    (xdc_Char)0x64,  /* [2564] */
    (xdc_Char)0x20,  /* [2565] */
    (xdc_Char)0x66,  /* [2566] */
    (xdc_Char)0x72,  /* [2567] */
    (xdc_Char)0x65,  /* [2568] */
    (xdc_Char)0x65,  /* [2569] */
    (xdc_Char)0x0,  /* [2570] */
    (xdc_Char)0x41,  /* [2571] */
    (xdc_Char)0x5f,  /* [2572] */
    (xdc_Char)0x7a,  /* [2573] */
    (xdc_Char)0x65,  /* [2574] */
    (xdc_Char)0x72,  /* [2575] */
    (xdc_Char)0x6f,  /* [2576] */
    (xdc_Char)0x42,  /* [2577] */
    (xdc_Char)0x6c,  /* [2578] */
    (xdc_Char)0x6f,  /* [2579] */
    (xdc_Char)0x63,  /* [2580] */
    (xdc_Char)0x6b,  /* [2581] */
    (xdc_Char)0x3a,  /* [2582] */
    (xdc_Char)0x20,  /* [2583] */
    (xdc_Char)0x43,  /* [2584] */
    (xdc_Char)0x61,  /* [2585] */
    (xdc_Char)0x6e,  /* [2586] */
    (xdc_Char)0x6e,  /* [2587] */
    (xdc_Char)0x6f,  /* [2588] */
    (xdc_Char)0x74,  /* [2589] */
    (xdc_Char)0x20,  /* [2590] */
    (xdc_Char)0x61,  /* [2591] */
    (xdc_Char)0x6c,  /* [2592] */
    (xdc_Char)0x6c,  /* [2593] */
    (xdc_Char)0x6f,  /* [2594] */
    (xdc_Char)0x63,  /* [2595] */
    (xdc_Char)0x61,  /* [2596] */
    (xdc_Char)0x74,  /* [2597] */
    (xdc_Char)0x65,  /* [2598] */
    (xdc_Char)0x20,  /* [2599] */
    (xdc_Char)0x73,  /* [2600] */
    (xdc_Char)0x69,  /* [2601] */
    (xdc_Char)0x7a,  /* [2602] */
    (xdc_Char)0x65,  /* [2603] */
    (xdc_Char)0x20,  /* [2604] */
    (xdc_Char)0x30,  /* [2605] */
    (xdc_Char)0x0,  /* [2606] */
    (xdc_Char)0x41,  /* [2607] */
    (xdc_Char)0x5f,  /* [2608] */
    (xdc_Char)0x68,  /* [2609] */
    (xdc_Char)0x65,  /* [2610] */
    (xdc_Char)0x61,  /* [2611] */
    (xdc_Char)0x70,  /* [2612] */
    (xdc_Char)0x53,  /* [2613] */
    (xdc_Char)0x69,  /* [2614] */
    (xdc_Char)0x7a,  /* [2615] */
    (xdc_Char)0x65,  /* [2616] */
    (xdc_Char)0x3a,  /* [2617] */
    (xdc_Char)0x20,  /* [2618] */
    (xdc_Char)0x52,  /* [2619] */
    (xdc_Char)0x65,  /* [2620] */
    (xdc_Char)0x71,  /* [2621] */
    (xdc_Char)0x75,  /* [2622] */
    (xdc_Char)0x65,  /* [2623] */
    (xdc_Char)0x73,  /* [2624] */
    (xdc_Char)0x74,  /* [2625] */
    (xdc_Char)0x65,  /* [2626] */
    (xdc_Char)0x64,  /* [2627] */
    (xdc_Char)0x20,  /* [2628] */
    (xdc_Char)0x68,  /* [2629] */
    (xdc_Char)0x65,  /* [2630] */
    (xdc_Char)0x61,  /* [2631] */
    (xdc_Char)0x70,  /* [2632] */
    (xdc_Char)0x20,  /* [2633] */
    (xdc_Char)0x73,  /* [2634] */
    (xdc_Char)0x69,  /* [2635] */
    (xdc_Char)0x7a,  /* [2636] */
    (xdc_Char)0x65,  /* [2637] */
    (xdc_Char)0x20,  /* [2638] */
    (xdc_Char)0x69,  /* [2639] */
    (xdc_Char)0x73,  /* [2640] */
    (xdc_Char)0x20,  /* [2641] */
    (xdc_Char)0x74,  /* [2642] */
    (xdc_Char)0x6f,  /* [2643] */
    (xdc_Char)0x6f,  /* [2644] */
    (xdc_Char)0x20,  /* [2645] */
    (xdc_Char)0x73,  /* [2646] */
    (xdc_Char)0x6d,  /* [2647] */
    (xdc_Char)0x61,  /* [2648] */
    (xdc_Char)0x6c,  /* [2649] */
    (xdc_Char)0x6c,  /* [2650] */
    (xdc_Char)0x0,  /* [2651] */
    (xdc_Char)0x41,  /* [2652] */
    (xdc_Char)0x5f,  /* [2653] */
    (xdc_Char)0x61,  /* [2654] */
    (xdc_Char)0x6c,  /* [2655] */
    (xdc_Char)0x69,  /* [2656] */
    (xdc_Char)0x67,  /* [2657] */
    (xdc_Char)0x6e,  /* [2658] */
    (xdc_Char)0x3a,  /* [2659] */
    (xdc_Char)0x20,  /* [2660] */
    (xdc_Char)0x52,  /* [2661] */
    (xdc_Char)0x65,  /* [2662] */
    (xdc_Char)0x71,  /* [2663] */
    (xdc_Char)0x75,  /* [2664] */
    (xdc_Char)0x65,  /* [2665] */
    (xdc_Char)0x73,  /* [2666] */
    (xdc_Char)0x74,  /* [2667] */
    (xdc_Char)0x65,  /* [2668] */
    (xdc_Char)0x64,  /* [2669] */
    (xdc_Char)0x20,  /* [2670] */
    (xdc_Char)0x61,  /* [2671] */
    (xdc_Char)0x6c,  /* [2672] */
    (xdc_Char)0x69,  /* [2673] */
    (xdc_Char)0x67,  /* [2674] */
    (xdc_Char)0x6e,  /* [2675] */
    (xdc_Char)0x20,  /* [2676] */
    (xdc_Char)0x69,  /* [2677] */
    (xdc_Char)0x73,  /* [2678] */
    (xdc_Char)0x20,  /* [2679] */
    (xdc_Char)0x6e,  /* [2680] */
    (xdc_Char)0x6f,  /* [2681] */
    (xdc_Char)0x74,  /* [2682] */
    (xdc_Char)0x20,  /* [2683] */
    (xdc_Char)0x61,  /* [2684] */
    (xdc_Char)0x20,  /* [2685] */
    (xdc_Char)0x70,  /* [2686] */
    (xdc_Char)0x6f,  /* [2687] */
    (xdc_Char)0x77,  /* [2688] */
    (xdc_Char)0x65,  /* [2689] */
    (xdc_Char)0x72,  /* [2690] */
    (xdc_Char)0x20,  /* [2691] */
    (xdc_Char)0x6f,  /* [2692] */
    (xdc_Char)0x66,  /* [2693] */
    (xdc_Char)0x20,  /* [2694] */
    (xdc_Char)0x32,  /* [2695] */
    (xdc_Char)0x0,  /* [2696] */
    (xdc_Char)0x49,  /* [2697] */
    (xdc_Char)0x6e,  /* [2698] */
    (xdc_Char)0x76,  /* [2699] */
    (xdc_Char)0x61,  /* [2700] */
    (xdc_Char)0x6c,  /* [2701] */
    (xdc_Char)0x69,  /* [2702] */
    (xdc_Char)0x64,  /* [2703] */
    (xdc_Char)0x20,  /* [2704] */
    (xdc_Char)0x62,  /* [2705] */
    (xdc_Char)0x6c,  /* [2706] */
    (xdc_Char)0x6f,  /* [2707] */
    (xdc_Char)0x63,  /* [2708] */
    (xdc_Char)0x6b,  /* [2709] */
    (xdc_Char)0x20,  /* [2710] */
    (xdc_Char)0x61,  /* [2711] */
    (xdc_Char)0x64,  /* [2712] */
    (xdc_Char)0x64,  /* [2713] */
    (xdc_Char)0x72,  /* [2714] */
    (xdc_Char)0x65,  /* [2715] */
    (xdc_Char)0x73,  /* [2716] */
    (xdc_Char)0x73,  /* [2717] */
    (xdc_Char)0x20,  /* [2718] */
    (xdc_Char)0x6f,  /* [2719] */
    (xdc_Char)0x6e,  /* [2720] */
    (xdc_Char)0x20,  /* [2721] */
    (xdc_Char)0x74,  /* [2722] */
    (xdc_Char)0x68,  /* [2723] */
    (xdc_Char)0x65,  /* [2724] */
    (xdc_Char)0x20,  /* [2725] */
    (xdc_Char)0x66,  /* [2726] */
    (xdc_Char)0x72,  /* [2727] */
    (xdc_Char)0x65,  /* [2728] */
    (xdc_Char)0x65,  /* [2729] */
    (xdc_Char)0x2e,  /* [2730] */
    (xdc_Char)0x20,  /* [2731] */
    (xdc_Char)0x46,  /* [2732] */
    (xdc_Char)0x61,  /* [2733] */
    (xdc_Char)0x69,  /* [2734] */
    (xdc_Char)0x6c,  /* [2735] */
    (xdc_Char)0x65,  /* [2736] */
    (xdc_Char)0x64,  /* [2737] */
    (xdc_Char)0x20,  /* [2738] */
    (xdc_Char)0x74,  /* [2739] */
    (xdc_Char)0x6f,  /* [2740] */
    (xdc_Char)0x20,  /* [2741] */
    (xdc_Char)0x66,  /* [2742] */
    (xdc_Char)0x72,  /* [2743] */
    (xdc_Char)0x65,  /* [2744] */
    (xdc_Char)0x65,  /* [2745] */
    (xdc_Char)0x20,  /* [2746] */
    (xdc_Char)0x62,  /* [2747] */
    (xdc_Char)0x6c,  /* [2748] */
    (xdc_Char)0x6f,  /* [2749] */
    (xdc_Char)0x63,  /* [2750] */
    (xdc_Char)0x6b,  /* [2751] */
    (xdc_Char)0x20,  /* [2752] */
    (xdc_Char)0x62,  /* [2753] */
    (xdc_Char)0x61,  /* [2754] */
    (xdc_Char)0x63,  /* [2755] */
    (xdc_Char)0x6b,  /* [2756] */
    (xdc_Char)0x20,  /* [2757] */
    (xdc_Char)0x74,  /* [2758] */
    (xdc_Char)0x6f,  /* [2759] */
    (xdc_Char)0x20,  /* [2760] */
    (xdc_Char)0x68,  /* [2761] */
    (xdc_Char)0x65,  /* [2762] */
    (xdc_Char)0x61,  /* [2763] */
    (xdc_Char)0x70,  /* [2764] */
    (xdc_Char)0x2e,  /* [2765] */
    (xdc_Char)0x0,  /* [2766] */
    (xdc_Char)0x61,  /* [2767] */
    (xdc_Char)0x73,  /* [2768] */
    (xdc_Char)0x73,  /* [2769] */
    (xdc_Char)0x65,  /* [2770] */
    (xdc_Char)0x72,  /* [2771] */
    (xdc_Char)0x74,  /* [2772] */
    (xdc_Char)0x69,  /* [2773] */
    (xdc_Char)0x6f,  /* [2774] */
    (xdc_Char)0x6e,  /* [2775] */
    (xdc_Char)0x20,  /* [2776] */
    (xdc_Char)0x66,  /* [2777] */
    (xdc_Char)0x61,  /* [2778] */
    (xdc_Char)0x69,  /* [2779] */
    (xdc_Char)0x6c,  /* [2780] */
    (xdc_Char)0x75,  /* [2781] */
    (xdc_Char)0x72,  /* [2782] */
    (xdc_Char)0x65,  /* [2783] */
    (xdc_Char)0x25,  /* [2784] */
    (xdc_Char)0x73,  /* [2785] */
    (xdc_Char)0x25,  /* [2786] */
    (xdc_Char)0x73,  /* [2787] */
    (xdc_Char)0x0,  /* [2788] */
    (xdc_Char)0x25,  /* [2789] */
    (xdc_Char)0x24,  /* [2790] */
    (xdc_Char)0x53,  /* [2791] */
    (xdc_Char)0x0,  /* [2792] */
    (xdc_Char)0x6f,  /* [2793] */
    (xdc_Char)0x75,  /* [2794] */
    (xdc_Char)0x74,  /* [2795] */
    (xdc_Char)0x20,  /* [2796] */
    (xdc_Char)0x6f,  /* [2797] */
    (xdc_Char)0x66,  /* [2798] */
    (xdc_Char)0x20,  /* [2799] */
    (xdc_Char)0x6d,  /* [2800] */
    (xdc_Char)0x65,  /* [2801] */
    (xdc_Char)0x6d,  /* [2802] */
    (xdc_Char)0x6f,  /* [2803] */
    (xdc_Char)0x72,  /* [2804] */
    (xdc_Char)0x79,  /* [2805] */
    (xdc_Char)0x3a,  /* [2806] */
    (xdc_Char)0x20,  /* [2807] */
    (xdc_Char)0x68,  /* [2808] */
    (xdc_Char)0x65,  /* [2809] */
    (xdc_Char)0x61,  /* [2810] */
    (xdc_Char)0x70,  /* [2811] */
    (xdc_Char)0x3d,  /* [2812] */
    (xdc_Char)0x30,  /* [2813] */
    (xdc_Char)0x78,  /* [2814] */
    (xdc_Char)0x25,  /* [2815] */
    (xdc_Char)0x78,  /* [2816] */
    (xdc_Char)0x2c,  /* [2817] */
    (xdc_Char)0x20,  /* [2818] */
    (xdc_Char)0x73,  /* [2819] */
    (xdc_Char)0x69,  /* [2820] */
    (xdc_Char)0x7a,  /* [2821] */
    (xdc_Char)0x65,  /* [2822] */
    (xdc_Char)0x3d,  /* [2823] */
    (xdc_Char)0x25,  /* [2824] */
    (xdc_Char)0x75,  /* [2825] */
    (xdc_Char)0x0,  /* [2826] */
    (xdc_Char)0x25,  /* [2827] */
    (xdc_Char)0x73,  /* [2828] */
    (xdc_Char)0x20,  /* [2829] */
    (xdc_Char)0x30,  /* [2830] */
    (xdc_Char)0x78,  /* [2831] */
    (xdc_Char)0x25,  /* [2832] */
    (xdc_Char)0x78,  /* [2833] */
    (xdc_Char)0x0,  /* [2834] */
    (xdc_Char)0x45,  /* [2835] */
    (xdc_Char)0x5f,  /* [2836] */
    (xdc_Char)0x62,  /* [2837] */
    (xdc_Char)0x61,  /* [2838] */
    (xdc_Char)0x64,  /* [2839] */
    (xdc_Char)0x4c,  /* [2840] */
    (xdc_Char)0x65,  /* [2841] */
    (xdc_Char)0x76,  /* [2842] */
    (xdc_Char)0x65,  /* [2843] */
    (xdc_Char)0x6c,  /* [2844] */
    (xdc_Char)0x3a,  /* [2845] */
    (xdc_Char)0x20,  /* [2846] */
    (xdc_Char)0x42,  /* [2847] */
    (xdc_Char)0x61,  /* [2848] */
    (xdc_Char)0x64,  /* [2849] */
    (xdc_Char)0x20,  /* [2850] */
    (xdc_Char)0x66,  /* [2851] */
    (xdc_Char)0x69,  /* [2852] */
    (xdc_Char)0x6c,  /* [2853] */
    (xdc_Char)0x74,  /* [2854] */
    (xdc_Char)0x65,  /* [2855] */
    (xdc_Char)0x72,  /* [2856] */
    (xdc_Char)0x20,  /* [2857] */
    (xdc_Char)0x6c,  /* [2858] */
    (xdc_Char)0x65,  /* [2859] */
    (xdc_Char)0x76,  /* [2860] */
    (xdc_Char)0x65,  /* [2861] */
    (xdc_Char)0x6c,  /* [2862] */
    (xdc_Char)0x20,  /* [2863] */
    (xdc_Char)0x76,  /* [2864] */
    (xdc_Char)0x61,  /* [2865] */
    (xdc_Char)0x6c,  /* [2866] */
    (xdc_Char)0x75,  /* [2867] */
    (xdc_Char)0x65,  /* [2868] */
    (xdc_Char)0x3a,  /* [2869] */
    (xdc_Char)0x20,  /* [2870] */
    (xdc_Char)0x25,  /* [2871] */
    (xdc_Char)0x64,  /* [2872] */
    (xdc_Char)0x0,  /* [2873] */
    (xdc_Char)0x66,  /* [2874] */
    (xdc_Char)0x72,  /* [2875] */
    (xdc_Char)0x65,  /* [2876] */
    (xdc_Char)0x65,  /* [2877] */
    (xdc_Char)0x28,  /* [2878] */
    (xdc_Char)0x29,  /* [2879] */
    (xdc_Char)0x20,  /* [2880] */
    (xdc_Char)0x69,  /* [2881] */
    (xdc_Char)0x6e,  /* [2882] */
    (xdc_Char)0x76,  /* [2883] */
    (xdc_Char)0x61,  /* [2884] */
    (xdc_Char)0x6c,  /* [2885] */
    (xdc_Char)0x69,  /* [2886] */
    (xdc_Char)0x64,  /* [2887] */
    (xdc_Char)0x20,  /* [2888] */
    (xdc_Char)0x69,  /* [2889] */
    (xdc_Char)0x6e,  /* [2890] */
    (xdc_Char)0x20,  /* [2891] */
    (xdc_Char)0x67,  /* [2892] */
    (xdc_Char)0x72,  /* [2893] */
    (xdc_Char)0x6f,  /* [2894] */
    (xdc_Char)0x77,  /* [2895] */
    (xdc_Char)0x74,  /* [2896] */
    (xdc_Char)0x68,  /* [2897] */
    (xdc_Char)0x2d,  /* [2898] */
    (xdc_Char)0x6f,  /* [2899] */
    (xdc_Char)0x6e,  /* [2900] */
    (xdc_Char)0x6c,  /* [2901] */
    (xdc_Char)0x79,  /* [2902] */
    (xdc_Char)0x20,  /* [2903] */
    (xdc_Char)0x48,  /* [2904] */
    (xdc_Char)0x65,  /* [2905] */
    (xdc_Char)0x61,  /* [2906] */
    (xdc_Char)0x70,  /* [2907] */
    (xdc_Char)0x4d,  /* [2908] */
    (xdc_Char)0x69,  /* [2909] */
    (xdc_Char)0x6e,  /* [2910] */
    (xdc_Char)0x0,  /* [2911] */
    (xdc_Char)0x54,  /* [2912] */
    (xdc_Char)0x68,  /* [2913] */
    (xdc_Char)0x65,  /* [2914] */
    (xdc_Char)0x20,  /* [2915] */
    (xdc_Char)0x52,  /* [2916] */
    (xdc_Char)0x54,  /* [2917] */
    (xdc_Char)0x53,  /* [2918] */
    (xdc_Char)0x20,  /* [2919] */
    (xdc_Char)0x68,  /* [2920] */
    (xdc_Char)0x65,  /* [2921] */
    (xdc_Char)0x61,  /* [2922] */
    (xdc_Char)0x70,  /* [2923] */
    (xdc_Char)0x20,  /* [2924] */
    (xdc_Char)0x69,  /* [2925] */
    (xdc_Char)0x73,  /* [2926] */
    (xdc_Char)0x20,  /* [2927] */
    (xdc_Char)0x75,  /* [2928] */
    (xdc_Char)0x73,  /* [2929] */
    (xdc_Char)0x65,  /* [2930] */
    (xdc_Char)0x64,  /* [2931] */
    (xdc_Char)0x20,  /* [2932] */
    (xdc_Char)0x75,  /* [2933] */
    (xdc_Char)0x70,  /* [2934] */
    (xdc_Char)0x2e,  /* [2935] */
    (xdc_Char)0x20,  /* [2936] */
    (xdc_Char)0x45,  /* [2937] */
    (xdc_Char)0x78,  /* [2938] */
    (xdc_Char)0x61,  /* [2939] */
    (xdc_Char)0x6d,  /* [2940] */
    (xdc_Char)0x69,  /* [2941] */
    (xdc_Char)0x6e,  /* [2942] */
    (xdc_Char)0x65,  /* [2943] */
    (xdc_Char)0x20,  /* [2944] */
    (xdc_Char)0x50,  /* [2945] */
    (xdc_Char)0x72,  /* [2946] */
    (xdc_Char)0x6f,  /* [2947] */
    (xdc_Char)0x67,  /* [2948] */
    (xdc_Char)0x72,  /* [2949] */
    (xdc_Char)0x61,  /* [2950] */
    (xdc_Char)0x6d,  /* [2951] */
    (xdc_Char)0x2e,  /* [2952] */
    (xdc_Char)0x68,  /* [2953] */
    (xdc_Char)0x65,  /* [2954] */
    (xdc_Char)0x61,  /* [2955] */
    (xdc_Char)0x70,  /* [2956] */
    (xdc_Char)0x2e,  /* [2957] */
    (xdc_Char)0x0,  /* [2958] */
    (xdc_Char)0x45,  /* [2959] */
    (xdc_Char)0x5f,  /* [2960] */
    (xdc_Char)0x62,  /* [2961] */
    (xdc_Char)0x61,  /* [2962] */
    (xdc_Char)0x64,  /* [2963] */
    (xdc_Char)0x43,  /* [2964] */
    (xdc_Char)0x6f,  /* [2965] */
    (xdc_Char)0x6d,  /* [2966] */
    (xdc_Char)0x6d,  /* [2967] */
    (xdc_Char)0x61,  /* [2968] */
    (xdc_Char)0x6e,  /* [2969] */
    (xdc_Char)0x64,  /* [2970] */
    (xdc_Char)0x3a,  /* [2971] */
    (xdc_Char)0x20,  /* [2972] */
    (xdc_Char)0x52,  /* [2973] */
    (xdc_Char)0x65,  /* [2974] */
    (xdc_Char)0x63,  /* [2975] */
    (xdc_Char)0x65,  /* [2976] */
    (xdc_Char)0x69,  /* [2977] */
    (xdc_Char)0x76,  /* [2978] */
    (xdc_Char)0x65,  /* [2979] */
    (xdc_Char)0x64,  /* [2980] */
    (xdc_Char)0x20,  /* [2981] */
    (xdc_Char)0x69,  /* [2982] */
    (xdc_Char)0x6e,  /* [2983] */
    (xdc_Char)0x76,  /* [2984] */
    (xdc_Char)0x61,  /* [2985] */
    (xdc_Char)0x6c,  /* [2986] */
    (xdc_Char)0x69,  /* [2987] */
    (xdc_Char)0x64,  /* [2988] */
    (xdc_Char)0x20,  /* [2989] */
    (xdc_Char)0x63,  /* [2990] */
    (xdc_Char)0x6f,  /* [2991] */
    (xdc_Char)0x6d,  /* [2992] */
    (xdc_Char)0x6d,  /* [2993] */
    (xdc_Char)0x61,  /* [2994] */
    (xdc_Char)0x6e,  /* [2995] */
    (xdc_Char)0x64,  /* [2996] */
    (xdc_Char)0x2c,  /* [2997] */
    (xdc_Char)0x20,  /* [2998] */
    (xdc_Char)0x69,  /* [2999] */
    (xdc_Char)0x64,  /* [3000] */
    (xdc_Char)0x3a,  /* [3001] */
    (xdc_Char)0x20,  /* [3002] */
    (xdc_Char)0x25,  /* [3003] */
    (xdc_Char)0x64,  /* [3004] */
    (xdc_Char)0x2e,  /* [3005] */
    (xdc_Char)0x0,  /* [3006] */
    (xdc_Char)0x45,  /* [3007] */
    (xdc_Char)0x5f,  /* [3008] */
    (xdc_Char)0x75,  /* [3009] */
    (xdc_Char)0x6e,  /* [3010] */
    (xdc_Char)0x70,  /* [3011] */
    (xdc_Char)0x6c,  /* [3012] */
    (xdc_Char)0x75,  /* [3013] */
    (xdc_Char)0x67,  /* [3014] */
    (xdc_Char)0x67,  /* [3015] */
    (xdc_Char)0x65,  /* [3016] */
    (xdc_Char)0x64,  /* [3017] */
    (xdc_Char)0x49,  /* [3018] */
    (xdc_Char)0x6e,  /* [3019] */
    (xdc_Char)0x74,  /* [3020] */
    (xdc_Char)0x65,  /* [3021] */
    (xdc_Char)0x72,  /* [3022] */
    (xdc_Char)0x72,  /* [3023] */
    (xdc_Char)0x75,  /* [3024] */
    (xdc_Char)0x70,  /* [3025] */
    (xdc_Char)0x74,  /* [3026] */
    (xdc_Char)0x3a,  /* [3027] */
    (xdc_Char)0x20,  /* [3028] */
    (xdc_Char)0x55,  /* [3029] */
    (xdc_Char)0x6e,  /* [3030] */
    (xdc_Char)0x70,  /* [3031] */
    (xdc_Char)0x6c,  /* [3032] */
    (xdc_Char)0x75,  /* [3033] */
    (xdc_Char)0x67,  /* [3034] */
    (xdc_Char)0x67,  /* [3035] */
    (xdc_Char)0x65,  /* [3036] */
    (xdc_Char)0x64,  /* [3037] */
    (xdc_Char)0x20,  /* [3038] */
    (xdc_Char)0x69,  /* [3039] */
    (xdc_Char)0x6e,  /* [3040] */
    (xdc_Char)0x74,  /* [3041] */
    (xdc_Char)0x65,  /* [3042] */
    (xdc_Char)0x72,  /* [3043] */
    (xdc_Char)0x72,  /* [3044] */
    (xdc_Char)0x75,  /* [3045] */
    (xdc_Char)0x70,  /* [3046] */
    (xdc_Char)0x74,  /* [3047] */
    (xdc_Char)0x20,  /* [3048] */
    (xdc_Char)0x66,  /* [3049] */
    (xdc_Char)0x6c,  /* [3050] */
    (xdc_Char)0x61,  /* [3051] */
    (xdc_Char)0x67,  /* [3052] */
    (xdc_Char)0x67,  /* [3053] */
    (xdc_Char)0x65,  /* [3054] */
    (xdc_Char)0x64,  /* [3055] */
    (xdc_Char)0x3a,  /* [3056] */
    (xdc_Char)0x20,  /* [3057] */
    (xdc_Char)0x69,  /* [3058] */
    (xdc_Char)0x6e,  /* [3059] */
    (xdc_Char)0x74,  /* [3060] */
    (xdc_Char)0x72,  /* [3061] */
    (xdc_Char)0x23,  /* [3062] */
    (xdc_Char)0x20,  /* [3063] */
    (xdc_Char)0x25,  /* [3064] */
    (xdc_Char)0x64,  /* [3065] */
    (xdc_Char)0x0,  /* [3066] */
    (xdc_Char)0x45,  /* [3067] */
    (xdc_Char)0x5f,  /* [3068] */
    (xdc_Char)0x61,  /* [3069] */
    (xdc_Char)0x6c,  /* [3070] */
    (xdc_Char)0x72,  /* [3071] */
    (xdc_Char)0x65,  /* [3072] */
    (xdc_Char)0x61,  /* [3073] */
    (xdc_Char)0x64,  /* [3074] */
    (xdc_Char)0x79,  /* [3075] */
    (xdc_Char)0x44,  /* [3076] */
    (xdc_Char)0x65,  /* [3077] */
    (xdc_Char)0x66,  /* [3078] */
    (xdc_Char)0x69,  /* [3079] */
    (xdc_Char)0x6e,  /* [3080] */
    (xdc_Char)0x65,  /* [3081] */
    (xdc_Char)0x64,  /* [3082] */
    (xdc_Char)0x3a,  /* [3083] */
    (xdc_Char)0x20,  /* [3084] */
    (xdc_Char)0x48,  /* [3085] */
    (xdc_Char)0x77,  /* [3086] */
    (xdc_Char)0x69,  /* [3087] */
    (xdc_Char)0x20,  /* [3088] */
    (xdc_Char)0x61,  /* [3089] */
    (xdc_Char)0x6c,  /* [3090] */
    (xdc_Char)0x72,  /* [3091] */
    (xdc_Char)0x65,  /* [3092] */
    (xdc_Char)0x61,  /* [3093] */
    (xdc_Char)0x64,  /* [3094] */
    (xdc_Char)0x79,  /* [3095] */
    (xdc_Char)0x20,  /* [3096] */
    (xdc_Char)0x64,  /* [3097] */
    (xdc_Char)0x65,  /* [3098] */
    (xdc_Char)0x66,  /* [3099] */
    (xdc_Char)0x69,  /* [3100] */
    (xdc_Char)0x6e,  /* [3101] */
    (xdc_Char)0x65,  /* [3102] */
    (xdc_Char)0x64,  /* [3103] */
    (xdc_Char)0x3a,  /* [3104] */
    (xdc_Char)0x20,  /* [3105] */
    (xdc_Char)0x69,  /* [3106] */
    (xdc_Char)0x6e,  /* [3107] */
    (xdc_Char)0x74,  /* [3108] */
    (xdc_Char)0x72,  /* [3109] */
    (xdc_Char)0x23,  /* [3110] */
    (xdc_Char)0x20,  /* [3111] */
    (xdc_Char)0x25,  /* [3112] */
    (xdc_Char)0x64,  /* [3113] */
    (xdc_Char)0x0,  /* [3114] */
    (xdc_Char)0x45,  /* [3115] */
    (xdc_Char)0x5f,  /* [3116] */
    (xdc_Char)0x6e,  /* [3117] */
    (xdc_Char)0x6f,  /* [3118] */
    (xdc_Char)0x74,  /* [3119] */
    (xdc_Char)0x41,  /* [3120] */
    (xdc_Char)0x76,  /* [3121] */
    (xdc_Char)0x61,  /* [3122] */
    (xdc_Char)0x69,  /* [3123] */
    (xdc_Char)0x6c,  /* [3124] */
    (xdc_Char)0x61,  /* [3125] */
    (xdc_Char)0x62,  /* [3126] */
    (xdc_Char)0x6c,  /* [3127] */
    (xdc_Char)0x65,  /* [3128] */
    (xdc_Char)0x3a,  /* [3129] */
    (xdc_Char)0x20,  /* [3130] */
    (xdc_Char)0x54,  /* [3131] */
    (xdc_Char)0x69,  /* [3132] */
    (xdc_Char)0x6d,  /* [3133] */
    (xdc_Char)0x65,  /* [3134] */
    (xdc_Char)0x72,  /* [3135] */
    (xdc_Char)0x20,  /* [3136] */
    (xdc_Char)0x6e,  /* [3137] */
    (xdc_Char)0x6f,  /* [3138] */
    (xdc_Char)0x74,  /* [3139] */
    (xdc_Char)0x20,  /* [3140] */
    (xdc_Char)0x61,  /* [3141] */
    (xdc_Char)0x76,  /* [3142] */
    (xdc_Char)0x61,  /* [3143] */
    (xdc_Char)0x69,  /* [3144] */
    (xdc_Char)0x6c,  /* [3145] */
    (xdc_Char)0x61,  /* [3146] */
    (xdc_Char)0x62,  /* [3147] */
    (xdc_Char)0x6c,  /* [3148] */
    (xdc_Char)0x65,  /* [3149] */
    (xdc_Char)0x20,  /* [3150] */
    (xdc_Char)0x25,  /* [3151] */
    (xdc_Char)0x64,  /* [3152] */
    (xdc_Char)0x0,  /* [3153] */
    (xdc_Char)0x53,  /* [3154] */
    (xdc_Char)0x74,  /* [3155] */
    (xdc_Char)0x61,  /* [3156] */
    (xdc_Char)0x63,  /* [3157] */
    (xdc_Char)0x6b,  /* [3158] */
    (xdc_Char)0x20,  /* [3159] */
    (xdc_Char)0x28,  /* [3160] */
    (xdc_Char)0x25,  /* [3161] */
    (xdc_Char)0x64,  /* [3162] */
    (xdc_Char)0x29,  /* [3163] */
    (xdc_Char)0x20,  /* [3164] */
    (xdc_Char)0x6e,  /* [3165] */
    (xdc_Char)0x6f,  /* [3166] */
    (xdc_Char)0x74,  /* [3167] */
    (xdc_Char)0x20,  /* [3168] */
    (xdc_Char)0x6c,  /* [3169] */
    (xdc_Char)0x6f,  /* [3170] */
    (xdc_Char)0x63,  /* [3171] */
    (xdc_Char)0x61,  /* [3172] */
    (xdc_Char)0x74,  /* [3173] */
    (xdc_Char)0x65,  /* [3174] */
    (xdc_Char)0x64,  /* [3175] */
    (xdc_Char)0x20,  /* [3176] */
    (xdc_Char)0x6f,  /* [3177] */
    (xdc_Char)0x6e,  /* [3178] */
    (xdc_Char)0x20,  /* [3179] */
    (xdc_Char)0x50,  /* [3180] */
    (xdc_Char)0x41,  /* [3181] */
    (xdc_Char)0x47,  /* [3182] */
    (xdc_Char)0x45,  /* [3183] */
    (xdc_Char)0x20,  /* [3184] */
    (xdc_Char)0x30,  /* [3185] */
    (xdc_Char)0x20,  /* [3186] */
    (xdc_Char)0x28,  /* [3187] */
    (xdc_Char)0x73,  /* [3188] */
    (xdc_Char)0x74,  /* [3189] */
    (xdc_Char)0x61,  /* [3190] */
    (xdc_Char)0x63,  /* [3191] */
    (xdc_Char)0x6b,  /* [3192] */
    (xdc_Char)0x20,  /* [3193] */
    (xdc_Char)0x6d,  /* [3194] */
    (xdc_Char)0x75,  /* [3195] */
    (xdc_Char)0x73,  /* [3196] */
    (xdc_Char)0x74,  /* [3197] */
    (xdc_Char)0x20,  /* [3198] */
    (xdc_Char)0x62,  /* [3199] */
    (xdc_Char)0x65,  /* [3200] */
    (xdc_Char)0x20,  /* [3201] */
    (xdc_Char)0x6c,  /* [3202] */
    (xdc_Char)0x6f,  /* [3203] */
    (xdc_Char)0x63,  /* [3204] */
    (xdc_Char)0x61,  /* [3205] */
    (xdc_Char)0x74,  /* [3206] */
    (xdc_Char)0x65,  /* [3207] */
    (xdc_Char)0x64,  /* [3208] */
    (xdc_Char)0x20,  /* [3209] */
    (xdc_Char)0x65,  /* [3210] */
    (xdc_Char)0x6e,  /* [3211] */
    (xdc_Char)0x74,  /* [3212] */
    (xdc_Char)0x69,  /* [3213] */
    (xdc_Char)0x72,  /* [3214] */
    (xdc_Char)0x65,  /* [3215] */
    (xdc_Char)0x6c,  /* [3216] */
    (xdc_Char)0x79,  /* [3217] */
    (xdc_Char)0x20,  /* [3218] */
    (xdc_Char)0x62,  /* [3219] */
    (xdc_Char)0x65,  /* [3220] */
    (xdc_Char)0x6c,  /* [3221] */
    (xdc_Char)0x6f,  /* [3222] */
    (xdc_Char)0x77,  /* [3223] */
    (xdc_Char)0x20,  /* [3224] */
    (xdc_Char)0x30,  /* [3225] */
    (xdc_Char)0x78,  /* [3226] */
    (xdc_Char)0x31,  /* [3227] */
    (xdc_Char)0x30,  /* [3228] */
    (xdc_Char)0x30,  /* [3229] */
    (xdc_Char)0x30,  /* [3230] */
    (xdc_Char)0x30,  /* [3231] */
    (xdc_Char)0x29,  /* [3232] */
    (xdc_Char)0x0,  /* [3233] */
    (xdc_Char)0x45,  /* [3234] */
    (xdc_Char)0x5f,  /* [3235] */
    (xdc_Char)0x73,  /* [3236] */
    (xdc_Char)0x74,  /* [3237] */
    (xdc_Char)0x61,  /* [3238] */
    (xdc_Char)0x63,  /* [3239] */
    (xdc_Char)0x6b,  /* [3240] */
    (xdc_Char)0x4f,  /* [3241] */
    (xdc_Char)0x76,  /* [3242] */
    (xdc_Char)0x65,  /* [3243] */
    (xdc_Char)0x72,  /* [3244] */
    (xdc_Char)0x66,  /* [3245] */
    (xdc_Char)0x6c,  /* [3246] */
    (xdc_Char)0x6f,  /* [3247] */
    (xdc_Char)0x77,  /* [3248] */
    (xdc_Char)0x3a,  /* [3249] */
    (xdc_Char)0x20,  /* [3250] */
    (xdc_Char)0x49,  /* [3251] */
    (xdc_Char)0x53,  /* [3252] */
    (xdc_Char)0x52,  /* [3253] */
    (xdc_Char)0x20,  /* [3254] */
    (xdc_Char)0x73,  /* [3255] */
    (xdc_Char)0x74,  /* [3256] */
    (xdc_Char)0x61,  /* [3257] */
    (xdc_Char)0x63,  /* [3258] */
    (xdc_Char)0x6b,  /* [3259] */
    (xdc_Char)0x20,  /* [3260] */
    (xdc_Char)0x6f,  /* [3261] */
    (xdc_Char)0x76,  /* [3262] */
    (xdc_Char)0x65,  /* [3263] */
    (xdc_Char)0x72,  /* [3264] */
    (xdc_Char)0x66,  /* [3265] */
    (xdc_Char)0x6c,  /* [3266] */
    (xdc_Char)0x6f,  /* [3267] */
    (xdc_Char)0x77,  /* [3268] */
    (xdc_Char)0x2e,  /* [3269] */
    (xdc_Char)0x0,  /* [3270] */
    (xdc_Char)0x45,  /* [3271] */
    (xdc_Char)0x5f,  /* [3272] */
    (xdc_Char)0x73,  /* [3273] */
    (xdc_Char)0x74,  /* [3274] */
    (xdc_Char)0x61,  /* [3275] */
    (xdc_Char)0x63,  /* [3276] */
    (xdc_Char)0x6b,  /* [3277] */
    (xdc_Char)0x4f,  /* [3278] */
    (xdc_Char)0x76,  /* [3279] */
    (xdc_Char)0x65,  /* [3280] */
    (xdc_Char)0x72,  /* [3281] */
    (xdc_Char)0x66,  /* [3282] */
    (xdc_Char)0x6c,  /* [3283] */
    (xdc_Char)0x6f,  /* [3284] */
    (xdc_Char)0x77,  /* [3285] */
    (xdc_Char)0x3a,  /* [3286] */
    (xdc_Char)0x20,  /* [3287] */
    (xdc_Char)0x54,  /* [3288] */
    (xdc_Char)0x61,  /* [3289] */
    (xdc_Char)0x73,  /* [3290] */
    (xdc_Char)0x6b,  /* [3291] */
    (xdc_Char)0x20,  /* [3292] */
    (xdc_Char)0x30,  /* [3293] */
    (xdc_Char)0x78,  /* [3294] */
    (xdc_Char)0x25,  /* [3295] */
    (xdc_Char)0x78,  /* [3296] */
    (xdc_Char)0x20,  /* [3297] */
    (xdc_Char)0x73,  /* [3298] */
    (xdc_Char)0x74,  /* [3299] */
    (xdc_Char)0x61,  /* [3300] */
    (xdc_Char)0x63,  /* [3301] */
    (xdc_Char)0x6b,  /* [3302] */
    (xdc_Char)0x20,  /* [3303] */
    (xdc_Char)0x6f,  /* [3304] */
    (xdc_Char)0x76,  /* [3305] */
    (xdc_Char)0x65,  /* [3306] */
    (xdc_Char)0x72,  /* [3307] */
    (xdc_Char)0x66,  /* [3308] */
    (xdc_Char)0x6c,  /* [3309] */
    (xdc_Char)0x6f,  /* [3310] */
    (xdc_Char)0x77,  /* [3311] */
    (xdc_Char)0x2e,  /* [3312] */
    (xdc_Char)0x0,  /* [3313] */
    (xdc_Char)0x45,  /* [3314] */
    (xdc_Char)0x5f,  /* [3315] */
    (xdc_Char)0x73,  /* [3316] */
    (xdc_Char)0x70,  /* [3317] */
    (xdc_Char)0x4f,  /* [3318] */
    (xdc_Char)0x75,  /* [3319] */
    (xdc_Char)0x74,  /* [3320] */
    (xdc_Char)0x4f,  /* [3321] */
    (xdc_Char)0x66,  /* [3322] */
    (xdc_Char)0x42,  /* [3323] */
    (xdc_Char)0x6f,  /* [3324] */
    (xdc_Char)0x75,  /* [3325] */
    (xdc_Char)0x6e,  /* [3326] */
    (xdc_Char)0x64,  /* [3327] */
    (xdc_Char)0x73,  /* [3328] */
    (xdc_Char)0x3a,  /* [3329] */
    (xdc_Char)0x20,  /* [3330] */
    (xdc_Char)0x54,  /* [3331] */
    (xdc_Char)0x61,  /* [3332] */
    (xdc_Char)0x73,  /* [3333] */
    (xdc_Char)0x6b,  /* [3334] */
    (xdc_Char)0x20,  /* [3335] */
    (xdc_Char)0x30,  /* [3336] */
    (xdc_Char)0x78,  /* [3337] */
    (xdc_Char)0x25,  /* [3338] */
    (xdc_Char)0x78,  /* [3339] */
    (xdc_Char)0x20,  /* [3340] */
    (xdc_Char)0x73,  /* [3341] */
    (xdc_Char)0x74,  /* [3342] */
    (xdc_Char)0x61,  /* [3343] */
    (xdc_Char)0x63,  /* [3344] */
    (xdc_Char)0x6b,  /* [3345] */
    (xdc_Char)0x20,  /* [3346] */
    (xdc_Char)0x65,  /* [3347] */
    (xdc_Char)0x72,  /* [3348] */
    (xdc_Char)0x72,  /* [3349] */
    (xdc_Char)0x6f,  /* [3350] */
    (xdc_Char)0x72,  /* [3351] */
    (xdc_Char)0x2c,  /* [3352] */
    (xdc_Char)0x20,  /* [3353] */
    (xdc_Char)0x53,  /* [3354] */
    (xdc_Char)0x50,  /* [3355] */
    (xdc_Char)0x20,  /* [3356] */
    (xdc_Char)0x3d,  /* [3357] */
    (xdc_Char)0x20,  /* [3358] */
    (xdc_Char)0x30,  /* [3359] */
    (xdc_Char)0x78,  /* [3360] */
    (xdc_Char)0x25,  /* [3361] */
    (xdc_Char)0x78,  /* [3362] */
    (xdc_Char)0x2e,  /* [3363] */
    (xdc_Char)0x0,  /* [3364] */
    (xdc_Char)0x45,  /* [3365] */
    (xdc_Char)0x5f,  /* [3366] */
    (xdc_Char)0x6d,  /* [3367] */
    (xdc_Char)0x61,  /* [3368] */
    (xdc_Char)0x78,  /* [3369] */
    (xdc_Char)0x52,  /* [3370] */
    (xdc_Char)0x65,  /* [3371] */
    (xdc_Char)0x61,  /* [3372] */
    (xdc_Char)0x63,  /* [3373] */
    (xdc_Char)0x68,  /* [3374] */
    (xdc_Char)0x65,  /* [3375] */
    (xdc_Char)0x64,  /* [3376] */
    (xdc_Char)0x3a,  /* [3377] */
    (xdc_Char)0x20,  /* [3378] */
    (xdc_Char)0x41,  /* [3379] */
    (xdc_Char)0x6c,  /* [3380] */
    (xdc_Char)0x6c,  /* [3381] */
    (xdc_Char)0x20,  /* [3382] */
    (xdc_Char)0x65,  /* [3383] */
    (xdc_Char)0x6e,  /* [3384] */
    (xdc_Char)0x74,  /* [3385] */
    (xdc_Char)0x72,  /* [3386] */
    (xdc_Char)0x69,  /* [3387] */
    (xdc_Char)0x65,  /* [3388] */
    (xdc_Char)0x73,  /* [3389] */
    (xdc_Char)0x20,  /* [3390] */
    (xdc_Char)0x69,  /* [3391] */
    (xdc_Char)0x6e,  /* [3392] */
    (xdc_Char)0x20,  /* [3393] */
    (xdc_Char)0x75,  /* [3394] */
    (xdc_Char)0x73,  /* [3395] */
    (xdc_Char)0x65,  /* [3396] */
    (xdc_Char)0x2e,  /* [3397] */
    (xdc_Char)0x20,  /* [3398] */
    (xdc_Char)0x4e,  /* [3399] */
    (xdc_Char)0x61,  /* [3400] */
    (xdc_Char)0x6d,  /* [3401] */
    (xdc_Char)0x65,  /* [3402] */
    (xdc_Char)0x53,  /* [3403] */
    (xdc_Char)0x65,  /* [3404] */
    (xdc_Char)0x72,  /* [3405] */
    (xdc_Char)0x76,  /* [3406] */
    (xdc_Char)0x65,  /* [3407] */
    (xdc_Char)0x72,  /* [3408] */
    (xdc_Char)0x2e,  /* [3409] */
    (xdc_Char)0x6d,  /* [3410] */
    (xdc_Char)0x61,  /* [3411] */
    (xdc_Char)0x78,  /* [3412] */
    (xdc_Char)0x52,  /* [3413] */
    (xdc_Char)0x75,  /* [3414] */
    (xdc_Char)0x6e,  /* [3415] */
    (xdc_Char)0x74,  /* [3416] */
    (xdc_Char)0x69,  /* [3417] */
    (xdc_Char)0x6d,  /* [3418] */
    (xdc_Char)0x65,  /* [3419] */
    (xdc_Char)0x45,  /* [3420] */
    (xdc_Char)0x6e,  /* [3421] */
    (xdc_Char)0x74,  /* [3422] */
    (xdc_Char)0x72,  /* [3423] */
    (xdc_Char)0x69,  /* [3424] */
    (xdc_Char)0x65,  /* [3425] */
    (xdc_Char)0x73,  /* [3426] */
    (xdc_Char)0x20,  /* [3427] */
    (xdc_Char)0x69,  /* [3428] */
    (xdc_Char)0x73,  /* [3429] */
    (xdc_Char)0x20,  /* [3430] */
    (xdc_Char)0x25,  /* [3431] */
    (xdc_Char)0x64,  /* [3432] */
    (xdc_Char)0x0,  /* [3433] */
    (xdc_Char)0x45,  /* [3434] */
    (xdc_Char)0x5f,  /* [3435] */
    (xdc_Char)0x65,  /* [3436] */
    (xdc_Char)0x6e,  /* [3437] */
    (xdc_Char)0x74,  /* [3438] */
    (xdc_Char)0x72,  /* [3439] */
    (xdc_Char)0x79,  /* [3440] */
    (xdc_Char)0x45,  /* [3441] */
    (xdc_Char)0x78,  /* [3442] */
    (xdc_Char)0x69,  /* [3443] */
    (xdc_Char)0x73,  /* [3444] */
    (xdc_Char)0x74,  /* [3445] */
    (xdc_Char)0x73,  /* [3446] */
    (xdc_Char)0x3a,  /* [3447] */
    (xdc_Char)0x20,  /* [3448] */
    (xdc_Char)0x25,  /* [3449] */
    (xdc_Char)0x73,  /* [3450] */
    (xdc_Char)0x20,  /* [3451] */
    (xdc_Char)0x6e,  /* [3452] */
    (xdc_Char)0x61,  /* [3453] */
    (xdc_Char)0x6d,  /* [3454] */
    (xdc_Char)0x65,  /* [3455] */
    (xdc_Char)0x20,  /* [3456] */
    (xdc_Char)0x61,  /* [3457] */
    (xdc_Char)0x6c,  /* [3458] */
    (xdc_Char)0x72,  /* [3459] */
    (xdc_Char)0x65,  /* [3460] */
    (xdc_Char)0x61,  /* [3461] */
    (xdc_Char)0x64,  /* [3462] */
    (xdc_Char)0x79,  /* [3463] */
    (xdc_Char)0x20,  /* [3464] */
    (xdc_Char)0x69,  /* [3465] */
    (xdc_Char)0x6e,  /* [3466] */
    (xdc_Char)0x20,  /* [3467] */
    (xdc_Char)0x74,  /* [3468] */
    (xdc_Char)0x61,  /* [3469] */
    (xdc_Char)0x62,  /* [3470] */
    (xdc_Char)0x6c,  /* [3471] */
    (xdc_Char)0x65,  /* [3472] */
    (xdc_Char)0x20,  /* [3473] */
    (xdc_Char)0x0,  /* [3474] */
    (xdc_Char)0x45,  /* [3475] */
    (xdc_Char)0x5f,  /* [3476] */
    (xdc_Char)0x70,  /* [3477] */
    (xdc_Char)0x72,  /* [3478] */
    (xdc_Char)0x69,  /* [3479] */
    (xdc_Char)0x6f,  /* [3480] */
    (xdc_Char)0x72,  /* [3481] */
    (xdc_Char)0x69,  /* [3482] */
    (xdc_Char)0x74,  /* [3483] */
    (xdc_Char)0x79,  /* [3484] */
    (xdc_Char)0x3a,  /* [3485] */
    (xdc_Char)0x20,  /* [3486] */
    (xdc_Char)0x54,  /* [3487] */
    (xdc_Char)0x68,  /* [3488] */
    (xdc_Char)0x72,  /* [3489] */
    (xdc_Char)0x65,  /* [3490] */
    (xdc_Char)0x61,  /* [3491] */
    (xdc_Char)0x64,  /* [3492] */
    (xdc_Char)0x20,  /* [3493] */
    (xdc_Char)0x70,  /* [3494] */
    (xdc_Char)0x72,  /* [3495] */
    (xdc_Char)0x69,  /* [3496] */
    (xdc_Char)0x6f,  /* [3497] */
    (xdc_Char)0x72,  /* [3498] */
    (xdc_Char)0x69,  /* [3499] */
    (xdc_Char)0x74,  /* [3500] */
    (xdc_Char)0x79,  /* [3501] */
    (xdc_Char)0x20,  /* [3502] */
    (xdc_Char)0x69,  /* [3503] */
    (xdc_Char)0x73,  /* [3504] */
    (xdc_Char)0x20,  /* [3505] */
    (xdc_Char)0x69,  /* [3506] */
    (xdc_Char)0x6e,  /* [3507] */
    (xdc_Char)0x76,  /* [3508] */
    (xdc_Char)0x61,  /* [3509] */
    (xdc_Char)0x6c,  /* [3510] */
    (xdc_Char)0x69,  /* [3511] */
    (xdc_Char)0x64,  /* [3512] */
    (xdc_Char)0x20,  /* [3513] */
    (xdc_Char)0x25,  /* [3514] */
    (xdc_Char)0x64,  /* [3515] */
    (xdc_Char)0x0,  /* [3516] */
    (xdc_Char)0x72,  /* [3517] */
    (xdc_Char)0x65,  /* [3518] */
    (xdc_Char)0x71,  /* [3519] */
    (xdc_Char)0x75,  /* [3520] */
    (xdc_Char)0x65,  /* [3521] */
    (xdc_Char)0x73,  /* [3522] */
    (xdc_Char)0x74,  /* [3523] */
    (xdc_Char)0x65,  /* [3524] */
    (xdc_Char)0x64,  /* [3525] */
    (xdc_Char)0x20,  /* [3526] */
    (xdc_Char)0x73,  /* [3527] */
    (xdc_Char)0x69,  /* [3528] */
    (xdc_Char)0x7a,  /* [3529] */
    (xdc_Char)0x65,  /* [3530] */
    (xdc_Char)0x20,  /* [3531] */
    (xdc_Char)0x69,  /* [3532] */
    (xdc_Char)0x73,  /* [3533] */
    (xdc_Char)0x20,  /* [3534] */
    (xdc_Char)0x74,  /* [3535] */
    (xdc_Char)0x6f,  /* [3536] */
    (xdc_Char)0x6f,  /* [3537] */
    (xdc_Char)0x20,  /* [3538] */
    (xdc_Char)0x62,  /* [3539] */
    (xdc_Char)0x69,  /* [3540] */
    (xdc_Char)0x67,  /* [3541] */
    (xdc_Char)0x3a,  /* [3542] */
    (xdc_Char)0x20,  /* [3543] */
    (xdc_Char)0x68,  /* [3544] */
    (xdc_Char)0x61,  /* [3545] */
    (xdc_Char)0x6e,  /* [3546] */
    (xdc_Char)0x64,  /* [3547] */
    (xdc_Char)0x6c,  /* [3548] */
    (xdc_Char)0x65,  /* [3549] */
    (xdc_Char)0x3d,  /* [3550] */
    (xdc_Char)0x30,  /* [3551] */
    (xdc_Char)0x78,  /* [3552] */
    (xdc_Char)0x25,  /* [3553] */
    (xdc_Char)0x78,  /* [3554] */
    (xdc_Char)0x2c,  /* [3555] */
    (xdc_Char)0x20,  /* [3556] */
    (xdc_Char)0x73,  /* [3557] */
    (xdc_Char)0x69,  /* [3558] */
    (xdc_Char)0x7a,  /* [3559] */
    (xdc_Char)0x65,  /* [3560] */
    (xdc_Char)0x3d,  /* [3561] */
    (xdc_Char)0x25,  /* [3562] */
    (xdc_Char)0x75,  /* [3563] */
    (xdc_Char)0x0,  /* [3564] */
    (xdc_Char)0x6f,  /* [3565] */
    (xdc_Char)0x75,  /* [3566] */
    (xdc_Char)0x74,  /* [3567] */
    (xdc_Char)0x20,  /* [3568] */
    (xdc_Char)0x6f,  /* [3569] */
    (xdc_Char)0x66,  /* [3570] */
    (xdc_Char)0x20,  /* [3571] */
    (xdc_Char)0x6d,  /* [3572] */
    (xdc_Char)0x65,  /* [3573] */
    (xdc_Char)0x6d,  /* [3574] */
    (xdc_Char)0x6f,  /* [3575] */
    (xdc_Char)0x72,  /* [3576] */
    (xdc_Char)0x79,  /* [3577] */
    (xdc_Char)0x3a,  /* [3578] */
    (xdc_Char)0x20,  /* [3579] */
    (xdc_Char)0x68,  /* [3580] */
    (xdc_Char)0x61,  /* [3581] */
    (xdc_Char)0x6e,  /* [3582] */
    (xdc_Char)0x64,  /* [3583] */
    (xdc_Char)0x6c,  /* [3584] */
    (xdc_Char)0x65,  /* [3585] */
    (xdc_Char)0x3d,  /* [3586] */
    (xdc_Char)0x30,  /* [3587] */
    (xdc_Char)0x78,  /* [3588] */
    (xdc_Char)0x25,  /* [3589] */
    (xdc_Char)0x78,  /* [3590] */
    (xdc_Char)0x2c,  /* [3591] */
    (xdc_Char)0x20,  /* [3592] */
    (xdc_Char)0x73,  /* [3593] */
    (xdc_Char)0x69,  /* [3594] */
    (xdc_Char)0x7a,  /* [3595] */
    (xdc_Char)0x65,  /* [3596] */
    (xdc_Char)0x3d,  /* [3597] */
    (xdc_Char)0x25,  /* [3598] */
    (xdc_Char)0x75,  /* [3599] */
    (xdc_Char)0x0,  /* [3600] */
    (xdc_Char)0x3c,  /* [3601] */
    (xdc_Char)0x2d,  /* [3602] */
    (xdc_Char)0x2d,  /* [3603] */
    (xdc_Char)0x20,  /* [3604] */
    (xdc_Char)0x63,  /* [3605] */
    (xdc_Char)0x6f,  /* [3606] */
    (xdc_Char)0x6e,  /* [3607] */
    (xdc_Char)0x73,  /* [3608] */
    (xdc_Char)0x74,  /* [3609] */
    (xdc_Char)0x72,  /* [3610] */
    (xdc_Char)0x75,  /* [3611] */
    (xdc_Char)0x63,  /* [3612] */
    (xdc_Char)0x74,  /* [3613] */
    (xdc_Char)0x3a,  /* [3614] */
    (xdc_Char)0x20,  /* [3615] */
    (xdc_Char)0x25,  /* [3616] */
    (xdc_Char)0x70,  /* [3617] */
    (xdc_Char)0x28,  /* [3618] */
    (xdc_Char)0x27,  /* [3619] */
    (xdc_Char)0x25,  /* [3620] */
    (xdc_Char)0x73,  /* [3621] */
    (xdc_Char)0x27,  /* [3622] */
    (xdc_Char)0x29,  /* [3623] */
    (xdc_Char)0x0,  /* [3624] */
    (xdc_Char)0x3c,  /* [3625] */
    (xdc_Char)0x2d,  /* [3626] */
    (xdc_Char)0x2d,  /* [3627] */
    (xdc_Char)0x20,  /* [3628] */
    (xdc_Char)0x63,  /* [3629] */
    (xdc_Char)0x72,  /* [3630] */
    (xdc_Char)0x65,  /* [3631] */
    (xdc_Char)0x61,  /* [3632] */
    (xdc_Char)0x74,  /* [3633] */
    (xdc_Char)0x65,  /* [3634] */
    (xdc_Char)0x3a,  /* [3635] */
    (xdc_Char)0x20,  /* [3636] */
    (xdc_Char)0x25,  /* [3637] */
    (xdc_Char)0x70,  /* [3638] */
    (xdc_Char)0x28,  /* [3639] */
    (xdc_Char)0x27,  /* [3640] */
    (xdc_Char)0x25,  /* [3641] */
    (xdc_Char)0x73,  /* [3642] */
    (xdc_Char)0x27,  /* [3643] */
    (xdc_Char)0x29,  /* [3644] */
    (xdc_Char)0x0,  /* [3645] */
    (xdc_Char)0x2d,  /* [3646] */
    (xdc_Char)0x2d,  /* [3647] */
    (xdc_Char)0x3e,  /* [3648] */
    (xdc_Char)0x20,  /* [3649] */
    (xdc_Char)0x64,  /* [3650] */
    (xdc_Char)0x65,  /* [3651] */
    (xdc_Char)0x73,  /* [3652] */
    (xdc_Char)0x74,  /* [3653] */
    (xdc_Char)0x72,  /* [3654] */
    (xdc_Char)0x75,  /* [3655] */
    (xdc_Char)0x63,  /* [3656] */
    (xdc_Char)0x74,  /* [3657] */
    (xdc_Char)0x3a,  /* [3658] */
    (xdc_Char)0x20,  /* [3659] */
    (xdc_Char)0x28,  /* [3660] */
    (xdc_Char)0x25,  /* [3661] */
    (xdc_Char)0x70,  /* [3662] */
    (xdc_Char)0x29,  /* [3663] */
    (xdc_Char)0x0,  /* [3664] */
    (xdc_Char)0x2d,  /* [3665] */
    (xdc_Char)0x2d,  /* [3666] */
    (xdc_Char)0x3e,  /* [3667] */
    (xdc_Char)0x20,  /* [3668] */
    (xdc_Char)0x64,  /* [3669] */
    (xdc_Char)0x65,  /* [3670] */
    (xdc_Char)0x6c,  /* [3671] */
    (xdc_Char)0x65,  /* [3672] */
    (xdc_Char)0x74,  /* [3673] */
    (xdc_Char)0x65,  /* [3674] */
    (xdc_Char)0x3a,  /* [3675] */
    (xdc_Char)0x20,  /* [3676] */
    (xdc_Char)0x28,  /* [3677] */
    (xdc_Char)0x25,  /* [3678] */
    (xdc_Char)0x70,  /* [3679] */
    (xdc_Char)0x29,  /* [3680] */
    (xdc_Char)0x0,  /* [3681] */
    (xdc_Char)0x45,  /* [3682] */
    (xdc_Char)0x52,  /* [3683] */
    (xdc_Char)0x52,  /* [3684] */
    (xdc_Char)0x4f,  /* [3685] */
    (xdc_Char)0x52,  /* [3686] */
    (xdc_Char)0x3a,  /* [3687] */
    (xdc_Char)0x20,  /* [3688] */
    (xdc_Char)0x25,  /* [3689] */
    (xdc_Char)0x24,  /* [3690] */
    (xdc_Char)0x46,  /* [3691] */
    (xdc_Char)0x25,  /* [3692] */
    (xdc_Char)0x24,  /* [3693] */
    (xdc_Char)0x53,  /* [3694] */
    (xdc_Char)0x0,  /* [3695] */
    (xdc_Char)0x57,  /* [3696] */
    (xdc_Char)0x41,  /* [3697] */
    (xdc_Char)0x52,  /* [3698] */
    (xdc_Char)0x4e,  /* [3699] */
    (xdc_Char)0x49,  /* [3700] */
    (xdc_Char)0x4e,  /* [3701] */
    (xdc_Char)0x47,  /* [3702] */
    (xdc_Char)0x3a,  /* [3703] */
    (xdc_Char)0x20,  /* [3704] */
    (xdc_Char)0x25,  /* [3705] */
    (xdc_Char)0x24,  /* [3706] */
    (xdc_Char)0x46,  /* [3707] */
    (xdc_Char)0x25,  /* [3708] */
    (xdc_Char)0x24,  /* [3709] */
    (xdc_Char)0x53,  /* [3710] */
    (xdc_Char)0x0,  /* [3711] */
    (xdc_Char)0x25,  /* [3712] */
    (xdc_Char)0x24,  /* [3713] */
    (xdc_Char)0x46,  /* [3714] */
    (xdc_Char)0x25,  /* [3715] */
    (xdc_Char)0x24,  /* [3716] */
    (xdc_Char)0x53,  /* [3717] */
    (xdc_Char)0x0,  /* [3718] */
    (xdc_Char)0x53,  /* [3719] */
    (xdc_Char)0x74,  /* [3720] */
    (xdc_Char)0x61,  /* [3721] */
    (xdc_Char)0x72,  /* [3722] */
    (xdc_Char)0x74,  /* [3723] */
    (xdc_Char)0x3a,  /* [3724] */
    (xdc_Char)0x20,  /* [3725] */
    (xdc_Char)0x25,  /* [3726] */
    (xdc_Char)0x24,  /* [3727] */
    (xdc_Char)0x53,  /* [3728] */
    (xdc_Char)0x0,  /* [3729] */
    (xdc_Char)0x53,  /* [3730] */
    (xdc_Char)0x74,  /* [3731] */
    (xdc_Char)0x6f,  /* [3732] */
    (xdc_Char)0x70,  /* [3733] */
    (xdc_Char)0x3a,  /* [3734] */
    (xdc_Char)0x20,  /* [3735] */
    (xdc_Char)0x25,  /* [3736] */
    (xdc_Char)0x24,  /* [3737] */
    (xdc_Char)0x53,  /* [3738] */
    (xdc_Char)0x0,  /* [3739] */
    (xdc_Char)0x53,  /* [3740] */
    (xdc_Char)0x74,  /* [3741] */
    (xdc_Char)0x61,  /* [3742] */
    (xdc_Char)0x72,  /* [3743] */
    (xdc_Char)0x74,  /* [3744] */
    (xdc_Char)0x49,  /* [3745] */
    (xdc_Char)0x6e,  /* [3746] */
    (xdc_Char)0x73,  /* [3747] */
    (xdc_Char)0x74,  /* [3748] */
    (xdc_Char)0x61,  /* [3749] */
    (xdc_Char)0x6e,  /* [3750] */
    (xdc_Char)0x63,  /* [3751] */
    (xdc_Char)0x65,  /* [3752] */
    (xdc_Char)0x3a,  /* [3753] */
    (xdc_Char)0x20,  /* [3754] */
    (xdc_Char)0x25,  /* [3755] */
    (xdc_Char)0x24,  /* [3756] */
    (xdc_Char)0x53,  /* [3757] */
    (xdc_Char)0x0,  /* [3758] */
    (xdc_Char)0x53,  /* [3759] */
    (xdc_Char)0x74,  /* [3760] */
    (xdc_Char)0x6f,  /* [3761] */
    (xdc_Char)0x70,  /* [3762] */
    (xdc_Char)0x49,  /* [3763] */
    (xdc_Char)0x6e,  /* [3764] */
    (xdc_Char)0x73,  /* [3765] */
    (xdc_Char)0x74,  /* [3766] */
    (xdc_Char)0x61,  /* [3767] */
    (xdc_Char)0x6e,  /* [3768] */
    (xdc_Char)0x63,  /* [3769] */
    (xdc_Char)0x65,  /* [3770] */
    (xdc_Char)0x3a,  /* [3771] */
    (xdc_Char)0x20,  /* [3772] */
    (xdc_Char)0x25,  /* [3773] */
    (xdc_Char)0x24,  /* [3774] */
    (xdc_Char)0x53,  /* [3775] */
    (xdc_Char)0x0,  /* [3776] */
    (xdc_Char)0x4c,  /* [3777] */
    (xdc_Char)0x4d,  /* [3778] */
    (xdc_Char)0x5f,  /* [3779] */
    (xdc_Char)0x62,  /* [3780] */
    (xdc_Char)0x65,  /* [3781] */
    (xdc_Char)0x67,  /* [3782] */
    (xdc_Char)0x69,  /* [3783] */
    (xdc_Char)0x6e,  /* [3784] */
    (xdc_Char)0x3a,  /* [3785] */
    (xdc_Char)0x20,  /* [3786] */
    (xdc_Char)0x68,  /* [3787] */
    (xdc_Char)0x77,  /* [3788] */
    (xdc_Char)0x69,  /* [3789] */
    (xdc_Char)0x3a,  /* [3790] */
    (xdc_Char)0x20,  /* [3791] */
    (xdc_Char)0x30,  /* [3792] */
    (xdc_Char)0x78,  /* [3793] */
    (xdc_Char)0x25,  /* [3794] */
    (xdc_Char)0x78,  /* [3795] */
    (xdc_Char)0x2c,  /* [3796] */
    (xdc_Char)0x20,  /* [3797] */
    (xdc_Char)0x66,  /* [3798] */
    (xdc_Char)0x75,  /* [3799] */
    (xdc_Char)0x6e,  /* [3800] */
    (xdc_Char)0x63,  /* [3801] */
    (xdc_Char)0x3a,  /* [3802] */
    (xdc_Char)0x20,  /* [3803] */
    (xdc_Char)0x30,  /* [3804] */
    (xdc_Char)0x78,  /* [3805] */
    (xdc_Char)0x25,  /* [3806] */
    (xdc_Char)0x78,  /* [3807] */
    (xdc_Char)0x2c,  /* [3808] */
    (xdc_Char)0x20,  /* [3809] */
    (xdc_Char)0x70,  /* [3810] */
    (xdc_Char)0x72,  /* [3811] */
    (xdc_Char)0x65,  /* [3812] */
    (xdc_Char)0x54,  /* [3813] */
    (xdc_Char)0x68,  /* [3814] */
    (xdc_Char)0x72,  /* [3815] */
    (xdc_Char)0x65,  /* [3816] */
    (xdc_Char)0x61,  /* [3817] */
    (xdc_Char)0x64,  /* [3818] */
    (xdc_Char)0x3a,  /* [3819] */
    (xdc_Char)0x20,  /* [3820] */
    (xdc_Char)0x25,  /* [3821] */
    (xdc_Char)0x64,  /* [3822] */
    (xdc_Char)0x2c,  /* [3823] */
    (xdc_Char)0x20,  /* [3824] */
    (xdc_Char)0x69,  /* [3825] */
    (xdc_Char)0x6e,  /* [3826] */
    (xdc_Char)0x74,  /* [3827] */
    (xdc_Char)0x4e,  /* [3828] */
    (xdc_Char)0x75,  /* [3829] */
    (xdc_Char)0x6d,  /* [3830] */
    (xdc_Char)0x3a,  /* [3831] */
    (xdc_Char)0x20,  /* [3832] */
    (xdc_Char)0x25,  /* [3833] */
    (xdc_Char)0x64,  /* [3834] */
    (xdc_Char)0x2c,  /* [3835] */
    (xdc_Char)0x20,  /* [3836] */
    (xdc_Char)0x69,  /* [3837] */
    (xdc_Char)0x72,  /* [3838] */
    (xdc_Char)0x70,  /* [3839] */
    (xdc_Char)0x3a,  /* [3840] */
    (xdc_Char)0x20,  /* [3841] */
    (xdc_Char)0x30,  /* [3842] */
    (xdc_Char)0x78,  /* [3843] */
    (xdc_Char)0x25,  /* [3844] */
    (xdc_Char)0x78,  /* [3845] */
    (xdc_Char)0x0,  /* [3846] */
    (xdc_Char)0x4c,  /* [3847] */
    (xdc_Char)0x44,  /* [3848] */
    (xdc_Char)0x5f,  /* [3849] */
    (xdc_Char)0x65,  /* [3850] */
    (xdc_Char)0x6e,  /* [3851] */
    (xdc_Char)0x64,  /* [3852] */
    (xdc_Char)0x3a,  /* [3853] */
    (xdc_Char)0x20,  /* [3854] */
    (xdc_Char)0x68,  /* [3855] */
    (xdc_Char)0x77,  /* [3856] */
    (xdc_Char)0x69,  /* [3857] */
    (xdc_Char)0x3a,  /* [3858] */
    (xdc_Char)0x20,  /* [3859] */
    (xdc_Char)0x30,  /* [3860] */
    (xdc_Char)0x78,  /* [3861] */
    (xdc_Char)0x25,  /* [3862] */
    (xdc_Char)0x78,  /* [3863] */
    (xdc_Char)0x0,  /* [3864] */
    (xdc_Char)0x4c,  /* [3865] */
    (xdc_Char)0x57,  /* [3866] */
    (xdc_Char)0x5f,  /* [3867] */
    (xdc_Char)0x64,  /* [3868] */
    (xdc_Char)0x65,  /* [3869] */
    (xdc_Char)0x6c,  /* [3870] */
    (xdc_Char)0x61,  /* [3871] */
    (xdc_Char)0x79,  /* [3872] */
    (xdc_Char)0x65,  /* [3873] */
    (xdc_Char)0x64,  /* [3874] */
    (xdc_Char)0x3a,  /* [3875] */
    (xdc_Char)0x20,  /* [3876] */
    (xdc_Char)0x64,  /* [3877] */
    (xdc_Char)0x65,  /* [3878] */
    (xdc_Char)0x6c,  /* [3879] */
    (xdc_Char)0x61,  /* [3880] */
    (xdc_Char)0x79,  /* [3881] */
    (xdc_Char)0x3a,  /* [3882] */
    (xdc_Char)0x20,  /* [3883] */
    (xdc_Char)0x25,  /* [3884] */
    (xdc_Char)0x64,  /* [3885] */
    (xdc_Char)0x0,  /* [3886] */
    (xdc_Char)0x4c,  /* [3887] */
    (xdc_Char)0x4d,  /* [3888] */
    (xdc_Char)0x5f,  /* [3889] */
    (xdc_Char)0x74,  /* [3890] */
    (xdc_Char)0x69,  /* [3891] */
    (xdc_Char)0x63,  /* [3892] */
    (xdc_Char)0x6b,  /* [3893] */
    (xdc_Char)0x3a,  /* [3894] */
    (xdc_Char)0x20,  /* [3895] */
    (xdc_Char)0x74,  /* [3896] */
    (xdc_Char)0x69,  /* [3897] */
    (xdc_Char)0x63,  /* [3898] */
    (xdc_Char)0x6b,  /* [3899] */
    (xdc_Char)0x3a,  /* [3900] */
    (xdc_Char)0x20,  /* [3901] */
    (xdc_Char)0x25,  /* [3902] */
    (xdc_Char)0x64,  /* [3903] */
    (xdc_Char)0x0,  /* [3904] */
    (xdc_Char)0x4c,  /* [3905] */
    (xdc_Char)0x4d,  /* [3906] */
    (xdc_Char)0x5f,  /* [3907] */
    (xdc_Char)0x62,  /* [3908] */
    (xdc_Char)0x65,  /* [3909] */
    (xdc_Char)0x67,  /* [3910] */
    (xdc_Char)0x69,  /* [3911] */
    (xdc_Char)0x6e,  /* [3912] */
    (xdc_Char)0x3a,  /* [3913] */
    (xdc_Char)0x20,  /* [3914] */
    (xdc_Char)0x63,  /* [3915] */
    (xdc_Char)0x6c,  /* [3916] */
    (xdc_Char)0x6b,  /* [3917] */
    (xdc_Char)0x3a,  /* [3918] */
    (xdc_Char)0x20,  /* [3919] */
    (xdc_Char)0x30,  /* [3920] */
    (xdc_Char)0x78,  /* [3921] */
    (xdc_Char)0x25,  /* [3922] */
    (xdc_Char)0x78,  /* [3923] */
    (xdc_Char)0x2c,  /* [3924] */
    (xdc_Char)0x20,  /* [3925] */
    (xdc_Char)0x66,  /* [3926] */
    (xdc_Char)0x75,  /* [3927] */
    (xdc_Char)0x6e,  /* [3928] */
    (xdc_Char)0x63,  /* [3929] */
    (xdc_Char)0x3a,  /* [3930] */
    (xdc_Char)0x20,  /* [3931] */
    (xdc_Char)0x30,  /* [3932] */
    (xdc_Char)0x78,  /* [3933] */
    (xdc_Char)0x25,  /* [3934] */
    (xdc_Char)0x78,  /* [3935] */
    (xdc_Char)0x0,  /* [3936] */
    (xdc_Char)0x4c,  /* [3937] */
    (xdc_Char)0x4d,  /* [3938] */
    (xdc_Char)0x5f,  /* [3939] */
    (xdc_Char)0x70,  /* [3940] */
    (xdc_Char)0x6f,  /* [3941] */
    (xdc_Char)0x73,  /* [3942] */
    (xdc_Char)0x74,  /* [3943] */
    (xdc_Char)0x3a,  /* [3944] */
    (xdc_Char)0x20,  /* [3945] */
    (xdc_Char)0x73,  /* [3946] */
    (xdc_Char)0x65,  /* [3947] */
    (xdc_Char)0x6d,  /* [3948] */
    (xdc_Char)0x3a,  /* [3949] */
    (xdc_Char)0x20,  /* [3950] */
    (xdc_Char)0x30,  /* [3951] */
    (xdc_Char)0x78,  /* [3952] */
    (xdc_Char)0x25,  /* [3953] */
    (xdc_Char)0x78,  /* [3954] */
    (xdc_Char)0x2c,  /* [3955] */
    (xdc_Char)0x20,  /* [3956] */
    (xdc_Char)0x63,  /* [3957] */
    (xdc_Char)0x6f,  /* [3958] */
    (xdc_Char)0x75,  /* [3959] */
    (xdc_Char)0x6e,  /* [3960] */
    (xdc_Char)0x74,  /* [3961] */
    (xdc_Char)0x3a,  /* [3962] */
    (xdc_Char)0x20,  /* [3963] */
    (xdc_Char)0x25,  /* [3964] */
    (xdc_Char)0x64,  /* [3965] */
    (xdc_Char)0x0,  /* [3966] */
    (xdc_Char)0x4c,  /* [3967] */
    (xdc_Char)0x4d,  /* [3968] */
    (xdc_Char)0x5f,  /* [3969] */
    (xdc_Char)0x70,  /* [3970] */
    (xdc_Char)0x65,  /* [3971] */
    (xdc_Char)0x6e,  /* [3972] */
    (xdc_Char)0x64,  /* [3973] */
    (xdc_Char)0x3a,  /* [3974] */
    (xdc_Char)0x20,  /* [3975] */
    (xdc_Char)0x73,  /* [3976] */
    (xdc_Char)0x65,  /* [3977] */
    (xdc_Char)0x6d,  /* [3978] */
    (xdc_Char)0x3a,  /* [3979] */
    (xdc_Char)0x20,  /* [3980] */
    (xdc_Char)0x30,  /* [3981] */
    (xdc_Char)0x78,  /* [3982] */
    (xdc_Char)0x25,  /* [3983] */
    (xdc_Char)0x78,  /* [3984] */
    (xdc_Char)0x2c,  /* [3985] */
    (xdc_Char)0x20,  /* [3986] */
    (xdc_Char)0x63,  /* [3987] */
    (xdc_Char)0x6f,  /* [3988] */
    (xdc_Char)0x75,  /* [3989] */
    (xdc_Char)0x6e,  /* [3990] */
    (xdc_Char)0x74,  /* [3991] */
    (xdc_Char)0x3a,  /* [3992] */
    (xdc_Char)0x20,  /* [3993] */
    (xdc_Char)0x25,  /* [3994] */
    (xdc_Char)0x64,  /* [3995] */
    (xdc_Char)0x2c,  /* [3996] */
    (xdc_Char)0x20,  /* [3997] */
    (xdc_Char)0x74,  /* [3998] */
    (xdc_Char)0x69,  /* [3999] */
    (xdc_Char)0x6d,  /* [4000] */
    (xdc_Char)0x65,  /* [4001] */
    (xdc_Char)0x6f,  /* [4002] */
    (xdc_Char)0x75,  /* [4003] */
    (xdc_Char)0x74,  /* [4004] */
    (xdc_Char)0x3a,  /* [4005] */
    (xdc_Char)0x20,  /* [4006] */
    (xdc_Char)0x25,  /* [4007] */
    (xdc_Char)0x64,  /* [4008] */
    (xdc_Char)0x0,  /* [4009] */
    (xdc_Char)0x4c,  /* [4010] */
    (xdc_Char)0x4d,  /* [4011] */
    (xdc_Char)0x5f,  /* [4012] */
    (xdc_Char)0x62,  /* [4013] */
    (xdc_Char)0x65,  /* [4014] */
    (xdc_Char)0x67,  /* [4015] */
    (xdc_Char)0x69,  /* [4016] */
    (xdc_Char)0x6e,  /* [4017] */
    (xdc_Char)0x3a,  /* [4018] */
    (xdc_Char)0x20,  /* [4019] */
    (xdc_Char)0x73,  /* [4020] */
    (xdc_Char)0x77,  /* [4021] */
    (xdc_Char)0x69,  /* [4022] */
    (xdc_Char)0x3a,  /* [4023] */
    (xdc_Char)0x20,  /* [4024] */
    (xdc_Char)0x30,  /* [4025] */
    (xdc_Char)0x78,  /* [4026] */
    (xdc_Char)0x25,  /* [4027] */
    (xdc_Char)0x78,  /* [4028] */
    (xdc_Char)0x2c,  /* [4029] */
    (xdc_Char)0x20,  /* [4030] */
    (xdc_Char)0x66,  /* [4031] */
    (xdc_Char)0x75,  /* [4032] */
    (xdc_Char)0x6e,  /* [4033] */
    (xdc_Char)0x63,  /* [4034] */
    (xdc_Char)0x3a,  /* [4035] */
    (xdc_Char)0x20,  /* [4036] */
    (xdc_Char)0x30,  /* [4037] */
    (xdc_Char)0x78,  /* [4038] */
    (xdc_Char)0x25,  /* [4039] */
    (xdc_Char)0x78,  /* [4040] */
    (xdc_Char)0x2c,  /* [4041] */
    (xdc_Char)0x20,  /* [4042] */
    (xdc_Char)0x70,  /* [4043] */
    (xdc_Char)0x72,  /* [4044] */
    (xdc_Char)0x65,  /* [4045] */
    (xdc_Char)0x54,  /* [4046] */
    (xdc_Char)0x68,  /* [4047] */
    (xdc_Char)0x72,  /* [4048] */
    (xdc_Char)0x65,  /* [4049] */
    (xdc_Char)0x61,  /* [4050] */
    (xdc_Char)0x64,  /* [4051] */
    (xdc_Char)0x3a,  /* [4052] */
    (xdc_Char)0x20,  /* [4053] */
    (xdc_Char)0x25,  /* [4054] */
    (xdc_Char)0x64,  /* [4055] */
    (xdc_Char)0x0,  /* [4056] */
    (xdc_Char)0x4c,  /* [4057] */
    (xdc_Char)0x44,  /* [4058] */
    (xdc_Char)0x5f,  /* [4059] */
    (xdc_Char)0x65,  /* [4060] */
    (xdc_Char)0x6e,  /* [4061] */
    (xdc_Char)0x64,  /* [4062] */
    (xdc_Char)0x3a,  /* [4063] */
    (xdc_Char)0x20,  /* [4064] */
    (xdc_Char)0x73,  /* [4065] */
    (xdc_Char)0x77,  /* [4066] */
    (xdc_Char)0x69,  /* [4067] */
    (xdc_Char)0x3a,  /* [4068] */
    (xdc_Char)0x20,  /* [4069] */
    (xdc_Char)0x30,  /* [4070] */
    (xdc_Char)0x78,  /* [4071] */
    (xdc_Char)0x25,  /* [4072] */
    (xdc_Char)0x78,  /* [4073] */
    (xdc_Char)0x0,  /* [4074] */
    (xdc_Char)0x4c,  /* [4075] */
    (xdc_Char)0x4d,  /* [4076] */
    (xdc_Char)0x5f,  /* [4077] */
    (xdc_Char)0x70,  /* [4078] */
    (xdc_Char)0x6f,  /* [4079] */
    (xdc_Char)0x73,  /* [4080] */
    (xdc_Char)0x74,  /* [4081] */
    (xdc_Char)0x3a,  /* [4082] */
    (xdc_Char)0x20,  /* [4083] */
    (xdc_Char)0x73,  /* [4084] */
    (xdc_Char)0x77,  /* [4085] */
    (xdc_Char)0x69,  /* [4086] */
    (xdc_Char)0x3a,  /* [4087] */
    (xdc_Char)0x20,  /* [4088] */
    (xdc_Char)0x30,  /* [4089] */
    (xdc_Char)0x78,  /* [4090] */
    (xdc_Char)0x25,  /* [4091] */
    (xdc_Char)0x78,  /* [4092] */
    (xdc_Char)0x2c,  /* [4093] */
    (xdc_Char)0x20,  /* [4094] */
    (xdc_Char)0x66,  /* [4095] */
    (xdc_Char)0x75,  /* [4096] */
    (xdc_Char)0x6e,  /* [4097] */
    (xdc_Char)0x63,  /* [4098] */
    (xdc_Char)0x3a,  /* [4099] */
    (xdc_Char)0x20,  /* [4100] */
    (xdc_Char)0x30,  /* [4101] */
    (xdc_Char)0x78,  /* [4102] */
    (xdc_Char)0x25,  /* [4103] */
    (xdc_Char)0x78,  /* [4104] */
    (xdc_Char)0x2c,  /* [4105] */
    (xdc_Char)0x20,  /* [4106] */
    (xdc_Char)0x70,  /* [4107] */
    (xdc_Char)0x72,  /* [4108] */
    (xdc_Char)0x69,  /* [4109] */
    (xdc_Char)0x3a,  /* [4110] */
    (xdc_Char)0x20,  /* [4111] */
    (xdc_Char)0x25,  /* [4112] */
    (xdc_Char)0x64,  /* [4113] */
    (xdc_Char)0x0,  /* [4114] */
    (xdc_Char)0x4c,  /* [4115] */
    (xdc_Char)0x4d,  /* [4116] */
    (xdc_Char)0x5f,  /* [4117] */
    (xdc_Char)0x73,  /* [4118] */
    (xdc_Char)0x77,  /* [4119] */
    (xdc_Char)0x69,  /* [4120] */
    (xdc_Char)0x74,  /* [4121] */
    (xdc_Char)0x63,  /* [4122] */
    (xdc_Char)0x68,  /* [4123] */
    (xdc_Char)0x3a,  /* [4124] */
    (xdc_Char)0x20,  /* [4125] */
    (xdc_Char)0x6f,  /* [4126] */
    (xdc_Char)0x6c,  /* [4127] */
    (xdc_Char)0x64,  /* [4128] */
    (xdc_Char)0x74,  /* [4129] */
    (xdc_Char)0x73,  /* [4130] */
    (xdc_Char)0x6b,  /* [4131] */
    (xdc_Char)0x3a,  /* [4132] */
    (xdc_Char)0x20,  /* [4133] */
    (xdc_Char)0x30,  /* [4134] */
    (xdc_Char)0x78,  /* [4135] */
    (xdc_Char)0x25,  /* [4136] */
    (xdc_Char)0x78,  /* [4137] */
    (xdc_Char)0x2c,  /* [4138] */
    (xdc_Char)0x20,  /* [4139] */
    (xdc_Char)0x6f,  /* [4140] */
    (xdc_Char)0x6c,  /* [4141] */
    (xdc_Char)0x64,  /* [4142] */
    (xdc_Char)0x66,  /* [4143] */
    (xdc_Char)0x75,  /* [4144] */
    (xdc_Char)0x6e,  /* [4145] */
    (xdc_Char)0x63,  /* [4146] */
    (xdc_Char)0x3a,  /* [4147] */
    (xdc_Char)0x20,  /* [4148] */
    (xdc_Char)0x30,  /* [4149] */
    (xdc_Char)0x78,  /* [4150] */
    (xdc_Char)0x25,  /* [4151] */
    (xdc_Char)0x78,  /* [4152] */
    (xdc_Char)0x2c,  /* [4153] */
    (xdc_Char)0x20,  /* [4154] */
    (xdc_Char)0x6e,  /* [4155] */
    (xdc_Char)0x65,  /* [4156] */
    (xdc_Char)0x77,  /* [4157] */
    (xdc_Char)0x74,  /* [4158] */
    (xdc_Char)0x73,  /* [4159] */
    (xdc_Char)0x6b,  /* [4160] */
    (xdc_Char)0x3a,  /* [4161] */
    (xdc_Char)0x20,  /* [4162] */
    (xdc_Char)0x30,  /* [4163] */
    (xdc_Char)0x78,  /* [4164] */
    (xdc_Char)0x25,  /* [4165] */
    (xdc_Char)0x78,  /* [4166] */
    (xdc_Char)0x2c,  /* [4167] */
    (xdc_Char)0x20,  /* [4168] */
    (xdc_Char)0x6e,  /* [4169] */
    (xdc_Char)0x65,  /* [4170] */
    (xdc_Char)0x77,  /* [4171] */
    (xdc_Char)0x66,  /* [4172] */
    (xdc_Char)0x75,  /* [4173] */
    (xdc_Char)0x6e,  /* [4174] */
    (xdc_Char)0x63,  /* [4175] */
    (xdc_Char)0x3a,  /* [4176] */
    (xdc_Char)0x20,  /* [4177] */
    (xdc_Char)0x30,  /* [4178] */
    (xdc_Char)0x78,  /* [4179] */
    (xdc_Char)0x25,  /* [4180] */
    (xdc_Char)0x78,  /* [4181] */
    (xdc_Char)0x0,  /* [4182] */
    (xdc_Char)0x4c,  /* [4183] */
    (xdc_Char)0x4d,  /* [4184] */
    (xdc_Char)0x5f,  /* [4185] */
    (xdc_Char)0x73,  /* [4186] */
    (xdc_Char)0x6c,  /* [4187] */
    (xdc_Char)0x65,  /* [4188] */
    (xdc_Char)0x65,  /* [4189] */
    (xdc_Char)0x70,  /* [4190] */
    (xdc_Char)0x3a,  /* [4191] */
    (xdc_Char)0x20,  /* [4192] */
    (xdc_Char)0x74,  /* [4193] */
    (xdc_Char)0x73,  /* [4194] */
    (xdc_Char)0x6b,  /* [4195] */
    (xdc_Char)0x3a,  /* [4196] */
    (xdc_Char)0x20,  /* [4197] */
    (xdc_Char)0x30,  /* [4198] */
    (xdc_Char)0x78,  /* [4199] */
    (xdc_Char)0x25,  /* [4200] */
    (xdc_Char)0x78,  /* [4201] */
    (xdc_Char)0x2c,  /* [4202] */
    (xdc_Char)0x20,  /* [4203] */
    (xdc_Char)0x66,  /* [4204] */
    (xdc_Char)0x75,  /* [4205] */
    (xdc_Char)0x6e,  /* [4206] */
    (xdc_Char)0x63,  /* [4207] */
    (xdc_Char)0x3a,  /* [4208] */
    (xdc_Char)0x20,  /* [4209] */
    (xdc_Char)0x30,  /* [4210] */
    (xdc_Char)0x78,  /* [4211] */
    (xdc_Char)0x25,  /* [4212] */
    (xdc_Char)0x78,  /* [4213] */
    (xdc_Char)0x2c,  /* [4214] */
    (xdc_Char)0x20,  /* [4215] */
    (xdc_Char)0x74,  /* [4216] */
    (xdc_Char)0x69,  /* [4217] */
    (xdc_Char)0x6d,  /* [4218] */
    (xdc_Char)0x65,  /* [4219] */
    (xdc_Char)0x6f,  /* [4220] */
    (xdc_Char)0x75,  /* [4221] */
    (xdc_Char)0x74,  /* [4222] */
    (xdc_Char)0x3a,  /* [4223] */
    (xdc_Char)0x20,  /* [4224] */
    (xdc_Char)0x25,  /* [4225] */
    (xdc_Char)0x64,  /* [4226] */
    (xdc_Char)0x0,  /* [4227] */
    (xdc_Char)0x4c,  /* [4228] */
    (xdc_Char)0x44,  /* [4229] */
    (xdc_Char)0x5f,  /* [4230] */
    (xdc_Char)0x72,  /* [4231] */
    (xdc_Char)0x65,  /* [4232] */
    (xdc_Char)0x61,  /* [4233] */
    (xdc_Char)0x64,  /* [4234] */
    (xdc_Char)0x79,  /* [4235] */
    (xdc_Char)0x3a,  /* [4236] */
    (xdc_Char)0x20,  /* [4237] */
    (xdc_Char)0x74,  /* [4238] */
    (xdc_Char)0x73,  /* [4239] */
    (xdc_Char)0x6b,  /* [4240] */
    (xdc_Char)0x3a,  /* [4241] */
    (xdc_Char)0x20,  /* [4242] */
    (xdc_Char)0x30,  /* [4243] */
    (xdc_Char)0x78,  /* [4244] */
    (xdc_Char)0x25,  /* [4245] */
    (xdc_Char)0x78,  /* [4246] */
    (xdc_Char)0x2c,  /* [4247] */
    (xdc_Char)0x20,  /* [4248] */
    (xdc_Char)0x66,  /* [4249] */
    (xdc_Char)0x75,  /* [4250] */
    (xdc_Char)0x6e,  /* [4251] */
    (xdc_Char)0x63,  /* [4252] */
    (xdc_Char)0x3a,  /* [4253] */
    (xdc_Char)0x20,  /* [4254] */
    (xdc_Char)0x30,  /* [4255] */
    (xdc_Char)0x78,  /* [4256] */
    (xdc_Char)0x25,  /* [4257] */
    (xdc_Char)0x78,  /* [4258] */
    (xdc_Char)0x2c,  /* [4259] */
    (xdc_Char)0x20,  /* [4260] */
    (xdc_Char)0x70,  /* [4261] */
    (xdc_Char)0x72,  /* [4262] */
    (xdc_Char)0x69,  /* [4263] */
    (xdc_Char)0x3a,  /* [4264] */
    (xdc_Char)0x20,  /* [4265] */
    (xdc_Char)0x25,  /* [4266] */
    (xdc_Char)0x64,  /* [4267] */
    (xdc_Char)0x0,  /* [4268] */
    (xdc_Char)0x4c,  /* [4269] */
    (xdc_Char)0x44,  /* [4270] */
    (xdc_Char)0x5f,  /* [4271] */
    (xdc_Char)0x62,  /* [4272] */
    (xdc_Char)0x6c,  /* [4273] */
    (xdc_Char)0x6f,  /* [4274] */
    (xdc_Char)0x63,  /* [4275] */
    (xdc_Char)0x6b,  /* [4276] */
    (xdc_Char)0x3a,  /* [4277] */
    (xdc_Char)0x20,  /* [4278] */
    (xdc_Char)0x74,  /* [4279] */
    (xdc_Char)0x73,  /* [4280] */
    (xdc_Char)0x6b,  /* [4281] */
    (xdc_Char)0x3a,  /* [4282] */
    (xdc_Char)0x20,  /* [4283] */
    (xdc_Char)0x30,  /* [4284] */
    (xdc_Char)0x78,  /* [4285] */
    (xdc_Char)0x25,  /* [4286] */
    (xdc_Char)0x78,  /* [4287] */
    (xdc_Char)0x2c,  /* [4288] */
    (xdc_Char)0x20,  /* [4289] */
    (xdc_Char)0x66,  /* [4290] */
    (xdc_Char)0x75,  /* [4291] */
    (xdc_Char)0x6e,  /* [4292] */
    (xdc_Char)0x63,  /* [4293] */
    (xdc_Char)0x3a,  /* [4294] */
    (xdc_Char)0x20,  /* [4295] */
    (xdc_Char)0x30,  /* [4296] */
    (xdc_Char)0x78,  /* [4297] */
    (xdc_Char)0x25,  /* [4298] */
    (xdc_Char)0x78,  /* [4299] */
    (xdc_Char)0x0,  /* [4300] */
    (xdc_Char)0x4c,  /* [4301] */
    (xdc_Char)0x4d,  /* [4302] */
    (xdc_Char)0x5f,  /* [4303] */
    (xdc_Char)0x79,  /* [4304] */
    (xdc_Char)0x69,  /* [4305] */
    (xdc_Char)0x65,  /* [4306] */
    (xdc_Char)0x6c,  /* [4307] */
    (xdc_Char)0x64,  /* [4308] */
    (xdc_Char)0x3a,  /* [4309] */
    (xdc_Char)0x20,  /* [4310] */
    (xdc_Char)0x74,  /* [4311] */
    (xdc_Char)0x73,  /* [4312] */
    (xdc_Char)0x6b,  /* [4313] */
    (xdc_Char)0x3a,  /* [4314] */
    (xdc_Char)0x20,  /* [4315] */
    (xdc_Char)0x30,  /* [4316] */
    (xdc_Char)0x78,  /* [4317] */
    (xdc_Char)0x25,  /* [4318] */
    (xdc_Char)0x78,  /* [4319] */
    (xdc_Char)0x2c,  /* [4320] */
    (xdc_Char)0x20,  /* [4321] */
    (xdc_Char)0x66,  /* [4322] */
    (xdc_Char)0x75,  /* [4323] */
    (xdc_Char)0x6e,  /* [4324] */
    (xdc_Char)0x63,  /* [4325] */
    (xdc_Char)0x3a,  /* [4326] */
    (xdc_Char)0x20,  /* [4327] */
    (xdc_Char)0x30,  /* [4328] */
    (xdc_Char)0x78,  /* [4329] */
    (xdc_Char)0x25,  /* [4330] */
    (xdc_Char)0x78,  /* [4331] */
    (xdc_Char)0x2c,  /* [4332] */
    (xdc_Char)0x20,  /* [4333] */
    (xdc_Char)0x63,  /* [4334] */
    (xdc_Char)0x75,  /* [4335] */
    (xdc_Char)0x72,  /* [4336] */
    (xdc_Char)0x72,  /* [4337] */
    (xdc_Char)0x54,  /* [4338] */
    (xdc_Char)0x68,  /* [4339] */
    (xdc_Char)0x72,  /* [4340] */
    (xdc_Char)0x65,  /* [4341] */
    (xdc_Char)0x61,  /* [4342] */
    (xdc_Char)0x64,  /* [4343] */
    (xdc_Char)0x3a,  /* [4344] */
    (xdc_Char)0x20,  /* [4345] */
    (xdc_Char)0x25,  /* [4346] */
    (xdc_Char)0x64,  /* [4347] */
    (xdc_Char)0x0,  /* [4348] */
    (xdc_Char)0x4c,  /* [4349] */
    (xdc_Char)0x4d,  /* [4350] */
    (xdc_Char)0x5f,  /* [4351] */
    (xdc_Char)0x73,  /* [4352] */
    (xdc_Char)0x65,  /* [4353] */
    (xdc_Char)0x74,  /* [4354] */
    (xdc_Char)0x50,  /* [4355] */
    (xdc_Char)0x72,  /* [4356] */
    (xdc_Char)0x69,  /* [4357] */
    (xdc_Char)0x3a,  /* [4358] */
    (xdc_Char)0x20,  /* [4359] */
    (xdc_Char)0x74,  /* [4360] */
    (xdc_Char)0x73,  /* [4361] */
    (xdc_Char)0x6b,  /* [4362] */
    (xdc_Char)0x3a,  /* [4363] */
    (xdc_Char)0x20,  /* [4364] */
    (xdc_Char)0x30,  /* [4365] */
    (xdc_Char)0x78,  /* [4366] */
    (xdc_Char)0x25,  /* [4367] */
    (xdc_Char)0x78,  /* [4368] */
    (xdc_Char)0x2c,  /* [4369] */
    (xdc_Char)0x20,  /* [4370] */
    (xdc_Char)0x66,  /* [4371] */
    (xdc_Char)0x75,  /* [4372] */
    (xdc_Char)0x6e,  /* [4373] */
    (xdc_Char)0x63,  /* [4374] */
    (xdc_Char)0x3a,  /* [4375] */
    (xdc_Char)0x20,  /* [4376] */
    (xdc_Char)0x30,  /* [4377] */
    (xdc_Char)0x78,  /* [4378] */
    (xdc_Char)0x25,  /* [4379] */
    (xdc_Char)0x78,  /* [4380] */
    (xdc_Char)0x2c,  /* [4381] */
    (xdc_Char)0x20,  /* [4382] */
    (xdc_Char)0x6f,  /* [4383] */
    (xdc_Char)0x6c,  /* [4384] */
    (xdc_Char)0x64,  /* [4385] */
    (xdc_Char)0x50,  /* [4386] */
    (xdc_Char)0x72,  /* [4387] */
    (xdc_Char)0x69,  /* [4388] */
    (xdc_Char)0x3a,  /* [4389] */
    (xdc_Char)0x20,  /* [4390] */
    (xdc_Char)0x25,  /* [4391] */
    (xdc_Char)0x64,  /* [4392] */
    (xdc_Char)0x2c,  /* [4393] */
    (xdc_Char)0x20,  /* [4394] */
    (xdc_Char)0x6e,  /* [4395] */
    (xdc_Char)0x65,  /* [4396] */
    (xdc_Char)0x77,  /* [4397] */
    (xdc_Char)0x50,  /* [4398] */
    (xdc_Char)0x72,  /* [4399] */
    (xdc_Char)0x69,  /* [4400] */
    (xdc_Char)0x20,  /* [4401] */
    (xdc_Char)0x25,  /* [4402] */
    (xdc_Char)0x64,  /* [4403] */
    (xdc_Char)0x0,  /* [4404] */
    (xdc_Char)0x4c,  /* [4405] */
    (xdc_Char)0x44,  /* [4406] */
    (xdc_Char)0x5f,  /* [4407] */
    (xdc_Char)0x65,  /* [4408] */
    (xdc_Char)0x78,  /* [4409] */
    (xdc_Char)0x69,  /* [4410] */
    (xdc_Char)0x74,  /* [4411] */
    (xdc_Char)0x3a,  /* [4412] */
    (xdc_Char)0x20,  /* [4413] */
    (xdc_Char)0x74,  /* [4414] */
    (xdc_Char)0x73,  /* [4415] */
    (xdc_Char)0x6b,  /* [4416] */
    (xdc_Char)0x3a,  /* [4417] */
    (xdc_Char)0x20,  /* [4418] */
    (xdc_Char)0x30,  /* [4419] */
    (xdc_Char)0x78,  /* [4420] */
    (xdc_Char)0x25,  /* [4421] */
    (xdc_Char)0x78,  /* [4422] */
    (xdc_Char)0x2c,  /* [4423] */
    (xdc_Char)0x20,  /* [4424] */
    (xdc_Char)0x66,  /* [4425] */
    (xdc_Char)0x75,  /* [4426] */
    (xdc_Char)0x6e,  /* [4427] */
    (xdc_Char)0x63,  /* [4428] */
    (xdc_Char)0x3a,  /* [4429] */
    (xdc_Char)0x20,  /* [4430] */
    (xdc_Char)0x30,  /* [4431] */
    (xdc_Char)0x78,  /* [4432] */
    (xdc_Char)0x25,  /* [4433] */
    (xdc_Char)0x78,  /* [4434] */
    (xdc_Char)0x0,  /* [4435] */
    (xdc_Char)0x78,  /* [4436] */
    (xdc_Char)0x64,  /* [4437] */
    (xdc_Char)0x63,  /* [4438] */
    (xdc_Char)0x2e,  /* [4439] */
    (xdc_Char)0x0,  /* [4440] */
    (xdc_Char)0x72,  /* [4441] */
    (xdc_Char)0x75,  /* [4442] */
    (xdc_Char)0x6e,  /* [4443] */
    (xdc_Char)0x74,  /* [4444] */
    (xdc_Char)0x69,  /* [4445] */
    (xdc_Char)0x6d,  /* [4446] */
    (xdc_Char)0x65,  /* [4447] */
    (xdc_Char)0x2e,  /* [4448] */
    (xdc_Char)0x0,  /* [4449] */
    (xdc_Char)0x41,  /* [4450] */
    (xdc_Char)0x73,  /* [4451] */
    (xdc_Char)0x73,  /* [4452] */
    (xdc_Char)0x65,  /* [4453] */
    (xdc_Char)0x72,  /* [4454] */
    (xdc_Char)0x74,  /* [4455] */
    (xdc_Char)0x0,  /* [4456] */
    (xdc_Char)0x43,  /* [4457] */
    (xdc_Char)0x6f,  /* [4458] */
    (xdc_Char)0x72,  /* [4459] */
    (xdc_Char)0x65,  /* [4460] */
    (xdc_Char)0x0,  /* [4461] */
    (xdc_Char)0x44,  /* [4462] */
    (xdc_Char)0x65,  /* [4463] */
    (xdc_Char)0x66,  /* [4464] */
    (xdc_Char)0x61,  /* [4465] */
    (xdc_Char)0x75,  /* [4466] */
    (xdc_Char)0x6c,  /* [4467] */
    (xdc_Char)0x74,  /* [4468] */
    (xdc_Char)0x73,  /* [4469] */
    (xdc_Char)0x0,  /* [4470] */
    (xdc_Char)0x44,  /* [4471] */
    (xdc_Char)0x69,  /* [4472] */
    (xdc_Char)0x61,  /* [4473] */
    (xdc_Char)0x67,  /* [4474] */
    (xdc_Char)0x73,  /* [4475] */
    (xdc_Char)0x0,  /* [4476] */
    (xdc_Char)0x45,  /* [4477] */
    (xdc_Char)0x72,  /* [4478] */
    (xdc_Char)0x72,  /* [4479] */
    (xdc_Char)0x6f,  /* [4480] */
    (xdc_Char)0x72,  /* [4481] */
    (xdc_Char)0x0,  /* [4482] */
    (xdc_Char)0x47,  /* [4483] */
    (xdc_Char)0x61,  /* [4484] */
    (xdc_Char)0x74,  /* [4485] */
    (xdc_Char)0x65,  /* [4486] */
    (xdc_Char)0x0,  /* [4487] */
    (xdc_Char)0x4c,  /* [4488] */
    (xdc_Char)0x6f,  /* [4489] */
    (xdc_Char)0x67,  /* [4490] */
    (xdc_Char)0x0,  /* [4491] */
    (xdc_Char)0x4d,  /* [4492] */
    (xdc_Char)0x61,  /* [4493] */
    (xdc_Char)0x69,  /* [4494] */
    (xdc_Char)0x6e,  /* [4495] */
    (xdc_Char)0x0,  /* [4496] */
    (xdc_Char)0x4d,  /* [4497] */
    (xdc_Char)0x65,  /* [4498] */
    (xdc_Char)0x6d,  /* [4499] */
    (xdc_Char)0x6f,  /* [4500] */
    (xdc_Char)0x72,  /* [4501] */
    (xdc_Char)0x79,  /* [4502] */
    (xdc_Char)0x0,  /* [4503] */
    (xdc_Char)0x52,  /* [4504] */
    (xdc_Char)0x65,  /* [4505] */
    (xdc_Char)0x67,  /* [4506] */
    (xdc_Char)0x69,  /* [4507] */
    (xdc_Char)0x73,  /* [4508] */
    (xdc_Char)0x74,  /* [4509] */
    (xdc_Char)0x72,  /* [4510] */
    (xdc_Char)0x79,  /* [4511] */
    (xdc_Char)0x0,  /* [4512] */
    (xdc_Char)0x53,  /* [4513] */
    (xdc_Char)0x74,  /* [4514] */
    (xdc_Char)0x61,  /* [4515] */
    (xdc_Char)0x72,  /* [4516] */
    (xdc_Char)0x74,  /* [4517] */
    (xdc_Char)0x75,  /* [4518] */
    (xdc_Char)0x70,  /* [4519] */
    (xdc_Char)0x0,  /* [4520] */
    (xdc_Char)0x53,  /* [4521] */
    (xdc_Char)0x79,  /* [4522] */
    (xdc_Char)0x73,  /* [4523] */
    (xdc_Char)0x74,  /* [4524] */
    (xdc_Char)0x65,  /* [4525] */
    (xdc_Char)0x6d,  /* [4526] */
    (xdc_Char)0x0,  /* [4527] */
    (xdc_Char)0x53,  /* [4528] */
    (xdc_Char)0x79,  /* [4529] */
    (xdc_Char)0x73,  /* [4530] */
    (xdc_Char)0x4d,  /* [4531] */
    (xdc_Char)0x69,  /* [4532] */
    (xdc_Char)0x6e,  /* [4533] */
    (xdc_Char)0x0,  /* [4534] */
    (xdc_Char)0x54,  /* [4535] */
    (xdc_Char)0x65,  /* [4536] */
    (xdc_Char)0x78,  /* [4537] */
    (xdc_Char)0x74,  /* [4538] */
    (xdc_Char)0x0,  /* [4539] */
    (xdc_Char)0x74,  /* [4540] */
    (xdc_Char)0x69,  /* [4541] */
    (xdc_Char)0x2e,  /* [4542] */
    (xdc_Char)0x0,  /* [4543] */
    (xdc_Char)0x73,  /* [4544] */
    (xdc_Char)0x79,  /* [4545] */
    (xdc_Char)0x73,  /* [4546] */
    (xdc_Char)0x62,  /* [4547] */
    (xdc_Char)0x69,  /* [4548] */
    (xdc_Char)0x6f,  /* [4549] */
    (xdc_Char)0x73,  /* [4550] */
    (xdc_Char)0x2e,  /* [4551] */
    (xdc_Char)0x0,  /* [4552] */
    (xdc_Char)0x66,  /* [4553] */
    (xdc_Char)0x61,  /* [4554] */
    (xdc_Char)0x6d,  /* [4555] */
    (xdc_Char)0x69,  /* [4556] */
    (xdc_Char)0x6c,  /* [4557] */
    (xdc_Char)0x79,  /* [4558] */
    (xdc_Char)0x2e,  /* [4559] */
    (xdc_Char)0x0,  /* [4560] */
    (xdc_Char)0x63,  /* [4561] */
    (xdc_Char)0x32,  /* [4562] */
    (xdc_Char)0x38,  /* [4563] */
    (xdc_Char)0x2e,  /* [4564] */
    (xdc_Char)0x0,  /* [4565] */
    (xdc_Char)0x48,  /* [4566] */
    (xdc_Char)0x77,  /* [4567] */
    (xdc_Char)0x69,  /* [4568] */
    (xdc_Char)0x0,  /* [4569] */
    (xdc_Char)0x54,  /* [4570] */
    (xdc_Char)0x69,  /* [4571] */
    (xdc_Char)0x6d,  /* [4572] */
    (xdc_Char)0x65,  /* [4573] */
    (xdc_Char)0x72,  /* [4574] */
    (xdc_Char)0x0,  /* [4575] */
    (xdc_Char)0x49,  /* [4576] */
    (xdc_Char)0x6e,  /* [4577] */
    (xdc_Char)0x74,  /* [4578] */
    (xdc_Char)0x72,  /* [4579] */
    (xdc_Char)0x69,  /* [4580] */
    (xdc_Char)0x6e,  /* [4581] */
    (xdc_Char)0x73,  /* [4582] */
    (xdc_Char)0x69,  /* [4583] */
    (xdc_Char)0x63,  /* [4584] */
    (xdc_Char)0x73,  /* [4585] */
    (xdc_Char)0x53,  /* [4586] */
    (xdc_Char)0x75,  /* [4587] */
    (xdc_Char)0x70,  /* [4588] */
    (xdc_Char)0x70,  /* [4589] */
    (xdc_Char)0x6f,  /* [4590] */
    (xdc_Char)0x72,  /* [4591] */
    (xdc_Char)0x74,  /* [4592] */
    (xdc_Char)0x0,  /* [4593] */
    (xdc_Char)0x54,  /* [4594] */
    (xdc_Char)0x61,  /* [4595] */
    (xdc_Char)0x73,  /* [4596] */
    (xdc_Char)0x6b,  /* [4597] */
    (xdc_Char)0x53,  /* [4598] */
    (xdc_Char)0x75,  /* [4599] */
    (xdc_Char)0x70,  /* [4600] */
    (xdc_Char)0x70,  /* [4601] */
    (xdc_Char)0x6f,  /* [4602] */
    (xdc_Char)0x72,  /* [4603] */
    (xdc_Char)0x74,  /* [4604] */
    (xdc_Char)0x0,  /* [4605] */
    (xdc_Char)0x68,  /* [4606] */
    (xdc_Char)0x61,  /* [4607] */
    (xdc_Char)0x6c,  /* [4608] */
    (xdc_Char)0x2e,  /* [4609] */
    (xdc_Char)0x0,  /* [4610] */
    (xdc_Char)0x6b,  /* [4611] */
    (xdc_Char)0x6e,  /* [4612] */
    (xdc_Char)0x6c,  /* [4613] */
    (xdc_Char)0x2e,  /* [4614] */
    (xdc_Char)0x0,  /* [4615] */
    (xdc_Char)0x43,  /* [4616] */
    (xdc_Char)0x6c,  /* [4617] */
    (xdc_Char)0x6f,  /* [4618] */
    (xdc_Char)0x63,  /* [4619] */
    (xdc_Char)0x6b,  /* [4620] */
    (xdc_Char)0x0,  /* [4621] */
    (xdc_Char)0x49,  /* [4622] */
    (xdc_Char)0x64,  /* [4623] */
    (xdc_Char)0x6c,  /* [4624] */
    (xdc_Char)0x65,  /* [4625] */
    (xdc_Char)0x0,  /* [4626] */
    (xdc_Char)0x49,  /* [4627] */
    (xdc_Char)0x6e,  /* [4628] */
    (xdc_Char)0x74,  /* [4629] */
    (xdc_Char)0x72,  /* [4630] */
    (xdc_Char)0x69,  /* [4631] */
    (xdc_Char)0x6e,  /* [4632] */
    (xdc_Char)0x73,  /* [4633] */
    (xdc_Char)0x69,  /* [4634] */
    (xdc_Char)0x63,  /* [4635] */
    (xdc_Char)0x73,  /* [4636] */
    (xdc_Char)0x0,  /* [4637] */
    (xdc_Char)0x51,  /* [4638] */
    (xdc_Char)0x75,  /* [4639] */
    (xdc_Char)0x65,  /* [4640] */
    (xdc_Char)0x75,  /* [4641] */
    (xdc_Char)0x65,  /* [4642] */
    (xdc_Char)0x0,  /* [4643] */
    (xdc_Char)0x53,  /* [4644] */
    (xdc_Char)0x65,  /* [4645] */
    (xdc_Char)0x6d,  /* [4646] */
    (xdc_Char)0x61,  /* [4647] */
    (xdc_Char)0x70,  /* [4648] */
    (xdc_Char)0x68,  /* [4649] */
    (xdc_Char)0x6f,  /* [4650] */
    (xdc_Char)0x72,  /* [4651] */
    (xdc_Char)0x65,  /* [4652] */
    (xdc_Char)0x0,  /* [4653] */
    (xdc_Char)0x53,  /* [4654] */
    (xdc_Char)0x77,  /* [4655] */
    (xdc_Char)0x69,  /* [4656] */
    (xdc_Char)0x0,  /* [4657] */
    (xdc_Char)0x54,  /* [4658] */
    (xdc_Char)0x61,  /* [4659] */
    (xdc_Char)0x73,  /* [4660] */
    (xdc_Char)0x6b,  /* [4661] */
    (xdc_Char)0x0,  /* [4662] */
    (xdc_Char)0x67,  /* [4663] */
    (xdc_Char)0x61,  /* [4664] */
    (xdc_Char)0x74,  /* [4665] */
    (xdc_Char)0x65,  /* [4666] */
    (xdc_Char)0x73,  /* [4667] */
    (xdc_Char)0x2e,  /* [4668] */
    (xdc_Char)0x0,  /* [4669] */
    (xdc_Char)0x47,  /* [4670] */
    (xdc_Char)0x61,  /* [4671] */
    (xdc_Char)0x74,  /* [4672] */
    (xdc_Char)0x65,  /* [4673] */
    (xdc_Char)0x48,  /* [4674] */
    (xdc_Char)0x77,  /* [4675] */
    (xdc_Char)0x69,  /* [4676] */
    (xdc_Char)0x0,  /* [4677] */
    (xdc_Char)0x47,  /* [4678] */
    (xdc_Char)0x61,  /* [4679] */
    (xdc_Char)0x74,  /* [4680] */
    (xdc_Char)0x65,  /* [4681] */
    (xdc_Char)0x4d,  /* [4682] */
    (xdc_Char)0x75,  /* [4683] */
    (xdc_Char)0x74,  /* [4684] */
    (xdc_Char)0x65,  /* [4685] */
    (xdc_Char)0x78,  /* [4686] */
    (xdc_Char)0x0,  /* [4687] */
    (xdc_Char)0x73,  /* [4688] */
    (xdc_Char)0x64,  /* [4689] */
    (xdc_Char)0x6f,  /* [4690] */
    (xdc_Char)0x2e,  /* [4691] */
    (xdc_Char)0x0,  /* [4692] */
    (xdc_Char)0x75,  /* [4693] */
    (xdc_Char)0x74,  /* [4694] */
    (xdc_Char)0x69,  /* [4695] */
    (xdc_Char)0x6c,  /* [4696] */
    (xdc_Char)0x73,  /* [4697] */
    (xdc_Char)0x2e,  /* [4698] */
    (xdc_Char)0x0,  /* [4699] */
    (xdc_Char)0x4e,  /* [4700] */
    (xdc_Char)0x61,  /* [4701] */
    (xdc_Char)0x6d,  /* [4702] */
    (xdc_Char)0x65,  /* [4703] */
    (xdc_Char)0x53,  /* [4704] */
    (xdc_Char)0x65,  /* [4705] */
    (xdc_Char)0x72,  /* [4706] */
    (xdc_Char)0x76,  /* [4707] */
    (xdc_Char)0x65,  /* [4708] */
    (xdc_Char)0x72,  /* [4709] */
    (xdc_Char)0x52,  /* [4710] */
    (xdc_Char)0x65,  /* [4711] */
    (xdc_Char)0x6d,  /* [4712] */
    (xdc_Char)0x6f,  /* [4713] */
    (xdc_Char)0x74,  /* [4714] */
    (xdc_Char)0x65,  /* [4715] */
    (xdc_Char)0x4e,  /* [4716] */
    (xdc_Char)0x75,  /* [4717] */
    (xdc_Char)0x6c,  /* [4718] */
    (xdc_Char)0x6c,  /* [4719] */
    (xdc_Char)0x0,  /* [4720] */
    (xdc_Char)0x42,  /* [4721] */
    (xdc_Char)0x49,  /* [4722] */
    (xdc_Char)0x4f,  /* [4723] */
    (xdc_Char)0x53,  /* [4724] */
    (xdc_Char)0x0,  /* [4725] */
    (xdc_Char)0x68,  /* [4726] */
    (xdc_Char)0x65,  /* [4727] */
    (xdc_Char)0x61,  /* [4728] */
    (xdc_Char)0x70,  /* [4729] */
    (xdc_Char)0x73,  /* [4730] */
    (xdc_Char)0x2e,  /* [4731] */
    (xdc_Char)0x0,  /* [4732] */
    (xdc_Char)0x48,  /* [4733] */
    (xdc_Char)0x65,  /* [4734] */
    (xdc_Char)0x61,  /* [4735] */
    (xdc_Char)0x70,  /* [4736] */
    (xdc_Char)0x4d,  /* [4737] */
    (xdc_Char)0x65,  /* [4738] */
    (xdc_Char)0x6d,  /* [4739] */
    (xdc_Char)0x0,  /* [4740] */
    (xdc_Char)0x74,  /* [4741] */
    (xdc_Char)0x69,  /* [4742] */
    (xdc_Char)0x2e,  /* [4743] */
    (xdc_Char)0x73,  /* [4744] */
    (xdc_Char)0x79,  /* [4745] */
    (xdc_Char)0x73,  /* [4746] */
    (xdc_Char)0x62,  /* [4747] */
    (xdc_Char)0x69,  /* [4748] */
    (xdc_Char)0x6f,  /* [4749] */
    (xdc_Char)0x73,  /* [4750] */
    (xdc_Char)0x2e,  /* [4751] */
    (xdc_Char)0x6b,  /* [4752] */
    (xdc_Char)0x6e,  /* [4753] */
    (xdc_Char)0x6c,  /* [4754] */
    (xdc_Char)0x2e,  /* [4755] */
    (xdc_Char)0x54,  /* [4756] */
    (xdc_Char)0x61,  /* [4757] */
    (xdc_Char)0x73,  /* [4758] */
    (xdc_Char)0x6b,  /* [4759] */
    (xdc_Char)0x2e,  /* [4760] */
    (xdc_Char)0x49,  /* [4761] */
    (xdc_Char)0x64,  /* [4762] */
    (xdc_Char)0x6c,  /* [4763] */
    (xdc_Char)0x65,  /* [4764] */
    (xdc_Char)0x54,  /* [4765] */
    (xdc_Char)0x61,  /* [4766] */
    (xdc_Char)0x73,  /* [4767] */
    (xdc_Char)0x6b,  /* [4768] */
    (xdc_Char)0x0,  /* [4769] */
};

/* --> xdc_runtime_Text_nodeTab__A */
const __T1_xdc_runtime_Text_nodeTab xdc_runtime_Text_nodeTab__A[43] = {
    {
        (xdc_Bits16)0x0,  /* left */
        (xdc_Bits16)0x0,  /* right */
    },  /* [0] */
    {
        (xdc_Bits16)0x1154,  /* left */
        (xdc_Bits16)0x1159,  /* right */
    },  /* [1] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1162,  /* right */
    },  /* [2] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1169,  /* right */
    },  /* [3] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x116e,  /* right */
    },  /* [4] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1177,  /* right */
    },  /* [5] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x117d,  /* right */
    },  /* [6] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1183,  /* right */
    },  /* [7] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1188,  /* right */
    },  /* [8] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x118c,  /* right */
    },  /* [9] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1191,  /* right */
    },  /* [10] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1198,  /* right */
    },  /* [11] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x11a1,  /* right */
    },  /* [12] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x11a9,  /* right */
    },  /* [13] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x11b0,  /* right */
    },  /* [14] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x11b7,  /* right */
    },  /* [15] */
    {
        (xdc_Bits16)0x11bc,  /* left */
        (xdc_Bits16)0x11c0,  /* right */
    },  /* [16] */
    {
        (xdc_Bits16)0x8010,  /* left */
        (xdc_Bits16)0x11c9,  /* right */
    },  /* [17] */
    {
        (xdc_Bits16)0x8011,  /* left */
        (xdc_Bits16)0x11d1,  /* right */
    },  /* [18] */
    {
        (xdc_Bits16)0x8012,  /* left */
        (xdc_Bits16)0x11d6,  /* right */
    },  /* [19] */
    {
        (xdc_Bits16)0x8012,  /* left */
        (xdc_Bits16)0x11da,  /* right */
    },  /* [20] */
    {
        (xdc_Bits16)0x8012,  /* left */
        (xdc_Bits16)0x11e0,  /* right */
    },  /* [21] */
    {
        (xdc_Bits16)0x8012,  /* left */
        (xdc_Bits16)0x11f2,  /* right */
    },  /* [22] */
    {
        (xdc_Bits16)0x8010,  /* left */
        (xdc_Bits16)0x11fe,  /* right */
    },  /* [23] */
    {
        (xdc_Bits16)0x8017,  /* left */
        (xdc_Bits16)0x11d6,  /* right */
    },  /* [24] */
    {
        (xdc_Bits16)0x8017,  /* left */
        (xdc_Bits16)0x11da,  /* right */
    },  /* [25] */
    {
        (xdc_Bits16)0x8010,  /* left */
        (xdc_Bits16)0x1203,  /* right */
    },  /* [26] */
    {
        (xdc_Bits16)0x801a,  /* left */
        (xdc_Bits16)0x1208,  /* right */
    },  /* [27] */
    {
        (xdc_Bits16)0x801a,  /* left */
        (xdc_Bits16)0x120e,  /* right */
    },  /* [28] */
    {
        (xdc_Bits16)0x801a,  /* left */
        (xdc_Bits16)0x1213,  /* right */
    },  /* [29] */
    {
        (xdc_Bits16)0x801a,  /* left */
        (xdc_Bits16)0x121e,  /* right */
    },  /* [30] */
    {
        (xdc_Bits16)0x801a,  /* left */
        (xdc_Bits16)0x1224,  /* right */
    },  /* [31] */
    {
        (xdc_Bits16)0x801a,  /* left */
        (xdc_Bits16)0x122e,  /* right */
    },  /* [32] */
    {
        (xdc_Bits16)0x801a,  /* left */
        (xdc_Bits16)0x1232,  /* right */
    },  /* [33] */
    {
        (xdc_Bits16)0x8010,  /* left */
        (xdc_Bits16)0x1237,  /* right */
    },  /* [34] */
    {
        (xdc_Bits16)0x8022,  /* left */
        (xdc_Bits16)0x123e,  /* right */
    },  /* [35] */
    {
        (xdc_Bits16)0x8022,  /* left */
        (xdc_Bits16)0x1246,  /* right */
    },  /* [36] */
    {
        (xdc_Bits16)0x11bc,  /* left */
        (xdc_Bits16)0x1250,  /* right */
    },  /* [37] */
    {
        (xdc_Bits16)0x8025,  /* left */
        (xdc_Bits16)0x1255,  /* right */
    },  /* [38] */
    {
        (xdc_Bits16)0x8026,  /* left */
        (xdc_Bits16)0x125c,  /* right */
    },  /* [39] */
    {
        (xdc_Bits16)0x8010,  /* left */
        (xdc_Bits16)0x1271,  /* right */
    },  /* [40] */
    {
        (xdc_Bits16)0x8010,  /* left */
        (xdc_Bits16)0x1276,  /* right */
    },  /* [41] */
    {
        (xdc_Bits16)0x8029,  /* left */
        (xdc_Bits16)0x127d,  /* right */
    },  /* [42] */
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
__FAR__ const CT__xdc_runtime_Text_charCnt xdc_runtime_Text_charCnt__C = (xdc_Int16)0x12a2;

/* nodeCnt__C */
__FAR__ const CT__xdc_runtime_Text_nodeCnt xdc_runtime_Text_nodeCnt__C = (xdc_Int16)0x2b;

/* unnamedModsLastId__C */
__FAR__ const CT__xdc_runtime_Text_unnamedModsLastId xdc_runtime_Text_unnamedModsLastId__C = (xdc_UInt16)0x4000;

/* registryModsLastId__C */
__FAR__ const CT__xdc_runtime_Text_registryModsLastId xdc_runtime_Text_registryModsLastId__C = (xdc_UInt16)0x7fff;

/* visitRopeFxn__C */
__FAR__ const CT__xdc_runtime_Text_visitRopeFxn xdc_runtime_Text_visitRopeFxn__C = ((CT__xdc_runtime_Text_visitRopeFxn)((xdc_Fxn)xdc_runtime_Text_visitRope__I));

/* visitRopeFxn2__C */
__FAR__ const CT__xdc_runtime_Text_visitRopeFxn2 xdc_runtime_Text_visitRopeFxn2__C = ((CT__xdc_runtime_Text_visitRopeFxn2)((xdc_Fxn)xdc_runtime_Text_visitRope2__I));


/*
 * ======== ti.sdo.utils.NameServerRemoteNull FUNCTION STUBS ========
 */

/* get__E */
xdc_Int ti_sdo_utils_NameServerRemoteNull_get__E( ti_sdo_utils_NameServerRemoteNull_Handle __inst, xdc_String instanceName, xdc_String name, xdc_Ptr value, xdc_UInt32* valueLen, xdc_runtime_knl_ISync_Handle syncHandle, xdc_runtime_Error_Block* eb ) 
{
    return ti_sdo_utils_NameServerRemoteNull_get__F((void*)__inst, instanceName, name, value, valueLen, syncHandle, eb);
}


/*
 * ======== ti.sysbios.family.c28.Hwi FUNCTION STUBS ========
 */

/* getStackInfo__E */
xdc_Bool ti_sysbios_family_c28_Hwi_getStackInfo__E( ti_sysbios_interfaces_IHwi_StackInfo* stkInfo, xdc_Bool computeStackDepth ) 
{
    return ti_sysbios_family_c28_Hwi_getStackInfo__F(stkInfo, computeStackDepth);
}

/* Module_startup */
xdc_Int ti_sysbios_family_c28_Hwi_Module_startup__E( xdc_Int state )
{
    return ti_sysbios_family_c28_Hwi_Module_startup__F(state);
}


/*
 * ======== ti.sysbios.family.c28.Timer FUNCTION STUBS ========
 */

/* setPrescale__E */
xdc_Void ti_sysbios_family_c28_Timer_setPrescale__E( ti_sysbios_family_c28_Timer_Handle __inst, xdc_UInt16 preScalar ) 
{
    ti_sysbios_family_c28_Timer_setPrescale__F((void*)__inst, preScalar);
}

/* getPrescale__E */
xdc_UInt16 ti_sysbios_family_c28_Timer_getPrescale__E( ti_sysbios_family_c28_Timer_Handle __inst ) 
{
    return ti_sysbios_family_c28_Timer_getPrescale__F((void*)__inst);
}

/* getPrescaleCount__E */
xdc_UInt16 ti_sysbios_family_c28_Timer_getPrescaleCount__E( ti_sysbios_family_c28_Timer_Handle __inst ) 
{
    return ti_sysbios_family_c28_Timer_getPrescaleCount__F((void*)__inst);
}

/* Module_startup */
xdc_Int ti_sysbios_family_c28_Timer_Module_startup__E( xdc_Int state )
{
    return ti_sysbios_family_c28_Timer_Module_startup__F(state);
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
 * ======== ti.sysbios.hal.Hwi_HwiProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.family.c28.Hwi */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_hal_Hwi_HwiProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_family_c28_Hwi_Module__startupDone__S();
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
    return ti_sysbios_family_c28_Hwi_Object__create__S(oa, osz, aa, (ti_sysbios_family_c28_Hwi___ParamsPtr)pa, sizeof(ti_sysbios_interfaces_IHwi_Params), eb);
}

/* Object__delete__S */
void ti_sysbios_hal_Hwi_HwiProxy_Object__delete__S( Ptr instp ) 
{
    ti_sysbios_family_c28_Hwi_Object__delete__S(instp);
}

/* Params__init__S */
void ti_sysbios_hal_Hwi_HwiProxy_Params__init__S( xdc_Ptr dst, const xdc_Ptr src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_family_c28_Hwi_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label* ti_sysbios_hal_Hwi_HwiProxy_Handle__label__S( Ptr obj, xdc_runtime_Types_Label* lab )
{
    return ti_sysbios_family_c28_Hwi_Handle__label__S(obj, lab);
}

/* getStackInfo__E */
xdc_Bool ti_sysbios_hal_Hwi_HwiProxy_getStackInfo__E( ti_sysbios_interfaces_IHwi_StackInfo* stkInfo, xdc_Bool computeStackDepth )
{
    return ti_sysbios_family_c28_Hwi_getStackInfo(stkInfo, computeStackDepth);
}

/* startup__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_startup__E( void )
{
    ti_sysbios_family_c28_Hwi_startup();
}

/* disable__E */
xdc_UInt ti_sysbios_hal_Hwi_HwiProxy_disable__E( void )
{
    return ti_sysbios_family_c28_Hwi_disable();
}

/* enable__E */
xdc_UInt ti_sysbios_hal_Hwi_HwiProxy_enable__E( void )
{
    return ti_sysbios_family_c28_Hwi_enable();
}

/* restore__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_restore__E( xdc_UInt key )
{
    ti_sysbios_family_c28_Hwi_restore(key);
}

/* switchFromBootStack__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_switchFromBootStack__E( void )
{
    ti_sysbios_family_c28_Hwi_switchFromBootStack();
}

/* post__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_post__E( xdc_UInt intNum )
{
    ti_sysbios_family_c28_Hwi_post(intNum);
}

/* getTaskSP__E */
xdc_Char* ti_sysbios_hal_Hwi_HwiProxy_getTaskSP__E( void )
{
    return ti_sysbios_family_c28_Hwi_getTaskSP();
}

/* disableInterrupt__E */
xdc_UInt ti_sysbios_hal_Hwi_HwiProxy_disableInterrupt__E( xdc_UInt intNum )
{
    return ti_sysbios_family_c28_Hwi_disableInterrupt(intNum);
}

/* enableInterrupt__E */
xdc_UInt ti_sysbios_hal_Hwi_HwiProxy_enableInterrupt__E( xdc_UInt intNum )
{
    return ti_sysbios_family_c28_Hwi_enableInterrupt(intNum);
}

/* restoreInterrupt__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_restoreInterrupt__E( xdc_UInt intNum, xdc_UInt key )
{
    ti_sysbios_family_c28_Hwi_restoreInterrupt(intNum, key);
}

/* clearInterrupt__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_clearInterrupt__E( xdc_UInt intNum )
{
    ti_sysbios_family_c28_Hwi_clearInterrupt(intNum);
}

/* getFunc__E */
ti_sysbios_interfaces_IHwi_FuncPtr ti_sysbios_hal_Hwi_HwiProxy_getFunc__E( ti_sysbios_hal_Hwi_HwiProxy_Handle __inst, xdc_UArg* arg )
{
    return ti_sysbios_family_c28_Hwi_getFunc((ti_sysbios_family_c28_Hwi_Handle)__inst, arg);
}

/* setFunc__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_setFunc__E( ti_sysbios_hal_Hwi_HwiProxy_Handle __inst, ti_sysbios_interfaces_IHwi_FuncPtr fxn, xdc_UArg arg )
{
    ti_sysbios_family_c28_Hwi_setFunc((ti_sysbios_family_c28_Hwi_Handle)__inst, fxn, arg);
}

/* getHookContext__E */
xdc_Ptr ti_sysbios_hal_Hwi_HwiProxy_getHookContext__E( ti_sysbios_hal_Hwi_HwiProxy_Handle __inst, xdc_Int id )
{
    return ti_sysbios_family_c28_Hwi_getHookContext((ti_sysbios_family_c28_Hwi_Handle)__inst, id);
}

/* setHookContext__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_setHookContext__E( ti_sysbios_hal_Hwi_HwiProxy_Handle __inst, xdc_Int id, xdc_Ptr hookContext )
{
    ti_sysbios_family_c28_Hwi_setHookContext((ti_sysbios_family_c28_Hwi_Handle)__inst, id, hookContext);
}

/* getIrp__E */
ti_sysbios_interfaces_IHwi_Irp ti_sysbios_hal_Hwi_HwiProxy_getIrp__E( ti_sysbios_hal_Hwi_HwiProxy_Handle __inst )
{
    return ti_sysbios_family_c28_Hwi_getIrp((ti_sysbios_family_c28_Hwi_Handle)__inst);
}


/*
 * ======== ti.sysbios.hal.Timer_TimerProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.family.c28.Timer */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_hal_Timer_TimerProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_family_c28_Timer_Module__startupDone__S();
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
    return ti_sysbios_family_c28_Timer_Object__create__S(oa, osz, aa, (ti_sysbios_family_c28_Timer___ParamsPtr)pa, sizeof(ti_sysbios_interfaces_ITimer_Params), eb);
}

/* Object__delete__S */
void ti_sysbios_hal_Timer_TimerProxy_Object__delete__S( Ptr instp ) 
{
    ti_sysbios_family_c28_Timer_Object__delete__S(instp);
}

/* Params__init__S */
void ti_sysbios_hal_Timer_TimerProxy_Params__init__S( xdc_Ptr dst, const xdc_Ptr src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_family_c28_Timer_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label* ti_sysbios_hal_Timer_TimerProxy_Handle__label__S( Ptr obj, xdc_runtime_Types_Label* lab )
{
    return ti_sysbios_family_c28_Timer_Handle__label__S(obj, lab);
}

/* getNumTimers__E */
xdc_UInt ti_sysbios_hal_Timer_TimerProxy_getNumTimers__E( void )
{
    return ti_sysbios_family_c28_Timer_getNumTimers();
}

/* getStatus__E */
ti_sysbios_interfaces_ITimer_Status ti_sysbios_hal_Timer_TimerProxy_getStatus__E( xdc_UInt id )
{
    return ti_sysbios_family_c28_Timer_getStatus(id);
}

/* startup__E */
xdc_Void ti_sysbios_hal_Timer_TimerProxy_startup__E( void )
{
    ti_sysbios_family_c28_Timer_startup();
}

/* getMaxTicks__E */
xdc_UInt32 ti_sysbios_hal_Timer_TimerProxy_getMaxTicks__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst, xdc_UInt32 periodCounts )
{
    return ti_sysbios_family_c28_Timer_getMaxTicks((ti_sysbios_family_c28_Timer_Handle)__inst, periodCounts);
}

/* setNextTick__E */
xdc_Void ti_sysbios_hal_Timer_TimerProxy_setNextTick__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst, xdc_UInt32 newPeriod, xdc_UInt32 countsPerTick )
{
    ti_sysbios_family_c28_Timer_setNextTick((ti_sysbios_family_c28_Timer_Handle)__inst, newPeriod, countsPerTick);
}

/* start__E */
xdc_Void ti_sysbios_hal_Timer_TimerProxy_start__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst )
{
    ti_sysbios_family_c28_Timer_start((ti_sysbios_family_c28_Timer_Handle)__inst);
}

/* stop__E */
xdc_Void ti_sysbios_hal_Timer_TimerProxy_stop__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst )
{
    ti_sysbios_family_c28_Timer_stop((ti_sysbios_family_c28_Timer_Handle)__inst);
}

/* setPeriod__E */
xdc_Void ti_sysbios_hal_Timer_TimerProxy_setPeriod__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst, xdc_UInt32 period )
{
    ti_sysbios_family_c28_Timer_setPeriod((ti_sysbios_family_c28_Timer_Handle)__inst, period);
}

/* setPeriodMicroSecs__E */
xdc_Bool ti_sysbios_hal_Timer_TimerProxy_setPeriodMicroSecs__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst, xdc_UInt32 microsecs )
{
    return ti_sysbios_family_c28_Timer_setPeriodMicroSecs((ti_sysbios_family_c28_Timer_Handle)__inst, microsecs);
}

/* getPeriod__E */
xdc_UInt32 ti_sysbios_hal_Timer_TimerProxy_getPeriod__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst )
{
    return ti_sysbios_family_c28_Timer_getPeriod((ti_sysbios_family_c28_Timer_Handle)__inst);
}

/* getCount__E */
xdc_UInt32 ti_sysbios_hal_Timer_TimerProxy_getCount__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst )
{
    return ti_sysbios_family_c28_Timer_getCount((ti_sysbios_family_c28_Timer_Handle)__inst);
}

/* getFreq__E */
xdc_Void ti_sysbios_hal_Timer_TimerProxy_getFreq__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst, xdc_runtime_Types_FreqHz* freq )
{
    ti_sysbios_family_c28_Timer_getFreq((ti_sysbios_family_c28_Timer_Handle)__inst, freq);
}

/* getFunc__E */
ti_sysbios_interfaces_ITimer_FuncPtr ti_sysbios_hal_Timer_TimerProxy_getFunc__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst, xdc_UArg* arg )
{
    return ti_sysbios_family_c28_Timer_getFunc((ti_sysbios_family_c28_Timer_Handle)__inst, arg);
}

/* setFunc__E */
xdc_Void ti_sysbios_hal_Timer_TimerProxy_setFunc__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst, ti_sysbios_interfaces_ITimer_FuncPtr fxn, xdc_UArg arg )
{
    ti_sysbios_family_c28_Timer_setFunc((ti_sysbios_family_c28_Timer_Handle)__inst, fxn, arg);
}

/* trigger__E */
xdc_Void ti_sysbios_hal_Timer_TimerProxy_trigger__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst, xdc_UInt32 cycles )
{
    ti_sysbios_family_c28_Timer_trigger((ti_sysbios_family_c28_Timer_Handle)__inst, cycles);
}

/* getExpiredCounts__E */
xdc_UInt32 ti_sysbios_hal_Timer_TimerProxy_getExpiredCounts__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst )
{
    return ti_sysbios_family_c28_Timer_getExpiredCounts((ti_sysbios_family_c28_Timer_Handle)__inst);
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

/* DELEGATES TO ti.sysbios.family.c28.IntrinsicsSupport */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Intrinsics_SupportProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_family_c28_IntrinsicsSupport_Module__startupDone__S();
}

/* maxbit__E */
xdc_UInt ti_sysbios_knl_Intrinsics_SupportProxy_maxbit__E( xdc_UInt bits )
{
    return ti_sysbios_family_c28_IntrinsicsSupport_maxbit(bits);
}


/*
 * ======== ti.sysbios.knl.Task_SupportProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.family.c28.TaskSupport */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Task_SupportProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_family_c28_TaskSupport_Module__startupDone__S();
}

/* start__E */
xdc_Ptr ti_sysbios_knl_Task_SupportProxy_start__E( xdc_Ptr curTask, ti_sysbios_interfaces_ITaskSupport_FuncPtr enter, ti_sysbios_interfaces_ITaskSupport_FuncPtr exit, xdc_runtime_Error_Block* eb )
{
    return ti_sysbios_family_c28_TaskSupport_start(curTask, enter, exit, eb);
}

/* swap__E */
xdc_Void ti_sysbios_knl_Task_SupportProxy_swap__E( xdc_Ptr* oldtskContext, xdc_Ptr* newtskContext )
{
    ti_sysbios_family_c28_TaskSupport_swap(oldtskContext, newtskContext);
}

/* checkStack__E */
xdc_Bool ti_sysbios_knl_Task_SupportProxy_checkStack__E( xdc_Char* stack, xdc_SizeT size )
{
    return ti_sysbios_family_c28_TaskSupport_checkStack(stack, size);
}

/* stackUsed__E */
xdc_SizeT ti_sysbios_knl_Task_SupportProxy_stackUsed__E( xdc_Char* stack, xdc_SizeT size )
{
    return ti_sysbios_family_c28_TaskSupport_stackUsed(stack, size);
}

/* getStackAlignment__E */
xdc_UInt ti_sysbios_knl_Task_SupportProxy_getStackAlignment__E( void )
{
    return ti_sysbios_family_c28_TaskSupport_getStackAlignment();
}

/* getDefaultStackSize__E */
xdc_SizeT ti_sysbios_knl_Task_SupportProxy_getDefaultStackSize__E( void )
{
    return ti_sysbios_family_c28_TaskSupport_getDefaultStackSize();
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
 * ======== ti.sysbios.family.c28.Hwi OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_family_c28_Hwi_Object2__ s0; char c; } ti_sysbios_family_c28_Hwi___S1;
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_family_c28_Hwi_Object__DESC__C = {
    (Ptr)0, /* fxnTab */
    &ti_sysbios_family_c28_Hwi_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_family_c28_Hwi___S1) - sizeof(ti_sysbios_family_c28_Hwi_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_family_c28_Hwi_Object2__), /* objSize */
    (Ptr)&ti_sysbios_family_c28_Hwi_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_family_c28_Hwi_Params), /* prmsSize */
};



/*
 * ======== ti.sysbios.family.c28.Timer OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_family_c28_Timer_Object2__ s0; char c; } ti_sysbios_family_c28_Timer___S1;
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_family_c28_Timer_Object__DESC__C = {
    (Ptr)0, /* fxnTab */
    &ti_sysbios_family_c28_Timer_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_family_c28_Timer___S1) - sizeof(ti_sysbios_family_c28_Timer_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_family_c28_Timer_Object2__), /* objSize */
    (Ptr)&ti_sysbios_family_c28_Timer_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_family_c28_Timer_Params), /* prmsSize */
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
    lab->modId = 32807;
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
 * ======== ti.sysbios.family.c28.Hwi SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_family_c28_Hwi_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_family_c28_Hwi_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_family_c28_Hwi_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_family_c28_Hwi_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_family_c28_Hwi_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_family_c28_Hwi_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_family_c28_Hwi_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_family_c28_Hwi_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_family_c28_Hwi_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_family_c28_Hwi_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_family_c28_Hwi_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_family_c28_Hwi_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_family_c28_Hwi_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_family_c28_Hwi_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_family_c28_Hwi_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_family_c28_Hwi_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_family_c28_Hwi_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_family_c28_Hwi_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_family_c28_Hwi_Module__startupDone__S( void ) 
{
    return ti_sysbios_family_c28_Hwi_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label* ti_sysbios_family_c28_Hwi_Handle__label__S( xdc_Ptr obj, xdc_runtime_Types_Label* lab ) 
{
    lab->handle = obj;
    lab->modId = 32787;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_family_c28_Hwi_Params__init__S( xdc_Ptr prms, xdc_Ptr src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_family_c28_Hwi_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_family_c28_Hwi_Object__get__S( xdc_Ptr oa, xdc_Int i ) 
{
    if (oa) {
        return ((ti_sysbios_family_c28_Hwi_Object__*)oa) + i;
    }

    if (ti_sysbios_family_c28_Hwi_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_family_c28_Hwi_Object__*)ti_sysbios_family_c28_Hwi_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_family_c28_Hwi_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_family_c28_Hwi_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_family_c28_Hwi_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_family_c28_Hwi_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_family_c28_Hwi_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_family_c28_Hwi_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const ti_sysbios_family_c28_Hwi___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    ti_sysbios_family_c28_Hwi_Params prms;
    ti_sysbios_family_c28_Hwi_Object* obj;
    int iStat;

    ti_sysbios_family_c28_Hwi_Args__create* args = aa;
    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_family_c28_Hwi_Object__DESC__C, oa, osz, &prms, (xdc_Ptr)pa, psz, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_family_c28_Hwi_Instance_init__F(obj, args->intNum, args->hwiFxn, &prms, eb);
    if (xdc_runtime_Error_check(eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_c28_Hwi_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_family_c28_Hwi_Instance_finalize__F, iStat, (xdc_Bool)(oa != NULL));
        return NULL;
    }

    return obj;
}

/* Object__destruct__S */
xdc_Void ti_sysbios_family_c28_Hwi_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_c28_Hwi_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_family_c28_Hwi_Instance_finalize__F, 0, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_family_c28_Hwi_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_c28_Hwi_Object__DESC__C, *((ti_sysbios_family_c28_Hwi_Object**)instp), (xdc_Fxn)ti_sysbios_family_c28_Hwi_Instance_finalize__F, 0, FALSE);
    *((ti_sysbios_family_c28_Hwi_Handle*)instp) = NULL;
}


/*
 * ======== ti.sysbios.family.c28.IntrinsicsSupport SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_family_c28_IntrinsicsSupport_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== ti.sysbios.family.c28.TaskSupport SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_family_c28_TaskSupport_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== ti.sysbios.family.c28.Timer SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_family_c28_Timer_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_family_c28_Timer_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_family_c28_Timer_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_family_c28_Timer_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_family_c28_Timer_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_family_c28_Timer_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_family_c28_Timer_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_family_c28_Timer_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_family_c28_Timer_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_family_c28_Timer_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_family_c28_Timer_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_family_c28_Timer_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_family_c28_Timer_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_family_c28_Timer_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_family_c28_Timer_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_family_c28_Timer_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_family_c28_Timer_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_family_c28_Timer_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_family_c28_Timer_Module__startupDone__S( void ) 
{
    return ti_sysbios_family_c28_Timer_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label* ti_sysbios_family_c28_Timer_Handle__label__S( xdc_Ptr obj, xdc_runtime_Types_Label* lab ) 
{
    lab->handle = obj;
    lab->modId = 32788;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_family_c28_Timer_Params__init__S( xdc_Ptr prms, xdc_Ptr src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_family_c28_Timer_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_family_c28_Timer_Object__get__S( xdc_Ptr oa, xdc_Int i ) 
{
    if (oa) {
        return ((ti_sysbios_family_c28_Timer_Object__*)oa) + i;
    }

    if (ti_sysbios_family_c28_Timer_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_family_c28_Timer_Object__*)ti_sysbios_family_c28_Timer_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_family_c28_Timer_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_family_c28_Timer_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_family_c28_Timer_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_family_c28_Timer_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_family_c28_Timer_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_family_c28_Timer_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const ti_sysbios_family_c28_Timer___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    ti_sysbios_family_c28_Timer_Params prms;
    ti_sysbios_family_c28_Timer_Object* obj;
    int iStat;

    ti_sysbios_family_c28_Timer_Args__create* args = aa;
    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_family_c28_Timer_Object__DESC__C, oa, osz, &prms, (xdc_Ptr)pa, psz, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_family_c28_Timer_Instance_init__F(obj, args->id, args->tickFxn, &prms, eb);
    if (xdc_runtime_Error_check(eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_c28_Timer_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_family_c28_Timer_Instance_finalize__F, iStat, (xdc_Bool)(oa != NULL));
        return NULL;
    }

    return obj;
}

/* Object__destruct__S */
xdc_Void ti_sysbios_family_c28_Timer_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_c28_Timer_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_family_c28_Timer_Instance_finalize__F, 0, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_family_c28_Timer_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_c28_Timer_Object__DESC__C, *((ti_sysbios_family_c28_Timer_Object**)instp), (xdc_Fxn)ti_sysbios_family_c28_Timer_Instance_finalize__F, 0, FALSE);
    *((ti_sysbios_family_c28_Timer_Handle*)instp) = NULL;
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
    lab->modId = 32803;
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
    lab->modId = 32804;
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
    lab->modId = 32810;
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

#pragma DATA_SECTION(xdc_runtime_IModule_Interface__BASE__C, ".econst:xdc_runtime_IModule_Interface__BASE__C");
asm("	.sect \".econst:xdc_runtime_IModule_Interface__BASE__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_IModule_Interface__BASE__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_IModule_Interface__BASE__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_IGateProvider_Interface__BASE__C, ".econst:xdc_runtime_IGateProvider_Interface__BASE__C");
asm("	.sect \".econst:xdc_runtime_IGateProvider_Interface__BASE__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_IGateProvider_Interface__BASE__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_IGateProvider_Interface__BASE__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_IHeap_Interface__BASE__C, ".econst:xdc_runtime_IHeap_Interface__BASE__C");
asm("	.sect \".econst:xdc_runtime_IHeap_Interface__BASE__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_IHeap_Interface__BASE__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_IHeap_Interface__BASE__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_ISystemSupport_Interface__BASE__C, ".econst:xdc_runtime_ISystemSupport_Interface__BASE__C");
asm("	.sect \".econst:xdc_runtime_ISystemSupport_Interface__BASE__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_ISystemSupport_Interface__BASE__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_ISystemSupport_Interface__BASE__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__FXNS__C, ".econst:ti_sysbios_gates_GateHwi_Module__FXNS__C");
asm("	.sect \".econst:ti_sysbios_gates_GateHwi_Module__FXNS__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_gates_GateHwi_Module__FXNS__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_gates_GateHwi_Module__FXNS__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__FXNS__C, ".econst:ti_sysbios_gates_GateMutex_Module__FXNS__C");
asm("	.sect \".econst:ti_sysbios_gates_GateMutex_Module__FXNS__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_gates_GateMutex_Module__FXNS__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_gates_GateMutex_Module__FXNS__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__FXNS__C, ".econst:ti_sysbios_heaps_HeapMem_Module__FXNS__C");
asm("	.sect \".econst:ti_sysbios_heaps_HeapMem_Module__FXNS__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_heaps_HeapMem_Module__FXNS__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_heaps_HeapMem_Module__FXNS__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_SysMin_Module__FXNS__C, ".econst:xdc_runtime_SysMin_Module__FXNS__C");
asm("	.sect \".econst:xdc_runtime_SysMin_Module__FXNS__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_SysMin_Module__FXNS__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_SysMin_Module__FXNS__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sdo_utils_NameServerRemoteNull_Object__PARAMS__C, ".econst:ti_sdo_utils_NameServerRemoteNull_Object__PARAMS__C");
asm("	.sect \".econst:ti_sdo_utils_NameServerRemoteNull_Object__PARAMS__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sdo_utils_NameServerRemoteNull_Object__PARAMS__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sdo_utils_NameServerRemoteNull_Object__PARAMS__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c28_Hwi_Object__PARAMS__C, ".econst:ti_sysbios_family_c28_Hwi_Object__PARAMS__C");
asm("	.sect \".econst:ti_sysbios_family_c28_Hwi_Object__PARAMS__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_Hwi_Object__PARAMS__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_Hwi_Object__PARAMS__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c28_Timer_Object__PARAMS__C, ".econst:ti_sysbios_family_c28_Timer_Object__PARAMS__C");
asm("	.sect \".econst:ti_sysbios_family_c28_Timer_Object__PARAMS__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_Timer_Object__PARAMS__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_Timer_Object__PARAMS__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Object__PARAMS__C, ".econst:ti_sysbios_gates_GateHwi_Object__PARAMS__C");
asm("	.sect \".econst:ti_sysbios_gates_GateHwi_Object__PARAMS__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_gates_GateHwi_Object__PARAMS__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_gates_GateHwi_Object__PARAMS__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Object__PARAMS__C, ".econst:ti_sysbios_gates_GateMutex_Object__PARAMS__C");
asm("	.sect \".econst:ti_sysbios_gates_GateMutex_Object__PARAMS__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_gates_GateMutex_Object__PARAMS__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_gates_GateMutex_Object__PARAMS__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Object__PARAMS__C, ".econst:ti_sysbios_hal_Hwi_Object__PARAMS__C");
asm("	.sect \".econst:ti_sysbios_hal_Hwi_Object__PARAMS__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_hal_Hwi_Object__PARAMS__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_hal_Hwi_Object__PARAMS__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_hal_Timer_Object__PARAMS__C, ".econst:ti_sysbios_hal_Timer_Object__PARAMS__C");
asm("	.sect \".econst:ti_sysbios_hal_Timer_Object__PARAMS__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_hal_Timer_Object__PARAMS__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_hal_Timer_Object__PARAMS__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Object__PARAMS__C, ".econst:ti_sysbios_heaps_HeapMem_Object__PARAMS__C");
asm("	.sect \".econst:ti_sysbios_heaps_HeapMem_Object__PARAMS__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_heaps_HeapMem_Object__PARAMS__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_heaps_HeapMem_Object__PARAMS__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Clock_Object__PARAMS__C, ".econst:ti_sysbios_knl_Clock_Object__PARAMS__C");
asm("	.sect \".econst:ti_sysbios_knl_Clock_Object__PARAMS__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Clock_Object__PARAMS__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Clock_Object__PARAMS__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Queue_Object__PARAMS__C, ".econst:ti_sysbios_knl_Queue_Object__PARAMS__C");
asm("	.sect \".econst:ti_sysbios_knl_Queue_Object__PARAMS__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Queue_Object__PARAMS__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Queue_Object__PARAMS__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Object__PARAMS__C, ".econst:ti_sysbios_knl_Semaphore_Object__PARAMS__C");
asm("	.sect \".econst:ti_sysbios_knl_Semaphore_Object__PARAMS__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Semaphore_Object__PARAMS__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Semaphore_Object__PARAMS__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Swi_Object__PARAMS__C, ".econst:ti_sysbios_knl_Swi_Object__PARAMS__C");
asm("	.sect \".econst:ti_sysbios_knl_Swi_Object__PARAMS__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Swi_Object__PARAMS__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Swi_Object__PARAMS__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Task_Object__PARAMS__C, ".econst:ti_sysbios_knl_Task_Object__PARAMS__C");
asm("	.sect \".econst:ti_sysbios_knl_Task_Object__PARAMS__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Task_Object__PARAMS__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Task_Object__PARAMS__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Instance_State_sem__O, ".econst:ti_sysbios_gates_GateMutex_Instance_State_sem__O");
asm("	.sect \".econst:ti_sysbios_gates_GateMutex_Instance_State_sem__O\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_gates_GateMutex_Instance_State_sem__O\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_gates_GateMutex_Instance_State_sem__O\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module_State_clockQ__O, ".econst:ti_sysbios_knl_Clock_Module_State_clockQ__O");
asm("	.sect \".econst:ti_sysbios_knl_Clock_Module_State_clockQ__O\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Clock_Module_State_clockQ__O\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Clock_Module_State_clockQ__O\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Instance_State_pendQ__O, ".econst:ti_sysbios_knl_Semaphore_Instance_State_pendQ__O");
asm("	.sect \".econst:ti_sysbios_knl_Semaphore_Instance_State_pendQ__O\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Semaphore_Instance_State_pendQ__O\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Semaphore_Instance_State_pendQ__O\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Task_Module_State_inactiveQ__O, ".econst:ti_sysbios_knl_Task_Module_State_inactiveQ__O");
asm("	.sect \".econst:ti_sysbios_knl_Task_Module_State_inactiveQ__O\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Task_Module_State_inactiveQ__O\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Task_Module_State_inactiveQ__O\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Task_Module_State_terminatedQ__O, ".econst:ti_sysbios_knl_Task_Module_State_terminatedQ__O");
asm("	.sect \".econst:ti_sysbios_knl_Task_Module_State_terminatedQ__O\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Task_Module_State_terminatedQ__O\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Task_Module_State_terminatedQ__O\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sdo_utils_NameServerRemoteNull_Object__DESC__C, ".econst:ti_sdo_utils_NameServerRemoteNull_Object__DESC__C");
asm("	.sect \".econst:ti_sdo_utils_NameServerRemoteNull_Object__DESC__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sdo_utils_NameServerRemoteNull_Object__DESC__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sdo_utils_NameServerRemoteNull_Object__DESC__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sdo_utils_NameServerRemoteNull_Object__PARAMS__C, ".econst:ti_sdo_utils_NameServerRemoteNull_Object__PARAMS__C");
asm("	.sect \".econst:ti_sdo_utils_NameServerRemoteNull_Object__PARAMS__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sdo_utils_NameServerRemoteNull_Object__PARAMS__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sdo_utils_NameServerRemoteNull_Object__PARAMS__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sdo_utils_NameServerRemoteNull_Module__diagsEnabled__C, ".econst:ti_sdo_utils_NameServerRemoteNull_Module__diagsEnabled__C");
asm("	.sect \".econst:ti_sdo_utils_NameServerRemoteNull_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sdo_utils_NameServerRemoteNull_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sdo_utils_NameServerRemoteNull_Module__diagsEnabled__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sdo_utils_NameServerRemoteNull_Module__diagsIncluded__C, ".econst:ti_sdo_utils_NameServerRemoteNull_Module__diagsIncluded__C");
asm("	.sect \".econst:ti_sdo_utils_NameServerRemoteNull_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sdo_utils_NameServerRemoteNull_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sdo_utils_NameServerRemoteNull_Module__diagsIncluded__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sdo_utils_NameServerRemoteNull_Module__diagsMask__C, ".econst:ti_sdo_utils_NameServerRemoteNull_Module__diagsMask__C");
asm("	.sect \".econst:ti_sdo_utils_NameServerRemoteNull_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sdo_utils_NameServerRemoteNull_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sdo_utils_NameServerRemoteNull_Module__diagsMask__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sdo_utils_NameServerRemoteNull_Module__gateObj__C, ".econst:ti_sdo_utils_NameServerRemoteNull_Module__gateObj__C");
asm("	.sect \".econst:ti_sdo_utils_NameServerRemoteNull_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sdo_utils_NameServerRemoteNull_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sdo_utils_NameServerRemoteNull_Module__gateObj__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sdo_utils_NameServerRemoteNull_Module__gatePrms__C, ".econst:ti_sdo_utils_NameServerRemoteNull_Module__gatePrms__C");
asm("	.sect \".econst:ti_sdo_utils_NameServerRemoteNull_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sdo_utils_NameServerRemoteNull_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sdo_utils_NameServerRemoteNull_Module__gatePrms__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sdo_utils_NameServerRemoteNull_Module__id__C, ".econst:ti_sdo_utils_NameServerRemoteNull_Module__id__C");
asm("	.sect \".econst:ti_sdo_utils_NameServerRemoteNull_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sdo_utils_NameServerRemoteNull_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sdo_utils_NameServerRemoteNull_Module__id__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sdo_utils_NameServerRemoteNull_Module__loggerDefined__C, ".econst:ti_sdo_utils_NameServerRemoteNull_Module__loggerDefined__C");
asm("	.sect \".econst:ti_sdo_utils_NameServerRemoteNull_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sdo_utils_NameServerRemoteNull_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sdo_utils_NameServerRemoteNull_Module__loggerDefined__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sdo_utils_NameServerRemoteNull_Module__loggerObj__C, ".econst:ti_sdo_utils_NameServerRemoteNull_Module__loggerObj__C");
asm("	.sect \".econst:ti_sdo_utils_NameServerRemoteNull_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sdo_utils_NameServerRemoteNull_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sdo_utils_NameServerRemoteNull_Module__loggerObj__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sdo_utils_NameServerRemoteNull_Module__loggerFxn0__C, ".econst:ti_sdo_utils_NameServerRemoteNull_Module__loggerFxn0__C");
asm("	.sect \".econst:ti_sdo_utils_NameServerRemoteNull_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sdo_utils_NameServerRemoteNull_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sdo_utils_NameServerRemoteNull_Module__loggerFxn0__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sdo_utils_NameServerRemoteNull_Module__loggerFxn1__C, ".econst:ti_sdo_utils_NameServerRemoteNull_Module__loggerFxn1__C");
asm("	.sect \".econst:ti_sdo_utils_NameServerRemoteNull_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sdo_utils_NameServerRemoteNull_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sdo_utils_NameServerRemoteNull_Module__loggerFxn1__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sdo_utils_NameServerRemoteNull_Module__loggerFxn2__C, ".econst:ti_sdo_utils_NameServerRemoteNull_Module__loggerFxn2__C");
asm("	.sect \".econst:ti_sdo_utils_NameServerRemoteNull_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sdo_utils_NameServerRemoteNull_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sdo_utils_NameServerRemoteNull_Module__loggerFxn2__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sdo_utils_NameServerRemoteNull_Module__loggerFxn4__C, ".econst:ti_sdo_utils_NameServerRemoteNull_Module__loggerFxn4__C");
asm("	.sect \".econst:ti_sdo_utils_NameServerRemoteNull_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sdo_utils_NameServerRemoteNull_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sdo_utils_NameServerRemoteNull_Module__loggerFxn4__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sdo_utils_NameServerRemoteNull_Module__loggerFxn8__C, ".econst:ti_sdo_utils_NameServerRemoteNull_Module__loggerFxn8__C");
asm("	.sect \".econst:ti_sdo_utils_NameServerRemoteNull_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sdo_utils_NameServerRemoteNull_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sdo_utils_NameServerRemoteNull_Module__loggerFxn8__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sdo_utils_NameServerRemoteNull_Module__startupDoneFxn__C, ".econst:ti_sdo_utils_NameServerRemoteNull_Module__startupDoneFxn__C");
asm("	.sect \".econst:ti_sdo_utils_NameServerRemoteNull_Module__startupDoneFxn__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sdo_utils_NameServerRemoteNull_Module__startupDoneFxn__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sdo_utils_NameServerRemoteNull_Module__startupDoneFxn__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sdo_utils_NameServerRemoteNull_Object__count__C, ".econst:ti_sdo_utils_NameServerRemoteNull_Object__count__C");
asm("	.sect \".econst:ti_sdo_utils_NameServerRemoteNull_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sdo_utils_NameServerRemoteNull_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sdo_utils_NameServerRemoteNull_Object__count__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sdo_utils_NameServerRemoteNull_Object__heap__C, ".econst:ti_sdo_utils_NameServerRemoteNull_Object__heap__C");
asm("	.sect \".econst:ti_sdo_utils_NameServerRemoteNull_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sdo_utils_NameServerRemoteNull_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sdo_utils_NameServerRemoteNull_Object__heap__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sdo_utils_NameServerRemoteNull_Object__sizeof__C, ".econst:ti_sdo_utils_NameServerRemoteNull_Object__sizeof__C");
asm("	.sect \".econst:ti_sdo_utils_NameServerRemoteNull_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sdo_utils_NameServerRemoteNull_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sdo_utils_NameServerRemoteNull_Object__sizeof__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sdo_utils_NameServerRemoteNull_Object__table__C, ".econst:ti_sdo_utils_NameServerRemoteNull_Object__table__C");
asm("	.sect \".econst:ti_sdo_utils_NameServerRemoteNull_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sdo_utils_NameServerRemoteNull_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sdo_utils_NameServerRemoteNull_Object__table__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_BIOS_Module__diagsEnabled__C, ".econst:ti_sysbios_BIOS_Module__diagsEnabled__C");
asm("	.sect \".econst:ti_sysbios_BIOS_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_BIOS_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_BIOS_Module__diagsEnabled__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_BIOS_Module__diagsIncluded__C, ".econst:ti_sysbios_BIOS_Module__diagsIncluded__C");
asm("	.sect \".econst:ti_sysbios_BIOS_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_BIOS_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_BIOS_Module__diagsIncluded__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_BIOS_Module__diagsMask__C, ".econst:ti_sysbios_BIOS_Module__diagsMask__C");
asm("	.sect \".econst:ti_sysbios_BIOS_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_BIOS_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_BIOS_Module__diagsMask__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_BIOS_Module__gateObj__C, ".econst:ti_sysbios_BIOS_Module__gateObj__C");
asm("	.sect \".econst:ti_sysbios_BIOS_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_BIOS_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_BIOS_Module__gateObj__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_BIOS_Module__gatePrms__C, ".econst:ti_sysbios_BIOS_Module__gatePrms__C");
asm("	.sect \".econst:ti_sysbios_BIOS_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_BIOS_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_BIOS_Module__gatePrms__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_BIOS_Module__id__C, ".econst:ti_sysbios_BIOS_Module__id__C");
asm("	.sect \".econst:ti_sysbios_BIOS_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_BIOS_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_BIOS_Module__id__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerDefined__C, ".econst:ti_sysbios_BIOS_Module__loggerDefined__C");
asm("	.sect \".econst:ti_sysbios_BIOS_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_BIOS_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_BIOS_Module__loggerDefined__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerObj__C, ".econst:ti_sysbios_BIOS_Module__loggerObj__C");
asm("	.sect \".econst:ti_sysbios_BIOS_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_BIOS_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_BIOS_Module__loggerObj__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerFxn0__C, ".econst:ti_sysbios_BIOS_Module__loggerFxn0__C");
asm("	.sect \".econst:ti_sysbios_BIOS_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_BIOS_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_BIOS_Module__loggerFxn0__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerFxn1__C, ".econst:ti_sysbios_BIOS_Module__loggerFxn1__C");
asm("	.sect \".econst:ti_sysbios_BIOS_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_BIOS_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_BIOS_Module__loggerFxn1__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerFxn2__C, ".econst:ti_sysbios_BIOS_Module__loggerFxn2__C");
asm("	.sect \".econst:ti_sysbios_BIOS_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_BIOS_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_BIOS_Module__loggerFxn2__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerFxn4__C, ".econst:ti_sysbios_BIOS_Module__loggerFxn4__C");
asm("	.sect \".econst:ti_sysbios_BIOS_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_BIOS_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_BIOS_Module__loggerFxn4__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerFxn8__C, ".econst:ti_sysbios_BIOS_Module__loggerFxn8__C");
asm("	.sect \".econst:ti_sysbios_BIOS_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_BIOS_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_BIOS_Module__loggerFxn8__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_BIOS_Module__startupDoneFxn__C, ".econst:ti_sysbios_BIOS_Module__startupDoneFxn__C");
asm("	.sect \".econst:ti_sysbios_BIOS_Module__startupDoneFxn__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_BIOS_Module__startupDoneFxn__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_BIOS_Module__startupDoneFxn__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_BIOS_Object__count__C, ".econst:ti_sysbios_BIOS_Object__count__C");
asm("	.sect \".econst:ti_sysbios_BIOS_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_BIOS_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_BIOS_Object__count__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_BIOS_Object__heap__C, ".econst:ti_sysbios_BIOS_Object__heap__C");
asm("	.sect \".econst:ti_sysbios_BIOS_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_BIOS_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_BIOS_Object__heap__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_BIOS_Object__sizeof__C, ".econst:ti_sysbios_BIOS_Object__sizeof__C");
asm("	.sect \".econst:ti_sysbios_BIOS_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_BIOS_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_BIOS_Object__sizeof__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_BIOS_Object__table__C, ".econst:ti_sysbios_BIOS_Object__table__C");
asm("	.sect \".econst:ti_sysbios_BIOS_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_BIOS_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_BIOS_Object__table__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_BIOS_smpEnabled__C, ".econst:ti_sysbios_BIOS_smpEnabled__C");
asm("	.sect \".econst:ti_sysbios_BIOS_smpEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_BIOS_smpEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_BIOS_smpEnabled__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_BIOS_cpuFreq__C, ".econst:ti_sysbios_BIOS_cpuFreq__C");
asm("	.sect \".econst:ti_sysbios_BIOS_cpuFreq__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_BIOS_cpuFreq__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_BIOS_cpuFreq__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_BIOS_taskEnabled__C, ".econst:ti_sysbios_BIOS_taskEnabled__C");
asm("	.sect \".econst:ti_sysbios_BIOS_taskEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_BIOS_taskEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_BIOS_taskEnabled__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_BIOS_swiEnabled__C, ".econst:ti_sysbios_BIOS_swiEnabled__C");
asm("	.sect \".econst:ti_sysbios_BIOS_swiEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_BIOS_swiEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_BIOS_swiEnabled__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_BIOS_clockEnabled__C, ".econst:ti_sysbios_BIOS_clockEnabled__C");
asm("	.sect \".econst:ti_sysbios_BIOS_clockEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_BIOS_clockEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_BIOS_clockEnabled__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_BIOS_heapSize__C, ".econst:ti_sysbios_BIOS_heapSize__C");
asm("	.sect \".econst:ti_sysbios_BIOS_heapSize__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_BIOS_heapSize__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_BIOS_heapSize__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_BIOS_heapSection__C, ".econst:ti_sysbios_BIOS_heapSection__C");
asm("	.sect \".econst:ti_sysbios_BIOS_heapSection__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_BIOS_heapSection__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_BIOS_heapSection__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_BIOS_installedErrorHook__C, ".econst:ti_sysbios_BIOS_installedErrorHook__C");
asm("	.sect \".econst:ti_sysbios_BIOS_installedErrorHook__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_BIOS_installedErrorHook__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_BIOS_installedErrorHook__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c28_Hwi_Object__DESC__C, ".econst:ti_sysbios_family_c28_Hwi_Object__DESC__C");
asm("	.sect \".econst:ti_sysbios_family_c28_Hwi_Object__DESC__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_Hwi_Object__DESC__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_Hwi_Object__DESC__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c28_Hwi_Object__PARAMS__C, ".econst:ti_sysbios_family_c28_Hwi_Object__PARAMS__C");
asm("	.sect \".econst:ti_sysbios_family_c28_Hwi_Object__PARAMS__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_Hwi_Object__PARAMS__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_Hwi_Object__PARAMS__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c28_Hwi_Module__diagsEnabled__C, ".econst:ti_sysbios_family_c28_Hwi_Module__diagsEnabled__C");
asm("	.sect \".econst:ti_sysbios_family_c28_Hwi_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_Hwi_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_Hwi_Module__diagsEnabled__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c28_Hwi_Module__diagsIncluded__C, ".econst:ti_sysbios_family_c28_Hwi_Module__diagsIncluded__C");
asm("	.sect \".econst:ti_sysbios_family_c28_Hwi_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_Hwi_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_Hwi_Module__diagsIncluded__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c28_Hwi_Module__diagsMask__C, ".econst:ti_sysbios_family_c28_Hwi_Module__diagsMask__C");
asm("	.sect \".econst:ti_sysbios_family_c28_Hwi_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_Hwi_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_Hwi_Module__diagsMask__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c28_Hwi_Module__gateObj__C, ".econst:ti_sysbios_family_c28_Hwi_Module__gateObj__C");
asm("	.sect \".econst:ti_sysbios_family_c28_Hwi_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_Hwi_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_Hwi_Module__gateObj__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c28_Hwi_Module__gatePrms__C, ".econst:ti_sysbios_family_c28_Hwi_Module__gatePrms__C");
asm("	.sect \".econst:ti_sysbios_family_c28_Hwi_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_Hwi_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_Hwi_Module__gatePrms__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c28_Hwi_Module__id__C, ".econst:ti_sysbios_family_c28_Hwi_Module__id__C");
asm("	.sect \".econst:ti_sysbios_family_c28_Hwi_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_Hwi_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_Hwi_Module__id__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c28_Hwi_Module__loggerDefined__C, ".econst:ti_sysbios_family_c28_Hwi_Module__loggerDefined__C");
asm("	.sect \".econst:ti_sysbios_family_c28_Hwi_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_Hwi_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_Hwi_Module__loggerDefined__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c28_Hwi_Module__loggerObj__C, ".econst:ti_sysbios_family_c28_Hwi_Module__loggerObj__C");
asm("	.sect \".econst:ti_sysbios_family_c28_Hwi_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_Hwi_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_Hwi_Module__loggerObj__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c28_Hwi_Module__loggerFxn0__C, ".econst:ti_sysbios_family_c28_Hwi_Module__loggerFxn0__C");
asm("	.sect \".econst:ti_sysbios_family_c28_Hwi_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_Hwi_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_Hwi_Module__loggerFxn0__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c28_Hwi_Module__loggerFxn1__C, ".econst:ti_sysbios_family_c28_Hwi_Module__loggerFxn1__C");
asm("	.sect \".econst:ti_sysbios_family_c28_Hwi_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_Hwi_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_Hwi_Module__loggerFxn1__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c28_Hwi_Module__loggerFxn2__C, ".econst:ti_sysbios_family_c28_Hwi_Module__loggerFxn2__C");
asm("	.sect \".econst:ti_sysbios_family_c28_Hwi_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_Hwi_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_Hwi_Module__loggerFxn2__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c28_Hwi_Module__loggerFxn4__C, ".econst:ti_sysbios_family_c28_Hwi_Module__loggerFxn4__C");
asm("	.sect \".econst:ti_sysbios_family_c28_Hwi_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_Hwi_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_Hwi_Module__loggerFxn4__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c28_Hwi_Module__loggerFxn8__C, ".econst:ti_sysbios_family_c28_Hwi_Module__loggerFxn8__C");
asm("	.sect \".econst:ti_sysbios_family_c28_Hwi_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_Hwi_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_Hwi_Module__loggerFxn8__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c28_Hwi_Module__startupDoneFxn__C, ".econst:ti_sysbios_family_c28_Hwi_Module__startupDoneFxn__C");
asm("	.sect \".econst:ti_sysbios_family_c28_Hwi_Module__startupDoneFxn__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_Hwi_Module__startupDoneFxn__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_Hwi_Module__startupDoneFxn__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c28_Hwi_Object__count__C, ".econst:ti_sysbios_family_c28_Hwi_Object__count__C");
asm("	.sect \".econst:ti_sysbios_family_c28_Hwi_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_Hwi_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_Hwi_Object__count__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c28_Hwi_Object__heap__C, ".econst:ti_sysbios_family_c28_Hwi_Object__heap__C");
asm("	.sect \".econst:ti_sysbios_family_c28_Hwi_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_Hwi_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_Hwi_Object__heap__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c28_Hwi_Object__sizeof__C, ".econst:ti_sysbios_family_c28_Hwi_Object__sizeof__C");
asm("	.sect \".econst:ti_sysbios_family_c28_Hwi_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_Hwi_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_Hwi_Object__sizeof__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c28_Hwi_Object__table__C, ".econst:ti_sysbios_family_c28_Hwi_Object__table__C");
asm("	.sect \".econst:ti_sysbios_family_c28_Hwi_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_Hwi_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_Hwi_Object__table__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c28_Hwi_dispatcherAutoNestingSupport__C, ".econst:ti_sysbios_family_c28_Hwi_dispatcherAutoNestingSupport__C");
asm("	.sect \".econst:ti_sysbios_family_c28_Hwi_dispatcherAutoNestingSupport__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_Hwi_dispatcherAutoNestingSupport__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_Hwi_dispatcherAutoNestingSupport__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c28_Hwi_dispatcherSwiSupport__C, ".econst:ti_sysbios_family_c28_Hwi_dispatcherSwiSupport__C");
asm("	.sect \".econst:ti_sysbios_family_c28_Hwi_dispatcherSwiSupport__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_Hwi_dispatcherSwiSupport__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_Hwi_dispatcherSwiSupport__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c28_Hwi_dispatcherTaskSupport__C, ".econst:ti_sysbios_family_c28_Hwi_dispatcherTaskSupport__C");
asm("	.sect \".econst:ti_sysbios_family_c28_Hwi_dispatcherTaskSupport__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_Hwi_dispatcherTaskSupport__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_Hwi_dispatcherTaskSupport__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c28_Hwi_dispatcherIrpTrackingSupport__C, ".econst:ti_sysbios_family_c28_Hwi_dispatcherIrpTrackingSupport__C");
asm("	.sect \".econst:ti_sysbios_family_c28_Hwi_dispatcherIrpTrackingSupport__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_Hwi_dispatcherIrpTrackingSupport__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_Hwi_dispatcherIrpTrackingSupport__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c28_Hwi_A_badIntNum__C, ".econst:ti_sysbios_family_c28_Hwi_A_badIntNum__C");
asm("	.sect \".econst:ti_sysbios_family_c28_Hwi_A_badIntNum__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_Hwi_A_badIntNum__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_Hwi_A_badIntNum__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c28_Hwi_A_invalidArg__C, ".econst:ti_sysbios_family_c28_Hwi_A_invalidArg__C");
asm("	.sect \".econst:ti_sysbios_family_c28_Hwi_A_invalidArg__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_Hwi_A_invalidArg__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_Hwi_A_invalidArg__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c28_Hwi_A_zeroLatencyConflict__C, ".econst:ti_sysbios_family_c28_Hwi_A_zeroLatencyConflict__C");
asm("	.sect \".econst:ti_sysbios_family_c28_Hwi_A_zeroLatencyConflict__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_Hwi_A_zeroLatencyConflict__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_Hwi_A_zeroLatencyConflict__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c28_Hwi_E_unpluggedInterrupt__C, ".econst:ti_sysbios_family_c28_Hwi_E_unpluggedInterrupt__C");
asm("	.sect \".econst:ti_sysbios_family_c28_Hwi_E_unpluggedInterrupt__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_Hwi_E_unpluggedInterrupt__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_Hwi_E_unpluggedInterrupt__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c28_Hwi_E_alreadyDefined__C, ".econst:ti_sysbios_family_c28_Hwi_E_alreadyDefined__C");
asm("	.sect \".econst:ti_sysbios_family_c28_Hwi_E_alreadyDefined__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_Hwi_E_alreadyDefined__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_Hwi_E_alreadyDefined__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c28_Hwi_zeroLatencyIERMask__C, ".econst:ti_sysbios_family_c28_Hwi_zeroLatencyIERMask__C");
asm("	.sect \".econst:ti_sysbios_family_c28_Hwi_zeroLatencyIERMask__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_Hwi_zeroLatencyIERMask__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_Hwi_zeroLatencyIERMask__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c28_Hwi_LM_begin__C, ".econst:ti_sysbios_family_c28_Hwi_LM_begin__C");
asm("	.sect \".econst:ti_sysbios_family_c28_Hwi_LM_begin__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_Hwi_LM_begin__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_Hwi_LM_begin__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c28_Hwi_LD_end__C, ".econst:ti_sysbios_family_c28_Hwi_LD_end__C");
asm("	.sect \".econst:ti_sysbios_family_c28_Hwi_LD_end__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_Hwi_LD_end__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_Hwi_LD_end__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c28_Hwi_swiDisable__C, ".econst:ti_sysbios_family_c28_Hwi_swiDisable__C");
asm("	.sect \".econst:ti_sysbios_family_c28_Hwi_swiDisable__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_Hwi_swiDisable__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_Hwi_swiDisable__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c28_Hwi_swiRestoreHwi__C, ".econst:ti_sysbios_family_c28_Hwi_swiRestoreHwi__C");
asm("	.sect \".econst:ti_sysbios_family_c28_Hwi_swiRestoreHwi__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_Hwi_swiRestoreHwi__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_Hwi_swiRestoreHwi__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c28_Hwi_taskDisable__C, ".econst:ti_sysbios_family_c28_Hwi_taskDisable__C");
asm("	.sect \".econst:ti_sysbios_family_c28_Hwi_taskDisable__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_Hwi_taskDisable__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_Hwi_taskDisable__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c28_Hwi_taskRestoreHwi__C, ".econst:ti_sysbios_family_c28_Hwi_taskRestoreHwi__C");
asm("	.sect \".econst:ti_sysbios_family_c28_Hwi_taskRestoreHwi__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_Hwi_taskRestoreHwi__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_Hwi_taskRestoreHwi__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c28_Hwi_hooks__C, ".econst:ti_sysbios_family_c28_Hwi_hooks__C");
asm("	.sect \".econst:ti_sysbios_family_c28_Hwi_hooks__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_Hwi_hooks__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_Hwi_hooks__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c28_IntrinsicsSupport_Module__diagsEnabled__C, ".econst:ti_sysbios_family_c28_IntrinsicsSupport_Module__diagsEnabled__C");
asm("	.sect \".econst:ti_sysbios_family_c28_IntrinsicsSupport_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_IntrinsicsSupport_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_IntrinsicsSupport_Module__diagsEnabled__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c28_IntrinsicsSupport_Module__diagsIncluded__C, ".econst:ti_sysbios_family_c28_IntrinsicsSupport_Module__diagsIncluded__C");
asm("	.sect \".econst:ti_sysbios_family_c28_IntrinsicsSupport_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_IntrinsicsSupport_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_IntrinsicsSupport_Module__diagsIncluded__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c28_IntrinsicsSupport_Module__diagsMask__C, ".econst:ti_sysbios_family_c28_IntrinsicsSupport_Module__diagsMask__C");
asm("	.sect \".econst:ti_sysbios_family_c28_IntrinsicsSupport_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_IntrinsicsSupport_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_IntrinsicsSupport_Module__diagsMask__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c28_IntrinsicsSupport_Module__gateObj__C, ".econst:ti_sysbios_family_c28_IntrinsicsSupport_Module__gateObj__C");
asm("	.sect \".econst:ti_sysbios_family_c28_IntrinsicsSupport_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_IntrinsicsSupport_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_IntrinsicsSupport_Module__gateObj__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c28_IntrinsicsSupport_Module__gatePrms__C, ".econst:ti_sysbios_family_c28_IntrinsicsSupport_Module__gatePrms__C");
asm("	.sect \".econst:ti_sysbios_family_c28_IntrinsicsSupport_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_IntrinsicsSupport_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_IntrinsicsSupport_Module__gatePrms__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c28_IntrinsicsSupport_Module__id__C, ".econst:ti_sysbios_family_c28_IntrinsicsSupport_Module__id__C");
asm("	.sect \".econst:ti_sysbios_family_c28_IntrinsicsSupport_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_IntrinsicsSupport_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_IntrinsicsSupport_Module__id__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c28_IntrinsicsSupport_Module__loggerDefined__C, ".econst:ti_sysbios_family_c28_IntrinsicsSupport_Module__loggerDefined__C");
asm("	.sect \".econst:ti_sysbios_family_c28_IntrinsicsSupport_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_IntrinsicsSupport_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_IntrinsicsSupport_Module__loggerDefined__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c28_IntrinsicsSupport_Module__loggerObj__C, ".econst:ti_sysbios_family_c28_IntrinsicsSupport_Module__loggerObj__C");
asm("	.sect \".econst:ti_sysbios_family_c28_IntrinsicsSupport_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_IntrinsicsSupport_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_IntrinsicsSupport_Module__loggerObj__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c28_IntrinsicsSupport_Module__loggerFxn0__C, ".econst:ti_sysbios_family_c28_IntrinsicsSupport_Module__loggerFxn0__C");
asm("	.sect \".econst:ti_sysbios_family_c28_IntrinsicsSupport_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_IntrinsicsSupport_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_IntrinsicsSupport_Module__loggerFxn0__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c28_IntrinsicsSupport_Module__loggerFxn1__C, ".econst:ti_sysbios_family_c28_IntrinsicsSupport_Module__loggerFxn1__C");
asm("	.sect \".econst:ti_sysbios_family_c28_IntrinsicsSupport_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_IntrinsicsSupport_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_IntrinsicsSupport_Module__loggerFxn1__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c28_IntrinsicsSupport_Module__loggerFxn2__C, ".econst:ti_sysbios_family_c28_IntrinsicsSupport_Module__loggerFxn2__C");
asm("	.sect \".econst:ti_sysbios_family_c28_IntrinsicsSupport_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_IntrinsicsSupport_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_IntrinsicsSupport_Module__loggerFxn2__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c28_IntrinsicsSupport_Module__loggerFxn4__C, ".econst:ti_sysbios_family_c28_IntrinsicsSupport_Module__loggerFxn4__C");
asm("	.sect \".econst:ti_sysbios_family_c28_IntrinsicsSupport_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_IntrinsicsSupport_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_IntrinsicsSupport_Module__loggerFxn4__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c28_IntrinsicsSupport_Module__loggerFxn8__C, ".econst:ti_sysbios_family_c28_IntrinsicsSupport_Module__loggerFxn8__C");
asm("	.sect \".econst:ti_sysbios_family_c28_IntrinsicsSupport_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_IntrinsicsSupport_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_IntrinsicsSupport_Module__loggerFxn8__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c28_IntrinsicsSupport_Module__startupDoneFxn__C, ".econst:ti_sysbios_family_c28_IntrinsicsSupport_Module__startupDoneFxn__C");
asm("	.sect \".econst:ti_sysbios_family_c28_IntrinsicsSupport_Module__startupDoneFxn__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_IntrinsicsSupport_Module__startupDoneFxn__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_IntrinsicsSupport_Module__startupDoneFxn__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c28_IntrinsicsSupport_Object__count__C, ".econst:ti_sysbios_family_c28_IntrinsicsSupport_Object__count__C");
asm("	.sect \".econst:ti_sysbios_family_c28_IntrinsicsSupport_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_IntrinsicsSupport_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_IntrinsicsSupport_Object__count__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c28_IntrinsicsSupport_Object__heap__C, ".econst:ti_sysbios_family_c28_IntrinsicsSupport_Object__heap__C");
asm("	.sect \".econst:ti_sysbios_family_c28_IntrinsicsSupport_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_IntrinsicsSupport_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_IntrinsicsSupport_Object__heap__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c28_IntrinsicsSupport_Object__sizeof__C, ".econst:ti_sysbios_family_c28_IntrinsicsSupport_Object__sizeof__C");
asm("	.sect \".econst:ti_sysbios_family_c28_IntrinsicsSupport_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_IntrinsicsSupport_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_IntrinsicsSupport_Object__sizeof__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c28_IntrinsicsSupport_Object__table__C, ".econst:ti_sysbios_family_c28_IntrinsicsSupport_Object__table__C");
asm("	.sect \".econst:ti_sysbios_family_c28_IntrinsicsSupport_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_IntrinsicsSupport_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_IntrinsicsSupport_Object__table__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c28_TaskSupport_Module__diagsEnabled__C, ".econst:ti_sysbios_family_c28_TaskSupport_Module__diagsEnabled__C");
asm("	.sect \".econst:ti_sysbios_family_c28_TaskSupport_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_TaskSupport_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_TaskSupport_Module__diagsEnabled__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c28_TaskSupport_Module__diagsIncluded__C, ".econst:ti_sysbios_family_c28_TaskSupport_Module__diagsIncluded__C");
asm("	.sect \".econst:ti_sysbios_family_c28_TaskSupport_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_TaskSupport_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_TaskSupport_Module__diagsIncluded__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c28_TaskSupport_Module__diagsMask__C, ".econst:ti_sysbios_family_c28_TaskSupport_Module__diagsMask__C");
asm("	.sect \".econst:ti_sysbios_family_c28_TaskSupport_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_TaskSupport_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_TaskSupport_Module__diagsMask__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c28_TaskSupport_Module__gateObj__C, ".econst:ti_sysbios_family_c28_TaskSupport_Module__gateObj__C");
asm("	.sect \".econst:ti_sysbios_family_c28_TaskSupport_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_TaskSupport_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_TaskSupport_Module__gateObj__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c28_TaskSupport_Module__gatePrms__C, ".econst:ti_sysbios_family_c28_TaskSupport_Module__gatePrms__C");
asm("	.sect \".econst:ti_sysbios_family_c28_TaskSupport_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_TaskSupport_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_TaskSupport_Module__gatePrms__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c28_TaskSupport_Module__id__C, ".econst:ti_sysbios_family_c28_TaskSupport_Module__id__C");
asm("	.sect \".econst:ti_sysbios_family_c28_TaskSupport_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_TaskSupport_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_TaskSupport_Module__id__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c28_TaskSupport_Module__loggerDefined__C, ".econst:ti_sysbios_family_c28_TaskSupport_Module__loggerDefined__C");
asm("	.sect \".econst:ti_sysbios_family_c28_TaskSupport_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_TaskSupport_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_TaskSupport_Module__loggerDefined__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c28_TaskSupport_Module__loggerObj__C, ".econst:ti_sysbios_family_c28_TaskSupport_Module__loggerObj__C");
asm("	.sect \".econst:ti_sysbios_family_c28_TaskSupport_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_TaskSupport_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_TaskSupport_Module__loggerObj__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c28_TaskSupport_Module__loggerFxn0__C, ".econst:ti_sysbios_family_c28_TaskSupport_Module__loggerFxn0__C");
asm("	.sect \".econst:ti_sysbios_family_c28_TaskSupport_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_TaskSupport_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_TaskSupport_Module__loggerFxn0__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c28_TaskSupport_Module__loggerFxn1__C, ".econst:ti_sysbios_family_c28_TaskSupport_Module__loggerFxn1__C");
asm("	.sect \".econst:ti_sysbios_family_c28_TaskSupport_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_TaskSupport_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_TaskSupport_Module__loggerFxn1__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c28_TaskSupport_Module__loggerFxn2__C, ".econst:ti_sysbios_family_c28_TaskSupport_Module__loggerFxn2__C");
asm("	.sect \".econst:ti_sysbios_family_c28_TaskSupport_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_TaskSupport_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_TaskSupport_Module__loggerFxn2__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c28_TaskSupport_Module__loggerFxn4__C, ".econst:ti_sysbios_family_c28_TaskSupport_Module__loggerFxn4__C");
asm("	.sect \".econst:ti_sysbios_family_c28_TaskSupport_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_TaskSupport_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_TaskSupport_Module__loggerFxn4__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c28_TaskSupport_Module__loggerFxn8__C, ".econst:ti_sysbios_family_c28_TaskSupport_Module__loggerFxn8__C");
asm("	.sect \".econst:ti_sysbios_family_c28_TaskSupport_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_TaskSupport_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_TaskSupport_Module__loggerFxn8__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c28_TaskSupport_Module__startupDoneFxn__C, ".econst:ti_sysbios_family_c28_TaskSupport_Module__startupDoneFxn__C");
asm("	.sect \".econst:ti_sysbios_family_c28_TaskSupport_Module__startupDoneFxn__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_TaskSupport_Module__startupDoneFxn__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_TaskSupport_Module__startupDoneFxn__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c28_TaskSupport_Object__count__C, ".econst:ti_sysbios_family_c28_TaskSupport_Object__count__C");
asm("	.sect \".econst:ti_sysbios_family_c28_TaskSupport_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_TaskSupport_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_TaskSupport_Object__count__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c28_TaskSupport_Object__heap__C, ".econst:ti_sysbios_family_c28_TaskSupport_Object__heap__C");
asm("	.sect \".econst:ti_sysbios_family_c28_TaskSupport_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_TaskSupport_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_TaskSupport_Object__heap__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c28_TaskSupport_Object__sizeof__C, ".econst:ti_sysbios_family_c28_TaskSupport_Object__sizeof__C");
asm("	.sect \".econst:ti_sysbios_family_c28_TaskSupport_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_TaskSupport_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_TaskSupport_Object__sizeof__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c28_TaskSupport_Object__table__C, ".econst:ti_sysbios_family_c28_TaskSupport_Object__table__C");
asm("	.sect \".econst:ti_sysbios_family_c28_TaskSupport_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_TaskSupport_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_TaskSupport_Object__table__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c28_TaskSupport_defaultStackSize__C, ".econst:ti_sysbios_family_c28_TaskSupport_defaultStackSize__C");
asm("	.sect \".econst:ti_sysbios_family_c28_TaskSupport_defaultStackSize__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_TaskSupport_defaultStackSize__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_TaskSupport_defaultStackSize__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c28_TaskSupport_stackAlignment__C, ".econst:ti_sysbios_family_c28_TaskSupport_stackAlignment__C");
asm("	.sect \".econst:ti_sysbios_family_c28_TaskSupport_stackAlignment__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_TaskSupport_stackAlignment__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_TaskSupport_stackAlignment__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c28_TaskSupport_E_invalidStack__C, ".econst:ti_sysbios_family_c28_TaskSupport_E_invalidStack__C");
asm("	.sect \".econst:ti_sysbios_family_c28_TaskSupport_E_invalidStack__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_TaskSupport_E_invalidStack__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_TaskSupport_E_invalidStack__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c28_Timer_Object__DESC__C, ".econst:ti_sysbios_family_c28_Timer_Object__DESC__C");
asm("	.sect \".econst:ti_sysbios_family_c28_Timer_Object__DESC__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_Timer_Object__DESC__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_Timer_Object__DESC__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c28_Timer_Object__PARAMS__C, ".econst:ti_sysbios_family_c28_Timer_Object__PARAMS__C");
asm("	.sect \".econst:ti_sysbios_family_c28_Timer_Object__PARAMS__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_Timer_Object__PARAMS__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_Timer_Object__PARAMS__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c28_Timer_Module__diagsEnabled__C, ".econst:ti_sysbios_family_c28_Timer_Module__diagsEnabled__C");
asm("	.sect \".econst:ti_sysbios_family_c28_Timer_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_Timer_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_Timer_Module__diagsEnabled__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c28_Timer_Module__diagsIncluded__C, ".econst:ti_sysbios_family_c28_Timer_Module__diagsIncluded__C");
asm("	.sect \".econst:ti_sysbios_family_c28_Timer_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_Timer_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_Timer_Module__diagsIncluded__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c28_Timer_Module__diagsMask__C, ".econst:ti_sysbios_family_c28_Timer_Module__diagsMask__C");
asm("	.sect \".econst:ti_sysbios_family_c28_Timer_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_Timer_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_Timer_Module__diagsMask__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c28_Timer_Module__gateObj__C, ".econst:ti_sysbios_family_c28_Timer_Module__gateObj__C");
asm("	.sect \".econst:ti_sysbios_family_c28_Timer_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_Timer_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_Timer_Module__gateObj__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c28_Timer_Module__gatePrms__C, ".econst:ti_sysbios_family_c28_Timer_Module__gatePrms__C");
asm("	.sect \".econst:ti_sysbios_family_c28_Timer_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_Timer_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_Timer_Module__gatePrms__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c28_Timer_Module__id__C, ".econst:ti_sysbios_family_c28_Timer_Module__id__C");
asm("	.sect \".econst:ti_sysbios_family_c28_Timer_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_Timer_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_Timer_Module__id__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c28_Timer_Module__loggerDefined__C, ".econst:ti_sysbios_family_c28_Timer_Module__loggerDefined__C");
asm("	.sect \".econst:ti_sysbios_family_c28_Timer_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_Timer_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_Timer_Module__loggerDefined__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c28_Timer_Module__loggerObj__C, ".econst:ti_sysbios_family_c28_Timer_Module__loggerObj__C");
asm("	.sect \".econst:ti_sysbios_family_c28_Timer_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_Timer_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_Timer_Module__loggerObj__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c28_Timer_Module__loggerFxn0__C, ".econst:ti_sysbios_family_c28_Timer_Module__loggerFxn0__C");
asm("	.sect \".econst:ti_sysbios_family_c28_Timer_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_Timer_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_Timer_Module__loggerFxn0__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c28_Timer_Module__loggerFxn1__C, ".econst:ti_sysbios_family_c28_Timer_Module__loggerFxn1__C");
asm("	.sect \".econst:ti_sysbios_family_c28_Timer_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_Timer_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_Timer_Module__loggerFxn1__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c28_Timer_Module__loggerFxn2__C, ".econst:ti_sysbios_family_c28_Timer_Module__loggerFxn2__C");
asm("	.sect \".econst:ti_sysbios_family_c28_Timer_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_Timer_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_Timer_Module__loggerFxn2__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c28_Timer_Module__loggerFxn4__C, ".econst:ti_sysbios_family_c28_Timer_Module__loggerFxn4__C");
asm("	.sect \".econst:ti_sysbios_family_c28_Timer_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_Timer_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_Timer_Module__loggerFxn4__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c28_Timer_Module__loggerFxn8__C, ".econst:ti_sysbios_family_c28_Timer_Module__loggerFxn8__C");
asm("	.sect \".econst:ti_sysbios_family_c28_Timer_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_Timer_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_Timer_Module__loggerFxn8__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c28_Timer_Module__startupDoneFxn__C, ".econst:ti_sysbios_family_c28_Timer_Module__startupDoneFxn__C");
asm("	.sect \".econst:ti_sysbios_family_c28_Timer_Module__startupDoneFxn__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_Timer_Module__startupDoneFxn__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_Timer_Module__startupDoneFxn__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c28_Timer_Object__count__C, ".econst:ti_sysbios_family_c28_Timer_Object__count__C");
asm("	.sect \".econst:ti_sysbios_family_c28_Timer_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_Timer_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_Timer_Object__count__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c28_Timer_Object__heap__C, ".econst:ti_sysbios_family_c28_Timer_Object__heap__C");
asm("	.sect \".econst:ti_sysbios_family_c28_Timer_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_Timer_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_Timer_Object__heap__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c28_Timer_Object__sizeof__C, ".econst:ti_sysbios_family_c28_Timer_Object__sizeof__C");
asm("	.sect \".econst:ti_sysbios_family_c28_Timer_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_Timer_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_Timer_Object__sizeof__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c28_Timer_Object__table__C, ".econst:ti_sysbios_family_c28_Timer_Object__table__C");
asm("	.sect \".econst:ti_sysbios_family_c28_Timer_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_Timer_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_Timer_Object__table__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c28_Timer_A_invalidTimer__C, ".econst:ti_sysbios_family_c28_Timer_A_invalidTimer__C");
asm("	.sect \".econst:ti_sysbios_family_c28_Timer_A_invalidTimer__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_Timer_A_invalidTimer__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_Timer_A_invalidTimer__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c28_Timer_E_notAvailable__C, ".econst:ti_sysbios_family_c28_Timer_E_notAvailable__C");
asm("	.sect \".econst:ti_sysbios_family_c28_Timer_E_notAvailable__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_Timer_E_notAvailable__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_Timer_E_notAvailable__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c28_Timer_A_invalidRunMode__C, ".econst:ti_sysbios_family_c28_Timer_A_invalidRunMode__C");
asm("	.sect \".econst:ti_sysbios_family_c28_Timer_A_invalidRunMode__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_Timer_A_invalidRunMode__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_Timer_A_invalidRunMode__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c28_Timer_A_invalidHwiMask__C, ".econst:ti_sysbios_family_c28_Timer_A_invalidHwiMask__C");
asm("	.sect \".econst:ti_sysbios_family_c28_Timer_A_invalidHwiMask__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_Timer_A_invalidHwiMask__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_Timer_A_invalidHwiMask__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c28_Timer_E_cannotSupport__C, ".econst:ti_sysbios_family_c28_Timer_E_cannotSupport__C");
asm("	.sect \".econst:ti_sysbios_family_c28_Timer_E_cannotSupport__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_Timer_E_cannotSupport__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_Timer_E_cannotSupport__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c28_Timer_anyMask__C, ".econst:ti_sysbios_family_c28_Timer_anyMask__C");
asm("	.sect \".econst:ti_sysbios_family_c28_Timer_anyMask__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_Timer_anyMask__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_Timer_anyMask__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c28_Timer_startupNeeded__C, ".econst:ti_sysbios_family_c28_Timer_startupNeeded__C");
asm("	.sect \".econst:ti_sysbios_family_c28_Timer_startupNeeded__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_family_c28_Timer_startupNeeded__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_family_c28_Timer_startupNeeded__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Object__DESC__C, ".econst:ti_sysbios_gates_GateHwi_Object__DESC__C");
asm("	.sect \".econst:ti_sysbios_gates_GateHwi_Object__DESC__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_gates_GateHwi_Object__DESC__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_gates_GateHwi_Object__DESC__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Object__PARAMS__C, ".econst:ti_sysbios_gates_GateHwi_Object__PARAMS__C");
asm("	.sect \".econst:ti_sysbios_gates_GateHwi_Object__PARAMS__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_gates_GateHwi_Object__PARAMS__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_gates_GateHwi_Object__PARAMS__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__diagsEnabled__C, ".econst:ti_sysbios_gates_GateHwi_Module__diagsEnabled__C");
asm("	.sect \".econst:ti_sysbios_gates_GateHwi_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_gates_GateHwi_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_gates_GateHwi_Module__diagsEnabled__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__diagsIncluded__C, ".econst:ti_sysbios_gates_GateHwi_Module__diagsIncluded__C");
asm("	.sect \".econst:ti_sysbios_gates_GateHwi_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_gates_GateHwi_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_gates_GateHwi_Module__diagsIncluded__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__diagsMask__C, ".econst:ti_sysbios_gates_GateHwi_Module__diagsMask__C");
asm("	.sect \".econst:ti_sysbios_gates_GateHwi_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_gates_GateHwi_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_gates_GateHwi_Module__diagsMask__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__gateObj__C, ".econst:ti_sysbios_gates_GateHwi_Module__gateObj__C");
asm("	.sect \".econst:ti_sysbios_gates_GateHwi_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_gates_GateHwi_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_gates_GateHwi_Module__gateObj__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__gatePrms__C, ".econst:ti_sysbios_gates_GateHwi_Module__gatePrms__C");
asm("	.sect \".econst:ti_sysbios_gates_GateHwi_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_gates_GateHwi_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_gates_GateHwi_Module__gatePrms__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__id__C, ".econst:ti_sysbios_gates_GateHwi_Module__id__C");
asm("	.sect \".econst:ti_sysbios_gates_GateHwi_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_gates_GateHwi_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_gates_GateHwi_Module__id__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerDefined__C, ".econst:ti_sysbios_gates_GateHwi_Module__loggerDefined__C");
asm("	.sect \".econst:ti_sysbios_gates_GateHwi_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_gates_GateHwi_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_gates_GateHwi_Module__loggerDefined__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerObj__C, ".econst:ti_sysbios_gates_GateHwi_Module__loggerObj__C");
asm("	.sect \".econst:ti_sysbios_gates_GateHwi_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_gates_GateHwi_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_gates_GateHwi_Module__loggerObj__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerFxn0__C, ".econst:ti_sysbios_gates_GateHwi_Module__loggerFxn0__C");
asm("	.sect \".econst:ti_sysbios_gates_GateHwi_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_gates_GateHwi_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_gates_GateHwi_Module__loggerFxn0__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerFxn1__C, ".econst:ti_sysbios_gates_GateHwi_Module__loggerFxn1__C");
asm("	.sect \".econst:ti_sysbios_gates_GateHwi_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_gates_GateHwi_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_gates_GateHwi_Module__loggerFxn1__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerFxn2__C, ".econst:ti_sysbios_gates_GateHwi_Module__loggerFxn2__C");
asm("	.sect \".econst:ti_sysbios_gates_GateHwi_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_gates_GateHwi_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_gates_GateHwi_Module__loggerFxn2__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerFxn4__C, ".econst:ti_sysbios_gates_GateHwi_Module__loggerFxn4__C");
asm("	.sect \".econst:ti_sysbios_gates_GateHwi_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_gates_GateHwi_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_gates_GateHwi_Module__loggerFxn4__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerFxn8__C, ".econst:ti_sysbios_gates_GateHwi_Module__loggerFxn8__C");
asm("	.sect \".econst:ti_sysbios_gates_GateHwi_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_gates_GateHwi_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_gates_GateHwi_Module__loggerFxn8__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__startupDoneFxn__C, ".econst:ti_sysbios_gates_GateHwi_Module__startupDoneFxn__C");
asm("	.sect \".econst:ti_sysbios_gates_GateHwi_Module__startupDoneFxn__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_gates_GateHwi_Module__startupDoneFxn__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_gates_GateHwi_Module__startupDoneFxn__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Object__count__C, ".econst:ti_sysbios_gates_GateHwi_Object__count__C");
asm("	.sect \".econst:ti_sysbios_gates_GateHwi_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_gates_GateHwi_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_gates_GateHwi_Object__count__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Object__heap__C, ".econst:ti_sysbios_gates_GateHwi_Object__heap__C");
asm("	.sect \".econst:ti_sysbios_gates_GateHwi_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_gates_GateHwi_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_gates_GateHwi_Object__heap__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Object__sizeof__C, ".econst:ti_sysbios_gates_GateHwi_Object__sizeof__C");
asm("	.sect \".econst:ti_sysbios_gates_GateHwi_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_gates_GateHwi_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_gates_GateHwi_Object__sizeof__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Object__table__C, ".econst:ti_sysbios_gates_GateHwi_Object__table__C");
asm("	.sect \".econst:ti_sysbios_gates_GateHwi_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_gates_GateHwi_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_gates_GateHwi_Object__table__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Object__DESC__C, ".econst:ti_sysbios_gates_GateMutex_Object__DESC__C");
asm("	.sect \".econst:ti_sysbios_gates_GateMutex_Object__DESC__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_gates_GateMutex_Object__DESC__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_gates_GateMutex_Object__DESC__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Object__PARAMS__C, ".econst:ti_sysbios_gates_GateMutex_Object__PARAMS__C");
asm("	.sect \".econst:ti_sysbios_gates_GateMutex_Object__PARAMS__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_gates_GateMutex_Object__PARAMS__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_gates_GateMutex_Object__PARAMS__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__diagsEnabled__C, ".econst:ti_sysbios_gates_GateMutex_Module__diagsEnabled__C");
asm("	.sect \".econst:ti_sysbios_gates_GateMutex_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_gates_GateMutex_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_gates_GateMutex_Module__diagsEnabled__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__diagsIncluded__C, ".econst:ti_sysbios_gates_GateMutex_Module__diagsIncluded__C");
asm("	.sect \".econst:ti_sysbios_gates_GateMutex_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_gates_GateMutex_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_gates_GateMutex_Module__diagsIncluded__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__diagsMask__C, ".econst:ti_sysbios_gates_GateMutex_Module__diagsMask__C");
asm("	.sect \".econst:ti_sysbios_gates_GateMutex_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_gates_GateMutex_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_gates_GateMutex_Module__diagsMask__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__gateObj__C, ".econst:ti_sysbios_gates_GateMutex_Module__gateObj__C");
asm("	.sect \".econst:ti_sysbios_gates_GateMutex_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_gates_GateMutex_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_gates_GateMutex_Module__gateObj__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__gatePrms__C, ".econst:ti_sysbios_gates_GateMutex_Module__gatePrms__C");
asm("	.sect \".econst:ti_sysbios_gates_GateMutex_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_gates_GateMutex_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_gates_GateMutex_Module__gatePrms__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__id__C, ".econst:ti_sysbios_gates_GateMutex_Module__id__C");
asm("	.sect \".econst:ti_sysbios_gates_GateMutex_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_gates_GateMutex_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_gates_GateMutex_Module__id__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerDefined__C, ".econst:ti_sysbios_gates_GateMutex_Module__loggerDefined__C");
asm("	.sect \".econst:ti_sysbios_gates_GateMutex_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_gates_GateMutex_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_gates_GateMutex_Module__loggerDefined__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerObj__C, ".econst:ti_sysbios_gates_GateMutex_Module__loggerObj__C");
asm("	.sect \".econst:ti_sysbios_gates_GateMutex_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_gates_GateMutex_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_gates_GateMutex_Module__loggerObj__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerFxn0__C, ".econst:ti_sysbios_gates_GateMutex_Module__loggerFxn0__C");
asm("	.sect \".econst:ti_sysbios_gates_GateMutex_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_gates_GateMutex_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_gates_GateMutex_Module__loggerFxn0__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerFxn1__C, ".econst:ti_sysbios_gates_GateMutex_Module__loggerFxn1__C");
asm("	.sect \".econst:ti_sysbios_gates_GateMutex_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_gates_GateMutex_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_gates_GateMutex_Module__loggerFxn1__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerFxn2__C, ".econst:ti_sysbios_gates_GateMutex_Module__loggerFxn2__C");
asm("	.sect \".econst:ti_sysbios_gates_GateMutex_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_gates_GateMutex_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_gates_GateMutex_Module__loggerFxn2__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerFxn4__C, ".econst:ti_sysbios_gates_GateMutex_Module__loggerFxn4__C");
asm("	.sect \".econst:ti_sysbios_gates_GateMutex_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_gates_GateMutex_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_gates_GateMutex_Module__loggerFxn4__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerFxn8__C, ".econst:ti_sysbios_gates_GateMutex_Module__loggerFxn8__C");
asm("	.sect \".econst:ti_sysbios_gates_GateMutex_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_gates_GateMutex_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_gates_GateMutex_Module__loggerFxn8__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__startupDoneFxn__C, ".econst:ti_sysbios_gates_GateMutex_Module__startupDoneFxn__C");
asm("	.sect \".econst:ti_sysbios_gates_GateMutex_Module__startupDoneFxn__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_gates_GateMutex_Module__startupDoneFxn__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_gates_GateMutex_Module__startupDoneFxn__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Object__count__C, ".econst:ti_sysbios_gates_GateMutex_Object__count__C");
asm("	.sect \".econst:ti_sysbios_gates_GateMutex_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_gates_GateMutex_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_gates_GateMutex_Object__count__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Object__heap__C, ".econst:ti_sysbios_gates_GateMutex_Object__heap__C");
asm("	.sect \".econst:ti_sysbios_gates_GateMutex_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_gates_GateMutex_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_gates_GateMutex_Object__heap__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Object__sizeof__C, ".econst:ti_sysbios_gates_GateMutex_Object__sizeof__C");
asm("	.sect \".econst:ti_sysbios_gates_GateMutex_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_gates_GateMutex_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_gates_GateMutex_Object__sizeof__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Object__table__C, ".econst:ti_sysbios_gates_GateMutex_Object__table__C");
asm("	.sect \".econst:ti_sysbios_gates_GateMutex_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_gates_GateMutex_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_gates_GateMutex_Object__table__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_A_badContext__C, ".econst:ti_sysbios_gates_GateMutex_A_badContext__C");
asm("	.sect \".econst:ti_sysbios_gates_GateMutex_A_badContext__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_gates_GateMutex_A_badContext__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_gates_GateMutex_A_badContext__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Object__DESC__C, ".econst:ti_sysbios_hal_Hwi_Object__DESC__C");
asm("	.sect \".econst:ti_sysbios_hal_Hwi_Object__DESC__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_hal_Hwi_Object__DESC__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_hal_Hwi_Object__DESC__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Object__PARAMS__C, ".econst:ti_sysbios_hal_Hwi_Object__PARAMS__C");
asm("	.sect \".econst:ti_sysbios_hal_Hwi_Object__PARAMS__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_hal_Hwi_Object__PARAMS__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_hal_Hwi_Object__PARAMS__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__diagsEnabled__C, ".econst:ti_sysbios_hal_Hwi_Module__diagsEnabled__C");
asm("	.sect \".econst:ti_sysbios_hal_Hwi_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_hal_Hwi_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_hal_Hwi_Module__diagsEnabled__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__diagsIncluded__C, ".econst:ti_sysbios_hal_Hwi_Module__diagsIncluded__C");
asm("	.sect \".econst:ti_sysbios_hal_Hwi_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_hal_Hwi_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_hal_Hwi_Module__diagsIncluded__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__diagsMask__C, ".econst:ti_sysbios_hal_Hwi_Module__diagsMask__C");
asm("	.sect \".econst:ti_sysbios_hal_Hwi_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_hal_Hwi_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_hal_Hwi_Module__diagsMask__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__gateObj__C, ".econst:ti_sysbios_hal_Hwi_Module__gateObj__C");
asm("	.sect \".econst:ti_sysbios_hal_Hwi_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_hal_Hwi_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_hal_Hwi_Module__gateObj__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__gatePrms__C, ".econst:ti_sysbios_hal_Hwi_Module__gatePrms__C");
asm("	.sect \".econst:ti_sysbios_hal_Hwi_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_hal_Hwi_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_hal_Hwi_Module__gatePrms__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__id__C, ".econst:ti_sysbios_hal_Hwi_Module__id__C");
asm("	.sect \".econst:ti_sysbios_hal_Hwi_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_hal_Hwi_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_hal_Hwi_Module__id__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerDefined__C, ".econst:ti_sysbios_hal_Hwi_Module__loggerDefined__C");
asm("	.sect \".econst:ti_sysbios_hal_Hwi_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_hal_Hwi_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_hal_Hwi_Module__loggerDefined__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerObj__C, ".econst:ti_sysbios_hal_Hwi_Module__loggerObj__C");
asm("	.sect \".econst:ti_sysbios_hal_Hwi_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_hal_Hwi_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_hal_Hwi_Module__loggerObj__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerFxn0__C, ".econst:ti_sysbios_hal_Hwi_Module__loggerFxn0__C");
asm("	.sect \".econst:ti_sysbios_hal_Hwi_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_hal_Hwi_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_hal_Hwi_Module__loggerFxn0__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerFxn1__C, ".econst:ti_sysbios_hal_Hwi_Module__loggerFxn1__C");
asm("	.sect \".econst:ti_sysbios_hal_Hwi_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_hal_Hwi_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_hal_Hwi_Module__loggerFxn1__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerFxn2__C, ".econst:ti_sysbios_hal_Hwi_Module__loggerFxn2__C");
asm("	.sect \".econst:ti_sysbios_hal_Hwi_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_hal_Hwi_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_hal_Hwi_Module__loggerFxn2__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerFxn4__C, ".econst:ti_sysbios_hal_Hwi_Module__loggerFxn4__C");
asm("	.sect \".econst:ti_sysbios_hal_Hwi_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_hal_Hwi_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_hal_Hwi_Module__loggerFxn4__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerFxn8__C, ".econst:ti_sysbios_hal_Hwi_Module__loggerFxn8__C");
asm("	.sect \".econst:ti_sysbios_hal_Hwi_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_hal_Hwi_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_hal_Hwi_Module__loggerFxn8__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__startupDoneFxn__C, ".econst:ti_sysbios_hal_Hwi_Module__startupDoneFxn__C");
asm("	.sect \".econst:ti_sysbios_hal_Hwi_Module__startupDoneFxn__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_hal_Hwi_Module__startupDoneFxn__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_hal_Hwi_Module__startupDoneFxn__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Object__count__C, ".econst:ti_sysbios_hal_Hwi_Object__count__C");
asm("	.sect \".econst:ti_sysbios_hal_Hwi_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_hal_Hwi_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_hal_Hwi_Object__count__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Object__heap__C, ".econst:ti_sysbios_hal_Hwi_Object__heap__C");
asm("	.sect \".econst:ti_sysbios_hal_Hwi_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_hal_Hwi_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_hal_Hwi_Object__heap__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Object__sizeof__C, ".econst:ti_sysbios_hal_Hwi_Object__sizeof__C");
asm("	.sect \".econst:ti_sysbios_hal_Hwi_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_hal_Hwi_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_hal_Hwi_Object__sizeof__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Object__table__C, ".econst:ti_sysbios_hal_Hwi_Object__table__C");
asm("	.sect \".econst:ti_sysbios_hal_Hwi_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_hal_Hwi_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_hal_Hwi_Object__table__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_hal_Hwi_dispatcherAutoNestingSupport__C, ".econst:ti_sysbios_hal_Hwi_dispatcherAutoNestingSupport__C");
asm("	.sect \".econst:ti_sysbios_hal_Hwi_dispatcherAutoNestingSupport__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_hal_Hwi_dispatcherAutoNestingSupport__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_hal_Hwi_dispatcherAutoNestingSupport__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_hal_Hwi_dispatcherSwiSupport__C, ".econst:ti_sysbios_hal_Hwi_dispatcherSwiSupport__C");
asm("	.sect \".econst:ti_sysbios_hal_Hwi_dispatcherSwiSupport__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_hal_Hwi_dispatcherSwiSupport__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_hal_Hwi_dispatcherSwiSupport__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_hal_Hwi_dispatcherTaskSupport__C, ".econst:ti_sysbios_hal_Hwi_dispatcherTaskSupport__C");
asm("	.sect \".econst:ti_sysbios_hal_Hwi_dispatcherTaskSupport__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_hal_Hwi_dispatcherTaskSupport__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_hal_Hwi_dispatcherTaskSupport__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_hal_Hwi_dispatcherIrpTrackingSupport__C, ".econst:ti_sysbios_hal_Hwi_dispatcherIrpTrackingSupport__C");
asm("	.sect \".econst:ti_sysbios_hal_Hwi_dispatcherIrpTrackingSupport__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_hal_Hwi_dispatcherIrpTrackingSupport__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_hal_Hwi_dispatcherIrpTrackingSupport__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_hal_Hwi_E_stackOverflow__C, ".econst:ti_sysbios_hal_Hwi_E_stackOverflow__C");
asm("	.sect \".econst:ti_sysbios_hal_Hwi_E_stackOverflow__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_hal_Hwi_E_stackOverflow__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_hal_Hwi_E_stackOverflow__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_hal_Timer_Object__DESC__C, ".econst:ti_sysbios_hal_Timer_Object__DESC__C");
asm("	.sect \".econst:ti_sysbios_hal_Timer_Object__DESC__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_hal_Timer_Object__DESC__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_hal_Timer_Object__DESC__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_hal_Timer_Object__PARAMS__C, ".econst:ti_sysbios_hal_Timer_Object__PARAMS__C");
asm("	.sect \".econst:ti_sysbios_hal_Timer_Object__PARAMS__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_hal_Timer_Object__PARAMS__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_hal_Timer_Object__PARAMS__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__diagsEnabled__C, ".econst:ti_sysbios_hal_Timer_Module__diagsEnabled__C");
asm("	.sect \".econst:ti_sysbios_hal_Timer_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_hal_Timer_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_hal_Timer_Module__diagsEnabled__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__diagsIncluded__C, ".econst:ti_sysbios_hal_Timer_Module__diagsIncluded__C");
asm("	.sect \".econst:ti_sysbios_hal_Timer_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_hal_Timer_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_hal_Timer_Module__diagsIncluded__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__diagsMask__C, ".econst:ti_sysbios_hal_Timer_Module__diagsMask__C");
asm("	.sect \".econst:ti_sysbios_hal_Timer_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_hal_Timer_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_hal_Timer_Module__diagsMask__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__gateObj__C, ".econst:ti_sysbios_hal_Timer_Module__gateObj__C");
asm("	.sect \".econst:ti_sysbios_hal_Timer_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_hal_Timer_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_hal_Timer_Module__gateObj__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__gatePrms__C, ".econst:ti_sysbios_hal_Timer_Module__gatePrms__C");
asm("	.sect \".econst:ti_sysbios_hal_Timer_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_hal_Timer_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_hal_Timer_Module__gatePrms__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__id__C, ".econst:ti_sysbios_hal_Timer_Module__id__C");
asm("	.sect \".econst:ti_sysbios_hal_Timer_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_hal_Timer_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_hal_Timer_Module__id__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__loggerDefined__C, ".econst:ti_sysbios_hal_Timer_Module__loggerDefined__C");
asm("	.sect \".econst:ti_sysbios_hal_Timer_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_hal_Timer_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_hal_Timer_Module__loggerDefined__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__loggerObj__C, ".econst:ti_sysbios_hal_Timer_Module__loggerObj__C");
asm("	.sect \".econst:ti_sysbios_hal_Timer_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_hal_Timer_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_hal_Timer_Module__loggerObj__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__loggerFxn0__C, ".econst:ti_sysbios_hal_Timer_Module__loggerFxn0__C");
asm("	.sect \".econst:ti_sysbios_hal_Timer_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_hal_Timer_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_hal_Timer_Module__loggerFxn0__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__loggerFxn1__C, ".econst:ti_sysbios_hal_Timer_Module__loggerFxn1__C");
asm("	.sect \".econst:ti_sysbios_hal_Timer_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_hal_Timer_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_hal_Timer_Module__loggerFxn1__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__loggerFxn2__C, ".econst:ti_sysbios_hal_Timer_Module__loggerFxn2__C");
asm("	.sect \".econst:ti_sysbios_hal_Timer_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_hal_Timer_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_hal_Timer_Module__loggerFxn2__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__loggerFxn4__C, ".econst:ti_sysbios_hal_Timer_Module__loggerFxn4__C");
asm("	.sect \".econst:ti_sysbios_hal_Timer_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_hal_Timer_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_hal_Timer_Module__loggerFxn4__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__loggerFxn8__C, ".econst:ti_sysbios_hal_Timer_Module__loggerFxn8__C");
asm("	.sect \".econst:ti_sysbios_hal_Timer_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_hal_Timer_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_hal_Timer_Module__loggerFxn8__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__startupDoneFxn__C, ".econst:ti_sysbios_hal_Timer_Module__startupDoneFxn__C");
asm("	.sect \".econst:ti_sysbios_hal_Timer_Module__startupDoneFxn__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_hal_Timer_Module__startupDoneFxn__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_hal_Timer_Module__startupDoneFxn__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_hal_Timer_Object__count__C, ".econst:ti_sysbios_hal_Timer_Object__count__C");
asm("	.sect \".econst:ti_sysbios_hal_Timer_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_hal_Timer_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_hal_Timer_Object__count__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_hal_Timer_Object__heap__C, ".econst:ti_sysbios_hal_Timer_Object__heap__C");
asm("	.sect \".econst:ti_sysbios_hal_Timer_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_hal_Timer_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_hal_Timer_Object__heap__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_hal_Timer_Object__sizeof__C, ".econst:ti_sysbios_hal_Timer_Object__sizeof__C");
asm("	.sect \".econst:ti_sysbios_hal_Timer_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_hal_Timer_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_hal_Timer_Object__sizeof__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_hal_Timer_Object__table__C, ".econst:ti_sysbios_hal_Timer_Object__table__C");
asm("	.sect \".econst:ti_sysbios_hal_Timer_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_hal_Timer_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_hal_Timer_Object__table__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Object__DESC__C, ".econst:ti_sysbios_heaps_HeapMem_Object__DESC__C");
asm("	.sect \".econst:ti_sysbios_heaps_HeapMem_Object__DESC__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_heaps_HeapMem_Object__DESC__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_heaps_HeapMem_Object__DESC__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Object__PARAMS__C, ".econst:ti_sysbios_heaps_HeapMem_Object__PARAMS__C");
asm("	.sect \".econst:ti_sysbios_heaps_HeapMem_Object__PARAMS__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_heaps_HeapMem_Object__PARAMS__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_heaps_HeapMem_Object__PARAMS__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__diagsEnabled__C, ".econst:ti_sysbios_heaps_HeapMem_Module__diagsEnabled__C");
asm("	.sect \".econst:ti_sysbios_heaps_HeapMem_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_heaps_HeapMem_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_heaps_HeapMem_Module__diagsEnabled__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__diagsIncluded__C, ".econst:ti_sysbios_heaps_HeapMem_Module__diagsIncluded__C");
asm("	.sect \".econst:ti_sysbios_heaps_HeapMem_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_heaps_HeapMem_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_heaps_HeapMem_Module__diagsIncluded__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__diagsMask__C, ".econst:ti_sysbios_heaps_HeapMem_Module__diagsMask__C");
asm("	.sect \".econst:ti_sysbios_heaps_HeapMem_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_heaps_HeapMem_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_heaps_HeapMem_Module__diagsMask__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__gateObj__C, ".econst:ti_sysbios_heaps_HeapMem_Module__gateObj__C");
asm("	.sect \".econst:ti_sysbios_heaps_HeapMem_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_heaps_HeapMem_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_heaps_HeapMem_Module__gateObj__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__gatePrms__C, ".econst:ti_sysbios_heaps_HeapMem_Module__gatePrms__C");
asm("	.sect \".econst:ti_sysbios_heaps_HeapMem_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_heaps_HeapMem_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_heaps_HeapMem_Module__gatePrms__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__id__C, ".econst:ti_sysbios_heaps_HeapMem_Module__id__C");
asm("	.sect \".econst:ti_sysbios_heaps_HeapMem_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_heaps_HeapMem_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_heaps_HeapMem_Module__id__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__loggerDefined__C, ".econst:ti_sysbios_heaps_HeapMem_Module__loggerDefined__C");
asm("	.sect \".econst:ti_sysbios_heaps_HeapMem_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_heaps_HeapMem_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_heaps_HeapMem_Module__loggerDefined__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__loggerObj__C, ".econst:ti_sysbios_heaps_HeapMem_Module__loggerObj__C");
asm("	.sect \".econst:ti_sysbios_heaps_HeapMem_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_heaps_HeapMem_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_heaps_HeapMem_Module__loggerObj__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__loggerFxn0__C, ".econst:ti_sysbios_heaps_HeapMem_Module__loggerFxn0__C");
asm("	.sect \".econst:ti_sysbios_heaps_HeapMem_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_heaps_HeapMem_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_heaps_HeapMem_Module__loggerFxn0__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__loggerFxn1__C, ".econst:ti_sysbios_heaps_HeapMem_Module__loggerFxn1__C");
asm("	.sect \".econst:ti_sysbios_heaps_HeapMem_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_heaps_HeapMem_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_heaps_HeapMem_Module__loggerFxn1__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__loggerFxn2__C, ".econst:ti_sysbios_heaps_HeapMem_Module__loggerFxn2__C");
asm("	.sect \".econst:ti_sysbios_heaps_HeapMem_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_heaps_HeapMem_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_heaps_HeapMem_Module__loggerFxn2__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__loggerFxn4__C, ".econst:ti_sysbios_heaps_HeapMem_Module__loggerFxn4__C");
asm("	.sect \".econst:ti_sysbios_heaps_HeapMem_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_heaps_HeapMem_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_heaps_HeapMem_Module__loggerFxn4__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__loggerFxn8__C, ".econst:ti_sysbios_heaps_HeapMem_Module__loggerFxn8__C");
asm("	.sect \".econst:ti_sysbios_heaps_HeapMem_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_heaps_HeapMem_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_heaps_HeapMem_Module__loggerFxn8__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__startupDoneFxn__C, ".econst:ti_sysbios_heaps_HeapMem_Module__startupDoneFxn__C");
asm("	.sect \".econst:ti_sysbios_heaps_HeapMem_Module__startupDoneFxn__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_heaps_HeapMem_Module__startupDoneFxn__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_heaps_HeapMem_Module__startupDoneFxn__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Object__count__C, ".econst:ti_sysbios_heaps_HeapMem_Object__count__C");
asm("	.sect \".econst:ti_sysbios_heaps_HeapMem_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_heaps_HeapMem_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_heaps_HeapMem_Object__count__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Object__heap__C, ".econst:ti_sysbios_heaps_HeapMem_Object__heap__C");
asm("	.sect \".econst:ti_sysbios_heaps_HeapMem_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_heaps_HeapMem_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_heaps_HeapMem_Object__heap__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Object__sizeof__C, ".econst:ti_sysbios_heaps_HeapMem_Object__sizeof__C");
asm("	.sect \".econst:ti_sysbios_heaps_HeapMem_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_heaps_HeapMem_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_heaps_HeapMem_Object__sizeof__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Object__table__C, ".econst:ti_sysbios_heaps_HeapMem_Object__table__C");
asm("	.sect \".econst:ti_sysbios_heaps_HeapMem_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_heaps_HeapMem_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_heaps_HeapMem_Object__table__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_A_zeroBlock__C, ".econst:ti_sysbios_heaps_HeapMem_A_zeroBlock__C");
asm("	.sect \".econst:ti_sysbios_heaps_HeapMem_A_zeroBlock__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_heaps_HeapMem_A_zeroBlock__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_heaps_HeapMem_A_zeroBlock__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_A_heapSize__C, ".econst:ti_sysbios_heaps_HeapMem_A_heapSize__C");
asm("	.sect \".econst:ti_sysbios_heaps_HeapMem_A_heapSize__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_heaps_HeapMem_A_heapSize__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_heaps_HeapMem_A_heapSize__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_A_align__C, ".econst:ti_sysbios_heaps_HeapMem_A_align__C");
asm("	.sect \".econst:ti_sysbios_heaps_HeapMem_A_align__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_heaps_HeapMem_A_align__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_heaps_HeapMem_A_align__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_E_memory__C, ".econst:ti_sysbios_heaps_HeapMem_E_memory__C");
asm("	.sect \".econst:ti_sysbios_heaps_HeapMem_E_memory__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_heaps_HeapMem_E_memory__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_heaps_HeapMem_E_memory__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_A_invalidFree__C, ".econst:ti_sysbios_heaps_HeapMem_A_invalidFree__C");
asm("	.sect \".econst:ti_sysbios_heaps_HeapMem_A_invalidFree__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_heaps_HeapMem_A_invalidFree__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_heaps_HeapMem_A_invalidFree__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_reqAlign__C, ".econst:ti_sysbios_heaps_HeapMem_reqAlign__C");
asm("	.sect \".econst:ti_sysbios_heaps_HeapMem_reqAlign__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_heaps_HeapMem_reqAlign__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_heaps_HeapMem_reqAlign__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_reqAlignMask__C, ".econst:ti_sysbios_heaps_HeapMem_reqAlignMask__C");
asm("	.sect \".econst:ti_sysbios_heaps_HeapMem_reqAlignMask__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_heaps_HeapMem_reqAlignMask__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_heaps_HeapMem_reqAlignMask__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Clock_Object__DESC__C, ".econst:ti_sysbios_knl_Clock_Object__DESC__C");
asm("	.sect \".econst:ti_sysbios_knl_Clock_Object__DESC__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Clock_Object__DESC__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Clock_Object__DESC__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Clock_Object__PARAMS__C, ".econst:ti_sysbios_knl_Clock_Object__PARAMS__C");
asm("	.sect \".econst:ti_sysbios_knl_Clock_Object__PARAMS__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Clock_Object__PARAMS__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Clock_Object__PARAMS__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__diagsEnabled__C, ".econst:ti_sysbios_knl_Clock_Module__diagsEnabled__C");
asm("	.sect \".econst:ti_sysbios_knl_Clock_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Clock_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Clock_Module__diagsEnabled__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__diagsIncluded__C, ".econst:ti_sysbios_knl_Clock_Module__diagsIncluded__C");
asm("	.sect \".econst:ti_sysbios_knl_Clock_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Clock_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Clock_Module__diagsIncluded__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__diagsMask__C, ".econst:ti_sysbios_knl_Clock_Module__diagsMask__C");
asm("	.sect \".econst:ti_sysbios_knl_Clock_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Clock_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Clock_Module__diagsMask__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__gateObj__C, ".econst:ti_sysbios_knl_Clock_Module__gateObj__C");
asm("	.sect \".econst:ti_sysbios_knl_Clock_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Clock_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Clock_Module__gateObj__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__gatePrms__C, ".econst:ti_sysbios_knl_Clock_Module__gatePrms__C");
asm("	.sect \".econst:ti_sysbios_knl_Clock_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Clock_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Clock_Module__gatePrms__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__id__C, ".econst:ti_sysbios_knl_Clock_Module__id__C");
asm("	.sect \".econst:ti_sysbios_knl_Clock_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Clock_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Clock_Module__id__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerDefined__C, ".econst:ti_sysbios_knl_Clock_Module__loggerDefined__C");
asm("	.sect \".econst:ti_sysbios_knl_Clock_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Clock_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Clock_Module__loggerDefined__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerObj__C, ".econst:ti_sysbios_knl_Clock_Module__loggerObj__C");
asm("	.sect \".econst:ti_sysbios_knl_Clock_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Clock_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Clock_Module__loggerObj__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerFxn0__C, ".econst:ti_sysbios_knl_Clock_Module__loggerFxn0__C");
asm("	.sect \".econst:ti_sysbios_knl_Clock_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Clock_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Clock_Module__loggerFxn0__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerFxn1__C, ".econst:ti_sysbios_knl_Clock_Module__loggerFxn1__C");
asm("	.sect \".econst:ti_sysbios_knl_Clock_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Clock_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Clock_Module__loggerFxn1__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerFxn2__C, ".econst:ti_sysbios_knl_Clock_Module__loggerFxn2__C");
asm("	.sect \".econst:ti_sysbios_knl_Clock_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Clock_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Clock_Module__loggerFxn2__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerFxn4__C, ".econst:ti_sysbios_knl_Clock_Module__loggerFxn4__C");
asm("	.sect \".econst:ti_sysbios_knl_Clock_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Clock_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Clock_Module__loggerFxn4__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerFxn8__C, ".econst:ti_sysbios_knl_Clock_Module__loggerFxn8__C");
asm("	.sect \".econst:ti_sysbios_knl_Clock_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Clock_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Clock_Module__loggerFxn8__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__startupDoneFxn__C, ".econst:ti_sysbios_knl_Clock_Module__startupDoneFxn__C");
asm("	.sect \".econst:ti_sysbios_knl_Clock_Module__startupDoneFxn__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Clock_Module__startupDoneFxn__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Clock_Module__startupDoneFxn__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Clock_Object__count__C, ".econst:ti_sysbios_knl_Clock_Object__count__C");
asm("	.sect \".econst:ti_sysbios_knl_Clock_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Clock_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Clock_Object__count__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Clock_Object__heap__C, ".econst:ti_sysbios_knl_Clock_Object__heap__C");
asm("	.sect \".econst:ti_sysbios_knl_Clock_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Clock_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Clock_Object__heap__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Clock_Object__sizeof__C, ".econst:ti_sysbios_knl_Clock_Object__sizeof__C");
asm("	.sect \".econst:ti_sysbios_knl_Clock_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Clock_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Clock_Object__sizeof__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Clock_Object__table__C, ".econst:ti_sysbios_knl_Clock_Object__table__C");
asm("	.sect \".econst:ti_sysbios_knl_Clock_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Clock_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Clock_Object__table__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Clock_LW_delayed__C, ".econst:ti_sysbios_knl_Clock_LW_delayed__C");
asm("	.sect \".econst:ti_sysbios_knl_Clock_LW_delayed__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Clock_LW_delayed__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Clock_LW_delayed__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Clock_LM_tick__C, ".econst:ti_sysbios_knl_Clock_LM_tick__C");
asm("	.sect \".econst:ti_sysbios_knl_Clock_LM_tick__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Clock_LM_tick__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Clock_LM_tick__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Clock_LM_begin__C, ".econst:ti_sysbios_knl_Clock_LM_begin__C");
asm("	.sect \".econst:ti_sysbios_knl_Clock_LM_begin__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Clock_LM_begin__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Clock_LM_begin__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Clock_A_clockDisabled__C, ".econst:ti_sysbios_knl_Clock_A_clockDisabled__C");
asm("	.sect \".econst:ti_sysbios_knl_Clock_A_clockDisabled__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Clock_A_clockDisabled__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Clock_A_clockDisabled__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Clock_A_badThreadType__C, ".econst:ti_sysbios_knl_Clock_A_badThreadType__C");
asm("	.sect \".econst:ti_sysbios_knl_Clock_A_badThreadType__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Clock_A_badThreadType__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Clock_A_badThreadType__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Clock_tickSource__C, ".econst:ti_sysbios_knl_Clock_tickSource__C");
asm("	.sect \".econst:ti_sysbios_knl_Clock_tickSource__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Clock_tickSource__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Clock_tickSource__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Clock_tickMode__C, ".econst:ti_sysbios_knl_Clock_tickMode__C");
asm("	.sect \".econst:ti_sysbios_knl_Clock_tickMode__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Clock_tickMode__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Clock_tickMode__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Clock_timerId__C, ".econst:ti_sysbios_knl_Clock_timerId__C");
asm("	.sect \".econst:ti_sysbios_knl_Clock_timerId__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Clock_timerId__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Clock_timerId__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Clock_tickPeriod__C, ".econst:ti_sysbios_knl_Clock_tickPeriod__C");
asm("	.sect \".econst:ti_sysbios_knl_Clock_tickPeriod__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Clock_tickPeriod__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Clock_tickPeriod__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Idle_funcList__A, ".econst:ti_sysbios_knl_Idle_funcList__A");
asm("	.sect \".econst:ti_sysbios_knl_Idle_funcList__A\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Idle_funcList__A\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Idle_funcList__A\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__diagsEnabled__C, ".econst:ti_sysbios_knl_Idle_Module__diagsEnabled__C");
asm("	.sect \".econst:ti_sysbios_knl_Idle_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Idle_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Idle_Module__diagsEnabled__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__diagsIncluded__C, ".econst:ti_sysbios_knl_Idle_Module__diagsIncluded__C");
asm("	.sect \".econst:ti_sysbios_knl_Idle_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Idle_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Idle_Module__diagsIncluded__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__diagsMask__C, ".econst:ti_sysbios_knl_Idle_Module__diagsMask__C");
asm("	.sect \".econst:ti_sysbios_knl_Idle_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Idle_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Idle_Module__diagsMask__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__gateObj__C, ".econst:ti_sysbios_knl_Idle_Module__gateObj__C");
asm("	.sect \".econst:ti_sysbios_knl_Idle_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Idle_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Idle_Module__gateObj__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__gatePrms__C, ".econst:ti_sysbios_knl_Idle_Module__gatePrms__C");
asm("	.sect \".econst:ti_sysbios_knl_Idle_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Idle_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Idle_Module__gatePrms__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__id__C, ".econst:ti_sysbios_knl_Idle_Module__id__C");
asm("	.sect \".econst:ti_sysbios_knl_Idle_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Idle_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Idle_Module__id__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerDefined__C, ".econst:ti_sysbios_knl_Idle_Module__loggerDefined__C");
asm("	.sect \".econst:ti_sysbios_knl_Idle_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Idle_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Idle_Module__loggerDefined__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerObj__C, ".econst:ti_sysbios_knl_Idle_Module__loggerObj__C");
asm("	.sect \".econst:ti_sysbios_knl_Idle_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Idle_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Idle_Module__loggerObj__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerFxn0__C, ".econst:ti_sysbios_knl_Idle_Module__loggerFxn0__C");
asm("	.sect \".econst:ti_sysbios_knl_Idle_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Idle_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Idle_Module__loggerFxn0__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerFxn1__C, ".econst:ti_sysbios_knl_Idle_Module__loggerFxn1__C");
asm("	.sect \".econst:ti_sysbios_knl_Idle_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Idle_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Idle_Module__loggerFxn1__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerFxn2__C, ".econst:ti_sysbios_knl_Idle_Module__loggerFxn2__C");
asm("	.sect \".econst:ti_sysbios_knl_Idle_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Idle_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Idle_Module__loggerFxn2__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerFxn4__C, ".econst:ti_sysbios_knl_Idle_Module__loggerFxn4__C");
asm("	.sect \".econst:ti_sysbios_knl_Idle_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Idle_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Idle_Module__loggerFxn4__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerFxn8__C, ".econst:ti_sysbios_knl_Idle_Module__loggerFxn8__C");
asm("	.sect \".econst:ti_sysbios_knl_Idle_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Idle_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Idle_Module__loggerFxn8__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__startupDoneFxn__C, ".econst:ti_sysbios_knl_Idle_Module__startupDoneFxn__C");
asm("	.sect \".econst:ti_sysbios_knl_Idle_Module__startupDoneFxn__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Idle_Module__startupDoneFxn__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Idle_Module__startupDoneFxn__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Idle_Object__count__C, ".econst:ti_sysbios_knl_Idle_Object__count__C");
asm("	.sect \".econst:ti_sysbios_knl_Idle_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Idle_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Idle_Object__count__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Idle_Object__heap__C, ".econst:ti_sysbios_knl_Idle_Object__heap__C");
asm("	.sect \".econst:ti_sysbios_knl_Idle_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Idle_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Idle_Object__heap__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Idle_Object__sizeof__C, ".econst:ti_sysbios_knl_Idle_Object__sizeof__C");
asm("	.sect \".econst:ti_sysbios_knl_Idle_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Idle_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Idle_Object__sizeof__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Idle_Object__table__C, ".econst:ti_sysbios_knl_Idle_Object__table__C");
asm("	.sect \".econst:ti_sysbios_knl_Idle_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Idle_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Idle_Object__table__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Idle_funcList__C, ".econst:ti_sysbios_knl_Idle_funcList__C");
asm("	.sect \".econst:ti_sysbios_knl_Idle_funcList__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Idle_funcList__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Idle_funcList__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__diagsEnabled__C, ".econst:ti_sysbios_knl_Intrinsics_Module__diagsEnabled__C");
asm("	.sect \".econst:ti_sysbios_knl_Intrinsics_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Intrinsics_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Intrinsics_Module__diagsEnabled__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__diagsIncluded__C, ".econst:ti_sysbios_knl_Intrinsics_Module__diagsIncluded__C");
asm("	.sect \".econst:ti_sysbios_knl_Intrinsics_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Intrinsics_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Intrinsics_Module__diagsIncluded__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__diagsMask__C, ".econst:ti_sysbios_knl_Intrinsics_Module__diagsMask__C");
asm("	.sect \".econst:ti_sysbios_knl_Intrinsics_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Intrinsics_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Intrinsics_Module__diagsMask__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__gateObj__C, ".econst:ti_sysbios_knl_Intrinsics_Module__gateObj__C");
asm("	.sect \".econst:ti_sysbios_knl_Intrinsics_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Intrinsics_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Intrinsics_Module__gateObj__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__gatePrms__C, ".econst:ti_sysbios_knl_Intrinsics_Module__gatePrms__C");
asm("	.sect \".econst:ti_sysbios_knl_Intrinsics_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Intrinsics_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Intrinsics_Module__gatePrms__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__id__C, ".econst:ti_sysbios_knl_Intrinsics_Module__id__C");
asm("	.sect \".econst:ti_sysbios_knl_Intrinsics_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Intrinsics_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Intrinsics_Module__id__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerDefined__C, ".econst:ti_sysbios_knl_Intrinsics_Module__loggerDefined__C");
asm("	.sect \".econst:ti_sysbios_knl_Intrinsics_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Intrinsics_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Intrinsics_Module__loggerDefined__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerObj__C, ".econst:ti_sysbios_knl_Intrinsics_Module__loggerObj__C");
asm("	.sect \".econst:ti_sysbios_knl_Intrinsics_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Intrinsics_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Intrinsics_Module__loggerObj__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerFxn0__C, ".econst:ti_sysbios_knl_Intrinsics_Module__loggerFxn0__C");
asm("	.sect \".econst:ti_sysbios_knl_Intrinsics_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Intrinsics_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Intrinsics_Module__loggerFxn0__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerFxn1__C, ".econst:ti_sysbios_knl_Intrinsics_Module__loggerFxn1__C");
asm("	.sect \".econst:ti_sysbios_knl_Intrinsics_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Intrinsics_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Intrinsics_Module__loggerFxn1__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerFxn2__C, ".econst:ti_sysbios_knl_Intrinsics_Module__loggerFxn2__C");
asm("	.sect \".econst:ti_sysbios_knl_Intrinsics_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Intrinsics_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Intrinsics_Module__loggerFxn2__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerFxn4__C, ".econst:ti_sysbios_knl_Intrinsics_Module__loggerFxn4__C");
asm("	.sect \".econst:ti_sysbios_knl_Intrinsics_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Intrinsics_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Intrinsics_Module__loggerFxn4__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerFxn8__C, ".econst:ti_sysbios_knl_Intrinsics_Module__loggerFxn8__C");
asm("	.sect \".econst:ti_sysbios_knl_Intrinsics_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Intrinsics_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Intrinsics_Module__loggerFxn8__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__startupDoneFxn__C, ".econst:ti_sysbios_knl_Intrinsics_Module__startupDoneFxn__C");
asm("	.sect \".econst:ti_sysbios_knl_Intrinsics_Module__startupDoneFxn__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Intrinsics_Module__startupDoneFxn__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Intrinsics_Module__startupDoneFxn__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Object__count__C, ".econst:ti_sysbios_knl_Intrinsics_Object__count__C");
asm("	.sect \".econst:ti_sysbios_knl_Intrinsics_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Intrinsics_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Intrinsics_Object__count__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Object__heap__C, ".econst:ti_sysbios_knl_Intrinsics_Object__heap__C");
asm("	.sect \".econst:ti_sysbios_knl_Intrinsics_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Intrinsics_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Intrinsics_Object__heap__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Object__sizeof__C, ".econst:ti_sysbios_knl_Intrinsics_Object__sizeof__C");
asm("	.sect \".econst:ti_sysbios_knl_Intrinsics_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Intrinsics_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Intrinsics_Object__sizeof__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Object__table__C, ".econst:ti_sysbios_knl_Intrinsics_Object__table__C");
asm("	.sect \".econst:ti_sysbios_knl_Intrinsics_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Intrinsics_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Intrinsics_Object__table__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Queue_Object__DESC__C, ".econst:ti_sysbios_knl_Queue_Object__DESC__C");
asm("	.sect \".econst:ti_sysbios_knl_Queue_Object__DESC__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Queue_Object__DESC__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Queue_Object__DESC__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Queue_Object__PARAMS__C, ".econst:ti_sysbios_knl_Queue_Object__PARAMS__C");
asm("	.sect \".econst:ti_sysbios_knl_Queue_Object__PARAMS__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Queue_Object__PARAMS__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Queue_Object__PARAMS__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__diagsEnabled__C, ".econst:ti_sysbios_knl_Queue_Module__diagsEnabled__C");
asm("	.sect \".econst:ti_sysbios_knl_Queue_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Queue_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Queue_Module__diagsEnabled__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__diagsIncluded__C, ".econst:ti_sysbios_knl_Queue_Module__diagsIncluded__C");
asm("	.sect \".econst:ti_sysbios_knl_Queue_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Queue_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Queue_Module__diagsIncluded__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__diagsMask__C, ".econst:ti_sysbios_knl_Queue_Module__diagsMask__C");
asm("	.sect \".econst:ti_sysbios_knl_Queue_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Queue_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Queue_Module__diagsMask__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__gateObj__C, ".econst:ti_sysbios_knl_Queue_Module__gateObj__C");
asm("	.sect \".econst:ti_sysbios_knl_Queue_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Queue_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Queue_Module__gateObj__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__gatePrms__C, ".econst:ti_sysbios_knl_Queue_Module__gatePrms__C");
asm("	.sect \".econst:ti_sysbios_knl_Queue_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Queue_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Queue_Module__gatePrms__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__id__C, ".econst:ti_sysbios_knl_Queue_Module__id__C");
asm("	.sect \".econst:ti_sysbios_knl_Queue_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Queue_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Queue_Module__id__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerDefined__C, ".econst:ti_sysbios_knl_Queue_Module__loggerDefined__C");
asm("	.sect \".econst:ti_sysbios_knl_Queue_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Queue_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Queue_Module__loggerDefined__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerObj__C, ".econst:ti_sysbios_knl_Queue_Module__loggerObj__C");
asm("	.sect \".econst:ti_sysbios_knl_Queue_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Queue_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Queue_Module__loggerObj__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerFxn0__C, ".econst:ti_sysbios_knl_Queue_Module__loggerFxn0__C");
asm("	.sect \".econst:ti_sysbios_knl_Queue_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Queue_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Queue_Module__loggerFxn0__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerFxn1__C, ".econst:ti_sysbios_knl_Queue_Module__loggerFxn1__C");
asm("	.sect \".econst:ti_sysbios_knl_Queue_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Queue_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Queue_Module__loggerFxn1__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerFxn2__C, ".econst:ti_sysbios_knl_Queue_Module__loggerFxn2__C");
asm("	.sect \".econst:ti_sysbios_knl_Queue_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Queue_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Queue_Module__loggerFxn2__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerFxn4__C, ".econst:ti_sysbios_knl_Queue_Module__loggerFxn4__C");
asm("	.sect \".econst:ti_sysbios_knl_Queue_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Queue_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Queue_Module__loggerFxn4__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerFxn8__C, ".econst:ti_sysbios_knl_Queue_Module__loggerFxn8__C");
asm("	.sect \".econst:ti_sysbios_knl_Queue_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Queue_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Queue_Module__loggerFxn8__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__startupDoneFxn__C, ".econst:ti_sysbios_knl_Queue_Module__startupDoneFxn__C");
asm("	.sect \".econst:ti_sysbios_knl_Queue_Module__startupDoneFxn__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Queue_Module__startupDoneFxn__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Queue_Module__startupDoneFxn__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Queue_Object__count__C, ".econst:ti_sysbios_knl_Queue_Object__count__C");
asm("	.sect \".econst:ti_sysbios_knl_Queue_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Queue_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Queue_Object__count__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Queue_Object__heap__C, ".econst:ti_sysbios_knl_Queue_Object__heap__C");
asm("	.sect \".econst:ti_sysbios_knl_Queue_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Queue_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Queue_Object__heap__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Queue_Object__sizeof__C, ".econst:ti_sysbios_knl_Queue_Object__sizeof__C");
asm("	.sect \".econst:ti_sysbios_knl_Queue_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Queue_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Queue_Object__sizeof__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Queue_Object__table__C, ".econst:ti_sysbios_knl_Queue_Object__table__C");
asm("	.sect \".econst:ti_sysbios_knl_Queue_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Queue_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Queue_Object__table__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Object__DESC__C, ".econst:ti_sysbios_knl_Semaphore_Object__DESC__C");
asm("	.sect \".econst:ti_sysbios_knl_Semaphore_Object__DESC__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Semaphore_Object__DESC__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Semaphore_Object__DESC__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Object__PARAMS__C, ".econst:ti_sysbios_knl_Semaphore_Object__PARAMS__C");
asm("	.sect \".econst:ti_sysbios_knl_Semaphore_Object__PARAMS__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Semaphore_Object__PARAMS__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Semaphore_Object__PARAMS__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__diagsEnabled__C, ".econst:ti_sysbios_knl_Semaphore_Module__diagsEnabled__C");
asm("	.sect \".econst:ti_sysbios_knl_Semaphore_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Semaphore_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Semaphore_Module__diagsEnabled__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__diagsIncluded__C, ".econst:ti_sysbios_knl_Semaphore_Module__diagsIncluded__C");
asm("	.sect \".econst:ti_sysbios_knl_Semaphore_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Semaphore_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Semaphore_Module__diagsIncluded__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__diagsMask__C, ".econst:ti_sysbios_knl_Semaphore_Module__diagsMask__C");
asm("	.sect \".econst:ti_sysbios_knl_Semaphore_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Semaphore_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Semaphore_Module__diagsMask__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__gateObj__C, ".econst:ti_sysbios_knl_Semaphore_Module__gateObj__C");
asm("	.sect \".econst:ti_sysbios_knl_Semaphore_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Semaphore_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Semaphore_Module__gateObj__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__gatePrms__C, ".econst:ti_sysbios_knl_Semaphore_Module__gatePrms__C");
asm("	.sect \".econst:ti_sysbios_knl_Semaphore_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Semaphore_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Semaphore_Module__gatePrms__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__id__C, ".econst:ti_sysbios_knl_Semaphore_Module__id__C");
asm("	.sect \".econst:ti_sysbios_knl_Semaphore_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Semaphore_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Semaphore_Module__id__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerDefined__C, ".econst:ti_sysbios_knl_Semaphore_Module__loggerDefined__C");
asm("	.sect \".econst:ti_sysbios_knl_Semaphore_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Semaphore_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Semaphore_Module__loggerDefined__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerObj__C, ".econst:ti_sysbios_knl_Semaphore_Module__loggerObj__C");
asm("	.sect \".econst:ti_sysbios_knl_Semaphore_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Semaphore_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Semaphore_Module__loggerObj__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerFxn0__C, ".econst:ti_sysbios_knl_Semaphore_Module__loggerFxn0__C");
asm("	.sect \".econst:ti_sysbios_knl_Semaphore_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Semaphore_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Semaphore_Module__loggerFxn0__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerFxn1__C, ".econst:ti_sysbios_knl_Semaphore_Module__loggerFxn1__C");
asm("	.sect \".econst:ti_sysbios_knl_Semaphore_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Semaphore_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Semaphore_Module__loggerFxn1__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerFxn2__C, ".econst:ti_sysbios_knl_Semaphore_Module__loggerFxn2__C");
asm("	.sect \".econst:ti_sysbios_knl_Semaphore_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Semaphore_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Semaphore_Module__loggerFxn2__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerFxn4__C, ".econst:ti_sysbios_knl_Semaphore_Module__loggerFxn4__C");
asm("	.sect \".econst:ti_sysbios_knl_Semaphore_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Semaphore_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Semaphore_Module__loggerFxn4__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerFxn8__C, ".econst:ti_sysbios_knl_Semaphore_Module__loggerFxn8__C");
asm("	.sect \".econst:ti_sysbios_knl_Semaphore_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Semaphore_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Semaphore_Module__loggerFxn8__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__startupDoneFxn__C, ".econst:ti_sysbios_knl_Semaphore_Module__startupDoneFxn__C");
asm("	.sect \".econst:ti_sysbios_knl_Semaphore_Module__startupDoneFxn__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Semaphore_Module__startupDoneFxn__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Semaphore_Module__startupDoneFxn__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Object__count__C, ".econst:ti_sysbios_knl_Semaphore_Object__count__C");
asm("	.sect \".econst:ti_sysbios_knl_Semaphore_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Semaphore_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Semaphore_Object__count__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Object__heap__C, ".econst:ti_sysbios_knl_Semaphore_Object__heap__C");
asm("	.sect \".econst:ti_sysbios_knl_Semaphore_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Semaphore_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Semaphore_Object__heap__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Object__sizeof__C, ".econst:ti_sysbios_knl_Semaphore_Object__sizeof__C");
asm("	.sect \".econst:ti_sysbios_knl_Semaphore_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Semaphore_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Semaphore_Object__sizeof__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Object__table__C, ".econst:ti_sysbios_knl_Semaphore_Object__table__C");
asm("	.sect \".econst:ti_sysbios_knl_Semaphore_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Semaphore_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Semaphore_Object__table__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_LM_post__C, ".econst:ti_sysbios_knl_Semaphore_LM_post__C");
asm("	.sect \".econst:ti_sysbios_knl_Semaphore_LM_post__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Semaphore_LM_post__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Semaphore_LM_post__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_LM_pend__C, ".econst:ti_sysbios_knl_Semaphore_LM_pend__C");
asm("	.sect \".econst:ti_sysbios_knl_Semaphore_LM_pend__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Semaphore_LM_pend__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Semaphore_LM_pend__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_A_noEvents__C, ".econst:ti_sysbios_knl_Semaphore_A_noEvents__C");
asm("	.sect \".econst:ti_sysbios_knl_Semaphore_A_noEvents__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Semaphore_A_noEvents__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Semaphore_A_noEvents__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_A_invTimeout__C, ".econst:ti_sysbios_knl_Semaphore_A_invTimeout__C");
asm("	.sect \".econst:ti_sysbios_knl_Semaphore_A_invTimeout__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Semaphore_A_invTimeout__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Semaphore_A_invTimeout__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_A_badContext__C, ".econst:ti_sysbios_knl_Semaphore_A_badContext__C");
asm("	.sect \".econst:ti_sysbios_knl_Semaphore_A_badContext__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Semaphore_A_badContext__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Semaphore_A_badContext__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_supportsEvents__C, ".econst:ti_sysbios_knl_Semaphore_supportsEvents__C");
asm("	.sect \".econst:ti_sysbios_knl_Semaphore_supportsEvents__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Semaphore_supportsEvents__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Semaphore_supportsEvents__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_eventPost__C, ".econst:ti_sysbios_knl_Semaphore_eventPost__C");
asm("	.sect \".econst:ti_sysbios_knl_Semaphore_eventPost__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Semaphore_eventPost__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Semaphore_eventPost__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_eventSync__C, ".econst:ti_sysbios_knl_Semaphore_eventSync__C");
asm("	.sect \".econst:ti_sysbios_knl_Semaphore_eventSync__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Semaphore_eventSync__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Semaphore_eventSync__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Swi_Object__DESC__C, ".econst:ti_sysbios_knl_Swi_Object__DESC__C");
asm("	.sect \".econst:ti_sysbios_knl_Swi_Object__DESC__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Swi_Object__DESC__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Swi_Object__DESC__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Swi_Object__PARAMS__C, ".econst:ti_sysbios_knl_Swi_Object__PARAMS__C");
asm("	.sect \".econst:ti_sysbios_knl_Swi_Object__PARAMS__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Swi_Object__PARAMS__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Swi_Object__PARAMS__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__diagsEnabled__C, ".econst:ti_sysbios_knl_Swi_Module__diagsEnabled__C");
asm("	.sect \".econst:ti_sysbios_knl_Swi_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Swi_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Swi_Module__diagsEnabled__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__diagsIncluded__C, ".econst:ti_sysbios_knl_Swi_Module__diagsIncluded__C");
asm("	.sect \".econst:ti_sysbios_knl_Swi_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Swi_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Swi_Module__diagsIncluded__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__diagsMask__C, ".econst:ti_sysbios_knl_Swi_Module__diagsMask__C");
asm("	.sect \".econst:ti_sysbios_knl_Swi_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Swi_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Swi_Module__diagsMask__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__gateObj__C, ".econst:ti_sysbios_knl_Swi_Module__gateObj__C");
asm("	.sect \".econst:ti_sysbios_knl_Swi_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Swi_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Swi_Module__gateObj__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__gatePrms__C, ".econst:ti_sysbios_knl_Swi_Module__gatePrms__C");
asm("	.sect \".econst:ti_sysbios_knl_Swi_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Swi_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Swi_Module__gatePrms__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__id__C, ".econst:ti_sysbios_knl_Swi_Module__id__C");
asm("	.sect \".econst:ti_sysbios_knl_Swi_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Swi_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Swi_Module__id__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerDefined__C, ".econst:ti_sysbios_knl_Swi_Module__loggerDefined__C");
asm("	.sect \".econst:ti_sysbios_knl_Swi_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Swi_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Swi_Module__loggerDefined__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerObj__C, ".econst:ti_sysbios_knl_Swi_Module__loggerObj__C");
asm("	.sect \".econst:ti_sysbios_knl_Swi_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Swi_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Swi_Module__loggerObj__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerFxn0__C, ".econst:ti_sysbios_knl_Swi_Module__loggerFxn0__C");
asm("	.sect \".econst:ti_sysbios_knl_Swi_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Swi_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Swi_Module__loggerFxn0__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerFxn1__C, ".econst:ti_sysbios_knl_Swi_Module__loggerFxn1__C");
asm("	.sect \".econst:ti_sysbios_knl_Swi_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Swi_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Swi_Module__loggerFxn1__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerFxn2__C, ".econst:ti_sysbios_knl_Swi_Module__loggerFxn2__C");
asm("	.sect \".econst:ti_sysbios_knl_Swi_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Swi_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Swi_Module__loggerFxn2__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerFxn4__C, ".econst:ti_sysbios_knl_Swi_Module__loggerFxn4__C");
asm("	.sect \".econst:ti_sysbios_knl_Swi_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Swi_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Swi_Module__loggerFxn4__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerFxn8__C, ".econst:ti_sysbios_knl_Swi_Module__loggerFxn8__C");
asm("	.sect \".econst:ti_sysbios_knl_Swi_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Swi_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Swi_Module__loggerFxn8__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__startupDoneFxn__C, ".econst:ti_sysbios_knl_Swi_Module__startupDoneFxn__C");
asm("	.sect \".econst:ti_sysbios_knl_Swi_Module__startupDoneFxn__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Swi_Module__startupDoneFxn__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Swi_Module__startupDoneFxn__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Swi_Object__count__C, ".econst:ti_sysbios_knl_Swi_Object__count__C");
asm("	.sect \".econst:ti_sysbios_knl_Swi_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Swi_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Swi_Object__count__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Swi_Object__heap__C, ".econst:ti_sysbios_knl_Swi_Object__heap__C");
asm("	.sect \".econst:ti_sysbios_knl_Swi_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Swi_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Swi_Object__heap__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Swi_Object__sizeof__C, ".econst:ti_sysbios_knl_Swi_Object__sizeof__C");
asm("	.sect \".econst:ti_sysbios_knl_Swi_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Swi_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Swi_Object__sizeof__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Swi_Object__table__C, ".econst:ti_sysbios_knl_Swi_Object__table__C");
asm("	.sect \".econst:ti_sysbios_knl_Swi_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Swi_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Swi_Object__table__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Swi_LM_begin__C, ".econst:ti_sysbios_knl_Swi_LM_begin__C");
asm("	.sect \".econst:ti_sysbios_knl_Swi_LM_begin__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Swi_LM_begin__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Swi_LM_begin__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Swi_LD_end__C, ".econst:ti_sysbios_knl_Swi_LD_end__C");
asm("	.sect \".econst:ti_sysbios_knl_Swi_LD_end__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Swi_LD_end__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Swi_LD_end__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Swi_LM_post__C, ".econst:ti_sysbios_knl_Swi_LM_post__C");
asm("	.sect \".econst:ti_sysbios_knl_Swi_LM_post__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Swi_LM_post__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Swi_LM_post__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Swi_A_swiDisabled__C, ".econst:ti_sysbios_knl_Swi_A_swiDisabled__C");
asm("	.sect \".econst:ti_sysbios_knl_Swi_A_swiDisabled__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Swi_A_swiDisabled__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Swi_A_swiDisabled__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Swi_A_badPriority__C, ".econst:ti_sysbios_knl_Swi_A_badPriority__C");
asm("	.sect \".econst:ti_sysbios_knl_Swi_A_badPriority__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Swi_A_badPriority__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Swi_A_badPriority__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Swi_numPriorities__C, ".econst:ti_sysbios_knl_Swi_numPriorities__C");
asm("	.sect \".econst:ti_sysbios_knl_Swi_numPriorities__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Swi_numPriorities__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Swi_numPriorities__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Swi_hooks__C, ".econst:ti_sysbios_knl_Swi_hooks__C");
asm("	.sect \".econst:ti_sysbios_knl_Swi_hooks__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Swi_hooks__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Swi_hooks__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Swi_taskDisable__C, ".econst:ti_sysbios_knl_Swi_taskDisable__C");
asm("	.sect \".econst:ti_sysbios_knl_Swi_taskDisable__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Swi_taskDisable__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Swi_taskDisable__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Swi_taskRestore__C, ".econst:ti_sysbios_knl_Swi_taskRestore__C");
asm("	.sect \".econst:ti_sysbios_knl_Swi_taskRestore__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Swi_taskRestore__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Swi_taskRestore__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Swi_numConstructedSwis__C, ".econst:ti_sysbios_knl_Swi_numConstructedSwis__C");
asm("	.sect \".econst:ti_sysbios_knl_Swi_numConstructedSwis__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Swi_numConstructedSwis__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Swi_numConstructedSwis__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Task_Object__DESC__C, ".econst:ti_sysbios_knl_Task_Object__DESC__C");
asm("	.sect \".econst:ti_sysbios_knl_Task_Object__DESC__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Task_Object__DESC__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Task_Object__DESC__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Task_Object__PARAMS__C, ".econst:ti_sysbios_knl_Task_Object__PARAMS__C");
asm("	.sect \".econst:ti_sysbios_knl_Task_Object__PARAMS__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Task_Object__PARAMS__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Task_Object__PARAMS__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Task_hooks__A, ".econst:ti_sysbios_knl_Task_hooks__A");
asm("	.sect \".econst:ti_sysbios_knl_Task_hooks__A\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Task_hooks__A\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Task_hooks__A\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__diagsEnabled__C, ".econst:ti_sysbios_knl_Task_Module__diagsEnabled__C");
asm("	.sect \".econst:ti_sysbios_knl_Task_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Task_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Task_Module__diagsEnabled__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__diagsIncluded__C, ".econst:ti_sysbios_knl_Task_Module__diagsIncluded__C");
asm("	.sect \".econst:ti_sysbios_knl_Task_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Task_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Task_Module__diagsIncluded__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__diagsMask__C, ".econst:ti_sysbios_knl_Task_Module__diagsMask__C");
asm("	.sect \".econst:ti_sysbios_knl_Task_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Task_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Task_Module__diagsMask__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__gateObj__C, ".econst:ti_sysbios_knl_Task_Module__gateObj__C");
asm("	.sect \".econst:ti_sysbios_knl_Task_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Task_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Task_Module__gateObj__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__gatePrms__C, ".econst:ti_sysbios_knl_Task_Module__gatePrms__C");
asm("	.sect \".econst:ti_sysbios_knl_Task_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Task_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Task_Module__gatePrms__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__id__C, ".econst:ti_sysbios_knl_Task_Module__id__C");
asm("	.sect \".econst:ti_sysbios_knl_Task_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Task_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Task_Module__id__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerDefined__C, ".econst:ti_sysbios_knl_Task_Module__loggerDefined__C");
asm("	.sect \".econst:ti_sysbios_knl_Task_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Task_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Task_Module__loggerDefined__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerObj__C, ".econst:ti_sysbios_knl_Task_Module__loggerObj__C");
asm("	.sect \".econst:ti_sysbios_knl_Task_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Task_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Task_Module__loggerObj__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerFxn0__C, ".econst:ti_sysbios_knl_Task_Module__loggerFxn0__C");
asm("	.sect \".econst:ti_sysbios_knl_Task_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Task_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Task_Module__loggerFxn0__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerFxn1__C, ".econst:ti_sysbios_knl_Task_Module__loggerFxn1__C");
asm("	.sect \".econst:ti_sysbios_knl_Task_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Task_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Task_Module__loggerFxn1__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerFxn2__C, ".econst:ti_sysbios_knl_Task_Module__loggerFxn2__C");
asm("	.sect \".econst:ti_sysbios_knl_Task_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Task_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Task_Module__loggerFxn2__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerFxn4__C, ".econst:ti_sysbios_knl_Task_Module__loggerFxn4__C");
asm("	.sect \".econst:ti_sysbios_knl_Task_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Task_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Task_Module__loggerFxn4__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerFxn8__C, ".econst:ti_sysbios_knl_Task_Module__loggerFxn8__C");
asm("	.sect \".econst:ti_sysbios_knl_Task_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Task_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Task_Module__loggerFxn8__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__startupDoneFxn__C, ".econst:ti_sysbios_knl_Task_Module__startupDoneFxn__C");
asm("	.sect \".econst:ti_sysbios_knl_Task_Module__startupDoneFxn__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Task_Module__startupDoneFxn__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Task_Module__startupDoneFxn__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Task_Object__count__C, ".econst:ti_sysbios_knl_Task_Object__count__C");
asm("	.sect \".econst:ti_sysbios_knl_Task_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Task_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Task_Object__count__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Task_Object__heap__C, ".econst:ti_sysbios_knl_Task_Object__heap__C");
asm("	.sect \".econst:ti_sysbios_knl_Task_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Task_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Task_Object__heap__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Task_Object__sizeof__C, ".econst:ti_sysbios_knl_Task_Object__sizeof__C");
asm("	.sect \".econst:ti_sysbios_knl_Task_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Task_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Task_Object__sizeof__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Task_Object__table__C, ".econst:ti_sysbios_knl_Task_Object__table__C");
asm("	.sect \".econst:ti_sysbios_knl_Task_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Task_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Task_Object__table__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Task_LM_switch__C, ".econst:ti_sysbios_knl_Task_LM_switch__C");
asm("	.sect \".econst:ti_sysbios_knl_Task_LM_switch__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Task_LM_switch__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Task_LM_switch__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Task_LM_sleep__C, ".econst:ti_sysbios_knl_Task_LM_sleep__C");
asm("	.sect \".econst:ti_sysbios_knl_Task_LM_sleep__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Task_LM_sleep__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Task_LM_sleep__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Task_LD_ready__C, ".econst:ti_sysbios_knl_Task_LD_ready__C");
asm("	.sect \".econst:ti_sysbios_knl_Task_LD_ready__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Task_LD_ready__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Task_LD_ready__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Task_LD_block__C, ".econst:ti_sysbios_knl_Task_LD_block__C");
asm("	.sect \".econst:ti_sysbios_knl_Task_LD_block__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Task_LD_block__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Task_LD_block__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Task_LM_yield__C, ".econst:ti_sysbios_knl_Task_LM_yield__C");
asm("	.sect \".econst:ti_sysbios_knl_Task_LM_yield__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Task_LM_yield__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Task_LM_yield__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Task_LM_setPri__C, ".econst:ti_sysbios_knl_Task_LM_setPri__C");
asm("	.sect \".econst:ti_sysbios_knl_Task_LM_setPri__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Task_LM_setPri__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Task_LM_setPri__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Task_LD_exit__C, ".econst:ti_sysbios_knl_Task_LD_exit__C");
asm("	.sect \".econst:ti_sysbios_knl_Task_LD_exit__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Task_LD_exit__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Task_LD_exit__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Task_E_stackOverflow__C, ".econst:ti_sysbios_knl_Task_E_stackOverflow__C");
asm("	.sect \".econst:ti_sysbios_knl_Task_E_stackOverflow__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Task_E_stackOverflow__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Task_E_stackOverflow__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Task_E_spOutOfBounds__C, ".econst:ti_sysbios_knl_Task_E_spOutOfBounds__C");
asm("	.sect \".econst:ti_sysbios_knl_Task_E_spOutOfBounds__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Task_E_spOutOfBounds__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Task_E_spOutOfBounds__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Task_A_badThreadType__C, ".econst:ti_sysbios_knl_Task_A_badThreadType__C");
asm("	.sect \".econst:ti_sysbios_knl_Task_A_badThreadType__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Task_A_badThreadType__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Task_A_badThreadType__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Task_A_badTaskState__C, ".econst:ti_sysbios_knl_Task_A_badTaskState__C");
asm("	.sect \".econst:ti_sysbios_knl_Task_A_badTaskState__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Task_A_badTaskState__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Task_A_badTaskState__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Task_A_noPendElem__C, ".econst:ti_sysbios_knl_Task_A_noPendElem__C");
asm("	.sect \".econst:ti_sysbios_knl_Task_A_noPendElem__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Task_A_noPendElem__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Task_A_noPendElem__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Task_A_taskDisabled__C, ".econst:ti_sysbios_knl_Task_A_taskDisabled__C");
asm("	.sect \".econst:ti_sysbios_knl_Task_A_taskDisabled__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Task_A_taskDisabled__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Task_A_taskDisabled__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Task_A_badPriority__C, ".econst:ti_sysbios_knl_Task_A_badPriority__C");
asm("	.sect \".econst:ti_sysbios_knl_Task_A_badPriority__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Task_A_badPriority__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Task_A_badPriority__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Task_A_badTimeout__C, ".econst:ti_sysbios_knl_Task_A_badTimeout__C");
asm("	.sect \".econst:ti_sysbios_knl_Task_A_badTimeout__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Task_A_badTimeout__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Task_A_badTimeout__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Task_numPriorities__C, ".econst:ti_sysbios_knl_Task_numPriorities__C");
asm("	.sect \".econst:ti_sysbios_knl_Task_numPriorities__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Task_numPriorities__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Task_numPriorities__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Task_defaultStackSize__C, ".econst:ti_sysbios_knl_Task_defaultStackSize__C");
asm("	.sect \".econst:ti_sysbios_knl_Task_defaultStackSize__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Task_defaultStackSize__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Task_defaultStackSize__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Task_defaultStackHeap__C, ".econst:ti_sysbios_knl_Task_defaultStackHeap__C");
asm("	.sect \".econst:ti_sysbios_knl_Task_defaultStackHeap__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Task_defaultStackHeap__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Task_defaultStackHeap__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Task_allBlockedFunc__C, ".econst:ti_sysbios_knl_Task_allBlockedFunc__C");
asm("	.sect \".econst:ti_sysbios_knl_Task_allBlockedFunc__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Task_allBlockedFunc__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Task_allBlockedFunc__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Task_initStackFlag__C, ".econst:ti_sysbios_knl_Task_initStackFlag__C");
asm("	.sect \".econst:ti_sysbios_knl_Task_initStackFlag__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Task_initStackFlag__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Task_initStackFlag__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Task_deleteTerminatedTasks__C, ".econst:ti_sysbios_knl_Task_deleteTerminatedTasks__C");
asm("	.sect \".econst:ti_sysbios_knl_Task_deleteTerminatedTasks__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Task_deleteTerminatedTasks__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Task_deleteTerminatedTasks__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Task_hooks__C, ".econst:ti_sysbios_knl_Task_hooks__C");
asm("	.sect \".econst:ti_sysbios_knl_Task_hooks__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Task_hooks__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Task_hooks__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Task_numConstructedTasks__C, ".econst:ti_sysbios_knl_Task_numConstructedTasks__C");
asm("	.sect \".econst:ti_sysbios_knl_Task_numConstructedTasks__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:ti_sysbios_knl_Task_numConstructedTasks__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:ti_sysbios_knl_Task_numConstructedTasks__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Assert_Module__diagsEnabled__C, ".econst:xdc_runtime_Assert_Module__diagsEnabled__C");
asm("	.sect \".econst:xdc_runtime_Assert_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Assert_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Assert_Module__diagsEnabled__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Assert_Module__diagsIncluded__C, ".econst:xdc_runtime_Assert_Module__diagsIncluded__C");
asm("	.sect \".econst:xdc_runtime_Assert_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Assert_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Assert_Module__diagsIncluded__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Assert_Module__diagsMask__C, ".econst:xdc_runtime_Assert_Module__diagsMask__C");
asm("	.sect \".econst:xdc_runtime_Assert_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Assert_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Assert_Module__diagsMask__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Assert_Module__gateObj__C, ".econst:xdc_runtime_Assert_Module__gateObj__C");
asm("	.sect \".econst:xdc_runtime_Assert_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Assert_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Assert_Module__gateObj__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Assert_Module__gatePrms__C, ".econst:xdc_runtime_Assert_Module__gatePrms__C");
asm("	.sect \".econst:xdc_runtime_Assert_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Assert_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Assert_Module__gatePrms__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Assert_Module__id__C, ".econst:xdc_runtime_Assert_Module__id__C");
asm("	.sect \".econst:xdc_runtime_Assert_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Assert_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Assert_Module__id__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerDefined__C, ".econst:xdc_runtime_Assert_Module__loggerDefined__C");
asm("	.sect \".econst:xdc_runtime_Assert_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Assert_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Assert_Module__loggerDefined__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerObj__C, ".econst:xdc_runtime_Assert_Module__loggerObj__C");
asm("	.sect \".econst:xdc_runtime_Assert_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Assert_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Assert_Module__loggerObj__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerFxn0__C, ".econst:xdc_runtime_Assert_Module__loggerFxn0__C");
asm("	.sect \".econst:xdc_runtime_Assert_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Assert_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Assert_Module__loggerFxn0__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerFxn1__C, ".econst:xdc_runtime_Assert_Module__loggerFxn1__C");
asm("	.sect \".econst:xdc_runtime_Assert_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Assert_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Assert_Module__loggerFxn1__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerFxn2__C, ".econst:xdc_runtime_Assert_Module__loggerFxn2__C");
asm("	.sect \".econst:xdc_runtime_Assert_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Assert_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Assert_Module__loggerFxn2__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerFxn4__C, ".econst:xdc_runtime_Assert_Module__loggerFxn4__C");
asm("	.sect \".econst:xdc_runtime_Assert_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Assert_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Assert_Module__loggerFxn4__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerFxn8__C, ".econst:xdc_runtime_Assert_Module__loggerFxn8__C");
asm("	.sect \".econst:xdc_runtime_Assert_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Assert_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Assert_Module__loggerFxn8__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Assert_Module__startupDoneFxn__C, ".econst:xdc_runtime_Assert_Module__startupDoneFxn__C");
asm("	.sect \".econst:xdc_runtime_Assert_Module__startupDoneFxn__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Assert_Module__startupDoneFxn__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Assert_Module__startupDoneFxn__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Assert_Object__count__C, ".econst:xdc_runtime_Assert_Object__count__C");
asm("	.sect \".econst:xdc_runtime_Assert_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Assert_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Assert_Object__count__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Assert_Object__heap__C, ".econst:xdc_runtime_Assert_Object__heap__C");
asm("	.sect \".econst:xdc_runtime_Assert_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Assert_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Assert_Object__heap__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Assert_Object__sizeof__C, ".econst:xdc_runtime_Assert_Object__sizeof__C");
asm("	.sect \".econst:xdc_runtime_Assert_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Assert_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Assert_Object__sizeof__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Assert_Object__table__C, ".econst:xdc_runtime_Assert_Object__table__C");
asm("	.sect \".econst:xdc_runtime_Assert_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Assert_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Assert_Object__table__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Assert_E_assertFailed__C, ".econst:xdc_runtime_Assert_E_assertFailed__C");
asm("	.sect \".econst:xdc_runtime_Assert_E_assertFailed__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Assert_E_assertFailed__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Assert_E_assertFailed__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Core_Module__diagsEnabled__C, ".econst:xdc_runtime_Core_Module__diagsEnabled__C");
asm("	.sect \".econst:xdc_runtime_Core_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Core_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Core_Module__diagsEnabled__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Core_Module__diagsIncluded__C, ".econst:xdc_runtime_Core_Module__diagsIncluded__C");
asm("	.sect \".econst:xdc_runtime_Core_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Core_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Core_Module__diagsIncluded__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Core_Module__diagsMask__C, ".econst:xdc_runtime_Core_Module__diagsMask__C");
asm("	.sect \".econst:xdc_runtime_Core_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Core_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Core_Module__diagsMask__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Core_Module__gateObj__C, ".econst:xdc_runtime_Core_Module__gateObj__C");
asm("	.sect \".econst:xdc_runtime_Core_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Core_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Core_Module__gateObj__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Core_Module__gatePrms__C, ".econst:xdc_runtime_Core_Module__gatePrms__C");
asm("	.sect \".econst:xdc_runtime_Core_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Core_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Core_Module__gatePrms__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Core_Module__id__C, ".econst:xdc_runtime_Core_Module__id__C");
asm("	.sect \".econst:xdc_runtime_Core_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Core_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Core_Module__id__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerDefined__C, ".econst:xdc_runtime_Core_Module__loggerDefined__C");
asm("	.sect \".econst:xdc_runtime_Core_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Core_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Core_Module__loggerDefined__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerObj__C, ".econst:xdc_runtime_Core_Module__loggerObj__C");
asm("	.sect \".econst:xdc_runtime_Core_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Core_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Core_Module__loggerObj__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerFxn0__C, ".econst:xdc_runtime_Core_Module__loggerFxn0__C");
asm("	.sect \".econst:xdc_runtime_Core_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Core_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Core_Module__loggerFxn0__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerFxn1__C, ".econst:xdc_runtime_Core_Module__loggerFxn1__C");
asm("	.sect \".econst:xdc_runtime_Core_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Core_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Core_Module__loggerFxn1__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerFxn2__C, ".econst:xdc_runtime_Core_Module__loggerFxn2__C");
asm("	.sect \".econst:xdc_runtime_Core_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Core_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Core_Module__loggerFxn2__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerFxn4__C, ".econst:xdc_runtime_Core_Module__loggerFxn4__C");
asm("	.sect \".econst:xdc_runtime_Core_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Core_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Core_Module__loggerFxn4__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerFxn8__C, ".econst:xdc_runtime_Core_Module__loggerFxn8__C");
asm("	.sect \".econst:xdc_runtime_Core_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Core_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Core_Module__loggerFxn8__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Core_Module__startupDoneFxn__C, ".econst:xdc_runtime_Core_Module__startupDoneFxn__C");
asm("	.sect \".econst:xdc_runtime_Core_Module__startupDoneFxn__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Core_Module__startupDoneFxn__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Core_Module__startupDoneFxn__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Core_Object__count__C, ".econst:xdc_runtime_Core_Object__count__C");
asm("	.sect \".econst:xdc_runtime_Core_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Core_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Core_Object__count__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Core_Object__heap__C, ".econst:xdc_runtime_Core_Object__heap__C");
asm("	.sect \".econst:xdc_runtime_Core_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Core_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Core_Object__heap__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Core_Object__sizeof__C, ".econst:xdc_runtime_Core_Object__sizeof__C");
asm("	.sect \".econst:xdc_runtime_Core_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Core_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Core_Object__sizeof__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Core_Object__table__C, ".econst:xdc_runtime_Core_Object__table__C");
asm("	.sect \".econst:xdc_runtime_Core_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Core_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Core_Object__table__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Core_A_initializedParams__C, ".econst:xdc_runtime_Core_A_initializedParams__C");
asm("	.sect \".econst:xdc_runtime_Core_A_initializedParams__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Core_A_initializedParams__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Core_A_initializedParams__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Defaults_Module__diagsEnabled__C, ".econst:xdc_runtime_Defaults_Module__diagsEnabled__C");
asm("	.sect \".econst:xdc_runtime_Defaults_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Defaults_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Defaults_Module__diagsEnabled__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Defaults_Module__diagsIncluded__C, ".econst:xdc_runtime_Defaults_Module__diagsIncluded__C");
asm("	.sect \".econst:xdc_runtime_Defaults_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Defaults_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Defaults_Module__diagsIncluded__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Defaults_Module__diagsMask__C, ".econst:xdc_runtime_Defaults_Module__diagsMask__C");
asm("	.sect \".econst:xdc_runtime_Defaults_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Defaults_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Defaults_Module__diagsMask__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Defaults_Module__gateObj__C, ".econst:xdc_runtime_Defaults_Module__gateObj__C");
asm("	.sect \".econst:xdc_runtime_Defaults_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Defaults_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Defaults_Module__gateObj__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Defaults_Module__gatePrms__C, ".econst:xdc_runtime_Defaults_Module__gatePrms__C");
asm("	.sect \".econst:xdc_runtime_Defaults_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Defaults_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Defaults_Module__gatePrms__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Defaults_Module__id__C, ".econst:xdc_runtime_Defaults_Module__id__C");
asm("	.sect \".econst:xdc_runtime_Defaults_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Defaults_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Defaults_Module__id__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerDefined__C, ".econst:xdc_runtime_Defaults_Module__loggerDefined__C");
asm("	.sect \".econst:xdc_runtime_Defaults_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Defaults_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Defaults_Module__loggerDefined__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerObj__C, ".econst:xdc_runtime_Defaults_Module__loggerObj__C");
asm("	.sect \".econst:xdc_runtime_Defaults_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Defaults_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Defaults_Module__loggerObj__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerFxn0__C, ".econst:xdc_runtime_Defaults_Module__loggerFxn0__C");
asm("	.sect \".econst:xdc_runtime_Defaults_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Defaults_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Defaults_Module__loggerFxn0__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerFxn1__C, ".econst:xdc_runtime_Defaults_Module__loggerFxn1__C");
asm("	.sect \".econst:xdc_runtime_Defaults_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Defaults_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Defaults_Module__loggerFxn1__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerFxn2__C, ".econst:xdc_runtime_Defaults_Module__loggerFxn2__C");
asm("	.sect \".econst:xdc_runtime_Defaults_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Defaults_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Defaults_Module__loggerFxn2__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerFxn4__C, ".econst:xdc_runtime_Defaults_Module__loggerFxn4__C");
asm("	.sect \".econst:xdc_runtime_Defaults_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Defaults_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Defaults_Module__loggerFxn4__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerFxn8__C, ".econst:xdc_runtime_Defaults_Module__loggerFxn8__C");
asm("	.sect \".econst:xdc_runtime_Defaults_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Defaults_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Defaults_Module__loggerFxn8__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Defaults_Module__startupDoneFxn__C, ".econst:xdc_runtime_Defaults_Module__startupDoneFxn__C");
asm("	.sect \".econst:xdc_runtime_Defaults_Module__startupDoneFxn__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Defaults_Module__startupDoneFxn__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Defaults_Module__startupDoneFxn__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Defaults_Object__count__C, ".econst:xdc_runtime_Defaults_Object__count__C");
asm("	.sect \".econst:xdc_runtime_Defaults_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Defaults_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Defaults_Object__count__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Defaults_Object__heap__C, ".econst:xdc_runtime_Defaults_Object__heap__C");
asm("	.sect \".econst:xdc_runtime_Defaults_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Defaults_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Defaults_Object__heap__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Defaults_Object__sizeof__C, ".econst:xdc_runtime_Defaults_Object__sizeof__C");
asm("	.sect \".econst:xdc_runtime_Defaults_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Defaults_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Defaults_Object__sizeof__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Defaults_Object__table__C, ".econst:xdc_runtime_Defaults_Object__table__C");
asm("	.sect \".econst:xdc_runtime_Defaults_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Defaults_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Defaults_Object__table__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Diags_Module__diagsEnabled__C, ".econst:xdc_runtime_Diags_Module__diagsEnabled__C");
asm("	.sect \".econst:xdc_runtime_Diags_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Diags_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Diags_Module__diagsEnabled__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Diags_Module__diagsIncluded__C, ".econst:xdc_runtime_Diags_Module__diagsIncluded__C");
asm("	.sect \".econst:xdc_runtime_Diags_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Diags_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Diags_Module__diagsIncluded__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Diags_Module__diagsMask__C, ".econst:xdc_runtime_Diags_Module__diagsMask__C");
asm("	.sect \".econst:xdc_runtime_Diags_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Diags_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Diags_Module__diagsMask__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Diags_Module__gateObj__C, ".econst:xdc_runtime_Diags_Module__gateObj__C");
asm("	.sect \".econst:xdc_runtime_Diags_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Diags_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Diags_Module__gateObj__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Diags_Module__gatePrms__C, ".econst:xdc_runtime_Diags_Module__gatePrms__C");
asm("	.sect \".econst:xdc_runtime_Diags_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Diags_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Diags_Module__gatePrms__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Diags_Module__id__C, ".econst:xdc_runtime_Diags_Module__id__C");
asm("	.sect \".econst:xdc_runtime_Diags_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Diags_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Diags_Module__id__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerDefined__C, ".econst:xdc_runtime_Diags_Module__loggerDefined__C");
asm("	.sect \".econst:xdc_runtime_Diags_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Diags_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Diags_Module__loggerDefined__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerObj__C, ".econst:xdc_runtime_Diags_Module__loggerObj__C");
asm("	.sect \".econst:xdc_runtime_Diags_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Diags_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Diags_Module__loggerObj__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerFxn0__C, ".econst:xdc_runtime_Diags_Module__loggerFxn0__C");
asm("	.sect \".econst:xdc_runtime_Diags_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Diags_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Diags_Module__loggerFxn0__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerFxn1__C, ".econst:xdc_runtime_Diags_Module__loggerFxn1__C");
asm("	.sect \".econst:xdc_runtime_Diags_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Diags_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Diags_Module__loggerFxn1__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerFxn2__C, ".econst:xdc_runtime_Diags_Module__loggerFxn2__C");
asm("	.sect \".econst:xdc_runtime_Diags_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Diags_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Diags_Module__loggerFxn2__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerFxn4__C, ".econst:xdc_runtime_Diags_Module__loggerFxn4__C");
asm("	.sect \".econst:xdc_runtime_Diags_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Diags_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Diags_Module__loggerFxn4__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerFxn8__C, ".econst:xdc_runtime_Diags_Module__loggerFxn8__C");
asm("	.sect \".econst:xdc_runtime_Diags_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Diags_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Diags_Module__loggerFxn8__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Diags_Module__startupDoneFxn__C, ".econst:xdc_runtime_Diags_Module__startupDoneFxn__C");
asm("	.sect \".econst:xdc_runtime_Diags_Module__startupDoneFxn__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Diags_Module__startupDoneFxn__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Diags_Module__startupDoneFxn__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Diags_Object__count__C, ".econst:xdc_runtime_Diags_Object__count__C");
asm("	.sect \".econst:xdc_runtime_Diags_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Diags_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Diags_Object__count__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Diags_Object__heap__C, ".econst:xdc_runtime_Diags_Object__heap__C");
asm("	.sect \".econst:xdc_runtime_Diags_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Diags_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Diags_Object__heap__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Diags_Object__sizeof__C, ".econst:xdc_runtime_Diags_Object__sizeof__C");
asm("	.sect \".econst:xdc_runtime_Diags_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Diags_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Diags_Object__sizeof__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Diags_Object__table__C, ".econst:xdc_runtime_Diags_Object__table__C");
asm("	.sect \".econst:xdc_runtime_Diags_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Diags_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Diags_Object__table__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Diags_setMaskEnabled__C, ".econst:xdc_runtime_Diags_setMaskEnabled__C");
asm("	.sect \".econst:xdc_runtime_Diags_setMaskEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Diags_setMaskEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Diags_setMaskEnabled__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Diags_dictBase__C, ".econst:xdc_runtime_Diags_dictBase__C");
asm("	.sect \".econst:xdc_runtime_Diags_dictBase__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Diags_dictBase__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Diags_dictBase__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Error_Module__diagsEnabled__C, ".econst:xdc_runtime_Error_Module__diagsEnabled__C");
asm("	.sect \".econst:xdc_runtime_Error_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Error_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Error_Module__diagsEnabled__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Error_Module__diagsIncluded__C, ".econst:xdc_runtime_Error_Module__diagsIncluded__C");
asm("	.sect \".econst:xdc_runtime_Error_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Error_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Error_Module__diagsIncluded__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Error_Module__diagsMask__C, ".econst:xdc_runtime_Error_Module__diagsMask__C");
asm("	.sect \".econst:xdc_runtime_Error_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Error_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Error_Module__diagsMask__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Error_Module__gateObj__C, ".econst:xdc_runtime_Error_Module__gateObj__C");
asm("	.sect \".econst:xdc_runtime_Error_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Error_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Error_Module__gateObj__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Error_Module__gatePrms__C, ".econst:xdc_runtime_Error_Module__gatePrms__C");
asm("	.sect \".econst:xdc_runtime_Error_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Error_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Error_Module__gatePrms__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Error_Module__id__C, ".econst:xdc_runtime_Error_Module__id__C");
asm("	.sect \".econst:xdc_runtime_Error_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Error_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Error_Module__id__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerDefined__C, ".econst:xdc_runtime_Error_Module__loggerDefined__C");
asm("	.sect \".econst:xdc_runtime_Error_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Error_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Error_Module__loggerDefined__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerObj__C, ".econst:xdc_runtime_Error_Module__loggerObj__C");
asm("	.sect \".econst:xdc_runtime_Error_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Error_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Error_Module__loggerObj__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerFxn0__C, ".econst:xdc_runtime_Error_Module__loggerFxn0__C");
asm("	.sect \".econst:xdc_runtime_Error_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Error_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Error_Module__loggerFxn0__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerFxn1__C, ".econst:xdc_runtime_Error_Module__loggerFxn1__C");
asm("	.sect \".econst:xdc_runtime_Error_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Error_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Error_Module__loggerFxn1__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerFxn2__C, ".econst:xdc_runtime_Error_Module__loggerFxn2__C");
asm("	.sect \".econst:xdc_runtime_Error_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Error_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Error_Module__loggerFxn2__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerFxn4__C, ".econst:xdc_runtime_Error_Module__loggerFxn4__C");
asm("	.sect \".econst:xdc_runtime_Error_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Error_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Error_Module__loggerFxn4__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerFxn8__C, ".econst:xdc_runtime_Error_Module__loggerFxn8__C");
asm("	.sect \".econst:xdc_runtime_Error_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Error_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Error_Module__loggerFxn8__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Error_Module__startupDoneFxn__C, ".econst:xdc_runtime_Error_Module__startupDoneFxn__C");
asm("	.sect \".econst:xdc_runtime_Error_Module__startupDoneFxn__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Error_Module__startupDoneFxn__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Error_Module__startupDoneFxn__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Error_Object__count__C, ".econst:xdc_runtime_Error_Object__count__C");
asm("	.sect \".econst:xdc_runtime_Error_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Error_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Error_Object__count__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Error_Object__heap__C, ".econst:xdc_runtime_Error_Object__heap__C");
asm("	.sect \".econst:xdc_runtime_Error_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Error_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Error_Object__heap__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Error_Object__sizeof__C, ".econst:xdc_runtime_Error_Object__sizeof__C");
asm("	.sect \".econst:xdc_runtime_Error_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Error_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Error_Object__sizeof__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Error_Object__table__C, ".econst:xdc_runtime_Error_Object__table__C");
asm("	.sect \".econst:xdc_runtime_Error_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Error_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Error_Object__table__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Error_E_generic__C, ".econst:xdc_runtime_Error_E_generic__C");
asm("	.sect \".econst:xdc_runtime_Error_E_generic__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Error_E_generic__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Error_E_generic__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Error_E_memory__C, ".econst:xdc_runtime_Error_E_memory__C");
asm("	.sect \".econst:xdc_runtime_Error_E_memory__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Error_E_memory__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Error_E_memory__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Error_E_msgCode__C, ".econst:xdc_runtime_Error_E_msgCode__C");
asm("	.sect \".econst:xdc_runtime_Error_E_msgCode__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Error_E_msgCode__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Error_E_msgCode__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Error_policy__C, ".econst:xdc_runtime_Error_policy__C");
asm("	.sect \".econst:xdc_runtime_Error_policy__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Error_policy__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Error_policy__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Error_raiseHook__C, ".econst:xdc_runtime_Error_raiseHook__C");
asm("	.sect \".econst:xdc_runtime_Error_raiseHook__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Error_raiseHook__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Error_raiseHook__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Error_maxDepth__C, ".econst:xdc_runtime_Error_maxDepth__C");
asm("	.sect \".econst:xdc_runtime_Error_maxDepth__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Error_maxDepth__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Error_maxDepth__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Gate_Module__diagsEnabled__C, ".econst:xdc_runtime_Gate_Module__diagsEnabled__C");
asm("	.sect \".econst:xdc_runtime_Gate_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Gate_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Gate_Module__diagsEnabled__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Gate_Module__diagsIncluded__C, ".econst:xdc_runtime_Gate_Module__diagsIncluded__C");
asm("	.sect \".econst:xdc_runtime_Gate_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Gate_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Gate_Module__diagsIncluded__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Gate_Module__diagsMask__C, ".econst:xdc_runtime_Gate_Module__diagsMask__C");
asm("	.sect \".econst:xdc_runtime_Gate_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Gate_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Gate_Module__diagsMask__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Gate_Module__gateObj__C, ".econst:xdc_runtime_Gate_Module__gateObj__C");
asm("	.sect \".econst:xdc_runtime_Gate_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Gate_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Gate_Module__gateObj__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Gate_Module__gatePrms__C, ".econst:xdc_runtime_Gate_Module__gatePrms__C");
asm("	.sect \".econst:xdc_runtime_Gate_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Gate_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Gate_Module__gatePrms__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Gate_Module__id__C, ".econst:xdc_runtime_Gate_Module__id__C");
asm("	.sect \".econst:xdc_runtime_Gate_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Gate_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Gate_Module__id__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerDefined__C, ".econst:xdc_runtime_Gate_Module__loggerDefined__C");
asm("	.sect \".econst:xdc_runtime_Gate_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Gate_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Gate_Module__loggerDefined__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerObj__C, ".econst:xdc_runtime_Gate_Module__loggerObj__C");
asm("	.sect \".econst:xdc_runtime_Gate_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Gate_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Gate_Module__loggerObj__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerFxn0__C, ".econst:xdc_runtime_Gate_Module__loggerFxn0__C");
asm("	.sect \".econst:xdc_runtime_Gate_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Gate_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Gate_Module__loggerFxn0__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerFxn1__C, ".econst:xdc_runtime_Gate_Module__loggerFxn1__C");
asm("	.sect \".econst:xdc_runtime_Gate_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Gate_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Gate_Module__loggerFxn1__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerFxn2__C, ".econst:xdc_runtime_Gate_Module__loggerFxn2__C");
asm("	.sect \".econst:xdc_runtime_Gate_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Gate_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Gate_Module__loggerFxn2__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerFxn4__C, ".econst:xdc_runtime_Gate_Module__loggerFxn4__C");
asm("	.sect \".econst:xdc_runtime_Gate_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Gate_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Gate_Module__loggerFxn4__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerFxn8__C, ".econst:xdc_runtime_Gate_Module__loggerFxn8__C");
asm("	.sect \".econst:xdc_runtime_Gate_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Gate_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Gate_Module__loggerFxn8__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Gate_Module__startupDoneFxn__C, ".econst:xdc_runtime_Gate_Module__startupDoneFxn__C");
asm("	.sect \".econst:xdc_runtime_Gate_Module__startupDoneFxn__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Gate_Module__startupDoneFxn__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Gate_Module__startupDoneFxn__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Gate_Object__count__C, ".econst:xdc_runtime_Gate_Object__count__C");
asm("	.sect \".econst:xdc_runtime_Gate_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Gate_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Gate_Object__count__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Gate_Object__heap__C, ".econst:xdc_runtime_Gate_Object__heap__C");
asm("	.sect \".econst:xdc_runtime_Gate_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Gate_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Gate_Object__heap__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Gate_Object__sizeof__C, ".econst:xdc_runtime_Gate_Object__sizeof__C");
asm("	.sect \".econst:xdc_runtime_Gate_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Gate_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Gate_Object__sizeof__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Gate_Object__table__C, ".econst:xdc_runtime_Gate_Object__table__C");
asm("	.sect \".econst:xdc_runtime_Gate_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Gate_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Gate_Object__table__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Log_Module__diagsEnabled__C, ".econst:xdc_runtime_Log_Module__diagsEnabled__C");
asm("	.sect \".econst:xdc_runtime_Log_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Log_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Log_Module__diagsEnabled__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Log_Module__diagsIncluded__C, ".econst:xdc_runtime_Log_Module__diagsIncluded__C");
asm("	.sect \".econst:xdc_runtime_Log_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Log_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Log_Module__diagsIncluded__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Log_Module__diagsMask__C, ".econst:xdc_runtime_Log_Module__diagsMask__C");
asm("	.sect \".econst:xdc_runtime_Log_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Log_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Log_Module__diagsMask__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Log_Module__gateObj__C, ".econst:xdc_runtime_Log_Module__gateObj__C");
asm("	.sect \".econst:xdc_runtime_Log_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Log_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Log_Module__gateObj__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Log_Module__gatePrms__C, ".econst:xdc_runtime_Log_Module__gatePrms__C");
asm("	.sect \".econst:xdc_runtime_Log_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Log_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Log_Module__gatePrms__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Log_Module__id__C, ".econst:xdc_runtime_Log_Module__id__C");
asm("	.sect \".econst:xdc_runtime_Log_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Log_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Log_Module__id__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerDefined__C, ".econst:xdc_runtime_Log_Module__loggerDefined__C");
asm("	.sect \".econst:xdc_runtime_Log_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Log_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Log_Module__loggerDefined__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerObj__C, ".econst:xdc_runtime_Log_Module__loggerObj__C");
asm("	.sect \".econst:xdc_runtime_Log_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Log_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Log_Module__loggerObj__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerFxn0__C, ".econst:xdc_runtime_Log_Module__loggerFxn0__C");
asm("	.sect \".econst:xdc_runtime_Log_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Log_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Log_Module__loggerFxn0__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerFxn1__C, ".econst:xdc_runtime_Log_Module__loggerFxn1__C");
asm("	.sect \".econst:xdc_runtime_Log_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Log_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Log_Module__loggerFxn1__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerFxn2__C, ".econst:xdc_runtime_Log_Module__loggerFxn2__C");
asm("	.sect \".econst:xdc_runtime_Log_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Log_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Log_Module__loggerFxn2__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerFxn4__C, ".econst:xdc_runtime_Log_Module__loggerFxn4__C");
asm("	.sect \".econst:xdc_runtime_Log_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Log_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Log_Module__loggerFxn4__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerFxn8__C, ".econst:xdc_runtime_Log_Module__loggerFxn8__C");
asm("	.sect \".econst:xdc_runtime_Log_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Log_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Log_Module__loggerFxn8__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Log_Module__startupDoneFxn__C, ".econst:xdc_runtime_Log_Module__startupDoneFxn__C");
asm("	.sect \".econst:xdc_runtime_Log_Module__startupDoneFxn__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Log_Module__startupDoneFxn__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Log_Module__startupDoneFxn__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Log_Object__count__C, ".econst:xdc_runtime_Log_Object__count__C");
asm("	.sect \".econst:xdc_runtime_Log_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Log_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Log_Object__count__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Log_Object__heap__C, ".econst:xdc_runtime_Log_Object__heap__C");
asm("	.sect \".econst:xdc_runtime_Log_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Log_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Log_Object__heap__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Log_Object__sizeof__C, ".econst:xdc_runtime_Log_Object__sizeof__C");
asm("	.sect \".econst:xdc_runtime_Log_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Log_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Log_Object__sizeof__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Log_Object__table__C, ".econst:xdc_runtime_Log_Object__table__C");
asm("	.sect \".econst:xdc_runtime_Log_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Log_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Log_Object__table__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Log_L_construct__C, ".econst:xdc_runtime_Log_L_construct__C");
asm("	.sect \".econst:xdc_runtime_Log_L_construct__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Log_L_construct__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Log_L_construct__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Log_L_create__C, ".econst:xdc_runtime_Log_L_create__C");
asm("	.sect \".econst:xdc_runtime_Log_L_create__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Log_L_create__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Log_L_create__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Log_L_destruct__C, ".econst:xdc_runtime_Log_L_destruct__C");
asm("	.sect \".econst:xdc_runtime_Log_L_destruct__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Log_L_destruct__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Log_L_destruct__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Log_L_delete__C, ".econst:xdc_runtime_Log_L_delete__C");
asm("	.sect \".econst:xdc_runtime_Log_L_delete__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Log_L_delete__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Log_L_delete__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Log_L_error__C, ".econst:xdc_runtime_Log_L_error__C");
asm("	.sect \".econst:xdc_runtime_Log_L_error__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Log_L_error__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Log_L_error__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Log_L_warning__C, ".econst:xdc_runtime_Log_L_warning__C");
asm("	.sect \".econst:xdc_runtime_Log_L_warning__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Log_L_warning__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Log_L_warning__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Log_L_info__C, ".econst:xdc_runtime_Log_L_info__C");
asm("	.sect \".econst:xdc_runtime_Log_L_info__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Log_L_info__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Log_L_info__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Log_L_start__C, ".econst:xdc_runtime_Log_L_start__C");
asm("	.sect \".econst:xdc_runtime_Log_L_start__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Log_L_start__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Log_L_start__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Log_L_stop__C, ".econst:xdc_runtime_Log_L_stop__C");
asm("	.sect \".econst:xdc_runtime_Log_L_stop__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Log_L_stop__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Log_L_stop__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Log_L_startInstance__C, ".econst:xdc_runtime_Log_L_startInstance__C");
asm("	.sect \".econst:xdc_runtime_Log_L_startInstance__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Log_L_startInstance__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Log_L_startInstance__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Log_L_stopInstance__C, ".econst:xdc_runtime_Log_L_stopInstance__C");
asm("	.sect \".econst:xdc_runtime_Log_L_stopInstance__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Log_L_stopInstance__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Log_L_stopInstance__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Main_Module__diagsEnabled__C, ".econst:xdc_runtime_Main_Module__diagsEnabled__C");
asm("	.sect \".econst:xdc_runtime_Main_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Main_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Main_Module__diagsEnabled__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Main_Module__diagsIncluded__C, ".econst:xdc_runtime_Main_Module__diagsIncluded__C");
asm("	.sect \".econst:xdc_runtime_Main_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Main_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Main_Module__diagsIncluded__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Main_Module__diagsMask__C, ".econst:xdc_runtime_Main_Module__diagsMask__C");
asm("	.sect \".econst:xdc_runtime_Main_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Main_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Main_Module__diagsMask__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Main_Module__gateObj__C, ".econst:xdc_runtime_Main_Module__gateObj__C");
asm("	.sect \".econst:xdc_runtime_Main_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Main_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Main_Module__gateObj__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Main_Module__gatePrms__C, ".econst:xdc_runtime_Main_Module__gatePrms__C");
asm("	.sect \".econst:xdc_runtime_Main_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Main_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Main_Module__gatePrms__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Main_Module__id__C, ".econst:xdc_runtime_Main_Module__id__C");
asm("	.sect \".econst:xdc_runtime_Main_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Main_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Main_Module__id__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerDefined__C, ".econst:xdc_runtime_Main_Module__loggerDefined__C");
asm("	.sect \".econst:xdc_runtime_Main_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Main_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Main_Module__loggerDefined__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerObj__C, ".econst:xdc_runtime_Main_Module__loggerObj__C");
asm("	.sect \".econst:xdc_runtime_Main_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Main_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Main_Module__loggerObj__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerFxn0__C, ".econst:xdc_runtime_Main_Module__loggerFxn0__C");
asm("	.sect \".econst:xdc_runtime_Main_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Main_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Main_Module__loggerFxn0__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerFxn1__C, ".econst:xdc_runtime_Main_Module__loggerFxn1__C");
asm("	.sect \".econst:xdc_runtime_Main_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Main_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Main_Module__loggerFxn1__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerFxn2__C, ".econst:xdc_runtime_Main_Module__loggerFxn2__C");
asm("	.sect \".econst:xdc_runtime_Main_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Main_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Main_Module__loggerFxn2__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerFxn4__C, ".econst:xdc_runtime_Main_Module__loggerFxn4__C");
asm("	.sect \".econst:xdc_runtime_Main_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Main_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Main_Module__loggerFxn4__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerFxn8__C, ".econst:xdc_runtime_Main_Module__loggerFxn8__C");
asm("	.sect \".econst:xdc_runtime_Main_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Main_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Main_Module__loggerFxn8__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Main_Module__startupDoneFxn__C, ".econst:xdc_runtime_Main_Module__startupDoneFxn__C");
asm("	.sect \".econst:xdc_runtime_Main_Module__startupDoneFxn__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Main_Module__startupDoneFxn__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Main_Module__startupDoneFxn__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Main_Object__count__C, ".econst:xdc_runtime_Main_Object__count__C");
asm("	.sect \".econst:xdc_runtime_Main_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Main_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Main_Object__count__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Main_Object__heap__C, ".econst:xdc_runtime_Main_Object__heap__C");
asm("	.sect \".econst:xdc_runtime_Main_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Main_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Main_Object__heap__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Main_Object__sizeof__C, ".econst:xdc_runtime_Main_Object__sizeof__C");
asm("	.sect \".econst:xdc_runtime_Main_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Main_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Main_Object__sizeof__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Main_Object__table__C, ".econst:xdc_runtime_Main_Object__table__C");
asm("	.sect \".econst:xdc_runtime_Main_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Main_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Main_Object__table__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Memory_Module__diagsEnabled__C, ".econst:xdc_runtime_Memory_Module__diagsEnabled__C");
asm("	.sect \".econst:xdc_runtime_Memory_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Memory_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Memory_Module__diagsEnabled__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Memory_Module__diagsIncluded__C, ".econst:xdc_runtime_Memory_Module__diagsIncluded__C");
asm("	.sect \".econst:xdc_runtime_Memory_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Memory_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Memory_Module__diagsIncluded__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Memory_Module__diagsMask__C, ".econst:xdc_runtime_Memory_Module__diagsMask__C");
asm("	.sect \".econst:xdc_runtime_Memory_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Memory_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Memory_Module__diagsMask__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Memory_Module__gateObj__C, ".econst:xdc_runtime_Memory_Module__gateObj__C");
asm("	.sect \".econst:xdc_runtime_Memory_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Memory_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Memory_Module__gateObj__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Memory_Module__gatePrms__C, ".econst:xdc_runtime_Memory_Module__gatePrms__C");
asm("	.sect \".econst:xdc_runtime_Memory_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Memory_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Memory_Module__gatePrms__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Memory_Module__id__C, ".econst:xdc_runtime_Memory_Module__id__C");
asm("	.sect \".econst:xdc_runtime_Memory_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Memory_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Memory_Module__id__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerDefined__C, ".econst:xdc_runtime_Memory_Module__loggerDefined__C");
asm("	.sect \".econst:xdc_runtime_Memory_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Memory_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Memory_Module__loggerDefined__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerObj__C, ".econst:xdc_runtime_Memory_Module__loggerObj__C");
asm("	.sect \".econst:xdc_runtime_Memory_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Memory_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Memory_Module__loggerObj__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerFxn0__C, ".econst:xdc_runtime_Memory_Module__loggerFxn0__C");
asm("	.sect \".econst:xdc_runtime_Memory_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Memory_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Memory_Module__loggerFxn0__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerFxn1__C, ".econst:xdc_runtime_Memory_Module__loggerFxn1__C");
asm("	.sect \".econst:xdc_runtime_Memory_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Memory_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Memory_Module__loggerFxn1__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerFxn2__C, ".econst:xdc_runtime_Memory_Module__loggerFxn2__C");
asm("	.sect \".econst:xdc_runtime_Memory_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Memory_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Memory_Module__loggerFxn2__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerFxn4__C, ".econst:xdc_runtime_Memory_Module__loggerFxn4__C");
asm("	.sect \".econst:xdc_runtime_Memory_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Memory_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Memory_Module__loggerFxn4__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerFxn8__C, ".econst:xdc_runtime_Memory_Module__loggerFxn8__C");
asm("	.sect \".econst:xdc_runtime_Memory_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Memory_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Memory_Module__loggerFxn8__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Memory_Module__startupDoneFxn__C, ".econst:xdc_runtime_Memory_Module__startupDoneFxn__C");
asm("	.sect \".econst:xdc_runtime_Memory_Module__startupDoneFxn__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Memory_Module__startupDoneFxn__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Memory_Module__startupDoneFxn__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Memory_Object__count__C, ".econst:xdc_runtime_Memory_Object__count__C");
asm("	.sect \".econst:xdc_runtime_Memory_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Memory_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Memory_Object__count__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Memory_Object__heap__C, ".econst:xdc_runtime_Memory_Object__heap__C");
asm("	.sect \".econst:xdc_runtime_Memory_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Memory_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Memory_Object__heap__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Memory_Object__sizeof__C, ".econst:xdc_runtime_Memory_Object__sizeof__C");
asm("	.sect \".econst:xdc_runtime_Memory_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Memory_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Memory_Object__sizeof__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Memory_Object__table__C, ".econst:xdc_runtime_Memory_Object__table__C");
asm("	.sect \".econst:xdc_runtime_Memory_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Memory_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Memory_Object__table__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Memory_defaultHeapInstance__C, ".econst:xdc_runtime_Memory_defaultHeapInstance__C");
asm("	.sect \".econst:xdc_runtime_Memory_defaultHeapInstance__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Memory_defaultHeapInstance__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Memory_defaultHeapInstance__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Registry_Module__diagsEnabled__C, ".econst:xdc_runtime_Registry_Module__diagsEnabled__C");
asm("	.sect \".econst:xdc_runtime_Registry_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Registry_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Registry_Module__diagsEnabled__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Registry_Module__diagsIncluded__C, ".econst:xdc_runtime_Registry_Module__diagsIncluded__C");
asm("	.sect \".econst:xdc_runtime_Registry_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Registry_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Registry_Module__diagsIncluded__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Registry_Module__diagsMask__C, ".econst:xdc_runtime_Registry_Module__diagsMask__C");
asm("	.sect \".econst:xdc_runtime_Registry_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Registry_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Registry_Module__diagsMask__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Registry_Module__gateObj__C, ".econst:xdc_runtime_Registry_Module__gateObj__C");
asm("	.sect \".econst:xdc_runtime_Registry_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Registry_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Registry_Module__gateObj__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Registry_Module__gatePrms__C, ".econst:xdc_runtime_Registry_Module__gatePrms__C");
asm("	.sect \".econst:xdc_runtime_Registry_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Registry_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Registry_Module__gatePrms__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Registry_Module__id__C, ".econst:xdc_runtime_Registry_Module__id__C");
asm("	.sect \".econst:xdc_runtime_Registry_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Registry_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Registry_Module__id__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerDefined__C, ".econst:xdc_runtime_Registry_Module__loggerDefined__C");
asm("	.sect \".econst:xdc_runtime_Registry_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Registry_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Registry_Module__loggerDefined__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerObj__C, ".econst:xdc_runtime_Registry_Module__loggerObj__C");
asm("	.sect \".econst:xdc_runtime_Registry_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Registry_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Registry_Module__loggerObj__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerFxn0__C, ".econst:xdc_runtime_Registry_Module__loggerFxn0__C");
asm("	.sect \".econst:xdc_runtime_Registry_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Registry_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Registry_Module__loggerFxn0__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerFxn1__C, ".econst:xdc_runtime_Registry_Module__loggerFxn1__C");
asm("	.sect \".econst:xdc_runtime_Registry_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Registry_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Registry_Module__loggerFxn1__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerFxn2__C, ".econst:xdc_runtime_Registry_Module__loggerFxn2__C");
asm("	.sect \".econst:xdc_runtime_Registry_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Registry_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Registry_Module__loggerFxn2__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerFxn4__C, ".econst:xdc_runtime_Registry_Module__loggerFxn4__C");
asm("	.sect \".econst:xdc_runtime_Registry_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Registry_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Registry_Module__loggerFxn4__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerFxn8__C, ".econst:xdc_runtime_Registry_Module__loggerFxn8__C");
asm("	.sect \".econst:xdc_runtime_Registry_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Registry_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Registry_Module__loggerFxn8__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Registry_Module__startupDoneFxn__C, ".econst:xdc_runtime_Registry_Module__startupDoneFxn__C");
asm("	.sect \".econst:xdc_runtime_Registry_Module__startupDoneFxn__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Registry_Module__startupDoneFxn__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Registry_Module__startupDoneFxn__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Registry_Object__count__C, ".econst:xdc_runtime_Registry_Object__count__C");
asm("	.sect \".econst:xdc_runtime_Registry_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Registry_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Registry_Object__count__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Registry_Object__heap__C, ".econst:xdc_runtime_Registry_Object__heap__C");
asm("	.sect \".econst:xdc_runtime_Registry_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Registry_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Registry_Object__heap__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Registry_Object__sizeof__C, ".econst:xdc_runtime_Registry_Object__sizeof__C");
asm("	.sect \".econst:xdc_runtime_Registry_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Registry_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Registry_Object__sizeof__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Registry_Object__table__C, ".econst:xdc_runtime_Registry_Object__table__C");
asm("	.sect \".econst:xdc_runtime_Registry_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Registry_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Registry_Object__table__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Startup_firstFxns__A, ".econst:xdc_runtime_Startup_firstFxns__A");
asm("	.sect \".econst:xdc_runtime_Startup_firstFxns__A\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Startup_firstFxns__A\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Startup_firstFxns__A\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Startup_lastFxns__A, ".econst:xdc_runtime_Startup_lastFxns__A");
asm("	.sect \".econst:xdc_runtime_Startup_lastFxns__A\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Startup_lastFxns__A\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Startup_lastFxns__A\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Startup_sfxnTab__A, ".econst:xdc_runtime_Startup_sfxnTab__A");
asm("	.sect \".econst:xdc_runtime_Startup_sfxnTab__A\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Startup_sfxnTab__A\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Startup_sfxnTab__A\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Startup_sfxnRts__A, ".econst:xdc_runtime_Startup_sfxnRts__A");
asm("	.sect \".econst:xdc_runtime_Startup_sfxnRts__A\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Startup_sfxnRts__A\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Startup_sfxnRts__A\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Startup_Module__diagsEnabled__C, ".econst:xdc_runtime_Startup_Module__diagsEnabled__C");
asm("	.sect \".econst:xdc_runtime_Startup_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Startup_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Startup_Module__diagsEnabled__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Startup_Module__diagsIncluded__C, ".econst:xdc_runtime_Startup_Module__diagsIncluded__C");
asm("	.sect \".econst:xdc_runtime_Startup_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Startup_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Startup_Module__diagsIncluded__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Startup_Module__diagsMask__C, ".econst:xdc_runtime_Startup_Module__diagsMask__C");
asm("	.sect \".econst:xdc_runtime_Startup_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Startup_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Startup_Module__diagsMask__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Startup_Module__gateObj__C, ".econst:xdc_runtime_Startup_Module__gateObj__C");
asm("	.sect \".econst:xdc_runtime_Startup_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Startup_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Startup_Module__gateObj__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Startup_Module__gatePrms__C, ".econst:xdc_runtime_Startup_Module__gatePrms__C");
asm("	.sect \".econst:xdc_runtime_Startup_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Startup_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Startup_Module__gatePrms__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Startup_Module__id__C, ".econst:xdc_runtime_Startup_Module__id__C");
asm("	.sect \".econst:xdc_runtime_Startup_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Startup_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Startup_Module__id__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerDefined__C, ".econst:xdc_runtime_Startup_Module__loggerDefined__C");
asm("	.sect \".econst:xdc_runtime_Startup_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Startup_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Startup_Module__loggerDefined__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerObj__C, ".econst:xdc_runtime_Startup_Module__loggerObj__C");
asm("	.sect \".econst:xdc_runtime_Startup_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Startup_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Startup_Module__loggerObj__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerFxn0__C, ".econst:xdc_runtime_Startup_Module__loggerFxn0__C");
asm("	.sect \".econst:xdc_runtime_Startup_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Startup_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Startup_Module__loggerFxn0__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerFxn1__C, ".econst:xdc_runtime_Startup_Module__loggerFxn1__C");
asm("	.sect \".econst:xdc_runtime_Startup_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Startup_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Startup_Module__loggerFxn1__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerFxn2__C, ".econst:xdc_runtime_Startup_Module__loggerFxn2__C");
asm("	.sect \".econst:xdc_runtime_Startup_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Startup_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Startup_Module__loggerFxn2__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerFxn4__C, ".econst:xdc_runtime_Startup_Module__loggerFxn4__C");
asm("	.sect \".econst:xdc_runtime_Startup_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Startup_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Startup_Module__loggerFxn4__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerFxn8__C, ".econst:xdc_runtime_Startup_Module__loggerFxn8__C");
asm("	.sect \".econst:xdc_runtime_Startup_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Startup_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Startup_Module__loggerFxn8__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Startup_Module__startupDoneFxn__C, ".econst:xdc_runtime_Startup_Module__startupDoneFxn__C");
asm("	.sect \".econst:xdc_runtime_Startup_Module__startupDoneFxn__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Startup_Module__startupDoneFxn__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Startup_Module__startupDoneFxn__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Startup_Object__count__C, ".econst:xdc_runtime_Startup_Object__count__C");
asm("	.sect \".econst:xdc_runtime_Startup_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Startup_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Startup_Object__count__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Startup_Object__heap__C, ".econst:xdc_runtime_Startup_Object__heap__C");
asm("	.sect \".econst:xdc_runtime_Startup_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Startup_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Startup_Object__heap__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Startup_Object__sizeof__C, ".econst:xdc_runtime_Startup_Object__sizeof__C");
asm("	.sect \".econst:xdc_runtime_Startup_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Startup_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Startup_Object__sizeof__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Startup_Object__table__C, ".econst:xdc_runtime_Startup_Object__table__C");
asm("	.sect \".econst:xdc_runtime_Startup_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Startup_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Startup_Object__table__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Startup_maxPasses__C, ".econst:xdc_runtime_Startup_maxPasses__C");
asm("	.sect \".econst:xdc_runtime_Startup_maxPasses__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Startup_maxPasses__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Startup_maxPasses__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Startup_firstFxns__C, ".econst:xdc_runtime_Startup_firstFxns__C");
asm("	.sect \".econst:xdc_runtime_Startup_firstFxns__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Startup_firstFxns__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Startup_firstFxns__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Startup_lastFxns__C, ".econst:xdc_runtime_Startup_lastFxns__C");
asm("	.sect \".econst:xdc_runtime_Startup_lastFxns__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Startup_lastFxns__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Startup_lastFxns__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Startup_startModsFxn__C, ".econst:xdc_runtime_Startup_startModsFxn__C");
asm("	.sect \".econst:xdc_runtime_Startup_startModsFxn__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Startup_startModsFxn__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Startup_startModsFxn__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Startup_execImpl__C, ".econst:xdc_runtime_Startup_execImpl__C");
asm("	.sect \".econst:xdc_runtime_Startup_execImpl__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Startup_execImpl__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Startup_execImpl__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Startup_sfxnTab__C, ".econst:xdc_runtime_Startup_sfxnTab__C");
asm("	.sect \".econst:xdc_runtime_Startup_sfxnTab__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Startup_sfxnTab__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Startup_sfxnTab__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Startup_sfxnRts__C, ".econst:xdc_runtime_Startup_sfxnRts__C");
asm("	.sect \".econst:xdc_runtime_Startup_sfxnRts__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Startup_sfxnRts__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Startup_sfxnRts__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_SysMin_Module__diagsEnabled__C, ".econst:xdc_runtime_SysMin_Module__diagsEnabled__C");
asm("	.sect \".econst:xdc_runtime_SysMin_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_SysMin_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_SysMin_Module__diagsEnabled__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_SysMin_Module__diagsIncluded__C, ".econst:xdc_runtime_SysMin_Module__diagsIncluded__C");
asm("	.sect \".econst:xdc_runtime_SysMin_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_SysMin_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_SysMin_Module__diagsIncluded__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_SysMin_Module__diagsMask__C, ".econst:xdc_runtime_SysMin_Module__diagsMask__C");
asm("	.sect \".econst:xdc_runtime_SysMin_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_SysMin_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_SysMin_Module__diagsMask__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_SysMin_Module__gateObj__C, ".econst:xdc_runtime_SysMin_Module__gateObj__C");
asm("	.sect \".econst:xdc_runtime_SysMin_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_SysMin_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_SysMin_Module__gateObj__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_SysMin_Module__gatePrms__C, ".econst:xdc_runtime_SysMin_Module__gatePrms__C");
asm("	.sect \".econst:xdc_runtime_SysMin_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_SysMin_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_SysMin_Module__gatePrms__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_SysMin_Module__id__C, ".econst:xdc_runtime_SysMin_Module__id__C");
asm("	.sect \".econst:xdc_runtime_SysMin_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_SysMin_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_SysMin_Module__id__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_SysMin_Module__loggerDefined__C, ".econst:xdc_runtime_SysMin_Module__loggerDefined__C");
asm("	.sect \".econst:xdc_runtime_SysMin_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_SysMin_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_SysMin_Module__loggerDefined__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_SysMin_Module__loggerObj__C, ".econst:xdc_runtime_SysMin_Module__loggerObj__C");
asm("	.sect \".econst:xdc_runtime_SysMin_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_SysMin_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_SysMin_Module__loggerObj__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_SysMin_Module__loggerFxn0__C, ".econst:xdc_runtime_SysMin_Module__loggerFxn0__C");
asm("	.sect \".econst:xdc_runtime_SysMin_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_SysMin_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_SysMin_Module__loggerFxn0__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_SysMin_Module__loggerFxn1__C, ".econst:xdc_runtime_SysMin_Module__loggerFxn1__C");
asm("	.sect \".econst:xdc_runtime_SysMin_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_SysMin_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_SysMin_Module__loggerFxn1__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_SysMin_Module__loggerFxn2__C, ".econst:xdc_runtime_SysMin_Module__loggerFxn2__C");
asm("	.sect \".econst:xdc_runtime_SysMin_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_SysMin_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_SysMin_Module__loggerFxn2__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_SysMin_Module__loggerFxn4__C, ".econst:xdc_runtime_SysMin_Module__loggerFxn4__C");
asm("	.sect \".econst:xdc_runtime_SysMin_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_SysMin_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_SysMin_Module__loggerFxn4__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_SysMin_Module__loggerFxn8__C, ".econst:xdc_runtime_SysMin_Module__loggerFxn8__C");
asm("	.sect \".econst:xdc_runtime_SysMin_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_SysMin_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_SysMin_Module__loggerFxn8__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_SysMin_Module__startupDoneFxn__C, ".econst:xdc_runtime_SysMin_Module__startupDoneFxn__C");
asm("	.sect \".econst:xdc_runtime_SysMin_Module__startupDoneFxn__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_SysMin_Module__startupDoneFxn__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_SysMin_Module__startupDoneFxn__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_SysMin_Object__count__C, ".econst:xdc_runtime_SysMin_Object__count__C");
asm("	.sect \".econst:xdc_runtime_SysMin_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_SysMin_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_SysMin_Object__count__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_SysMin_Object__heap__C, ".econst:xdc_runtime_SysMin_Object__heap__C");
asm("	.sect \".econst:xdc_runtime_SysMin_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_SysMin_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_SysMin_Object__heap__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_SysMin_Object__sizeof__C, ".econst:xdc_runtime_SysMin_Object__sizeof__C");
asm("	.sect \".econst:xdc_runtime_SysMin_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_SysMin_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_SysMin_Object__sizeof__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_SysMin_Object__table__C, ".econst:xdc_runtime_SysMin_Object__table__C");
asm("	.sect \".econst:xdc_runtime_SysMin_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_SysMin_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_SysMin_Object__table__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_SysMin_bufSize__C, ".econst:xdc_runtime_SysMin_bufSize__C");
asm("	.sect \".econst:xdc_runtime_SysMin_bufSize__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_SysMin_bufSize__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_SysMin_bufSize__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_SysMin_flushAtExit__C, ".econst:xdc_runtime_SysMin_flushAtExit__C");
asm("	.sect \".econst:xdc_runtime_SysMin_flushAtExit__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_SysMin_flushAtExit__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_SysMin_flushAtExit__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_SysMin_outputFxn__C, ".econst:xdc_runtime_SysMin_outputFxn__C");
asm("	.sect \".econst:xdc_runtime_SysMin_outputFxn__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_SysMin_outputFxn__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_SysMin_outputFxn__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_SysMin_outputFunc__C, ".econst:xdc_runtime_SysMin_outputFunc__C");
asm("	.sect \".econst:xdc_runtime_SysMin_outputFunc__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_SysMin_outputFunc__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_SysMin_outputFunc__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_System_Module__diagsEnabled__C, ".econst:xdc_runtime_System_Module__diagsEnabled__C");
asm("	.sect \".econst:xdc_runtime_System_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_System_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_System_Module__diagsEnabled__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_System_Module__diagsIncluded__C, ".econst:xdc_runtime_System_Module__diagsIncluded__C");
asm("	.sect \".econst:xdc_runtime_System_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_System_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_System_Module__diagsIncluded__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_System_Module__diagsMask__C, ".econst:xdc_runtime_System_Module__diagsMask__C");
asm("	.sect \".econst:xdc_runtime_System_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_System_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_System_Module__diagsMask__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_System_Module__gateObj__C, ".econst:xdc_runtime_System_Module__gateObj__C");
asm("	.sect \".econst:xdc_runtime_System_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_System_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_System_Module__gateObj__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_System_Module__gatePrms__C, ".econst:xdc_runtime_System_Module__gatePrms__C");
asm("	.sect \".econst:xdc_runtime_System_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_System_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_System_Module__gatePrms__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_System_Module__id__C, ".econst:xdc_runtime_System_Module__id__C");
asm("	.sect \".econst:xdc_runtime_System_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_System_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_System_Module__id__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_System_Module__loggerDefined__C, ".econst:xdc_runtime_System_Module__loggerDefined__C");
asm("	.sect \".econst:xdc_runtime_System_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_System_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_System_Module__loggerDefined__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_System_Module__loggerObj__C, ".econst:xdc_runtime_System_Module__loggerObj__C");
asm("	.sect \".econst:xdc_runtime_System_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_System_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_System_Module__loggerObj__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_System_Module__loggerFxn0__C, ".econst:xdc_runtime_System_Module__loggerFxn0__C");
asm("	.sect \".econst:xdc_runtime_System_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_System_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_System_Module__loggerFxn0__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_System_Module__loggerFxn1__C, ".econst:xdc_runtime_System_Module__loggerFxn1__C");
asm("	.sect \".econst:xdc_runtime_System_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_System_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_System_Module__loggerFxn1__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_System_Module__loggerFxn2__C, ".econst:xdc_runtime_System_Module__loggerFxn2__C");
asm("	.sect \".econst:xdc_runtime_System_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_System_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_System_Module__loggerFxn2__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_System_Module__loggerFxn4__C, ".econst:xdc_runtime_System_Module__loggerFxn4__C");
asm("	.sect \".econst:xdc_runtime_System_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_System_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_System_Module__loggerFxn4__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_System_Module__loggerFxn8__C, ".econst:xdc_runtime_System_Module__loggerFxn8__C");
asm("	.sect \".econst:xdc_runtime_System_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_System_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_System_Module__loggerFxn8__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_System_Module__startupDoneFxn__C, ".econst:xdc_runtime_System_Module__startupDoneFxn__C");
asm("	.sect \".econst:xdc_runtime_System_Module__startupDoneFxn__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_System_Module__startupDoneFxn__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_System_Module__startupDoneFxn__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_System_Object__count__C, ".econst:xdc_runtime_System_Object__count__C");
asm("	.sect \".econst:xdc_runtime_System_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_System_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_System_Object__count__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_System_Object__heap__C, ".econst:xdc_runtime_System_Object__heap__C");
asm("	.sect \".econst:xdc_runtime_System_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_System_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_System_Object__heap__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_System_Object__sizeof__C, ".econst:xdc_runtime_System_Object__sizeof__C");
asm("	.sect \".econst:xdc_runtime_System_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_System_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_System_Object__sizeof__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_System_Object__table__C, ".econst:xdc_runtime_System_Object__table__C");
asm("	.sect \".econst:xdc_runtime_System_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_System_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_System_Object__table__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_System_A_cannotFitIntoArg__C, ".econst:xdc_runtime_System_A_cannotFitIntoArg__C");
asm("	.sect \".econst:xdc_runtime_System_A_cannotFitIntoArg__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_System_A_cannotFitIntoArg__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_System_A_cannotFitIntoArg__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_System_maxAtexitHandlers__C, ".econst:xdc_runtime_System_maxAtexitHandlers__C");
asm("	.sect \".econst:xdc_runtime_System_maxAtexitHandlers__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_System_maxAtexitHandlers__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_System_maxAtexitHandlers__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_System_extendFxn__C, ".econst:xdc_runtime_System_extendFxn__C");
asm("	.sect \".econst:xdc_runtime_System_extendFxn__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_System_extendFxn__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_System_extendFxn__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Text_charTab__A, ".econst:xdc_runtime_Text_charTab__A");
asm("	.sect \".econst:xdc_runtime_Text_charTab__A\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Text_charTab__A\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Text_charTab__A\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Text_nodeTab__A, ".econst:xdc_runtime_Text_nodeTab__A");
asm("	.sect \".econst:xdc_runtime_Text_nodeTab__A\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Text_nodeTab__A\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Text_nodeTab__A\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Text_Module__diagsEnabled__C, ".econst:xdc_runtime_Text_Module__diagsEnabled__C");
asm("	.sect \".econst:xdc_runtime_Text_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Text_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Text_Module__diagsEnabled__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Text_Module__diagsIncluded__C, ".econst:xdc_runtime_Text_Module__diagsIncluded__C");
asm("	.sect \".econst:xdc_runtime_Text_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Text_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Text_Module__diagsIncluded__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Text_Module__diagsMask__C, ".econst:xdc_runtime_Text_Module__diagsMask__C");
asm("	.sect \".econst:xdc_runtime_Text_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Text_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Text_Module__diagsMask__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Text_Module__gateObj__C, ".econst:xdc_runtime_Text_Module__gateObj__C");
asm("	.sect \".econst:xdc_runtime_Text_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Text_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Text_Module__gateObj__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Text_Module__gatePrms__C, ".econst:xdc_runtime_Text_Module__gatePrms__C");
asm("	.sect \".econst:xdc_runtime_Text_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Text_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Text_Module__gatePrms__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Text_Module__id__C, ".econst:xdc_runtime_Text_Module__id__C");
asm("	.sect \".econst:xdc_runtime_Text_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Text_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Text_Module__id__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerDefined__C, ".econst:xdc_runtime_Text_Module__loggerDefined__C");
asm("	.sect \".econst:xdc_runtime_Text_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Text_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Text_Module__loggerDefined__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerObj__C, ".econst:xdc_runtime_Text_Module__loggerObj__C");
asm("	.sect \".econst:xdc_runtime_Text_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Text_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Text_Module__loggerObj__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerFxn0__C, ".econst:xdc_runtime_Text_Module__loggerFxn0__C");
asm("	.sect \".econst:xdc_runtime_Text_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Text_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Text_Module__loggerFxn0__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerFxn1__C, ".econst:xdc_runtime_Text_Module__loggerFxn1__C");
asm("	.sect \".econst:xdc_runtime_Text_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Text_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Text_Module__loggerFxn1__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerFxn2__C, ".econst:xdc_runtime_Text_Module__loggerFxn2__C");
asm("	.sect \".econst:xdc_runtime_Text_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Text_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Text_Module__loggerFxn2__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerFxn4__C, ".econst:xdc_runtime_Text_Module__loggerFxn4__C");
asm("	.sect \".econst:xdc_runtime_Text_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Text_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Text_Module__loggerFxn4__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerFxn8__C, ".econst:xdc_runtime_Text_Module__loggerFxn8__C");
asm("	.sect \".econst:xdc_runtime_Text_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Text_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Text_Module__loggerFxn8__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Text_Module__startupDoneFxn__C, ".econst:xdc_runtime_Text_Module__startupDoneFxn__C");
asm("	.sect \".econst:xdc_runtime_Text_Module__startupDoneFxn__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Text_Module__startupDoneFxn__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Text_Module__startupDoneFxn__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Text_Object__count__C, ".econst:xdc_runtime_Text_Object__count__C");
asm("	.sect \".econst:xdc_runtime_Text_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Text_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Text_Object__count__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Text_Object__heap__C, ".econst:xdc_runtime_Text_Object__heap__C");
asm("	.sect \".econst:xdc_runtime_Text_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Text_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Text_Object__heap__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Text_Object__sizeof__C, ".econst:xdc_runtime_Text_Object__sizeof__C");
asm("	.sect \".econst:xdc_runtime_Text_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Text_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Text_Object__sizeof__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Text_Object__table__C, ".econst:xdc_runtime_Text_Object__table__C");
asm("	.sect \".econst:xdc_runtime_Text_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Text_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Text_Object__table__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Text_nameUnknown__C, ".econst:xdc_runtime_Text_nameUnknown__C");
asm("	.sect \".econst:xdc_runtime_Text_nameUnknown__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Text_nameUnknown__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Text_nameUnknown__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Text_nameEmpty__C, ".econst:xdc_runtime_Text_nameEmpty__C");
asm("	.sect \".econst:xdc_runtime_Text_nameEmpty__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Text_nameEmpty__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Text_nameEmpty__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Text_nameStatic__C, ".econst:xdc_runtime_Text_nameStatic__C");
asm("	.sect \".econst:xdc_runtime_Text_nameStatic__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Text_nameStatic__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Text_nameStatic__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Text_isLoaded__C, ".econst:xdc_runtime_Text_isLoaded__C");
asm("	.sect \".econst:xdc_runtime_Text_isLoaded__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Text_isLoaded__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Text_isLoaded__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Text_charTab__C, ".econst:xdc_runtime_Text_charTab__C");
asm("	.sect \".econst:xdc_runtime_Text_charTab__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Text_charTab__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Text_charTab__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Text_nodeTab__C, ".econst:xdc_runtime_Text_nodeTab__C");
asm("	.sect \".econst:xdc_runtime_Text_nodeTab__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Text_nodeTab__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Text_nodeTab__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Text_charCnt__C, ".econst:xdc_runtime_Text_charCnt__C");
asm("	.sect \".econst:xdc_runtime_Text_charCnt__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Text_charCnt__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Text_charCnt__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Text_nodeCnt__C, ".econst:xdc_runtime_Text_nodeCnt__C");
asm("	.sect \".econst:xdc_runtime_Text_nodeCnt__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Text_nodeCnt__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Text_nodeCnt__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Text_unnamedModsLastId__C, ".econst:xdc_runtime_Text_unnamedModsLastId__C");
asm("	.sect \".econst:xdc_runtime_Text_unnamedModsLastId__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Text_unnamedModsLastId__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Text_unnamedModsLastId__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Text_registryModsLastId__C, ".econst:xdc_runtime_Text_registryModsLastId__C");
asm("	.sect \".econst:xdc_runtime_Text_registryModsLastId__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Text_registryModsLastId__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Text_registryModsLastId__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Text_visitRopeFxn__C, ".econst:xdc_runtime_Text_visitRopeFxn__C");
asm("	.sect \".econst:xdc_runtime_Text_visitRopeFxn__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Text_visitRopeFxn__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Text_visitRopeFxn__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Text_visitRopeFxn2__C, ".econst:xdc_runtime_Text_visitRopeFxn2__C");
asm("	.sect \".econst:xdc_runtime_Text_visitRopeFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[0].econst:xdc_runtime_Text_visitRopeFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[1].econst:xdc_runtime_Text_visitRopeFxn2__C\"");
asm("	.clink ");

