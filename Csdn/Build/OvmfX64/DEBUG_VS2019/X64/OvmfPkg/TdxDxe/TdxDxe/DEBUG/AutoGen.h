/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_E750224E_7BCE_40AF_B5BB_47E3611EB5C2
#define _AUTOGENH_E750224E_7BCE_40AF_B5BB_47E3611EB5C2

#ifdef __cplusplus
extern "C" {
#endif

#include <PiDxe.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern GUID  gEdkiiDscPlatformGuid;
extern CHAR8 *gEfiCallerBaseName;

#define EFI_CALLER_ID_GUID \
  {0xE750224E, 0x7BCE, 0x40AF, {0xB5, 0xBB, 0x47, 0xE3, 0x61, 0x1E, 0xB5, 0xC2}}
#define EDKII_DSC_PLATFORM_GUID \
  {0x5a9e7754, 0xd81b, 0x49ea, {0x85, 0xad, 0x69, 0xea, 0xa7, 0xb1, 0x53, 0x9b}}

// Guids
extern EFI_GUID gUefiOvmfPkgPlatformInfoGuid;
extern EFI_GUID gUefiOvmfPkgTokenSpaceGuid;
extern EFI_GUID gUefiCpuPkgTokenSpaceGuid;
extern EFI_GUID gEfiMdePkgTokenSpaceGuid;
extern EFI_GUID gEfiMdeModulePkgTokenSpaceGuid;
extern EFI_GUID gEfiEventReadyToBootGuid;
extern EFI_GUID gEfiEventAfterReadyToBootGuid;
extern EFI_GUID gEfiEventLegacyBootGuid;
extern EFI_GUID gEfiGlobalVariableGuid;
extern EFI_GUID gEfiAcpi20TableGuid;
extern EFI_GUID gEfiAcpi10TableGuid;
extern EFI_GUID gEfiHobListGuid;
extern EFI_GUID gEfiDxeServicesTableGuid;

// Protocols
extern EFI_GUID gQemuAcpiTableNotifyProtocolGuid;
extern EFI_GUID gEfiAcpiSdtProtocolGuid;
extern EFI_GUID gEfiAcpiTableProtocolGuid;
extern EFI_GUID gEfiMpInitLibMpDepProtocolGuid;
extern EFI_GUID gEfiMpInitLibUpDepProtocolGuid;
extern EFI_GUID gEdkiiMemoryAcceptProtocolGuid;
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
extern EFI_GUID gEfiLoadedImageProtocolGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// Definition of PCDs used in this module

#define _PCD_TOKEN_PcdPciIoBase  15U
#define _PCD_GET_MODE_64_PcdPciIoBase  LibPcdGet64(_PCD_TOKEN_PcdPciIoBase)
#define _PCD_GET_MODE_SIZE_PcdPciIoBase  LibPcdGetSize(_PCD_TOKEN_PcdPciIoBase)
#define _PCD_SET_MODE_64_PcdPciIoBase(Value)  LibPcdSet64(_PCD_TOKEN_PcdPciIoBase, (Value))
#define _PCD_SET_MODE_64_S_PcdPciIoBase(Value)  LibPcdSet64S(_PCD_TOKEN_PcdPciIoBase, (Value))

#define _PCD_TOKEN_PcdPciIoSize  16U
#define _PCD_GET_MODE_64_PcdPciIoSize  LibPcdGet64(_PCD_TOKEN_PcdPciIoSize)
#define _PCD_GET_MODE_SIZE_PcdPciIoSize  LibPcdGetSize(_PCD_TOKEN_PcdPciIoSize)
#define _PCD_SET_MODE_64_PcdPciIoSize(Value)  LibPcdSet64(_PCD_TOKEN_PcdPciIoSize, (Value))
#define _PCD_SET_MODE_64_S_PcdPciIoSize(Value)  LibPcdSet64S(_PCD_TOKEN_PcdPciIoSize, (Value))

#define _PCD_TOKEN_PcdPciMmio32Base  17U
#define _PCD_GET_MODE_64_PcdPciMmio32Base  LibPcdGet64(_PCD_TOKEN_PcdPciMmio32Base)
#define _PCD_GET_MODE_SIZE_PcdPciMmio32Base  LibPcdGetSize(_PCD_TOKEN_PcdPciMmio32Base)
#define _PCD_SET_MODE_64_PcdPciMmio32Base(Value)  LibPcdSet64(_PCD_TOKEN_PcdPciMmio32Base, (Value))
#define _PCD_SET_MODE_64_S_PcdPciMmio32Base(Value)  LibPcdSet64S(_PCD_TOKEN_PcdPciMmio32Base, (Value))

#define _PCD_TOKEN_PcdPciMmio32Size  18U
#define _PCD_GET_MODE_64_PcdPciMmio32Size  LibPcdGet64(_PCD_TOKEN_PcdPciMmio32Size)
#define _PCD_GET_MODE_SIZE_PcdPciMmio32Size  LibPcdGetSize(_PCD_TOKEN_PcdPciMmio32Size)
#define _PCD_SET_MODE_64_PcdPciMmio32Size(Value)  LibPcdSet64(_PCD_TOKEN_PcdPciMmio32Size, (Value))
#define _PCD_SET_MODE_64_S_PcdPciMmio32Size(Value)  LibPcdSet64S(_PCD_TOKEN_PcdPciMmio32Size, (Value))

#define _PCD_TOKEN_PcdPciMmio64Base  19U
#define _PCD_GET_MODE_64_PcdPciMmio64Base  LibPcdGet64(_PCD_TOKEN_PcdPciMmio64Base)
#define _PCD_GET_MODE_SIZE_PcdPciMmio64Base  LibPcdGetSize(_PCD_TOKEN_PcdPciMmio64Base)
#define _PCD_SET_MODE_64_PcdPciMmio64Base(Value)  LibPcdSet64(_PCD_TOKEN_PcdPciMmio64Base, (Value))
#define _PCD_SET_MODE_64_S_PcdPciMmio64Base(Value)  LibPcdSet64S(_PCD_TOKEN_PcdPciMmio64Base, (Value))

#define _PCD_TOKEN_PcdPciMmio64Size  20U
#define _PCD_GET_MODE_64_PcdPciMmio64Size  LibPcdGet64(_PCD_TOKEN_PcdPciMmio64Size)
#define _PCD_GET_MODE_SIZE_PcdPciMmio64Size  LibPcdGetSize(_PCD_TOKEN_PcdPciMmio64Size)
#define _PCD_SET_MODE_64_PcdPciMmio64Size(Value)  LibPcdSet64(_PCD_TOKEN_PcdPciMmio64Size, (Value))
#define _PCD_SET_MODE_64_S_PcdPciMmio64Size(Value)  LibPcdSet64S(_PCD_TOKEN_PcdPciMmio64Size, (Value))

#define _PCD_TOKEN_PcdOvmfHostBridgePciDevId  14U
#define _PCD_GET_MODE_16_PcdOvmfHostBridgePciDevId  LibPcdGet16(_PCD_TOKEN_PcdOvmfHostBridgePciDevId)
#define _PCD_GET_MODE_SIZE_PcdOvmfHostBridgePciDevId  LibPcdGetSize(_PCD_TOKEN_PcdOvmfHostBridgePciDevId)
#define _PCD_SET_MODE_16_PcdOvmfHostBridgePciDevId(Value)  LibPcdSet16(_PCD_TOKEN_PcdOvmfHostBridgePciDevId, (Value))
#define _PCD_SET_MODE_16_S_PcdOvmfHostBridgePciDevId(Value)  LibPcdSet16S(_PCD_TOKEN_PcdOvmfHostBridgePciDevId, (Value))

#define _PCD_TOKEN_PcdCpuMaxLogicalProcessorNumber  11U
#define _PCD_GET_MODE_32_PcdCpuMaxLogicalProcessorNumber  LibPcdGet32(_PCD_TOKEN_PcdCpuMaxLogicalProcessorNumber)
#define _PCD_GET_MODE_SIZE_PcdCpuMaxLogicalProcessorNumber  LibPcdGetSize(_PCD_TOKEN_PcdCpuMaxLogicalProcessorNumber)
#define _PCD_SET_MODE_32_PcdCpuMaxLogicalProcessorNumber(Value)  LibPcdSet32(_PCD_TOKEN_PcdCpuMaxLogicalProcessorNumber, (Value))
#define _PCD_SET_MODE_32_S_PcdCpuMaxLogicalProcessorNumber(Value)  LibPcdSet32S(_PCD_TOKEN_PcdCpuMaxLogicalProcessorNumber, (Value))

#define _PCD_TOKEN_PcdCpuBootLogicalProcessorNumber  10U
#define _PCD_GET_MODE_32_PcdCpuBootLogicalProcessorNumber  LibPcdGet32(_PCD_TOKEN_PcdCpuBootLogicalProcessorNumber)
#define _PCD_GET_MODE_SIZE_PcdCpuBootLogicalProcessorNumber  LibPcdGetSize(_PCD_TOKEN_PcdCpuBootLogicalProcessorNumber)
#define _PCD_SET_MODE_32_PcdCpuBootLogicalProcessorNumber(Value)  LibPcdSet32(_PCD_TOKEN_PcdCpuBootLogicalProcessorNumber, (Value))
#define _PCD_SET_MODE_32_S_PcdCpuBootLogicalProcessorNumber(Value)  LibPcdSet32S(_PCD_TOKEN_PcdCpuBootLogicalProcessorNumber, (Value))

#define _PCD_TOKEN_PcdCpuLocalApicBaseAddress  0U
#define _PCD_SIZE_PcdCpuLocalApicBaseAddress 4
#define _PCD_GET_MODE_SIZE_PcdCpuLocalApicBaseAddress  _PCD_SIZE_PcdCpuLocalApicBaseAddress 
#define _PCD_VALUE_PcdCpuLocalApicBaseAddress  0xfee00000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdCpuLocalApicBaseAddress;
#define _PCD_GET_MODE_32_PcdCpuLocalApicBaseAddress  _gPcd_FixedAtBuild_PcdCpuLocalApicBaseAddress
//#define _PCD_SET_MODE_32_PcdCpuLocalApicBaseAddress  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdOvmfFdBaseAddress  0U
#define _PCD_SIZE_PcdOvmfFdBaseAddress 4
#define _PCD_GET_MODE_SIZE_PcdOvmfFdBaseAddress  _PCD_SIZE_PcdOvmfFdBaseAddress 
#define _PCD_VALUE_PcdOvmfFdBaseAddress  0xFFC00000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdOvmfFdBaseAddress;
#define _PCD_GET_MODE_32_PcdOvmfFdBaseAddress  _gPcd_FixedAtBuild_PcdOvmfFdBaseAddress
//#define _PCD_SET_MODE_32_PcdOvmfFdBaseAddress  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdConfidentialComputingGuestAttr  8U
#define _PCD_GET_MODE_64_PcdConfidentialComputingGuestAttr  LibPcdGet64(_PCD_TOKEN_PcdConfidentialComputingGuestAttr)
#define _PCD_GET_MODE_SIZE_PcdConfidentialComputingGuestAttr  LibPcdGetSize(_PCD_TOKEN_PcdConfidentialComputingGuestAttr)
#define _PCD_SET_MODE_64_PcdConfidentialComputingGuestAttr(Value)  LibPcdSet64(_PCD_TOKEN_PcdConfidentialComputingGuestAttr, (Value))
#define _PCD_SET_MODE_64_S_PcdConfidentialComputingGuestAttr(Value)  LibPcdSet64S(_PCD_TOKEN_PcdConfidentialComputingGuestAttr, (Value))

#define _PCD_TOKEN_PcdTdxSharedBitMask  7U
#define _PCD_GET_MODE_64_PcdTdxSharedBitMask  LibPcdGet64(_PCD_TOKEN_PcdTdxSharedBitMask)
#define _PCD_GET_MODE_SIZE_PcdTdxSharedBitMask  LibPcdGetSize(_PCD_TOKEN_PcdTdxSharedBitMask)
#define _PCD_SET_MODE_64_PcdTdxSharedBitMask(Value)  LibPcdSet64(_PCD_TOKEN_PcdTdxSharedBitMask, (Value))
#define _PCD_SET_MODE_64_S_PcdTdxSharedBitMask(Value)  LibPcdSet64S(_PCD_TOKEN_PcdTdxSharedBitMask, (Value))

#define _PCD_TOKEN_PcdSetNxForStack  6U
#define _PCD_GET_MODE_BOOL_PcdSetNxForStack  LibPcdGetBool(_PCD_TOKEN_PcdSetNxForStack)
#define _PCD_GET_MODE_SIZE_PcdSetNxForStack  LibPcdGetSize(_PCD_TOKEN_PcdSetNxForStack)
#define _PCD_SET_MODE_BOOL_PcdSetNxForStack(Value)  LibPcdSetBool(_PCD_TOKEN_PcdSetNxForStack, (Value))
#define _PCD_SET_MODE_BOOL_S_PcdSetNxForStack(Value)  LibPcdSetBoolS(_PCD_TOKEN_PcdSetNxForStack, (Value))

#define _PCD_TOKEN_PcdEmuVariableNvStoreReserved  2U
#define _PCD_GET_MODE_64_PcdEmuVariableNvStoreReserved  LibPcdGet64(_PCD_TOKEN_PcdEmuVariableNvStoreReserved)
#define _PCD_GET_MODE_SIZE_PcdEmuVariableNvStoreReserved  LibPcdGetSize(_PCD_TOKEN_PcdEmuVariableNvStoreReserved)
#define _PCD_SET_MODE_64_PcdEmuVariableNvStoreReserved(Value)  LibPcdSet64(_PCD_TOKEN_PcdEmuVariableNvStoreReserved, (Value))
#define _PCD_SET_MODE_64_S_PcdEmuVariableNvStoreReserved(Value)  LibPcdSet64S(_PCD_TOKEN_PcdEmuVariableNvStoreReserved, (Value))

#define _PCD_TOKEN_PcdTdxAcceptPageSize  0U
#define _PCD_SIZE_PcdTdxAcceptPageSize 4
#define _PCD_GET_MODE_SIZE_PcdTdxAcceptPageSize  _PCD_SIZE_PcdTdxAcceptPageSize 
#define _PCD_VALUE_PcdTdxAcceptPageSize  0x200000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdTdxAcceptPageSize;
#define _PCD_GET_MODE_32_PcdTdxAcceptPageSize  _gPcd_FixedAtBuild_PcdTdxAcceptPageSize
//#define _PCD_SET_MODE_32_PcdTdxAcceptPageSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

// Definition of PCDs used in libraries is in AutoGen.c


EFI_STATUS
EFIAPI
TdxDxeEntryPoint (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );





#ifdef __cplusplus
}
#endif

#endif
