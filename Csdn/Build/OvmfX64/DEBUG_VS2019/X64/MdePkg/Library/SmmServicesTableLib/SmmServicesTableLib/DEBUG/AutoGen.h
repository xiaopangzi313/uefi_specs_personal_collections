/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_064B4C5B_C5EF_4eff_85DF_65518EF1314D
#define _AUTOGENH_064B4C5B_C5EF_4eff_85DF_65518EF1314D

#ifdef __cplusplus
extern "C" {
#endif

#include <PiDxe.h>

extern GUID  gEfiCallerIdGuid;
extern GUID  gEdkiiDscPlatformGuid;
extern CHAR8 *gEfiCallerBaseName;


// Protocols
extern EFI_GUID gEfiSmmBase2ProtocolGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

EFI_STATUS
EFIAPI
SmmServicesTableLibConstructor (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );


#ifdef __cplusplus
}
#endif

#endif
