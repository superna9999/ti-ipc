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
/** ============================================================================
 *  @file       HeapQueueMgr.h
 *
 *  @brief      Multi-processor fixed-size buffer heap using hardware queues
 *
 *  Heap implementation that manages fixed size buffers that can be used 
 *  in a multiprocessor system with shared memory.
 *
 *  The HeapQueueMgr manager provides functions to allocate and free storage 
 *  from a heap of type HeapQueueMgr which inherits from IHeap. HeapQueueMgr 
 *  manages a single fixed-size buffer, split into equally sized allocatable 
 *  blocks.
 *
 *  The HeapQueueMgr manager is intended as a very fast memory
 *  manager which can only allocate blocks of a single size. It is ideal for
 *  managing a heap that is only used for allocating a single type of object,
 *  or for objects that have very similar sizes.
 *
 *  The HeapQueueMgr module uses a NameServer instance to
 *  store instance information when an instance is created.  The name supplied
 *  must be unique for all HeapQueueMgr instances.
 *
 *  The #HeapQueueMgr_create call initializes the shared memory as needed. Once
 *  an instance is created, a #HeapQueueMgr_open can be performed. The 
 *  open is used to gain access to the same HeapQueueMgr instance. 
 *  Generally an instance is created on one processor and opened on the 
 *  other processor(s).
 *
 *  The open returns a HeapQueueMgr instance handle like the create, 
 *  however the open does not modify the shared memory.
 *
 *  The HeapBufQueueMgr header should be included in an application as follows:
 *  @code
 *  #include <ti/ipc/HeapBufQueueMgr.h>
 *  @endcode
 *
 *  @version        0.00.01
 */


#ifndef ti_ipc_HeapQueueMgr__include
#define ti_ipc_HeapQueueMgr__include

#if defined (__cplusplus)
extern "C" {
#endif

#include <ti/ipc/GateMP.h>

/* =============================================================================
 *  All success and failure codes for the module
 * =============================================================================
 */

/*!
 *  @def    HeapQueueMgr_S_BUSY
 *  @brief  The resource is still in use  
 */
#define HeapQueueMgr_S_BUSY               2

/*!
 *  @def    HeapQueueMgr_S_ALREADYSETUP
 *  @brief  The module has been already setup  
 */
#define HeapQueueMgr_S_ALREADYSETUP       1

/*!
 *  @def    HeapQueueMgr_S_SUCCESS
 *  @brief  Operation is successful.
 */
#define HeapQueueMgr_S_SUCCESS            0

/*!
 *  @def    HeapQueueMgr_E_FAIL
 *  @brief  Generic failure.
 */
#define HeapQueueMgr_E_FAIL              -1

/*!
 *  @def    HeapQueueMgr_E_INVALIDARG
 *  @brief  Argument passed to function is invalid.
 */
#define HeapQueueMgr_E_INVALIDARG        -2

/*!
 *  @def    HeapQueueMgr_E_MEMORY
 *  @brief  Operation resulted in memory failure.
 */
#define HeapQueueMgr_E_MEMORY            -3

/*!
 *  @def    HeapQueueMgr_E_ALREADYEXISTS
 *  @brief  The specified entity already exists.
 */
#define HeapQueueMgr_E_ALREADYEXISTS     -4

/*!
 *  @def    HeapQueueMgr_E_NOTFOUND
 *  @brief  Unable to find the specified entity.
 */
#define HeapQueueMgr_E_NOTFOUND          -5

/*!
 *  @def    HeapQueueMgr_E_TIMEOUT
 *  @brief  Operation timed out.
 */
#define HeapQueueMgr_E_TIMEOUT           -6

/*!
 *  @def    HeapQueueMgr_E_INVALIDSTATE
 *  @brief  Module is not initialized.
 */
#define HeapQueueMgr_E_INVALIDSTATE      -7

/*!
 *  @def    HeapQueueMgr_E_OSFAILURE
 *  @brief  A failure occurred in an OS-specific call  */
#define HeapQueueMgr_E_OSFAILURE         -8

/*!
 *  @def    HeapQueueMgr_E_RESOURCE
 *  @brief  Specified resource is not available  */
#define HeapQueueMgr_E_RESOURCE          -9

/*!
 *  @def    HeapQueueMgr_E_RESTART
 *  @brief  Operation was interrupted. Please restart the operation  */
#define HeapQueueMgr_E_RESTART           -10

/* =============================================================================
 *  Structures & Enums
 * =============================================================================
 */

/*!
 *  @brief  HeapQueueMgr_Handle type
 */
typedef struct HeapQueueMgr_Object *HeapQueueMgr_Handle;

/*!
 *  @brief  Structure defining parameters for the HeapQueueMgr module.
 */
typedef struct HeapQueueMgr_Params {
    String name;
    /*!< Name of this instance.
     *
     *  The name (if not NULL) must be unique among all HeapQueueMgr
     *  instances in the entire system.  When creating a new
     *  heap, it is necessary to supply an instance name.
     *
     *  The name does not have to be persistent.  The supplied string is copied
     *  into persistent memory.
     */
    
    UInt16 regionId;
    /*!< Shared region ID
     *
     *  The index corresponding to the shared region from which shared memory
     *  will be allocated.
     */
    
    /*! @cond */
    Ptr sharedAddr;
    /*!< Physical address of the shared memory
     *
     *  This value can be left as NULL unless it is required to place the
     *  heap at a specific location in shared memory.  If sharedAddr is null,
     *  then shared memory for a new instance will be allocated from the 
     *  heap belonging to the region identified by
     *  #HeapQueueMgr_Params::regionId.
     */
    /*! @endcond */
     
    SizeT blockSize;
    /*!< Size (in MAUs) of each block.
     *
     *  HeapQueueMgr will round the blockSize up to the nearest multiple of the
     *  alignment, so the actual blockSize may be larger. When creating a
     *  HeapQueueMgr dynamically, this needs to be taken into account to
     *  determine the proper buffer size to pass in.
     *
     *  Required parameter.
     *
     *  The default size of the blocks is 0 MAUs.
     */
    
    UInt numBlocks;
    /*!< Number of fixed-size blocks.
     *
     *  This is a required parameter for all new HeapQueueMgr instances.
     */

} HeapQueueMgr_Params;


/* =============================================================================
 *  HeapQueueMgr Module-wide Functions
 * =============================================================================
 */

/*!
 *  @brief      Close a HeapQueueMgr instance
 *
 *  Closing an instance will free local memory consumed by the opened
 *  instance. All opened instances should be closed before the instance 
 *  is deleted.
 *
 *  @param      handlePtr   Pointer to handle returned from #HeapQueueMgr_open
 *
 *  @sa         HeapQueueMgr_open
 */
Int HeapQueueMgr_close(HeapQueueMgr_Handle *handlePtr);
 
/*!
 *  @brief      Create a HeapQueueMgr instance
 *
 *  @param      params      HeapQueueMgr parameters
 *
 *  @return     HeapQueueMgr Handle
 */
HeapQueueMgr_Handle HeapQueueMgr_create(const HeapQueueMgr_Params *params);

/*! 
 *  @brief      Delete a created HeapQueueMgr instance 
 *
 *  @param      handlePtr   Pointer to handle to delete.
 */
Int HeapQueueMgr_delete(HeapQueueMgr_Handle *handlePtr);

/*!
 *  @brief      Open a created HeapQueueMgr instance
 *
 *  Once an instance is created, an open can be performed. The 
 *  open is used to gain access to the same HeapQueueMgr instance. 
 *  Generally an instance is created on one processor and opened on the 
 *  other processor.
 *
 *  The open returns a HeapQueueMgr instance handle like the create, 
 *  however the open does not initialize the shared memory. The supplied
 *  name is used to identify the created instance.
 *
 *  Call #HeapQueueMgr_close when the opened instance is not longer needed.
 *
 *  @param      name        Name of created HeapQueueMgr instance
 *  @param      handlePtr   Pointer to HeapQueueMgr handle to be opened
 *
 *  @return     HeapQueueMgr status:
 *              - #HeapQueueMgr_S_SUCCESS: Heap successfully opened
 *              - #HeapQueueMgr_E_NOTFOUND: Heap is not yet ready to be opened.
 *              - #HeapQueueMgr_E_FAIL: A general failure has occurred
 * 
 *  @sa         HeapQueueMgr_close
 */
Int HeapQueueMgr_open(String name, HeapQueueMgr_Handle *handlePtr);

/*! @cond */
Int HeapQueueMgr_openByAddr(Ptr sharedAddr, HeapQueueMgr_Handle *handlePtr);

/*! @endcond */

/*!
 *  @brief      Initialize a HeapQueueMgr parameters struct
 *
 *  @param[out] params      Pointer to GateMP parameters
 *
 */
Void HeapQueueMgr_Params_init(HeapQueueMgr_Params *params);

/*! @cond */
/*!
 *  @brief      Amount of shared memory required for creation of each instance
 *
 *  @param[in]  params      Pointer to the parameters that will be used in
 *                          the create.
 *
 *  @return     Number of MAUs needed to create the instance.
 */
SizeT HeapQueueMgr_sharedMemReq(const HeapQueueMgr_Params *params);

/*! @endcond */

/* =============================================================================
 *  HeapQueueMgr Per-instance Functions
 * =============================================================================
 */

/*!
 *  @brief      Allocate a block of memory of specified size and alignment
 *
 *  The actual block returned may be larger than requested to satisfy
 *  alignment requirements.
 *
 *  HeapQueueMgr_alloc will lock the heap using the HeapQueueMgr gate
 *  while it traverses the list of free blocks to find a large enough block
 *  for the request.
 *
 *  Guidelines for using large heaps and multiple alloc() calls.
 *      - If possible, allocate larger blocks first. Previous allocations
 *        of small memory blocks can reduce the size of the blocks
 *        available for larger memory allocations.
 *      - Realize that alloc() can fail even if the heap contains a
 *        sufficient absolute amount of unalloccated space. This is
 *        because the largest free memory block may be smaller than
 *        total amount of unallocated memory.
 *
 *  @param      handle    Handle to previously created/opened instance.
 *  @param      size      Size to be allocated (in MADUs)
 *  @param      align     Alignment for allocation (power of 2)
 *
 *  @sa         HeapQueueMgr_free
 */
Void *HeapQueueMgr_alloc(HeapQueueMgr_Handle handle, SizeT size, 
                         SizeT align);

/*!
 *  @brief      Frees a block of memory.
 *
 *  free() places the memory block specified by addr and size back into the
 *  free pool of the heap specified. The newly freed block is combined with
 *  any adjacent free blocks. The space is then available for further
 *  allocation by alloc().
 *
 *  #HeapQueueMgr_free will lock the heap using the HeapQueueMgr gate if one is 
 *  specified or the system GateMP if not.
 *
 *  @param      handle    Handle to previously created/opened instance.
 *  @param      block     Block of memory to be freed.
 *  @param      size      Size to be freed (in MADUs)
 *
 *  @sa         HeapQueueMgr_alloc
 */
Void HeapQueueMgr_free(HeapQueueMgr_Handle handle, Ptr block, SizeT size);

/*!
 *  @brief      Get memory statistics
 *
 *  @param[in]  handle    Handle to previously created/opened instance.
 *  @param[out] stats     Memory statistics structure
 *
 *  @sa
 */
Void HeapQueueMgr_getStats(HeapQueueMgr_Handle handle, Ptr stats);
    
#if defined (__cplusplus)
}
#endif /* defined (__cplusplus) */
#endif /* ti_ipc_HeapQueueMgr__include */

/*
 */

/*
 *  @(#) ti.ipc; 1, 0, 0, 0,1; 5-22-2012 16:16:05; /db/vtree/library/trees/ipc/ipc-h32/src/ xlibrary

 */

