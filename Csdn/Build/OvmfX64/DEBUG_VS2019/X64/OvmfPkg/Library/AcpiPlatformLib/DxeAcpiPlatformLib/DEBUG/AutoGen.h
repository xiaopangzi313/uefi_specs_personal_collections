/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_578F441A_4A4C_4D24_B9BE_F783152B46F6
#define _AUTOGENH_578F441A_4A4C_4D24_B9BE_F783152B46F6

#ifdef __cplusplus
extern "C" {
#endif

#include <PiDxe.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern GUID  gEdkiiDscPlatformGuid;
extern CHAR8 *gEfiCallerBaseName;


// Guids
extern EFI_GUID gEfiMdeModulePkgTokenSpaceGuid;

// Protocols
extern EFI_GUID gQemuAcpiTableNotifyProtocolGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// PCD definitions
#define _PCD_TOKEN_PcdPciDisableBusEnumeration  0U
extern const BOOLEAN _gPcd_FixedAtBuild_PcdPciDisableBusEnumeration;
#define _PCD_GET_MODE_BOOL_PcdPciDisableBusEnumeration  _gPcd_FixedAtBuild_PcdPciDisableBusEnumeration
//#define _PCD_SET_MODE_BOOL_PcdPciDisableBusEnumeration  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdPciDisableBusEnumeration 0
#define _PCD_SIZE_PcdPciDisableBusEnumeration 1
#define _PCD_GET_MODE_SIZE_PcdPciDisableBusEnumeration _PCD_SIZE_PcdPciDisableBusEnumeration


#ifdef __cplusplus
}
#endif

#endif
