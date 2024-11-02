/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_D6099B94_CD97_4CC5_8714_7F6312701A8A
#define _AUTOGENH_D6099B94_CD97_4CC5_8714_7F6312701A8A

#ifdef __cplusplus
extern "C" {
#endif

#include <Uefi.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern GUID  gEdkiiDscPlatformGuid;
extern CHAR8 *gEfiCallerBaseName;

#define EFI_CALLER_ID_GUID \
  {0xD6099B94, 0xCD97, 0x4CC5, {0x87, 0x14, 0x7F, 0x63, 0x12, 0x70, 0x1A, 0x8A}}
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

// Protocols
extern EFI_GUID gEfiDevicePathProtocolGuid;
extern EFI_GUID gEfiGraphicsOutputProtocolGuid;
extern EFI_GUID gEfiPciIoProtocolGuid;
extern EFI_GUID gVirtioDeviceProtocolGuid;
extern EFI_GUID gPcdProtocolGuid;
extern EFI_GUID gEfiPcdProtocolGuid;
extern EFI_GUID gGetPcdInfoProtocolGuid;
extern EFI_GUID gEfiGetPcdInfoProtocolGuid;
extern EFI_GUID gEfiDevicePathUtilitiesProtocolGuid;
extern EFI_GUID gEfiDevicePathToTextProtocolGuid;
extern EFI_GUID gEfiDevicePathFromTextProtocolGuid;
extern EFI_GUID gEfiLoadedImageProtocolGuid;
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

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// Definition of PCDs used in this module

#define _PCD_TOKEN_PcdVideoResolutionSource  52U
#define _PCD_GET_MODE_8_PcdVideoResolutionSource  LibPcdGet8(_PCD_TOKEN_PcdVideoResolutionSource)
#define _PCD_GET_MODE_SIZE_PcdVideoResolutionSource  LibPcdGetSize(_PCD_TOKEN_PcdVideoResolutionSource)
#define _PCD_SET_MODE_8_PcdVideoResolutionSource(Value)  LibPcdSet8(_PCD_TOKEN_PcdVideoResolutionSource, (Value))
#define _PCD_SET_MODE_8_S_PcdVideoResolutionSource(Value)  LibPcdSet8S(_PCD_TOKEN_PcdVideoResolutionSource, (Value))

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
VirtioGpuEntryPoint (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );





#ifdef __cplusplus
}
#endif

#endif
