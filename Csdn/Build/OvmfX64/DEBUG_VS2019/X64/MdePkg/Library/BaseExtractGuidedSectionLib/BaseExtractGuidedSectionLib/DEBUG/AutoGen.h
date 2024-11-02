/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_4e3236e9_d1c8_4c04_a89f_26f1c44b2592
#define _AUTOGENH_4e3236e9_d1c8_4c04_a89f_26f1c44b2592

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
#define _PCD_TOKEN_PcdMaximumGuidedExtractHandler  0U
extern const UINT32 _gPcd_FixedAtBuild_PcdMaximumGuidedExtractHandler;
#define _PCD_GET_MODE_32_PcdMaximumGuidedExtractHandler  _gPcd_FixedAtBuild_PcdMaximumGuidedExtractHandler
//#define _PCD_SET_MODE_32_PcdMaximumGuidedExtractHandler  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdMaximumGuidedExtractHandler 0x10
#define _PCD_SIZE_PcdMaximumGuidedExtractHandler 4
#define _PCD_GET_MODE_SIZE_PcdMaximumGuidedExtractHandler _PCD_SIZE_PcdMaximumGuidedExtractHandler
#define _PCD_TOKEN_PcdGuidedExtractHandlerTableAddress  0U
extern const UINT64 _gPcd_FixedAtBuild_PcdGuidedExtractHandlerTableAddress;
#define _PCD_GET_MODE_64_PcdGuidedExtractHandlerTableAddress  _gPcd_FixedAtBuild_PcdGuidedExtractHandlerTableAddress
//#define _PCD_SET_MODE_64_PcdGuidedExtractHandlerTableAddress  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdGuidedExtractHandlerTableAddress 0x00807000
#define _PCD_SIZE_PcdGuidedExtractHandlerTableAddress 8
#define _PCD_GET_MODE_SIZE_PcdGuidedExtractHandlerTableAddress _PCD_SIZE_PcdGuidedExtractHandlerTableAddress


#ifdef __cplusplus
}
#endif

#endif
