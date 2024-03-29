/**

  Copyright (C) 2019, Marvell International Ltd. and its affiliates.
  Copyright (C) 2021, Semihalf.

  SPDX-License-Identifier: BSD-2-Clause-Patent

**/

#define CP0_PCI0_BUS_MIN        0x0
#define CP0_PCI0_BUS_MAX        0x0
#define CP0_PCI0_BUS_COUNT      0x1
#define CP0_PCI0_MMIO32_BASE    0xC0000000
#define CP0_PCI0_MMIO32_SIZE    0x20000000
#define CP0_PCI0_MMIO32_MAX     0xDFFFFFFF
#define CP0_PCI0_MMIO64_BASE    0x810000000
#define CP0_PCI0_MMIO64_SIZE    0x80000000
#define CP0_PCI0_MMIO64_MAX     0x88FFFFFFF
#define CP0_PCI0_IO_BASE        0x0
#define CP0_PCI0_IO_SIZE        0x10000
#define CP0_PCI0_IO_TRANSLATION 0x80FF00000
#define CP0_PCI0_ECAM_BASE      0x800008000
#define CP0_PCI0_ECAM_SIZE      0x100000
#define CP0_PCI0_ECAM_MAX       0x800107FFF

#define CP1_PCI0_BUS_MIN        0x0
#define CP1_PCI0_BUS_MAX        0x0
#define CP1_PCI0_BUS_COUNT      0x1
#define CP1_PCI0_MMIO32_BASE    0xE3000000
#define CP1_PCI0_MMIO32_SIZE    0x1000000
#define CP1_PCI0_MMIO32_MAX     0xE3FFFFFF
#define CP1_PCI0_MMIO64_BASE    0x890000000
#define CP1_PCI0_MMIO64_SIZE    0x10000000
#define CP1_PCI0_MMIO64_MAX     0x89FFFFFFF
#define CP1_PCI0_IO_BASE        0x0
#define CP1_PCI0_IO_SIZE        0x10000
#define CP1_PCI0_IO_TRANSLATION 0xE2F00000
#define CP1_PCI0_ECAM_BASE      0xE2008000
#define CP1_PCI0_ECAM_SIZE      0x100000

#define CP1_PCI1_BUS_MIN        0x0
#define CP1_PCI1_BUS_MAX        0x0
#define CP1_PCI1_BUS_COUNT      0x1
#define CP1_PCI1_MMIO32_BASE    0xE5000000
#define CP1_PCI1_MMIO32_SIZE    0x1000000
#define CP1_PCI1_MMIO32_MAX     0xE5FFFFFF
#define CP1_PCI1_MMIO64_BASE    0x8A0000000
#define CP1_PCI1_MMIO64_SIZE    0x10000000
#define CP1_PCI1_MMIO64_MAX     0x8AFFFFFFF
#define CP1_PCI1_IO_BASE        0x0
#define CP1_PCI1_IO_SIZE        0x10000
#define CP1_PCI1_IO_TRANSLATION 0xE4F00000
#define CP1_PCI1_ECAM_BASE      0xE4008000
#define CP1_PCI1_ECAM_SIZE      0x100000

#define CP1_PCI2_BUS_MIN        0x0
#define CP1_PCI2_BUS_MAX        0x0
#define CP1_PCI2_BUS_COUNT      0x1
#define CP1_PCI2_MMIO32_BASE    0xE7000000
#define CP1_PCI2_MMIO32_SIZE    0x1000000
#define CP1_PCI2_MMIO32_MAX     0xE7FFFFFF
#define CP1_PCI2_MMIO64_BASE    0x8B0000000
#define CP1_PCI2_MMIO64_SIZE    0x10000000
#define CP1_PCI2_MMIO64_MAX     0x8BFFFFFFF
#define CP1_PCI2_IO_BASE        0x0
#define CP1_PCI2_IO_SIZE        0x10000
#define CP1_PCI2_IO_TRANSLATION 0xE6F00000
#define CP1_PCI2_ECAM_BASE      0xE6008000
#define CP1_PCI2_ECAM_SIZE      0x100000

#define CP2_PCI0_BUS_MIN        0x0
#define CP2_PCI0_BUS_MAX        0x0
#define CP2_PCI0_BUS_COUNT      0x1
#define CP2_PCI0_MMIO32_BASE    0xEA000000
#define CP2_PCI0_MMIO32_SIZE    0x1000000
#define CP2_PCI0_MMIO32_MAX     0xEAFFFFFF
#define CP2_PCI0_MMIO64_BASE    0x8C0000000
#define CP2_PCI0_MMIO64_SIZE    0x10000000
#define CP2_PCI0_MMIO64_MAX     0x8CFFFFFFF
#define CP2_PCI0_IO_BASE        0x0
#define CP2_PCI0_IO_SIZE        0x10000
#define CP2_PCI0_IO_TRANSLATION 0xE9F00000
#define CP2_PCI0_ECAM_BASE      0xE9008000
#define CP2_PCI0_ECAM_SIZE      0x100000

#define CP2_PCI1_BUS_MIN        0x0
#define CP2_PCI1_BUS_MAX        0x0
#define CP2_PCI1_BUS_COUNT      0x1
#define CP2_PCI1_MMIO32_BASE    0xEC000000
#define CP2_PCI1_MMIO32_SIZE    0x1000000
#define CP2_PCI1_MMIO32_MAX     0xECFFFFFF
#define CP2_PCI1_MMIO64_BASE    0x8D0000000
#define CP2_PCI1_MMIO64_SIZE    0x10000000
#define CP2_PCI1_MMIO64_MAX     0x8DFFFFFFF
#define CP2_PCI1_IO_BASE        0x0
#define CP2_PCI1_IO_SIZE        0x10000
#define CP2_PCI1_IO_TRANSLATION 0xEBF00000
#define CP2_PCI1_ECAM_BASE      0xEB008000
#define CP2_PCI1_ECAM_SIZE      0x100000

#define CP2_PCI2_BUS_MIN        0x0
#define CP2_PCI2_BUS_MAX        0x0
#define CP2_PCI2_BUS_COUNT      0x1
#define CP2_PCI2_MMIO32_BASE    0xEE000000
#define CP2_PCI2_MMIO32_SIZE    0x1000000
#define CP2_PCI2_MMIO32_MAX     0xEEFFFFFF
#define CP2_PCI2_MMIO64_BASE    0x8E0000000
#define CP2_PCI2_MMIO64_SIZE    0x10000000
#define CP2_PCI2_MMIO64_MAX     0x8EFFFFFFF
#define CP2_PCI2_IO_BASE        0x0
#define CP2_PCI2_IO_SIZE        0x10000
#define CP2_PCI2_IO_TRANSLATION 0xEDF00000
#define CP2_PCI2_ECAM_BASE      0xED008000
#define CP2_PCI2_ECAM_SIZE      0x100000
