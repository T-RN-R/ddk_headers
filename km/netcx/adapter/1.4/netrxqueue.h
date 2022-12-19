// Copyright (C) Microsoft Corporation. All rights reserved.

//
// NOTE: This header is generated by stubwork.  Please make any 
//       modifications to the corresponding template files 
//       (.x or .y) and use stubwork to regenerate the header
//

#ifndef _NETRXQUEUE_1_4_H_
#define _NETRXQUEUE_1_4_H_

#ifndef WDF_EXTERN_C
  #ifdef __cplusplus
    #define WDF_EXTERN_C       extern "C"
    #define WDF_EXTERN_C_START extern "C" {
    #define WDF_EXTERN_C_END   }
  #else
    #define WDF_EXTERN_C
    #define WDF_EXTERN_C_START
    #define WDF_EXTERN_C_END
  #endif
#endif

WDF_EXTERN_C_START




#include <NetPacketQueue.h>

struct _NETRXQUEUE_INIT;
typedef struct _NETRXQUEUE_INIT NETRXQUEUE_INIT;

typedef struct _NET_RXQUEUE_BUFFER_LAYOUT_HINT
{
    //
    // Minimum space that should be unused in
    // the start of the first fragment
    //
    ULONG MinimumBackfillSize;

    //
    // Ideal alignment for the start of the L3
    // header. The value is in the form N-1,
    // where N is the alignment.
    //
    ULONG L3HeaderAlignment;

} NET_RXQUEUE_BUFFER_LAYOUT_HINT;

//
// NET Function: NetRxQueueCreate
//
typedef
_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
WDFAPI
NTSTATUS
(*PFN_NETRXQUEUECREATE)(
    _In_
    PNET_DRIVER_GLOBALS DriverGlobals,
    _Inout_
    NETRXQUEUE_INIT* NetRxQueueInit,
    _In_opt_
    WDF_OBJECT_ATTRIBUTES* RxQueueAttributes,
    _In_
    NET_PACKET_QUEUE_CONFIG* Configuration,
    _Out_
    NETPACKETQUEUE* PacketQueue
    );

_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
FORCEINLINE
NTSTATUS
NetRxQueueCreate(
    _Inout_
    NETRXQUEUE_INIT* NetRxQueueInit,
    _In_opt_
    WDF_OBJECT_ATTRIBUTES* RxQueueAttributes,
    _In_
    NET_PACKET_QUEUE_CONFIG* Configuration,
    _Out_
    NETPACKETQUEUE* PacketQueue
    )
{
    return ((PFN_NETRXQUEUECREATE) NetFunctions[NetRxQueueCreateTableIndex])(NetDriverGlobals, NetRxQueueInit, RxQueueAttributes, Configuration, PacketQueue);
}

//
// NET Function: NetRxQueueNotifyMoreReceivedPacketsAvailable
//
typedef
_IRQL_requires_max_(HIGH_LEVEL)
WDFAPI
void
(*PFN_NETRXQUEUENOTIFYMORERECEIVEDPACKETSAVAILABLE)(
    _In_
    PNET_DRIVER_GLOBALS DriverGlobals,
    _In_
    NETPACKETQUEUE PacketQueue
    );

_IRQL_requires_max_(HIGH_LEVEL)
FORCEINLINE
void
NetRxQueueNotifyMoreReceivedPacketsAvailable(
    _In_
    NETPACKETQUEUE PacketQueue
    )
{
    ((PFN_NETRXQUEUENOTIFYMORERECEIVEDPACKETSAVAILABLE) NetFunctions[NetRxQueueNotifyMoreReceivedPacketsAvailableTableIndex])(NetDriverGlobals, PacketQueue);
}

//
// NET Function: NetRxQueueInitGetQueueId
//
typedef
_IRQL_requires_max_(PASSIVE_LEVEL)
WDFAPI
ULONG
(*PFN_NETRXQUEUEINITGETQUEUEID)(
    _In_
    PNET_DRIVER_GLOBALS DriverGlobals,
    _In_
    NETRXQUEUE_INIT* NetRxQueueInit
    );

_IRQL_requires_max_(PASSIVE_LEVEL)
FORCEINLINE
ULONG
NetRxQueueInitGetQueueId(
    _In_
    NETRXQUEUE_INIT* NetRxQueueInit
    )
{
    return ((PFN_NETRXQUEUEINITGETQUEUEID) NetFunctions[NetRxQueueInitGetQueueIdTableIndex])(NetDriverGlobals, NetRxQueueInit);
}

//
// NET Function: NetRxQueueGetRingCollection
//
typedef
_IRQL_requires_max_(PASSIVE_LEVEL)
WDFAPI
const NET_RING_COLLECTION *
(*PFN_NETRXQUEUEGETRINGCOLLECTION)(
    _In_
    PNET_DRIVER_GLOBALS DriverGlobals,
    _In_
    NETPACKETQUEUE PacketQueue
    );

_IRQL_requires_max_(PASSIVE_LEVEL)
FORCEINLINE
const NET_RING_COLLECTION *
NetRxQueueGetRingCollection(
    _In_
    NETPACKETQUEUE PacketQueue
    )
{
    return ((PFN_NETRXQUEUEGETRINGCOLLECTION) NetFunctions[NetRxQueueGetRingCollectionTableIndex])(NetDriverGlobals, PacketQueue);
}

//
// NET Function: NetRxQueueGetExtension
//
typedef
_IRQL_requires_max_(PASSIVE_LEVEL)
WDFAPI
void
(*PFN_NETRXQUEUEGETEXTENSION)(
    _In_
    PNET_DRIVER_GLOBALS DriverGlobals,
    _In_
    NETPACKETQUEUE PacketQueue,
    _In_
    CONST NET_PACKET_EXTENSION_QUERY* Query,
    _Out_
    NET_EXTENSION* Extension
    );

_IRQL_requires_max_(PASSIVE_LEVEL)
FORCEINLINE
void
NetRxQueueGetExtension(
    _In_
    NETPACKETQUEUE PacketQueue,
    _In_
    CONST NET_PACKET_EXTENSION_QUERY* Query,
    _Out_
    NET_EXTENSION* Extension
    )
{
    ((PFN_NETRXQUEUEGETEXTENSION) NetFunctions[NetRxQueueGetExtensionTableIndex])(NetDriverGlobals, PacketQueue, Query, Extension);
}




WDF_EXTERN_C_END

#endif // _NETRXQUEUE_1_4_H_

