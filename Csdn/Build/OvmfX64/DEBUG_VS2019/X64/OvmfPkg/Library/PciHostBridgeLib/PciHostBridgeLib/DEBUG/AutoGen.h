/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_9F2BC05E_51EA_4AED_9A3E_7699641734E8
#define _AUTOGENH_9F2BC05E_51EA_4AED_9A3E_7699641734E8

#ifdef __cplusplus
extern "C" {
#endif

#include <PiDxe.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern GUID  gEdkiiDscPlatformGuid;
extern CHAR8 *gEfiCallerBaseName;


// Guids
extern EFI_GUID gUefiOvmfPkgTokenSpaceGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// PCD definitions
#define _PCD_TOKEN_PcdOvmfHostBridgePciDevId  14U
#define _PCD_GET_MODE_16_PcdOvmfHostBridgePciDevId  LibPcdGet16(_PCD_TOKEN_PcdOvmfHostBridgePciDevId)
#define _PCD_GET_MODE_SIZE_PcdOvmfHostBridgePciDevId  LibPcdGetSize(_PCD_TOKEN_PcdOvmfHostBridgePciDevId)
#define _PCD_SET_MODE_16_PcdOvmfHostBridgePciDevId(Value)  LibPcdSet16(_PCD_TOKEN_PcdOvmfHostBridgePciDevId, (Value))
#define _PCD_SET_MODE_16_S_PcdOvmfHostBridgePciDevId(Value)  LibPcdSet16S(_PCD_TOKEN_PcdOvmfHostBridgePciDevId, (Value))
#define _PCD_TOKEN_PcdPciIoBase  15U
#define _PCD_GET_MODE_64_PcdPciIoBase  LibPcdGet64(_PCD_TOKEN_PcdPciIoBase)
#define _PCD_GET_MODE_SIZE_PcdPciIoBase  LibPcdGetSize(_PCD_TOKEN_PcdPciIoBase)
#define _PCD_SET_MODE_64_PcdPciIoBase(Value)  LibPcdSet64(_PCD_TOKEN_PcdPciIoBase, (Value))
#define _PCD_SET_MODE_64_S_PcdPciIoBase(Value)  LibPcdSet64S(_PCD_TOKEN_PcdPciIoBase, (Value))
#define _PCD_TOKEN_PcdPciIoSize  16U
#define _PCD_GET_MODE_64_PcdPciIoSize  LibPcdGet64(_PCD_TOKEN_PcdPciIoSize)
#define _PCD_GET_MODE_SIZE_PcdPciIoSize  LibPcdGetSize(_PCD_TOKEN_PcdPciIoSize)
#define _PCD_SET_MODE_64_PcdPciIoSize(Value)  LibPcdSet64(_PCD_TOKEN_PcdPciIoSize, (Value))
#define _PCD_SET_MODE_64_S_PcdPciIoSize(Value)  LibPcdSet64S(_PCD_TOKEN_PcdPciIoSize, (Value))
#define _PCD_TOKEN_PcdPciMmio32Base  17U
#define _PCD_GET_MODE_64_PcdPciMmio32Base  LibPcdGet64(_PCD_TOKEN_PcdPciMmio32Base)
#define _PCD_GET_MODE_SIZE_PcdPciMmio32Base  LibPcdGetSize(_PCD_TOKEN_PcdPciMmio32Base)
#define _PCD_SET_MODE_64_PcdPciMmio32Base(Value)  LibPcdSet64(_PCD_TOKEN_PcdPciMmio32Base, (Value))
#define _PCD_SET_MODE_64_S_PcdPciMmio32Base(Value)  LibPcdSet64S(_PCD_TOKEN_PcdPciMmio32Base, (Value))
#define _PCD_TOKEN_PcdPciMmio32Size  18U
#define _PCD_GET_MODE_64_PcdPciMmio32Size  LibPcdGet64(_PCD_TOKEN_PcdPciMmio32Size)
#define _PCD_GET_MODE_SIZE_PcdPciMmio32Size  LibPcdGetSize(_PCD_TOKEN_PcdPciMmio32Size)
#define _PCD_SET_MODE_64_PcdPciMmio32Size(Value)  LibPcdSet64(_PCD_TOKEN_PcdPciMmio32Size, (Value))
#define _PCD_SET_MODE_64_S_PcdPciMmio32Size(Value)  LibPcdSet64S(_PCD_TOKEN_PcdPciMmio32Size, (Value))
#define _PCD_TOKEN_PcdPciMmio64Base  19U
#define _PCD_GET_MODE_64_PcdPciMmio64Base  LibPcdGet64(_PCD_TOKEN_PcdPciMmio64Base)
#define _PCD_GET_MODE_SIZE_PcdPciMmio64Base  LibPcdGetSize(_PCD_TOKEN_PcdPciMmio64Base)
#define _PCD_SET_MODE_64_PcdPciMmio64Base(Value)  LibPcdSet64(_PCD_TOKEN_PcdPciMmio64Base, (Value))
#define _PCD_SET_MODE_64_S_PcdPciMmio64Base(Value)  LibPcdSet64S(_PCD_TOKEN_PcdPciMmio64Base, (Value))
#define _PCD_TOKEN_PcdPciMmio64Size  20U
#define _PCD_GET_MODE_64_PcdPciMmio64Size  LibPcdGet64(_PCD_TOKEN_PcdPciMmio64Size)
#define _PCD_GET_MODE_SIZE_PcdPciMmio64Size  LibPcdGetSize(_PCD_TOKEN_PcdPciMmio64Size)
#define _PCD_SET_MODE_64_PcdPciMmio64Size(Value)  LibPcdSet64(_PCD_TOKEN_PcdPciMmio64Size, (Value))
#define _PCD_SET_MODE_64_S_PcdPciMmio64Size(Value)  LibPcdSet64S(_PCD_TOKEN_PcdPciMmio64Size, (Value))


#ifdef __cplusplus
}
#endif

#endif
