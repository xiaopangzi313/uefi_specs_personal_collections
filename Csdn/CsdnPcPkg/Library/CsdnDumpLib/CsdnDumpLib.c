#include <Uefi.h>
#include <Library/BaseLib.h>
#include <Library/BaseMemoryLib.h>
#include <Library/DebugLib.h>
#include <Library/DevicePathLib.h>
#include <Library/MemoryAllocationLib.h>
#include <Library/PrintLib.h>
#include <Library/UefiLib.h>

#define VERBOSE_COLUME_SIZE 32

/**
  Dump data

  @param[in] Data Pointer to data.
  @param[in] Size size of data to dump.
**/
VOID
CsdnDumpData (
  IN UINT8  *Data,
  IN UINTN  Size
  )
{
  UINTN  Index;

  for (Index = 0; Index < Size; Index++) {
    DEBUG ((DEBUG_VERBOSE, "%02x ", (UINTN)Data[Index]));
  }
}

/**
  Dump hex data

  @param[in] Data Pointer to hex data.
  @param[in] Size size of hex data to dump.
**/
VOID
CsdnDumpHex (
  IN UINT8  *Data,
  IN UINTN  Size,
  IN CHAR16 *Tag
  )
{
  UINTN  Index;
  UINTN  Count;
  UINTN  Left;

  Count = Size / VERBOSE_COLUME_SIZE;
  Left  = Size % VERBOSE_COLUME_SIZE;
  for (Index = 0; Index < Count; Index++) {
    CsdnDumpData (Data + Index * VERBOSE_COLUME_SIZE, VERBOSE_COLUME_SIZE);
    DEBUG ((DEBUG_VERBOSE, "\n"));
  }

  if (Left != 0) {
    CsdnDumpData (Data + Index * VERBOSE_COLUME_SIZE, Left);
    DEBUG ((DEBUG_VERBOSE, "\n"));
  }

  DEBUG ((DEBUG_VERBOSE, "\n"));
}