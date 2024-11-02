/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_6c633bb2_ae33_49ae_9f89_b5aa999fe3ae
#define _AUTOGENH_6c633bb2_ae33_49ae_9f89_b5aa999fe3ae

#ifdef __cplusplus
extern "C" {
#endif

#include <Base.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern GUID  gEdkiiDscPlatformGuid;
extern CHAR8 *gEfiCallerBaseName;


// Guids
extern GUID gEfiMdeModulePkgTokenSpaceGuid;
extern GUID gUefiOvmfPkgTokenSpaceGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// PCD definitions
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
#define _PCD_TOKEN_PcdQemuSmbiosValidated  51U
#define _PCD_GET_MODE_BOOL_PcdQemuSmbiosValidated  LibPcdGetBool(_PCD_TOKEN_PcdQemuSmbiosValidated)
#define _PCD_GET_MODE_SIZE_PcdQemuSmbiosValidated  LibPcdGetSize(_PCD_TOKEN_PcdQemuSmbiosValidated)
#define _PCD_SET_MODE_BOOL_PcdQemuSmbiosValidated(Value)  LibPcdSetBool(_PCD_TOKEN_PcdQemuSmbiosValidated, (Value))
#define _PCD_SET_MODE_BOOL_S_PcdQemuSmbiosValidated(Value)  LibPcdSetBoolS(_PCD_TOKEN_PcdQemuSmbiosValidated, (Value))

RETURN_STATUS
EFIAPI
DetectSmbiosVersion (
  VOID
  );


#ifdef __cplusplus
}
#endif

#endif
