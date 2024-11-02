/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_287e50f4_a188_4699_b907_3e4080ca5688
#define _AUTOGENH_287e50f4_a188_4699_b907_3e4080ca5688

#ifdef __cplusplus
extern "C" {
#endif

#include <Base.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern GUID  gEdkiiDscPlatformGuid;
extern CHAR8 *gEfiCallerBaseName;


// Guids
extern GUID gEfiMdePkgTokenSpaceGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// PCD definitions
#define _PCD_TOKEN_PcdPciExpressBaseAddress  0U
extern const UINT64 _gPcd_FixedAtBuild_PcdPciExpressBaseAddress;
#define _PCD_GET_MODE_64_PcdPciExpressBaseAddress  _gPcd_FixedAtBuild_PcdPciExpressBaseAddress
//#define _PCD_SET_MODE_64_PcdPciExpressBaseAddress  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdPciExpressBaseAddress 0xE0000000
#define _PCD_SIZE_PcdPciExpressBaseAddress 8
#define _PCD_GET_MODE_SIZE_PcdPciExpressBaseAddress _PCD_SIZE_PcdPciExpressBaseAddress
#define _PCD_TOKEN_PcdPciExpressBaseSize  0U
extern const UINT64 _gPcd_FixedAtBuild_PcdPciExpressBaseSize;
#define _PCD_GET_MODE_64_PcdPciExpressBaseSize  _gPcd_FixedAtBuild_PcdPciExpressBaseSize
//#define _PCD_SET_MODE_64_PcdPciExpressBaseSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdPciExpressBaseSize 0x10000000
#define _PCD_SIZE_PcdPciExpressBaseSize 8
#define _PCD_GET_MODE_SIZE_PcdPciExpressBaseSize _PCD_SIZE_PcdPciExpressBaseSize


#ifdef __cplusplus
}
#endif

#endif
