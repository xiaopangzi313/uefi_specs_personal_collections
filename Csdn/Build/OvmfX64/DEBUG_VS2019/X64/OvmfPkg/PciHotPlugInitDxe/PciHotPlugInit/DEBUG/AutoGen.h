/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_11A6EDF6_A9BE_426D_A6CC_B22FE51D9224
#define _AUTOGENH_11A6EDF6_A9BE_426D_A6CC_B22FE51D9224

#ifdef __cplusplus
extern "C" {
#endif

#include <PiDxe.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern GUID  gEdkiiDscPlatformGuid;
extern CHAR8 *gEfiCallerBaseName;

#define EFI_CALLER_ID_GUID \
  {0x11A6EDF6, 0xA9BE, 0x426D, {0xA6, 0xCC, 0xB2, 0x2F, 0xE5, 0x1D, 0x92, 0x24}}
#define EDKII_DSC_PLATFORM_GUID \
  {0x5a9e7754, 0xd81b, 0x49ea, {0x85, 0xad, 0x69, 0xea, 0xa7, 0xb1, 0x53, 0x9b}}

// Guids
extern EFI_GUID gUefiOvmfPkgTokenSpaceGuid;
extern EFI_GUID gEfiMdePkgTokenSpaceGuid;

// Protocols
extern EFI_GUID gEfiPciHotPlugInitProtocolGuid;
extern EFI_GUID gPcdProtocolGuid;
extern EFI_GUID gEfiPcdProtocolGuid;
extern EFI_GUID gGetPcdInfoProtocolGuid;
extern EFI_GUID gEfiGetPcdInfoProtocolGuid;
extern EFI_GUID gEfiDevicePathProtocolGuid;
extern EFI_GUID gEfiDevicePathUtilitiesProtocolGuid;
extern EFI_GUID gEfiDevicePathToTextProtocolGuid;
extern EFI_GUID gEfiDevicePathFromTextProtocolGuid;
extern EFI_GUID gEfiLoadedImageProtocolGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// Definition of PCDs used in this module

#define _PCD_TOKEN_PcdOvmfHostBridgePciDevId  14U
#define _PCD_GET_MODE_16_PcdOvmfHostBridgePciDevId  LibPcdGet16(_PCD_TOKEN_PcdOvmfHostBridgePciDevId)
#define _PCD_GET_MODE_SIZE_PcdOvmfHostBridgePciDevId  LibPcdGetSize(_PCD_TOKEN_PcdOvmfHostBridgePciDevId)
#define _PCD_SET_MODE_16_PcdOvmfHostBridgePciDevId(Value)  LibPcdSet16(_PCD_TOKEN_PcdOvmfHostBridgePciDevId, (Value))
#define _PCD_SET_MODE_16_S_PcdOvmfHostBridgePciDevId(Value)  LibPcdSet16S(_PCD_TOKEN_PcdOvmfHostBridgePciDevId, (Value))

#define _PCD_TOKEN_PcdPciMmio64Size  20U
#define _PCD_GET_MODE_64_PcdPciMmio64Size  LibPcdGet64(_PCD_TOKEN_PcdPciMmio64Size)
#define _PCD_GET_MODE_SIZE_PcdPciMmio64Size  LibPcdGetSize(_PCD_TOKEN_PcdPciMmio64Size)
#define _PCD_SET_MODE_64_PcdPciMmio64Size(Value)  LibPcdSet64(_PCD_TOKEN_PcdPciMmio64Size, (Value))
#define _PCD_SET_MODE_64_S_PcdPciMmio64Size(Value)  LibPcdSet64S(_PCD_TOKEN_PcdPciMmio64Size, (Value))

// Definition of PCDs used in libraries is in AutoGen.c


EFI_STATUS
EFIAPI
DriverInitialize (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );





#ifdef __cplusplus
}
#endif

#endif
