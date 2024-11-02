/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_e3752948_b9a1_4770_90c4_df41c38986be
#define _AUTOGENH_e3752948_b9a1_4770_90c4_df41c38986be

#ifdef __cplusplus
extern "C" {
#endif

#include <Uefi.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern GUID  gEdkiiDscPlatformGuid;
extern CHAR8 *gEfiCallerBaseName;

#define EFI_CALLER_ID_GUID \
  {0xe3752948, 0xb9a1, 0x4770, {0x90, 0xc4, 0xdf, 0x41, 0xc3, 0x89, 0x86, 0xbe}}
#define EDKII_DSC_PLATFORM_GUID \
  {0x5a9e7754, 0xd81b, 0x49ea, {0x85, 0xad, 0x69, 0xea, 0xa7, 0xb1, 0x53, 0x9b}}

// Guids
extern EFI_GUID gUefiOvmfPkgTokenSpaceGuid;
extern EFI_GUID gEfiMdeModulePkgTokenSpaceGuid;
extern EFI_GUID gEfiMdePkgTokenSpaceGuid;
extern EFI_GUID gEfiEventReadyToBootGuid;
extern EFI_GUID gEfiEventAfterReadyToBootGuid;
extern EFI_GUID gEfiEventLegacyBootGuid;
extern EFI_GUID gEfiGlobalVariableGuid;
extern EFI_GUID gEfiAcpi20TableGuid;
extern EFI_GUID gEfiAcpi10TableGuid;
extern EFI_GUID gEfiHobListGuid;
extern EFI_GUID gEfiDxeServicesTableGuid;
extern EFI_GUID gUefiOvmfPkgPlatformInfoGuid;

// Protocols
extern EFI_GUID gEfiGraphicsOutputProtocolGuid;
extern EFI_GUID gEfiDevicePathProtocolGuid;
extern EFI_GUID gEfiPciIoProtocolGuid;
extern EFI_GUID gPcdProtocolGuid;
extern EFI_GUID gEfiPcdProtocolGuid;
extern EFI_GUID gGetPcdInfoProtocolGuid;
extern EFI_GUID gEfiGetPcdInfoProtocolGuid;
extern EFI_GUID gEfiDevicePathUtilitiesProtocolGuid;
extern EFI_GUID gEfiDevicePathToTextProtocolGuid;
extern EFI_GUID gEfiDevicePathFromTextProtocolGuid;
extern EFI_GUID gEfiDriverBindingProtocolGuid;
extern EFI_GUID gEfiSimpleTextOutProtocolGuid;
extern EFI_GUID gEfiHiiFontProtocolGuid;
extern EFI_GUID gEfiSimpleFileSystemProtocolGuid;
extern EFI_GUID gEfiUgaDrawProtocolGuid;
extern EFI_GUID gEfiComponentNameProtocolGuid;
extern EFI_GUID gEfiComponentName2ProtocolGuid;
extern EFI_GUID gEfiDriverConfigurationProtocolGuid;
extern EFI_GUID gEfiDriverConfiguration2ProtocolGuid;
extern EFI_GUID gEfiDriverDiagnosticsProtocolGuid;
extern EFI_GUID gEfiDriverDiagnostics2ProtocolGuid;
extern EFI_GUID gEfiLoadedImageProtocolGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// Definition of PCDs used in this module

#define _PCD_TOKEN_PcdRemapFrameBufferWriteCombine  0U
#define _PCD_SIZE_PcdRemapFrameBufferWriteCombine 1
#define _PCD_GET_MODE_SIZE_PcdRemapFrameBufferWriteCombine  _PCD_SIZE_PcdRemapFrameBufferWriteCombine 
#define _PCD_VALUE_PcdRemapFrameBufferWriteCombine  ((BOOLEAN)0U)
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdRemapFrameBufferWriteCombine;
#define _PCD_GET_MODE_BOOL_PcdRemapFrameBufferWriteCombine  _gPcd_FixedAtBuild_PcdRemapFrameBufferWriteCombine
//#define _PCD_SET_MODE_BOOL_PcdRemapFrameBufferWriteCombine  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdOvmfHostBridgePciDevId  14U
#define _PCD_GET_MODE_16_PcdOvmfHostBridgePciDevId  LibPcdGet16(_PCD_TOKEN_PcdOvmfHostBridgePciDevId)
#define _PCD_GET_MODE_SIZE_PcdOvmfHostBridgePciDevId  LibPcdGetSize(_PCD_TOKEN_PcdOvmfHostBridgePciDevId)
#define _PCD_SET_MODE_16_PcdOvmfHostBridgePciDevId(Value)  LibPcdSet16(_PCD_TOKEN_PcdOvmfHostBridgePciDevId, (Value))
#define _PCD_SET_MODE_16_S_PcdOvmfHostBridgePciDevId(Value)  LibPcdSet16S(_PCD_TOKEN_PcdOvmfHostBridgePciDevId, (Value))

#define _PCD_TOKEN_PcdVideoResolutionSource  52U
#define _PCD_GET_MODE_8_PcdVideoResolutionSource  LibPcdGet8(_PCD_TOKEN_PcdVideoResolutionSource)
#define _PCD_GET_MODE_SIZE_PcdVideoResolutionSource  LibPcdGetSize(_PCD_TOKEN_PcdVideoResolutionSource)
#define _PCD_SET_MODE_8_PcdVideoResolutionSource(Value)  LibPcdSet8(_PCD_TOKEN_PcdVideoResolutionSource, (Value))
#define _PCD_SET_MODE_8_S_PcdVideoResolutionSource(Value)  LibPcdSet8S(_PCD_TOKEN_PcdVideoResolutionSource, (Value))

#define _PCD_TOKEN_PcdNullPointerDetectionPropertyMask  0U
#define _PCD_SIZE_PcdNullPointerDetectionPropertyMask 1
#define _PCD_GET_MODE_SIZE_PcdNullPointerDetectionPropertyMask  _PCD_SIZE_PcdNullPointerDetectionPropertyMask 
#define _PCD_VALUE_PcdNullPointerDetectionPropertyMask  0x0U
extern const  UINT8  _gPcd_FixedAtBuild_PcdNullPointerDetectionPropertyMask;
#define _PCD_GET_MODE_8_PcdNullPointerDetectionPropertyMask  _gPcd_FixedAtBuild_PcdNullPointerDetectionPropertyMask
//#define _PCD_SET_MODE_8_PcdNullPointerDetectionPropertyMask  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdVideoHorizontalResolution  40U
#define _PCD_GET_MODE_32_PcdVideoHorizontalResolution  LibPcdGet32(_PCD_TOKEN_PcdVideoHorizontalResolution)
#define _PCD_GET_MODE_SIZE_PcdVideoHorizontalResolution  LibPcdGetSize(_PCD_TOKEN_PcdVideoHorizontalResolution)
#define _PCD_SET_MODE_32_PcdVideoHorizontalResolution(Value)  LibPcdSet32(_PCD_TOKEN_PcdVideoHorizontalResolution, (Value))
#define _PCD_SET_MODE_32_S_PcdVideoHorizontalResolution(Value)  LibPcdSet32S(_PCD_TOKEN_PcdVideoHorizontalResolution, (Value))

#define _PCD_TOKEN_PcdVideoVerticalResolution  41U
#define _PCD_GET_MODE_32_PcdVideoVerticalResolution  LibPcdGet32(_PCD_TOKEN_PcdVideoVerticalResolution)
#define _PCD_GET_MODE_SIZE_PcdVideoVerticalResolution  LibPcdGetSize(_PCD_TOKEN_PcdVideoVerticalResolution)
#define _PCD_SET_MODE_32_PcdVideoVerticalResolution(Value)  LibPcdSet32(_PCD_TOKEN_PcdVideoVerticalResolution, (Value))
#define _PCD_SET_MODE_32_S_PcdVideoVerticalResolution(Value)  LibPcdSet32S(_PCD_TOKEN_PcdVideoVerticalResolution, (Value))

// Definition of PCDs used in libraries is in AutoGen.c


EFI_STATUS
EFIAPI
InitializeQemuVideo (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );





#ifdef __cplusplus
}
#endif

#endif
