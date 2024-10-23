
#include <Library/PeiServicesLib.h>
#include <Library/SmmRelocationLib.h>
#include <Ppi/MpServices2.h>

//
  // Locate CpuMpCpu MpService Ppi
  //
  Status = PeiServicesLocatePpi (
              &gEdkiiPeiMpServices2PpiGuid,
              0,
              NULL,
              (VOID **) &mMpServices2Ppi
              );
  DEBUG ((EFI_D_ERROR, "[ACPI](MADT) mMpServices2Ppi : %16x\n", (UINTN)(VOID *)mMpServices2Ppi));
  ASSERT_EFI_ERROR (Status);

  ///
  /// Fill Cpu MP system data
  ///
  mMpServices2Ppi->GetNumberOfProcessors (mMpServices2Ppi, (UINTN *)&NumberOfProcessors, (UINTN *)&NumberOfEnabledProcessors);
  mNumberOfCPUs = NumberOfProcessors;
 
   UINTN  NumberOfEnabledProcessors;

   
   #include <Protocol/MpService.h>

    //
    // Get MP Services Protocol
    //
    Status = gBS->LocateProtocol (
                    &gEfiMpServiceProtocolGuid,
                    NULL,
                    (VOID **)&MpServices
                    );
    ASSERT_EFI_ERROR (Status);

    //
    // Get the number of CPUs
    //
    Status = MpServices->GetNumberOfProcessors (
                           MpServices,
                           &NumberOfCpus,
                           &NumberOfEnabledProcessors
                           );
    ASSERT_EFI_ERROR (Status);
