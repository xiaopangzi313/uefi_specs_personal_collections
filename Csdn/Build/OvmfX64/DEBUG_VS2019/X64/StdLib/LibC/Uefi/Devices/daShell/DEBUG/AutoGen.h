/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_0a1d4fd8_4704_4501_85eb_93399492cbed
#define _AUTOGENH_0a1d4fd8_4704_4501_85eb_93399492cbed

#ifdef __cplusplus
extern "C" {
#endif

#include <Uefi.h>

extern GUID  gEfiCallerIdGuid;
extern GUID  gEdkiiDscPlatformGuid;
extern CHAR8 *gEfiCallerBaseName;


// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

EFI_STATUS
EFIAPI
__ctor_DevShell (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );

EFI_STATUS
EFIAPI
__dtor_DevShell (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );


#ifdef __cplusplus
}
#endif

#endif
