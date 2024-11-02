/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_9B3ADA4F_AE56_4c24_8DEA_F03B7558AE50
#define _AUTOGENH_9B3ADA4F_AE56_4c24_8DEA_F03B7558AE50

#ifdef __cplusplus
extern "C" {
#endif

#include <PiPei.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern GUID  gEdkiiDscPlatformGuid;
extern CHAR8 *gEfiCallerBaseName;

#define EFI_CALLER_ID_GUID \
  {0x9B3ADA4F, 0xAE56, 0x4c24, {0x8D, 0xEA, 0xF0, 0x3B, 0x75, 0x58, 0xAE, 0x50}}
#define EDKII_DSC_PLATFORM_GUID \
  {0x5a9e7754, 0xd81b, 0x49ea, {0x85, 0xad, 0x69, 0xea, 0xa7, 0xb1, 0x53, 0x9b}}

// Guids
extern EFI_GUID gPcdDataBaseHobGuid;
extern EFI_GUID gPcdDataBaseSignatureGuid;
extern EFI_GUID gEfiMdeModulePkgTokenSpaceGuid;
extern EFI_GUID gEfiMdePkgTokenSpaceGuid;
extern EFI_GUID gEfiHobMemoryAllocStackGuid;
extern EFI_GUID gEfiHobMemoryAllocBspStoreGuid;
extern EFI_GUID gEfiHobMemoryAllocModuleGuid;
extern EFI_GUID gEfiFirmwareFileSystem2Guid;
extern EFI_GUID gUefiOvmfPkgTokenSpaceGuid;

// PPIs
extern EFI_GUID gEfiPeiReadOnlyVariable2PpiGuid;
extern EFI_GUID gPcdPpiGuid;
extern EFI_GUID gEfiPeiPcdPpiGuid;
extern EFI_GUID gGetPcdInfoPpiGuid;
extern EFI_GUID gEfiGetPcdInfoPpiGuid;
extern EFI_GUID gEfiEndOfPeiSignalPpiGuid;
extern EFI_GUID gEfiPeiFirmwareVolumeInfoPpiGuid;
extern EFI_GUID gEfiPeiFirmwareVolumeInfo2PpiGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// Definition of PCD Token Space GUIDs used in this module

extern EFI_GUID gEfiMdeModulePkgTokenSpaceGuid;

// Definition of PCDs used in this module

#define _PCD_TOKEN_PcdPeiFullPcdDatabaseEnable  0U
#define _PCD_SIZE_PcdPeiFullPcdDatabaseEnable 1
#define _PCD_GET_MODE_SIZE_PcdPeiFullPcdDatabaseEnable  _PCD_SIZE_PcdPeiFullPcdDatabaseEnable 
#define _PCD_VALUE_PcdPeiFullPcdDatabaseEnable  ((BOOLEAN)1U)
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdPeiFullPcdDatabaseEnable;
#define _PCD_GET_MODE_BOOL_PcdPeiFullPcdDatabaseEnable  _gPcd_FixedAtBuild_PcdPeiFullPcdDatabaseEnable
//#define _PCD_SET_MODE_BOOL_PcdPeiFullPcdDatabaseEnable  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdVpdBaseAddress  0U
#define _PCD_SIZE_PcdVpdBaseAddress 4
#define _PCD_GET_MODE_SIZE_PcdVpdBaseAddress  _PCD_SIZE_PcdVpdBaseAddress 
#define _PCD_VALUE_PcdVpdBaseAddress  0x0U
extern const  UINT32  _gPcd_FixedAtBuild_PcdVpdBaseAddress;
#define _PCD_GET_MODE_32_PcdVpdBaseAddress  _gPcd_FixedAtBuild_PcdVpdBaseAddress
//#define _PCD_SET_MODE_32_PcdVpdBaseAddress  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_gEfiMdeModulePkgTokenSpaceGuid_PcdVpdBaseAddress64  196614U
#define _PCD_TOKEN_PcdVpdBaseAddress64  _PCD_TOKEN_gEfiMdeModulePkgTokenSpaceGuid_PcdVpdBaseAddress64
#define _PCD_GET_MODE_64_PcdVpdBaseAddress64  LibPcdGetEx64(&gEfiMdeModulePkgTokenSpaceGuid, _PCD_TOKEN_PcdVpdBaseAddress64)
#define _PCD_GET_MODE_SIZE_PcdVpdBaseAddress64 LibPcdGetExSize(&gEfiMdeModulePkgTokenSpaceGuid, _PCD_TOKEN_PcdVpdBaseAddress64)
#define _PCD_SET_MODE_64_PcdVpdBaseAddress64(Value)  LibPcdSetEx64(&gEfiMdeModulePkgTokenSpaceGuid, _PCD_TOKEN_PcdVpdBaseAddress64, (Value))
#define _PCD_SET_MODE_64_S_PcdVpdBaseAddress64(Value)  LibPcdSetEx64S(&gEfiMdeModulePkgTokenSpaceGuid, _PCD_TOKEN_PcdVpdBaseAddress64, (Value))

#define _PCD_TOKEN_PcdMaxPeiPcdCallBackNumberPerPcdEntry  0U
#define _PCD_SIZE_PcdMaxPeiPcdCallBackNumberPerPcdEntry 4
#define _PCD_GET_MODE_SIZE_PcdMaxPeiPcdCallBackNumberPerPcdEntry  _PCD_SIZE_PcdMaxPeiPcdCallBackNumberPerPcdEntry 
#define _PCD_VALUE_PcdMaxPeiPcdCallBackNumberPerPcdEntry  0x08U
extern const  UINT32  _gPcd_FixedAtBuild_PcdMaxPeiPcdCallBackNumberPerPcdEntry;
#define _PCD_GET_MODE_32_PcdMaxPeiPcdCallBackNumberPerPcdEntry  _gPcd_FixedAtBuild_PcdMaxPeiPcdCallBackNumberPerPcdEntry
//#define _PCD_SET_MODE_32_PcdMaxPeiPcdCallBackNumberPerPcdEntry  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_gEfiMdeModulePkgTokenSpaceGuid_PcdNvStoreDefaultValueBuffer  196613U
#define _PCD_TOKEN_PcdNvStoreDefaultValueBuffer  _PCD_TOKEN_gEfiMdeModulePkgTokenSpaceGuid_PcdNvStoreDefaultValueBuffer
#define _PCD_GET_MODE_PTR_PcdNvStoreDefaultValueBuffer  LibPcdGetExPtr(&gEfiMdeModulePkgTokenSpaceGuid, _PCD_TOKEN_PcdNvStoreDefaultValueBuffer)
#define _PCD_GET_MODE_SIZE_PcdNvStoreDefaultValueBuffer LibPcdGetExSize(&gEfiMdeModulePkgTokenSpaceGuid, _PCD_TOKEN_PcdNvStoreDefaultValueBuffer)
#define _PCD_SET_MODE_PTR_PcdNvStoreDefaultValueBuffer(SizeOfBuffer, Buffer)  LibPcdSetExPtr(&gEfiMdeModulePkgTokenSpaceGuid, _PCD_TOKEN_PcdNvStoreDefaultValueBuffer, (SizeOfBuffer), (Buffer))
#define _PCD_SET_MODE_PTR_S_PcdNvStoreDefaultValueBuffer(SizeOfBuffer, Buffer)  LibPcdSetExPtrS(&gEfiMdeModulePkgTokenSpaceGuid, _PCD_TOKEN_PcdNvStoreDefaultValueBuffer, (SizeOfBuffer), (Buffer))

#define _PCD_TOKEN_gEfiMdeModulePkgTokenSpaceGuid_PcdSetNvStoreDefaultId  196612U
#define _PCD_TOKEN_PcdSetNvStoreDefaultId  _PCD_TOKEN_gEfiMdeModulePkgTokenSpaceGuid_PcdSetNvStoreDefaultId
#define _PCD_GET_MODE_16_PcdSetNvStoreDefaultId  LibPcdGetEx16(&gEfiMdeModulePkgTokenSpaceGuid, _PCD_TOKEN_PcdSetNvStoreDefaultId)
#define _PCD_GET_MODE_SIZE_PcdSetNvStoreDefaultId LibPcdGetExSize(&gEfiMdeModulePkgTokenSpaceGuid, _PCD_TOKEN_PcdSetNvStoreDefaultId)
#define _PCD_SET_MODE_16_PcdSetNvStoreDefaultId(Value)  LibPcdSetEx16(&gEfiMdeModulePkgTokenSpaceGuid, _PCD_TOKEN_PcdSetNvStoreDefaultId, (Value))
#define _PCD_SET_MODE_16_S_PcdSetNvStoreDefaultId(Value)  LibPcdSetEx16S(&gEfiMdeModulePkgTokenSpaceGuid, _PCD_TOKEN_PcdSetNvStoreDefaultId, (Value))

#define COMPAREGUID(Guid1, Guid2) (BOOLEAN)(*(CONST UINT64*)Guid1 == *(CONST UINT64*)Guid2 && *((CONST UINT64*)Guid1 + 1) == *((CONST UINT64*)Guid2 + 1))

#define __PCD_PcdVpdBaseAddress64_ADDR_CMP(GuidPtr)  (\
  (GuidPtr == &gEfiMdeModulePkgTokenSpaceGuid) ? _PCD_TOKEN_gEfiMdeModulePkgTokenSpaceGuid_PcdVpdBaseAddress64:0 \
  )

#define __PCD_PcdNvStoreDefaultValueBuffer_ADDR_CMP(GuidPtr)  (\
  (GuidPtr == &gEfiMdeModulePkgTokenSpaceGuid) ? _PCD_TOKEN_gEfiMdeModulePkgTokenSpaceGuid_PcdNvStoreDefaultValueBuffer:0 \
  )

#define __PCD_PcdSetNvStoreDefaultId_ADDR_CMP(GuidPtr)  (\
  (GuidPtr == &gEfiMdeModulePkgTokenSpaceGuid) ? _PCD_TOKEN_gEfiMdeModulePkgTokenSpaceGuid_PcdSetNvStoreDefaultId:0 \
  )

#define __PCD_PcdVpdBaseAddress64_VAL_CMP(GuidPtr)  (\
  (GuidPtr == NULL) ? 0:\
  COMPAREGUID (GuidPtr, &gEfiMdeModulePkgTokenSpaceGuid) ? _PCD_TOKEN_gEfiMdeModulePkgTokenSpaceGuid_PcdVpdBaseAddress64:0 \
  )
#define _PCD_TOKEN_EX_PcdVpdBaseAddress64(GuidPtr)   __PCD_PcdVpdBaseAddress64_ADDR_CMP(GuidPtr) ? __PCD_PcdVpdBaseAddress64_ADDR_CMP(GuidPtr) : __PCD_PcdVpdBaseAddress64_VAL_CMP(GuidPtr)  

#define __PCD_PcdNvStoreDefaultValueBuffer_VAL_CMP(GuidPtr)  (\
  (GuidPtr == NULL) ? 0:\
  COMPAREGUID (GuidPtr, &gEfiMdeModulePkgTokenSpaceGuid) ? _PCD_TOKEN_gEfiMdeModulePkgTokenSpaceGuid_PcdNvStoreDefaultValueBuffer:0 \
  )
#define _PCD_TOKEN_EX_PcdNvStoreDefaultValueBuffer(GuidPtr)   __PCD_PcdNvStoreDefaultValueBuffer_ADDR_CMP(GuidPtr) ? __PCD_PcdNvStoreDefaultValueBuffer_ADDR_CMP(GuidPtr) : __PCD_PcdNvStoreDefaultValueBuffer_VAL_CMP(GuidPtr)  

#define __PCD_PcdSetNvStoreDefaultId_VAL_CMP(GuidPtr)  (\
  (GuidPtr == NULL) ? 0:\
  COMPAREGUID (GuidPtr, &gEfiMdeModulePkgTokenSpaceGuid) ? _PCD_TOKEN_gEfiMdeModulePkgTokenSpaceGuid_PcdSetNvStoreDefaultId:0 \
  )
#define _PCD_TOKEN_EX_PcdSetNvStoreDefaultId(GuidPtr)   __PCD_PcdSetNvStoreDefaultId_ADDR_CMP(GuidPtr) ? __PCD_PcdSetNvStoreDefaultId_ADDR_CMP(GuidPtr) : __PCD_PcdSetNvStoreDefaultId_VAL_CMP(GuidPtr)  

// Definition of PCDs used in libraries is in AutoGen.c

#define PCD_PEI_SERVICE_DRIVER_VERSION         7

//
// External PCD database debug information
//
#if 0
#define PEI_GUID_TABLE_SIZE                1U
#define PEI_STRING_TABLE_SIZE              2U
#define PEI_SKUID_TABLE_SIZE               1U
#define PEI_LOCAL_TOKEN_NUMBER_TABLE_SIZE  25
#define PEI_LOCAL_TOKEN_NUMBER             25
#define PEI_EXMAPPING_TABLE_SIZE           3U
#define PEI_EX_TOKEN_NUMBER                3U
#define PEI_SIZE_TABLE_SIZE                2U
#define PEI_GUID_TABLE_EMPTY               FALSE
#define PEI_STRING_TABLE_EMPTY             FALSE
#define PEI_SKUID_TABLE_EMPTY              TRUE
#define PEI_DATABASE_EMPTY                 FALSE
#define PEI_EXMAP_TABLE_EMPTY              FALSE

typedef struct {
  UINT64             SkuIdTable[PEI_SKUID_TABLE_SIZE];
  UINT64             PcdPciMmio64Size_93bb96af_b9f2_4eb8_9462_e0ba74564236[1];


  UINT32             PcdCpuMaxLogicalProcessorNumber_ac05bf33_995a_4ed4_aab8_ef7ae80f5cb0[1];



  DYNAMICEX_MAPPING  ExMapTable[PEI_EXMAPPING_TABLE_SIZE];
  UINT32             LocalTokenNumberTable[PEI_LOCAL_TOKEN_NUMBER_TABLE_SIZE];
  GUID               GuidTable[PEI_GUID_TABLE_SIZE];
  STRING_HEAD        PcdNvStoreDefaultValueBuffer_a1aff049_fdeb_442a_b320_13ab4cb72bbc[1];

  UINT8              StringTable[2]; /* PcdNvStoreDefaultValueBuffer_a1aff049_fdeb_442a_b320_13ab4cb72bbc */

  SIZE_INFO          SizeTable[PEI_SIZE_TABLE_SIZE];
  UINT16             PcdQ35TsegMbytes_93bb96af_b9f2_4eb8_9462_e0ba74564236[1];






  SKU_ID             SystemSkuId;
} PEI_PCD_DATABASE_INIT;

typedef struct {

  UINT64   PcdEmuVariableNvStoreReserved_a1aff049_fdeb_442a_b320_13ab4cb72bbc[1];
  UINT64   PcdGhcbBase_a1aff049_fdeb_442a_b320_13ab4cb72bbc[1];
  UINT64   PcdGhcbSize_a1aff049_fdeb_442a_b320_13ab4cb72bbc[1];
  UINT64   PcdPteMemoryEncryptionAddressOrMask_a1aff049_fdeb_442a_b320_13ab4cb72bbc[1];
  UINT64   PcdTdxSharedBitMask_a1aff049_fdeb_442a_b320_13ab4cb72bbc[1];
  UINT64   PcdConfidentialComputingGuestAttr_914aebe7_4635_459b_aa1c_11e219b03a10[1];
  UINT64   PcdGhcbHypervisorFeatures_ac05bf33_995a_4ed4_aab8_ef7ae80f5cb0[1];
  UINT64   PcdPciIoBase_93bb96af_b9f2_4eb8_9462_e0ba74564236[1];
  UINT64   PcdPciIoSize_93bb96af_b9f2_4eb8_9462_e0ba74564236[1];
  UINT64   PcdPciMmio32Base_93bb96af_b9f2_4eb8_9462_e0ba74564236[1];
  UINT64   PcdPciMmio32Size_93bb96af_b9f2_4eb8_9462_e0ba74564236[1];
  UINT64   PcdPciMmio64Base_93bb96af_b9f2_4eb8_9462_e0ba74564236[1];
  UINT64   PcdVpdBaseAddress64_a1aff049_fdeb_442a_b320_13ab4cb72bbc[1];

  UINT32   PcdOptionRomImageVerificationPolicy_0d3fb176_9569_4d51_a3ef_7d61c64feaba[1];
  UINT32   PcdCpuBootLogicalProcessorNumber_ac05bf33_995a_4ed4_aab8_ef7ae80f5cb0[1];

  UINT16   PcdOvmfHostBridgePciDevId_93bb96af_b9f2_4eb8_9462_e0ba74564236[1];
  UINT16   PcdSetNvStoreDefaultId_a1aff049_fdeb_442a_b320_13ab4cb72bbc[1];


  BOOLEAN  PcdAcpiS3Enable_a1aff049_fdeb_442a_b320_13ab4cb72bbc[1];
  BOOLEAN  PcdSetNxForStack_a1aff049_fdeb_442a_b320_13ab4cb72bbc[1];
  BOOLEAN  PcdSevEsIsEnabled_ac05bf33_995a_4ed4_aab8_ef7ae80f5cb0[1];
  BOOLEAN  PcdQ35SmramAtDefaultSmbase_93bb96af_b9f2_4eb8_9462_e0ba74564236[1];

} PEI_PCD_DATABASE_UNINIT;

typedef struct {
  //GUID                  Signature;  // PcdDataBaseGuid
  //UINT32                BuildVersion;
  //UINT32                Length;
  //SKU_ID                SystemSkuId;       // Current SkuId value.
  //UINT32                LengthForAllSkus;  // Length of all SKU PCD DB
  //UINT32                UninitDataBaseSize;// Total size for PCD those default value with 0.
  //TABLE_OFFSET          LocalTokenNumberTableOffset;
  //TABLE_OFFSET          ExMapTableOffset;
  //TABLE_OFFSET          GuidTableOffset;
  //TABLE_OFFSET          StringTableOffset;
  //TABLE_OFFSET          SizeTableOffset;
  //TABLE_OFFSET          SkuIdTableOffset;
  //TABLE_OFFSET          PcdNameTableOffset;
  //UINT16                LocalTokenCount;  // LOCAL_TOKEN_NUMBER for all
  //UINT16                ExTokenCount;     // EX_TOKEN_NUMBER for DynamicEx
  //UINT16                GuidTableCount;   // The Number of Guid in GuidTable
  //UINT8                 Pad[6];
  PEI_PCD_DATABASE_INIT    Init;
  PEI_PCD_DATABASE_UNINIT  Uninit;
} PEI_PCD_DATABASE;

#define PEI_NEX_TOKEN_NUMBER (PEI_LOCAL_TOKEN_NUMBER - PEI_EX_TOKEN_NUMBER)
#endif


EFI_STATUS
EFIAPI
PcdPeimInit (
  IN       EFI_PEI_FILE_HANDLE  FileHandle,
  IN CONST EFI_PEI_SERVICES     **PeiServices
  );





#ifdef __cplusplus
}
#endif

#endif
