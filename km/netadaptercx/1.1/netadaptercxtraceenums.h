/*++

Copyright (c) Microsoft Corporation.  All rights reserved.

_WdfVersionBuild_

Module Name: NetTraceEnums.h

Abstract:
    Generated trace enums

Environment:
    kernel mode only

--*/

#ifndef _NETTRACEENUMS_H_
#define _NETTRACEENUMS_H_

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

// begin_wpp config
// CUSTOM_TYPE(NET_PACKET_FILTER_TYPES_FLAGS, ItemEnum(_NET_PACKET_FILTER_TYPES_FLAGS));
// CUSTOM_TYPE(NET_ADAPTER_STATISTICS_FLAGS, ItemEnum(_NET_ADAPTER_STATISTICS_FLAGS));
// CUSTOM_TYPE(NET_ADAPTER_POWER_FLAGS, ItemEnum(_NET_ADAPTER_POWER_FLAGS));
// CUSTOM_TYPE(NET_ADAPTER_WAKE_PATTERN_FLAGS, ItemEnum(_NET_ADAPTER_WAKE_PATTERN_FLAGS));
// CUSTOM_TYPE(NET_ADAPTER_PROTOCOL_OFFLOADS_FLAGS, ItemEnum(_NET_ADAPTER_PROTOCOL_OFFLOADS_FLAGS));
// CUSTOM_TYPE(NET_ADAPTER_WAKEUP_EVENTS_FLAGS, ItemEnum(_NET_ADAPTER_WAKEUP_EVENTS_FLAGS));
// CUSTOM_TYPE(NET_ADAPTER_MEDIA_SPECIFIC_WAKEUP_EVENTS_FLAGS, ItemEnum(_NET_ADAPTER_MEDIA_SPECIFIC_WAKEUP_EVENTS_FLAGS));
// CUSTOM_TYPE(NET_ADAPTER_PAUSE_FUNCTIONS, ItemEnum(_NET_ADAPTER_PAUSE_FUNCTIONS));
// CUSTOM_TYPE(NET_ADAPTER_AUTO_NEGOTIATION_FLAGS, ItemEnum(_NET_ADAPTER_AUTO_NEGOTIATION_FLAGS));
// CUSTOM_TYPE(NET_CONFIGURATION_QUERY_ULONG_FLAGS, ItemEnum(_NET_CONFIGURATION_QUERY_ULONG_FLAGS));
// CUSTOM_TYPE(NET_REQUEST_QUEUE_TYPE, ItemEnum(_NET_REQUEST_QUEUE_TYPE));
// end_wpp

WDF_EXTERN_C_END

#endif // _NETTRACEENUMS_H_

