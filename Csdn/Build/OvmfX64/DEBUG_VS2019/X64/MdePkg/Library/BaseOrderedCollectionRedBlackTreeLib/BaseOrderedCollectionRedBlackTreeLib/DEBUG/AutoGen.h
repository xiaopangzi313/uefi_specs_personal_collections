/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_699F73C3_0058_484C_A9E5_61189276A985
#define _AUTOGENH_699F73C3_0058_484C_A9E5_61189276A985

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
#define _PCD_TOKEN_PcdValidateOrderedCollection  0U
extern const BOOLEAN _gPcd_FixedAtBuild_PcdValidateOrderedCollection;
#define _PCD_GET_MODE_BOOL_PcdValidateOrderedCollection  _gPcd_FixedAtBuild_PcdValidateOrderedCollection
//#define _PCD_SET_MODE_BOOL_PcdValidateOrderedCollection  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD


#ifdef __cplusplus
}
#endif

#endif
