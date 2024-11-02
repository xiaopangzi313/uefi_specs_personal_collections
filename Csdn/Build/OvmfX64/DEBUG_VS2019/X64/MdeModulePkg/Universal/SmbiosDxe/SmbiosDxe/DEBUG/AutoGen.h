/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_F9D88642_0737_49bc_81B5_6889CD57D9EA
#define _AUTOGENH_F9D88642_0737_49bc_81B5_6889CD57D9EA

#ifdef __cplusplus
extern "C" {
#endif

#include <PiDxe.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern GUID  gEdkiiDscPlatformGuid;
extern CHAR8 *gEfiCallerBaseName;

#define EFI_CALLER_ID_GUID \
  {0xF9D88642, 0x0737, 0x49bc, {0x81, 0xB5, 0x68, 0x89, 0xCD, 0x57, 0xD9, 0xEA}}
#define EDKII_DSC_PLATFORM_GUID \
  {0x5a9e7754, 0xd81b, 0x49ea, {0x85, 0xad, 0x69, 0xea, 0xa7, 0xb1, 0x53, 0x9b}}

// Guids
extern EFI_GUID gEfiSmbiosTableGuid;
extern EFI_GUID gEfiSmbios3TableGuid;
extern EFI_GUID gUniversalPayloadSmbios3TableGuid;
extern EFI_GUID gUniversalPayloadSmbiosTableGuid;
extern EFI_GUID gEfiMdeModulePkgTokenSpaceGuid;
extern EFI_GUID gUefiCpuPkgTokenSpaceGuid;
extern EFI_GUID gUefiOvmfPkgTokenSpaceGuid;
extern EFI_GUID gEfiMdePkgTokenSpaceGuid;
extern EFI_GUID gEfiEventReadyToBootGuid;
extern EFI_GUID gEfiEventAfterReadyToBootGuid;
extern EFI_GUID gEfiEventLegacyBootGuid;
extern EFI_GUID gEfiGlobalVariableGuid;
extern EFI_GUID gEfiAcpi20TableGuid;
extern EFI_GUID gEfiAcpi10TableGuid;
extern EFI_GUID gEfiHobListGuid;
extern EFI_GUID gUefiOvmfPkgPlatformInfoGuid;

// Protocols
extern EFI_GUID gEfiSmbiosProtocolGuid;
extern EFI_GUID gPcdProtocolGuid;
extern EFI_GUID gEfiPcdProtocolGuid;
extern EFI_GUID gGetPcdInfoProtocolGuid;
extern EFI_GUID gEfiGetPcdInfoProtocolGuid;
extern EFI_GUID gEfiDevicePathProtocolGuid;
extern EFI_GUID gEfiDevicePathUtilitiesProtocolGuid;
extern EFI_GUID gEfiDevicePathToTextProtocolGuid;
extern EFI_GUID gEfiDevicePathFromTextProtocolGuid;
extern EFI_GUID gEfiDriverBindingProtocolGuid;
extern EFI_GUID gEfiSimpleTextOutProtocolGuid;
extern EFI_GUID gEfiGraphicsOutputProtocolGuid;
extern EFI_GUID gEfiHiiFontProtocolGuid;
extern EFI_GUID gEfiSimpleFileSystemProtocolGuid;
extern EFI_GUID gEfiUgaDrawProtocolGuid;
extern EFI_GUID gEfiComponentNameProtocolGuid;
extern EFI_GUID gEfiComponentName2ProtocolGuid;
extern EFI_GUID gEfiDriverConfigurationProtocolGuid;
extern EFI_GUID gEfiDriverConfiguration2ProtocolGuid;
extern EFI_GUID gEfiDriverDiagnosticsProtocolGuid;
extern EFI_GUID gEfiDriverDiagnostics2ProtocolGuid;
extern EFI_GUID gEdkiiMemoryAcceptProtocolGuid;
extern EFI_GUID gEdkiiIoMmuProtocolGuid;
extern EFI_GUID gEfiLoadedImageProtocolGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// Definition of PCDs used in this module

#define _PCD_TOKEN_PcdSmbiosVersion  38U
#define _PCD_GET_MODE_16_PcdSmbiosVersion  LibPcdGet16(_PCD_TOKEN_PcdSmbiosVersion)
#define _PCD_GET_MODE_SIZE_PcdSmbiosVersion  LibPcdGetSize(_PCD_TOKEN_PcdSmbiosVersion)
#define _PCD_SET_MODE_16_PcdSmbiosVersion(Value)  LibPcdSet16(_PCD_TOKEN_PcdSmbiosVersion, (Value))
#define _PCD_SET_MODE_16_S_PcdSmbiosVersion(Value)  LibPcdSet16S(_PCD_TOKEN_PcdSmbiosVersion, (Value))

#define _PCD_TOKEN_PcdSmbiosDocRev  37U
#define _PCD_GET_MODE_8_PcdSmbiosDocRev  LibPcdGet8(_PCD_TOKEN_PcdSmbiosDocRev)
#define _PCD_GET_MODE_SIZE_PcdSmbiosDocRev  LibPcdGetSize(_PCD_TOKEN_PcdSmbiosDocRev)
#define _PCD_SET_MODE_8_PcdSmbiosDocRev(Value)  LibPcdSet8(_PCD_TOKEN_PcdSmbiosDocRev, (Value))
#define _PCD_SET_MODE_8_S_PcdSmbiosDocRev(Value)  LibPcdSet8S(_PCD_TOKEN_PcdSmbiosDocRev, (Value))

#define _PCD_TOKEN_PcdSmbiosEntryPointProvideMethod  0U
#define _PCD_SIZE_PcdSmbiosEntryPointProvideMethod 4
#define _PCD_GET_MODE_SIZE_PcdSmbiosEntryPointProvideMethod  _PCD_SIZE_PcdSmbiosEntryPointProvideMethod 
#define _PCD_VALUE_PcdSmbiosEntryPointProvideMethod  0x3U
extern const  UINT32  _gPcd_FixedAtBuild_PcdSmbiosEntryPointProvideMethod;
#define _PCD_GET_MODE_32_PcdSmbiosEntryPointProvideMethod  _gPcd_FixedAtBuild_PcdSmbiosEntryPointProvideMethod
//#define _PCD_SET_MODE_32_PcdSmbiosEntryPointProvideMethod  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

// Definition of PCDs used in libraries is in AutoGen.c


EFI_STATUS
EFIAPI
SmbiosDriverEntryPoint (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );





#ifdef __cplusplus
}
#endif

#endif
