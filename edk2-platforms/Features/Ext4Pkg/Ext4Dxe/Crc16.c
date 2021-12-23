/** @file
  CRC16 calculation routines.

  Copyright (c) 2021 Pedro Falcato All rights reserved.

  SPDX-License-Identifier: BSD-2-Clause-Patent
**/

#include <Uefi.h>

STATIC CONST UINT16  gCrc16LookupTable[256] =
{
  0x0000, 0x1189, 0x2312, 0x329b, 0x4624, 0x57ad, 0x6536, 0x74bf,
  0x8c48, 0x9dc1, 0xaf5a, 0xbed3, 0xca6c, 0xdbe5, 0xe97e, 0xf8f7,
  0x0919, 0x1890, 0x2a0b, 0x3b82, 0x4f3d, 0x5eb4, 0x6c2f, 0x7da6,
  0x8551, 0x94d8, 0xa643, 0xb7ca, 0xc375, 0xd2fc, 0xe067, 0xf1ee,
  0x1232, 0x03bb, 0x3120, 0x20a9, 0x5416, 0x459f, 0x7704, 0x668d,
  0x9e7a, 0x8ff3, 0xbd68, 0xace1, 0xd85e, 0xc9d7, 0xfb4c, 0xeac5,
  0x1b2b, 0x0aa2, 0x3839, 0x29b0, 0x5d0f, 0x4c86, 0x7e1d, 0x6f94,
  0x9763, 0x86ea, 0xb471, 0xa5f8, 0xd147, 0xc0ce, 0xf255, 0xe3dc,
  0x2464, 0x35ed, 0x0776, 0x16ff, 0x6240, 0x73c9, 0x4152, 0x50db,
  0xa82c, 0xb9a5, 0x8b3e, 0x9ab7, 0xee08, 0xff81, 0xcd1a, 0xdc93,
  0x2d7d, 0x3cf4, 0x0e6f, 0x1fe6, 0x6b59, 0x7ad0, 0x484b, 0x59c2,
  0xa135, 0xb0bc, 0x8227, 0x93ae, 0xe711, 0xf698, 0xc403, 0xd58a,
  0x3656, 0x27df, 0x1544, 0x04cd, 0x7072, 0x61fb, 0x5360, 0x42e9,
  0xba1e, 0xab97, 0x990c, 0x8885, 0xfc3a, 0xedb3, 0xdf28, 0xcea1,
  0x3f4f, 0x2ec6, 0x1c5d, 0x0dd4, 0x796b, 0x68e2, 0x5a79, 0x4bf0,
  0xb307, 0xa28e, 0x9015, 0x819c, 0xf523, 0xe4aa, 0xd631, 0xc7b8,
  0x48c8, 0x5941, 0x6bda, 0x7a53, 0x0eec, 0x1f65, 0x2dfe, 0x3c77,
  0xc480, 0xd509, 0xe792, 0xf61b, 0x82a4, 0x932d, 0xa1b6, 0xb03f,
  0x41d1, 0x5058, 0x62c3, 0x734a, 0x07f5, 0x167c, 0x24e7, 0x356e,
  0xcd99, 0xdc10, 0xee8b, 0xff02, 0x8bbd, 0x9a34, 0xa8af, 0xb926,
  0x5afa, 0x4b73, 0x79e8, 0x6861, 0x1cde, 0x0d57, 0x3fcc, 0x2e45,
  0xd6b2, 0xc73b, 0xf5a0, 0xe429, 0x9096, 0x811f, 0xb384, 0xa20d,
  0x53e3, 0x426a, 0x70f1, 0x6178, 0x15c7, 0x044e, 0x36d5, 0x275c,
  0xdfab, 0xce22, 0xfcb9, 0xed30, 0x998f, 0x8806, 0xba9d, 0xab14,
  0x6cac, 0x7d25, 0x4fbe, 0x5e37, 0x2a88, 0x3b01, 0x099a, 0x1813,
  0xe0e4, 0xf16d, 0xc3f6, 0xd27f, 0xa6c0, 0xb749, 0x85d2, 0x945b,
  0x65b5, 0x743c, 0x46a7, 0x572e, 0x2391, 0x3218, 0x0083, 0x110a,
  0xe9fd, 0xf874, 0xcaef, 0xdb66, 0xafd9, 0xbe50, 0x8ccb, 0x9d42,
  0x7e9e, 0x6f17, 0x5d8c, 0x4c05, 0x38ba, 0x2933, 0x1ba8, 0x0a21,
  0xf2d6, 0xe35f, 0xd1c4, 0xc04d, 0xb4f2, 0xa57b, 0x97e0, 0x8669,
  0x7787, 0x660e, 0x5495, 0x451c, 0x31a3, 0x202a, 0x12b1, 0x0338,
  0xfbcf, 0xea46, 0xd8dd, 0xc954, 0xbdeb, 0xac62, 0x9ef9, 0x8f70
};

/**
   Calculates the CRC16 checksum of the given buffer.

   @param[in]      Buffer        Pointer to the buffer.
   @param[in]      Length        Length of the buffer, in bytes.
   @param[in]      InitialValue  Initial value of the CRC.

   @return The CRC16 checksum.
**/
UINT16
CalculateCrc16 (
  IN CONST VOID  *Buffer,
  IN UINTN       Length,
  IN UINT16      InitialValue
  )
{
  CONST UINT8  *Buf;
  UINT16       Crc;

  Buf = Buffer;

  Crc = ~InitialValue;

  while (Length-- != 0) {
    Crc = gCrc16LookupTable[(Crc & 0xFF) ^ *(Buf++)] ^ (Crc >> 8);
  }

  return ~Crc;
}
