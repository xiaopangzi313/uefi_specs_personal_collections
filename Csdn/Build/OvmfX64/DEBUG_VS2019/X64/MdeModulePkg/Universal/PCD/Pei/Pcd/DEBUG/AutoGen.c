/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.c
  Abstract:       Auto-generated AutoGen.c for building module or library.
**/
#include <PiPei.h>
#include <Library/DebugLib.h>
#include <Library/PeimEntryPoint.h>

GLOBAL_REMOVE_IF_UNREFERENCED GUID gEfiCallerIdGuid = {0x9B3ADA4F, 0xAE56, 0x4c24, {0x8D, 0xEA, 0xF0, 0x3B, 0x75, 0x58, 0xAE, 0x50}};

GLOBAL_REMOVE_IF_UNREFERENCED GUID gEdkiiDscPlatformGuid = {0x5a9e7754, 0xd81b, 0x49ea, {0x85, 0xad, 0x69, 0xea, 0xa7, 0xb1, 0x53, 0x9b}};

GLOBAL_REMOVE_IF_UNREFERENCED CHAR8 *gEfiCallerBaseName = "PcdPeim";

// Guids
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gPcdDataBaseHobGuid = { 0xEA296D92, 0x0B69, 0x423C, { 0x8C, 0x28, 0x33, 0xB4, 0xE0, 0xA9, 0x12, 0x68 }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gPcdDataBaseSignatureGuid = { 0x3c7d193c, 0x682c, 0x4c14, { 0xa6, 0x8f, 0x55, 0x2d, 0xea, 0x4f, 0x43, 0x7e }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiMdeModulePkgTokenSpaceGuid = { 0xA1AFF049, 0xFDEB, 0x442a, { 0xB3, 0x20, 0x13, 0xAB, 0x4C, 0xB7, 0x2B, 0xBC }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiMdePkgTokenSpaceGuid = { 0x914AEBE7, 0x4635, 0x459b, { 0xAA, 0x1C, 0x11, 0xE2, 0x19, 0xB0, 0x3A, 0x10 }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiHobMemoryAllocStackGuid = { 0x4ED4BF27, 0x4092, 0x42E9, { 0x80, 0x7D, 0x52, 0x7B, 0x1D, 0x00, 0xC9, 0xBD }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiHobMemoryAllocBspStoreGuid = { 0x564B33CD, 0xC92A, 0x4593, { 0x90, 0xBF, 0x24, 0x73, 0xE4, 0x3C, 0x63, 0x22 }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiHobMemoryAllocModuleGuid = { 0xF8E21975, 0x0899, 0x4F58, { 0xA4, 0xBE, 0x55, 0x25, 0xA9, 0xC6, 0xD7, 0x7A }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiFirmwareFileSystem2Guid = { 0x8c8ce578, 0x8a3d, 0x4f1c, { 0x99, 0x35, 0x89, 0x61, 0x85, 0xc3, 0x2d, 0xd3 }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gUefiOvmfPkgTokenSpaceGuid = {0x93bb96af, 0xb9f2, 0x4eb8, {0x94, 0x62, 0xe0, 0xba, 0x74, 0x56, 0x42, 0x36}};

// PPIs
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiPeiReadOnlyVariable2PpiGuid = { 0x2ab86ef5, 0xecb5, 0x4134, { 0xb5, 0x56, 0x38, 0x54, 0xca, 0x1f, 0xe1, 0xb4 } };
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gPcdPpiGuid = { 0x6e81c58, 0x4ad7, 0x44bc, { 0x83, 0x90, 0xf1, 0x2, 0x65, 0xf7, 0x24, 0x80 } };
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiPeiPcdPpiGuid = { 0x1f34d25, 0x4de2, 0x23ad, { 0x3f, 0xf3, 0x36, 0x35, 0x3f, 0xf3, 0x23, 0xf1 } };
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gGetPcdInfoPpiGuid = { 0x4d8b155b, 0xc059, 0x4c8f, { 0x89, 0x26,  0x6, 0xfd, 0x43, 0x31, 0xdb, 0x8a } };
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiGetPcdInfoPpiGuid = { 0xa60c6b59, 0xe459, 0x425d, { 0x9c, 0x69,  0xb, 0xcc, 0x9c, 0xb2, 0x7d, 0x81 } };
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiEndOfPeiSignalPpiGuid = {0x605EA650, 0xC65C, 0x42e1, {0xBA, 0x80, 0x91, 0xA5, 0x2A, 0xB6, 0x18, 0xC6 } };
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiPeiFirmwareVolumeInfoPpiGuid = { 0x49edb1c1, 0xbf21, 0x4761, { 0xbb, 0x12, 0xeb, 0x0, 0x31, 0xaa, 0xbb, 0x39 } };
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiPeiFirmwareVolumeInfo2PpiGuid = { 0xea7ca24b, 0xded5, 0x4dad, { 0xa3, 0x89, 0xbf, 0x82, 0x7e, 0x8f, 0x9b, 0x38 } };

// Definition of SkuId Array
GLOBAL_REMOVE_IF_UNREFERENCED UINT64 _gPcd_SkuId_Array[] = {0x0};

// Definition of PCDs used in this module
GLOBAL_REMOVE_IF_UNREFERENCED const BOOLEAN _gPcd_FixedAtBuild_PcdPeiFullPcdDatabaseEnable = _PCD_VALUE_PcdPeiFullPcdDatabaseEnable;
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdVpdBaseAddress = _PCD_VALUE_PcdVpdBaseAddress;
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdMaxPeiPcdCallBackNumberPerPcdEntry = _PCD_VALUE_PcdMaxPeiPcdCallBackNumberPerPcdEntry;

// Definition of PCDs used in libraries

#define _PCD_TOKEN_PcdVerifyNodeInList  0U
#define _PCD_SIZE_PcdVerifyNodeInList 1
#define _PCD_GET_MODE_SIZE_PcdVerifyNodeInList  _PCD_SIZE_PcdVerifyNodeInList 
#define _PCD_VALUE_PcdVerifyNodeInList  ((BOOLEAN)0U)
GLOBAL_REMOVE_IF_UNREFERENCED const BOOLEAN _gPcd_FixedAtBuild_PcdVerifyNodeInList = _PCD_VALUE_PcdVerifyNodeInList;
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdVerifyNodeInList;
#define _PCD_GET_MODE_BOOL_PcdVerifyNodeInList  _gPcd_FixedAtBuild_PcdVerifyNodeInList
//#define _PCD_SET_MODE_BOOL_PcdVerifyNodeInList  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdMaximumLinkedListLength  0U
#define _PCD_SIZE_PcdMaximumLinkedListLength 4
#define _PCD_GET_MODE_SIZE_PcdMaximumLinkedListLength  _PCD_SIZE_PcdMaximumLinkedListLength 
#define _PCD_VALUE_PcdMaximumLinkedListLength  0U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdMaximumLinkedListLength = _PCD_VALUE_PcdMaximumLinkedListLength;
extern const  UINT32  _gPcd_FixedAtBuild_PcdMaximumLinkedListLength;
#define _PCD_GET_MODE_32_PcdMaximumLinkedListLength  _gPcd_FixedAtBuild_PcdMaximumLinkedListLength
//#define _PCD_SET_MODE_32_PcdMaximumLinkedListLength  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdMaximumAsciiStringLength  0U
#define _PCD_SIZE_PcdMaximumAsciiStringLength 4
#define _PCD_GET_MODE_SIZE_PcdMaximumAsciiStringLength  _PCD_SIZE_PcdMaximumAsciiStringLength 
#define _PCD_VALUE_PcdMaximumAsciiStringLength  1000000U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdMaximumAsciiStringLength = _PCD_VALUE_PcdMaximumAsciiStringLength;
extern const  UINT32  _gPcd_FixedAtBuild_PcdMaximumAsciiStringLength;
#define _PCD_GET_MODE_32_PcdMaximumAsciiStringLength  _gPcd_FixedAtBuild_PcdMaximumAsciiStringLength
//#define _PCD_SET_MODE_32_PcdMaximumAsciiStringLength  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdMaximumUnicodeStringLength  0U
#define _PCD_SIZE_PcdMaximumUnicodeStringLength 4
#define _PCD_GET_MODE_SIZE_PcdMaximumUnicodeStringLength  _PCD_SIZE_PcdMaximumUnicodeStringLength 
#define _PCD_VALUE_PcdMaximumUnicodeStringLength  1000000U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdMaximumUnicodeStringLength = _PCD_VALUE_PcdMaximumUnicodeStringLength;
extern const  UINT32  _gPcd_FixedAtBuild_PcdMaximumUnicodeStringLength;
#define _PCD_GET_MODE_32_PcdMaximumUnicodeStringLength  _gPcd_FixedAtBuild_PcdMaximumUnicodeStringLength
//#define _PCD_SET_MODE_32_PcdMaximumUnicodeStringLength  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdControlFlowEnforcementPropertyMask  0U
#define _PCD_SIZE_PcdControlFlowEnforcementPropertyMask 4
#define _PCD_GET_MODE_SIZE_PcdControlFlowEnforcementPropertyMask  _PCD_SIZE_PcdControlFlowEnforcementPropertyMask 
#define _PCD_VALUE_PcdControlFlowEnforcementPropertyMask  0x0U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdControlFlowEnforcementPropertyMask = _PCD_VALUE_PcdControlFlowEnforcementPropertyMask;
extern const  UINT32  _gPcd_FixedAtBuild_PcdControlFlowEnforcementPropertyMask;
#define _PCD_GET_MODE_32_PcdControlFlowEnforcementPropertyMask  _gPcd_FixedAtBuild_PcdControlFlowEnforcementPropertyMask
//#define _PCD_SET_MODE_32_PcdControlFlowEnforcementPropertyMask  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdSpeculationBarrierType  0U
#define _PCD_SIZE_PcdSpeculationBarrierType 1
#define _PCD_GET_MODE_SIZE_PcdSpeculationBarrierType  _PCD_SIZE_PcdSpeculationBarrierType 
#define _PCD_VALUE_PcdSpeculationBarrierType  0x01U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT8 _gPcd_FixedAtBuild_PcdSpeculationBarrierType = _PCD_VALUE_PcdSpeculationBarrierType;
extern const  UINT8  _gPcd_FixedAtBuild_PcdSpeculationBarrierType;
#define _PCD_GET_MODE_8_PcdSpeculationBarrierType  _gPcd_FixedAtBuild_PcdSpeculationBarrierType
//#define _PCD_SET_MODE_8_PcdSpeculationBarrierType  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdOvmfWorkAreaBase  0U
#define _PCD_SIZE_PcdOvmfWorkAreaBase 4
#define _PCD_GET_MODE_SIZE_PcdOvmfWorkAreaBase  _PCD_SIZE_PcdOvmfWorkAreaBase 
#define _PCD_VALUE_PcdOvmfWorkAreaBase  0x0080B000U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdOvmfWorkAreaBase = _PCD_VALUE_PcdOvmfWorkAreaBase;
extern const  UINT32  _gPcd_FixedAtBuild_PcdOvmfWorkAreaBase;
#define _PCD_GET_MODE_32_PcdOvmfWorkAreaBase  _gPcd_FixedAtBuild_PcdOvmfWorkAreaBase
//#define _PCD_SET_MODE_32_PcdOvmfWorkAreaBase  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdDebugPrintErrorLevel  0U
#define _PCD_SIZE_PcdDebugPrintErrorLevel 4
#define _PCD_GET_MODE_SIZE_PcdDebugPrintErrorLevel  _PCD_SIZE_PcdDebugPrintErrorLevel 
#define _PCD_VALUE_PcdDebugPrintErrorLevel  0x8000004FU
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdDebugPrintErrorLevel = _PCD_VALUE_PcdDebugPrintErrorLevel;
extern const  UINT32  _gPcd_FixedAtBuild_PcdDebugPrintErrorLevel;
#define _PCD_GET_MODE_32_PcdDebugPrintErrorLevel  _gPcd_FixedAtBuild_PcdDebugPrintErrorLevel
//#define _PCD_SET_MODE_32_PcdDebugPrintErrorLevel  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdDebugClearMemoryValue  0U
#define _PCD_SIZE_PcdDebugClearMemoryValue 1
#define _PCD_GET_MODE_SIZE_PcdDebugClearMemoryValue  _PCD_SIZE_PcdDebugClearMemoryValue 
#define _PCD_VALUE_PcdDebugClearMemoryValue  0xAFU
GLOBAL_REMOVE_IF_UNREFERENCED const UINT8 _gPcd_FixedAtBuild_PcdDebugClearMemoryValue = _PCD_VALUE_PcdDebugClearMemoryValue;
extern const  UINT8  _gPcd_FixedAtBuild_PcdDebugClearMemoryValue;
#define _PCD_GET_MODE_8_PcdDebugClearMemoryValue  _gPcd_FixedAtBuild_PcdDebugClearMemoryValue
//#define _PCD_SET_MODE_8_PcdDebugClearMemoryValue  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdDebugPropertyMask  0U
#define _PCD_SIZE_PcdDebugPropertyMask 1
#define _PCD_GET_MODE_SIZE_PcdDebugPropertyMask  _PCD_SIZE_PcdDebugPropertyMask 
#define _PCD_VALUE_PcdDebugPropertyMask  0x2FU
GLOBAL_REMOVE_IF_UNREFERENCED const UINT8 _gPcd_FixedAtBuild_PcdDebugPropertyMask = _PCD_VALUE_PcdDebugPropertyMask;
extern const  UINT8  _gPcd_FixedAtBuild_PcdDebugPropertyMask;
#define _PCD_GET_MODE_8_PcdDebugPropertyMask  _gPcd_FixedAtBuild_PcdDebugPropertyMask
//#define _PCD_SET_MODE_8_PcdDebugPropertyMask  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdFixedDebugPrintErrorLevel  0U
#define _PCD_SIZE_PcdFixedDebugPrintErrorLevel 4
#define _PCD_GET_MODE_SIZE_PcdFixedDebugPrintErrorLevel  _PCD_SIZE_PcdFixedDebugPrintErrorLevel 
#define _PCD_VALUE_PcdFixedDebugPrintErrorLevel  0xFFFFFFFFU
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdFixedDebugPrintErrorLevel = _PCD_VALUE_PcdFixedDebugPrintErrorLevel;
extern const  UINT32  _gPcd_FixedAtBuild_PcdFixedDebugPrintErrorLevel;
#define _PCD_GET_MODE_32_PcdFixedDebugPrintErrorLevel  _gPcd_FixedAtBuild_PcdFixedDebugPrintErrorLevel
//#define _PCD_SET_MODE_32_PcdFixedDebugPrintErrorLevel  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
//SKUID: DEFAULT
//
// External PCD database debug information
//
#if 0
PEI_PCD_DATABASE_INIT gPEIPcdDbInit = {
  /* SkuIdTable */
  { 1, 0U,  },
  { 0x800000000ULL }, /*  PcdPciMmio64Size_93bb96af_b9f2_4eb8_9462_e0ba74564236[1] */


  { 64U }, /*  PcdCpuMaxLogicalProcessorNumber_ac05bf33_995a_4ed4_aab8_ef7ae80f5cb0[1] */


  /* VPD */

  /* ExMapTable */
  {
    { 0x00030005U, 23U, 0U },
    { 0x00030004U, 24U, 0U },
    { 0x00030006U, 25U, 0U },

  },
  /* LocalTokenNumberTable */
  {
    offsetof(PEI_PCD_DATABASE, Uninit.PcdAcpiS3Enable_a1aff049_fdeb_442a_b320_13ab4cb72bbc) | PCD_TYPE_DATA | PCD_DATUM_TYPE_UINT8_BOOLEAN,
    offsetof(PEI_PCD_DATABASE, Uninit.PcdEmuVariableNvStoreReserved_a1aff049_fdeb_442a_b320_13ab4cb72bbc) | PCD_TYPE_DATA | PCD_DATUM_TYPE_UINT64,
    offsetof(PEI_PCD_DATABASE, Uninit.PcdGhcbBase_a1aff049_fdeb_442a_b320_13ab4cb72bbc) | PCD_TYPE_DATA | PCD_DATUM_TYPE_UINT64,
    offsetof(PEI_PCD_DATABASE, Uninit.PcdGhcbSize_a1aff049_fdeb_442a_b320_13ab4cb72bbc) | PCD_TYPE_DATA | PCD_DATUM_TYPE_UINT64,
    offsetof(PEI_PCD_DATABASE, Uninit.PcdPteMemoryEncryptionAddressOrMask_a1aff049_fdeb_442a_b320_13ab4cb72bbc) | PCD_TYPE_DATA | PCD_DATUM_TYPE_UINT64,
    offsetof(PEI_PCD_DATABASE, Uninit.PcdSetNxForStack_a1aff049_fdeb_442a_b320_13ab4cb72bbc) | PCD_TYPE_DATA | PCD_DATUM_TYPE_UINT8_BOOLEAN,
    offsetof(PEI_PCD_DATABASE, Uninit.PcdTdxSharedBitMask_a1aff049_fdeb_442a_b320_13ab4cb72bbc) | PCD_TYPE_DATA | PCD_DATUM_TYPE_UINT64,
    offsetof(PEI_PCD_DATABASE, Uninit.PcdConfidentialComputingGuestAttr_914aebe7_4635_459b_aa1c_11e219b03a10) | PCD_TYPE_DATA | PCD_DATUM_TYPE_UINT64,
    offsetof(PEI_PCD_DATABASE, Uninit.PcdOptionRomImageVerificationPolicy_0d3fb176_9569_4d51_a3ef_7d61c64feaba) | PCD_TYPE_DATA | PCD_DATUM_TYPE_UINT32,
    offsetof(PEI_PCD_DATABASE, Uninit.PcdCpuBootLogicalProcessorNumber_ac05bf33_995a_4ed4_aab8_ef7ae80f5cb0) | PCD_TYPE_DATA | PCD_DATUM_TYPE_UINT32,
    offsetof(PEI_PCD_DATABASE, Init.PcdCpuMaxLogicalProcessorNumber_ac05bf33_995a_4ed4_aab8_ef7ae80f5cb0) | PCD_TYPE_DATA | PCD_DATUM_TYPE_UINT32,
    offsetof(PEI_PCD_DATABASE, Uninit.PcdGhcbHypervisorFeatures_ac05bf33_995a_4ed4_aab8_ef7ae80f5cb0) | PCD_TYPE_DATA | PCD_DATUM_TYPE_UINT64,
    offsetof(PEI_PCD_DATABASE, Uninit.PcdSevEsIsEnabled_ac05bf33_995a_4ed4_aab8_ef7ae80f5cb0) | PCD_TYPE_DATA | PCD_DATUM_TYPE_UINT8_BOOLEAN,
    offsetof(PEI_PCD_DATABASE, Uninit.PcdOvmfHostBridgePciDevId_93bb96af_b9f2_4eb8_9462_e0ba74564236) | PCD_DATUM_TYPE_UINT16 | PCD_TYPE_DATA,
    offsetof(PEI_PCD_DATABASE, Uninit.PcdPciIoBase_93bb96af_b9f2_4eb8_9462_e0ba74564236) | PCD_TYPE_DATA | PCD_DATUM_TYPE_UINT64,
    offsetof(PEI_PCD_DATABASE, Uninit.PcdPciIoSize_93bb96af_b9f2_4eb8_9462_e0ba74564236) | PCD_TYPE_DATA | PCD_DATUM_TYPE_UINT64,
    offsetof(PEI_PCD_DATABASE, Uninit.PcdPciMmio32Base_93bb96af_b9f2_4eb8_9462_e0ba74564236) | PCD_TYPE_DATA | PCD_DATUM_TYPE_UINT64,
    offsetof(PEI_PCD_DATABASE, Uninit.PcdPciMmio32Size_93bb96af_b9f2_4eb8_9462_e0ba74564236) | PCD_TYPE_DATA | PCD_DATUM_TYPE_UINT64,
    offsetof(PEI_PCD_DATABASE, Uninit.PcdPciMmio64Base_93bb96af_b9f2_4eb8_9462_e0ba74564236) | PCD_TYPE_DATA | PCD_DATUM_TYPE_UINT64,
    offsetof(PEI_PCD_DATABASE, Init.PcdPciMmio64Size_93bb96af_b9f2_4eb8_9462_e0ba74564236) | PCD_TYPE_DATA | PCD_DATUM_TYPE_UINT64,
    offsetof(PEI_PCD_DATABASE, Uninit.PcdQ35SmramAtDefaultSmbase_93bb96af_b9f2_4eb8_9462_e0ba74564236) | PCD_TYPE_DATA | PCD_DATUM_TYPE_UINT8_BOOLEAN,
    offsetof(PEI_PCD_DATABASE, Init.PcdQ35TsegMbytes_93bb96af_b9f2_4eb8_9462_e0ba74564236) | PCD_DATUM_TYPE_UINT16 | PCD_TYPE_DATA,
    offsetof(PEI_PCD_DATABASE, Init.PcdNvStoreDefaultValueBuffer_a1aff049_fdeb_442a_b320_13ab4cb72bbc) | PCD_TYPE_STRING,
    offsetof(PEI_PCD_DATABASE, Uninit.PcdSetNvStoreDefaultId_a1aff049_fdeb_442a_b320_13ab4cb72bbc) | PCD_DATUM_TYPE_UINT16 | PCD_TYPE_DATA,
    offsetof(PEI_PCD_DATABASE, Uninit.PcdVpdBaseAddress64_a1aff049_fdeb_442a_b320_13ab4cb72bbc) | PCD_TYPE_DATA | PCD_DATUM_TYPE_UINT64,

  },
  /* GuidTable */
  {
    { 0xA1AFF049, 0xFDEB, 0x442a, { 0xB3, 0x20, 0x13, 0xAB, 0x4C, 0xB7, 0x2B, 0xBC }},

  },
  { 0U }, /* PcdNvStoreDefaultValueBuffer_a1aff049_fdeb_442a_b320_13ab4cb72bbc[1] */


/* SkuHead */
  {
   offsetof (PEI_PCD_DATABASE, Uninit.PcdAcpiS3Enable_a1aff049_fdeb_442a_b320_13ab4cb72bbc) | PCD_TYPE_DATA | PCD_DATUM_TYPE_UINT8_BOOLEAN, /* */
           offsetof (PEI_PCD_DATABASE, Uninit.SkuHead)  /* */
   offsetof (PEI_PCD_DATABASE, Uninit.PcdEmuVariableNvStoreReserved_a1aff049_fdeb_442a_b320_13ab4cb72bbc) | PCD_TYPE_DATA | PCD_DATUM_TYPE_UINT64, /* */
           offsetof (PEI_PCD_DATABASE, Uninit.SkuHead)  /* */
   offsetof (PEI_PCD_DATABASE, Uninit.PcdGhcbBase_a1aff049_fdeb_442a_b320_13ab4cb72bbc) | PCD_TYPE_DATA | PCD_DATUM_TYPE_UINT64, /* */
           offsetof (PEI_PCD_DATABASE, Uninit.SkuHead)  /* */
   offsetof (PEI_PCD_DATABASE, Uninit.PcdGhcbSize_a1aff049_fdeb_442a_b320_13ab4cb72bbc) | PCD_TYPE_DATA | PCD_DATUM_TYPE_UINT64, /* */
           offsetof (PEI_PCD_DATABASE, Uninit.SkuHead)  /* */
   offsetof (PEI_PCD_DATABASE, Uninit.PcdPteMemoryEncryptionAddressOrMask_a1aff049_fdeb_442a_b320_13ab4cb72bbc) | PCD_TYPE_DATA | PCD_DATUM_TYPE_UINT64, /* */
           offsetof (PEI_PCD_DATABASE, Uninit.SkuHead)  /* */
   offsetof (PEI_PCD_DATABASE, Uninit.PcdSetNxForStack_a1aff049_fdeb_442a_b320_13ab4cb72bbc) | PCD_TYPE_DATA | PCD_DATUM_TYPE_UINT8_BOOLEAN, /* */
           offsetof (PEI_PCD_DATABASE, Uninit.SkuHead)  /* */
   offsetof (PEI_PCD_DATABASE, Uninit.PcdTdxSharedBitMask_a1aff049_fdeb_442a_b320_13ab4cb72bbc) | PCD_TYPE_DATA | PCD_DATUM_TYPE_UINT64, /* */
           offsetof (PEI_PCD_DATABASE, Uninit.SkuHead)  /* */
   offsetof (PEI_PCD_DATABASE, Uninit.PcdConfidentialComputingGuestAttr_914aebe7_4635_459b_aa1c_11e219b03a10) | PCD_TYPE_DATA | PCD_DATUM_TYPE_UINT64, /* */
           offsetof (PEI_PCD_DATABASE, Uninit.SkuHead)  /* */
   offsetof (PEI_PCD_DATABASE, Uninit.PcdOptionRomImageVerificationPolicy_0d3fb176_9569_4d51_a3ef_7d61c64feaba) | PCD_TYPE_DATA | PCD_DATUM_TYPE_UINT32, /* */
           offsetof (PEI_PCD_DATABASE, Uninit.SkuHead)  /* */
   offsetof (PEI_PCD_DATABASE, Uninit.PcdCpuBootLogicalProcessorNumber_ac05bf33_995a_4ed4_aab8_ef7ae80f5cb0) | PCD_TYPE_DATA | PCD_DATUM_TYPE_UINT32, /* */
           offsetof (PEI_PCD_DATABASE, Uninit.SkuHead)  /* */
   offsetof (PEI_PCD_DATABASE, Init.PcdCpuMaxLogicalProcessorNumber_ac05bf33_995a_4ed4_aab8_ef7ae80f5cb0) | PCD_TYPE_DATA | PCD_DATUM_TYPE_UINT32, /* */
           offsetof (PEI_PCD_DATABASE, Init.SkuHead)  /* */
   offsetof (PEI_PCD_DATABASE, Uninit.PcdGhcbHypervisorFeatures_ac05bf33_995a_4ed4_aab8_ef7ae80f5cb0) | PCD_TYPE_DATA | PCD_DATUM_TYPE_UINT64, /* */
           offsetof (PEI_PCD_DATABASE, Uninit.SkuHead)  /* */
   offsetof (PEI_PCD_DATABASE, Uninit.PcdSevEsIsEnabled_ac05bf33_995a_4ed4_aab8_ef7ae80f5cb0) | PCD_TYPE_DATA | PCD_DATUM_TYPE_UINT8_BOOLEAN, /* */
           offsetof (PEI_PCD_DATABASE, Uninit.SkuHead)  /* */
   offsetof (PEI_PCD_DATABASE, Uninit.PcdOvmfHostBridgePciDevId_93bb96af_b9f2_4eb8_9462_e0ba74564236) | PCD_DATUM_TYPE_UINT16 | PCD_TYPE_DATA, /* */
           offsetof (PEI_PCD_DATABASE, Uninit.SkuHead)  /* */
   offsetof (PEI_PCD_DATABASE, Uninit.PcdPciIoBase_93bb96af_b9f2_4eb8_9462_e0ba74564236) | PCD_TYPE_DATA | PCD_DATUM_TYPE_UINT64, /* */
           offsetof (PEI_PCD_DATABASE, Uninit.SkuHead)  /* */
   offsetof (PEI_PCD_DATABASE, Uninit.PcdPciIoSize_93bb96af_b9f2_4eb8_9462_e0ba74564236) | PCD_TYPE_DATA | PCD_DATUM_TYPE_UINT64, /* */
           offsetof (PEI_PCD_DATABASE, Uninit.SkuHead)  /* */
   offsetof (PEI_PCD_DATABASE, Uninit.PcdPciMmio32Base_93bb96af_b9f2_4eb8_9462_e0ba74564236) | PCD_TYPE_DATA | PCD_DATUM_TYPE_UINT64, /* */
           offsetof (PEI_PCD_DATABASE, Uninit.SkuHead)  /* */
   offsetof (PEI_PCD_DATABASE, Uninit.PcdPciMmio32Size_93bb96af_b9f2_4eb8_9462_e0ba74564236) | PCD_TYPE_DATA | PCD_DATUM_TYPE_UINT64, /* */
           offsetof (PEI_PCD_DATABASE, Uninit.SkuHead)  /* */
   offsetof (PEI_PCD_DATABASE, Uninit.PcdPciMmio64Base_93bb96af_b9f2_4eb8_9462_e0ba74564236) | PCD_TYPE_DATA | PCD_DATUM_TYPE_UINT64, /* */
           offsetof (PEI_PCD_DATABASE, Uninit.SkuHead)  /* */
   offsetof (PEI_PCD_DATABASE, Init.PcdPciMmio64Size_93bb96af_b9f2_4eb8_9462_e0ba74564236) | PCD_TYPE_DATA | PCD_DATUM_TYPE_UINT64, /* */
           offsetof (PEI_PCD_DATABASE, Init.SkuHead)  /* */
   offsetof (PEI_PCD_DATABASE, Uninit.PcdQ35SmramAtDefaultSmbase_93bb96af_b9f2_4eb8_9462_e0ba74564236) | PCD_TYPE_DATA | PCD_DATUM_TYPE_UINT8_BOOLEAN, /* */
           offsetof (PEI_PCD_DATABASE, Uninit.SkuHead)  /* */
   offsetof (PEI_PCD_DATABASE, Init.PcdQ35TsegMbytes_93bb96af_b9f2_4eb8_9462_e0ba74564236) | PCD_DATUM_TYPE_UINT16 | PCD_TYPE_DATA, /* */
           offsetof (PEI_PCD_DATABASE, Init.SkuHead)  /* */
   offsetof (PEI_PCD_DATABASE, Init.PcdNvStoreDefaultValueBuffer_a1aff049_fdeb_442a_b320_13ab4cb72bbc) | PCD_TYPE_STRING, /* */
           offsetof (PEI_PCD_DATABASE, Init.SkuHead)  /* */
   offsetof (PEI_PCD_DATABASE, Uninit.PcdSetNvStoreDefaultId_a1aff049_fdeb_442a_b320_13ab4cb72bbc) | PCD_DATUM_TYPE_UINT16 | PCD_TYPE_DATA, /* */
           offsetof (PEI_PCD_DATABASE, Uninit.SkuHead)  /* */
   offsetof (PEI_PCD_DATABASE, Uninit.PcdVpdBaseAddress64_a1aff049_fdeb_442a_b320_13ab4cb72bbc) | PCD_TYPE_DATA | PCD_DATUM_TYPE_UINT64, /* */
           offsetof (PEI_PCD_DATABASE, Uninit.SkuHead)  /* */
  
  },
 /* StringTable */
  {0x0}, /* PcdNvStoreDefaultValueBuffer_a1aff049_fdeb_442a_b320_13ab4cb72bbc */

  /* SizeTable */
  {
    1U, ['1U'], /* PcdNvStoreDefaultValueBuffer_a1aff049_fdeb_442a_b320_13ab4cb72bbc */

  },
  { 8U }, /*  PcdQ35TsegMbytes_93bb96af_b9f2_4eb8_9462_e0ba74564236[1] */






  0
};
#endif


RETURN_STATUS
EFIAPI
BaseDebugLibSerialPortConstructor (
  VOID
  );


VOID
EFIAPI
ProcessLibraryConstructorList (
  IN       EFI_PEI_FILE_HANDLE       FileHandle,
  IN CONST EFI_PEI_SERVICES          **PeiServices
  )
{
  EFI_STATUS  Status;

  Status = BaseDebugLibSerialPortConstructor ();
  ASSERT_RETURN_ERROR (Status);

}



VOID
EFIAPI
ProcessLibraryDestructorList (
  IN       EFI_PEI_FILE_HANDLE       FileHandle,
  IN CONST EFI_PEI_SERVICES          **PeiServices
  )
{

}

GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPeimRevision = 0x00000000U;

EFI_STATUS
EFIAPI
ProcessModuleEntryPointList (
  IN       EFI_PEI_FILE_HANDLE  FileHandle,
  IN CONST EFI_PEI_SERVICES     **PeiServices
  )

{
  return PcdPeimInit (FileHandle, PeiServices);
}


GLOBAL_REMOVE_IF_UNREFERENCED const UINT8 _gDriverUnloadImageCount = 0U;

EFI_STATUS
EFIAPI
ProcessModuleUnloadList (
  IN EFI_HANDLE        ImageHandle
  )
{
  return EFI_SUCCESS;
}
