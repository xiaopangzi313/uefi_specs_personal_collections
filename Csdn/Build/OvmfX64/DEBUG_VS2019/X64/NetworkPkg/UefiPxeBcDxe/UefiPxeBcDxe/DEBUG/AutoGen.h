/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_B95E9FDA_26DE_48d2_8807_1F9107AC5E3A
#define _AUTOGENH_B95E9FDA_26DE_48d2_8807_1F9107AC5E3A

#ifdef __cplusplus
extern "C" {
#endif

#include <Uefi.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern GUID  gEdkiiDscPlatformGuid;
extern CHAR8 *gEfiCallerBaseName;

#define EFI_CALLER_ID_GUID \
  {0xB95E9FDA, 0x26DE, 0x48d2, {0x88, 0x07, 0x1F, 0x91, 0x07, 0xAC, 0x5E, 0x3A}}
#define EDKII_DSC_PLATFORM_GUID \
  {0x5a9e7754, 0xd81b, 0x49ea, {0x85, 0xad, 0x69, 0xea, 0xa7, 0xb1, 0x53, 0x9b}}

// Guids
extern EFI_GUID gEfiAdapterInfoUndiIpv6SupportGuid;
extern EFI_GUID gEfiNetworkPkgTokenSpaceGuid;
extern EFI_GUID gUefiCpuPkgTokenSpaceGuid;
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
extern EFI_GUID gUefiOvmfPkgPlatformInfoGuid;
extern EFI_GUID gEfiSmbiosTableGuid;
extern EFI_GUID gEfiSmbios3TableGuid;
extern EFI_GUID gEfiAdapterInfoMediaStateGuid;
extern EFI_GUID gEfiRngAlgorithmRaw;
extern EFI_GUID gEfiRngAlgorithmSp80090Ctr256Guid;
extern EFI_GUID gEfiRngAlgorithmSp80090Hmac256Guid;
extern EFI_GUID gEfiRngAlgorithmSp80090Hash256Guid;
extern EFI_GUID gEfiRngAlgorithmArmRndr;

// Protocols
extern EFI_GUID gEfiDevicePathProtocolGuid;
extern EFI_GUID gEfiNetworkInterfaceIdentifierProtocolGuid_31;
extern EFI_GUID gEfiArpServiceBindingProtocolGuid;
extern EFI_GUID gEfiArpProtocolGuid;
extern EFI_GUID gEfiIp4ServiceBindingProtocolGuid;
extern EFI_GUID gEfiIp4ProtocolGuid;
extern EFI_GUID gEfiIp4Config2ProtocolGuid;
extern EFI_GUID gEfiIp6ServiceBindingProtocolGuid;
extern EFI_GUID gEfiIp6ProtocolGuid;
extern EFI_GUID gEfiIp6ConfigProtocolGuid;
extern EFI_GUID gEfiUdp4ServiceBindingProtocolGuid;
extern EFI_GUID gEfiUdp4ProtocolGuid;
extern EFI_GUID gEfiMtftp4ServiceBindingProtocolGuid;
extern EFI_GUID gEfiMtftp4ProtocolGuid;
extern EFI_GUID gEfiDhcp4ServiceBindingProtocolGuid;
extern EFI_GUID gEfiDhcp4ProtocolGuid;
extern EFI_GUID gEfiUdp6ServiceBindingProtocolGuid;
extern EFI_GUID gEfiUdp6ProtocolGuid;
extern EFI_GUID gEfiMtftp6ServiceBindingProtocolGuid;
extern EFI_GUID gEfiMtftp6ProtocolGuid;
extern EFI_GUID gEfiDhcp6ServiceBindingProtocolGuid;
extern EFI_GUID gEfiDhcp6ProtocolGuid;
extern EFI_GUID gEfiDns6ServiceBindingProtocolGuid;
extern EFI_GUID gEfiDns6ProtocolGuid;
extern EFI_GUID gEfiPxeBaseCodeCallbackProtocolGuid;
extern EFI_GUID gEfiPxeBaseCodeProtocolGuid;
extern EFI_GUID gEfiLoadFileProtocolGuid;
extern EFI_GUID gEfiAdapterInformationProtocolGuid;
extern EFI_GUID gPcdProtocolGuid;
extern EFI_GUID gEfiPcdProtocolGuid;
extern EFI_GUID gGetPcdInfoProtocolGuid;
extern EFI_GUID gEfiGetPcdInfoProtocolGuid;
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
extern EFI_GUID gEfiSimpleNetworkProtocolGuid;
extern EFI_GUID gEfiManagedNetworkProtocolGuid;
extern EFI_GUID gEfiManagedNetworkServiceBindingProtocolGuid;
extern EFI_GUID gEfiRngProtocolGuid;
extern EFI_GUID gEfiDpcProtocolGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// Definition of PCDs used in this module

#define _PCD_TOKEN_PcdTftpBlockSize  0U
#define _PCD_SIZE_PcdTftpBlockSize 8
#define _PCD_GET_MODE_SIZE_PcdTftpBlockSize  _PCD_SIZE_PcdTftpBlockSize 
#define _PCD_VALUE_PcdTftpBlockSize  0x0ULL
extern const  UINT64  _gPcd_FixedAtBuild_PcdTftpBlockSize;
#define _PCD_GET_MODE_64_PcdTftpBlockSize  _gPcd_FixedAtBuild_PcdTftpBlockSize
//#define _PCD_SET_MODE_64_PcdTftpBlockSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdPxeTftpWindowSize  0U
#define _PCD_SIZE_PcdPxeTftpWindowSize 8
#define _PCD_GET_MODE_SIZE_PcdPxeTftpWindowSize  _PCD_SIZE_PcdPxeTftpWindowSize 
#define _PCD_VALUE_PcdPxeTftpWindowSize  0x4ULL
extern const  UINT64  _gPcd_FixedAtBuild_PcdPxeTftpWindowSize;
#define _PCD_GET_MODE_64_PcdPxeTftpWindowSize  _gPcd_FixedAtBuild_PcdPxeTftpWindowSize
//#define _PCD_SET_MODE_64_PcdPxeTftpWindowSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdIPv4PXESupport  44U
#define _PCD_GET_MODE_8_PcdIPv4PXESupport  LibPcdGet8(_PCD_TOKEN_PcdIPv4PXESupport)
#define _PCD_GET_MODE_SIZE_PcdIPv4PXESupport  LibPcdGetSize(_PCD_TOKEN_PcdIPv4PXESupport)
#define _PCD_SET_MODE_8_PcdIPv4PXESupport(Value)  LibPcdSet8(_PCD_TOKEN_PcdIPv4PXESupport, (Value))
#define _PCD_SET_MODE_8_S_PcdIPv4PXESupport(Value)  LibPcdSet8S(_PCD_TOKEN_PcdIPv4PXESupport, (Value))

#define _PCD_TOKEN_PcdIPv6PXESupport  45U
#define _PCD_GET_MODE_8_PcdIPv6PXESupport  LibPcdGet8(_PCD_TOKEN_PcdIPv6PXESupport)
#define _PCD_GET_MODE_SIZE_PcdIPv6PXESupport  LibPcdGetSize(_PCD_TOKEN_PcdIPv6PXESupport)
#define _PCD_SET_MODE_8_PcdIPv6PXESupport(Value)  LibPcdSet8(_PCD_TOKEN_PcdIPv6PXESupport, (Value))
#define _PCD_SET_MODE_8_S_PcdIPv6PXESupport(Value)  LibPcdSet8S(_PCD_TOKEN_PcdIPv6PXESupport, (Value))

// Definition of PCDs used in libraries is in AutoGen.c


EFI_STATUS
EFIAPI
PxeBcDriverEntryPoint (
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
