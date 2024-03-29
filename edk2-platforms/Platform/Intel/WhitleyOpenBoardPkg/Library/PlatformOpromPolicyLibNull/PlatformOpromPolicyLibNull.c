/** @file

  @copyright
  Copyright 2015 - 2021 Intel Corporation. <BR>

  SPDX-License-Identifier: BSD-2-Clause-Patent
**/

#include <Base.h>
#include <Protocol/PciIo.h>
#include <Library/PlatformOpromPolicyLib.h>

/**
  Decide if BIOS embdded option roms should be loaded for a certain PCI device.

  @param  PciIo      PCI device to return the ROM image for.

  @retval TRUE       BIOS embedded option roms should not be run for the PCI device.
  @retval FALSE      BIOS embedded option roms could be run for the PCI device.
**/

BOOLEAN
PlatformOpromLoadDevicePolicy (
  IN EFI_PCI_IO_PROTOCOL *PciIo
  )
{
  return TRUE;
}

/**
  For devices that support multiple option roms like FCoE, PXE, iSCSI etc., this function decides if one of these BIOS embdded option roms should be loaded for a certain PCI device based on platform choices.

  @param  PciHandle      PCI device to return the ROM image for.
  @param  TableIndex     The index pointing to the option rom in the platform option rom table for the PCI device.

  @retval FALSE          The specific BIOS embedded option rom should not be run for the PCI device.
  @retval TRUE           The specific BIOS embedded option rom could be run for a certain PCI device.
**/

OPROM_LOAD_POLICY
PlatformOpromLoadTypePolicy (
  IN EFI_HANDLE PciHandle,
  IN UINTN      TableIndex
  )
{
  return INCLUSIVE_LOAD;
}

/**
  Decide if a PCIe device option rom should be dispacthed.

  @param  PciHandle      PCI device handle.

  @retval FALSE          The specific PCIe option rom should not be dispatched for the PCI device.
  @retval TRUE           The specific PCIe option rom could be dispatched for a certain PCI device.

**/

BOOLEAN
PlatformOpromDispatchPolicy (
  IN  EFI_HANDLE                        DeviceHandle
)
{
  return TRUE;
}


/**
  Enable the legacy console redirection before dispatch the legacy ORPOM or disable the legacy console redirection after dispatch
  the legacy ORPOM based on setup option and SOL status.

  @param  Mode             Subfunction.
  @param  CheckIsAhciRom   If the device is legacy Ahci device.

  @retval

**/

VOID
PlatformOpromLegacyCRPolicy (
  IN     UINTN                           Mode,
  IN     BOOLEAN                         CheckIsAhciRom
)
{

  return;
}

