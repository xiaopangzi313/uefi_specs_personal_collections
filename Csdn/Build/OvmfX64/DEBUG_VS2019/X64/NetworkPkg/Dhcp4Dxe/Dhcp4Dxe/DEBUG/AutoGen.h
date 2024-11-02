/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_94734718_0BBC_47fb_96A5_EE7A5AE6A2AD
#define _AUTOGENH_94734718_0BBC_47fb_96A5_EE7A5AE6A2AD

#ifdef __cplusplus
extern "C" {
#endif

#include <Uefi.h>

extern GUID  gEfiCallerIdGuid;
extern GUID  gEdkiiDscPlatformGuid;
extern CHAR8 *gEfiCallerBaseName;

#define EFI_CALLER_ID_GUID \
  {0x94734718, 0x0BBC, 0x47fb, {0x96, 0xA5, 0xEE, 0x7A, 0x5A, 0xE6, 0xA2, 0xAD}}
#define EDKII_DSC_PLATFORM_GUID \
  {0x5a9e7754, 0xd81b, 0x49ea, {0x85, 0xad, 0x69, 0xea, 0xa7, 0xb1, 0x53, 0x9b}}

// Guids
extern EFI_GUID gEfiMdePkgTokenSpaceGuid;
extern EFI_GUID gUefiOvmfPkgTokenSpaceGuid;
extern EFI_GUID gEfiEventReadyToBootGuid;
extern EFI_GUID gEfiEventAfterReadyToBootGuid;
extern EFI_GUID gEfiEventLegacyBootGuid;
extern EFI_GUID gEfiGlobalVariableGuid;
extern EFI_GUID gEfiAcpi20TableGuid;
extern EFI_GUID gEfiAcpi10TableGuid;
extern EFI_GUID gEfiSmbiosTableGuid;
extern EFI_GUID gEfiSmbios3TableGuid;
extern EFI_GUID gEfiAdapterInfoMediaStateGuid;
extern EFI_GUID gEfiRngAlgorithmRaw;
extern EFI_GUID gEfiRngAlgorithmSp80090Ctr256Guid;
extern EFI_GUID gEfiRngAlgorithmSp80090Hmac256Guid;
extern EFI_GUID gEfiRngAlgorithmSp80090Hash256Guid;
extern EFI_GUID gEfiRngAlgorithmArmRndr;
extern EFI_GUID gEfiNetworkPkgTokenSpaceGuid;

// Protocols
extern EFI_GUID gEfiDhcp4ServiceBindingProtocolGuid;
extern EFI_GUID gEfiUdp4ServiceBindingProtocolGuid;
extern EFI_GUID gEfiDhcp4ProtocolGuid;
extern EFI_GUID gEfiUdp4ProtocolGuid;
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
extern EFI_GUID gEfiDpcProtocolGuid;
extern EFI_GUID gEfiLoadedImageProtocolGuid;
extern EFI_GUID gEfiSimpleNetworkProtocolGuid;
extern EFI_GUID gEfiManagedNetworkProtocolGuid;
extern EFI_GUID gEfiManagedNetworkServiceBindingProtocolGuid;
extern EFI_GUID gEfiIp4Config2ProtocolGuid;
extern EFI_GUID gEfiAdapterInformationProtocolGuid;
extern EFI_GUID gEfiRngProtocolGuid;
extern EFI_GUID gEfiUdp6ServiceBindingProtocolGuid;
extern EFI_GUID gEfiUdp6ProtocolGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// Definition of PCDs used in libraries is in AutoGen.c


EFI_STATUS
EFIAPI
Dhcp4DriverEntryPoint (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );



EFI_STATUS
EFIAPI
NetLibDefaultUnload (
  IN EFI_HANDLE        ImageHandle
  );



#ifdef __cplusplus
}
#endif

#endif
