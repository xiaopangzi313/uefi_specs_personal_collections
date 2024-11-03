
#include <Library/PeiServicesLib.h>
#include <Library/SmmRelocationLib.h>
#include <Ppi/MpServices2.h>
#include <Library/DebugLib.h>
#include <Library/BaseLib.h>
#include <Library/PeimEntryPoint.h>
#include <Library/PeiServicesTablePointerLib.h>
#include <Library/BaseMemoryLib.h>
#include <Library/MemoryAllocationLib.h>
#include <Register/Intel/Cpuid.h>
#include <Register/Intel/Msr.h>

// AsmReadMsr64 (MSR_IA32_MTRR_DEF_TYPE, MtrrSetting->MtrrDefType);


VOID
CsdnReadMsr (
  VOID
  )
{
  MSR_IA32_MCG_CAP_REGISTER          McgCap;
  McgCap.Uint64 = AsmReadMsr64 (MSR_IA32_MCG_CAP);

  DEBUG ((
    DEBUG_ERROR,
    "[CSDN] CsdnReadMsr McgCap:%x\n",
    McgCap
  ));
}


EFI_STATUS
EFIAPI
PeimMpserviceEntryPoint (
  IN EFI_PEI_FILE_HANDLE     FileHandle,
  IN CONST EFI_PEI_SERVICES  **PeiServices
  )
{
  EFI_STATUS  Status;
  UINTN       NumberOfEnabledProcessors;
  UINTN       NumberOfProcessors;

  EDKII_PEI_MP_SERVICES2_PPI     *MpService2Ppi;
  DEBUG ((
    EFI_D_ERROR,
    "[Csdn] %a Enter\n",
    __FUNCTION__
    ));
  //
  // Locate CpuMpCpu MpService Ppi
  //
  Status = PeiServicesLocatePpi (
              &gEdkiiPeiMpServices2PpiGuid,
              0,
              NULL,
              (VOID **) &MpService2Ppi
              );
  DEBUG ((EFI_D_ERROR, "[Csdn] MpService2Ppi : %16x\n", (UINTN)(VOID *)MpService2Ppi));
  ASSERT_EFI_ERROR (Status);

  ///
  /// Fill Cpu MP system data
  ///
  MpService2Ppi->GetNumberOfProcessors (MpService2Ppi, (UINTN *)&NumberOfProcessors, (UINTN *)&NumberOfEnabledProcessors);
  DEBUG ((
    EFI_D_ERROR,
    "[Csdn] NumberOfProcessors : %x NumberOfEnabledProcessors: %x\n",
    NumberOfProcessors,
    NumberOfEnabledProcessors
    ));

  //
  // Read MSR values for all processors.
  //
  Status = MpService2Ppi->StartupAllCPUs (
                            MpService2Ppi,
                            (EFI_AP_PROCEDURE)CsdnReadMsr,
                            0,
                            NULL
                            );
  ASSERT_EFI_ERROR (Status);

  DEBUG ((
    EFI_D_ERROR,
    "[Csdn] %a Exit\n",
    __FUNCTION__
    ));
  return EFI_SUCCESS;
}
