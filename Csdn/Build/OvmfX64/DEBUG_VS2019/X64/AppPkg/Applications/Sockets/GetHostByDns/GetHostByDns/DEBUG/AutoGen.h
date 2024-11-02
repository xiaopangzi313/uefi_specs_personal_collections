/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_3698D2B0_E727_4537_A636_A8770736ABFB
#define _AUTOGENH_3698D2B0_E727_4537_A636_A8770736ABFB

#ifdef __cplusplus
extern "C" {
#endif

#include <Uefi.h>

extern GUID  gEfiCallerIdGuid;
extern GUID  gEdkiiDscPlatformGuid;
extern CHAR8 *gEfiCallerBaseName;

#define EFI_CALLER_ID_GUID \
  {0x3698D2B0, 0xE727, 0x4537, {0xA6, 0x36, 0xA8, 0x77, 0x07, 0x36, 0xAB, 0xFB}}
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
extern EFI_GUID gEdkiiIfrBitVarstoreGuid;
extern EFI_GUID gEfiFileInfoGuid;
extern EFI_GUID gEfiShellEnvironment2ExtGuid;
extern EFI_GUID gEfiShellPkgTokenSpaceGuid;

// Protocols
extern EFI_GUID gPcdProtocolGuid;
extern EFI_GUID gEfiPcdProtocolGuid;
extern EFI_GUID gGetPcdInfoProtocolGuid;
extern EFI_GUID gEfiGetPcdInfoProtocolGuid;
extern EFI_GUID gEfiShellParametersProtocolGuid;
extern EFI_GUID gEfiShellInterfaceGuid;
extern EFI_GUID gEfiSimpleTextInProtocolGuid;
extern EFI_GUID gEfiSimpleTextOutProtocolGuid;
extern EFI_GUID gEfiDevicePathProtocolGuid;
extern EFI_GUID gEfiDevicePathUtilitiesProtocolGuid;
extern EFI_GUID gEfiDevicePathToTextProtocolGuid;
extern EFI_GUID gEfiDevicePathFromTextProtocolGuid;
extern EFI_GUID gEfiDriverBindingProtocolGuid;
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
extern EFI_GUID gEfiUnicodeCollation2ProtocolGuid;
extern EFI_GUID gEfiFormBrowser2ProtocolGuid;
extern EFI_GUID gEfiShellProtocolGuid;
extern EFI_GUID gEfiShellEnvironment2Guid;
extern EFI_GUID gEfiHiiStringProtocolGuid;
extern EFI_GUID gEfiHiiImageProtocolGuid;
extern EFI_GUID gEfiHiiDatabaseProtocolGuid;
extern EFI_GUID gEfiHiiConfigRoutingProtocolGuid;
extern EFI_GUID gEfiSocketServiceBindingProtocolGuid;
extern EFI_GUID gEfiSocketProtocolGuid;
extern EFI_GUID gEfiIp4Config2ProtocolGuid;
extern EFI_GUID gEfiIp6ConfigProtocolGuid;
extern EFI_GUID gEfiIp4ProtocolGuid;
extern EFI_GUID gEfiIp4ServiceBindingProtocolGuid;
extern EFI_GUID gEfiIp6ProtocolGuid;
extern EFI_GUID gEfiIp6ServiceBindingProtocolGuid;
extern EFI_GUID gEfiTcp4ProtocolGuid;
extern EFI_GUID gEfiTcp4ServiceBindingProtocolGuid;
extern EFI_GUID gEfiTcp6ProtocolGuid;
extern EFI_GUID gEfiTcp6ServiceBindingProtocolGuid;
extern EFI_GUID gEfiUdp4ProtocolGuid;
extern EFI_GUID gEfiUdp4ServiceBindingProtocolGuid;
extern EFI_GUID gEfiUdp6ProtocolGuid;
extern EFI_GUID gEfiUdp6ServiceBindingProtocolGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// Definition of PCDs used in libraries is in AutoGen.c


EFI_STATUS
EFIAPI
ShellCEntryLib (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );





#ifdef __cplusplus
}
#endif

#endif
