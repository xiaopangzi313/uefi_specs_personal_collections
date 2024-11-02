/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_1D677A58_C753_4AF1_B552_EFE142DF8F57
#define _AUTOGENH_1D677A58_C753_4AF1_B552_EFE142DF8F57

#ifdef __cplusplus
extern "C" {
#endif

#include <PiDxe.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern GUID  gEdkiiDscPlatformGuid;
extern CHAR8 *gEfiCallerBaseName;


// Guids
extern EFI_GUID gEfiGlobalVariableGuid;
extern EFI_GUID gVirtioMmioTransportGuid;
extern EFI_GUID gVMMBootOrderGuid;
extern EFI_GUID gUefiOvmfPkgTokenSpaceGuid;
extern EFI_GUID gEfiMdePkgTokenSpaceGuid;

// Protocols
extern EFI_GUID gEfiDevicePathProtocolGuid;
extern EFI_GUID gEfiPciRootBridgeIoProtocolGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// PCD definitions
#define _PCD_TOKEN_PcdQemuBootOrderPciTranslation  0U
extern const BOOLEAN _gPcd_FixedAtBuild_PcdQemuBootOrderPciTranslation;
#define _PCD_GET_MODE_BOOL_PcdQemuBootOrderPciTranslation  _gPcd_FixedAtBuild_PcdQemuBootOrderPciTranslation
//#define _PCD_SET_MODE_BOOL_PcdQemuBootOrderPciTranslation  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_TOKEN_PcdQemuBootOrderMmioTranslation  0U
extern const BOOLEAN _gPcd_FixedAtBuild_PcdQemuBootOrderMmioTranslation;
#define _PCD_GET_MODE_BOOL_PcdQemuBootOrderMmioTranslation  _gPcd_FixedAtBuild_PcdQemuBootOrderMmioTranslation
//#define _PCD_SET_MODE_BOOL_PcdQemuBootOrderMmioTranslation  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_TOKEN_PcdPlatformBootTimeOut  43U
#define _PCD_GET_MODE_16_PcdPlatformBootTimeOut  LibPcdGet16(_PCD_TOKEN_PcdPlatformBootTimeOut)
#define _PCD_GET_MODE_SIZE_PcdPlatformBootTimeOut  LibPcdGetSize(_PCD_TOKEN_PcdPlatformBootTimeOut)
#define _PCD_SET_MODE_16_PcdPlatformBootTimeOut(Value)  LibPcdSet16(_PCD_TOKEN_PcdPlatformBootTimeOut, (Value))
#define _PCD_SET_MODE_16_S_PcdPlatformBootTimeOut(Value)  LibPcdSet16S(_PCD_TOKEN_PcdPlatformBootTimeOut, (Value))


#ifdef __cplusplus
}
#endif

#endif
