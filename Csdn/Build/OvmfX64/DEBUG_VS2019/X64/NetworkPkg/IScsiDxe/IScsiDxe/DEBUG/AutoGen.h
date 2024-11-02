/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_86CDDF93_4872_4597_8AF9_A35AE4D3725F
#define _AUTOGENH_86CDDF93_4872_4597_8AF9_A35AE4D3725F

#ifdef __cplusplus
extern "C" {
#endif

#include <Uefi.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern GUID  gEdkiiDscPlatformGuid;
extern CHAR8 *gEfiCallerBaseName;

#define EFI_CALLER_ID_GUID \
  {0x86CDDF93, 0x4872, 0x4597, {0x8A, 0xF9, 0xA3, 0x5A, 0xE4, 0xD3, 0x72, 0x5F}}
#define EDKII_DSC_PLATFORM_GUID \
  {0x5a9e7754, 0xd81b, 0x49ea, {0x85, 0xad, 0x69, 0xea, 0xa7, 0xb1, 0x53, 0x9b}}

// Guids
extern EFI_GUID gEfiEventExitBootServicesGuid;
extern EFI_GUID gEfiIfrTianoGuid;
extern EFI_GUID gEfiAcpiTableGuid;
extern EFI_GUID gEfiAcpi10TableGuid;
extern EFI_GUID gEfiAdapterInfoNetworkBootGuid;
extern EFI_GUID gEfiAdapterInfoUndiIpv6SupportGuid;
extern EFI_GUID gIScsiConfigGuid;
extern EFI_GUID gEfiNetworkPkgTokenSpaceGuid;
extern EFI_GUID gEfiMdePkgTokenSpaceGuid;
extern EFI_GUID gUefiOvmfPkgTokenSpaceGuid;
extern EFI_GUID gEfiEventReadyToBootGuid;
extern EFI_GUID gEfiEventAfterReadyToBootGuid;
extern EFI_GUID gEfiEventLegacyBootGuid;
extern EFI_GUID gEfiGlobalVariableGuid;
extern EFI_GUID gEfiAcpi20TableGuid;
extern EFI_GUID gEfiHobListGuid;
extern EFI_GUID gUefiOvmfPkgPlatformInfoGuid;
extern EFI_GUID gEdkiiRngAlgorithmUnSafe;
extern EFI_GUID gEdkiiIfrBitVarstoreGuid;
extern EFI_GUID gEfiSmbiosTableGuid;
extern EFI_GUID gEfiSmbios3TableGuid;
extern EFI_GUID gEfiAdapterInfoMediaStateGuid;
extern EFI_GUID gEfiRngAlgorithmRaw;
extern EFI_GUID gEfiRngAlgorithmSp80090Ctr256Guid;
extern EFI_GUID gEfiRngAlgorithmSp80090Hmac256Guid;
extern EFI_GUID gEfiRngAlgorithmSp80090Hash256Guid;
extern EFI_GUID gEfiRngAlgorithmArmRndr;

// Protocols
extern EFI_GUID gEfiAcpiTableProtocolGuid;
extern EFI_GUID gEfiDriverBindingProtocolGuid;
extern EFI_GUID gEfiPciIoProtocolGuid;
extern EFI_GUID gEfiDhcp4ProtocolGuid;
extern EFI_GUID gEfiDhcp6ProtocolGuid;
extern EFI_GUID gEfiDhcp4ServiceBindingProtocolGuid;
extern EFI_GUID gEfiDhcp6ServiceBindingProtocolGuid;
extern EFI_GUID gEfiDns4ServiceBindingProtocolGuid;
extern EFI_GUID gEfiDns4ProtocolGuid;
extern EFI_GUID gEfiDns6ServiceBindingProtocolGuid;
extern EFI_GUID gEfiDns6ProtocolGuid;
extern EFI_GUID gEfiIp4Config2ProtocolGuid;
extern EFI_GUID gEfiIp6ConfigProtocolGuid;
extern EFI_GUID gEfiTcp4ProtocolGuid;
extern EFI_GUID gEfiTcp6ProtocolGuid;
extern EFI_GUID gEfiTcp4ServiceBindingProtocolGuid;
extern EFI_GUID gEfiTcp6ServiceBindingProtocolGuid;
extern EFI_GUID gEfiExtScsiPassThruProtocolGuid;
extern EFI_GUID gEfiHiiConfigAccessProtocolGuid;
extern EFI_GUID gEfiDevicePathProtocolGuid;
extern EFI_GUID gEfiIScsiInitiatorNameProtocolGuid;
extern EFI_GUID gEfiAuthenticationInfoProtocolGuid;
extern EFI_GUID gEfiAdapterInformationProtocolGuid;
extern EFI_GUID gEfiNetworkInterfaceIdentifierProtocolGuid_31;
extern EFI_GUID gPcdProtocolGuid;
extern EFI_GUID gEfiPcdProtocolGuid;
extern EFI_GUID gGetPcdInfoProtocolGuid;
extern EFI_GUID gEfiGetPcdInfoProtocolGuid;
extern EFI_GUID gEfiDevicePathUtilitiesProtocolGuid;
extern EFI_GUID gEfiDevicePathToTextProtocolGuid;
extern EFI_GUID gEfiDevicePathFromTextProtocolGuid;
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
extern EFI_GUID gEfiHiiStringProtocolGuid;
extern EFI_GUID gEfiHiiImageProtocolGuid;
extern EFI_GUID gEfiHiiDatabaseProtocolGuid;
extern EFI_GUID gEfiHiiConfigRoutingProtocolGuid;
extern EFI_GUID gEfiMpServiceProtocolGuid;
extern EFI_GUID gEfiFormBrowser2ProtocolGuid;
extern EFI_GUID gEfiSimpleNetworkProtocolGuid;
extern EFI_GUID gEfiManagedNetworkProtocolGuid;
extern EFI_GUID gEfiManagedNetworkServiceBindingProtocolGuid;
extern EFI_GUID gEfiRngProtocolGuid;
extern EFI_GUID gEfiLoadedImageProtocolGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// Definition of PCDs used in this module

#define _PCD_TOKEN_PcdIScsiAIPNetworkBootPolicy  0U
#define _PCD_SIZE_PcdIScsiAIPNetworkBootPolicy 1
#define _PCD_GET_MODE_SIZE_PcdIScsiAIPNetworkBootPolicy  _PCD_SIZE_PcdIScsiAIPNetworkBootPolicy 
#define _PCD_VALUE_PcdIScsiAIPNetworkBootPolicy  0x08U
extern const  UINT8  _gPcd_FixedAtBuild_PcdIScsiAIPNetworkBootPolicy;
#define _PCD_GET_MODE_8_PcdIScsiAIPNetworkBootPolicy  _gPcd_FixedAtBuild_PcdIScsiAIPNetworkBootPolicy
//#define _PCD_SET_MODE_8_PcdIScsiAIPNetworkBootPolicy  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdMaxIScsiAttemptNumber  0U
#define _PCD_SIZE_PcdMaxIScsiAttemptNumber 1
#define _PCD_GET_MODE_SIZE_PcdMaxIScsiAttemptNumber  _PCD_SIZE_PcdMaxIScsiAttemptNumber 
#define _PCD_VALUE_PcdMaxIScsiAttemptNumber  0x08U
extern const  UINT8  _gPcd_FixedAtBuild_PcdMaxIScsiAttemptNumber;
#define _PCD_GET_MODE_8_PcdMaxIScsiAttemptNumber  _gPcd_FixedAtBuild_PcdMaxIScsiAttemptNumber
//#define _PCD_SET_MODE_8_PcdMaxIScsiAttemptNumber  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

// Definition of PCDs used in libraries is in AutoGen.c


EFI_STATUS
EFIAPI
IScsiDriverEntryPoint (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );



EFI_STATUS
EFIAPI
IScsiUnload (
  IN EFI_HANDLE        ImageHandle
  );

#include "IScsiDxeStrDefs.h"


#ifdef __cplusplus
}
#endif

#endif
