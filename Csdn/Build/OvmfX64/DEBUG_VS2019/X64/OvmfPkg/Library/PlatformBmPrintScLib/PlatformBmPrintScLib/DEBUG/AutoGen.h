/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_3417c705_903e_41a7_9485_3fafebf60917
#define _AUTOGENH_3417c705_903e_41a7_9485_3fafebf60917

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
extern EFI_GUID gEfiStatusCodeSpecificDataGuid;
extern EFI_GUID gEfiMdeModulePkgTokenSpaceGuid;

// Protocols
extern EFI_GUID gEfiRscHandlerProtocolGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// PCD definitions
#define _PCD_TOKEN_PcdProgressCodeOsLoaderLoad  0U
extern const UINT32 _gPcd_FixedAtBuild_PcdProgressCodeOsLoaderLoad;
#define _PCD_GET_MODE_32_PcdProgressCodeOsLoaderLoad  _gPcd_FixedAtBuild_PcdProgressCodeOsLoaderLoad
//#define _PCD_SET_MODE_32_PcdProgressCodeOsLoaderLoad  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdProgressCodeOsLoaderLoad 0x03058000
#define _PCD_SIZE_PcdProgressCodeOsLoaderLoad 4
#define _PCD_GET_MODE_SIZE_PcdProgressCodeOsLoaderLoad _PCD_SIZE_PcdProgressCodeOsLoaderLoad
#define _PCD_TOKEN_PcdProgressCodeOsLoaderStart  0U
extern const UINT32 _gPcd_FixedAtBuild_PcdProgressCodeOsLoaderStart;
#define _PCD_GET_MODE_32_PcdProgressCodeOsLoaderStart  _gPcd_FixedAtBuild_PcdProgressCodeOsLoaderStart
//#define _PCD_SET_MODE_32_PcdProgressCodeOsLoaderStart  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdProgressCodeOsLoaderStart 0x03058001
#define _PCD_SIZE_PcdProgressCodeOsLoaderStart 4
#define _PCD_GET_MODE_SIZE_PcdProgressCodeOsLoaderStart _PCD_SIZE_PcdProgressCodeOsLoaderStart


#ifdef __cplusplus
}
#endif

#endif
