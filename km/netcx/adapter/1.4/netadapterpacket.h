// Copyright (C) Microsoft Corporation. All rights reserved.

//
// NOTE: This header is generated by stubwork.  Please make any 
//       modifications to the corresponding template files 
//       (.x or .y) and use stubwork to regenerate the header
//

#ifndef _NETADAPTERPACKET_1_4_H_
#define _NETADAPTERPACKET_1_4_H_

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




//
// The structure that contains packet extension info
// on an adapter or a queue
//
typedef struct _NET_PACKET_EXTENSION
{
    // Structure fields
    ULONG Size;

    // Extension info fields
    PCWSTR Name;
    ULONG Version;
    ULONG Alignment;
    SIZE_T ExtensionSize;
} NET_PACKET_EXTENSION;

inline
void
NET_PACKET_EXTENSION_INIT(
    _Out_ NET_PACKET_EXTENSION * Extension,
    _In_ PCWSTR Name,
    _In_ ULONG Version,
    _In_ SIZE_T ExtensionSize,
    _In_ ULONG Alignment
)
{
    RtlZeroMemory(Extension, sizeof(NET_PACKET_EXTENSION));
    Extension->Size = sizeof(NET_PACKET_EXTENSION);

    Extension->Name = Name;
    Extension->Version = Version;
    Extension->Alignment = Alignment;
    Extension->ExtensionSize = ExtensionSize;
}

//
// The structure is similar to NET_PACKET_EXTENSION
// but for query.
//
typedef struct _NET_PACKET_EXTENSION_QUERY
{
    // Structure fields
    ULONG Size;

    // Extension info fields
    PCWSTR Name;
    ULONG Version;
} NET_PACKET_EXTENSION_QUERY;

inline
void
NET_PACKET_EXTENSION_QUERY_INIT(
    _Out_ NET_PACKET_EXTENSION_QUERY * Extension,
    _In_ PCWSTR Name,
    _In_ ULONG Version
)
{
    RtlZeroMemory(Extension, sizeof(NET_PACKET_EXTENSION_QUERY));
    Extension->Size = sizeof(NET_PACKET_EXTENSION_QUERY);

    Extension->Name = Name;
    Extension->Version = Version;
}




WDF_EXTERN_C_END

#endif // _NETADAPTERPACKET_1_4_H_
