/* Time-stamp: <2017-09-28 23:31:23 andreiw>
 * Copyright (C) 2016 Andrei Evgenievich Warkentin
 *
 * This program and the accompanying materials
 * are licensed and made available under the terms and conditions of the BSD License
 * which accompanies this distribution.  The full text of the license may be found at
 * http://opensource.org/licenses/bsd-license.php
 *
 * THE PROGRAM IS DISTRIBUTED UNDER THE BSD LICENSE ON AN "AS IS" BASIS,
 * WITHOUT WARRANTIES OR REPRESENTATIONS OF ANY KIND, EITHER EXPRESS OR IMPLIED.
 */

#include <Uefi.h>
#include <Library/UefiLib.h>
#include <Library/UefiBootServicesTableLib.h>
#include <Library/ShellCEntryLib.h>
#include <Library/BaseMemoryLib.h>
#include <Library/UefiBootServicesTableLib.h>
#include <Library/MemoryAllocationLib.h>
#include <Library/BaseLib.h>
#include <IndustryStandard/Acpi.h>
#include <Protocol/LoadedImage.h>
#include <Pi/PiBootMode.h>
#include <Pi/PiHob.h>
#include <Library/HobLib.h>
#include <Library/UefiBootServicesTableLib.h>

#include <Library/DebugLib.h>


EFI_STATUS
EFIAPI
UefiMain (
          IN EFI_HANDLE ImageHandle,
          IN EFI_SYSTEM_TABLE *SystemTable
          )
{
  EFI_STATUS Status = EFI_SUCCESS;

  EFI_PEI_HOB_POINTERS    Hob;
  Hob.Raw = GetHobList ();

  for (; !END_OF_HOB_LIST(Hob); Hob.Raw = GET_NEXT_HOB(Hob)) {
    DEBUG((DEBUG_ERROR, "[Csdn] Guid:%g Type:0x%x Length:%x\n",
        Hob.Guid,
        Hob.Header->HobType,
        Hob.Header->HobLength
    ));
  }
  return Status;
}
