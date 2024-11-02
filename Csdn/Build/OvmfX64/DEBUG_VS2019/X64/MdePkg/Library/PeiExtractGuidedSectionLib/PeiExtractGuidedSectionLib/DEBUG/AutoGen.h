/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_41ddf016_2a11_415f_8880_00d938e9541a
#define _AUTOGENH_41ddf016_2a11_415f_8880_00d938e9541a

#ifdef __cplusplus
extern "C" {
#endif

#include <PiPei.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern GUID  gEdkiiDscPlatformGuid;
extern CHAR8 *gEfiCallerBaseName;


// Guids
extern EFI_GUID gEfiMdePkgTokenSpaceGuid;

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


#ifdef __cplusplus
}
#endif

#endif
