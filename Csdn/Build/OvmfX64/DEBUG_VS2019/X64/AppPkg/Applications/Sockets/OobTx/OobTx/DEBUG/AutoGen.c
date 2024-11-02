/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.c
  Abstract:       Auto-generated AutoGen.c for building module or library.
**/
#include <Uefi.h>
#include <Library/BaseLib.h>
#include <Library/DebugLib.h>
#include <Library/UefiBootServicesTableLib.h>
#include <Library/UefiApplicationEntryPoint.h>

GLOBAL_REMOVE_IF_UNREFERENCED GUID gEfiCallerIdGuid = {0xEB740091, 0xA494, 0x44d7, {0x8D, 0x96, 0xC1, 0x92, 0xF9, 0x5A, 0x63, 0x94}};

GLOBAL_REMOVE_IF_UNREFERENCED GUID gEdkiiDscPlatformGuid = {0x5a9e7754, 0xd81b, 0x49ea, {0x85, 0xad, 0x69, 0xea, 0xa7, 0xb1, 0x53, 0x9b}};

GLOBAL_REMOVE_IF_UNREFERENCED CHAR8 *gEfiCallerBaseName = "OobTx";

// Guids
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiMdePkgTokenSpaceGuid = { 0x914AEBE7, 0x4635, 0x459b, { 0xAA, 0x1C, 0x11, 0xE2, 0x19, 0xB0, 0x3A, 0x10 }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gUefiOvmfPkgTokenSpaceGuid = {0x93bb96af, 0xb9f2, 0x4eb8, {0x94, 0x62, 0xe0, 0xba, 0x74, 0x56, 0x42, 0x36}};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEdkiiIfrBitVarstoreGuid = {0x82DDD68B, 0x9163, 0x4187, {0x9B, 0x27, 0x20, 0xA8, 0xFD, 0x60,0xA7, 0x1D}};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiFileInfoGuid = { 0x09576E92, 0x6D3F, 0x11D2, { 0x8E, 0x39, 0x00, 0xA0, 0xC9, 0x69, 0x72, 0x3B }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiEventReadyToBootGuid = { 0x7CE88FB3, 0x4BD7, 0x4679, { 0x87, 0xA8, 0xA8, 0xD8, 0xDE, 0xE5, 0x0D, 0x2B }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiEventAfterReadyToBootGuid = { 0x3a2a00ad, 0x98b9, 0x4cdf, { 0xa4, 0x78, 0x70, 0x27, 0x77, 0xf1, 0xc1, 0x0b }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiEventLegacyBootGuid = { 0x2A571201, 0x4966, 0x47F6, { 0x8B, 0x86, 0xF3, 0x1E, 0x41, 0xF3, 0x2F, 0x10 }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiGlobalVariableGuid = { 0x8BE4DF61, 0x93CA, 0x11D2, { 0xAA, 0x0D, 0x00, 0xE0, 0x98, 0x03, 0x2B, 0x8C }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiAcpi20TableGuid = { 0x8868E871, 0xE4F1, 0x11D3, { 0xBC, 0x22, 0x00, 0x80, 0xC7, 0x3C, 0x88, 0x81 }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiAcpi10TableGuid = { 0xEB9D2D30, 0x2D88, 0x11D3, { 0x9A, 0x16, 0x00, 0x90, 0x27, 0x3F, 0xC1, 0x4D }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiShellEnvironment2ExtGuid = {0xd2c18636, 0x40e5, 0x4eb5, {0xa3, 0x1b, 0x36, 0x69, 0x5f, 0xd4, 0x2c, 0x87}};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiShellPkgTokenSpaceGuid = {0x171e9188, 0x31d3, 0x40f5, {0xb1, 0x0c, 0x53, 0x9b, 0x2d, 0xb9, 0x40, 0xcd}};

// Protocols
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gPcdProtocolGuid = { 0x11B34006, 0xD85B, 0x4D0A, { 0xA2, 0x90, 0xD5, 0xA5, 0x71, 0x31, 0x0E, 0xF7 }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiPcdProtocolGuid = { 0x13a3f0f6, 0x264a, 0x3ef0, { 0xf2, 0xe0, 0xde, 0xc5, 0x12, 0x34, 0x2f, 0x34 } };
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gGetPcdInfoProtocolGuid = { 0x5be40f57, 0xfa68, 0x4610, { 0xbb, 0xbf, 0xe9, 0xc5, 0xfc, 0xda, 0xd3, 0x65 } };
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiGetPcdInfoProtocolGuid = { 0xfd0f4478,  0xefd, 0x461d, { 0xba, 0x2d, 0xe5, 0x8c, 0x45, 0xfd, 0x5f, 0x5e } };
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiShellParametersProtocolGuid = { 0x752f3136, 0x4e16, 0x4fdc, {0xa2, 0x2a, 0xe5, 0xf4, 0x68, 0x12, 0xf4, 0xca }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiShellInterfaceGuid = {0x47c7b223, 0xc42a, 0x11d2, {0x8e, 0x57, 0x00, 0xa0, 0xc9, 0x69, 0x72, 0x3b}};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiDevicePathProtocolGuid = { 0x09576E91, 0x6D3F, 0x11D2, { 0x8E, 0x39, 0x00, 0xA0, 0xC9, 0x69, 0x72, 0x3B }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiDevicePathUtilitiesProtocolGuid = { 0x0379BE4E, 0xD706, 0x437D, { 0xB0, 0x37, 0xED, 0xB8, 0x2F, 0xB7, 0x72, 0xA4 }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiDevicePathToTextProtocolGuid = { 0x8B843E20, 0x8132, 0x4852, { 0x90, 0xCC, 0x55, 0x1A, 0x4E, 0x4A, 0x7F, 0x1C }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiDevicePathFromTextProtocolGuid = { 0x05C99A21, 0xC70F, 0x4AD2, { 0x8A, 0x5F, 0x35, 0xDF, 0x33, 0x43, 0xF5, 0x1E }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiUnicodeCollation2ProtocolGuid = {0xa4c751fc, 0x23ae, 0x4c3e, { 0x92, 0xe9, 0x49, 0x64, 0xcf, 0x63, 0xf3, 0x49 }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiFormBrowser2ProtocolGuid = {0xb9d4c360, 0xbcfb, 0x4f9b, {0x92, 0x98, 0x53, 0xc1, 0x36, 0x98, 0x22, 0x58}};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiSimpleFileSystemProtocolGuid = { 0x964E5B22, 0x6459, 0x11D2, { 0x8E, 0x39, 0x00, 0xA0, 0xC9, 0x69, 0x72, 0x3B }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiDriverBindingProtocolGuid = { 0x18A031AB, 0xB443, 0x4D1A, { 0xA5, 0xC0, 0x0C, 0x09, 0x26, 0x1E, 0x9F, 0x71 }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiSimpleTextOutProtocolGuid = { 0x387477C2, 0x69C7, 0x11D2, { 0x8E, 0x39, 0x00, 0xA0, 0xC9, 0x69, 0x72, 0x3B }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiGraphicsOutputProtocolGuid = { 0x9042A9DE, 0x23DC, 0x4A38, { 0x96, 0xFB, 0x7A, 0xDE, 0xD0, 0x80, 0x51, 0x6A }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiHiiFontProtocolGuid = {0xe9ca4775, 0x8657, 0x47fc, {0x97, 0xe7, 0x7e, 0xd6, 0x5a, 0x08, 0x43, 0x24}};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiUgaDrawProtocolGuid = { 0x982C298B, 0xF4FA, 0x41CB, { 0xB8, 0x38, 0x77, 0xAA, 0x68, 0x8F, 0xB8, 0x39 }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiComponentNameProtocolGuid = { 0x107A772C, 0xD5E1, 0x11D4, { 0x9A, 0x46, 0x00, 0x90, 0x27, 0x3F, 0xC1, 0x4D }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiComponentName2ProtocolGuid = { 0x6A7A5CFF, 0xE8D9, 0x4F70, { 0xBA, 0xDA, 0x75, 0xAB, 0x30, 0x25, 0xCE, 0x14 }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiDriverConfigurationProtocolGuid = { 0x107A772B, 0xD5E1, 0x11D4, { 0x9A, 0x46, 0x00, 0x90, 0x27, 0x3F, 0xC1, 0x4D }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiDriverConfiguration2ProtocolGuid = { 0xBFD7DC1D, 0x24F1, 0x40D9, { 0x82, 0xE7, 0x2E, 0x09, 0xBB, 0x6B, 0x4E, 0xBE }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiDriverDiagnosticsProtocolGuid = { 0x0784924F, 0xE296, 0x11D4, { 0x9A, 0x49, 0x00, 0x90, 0x27, 0x3F, 0xC1, 0x4D }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiDriverDiagnostics2ProtocolGuid = { 0x4D330321, 0x025F, 0x4AAC, { 0x90, 0xD8, 0x5E, 0xD9, 0x00, 0x17, 0x3B, 0x63 }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiShellProtocolGuid = { 0x6302d008, 0x7f9b, 0x4f30, {0x87, 0xac, 0x60, 0xc9, 0xfe, 0xf5, 0xda, 0x4e }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiShellEnvironment2Guid = {0x47c7b221, 0xc42a, 0x11d2, {0x8e, 0x57, 0x00, 0xa0, 0xc9, 0x69, 0x72, 0x3b}};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiHiiStringProtocolGuid = {0x0fd96974, 0x23aa, 0x4cdc, {0xb9, 0xcb, 0x98, 0xd1, 0x77, 0x50, 0x32, 0x2a}};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiHiiImageProtocolGuid = {0x31a6406a, 0x6bdf, 0x4e46, {0xb2, 0xa2, 0xeb, 0xaa, 0x89, 0xc4, 0x09, 0x20}};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiHiiDatabaseProtocolGuid = {0xef9fc172, 0xa1b2, 0x4693, {0xb3, 0x27, 0x6d, 0x32, 0xfc, 0x41, 0x60, 0x42}};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiHiiConfigRoutingProtocolGuid = {0x587e72d7, 0xcc50, 0x4f79, {0x82, 0x09, 0xca, 0x29, 0x1f, 0xc1, 0xa1, 0x0f}};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiSimpleTextInProtocolGuid = { 0x387477C1, 0x69C7, 0x11D2, { 0x8E, 0x39, 0x00, 0xA0, 0xC9, 0x69, 0x72, 0x3B }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiSocketServiceBindingProtocolGuid = { 0x8aaedb2a, 0xa6bb, 0x47c6, { 0x94, 0xce, 0x1b, 0x80, 0x96, 0x42, 0x3f, 0x2a } };
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiSocketProtocolGuid = { 0x58e6ed63, 0x1694, 0x440b, { 0x93, 0x88, 0xe9, 0x8f, 0xed, 0x6b, 0x65, 0xaf } };
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiIp4Config2ProtocolGuid = { 0x5b446ed1, 0xe30b, 0x4faa, {0x87, 0x1a, 0x36, 0x54, 0xec, 0xa3, 0x60, 0x80 }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiIp6ConfigProtocolGuid = { 0x937fe521, 0x95ae, 0x4d1a, {0x89, 0x29, 0x48, 0xbc, 0xd9, 0x0a, 0xd3, 0x1a }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiIp4ProtocolGuid = { 0x41D94CD2, 0x35B6, 0x455A, { 0x82, 0x58, 0xD4, 0xE5, 0x13, 0x34, 0xAA, 0xDD }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiIp4ServiceBindingProtocolGuid = { 0xC51711E7, 0xB4BF, 0x404A, { 0xBF, 0xB8, 0x0A, 0x04, 0x8E, 0xF1, 0xFF, 0xE4 }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiIp6ProtocolGuid = { 0x2c8759d5, 0x5c2d, 0x66ef, {0x92, 0x5f, 0xb6, 0x6c, 0x10, 0x19, 0x57, 0xe2 }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiIp6ServiceBindingProtocolGuid = { 0xec835dd3, 0xfe0f, 0x617b, {0xa6, 0x21, 0xb3, 0x50, 0xc3, 0xe1, 0x33, 0x88 }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiTcp4ProtocolGuid = { 0x65530BC7, 0xA359, 0x410F, { 0xB0, 0x10, 0x5A, 0xAD, 0xC7, 0xEC, 0x2B, 0x62 }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiTcp4ServiceBindingProtocolGuid = { 0x00720665, 0x67EB, 0x4A99, { 0xBA, 0xF7, 0xD3, 0xC3, 0x3A, 0x1C, 0x7C, 0xC9 }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiTcp6ProtocolGuid = { 0x46e44855, 0xbd60, 0x4ab7, {0xab, 0x0d, 0xa6, 0x79, 0xb9, 0x44, 0x7d, 0x77 }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiTcp6ServiceBindingProtocolGuid = { 0xec20eb79, 0x6c1a, 0x4664, {0x9a, 0x0d, 0xd2, 0xe4, 0xcc, 0x16, 0xd6, 0x64 }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiUdp4ProtocolGuid = { 0x3AD9DF29, 0x4501, 0x478D, { 0xB1, 0xF8, 0x7F, 0x7F, 0xE7, 0x0E, 0x50, 0xF3 }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiUdp4ServiceBindingProtocolGuid = { 0x83F01464, 0x99BD, 0x45E5, { 0xB3, 0x83, 0xAF, 0x63, 0x05, 0xD8, 0xE9, 0xE6 }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiUdp6ProtocolGuid = { 0x4f948815, 0xb4b9, 0x43cb, {0x8a, 0x33, 0x90, 0xe0, 0x60, 0xb3, 0x49, 0x55 }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiUdp6ServiceBindingProtocolGuid = { 0x66ed4721, 0x3c98, 0x4d3e, {0x81, 0xe3, 0xd0, 0x3d, 0xd3, 0x9a, 0x72, 0x54 }};

// Definition of SkuId Array
GLOBAL_REMOVE_IF_UNREFERENCED UINT64 _gPcd_SkuId_Array[] = {0x0};

// Definition of PCDs used in libraries

#define _PCD_TOKEN_PcdVerifyNodeInList  0U
#define _PCD_SIZE_PcdVerifyNodeInList 1
#define _PCD_GET_MODE_SIZE_PcdVerifyNodeInList  _PCD_SIZE_PcdVerifyNodeInList 
#define _PCD_VALUE_PcdVerifyNodeInList  ((BOOLEAN)0U)
GLOBAL_REMOVE_IF_UNREFERENCED const BOOLEAN _gPcd_FixedAtBuild_PcdVerifyNodeInList = _PCD_VALUE_PcdVerifyNodeInList;
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdVerifyNodeInList;
#define _PCD_GET_MODE_BOOL_PcdVerifyNodeInList  _gPcd_FixedAtBuild_PcdVerifyNodeInList
//#define _PCD_SET_MODE_BOOL_PcdVerifyNodeInList  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdMaximumLinkedListLength  0U
#define _PCD_SIZE_PcdMaximumLinkedListLength 4
#define _PCD_GET_MODE_SIZE_PcdMaximumLinkedListLength  _PCD_SIZE_PcdMaximumLinkedListLength 
#define _PCD_VALUE_PcdMaximumLinkedListLength  0U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdMaximumLinkedListLength = _PCD_VALUE_PcdMaximumLinkedListLength;
extern const  UINT32  _gPcd_FixedAtBuild_PcdMaximumLinkedListLength;
#define _PCD_GET_MODE_32_PcdMaximumLinkedListLength  _gPcd_FixedAtBuild_PcdMaximumLinkedListLength
//#define _PCD_SET_MODE_32_PcdMaximumLinkedListLength  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdMaximumAsciiStringLength  0U
#define _PCD_SIZE_PcdMaximumAsciiStringLength 4
#define _PCD_GET_MODE_SIZE_PcdMaximumAsciiStringLength  _PCD_SIZE_PcdMaximumAsciiStringLength 
#define _PCD_VALUE_PcdMaximumAsciiStringLength  1000000U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdMaximumAsciiStringLength = _PCD_VALUE_PcdMaximumAsciiStringLength;
extern const  UINT32  _gPcd_FixedAtBuild_PcdMaximumAsciiStringLength;
#define _PCD_GET_MODE_32_PcdMaximumAsciiStringLength  _gPcd_FixedAtBuild_PcdMaximumAsciiStringLength
//#define _PCD_SET_MODE_32_PcdMaximumAsciiStringLength  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdMaximumUnicodeStringLength  0U
#define _PCD_SIZE_PcdMaximumUnicodeStringLength 4
#define _PCD_GET_MODE_SIZE_PcdMaximumUnicodeStringLength  _PCD_SIZE_PcdMaximumUnicodeStringLength 
#define _PCD_VALUE_PcdMaximumUnicodeStringLength  1000000U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdMaximumUnicodeStringLength = _PCD_VALUE_PcdMaximumUnicodeStringLength;
extern const  UINT32  _gPcd_FixedAtBuild_PcdMaximumUnicodeStringLength;
#define _PCD_GET_MODE_32_PcdMaximumUnicodeStringLength  _gPcd_FixedAtBuild_PcdMaximumUnicodeStringLength
//#define _PCD_SET_MODE_32_PcdMaximumUnicodeStringLength  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdControlFlowEnforcementPropertyMask  0U
#define _PCD_SIZE_PcdControlFlowEnforcementPropertyMask 4
#define _PCD_GET_MODE_SIZE_PcdControlFlowEnforcementPropertyMask  _PCD_SIZE_PcdControlFlowEnforcementPropertyMask 
#define _PCD_VALUE_PcdControlFlowEnforcementPropertyMask  0x0U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdControlFlowEnforcementPropertyMask = _PCD_VALUE_PcdControlFlowEnforcementPropertyMask;
extern const  UINT32  _gPcd_FixedAtBuild_PcdControlFlowEnforcementPropertyMask;
#define _PCD_GET_MODE_32_PcdControlFlowEnforcementPropertyMask  _gPcd_FixedAtBuild_PcdControlFlowEnforcementPropertyMask
//#define _PCD_SET_MODE_32_PcdControlFlowEnforcementPropertyMask  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdSpeculationBarrierType  0U
#define _PCD_SIZE_PcdSpeculationBarrierType 1
#define _PCD_GET_MODE_SIZE_PcdSpeculationBarrierType  _PCD_SIZE_PcdSpeculationBarrierType 
#define _PCD_VALUE_PcdSpeculationBarrierType  0x01U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT8 _gPcd_FixedAtBuild_PcdSpeculationBarrierType = _PCD_VALUE_PcdSpeculationBarrierType;
extern const  UINT8  _gPcd_FixedAtBuild_PcdSpeculationBarrierType;
#define _PCD_GET_MODE_8_PcdSpeculationBarrierType  _gPcd_FixedAtBuild_PcdSpeculationBarrierType
//#define _PCD_SET_MODE_8_PcdSpeculationBarrierType  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdOvmfWorkAreaBase  0U
#define _PCD_SIZE_PcdOvmfWorkAreaBase 4
#define _PCD_GET_MODE_SIZE_PcdOvmfWorkAreaBase  _PCD_SIZE_PcdOvmfWorkAreaBase 
#define _PCD_VALUE_PcdOvmfWorkAreaBase  0x0080B000U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdOvmfWorkAreaBase = _PCD_VALUE_PcdOvmfWorkAreaBase;
extern const  UINT32  _gPcd_FixedAtBuild_PcdOvmfWorkAreaBase;
#define _PCD_GET_MODE_32_PcdOvmfWorkAreaBase  _gPcd_FixedAtBuild_PcdOvmfWorkAreaBase
//#define _PCD_SET_MODE_32_PcdOvmfWorkAreaBase  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdDebugPrintErrorLevel  0U
#define _PCD_SIZE_PcdDebugPrintErrorLevel 4
#define _PCD_GET_MODE_SIZE_PcdDebugPrintErrorLevel  _PCD_SIZE_PcdDebugPrintErrorLevel 
#define _PCD_VALUE_PcdDebugPrintErrorLevel  0x8000004FU
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdDebugPrintErrorLevel = _PCD_VALUE_PcdDebugPrintErrorLevel;
extern const  UINT32  _gPcd_FixedAtBuild_PcdDebugPrintErrorLevel;
#define _PCD_GET_MODE_32_PcdDebugPrintErrorLevel  _gPcd_FixedAtBuild_PcdDebugPrintErrorLevel
//#define _PCD_SET_MODE_32_PcdDebugPrintErrorLevel  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdDebugClearMemoryValue  0U
#define _PCD_SIZE_PcdDebugClearMemoryValue 1
#define _PCD_GET_MODE_SIZE_PcdDebugClearMemoryValue  _PCD_SIZE_PcdDebugClearMemoryValue 
#define _PCD_VALUE_PcdDebugClearMemoryValue  0xAFU
GLOBAL_REMOVE_IF_UNREFERENCED const UINT8 _gPcd_FixedAtBuild_PcdDebugClearMemoryValue = _PCD_VALUE_PcdDebugClearMemoryValue;
extern const  UINT8  _gPcd_FixedAtBuild_PcdDebugClearMemoryValue;
#define _PCD_GET_MODE_8_PcdDebugClearMemoryValue  _gPcd_FixedAtBuild_PcdDebugClearMemoryValue
//#define _PCD_SET_MODE_8_PcdDebugClearMemoryValue  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdDebugPropertyMask  0U
#define _PCD_SIZE_PcdDebugPropertyMask 1
#define _PCD_GET_MODE_SIZE_PcdDebugPropertyMask  _PCD_SIZE_PcdDebugPropertyMask 
#define _PCD_VALUE_PcdDebugPropertyMask  0x2FU
GLOBAL_REMOVE_IF_UNREFERENCED const UINT8 _gPcd_FixedAtBuild_PcdDebugPropertyMask = _PCD_VALUE_PcdDebugPropertyMask;
extern const  UINT8  _gPcd_FixedAtBuild_PcdDebugPropertyMask;
#define _PCD_GET_MODE_8_PcdDebugPropertyMask  _gPcd_FixedAtBuild_PcdDebugPropertyMask
//#define _PCD_SET_MODE_8_PcdDebugPropertyMask  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdFixedDebugPrintErrorLevel  0U
#define _PCD_SIZE_PcdFixedDebugPrintErrorLevel 4
#define _PCD_GET_MODE_SIZE_PcdFixedDebugPrintErrorLevel  _PCD_SIZE_PcdFixedDebugPrintErrorLevel 
#define _PCD_VALUE_PcdFixedDebugPrintErrorLevel  0xFFFFFFFFU
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdFixedDebugPrintErrorLevel = _PCD_VALUE_PcdFixedDebugPrintErrorLevel;
extern const  UINT32  _gPcd_FixedAtBuild_PcdFixedDebugPrintErrorLevel;
#define _PCD_GET_MODE_32_PcdFixedDebugPrintErrorLevel  _gPcd_FixedAtBuild_PcdFixedDebugPrintErrorLevel
//#define _PCD_SET_MODE_32_PcdFixedDebugPrintErrorLevel  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdMaximumDevicePathNodeCount  0U
#define _PCD_SIZE_PcdMaximumDevicePathNodeCount 4
#define _PCD_GET_MODE_SIZE_PcdMaximumDevicePathNodeCount  _PCD_SIZE_PcdMaximumDevicePathNodeCount 
#define _PCD_VALUE_PcdMaximumDevicePathNodeCount  0U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdMaximumDevicePathNodeCount = _PCD_VALUE_PcdMaximumDevicePathNodeCount;
extern const  UINT32  _gPcd_FixedAtBuild_PcdMaximumDevicePathNodeCount;
#define _PCD_GET_MODE_32_PcdMaximumDevicePathNodeCount  _gPcd_FixedAtBuild_PcdMaximumDevicePathNodeCount
//#define _PCD_SET_MODE_32_PcdMaximumDevicePathNodeCount  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdUefiFileHandleLibPrintBufferSize  0U
#define _PCD_SIZE_PcdUefiFileHandleLibPrintBufferSize 2
#define _PCD_GET_MODE_SIZE_PcdUefiFileHandleLibPrintBufferSize  _PCD_SIZE_PcdUefiFileHandleLibPrintBufferSize 
#define _PCD_VALUE_PcdUefiFileHandleLibPrintBufferSize  1536U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT16 _gPcd_FixedAtBuild_PcdUefiFileHandleLibPrintBufferSize = _PCD_VALUE_PcdUefiFileHandleLibPrintBufferSize;
extern const  UINT16  _gPcd_FixedAtBuild_PcdUefiFileHandleLibPrintBufferSize;
#define _PCD_GET_MODE_16_PcdUefiFileHandleLibPrintBufferSize  _gPcd_FixedAtBuild_PcdUefiFileHandleLibPrintBufferSize
//#define _PCD_SET_MODE_16_PcdUefiFileHandleLibPrintBufferSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdDriverDiagnosticsDisable  0U
#define _PCD_SIZE_PcdDriverDiagnosticsDisable 1
#define _PCD_GET_MODE_SIZE_PcdDriverDiagnosticsDisable  _PCD_SIZE_PcdDriverDiagnosticsDisable 
#define _PCD_VALUE_PcdDriverDiagnosticsDisable  ((BOOLEAN)0U)
GLOBAL_REMOVE_IF_UNREFERENCED const BOOLEAN _gPcd_FixedAtBuild_PcdDriverDiagnosticsDisable = _PCD_VALUE_PcdDriverDiagnosticsDisable;
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdDriverDiagnosticsDisable;
#define _PCD_GET_MODE_BOOL_PcdDriverDiagnosticsDisable  _gPcd_FixedAtBuild_PcdDriverDiagnosticsDisable
//#define _PCD_SET_MODE_BOOL_PcdDriverDiagnosticsDisable  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdComponentNameDisable  0U
#define _PCD_SIZE_PcdComponentNameDisable 1
#define _PCD_GET_MODE_SIZE_PcdComponentNameDisable  _PCD_SIZE_PcdComponentNameDisable 
#define _PCD_VALUE_PcdComponentNameDisable  ((BOOLEAN)0U)
GLOBAL_REMOVE_IF_UNREFERENCED const BOOLEAN _gPcd_FixedAtBuild_PcdComponentNameDisable = _PCD_VALUE_PcdComponentNameDisable;
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdComponentNameDisable;
#define _PCD_GET_MODE_BOOL_PcdComponentNameDisable  _gPcd_FixedAtBuild_PcdComponentNameDisable
//#define _PCD_SET_MODE_BOOL_PcdComponentNameDisable  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdDriverDiagnostics2Disable  0U
#define _PCD_SIZE_PcdDriverDiagnostics2Disable 1
#define _PCD_GET_MODE_SIZE_PcdDriverDiagnostics2Disable  _PCD_SIZE_PcdDriverDiagnostics2Disable 
#define _PCD_VALUE_PcdDriverDiagnostics2Disable  ((BOOLEAN)0U)
GLOBAL_REMOVE_IF_UNREFERENCED const BOOLEAN _gPcd_FixedAtBuild_PcdDriverDiagnostics2Disable = _PCD_VALUE_PcdDriverDiagnostics2Disable;
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdDriverDiagnostics2Disable;
#define _PCD_GET_MODE_BOOL_PcdDriverDiagnostics2Disable  _gPcd_FixedAtBuild_PcdDriverDiagnostics2Disable
//#define _PCD_SET_MODE_BOOL_PcdDriverDiagnostics2Disable  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdComponentName2Disable  0U
#define _PCD_SIZE_PcdComponentName2Disable 1
#define _PCD_GET_MODE_SIZE_PcdComponentName2Disable  _PCD_SIZE_PcdComponentName2Disable 
#define _PCD_VALUE_PcdComponentName2Disable  ((BOOLEAN)0U)
GLOBAL_REMOVE_IF_UNREFERENCED const BOOLEAN _gPcd_FixedAtBuild_PcdComponentName2Disable = _PCD_VALUE_PcdComponentName2Disable;
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdComponentName2Disable;
#define _PCD_GET_MODE_BOOL_PcdComponentName2Disable  _gPcd_FixedAtBuild_PcdComponentName2Disable
//#define _PCD_SET_MODE_BOOL_PcdComponentName2Disable  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdUgaConsumeSupport  0U
#define _PCD_SIZE_PcdUgaConsumeSupport 1
#define _PCD_GET_MODE_SIZE_PcdUgaConsumeSupport  _PCD_SIZE_PcdUgaConsumeSupport 
#define _PCD_VALUE_PcdUgaConsumeSupport  ((BOOLEAN)1U)
GLOBAL_REMOVE_IF_UNREFERENCED const BOOLEAN _gPcd_FixedAtBuild_PcdUgaConsumeSupport = _PCD_VALUE_PcdUgaConsumeSupport;
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdUgaConsumeSupport;
#define _PCD_GET_MODE_BOOL_PcdUgaConsumeSupport  _gPcd_FixedAtBuild_PcdUgaConsumeSupport
//#define _PCD_SET_MODE_BOOL_PcdUgaConsumeSupport  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdUefiLibMaxPrintBufferSize  0U
#define _PCD_SIZE_PcdUefiLibMaxPrintBufferSize 4
#define _PCD_GET_MODE_SIZE_PcdUefiLibMaxPrintBufferSize  _PCD_SIZE_PcdUefiLibMaxPrintBufferSize 
#define _PCD_VALUE_PcdUefiLibMaxPrintBufferSize  320U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdUefiLibMaxPrintBufferSize = _PCD_VALUE_PcdUefiLibMaxPrintBufferSize;
extern const  UINT32  _gPcd_FixedAtBuild_PcdUefiLibMaxPrintBufferSize;
#define _PCD_GET_MODE_32_PcdUefiLibMaxPrintBufferSize  _gPcd_FixedAtBuild_PcdUefiLibMaxPrintBufferSize
//#define _PCD_SET_MODE_32_PcdUefiLibMaxPrintBufferSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdShellLibAutoInitialize  0U
#define _PCD_SIZE_PcdShellLibAutoInitialize 1
#define _PCD_GET_MODE_SIZE_PcdShellLibAutoInitialize  _PCD_SIZE_PcdShellLibAutoInitialize 
#define _PCD_VALUE_PcdShellLibAutoInitialize  1U
GLOBAL_REMOVE_IF_UNREFERENCED const BOOLEAN _gPcd_FixedAtBuild_PcdShellLibAutoInitialize = _PCD_VALUE_PcdShellLibAutoInitialize;
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdShellLibAutoInitialize;
#define _PCD_GET_MODE_BOOL_PcdShellLibAutoInitialize  _gPcd_FixedAtBuild_PcdShellLibAutoInitialize
//#define _PCD_SET_MODE_BOOL_PcdShellLibAutoInitialize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdShellPrintBufferSize  0U
#define _PCD_SIZE_PcdShellPrintBufferSize 4
#define _PCD_GET_MODE_SIZE_PcdShellPrintBufferSize  _PCD_SIZE_PcdShellPrintBufferSize 
#define _PCD_VALUE_PcdShellPrintBufferSize  16000U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdShellPrintBufferSize = _PCD_VALUE_PcdShellPrintBufferSize;
extern const  UINT32  _gPcd_FixedAtBuild_PcdShellPrintBufferSize;
#define _PCD_GET_MODE_32_PcdShellPrintBufferSize  _gPcd_FixedAtBuild_PcdShellPrintBufferSize
//#define _PCD_SET_MODE_32_PcdShellPrintBufferSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD


RETURN_STATUS
EFIAPI
DxeCcProbeLibConstructor (
  VOID
  );

RETURN_STATUS
EFIAPI
BaseDebugLibSerialPortConstructor (
  VOID
  );

EFI_STATUS
EFIAPI
UefiBootServicesTableLibConstructor (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );

EFI_STATUS
EFIAPI
UefiRuntimeServicesTableLibConstructor (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );

EFI_STATUS
EFIAPI
DevicePathLibConstructor (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );

EFI_STATUS
EFIAPI
UefiLibConstructor (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );

EFI_STATUS
EFIAPI
ShellLibConstructor (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );

EFI_STATUS
EFIAPI
__wchar_construct (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );

EFI_STATUS
EFIAPI
UefiHiiServicesLibConstructor (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );

EFI_STATUS
EFIAPI
__Cons_construct (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );

RETURN_STATUS
EFIAPI
EslConstructor (
  VOID
  );


VOID
EFIAPI
ProcessLibraryConstructorList (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  )
{
  EFI_STATUS  Status;

  Status = DxeCcProbeLibConstructor ();
  ASSERT_RETURN_ERROR (Status);

  Status = BaseDebugLibSerialPortConstructor ();
  ASSERT_RETURN_ERROR (Status);

  Status = UefiBootServicesTableLibConstructor (ImageHandle, SystemTable);
  ASSERT_EFI_ERROR (Status);

  Status = UefiRuntimeServicesTableLibConstructor (ImageHandle, SystemTable);
  ASSERT_EFI_ERROR (Status);

  Status = DevicePathLibConstructor (ImageHandle, SystemTable);
  ASSERT_EFI_ERROR (Status);

  Status = UefiLibConstructor (ImageHandle, SystemTable);
  ASSERT_EFI_ERROR (Status);

  Status = ShellLibConstructor (ImageHandle, SystemTable);
  ASSERT_EFI_ERROR (Status);

  Status = __wchar_construct (ImageHandle, SystemTable);
  ASSERT_EFI_ERROR (Status);

  Status = UefiHiiServicesLibConstructor (ImageHandle, SystemTable);
  ASSERT_EFI_ERROR (Status);

  Status = __Cons_construct (ImageHandle, SystemTable);
  ASSERT_EFI_ERROR (Status);

  Status = EslConstructor ();
  ASSERT_RETURN_ERROR (Status);

}


RETURN_STATUS
EFIAPI
EslDestructor (
  VOID
  );

EFI_STATUS
EFIAPI
__Cons_deconstruct (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );

EFI_STATUS
EFIAPI
__wchar_deconstruct (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );

EFI_STATUS
EFIAPI
ShellLibDestructor (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );


VOID
EFIAPI
ProcessLibraryDestructorList (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  )
{
  EFI_STATUS  Status;

  Status = EslDestructor ();
  ASSERT_RETURN_ERROR (Status);

  Status = __Cons_deconstruct (ImageHandle, SystemTable);
  ASSERT_EFI_ERROR (Status);

  Status = __wchar_deconstruct (ImageHandle, SystemTable);
  ASSERT_EFI_ERROR (Status);

  Status = ShellLibDestructor (ImageHandle, SystemTable);
  ASSERT_EFI_ERROR (Status);

}

const UINT32 _gUefiDriverRevision = 0x00000000U;


EFI_STATUS
EFIAPI
ProcessModuleEntryPointList (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  )

{
  return ShellCEntryLib (ImageHandle, SystemTable);
}

VOID
EFIAPI
ExitDriver (
  IN EFI_STATUS  Status
  )
{
  if (EFI_ERROR (Status)) {
    ProcessLibraryDestructorList (gImageHandle, gST);
  }
  gBS->Exit (gImageHandle, Status, 0, NULL);
}

GLOBAL_REMOVE_IF_UNREFERENCED const UINT8 _gDriverUnloadImageCount = 0U;

EFI_STATUS
EFIAPI
ProcessModuleUnloadList (
  IN EFI_HANDLE        ImageHandle
  )
{
  return EFI_SUCCESS;
}
