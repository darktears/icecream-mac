/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Target Register Enum Values                                                *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/


#ifdef GET_REGINFO_ENUM
#undef GET_REGINFO_ENUM

namespace llvm {

class MCRegisterClass;
extern const MCRegisterClass SystemZMCRegisterClasses[];

namespace SystemZ {
enum {
  NoRegister,
  CC = 1,
  A0 = 2,
  A1 = 3,
  A2 = 4,
  A3 = 5,
  A4 = 6,
  A5 = 7,
  A6 = 8,
  A7 = 9,
  A8 = 10,
  A9 = 11,
  A10 = 12,
  A11 = 13,
  A12 = 14,
  A13 = 15,
  A14 = 16,
  A15 = 17,
  V0 = 18,
  V1 = 19,
  V2 = 20,
  V3 = 21,
  V4 = 22,
  V5 = 23,
  V6 = 24,
  V7 = 25,
  V8 = 26,
  V9 = 27,
  V10 = 28,
  V11 = 29,
  V12 = 30,
  V13 = 31,
  V14 = 32,
  V15 = 33,
  V16 = 34,
  V17 = 35,
  V18 = 36,
  V19 = 37,
  V20 = 38,
  V21 = 39,
  V22 = 40,
  V23 = 41,
  V24 = 42,
  V25 = 43,
  V26 = 44,
  V27 = 45,
  V28 = 46,
  V29 = 47,
  V30 = 48,
  V31 = 49,
  F0D = 50,
  F1D = 51,
  F2D = 52,
  F3D = 53,
  F4D = 54,
  F5D = 55,
  F6D = 56,
  F7D = 57,
  F8D = 58,
  F9D = 59,
  F10D = 60,
  F11D = 61,
  F12D = 62,
  F13D = 63,
  F14D = 64,
  F15D = 65,
  F16D = 66,
  F17D = 67,
  F18D = 68,
  F19D = 69,
  F20D = 70,
  F21D = 71,
  F22D = 72,
  F23D = 73,
  F24D = 74,
  F25D = 75,
  F26D = 76,
  F27D = 77,
  F28D = 78,
  F29D = 79,
  F30D = 80,
  F31D = 81,
  F0Q = 82,
  F1Q = 83,
  F4Q = 84,
  F5Q = 85,
  F8Q = 86,
  F9Q = 87,
  F12Q = 88,
  F13Q = 89,
  F0S = 90,
  F1S = 91,
  F2S = 92,
  F3S = 93,
  F4S = 94,
  F5S = 95,
  F6S = 96,
  F7S = 97,
  F8S = 98,
  F9S = 99,
  F10S = 100,
  F11S = 101,
  F12S = 102,
  F13S = 103,
  F14S = 104,
  F15S = 105,
  F16S = 106,
  F17S = 107,
  F18S = 108,
  F19S = 109,
  F20S = 110,
  F21S = 111,
  F22S = 112,
  F23S = 113,
  F24S = 114,
  F25S = 115,
  F26S = 116,
  F27S = 117,
  F28S = 118,
  F29S = 119,
  F30S = 120,
  F31S = 121,
  R0D = 122,
  R1D = 123,
  R2D = 124,
  R3D = 125,
  R4D = 126,
  R5D = 127,
  R6D = 128,
  R7D = 129,
  R8D = 130,
  R9D = 131,
  R10D = 132,
  R11D = 133,
  R12D = 134,
  R13D = 135,
  R14D = 136,
  R15D = 137,
  R0H = 138,
  R1H = 139,
  R2H = 140,
  R3H = 141,
  R4H = 142,
  R5H = 143,
  R6H = 144,
  R7H = 145,
  R8H = 146,
  R9H = 147,
  R10H = 148,
  R11H = 149,
  R12H = 150,
  R13H = 151,
  R14H = 152,
  R15H = 153,
  R0L = 154,
  R1L = 155,
  R2L = 156,
  R3L = 157,
  R4L = 158,
  R5L = 159,
  R6L = 160,
  R7L = 161,
  R8L = 162,
  R9L = 163,
  R10L = 164,
  R11L = 165,
  R12L = 166,
  R13L = 167,
  R14L = 168,
  R15L = 169,
  R0Q = 170,
  R2Q = 171,
  R4Q = 172,
  R6Q = 173,
  R8Q = 174,
  R10Q = 175,
  R12Q = 176,
  R14Q = 177,
  NUM_TARGET_REGS 	// 178
};
} // end namespace SystemZ

// Register classes

namespace SystemZ {
enum {
  GRX32BitRegClassID = 0,
  VR32BitRegClassID = 1,
  AR32BitRegClassID = 2,
  FP32BitRegClassID = 3,
  GR32BitRegClassID = 4,
  GRH32BitRegClassID = 5,
  ADDR32BitRegClassID = 6,
  CCRegsRegClassID = 7,
  AnyRegBitRegClassID = 8,
  AnyRegBit_with_subreg_r32RegClassID = 9,
  VR64BitRegClassID = 10,
  AnyRegBit_with_subreg_r64RegClassID = 11,
  FP64BitRegClassID = 12,
  GR64BitRegClassID = 13,
  ADDR64BitRegClassID = 14,
  VR128BitRegClassID = 15,
  VF128BitRegClassID = 16,
  FP128BitRegClassID = 17,
  GR128BitRegClassID = 18,
  ADDR128BitRegClassID = 19,

  };
} // end namespace SystemZ


// Subregister indices

namespace SystemZ {
enum {
  NoSubRegister,
  subreg_h32,	// 1
  subreg_h64,	// 2
  subreg_hh32,	// 3
  subreg_hl32,	// 4
  subreg_hr32,	// 5
  subreg_l32,	// 6
  subreg_l64,	// 7
  subreg_r32,	// 8
  subreg_r64,	// 9
  NUM_TARGET_SUBREGS
};
} // end namespace SystemZ

} // end namespace llvm

#endif // GET_REGINFO_ENUM

/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* MC Register Information                                                    *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/


#ifdef GET_REGINFO_MC_DESC
#undef GET_REGINFO_MC_DESC

namespace llvm {

extern const MCPhysReg SystemZRegDiffLists[] = {
  /* 0 */ 64905, 1, 1, 1, 0,
  /* 5 */ 65341, 1, 0,
  /* 8 */ 65471, 2, 0,
  /* 11 */ 65473, 2, 0,
  /* 14 */ 65475, 2, 0,
  /* 17 */ 65477, 2, 0,
  /* 20 */ 32, 40, 0,
  /* 23 */ 65506, 40, 65494, 40, 0,
  /* 28 */ 65508, 40, 65494, 40, 0,
  /* 33 */ 65510, 40, 65494, 40, 0,
  /* 38 */ 65512, 40, 65494, 40, 0,
  /* 43 */ 65504, 40, 0,
  /* 46 */ 65520, 40, 0,
  /* 49 */ 65504, 41, 0,
  /* 52 */ 65520, 41, 0,
  /* 55 */ 65504, 42, 0,
  /* 58 */ 65520, 42, 0,
  /* 61 */ 65504, 43, 0,
  /* 64 */ 65520, 43, 0,
  /* 67 */ 65504, 44, 0,
  /* 70 */ 65520, 44, 0,
  /* 73 */ 65504, 45, 0,
  /* 76 */ 65520, 45, 0,
  /* 79 */ 65504, 46, 0,
  /* 82 */ 65520, 46, 0,
  /* 85 */ 65504, 47, 0,
  /* 88 */ 65520, 47, 0,
  /* 91 */ 65504, 48, 0,
  /* 94 */ 65520, 48, 0,
  /* 97 */ 65496, 65504, 56, 0,
  /* 101 */ 65496, 65504, 58, 0,
  /* 105 */ 65496, 65504, 60, 0,
  /* 109 */ 65496, 65504, 62, 0,
  /* 113 */ 65496, 65504, 64, 0,
  /* 117 */ 65277, 0,
  /* 119 */ 65310, 0,
  /* 121 */ 65463, 0,
  /* 123 */ 65503, 0,
  /* 125 */ 65496, 65504, 0,
  /* 128 */ 65489, 32, 65520, 65519, 32, 65520, 0,
  /* 135 */ 65490, 32, 65520, 65519, 32, 65520, 0,
  /* 142 */ 65491, 32, 65520, 65519, 32, 65520, 0,
  /* 149 */ 65492, 32, 65520, 65519, 32, 65520, 0,
  /* 156 */ 65493, 32, 65520, 65519, 32, 65520, 0,
  /* 163 */ 65494, 32, 65520, 65519, 32, 65520, 0,
  /* 170 */ 65495, 32, 65520, 65519, 32, 65520, 0,
  /* 177 */ 65496, 32, 65520, 65519, 32, 65520, 0,
  /* 184 */ 65535, 0,
};

extern const LaneBitmask SystemZLaneMaskLists[] = {
  /* 0 */ LaneBitmask(0x00000000), LaneBitmask::getAll(),
  /* 2 */ LaneBitmask(0x00000004), LaneBitmask(0x00000002), LaneBitmask(0x00000010), LaneBitmask(0x00000001), LaneBitmask::getAll(),
  /* 7 */ LaneBitmask(0x00000008), LaneBitmask(0x00000020), LaneBitmask::getAll(),
};

extern const uint16_t SystemZSubRegIdxLists[] = {
  /* 0 */ 6, 1, 0,
  /* 3 */ 7, 6, 1, 2, 4, 3, 0,
  /* 10 */ 7, 8, 2, 5, 0,
  /* 15 */ 9, 8, 0,
};

extern const MCRegisterInfo::SubRegCoveredBits SystemZSubRegIdxRanges[] = {
  { 65535, 65535 },
  { 32, 32 },	// subreg_h32
  { 64, 64 },	// subreg_h64
  { 96, 32 },	// subreg_hh32
  { 64, 32 },	// subreg_hl32
  { 96, 32 },	// subreg_hr32
  { 0, 32 },	// subreg_l32
  { 0, 64 },	// subreg_l64
  { 32, 32 },	// subreg_r32
  { 64, 64 },	// subreg_r64
};

extern const char SystemZRegStrings[] = {
  /* 0 */ 'A', '1', '0', 0,
  /* 4 */ 'V', '1', '0', 0,
  /* 8 */ 'V', '2', '0', 0,
  /* 12 */ 'V', '3', '0', 0,
  /* 16 */ 'A', '0', 0,
  /* 19 */ 'V', '0', 0,
  /* 22 */ 'A', '1', '1', 0,
  /* 26 */ 'V', '1', '1', 0,
  /* 30 */ 'V', '2', '1', 0,
  /* 34 */ 'V', '3', '1', 0,
  /* 38 */ 'A', '1', 0,
  /* 41 */ 'V', '1', 0,
  /* 44 */ 'A', '1', '2', 0,
  /* 48 */ 'V', '1', '2', 0,
  /* 52 */ 'V', '2', '2', 0,
  /* 56 */ 'A', '2', 0,
  /* 59 */ 'V', '2', 0,
  /* 62 */ 'A', '1', '3', 0,
  /* 66 */ 'V', '1', '3', 0,
  /* 70 */ 'V', '2', '3', 0,
  /* 74 */ 'A', '3', 0,
  /* 77 */ 'V', '3', 0,
  /* 80 */ 'A', '1', '4', 0,
  /* 84 */ 'V', '1', '4', 0,
  /* 88 */ 'V', '2', '4', 0,
  /* 92 */ 'A', '4', 0,
  /* 95 */ 'V', '4', 0,
  /* 98 */ 'A', '1', '5', 0,
  /* 102 */ 'V', '1', '5', 0,
  /* 106 */ 'V', '2', '5', 0,
  /* 110 */ 'A', '5', 0,
  /* 113 */ 'V', '5', 0,
  /* 116 */ 'V', '1', '6', 0,
  /* 120 */ 'V', '2', '6', 0,
  /* 124 */ 'A', '6', 0,
  /* 127 */ 'V', '6', 0,
  /* 130 */ 'V', '1', '7', 0,
  /* 134 */ 'V', '2', '7', 0,
  /* 138 */ 'A', '7', 0,
  /* 141 */ 'V', '7', 0,
  /* 144 */ 'V', '1', '8', 0,
  /* 148 */ 'V', '2', '8', 0,
  /* 152 */ 'A', '8', 0,
  /* 155 */ 'V', '8', 0,
  /* 158 */ 'V', '1', '9', 0,
  /* 162 */ 'V', '2', '9', 0,
  /* 166 */ 'A', '9', 0,
  /* 169 */ 'V', '9', 0,
  /* 172 */ 'C', 'C', 0,
  /* 175 */ 'F', '1', '0', 'D', 0,
  /* 180 */ 'R', '1', '0', 'D', 0,
  /* 185 */ 'F', '2', '0', 'D', 0,
  /* 190 */ 'F', '3', '0', 'D', 0,
  /* 195 */ 'F', '0', 'D', 0,
  /* 199 */ 'R', '0', 'D', 0,
  /* 203 */ 'F', '1', '1', 'D', 0,
  /* 208 */ 'R', '1', '1', 'D', 0,
  /* 213 */ 'F', '2', '1', 'D', 0,
  /* 218 */ 'F', '3', '1', 'D', 0,
  /* 223 */ 'F', '1', 'D', 0,
  /* 227 */ 'R', '1', 'D', 0,
  /* 231 */ 'F', '1', '2', 'D', 0,
  /* 236 */ 'R', '1', '2', 'D', 0,
  /* 241 */ 'F', '2', '2', 'D', 0,
  /* 246 */ 'F', '2', 'D', 0,
  /* 250 */ 'R', '2', 'D', 0,
  /* 254 */ 'F', '1', '3', 'D', 0,
  /* 259 */ 'R', '1', '3', 'D', 0,
  /* 264 */ 'F', '2', '3', 'D', 0,
  /* 269 */ 'F', '3', 'D', 0,
  /* 273 */ 'R', '3', 'D', 0,
  /* 277 */ 'F', '1', '4', 'D', 0,
  /* 282 */ 'R', '1', '4', 'D', 0,
  /* 287 */ 'F', '2', '4', 'D', 0,
  /* 292 */ 'F', '4', 'D', 0,
  /* 296 */ 'R', '4', 'D', 0,
  /* 300 */ 'F', '1', '5', 'D', 0,
  /* 305 */ 'R', '1', '5', 'D', 0,
  /* 310 */ 'F', '2', '5', 'D', 0,
  /* 315 */ 'F', '5', 'D', 0,
  /* 319 */ 'R', '5', 'D', 0,
  /* 323 */ 'F', '1', '6', 'D', 0,
  /* 328 */ 'F', '2', '6', 'D', 0,
  /* 333 */ 'F', '6', 'D', 0,
  /* 337 */ 'R', '6', 'D', 0,
  /* 341 */ 'F', '1', '7', 'D', 0,
  /* 346 */ 'F', '2', '7', 'D', 0,
  /* 351 */ 'F', '7', 'D', 0,
  /* 355 */ 'R', '7', 'D', 0,
  /* 359 */ 'F', '1', '8', 'D', 0,
  /* 364 */ 'F', '2', '8', 'D', 0,
  /* 369 */ 'F', '8', 'D', 0,
  /* 373 */ 'R', '8', 'D', 0,
  /* 377 */ 'F', '1', '9', 'D', 0,
  /* 382 */ 'F', '2', '9', 'D', 0,
  /* 387 */ 'F', '9', 'D', 0,
  /* 391 */ 'R', '9', 'D', 0,
  /* 395 */ 'R', '1', '0', 'H', 0,
  /* 400 */ 'R', '0', 'H', 0,
  /* 404 */ 'R', '1', '1', 'H', 0,
  /* 409 */ 'R', '1', 'H', 0,
  /* 413 */ 'R', '1', '2', 'H', 0,
  /* 418 */ 'R', '2', 'H', 0,
  /* 422 */ 'R', '1', '3', 'H', 0,
  /* 427 */ 'R', '3', 'H', 0,
  /* 431 */ 'R', '1', '4', 'H', 0,
  /* 436 */ 'R', '4', 'H', 0,
  /* 440 */ 'R', '1', '5', 'H', 0,
  /* 445 */ 'R', '5', 'H', 0,
  /* 449 */ 'R', '6', 'H', 0,
  /* 453 */ 'R', '7', 'H', 0,
  /* 457 */ 'R', '8', 'H', 0,
  /* 461 */ 'R', '9', 'H', 0,
  /* 465 */ 'R', '1', '0', 'L', 0,
  /* 470 */ 'R', '0', 'L', 0,
  /* 474 */ 'R', '1', '1', 'L', 0,
  /* 479 */ 'R', '1', 'L', 0,
  /* 483 */ 'R', '1', '2', 'L', 0,
  /* 488 */ 'R', '2', 'L', 0,
  /* 492 */ 'R', '1', '3', 'L', 0,
  /* 497 */ 'R', '3', 'L', 0,
  /* 501 */ 'R', '1', '4', 'L', 0,
  /* 506 */ 'R', '4', 'L', 0,
  /* 510 */ 'R', '1', '5', 'L', 0,
  /* 515 */ 'R', '5', 'L', 0,
  /* 519 */ 'R', '6', 'L', 0,
  /* 523 */ 'R', '7', 'L', 0,
  /* 527 */ 'R', '8', 'L', 0,
  /* 531 */ 'R', '9', 'L', 0,
  /* 535 */ 'R', '1', '0', 'Q', 0,
  /* 540 */ 'F', '0', 'Q', 0,
  /* 544 */ 'R', '0', 'Q', 0,
  /* 548 */ 'F', '1', 'Q', 0,
  /* 552 */ 'F', '1', '2', 'Q', 0,
  /* 557 */ 'R', '1', '2', 'Q', 0,
  /* 562 */ 'R', '2', 'Q', 0,
  /* 566 */ 'F', '1', '3', 'Q', 0,
  /* 571 */ 'R', '1', '4', 'Q', 0,
  /* 576 */ 'F', '4', 'Q', 0,
  /* 580 */ 'R', '4', 'Q', 0,
  /* 584 */ 'F', '5', 'Q', 0,
  /* 588 */ 'R', '6', 'Q', 0,
  /* 592 */ 'F', '8', 'Q', 0,
  /* 596 */ 'R', '8', 'Q', 0,
  /* 600 */ 'F', '9', 'Q', 0,
  /* 604 */ 'F', '1', '0', 'S', 0,
  /* 609 */ 'F', '2', '0', 'S', 0,
  /* 614 */ 'F', '3', '0', 'S', 0,
  /* 619 */ 'F', '0', 'S', 0,
  /* 623 */ 'F', '1', '1', 'S', 0,
  /* 628 */ 'F', '2', '1', 'S', 0,
  /* 633 */ 'F', '3', '1', 'S', 0,
  /* 638 */ 'F', '1', 'S', 0,
  /* 642 */ 'F', '1', '2', 'S', 0,
  /* 647 */ 'F', '2', '2', 'S', 0,
  /* 652 */ 'F', '2', 'S', 0,
  /* 656 */ 'F', '1', '3', 'S', 0,
  /* 661 */ 'F', '2', '3', 'S', 0,
  /* 666 */ 'F', '3', 'S', 0,
  /* 670 */ 'F', '1', '4', 'S', 0,
  /* 675 */ 'F', '2', '4', 'S', 0,
  /* 680 */ 'F', '4', 'S', 0,
  /* 684 */ 'F', '1', '5', 'S', 0,
  /* 689 */ 'F', '2', '5', 'S', 0,
  /* 694 */ 'F', '5', 'S', 0,
  /* 698 */ 'F', '1', '6', 'S', 0,
  /* 703 */ 'F', '2', '6', 'S', 0,
  /* 708 */ 'F', '6', 'S', 0,
  /* 712 */ 'F', '1', '7', 'S', 0,
  /* 717 */ 'F', '2', '7', 'S', 0,
  /* 722 */ 'F', '7', 'S', 0,
  /* 726 */ 'F', '1', '8', 'S', 0,
  /* 731 */ 'F', '2', '8', 'S', 0,
  /* 736 */ 'F', '8', 'S', 0,
  /* 740 */ 'F', '1', '9', 'S', 0,
  /* 745 */ 'F', '2', '9', 'S', 0,
  /* 750 */ 'F', '9', 'S', 0,
};

extern const MCRegisterDesc SystemZRegDesc[] = { // Descriptors
  { 3, 0, 0, 0, 0, 0 },
  { 172, 4, 4, 2, 2945, 0 },
  { 16, 4, 4, 2, 2945, 0 },
  { 38, 4, 4, 2, 2945, 0 },
  { 56, 4, 4, 2, 2945, 0 },
  { 74, 4, 4, 2, 2945, 0 },
  { 92, 4, 4, 2, 2945, 0 },
  { 110, 4, 4, 2, 2945, 0 },
  { 124, 4, 4, 2, 2945, 0 },
  { 138, 4, 4, 2, 2945, 0 },
  { 152, 4, 4, 2, 2945, 0 },
  { 166, 4, 4, 2, 2945, 0 },
  { 0, 4, 4, 2, 2945, 0 },
  { 22, 4, 4, 2, 2945, 0 },
  { 44, 4, 4, 2, 2945, 0 },
  { 62, 4, 4, 2, 2945, 0 },
  { 80, 4, 4, 2, 2945, 0 },
  { 98, 4, 4, 2, 2945, 0 },
  { 19, 20, 4, 15, 2945, 8 },
  { 41, 20, 4, 15, 2945, 8 },
  { 59, 20, 4, 15, 2945, 8 },
  { 77, 20, 4, 15, 2945, 8 },
  { 95, 20, 4, 15, 2945, 8 },
  { 113, 20, 4, 15, 2945, 8 },
  { 127, 20, 4, 15, 2945, 8 },
  { 141, 20, 4, 15, 2945, 8 },
  { 155, 20, 4, 15, 2945, 8 },
  { 169, 20, 4, 15, 2945, 8 },
  { 4, 20, 4, 15, 2945, 8 },
  { 26, 20, 4, 15, 2945, 8 },
  { 48, 20, 4, 15, 2945, 8 },
  { 66, 20, 4, 15, 2945, 8 },
  { 84, 20, 4, 15, 2945, 8 },
  { 102, 20, 4, 15, 2945, 8 },
  { 116, 20, 4, 15, 2945, 8 },
  { 130, 20, 4, 15, 2945, 8 },
  { 144, 20, 4, 15, 2945, 8 },
  { 158, 20, 4, 15, 2945, 8 },
  { 8, 20, 4, 15, 2945, 8 },
  { 30, 20, 4, 15, 2945, 8 },
  { 52, 20, 4, 15, 2945, 8 },
  { 70, 20, 4, 15, 2945, 8 },
  { 88, 20, 4, 15, 2945, 8 },
  { 106, 20, 4, 15, 2945, 8 },
  { 120, 20, 4, 15, 2945, 8 },
  { 134, 20, 4, 15, 2945, 8 },
  { 148, 20, 4, 15, 2945, 8 },
  { 162, 20, 4, 15, 2945, 8 },
  { 12, 20, 4, 15, 2945, 8 },
  { 34, 20, 4, 15, 2945, 8 },
  { 195, 21, 114, 16, 1969, 8 },
  { 223, 21, 114, 16, 1969, 8 },
  { 246, 21, 110, 16, 1969, 8 },
  { 269, 21, 110, 16, 1969, 8 },
  { 292, 21, 110, 16, 1969, 8 },
  { 315, 21, 110, 16, 1969, 8 },
  { 333, 21, 106, 16, 1969, 8 },
  { 351, 21, 106, 16, 1969, 8 },
  { 369, 21, 106, 16, 1969, 8 },
  { 387, 21, 106, 16, 1969, 8 },
  { 175, 21, 102, 16, 1969, 8 },
  { 203, 21, 102, 16, 1969, 8 },
  { 231, 21, 102, 16, 1969, 8 },
  { 254, 21, 102, 16, 1969, 8 },
  { 277, 21, 98, 16, 1969, 8 },
  { 300, 21, 98, 16, 1969, 8 },
  { 323, 21, 126, 16, 1969, 8 },
  { 341, 21, 126, 16, 1969, 8 },
  { 359, 21, 126, 16, 1969, 8 },
  { 377, 21, 126, 16, 1969, 8 },
  { 185, 21, 126, 16, 1969, 8 },
  { 213, 21, 126, 16, 1969, 8 },
  { 241, 21, 126, 16, 1969, 8 },
  { 264, 21, 126, 16, 1969, 8 },
  { 287, 21, 126, 16, 1969, 8 },
  { 310, 21, 126, 16, 1969, 8 },
  { 328, 21, 126, 16, 1969, 8 },
  { 346, 21, 126, 16, 1969, 8 },
  { 364, 21, 126, 16, 1969, 8 },
  { 382, 21, 126, 16, 1969, 8 },
  { 190, 21, 126, 16, 1969, 8 },
  { 218, 21, 126, 16, 1969, 8 },
  { 540, 23, 4, 10, 129, 7 },
  { 548, 23, 4, 10, 129, 7 },
  { 576, 28, 4, 10, 177, 7 },
  { 584, 28, 4, 10, 177, 7 },
  { 592, 33, 4, 10, 225, 7 },
  { 600, 33, 4, 10, 225, 7 },
  { 552, 38, 4, 10, 273, 7 },
  { 566, 38, 4, 10, 273, 7 },
  { 619, 4, 113, 2, 1937, 0 },
  { 638, 4, 113, 2, 1937, 0 },
  { 652, 4, 109, 2, 1937, 0 },
  { 666, 4, 109, 2, 1937, 0 },
  { 680, 4, 109, 2, 1937, 0 },
  { 694, 4, 109, 2, 1937, 0 },
  { 708, 4, 105, 2, 1937, 0 },
  { 722, 4, 105, 2, 1937, 0 },
  { 736, 4, 105, 2, 1937, 0 },
  { 750, 4, 105, 2, 1937, 0 },
  { 604, 4, 101, 2, 1937, 0 },
  { 623, 4, 101, 2, 1937, 0 },
  { 642, 4, 101, 2, 1937, 0 },
  { 656, 4, 101, 2, 1937, 0 },
  { 670, 4, 97, 2, 1937, 0 },
  { 684, 4, 97, 2, 1937, 0 },
  { 698, 4, 125, 2, 1937, 0 },
  { 712, 4, 125, 2, 1937, 0 },
  { 726, 4, 125, 2, 1937, 0 },
  { 740, 4, 125, 2, 1937, 0 },
  { 609, 4, 125, 2, 1937, 0 },
  { 628, 4, 125, 2, 1937, 0 },
  { 647, 4, 125, 2, 1937, 0 },
  { 661, 4, 125, 2, 1937, 0 },
  { 675, 4, 125, 2, 1937, 0 },
  { 689, 4, 125, 2, 1937, 0 },
  { 703, 4, 125, 2, 1937, 0 },
  { 717, 4, 125, 2, 1937, 0 },
  { 731, 4, 125, 2, 1937, 0 },
  { 745, 4, 125, 2, 1937, 0 },
  { 614, 4, 125, 2, 1937, 0 },
  { 633, 4, 125, 2, 1937, 0 },
  { 199, 132, 92, 0, 82, 4 },
  { 227, 132, 86, 0, 82, 4 },
  { 250, 132, 86, 0, 82, 4 },
  { 273, 132, 80, 0, 82, 4 },
  { 296, 132, 80, 0, 82, 4 },
  { 319, 132, 74, 0, 82, 4 },
  { 337, 132, 74, 0, 82, 4 },
  { 355, 132, 68, 0, 82, 4 },
  { 373, 132, 68, 0, 82, 4 },
  { 391, 132, 62, 0, 82, 4 },
  { 180, 132, 62, 0, 82, 4 },
  { 208, 132, 56, 0, 82, 4 },
  { 236, 132, 56, 0, 82, 4 },
  { 259, 132, 50, 0, 82, 4 },
  { 282, 132, 50, 0, 82, 4 },
  { 305, 132, 21, 0, 82, 4 },
  { 400, 4, 94, 2, 1906, 0 },
  { 409, 4, 88, 2, 1906, 0 },
  { 418, 4, 88, 2, 1906, 0 },
  { 427, 4, 82, 2, 1906, 0 },
  { 436, 4, 82, 2, 1906, 0 },
  { 445, 4, 76, 2, 1906, 0 },
  { 449, 4, 76, 2, 1906, 0 },
  { 453, 4, 70, 2, 1906, 0 },
  { 457, 4, 70, 2, 1906, 0 },
  { 461, 4, 64, 2, 1906, 0 },
  { 395, 4, 64, 2, 1906, 0 },
  { 404, 4, 58, 2, 1906, 0 },
  { 413, 4, 58, 2, 1906, 0 },
  { 422, 4, 52, 2, 1906, 0 },
  { 431, 4, 52, 2, 1906, 0 },
  { 440, 4, 46, 2, 1906, 0 },
  { 470, 4, 91, 2, 1874, 0 },
  { 479, 4, 85, 2, 1874, 0 },
  { 488, 4, 85, 2, 1874, 0 },
  { 497, 4, 79, 2, 1874, 0 },
  { 506, 4, 79, 2, 1874, 0 },
  { 515, 4, 73, 2, 1874, 0 },
  { 519, 4, 73, 2, 1874, 0 },
  { 523, 4, 67, 2, 1874, 0 },
  { 527, 4, 67, 2, 1874, 0 },
  { 531, 4, 61, 2, 1874, 0 },
  { 465, 4, 61, 2, 1874, 0 },
  { 474, 4, 55, 2, 1874, 0 },
  { 483, 4, 55, 2, 1874, 0 },
  { 492, 4, 49, 2, 1874, 0 },
  { 501, 4, 49, 2, 1874, 0 },
  { 510, 4, 43, 2, 1874, 0 },
  { 544, 128, 4, 3, 4, 2 },
  { 562, 135, 4, 3, 4, 2 },
  { 580, 142, 4, 3, 4, 2 },
  { 588, 149, 4, 3, 4, 2 },
  { 596, 156, 4, 3, 4, 2 },
  { 535, 163, 4, 3, 4, 2 },
  { 557, 170, 4, 3, 4, 2 },
  { 571, 177, 4, 3, 4, 2 },
};

extern const MCPhysReg SystemZRegUnitRoots[][2] = {
  { SystemZ::CC },
  { SystemZ::A0 },
  { SystemZ::A1 },
  { SystemZ::A2 },
  { SystemZ::A3 },
  { SystemZ::A4 },
  { SystemZ::A5 },
  { SystemZ::A6 },
  { SystemZ::A7 },
  { SystemZ::A8 },
  { SystemZ::A9 },
  { SystemZ::A10 },
  { SystemZ::A11 },
  { SystemZ::A12 },
  { SystemZ::A13 },
  { SystemZ::A14 },
  { SystemZ::A15 },
  { SystemZ::F0S },
  { SystemZ::F1S },
  { SystemZ::F2S },
  { SystemZ::F3S },
  { SystemZ::F4S },
  { SystemZ::F5S },
  { SystemZ::F6S },
  { SystemZ::F7S },
  { SystemZ::F8S },
  { SystemZ::F9S },
  { SystemZ::F10S },
  { SystemZ::F11S },
  { SystemZ::F12S },
  { SystemZ::F13S },
  { SystemZ::F14S },
  { SystemZ::F15S },
  { SystemZ::F16S },
  { SystemZ::F17S },
  { SystemZ::F18S },
  { SystemZ::F19S },
  { SystemZ::F20S },
  { SystemZ::F21S },
  { SystemZ::F22S },
  { SystemZ::F23S },
  { SystemZ::F24S },
  { SystemZ::F25S },
  { SystemZ::F26S },
  { SystemZ::F27S },
  { SystemZ::F28S },
  { SystemZ::F29S },
  { SystemZ::F30S },
  { SystemZ::F31S },
  { SystemZ::R0L },
  { SystemZ::R0H },
  { SystemZ::R1L },
  { SystemZ::R1H },
  { SystemZ::R2L },
  { SystemZ::R2H },
  { SystemZ::R3L },
  { SystemZ::R3H },
  { SystemZ::R4L },
  { SystemZ::R4H },
  { SystemZ::R5L },
  { SystemZ::R5H },
  { SystemZ::R6L },
  { SystemZ::R6H },
  { SystemZ::R7L },
  { SystemZ::R7H },
  { SystemZ::R8L },
  { SystemZ::R8H },
  { SystemZ::R9L },
  { SystemZ::R9H },
  { SystemZ::R10L },
  { SystemZ::R10H },
  { SystemZ::R11L },
  { SystemZ::R11H },
  { SystemZ::R12L },
  { SystemZ::R12H },
  { SystemZ::R13L },
  { SystemZ::R13H },
  { SystemZ::R14L },
  { SystemZ::R14H },
  { SystemZ::R15L },
  { SystemZ::R15H },
};

namespace {     // Register classes...
  // GRX32Bit Register Class...
  const MCPhysReg GRX32Bit[] = {
    SystemZ::R0L, SystemZ::R1L, SystemZ::R2L, SystemZ::R3L, SystemZ::R4L, SystemZ::R5L, SystemZ::R0H, SystemZ::R1H, SystemZ::R2H, SystemZ::R3H, SystemZ::R4H, SystemZ::R5H, SystemZ::R15L, SystemZ::R15H, SystemZ::R14L, SystemZ::R14H, SystemZ::R13L, SystemZ::R13H, SystemZ::R12L, SystemZ::R12H, SystemZ::R11L, SystemZ::R11H, SystemZ::R10L, SystemZ::R10H, SystemZ::R9L, SystemZ::R9H, SystemZ::R8L, SystemZ::R8H, SystemZ::R7L, SystemZ::R7H, SystemZ::R6L, SystemZ::R6H, 
  };

  // GRX32Bit Bit set.
  const uint8_t GRX32BitBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfc, 0xff, 0xff, 0xff, 0x03, 
  };

  // VR32Bit Register Class...
  const MCPhysReg VR32Bit[] = {
    SystemZ::F0S, SystemZ::F1S, SystemZ::F2S, SystemZ::F3S, SystemZ::F4S, SystemZ::F5S, SystemZ::F6S, SystemZ::F7S, SystemZ::F16S, SystemZ::F17S, SystemZ::F18S, SystemZ::F19S, SystemZ::F20S, SystemZ::F21S, SystemZ::F22S, SystemZ::F23S, SystemZ::F24S, SystemZ::F25S, SystemZ::F26S, SystemZ::F27S, SystemZ::F28S, SystemZ::F29S, SystemZ::F30S, SystemZ::F31S, SystemZ::F8S, SystemZ::F9S, SystemZ::F10S, SystemZ::F11S, SystemZ::F12S, SystemZ::F13S, SystemZ::F14S, SystemZ::F15S, 
  };

  // VR32Bit Bit set.
  const uint8_t VR32BitBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfc, 0xff, 0xff, 0xff, 0x03, 
  };

  // AR32Bit Register Class...
  const MCPhysReg AR32Bit[] = {
    SystemZ::A0, SystemZ::A1, SystemZ::A2, SystemZ::A3, SystemZ::A4, SystemZ::A5, SystemZ::A6, SystemZ::A7, SystemZ::A8, SystemZ::A9, SystemZ::A10, SystemZ::A11, SystemZ::A12, SystemZ::A13, SystemZ::A14, SystemZ::A15, 
  };

  // AR32Bit Bit set.
  const uint8_t AR32BitBits[] = {
    0xfc, 0xff, 0x03, 
  };

  // FP32Bit Register Class...
  const MCPhysReg FP32Bit[] = {
    SystemZ::F0S, SystemZ::F1S, SystemZ::F2S, SystemZ::F3S, SystemZ::F4S, SystemZ::F5S, SystemZ::F6S, SystemZ::F7S, SystemZ::F8S, SystemZ::F9S, SystemZ::F10S, SystemZ::F11S, SystemZ::F12S, SystemZ::F13S, SystemZ::F14S, SystemZ::F15S, 
  };

  // FP32Bit Bit set.
  const uint8_t FP32BitBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfc, 0xff, 0x03, 
  };

  // GR32Bit Register Class...
  const MCPhysReg GR32Bit[] = {
    SystemZ::R0L, SystemZ::R1L, SystemZ::R2L, SystemZ::R3L, SystemZ::R4L, SystemZ::R5L, SystemZ::R15L, SystemZ::R14L, SystemZ::R13L, SystemZ::R12L, SystemZ::R11L, SystemZ::R10L, SystemZ::R9L, SystemZ::R8L, SystemZ::R7L, SystemZ::R6L, 
  };

  // GR32Bit Bit set.
  const uint8_t GR32BitBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfc, 0xff, 0x03, 
  };

  // GRH32Bit Register Class...
  const MCPhysReg GRH32Bit[] = {
    SystemZ::R0H, SystemZ::R1H, SystemZ::R2H, SystemZ::R3H, SystemZ::R4H, SystemZ::R5H, SystemZ::R15H, SystemZ::R14H, SystemZ::R13H, SystemZ::R12H, SystemZ::R11H, SystemZ::R10H, SystemZ::R9H, SystemZ::R8H, SystemZ::R7H, SystemZ::R6H, 
  };

  // GRH32Bit Bit set.
  const uint8_t GRH32BitBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfc, 0xff, 0x03, 
  };

  // ADDR32Bit Register Class...
  const MCPhysReg ADDR32Bit[] = {
    SystemZ::R1L, SystemZ::R2L, SystemZ::R3L, SystemZ::R4L, SystemZ::R5L, SystemZ::R15L, SystemZ::R14L, SystemZ::R13L, SystemZ::R12L, SystemZ::R11L, SystemZ::R10L, SystemZ::R9L, SystemZ::R8L, SystemZ::R7L, SystemZ::R6L, 
  };

  // ADDR32Bit Bit set.
  const uint8_t ADDR32BitBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0xff, 0x03, 
  };

  // CCRegs Register Class...
  const MCPhysReg CCRegs[] = {
    SystemZ::CC, 
  };

  // CCRegs Bit set.
  const uint8_t CCRegsBits[] = {
    0x02, 
  };

  // AnyRegBit Register Class...
  const MCPhysReg AnyRegBit[] = {
    SystemZ::R0D, SystemZ::R1D, SystemZ::R2D, SystemZ::R3D, SystemZ::R4D, SystemZ::R5D, SystemZ::R6D, SystemZ::R7D, SystemZ::R8D, SystemZ::R9D, SystemZ::R10D, SystemZ::R11D, SystemZ::R12D, SystemZ::R13D, SystemZ::R14D, SystemZ::R15D, SystemZ::F0D, SystemZ::F1D, SystemZ::F2D, SystemZ::F3D, SystemZ::F4D, SystemZ::F5D, SystemZ::F6D, SystemZ::F7D, SystemZ::F8D, SystemZ::F9D, SystemZ::F10D, SystemZ::F11D, SystemZ::F12D, SystemZ::F13D, SystemZ::F14D, SystemZ::F15D, SystemZ::V0, SystemZ::V1, SystemZ::V2, SystemZ::V3, SystemZ::V4, SystemZ::V5, SystemZ::V6, SystemZ::V7, SystemZ::V8, SystemZ::V9, SystemZ::V10, SystemZ::V11, SystemZ::V12, SystemZ::V13, SystemZ::V14, SystemZ::V15, 
  };

  // AnyRegBit Bit set.
  const uint8_t AnyRegBitBits[] = {
    0x00, 0x00, 0xfc, 0xff, 0x03, 0x00, 0xfc, 0xff, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfc, 0xff, 0x03, 
  };

  // AnyRegBit_with_subreg_r32 Register Class...
  const MCPhysReg AnyRegBit_with_subreg_r32[] = {
    SystemZ::F0D, SystemZ::F1D, SystemZ::F2D, SystemZ::F3D, SystemZ::F4D, SystemZ::F5D, SystemZ::F6D, SystemZ::F7D, SystemZ::F8D, SystemZ::F9D, SystemZ::F10D, SystemZ::F11D, SystemZ::F12D, SystemZ::F13D, SystemZ::F14D, SystemZ::F15D, SystemZ::V0, SystemZ::V1, SystemZ::V2, SystemZ::V3, SystemZ::V4, SystemZ::V5, SystemZ::V6, SystemZ::V7, SystemZ::V8, SystemZ::V9, SystemZ::V10, SystemZ::V11, SystemZ::V12, SystemZ::V13, SystemZ::V14, SystemZ::V15, 
  };

  // AnyRegBit_with_subreg_r32 Bit set.
  const uint8_t AnyRegBit_with_subreg_r32Bits[] = {
    0x00, 0x00, 0xfc, 0xff, 0x03, 0x00, 0xfc, 0xff, 0x03, 
  };

  // VR64Bit Register Class...
  const MCPhysReg VR64Bit[] = {
    SystemZ::F0D, SystemZ::F1D, SystemZ::F2D, SystemZ::F3D, SystemZ::F4D, SystemZ::F5D, SystemZ::F6D, SystemZ::F7D, SystemZ::F16D, SystemZ::F17D, SystemZ::F18D, SystemZ::F19D, SystemZ::F20D, SystemZ::F21D, SystemZ::F22D, SystemZ::F23D, SystemZ::F24D, SystemZ::F25D, SystemZ::F26D, SystemZ::F27D, SystemZ::F28D, SystemZ::F29D, SystemZ::F30D, SystemZ::F31D, SystemZ::F8D, SystemZ::F9D, SystemZ::F10D, SystemZ::F11D, SystemZ::F12D, SystemZ::F13D, SystemZ::F14D, SystemZ::F15D, 
  };

  // VR64Bit Bit set.
  const uint8_t VR64BitBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfc, 0xff, 0xff, 0xff, 0x03, 
  };

  // AnyRegBit_with_subreg_r64 Register Class...
  const MCPhysReg AnyRegBit_with_subreg_r64[] = {
    SystemZ::V0, SystemZ::V1, SystemZ::V2, SystemZ::V3, SystemZ::V4, SystemZ::V5, SystemZ::V6, SystemZ::V7, SystemZ::V8, SystemZ::V9, SystemZ::V10, SystemZ::V11, SystemZ::V12, SystemZ::V13, SystemZ::V14, SystemZ::V15, 
  };

  // AnyRegBit_with_subreg_r64 Bit set.
  const uint8_t AnyRegBit_with_subreg_r64Bits[] = {
    0x00, 0x00, 0xfc, 0xff, 0x03, 
  };

  // FP64Bit Register Class...
  const MCPhysReg FP64Bit[] = {
    SystemZ::F0D, SystemZ::F1D, SystemZ::F2D, SystemZ::F3D, SystemZ::F4D, SystemZ::F5D, SystemZ::F6D, SystemZ::F7D, SystemZ::F8D, SystemZ::F9D, SystemZ::F10D, SystemZ::F11D, SystemZ::F12D, SystemZ::F13D, SystemZ::F14D, SystemZ::F15D, 
  };

  // FP64Bit Bit set.
  const uint8_t FP64BitBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfc, 0xff, 0x03, 
  };

  // GR64Bit Register Class...
  const MCPhysReg GR64Bit[] = {
    SystemZ::R0D, SystemZ::R1D, SystemZ::R2D, SystemZ::R3D, SystemZ::R4D, SystemZ::R5D, SystemZ::R15D, SystemZ::R14D, SystemZ::R13D, SystemZ::R12D, SystemZ::R11D, SystemZ::R10D, SystemZ::R9D, SystemZ::R8D, SystemZ::R7D, SystemZ::R6D, 
  };

  // GR64Bit Bit set.
  const uint8_t GR64BitBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfc, 0xff, 0x03, 
  };

  // ADDR64Bit Register Class...
  const MCPhysReg ADDR64Bit[] = {
    SystemZ::R1D, SystemZ::R2D, SystemZ::R3D, SystemZ::R4D, SystemZ::R5D, SystemZ::R15D, SystemZ::R14D, SystemZ::R13D, SystemZ::R12D, SystemZ::R11D, SystemZ::R10D, SystemZ::R9D, SystemZ::R8D, SystemZ::R7D, SystemZ::R6D, 
  };

  // ADDR64Bit Bit set.
  const uint8_t ADDR64BitBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0xff, 0x03, 
  };

  // VR128Bit Register Class...
  const MCPhysReg VR128Bit[] = {
    SystemZ::V0, SystemZ::V1, SystemZ::V2, SystemZ::V3, SystemZ::V4, SystemZ::V5, SystemZ::V6, SystemZ::V7, SystemZ::V16, SystemZ::V17, SystemZ::V18, SystemZ::V19, SystemZ::V20, SystemZ::V21, SystemZ::V22, SystemZ::V23, SystemZ::V24, SystemZ::V25, SystemZ::V26, SystemZ::V27, SystemZ::V28, SystemZ::V29, SystemZ::V30, SystemZ::V31, SystemZ::V8, SystemZ::V9, SystemZ::V10, SystemZ::V11, SystemZ::V12, SystemZ::V13, SystemZ::V14, SystemZ::V15, 
  };

  // VR128Bit Bit set.
  const uint8_t VR128BitBits[] = {
    0x00, 0x00, 0xfc, 0xff, 0xff, 0xff, 0x03, 
  };

  // VF128Bit Register Class...
  const MCPhysReg VF128Bit[] = {
    SystemZ::V0, SystemZ::V1, SystemZ::V2, SystemZ::V3, SystemZ::V4, SystemZ::V5, SystemZ::V6, SystemZ::V7, SystemZ::V8, SystemZ::V9, SystemZ::V10, SystemZ::V11, SystemZ::V12, SystemZ::V13, SystemZ::V14, SystemZ::V15, 
  };

  // VF128Bit Bit set.
  const uint8_t VF128BitBits[] = {
    0x00, 0x00, 0xfc, 0xff, 0x03, 
  };

  // FP128Bit Register Class...
  const MCPhysReg FP128Bit[] = {
    SystemZ::F0Q, SystemZ::F1Q, SystemZ::F4Q, SystemZ::F5Q, SystemZ::F8Q, SystemZ::F9Q, SystemZ::F12Q, SystemZ::F13Q, 
  };

  // FP128Bit Bit set.
  const uint8_t FP128BitBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfc, 0x03, 
  };

  // GR128Bit Register Class...
  const MCPhysReg GR128Bit[] = {
    SystemZ::R0Q, SystemZ::R2Q, SystemZ::R4Q, SystemZ::R12Q, SystemZ::R10Q, SystemZ::R8Q, SystemZ::R6Q, SystemZ::R14Q, 
  };

  // GR128Bit Bit set.
  const uint8_t GR128BitBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfc, 0x03, 
  };

  // ADDR128Bit Register Class...
  const MCPhysReg ADDR128Bit[] = {
    SystemZ::R2Q, SystemZ::R4Q, SystemZ::R12Q, SystemZ::R10Q, SystemZ::R8Q, SystemZ::R6Q, SystemZ::R14Q, 
  };

  // ADDR128Bit Bit set.
  const uint8_t ADDR128BitBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0x03, 
  };

} // end anonymous namespace

extern const char SystemZRegClassStrings[] = {
  /* 0 */ 'A', 'n', 'y', 'R', 'e', 'g', 'B', 'i', 't', '_', 'w', 'i', 't', 'h', '_', 's', 'u', 'b', 'r', 'e', 'g', '_', 'r', '3', '2', 0,
  /* 26 */ 'A', 'n', 'y', 'R', 'e', 'g', 'B', 'i', 't', '_', 'w', 'i', 't', 'h', '_', 's', 'u', 'b', 'r', 'e', 'g', '_', 'r', '6', '4', 0,
  /* 52 */ 'C', 'C', 'R', 'e', 'g', 's', 0,
  /* 59 */ 'G', 'R', 'H', '3', '2', 'B', 'i', 't', 0,
  /* 68 */ 'F', 'P', '3', '2', 'B', 'i', 't', 0,
  /* 76 */ 'A', 'R', '3', '2', 'B', 'i', 't', 0,
  /* 84 */ 'A', 'D', 'D', 'R', '3', '2', 'B', 'i', 't', 0,
  /* 94 */ 'G', 'R', '3', '2', 'B', 'i', 't', 0,
  /* 102 */ 'V', 'R', '3', '2', 'B', 'i', 't', 0,
  /* 110 */ 'G', 'R', 'X', '3', '2', 'B', 'i', 't', 0,
  /* 119 */ 'F', 'P', '6', '4', 'B', 'i', 't', 0,
  /* 127 */ 'A', 'D', 'D', 'R', '6', '4', 'B', 'i', 't', 0,
  /* 137 */ 'G', 'R', '6', '4', 'B', 'i', 't', 0,
  /* 145 */ 'V', 'R', '6', '4', 'B', 'i', 't', 0,
  /* 153 */ 'V', 'F', '1', '2', '8', 'B', 'i', 't', 0,
  /* 162 */ 'F', 'P', '1', '2', '8', 'B', 'i', 't', 0,
  /* 171 */ 'A', 'D', 'D', 'R', '1', '2', '8', 'B', 'i', 't', 0,
  /* 182 */ 'G', 'R', '1', '2', '8', 'B', 'i', 't', 0,
  /* 191 */ 'V', 'R', '1', '2', '8', 'B', 'i', 't', 0,
  /* 200 */ 'A', 'n', 'y', 'R', 'e', 'g', 'B', 'i', 't', 0,
};

extern const MCRegisterClass SystemZMCRegisterClasses[] = {
  { GRX32Bit, GRX32BitBits, 110, 32, sizeof(GRX32BitBits), SystemZ::GRX32BitRegClassID, 4, 4, 1, true },
  { VR32Bit, VR32BitBits, 102, 32, sizeof(VR32BitBits), SystemZ::VR32BitRegClassID, 4, 4, 1, true },
  { AR32Bit, AR32BitBits, 76, 16, sizeof(AR32BitBits), SystemZ::AR32BitRegClassID, 4, 4, 1, false },
  { FP32Bit, FP32BitBits, 68, 16, sizeof(FP32BitBits), SystemZ::FP32BitRegClassID, 4, 4, 1, true },
  { GR32Bit, GR32BitBits, 94, 16, sizeof(GR32BitBits), SystemZ::GR32BitRegClassID, 4, 4, 1, true },
  { GRH32Bit, GRH32BitBits, 59, 16, sizeof(GRH32BitBits), SystemZ::GRH32BitRegClassID, 4, 4, 1, true },
  { ADDR32Bit, ADDR32BitBits, 84, 15, sizeof(ADDR32BitBits), SystemZ::ADDR32BitRegClassID, 4, 4, 1, true },
  { CCRegs, CCRegsBits, 52, 1, sizeof(CCRegsBits), SystemZ::CCRegsRegClassID, 4, 4, 1, false },
  { AnyRegBit, AnyRegBitBits, 200, 48, sizeof(AnyRegBitBits), SystemZ::AnyRegBitRegClassID, 8, 8, 1, true },
  { AnyRegBit_with_subreg_r32, AnyRegBit_with_subreg_r32Bits, 0, 32, sizeof(AnyRegBit_with_subreg_r32Bits), SystemZ::AnyRegBit_with_subreg_r32RegClassID, 8, 8, 1, true },
  { VR64Bit, VR64BitBits, 145, 32, sizeof(VR64BitBits), SystemZ::VR64BitRegClassID, 8, 8, 1, true },
  { AnyRegBit_with_subreg_r64, AnyRegBit_with_subreg_r64Bits, 26, 16, sizeof(AnyRegBit_with_subreg_r64Bits), SystemZ::AnyRegBit_with_subreg_r64RegClassID, 8, 8, 1, true },
  { FP64Bit, FP64BitBits, 119, 16, sizeof(FP64BitBits), SystemZ::FP64BitRegClassID, 8, 8, 1, true },
  { GR64Bit, GR64BitBits, 137, 16, sizeof(GR64BitBits), SystemZ::GR64BitRegClassID, 8, 8, 1, true },
  { ADDR64Bit, ADDR64BitBits, 127, 15, sizeof(ADDR64BitBits), SystemZ::ADDR64BitRegClassID, 8, 8, 1, true },
  { VR128Bit, VR128BitBits, 191, 32, sizeof(VR128BitBits), SystemZ::VR128BitRegClassID, 16, 16, 1, true },
  { VF128Bit, VF128BitBits, 153, 16, sizeof(VF128BitBits), SystemZ::VF128BitRegClassID, 16, 16, 1, true },
  { FP128Bit, FP128BitBits, 162, 8, sizeof(FP128BitBits), SystemZ::FP128BitRegClassID, 16, 16, 1, true },
  { GR128Bit, GR128BitBits, 182, 8, sizeof(GR128BitBits), SystemZ::GR128BitRegClassID, 16, 16, 1, true },
  { ADDR128Bit, ADDR128BitBits, 171, 7, sizeof(ADDR128BitBits), SystemZ::ADDR128BitRegClassID, 16, 16, 1, true },
};

// SystemZ Dwarf<->LLVM register mappings.
extern const MCRegisterInfo::DwarfLLVMRegPair SystemZDwarfFlavour0Dwarf2L[] = {
  { 0U, SystemZ::R0D },
  { 1U, SystemZ::R1D },
  { 2U, SystemZ::R2D },
  { 3U, SystemZ::R3D },
  { 4U, SystemZ::R4D },
  { 5U, SystemZ::R5D },
  { 6U, SystemZ::R6D },
  { 7U, SystemZ::R7D },
  { 8U, SystemZ::R8D },
  { 9U, SystemZ::R9D },
  { 10U, SystemZ::R10D },
  { 11U, SystemZ::R11D },
  { 12U, SystemZ::R12D },
  { 13U, SystemZ::R13D },
  { 14U, SystemZ::R14D },
  { 15U, SystemZ::R15D },
  { 16U, SystemZ::F0D },
  { 17U, SystemZ::F2D },
  { 18U, SystemZ::F4D },
  { 19U, SystemZ::F6D },
  { 20U, SystemZ::F1D },
  { 21U, SystemZ::F3D },
  { 22U, SystemZ::F5D },
  { 23U, SystemZ::F7D },
  { 24U, SystemZ::F8D },
  { 25U, SystemZ::F10D },
  { 26U, SystemZ::F12D },
  { 27U, SystemZ::F14D },
  { 28U, SystemZ::F9D },
  { 29U, SystemZ::F11D },
  { 30U, SystemZ::F13D },
  { 31U, SystemZ::F15D },
  { 48U, SystemZ::A0 },
  { 49U, SystemZ::A1 },
  { 50U, SystemZ::A2 },
  { 51U, SystemZ::A3 },
  { 52U, SystemZ::A4 },
  { 53U, SystemZ::A5 },
  { 54U, SystemZ::A6 },
  { 55U, SystemZ::A7 },
  { 56U, SystemZ::A8 },
  { 57U, SystemZ::A9 },
  { 58U, SystemZ::A10 },
  { 59U, SystemZ::A11 },
  { 60U, SystemZ::A12 },
  { 61U, SystemZ::A13 },
  { 62U, SystemZ::A14 },
  { 63U, SystemZ::A15 },
  { 68U, SystemZ::F16D },
  { 69U, SystemZ::F18D },
  { 70U, SystemZ::F20D },
  { 71U, SystemZ::F22D },
  { 72U, SystemZ::F17D },
  { 73U, SystemZ::F19D },
  { 74U, SystemZ::F21D },
  { 75U, SystemZ::F23D },
  { 76U, SystemZ::F24D },
  { 77U, SystemZ::F26D },
  { 78U, SystemZ::F28D },
  { 79U, SystemZ::F30D },
  { 80U, SystemZ::F25D },
  { 81U, SystemZ::F27D },
  { 82U, SystemZ::F29D },
  { 83U, SystemZ::F31D },
};
extern const unsigned SystemZDwarfFlavour0Dwarf2LSize = array_lengthof(SystemZDwarfFlavour0Dwarf2L);

extern const MCRegisterInfo::DwarfLLVMRegPair SystemZEHFlavour0Dwarf2L[] = {
  { 0U, SystemZ::R0D },
  { 1U, SystemZ::R1D },
  { 2U, SystemZ::R2D },
  { 3U, SystemZ::R3D },
  { 4U, SystemZ::R4D },
  { 5U, SystemZ::R5D },
  { 6U, SystemZ::R6D },
  { 7U, SystemZ::R7D },
  { 8U, SystemZ::R8D },
  { 9U, SystemZ::R9D },
  { 10U, SystemZ::R10D },
  { 11U, SystemZ::R11D },
  { 12U, SystemZ::R12D },
  { 13U, SystemZ::R13D },
  { 14U, SystemZ::R14D },
  { 15U, SystemZ::R15D },
  { 16U, SystemZ::F0D },
  { 17U, SystemZ::F2D },
  { 18U, SystemZ::F4D },
  { 19U, SystemZ::F6D },
  { 20U, SystemZ::F1D },
  { 21U, SystemZ::F3D },
  { 22U, SystemZ::F5D },
  { 23U, SystemZ::F7D },
  { 24U, SystemZ::F8D },
  { 25U, SystemZ::F10D },
  { 26U, SystemZ::F12D },
  { 27U, SystemZ::F14D },
  { 28U, SystemZ::F9D },
  { 29U, SystemZ::F11D },
  { 30U, SystemZ::F13D },
  { 31U, SystemZ::F15D },
  { 48U, SystemZ::A0 },
  { 49U, SystemZ::A1 },
  { 50U, SystemZ::A2 },
  { 51U, SystemZ::A3 },
  { 52U, SystemZ::A4 },
  { 53U, SystemZ::A5 },
  { 54U, SystemZ::A6 },
  { 55U, SystemZ::A7 },
  { 56U, SystemZ::A8 },
  { 57U, SystemZ::A9 },
  { 58U, SystemZ::A10 },
  { 59U, SystemZ::A11 },
  { 60U, SystemZ::A12 },
  { 61U, SystemZ::A13 },
  { 62U, SystemZ::A14 },
  { 63U, SystemZ::A15 },
  { 68U, SystemZ::F16D },
  { 69U, SystemZ::F18D },
  { 70U, SystemZ::F20D },
  { 71U, SystemZ::F22D },
  { 72U, SystemZ::F17D },
  { 73U, SystemZ::F19D },
  { 74U, SystemZ::F21D },
  { 75U, SystemZ::F23D },
  { 76U, SystemZ::F24D },
  { 77U, SystemZ::F26D },
  { 78U, SystemZ::F28D },
  { 79U, SystemZ::F30D },
  { 80U, SystemZ::F25D },
  { 81U, SystemZ::F27D },
  { 82U, SystemZ::F29D },
  { 83U, SystemZ::F31D },
};
extern const unsigned SystemZEHFlavour0Dwarf2LSize = array_lengthof(SystemZEHFlavour0Dwarf2L);

extern const MCRegisterInfo::DwarfLLVMRegPair SystemZDwarfFlavour0L2Dwarf[] = {
  { SystemZ::A0, 48U },
  { SystemZ::A1, 49U },
  { SystemZ::A2, 50U },
  { SystemZ::A3, 51U },
  { SystemZ::A4, 52U },
  { SystemZ::A5, 53U },
  { SystemZ::A6, 54U },
  { SystemZ::A7, 55U },
  { SystemZ::A8, 56U },
  { SystemZ::A9, 57U },
  { SystemZ::A10, 58U },
  { SystemZ::A11, 59U },
  { SystemZ::A12, 60U },
  { SystemZ::A13, 61U },
  { SystemZ::A14, 62U },
  { SystemZ::A15, 63U },
  { SystemZ::V0, 16U },
  { SystemZ::V1, 20U },
  { SystemZ::V2, 17U },
  { SystemZ::V3, 21U },
  { SystemZ::V4, 18U },
  { SystemZ::V5, 22U },
  { SystemZ::V6, 19U },
  { SystemZ::V7, 23U },
  { SystemZ::V8, 24U },
  { SystemZ::V9, 28U },
  { SystemZ::V10, 25U },
  { SystemZ::V11, 29U },
  { SystemZ::V12, 26U },
  { SystemZ::V13, 30U },
  { SystemZ::V14, 27U },
  { SystemZ::V15, 31U },
  { SystemZ::V16, 68U },
  { SystemZ::V17, 72U },
  { SystemZ::V18, 69U },
  { SystemZ::V19, 73U },
  { SystemZ::V20, 70U },
  { SystemZ::V21, 74U },
  { SystemZ::V22, 71U },
  { SystemZ::V23, 75U },
  { SystemZ::V24, 76U },
  { SystemZ::V25, 80U },
  { SystemZ::V26, 77U },
  { SystemZ::V27, 81U },
  { SystemZ::V28, 78U },
  { SystemZ::V29, 82U },
  { SystemZ::V30, 79U },
  { SystemZ::V31, 83U },
  { SystemZ::F0D, 16U },
  { SystemZ::F1D, 20U },
  { SystemZ::F2D, 17U },
  { SystemZ::F3D, 21U },
  { SystemZ::F4D, 18U },
  { SystemZ::F5D, 22U },
  { SystemZ::F6D, 19U },
  { SystemZ::F7D, 23U },
  { SystemZ::F8D, 24U },
  { SystemZ::F9D, 28U },
  { SystemZ::F10D, 25U },
  { SystemZ::F11D, 29U },
  { SystemZ::F12D, 26U },
  { SystemZ::F13D, 30U },
  { SystemZ::F14D, 27U },
  { SystemZ::F15D, 31U },
  { SystemZ::F16D, 68U },
  { SystemZ::F17D, 72U },
  { SystemZ::F18D, 69U },
  { SystemZ::F19D, 73U },
  { SystemZ::F20D, 70U },
  { SystemZ::F21D, 74U },
  { SystemZ::F22D, 71U },
  { SystemZ::F23D, 75U },
  { SystemZ::F24D, 76U },
  { SystemZ::F25D, 80U },
  { SystemZ::F26D, 77U },
  { SystemZ::F27D, 81U },
  { SystemZ::F28D, 78U },
  { SystemZ::F29D, 82U },
  { SystemZ::F30D, 79U },
  { SystemZ::F31D, 83U },
  { SystemZ::R0D, 0U },
  { SystemZ::R1D, 1U },
  { SystemZ::R2D, 2U },
  { SystemZ::R3D, 3U },
  { SystemZ::R4D, 4U },
  { SystemZ::R5D, 5U },
  { SystemZ::R6D, 6U },
  { SystemZ::R7D, 7U },
  { SystemZ::R8D, 8U },
  { SystemZ::R9D, 9U },
  { SystemZ::R10D, 10U },
  { SystemZ::R11D, 11U },
  { SystemZ::R12D, 12U },
  { SystemZ::R13D, 13U },
  { SystemZ::R14D, 14U },
  { SystemZ::R15D, 15U },
};
extern const unsigned SystemZDwarfFlavour0L2DwarfSize = array_lengthof(SystemZDwarfFlavour0L2Dwarf);

extern const MCRegisterInfo::DwarfLLVMRegPair SystemZEHFlavour0L2Dwarf[] = {
  { SystemZ::A0, 48U },
  { SystemZ::A1, 49U },
  { SystemZ::A2, 50U },
  { SystemZ::A3, 51U },
  { SystemZ::A4, 52U },
  { SystemZ::A5, 53U },
  { SystemZ::A6, 54U },
  { SystemZ::A7, 55U },
  { SystemZ::A8, 56U },
  { SystemZ::A9, 57U },
  { SystemZ::A10, 58U },
  { SystemZ::A11, 59U },
  { SystemZ::A12, 60U },
  { SystemZ::A13, 61U },
  { SystemZ::A14, 62U },
  { SystemZ::A15, 63U },
  { SystemZ::V0, 16U },
  { SystemZ::V1, 20U },
  { SystemZ::V2, 17U },
  { SystemZ::V3, 21U },
  { SystemZ::V4, 18U },
  { SystemZ::V5, 22U },
  { SystemZ::V6, 19U },
  { SystemZ::V7, 23U },
  { SystemZ::V8, 24U },
  { SystemZ::V9, 28U },
  { SystemZ::V10, 25U },
  { SystemZ::V11, 29U },
  { SystemZ::V12, 26U },
  { SystemZ::V13, 30U },
  { SystemZ::V14, 27U },
  { SystemZ::V15, 31U },
  { SystemZ::V16, 68U },
  { SystemZ::V17, 72U },
  { SystemZ::V18, 69U },
  { SystemZ::V19, 73U },
  { SystemZ::V20, 70U },
  { SystemZ::V21, 74U },
  { SystemZ::V22, 71U },
  { SystemZ::V23, 75U },
  { SystemZ::V24, 76U },
  { SystemZ::V25, 80U },
  { SystemZ::V26, 77U },
  { SystemZ::V27, 81U },
  { SystemZ::V28, 78U },
  { SystemZ::V29, 82U },
  { SystemZ::V30, 79U },
  { SystemZ::V31, 83U },
  { SystemZ::F0D, 16U },
  { SystemZ::F1D, 20U },
  { SystemZ::F2D, 17U },
  { SystemZ::F3D, 21U },
  { SystemZ::F4D, 18U },
  { SystemZ::F5D, 22U },
  { SystemZ::F6D, 19U },
  { SystemZ::F7D, 23U },
  { SystemZ::F8D, 24U },
  { SystemZ::F9D, 28U },
  { SystemZ::F10D, 25U },
  { SystemZ::F11D, 29U },
  { SystemZ::F12D, 26U },
  { SystemZ::F13D, 30U },
  { SystemZ::F14D, 27U },
  { SystemZ::F15D, 31U },
  { SystemZ::F16D, 68U },
  { SystemZ::F17D, 72U },
  { SystemZ::F18D, 69U },
  { SystemZ::F19D, 73U },
  { SystemZ::F20D, 70U },
  { SystemZ::F21D, 74U },
  { SystemZ::F22D, 71U },
  { SystemZ::F23D, 75U },
  { SystemZ::F24D, 76U },
  { SystemZ::F25D, 80U },
  { SystemZ::F26D, 77U },
  { SystemZ::F27D, 81U },
  { SystemZ::F28D, 78U },
  { SystemZ::F29D, 82U },
  { SystemZ::F30D, 79U },
  { SystemZ::F31D, 83U },
  { SystemZ::R0D, 0U },
  { SystemZ::R1D, 1U },
  { SystemZ::R2D, 2U },
  { SystemZ::R3D, 3U },
  { SystemZ::R4D, 4U },
  { SystemZ::R5D, 5U },
  { SystemZ::R6D, 6U },
  { SystemZ::R7D, 7U },
  { SystemZ::R8D, 8U },
  { SystemZ::R9D, 9U },
  { SystemZ::R10D, 10U },
  { SystemZ::R11D, 11U },
  { SystemZ::R12D, 12U },
  { SystemZ::R13D, 13U },
  { SystemZ::R14D, 14U },
  { SystemZ::R15D, 15U },
};
extern const unsigned SystemZEHFlavour0L2DwarfSize = array_lengthof(SystemZEHFlavour0L2Dwarf);

extern const uint16_t SystemZRegEncodingTable[] = {
  0,
  0,
  0,
  1,
  2,
  3,
  4,
  5,
  6,
  7,
  8,
  9,
  10,
  11,
  12,
  13,
  14,
  15,
  0,
  1,
  2,
  3,
  4,
  5,
  6,
  7,
  8,
  9,
  10,
  11,
  12,
  13,
  14,
  15,
  16,
  17,
  18,
  19,
  20,
  21,
  22,
  23,
  24,
  25,
  26,
  27,
  28,
  29,
  30,
  31,
  0,
  1,
  2,
  3,
  4,
  5,
  6,
  7,
  8,
  9,
  10,
  11,
  12,
  13,
  14,
  15,
  16,
  17,
  18,
  19,
  20,
  21,
  22,
  23,
  24,
  25,
  26,
  27,
  28,
  29,
  30,
  31,
  0,
  1,
  4,
  5,
  8,
  9,
  12,
  13,
  0,
  1,
  2,
  3,
  4,
  5,
  6,
  7,
  8,
  9,
  10,
  11,
  12,
  13,
  14,
  15,
  16,
  17,
  18,
  19,
  20,
  21,
  22,
  23,
  24,
  25,
  26,
  27,
  28,
  29,
  30,
  31,
  0,
  1,
  2,
  3,
  4,
  5,
  6,
  7,
  8,
  9,
  10,
  11,
  12,
  13,
  14,
  15,
  0,
  1,
  2,
  3,
  4,
  5,
  6,
  7,
  8,
  9,
  10,
  11,
  12,
  13,
  14,
  15,
  0,
  1,
  2,
  3,
  4,
  5,
  6,
  7,
  8,
  9,
  10,
  11,
  12,
  13,
  14,
  15,
  0,
  2,
  4,
  6,
  8,
  10,
  12,
  14,
};
static inline void InitSystemZMCRegisterInfo(MCRegisterInfo *RI, unsigned RA, unsigned DwarfFlavour = 0, unsigned EHFlavour = 0, unsigned PC = 0) {
  RI->InitMCRegisterInfo(SystemZRegDesc, 178, RA, PC, SystemZMCRegisterClasses, 20, SystemZRegUnitRoots, 81, SystemZRegDiffLists, SystemZLaneMaskLists, SystemZRegStrings, SystemZRegClassStrings, SystemZSubRegIdxLists, 10,
SystemZSubRegIdxRanges, SystemZRegEncodingTable);

  switch (DwarfFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    RI->mapDwarfRegsToLLVMRegs(SystemZDwarfFlavour0Dwarf2L, SystemZDwarfFlavour0Dwarf2LSize, false);
    break;
  }
  switch (EHFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    RI->mapDwarfRegsToLLVMRegs(SystemZEHFlavour0Dwarf2L, SystemZEHFlavour0Dwarf2LSize, true);
    break;
  }
  switch (DwarfFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    RI->mapLLVMRegsToDwarfRegs(SystemZDwarfFlavour0L2Dwarf, SystemZDwarfFlavour0L2DwarfSize, false);
    break;
  }
  switch (EHFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    RI->mapLLVMRegsToDwarfRegs(SystemZEHFlavour0L2Dwarf, SystemZEHFlavour0L2DwarfSize, true);
    break;
  }
}

} // end namespace llvm

#endif // GET_REGINFO_MC_DESC

/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Register Information Header Fragment                                       *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/


#ifdef GET_REGINFO_HEADER
#undef GET_REGINFO_HEADER

#include "llvm/Target/TargetRegisterInfo.h"

namespace llvm {

class SystemZFrameLowering;

struct SystemZGenRegisterInfo : public TargetRegisterInfo {
  explicit SystemZGenRegisterInfo(unsigned RA, unsigned D = 0, unsigned E = 0, unsigned PC = 0);
  unsigned composeSubRegIndicesImpl(unsigned, unsigned) const override;
  LaneBitmask composeSubRegIndexLaneMaskImpl(unsigned, LaneBitmask) const override;
  LaneBitmask reverseComposeSubRegIndexLaneMaskImpl(unsigned, LaneBitmask) const override;
  const TargetRegisterClass *getSubClassWithSubReg(const TargetRegisterClass*, unsigned) const override;
  const RegClassWeight &getRegClassWeight(const TargetRegisterClass *RC) const override;
  unsigned getRegUnitWeight(unsigned RegUnit) const override;
  unsigned getNumRegPressureSets() const override;
  const char *getRegPressureSetName(unsigned Idx) const override;
  unsigned getRegPressureSetLimit(const MachineFunction &MF, unsigned Idx) const override;
  const int *getRegClassPressureSets(const TargetRegisterClass *RC) const override;
  const int *getRegUnitPressureSets(unsigned RegUnit) const override;
  ArrayRef<const char *> getRegMaskNames() const override;
  ArrayRef<const uint32_t *> getRegMasks() const override;
  /// Devirtualized TargetFrameLowering.
  static const SystemZFrameLowering *getFrameLowering(
      const MachineFunction &MF);
};

namespace SystemZ { // Register classes
  extern const TargetRegisterClass GRX32BitRegClass;
  extern const TargetRegisterClass VR32BitRegClass;
  extern const TargetRegisterClass AR32BitRegClass;
  extern const TargetRegisterClass FP32BitRegClass;
  extern const TargetRegisterClass GR32BitRegClass;
  extern const TargetRegisterClass GRH32BitRegClass;
  extern const TargetRegisterClass ADDR32BitRegClass;
  extern const TargetRegisterClass CCRegsRegClass;
  extern const TargetRegisterClass AnyRegBitRegClass;
  extern const TargetRegisterClass AnyRegBit_with_subreg_r32RegClass;
  extern const TargetRegisterClass VR64BitRegClass;
  extern const TargetRegisterClass AnyRegBit_with_subreg_r64RegClass;
  extern const TargetRegisterClass FP64BitRegClass;
  extern const TargetRegisterClass GR64BitRegClass;
  extern const TargetRegisterClass ADDR64BitRegClass;
  extern const TargetRegisterClass VR128BitRegClass;
  extern const TargetRegisterClass VF128BitRegClass;
  extern const TargetRegisterClass FP128BitRegClass;
  extern const TargetRegisterClass GR128BitRegClass;
  extern const TargetRegisterClass ADDR128BitRegClass;
} // end namespace SystemZ

} // end namespace llvm

#endif // GET_REGINFO_HEADER

/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Target Register and Register Classes Information                           *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/


#ifdef GET_REGINFO_TARGET_DESC
#undef GET_REGINFO_TARGET_DESC

namespace llvm {

extern const MCRegisterClass SystemZMCRegisterClasses[];

static const MVT::SimpleValueType VTLists[] = {
  /* 0 */ MVT::i32, MVT::Other,
  /* 2 */ MVT::i64, MVT::Other,
  /* 4 */ MVT::f32, MVT::Other,
  /* 6 */ MVT::f64, MVT::Other,
  /* 8 */ MVT::f128, MVT::Other,
  /* 10 */ MVT::f32, MVT::v4i8, MVT::v2i16, MVT::Other,
  /* 14 */ MVT::i64, MVT::f64, MVT::v8i8, MVT::v4i16, MVT::v2i32, MVT::v2f32, MVT::Other,
  /* 21 */ MVT::v16i8, MVT::v8i16, MVT::v4i32, MVT::v2i64, MVT::v4f32, MVT::v2f64, MVT::Other,
  /* 28 */ MVT::Untyped, MVT::Other,
};

static const char *const SubRegIndexNameTable[] = { "subreg_h32", "subreg_h64", "subreg_hh32", "subreg_hl32", "subreg_hr32", "subreg_l32", "subreg_l64", "subreg_r32", "subreg_r64", "" };


static const LaneBitmask SubRegIndexLaneMaskTable[] = {
  LaneBitmask::getAll(),
  LaneBitmask(0x00000001), // subreg_h32
  LaneBitmask(0x0000000E), // subreg_h64
  LaneBitmask(0x00000002), // subreg_hh32
  LaneBitmask(0x00000004), // subreg_hl32
  LaneBitmask(0x00000008), // subreg_hr32
  LaneBitmask(0x00000010), // subreg_l32
  LaneBitmask(0x00000031), // subreg_l64
  LaneBitmask(0x00000020), // subreg_r32
  LaneBitmask(0x00000020), // subreg_r64
 };



static const TargetRegisterClass *const NullRegClasses[] = { nullptr };

static const uint32_t GRX32BitSubClassMask[] = {
  0x00000071, 
  0x000c6000, // subreg_h32
  0x000c0000, // subreg_hh32
  0x000c0000, // subreg_hl32
  0x000c6000, // subreg_l32
};

static const uint32_t VR32BitSubClassMask[] = {
  0x0000000a, 
  0x00020000, // subreg_hr32
  0x00039e00, // subreg_r32
};

static const uint32_t AR32BitSubClassMask[] = {
  0x00000004, 
};

static const uint32_t FP32BitSubClassMask[] = {
  0x00000008, 
  0x00020000, // subreg_hr32
  0x00031a00, // subreg_r32
};

static const uint32_t GR32BitSubClassMask[] = {
  0x00000050, 
  0x000c0000, // subreg_hl32
  0x000c6000, // subreg_l32
};

static const uint32_t GRH32BitSubClassMask[] = {
  0x00000020, 
  0x000c6000, // subreg_h32
  0x000c0000, // subreg_hh32
};

static const uint32_t ADDR32BitSubClassMask[] = {
  0x00000040, 
  0x00080000, // subreg_hl32
  0x000c4000, // subreg_l32
};

static const uint32_t CCRegsSubClassMask[] = {
  0x00000080, 
};

static const uint32_t AnyRegBitSubClassMask[] = {
  0x00017b00, 
  0x000e0000, // subreg_h64
  0x000e0000, // subreg_l64
  0x00010800, // subreg_r64
};

static const uint32_t AnyRegBit_with_subreg_r32SubClassMask[] = {
  0x00011a00, 
  0x00020000, // subreg_h64
  0x00020000, // subreg_l64
  0x00010800, // subreg_r64
};

static const uint32_t VR64BitSubClassMask[] = {
  0x00001400, 
  0x00020000, // subreg_h64
  0x00020000, // subreg_l64
  0x00018800, // subreg_r64
};

static const uint32_t AnyRegBit_with_subreg_r64SubClassMask[] = {
  0x00010800, 
};

static const uint32_t FP64BitSubClassMask[] = {
  0x00001000, 
  0x00020000, // subreg_h64
  0x00020000, // subreg_l64
  0x00010800, // subreg_r64
};

static const uint32_t GR64BitSubClassMask[] = {
  0x00006000, 
  0x000c0000, // subreg_h64
  0x000c0000, // subreg_l64
};

static const uint32_t ADDR64BitSubClassMask[] = {
  0x00004000, 
  0x00080000, // subreg_h64
  0x000c0000, // subreg_l64
};

static const uint32_t VR128BitSubClassMask[] = {
  0x00018000, 
};

static const uint32_t VF128BitSubClassMask[] = {
  0x00010000, 
};

static const uint32_t FP128BitSubClassMask[] = {
  0x00020000, 
};

static const uint32_t GR128BitSubClassMask[] = {
  0x000c0000, 
};

static const uint32_t ADDR128BitSubClassMask[] = {
  0x00080000, 
};

static const uint16_t SuperRegIdxSeqs[] = {
  /* 0 */ 1, 3, 0,
  /* 3 */ 1, 3, 4, 6, 0,
  /* 8 */ 2, 7, 0,
  /* 11 */ 5, 8, 0,
  /* 14 */ 2, 7, 9, 0,
};

static const TargetRegisterClass *const FP32BitSuperclasses[] = {
  &SystemZ::VR32BitRegClass,
  nullptr
};

static const TargetRegisterClass *const GR32BitSuperclasses[] = {
  &SystemZ::GRX32BitRegClass,
  nullptr
};

static const TargetRegisterClass *const GRH32BitSuperclasses[] = {
  &SystemZ::GRX32BitRegClass,
  nullptr
};

static const TargetRegisterClass *const ADDR32BitSuperclasses[] = {
  &SystemZ::GRX32BitRegClass,
  &SystemZ::GR32BitRegClass,
  nullptr
};

static const TargetRegisterClass *const AnyRegBit_with_subreg_r32Superclasses[] = {
  &SystemZ::AnyRegBitRegClass,
  nullptr
};

static const TargetRegisterClass *const AnyRegBit_with_subreg_r64Superclasses[] = {
  &SystemZ::AnyRegBitRegClass,
  &SystemZ::AnyRegBit_with_subreg_r32RegClass,
  nullptr
};

static const TargetRegisterClass *const FP64BitSuperclasses[] = {
  &SystemZ::AnyRegBitRegClass,
  &SystemZ::AnyRegBit_with_subreg_r32RegClass,
  &SystemZ::VR64BitRegClass,
  nullptr
};

static const TargetRegisterClass *const GR64BitSuperclasses[] = {
  &SystemZ::AnyRegBitRegClass,
  nullptr
};

static const TargetRegisterClass *const ADDR64BitSuperclasses[] = {
  &SystemZ::AnyRegBitRegClass,
  &SystemZ::GR64BitRegClass,
  nullptr
};

static const TargetRegisterClass *const VF128BitSuperclasses[] = {
  &SystemZ::AnyRegBitRegClass,
  &SystemZ::AnyRegBit_with_subreg_r32RegClass,
  &SystemZ::AnyRegBit_with_subreg_r64RegClass,
  &SystemZ::VR128BitRegClass,
  nullptr
};

static const TargetRegisterClass *const ADDR128BitSuperclasses[] = {
  &SystemZ::GR128BitRegClass,
  nullptr
};


namespace SystemZ {   // Register class instances
  extern const TargetRegisterClass GRX32BitRegClass = {
    &SystemZMCRegisterClasses[GRX32BitRegClassID],
    VTLists + 0,
    GRX32BitSubClassMask,
    SuperRegIdxSeqs + 3,
    LaneBitmask(0x00000001),
    0,
    false, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    NullRegClasses,
    nullptr
  };

  extern const TargetRegisterClass VR32BitRegClass = {
    &SystemZMCRegisterClasses[VR32BitRegClassID],
    VTLists + 10,
    VR32BitSubClassMask,
    SuperRegIdxSeqs + 11,
    LaneBitmask(0x00000001),
    0,
    false, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    NullRegClasses,
    nullptr
  };

  extern const TargetRegisterClass AR32BitRegClass = {
    &SystemZMCRegisterClasses[AR32BitRegClassID],
    VTLists + 0,
    AR32BitSubClassMask,
    SuperRegIdxSeqs + 2,
    LaneBitmask(0x00000001),
    0,
    false, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    NullRegClasses,
    nullptr
  };

  extern const TargetRegisterClass FP32BitRegClass = {
    &SystemZMCRegisterClasses[FP32BitRegClassID],
    VTLists + 4,
    FP32BitSubClassMask,
    SuperRegIdxSeqs + 11,
    LaneBitmask(0x00000001),
    0,
    false, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    FP32BitSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass GR32BitRegClass = {
    &SystemZMCRegisterClasses[GR32BitRegClassID],
    VTLists + 0,
    GR32BitSubClassMask,
    SuperRegIdxSeqs + 5,
    LaneBitmask(0x00000001),
    0,
    false, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    GR32BitSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass GRH32BitRegClass = {
    &SystemZMCRegisterClasses[GRH32BitRegClassID],
    VTLists + 0,
    GRH32BitSubClassMask,
    SuperRegIdxSeqs + 0,
    LaneBitmask(0x00000001),
    0,
    false, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    GRH32BitSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass ADDR32BitRegClass = {
    &SystemZMCRegisterClasses[ADDR32BitRegClassID],
    VTLists + 0,
    ADDR32BitSubClassMask,
    SuperRegIdxSeqs + 5,
    LaneBitmask(0x00000001),
    0,
    false, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    ADDR32BitSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass CCRegsRegClass = {
    &SystemZMCRegisterClasses[CCRegsRegClassID],
    VTLists + 0,
    CCRegsSubClassMask,
    SuperRegIdxSeqs + 2,
    LaneBitmask(0x00000001),
    0,
    false, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    NullRegClasses,
    nullptr
  };

  extern const TargetRegisterClass AnyRegBitRegClass = {
    &SystemZMCRegisterClasses[AnyRegBitRegClassID],
    VTLists + 14,
    AnyRegBitSubClassMask,
    SuperRegIdxSeqs + 14,
    LaneBitmask(0x00000031),
    0,
    true, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    NullRegClasses,
    nullptr
  };

  extern const TargetRegisterClass AnyRegBit_with_subreg_r32RegClass = {
    &SystemZMCRegisterClasses[AnyRegBit_with_subreg_r32RegClassID],
    VTLists + 14,
    AnyRegBit_with_subreg_r32SubClassMask,
    SuperRegIdxSeqs + 14,
    LaneBitmask(0x00000020),
    0,
    false, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    AnyRegBit_with_subreg_r32Superclasses,
    nullptr
  };

  extern const TargetRegisterClass VR64BitRegClass = {
    &SystemZMCRegisterClasses[VR64BitRegClassID],
    VTLists + 15,
    VR64BitSubClassMask,
    SuperRegIdxSeqs + 14,
    LaneBitmask(0x00000020),
    0,
    false, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    NullRegClasses,
    nullptr
  };

  extern const TargetRegisterClass AnyRegBit_with_subreg_r64RegClass = {
    &SystemZMCRegisterClasses[AnyRegBit_with_subreg_r64RegClassID],
    VTLists + 14,
    AnyRegBit_with_subreg_r64SubClassMask,
    SuperRegIdxSeqs + 2,
    LaneBitmask(0x00000020),
    0,
    false, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    AnyRegBit_with_subreg_r64Superclasses,
    nullptr
  };

  extern const TargetRegisterClass FP64BitRegClass = {
    &SystemZMCRegisterClasses[FP64BitRegClassID],
    VTLists + 6,
    FP64BitSubClassMask,
    SuperRegIdxSeqs + 14,
    LaneBitmask(0x00000020),
    0,
    false, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    FP64BitSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass GR64BitRegClass = {
    &SystemZMCRegisterClasses[GR64BitRegClassID],
    VTLists + 2,
    GR64BitSubClassMask,
    SuperRegIdxSeqs + 8,
    LaneBitmask(0x00000011),
    0,
    true, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    GR64BitSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass ADDR64BitRegClass = {
    &SystemZMCRegisterClasses[ADDR64BitRegClassID],
    VTLists + 2,
    ADDR64BitSubClassMask,
    SuperRegIdxSeqs + 8,
    LaneBitmask(0x00000011),
    0,
    true, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    ADDR64BitSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass VR128BitRegClass = {
    &SystemZMCRegisterClasses[VR128BitRegClassID],
    VTLists + 21,
    VR128BitSubClassMask,
    SuperRegIdxSeqs + 2,
    LaneBitmask(0x00000020),
    0,
    false, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    NullRegClasses,
    nullptr
  };

  extern const TargetRegisterClass VF128BitRegClass = {
    &SystemZMCRegisterClasses[VF128BitRegClassID],
    VTLists + 21,
    VF128BitSubClassMask,
    SuperRegIdxSeqs + 2,
    LaneBitmask(0x00000020),
    0,
    false, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    VF128BitSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass FP128BitRegClass = {
    &SystemZMCRegisterClasses[FP128BitRegClassID],
    VTLists + 8,
    FP128BitSubClassMask,
    SuperRegIdxSeqs + 2,
    LaneBitmask(0x0000003F),
    0,
    true, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    NullRegClasses,
    nullptr
  };

  extern const TargetRegisterClass GR128BitRegClass = {
    &SystemZMCRegisterClasses[GR128BitRegClassID],
    VTLists + 28,
    GR128BitSubClassMask,
    SuperRegIdxSeqs + 2,
    LaneBitmask(0x0000003F),
    0,
    true, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    NullRegClasses,
    nullptr
  };

  extern const TargetRegisterClass ADDR128BitRegClass = {
    &SystemZMCRegisterClasses[ADDR128BitRegClassID],
    VTLists + 28,
    ADDR128BitSubClassMask,
    SuperRegIdxSeqs + 2,
    LaneBitmask(0x0000003F),
    0,
    true, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    ADDR128BitSuperclasses,
    nullptr
  };

} // end namespace SystemZ

namespace {
  const TargetRegisterClass* const RegisterClasses[] = {
    &SystemZ::GRX32BitRegClass,
    &SystemZ::VR32BitRegClass,
    &SystemZ::AR32BitRegClass,
    &SystemZ::FP32BitRegClass,
    &SystemZ::GR32BitRegClass,
    &SystemZ::GRH32BitRegClass,
    &SystemZ::ADDR32BitRegClass,
    &SystemZ::CCRegsRegClass,
    &SystemZ::AnyRegBitRegClass,
    &SystemZ::AnyRegBit_with_subreg_r32RegClass,
    &SystemZ::VR64BitRegClass,
    &SystemZ::AnyRegBit_with_subreg_r64RegClass,
    &SystemZ::FP64BitRegClass,
    &SystemZ::GR64BitRegClass,
    &SystemZ::ADDR64BitRegClass,
    &SystemZ::VR128BitRegClass,
    &SystemZ::VF128BitRegClass,
    &SystemZ::FP128BitRegClass,
    &SystemZ::GR128BitRegClass,
    &SystemZ::ADDR128BitRegClass,
  };
} // end anonymous namespace

static const TargetRegisterInfoDesc SystemZRegInfoDesc[] = { // Extra Descriptors
  { 0, false },
  { 0, false },
  { 0, false },
  { 0, false },
  { 0, false },
  { 0, false },
  { 0, false },
  { 0, false },
  { 0, false },
  { 0, false },
  { 0, false },
  { 0, false },
  { 0, false },
  { 0, false },
  { 0, false },
  { 0, false },
  { 0, false },
  { 0, false },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
};
unsigned SystemZGenRegisterInfo::composeSubRegIndicesImpl(unsigned IdxA, unsigned IdxB) const {
  static const uint8_t RowMap[9] = {
    0, 0, 0, 0, 0, 0, 1, 0, 1, 
  };
  static const uint8_t Rows[2][9] = {
    { 3, 0, 0, 0, 0, 4, 0, 5, 0, },
    { 1, 0, 0, 0, 0, 6, 0, 8, 0, },
  };

  --IdxA; assert(IdxA < 9);
  --IdxB; assert(IdxB < 9);
  return Rows[RowMap[IdxA]][IdxB];
}

  struct MaskRolOp {
    LaneBitmask Mask;
    uint8_t  RotateLeft;
  };
  static const MaskRolOp LaneMaskComposeSequences[] = {
    { LaneBitmask(0xFFFFFFFF),  0 }, { LaneBitmask::getNone(), 0 },   // Sequence 0
    { LaneBitmask(0x00000001),  1 }, { LaneBitmask(0x00000030), 30 }, { LaneBitmask::getNone(), 0 },   // Sequence 2
    { LaneBitmask(0xFFFFFFFF),  1 }, { LaneBitmask::getNone(), 0 },   // Sequence 5
    { LaneBitmask(0xFFFFFFFF),  2 }, { LaneBitmask::getNone(), 0 },   // Sequence 7
    { LaneBitmask(0xFFFFFFFF),  3 }, { LaneBitmask::getNone(), 0 },   // Sequence 9
    { LaneBitmask(0xFFFFFFFF),  4 }, { LaneBitmask::getNone(), 0 },   // Sequence 11
    { LaneBitmask(0xFFFFFFFF),  5 }, { LaneBitmask::getNone(), 0 }  // Sequence 13
  };
  static const MaskRolOp *const CompositeSequences[] = {
    &LaneMaskComposeSequences[0], // to subreg_h32
    &LaneMaskComposeSequences[2], // to subreg_h64
    &LaneMaskComposeSequences[5], // to subreg_hh32
    &LaneMaskComposeSequences[7], // to subreg_hl32
    &LaneMaskComposeSequences[9], // to subreg_hr32
    &LaneMaskComposeSequences[11], // to subreg_l32
    &LaneMaskComposeSequences[0], // to subreg_l64
    &LaneMaskComposeSequences[13], // to subreg_r32
    &LaneMaskComposeSequences[0] // to subreg_r64
  };

LaneBitmask SystemZGenRegisterInfo::composeSubRegIndexLaneMaskImpl(unsigned IdxA, LaneBitmask LaneMask) const {
  --IdxA; assert(IdxA < 9 && "Subregister index out of bounds");
  LaneBitmask Result;
  for (const MaskRolOp *Ops = CompositeSequences[IdxA]; !Ops->Mask.none(); ++Ops) {
    LaneBitmask::Type M = LaneMask.getAsInteger() & Ops->Mask.getAsInteger();
    if (unsigned S = Ops->RotateLeft)
      Result |= LaneBitmask((M << S) | (M >> (LaneBitmask::BitWidth - S)));
    else
      Result |= LaneBitmask(M);
  }
  return Result;
}

LaneBitmask SystemZGenRegisterInfo::reverseComposeSubRegIndexLaneMaskImpl(unsigned IdxA,  LaneBitmask LaneMask) const {
  LaneMask &= getSubRegIndexLaneMask(IdxA);
  --IdxA; assert(IdxA < 9 && "Subregister index out of bounds");
  LaneBitmask Result;
  for (const MaskRolOp *Ops = CompositeSequences[IdxA]; !Ops->Mask.none(); ++Ops) {
    LaneBitmask::Type M = LaneMask.getAsInteger();
    if (unsigned S = Ops->RotateLeft)
      Result |= LaneBitmask((M >> S) | (M << (LaneBitmask::BitWidth - S)));
    else
      Result |= LaneBitmask(M);
  }
  return Result;
}

const TargetRegisterClass *SystemZGenRegisterInfo::getSubClassWithSubReg(const TargetRegisterClass *RC, unsigned Idx) const {
  static const uint8_t Table[20][9] = {
    {	// GRX32Bit
      0,	// subreg_h32
      0,	// subreg_h64
      0,	// subreg_hh32
      0,	// subreg_hl32
      0,	// subreg_hr32
      0,	// subreg_l32
      0,	// subreg_l64
      0,	// subreg_r32
      0,	// subreg_r64
    },
    {	// VR32Bit
      0,	// subreg_h32
      0,	// subreg_h64
      0,	// subreg_hh32
      0,	// subreg_hl32
      0,	// subreg_hr32
      0,	// subreg_l32
      0,	// subreg_l64
      0,	// subreg_r32
      0,	// subreg_r64
    },
    {	// AR32Bit
      0,	// subreg_h32
      0,	// subreg_h64
      0,	// subreg_hh32
      0,	// subreg_hl32
      0,	// subreg_hr32
      0,	// subreg_l32
      0,	// subreg_l64
      0,	// subreg_r32
      0,	// subreg_r64
    },
    {	// FP32Bit
      0,	// subreg_h32
      0,	// subreg_h64
      0,	// subreg_hh32
      0,	// subreg_hl32
      0,	// subreg_hr32
      0,	// subreg_l32
      0,	// subreg_l64
      0,	// subreg_r32
      0,	// subreg_r64
    },
    {	// GR32Bit
      0,	// subreg_h32
      0,	// subreg_h64
      0,	// subreg_hh32
      0,	// subreg_hl32
      0,	// subreg_hr32
      0,	// subreg_l32
      0,	// subreg_l64
      0,	// subreg_r32
      0,	// subreg_r64
    },
    {	// GRH32Bit
      0,	// subreg_h32
      0,	// subreg_h64
      0,	// subreg_hh32
      0,	// subreg_hl32
      0,	// subreg_hr32
      0,	// subreg_l32
      0,	// subreg_l64
      0,	// subreg_r32
      0,	// subreg_r64
    },
    {	// ADDR32Bit
      0,	// subreg_h32
      0,	// subreg_h64
      0,	// subreg_hh32
      0,	// subreg_hl32
      0,	// subreg_hr32
      0,	// subreg_l32
      0,	// subreg_l64
      0,	// subreg_r32
      0,	// subreg_r64
    },
    {	// CCRegs
      0,	// subreg_h32
      0,	// subreg_h64
      0,	// subreg_hh32
      0,	// subreg_hl32
      0,	// subreg_hr32
      0,	// subreg_l32
      0,	// subreg_l64
      0,	// subreg_r32
      0,	// subreg_r64
    },
    {	// AnyRegBit
      14,	// subreg_h32 -> GR64Bit
      0,	// subreg_h64
      0,	// subreg_hh32
      0,	// subreg_hl32
      0,	// subreg_hr32
      14,	// subreg_l32 -> GR64Bit
      0,	// subreg_l64
      10,	// subreg_r32 -> AnyRegBit_with_subreg_r32
      12,	// subreg_r64 -> AnyRegBit_with_subreg_r64
    },
    {	// AnyRegBit_with_subreg_r32
      0,	// subreg_h32
      0,	// subreg_h64
      0,	// subreg_hh32
      0,	// subreg_hl32
      0,	// subreg_hr32
      0,	// subreg_l32
      0,	// subreg_l64
      10,	// subreg_r32 -> AnyRegBit_with_subreg_r32
      12,	// subreg_r64 -> AnyRegBit_with_subreg_r64
    },
    {	// VR64Bit
      0,	// subreg_h32
      0,	// subreg_h64
      0,	// subreg_hh32
      0,	// subreg_hl32
      0,	// subreg_hr32
      0,	// subreg_l32
      0,	// subreg_l64
      11,	// subreg_r32 -> VR64Bit
      0,	// subreg_r64
    },
    {	// AnyRegBit_with_subreg_r64
      0,	// subreg_h32
      0,	// subreg_h64
      0,	// subreg_hh32
      0,	// subreg_hl32
      0,	// subreg_hr32
      0,	// subreg_l32
      0,	// subreg_l64
      12,	// subreg_r32 -> AnyRegBit_with_subreg_r64
      12,	// subreg_r64 -> AnyRegBit_with_subreg_r64
    },
    {	// FP64Bit
      0,	// subreg_h32
      0,	// subreg_h64
      0,	// subreg_hh32
      0,	// subreg_hl32
      0,	// subreg_hr32
      0,	// subreg_l32
      0,	// subreg_l64
      13,	// subreg_r32 -> FP64Bit
      0,	// subreg_r64
    },
    {	// GR64Bit
      14,	// subreg_h32 -> GR64Bit
      0,	// subreg_h64
      0,	// subreg_hh32
      0,	// subreg_hl32
      0,	// subreg_hr32
      14,	// subreg_l32 -> GR64Bit
      0,	// subreg_l64
      0,	// subreg_r32
      0,	// subreg_r64
    },
    {	// ADDR64Bit
      15,	// subreg_h32 -> ADDR64Bit
      0,	// subreg_h64
      0,	// subreg_hh32
      0,	// subreg_hl32
      0,	// subreg_hr32
      15,	// subreg_l32 -> ADDR64Bit
      0,	// subreg_l64
      0,	// subreg_r32
      0,	// subreg_r64
    },
    {	// VR128Bit
      0,	// subreg_h32
      0,	// subreg_h64
      0,	// subreg_hh32
      0,	// subreg_hl32
      0,	// subreg_hr32
      0,	// subreg_l32
      0,	// subreg_l64
      16,	// subreg_r32 -> VR128Bit
      16,	// subreg_r64 -> VR128Bit
    },
    {	// VF128Bit
      0,	// subreg_h32
      0,	// subreg_h64
      0,	// subreg_hh32
      0,	// subreg_hl32
      0,	// subreg_hr32
      0,	// subreg_l32
      0,	// subreg_l64
      17,	// subreg_r32 -> VF128Bit
      17,	// subreg_r64 -> VF128Bit
    },
    {	// FP128Bit
      0,	// subreg_h32
      18,	// subreg_h64 -> FP128Bit
      0,	// subreg_hh32
      0,	// subreg_hl32
      18,	// subreg_hr32 -> FP128Bit
      0,	// subreg_l32
      18,	// subreg_l64 -> FP128Bit
      18,	// subreg_r32 -> FP128Bit
      0,	// subreg_r64
    },
    {	// GR128Bit
      19,	// subreg_h32 -> GR128Bit
      19,	// subreg_h64 -> GR128Bit
      19,	// subreg_hh32 -> GR128Bit
      19,	// subreg_hl32 -> GR128Bit
      0,	// subreg_hr32
      19,	// subreg_l32 -> GR128Bit
      19,	// subreg_l64 -> GR128Bit
      0,	// subreg_r32
      0,	// subreg_r64
    },
    {	// ADDR128Bit
      20,	// subreg_h32 -> ADDR128Bit
      20,	// subreg_h64 -> ADDR128Bit
      20,	// subreg_hh32 -> ADDR128Bit
      20,	// subreg_hl32 -> ADDR128Bit
      0,	// subreg_hr32
      20,	// subreg_l32 -> ADDR128Bit
      20,	// subreg_l64 -> ADDR128Bit
      0,	// subreg_r32
      0,	// subreg_r64
    },
  };
  assert(RC && "Missing regclass");
  if (!Idx) return RC;
  --Idx;
  assert(Idx < 9 && "Bad subreg");
  unsigned TV = Table[RC->getID()][Idx];
  return TV ? getRegClass(TV - 1) : nullptr;
}

/// Get the weight in units of pressure for this register class.
const RegClassWeight &SystemZGenRegisterInfo::
getRegClassWeight(const TargetRegisterClass *RC) const {
  static const RegClassWeight RCWeightTable[] = {
    {1, 32},  	// GRX32Bit
    {1, 32},  	// VR32Bit
    {0, 0},  	// AR32Bit
    {1, 16},  	// FP32Bit
    {1, 16},  	// GR32Bit
    {1, 16},  	// GRH32Bit
    {1, 15},  	// ADDR32Bit
    {0, 0},  	// CCRegs
    {2, 64},  	// AnyRegBit
    {2, 32},  	// AnyRegBit_with_subreg_r32
    {2, 64},  	// VR64Bit
    {2, 32},  	// AnyRegBit_with_subreg_r64
    {2, 32},  	// FP64Bit
    {2, 32},  	// GR64Bit
    {2, 30},  	// ADDR64Bit
    {2, 64},  	// VR128Bit
    {2, 32},  	// VF128Bit
    {4, 32},  	// FP128Bit
    {4, 32},  	// GR128Bit
    {4, 28},  	// ADDR128Bit
  };
  return RCWeightTable[RC->getID()];
}

/// Get the weight in units of pressure for this register unit.
unsigned SystemZGenRegisterInfo::
getRegUnitWeight(unsigned RegUnit) const {
  assert(RegUnit < 81 && "invalid register unit");
  // All register units have unit weight.
  return 1;
}


// Get the number of dimensions of register pressure.
unsigned SystemZGenRegisterInfo::getNumRegPressureSets() const {
  return 11;
}

// Get the name of this register unit pressure set.
const char *SystemZGenRegisterInfo::
getRegPressureSetName(unsigned Idx) const {
  static const char *const PressureNameTable[] = {
    "FP32Bit",
    "GR32Bit",
    "GRH32Bit",
    "GRX32Bit",
    "VR32Bit",
    "AnyRegBit_with_subreg_r32",
    "VR32Bit+AnyRegBit_with_subreg_r32",
    "AnyRegBit",
    "VR64Bit",
    "VR32Bit+AnyRegBit",
    "AnyRegBit+VR64Bit",
  };
  return PressureNameTable[Idx];
}

// Get the register unit pressure limit for this dimension.
// This limit must be adjusted dynamically for reserved registers.
unsigned SystemZGenRegisterInfo::
getRegPressureSetLimit(const MachineFunction &MF, unsigned Idx) const {
  static const uint8_t PressureLimitTable[] = {
    16,  	// 0: FP32Bit
    16,  	// 1: GR32Bit
    16,  	// 2: GRH32Bit
    32,  	// 3: GRX32Bit
    32,  	// 4: VR32Bit
    32,  	// 5: AnyRegBit_with_subreg_r32
    48,  	// 6: VR32Bit+AnyRegBit_with_subreg_r32
    64,  	// 7: AnyRegBit
    64,  	// 8: VR64Bit
    80,  	// 9: VR32Bit+AnyRegBit
    96,  	// 10: AnyRegBit+VR64Bit
  };
  return PressureLimitTable[Idx];
}

/// Table of pressure sets per register class or unit.
static const int RCSetsTable[] = {
  /* 0 */ 8, 10, -1,
  /* 3 */ 1, 3, 7, 9, 10, -1,
  /* 9 */ 2, 3, 7, 9, 10, -1,
  /* 15 */ 4, 6, 8, 9, 10, -1,
  /* 21 */ 0, 4, 5, 6, 7, 8, 9, 10, -1,
};

/// Get the dimensions of register pressure impacted by this register class.
/// Returns a -1 terminated array of pressure set IDs
const int* SystemZGenRegisterInfo::
getRegClassPressureSets(const TargetRegisterClass *RC) const {
  static const uint8_t RCSetStartTable[] = {
    4,15,2,21,3,9,3,2,5,23,0,23,23,4,4,0,23,23,4,4,};
  return &RCSetsTable[RCSetStartTable[RC->getID()]];
}

/// Get the dimensions of register pressure impacted by this register unit.
/// Returns a -1 terminated array of pressure set IDs
const int* SystemZGenRegisterInfo::
getRegUnitPressureSets(unsigned RegUnit) const {
  assert(RegUnit < 81 && "invalid register unit");
  static const uint8_t RUSetStartTable[] = {
    2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,21,21,21,21,21,21,21,21,21,21,21,21,21,21,21,21,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,3,9,3,9,3,9,3,9,3,9,3,9,3,9,3,9,3,9,3,9,3,9,3,9,3,9,3,9,3,9,3,9,};
  return &RCSetsTable[RUSetStartTable[RegUnit]];
}

extern const MCRegisterDesc SystemZRegDesc[];
extern const MCPhysReg SystemZRegDiffLists[];
extern const LaneBitmask SystemZLaneMaskLists[];
extern const char SystemZRegStrings[];
extern const char SystemZRegClassStrings[];
extern const MCPhysReg SystemZRegUnitRoots[][2];
extern const uint16_t SystemZSubRegIdxLists[];
extern const MCRegisterInfo::SubRegCoveredBits SystemZSubRegIdxRanges[];
extern const uint16_t SystemZRegEncodingTable[];
// SystemZ Dwarf<->LLVM register mappings.
extern const MCRegisterInfo::DwarfLLVMRegPair SystemZDwarfFlavour0Dwarf2L[];
extern const unsigned SystemZDwarfFlavour0Dwarf2LSize;

extern const MCRegisterInfo::DwarfLLVMRegPair SystemZEHFlavour0Dwarf2L[];
extern const unsigned SystemZEHFlavour0Dwarf2LSize;

extern const MCRegisterInfo::DwarfLLVMRegPair SystemZDwarfFlavour0L2Dwarf[];
extern const unsigned SystemZDwarfFlavour0L2DwarfSize;

extern const MCRegisterInfo::DwarfLLVMRegPair SystemZEHFlavour0L2Dwarf[];
extern const unsigned SystemZEHFlavour0L2DwarfSize;

SystemZGenRegisterInfo::
SystemZGenRegisterInfo(unsigned RA, unsigned DwarfFlavour, unsigned EHFlavour, unsigned PC)
  : TargetRegisterInfo(SystemZRegInfoDesc, RegisterClasses, RegisterClasses+20,
             SubRegIndexNameTable, SubRegIndexLaneMaskTable, LaneBitmask(0xFFFFFFC0)) {
  InitMCRegisterInfo(SystemZRegDesc, 178, RA, PC,
                     SystemZMCRegisterClasses, 20,
                     SystemZRegUnitRoots,
                     81,
                     SystemZRegDiffLists,
                     SystemZLaneMaskLists,
                     SystemZRegStrings,
                     SystemZRegClassStrings,
                     SystemZSubRegIdxLists,
                     10,
                     SystemZSubRegIdxRanges,
                     SystemZRegEncodingTable);

  switch (DwarfFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    mapDwarfRegsToLLVMRegs(SystemZDwarfFlavour0Dwarf2L, SystemZDwarfFlavour0Dwarf2LSize, false);
    break;
  }
  switch (EHFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    mapDwarfRegsToLLVMRegs(SystemZEHFlavour0Dwarf2L, SystemZEHFlavour0Dwarf2LSize, true);
    break;
  }
  switch (DwarfFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    mapLLVMRegsToDwarfRegs(SystemZDwarfFlavour0L2Dwarf, SystemZDwarfFlavour0L2DwarfSize, false);
    break;
  }
  switch (EHFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    mapLLVMRegsToDwarfRegs(SystemZEHFlavour0L2Dwarf, SystemZEHFlavour0L2DwarfSize, true);
    break;
  }
}

static const MCPhysReg CSR_SystemZ_SaveList[] = { SystemZ::R6D, SystemZ::R7D, SystemZ::R8D, SystemZ::R9D, SystemZ::R10D, SystemZ::R11D, SystemZ::R12D, SystemZ::R13D, SystemZ::R14D, SystemZ::R15D, SystemZ::F8D, SystemZ::F9D, SystemZ::F10D, SystemZ::F11D, SystemZ::F12D, SystemZ::F13D, SystemZ::F14D, SystemZ::F15D, 0 };
static const uint32_t CSR_SystemZ_RegMask[] = { 0x00000000, 0xfc000000, 0x00000003, 0x000003fc, 0x03ff03ff, 0x000003ff, };
static const MCPhysReg CSR_SystemZ_SwiftError_SaveList[] = { SystemZ::R6D, SystemZ::R7D, SystemZ::R8D, SystemZ::R10D, SystemZ::R11D, SystemZ::R12D, SystemZ::R13D, SystemZ::R14D, SystemZ::R15D, SystemZ::F8D, SystemZ::F9D, SystemZ::F10D, SystemZ::F11D, SystemZ::F12D, SystemZ::F13D, SystemZ::F14D, SystemZ::F15D, 0 };
static const uint32_t CSR_SystemZ_SwiftError_RegMask[] = { 0x00000000, 0xfc000000, 0x00000003, 0x000003fc, 0x03f703f7, 0x000003f7, };


ArrayRef<const uint32_t *> SystemZGenRegisterInfo::getRegMasks() const {
  static const uint32_t *const Masks[] = {
    CSR_SystemZ_RegMask,
    CSR_SystemZ_SwiftError_RegMask,
  };
  return makeArrayRef(Masks);
}

ArrayRef<const char *> SystemZGenRegisterInfo::getRegMaskNames() const {
  static const char *const Names[] = {
    "CSR_SystemZ",
    "CSR_SystemZ_SwiftError",
  };
  return makeArrayRef(Names);
}

const SystemZFrameLowering *
SystemZGenRegisterInfo::getFrameLowering(const MachineFunction &MF) {
  return static_cast<const SystemZFrameLowering *>(
      MF.getSubtarget().getFrameLowering());
}

} // end namespace llvm

#endif // GET_REGINFO_TARGET_DESC

