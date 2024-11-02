/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_FB65006C_AC9F_4992_AD80_184B2BDBBD83
#define _AUTOGENH_FB65006C_AC9F_4992_AD80_184B2BDBBD83

#ifdef __cplusplus
extern "C" {
#endif

#include <PiDxe.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern GUID  gEdkiiDscPlatformGuid;
extern CHAR8 *gEfiCallerBaseName;


// Guids
extern EFI_GUID gEfiEndOfDxeEventGroupGuid;
extern EFI_GUID gEfiGlobalVariableGuid;
extern EFI_GUID gRootBridgesConnectedEventGroupGuid;
extern EFI_GUID gUefiShellFileGuid;
extern EFI_GUID gGrubFileGuid;
extern EFI_GUID gUefiOvmfPkgTokenSpaceGuid;
extern EFI_GUID gEfiMdeModulePkgTokenSpaceGuid;
extern EFI_GUID gEfiMdePkgTokenSpaceGuid;

// Protocols
extern EFI_GUID gEfiDecompressProtocolGuid;
extern EFI_GUID gEfiPciRootBridgeIoProtocolGuid;
extern EFI_GUID gVirtioDeviceProtocolGuid;
extern EFI_GUID gEfiS3SaveStateProtocolGuid;
extern EFI_GUID gEfiDxeSmmReadyToLockProtocolGuid;
extern EFI_GUID gEfiLoadedImageProtocolGuid;
extern EFI_GUID gEfiFirmwareVolume2ProtocolGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// PCD definitions
#define _PCD_TOKEN_PcdEmuVariableEvent  49U
#define _PCD_GET_MODE_64_PcdEmuVariableEvent  LibPcdGet64(_PCD_TOKEN_PcdEmuVariableEvent)
#define _PCD_GET_MODE_SIZE_PcdEmuVariableEvent  LibPcdGetSize(_PCD_TOKEN_PcdEmuVariableEvent)
#define _PCD_SET_MODE_64_PcdEmuVariableEvent(Value)  LibPcdSet64(_PCD_TOKEN_PcdEmuVariableEvent, (Value))
#define _PCD_SET_MODE_64_S_PcdEmuVariableEvent(Value)  LibPcdSet64S(_PCD_TOKEN_PcdEmuVariableEvent, (Value))
#define _PCD_TOKEN_PcdOvmfFlashVariablesEnable  50U
#define _PCD_GET_MODE_BOOL_PcdOvmfFlashVariablesEnable  LibPcdGetBool(_PCD_TOKEN_PcdOvmfFlashVariablesEnable)
#define _PCD_GET_MODE_SIZE_PcdOvmfFlashVariablesEnable  LibPcdGetSize(_PCD_TOKEN_PcdOvmfFlashVariablesEnable)
#define _PCD_SET_MODE_BOOL_PcdOvmfFlashVariablesEnable(Value)  LibPcdSetBool(_PCD_TOKEN_PcdOvmfFlashVariablesEnable, (Value))
#define _PCD_SET_MODE_BOOL_S_PcdOvmfFlashVariablesEnable(Value)  LibPcdSetBoolS(_PCD_TOKEN_PcdOvmfFlashVariablesEnable, (Value))
#define _PCD_TOKEN_PcdOvmfHostBridgePciDevId  14U
#define _PCD_GET_MODE_16_PcdOvmfHostBridgePciDevId  LibPcdGet16(_PCD_TOKEN_PcdOvmfHostBridgePciDevId)
#define _PCD_GET_MODE_SIZE_PcdOvmfHostBridgePciDevId  LibPcdGetSize(_PCD_TOKEN_PcdOvmfHostBridgePciDevId)
#define _PCD_SET_MODE_16_PcdOvmfHostBridgePciDevId(Value)  LibPcdSet16(_PCD_TOKEN_PcdOvmfHostBridgePciDevId, (Value))
#define _PCD_SET_MODE_16_S_PcdOvmfHostBridgePciDevId(Value)  LibPcdSet16S(_PCD_TOKEN_PcdOvmfHostBridgePciDevId, (Value))
#define _PCD_TOKEN_PcdBootRestrictToFirmware  0U
extern const BOOLEAN _gPcd_FixedAtBuild_PcdBootRestrictToFirmware;
#define _PCD_GET_MODE_BOOL_PcdBootRestrictToFirmware  _gPcd_FixedAtBuild_PcdBootRestrictToFirmware
//#define _PCD_SET_MODE_BOOL_PcdBootRestrictToFirmware  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdBootRestrictToFirmware 0
#define _PCD_SIZE_PcdBootRestrictToFirmware 1
#define _PCD_GET_MODE_SIZE_PcdBootRestrictToFirmware _PCD_SIZE_PcdBootRestrictToFirmware
#define _PCD_TOKEN_PcdAcpiS3Enable  1U
#define _PCD_GET_MODE_BOOL_PcdAcpiS3Enable  LibPcdGetBool(_PCD_TOKEN_PcdAcpiS3Enable)
#define _PCD_GET_MODE_SIZE_PcdAcpiS3Enable  LibPcdGetSize(_PCD_TOKEN_PcdAcpiS3Enable)
#define _PCD_SET_MODE_BOOL_PcdAcpiS3Enable(Value)  LibPcdSetBool(_PCD_TOKEN_PcdAcpiS3Enable, (Value))
#define _PCD_SET_MODE_BOOL_S_PcdAcpiS3Enable(Value)  LibPcdSetBoolS(_PCD_TOKEN_PcdAcpiS3Enable, (Value))
#define _PCD_TOKEN_PcdPlatformBootTimeOut  43U
#define _PCD_GET_MODE_16_PcdPlatformBootTimeOut  LibPcdGet16(_PCD_TOKEN_PcdPlatformBootTimeOut)
#define _PCD_GET_MODE_SIZE_PcdPlatformBootTimeOut  LibPcdGetSize(_PCD_TOKEN_PcdPlatformBootTimeOut)
#define _PCD_SET_MODE_16_PcdPlatformBootTimeOut(Value)  LibPcdSet16(_PCD_TOKEN_PcdPlatformBootTimeOut, (Value))
#define _PCD_SET_MODE_16_S_PcdPlatformBootTimeOut(Value)  LibPcdSet16S(_PCD_TOKEN_PcdPlatformBootTimeOut, (Value))
#define _PCD_TOKEN_PcdUartDefaultBaudRate  0U
extern const UINT64 _gPcd_FixedAtBuild_PcdUartDefaultBaudRate;
#define _PCD_GET_MODE_64_PcdUartDefaultBaudRate  _gPcd_FixedAtBuild_PcdUartDefaultBaudRate
//#define _PCD_SET_MODE_64_PcdUartDefaultBaudRate  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdUartDefaultBaudRate 115200
#define _PCD_SIZE_PcdUartDefaultBaudRate 8
#define _PCD_GET_MODE_SIZE_PcdUartDefaultBaudRate _PCD_SIZE_PcdUartDefaultBaudRate
#define _PCD_TOKEN_PcdUartDefaultDataBits  0U
extern const UINT8 _gPcd_FixedAtBuild_PcdUartDefaultDataBits;
#define _PCD_GET_MODE_8_PcdUartDefaultDataBits  _gPcd_FixedAtBuild_PcdUartDefaultDataBits
//#define _PCD_SET_MODE_8_PcdUartDefaultDataBits  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdUartDefaultDataBits 8
#define _PCD_SIZE_PcdUartDefaultDataBits 1
#define _PCD_GET_MODE_SIZE_PcdUartDefaultDataBits _PCD_SIZE_PcdUartDefaultDataBits
#define _PCD_TOKEN_PcdUartDefaultParity  0U
extern const UINT8 _gPcd_FixedAtBuild_PcdUartDefaultParity;
#define _PCD_GET_MODE_8_PcdUartDefaultParity  _gPcd_FixedAtBuild_PcdUartDefaultParity
//#define _PCD_SET_MODE_8_PcdUartDefaultParity  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdUartDefaultParity 1
#define _PCD_SIZE_PcdUartDefaultParity 1
#define _PCD_GET_MODE_SIZE_PcdUartDefaultParity _PCD_SIZE_PcdUartDefaultParity
#define _PCD_TOKEN_PcdUartDefaultStopBits  0U
extern const UINT8 _gPcd_FixedAtBuild_PcdUartDefaultStopBits;
#define _PCD_GET_MODE_8_PcdUartDefaultStopBits  _gPcd_FixedAtBuild_PcdUartDefaultStopBits
//#define _PCD_SET_MODE_8_PcdUartDefaultStopBits  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdUartDefaultStopBits 1
#define _PCD_SIZE_PcdUartDefaultStopBits 1
#define _PCD_GET_MODE_SIZE_PcdUartDefaultStopBits _PCD_SIZE_PcdUartDefaultStopBits
#define _PCD_TOKEN_PcdFSBClock  42U
#define _PCD_GET_MODE_32_PcdFSBClock  LibPcdGet32(_PCD_TOKEN_PcdFSBClock)
#define _PCD_GET_MODE_SIZE_PcdFSBClock  LibPcdGetSize(_PCD_TOKEN_PcdFSBClock)
#define _PCD_SET_MODE_32_PcdFSBClock(Value)  LibPcdSet32(_PCD_TOKEN_PcdFSBClock, (Value))
#define _PCD_SET_MODE_32_S_PcdFSBClock(Value)  LibPcdSet32S(_PCD_TOKEN_PcdFSBClock, (Value))


#ifdef __cplusplus
}
#endif

#endif
