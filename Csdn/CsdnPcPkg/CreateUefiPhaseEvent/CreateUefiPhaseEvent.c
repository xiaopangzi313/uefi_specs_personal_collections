#include <Uefi.h>
#include <Library/UefiLib.h>
#include <Library/BaseLib.h>
#include <Library/DebugLib.h>
#include <Library/BaseMemoryLib.h>
#include <Library/UefiDriverEntryPoint.h>
#include <Library/UefiApplicationEntryPoint.h>
#include <Library/UefiBootServicesTableLib.h>
#include <Library/UefiRuntimeServicesTableLib.h>
#include <Library/UefiRuntimeLib.h>

STATIC VOID  *mRegistration;

VOID
CsdnOnPciEnumCompleteCallback (
  IN EFI_EVENT  Event,
  IN VOID      *Context
  )
{
  DEBUG((
    EFI_D_ERROR,
    "[CSDN] %a Enter \n",
    __FUNCTION__));



  DEBUG((
    EFI_D_ERROR,
    "[CSDN] %a Exit \n",
    __FUNCTION__));

}

VOID
CsdnCallBackReady2boot (
  IN EFI_EVENT                Event,
  IN VOID                     *Context
)
{
  DEBUG((
    EFI_D_ERROR,
    "[CSDN] %a Enter \n",
    __FUNCTION__));



  DEBUG((
    EFI_D_ERROR,
    "[CSDN] %a Exit \n",
    __FUNCTION__));
}


VOID
CsdnCallBackEndofDxe (
  IN EFI_EVENT                Event,
  IN VOID                     *Context
)
{
  DEBUG((
    EFI_D_ERROR,
    "[CSDN] %a Enter \n",
    __FUNCTION__));



  DEBUG((
    EFI_D_ERROR,
    "[CSDN] %a Exit \n",
    __FUNCTION__));
}


VOID
CsdnCallBackExitBootService (
  IN EFI_EVENT                Event,
  IN VOID                     *Context
)
{
  DEBUG((
    EFI_D_ERROR,
    "[CSDN] %a Enter \n",
    __FUNCTION__));



  DEBUG((
    EFI_D_ERROR,
    "[CSDN] %a Exit \n",
    __FUNCTION__));
}



EFI_STATUS 
CreateUefiPhaseEventEntry(
    IN EFI_HANDLE           ImageHandle,
    IN EFI_SYSTEM_TABLE     *SystemTable
  )
{
  EFI_STATUS Status;
  EFI_EVENT   CsdnReadyToBootEvent; 
  EFI_EVENT   CsdnExitBootServiceEvent; 
  EFI_EVENT   CsdnEndofDxeEvent; 
  EFI_EVENT   Event;
  
  Status = EFI_SUCCESS;

  DEBUG((
    EFI_D_ERROR,
    "[CSDN] %a Enter \n",
    __FUNCTION__));

  
   Status = gBS->CreateEventEx (
                EVT_NOTIFY_SIGNAL,
                TPL_CALLBACK,
                CsdnCallBackEndofDxe,
                NULL,
                &gEfiEndOfDxeEventGroupGuid,
                &CsdnEndofDxeEvent);
  if (EFI_ERROR(Status)) {
    DEBUG ((DEBUG_ERROR, "%a(): Failed to create event Status=%d \n", __FUNCTION__, Status));
    return Status;
  }

  Status = gBS->CreateEventEx (
                EVT_NOTIFY_SIGNAL,
                TPL_CALLBACK,
                CsdnCallBackReady2boot,
                NULL,
                &gEfiEventReadyToBootGuid,
                &CsdnReadyToBootEvent);

  if (EFI_ERROR(Status)) {
    DEBUG ((DEBUG_ERROR, "%a(): Failed to create event Status=%d \n", __FUNCTION__, Status));
    return Status;
  }
  
  Status = gBS->CreateEventEx (
          EVT_NOTIFY_SIGNAL,
          TPL_CALLBACK,
          CsdnCallBackExitBootService,
          NULL,
          &gEfiEventExitBootServicesGuid,
          &CsdnExitBootServiceEvent);
  if (EFI_ERROR(Status)) {
    DEBUG ((DEBUG_ERROR, "%a(): Failed to create event Status=%d \n", __FUNCTION__, Status));
    return Status;
  }


  Event = EfiCreateProtocolNotifyEvent (
            &gEfiPciEnumerationCompleteProtocolGuid,
            TPL_CALLBACK,
            CsdnOnPciEnumCompleteCallback,
            NULL,
            &mRegistration);

  DEBUG((
    EFI_D_ERROR,
    "[CSDN] %a Exit \n",
    __FUNCTION__));

  return Status;
}
