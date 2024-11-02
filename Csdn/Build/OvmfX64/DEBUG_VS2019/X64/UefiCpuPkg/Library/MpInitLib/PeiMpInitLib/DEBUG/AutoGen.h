/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_B00F6090_7739_4830_B906_E0032D388987
#define _AUTOGENH_B00F6090_7739_4830_B906_E0032D388987

#ifdef __cplusplus
extern "C" {
#endif

#include <PiPei.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern GUID  gEdkiiDscPlatformGuid;
extern CHAR8 *gEfiCallerBaseName;


// Guids
extern EFI_GUID gEdkiiS3SmmInitDoneGuid;
extern EFI_GUID gEdkiiMicrocodePatchHobGuid;
extern EFI_GUID gGhcbApicIdsGuid;
extern EFI_GUID gEdkiiEndOfS3ResumeGuid;
extern EFI_GUID gEfiMdeModulePkgTokenSpaceGuid;
extern EFI_GUID gEfiMdePkgTokenSpaceGuid;
extern EFI_GUID gUefiCpuPkgTokenSpaceGuid;

// PPIs
extern EFI_GUID gEdkiiPeiShadowMicrocodePpiGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// PCD definitions
#define _PCD_TOKEN_PcdGhcbBase  3U
#define _PCD_GET_MODE_64_PcdGhcbBase  LibPcdGet64(_PCD_TOKEN_PcdGhcbBase)
#define _PCD_GET_MODE_SIZE_PcdGhcbBase  LibPcdGetSize(_PCD_TOKEN_PcdGhcbBase)
#define _PCD_SET_MODE_64_PcdGhcbBase(Value)  LibPcdSet64(_PCD_TOKEN_PcdGhcbBase, (Value))
#define _PCD_SET_MODE_64_S_PcdGhcbBase(Value)  LibPcdSet64S(_PCD_TOKEN_PcdGhcbBase, (Value))
#define _PCD_TOKEN_PcdConfidentialComputingGuestAttr  8U
#define _PCD_GET_MODE_64_PcdConfidentialComputingGuestAttr  LibPcdGet64(_PCD_TOKEN_PcdConfidentialComputingGuestAttr)
#define _PCD_GET_MODE_SIZE_PcdConfidentialComputingGuestAttr  LibPcdGetSize(_PCD_TOKEN_PcdConfidentialComputingGuestAttr)
#define _PCD_SET_MODE_64_PcdConfidentialComputingGuestAttr(Value)  LibPcdSet64(_PCD_TOKEN_PcdConfidentialComputingGuestAttr, (Value))
#define _PCD_SET_MODE_64_S_PcdConfidentialComputingGuestAttr(Value)  LibPcdSet64S(_PCD_TOKEN_PcdConfidentialComputingGuestAttr, (Value))
#define _PCD_TOKEN_PcdCpuMaxLogicalProcessorNumber  11U
#define _PCD_GET_MODE_32_PcdCpuMaxLogicalProcessorNumber  LibPcdGet32(_PCD_TOKEN_PcdCpuMaxLogicalProcessorNumber)
#define _PCD_GET_MODE_SIZE_PcdCpuMaxLogicalProcessorNumber  LibPcdGetSize(_PCD_TOKEN_PcdCpuMaxLogicalProcessorNumber)
#define _PCD_SET_MODE_32_PcdCpuMaxLogicalProcessorNumber(Value)  LibPcdSet32(_PCD_TOKEN_PcdCpuMaxLogicalProcessorNumber, (Value))
#define _PCD_SET_MODE_32_S_PcdCpuMaxLogicalProcessorNumber(Value)  LibPcdSet32S(_PCD_TOKEN_PcdCpuMaxLogicalProcessorNumber, (Value))
#define _PCD_TOKEN_PcdCpuBootLogicalProcessorNumber  10U
#define _PCD_GET_MODE_32_PcdCpuBootLogicalProcessorNumber  LibPcdGet32(_PCD_TOKEN_PcdCpuBootLogicalProcessorNumber)
#define _PCD_GET_MODE_SIZE_PcdCpuBootLogicalProcessorNumber  LibPcdGetSize(_PCD_TOKEN_PcdCpuBootLogicalProcessorNumber)
#define _PCD_SET_MODE_32_PcdCpuBootLogicalProcessorNumber(Value)  LibPcdSet32(_PCD_TOKEN_PcdCpuBootLogicalProcessorNumber, (Value))
#define _PCD_SET_MODE_32_S_PcdCpuBootLogicalProcessorNumber(Value)  LibPcdSet32S(_PCD_TOKEN_PcdCpuBootLogicalProcessorNumber, (Value))
#define _PCD_TOKEN_PcdCpuApInitTimeOutInMicroSeconds  0U
extern const UINT32 _gPcd_FixedAtBuild_PcdCpuApInitTimeOutInMicroSeconds;
#define _PCD_GET_MODE_32_PcdCpuApInitTimeOutInMicroSeconds  _gPcd_FixedAtBuild_PcdCpuApInitTimeOutInMicroSeconds
//#define _PCD_SET_MODE_32_PcdCpuApInitTimeOutInMicroSeconds  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdCpuApInitTimeOutInMicroSeconds 50000
#define _PCD_SIZE_PcdCpuApInitTimeOutInMicroSeconds 4
#define _PCD_GET_MODE_SIZE_PcdCpuApInitTimeOutInMicroSeconds _PCD_SIZE_PcdCpuApInitTimeOutInMicroSeconds
#define _PCD_TOKEN_PcdCpuApStackSize  0U
extern const UINT32 _gPcd_FixedAtBuild_PcdCpuApStackSize;
#define _PCD_GET_MODE_32_PcdCpuApStackSize  _gPcd_FixedAtBuild_PcdCpuApStackSize
//#define _PCD_SET_MODE_32_PcdCpuApStackSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdCpuApStackSize 0x8000
#define _PCD_SIZE_PcdCpuApStackSize 4
#define _PCD_GET_MODE_SIZE_PcdCpuApStackSize _PCD_SIZE_PcdCpuApStackSize
#define _PCD_TOKEN_PcdCpuMicrocodePatchAddress  0U
extern const UINT64 _gPcd_FixedAtBuild_PcdCpuMicrocodePatchAddress;
#define _PCD_GET_MODE_64_PcdCpuMicrocodePatchAddress  _gPcd_FixedAtBuild_PcdCpuMicrocodePatchAddress
//#define _PCD_SET_MODE_64_PcdCpuMicrocodePatchAddress  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdCpuMicrocodePatchAddress 0x0
#define _PCD_SIZE_PcdCpuMicrocodePatchAddress 8
#define _PCD_GET_MODE_SIZE_PcdCpuMicrocodePatchAddress _PCD_SIZE_PcdCpuMicrocodePatchAddress
#define _PCD_TOKEN_PcdCpuMicrocodePatchRegionSize  0U
extern const UINT64 _gPcd_FixedAtBuild_PcdCpuMicrocodePatchRegionSize;
#define _PCD_GET_MODE_64_PcdCpuMicrocodePatchRegionSize  _gPcd_FixedAtBuild_PcdCpuMicrocodePatchRegionSize
//#define _PCD_SET_MODE_64_PcdCpuMicrocodePatchRegionSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdCpuMicrocodePatchRegionSize 0x0
#define _PCD_SIZE_PcdCpuMicrocodePatchRegionSize 8
#define _PCD_GET_MODE_SIZE_PcdCpuMicrocodePatchRegionSize _PCD_SIZE_PcdCpuMicrocodePatchRegionSize
#define _PCD_TOKEN_PcdCpuApLoopMode  0U
extern const UINT8 _gPcd_FixedAtBuild_PcdCpuApLoopMode;
#define _PCD_GET_MODE_8_PcdCpuApLoopMode  _gPcd_FixedAtBuild_PcdCpuApLoopMode
//#define _PCD_SET_MODE_8_PcdCpuApLoopMode  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdCpuApLoopMode 1
#define _PCD_SIZE_PcdCpuApLoopMode 1
#define _PCD_GET_MODE_SIZE_PcdCpuApLoopMode _PCD_SIZE_PcdCpuApLoopMode
#define _PCD_TOKEN_PcdCpuApTargetCstate  0U
extern const UINT8 _gPcd_FixedAtBuild_PcdCpuApTargetCstate;
#define _PCD_GET_MODE_8_PcdCpuApTargetCstate  _gPcd_FixedAtBuild_PcdCpuApTargetCstate
//#define _PCD_SET_MODE_8_PcdCpuApTargetCstate  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdCpuApTargetCstate 0
#define _PCD_SIZE_PcdCpuApTargetCstate 1
#define _PCD_GET_MODE_SIZE_PcdCpuApTargetCstate _PCD_SIZE_PcdCpuApTargetCstate
#define _PCD_TOKEN_PcdSevEsWorkAreaBase  0U
extern const UINT32 _gPcd_FixedAtBuild_PcdSevEsWorkAreaBase;
#define _PCD_GET_MODE_32_PcdSevEsWorkAreaBase  _gPcd_FixedAtBuild_PcdSevEsWorkAreaBase
//#define _PCD_SET_MODE_32_PcdSevEsWorkAreaBase  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdSevEsWorkAreaBase 8433668
#define _PCD_SIZE_PcdSevEsWorkAreaBase 4
#define _PCD_GET_MODE_SIZE_PcdSevEsWorkAreaBase _PCD_SIZE_PcdSevEsWorkAreaBase
#define _PCD_TOKEN_PcdGhcbHypervisorFeatures  12U
#define _PCD_GET_MODE_64_PcdGhcbHypervisorFeatures  LibPcdGet64(_PCD_TOKEN_PcdGhcbHypervisorFeatures)
#define _PCD_GET_MODE_SIZE_PcdGhcbHypervisorFeatures  LibPcdGetSize(_PCD_TOKEN_PcdGhcbHypervisorFeatures)
#define _PCD_SET_MODE_64_PcdGhcbHypervisorFeatures(Value)  LibPcdSet64(_PCD_TOKEN_PcdGhcbHypervisorFeatures, (Value))
#define _PCD_SET_MODE_64_S_PcdGhcbHypervisorFeatures(Value)  LibPcdSet64S(_PCD_TOKEN_PcdGhcbHypervisorFeatures, (Value))
#define _PCD_TOKEN_PcdFirstTimeWakeUpAPsBySipi  0U
extern const BOOLEAN _gPcd_FixedAtBuild_PcdFirstTimeWakeUpAPsBySipi;
#define _PCD_GET_MODE_BOOL_PcdFirstTimeWakeUpAPsBySipi  _gPcd_FixedAtBuild_PcdFirstTimeWakeUpAPsBySipi
//#define _PCD_SET_MODE_BOOL_PcdFirstTimeWakeUpAPsBySipi  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdFirstTimeWakeUpAPsBySipi 0
#define _PCD_SIZE_PcdFirstTimeWakeUpAPsBySipi 1
#define _PCD_GET_MODE_SIZE_PcdFirstTimeWakeUpAPsBySipi _PCD_SIZE_PcdFirstTimeWakeUpAPsBySipi


#ifdef __cplusplus
}
#endif

#endif
