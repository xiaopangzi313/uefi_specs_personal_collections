/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_CCCB0C28_4B24_11d5_9A5A_0090273FC14D
#define _AUTOGENH_CCCB0C28_4B24_11d5_9A5A_0090273FC14D

#ifdef __cplusplus
extern "C" {
#endif

#include <Uefi.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern GUID  gEdkiiDscPlatformGuid;
extern CHAR8 *gEfiCallerBaseName;

#define EFI_CALLER_ID_GUID \
  {0xCCCB0C28, 0x4B24, 0x11d5, {0x9A, 0x5A, 0x00, 0x90, 0x27, 0x3F, 0xC1, 0x4D}}
#define EDKII_DSC_PLATFORM_GUID \
  {0x5a9e7754, 0xd81b, 0x49ea, {0x85, 0xad, 0x69, 0xea, 0xa7, 0xb1, 0x53, 0x9b}}

// Guids
extern EFI_GUID gEfiMdePkgTokenSpaceGuid;
extern EFI_GUID gEfiMdeModulePkgTokenSpaceGuid;
extern EFI_GUID gUefiOvmfPkgTokenSpaceGuid;
extern EFI_GUID gEfiEventReadyToBootGuid;
extern EFI_GUID gEfiEventAfterReadyToBootGuid;
extern EFI_GUID gEfiEventLegacyBootGuid;
extern EFI_GUID gEfiGlobalVariableGuid;
extern EFI_GUID gEfiAcpi20TableGuid;
extern EFI_GUID gEfiAcpi10TableGuid;
extern EFI_GUID gEdkiiIfrBitVarstoreGuid;

// Protocols
extern EFI_GUID gEfiDevicePathProtocolGuid;
extern EFI_GUID gEfiSimpleTextOutProtocolGuid;
extern EFI_GUID gEfiGraphicsOutputProtocolGuid;
extern EFI_GUID gEfiUgaDrawProtocolGuid;
extern EFI_GUID gEfiHiiFontProtocolGuid;
extern EFI_GUID gEfiHiiDatabaseProtocolGuid;
extern EFI_GUID gPcdProtocolGuid;
extern EFI_GUID gEfiPcdProtocolGuid;
extern EFI_GUID gGetPcdInfoProtocolGuid;
extern EFI_GUID gEfiGetPcdInfoProtocolGuid;
extern EFI_GUID gEfiDevicePathUtilitiesProtocolGuid;
extern EFI_GUID gEfiDevicePathToTextProtocolGuid;
extern EFI_GUID gEfiDevicePathFromTextProtocolGuid;
extern EFI_GUID gEfiHiiStringProtocolGuid;
extern EFI_GUID gEfiHiiImageProtocolGuid;
extern EFI_GUID gEfiHiiConfigRoutingProtocolGuid;
extern EFI_GUID gEfiDriverBindingProtocolGuid;
extern EFI_GUID gEfiSimpleFileSystemProtocolGuid;
extern EFI_GUID gEfiComponentNameProtocolGuid;
extern EFI_GUID gEfiComponentName2ProtocolGuid;
extern EFI_GUID gEfiDriverConfigurationProtocolGuid;
extern EFI_GUID gEfiDriverConfiguration2ProtocolGuid;
extern EFI_GUID gEfiDriverDiagnosticsProtocolGuid;
extern EFI_GUID gEfiDriverDiagnostics2ProtocolGuid;
extern EFI_GUID gEfiLoadedImageProtocolGuid;
extern EFI_GUID gEfiFormBrowser2ProtocolGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// Definition of PCDs used in this module

#define _PCD_TOKEN_PcdUgaConsumeSupport  0U
#define _PCD_SIZE_PcdUgaConsumeSupport 1
#define _PCD_GET_MODE_SIZE_PcdUgaConsumeSupport  _PCD_SIZE_PcdUgaConsumeSupport 
#define _PCD_VALUE_PcdUgaConsumeSupport  ((BOOLEAN)1U)
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdUgaConsumeSupport;
#define _PCD_GET_MODE_BOOL_PcdUgaConsumeSupport  _gPcd_FixedAtBuild_PcdUgaConsumeSupport
//#define _PCD_SET_MODE_BOOL_PcdUgaConsumeSupport  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

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

#define _PCD_TOKEN_PcdConOutRow  27U
#define _PCD_GET_MODE_32_PcdConOutRow  LibPcdGet32(_PCD_TOKEN_PcdConOutRow)
#define _PCD_GET_MODE_SIZE_PcdConOutRow  LibPcdGetSize(_PCD_TOKEN_PcdConOutRow)
#define _PCD_SET_MODE_32_PcdConOutRow(Value)  LibPcdSet32(_PCD_TOKEN_PcdConOutRow, (Value))
#define _PCD_SET_MODE_32_S_PcdConOutRow(Value)  LibPcdSet32S(_PCD_TOKEN_PcdConOutRow, (Value))

#define _PCD_TOKEN_PcdConOutColumn  26U
#define _PCD_GET_MODE_32_PcdConOutColumn  LibPcdGet32(_PCD_TOKEN_PcdConOutColumn)
#define _PCD_GET_MODE_SIZE_PcdConOutColumn  LibPcdGetSize(_PCD_TOKEN_PcdConOutColumn)
#define _PCD_SET_MODE_32_PcdConOutColumn(Value)  LibPcdSet32(_PCD_TOKEN_PcdConOutColumn, (Value))
#define _PCD_SET_MODE_32_S_PcdConOutColumn(Value)  LibPcdSet32S(_PCD_TOKEN_PcdConOutColumn, (Value))

// Definition of PCDs used in libraries is in AutoGen.c


EFI_STATUS
EFIAPI
InitializeGraphicsConsole (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );





#ifdef __cplusplus
}
#endif

#endif
