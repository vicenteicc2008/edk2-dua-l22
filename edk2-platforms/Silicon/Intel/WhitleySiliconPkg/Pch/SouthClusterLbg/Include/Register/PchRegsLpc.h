/** @file
  Register names for PCH LPC/eSPI device
  Conventions:
  Prefixes:
  Definitions beginning with "R_" are registers
  Definitions beginning with "B_" are bits within registers
  Definitions beginning with "V_" are meaningful values within the bits
  Definitions beginning with "S_" are register sizes
  Definitions beginning with "N_" are the bit position
  In general, PCH registers are denoted by "_PCH_" in register names
  Registers / bits that are different between PCH generations are denoted by
  _PCH_[generation_name]_" in register/bit names.
  Registers / bits that are specific to PCH-H denoted by "_H_" in register/bit names.
  Registers / bits that are specific to PCH-LP denoted by "_LP_" in register/bit names.
  e.g., "_PCH_H_", "_PCH_LP_"
  Registers / bits names without _H_ or _LP_ apply for both H and LP.
  Registers / bits that are different between SKUs are denoted by "_[SKU_name]"
  at the end of the register/bit names
  Registers / bits of new devices introduced in a PCH generation will be just named
  as "_PCH_" without [generation_name] inserted.

  @copyright
  Copyright 1999 - 2021 Intel Corporation. <BR>

  SPDX-License-Identifier: BSD-2-Clause-Patent
**/

#ifndef _PCH_REGS_LPC_H_
#define _PCH_REGS_LPC_H_

#include <PchLimits.h>
//
// PCI to LPC Bridge Registers (D31:F0)
//
#define PCI_DEVICE_NUMBER_PCH_LPC       31
#define PCI_FUNCTION_NUMBER_PCH_LPC     0

typedef enum {
  PchHA0         = 0x00,
  PchHB0         = 0x01,
  PchHC0,
  PchHD0,
  PchHD1,
#ifdef SIMICS_FLAG
  PchLpA0        = 0x20,
#endif
  PchLpB0        = 0x23,
  PchLpB1,
  PchLpC0,
  PchLpC1,
  LbgA0          = LBG_A0,
  LbgB0,
  LbgB1,
  LbgB2,
  LbgB3,
  LbgS0,
  LbgS1,
  LbgS2,
  PchMiniA0,
  PchSteppingMax
} PCH_STEPPING;

#define PCH_H_MIN_SUPPORTED_STEPPING              PchHA0
#define PCH_LP_MIN_SUPPORTED_STEPPING             PchLpB0

#define PCH_LBG_MIN_SUPPORTED_STEPPING            LbgA0
#define R_PCH_LPC_VENDOR_ID                       0x00
#define R_PCH_LPC_DEVICE_ID                       0x02

//
//
// SKL PCH Server/WS LPC Device IDs
//
#define V_PCH_H_LPC_DEVICE_ID_SVR_0               0xA149          ///< Server SKU Intel C236 Chipset
#define V_PCH_H_LPC_DEVICE_ID_SVR_1               0xA14A          ///< Server SKU Intel C232 Chipset
#define V_PCH_H_LPC_DEVICE_ID_SVR_2               0xA150          ///< Server SKU Intel CM236 Chipset
#define V_PCH_H_LPC_DEVICE_ID_A14B                0xA14B          ///< Super SKU Unlocked

//
// SKL PCH-H Desktop LPC Device IDs
//
#define V_PCH_H_LPC_DEVICE_ID_DT_SUPER_SKU        0xA141          ///< PCH H Desktop Super SKU unlocked
#define V_PCH_H_LPC_DEVICE_ID_DT_0                0xA142          ///< PCH H Desktop Super SKU locked
#define V_PCH_H_LPC_DEVICE_ID_DT_1                0xA143          ///< PCH H Desktop H110
#define V_PCH_H_LPC_DEVICE_ID_DT_2                0xA144          ///< PCH H Desktop H170
#define V_PCH_H_LPC_DEVICE_ID_DT_3                0xA145          ///< PCH H Desktop Z170
#define V_PCH_H_LPC_DEVICE_ID_DT_4                0xA146          ///< PCH H Desktop Q170
#define V_PCH_H_LPC_DEVICE_ID_DT_5                0xA147          ///< PCH H Desktop Q150
#define V_PCH_H_LPC_DEVICE_ID_DT_6                0xA148          ///< PCH H Desktop B150
#define V_PCH_H_LPC_DEVICE_ID_UNFUSE              0xA140          ///< PCH-H Unfuse
//
// PCH-H Mobile LPC Device IDs
//
#define V_PCH_H_LPC_DEVICE_ID_MB_SUPER_SKU        0xA141          ///< PCH H Mobile Super SKU unlocked
#define V_PCH_H_LPC_DEVICE_ID_MB_0                0xA14D          ///< PCH H Mobile QM170
#define V_PCH_H_LPC_DEVICE_ID_MB_1                0xA14E          ///< PCH H Mobile HM170
#define V_PCH_H_LPC_DEVICE_ID_MB_2                0xA14F          ///< PCH H Mobile QMS170 (SFF)
//
// PCH-LP LPC Device IDs
//
#define V_PCH_LP_LPC_DEVICE_ID_MB_SUPER_SKU       0x9D41          ///< PCH LP Mobile Super SKU unlocked
#define V_PCH_LP_LPC_DEVICE_ID_MB_0               0x9D42          ///< PCH LP Mobile Super SKU locked
#define V_PCH_LP_LPC_DEVICE_ID_MB_1               0x9D43          ///< PCH LP Mobile (U) Base SKU
#define V_PCH_LP_LPC_DEVICE_ID_MB_2               0x9D46          ///< PCH LP Mobile (Y) Premium SKU
#define V_PCH_LP_LPC_DEVICE_ID_MB_3               0x9D48          ///< PCH LP Mobile (U) Premium SKU
#define V_PCH_LP_LPC_DEVICE_ID_UNFUSE             0x9D40          ///< PCH LP Unfuse

//
// Lewisburg Production LPC Device ID's
//
#define V_PCH_LBG_PROD_LPC_DEVICE_ID_0            0xA1C0          ///< LBG PRQ Unfused LBG 0 SKU
#define V_PCH_LBG_PROD_LPC_DEVICE_ID_1G           0xA1C1          ///< LBG PRQ Fused LBG 1G
#define V_PCH_LBG_PROD_LPC_DEVICE_ID_2            0xA1C2          ///< LBG PRQ Fused LBG 2
#define V_PCH_LBG_PROD_LPC_DEVICE_ID_4            0xA1C3          ///< LBG PRQ Fused LBG 4
#define V_PCH_LBG_PROD_LPC_DEVICE_ID_E            0xA1C4          ///< LBG PRQ Fused LBG E
#define V_PCH_LBG_PROD_LPC_DEVICE_ID_M            0xA1C5          ///< LBG PRQ Fused LBG M
#define V_PCH_LBG_PROD_LPC_DEVICE_ID_T            0xA1C6          ///< LBG PRQ Fused LBG T (both uplinks SKU - NS)
#define V_PCH_LBG_PROD_LPC_DEVICE_ID_LP           0xA1C7          ///< LBG PRQ Fused LBG LP
#define V_PCH_LBG_PROD_LPC_DEVICE_ID_C            0xA1CA          ///< LBG PRQ Fused LBG C
#define V_PCH_LBG_PROD_LPC_DEVICE_ID_C621A        0xA1CB          ///< LBG-R PRQ Fused LBG C621A
#define V_PCH_LBG_PROD_LPC_DEVICE_ID_C627A        0xA1CC          ///< LBG-R PRQ Fused LBG C627A
#define V_PCH_LBG_PROD_LPC_DEVICE_ID_C629A        0xA1CD          ///< LBG-R PRQ Fused LBG C629A
#define V_PCH_LBG_PROD_LPC_DEVICE_ID_ADG          0xA1CE          ///< LBG-R PRQ Fused LBG ADG

#define V_PCH_LBG_PROD_LPC_DEVICE_ID_RESERVED_MAX 0xA1CF          ///< 0xA1CF reserved for future QS/PRQ SKUs

//
// Lewisburg SSX (Super SKUs and pre production) LPC Device ID's
//
#define V_PCH_LBG_LPC_DEVICE_ID_UNFUSED           0xA240          ///< LBG SSX Unfused SKU
#define V_PCH_LBG_LPC_DEVICE_ID_SS_0              0xA241          ///< LBG SSX Super SKU 0
#define V_PCH_LBG_LPC_DEVICE_ID_SS_4_SD           0xA242          ///< LBG SSX Super SKU 4/SD
#define V_PCH_LBG_LPC_DEVICE_ID_SS_T80_NS         0xA243          ///< LBG SSX Super SKU T80/NS
#define V_PCH_LBG_LPC_DEVICE_ID_SS_1G             0xA244          ///< LBG SSX Super SKU 1G
#define V_PCH_LBG_LPC_DEVICE_ID_SS_T              0xA245          ///< LBG Super SKU - T
#define V_PCH_LBG_LPC_DEVICE_ID_SS_L              0xA246          ///< LBG Super SKU - L
#define V_PCH_LBG_LPC_DEVICE_ID_SS_C621A          0xA24A          ///< LBG-R Super SKU - C621A
#define V_PCH_LBG_LPC_DEVICE_ID_SS_C627A          0xA24B          ///< LBG-R Super SKU - C627A
#define V_PCH_LBG_LPC_DEVICE_ID_SS_C629A          0xA24C          ///< LBG-R Super SKU - C629A
#define V_PCH_LBG_LPC_DEVICE_ID_SS_ADG            0xA24E          ///< LBG-R Super SKU - ADG

#define V_PCH_LBG_LPC_DEVICE_ID_RESERVED_SS_MAX   0xA24F          ///< 0xA24D, 0xA24F Super SKU reserved


#define V_PCH_LBG_LPC_RID_0                       0x00            ///< A0 stepping
#define V_PCH_LBG_LPC_RID_1                       0x01            ///< A1 stepping
#define V_PCH_LBG_LPC_RID_2                       0x02            ///< B0 stepping
#define V_PCH_LBG_LPC_RID_3                       0x03            ///< B1 stepping
#define V_PCH_LBG_LPC_RID_4                       0x04            ///< B2 stepping
#define V_PCH_LBG_LPC_RID_5                       0x05            ///< C0 stepping
#define V_PCH_LBG_LPC_RID_8                       0x08            ///< S0 stepping
#define V_PCH_LBG_LPC_RID_9                       0x09            ///< S1 stepping
#define V_PCH_LBG_LPC_RID_A                       0x0A            ///< T0 stepping

#define V_PCH_MINI_LPC_RID_0                      0xC0            ///< FPGA PCH stepping

#define V_LPC_CFG_RID_0                           0x00
#define V_LPC_CFG_RID_1                           0x01
#define V_LPC_CFG_RID_9                           0x09
#define V_LPC_CFG_RID_10                          0x10
#define V_LPC_CFG_RID_11                          0x11
#define V_LPC_CFG_RID_20                          0x20
#define V_LPC_CFG_RID_21                          0x21
#define V_LPC_CFG_RID_30                          0x30
#define V_LPC_CFG_RID_31                          0x31
#define R_LPC_CFG_SERIRQ_CNT                      0x64
#define B_LPC_CFG_SERIRQ_CNT_SIRQEN               0x80
#define B_LPC_CFG_SERIRQ_CNT_SIRQMD               0x40
#define B_LPC_CFG_SERIRQ_CNT_SIRQSZ               0x3C
#define N_LPC_CFG_SERIRQ_CNT_SIRQSZ               2
#define B_LPC_CFG_SERIRQ_CNT_SFPW                 0x03
#define N_LPC_CFG_SERIRQ_CNT_SFPW                 0
#define V_LPC_CFG_SERIRQ_CNT_SFPW_4CLK            0x00
#define V_LPC_CFG_SERIRQ_CNT_SFPW_6CLK            0x01
#define V_LPC_CFG_SERIRQ_CNT_SFPW_8CLK            0x02
#define R_LPC_CFG_IOD                             0x80
#define B_LPC_CFG_IOD_FDD                         0x1000
#define N_LPC_CFG_IOD_FDD                         12
#define V_LPC_CFG_IOD_FDD_3F0                     0
#define V_LPC_CFG_IOD_FDD_370                     1
#define B_LPC_CFG_IOD_LPT                         0x0300
#define N_LPC_CFG_IOD_LPT                         8
#define V_LPC_CFG_IOD_LPT_378                     0
#define V_LPC_CFG_IOD_LPT_278                     1
#define V_LPC_CFG_IOD_LPT_3BC                     2
#define B_LPC_CFG_IOD_COMB                        0x0070
#define N_LPC_CFG_IOD_COMB                        4
#define V_LPC_CFG_IOD_COMB_3F8                    0
#define V_LPC_CFG_IOD_COMB_2F8                    1
#define V_LPC_CFG_IOD_COMB_220                    2
#define V_LPC_CFG_IOD_COMB_228                    3
#define V_LPC_CFG_IOD_COMB_238                    4
#define V_LPC_CFG_IOD_COMB_2E8                    5
#define V_LPC_CFG_IOD_COMB_338                    6
#define V_LPC_CFG_IOD_COMB_3E8                    7
#define B_LPC_CFG_IOD_COMA                        0x0007
#define N_LPC_CFG_IOD_COMA                        0
#define V_LPC_CFG_IOD_COMA_3F8                    0
#define V_LPC_CFG_IOD_COMA_2F8                    1
#define V_LPC_CFG_IOD_COMA_220                    2
#define V_LPC_CFG_IOD_COMA_228                    3
#define V_LPC_CFG_IOD_COMA_238                    4
#define V_LPC_CFG_IOD_COMA_2E8                    5
#define V_LPC_CFG_IOD_COMA_338                    6
#define V_LPC_CFG_IOD_COMA_3E8                    7
#define R_LPC_CFG_IOE                             0x82
#define B_LPC_CFG_IOE_ME2                         BIT13           ///< Microcontroller Enable #2, Enables decoding of I/O locations 4Eh and 4Fh to LPC
#define B_LPC_CFG_IOE_SE                          BIT12           ///< Super I/O Enable, Enables decoding of I/O locations 2Eh and 2Fh to LPC.
#define B_LPC_CFG_IOE_ME1                         BIT11           ///< Microcontroller Enable #1, Enables decoding of I/O locations 62h and 66h to LPC.
#define B_LPC_CFG_IOE_KE                          BIT10           ///< Keyboard Enable, Enables decoding of the keyboard I/O locations 60h and 64h to LPC.
#define B_LPC_CFG_IOE_HGE                         BIT9            ///< High Gameport Enable, Enables decoding of the I/O locations 208h to 20Fh to LPC.
#define B_LPC_CFG_IOE_LGE                         BIT8            ///< Low Gameport Enable, Enables decoding of the I/O locations 200h to 207h to LPC.
#define B_LPC_CFG_IOE_FDE                         BIT3            ///< Floppy Drive Enable, Enables decoding of the FDD range to LPC. Range is selected by LIOD.FDE
#define B_LPC_CFG_IOE_PPE                         BIT2            ///< Parallel Port Enable, Enables decoding of the LPT range to LPC. Range is selected by LIOD.LPT.
#define B_LPC_CFG_IOE_CBE                         BIT1            ///< Com Port B Enable, Enables decoding of the COMB range to LPC. Range is selected LIOD.CB.
#define B_LPC_CFG_IOE_CAE                         BIT0            ///< Com Port A Enable, Enables decoding of the COMA range to LPC. Range is selected LIOD.CA.
#define R_LPC_CFG_GEN1_DEC                        0x84
#define R_LPC_CFG_GEN2_DEC                        0x88
#define R_LPC_CFG_GEN3_DEC                        0x8C
#define R_LPC_CFG_GEN4_DEC                        0x90
#define B_LPC_CFG_GENX_DEC_IODRA                  0x00FC0000
#define B_LPC_CFG_GENX_DEC_IOBAR                  0x0000FFFC
#define B_LPC_CFG_GENX_DEC_EN                     0x00000001
#define R_LPC_CFG_ULKMC                           0x94
#define B_LPC_CFG_ULKMC_SMIBYENDPS                BIT15
#define B_LPC_CFG_ULKMC_TRAPBY64W                 BIT11
#define B_LPC_CFG_ULKMC_TRAPBY64R                 BIT10
#define B_LPC_CFG_ULKMC_TRAPBY60W                 BIT9
#define B_LPC_CFG_ULKMC_TRAPBY60R                 BIT8
#define B_LPC_CFG_ULKMC_SMIATENDPS                BIT7
#define B_LPC_CFG_ULKMC_PSTATE                    BIT6
#define B_LPC_CFG_ULKMC_A20PASSEN                 BIT5
#define B_LPC_CFG_ULKMC_USBSMIEN                  BIT4
#define B_LPC_CFG_ULKMC_64WEN                     BIT3
#define B_LPC_CFG_ULKMC_64REN                     BIT2
#define B_LPC_CFG_ULKMC_60WEN                     BIT1
#define B_LPC_CFG_ULKMC_60REN                     BIT0
#define R_LPC_CFG_LGMR                            0x98
#define B_LPC_CFG_LGMR_MA                         0xFFFF0000
#define B_LPC_CFG_LGMR_LMRD_EN                    BIT0
#define R_LPC_CFG_PCCS1IORE                       0xA0
#define R_LPC_CFG_PCCS1GIR1                       0xA4
#define R_LPC_CFG_PCCS1GMR1                       0xA8
#define R_ESPI_CFG_CS1IORE                        0xA0
#define R_ESPI_CFG_CS1IORE_DPCS1RE                BIT14
#define R_ESPI_CFG_CS1GIR1                        0xA4
#define R_ESPI_CFG_CS1GMR1                        0xA8

#define R_LPC_CFG_FWH_BIOS_SEL                    0xD0
#define B_LPC_CFG_FWH_BIOS_SEL_F8                 0xF0000000
#define B_LPC_CFG_FWH_BIOS_SEL_F0                 0x0F000000
#define B_LPC_CFG_FWH_BIOS_SEL_E8                 0x00F00000
#define B_LPC_CFG_FWH_BIOS_SEL_E0                 0x000F0000
#define B_LPC_CFG_FWH_BIOS_SEL_D8                 0x0000F000
#define B_LPC_CFG_FWH_BIOS_SEL_D0                 0x00000F00
#define B_LPC_CFG_FWH_BIOS_SEL_C8                 0x000000F0
#define B_LPC_CFG_FWH_BIOS_SEL_C0                 0x0000000F
#define R_LPC_CFG_FWH_BIOS_SEL2                   0xD4
#define B_LPC_CFG_FWH_BIOS_SEL2_70                0xF000
#define B_LPC_CFG_FWH_BIOS_SEL2_60                0x0F00
#define B_LPC_CFG_FWH_BIOS_SEL2_50                0x00F0
#define B_LPC_CFG_FWH_BIOS_SEL2_40                0x000F
#define R_LPC_CFG_BDE                             0xD8                          ///< BIOS decode enable
#define B_LPC_CFG_BDE_F8                          0x8000
#define B_LPC_CFG_BDE_F0                          0x4000
#define B_LPC_CFG_BDE_E8                          0x2000
#define B_LPC_CFG_BDE_E0                          0x1000
#define B_LPC_CFG_BDE_D8                          0x0800
#define B_LPC_CFG_BDE_D0                          0x0400
#define B_LPC_CFG_BDE_C8                          0x0200
#define B_LPC_CFG_BDE_C0                          0x0100
#define B_LPC_CFG_BDE_LEG_F                       0x0080
#define B_LPC_CFG_BDE_LEG_E                       0x0040
#define B_LPC_CFG_BDE_70                          0x0008
#define B_LPC_CFG_BDE_60                          0x0004
#define B_LPC_CFG_BDE_50                          0x0002
#define B_LPC_CFG_BDE_40                          0x0001
#define R_LPC_CFG_PCC                             0xE0
#define B_LPC_CFG_PCC_CLKRUN_EN                   0x0001
#define B_LPC_CFG_FVEC0_USB_PORT_CAP              0x00000C00
#define V_LPC_CFG_FVEC0_USB_14_PORT               0x00000000
#define V_LPC_CFG_FVEC0_USB_12_PORT               0x00000400
#define V_LPC_CFG_FVEC0_USB_10_PORT               0x00000800
#define B_LPC_CFG_FVEC0_SATA_RAID_CAP             0x00000080
#define B_LPC_CFG_FVEC0_SATA_PORT23_CAP           0x00000040
#define B_LPC_CFG_FVEC0_SATA_PORT1_6GB_CAP        0x00000008
#define B_LPC_CFG_FVEC0_SATA_PORT0_6GB_CAP        0x00000004
#define B_LPC_CFG_FVEC0_PCI_CAP                   0x00000002
#define R_LPC_CFG_FVEC1                           0x01
#define B_LPC_CFG_FVEC1_USB_R_CAP                 0x00400000
#define R_LPC_CFG_FVEC2                           0x02
#define B_PCH_LPC_FVEC2_IATT_CAP                  0x00400000      ///< Intel Anti-Theft Technology Capability
#define V_LPC_CFG_FVEC2_PCIE_PORT78_CAP           0x00200000
#define V_LPC_CFG_FVEC2_PCH_IG_SUPPORT_CAP        0x00020000      ///< PCH Integrated Graphics Support Capability
#define R_LPC_CFG_FVEC3                           0x03
#define B_LPC_CFG_FVEC3_DCMI_CAP                  0x00002000      ///< Data Center Manageability Interface (DCMI) Capability
#define B_LPC_CFG_FVEC3_NM_CAP                    0x00001000      ///< Node Manager Capability

#define R_LPC_CFG_MDAP                            0xC0
#define B_LPC_CFG_MDAP_POLICY_EN                  BIT31
#define B_LPC_CFG_MDAP_PDMA_EN                    BIT30
#define B_LPC_CFG_MDAP_VALUE                      0x0001FFFF

//
// APM Registers
//
#define R_PCH_IO_APM_CNT                             0xB2
#define R_PCH_IO_APM_STS                             0xB3

#define R_LPC_CFG_BC                              0xDC            ///< Bios Control
#define S_LPC_CFG_BC                              1
#define B_LPC_CFG_BC_BILD                         BIT7            ///< BIOS Interface Lock-Down
#define B_LPC_CFG_BC_BBS                          BIT6            ///< Boot BIOS strap
#define N_LPC_CFG_BC_BBS                          6
#define V_LPC_CFG_BC_BBS_SPI                      0               ///< Boot BIOS strapped to SPI
#define V_LPC_CFG_BC_BBS_LPC                      1               ///< Boot BIOS strapped to LPC
#define B_LPC_CFG_BC_EISS                         BIT5            ///< Enable InSMM.STS
#define B_LPC_CFG_BC_TS                           BIT4            ///< Top Swap
#define B_LPC_CFG_BC_LE                           BIT1            ///< Lock Enable
#define N_LPC_CFG_BC_LE                           1
#define B_LPC_CFG_BC_WPD                          BIT0            ///< Write Protect Disable

#define R_ESPI_CFG_PCBC                           0xDC            ///< Peripheral Channel BIOS Control
#define S_ESPI_CFG_PCBC                           4               ///< Peripheral Channel BIOS Control register size
#define B_ESPI_CFG_PCBC_BWRE                      BIT11           ///< BIOS Write Report Enable
#define N_ESPI_CFG_PCBC_BWRE                      11              ///< BIOS Write Report Enable bit position
#define B_ESPI_CFG_PCBC_BWRS                      BIT10           ///< BIOS Write Report Status
#define N_ESPI_CFG_PCBC_BWRS                      10              ///< BIOS Write Report Status bit position
#define B_ESPI_CFG_PCBC_BWPDS                     BIT8            ///< BIOS Write Protect Disable Status
#define N_ESPI_CFG_PCBC_BWPDS                     8               ///< BIOS Write Protect Disable Status bit position
#define B_ESPI_CFG_PCBC_ESPI_EN                   BIT2            ///< eSPI Enable Pin Strap
#define B_ESPI_CFG_PCBC_LE                        BIT1            ///< Lock Enable

//
// Processor interface registers
//
#define R_PCH_IO_NMI_SC                              0x61
#define B_PCH_IO_NMI_SC_SERR_NMI_STS                 BIT7
#define B_PCH_IO_NMI_SC_IOCHK_NMI_STS                BIT6
#define B_PCH_IO_NMI_SC_TMR2_OUT_STS                 BIT5
#define B_PCH_IO_NMI_SC_REF_TOGGLE                   BIT4
#define B_PCH_IO_NMI_SC_IOCHK_NMI_EN                 BIT3
#define B_PCH_IO_NMI_SC_PCI_SERR_EN                  BIT2
#define B_PCH_IO_NMI_SC_SPKR_DAT_EN                  BIT1
#define B_PCH_IO_NMI_SC_TIM_CNT2_EN                  BIT0
#define R_PCH_IO_NMI_EN                              0x70
#define B_PCH_IO_NMI_EN_NMI_EN                       BIT7

//
// Reset Generator I/O Port
//
#define R_PCH_IO_RST_CNT                             0xCF9
#define B_PCH_IO_RST_CNT_FULL_RST                    BIT3
#define B_PCH_IO_RST_CNT_RST_CPU                     BIT2
#define B_PCH_IO_RST_CNT_SYS_RST                     BIT1
#define V_PCH_IO_RST_CNT_FULLRESET                   0x0E
#define V_PCH_IO_RST_CNT_HARDRESET                   0x06
#define V_PCH_IO_RST_CNT_SOFTRESET                   0x04
#define V_PCH_IO_RST_CNT_HARDSTARTSTATE              0x02
#define V_PCH_IO_RST_CNT_SOFTSTARTSTATE              0x00

//
// RTC register
//
#define R_RTC_IO_INDEX                           0x70
#define R_RTC_IO_TARGET                          0x71
#define R_RTC_IO_EXT_INDEX                       0x72
#define R_RTC_IO_EXT_TARGET                      0x73
#define R_RTC_IO_INDEX_ALT                       0x74
#define R_RTC_IO_TARGET_ALT                      0x75
#define R_RTC_IO_EXT_INDEX_ALT                   0x76
#define R_RTC_IO_EXT_TARGET_ALT                  0x77
#define R_RTC_IO_REGA                            0x0A
#define B_RTC_IO_REGA_UIP                        0x80
#define R_RTC_IO_REGB                            0x0B
#define B_RTC_IO_REGB_SET                        0x80
#define B_RTC_IO_REGB_PIE                        0x40
#define B_RTC_IO_REGB_AIE                        0x20
#define B_RTC_IO_REGB_UIE                        0x10
#define B_RTC_IO_REGB_DM                         0x04
#define B_RTC_IO_REGB_HOURFORM                   0x02
#define R_RTC_IO_REGC                            0x0C
#define R_RTC_IO_REGD                            0x0D

//
// Private Configuration Register
// RTC PCRs (PID:RTC)
//
#define R_RTC_PCR_CONF                        0x3400               ///< RTC Configuration register
#define S_PCH_PCR_RTC_CONF                        4
#define B_RTC_PCR_CONF_UCMOS_LOCK             BIT4
#define B_RTC_PCR_CONF_LCMOS_LOCK             BIT3
#define B_PCH_PCR_RTC_CONF_RESERVED               BIT31
#define B_RTC_PCR_CONF_UCMOS_EN               BIT2                 ///< Upper CMOS bank enable
#define R_RTC_PCR_BUC                         0x3414               ///< Backed Up Control
#define B_RTC_PCR_BUC_TS                      BIT0                 ///< Top Swap
#define B_RTC_PCR_BUC_NMFLUSH                 BIT3
#define R_RTC_PCR_RTCDCG                      0x3418               ///< RTC Dynamic Clock Gating Control
#define R_RTC_PCR_RTCDCG_RTCPCICLKDCGEN       BIT1                 ///< ipciclk_clk (24 MHz) Dynamic Clock Gate Enable
#define R_RTC_PCR_RTCDCG_RTCROSIDEDCGEN       BIT0                 ///< rosc_side_clk (120 MHz) Dynamic Clock Gate Enable
#define R_RTC_PCR_3F00                        0x3F00
#define R_RTC_PCR_UIPSMI                      0x3F04               ///< RTC Update In Progress SMI Control

//
// LPC PCR Registers
//
#define R_LPC_PCR_HVMTCTL                     0x3410
#define R_LPC_PCR_GCFD                        0x3418
#define R_PCH_PCR_LPC_CCE                         0x341C
#define B_PCH_PCR_LPC_CCE_LCG                     BIT0
#define B_PCH_PCR_LPC_CCE_ISBICGEN                BIT1
#define B_PCH_PCR_LPC_CCE_IPICGEN                 BIT2
#define B_PCH_PCR_LPC_CCE_PGCBCGEN                BIT3
#define V_PCH_PCR_LPC_CCE_CGEN                   (B_PCH_PCR_LPC_CCE_LCG       | \
                                                  B_PCH_PCR_LPC_CCE_ISBICGEN  | \
                                                  B_PCH_PCR_LPC_CCE_IPICGEN   | \
                                                  B_PCH_PCR_LPC_CCE_PGCBCGEN  )
#define R_LPC_PCR_PCT                         0x3420
#define R_LPC_PCR_SCT                         0x3424
#define R_LPC_PCR_LPCCT                       0x3428
#define R_LPC_PCR_ULTOR                       0x3500

//
// eSPI PCR Registers
//
#define R_ESPI_PCR_SLV_CFG_REG_CTL            0x4000                  ///< Slave Configuration Register and Link Control
#define B_ESPI_PCR_SLV_CFG_REG_CTL_SCRE       BIT31                   ///< Slave Configuration Register Access Enable
#define B_ESPI_PCR_SLV_CFG_REG_CTL_SCRS       (BIT30 | BIT29 | BIT28) ///< Slave Configuration Register Access Status
#define N_ESPI_PCR_SLV_CFG_REG_CTL_SCRS       28                      ///< Slave Configuration Register Access Status bit position
#define B_ESPI_PCR_SLV_CFG_REG_CTL_SBLCL      BIT27                   ///< IOSF-SB eSPI Link Configuration Lock
#define V_ESPI_PCR_SLV_CFG_REG_CTL_SCRS_NOERR 7                       ///< No errors (transaction completed successfully)
#define B_ESPI_PCR_SLV_CFG_REG_CTL_SID        (BIT20 | BIT19)         ///< Slave ID
#define N_ESPI_PCR_SLV_CFG_REG_CTL_SID        19                      ///< Slave ID bit position
#define B_ESPI_PCR_SLV_CFG_REG_CTL_SCRT       (BIT17 | BIT16)         ///< Slave Configuration Register Access Type
#define N_ESPI_PCR_SLV_CFG_REG_CTL_SCRT       16                      ///< Slave Configuration Register Access Type bit position
#define V_ESPI_PCR_SLV_CFG_REG_CTL_SCRT_RD    0                       ///< Slave Configuration register read from address SCRA[11:0]
#define V_ESPI_PCR_SLV_CFG_REG_CTL_SCRT_WR    1                       ///< Slave Configuration register write to address SCRA[11:0]
#define V_ESPI_PCR_SLV_CFG_REG_CTL_SCRT_STS   2                       ///< Slave Status register read
#define V_ESPI_PCR_SLV_CFG_REG_CTL_SCRT_RS    3                       ///< In-Band reset
#define B_ESPI_PCR_SLV_CFG_REG_CTL_SCRA       0x00000FFF              ///< Slave Configuration Register Address
#define R_ESPI_PCR_SLV_CFG_REG_DATA           0x4004                  ///< Slave Configuration Register Data

#define R_ESPI_PCR_PCERR_SLV0                 0x4020          ///< Peripheral Channel Error for Slave 0
#define S_ESPI_PCR_PCERR_SLV0                 4               ///< Peripheral Channel Error register size
#define B_ESPI_PCR_PCERR_PCFES                BIT4            ///< Peripheral Channel Error Fatal Error Status bit
#define R_ESPI_PCR_PCERR_SLV1                 0x4024          ///< Peripheral Channel Error for Slave 1
#define R_ESPI_PCR_VWERR_SLV0                 0x4030          ///< Virtual Wire Channel Error for Slave 0
#define S_ESPI_PCR_VWERR_SLV0                 4               ///< Virtual Wire Channel Error register size
#define B_ESPI_PCR_VWERR_VWFES                BIT4            ///< Virtual Wire Channel Error Fatal Error status bit
#define R_ESPI_PCR_VWERR_SLV1                 0x4034          ///< Virtual Wire Channel Error for Slave 1
#define R_ESPI_PCR_FCERR_SLV0                 0x4040          ///< Flash Access Channel Error for Slave 0
#define B_ESPI_PCR_FCERR_FCNFES               BIT12           ///< Flash Access Channel Non-Fatal Error Status
#define B_ESPI_PCR_PCERR_FCNFEC               (BIT11 | BIT10 | BIT9 | BIT8) ///< Non-Fatal Error Cause bits
#define N_ESPI_PCR_PCERR_FCNFEC               8               ///< Flash Access Channel Error for Slave 0 bit position
#define V_ESPI_PCR_PCERR_FCNFEC_SRC_NFE       1               ///< Slave Response Code: NONFATAL_ERROR
#define V_ESPI_PCR_PCERR_FCNFEC_SCR_UC        2               ///< Slave Response Code: Unsuccessful Completion
#define V_ESPI_PCR_PCERR_FCNFEC_UCT           4               ///< Unsupported Cycle Type
#define V_ESPI_PCR_PCERR_FCNFEC_UA            6               ///< Unsupported Address
#define B_ESPI_PCR_FCERR_FCFES                BIT4            ///< Flash Access Channel Fatal Error status bit
#define B_ESPI_PCR_XERR_XNFEE                 (BIT14 | BIT13) ///< Non-Fatal Error Reporting Enable bits
#define N_ESPI_PCR_XERR_XNFEE                 13              ///< Non-Fatal Error Reporting Enable bit position
#define V_ESPI_PCR_XERR_XNFEE_SMI             3               ///< Enable Non-Fatal Error Reporting as SMI
#define B_ESPI_PCR_XERR_XNFES                 BIT12           ///< Fatal Error Status
#define B_ESPI_PCR_XERR_XFEE                  (BIT6 | BIT5)   ///< Fatal Error Reporting Enable bits
#define N_ESPI_PCR_XERR_XFEE                  5               ///< Fatal Error Reporting Enable bit position
#define V_ESPI_PCR_XERR_XFEE_SMI              3               ///< Enable Fatal Error Reporting as SMI
#define B_ESPI_PCR_XERR_XFES                  BIT4            ///< Fatal Error Status
#define B_ESPI_PCR_PCERR_SLV0_PCURD           BIT24           ///< Peripheral Channel Unsupported Request Detected
#define R_ESPI_PCR_LNKERR_SLV0                0x4050          ///< Link Error for Slave 0
#define S_ESPI_PCR_LNKERR_SLV0                4               ///< Link Error for Slave 0 register size
#define B_ESPI_PCR_LNKERR_SLV0_SLCRR          BIT31           ///< eSPI Link and Slave Channel Recovery Required
#define B_ESPI_PCR_LNKERR_SLV0_LFET1E         (BIT22 | BIT21) ///< Fatal Error Type 1 Reporting Enable
#define N_ESPI_PCR_LNKERR_SLV0_LFET1E         21              ///< Fatal Error Type 1 Reporting Enable bit position
#define V_ESPI_PCR_LNKERR_SLV0_LFET1E_SMI     3               ///< Enable Fatal Error Type 1 Reporting as SMI
#define B_ESPI_PCR_LNKERR_SLV0_LFET1S         BIT20           ///< Link Fatal Error Type 1 Status
#define R_ESPI_PCR_LNKERR_SLV1                0x4054          ///< Link Error for Slave 1

#define R_ESPI_PCR_SOFTSTRAPS                 0xC210          ///< eSPI Sofstraps Register 0
#define R_ESPI_PCR_SOFTSTRAPS_CS1_EN          BIT12           ///< CS1# Enable

//
// eSPI Slave registers
//
#define R_ESPI_PCR_SLAVE_PCREG                0x10            ///< Slave Channel 1 Capabilities and Configurations register (Peripheral Channel)
#define R_ESPI_PCR_SLAVE_VWREG                0x20            ///< Slave Channel 2 Capabilities and Configurations register (Virtual Wire Channel)
#define R_ESPI_PCR_SLAVE_FCREG                0x40            ///< Slave Channel 4 Capabilities and Configurations register (Flash Access Channel)
#define B_ESPI_PCR_SLAVE_CHEN                 BIT0            ///< Slave Channel enable bit
#define B_ESPI_PCR_SLAVE_CHRDY                BIT1            ///< Slave Channel ready bit

#endif
