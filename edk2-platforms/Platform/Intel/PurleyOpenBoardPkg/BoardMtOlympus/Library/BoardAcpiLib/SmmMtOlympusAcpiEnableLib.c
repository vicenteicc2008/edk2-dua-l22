/** @file

Copyright (c) 2018, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

**/

#include <Base.h>
#include <Uefi.h>
#include <PiDxe.h>
#include <Library/BaseLib.h>
#include <Library/IoLib.h>
#include <Library/BoardAcpiTableLib.h>
#include <Library/PcdLib.h>
#include <Library/DebugLib.h>

EFI_STATUS
EFIAPI
MtOlympusBoardEnableAcpi (
  IN BOOLEAN  EnableSci
  )
{
  // enable additional board register
  return EFI_SUCCESS;
}

EFI_STATUS
EFIAPI
MtOlympusBoardDisableAcpi (
  IN BOOLEAN  DisableSci
  )
{
  // enable additional board register
  return EFI_SUCCESS;
}

