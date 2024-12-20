
#include <Library/UefiLib.h> 
#include <Library/BaseLib.h>
#include <Library/BaseMemoryLib.h>
#include <Library/DebugLib.h>
#include <Library/DevicePathLib.h>
#include <Library/UefiBootServicesTableLib.h>
#include <Library/MemoryAllocationLib.h>
#include <Protocol/Shell.h>
#include <Library/FileHandleLib.h>
#include <Register/Intel/ArchitecturalMsr.h>

#include <Library/PrintLib.h>

typedef struct _REG {
  UINT32  MsrReg;
  CHAR16 *MsrRegStr;
}REG;




REG RegList[] = {
	{
		MSR_IA32_P5_MC_ADDR,
		L"MSR_IA32_P5_MC_ADDR",
	},
	{
		MSR_IA32_P5_MC_TYPE,
		L"MSR_IA32_P5_MC_TYPE",
	},
	{
		MSR_IA32_MONITOR_FILTER_SIZE,
		L"MSR_IA32_MONITOR_FILTER_SIZE",
	},
	{
		MSR_IA32_PLATFORM_ID,
		L"MSR_IA32_PLATFORM_ID",
	},
	{
		MSR_IA32_APIC_BASE,
		L"MSR_IA32_APIC_BASE",
	},
	{
		MSR_IA32_FEATURE_CONTROL,
		L"MSR_IA32_FEATURE_CONTROL",
	},
	{
		MSR_IA32_TSC_ADJUST,
		L"MSR_IA32_TSC_ADJUST",
	},
	{
		MSR_IA32_BIOS_UPDT_TRIG,
		L"MSR_IA32_BIOS_UPDT_TRIG",
	},
	{
		MSR_IA32_BIOS_SIGN_ID,
		L"MSR_IA32_BIOS_SIGN_ID",
	},
	{
		MSR_IA32_SGXLEPUBKEYHASH0,
		L"MSR_IA32_SGXLEPUBKEYHASH0",
	},
	{
		MSR_IA32_SGXLEPUBKEYHASH1,
		L"MSR_IA32_SGXLEPUBKEYHASH1",
	},
	{
		MSR_IA32_SGXLEPUBKEYHASH2,
		L"MSR_IA32_SGXLEPUBKEYHASH2",
	},
	{
		MSR_IA32_SGXLEPUBKEYHASH3,
		L"MSR_IA32_SGXLEPUBKEYHASH3",
	},
	{
		MSR_IA32_SMM_MONITOR_CTL,
		L"MSR_IA32_SMM_MONITOR_CTL",
	},
	{
		MSR_IA32_SMBASE,
		L"MSR_IA32_SMBASE",
	},
	{
		MSR_IA32_PMC0,
		L"MSR_IA32_PMC0",
	},
	{
		MSR_IA32_PMC1,
		L"MSR_IA32_PMC1",
	},
	{
		MSR_IA32_PMC2,
		L"MSR_IA32_PMC2",
	},
	{
		MSR_IA32_PMC3,
		L"MSR_IA32_PMC3",
	},
	{
		MSR_IA32_PMC4,
		L"MSR_IA32_PMC4",
	},
	{
		MSR_IA32_PMC5,
		L"MSR_IA32_PMC5",
	},
	{
		MSR_IA32_PMC6,
		L"MSR_IA32_PMC6",
	},
	{
		MSR_IA32_PMC7,
		L"MSR_IA32_PMC7",
	},
	{
		MSR_IA32_MPERF,
		L"MSR_IA32_MPERF",
	},
	{
		MSR_IA32_APERF,
		L"MSR_IA32_APERF",
	},
	{
		MSR_IA32_MTRRCAP,
		L"MSR_IA32_MTRRCAP",
	},
	{
		MSR_IA32_SYSENTER_CS,
		L"MSR_IA32_SYSENTER_CS",
	},
	{
		MSR_IA32_SYSENTER_ESP,
		L"MSR_IA32_SYSENTER_ESP",
	},
	{
		MSR_IA32_SYSENTER_EIP,
		L"MSR_IA32_SYSENTER_EIP",
	},
	{
		MSR_IA32_MCG_CAP,
		L"MSR_IA32_MCG_CAP",
	},
	{
		MSR_IA32_MCG_STATUS,
		L"MSR_IA32_MCG_STATUS",
	},
	{
		MSR_IA32_MCG_CTL,
		L"MSR_IA32_MCG_CTL",
	},
	{
		MSR_IA32_PERFEVTSEL0,
		L"MSR_IA32_PERFEVTSEL0",
	},
	{
		MSR_IA32_PERFEVTSEL1,
		L"MSR_IA32_PERFEVTSEL1",
	},
	{
		MSR_IA32_PERFEVTSEL2,
		L"MSR_IA32_PERFEVTSEL2",
	},
	{
		MSR_IA32_PERFEVTSEL3,
		L"MSR_IA32_PERFEVTSEL3",
	},
	{
		MSR_IA32_PERF_STATUS,
		L"MSR_IA32_PERF_STATUS",
	},
	{
		MSR_IA32_PERF_CTL,
		L"MSR_IA32_PERF_CTL",
	},
	{
		MSR_IA32_CLOCK_MODULATION,
		L"MSR_IA32_CLOCK_MODULATION",
	},
	{
		MSR_IA32_THERM_INTERRUPT,
		L"MSR_IA32_THERM_INTERRUPT",
	},
	{
		MSR_IA32_THERM_STATUS,
		L"MSR_IA32_THERM_STATUS",
	},
	{
		MSR_IA32_MISC_ENABLE,
		L"MSR_IA32_MISC_ENABLE",
	},
	{
		MSR_IA32_ENERGY_PERF_BIAS,
		L"MSR_IA32_ENERGY_PERF_BIAS",
	},
	{
		MSR_IA32_PACKAGE_THERM_STATUS,
		L"MSR_IA32_PACKAGE_THERM_STATUS",
	},
	{
		MSR_IA32_PACKAGE_THERM_INTERRUPT,
		L"MSR_IA32_PACKAGE_THERM_INTERRUPT",
	},
	{
		MSR_IA32_DEBUGCTL,
		L"MSR_IA32_DEBUGCTL",
	},
	{
		MSR_IA32_SMRR_PHYSBASE,
		L"MSR_IA32_SMRR_PHYSBASE",
	},
	{
		MSR_IA32_SMRR_PHYSMASK,
		L"MSR_IA32_SMRR_PHYSMASK",
	},
	{
		MSR_IA32_PLATFORM_DCA_CAP,
		L"MSR_IA32_PLATFORM_DCA_CAP",
	},
	{
		MSR_IA32_CPU_DCA_CAP,
		L"MSR_IA32_CPU_DCA_CAP",
	},
	{
		MSR_IA32_DCA_0_CAP,
		L"MSR_IA32_DCA_0_CAP",
	},
	{
		MSR_IA32_MTRR_PHYSBASE0,
		L"MSR_IA32_MTRR_PHYSBASE0",
	},
	{
		MSR_IA32_MTRR_PHYSBASE1,
		L"MSR_IA32_MTRR_PHYSBASE1",
	},
	{
		MSR_IA32_MTRR_PHYSBASE2,
		L"MSR_IA32_MTRR_PHYSBASE2",
	},
	{
		MSR_IA32_MTRR_PHYSBASE3,
		L"MSR_IA32_MTRR_PHYSBASE3",
	},
	{
		MSR_IA32_MTRR_PHYSBASE4,
		L"MSR_IA32_MTRR_PHYSBASE4",
	},
	{
		MSR_IA32_MTRR_PHYSBASE5,
		L"MSR_IA32_MTRR_PHYSBASE5",
	},
	{
		MSR_IA32_MTRR_PHYSBASE6,
		L"MSR_IA32_MTRR_PHYSBASE6",
	},
	{
		MSR_IA32_MTRR_PHYSBASE7,
		L"MSR_IA32_MTRR_PHYSBASE7",
	},
	{
		MSR_IA32_MTRR_PHYSBASE8,
		L"MSR_IA32_MTRR_PHYSBASE8",
	},
	{
		MSR_IA32_MTRR_PHYSBASE9,
		L"MSR_IA32_MTRR_PHYSBASE9",
	},
	{
		MSR_IA32_MTRR_CACHE_UNCACHEABLE,
		L"MSR_IA32_MTRR_CACHE_UNCACHEABLE",
	},
	{
		MSR_IA32_MTRR_CACHE_WRITE_COMBINING,
		L"MSR_IA32_MTRR_CACHE_WRITE_COMBINING",
	},
	{
		MSR_IA32_MTRR_CACHE_WRITE_THROUGH,
		L"MSR_IA32_MTRR_CACHE_WRITE_THROUGH",
	},
	{
		MSR_IA32_MTRR_CACHE_WRITE_PROTECTED,
		L"MSR_IA32_MTRR_CACHE_WRITE_PROTECTED",
	},
	{
		MSR_IA32_MTRR_CACHE_WRITE_BACK,
		L"MSR_IA32_MTRR_CACHE_WRITE_BACK",
	},
	{
		MSR_IA32_MTRR_CACHE_INVALID_TYPE,
		L"MSR_IA32_MTRR_CACHE_INVALID_TYPE",
	},
	{
		MSR_IA32_MTRR_PHYSMASK0,
		L"MSR_IA32_MTRR_PHYSMASK0",
	},
	{
		MSR_IA32_MTRR_PHYSMASK1,
		L"MSR_IA32_MTRR_PHYSMASK1",
	},
	{
		MSR_IA32_MTRR_PHYSMASK2,
		L"MSR_IA32_MTRR_PHYSMASK2",
	},
	{
		MSR_IA32_MTRR_PHYSMASK3,
		L"MSR_IA32_MTRR_PHYSMASK3",
	},
	{
		MSR_IA32_MTRR_PHYSMASK4,
		L"MSR_IA32_MTRR_PHYSMASK4",
	},
	{
		MSR_IA32_MTRR_PHYSMASK5,
		L"MSR_IA32_MTRR_PHYSMASK5",
	},
	{
		MSR_IA32_MTRR_PHYSMASK6,
		L"MSR_IA32_MTRR_PHYSMASK6",
	},
	{
		MSR_IA32_MTRR_PHYSMASK7,
		L"MSR_IA32_MTRR_PHYSMASK7",
	},
	{
		MSR_IA32_MTRR_PHYSMASK8,
		L"MSR_IA32_MTRR_PHYSMASK8",
	},
	{
		MSR_IA32_MTRR_PHYSMASK9,
		L"MSR_IA32_MTRR_PHYSMASK9",
	},
	{
		MSR_IA32_MTRR_FIX64K_00000,
		L"MSR_IA32_MTRR_FIX64K_00000",
	},
	{
		MSR_IA32_MTRR_FIX16K_80000,
		L"MSR_IA32_MTRR_FIX16K_80000",
	},
	{
		MSR_IA32_MTRR_FIX16K_A0000,
		L"MSR_IA32_MTRR_FIX16K_A0000",
	},
	{
		MSR_IA32_MTRR_FIX4K_C0000,
		L"MSR_IA32_MTRR_FIX4K_C0000",
	},
	{
		MSR_IA32_MTRR_FIX4K_C8000,
		L"MSR_IA32_MTRR_FIX4K_C8000",
	},
	{
		MSR_IA32_MTRR_FIX4K_D0000,
		L"MSR_IA32_MTRR_FIX4K_D0000",
	},
	{
		MSR_IA32_MTRR_FIX4K_D8000,
		L"MSR_IA32_MTRR_FIX4K_D8000",
	},
	{
		MSR_IA32_MTRR_FIX4K_E0000,
		L"MSR_IA32_MTRR_FIX4K_E0000",
	},
	{
		MSR_IA32_MTRR_FIX4K_E8000,
		L"MSR_IA32_MTRR_FIX4K_E8000",
	},
	{
		MSR_IA32_MTRR_FIX4K_F0000,
		L"MSR_IA32_MTRR_FIX4K_F0000",
	},
	{
		MSR_IA32_MTRR_FIX4K_F8000,
		L"MSR_IA32_MTRR_FIX4K_F8000",
	},
	{
		MSR_IA32_PAT,
		L"MSR_IA32_PAT",
	},
	{
		MSR_IA32_MC0_CTL2,
		L"MSR_IA32_MC0_CTL2",
	},
	{
		MSR_IA32_MC1_CTL2,
		L"MSR_IA32_MC1_CTL2",
	},
	{
		MSR_IA32_MC2_CTL2,
		L"MSR_IA32_MC2_CTL2",
	},
	{
		MSR_IA32_MC3_CTL2,
		L"MSR_IA32_MC3_CTL2",
	},
	{
		MSR_IA32_MC4_CTL2,
		L"MSR_IA32_MC4_CTL2",
	},
	{
		MSR_IA32_MC5_CTL2,
		L"MSR_IA32_MC5_CTL2",
	},
	{
		MSR_IA32_MC6_CTL2,
		L"MSR_IA32_MC6_CTL2",
	},
	{
		MSR_IA32_MC7_CTL2,
		L"MSR_IA32_MC7_CTL2",
	},
	{
		MSR_IA32_MC8_CTL2,
		L"MSR_IA32_MC8_CTL2",
	},
	{
		MSR_IA32_MC9_CTL2,
		L"MSR_IA32_MC9_CTL2",
	},
	{
		MSR_IA32_MC10_CTL2,
		L"MSR_IA32_MC10_CTL2",
	},
	{
		MSR_IA32_MC11_CTL2,
		L"MSR_IA32_MC11_CTL2",
	},
	{
		MSR_IA32_MC12_CTL2,
		L"MSR_IA32_MC12_CTL2",
	},
	{
		MSR_IA32_MC13_CTL2,
		L"MSR_IA32_MC13_CTL2",
	},
	{
		MSR_IA32_MC14_CTL2,
		L"MSR_IA32_MC14_CTL2",
	},
	{
		MSR_IA32_MC15_CTL2,
		L"MSR_IA32_MC15_CTL2",
	},
	{
		MSR_IA32_MC16_CTL2,
		L"MSR_IA32_MC16_CTL2",
	},
	{
		MSR_IA32_MC17_CTL2,
		L"MSR_IA32_MC17_CTL2",
	},
	{
		MSR_IA32_MC18_CTL2,
		L"MSR_IA32_MC18_CTL2",
	},
	{
		MSR_IA32_MC19_CTL2,
		L"MSR_IA32_MC19_CTL2",
	},
	{
		MSR_IA32_MC20_CTL2,
		L"MSR_IA32_MC20_CTL2",
	},
	{
		MSR_IA32_MC21_CTL2,
		L"MSR_IA32_MC21_CTL2",
	},
	{
		MSR_IA32_MC22_CTL2,
		L"MSR_IA32_MC22_CTL2",
	},
	{
		MSR_IA32_MC23_CTL2,
		L"MSR_IA32_MC23_CTL2",
	},
	{
		MSR_IA32_MC24_CTL2,
		L"MSR_IA32_MC24_CTL2",
	},
	{
		MSR_IA32_MC25_CTL2,
		L"MSR_IA32_MC25_CTL2",
	},
	{
		MSR_IA32_MC26_CTL2,
		L"MSR_IA32_MC26_CTL2",
	},
	{
		MSR_IA32_MC27_CTL2,
		L"MSR_IA32_MC27_CTL2",
	},
	{
		MSR_IA32_MC28_CTL2,
		L"MSR_IA32_MC28_CTL2",
	},
	{
		MSR_IA32_MC29_CTL2,
		L"MSR_IA32_MC29_CTL2",
	},
	{
		MSR_IA32_MC30_CTL2,
		L"MSR_IA32_MC30_CTL2",
	},
	{
		MSR_IA32_MC31_CTL2,
		L"MSR_IA32_MC31_CTL2",
	},
	{
		MSR_IA32_MTRR_DEF_TYPE,
		L"MSR_IA32_MTRR_DEF_TYPE",
	},
	{
		MSR_IA32_FIXED_CTR0,
		L"MSR_IA32_FIXED_CTR0",
	},
	{
		MSR_IA32_FIXED_CTR1,
		L"MSR_IA32_FIXED_CTR1",
	},
	{
		MSR_IA32_FIXED_CTR2,
		L"MSR_IA32_FIXED_CTR2",
	},
	{
		MSR_IA32_PERF_CAPABILITIES,
		L"MSR_IA32_PERF_CAPABILITIES",
	},
	{
		MSR_IA32_FIXED_CTR_CTRL,
		L"MSR_IA32_FIXED_CTR_CTRL",
	},
	{
		MSR_IA32_PERF_GLOBAL_STATUS,
		L"MSR_IA32_PERF_GLOBAL_STATUS",
	},
	{
		MSR_IA32_PERF_GLOBAL_CTRL,
		L"MSR_IA32_PERF_GLOBAL_CTRL",
	},
	{
		MSR_IA32_PERF_GLOBAL_OVF_CTRL,
		L"MSR_IA32_PERF_GLOBAL_OVF_CTRL",
	},
	{
		MSR_IA32_PERF_GLOBAL_STATUS_RESET,
		L"MSR_IA32_PERF_GLOBAL_STATUS_RESET",
	},
	{
		MSR_IA32_PERF_GLOBAL_STATUS_SET,
		L"MSR_IA32_PERF_GLOBAL_STATUS_SET",
	},
	{
		MSR_IA32_PERF_GLOBAL_INUSE,
		L"MSR_IA32_PERF_GLOBAL_INUSE",
	},
	{
		MSR_IA32_PEBS_ENABLE,
		L"MSR_IA32_PEBS_ENABLE",
	},
	{
		MSR_IA32_MC0_CTL,
		L"MSR_IA32_MC0_CTL",
	},
	{
		MSR_IA32_MC1_CTL,
		L"MSR_IA32_MC1_CTL",
	},
	{
		MSR_IA32_MC2_CTL,
		L"MSR_IA32_MC2_CTL",
	},
	{
		MSR_IA32_MC3_CTL,
		L"MSR_IA32_MC3_CTL",
	},
	{
		MSR_IA32_MC4_CTL,
		L"MSR_IA32_MC4_CTL",
	},
	{
		MSR_IA32_MC5_CTL,
		L"MSR_IA32_MC5_CTL",
	},
	{
		MSR_IA32_MC6_CTL,
		L"MSR_IA32_MC6_CTL",
	},
	{
		MSR_IA32_MC7_CTL,
		L"MSR_IA32_MC7_CTL",
	},
	{
		MSR_IA32_MC8_CTL,
		L"MSR_IA32_MC8_CTL",
	},
	{
		MSR_IA32_MC9_CTL,
		L"MSR_IA32_MC9_CTL",
	},
	{
		MSR_IA32_MC10_CTL,
		L"MSR_IA32_MC10_CTL",
	},
	{
		MSR_IA32_MC11_CTL,
		L"MSR_IA32_MC11_CTL",
	},
	{
		MSR_IA32_MC12_CTL,
		L"MSR_IA32_MC12_CTL",
	},
	{
		MSR_IA32_MC13_CTL,
		L"MSR_IA32_MC13_CTL",
	},
	{
		MSR_IA32_MC14_CTL,
		L"MSR_IA32_MC14_CTL",
	},
	{
		MSR_IA32_MC15_CTL,
		L"MSR_IA32_MC15_CTL",
	},
	{
		MSR_IA32_MC16_CTL,
		L"MSR_IA32_MC16_CTL",
	},
	{
		MSR_IA32_MC17_CTL,
		L"MSR_IA32_MC17_CTL",
	},
	{
		MSR_IA32_MC18_CTL,
		L"MSR_IA32_MC18_CTL",
	},
	{
		MSR_IA32_MC19_CTL,
		L"MSR_IA32_MC19_CTL",
	},
	{
		MSR_IA32_MC20_CTL,
		L"MSR_IA32_MC20_CTL",
	},
	{
		MSR_IA32_MC21_CTL,
		L"MSR_IA32_MC21_CTL",
	},
	{
		MSR_IA32_MC22_CTL,
		L"MSR_IA32_MC22_CTL",
	},
	{
		MSR_IA32_MC23_CTL,
		L"MSR_IA32_MC23_CTL",
	},
	{
		MSR_IA32_MC24_CTL,
		L"MSR_IA32_MC24_CTL",
	},
	{
		MSR_IA32_MC25_CTL,
		L"MSR_IA32_MC25_CTL",
	},
	{
		MSR_IA32_MC26_CTL,
		L"MSR_IA32_MC26_CTL",
	},
	{
		MSR_IA32_MC27_CTL,
		L"MSR_IA32_MC27_CTL",
	},
	{
		MSR_IA32_MC28_CTL,
		L"MSR_IA32_MC28_CTL",
	},
	{
		MSR_IA32_MC0_STATUS,
		L"MSR_IA32_MC0_STATUS",
	},
	{
		MSR_IA32_MC1_STATUS,
		L"MSR_IA32_MC1_STATUS",
	},
	{
		MSR_IA32_MC2_STATUS,
		L"MSR_IA32_MC2_STATUS",
	},
	{
		MSR_IA32_MC3_STATUS,
		L"MSR_IA32_MC3_STATUS",
	},
	{
		MSR_IA32_MC4_STATUS,
		L"MSR_IA32_MC4_STATUS",
	},
	{
		MSR_IA32_MC5_STATUS,
		L"MSR_IA32_MC5_STATUS",
	},
	{
		MSR_IA32_MC6_STATUS,
		L"MSR_IA32_MC6_STATUS",
	},
	{
		MSR_IA32_MC7_STATUS,
		L"MSR_IA32_MC7_STATUS",
	},
	{
		MSR_IA32_MC8_STATUS,
		L"MSR_IA32_MC8_STATUS",
	},
	{
		MSR_IA32_MC9_STATUS,
		L"MSR_IA32_MC9_STATUS",
	},
	{
		MSR_IA32_MC10_STATUS,
		L"MSR_IA32_MC10_STATUS",
	},
	{
		MSR_IA32_MC11_STATUS,
		L"MSR_IA32_MC11_STATUS",
	},
	{
		MSR_IA32_MC12_STATUS,
		L"MSR_IA32_MC12_STATUS",
	},
	{
		MSR_IA32_MC13_STATUS,
		L"MSR_IA32_MC13_STATUS",
	},
	{
		MSR_IA32_MC14_STATUS,
		L"MSR_IA32_MC14_STATUS",
	},
	{
		MSR_IA32_MC15_STATUS,
		L"MSR_IA32_MC15_STATUS",
	},
	{
		MSR_IA32_MC16_STATUS,
		L"MSR_IA32_MC16_STATUS",
	},
	{
		MSR_IA32_MC17_STATUS,
		L"MSR_IA32_MC17_STATUS",
	},
	{
		MSR_IA32_MC18_STATUS,
		L"MSR_IA32_MC18_STATUS",
	},
	{
		MSR_IA32_MC19_STATUS,
		L"MSR_IA32_MC19_STATUS",
	},
	{
		MSR_IA32_MC20_STATUS,
		L"MSR_IA32_MC20_STATUS",
	},
	{
		MSR_IA32_MC21_STATUS,
		L"MSR_IA32_MC21_STATUS",
	},
	{
		MSR_IA32_MC22_STATUS,
		L"MSR_IA32_MC22_STATUS",
	},
	{
		MSR_IA32_MC23_STATUS,
		L"MSR_IA32_MC23_STATUS",
	},
	{
		MSR_IA32_MC24_STATUS,
		L"MSR_IA32_MC24_STATUS",
	},
	{
		MSR_IA32_MC25_STATUS,
		L"MSR_IA32_MC25_STATUS",
	},
	{
		MSR_IA32_MC26_STATUS,
		L"MSR_IA32_MC26_STATUS",
	},
	{
		MSR_IA32_MC27_STATUS,
		L"MSR_IA32_MC27_STATUS",
	},
	{
		MSR_IA32_MC28_STATUS,
		L"MSR_IA32_MC28_STATUS",
	},
	{
		MSR_IA32_MC0_ADDR,
		L"MSR_IA32_MC0_ADDR",
	},
	{
		MSR_IA32_MC1_ADDR,
		L"MSR_IA32_MC1_ADDR",
	},
	{
		MSR_IA32_MC2_ADDR,
		L"MSR_IA32_MC2_ADDR",
	},
	{
		MSR_IA32_MC3_ADDR,
		L"MSR_IA32_MC3_ADDR",
	},
	{
		MSR_IA32_MC4_ADDR,
		L"MSR_IA32_MC4_ADDR",
	},
	{
		MSR_IA32_MC5_ADDR,
		L"MSR_IA32_MC5_ADDR",
	},
	{
		MSR_IA32_MC6_ADDR,
		L"MSR_IA32_MC6_ADDR",
	},
	{
		MSR_IA32_MC7_ADDR,
		L"MSR_IA32_MC7_ADDR",
	},
	{
		MSR_IA32_MC8_ADDR,
		L"MSR_IA32_MC8_ADDR",
	},
	{
		MSR_IA32_MC9_ADDR,
		L"MSR_IA32_MC9_ADDR",
	},
	{
		MSR_IA32_MC10_ADDR,
		L"MSR_IA32_MC10_ADDR",
	},
	{
		MSR_IA32_MC11_ADDR,
		L"MSR_IA32_MC11_ADDR",
	},
	{
		MSR_IA32_MC12_ADDR,
		L"MSR_IA32_MC12_ADDR",
	},
	{
		MSR_IA32_MC13_ADDR,
		L"MSR_IA32_MC13_ADDR",
	},
	{
		MSR_IA32_MC14_ADDR,
		L"MSR_IA32_MC14_ADDR",
	},
	{
		MSR_IA32_MC15_ADDR,
		L"MSR_IA32_MC15_ADDR",
	},
	{
		MSR_IA32_MC16_ADDR,
		L"MSR_IA32_MC16_ADDR",
	},
	{
		MSR_IA32_MC17_ADDR,
		L"MSR_IA32_MC17_ADDR",
	},
	{
		MSR_IA32_MC18_ADDR,
		L"MSR_IA32_MC18_ADDR",
	},
	{
		MSR_IA32_MC19_ADDR,
		L"MSR_IA32_MC19_ADDR",
	},
	{
		MSR_IA32_MC20_ADDR,
		L"MSR_IA32_MC20_ADDR",
	},
	{
		MSR_IA32_MC21_ADDR,
		L"MSR_IA32_MC21_ADDR",
	},
	{
		MSR_IA32_MC22_ADDR,
		L"MSR_IA32_MC22_ADDR",
	},
	{
		MSR_IA32_MC23_ADDR,
		L"MSR_IA32_MC23_ADDR",
	},
	{
		MSR_IA32_MC24_ADDR,
		L"MSR_IA32_MC24_ADDR",
	},
	{
		MSR_IA32_MC25_ADDR,
		L"MSR_IA32_MC25_ADDR",
	},
	{
		MSR_IA32_MC26_ADDR,
		L"MSR_IA32_MC26_ADDR",
	},
	{
		MSR_IA32_MC27_ADDR,
		L"MSR_IA32_MC27_ADDR",
	},
	{
		MSR_IA32_MC28_ADDR,
		L"MSR_IA32_MC28_ADDR",
	},
	{
		MSR_IA32_MC0_MISC,
		L"MSR_IA32_MC0_MISC",
	},
	{
		MSR_IA32_MC1_MISC,
		L"MSR_IA32_MC1_MISC",
	},
	{
		MSR_IA32_MC2_MISC,
		L"MSR_IA32_MC2_MISC",
	},
	{
		MSR_IA32_MC3_MISC,
		L"MSR_IA32_MC3_MISC",
	},
	{
		MSR_IA32_MC4_MISC,
		L"MSR_IA32_MC4_MISC",
	},
	{
		MSR_IA32_MC5_MISC,
		L"MSR_IA32_MC5_MISC",
	},
	{
		MSR_IA32_MC6_MISC,
		L"MSR_IA32_MC6_MISC",
	},
	{
		MSR_IA32_MC7_MISC,
		L"MSR_IA32_MC7_MISC",
	},
	{
		MSR_IA32_MC8_MISC,
		L"MSR_IA32_MC8_MISC",
	},
	{
		MSR_IA32_MC9_MISC,
		L"MSR_IA32_MC9_MISC",
	},
	{
		MSR_IA32_MC10_MISC,
		L"MSR_IA32_MC10_MISC",
	},
	{
		MSR_IA32_MC11_MISC,
		L"MSR_IA32_MC11_MISC",
	},
	{
		MSR_IA32_MC12_MISC,
		L"MSR_IA32_MC12_MISC",
	},
	{
		MSR_IA32_MC13_MISC,
		L"MSR_IA32_MC13_MISC",
	},
	{
		MSR_IA32_MC14_MISC,
		L"MSR_IA32_MC14_MISC",
	},
	{
		MSR_IA32_MC15_MISC,
		L"MSR_IA32_MC15_MISC",
	},
	{
		MSR_IA32_MC16_MISC,
		L"MSR_IA32_MC16_MISC",
	},
	{
		MSR_IA32_MC17_MISC,
		L"MSR_IA32_MC17_MISC",
	},
	{
		MSR_IA32_MC18_MISC,
		L"MSR_IA32_MC18_MISC",
	},
	{
		MSR_IA32_MC19_MISC,
		L"MSR_IA32_MC19_MISC",
	},
	{
		MSR_IA32_MC20_MISC,
		L"MSR_IA32_MC20_MISC",
	},
	{
		MSR_IA32_MC21_MISC,
		L"MSR_IA32_MC21_MISC",
	},
	{
		MSR_IA32_MC22_MISC,
		L"MSR_IA32_MC22_MISC",
	},
	{
		MSR_IA32_MC23_MISC,
		L"MSR_IA32_MC23_MISC",
	},
	{
		MSR_IA32_MC24_MISC,
		L"MSR_IA32_MC24_MISC",
	},
	{
		MSR_IA32_MC25_MISC,
		L"MSR_IA32_MC25_MISC",
	},
	{
		MSR_IA32_MC26_MISC,
		L"MSR_IA32_MC26_MISC",
	},
	{
		MSR_IA32_MC27_MISC,
		L"MSR_IA32_MC27_MISC",
	},
	{
		MSR_IA32_MC28_MISC,
		L"MSR_IA32_MC28_MISC",
	},
	{
		MSR_IA32_VMX_BASIC,
		L"MSR_IA32_VMX_BASIC",
	},
	{
		MSR_IA32_VMX_BASIC_REGISTER_MEMORY_TYPE_UNCACHEABLE,
		L"MSR_IA32_VMX_BASIC_REGISTER_MEMORY_TYPE_UNCACHEABLE",
	},
	{
		MSR_IA32_VMX_BASIC_REGISTER_MEMORY_TYPE_WRITE_BACK,
		L"MSR_IA32_VMX_BASIC_REGISTER_MEMORY_TYPE_WRITE_BACK",
	},
	{
		MSR_IA32_VMX_PINBASED_CTLS,
		L"MSR_IA32_VMX_PINBASED_CTLS",
	},
	{
		MSR_IA32_VMX_PROCBASED_CTLS,
		L"MSR_IA32_VMX_PROCBASED_CTLS",
	},
	{
		MSR_IA32_VMX_EXIT_CTLS,
		L"MSR_IA32_VMX_EXIT_CTLS",
	},
	{
		MSR_IA32_VMX_ENTRY_CTLS,
		L"MSR_IA32_VMX_ENTRY_CTLS",
	},
	{
		MSR_IA32_VMX_MISC,
		L"MSR_IA32_VMX_MISC",
	},
	{
		MSR_IA32_VMX_CR0_FIXED0,
		L"MSR_IA32_VMX_CR0_FIXED0",
	},
	{
		MSR_IA32_VMX_CR0_FIXED1,
		L"MSR_IA32_VMX_CR0_FIXED1",
	},
	{
		MSR_IA32_VMX_CR4_FIXED0,
		L"MSR_IA32_VMX_CR4_FIXED0",
	},
	{
		MSR_IA32_VMX_CR4_FIXED1,
		L"MSR_IA32_VMX_CR4_FIXED1",
	},
	{
		MSR_IA32_VMX_VMCS_ENUM,
		L"MSR_IA32_VMX_VMCS_ENUM",
	},
	{
		MSR_IA32_VMX_PROCBASED_CTLS2,
		L"MSR_IA32_VMX_PROCBASED_CTLS2",
	},
	{
		MSR_IA32_VMX_EPT_VPID_CAP,
		L"MSR_IA32_VMX_EPT_VPID_CAP",
	},
	{
		MSR_IA32_VMX_TRUE_PINBASED_CTLS,
		L"MSR_IA32_VMX_TRUE_PINBASED_CTLS",
	},
	{
		MSR_IA32_VMX_TRUE_PROCBASED_CTLS,
		L"MSR_IA32_VMX_TRUE_PROCBASED_CTLS",
	},
	{
		MSR_IA32_VMX_TRUE_EXIT_CTLS,
		L"MSR_IA32_VMX_TRUE_EXIT_CTLS",
	},
	{
		MSR_IA32_VMX_TRUE_ENTRY_CTLS,
		L"MSR_IA32_VMX_TRUE_ENTRY_CTLS",
	},
	{
		MSR_IA32_VMX_VMFUNC,
		L"MSR_IA32_VMX_VMFUNC",
	},
	{
		MSR_IA32_A_PMC0,
		L"MSR_IA32_A_PMC0",
	},
	{
		MSR_IA32_A_PMC1,
		L"MSR_IA32_A_PMC1",
	},
	{
		MSR_IA32_A_PMC2,
		L"MSR_IA32_A_PMC2",
	},
	{
		MSR_IA32_A_PMC3,
		L"MSR_IA32_A_PMC3",
	},
	{
		MSR_IA32_A_PMC4,
		L"MSR_IA32_A_PMC4",
	},
	{
		MSR_IA32_A_PMC5,
		L"MSR_IA32_A_PMC5",
	},
	{
		MSR_IA32_A_PMC6,
		L"MSR_IA32_A_PMC6",
	},
	{
		MSR_IA32_A_PMC7,
		L"MSR_IA32_A_PMC7",
	},
	{
		MSR_IA32_MCG_EXT_CTL,
		L"MSR_IA32_MCG_EXT_CTL",
	},
	{
		MSR_IA32_SGX_SVN_STATUS,
		L"MSR_IA32_SGX_SVN_STATUS",
	},
	{
		MSR_IA32_RTIT_OUTPUT_BASE,
		L"MSR_IA32_RTIT_OUTPUT_BASE",
	},
	{
		MSR_IA32_RTIT_OUTPUT_MASK_PTRS,
		L"MSR_IA32_RTIT_OUTPUT_MASK_PTRS",
	},
	{
		MSR_IA32_RTIT_CTL,
		L"MSR_IA32_RTIT_CTL",
	},
	{
		MSR_IA32_RTIT_STATUS,
		L"MSR_IA32_RTIT_STATUS",
	},
	{
		MSR_IA32_RTIT_CR3_MATCH,
		L"MSR_IA32_RTIT_CR3_MATCH",
	},
	{
		MSR_IA32_RTIT_ADDR0_A,
		L"MSR_IA32_RTIT_ADDR0_A",
	},
	{
		MSR_IA32_RTIT_ADDR1_A,
		L"MSR_IA32_RTIT_ADDR1_A",
	},
	{
		MSR_IA32_RTIT_ADDR2_A,
		L"MSR_IA32_RTIT_ADDR2_A",
	},
	{
		MSR_IA32_RTIT_ADDR3_A,
		L"MSR_IA32_RTIT_ADDR3_A",
	},
	{
		MSR_IA32_RTIT_ADDR0_B,
		L"MSR_IA32_RTIT_ADDR0_B",
	},
	{
		MSR_IA32_RTIT_ADDR1_B,
		L"MSR_IA32_RTIT_ADDR1_B",
	},
	{
		MSR_IA32_RTIT_ADDR2_B,
		L"MSR_IA32_RTIT_ADDR2_B",
	},
	{
		MSR_IA32_RTIT_ADDR3_B,
		L"MSR_IA32_RTIT_ADDR3_B",
	},
	{
		MSR_IA32_DS_AREA,
		L"MSR_IA32_DS_AREA",
	},
	{
		MSR_IA32_TSC_DEADLINE,
		L"MSR_IA32_TSC_DEADLINE",
	},
	{
		MSR_IA32_PM_ENABLE,
		L"MSR_IA32_PM_ENABLE",
	},
	{
		MSR_IA32_HWP_CAPABILITIES,
		L"MSR_IA32_HWP_CAPABILITIES",
	},
	{
		MSR_IA32_HWP_REQUEST_PKG,
		L"MSR_IA32_HWP_REQUEST_PKG",
	},
	{
		MSR_IA32_HWP_INTERRUPT,
		L"MSR_IA32_HWP_INTERRUPT",
	},
	{
		MSR_IA32_HWP_REQUEST,
		L"MSR_IA32_HWP_REQUEST",
	},
	{
		MSR_IA32_HWP_STATUS,
		L"MSR_IA32_HWP_STATUS",
	},
	{
		MSR_IA32_X2APIC_APICID,
		L"MSR_IA32_X2APIC_APICID",
	},
	{
		MSR_IA32_X2APIC_VERSION,
		L"MSR_IA32_X2APIC_VERSION",
	},
	{
		MSR_IA32_X2APIC_TPR,
		L"MSR_IA32_X2APIC_TPR",
	},
	{
		MSR_IA32_X2APIC_PPR,
		L"MSR_IA32_X2APIC_PPR",
	},
	{
		MSR_IA32_X2APIC_EOI,
		L"MSR_IA32_X2APIC_EOI",
	},
	{
		MSR_IA32_X2APIC_LDR,
		L"MSR_IA32_X2APIC_LDR",
	},
	{
		MSR_IA32_X2APIC_SIVR,
		L"MSR_IA32_X2APIC_SIVR",
	},
	{
		MSR_IA32_X2APIC_ISR0,
		L"MSR_IA32_X2APIC_ISR0",
	},
	{
		MSR_IA32_X2APIC_ISR1,
		L"MSR_IA32_X2APIC_ISR1",
	},
	{
		MSR_IA32_X2APIC_ISR2,
		L"MSR_IA32_X2APIC_ISR2",
	},
	{
		MSR_IA32_X2APIC_ISR3,
		L"MSR_IA32_X2APIC_ISR3",
	},
	{
		MSR_IA32_X2APIC_ISR4,
		L"MSR_IA32_X2APIC_ISR4",
	},
	{
		MSR_IA32_X2APIC_ISR5,
		L"MSR_IA32_X2APIC_ISR5",
	},
	{
		MSR_IA32_X2APIC_ISR6,
		L"MSR_IA32_X2APIC_ISR6",
	},
	{
		MSR_IA32_X2APIC_ISR7,
		L"MSR_IA32_X2APIC_ISR7",
	},
	{
		MSR_IA32_X2APIC_TMR0,
		L"MSR_IA32_X2APIC_TMR0",
	},
	{
		MSR_IA32_X2APIC_TMR1,
		L"MSR_IA32_X2APIC_TMR1",
	},
	{
		MSR_IA32_X2APIC_TMR2,
		L"MSR_IA32_X2APIC_TMR2",
	},
	{
		MSR_IA32_X2APIC_TMR3,
		L"MSR_IA32_X2APIC_TMR3",
	},
	{
		MSR_IA32_X2APIC_TMR4,
		L"MSR_IA32_X2APIC_TMR4",
	},
	{
		MSR_IA32_X2APIC_TMR5,
		L"MSR_IA32_X2APIC_TMR5",
	},
	{
		MSR_IA32_X2APIC_TMR6,
		L"MSR_IA32_X2APIC_TMR6",
	},
	{
		MSR_IA32_X2APIC_TMR7,
		L"MSR_IA32_X2APIC_TMR7",
	},
	{
		MSR_IA32_X2APIC_IRR0,
		L"MSR_IA32_X2APIC_IRR0",
	},
	{
		MSR_IA32_X2APIC_IRR1,
		L"MSR_IA32_X2APIC_IRR1",
	},
	{
		MSR_IA32_X2APIC_IRR2,
		L"MSR_IA32_X2APIC_IRR2",
	},
	{
		MSR_IA32_X2APIC_IRR3,
		L"MSR_IA32_X2APIC_IRR3",
	},
	{
		MSR_IA32_X2APIC_IRR4,
		L"MSR_IA32_X2APIC_IRR4",
	},
	{
		MSR_IA32_X2APIC_IRR5,
		L"MSR_IA32_X2APIC_IRR5",
	},
	{
		MSR_IA32_X2APIC_IRR6,
		L"MSR_IA32_X2APIC_IRR6",
	},
	{
		MSR_IA32_X2APIC_IRR7,
		L"MSR_IA32_X2APIC_IRR7",
	},
	{
		MSR_IA32_X2APIC_ESR,
		L"MSR_IA32_X2APIC_ESR",
	},
	{
		MSR_IA32_X2APIC_LVT_CMCI,
		L"MSR_IA32_X2APIC_LVT_CMCI",
	},
	{
		MSR_IA32_X2APIC_ICR,
		L"MSR_IA32_X2APIC_ICR",
	},
	{
		MSR_IA32_X2APIC_LVT_TIMER,
		L"MSR_IA32_X2APIC_LVT_TIMER",
	},
	{
		MSR_IA32_X2APIC_LVT_THERMAL,
		L"MSR_IA32_X2APIC_LVT_THERMAL",
	},
	{
		MSR_IA32_X2APIC_LVT_PMI,
		L"MSR_IA32_X2APIC_LVT_PMI",
	},
	{
		MSR_IA32_X2APIC_LVT_LINT0,
		L"MSR_IA32_X2APIC_LVT_LINT0",
	},
	{
		MSR_IA32_X2APIC_LVT_LINT1,
		L"MSR_IA32_X2APIC_LVT_LINT1",
	},
	{
		MSR_IA32_X2APIC_LVT_ERROR,
		L"MSR_IA32_X2APIC_LVT_ERROR",
	},
	{
		MSR_IA32_X2APIC_INIT_COUNT,
		L"MSR_IA32_X2APIC_INIT_COUNT",
	},
	{
		MSR_IA32_X2APIC_CUR_COUNT,
		L"MSR_IA32_X2APIC_CUR_COUNT",
	},
	{
		MSR_IA32_X2APIC_DIV_CONF,
		L"MSR_IA32_X2APIC_DIV_CONF",
	},
	{
		MSR_IA32_X2APIC_SELF_IPI,
		L"MSR_IA32_X2APIC_SELF_IPI",
	},
	{
		MSR_IA32_TME_ACTIVATE,
		L"MSR_IA32_TME_ACTIVATE",
	},
	{
		MSR_IA32_DEBUG_INTERFACE,
		L"MSR_IA32_DEBUG_INTERFACE",
	},
	{
		MSR_IA32_L3_QOS_CFG,
		L"MSR_IA32_L3_QOS_CFG",
	},
	{
		MSR_IA32_L2_QOS_CFG,
		L"MSR_IA32_L2_QOS_CFG",
	},
	{
		MSR_IA32_QM_EVTSEL,
		L"MSR_IA32_QM_EVTSEL",
	},
	{
		MSR_IA32_QM_CTR,
		L"MSR_IA32_QM_CTR",
	},
	{
		MSR_IA32_PQR_ASSOC,
		L"MSR_IA32_PQR_ASSOC",
	},
	{
		MSR_IA32_BNDCFGS,
		L"MSR_IA32_BNDCFGS",
	},
	{
		MSR_IA32_XSS,
		L"MSR_IA32_XSS",
	},
	{
		MSR_IA32_PKG_HDC_CTL,
		L"MSR_IA32_PKG_HDC_CTL",
	},
	{
		MSR_IA32_PM_CTL1,
		L"MSR_IA32_PM_CTL1",
	},
	{
		MSR_IA32_THREAD_STALL,
		L"MSR_IA32_THREAD_STALL",
	},
	{
		MSR_IA32_EFER,
		L"MSR_IA32_EFER",
	},
	{
		MSR_IA32_STAR,
		L"MSR_IA32_STAR",
	},
	{
		MSR_IA32_LSTAR,
		L"MSR_IA32_LSTAR",
	},
	{
		MSR_IA32_CSTAR,
		L"MSR_IA32_CSTAR",
	},
	{
		MSR_IA32_FMASK,
		L"MSR_IA32_FMASK",
	},
	{
		MSR_IA32_FS_BASE,
		L"MSR_IA32_FS_BASE",
	},
	{
		MSR_IA32_GS_BASE,
		L"MSR_IA32_GS_BASE",
	},
	{
		MSR_IA32_KERNEL_GS_BASE,
		L"MSR_IA32_KERNEL_GS_BASE",
	},
	{
		MSR_IA32_TSC_AUX,
		L"MSR_IA32_TSC_AUX",
	},
};
 
  
EFI_STATUS
EFIAPI
DumpMsrEntry (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  )
{
  EFI_STATUS                    Status = EFI_SUCCESS;
	
  UINT64  MsrRegisters;

  DEBUG ((EFI_D_ERROR , "[FSP_MSR] DumpMsrEntry Start..\n"));

  UINT32 Index = 0;
  UINT32 Cnt = sizeof (RegList)/sizeof(REG);
  for (Index = 0; Index < Cnt; Index ++ ) {
    MsrRegisters = AsmReadMsr64 (RegList[Index].MsrReg);
    Print(L"%s=0x%16llx\n\r", RegList[Index].MsrRegStr, MsrRegisters);
    DEBUG ((DEBUG_ERROR, "%s=0x%16llx\n",RegList[Index].MsrRegStr, MsrRegisters));
  }


  DEBUG ((DEBUG_ERROR, "[FSP_MSR] %a Exit\n",__FUNCTION__));
  return Status;
}