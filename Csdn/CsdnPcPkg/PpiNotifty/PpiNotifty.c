#include <uefi.h>
#include <Library/UefiLib.h>
#include <Library/BaseLib.h>
#include <Library/DebugLib.h>
#include <Library/BaseMemoryLib.h>
#include <Library/UefiDriverEntryPoint.h>
#include <Library/PeimEntryPoint.h>
#include <Library/PeiServicesLib.h>
#include <Library/PeiServicesTablePointerLib.h>
#include <Pi/PiHob.h>
#include <Pi/PiPeiCis.h>

EFI_STATUS
CsdnEndofPeiSignalNotifyCallBack (
  IN EFI_PEI_SERVICES           **PeiServices,
  IN EFI_PEI_NOTIFY_DESCRIPTOR  *NotifyDescriptor,
  IN VOID                       *Ppi
  )
{
  EFI_STATUS  Status;

  Status = EFI_SUCCESS;

  DEBUG((
    EFI_D_ERROR,
    "[CSDN] %a Enter \n",
    __FUNCTION__));


  DEBUG((
    EFI_D_ERROR,
    "[CSDN] %a Exit \n",
    __FUNCTION__));

  return Status;
}

EFI_PEI_NOTIFY_DESCRIPTOR  mNotifyList[] = {
  {
    (EFI_PEI_PPI_DESCRIPTOR_NOTIFY_CALLBACK | EFI_PEI_PPI_DESCRIPTOR_TERMINATE_LIST),
    &gEfiEndOfPeiSignalPpiGuid,
    CsdnEndofPeiSignalNotifyCallBack
  }
};

//ShellCEntryLib call user interface ShellAppMain
EFI_STATUS
EFIAPI
PpiNotiftyEntry(
  IN       EFI_PEI_FILE_HANDLE  FileHandle,
  IN CONST EFI_PEI_SERVICES     **PeiServices
)
{
  EFI_STATUS  Status;

  Status = EFI_SUCCESS;

  DEBUG((
    EFI_D_ERROR,
    "[CSDN] %a Enter \n",
    __FUNCTION__));

  //
  // At the End of PEI phase, once signal done, this callback will be invoked
  //
  Status = PeiServicesNotifyPpi (&mNotifyList[0]);			
  ASSERT_EFI_ERROR (Status);


  DEBUG((
    EFI_D_ERROR,
    "[CSDN] %a Exit \n",
    __FUNCTION__));
  return Status;
}
