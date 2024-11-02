/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_626440D8_1971_41D9_9AB2_FB25F4AE79BC
#define _AUTOGENH_626440D8_1971_41D9_9AB2_FB25F4AE79BC

#ifdef __cplusplus
extern "C" {
#endif

#include <Base.h>

extern GUID  gEfiCallerIdGuid;
extern GUID  gEdkiiDscPlatformGuid;
extern CHAR8 *gEfiCallerBaseName;


// Guids
extern GUID gEfiRngAlgorithmSp80090Ctr256Guid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

RETURN_STATUS
EFIAPI
BaseRngLibConstructor (
  VOID
  );


#ifdef __cplusplus
}
#endif

#endif
