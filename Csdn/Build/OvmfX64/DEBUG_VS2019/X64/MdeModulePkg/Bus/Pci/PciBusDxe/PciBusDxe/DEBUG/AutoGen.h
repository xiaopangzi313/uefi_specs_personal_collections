/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_93B80004_9FB3_11d4_9A3A_0090273FC14D
#define _AUTOGENH_93B80004_9FB3_11d4_9A3A_0090273FC14D

#ifdef __cplusplus
extern "C" {
#endif

#include <Uefi.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern GUID  gEdkiiDscPlatformGuid;
extern CHAR8 *gEfiCallerBaseName;

#define EFI_CALLER_ID_GUID \
  {0x93B80004, 0x9FB3, 0x11d4, {0x9A, 0x3A, 0x00, 0x90, 0x27, 0x3F, 0xC1, 0x4D}}
#define EDKII_DSC_PLATFORM_GUID \
  {0x5a9e7754, 0xd81b, 0x49ea, {0x85, 0xad, 0x69, 0xea, 0xa7, 0xb1, 0x53, 0x9b}}

// Guids
extern EFI_GUID gEfiMdeModulePkgTokenSpaceGuid;
extern EFI_GUID gEfiMdePkgTokenSpaceGuid;
extern EFI_GUID gUefiOvmfPkgTokenSpaceGuid;
extern EFI_GUID gEfiStatusCodeSpecificDataGuid;
extern EFI_GUID gEfiStatusCodeDataTypeDebugGuid;
extern EFI_GUID gEfiEventReadyToBootGuid;
extern EFI_GUID gEfiEventAfterReadyToBootGuid;
extern EFI_GUID gEfiEventLegacyBootGuid;
extern EFI_GUID gEfiGlobalVariableGuid;
extern EFI_GUID gEfiAcpi20TableGuid;
extern EFI_GUID gEfiAcpi10TableGuid;

// Protocols
extern EFI_GUID gEfiPciHotPlugRequestProtocolGuid;
extern EFI_GUID gEfiPciIoProtocolGuid;
extern EFI_GUID gEfiDevicePathProtocolGuid;
extern EFI_GUID gEfiBusSpecificDriverOverrideProtocolGuid;
extern EFI_GUID gEfiLoadedImageProtocolGuid;
extern EFI_GUID gEfiDecompressProtocolGuid;
extern EFI_GUID gEfiPciHotPlugInitProtocolGuid;
extern EFI_GUID gEfiPciHostBridgeResourceAllocationProtocolGuid;
extern EFI_GUID gEfiPciPlatformProtocolGuid;
extern EFI_GUID gEfiPciOverrideProtocolGuid;
extern EFI_GUID gEfiPciEnumerationCompleteProtocolGuid;
extern EFI_GUID gEfiPciRootBridgeIoProtocolGuid;
extern EFI_GUID gEfiIncompatiblePciDeviceSupportProtocolGuid;
extern EFI_GUID gEfiLoadFile2ProtocolGuid;
extern EFI_GUID gEdkiiIoMmuProtocolGuid;
extern EFI_GUID gEdkiiDeviceSecurityProtocolGuid;
extern EFI_GUID gEdkiiDeviceIdentifierTypePciGuid;
extern EFI_GUID gEfiLoadedImageDevicePathProtocolGuid;
extern EFI_GUID gPcdProtocolGuid;
extern EFI_GUID gEfiPcdProtocolGuid;
extern EFI_GUID gGetPcdInfoProtocolGuid;
extern EFI_GUID gEfiGetPcdInfoProtocolGuid;
extern EFI_GUID gEfiDevicePathUtilitiesProtocolGuid;
extern EFI_GUID gEfiDevicePathToTextProtocolGuid;
extern EFI_GUID gEfiDevicePathFromTextProtocolGuid;
extern EFI_GUID gEfiStatusCodeRuntimeProtocolGuid;
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

#define _PCD_TOKEN_PcdPciBusHotplugDeviceSupport  0U
#define _PCD_SIZE_PcdPciBusHotplugDeviceSupport 1
#define _PCD_GET_MODE_SIZE_PcdPciBusHotplugDeviceSupport  _PCD_SIZE_PcdPciBusHotplugDeviceSupport 
#define _PCD_VALUE_PcdPciBusHotplugDeviceSupport  ((BOOLEAN)1U)
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdPciBusHotplugDeviceSupport;
#define _PCD_GET_MODE_BOOL_PcdPciBusHotplugDeviceSupport  _gPcd_FixedAtBuild_PcdPciBusHotplugDeviceSupport
//#define _PCD_SET_MODE_BOOL_PcdPciBusHotplugDeviceSupport  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdPciBridgeIoAlignmentProbe  0U
#define _PCD_SIZE_PcdPciBridgeIoAlignmentProbe 1
#define _PCD_GET_MODE_SIZE_PcdPciBridgeIoAlignmentProbe  _PCD_SIZE_PcdPciBridgeIoAlignmentProbe 
#define _PCD_VALUE_PcdPciBridgeIoAlignmentProbe  ((BOOLEAN)0U)
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdPciBridgeIoAlignmentProbe;
#define _PCD_GET_MODE_BOOL_PcdPciBridgeIoAlignmentProbe  _gPcd_FixedAtBuild_PcdPciBridgeIoAlignmentProbe
//#define _PCD_SET_MODE_BOOL_PcdPciBridgeIoAlignmentProbe  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdUnalignedPciIoEnable  0U
#define _PCD_SIZE_PcdUnalignedPciIoEnable 1
#define _PCD_GET_MODE_SIZE_PcdUnalignedPciIoEnable  _PCD_SIZE_PcdUnalignedPciIoEnable 
#define _PCD_VALUE_PcdUnalignedPciIoEnable  ((BOOLEAN)0U)
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdUnalignedPciIoEnable;
#define _PCD_GET_MODE_BOOL_PcdUnalignedPciIoEnable  _gPcd_FixedAtBuild_PcdUnalignedPciIoEnable
//#define _PCD_SET_MODE_BOOL_PcdUnalignedPciIoEnable  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdPciDegradeResourceForOptionRom  0U
#define _PCD_SIZE_PcdPciDegradeResourceForOptionRom 1
#define _PCD_GET_MODE_SIZE_PcdPciDegradeResourceForOptionRom  _PCD_SIZE_PcdPciDegradeResourceForOptionRom 
#define _PCD_VALUE_PcdPciDegradeResourceForOptionRom  ((BOOLEAN)1U)
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdPciDegradeResourceForOptionRom;
#define _PCD_GET_MODE_BOOL_PcdPciDegradeResourceForOptionRom  _gPcd_FixedAtBuild_PcdPciDegradeResourceForOptionRom
//#define _PCD_SET_MODE_BOOL_PcdPciDegradeResourceForOptionRom  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdSrIovSystemPageSize  0U
#define _PCD_SIZE_PcdSrIovSystemPageSize 4
#define _PCD_GET_MODE_SIZE_PcdSrIovSystemPageSize  _PCD_SIZE_PcdSrIovSystemPageSize 
#define _PCD_VALUE_PcdSrIovSystemPageSize  0x1U
extern const  UINT32  _gPcd_FixedAtBuild_PcdSrIovSystemPageSize;
#define _PCD_GET_MODE_32_PcdSrIovSystemPageSize  _gPcd_FixedAtBuild_PcdSrIovSystemPageSize
//#define _PCD_SET_MODE_32_PcdSrIovSystemPageSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdSrIovSupport  0U
#define _PCD_SIZE_PcdSrIovSupport 1
#define _PCD_GET_MODE_SIZE_PcdSrIovSupport  _PCD_SIZE_PcdSrIovSupport 
#define _PCD_VALUE_PcdSrIovSupport  1U
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdSrIovSupport;
#define _PCD_GET_MODE_BOOL_PcdSrIovSupport  _gPcd_FixedAtBuild_PcdSrIovSupport
//#define _PCD_SET_MODE_BOOL_PcdSrIovSupport  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdAriSupport  0U
#define _PCD_SIZE_PcdAriSupport 1
#define _PCD_GET_MODE_SIZE_PcdAriSupport  _PCD_SIZE_PcdAriSupport 
#define _PCD_VALUE_PcdAriSupport  1U
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdAriSupport;
#define _PCD_GET_MODE_BOOL_PcdAriSupport  _gPcd_FixedAtBuild_PcdAriSupport
//#define _PCD_SET_MODE_BOOL_PcdAriSupport  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdMrIovSupport  0U
#define _PCD_SIZE_PcdMrIovSupport 1
#define _PCD_GET_MODE_SIZE_PcdMrIovSupport  _PCD_SIZE_PcdMrIovSupport 
#define _PCD_VALUE_PcdMrIovSupport  0U
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdMrIovSupport;
#define _PCD_GET_MODE_BOOL_PcdMrIovSupport  _gPcd_FixedAtBuild_PcdMrIovSupport
//#define _PCD_SET_MODE_BOOL_PcdMrIovSupport  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdPciDisableBusEnumeration  0U
#define _PCD_SIZE_PcdPciDisableBusEnumeration 1
#define _PCD_GET_MODE_SIZE_PcdPciDisableBusEnumeration  _PCD_SIZE_PcdPciDisableBusEnumeration 
#define _PCD_VALUE_PcdPciDisableBusEnumeration  0U
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdPciDisableBusEnumeration;
#define _PCD_GET_MODE_BOOL_PcdPciDisableBusEnumeration  _gPcd_FixedAtBuild_PcdPciDisableBusEnumeration
//#define _PCD_SET_MODE_BOOL_PcdPciDisableBusEnumeration  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdPcieResizableBarSupport  0U
#define _PCD_SIZE_PcdPcieResizableBarSupport 1
#define _PCD_GET_MODE_SIZE_PcdPcieResizableBarSupport  _PCD_SIZE_PcdPcieResizableBarSupport 
#define _PCD_VALUE_PcdPcieResizableBarSupport  0U
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdPcieResizableBarSupport;
#define _PCD_GET_MODE_BOOL_PcdPcieResizableBarSupport  _gPcd_FixedAtBuild_PcdPcieResizableBarSupport
//#define _PCD_SET_MODE_BOOL_PcdPcieResizableBarSupport  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

// Definition of PCDs used in libraries is in AutoGen.c


EFI_STATUS
EFIAPI
PciBusEntryPoint (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );





#ifdef __cplusplus
}
#endif

#endif
