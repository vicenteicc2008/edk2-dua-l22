## @file
# This package provides Beep Debug feature.
# This file should be included into another package DSC file to build this feature.
#
# The DEC files are used by the utilities that parse DSC and
# INF files to generate AutoGen.c and AutoGen.h files
# for the build infrastructure.
#
# Copyright (c) 2020 - 2021, Intel Corporation. All rights reserved.<BR>
#
# SPDX-License-Identifier: BSD-2-Clause-Patent
#
##

################################################################################
#
# Defines Section - statements that will be processed to create a Makefile.
#
################################################################################
[Defines]
!ifndef $(PEI_ARCH)
  !error "PEI_ARCH must be specified to build this feature!"
!endif
!ifndef $(DXE_ARCH)
  !error "DXE_ARCH must be specified to build this feature!"
!endif

################################################################################
#
# PCD Section - list of PCD Entries modified by the feature.
#
################################################################################

# Unmark the following and StatusCodeHandler.efi to build the .dsc file directly
#[PcdsDynamicDefault]
#  gBeepDebugFeaturePkgTokenSpaceGuid.PcdStatusCodeUseBeep|TRUE

################################################################################
#
# Library Class section - list of all Library Classes needed by this feature.
#
################################################################################

!include MdePkg/MdeLibs.dsc.inc

[LibraryClasses]
  #######################################
  # Edk2 Packages
  #######################################
  BaseLib|MdePkg/Library/BaseLib/BaseLib.inf
  BaseMemoryLib|MdePkg/Library/BaseMemoryLib/BaseMemoryLib.inf
  DebugLib|MdePkg/Library/BaseDebugLibNull/BaseDebugLibNull.inf
  DevicePathLib|MdePkg/Library/UefiDevicePathLib/UefiDevicePathLib.inf
  DxeServicesLib|MdePkg/Library/DxeServicesLib/DxeServicesLib.inf
  IoLib|MdePkg/Library/BaseIoLibIntrinsic/BaseIoLibIntrinsic.inf
  PcdLib|MdePkg/Library/BasePcdLibNull/BasePcdLibNull.inf
  PeiServicesLib|MdePkg/Library/PeiServicesLib/PeiServicesLib.inf
  PrintLib|MdePkg/Library/BasePrintLib/BasePrintLib.inf
  TimerLib|MdePkg/Library/BaseTimerLibNullTemplate/BaseTimerLibNullTemplate.inf
  UefiBootServicesTableLib|MdePkg/Library/UefiBootServicesTableLib/UefiBootServicesTableLib.inf
  UefiDriverEntryPoint|MdePkg/Library/UefiDriverEntryPoint/UefiDriverEntryPoint.inf
  UefiLib|MdePkg/Library/UefiLib/UefiLib.inf
  UefiRuntimeServicesTableLib|MdePkg/Library/UefiRuntimeServicesTableLib/UefiRuntimeServicesTableLib.inf
  PeimEntryPoint|MdePkg/Library/PeimEntryPoint/PeimEntryPoint.inf

[LibraryClasses.common.PEIM]
  #######################################
  # Edk2 Packages
  #######################################
  HobLib|MdePkg/Library/PeiHobLib/PeiHobLib.inf
  MemoryAllocationLib|MdePkg/Library/PeiMemoryAllocationLib/PeiMemoryAllocationLib.inf
  PeiServicesTablePointerLib|MdePkg/Library/PeiServicesTablePointerLibIdt/PeiServicesTablePointerLibIdt.inf

[LibraryClasses.IA32.PEIM,LibraryClasses.IA32.PEI_CORE,LibraryClasses.IA32.SEC]
  #######################################
  # Edk2 Packages
  #######################################
  ReportStatusCodeLib|MdeModulePkg/Library/PeiReportStatusCodeLib/PeiReportStatusCodeLib.inf

[LibraryClasses.common.DXE_DRIVER]
  #######################################
  # Edk2 Packages
  #######################################
  HobLib|MdePkg/Library/DxeHobLib/DxeHobLib.inf
  MemoryAllocationLib|MdePkg/Library/UefiMemoryAllocationLib/UefiMemoryAllocationLib.inf

[LibraryClasses.common.DXE_RUNTIME_DRIVER]
  #######################################
  # Edk2 Packages
  #######################################
  HobLib|MdePkg/Library/DxeHobLib/DxeHobLib.inf
  MemoryAllocationLib|MdePkg/Library/UefiMemoryAllocationLib/UefiMemoryAllocationLib.inf
  UefiRuntimeLib|MdePkg/Library/UefiRuntimeLib/UefiRuntimeLib.inf
  ReportStatusCodeLib|MdeModulePkg/Library/RuntimeDxeReportStatusCodeLib/RuntimeDxeReportStatusCodeLib.inf

[LibraryClasses.common.UEFI_DRIVER]
  #######################################
  # Edk2 Packages
  #######################################
  HobLib|MdePkg/Library/DxeHobLib/DxeHobLib.inf
  MemoryAllocationLib|MdePkg/Library/UefiMemoryAllocationLib/UefiMemoryAllocationLib.inf

[LibraryClasses.X64.DXE_SMM_DRIVER]
  #######################################
  # Edk2 Packages
  #######################################
  SmmServicesTableLib|MdePkg/Library/SmmServicesTableLib/SmmServicesTableLib.inf
  MemoryAllocationLib|MdePkg/Library/SmmMemoryAllocationLib/SmmMemoryAllocationLib.inf
  SmmIoLib|MdePkg/Library/SmmIoLib/SmmIoLib.inf
  SmmMemLib|MdePkg/Library/SmmMemLib/SmmMemLib.inf
  ReportStatusCodeLib|MdeModulePkg/Library/SmmReportStatusCodeLib/SmmReportStatusCodeLib.inf

################################################################################
#
# Component section - list of all components that need built for this feature.
#
# Note: The EDK II DSC file is not used to specify how compiled binary images get placed
#       into firmware volume images. This section is just a list of modules to compile from
#       source into UEFI-compliant binaries.
#       It is the FDF file that contains information on combining binary files into firmware
#       volume images, whose concept is beyond UEFI and is described in PI specification.
#       There may also be modules listed in this section that are not required in the FDF file,
#       When a module listed here is excluded from FDF file, then UEFI-compliant binary will be
#       generated for it, but the binary will not be put into any firmware volume.
#
################################################################################
#
# Feature PEI Components
#

# @todo: Change below line to [Components.$(PEI_ARCH)] after https://bugzilla.tianocore.org/show_bug.cgi?id=2308
#        is completed.
[Components.IA32]
  #####################################
  # Beep Debug Feature Package
  #####################################

  # Add library instances here that are not included in package components and should be tested
  # in the package build.
  BeepDebugFeaturePkg/Library/BeepStatusCodeHandlerLib/PeiBeepStatusCodeHandlerLib.inf

  # The following is an example for used with StatusCodeHandler:
# MdeModulePkg/Universal/StatusCodeHandler/Pei/StatusCodeHandlerPei.inf {
#   <LibraryClasses>
#     OemHookStatusCodeLib|MdeModulePkg/Library/OemHookStatusCodeLibNull/OemHookStatusCodeLibNull.inf
#     SerialPortLib|MdePkg/Library/BaseSerialPortLibNull/BaseSerialPortLibNull.inf
#     BeepLib|BeepDebugFeaturePkg/Library/BeepLib/BeepLibNull.inf
#     BeepMapLib|BeepDebugFeaturePkg/Library/BeepMapLib/BeepMapLib.inf
#     NULL|BeepDebugFeaturePkg/Library/BeepStatusCodeHandlerLib/PeiBeepStatusCodeHandlerLib.inf
# }

  # Add components here that should be included in the package build.

#
# Feature DXE Components
#

# @todo: Change below line to [Components.$(DXE_ARCH)] after https://bugzilla.tianocore.org/show_bug.cgi?id=2308
#        is completed.
[Components.X64]
  #####################################
  # Beep Debug Feature Package
  #####################################

  # Add library instances here that are not included in package components and should be tested
  # in the package build.
  BeepDebugFeaturePkg/Library/BeepStatusCodeHandlerLib/RuntimeDxeBeepStatusCodeHandlerLib.inf
  BeepDebugFeaturePkg/Library/BeepStatusCodeHandlerLib/SmmBeepStatusCodeHandlerLib.inf

  # The following is an example for used with StatusCodeHandler:
# MdeModulePkg/Universal/StatusCodeHandler/RuntimeDxe/StatusCodeHandlerRuntimeDxe.inf {
#   <LibraryClasses>
#     OemHookStatusCodeLib|MdeModulePkg/Library/OemHookStatusCodeLibNull/OemHookStatusCodeLibNull.inf
#     SerialPortLib|MdePkg/Library/BaseSerialPortLibNull/BaseSerialPortLibNull.inf
#     BeepLib|BeepDebugFeaturePkg/Library/BeepLib/BeepLibNull.inf
#     BeepMapLib|BeepDebugFeaturePkg/Library/BeepMapLib/BeepMapLib.inf
#     NULL|BeepDebugFeaturePkg/Library/BeepStatusCodeHandlerLib/RuntimeDxeBeepStatusCodeHandlerLib.inf
# }

# MdeModulePkg/Universal/StatusCodeHandler/Smm/StatusCodeHandlerSmm.inf {
#   <LibraryClasses>
#     OemHookStatusCodeLib|MdeModulePkg/Library/OemHookStatusCodeLibNull/OemHookStatusCodeLibNull.inf
#     SerialPortLib|MdePkg/Library/BaseSerialPortLibNull/BaseSerialPortLibNull.inf
#     BeepLib|BeepDebugFeaturePkg/Library/BeepLib/BeepLibNull.inf
#     BeepMapLib|BeepDebugFeaturePkg/Library/BeepMapLib/BeepMapLib.inf
#     NULL|BeepDebugFeaturePkg/Library/BeepStatusCodeHandlerLib/SmmBeepStatusCodeHandlerLib.inf
# }

  # Add components here that should be included in the package build.

###################################################################################################
#
# BuildOptions Section - Define the module specific tool chain flags that should be used as
#                        the default flags for a module. These flags are appended to any
#                        standard flags that are defined by the build process. They can be
#                        applied for any modules or only those modules with the specific
#                        module style (EDK or EDKII) specified in [Components] section.
#
#                        For advanced features, it is recommended to enable [BuildOptions] in
#                        the applicable INF file so it does not affect the whole board package
#                        build when this DSC file is active.
#
###################################################################################################
[BuildOptions]
