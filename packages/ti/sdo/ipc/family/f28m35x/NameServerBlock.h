/*
 *  Copyright 2012 by Texas Instruments Incorporated.
 *
 */

/*
 *  Do not modify this file; it is automatically 
 *  generated and any modifications will be overwritten.
 *
 * @(#) xdc-y25
 */

/*
 * ======== GENERATED SECTIONS ========
 *     
 *     PROLOGUE
 *     INCLUDES
 *     
 *     CREATE ARGS
 *     INTERNAL DEFINITIONS
 *     MODULE-WIDE CONFIGS
 *     PER-INSTANCE TYPES
 *     VIRTUAL FUNCTIONS
 *     FUNCTION DECLARATIONS
 *     FUNCTION SELECTORS
 *     CONVERTORS
 *     SYSTEM FUNCTIONS
 *     
 *     EPILOGUE
 *     STATE STRUCTURES
 *     PREFIX ALIASES
 */


/*
 * ======== PROLOGUE ========
 */

#ifndef ti_sdo_ipc_family_f28m35x_NameServerBlock__include
#define ti_sdo_ipc_family_f28m35x_NameServerBlock__include

#ifndef __nested__
#define __nested__
#define ti_sdo_ipc_family_f28m35x_NameServerBlock__top__
#endif

#ifdef __cplusplus
#define __extern extern "C"
#else
#define __extern extern
#endif

#define ti_sdo_ipc_family_f28m35x_NameServerBlock___VERS 150


/*
 * ======== INCLUDES ========
 */

#include <xdc/std.h>

#include <xdc/runtime/xdc.h>
#include <xdc/runtime/Types.h>
#include <xdc/runtime/IInstance.h>
#include <ti/sdo/ipc/family/f28m35x/package/package.defs.h>

#include <ti/sdo/utils/INameServerRemote.h>
#include <xdc/runtime/Assert.h>
#include <ti/sysbios/knl/Swi.h>
#include <ti/sysbios/knl/Semaphore.h>
#include <xdc/runtime/Error.h>


/*
 * ======== AUXILIARY DEFINITIONS ========
 */

/* Status */
typedef ti_sdo_utils_INameServerRemote_Status ti_sdo_ipc_family_f28m35x_NameServerBlock_Status;

/* Message */
typedef xdc_Bits32 __T1_ti_sdo_ipc_family_f28m35x_NameServerBlock_Message__instanceName;
typedef xdc_Bits32 __ARRAY1_ti_sdo_ipc_family_f28m35x_NameServerBlock_Message__instanceName[8];
typedef __ARRAY1_ti_sdo_ipc_family_f28m35x_NameServerBlock_Message__instanceName __TA_ti_sdo_ipc_family_f28m35x_NameServerBlock_Message__instanceName;
typedef xdc_Bits32 __T1_ti_sdo_ipc_family_f28m35x_NameServerBlock_Message__name;
typedef xdc_Bits32 __ARRAY1_ti_sdo_ipc_family_f28m35x_NameServerBlock_Message__name[8];
typedef __ARRAY1_ti_sdo_ipc_family_f28m35x_NameServerBlock_Message__name __TA_ti_sdo_ipc_family_f28m35x_NameServerBlock_Message__name;
typedef xdc_Bits32 __T1_ti_sdo_ipc_family_f28m35x_NameServerBlock_Message__valueBuf;
typedef xdc_Bits32 __ARRAY1_ti_sdo_ipc_family_f28m35x_NameServerBlock_Message__valueBuf[11];
typedef __ARRAY1_ti_sdo_ipc_family_f28m35x_NameServerBlock_Message__valueBuf __TA_ti_sdo_ipc_family_f28m35x_NameServerBlock_Message__valueBuf;
struct ti_sdo_ipc_family_f28m35x_NameServerBlock_Message {
    xdc_Bits32 request;
    xdc_Bits32 response;
    xdc_Bits32 requestStatus;
    xdc_Bits32 value;
    xdc_Bits32 valueLen;
    __TA_ti_sdo_ipc_family_f28m35x_NameServerBlock_Message__instanceName instanceName;
    __TA_ti_sdo_ipc_family_f28m35x_NameServerBlock_Message__name name;
    __TA_ti_sdo_ipc_family_f28m35x_NameServerBlock_Message__valueBuf valueBuf;
};

/* S_SUCCESS */
#define ti_sdo_ipc_family_f28m35x_NameServerBlock_S_SUCCESS ti_sdo_utils_INameServerRemote_S_SUCCESS

/* E_FAIL */
#define ti_sdo_ipc_family_f28m35x_NameServerBlock_E_FAIL ti_sdo_utils_INameServerRemote_E_FAIL

/* E_ERROR */
#define ti_sdo_ipc_family_f28m35x_NameServerBlock_E_ERROR ti_sdo_utils_INameServerRemote_E_ERROR


/*
 * ======== CREATE ARGS ========
 */

/* Args__create */
typedef struct ti_sdo_ipc_family_f28m35x_NameServerBlock_Args__create {
    xdc_UInt16 procId;
} ti_sdo_ipc_family_f28m35x_NameServerBlock_Args__create;


/*
 * ======== INTERNAL DEFINITIONS ========
 */

/* bufLen */
#define ti_sdo_ipc_family_f28m35x_NameServerBlock_bufLen (11)


/*
 * ======== MODULE-WIDE CONFIGS ========
 */

/* Module__diagsEnabled */
typedef xdc_Bits32 CT__ti_sdo_ipc_family_f28m35x_NameServerBlock_Module__diagsEnabled;
__extern __FAR__ const CT__ti_sdo_ipc_family_f28m35x_NameServerBlock_Module__diagsEnabled ti_sdo_ipc_family_f28m35x_NameServerBlock_Module__diagsEnabled__C;

/* Module__diagsIncluded */
typedef xdc_Bits32 CT__ti_sdo_ipc_family_f28m35x_NameServerBlock_Module__diagsIncluded;
__extern __FAR__ const CT__ti_sdo_ipc_family_f28m35x_NameServerBlock_Module__diagsIncluded ti_sdo_ipc_family_f28m35x_NameServerBlock_Module__diagsIncluded__C;

/* Module__diagsMask */
typedef xdc_Bits16* CT__ti_sdo_ipc_family_f28m35x_NameServerBlock_Module__diagsMask;
__extern __FAR__ const CT__ti_sdo_ipc_family_f28m35x_NameServerBlock_Module__diagsMask ti_sdo_ipc_family_f28m35x_NameServerBlock_Module__diagsMask__C;

/* Module__gateObj */
typedef xdc_Ptr CT__ti_sdo_ipc_family_f28m35x_NameServerBlock_Module__gateObj;
__extern __FAR__ const CT__ti_sdo_ipc_family_f28m35x_NameServerBlock_Module__gateObj ti_sdo_ipc_family_f28m35x_NameServerBlock_Module__gateObj__C;

/* Module__gatePrms */
typedef xdc_Ptr CT__ti_sdo_ipc_family_f28m35x_NameServerBlock_Module__gatePrms;
__extern __FAR__ const CT__ti_sdo_ipc_family_f28m35x_NameServerBlock_Module__gatePrms ti_sdo_ipc_family_f28m35x_NameServerBlock_Module__gatePrms__C;

/* Module__id */
typedef xdc_runtime_Types_ModuleId CT__ti_sdo_ipc_family_f28m35x_NameServerBlock_Module__id;
__extern __FAR__ const CT__ti_sdo_ipc_family_f28m35x_NameServerBlock_Module__id ti_sdo_ipc_family_f28m35x_NameServerBlock_Module__id__C;

/* Module__loggerDefined */
typedef xdc_Bool CT__ti_sdo_ipc_family_f28m35x_NameServerBlock_Module__loggerDefined;
__extern __FAR__ const CT__ti_sdo_ipc_family_f28m35x_NameServerBlock_Module__loggerDefined ti_sdo_ipc_family_f28m35x_NameServerBlock_Module__loggerDefined__C;

/* Module__loggerObj */
typedef xdc_Ptr CT__ti_sdo_ipc_family_f28m35x_NameServerBlock_Module__loggerObj;
__extern __FAR__ const CT__ti_sdo_ipc_family_f28m35x_NameServerBlock_Module__loggerObj ti_sdo_ipc_family_f28m35x_NameServerBlock_Module__loggerObj__C;

/* Module__loggerFxn0 */
typedef xdc_runtime_Types_LoggerFxn0 CT__ti_sdo_ipc_family_f28m35x_NameServerBlock_Module__loggerFxn0;
__extern __FAR__ const CT__ti_sdo_ipc_family_f28m35x_NameServerBlock_Module__loggerFxn0 ti_sdo_ipc_family_f28m35x_NameServerBlock_Module__loggerFxn0__C;

/* Module__loggerFxn1 */
typedef xdc_runtime_Types_LoggerFxn1 CT__ti_sdo_ipc_family_f28m35x_NameServerBlock_Module__loggerFxn1;
__extern __FAR__ const CT__ti_sdo_ipc_family_f28m35x_NameServerBlock_Module__loggerFxn1 ti_sdo_ipc_family_f28m35x_NameServerBlock_Module__loggerFxn1__C;

/* Module__loggerFxn2 */
typedef xdc_runtime_Types_LoggerFxn2 CT__ti_sdo_ipc_family_f28m35x_NameServerBlock_Module__loggerFxn2;
__extern __FAR__ const CT__ti_sdo_ipc_family_f28m35x_NameServerBlock_Module__loggerFxn2 ti_sdo_ipc_family_f28m35x_NameServerBlock_Module__loggerFxn2__C;

/* Module__loggerFxn4 */
typedef xdc_runtime_Types_LoggerFxn4 CT__ti_sdo_ipc_family_f28m35x_NameServerBlock_Module__loggerFxn4;
__extern __FAR__ const CT__ti_sdo_ipc_family_f28m35x_NameServerBlock_Module__loggerFxn4 ti_sdo_ipc_family_f28m35x_NameServerBlock_Module__loggerFxn4__C;

/* Module__loggerFxn8 */
typedef xdc_runtime_Types_LoggerFxn8 CT__ti_sdo_ipc_family_f28m35x_NameServerBlock_Module__loggerFxn8;
__extern __FAR__ const CT__ti_sdo_ipc_family_f28m35x_NameServerBlock_Module__loggerFxn8 ti_sdo_ipc_family_f28m35x_NameServerBlock_Module__loggerFxn8__C;

/* Module__startupDoneFxn */
typedef xdc_Bool (*CT__ti_sdo_ipc_family_f28m35x_NameServerBlock_Module__startupDoneFxn)(void);
__extern __FAR__ const CT__ti_sdo_ipc_family_f28m35x_NameServerBlock_Module__startupDoneFxn ti_sdo_ipc_family_f28m35x_NameServerBlock_Module__startupDoneFxn__C;

/* Object__count */
typedef xdc_Int CT__ti_sdo_ipc_family_f28m35x_NameServerBlock_Object__count;
__extern __FAR__ const CT__ti_sdo_ipc_family_f28m35x_NameServerBlock_Object__count ti_sdo_ipc_family_f28m35x_NameServerBlock_Object__count__C;

/* Object__heap */
typedef xdc_runtime_IHeap_Handle CT__ti_sdo_ipc_family_f28m35x_NameServerBlock_Object__heap;
__extern __FAR__ const CT__ti_sdo_ipc_family_f28m35x_NameServerBlock_Object__heap ti_sdo_ipc_family_f28m35x_NameServerBlock_Object__heap__C;

/* Object__sizeof */
typedef xdc_SizeT CT__ti_sdo_ipc_family_f28m35x_NameServerBlock_Object__sizeof;
__extern __FAR__ const CT__ti_sdo_ipc_family_f28m35x_NameServerBlock_Object__sizeof ti_sdo_ipc_family_f28m35x_NameServerBlock_Object__sizeof__C;

/* Object__table */
typedef xdc_Ptr CT__ti_sdo_ipc_family_f28m35x_NameServerBlock_Object__table;
__extern __FAR__ const CT__ti_sdo_ipc_family_f28m35x_NameServerBlock_Object__table ti_sdo_ipc_family_f28m35x_NameServerBlock_Object__table__C;

/* A_invalidValueLen */
#define ti_sdo_ipc_family_f28m35x_NameServerBlock_A_invalidValueLen (ti_sdo_ipc_family_f28m35x_NameServerBlock_A_invalidValueLen__C)
typedef xdc_runtime_Assert_Id CT__ti_sdo_ipc_family_f28m35x_NameServerBlock_A_invalidValueLen;
__extern __FAR__ const CT__ti_sdo_ipc_family_f28m35x_NameServerBlock_A_invalidValueLen ti_sdo_ipc_family_f28m35x_NameServerBlock_A_invalidValueLen__C;

/* notifyEventId */
#ifdef ti_sdo_ipc_family_f28m35x_NameServerBlock_notifyEventId__D
#define ti_sdo_ipc_family_f28m35x_NameServerBlock_notifyEventId (ti_sdo_ipc_family_f28m35x_NameServerBlock_notifyEventId__D)
#else
#define ti_sdo_ipc_family_f28m35x_NameServerBlock_notifyEventId (ti_sdo_ipc_family_f28m35x_NameServerBlock_notifyEventId__C)
typedef xdc_UInt32 CT__ti_sdo_ipc_family_f28m35x_NameServerBlock_notifyEventId;
__extern __FAR__ const CT__ti_sdo_ipc_family_f28m35x_NameServerBlock_notifyEventId ti_sdo_ipc_family_f28m35x_NameServerBlock_notifyEventId__C;
#endif


/*
 * ======== PER-INSTANCE TYPES ========
 */

/* Params */
struct ti_sdo_ipc_family_f28m35x_NameServerBlock_Params {
    size_t __size;
    const void* __self;
    void* __fxns;
    xdc_runtime_IInstance_Params* instance;
    xdc_Ptr readAddr;
    xdc_Ptr writeAddr;
    xdc_runtime_IInstance_Params __iprms;
};

/* Struct */
struct ti_sdo_ipc_family_f28m35x_NameServerBlock_Struct {
    const ti_sdo_ipc_family_f28m35x_NameServerBlock_Fxns__* __fxns;
    ti_sdo_ipc_family_f28m35x_NameServerBlock_Message* __f0;
    ti_sdo_ipc_family_f28m35x_NameServerBlock_Message* __f1;
    ti_sdo_ipc_family_f28m35x_NameServerBlock_Message* __f2;
    ti_sdo_ipc_family_f28m35x_NameServerBlock_Message* __f3;
    xdc_UInt16 __f4;
    xdc_UInt16 __f5;
    ti_sysbios_knl_Semaphore_Struct __f6;
    ti_sysbios_knl_Semaphore_Struct __f7;
    ti_sysbios_knl_Swi_Struct __f8;
    xdc_runtime_Types_CordAddr __name;
};


/*
 * ======== VIRTUAL FUNCTIONS ========
 */

/* Fxns__ */
struct ti_sdo_ipc_family_f28m35x_NameServerBlock_Fxns__ {
    xdc_runtime_Types_Base* __base;
    const xdc_runtime_Types_SysFxns2* __sysp;
    xdc_Int (*attach)(xdc_UInt16, xdc_Ptr);
    xdc_Int (*detach)(xdc_UInt16);
    xdc_SizeT (*sharedMemReq)(xdc_Ptr);
    xdc_Int (*get)(ti_sdo_ipc_family_f28m35x_NameServerBlock_Handle, xdc_String, xdc_String, xdc_Ptr, xdc_UInt32*, xdc_runtime_knl_ISync_Handle, xdc_runtime_Error_Block*);
    xdc_runtime_Types_SysFxns2 __sfxns;
};

/* Module__FXNS__C */
__extern const ti_sdo_ipc_family_f28m35x_NameServerBlock_Fxns__ ti_sdo_ipc_family_f28m35x_NameServerBlock_Module__FXNS__C;


/*
 * ======== FUNCTION DECLARATIONS ========
 */

/* Module_startup */
#define ti_sdo_ipc_family_f28m35x_NameServerBlock_Module_startup( state ) -1

/* Instance_init__F */
xdc__CODESECT(ti_sdo_ipc_family_f28m35x_NameServerBlock_Instance_init__F, "ti_sdo_ipc_family_f28m35x_NameServerBlock_Instance_init")
__extern int ti_sdo_ipc_family_f28m35x_NameServerBlock_Instance_init__F( ti_sdo_ipc_family_f28m35x_NameServerBlock_Object*, xdc_UInt16 procId, const ti_sdo_ipc_family_f28m35x_NameServerBlock_Params*, xdc_runtime_Error_Block* );

/* Instance_finalize__F */
xdc__CODESECT(ti_sdo_ipc_family_f28m35x_NameServerBlock_Instance_finalize__F, "ti_sdo_ipc_family_f28m35x_NameServerBlock_Instance_finalize")
__extern void ti_sdo_ipc_family_f28m35x_NameServerBlock_Instance_finalize__F( ti_sdo_ipc_family_f28m35x_NameServerBlock_Object* , int );

/* Instance_init__R */
xdc__CODESECT(ti_sdo_ipc_family_f28m35x_NameServerBlock_Instance_init__R, "ti_sdo_ipc_family_f28m35x_NameServerBlock_Instance_init")
__extern int ti_sdo_ipc_family_f28m35x_NameServerBlock_Instance_init__R( ti_sdo_ipc_family_f28m35x_NameServerBlock_Object*, xdc_UInt16 procId, const ti_sdo_ipc_family_f28m35x_NameServerBlock_Params*, xdc_runtime_Error_Block* );

/* Instance_finalize__R */
xdc__CODESECT(ti_sdo_ipc_family_f28m35x_NameServerBlock_Instance_finalize__R, "ti_sdo_ipc_family_f28m35x_NameServerBlock_Instance_finalize")
__extern void ti_sdo_ipc_family_f28m35x_NameServerBlock_Instance_finalize__R( ti_sdo_ipc_family_f28m35x_NameServerBlock_Object* , int );

/* Handle__label__S */
xdc__CODESECT(ti_sdo_ipc_family_f28m35x_NameServerBlock_Handle__label__S, "ti_sdo_ipc_family_f28m35x_NameServerBlock_Handle__label")
__extern xdc_runtime_Types_Label* ti_sdo_ipc_family_f28m35x_NameServerBlock_Handle__label__S( xdc_Ptr obj, xdc_runtime_Types_Label* lab );

/* Module__startupDone__S */
xdc__CODESECT(ti_sdo_ipc_family_f28m35x_NameServerBlock_Module__startupDone__S, "ti_sdo_ipc_family_f28m35x_NameServerBlock_Module__startupDone")
__extern xdc_Bool ti_sdo_ipc_family_f28m35x_NameServerBlock_Module__startupDone__S( void );

/* Object__create__S */
xdc__CODESECT(ti_sdo_ipc_family_f28m35x_NameServerBlock_Object__create__S, "ti_sdo_ipc_family_f28m35x_NameServerBlock_Object__create")
__extern xdc_Ptr ti_sdo_ipc_family_f28m35x_NameServerBlock_Object__create__S( xdc_Ptr __oa, xdc_SizeT __osz, xdc_Ptr __aa, const xdc_UChar* __pa, xdc_SizeT __psz, xdc_runtime_Error_Block* __eb );

/* Object__delete__S */
xdc__CODESECT(ti_sdo_ipc_family_f28m35x_NameServerBlock_Object__delete__S, "ti_sdo_ipc_family_f28m35x_NameServerBlock_Object__delete")
__extern xdc_Void ti_sdo_ipc_family_f28m35x_NameServerBlock_Object__delete__S( xdc_Ptr instp );

/* Object__destruct__S */
xdc__CODESECT(ti_sdo_ipc_family_f28m35x_NameServerBlock_Object__destruct__S, "ti_sdo_ipc_family_f28m35x_NameServerBlock_Object__destruct")
__extern xdc_Void ti_sdo_ipc_family_f28m35x_NameServerBlock_Object__destruct__S( xdc_Ptr objp );

/* Object__get__S */
xdc__CODESECT(ti_sdo_ipc_family_f28m35x_NameServerBlock_Object__get__S, "ti_sdo_ipc_family_f28m35x_NameServerBlock_Object__get")
__extern xdc_Ptr ti_sdo_ipc_family_f28m35x_NameServerBlock_Object__get__S( xdc_Ptr oarr, xdc_Int i );

/* Object__first__S */
xdc__CODESECT(ti_sdo_ipc_family_f28m35x_NameServerBlock_Object__first__S, "ti_sdo_ipc_family_f28m35x_NameServerBlock_Object__first")
__extern xdc_Ptr ti_sdo_ipc_family_f28m35x_NameServerBlock_Object__first__S( void );

/* Object__next__S */
xdc__CODESECT(ti_sdo_ipc_family_f28m35x_NameServerBlock_Object__next__S, "ti_sdo_ipc_family_f28m35x_NameServerBlock_Object__next")
__extern xdc_Ptr ti_sdo_ipc_family_f28m35x_NameServerBlock_Object__next__S( xdc_Ptr obj );

/* Params__init__S */
xdc__CODESECT(ti_sdo_ipc_family_f28m35x_NameServerBlock_Params__init__S, "ti_sdo_ipc_family_f28m35x_NameServerBlock_Params__init")
__extern xdc_Void ti_sdo_ipc_family_f28m35x_NameServerBlock_Params__init__S( xdc_Ptr dst, xdc_Ptr src, xdc_SizeT psz, xdc_SizeT isz );

/* attach__E */
#define ti_sdo_ipc_family_f28m35x_NameServerBlock_attach ti_sdo_ipc_family_f28m35x_NameServerBlock_attach__E
xdc__CODESECT(ti_sdo_ipc_family_f28m35x_NameServerBlock_attach__E, "ti_sdo_ipc_family_f28m35x_NameServerBlock_attach")
__extern xdc_Int ti_sdo_ipc_family_f28m35x_NameServerBlock_attach__E( xdc_UInt16 remoteProcId, xdc_Ptr sharedAddr );
xdc__CODESECT(ti_sdo_ipc_family_f28m35x_NameServerBlock_attach__F, "ti_sdo_ipc_family_f28m35x_NameServerBlock_attach")
__extern xdc_Int ti_sdo_ipc_family_f28m35x_NameServerBlock_attach__F( xdc_UInt16 remoteProcId, xdc_Ptr sharedAddr );
__extern xdc_Int ti_sdo_ipc_family_f28m35x_NameServerBlock_attach__R( xdc_UInt16 remoteProcId, xdc_Ptr sharedAddr );

/* detach__E */
#define ti_sdo_ipc_family_f28m35x_NameServerBlock_detach ti_sdo_ipc_family_f28m35x_NameServerBlock_detach__E
xdc__CODESECT(ti_sdo_ipc_family_f28m35x_NameServerBlock_detach__E, "ti_sdo_ipc_family_f28m35x_NameServerBlock_detach")
__extern xdc_Int ti_sdo_ipc_family_f28m35x_NameServerBlock_detach__E( xdc_UInt16 remoteProcId );
xdc__CODESECT(ti_sdo_ipc_family_f28m35x_NameServerBlock_detach__F, "ti_sdo_ipc_family_f28m35x_NameServerBlock_detach")
__extern xdc_Int ti_sdo_ipc_family_f28m35x_NameServerBlock_detach__F( xdc_UInt16 remoteProcId );
__extern xdc_Int ti_sdo_ipc_family_f28m35x_NameServerBlock_detach__R( xdc_UInt16 remoteProcId );

/* sharedMemReq__E */
#define ti_sdo_ipc_family_f28m35x_NameServerBlock_sharedMemReq ti_sdo_ipc_family_f28m35x_NameServerBlock_sharedMemReq__E
xdc__CODESECT(ti_sdo_ipc_family_f28m35x_NameServerBlock_sharedMemReq__E, "ti_sdo_ipc_family_f28m35x_NameServerBlock_sharedMemReq")
__extern xdc_SizeT ti_sdo_ipc_family_f28m35x_NameServerBlock_sharedMemReq__E( xdc_Ptr sharedAddr );
xdc__CODESECT(ti_sdo_ipc_family_f28m35x_NameServerBlock_sharedMemReq__F, "ti_sdo_ipc_family_f28m35x_NameServerBlock_sharedMemReq")
__extern xdc_SizeT ti_sdo_ipc_family_f28m35x_NameServerBlock_sharedMemReq__F( xdc_Ptr sharedAddr );
__extern xdc_SizeT ti_sdo_ipc_family_f28m35x_NameServerBlock_sharedMemReq__R( xdc_Ptr sharedAddr );

/* get__E */
#define ti_sdo_ipc_family_f28m35x_NameServerBlock_get ti_sdo_ipc_family_f28m35x_NameServerBlock_get__E
xdc__CODESECT(ti_sdo_ipc_family_f28m35x_NameServerBlock_get__E, "ti_sdo_ipc_family_f28m35x_NameServerBlock_get")
__extern xdc_Int ti_sdo_ipc_family_f28m35x_NameServerBlock_get__E( ti_sdo_ipc_family_f28m35x_NameServerBlock_Handle __inst, xdc_String instanceName, xdc_String name, xdc_Ptr value, xdc_UInt32* valueLen, xdc_runtime_knl_ISync_Handle syncHandle, xdc_runtime_Error_Block* eb );
xdc__CODESECT(ti_sdo_ipc_family_f28m35x_NameServerBlock_get__F, "ti_sdo_ipc_family_f28m35x_NameServerBlock_get")
__extern xdc_Int ti_sdo_ipc_family_f28m35x_NameServerBlock_get__F( ti_sdo_ipc_family_f28m35x_NameServerBlock_Object* __inst, xdc_String instanceName, xdc_String name, xdc_Ptr value, xdc_UInt32* valueLen, xdc_runtime_knl_ISync_Handle syncHandle, xdc_runtime_Error_Block* eb );
__extern xdc_Int ti_sdo_ipc_family_f28m35x_NameServerBlock_get__R( ti_sdo_ipc_family_f28m35x_NameServerBlock_Handle __inst, xdc_String instanceName, xdc_String name, xdc_Ptr value, xdc_UInt32* valueLen, xdc_runtime_knl_ISync_Handle syncHandle, xdc_runtime_Error_Block* eb );

/* cbFxn__I */
#define ti_sdo_ipc_family_f28m35x_NameServerBlock_cbFxn ti_sdo_ipc_family_f28m35x_NameServerBlock_cbFxn__I
xdc__CODESECT(ti_sdo_ipc_family_f28m35x_NameServerBlock_cbFxn__I, "ti_sdo_ipc_family_f28m35x_NameServerBlock_cbFxn")
__extern xdc_Void ti_sdo_ipc_family_f28m35x_NameServerBlock_cbFxn__I( xdc_UInt16 procId, xdc_UInt16 lineId, xdc_UInt32 eventId, xdc_UArg arg, xdc_UInt32 payload );

/* strncpy__I */
#define ti_sdo_ipc_family_f28m35x_NameServerBlock_strncpy ti_sdo_ipc_family_f28m35x_NameServerBlock_strncpy__I
xdc__CODESECT(ti_sdo_ipc_family_f28m35x_NameServerBlock_strncpy__I, "ti_sdo_ipc_family_f28m35x_NameServerBlock_strncpy")
__extern xdc_Char* ti_sdo_ipc_family_f28m35x_NameServerBlock_strncpy__I( xdc_Char* dest, xdc_Char* src, xdc_SizeT len );

/* swiFxn__I */
#define ti_sdo_ipc_family_f28m35x_NameServerBlock_swiFxn ti_sdo_ipc_family_f28m35x_NameServerBlock_swiFxn__I
xdc__CODESECT(ti_sdo_ipc_family_f28m35x_NameServerBlock_swiFxn__I, "ti_sdo_ipc_family_f28m35x_NameServerBlock_swiFxn")
__extern xdc_Void ti_sdo_ipc_family_f28m35x_NameServerBlock_swiFxn__I( xdc_UArg arg );


/*
 * ======== FUNCTION SELECTORS ========
 */

/* get_{FxnT,fxnP} */
typedef xdc_Int (*ti_sdo_ipc_family_f28m35x_NameServerBlock_get_FxnT)(void*, xdc_String, xdc_String, xdc_Ptr, xdc_UInt32*, xdc_runtime_knl_ISync_Handle, xdc_runtime_Error_Block*);
static inline ti_sdo_ipc_family_f28m35x_NameServerBlock_get_FxnT ti_sdo_ipc_family_f28m35x_NameServerBlock_get_fxnP( void )
{
    return (ti_sdo_ipc_family_f28m35x_NameServerBlock_get_FxnT)ti_sdo_ipc_family_f28m35x_NameServerBlock_get; 
}


/*
 * ======== CONVERTORS ========
 */

/* Module_upCast */
static inline ti_sdo_utils_INameServerRemote_Module ti_sdo_ipc_family_f28m35x_NameServerBlock_Module_upCast( void )
{
    return (ti_sdo_utils_INameServerRemote_Module)&ti_sdo_ipc_family_f28m35x_NameServerBlock_Module__FXNS__C;
}

/* Module_to_ti_sdo_utils_INameServerRemote */
#define ti_sdo_ipc_family_f28m35x_NameServerBlock_Module_to_ti_sdo_utils_INameServerRemote ti_sdo_ipc_family_f28m35x_NameServerBlock_Module_upCast

/* Handle_upCast */
static inline ti_sdo_utils_INameServerRemote_Handle ti_sdo_ipc_family_f28m35x_NameServerBlock_Handle_upCast( ti_sdo_ipc_family_f28m35x_NameServerBlock_Handle i )
{
    return (ti_sdo_utils_INameServerRemote_Handle)i;
}

/* Handle_to_ti_sdo_utils_INameServerRemote */
#define ti_sdo_ipc_family_f28m35x_NameServerBlock_Handle_to_ti_sdo_utils_INameServerRemote ti_sdo_ipc_family_f28m35x_NameServerBlock_Handle_upCast

/* Handle_downCast */
static inline ti_sdo_ipc_family_f28m35x_NameServerBlock_Handle ti_sdo_ipc_family_f28m35x_NameServerBlock_Handle_downCast( ti_sdo_utils_INameServerRemote_Handle i )
{
    ti_sdo_utils_INameServerRemote_Handle i2 = (ti_sdo_utils_INameServerRemote_Handle)i;
    return (void*)i2->__fxns == (void*)&ti_sdo_ipc_family_f28m35x_NameServerBlock_Module__FXNS__C ? (ti_sdo_ipc_family_f28m35x_NameServerBlock_Handle)i : 0;
}

/* Handle_from_ti_sdo_utils_INameServerRemote */
#define ti_sdo_ipc_family_f28m35x_NameServerBlock_Handle_from_ti_sdo_utils_INameServerRemote ti_sdo_ipc_family_f28m35x_NameServerBlock_Handle_downCast


/*
 * ======== SYSTEM FUNCTIONS ========
 */

/* Module_startupDone */
#define ti_sdo_ipc_family_f28m35x_NameServerBlock_Module_startupDone() ti_sdo_ipc_family_f28m35x_NameServerBlock_Module__startupDone__S()

/* Object_heap */
#define ti_sdo_ipc_family_f28m35x_NameServerBlock_Object_heap() ti_sdo_ipc_family_f28m35x_NameServerBlock_Object__heap__C

/* Module_heap */
#define ti_sdo_ipc_family_f28m35x_NameServerBlock_Module_heap() ti_sdo_ipc_family_f28m35x_NameServerBlock_Object__heap__C

/* Module_id */
static inline CT__ti_sdo_ipc_family_f28m35x_NameServerBlock_Module__id ti_sdo_ipc_family_f28m35x_NameServerBlock_Module_id( void ) 
{
    return ti_sdo_ipc_family_f28m35x_NameServerBlock_Module__id__C;
}

/* Module_hasMask */
static inline xdc_Bool ti_sdo_ipc_family_f28m35x_NameServerBlock_Module_hasMask( void ) 
{
    return ti_sdo_ipc_family_f28m35x_NameServerBlock_Module__diagsMask__C != NULL;
}

/* Module_getMask */
static inline xdc_Bits16 ti_sdo_ipc_family_f28m35x_NameServerBlock_Module_getMask( void ) 
{
    return ti_sdo_ipc_family_f28m35x_NameServerBlock_Module__diagsMask__C != NULL ? *ti_sdo_ipc_family_f28m35x_NameServerBlock_Module__diagsMask__C : 0;
}

/* Module_setMask */
static inline xdc_Void ti_sdo_ipc_family_f28m35x_NameServerBlock_Module_setMask( xdc_Bits16 mask ) 
{
    if (ti_sdo_ipc_family_f28m35x_NameServerBlock_Module__diagsMask__C != NULL) *ti_sdo_ipc_family_f28m35x_NameServerBlock_Module__diagsMask__C = mask;
}

/* Params_init */
static inline void ti_sdo_ipc_family_f28m35x_NameServerBlock_Params_init( ti_sdo_ipc_family_f28m35x_NameServerBlock_Params* prms ) 
{
    if (prms) {
        ti_sdo_ipc_family_f28m35x_NameServerBlock_Params__init__S(prms, 0, sizeof(ti_sdo_ipc_family_f28m35x_NameServerBlock_Params), sizeof(xdc_runtime_IInstance_Params));
    }
}

/* Params_copy */
static inline void ti_sdo_ipc_family_f28m35x_NameServerBlock_Params_copy( ti_sdo_ipc_family_f28m35x_NameServerBlock_Params* dst, const ti_sdo_ipc_family_f28m35x_NameServerBlock_Params* src ) 
{
    if (dst) {
        ti_sdo_ipc_family_f28m35x_NameServerBlock_Params__init__S(dst, (xdc_Ptr)src, sizeof(ti_sdo_ipc_family_f28m35x_NameServerBlock_Params), sizeof(xdc_runtime_IInstance_Params));
    }
}

/* Object_count */
#define ti_sdo_ipc_family_f28m35x_NameServerBlock_Object_count() ti_sdo_ipc_family_f28m35x_NameServerBlock_Object__count__C

/* Object_sizeof */
#define ti_sdo_ipc_family_f28m35x_NameServerBlock_Object_sizeof() ti_sdo_ipc_family_f28m35x_NameServerBlock_Object__sizeof__C

/* Object_get */
static inline ti_sdo_ipc_family_f28m35x_NameServerBlock_Handle ti_sdo_ipc_family_f28m35x_NameServerBlock_Object_get( ti_sdo_ipc_family_f28m35x_NameServerBlock_Instance_State* oarr, int i ) 
{
    return (ti_sdo_ipc_family_f28m35x_NameServerBlock_Handle)ti_sdo_ipc_family_f28m35x_NameServerBlock_Object__get__S(oarr, i);
}

/* Object_first */
static inline ti_sdo_ipc_family_f28m35x_NameServerBlock_Handle ti_sdo_ipc_family_f28m35x_NameServerBlock_Object_first( void )
{
    return (ti_sdo_ipc_family_f28m35x_NameServerBlock_Handle)ti_sdo_ipc_family_f28m35x_NameServerBlock_Object__first__S();
}

/* Object_next */
static inline ti_sdo_ipc_family_f28m35x_NameServerBlock_Handle ti_sdo_ipc_family_f28m35x_NameServerBlock_Object_next( ti_sdo_ipc_family_f28m35x_NameServerBlock_Object* obj )
{
    return (ti_sdo_ipc_family_f28m35x_NameServerBlock_Handle)ti_sdo_ipc_family_f28m35x_NameServerBlock_Object__next__S(obj);
}

/* Handle_label */
static inline xdc_runtime_Types_Label* ti_sdo_ipc_family_f28m35x_NameServerBlock_Handle_label( ti_sdo_ipc_family_f28m35x_NameServerBlock_Handle inst, xdc_runtime_Types_Label* lab )
{
    return ti_sdo_ipc_family_f28m35x_NameServerBlock_Handle__label__S(inst, lab);
}

/* Handle_name */
static inline String ti_sdo_ipc_family_f28m35x_NameServerBlock_Handle_name( ti_sdo_ipc_family_f28m35x_NameServerBlock_Handle inst )
{
    xdc_runtime_Types_Label lab;
    return ti_sdo_ipc_family_f28m35x_NameServerBlock_Handle__label__S(inst, &lab)->iname;
}

/* create */
static inline ti_sdo_ipc_family_f28m35x_NameServerBlock_Handle ti_sdo_ipc_family_f28m35x_NameServerBlock_create( xdc_UInt16 procId, const ti_sdo_ipc_family_f28m35x_NameServerBlock_Params* __prms, xdc_runtime_Error_Block* __eb )
{
    ti_sdo_ipc_family_f28m35x_NameServerBlock_Args__create __args;
    __args.procId = procId;
    return (ti_sdo_ipc_family_f28m35x_NameServerBlock_Handle)ti_sdo_ipc_family_f28m35x_NameServerBlock_Object__create__S(0, 0, &__args, (const xdc_UChar*)__prms, sizeof(ti_sdo_ipc_family_f28m35x_NameServerBlock_Params), __eb);
}

/* construct */
static inline void ti_sdo_ipc_family_f28m35x_NameServerBlock_construct( ti_sdo_ipc_family_f28m35x_NameServerBlock_Struct* __obj, xdc_UInt16 procId, const ti_sdo_ipc_family_f28m35x_NameServerBlock_Params* __prms, xdc_runtime_Error_Block* __eb )
{
    ti_sdo_ipc_family_f28m35x_NameServerBlock_Args__create __args;
    __args.procId = procId;
    ti_sdo_ipc_family_f28m35x_NameServerBlock_Object__create__S(__obj, sizeof (ti_sdo_ipc_family_f28m35x_NameServerBlock_Struct), &__args, (const xdc_UChar*)__prms, sizeof(ti_sdo_ipc_family_f28m35x_NameServerBlock_Params), __eb);
}

/* delete */
static inline void ti_sdo_ipc_family_f28m35x_NameServerBlock_delete( ti_sdo_ipc_family_f28m35x_NameServerBlock_Handle* instp )
{
    ti_sdo_ipc_family_f28m35x_NameServerBlock_Object__delete__S(instp);
}

/* destruct */
static inline void ti_sdo_ipc_family_f28m35x_NameServerBlock_destruct( ti_sdo_ipc_family_f28m35x_NameServerBlock_Struct* obj )
{
    ti_sdo_ipc_family_f28m35x_NameServerBlock_Object__destruct__S(obj);
}

/* handle */
static inline ti_sdo_ipc_family_f28m35x_NameServerBlock_Handle ti_sdo_ipc_family_f28m35x_NameServerBlock_handle( ti_sdo_ipc_family_f28m35x_NameServerBlock_Struct* str )
{
    return (ti_sdo_ipc_family_f28m35x_NameServerBlock_Handle)str;
}

/* struct */
static inline ti_sdo_ipc_family_f28m35x_NameServerBlock_Struct* ti_sdo_ipc_family_f28m35x_NameServerBlock_struct( ti_sdo_ipc_family_f28m35x_NameServerBlock_Handle inst )
{
    return (ti_sdo_ipc_family_f28m35x_NameServerBlock_Struct*)inst;
}


/*
 * ======== EPILOGUE ========
 */

#ifdef ti_sdo_ipc_family_f28m35x_NameServerBlock__top__
#undef __nested__
#endif

#endif /* ti_sdo_ipc_family_f28m35x_NameServerBlock__include */


/*
 * ======== STATE STRUCTURES ========
 */

#if defined(__config__) || (!defined(__nested__) && defined(ti_sdo_ipc_family_f28m35x_NameServerBlock__internalaccess))

#ifndef ti_sdo_ipc_family_f28m35x_NameServerBlock__include_state
#define ti_sdo_ipc_family_f28m35x_NameServerBlock__include_state

/* Object */
struct ti_sdo_ipc_family_f28m35x_NameServerBlock_Object {
    const ti_sdo_ipc_family_f28m35x_NameServerBlock_Fxns__* __fxns;
    ti_sdo_ipc_family_f28m35x_NameServerBlock_Message* readRequest;
    ti_sdo_ipc_family_f28m35x_NameServerBlock_Message* readResponse;
    ti_sdo_ipc_family_f28m35x_NameServerBlock_Message* writeRequest;
    ti_sdo_ipc_family_f28m35x_NameServerBlock_Message* writeResponse;
    xdc_UInt16 regionId;
    xdc_UInt16 remoteProcId;
    char __dummy;
};

/* Instance_State_semRemoteWait */
__extern __FAR__ const xdc_SizeT ti_sdo_ipc_family_f28m35x_NameServerBlock_Instance_State_semRemoteWait__O;
static inline ti_sysbios_knl_Semaphore_Handle ti_sdo_ipc_family_f28m35x_NameServerBlock_Instance_State_semRemoteWait(ti_sdo_ipc_family_f28m35x_NameServerBlock_Object* obj)
{
    return (ti_sysbios_knl_Semaphore_Handle)(((char*)obj) + ti_sdo_ipc_family_f28m35x_NameServerBlock_Instance_State_semRemoteWait__O);
}

/* Instance_State_semMultiBlock */
__extern __FAR__ const xdc_SizeT ti_sdo_ipc_family_f28m35x_NameServerBlock_Instance_State_semMultiBlock__O;
static inline ti_sysbios_knl_Semaphore_Handle ti_sdo_ipc_family_f28m35x_NameServerBlock_Instance_State_semMultiBlock(ti_sdo_ipc_family_f28m35x_NameServerBlock_Object* obj)
{
    return (ti_sysbios_knl_Semaphore_Handle)(((char*)obj) + ti_sdo_ipc_family_f28m35x_NameServerBlock_Instance_State_semMultiBlock__O);
}

/* Instance_State_swiObj */
__extern __FAR__ const xdc_SizeT ti_sdo_ipc_family_f28m35x_NameServerBlock_Instance_State_swiObj__O;
static inline ti_sysbios_knl_Swi_Handle ti_sdo_ipc_family_f28m35x_NameServerBlock_Instance_State_swiObj(ti_sdo_ipc_family_f28m35x_NameServerBlock_Object* obj)
{
    return (ti_sysbios_knl_Swi_Handle)(((char*)obj) + ti_sdo_ipc_family_f28m35x_NameServerBlock_Instance_State_swiObj__O);
}

#endif /* ti_sdo_ipc_family_f28m35x_NameServerBlock__include_state */

#endif


/*
 * ======== PREFIX ALIASES ========
 */

#if !defined(__nested__) && !defined(ti_sdo_ipc_family_f28m35x_NameServerBlock__nolocalnames)

#ifndef ti_sdo_ipc_family_f28m35x_NameServerBlock__localnames__done
#define ti_sdo_ipc_family_f28m35x_NameServerBlock__localnames__done

/* module prefix */
#define NameServerBlock_Instance ti_sdo_ipc_family_f28m35x_NameServerBlock_Instance
#define NameServerBlock_Handle ti_sdo_ipc_family_f28m35x_NameServerBlock_Handle
#define NameServerBlock_Module ti_sdo_ipc_family_f28m35x_NameServerBlock_Module
#define NameServerBlock_Object ti_sdo_ipc_family_f28m35x_NameServerBlock_Object
#define NameServerBlock_Struct ti_sdo_ipc_family_f28m35x_NameServerBlock_Struct
#define NameServerBlock_Status ti_sdo_ipc_family_f28m35x_NameServerBlock_Status
#define NameServerBlock_Message ti_sdo_ipc_family_f28m35x_NameServerBlock_Message
#define NameServerBlock_bufLen ti_sdo_ipc_family_f28m35x_NameServerBlock_bufLen
#define NameServerBlock_Instance_State ti_sdo_ipc_family_f28m35x_NameServerBlock_Instance_State
#define NameServerBlock_S_SUCCESS ti_sdo_ipc_family_f28m35x_NameServerBlock_S_SUCCESS
#define NameServerBlock_E_FAIL ti_sdo_ipc_family_f28m35x_NameServerBlock_E_FAIL
#define NameServerBlock_E_ERROR ti_sdo_ipc_family_f28m35x_NameServerBlock_E_ERROR
#define NameServerBlock_A_invalidValueLen ti_sdo_ipc_family_f28m35x_NameServerBlock_A_invalidValueLen
#define NameServerBlock_notifyEventId ti_sdo_ipc_family_f28m35x_NameServerBlock_notifyEventId
#define NameServerBlock_Instance_State_semRemoteWait ti_sdo_ipc_family_f28m35x_NameServerBlock_Instance_State_semRemoteWait
#define NameServerBlock_Instance_State_semMultiBlock ti_sdo_ipc_family_f28m35x_NameServerBlock_Instance_State_semMultiBlock
#define NameServerBlock_Instance_State_swiObj ti_sdo_ipc_family_f28m35x_NameServerBlock_Instance_State_swiObj
#define NameServerBlock_Params ti_sdo_ipc_family_f28m35x_NameServerBlock_Params
#define NameServerBlock_attach ti_sdo_ipc_family_f28m35x_NameServerBlock_attach
#define NameServerBlock_detach ti_sdo_ipc_family_f28m35x_NameServerBlock_detach
#define NameServerBlock_sharedMemReq ti_sdo_ipc_family_f28m35x_NameServerBlock_sharedMemReq
#define NameServerBlock_get ti_sdo_ipc_family_f28m35x_NameServerBlock_get
#define NameServerBlock_get_fxnP ti_sdo_ipc_family_f28m35x_NameServerBlock_get_fxnP
#define NameServerBlock_get_FxnT ti_sdo_ipc_family_f28m35x_NameServerBlock_get_FxnT
#define NameServerBlock_Module_name ti_sdo_ipc_family_f28m35x_NameServerBlock_Module_name
#define NameServerBlock_Module_id ti_sdo_ipc_family_f28m35x_NameServerBlock_Module_id
#define NameServerBlock_Module_startup ti_sdo_ipc_family_f28m35x_NameServerBlock_Module_startup
#define NameServerBlock_Module_startupDone ti_sdo_ipc_family_f28m35x_NameServerBlock_Module_startupDone
#define NameServerBlock_Module_hasMask ti_sdo_ipc_family_f28m35x_NameServerBlock_Module_hasMask
#define NameServerBlock_Module_getMask ti_sdo_ipc_family_f28m35x_NameServerBlock_Module_getMask
#define NameServerBlock_Module_setMask ti_sdo_ipc_family_f28m35x_NameServerBlock_Module_setMask
#define NameServerBlock_Object_heap ti_sdo_ipc_family_f28m35x_NameServerBlock_Object_heap
#define NameServerBlock_Module_heap ti_sdo_ipc_family_f28m35x_NameServerBlock_Module_heap
#define NameServerBlock_construct ti_sdo_ipc_family_f28m35x_NameServerBlock_construct
#define NameServerBlock_create ti_sdo_ipc_family_f28m35x_NameServerBlock_create
#define NameServerBlock_handle ti_sdo_ipc_family_f28m35x_NameServerBlock_handle
#define NameServerBlock_struct ti_sdo_ipc_family_f28m35x_NameServerBlock_struct
#define NameServerBlock_Handle_label ti_sdo_ipc_family_f28m35x_NameServerBlock_Handle_label
#define NameServerBlock_Handle_name ti_sdo_ipc_family_f28m35x_NameServerBlock_Handle_name
#define NameServerBlock_Instance_init ti_sdo_ipc_family_f28m35x_NameServerBlock_Instance_init
#define NameServerBlock_Object_count ti_sdo_ipc_family_f28m35x_NameServerBlock_Object_count
#define NameServerBlock_Object_get ti_sdo_ipc_family_f28m35x_NameServerBlock_Object_get
#define NameServerBlock_Object_first ti_sdo_ipc_family_f28m35x_NameServerBlock_Object_first
#define NameServerBlock_Object_next ti_sdo_ipc_family_f28m35x_NameServerBlock_Object_next
#define NameServerBlock_Object_sizeof ti_sdo_ipc_family_f28m35x_NameServerBlock_Object_sizeof
#define NameServerBlock_Params_copy ti_sdo_ipc_family_f28m35x_NameServerBlock_Params_copy
#define NameServerBlock_Params_init ti_sdo_ipc_family_f28m35x_NameServerBlock_Params_init
#define NameServerBlock_Instance_finalize ti_sdo_ipc_family_f28m35x_NameServerBlock_Instance_finalize
#define NameServerBlock_delete ti_sdo_ipc_family_f28m35x_NameServerBlock_delete
#define NameServerBlock_destruct ti_sdo_ipc_family_f28m35x_NameServerBlock_destruct
#define NameServerBlock_Module_upCast ti_sdo_ipc_family_f28m35x_NameServerBlock_Module_upCast
#define NameServerBlock_Module_to_ti_sdo_utils_INameServerRemote ti_sdo_ipc_family_f28m35x_NameServerBlock_Module_to_ti_sdo_utils_INameServerRemote
#define NameServerBlock_Handle_upCast ti_sdo_ipc_family_f28m35x_NameServerBlock_Handle_upCast
#define NameServerBlock_Handle_to_ti_sdo_utils_INameServerRemote ti_sdo_ipc_family_f28m35x_NameServerBlock_Handle_to_ti_sdo_utils_INameServerRemote
#define NameServerBlock_Handle_downCast ti_sdo_ipc_family_f28m35x_NameServerBlock_Handle_downCast
#define NameServerBlock_Handle_from_ti_sdo_utils_INameServerRemote ti_sdo_ipc_family_f28m35x_NameServerBlock_Handle_from_ti_sdo_utils_INameServerRemote

#endif /* ti_sdo_ipc_family_f28m35x_NameServerBlock__localnames__done */
#endif
/*
 *  @(#) ti.sdo.ipc.family.f28m35x; 1, 0, 0, 0,1; 5-22-2012 16:19:48; /db/vtree/library/trees/ipc/ipc-h32/src/ xlibrary

 */

