/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_87eb5df9_722a_4241_ad7f_370d0b3a56d7
#define _AUTOGENH_87eb5df9_722a_4241_ad7f_370d0b3a56d7

#ifdef __cplusplus
extern "C" {
#endif

#include <Uefi.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern GUID  gEdkiiDscPlatformGuid;
extern CHAR8 *gEfiCallerBaseName;


// Guids
extern EFI_GUID gEfiMdePkgTokenSpaceGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// PCD definitions
#define _PCD_TOKEN_PcdUsbTransferTimeoutValue  0U
extern const UINT32 _gPcd_FixedAtBuild_PcdUsbTransferTimeoutValue;
#define _PCD_GET_MODE_32_PcdUsbTransferTimeoutValue  _gPcd_FixedAtBuild_PcdUsbTransferTimeoutValue
//#define _PCD_SET_MODE_32_PcdUsbTransferTimeoutValue  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdUsbTransferTimeoutValue 3000
#define _PCD_SIZE_PcdUsbTransferTimeoutValue 4
#define _PCD_GET_MODE_SIZE_PcdUsbTransferTimeoutValue _PCD_SIZE_PcdUsbTransferTimeoutValue


#ifdef __cplusplus
}
#endif

#endif
