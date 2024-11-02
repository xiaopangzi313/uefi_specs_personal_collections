/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_69A6DE6D_FA9F_485D_3A3D_EA70FDCFC82F
#define _AUTOGENH_69A6DE6D_FA9F_485D_3A3D_EA70FDCFC82F

#ifdef __cplusplus
extern "C" {
#endif

#include <Uefi.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern GUID  gEdkiiDscPlatformGuid;
extern CHAR8 *gEfiCallerBaseName;

#define EFI_CALLER_ID_GUID \
  {0x69A6DE6D, 0xFA9F, 0x485D, {0x3A, 0x3D, 0xEA, 0x70, 0xFD, 0xCF, 0xC8, 0x2F}}
#define EDKII_DSC_PLATFORM_GUID \
  {0x5a9e7754, 0xd81b, 0x49ea, {0x85, 0xad, 0x69, 0xea, 0xa7, 0xb1, 0x53, 0x9b}}

// Guids
extern EFI_GUID gEfiMdeModulePkgTokenSpaceGuid;
extern EFI_GUID gEfiMdePkgTokenSpaceGuid;
extern EFI_GUID gUefiOvmfPkgTokenSpaceGuid;
extern EFI_GUID gEfiEventReadyToBootGuid;
extern EFI_GUID gEfiEventAfterReadyToBootGuid;
extern EFI_GUID gEfiEventLegacyBootGuid;
extern EFI_GUID gEfiGlobalVariableGuid;
extern EFI_GUID gEfiAcpi20TableGuid;
extern EFI_GUID gEfiAcpi10TableGuid;

// Protocols
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

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// Definition of PCDs used in this module

#define _PCD_TOKEN_PcdMyHelloWorldPrintEnable  0U
#define _PCD_SIZE_PcdMyHelloWorldPrintEnable 1
#define _PCD_GET_MODE_SIZE_PcdMyHelloWorldPrintEnable  _PCD_SIZE_PcdMyHelloWorldPrintEnable 
#define _PCD_VALUE_PcdMyHelloWorldPrintEnable  ((BOOLEAN)1U)
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdMyHelloWorldPrintEnable;
#define _PCD_GET_MODE_BOOL_PcdMyHelloWorldPrintEnable  _gPcd_FixedAtBuild_PcdMyHelloWorldPrintEnable
//#define _PCD_SET_MODE_BOOL_PcdMyHelloWorldPrintEnable  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdMyHelloWorldPrintString  0U
#define _PCD_VALUE_PcdMyHelloWorldPrintString  _gPcd_FixedAtBuild_PcdMyHelloWorldPrintString
extern const UINT16 _gPcd_FixedAtBuild_PcdMyHelloWorldPrintString[20];
#define _PCD_GET_MODE_PTR_PcdMyHelloWorldPrintString  _gPcd_FixedAtBuild_PcdMyHelloWorldPrintString
#define _PCD_SIZE_PcdMyHelloWorldPrintString 40
#define _PCD_GET_MODE_SIZE_PcdMyHelloWorldPrintString  _PCD_SIZE_PcdMyHelloWorldPrintString 
//#define _PCD_SET_MODE_PTR_PcdMyHelloWorldPrintString  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdMyHelloWorldPrintTimes  0U
#define _PCD_SIZE_PcdMyHelloWorldPrintTimes 4
#define _PCD_GET_MODE_SIZE_PcdMyHelloWorldPrintTimes  _PCD_SIZE_PcdMyHelloWorldPrintTimes 
#define _PCD_VALUE_PcdMyHelloWorldPrintTimes  10U
extern const  UINT32  _gPcd_FixedAtBuild_PcdMyHelloWorldPrintTimes;
#define _PCD_GET_MODE_32_PcdMyHelloWorldPrintTimes  _gPcd_FixedAtBuild_PcdMyHelloWorldPrintTimes
//#define _PCD_SET_MODE_32_PcdMyHelloWorldPrintTimes  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

// Definition of PCDs used in libraries is in AutoGen.c


EFI_STATUS
EFIAPI
MyHelloWorldPCDEntry (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );





#ifdef __cplusplus
}
#endif

#endif
