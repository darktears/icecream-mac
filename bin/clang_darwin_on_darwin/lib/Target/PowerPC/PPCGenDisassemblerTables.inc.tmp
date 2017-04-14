/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|*  * PPC Disassembler                                                        *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#include "llvm/MC/MCInst.h"
#include "llvm/Support/Debug.h"
#include "llvm/Support/DataTypes.h"
#include "llvm/Support/LEB128.h"
#include "llvm/Support/raw_ostream.h"
#include <assert.h>

namespace llvm {

// Helper function for extracting fields from encoded instructions.
template<typename InsnType>
static InsnType fieldFromInstruction(InsnType insn, unsigned startBit,
                                     unsigned numBits) {
    assert(startBit + numBits <= (sizeof(InsnType)*8) &&
           "Instruction field out of bounds!");
    InsnType fieldMask;
    if (numBits == sizeof(InsnType)*8)
      fieldMask = (InsnType)(-1LL);
    else
      fieldMask = (((InsnType)1 << numBits) - 1) << startBit;
    return (insn & fieldMask) >> startBit;
}

static const uint8_t DecoderTable32[] = {
/* 0 */       MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 3 */       MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 18
/* 7 */       MCD::OPC_CheckField, 1, 10, 128, 2, 228, 53, // Skip to: 13810
/* 14 */      MCD::OPC_Decode, 209, 1, 0, // Opcode: ATTN
/* 18 */      MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 26
/* 22 */      MCD::OPC_Decode, 230, 10, 1, // Opcode: TDI
/* 26 */      MCD::OPC_FilterValue, 3, 4, 0, // Skip to: 34
/* 30 */      MCD::OPC_Decode, 251, 10, 2, // Opcode: TWI
/* 34 */      MCD::OPC_FilterValue, 4, 146, 10, // Skip to: 2744
/* 38 */      MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 41 */      MCD::OPC_FilterValue, 0, 211, 0, // Skip to: 256
/* 45 */      MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 48 */      MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 56
/* 52 */      MCD::OPC_Decode, 137, 11, 3, // Opcode: VADDUBM
/* 56 */      MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 64
/* 60 */      MCD::OPC_Decode, 140, 11, 3, // Opcode: VADDUHM
/* 64 */      MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 72
/* 68 */      MCD::OPC_Decode, 143, 11, 3, // Opcode: VADDUWM
/* 72 */      MCD::OPC_FilterValue, 3, 4, 0, // Skip to: 80
/* 76 */      MCD::OPC_Decode, 139, 11, 3, // Opcode: VADDUDM
/* 80 */      MCD::OPC_FilterValue, 4, 4, 0, // Skip to: 88
/* 84 */      MCD::OPC_Decode, 142, 11, 3, // Opcode: VADDUQM
/* 88 */      MCD::OPC_FilterValue, 5, 4, 0, // Skip to: 96
/* 92 */      MCD::OPC_Decode, 129, 11, 3, // Opcode: VADDCUQ
/* 96 */      MCD::OPC_FilterValue, 6, 4, 0, // Skip to: 104
/* 100 */     MCD::OPC_Decode, 130, 11, 3, // Opcode: VADDCUW
/* 104 */     MCD::OPC_FilterValue, 8, 4, 0, // Skip to: 112
/* 108 */     MCD::OPC_Decode, 138, 11, 3, // Opcode: VADDUBS
/* 112 */     MCD::OPC_FilterValue, 9, 4, 0, // Skip to: 120
/* 116 */     MCD::OPC_Decode, 141, 11, 3, // Opcode: VADDUHS
/* 120 */     MCD::OPC_FilterValue, 10, 4, 0, // Skip to: 128
/* 124 */     MCD::OPC_Decode, 144, 11, 3, // Opcode: VADDUWS
/* 128 */     MCD::OPC_FilterValue, 12, 4, 0, // Skip to: 136
/* 132 */     MCD::OPC_Decode, 134, 11, 3, // Opcode: VADDSBS
/* 136 */     MCD::OPC_FilterValue, 13, 4, 0, // Skip to: 144
/* 140 */     MCD::OPC_Decode, 135, 11, 3, // Opcode: VADDSHS
/* 144 */     MCD::OPC_FilterValue, 14, 4, 0, // Skip to: 152
/* 148 */     MCD::OPC_Decode, 136, 11, 3, // Opcode: VADDSWS
/* 152 */     MCD::OPC_FilterValue, 16, 4, 0, // Skip to: 160
/* 156 */     MCD::OPC_Decode, 133, 13, 3, // Opcode: VSUBUBM
/* 160 */     MCD::OPC_FilterValue, 17, 4, 0, // Skip to: 168
/* 164 */     MCD::OPC_Decode, 136, 13, 3, // Opcode: VSUBUHM
/* 168 */     MCD::OPC_FilterValue, 18, 4, 0, // Skip to: 176
/* 172 */     MCD::OPC_Decode, 139, 13, 3, // Opcode: VSUBUWM
/* 176 */     MCD::OPC_FilterValue, 19, 4, 0, // Skip to: 184
/* 180 */     MCD::OPC_Decode, 135, 13, 3, // Opcode: VSUBUDM
/* 184 */     MCD::OPC_FilterValue, 20, 4, 0, // Skip to: 192
/* 188 */     MCD::OPC_Decode, 138, 13, 3, // Opcode: VSUBUQM
/* 192 */     MCD::OPC_FilterValue, 21, 4, 0, // Skip to: 200
/* 196 */     MCD::OPC_Decode, 253, 12, 3, // Opcode: VSUBCUQ
/* 200 */     MCD::OPC_FilterValue, 22, 4, 0, // Skip to: 208
/* 204 */     MCD::OPC_Decode, 254, 12, 3, // Opcode: VSUBCUW
/* 208 */     MCD::OPC_FilterValue, 24, 4, 0, // Skip to: 216
/* 212 */     MCD::OPC_Decode, 134, 13, 3, // Opcode: VSUBUBS
/* 216 */     MCD::OPC_FilterValue, 25, 4, 0, // Skip to: 224
/* 220 */     MCD::OPC_Decode, 137, 13, 3, // Opcode: VSUBUHS
/* 224 */     MCD::OPC_FilterValue, 26, 4, 0, // Skip to: 232
/* 228 */     MCD::OPC_Decode, 140, 13, 3, // Opcode: VSUBUWS
/* 232 */     MCD::OPC_FilterValue, 28, 4, 0, // Skip to: 240
/* 236 */     MCD::OPC_Decode, 130, 13, 3, // Opcode: VSUBSBS
/* 240 */     MCD::OPC_FilterValue, 29, 4, 0, // Skip to: 248
/* 244 */     MCD::OPC_Decode, 131, 13, 3, // Opcode: VSUBSHS
/* 248 */     MCD::OPC_FilterValue, 30, 246, 52, // Skip to: 13810
/* 252 */     MCD::OPC_Decode, 132, 13, 3, // Opcode: VSUBSWS
/* 256 */     MCD::OPC_FilterValue, 1, 233, 0, // Skip to: 493
/* 260 */     MCD::OPC_ExtractField, 6, 3,  // Inst{8-6} ...
/* 263 */     MCD::OPC_FilterValue, 0, 19, 0, // Skip to: 286
/* 267 */     MCD::OPC_ExtractField, 9, 7,  // Inst{15-9} ...
/* 270 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 278
/* 274 */     MCD::OPC_Decode, 155, 12, 4, // Opcode: VMUL10CUQ
/* 278 */     MCD::OPC_FilterValue, 1, 216, 52, // Skip to: 13810
/* 282 */     MCD::OPC_Decode, 158, 12, 4, // Opcode: VMUL10UQ
/* 286 */     MCD::OPC_FilterValue, 1, 19, 0, // Skip to: 309
/* 290 */     MCD::OPC_ExtractField, 9, 2,  // Inst{10-9} ...
/* 293 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 301
/* 297 */     MCD::OPC_Decode, 156, 12, 3, // Opcode: VMUL10ECUQ
/* 301 */     MCD::OPC_FilterValue, 1, 193, 52, // Skip to: 13810
/* 305 */     MCD::OPC_Decode, 157, 12, 3, // Opcode: VMUL10EUQ
/* 309 */     MCD::OPC_FilterValue, 2, 10, 0, // Skip to: 323
/* 313 */     MCD::OPC_CheckField, 9, 2, 2, 179, 52, // Skip to: 13810
/* 319 */     MCD::OPC_Decode, 242, 1, 3, // Opcode: BCDUSo
/* 323 */     MCD::OPC_FilterValue, 3, 10, 0, // Skip to: 337
/* 327 */     MCD::OPC_CheckField, 10, 1, 1, 165, 52, // Skip to: 13810
/* 333 */     MCD::OPC_Decode, 240, 1, 5, // Opcode: BCDSo
/* 337 */     MCD::OPC_FilterValue, 4, 10, 0, // Skip to: 351
/* 341 */     MCD::OPC_CheckField, 10, 1, 1, 151, 52, // Skip to: 13810
/* 347 */     MCD::OPC_Decode, 241, 1, 5, // Opcode: BCDTRUNCo
/* 351 */     MCD::OPC_FilterValue, 5, 19, 0, // Skip to: 374
/* 355 */     MCD::OPC_ExtractField, 9, 2,  // Inst{10-9} ...
/* 358 */     MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 366
/* 362 */     MCD::OPC_Decode, 234, 1, 3, // Opcode: BCDCPSGNo
/* 366 */     MCD::OPC_FilterValue, 2, 128, 52, // Skip to: 13810
/* 370 */     MCD::OPC_Decode, 243, 1, 3, // Opcode: BCDUTRUNCo
/* 374 */     MCD::OPC_FilterValue, 6, 101, 0, // Skip to: 479
/* 378 */     MCD::OPC_ExtractField, 16, 5,  // Inst{20-16} ...
/* 381 */     MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 395
/* 385 */     MCD::OPC_CheckField, 9, 2, 2, 107, 52, // Skip to: 13810
/* 391 */     MCD::OPC_Decode, 236, 1, 6, // Opcode: BCDCTSQo
/* 395 */     MCD::OPC_FilterValue, 2, 10, 0, // Skip to: 409
/* 399 */     MCD::OPC_CheckField, 10, 1, 1, 93, 52, // Skip to: 13810
/* 405 */     MCD::OPC_Decode, 232, 1, 7, // Opcode: BCDCFSQo
/* 409 */     MCD::OPC_FilterValue, 4, 10, 0, // Skip to: 423
/* 413 */     MCD::OPC_CheckField, 10, 1, 1, 79, 52, // Skip to: 13810
/* 419 */     MCD::OPC_Decode, 237, 1, 7, // Opcode: BCDCTZo
/* 423 */     MCD::OPC_FilterValue, 5, 10, 0, // Skip to: 437
/* 427 */     MCD::OPC_CheckField, 9, 2, 2, 65, 52, // Skip to: 13810
/* 433 */     MCD::OPC_Decode, 235, 1, 6, // Opcode: BCDCTNo
/* 437 */     MCD::OPC_FilterValue, 6, 10, 0, // Skip to: 451
/* 441 */     MCD::OPC_CheckField, 10, 1, 1, 51, 52, // Skip to: 13810
/* 447 */     MCD::OPC_Decode, 233, 1, 7, // Opcode: BCDCFZo
/* 451 */     MCD::OPC_FilterValue, 7, 10, 0, // Skip to: 465
/* 455 */     MCD::OPC_CheckField, 10, 1, 1, 37, 52, // Skip to: 13810
/* 461 */     MCD::OPC_Decode, 231, 1, 7, // Opcode: BCDCFNo
/* 465 */     MCD::OPC_FilterValue, 31, 29, 52, // Skip to: 13810
/* 469 */     MCD::OPC_CheckField, 10, 1, 1, 23, 52, // Skip to: 13810
/* 475 */     MCD::OPC_Decode, 238, 1, 7, // Opcode: BCDSETSGNo
/* 479 */     MCD::OPC_FilterValue, 7, 15, 52, // Skip to: 13810
/* 483 */     MCD::OPC_CheckField, 10, 1, 1, 9, 52, // Skip to: 13810
/* 489 */     MCD::OPC_Decode, 239, 1, 5, // Opcode: BCDSRo
/* 493 */     MCD::OPC_FilterValue, 2, 130, 1, // Skip to: 883
/* 497 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 500 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 508
/* 504 */     MCD::OPC_Decode, 253, 11, 3, // Opcode: VMAXUB
/* 508 */     MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 516
/* 512 */     MCD::OPC_Decode, 255, 11, 3, // Opcode: VMAXUH
/* 516 */     MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 524
/* 520 */     MCD::OPC_Decode, 128, 12, 3, // Opcode: VMAXUW
/* 524 */     MCD::OPC_FilterValue, 3, 4, 0, // Skip to: 532
/* 528 */     MCD::OPC_Decode, 254, 11, 3, // Opcode: VMAXUD
/* 532 */     MCD::OPC_FilterValue, 4, 4, 0, // Skip to: 540
/* 536 */     MCD::OPC_Decode, 249, 11, 3, // Opcode: VMAXSB
/* 540 */     MCD::OPC_FilterValue, 5, 4, 0, // Skip to: 548
/* 544 */     MCD::OPC_Decode, 251, 11, 3, // Opcode: VMAXSH
/* 548 */     MCD::OPC_FilterValue, 6, 4, 0, // Skip to: 556
/* 552 */     MCD::OPC_Decode, 252, 11, 3, // Opcode: VMAXSW
/* 556 */     MCD::OPC_FilterValue, 7, 4, 0, // Skip to: 564
/* 560 */     MCD::OPC_Decode, 250, 11, 3, // Opcode: VMAXSD
/* 564 */     MCD::OPC_FilterValue, 8, 4, 0, // Skip to: 572
/* 568 */     MCD::OPC_Decode, 136, 12, 3, // Opcode: VMINUB
/* 572 */     MCD::OPC_FilterValue, 9, 4, 0, // Skip to: 580
/* 576 */     MCD::OPC_Decode, 138, 12, 3, // Opcode: VMINUH
/* 580 */     MCD::OPC_FilterValue, 10, 4, 0, // Skip to: 588
/* 584 */     MCD::OPC_Decode, 139, 12, 3, // Opcode: VMINUW
/* 588 */     MCD::OPC_FilterValue, 11, 4, 0, // Skip to: 596
/* 592 */     MCD::OPC_Decode, 137, 12, 3, // Opcode: VMINUD
/* 596 */     MCD::OPC_FilterValue, 12, 4, 0, // Skip to: 604
/* 600 */     MCD::OPC_Decode, 132, 12, 3, // Opcode: VMINSB
/* 604 */     MCD::OPC_FilterValue, 13, 4, 0, // Skip to: 612
/* 608 */     MCD::OPC_Decode, 134, 12, 3, // Opcode: VMINSH
/* 612 */     MCD::OPC_FilterValue, 14, 4, 0, // Skip to: 620
/* 616 */     MCD::OPC_Decode, 135, 12, 3, // Opcode: VMINSW
/* 620 */     MCD::OPC_FilterValue, 15, 4, 0, // Skip to: 628
/* 624 */     MCD::OPC_Decode, 133, 12, 3, // Opcode: VMINSD
/* 628 */     MCD::OPC_FilterValue, 16, 4, 0, // Skip to: 636
/* 632 */     MCD::OPC_Decode, 150, 11, 3, // Opcode: VAVGUB
/* 636 */     MCD::OPC_FilterValue, 17, 4, 0, // Skip to: 644
/* 640 */     MCD::OPC_Decode, 151, 11, 3, // Opcode: VAVGUH
/* 644 */     MCD::OPC_FilterValue, 18, 4, 0, // Skip to: 652
/* 648 */     MCD::OPC_Decode, 152, 11, 3, // Opcode: VAVGUW
/* 652 */     MCD::OPC_FilterValue, 20, 4, 0, // Skip to: 660
/* 656 */     MCD::OPC_Decode, 147, 11, 3, // Opcode: VAVGSB
/* 660 */     MCD::OPC_FilterValue, 21, 4, 0, // Skip to: 668
/* 664 */     MCD::OPC_Decode, 148, 11, 3, // Opcode: VAVGSH
/* 668 */     MCD::OPC_FilterValue, 22, 4, 0, // Skip to: 676
/* 672 */     MCD::OPC_Decode, 149, 11, 3, // Opcode: VAVGSW
/* 676 */     MCD::OPC_FilterValue, 24, 131, 0, // Skip to: 811
/* 680 */     MCD::OPC_ExtractField, 16, 5,  // Inst{20-16} ...
/* 683 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 691
/* 687 */     MCD::OPC_Decode, 164, 11, 8, // Opcode: VCLZLSBB
/* 691 */     MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 699
/* 695 */     MCD::OPC_Decode, 217, 11, 8, // Opcode: VCTZLSBB
/* 699 */     MCD::OPC_FilterValue, 6, 4, 0, // Skip to: 707
/* 703 */     MCD::OPC_Decode, 176, 12, 6, // Opcode: VNEGW
/* 707 */     MCD::OPC_FilterValue, 7, 4, 0, // Skip to: 715
/* 711 */     MCD::OPC_Decode, 175, 12, 6, // Opcode: VNEGD
/* 715 */     MCD::OPC_FilterValue, 8, 4, 0, // Skip to: 723
/* 719 */     MCD::OPC_Decode, 207, 12, 6, // Opcode: VPRTYBW
/* 723 */     MCD::OPC_FilterValue, 9, 4, 0, // Skip to: 731
/* 727 */     MCD::OPC_Decode, 205, 12, 6, // Opcode: VPRTYBD
/* 731 */     MCD::OPC_FilterValue, 10, 4, 0, // Skip to: 739
/* 735 */     MCD::OPC_Decode, 206, 12, 6, // Opcode: VPRTYBQ
/* 739 */     MCD::OPC_FilterValue, 16, 4, 0, // Skip to: 747
/* 743 */     MCD::OPC_Decode, 227, 11, 6, // Opcode: VEXTSB2W
/* 747 */     MCD::OPC_FilterValue, 17, 4, 0, // Skip to: 755
/* 751 */     MCD::OPC_Decode, 231, 11, 6, // Opcode: VEXTSH2W
/* 755 */     MCD::OPC_FilterValue, 24, 4, 0, // Skip to: 763
/* 759 */     MCD::OPC_Decode, 225, 11, 6, // Opcode: VEXTSB2D
/* 763 */     MCD::OPC_FilterValue, 25, 4, 0, // Skip to: 771
/* 767 */     MCD::OPC_Decode, 229, 11, 6, // Opcode: VEXTSH2D
/* 771 */     MCD::OPC_FilterValue, 26, 4, 0, // Skip to: 779
/* 775 */     MCD::OPC_Decode, 233, 11, 6, // Opcode: VEXTSW2D
/* 779 */     MCD::OPC_FilterValue, 28, 4, 0, // Skip to: 787
/* 783 */     MCD::OPC_Decode, 214, 11, 6, // Opcode: VCTZB
/* 787 */     MCD::OPC_FilterValue, 29, 4, 0, // Skip to: 795
/* 791 */     MCD::OPC_Decode, 216, 11, 6, // Opcode: VCTZH
/* 795 */     MCD::OPC_FilterValue, 30, 4, 0, // Skip to: 803
/* 799 */     MCD::OPC_Decode, 218, 11, 6, // Opcode: VCTZW
/* 803 */     MCD::OPC_FilterValue, 31, 203, 50, // Skip to: 13810
/* 807 */     MCD::OPC_Decode, 215, 11, 6, // Opcode: VCTZD
/* 811 */     MCD::OPC_FilterValue, 26, 4, 0, // Skip to: 819
/* 815 */     MCD::OPC_Decode, 225, 12, 9, // Opcode: VSHASIGMAW
/* 819 */     MCD::OPC_FilterValue, 27, 4, 0, // Skip to: 827
/* 823 */     MCD::OPC_Decode, 224, 12, 9, // Opcode: VSHASIGMAD
/* 827 */     MCD::OPC_FilterValue, 28, 10, 0, // Skip to: 841
/* 831 */     MCD::OPC_CheckField, 16, 5, 0, 173, 50, // Skip to: 13810
/* 837 */     MCD::OPC_Decode, 161, 11, 6, // Opcode: VCLZB
/* 841 */     MCD::OPC_FilterValue, 29, 10, 0, // Skip to: 855
/* 845 */     MCD::OPC_CheckField, 16, 5, 0, 159, 50, // Skip to: 13810
/* 851 */     MCD::OPC_Decode, 163, 11, 6, // Opcode: VCLZH
/* 855 */     MCD::OPC_FilterValue, 30, 10, 0, // Skip to: 869
/* 859 */     MCD::OPC_CheckField, 16, 5, 0, 145, 50, // Skip to: 13810
/* 865 */     MCD::OPC_Decode, 165, 11, 6, // Opcode: VCLZW
/* 869 */     MCD::OPC_FilterValue, 31, 137, 50, // Skip to: 13810
/* 873 */     MCD::OPC_CheckField, 16, 5, 0, 131, 50, // Skip to: 13810
/* 879 */     MCD::OPC_Decode, 162, 11, 6, // Opcode: VCLZD
/* 883 */     MCD::OPC_FilterValue, 3, 83, 0, // Skip to: 970
/* 887 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 890 */     MCD::OPC_FilterValue, 16, 4, 0, // Skip to: 898
/* 894 */     MCD::OPC_Decode, 254, 10, 3, // Opcode: VABSDUB
/* 898 */     MCD::OPC_FilterValue, 17, 4, 0, // Skip to: 906
/* 902 */     MCD::OPC_Decode, 255, 10, 3, // Opcode: VABSDUH
/* 906 */     MCD::OPC_FilterValue, 18, 4, 0, // Skip to: 914
/* 910 */     MCD::OPC_Decode, 128, 11, 3, // Opcode: VABSDUW
/* 914 */     MCD::OPC_FilterValue, 28, 10, 0, // Skip to: 928
/* 918 */     MCD::OPC_CheckField, 16, 5, 0, 86, 50, // Skip to: 13810
/* 924 */     MCD::OPC_Decode, 201, 12, 6, // Opcode: VPOPCNTB
/* 928 */     MCD::OPC_FilterValue, 29, 10, 0, // Skip to: 942
/* 932 */     MCD::OPC_CheckField, 16, 5, 0, 72, 50, // Skip to: 13810
/* 938 */     MCD::OPC_Decode, 203, 12, 6, // Opcode: VPOPCNTH
/* 942 */     MCD::OPC_FilterValue, 30, 10, 0, // Skip to: 956
/* 946 */     MCD::OPC_CheckField, 16, 5, 0, 58, 50, // Skip to: 13810
/* 952 */     MCD::OPC_Decode, 204, 12, 6, // Opcode: VPOPCNTW
/* 956 */     MCD::OPC_FilterValue, 31, 50, 50, // Skip to: 13810
/* 960 */     MCD::OPC_CheckField, 16, 5, 0, 44, 50, // Skip to: 13810
/* 966 */     MCD::OPC_Decode, 202, 12, 6, // Opcode: VPOPCNTD
/* 970 */     MCD::OPC_FilterValue, 4, 255, 0, // Skip to: 1229
/* 974 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 977 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 985
/* 981 */     MCD::OPC_Decode, 213, 12, 3, // Opcode: VRLB
/* 985 */     MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 993
/* 989 */     MCD::OPC_Decode, 217, 12, 3, // Opcode: VRLH
/* 993 */     MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 1001
/* 997 */     MCD::OPC_Decode, 218, 12, 3, // Opcode: VRLW
/* 1001 */    MCD::OPC_FilterValue, 3, 4, 0, // Skip to: 1009
/* 1005 */    MCD::OPC_Decode, 214, 12, 3, // Opcode: VRLD
/* 1009 */    MCD::OPC_FilterValue, 4, 4, 0, // Skip to: 1017
/* 1013 */    MCD::OPC_Decode, 227, 12, 3, // Opcode: VSLB
/* 1017 */    MCD::OPC_FilterValue, 5, 4, 0, // Skip to: 1025
/* 1021 */    MCD::OPC_Decode, 230, 12, 3, // Opcode: VSLH
/* 1025 */    MCD::OPC_FilterValue, 6, 4, 0, // Skip to: 1033
/* 1029 */    MCD::OPC_Decode, 233, 12, 3, // Opcode: VSLW
/* 1033 */    MCD::OPC_FilterValue, 7, 4, 0, // Skip to: 1041
/* 1037 */    MCD::OPC_Decode, 226, 12, 3, // Opcode: VSL
/* 1041 */    MCD::OPC_FilterValue, 8, 4, 0, // Skip to: 1049
/* 1045 */    MCD::OPC_Decode, 247, 12, 3, // Opcode: VSRB
/* 1049 */    MCD::OPC_FilterValue, 9, 4, 0, // Skip to: 1057
/* 1053 */    MCD::OPC_Decode, 249, 12, 3, // Opcode: VSRH
/* 1057 */    MCD::OPC_FilterValue, 10, 4, 0, // Skip to: 1065
/* 1061 */    MCD::OPC_Decode, 252, 12, 3, // Opcode: VSRW
/* 1065 */    MCD::OPC_FilterValue, 11, 4, 0, // Skip to: 1073
/* 1069 */    MCD::OPC_Decode, 242, 12, 3, // Opcode: VSR
/* 1073 */    MCD::OPC_FilterValue, 12, 4, 0, // Skip to: 1081
/* 1077 */    MCD::OPC_Decode, 243, 12, 3, // Opcode: VSRAB
/* 1081 */    MCD::OPC_FilterValue, 13, 4, 0, // Skip to: 1089
/* 1085 */    MCD::OPC_Decode, 245, 12, 3, // Opcode: VSRAH
/* 1089 */    MCD::OPC_FilterValue, 14, 4, 0, // Skip to: 1097
/* 1093 */    MCD::OPC_Decode, 246, 12, 3, // Opcode: VSRAW
/* 1097 */    MCD::OPC_FilterValue, 15, 4, 0, // Skip to: 1105
/* 1101 */    MCD::OPC_Decode, 244, 12, 3, // Opcode: VSRAD
/* 1105 */    MCD::OPC_FilterValue, 16, 4, 0, // Skip to: 1113
/* 1109 */    MCD::OPC_Decode, 145, 11, 3, // Opcode: VAND
/* 1113 */    MCD::OPC_FilterValue, 17, 4, 0, // Skip to: 1121
/* 1117 */    MCD::OPC_Decode, 146, 11, 3, // Opcode: VANDC
/* 1121 */    MCD::OPC_FilterValue, 18, 4, 0, // Skip to: 1129
/* 1125 */    MCD::OPC_Decode, 179, 12, 3, // Opcode: VOR
/* 1129 */    MCD::OPC_FilterValue, 19, 4, 0, // Skip to: 1137
/* 1133 */    MCD::OPC_Decode, 154, 13, 3, // Opcode: VXOR
/* 1137 */    MCD::OPC_FilterValue, 20, 4, 0, // Skip to: 1145
/* 1141 */    MCD::OPC_Decode, 178, 12, 3, // Opcode: VNOR
/* 1145 */    MCD::OPC_FilterValue, 21, 4, 0, // Skip to: 1153
/* 1149 */    MCD::OPC_Decode, 180, 12, 3, // Opcode: VORC
/* 1153 */    MCD::OPC_FilterValue, 22, 4, 0, // Skip to: 1161
/* 1157 */    MCD::OPC_Decode, 172, 12, 3, // Opcode: VNAND
/* 1161 */    MCD::OPC_FilterValue, 23, 4, 0, // Skip to: 1169
/* 1165 */    MCD::OPC_Decode, 228, 12, 3, // Opcode: VSLD
/* 1169 */    MCD::OPC_FilterValue, 24, 10, 0, // Skip to: 1183
/* 1173 */    MCD::OPC_CheckField, 11, 10, 0, 87, 49, // Skip to: 13810
/* 1179 */    MCD::OPC_Decode, 130, 7, 10, // Opcode: MFVSCR
/* 1183 */    MCD::OPC_FilterValue, 25, 10, 0, // Skip to: 1197
/* 1187 */    MCD::OPC_CheckField, 16, 10, 0, 73, 49, // Skip to: 13810
/* 1193 */    MCD::OPC_Decode, 163, 7, 11, // Opcode: MTVSCR
/* 1197 */    MCD::OPC_FilterValue, 26, 4, 0, // Skip to: 1205
/* 1201 */    MCD::OPC_Decode, 219, 11, 3, // Opcode: VEQV
/* 1205 */    MCD::OPC_FilterValue, 27, 4, 0, // Skip to: 1213
/* 1209 */    MCD::OPC_Decode, 248, 12, 3, // Opcode: VSRD
/* 1213 */    MCD::OPC_FilterValue, 28, 4, 0, // Skip to: 1221
/* 1217 */    MCD::OPC_Decode, 251, 12, 3, // Opcode: VSRV
/* 1221 */    MCD::OPC_FilterValue, 29, 41, 49, // Skip to: 13810
/* 1225 */    MCD::OPC_Decode, 232, 12, 3, // Opcode: VSLV
/* 1229 */    MCD::OPC_FilterValue, 5, 35, 0, // Skip to: 1268
/* 1233 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 1236 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 1244
/* 1240 */    MCD::OPC_Decode, 219, 12, 12, // Opcode: VRLWMI
/* 1244 */    MCD::OPC_FilterValue, 3, 4, 0, // Skip to: 1252
/* 1248 */    MCD::OPC_Decode, 215, 12, 12, // Opcode: VRLDMI
/* 1252 */    MCD::OPC_FilterValue, 6, 4, 0, // Skip to: 1260
/* 1256 */    MCD::OPC_Decode, 220, 12, 3, // Opcode: VRLWNM
/* 1260 */    MCD::OPC_FilterValue, 7, 2, 49, // Skip to: 13810
/* 1264 */    MCD::OPC_Decode, 216, 12, 3, // Opcode: VRLDNM
/* 1268 */    MCD::OPC_FilterValue, 6, 211, 0, // Skip to: 1483
/* 1272 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 1275 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 1283
/* 1279 */    MCD::OPC_Decode, 170, 11, 3, // Opcode: VCMPEQUB
/* 1283 */    MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 1291
/* 1287 */    MCD::OPC_Decode, 174, 11, 3, // Opcode: VCMPEQUH
/* 1291 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 1299
/* 1295 */    MCD::OPC_Decode, 176, 11, 3, // Opcode: VCMPEQUW
/* 1299 */    MCD::OPC_FilterValue, 3, 4, 0, // Skip to: 1307
/* 1303 */    MCD::OPC_Decode, 168, 11, 3, // Opcode: VCMPEQFP
/* 1307 */    MCD::OPC_FilterValue, 7, 4, 0, // Skip to: 1315
/* 1311 */    MCD::OPC_Decode, 178, 11, 3, // Opcode: VCMPGEFP
/* 1315 */    MCD::OPC_FilterValue, 8, 4, 0, // Skip to: 1323
/* 1319 */    MCD::OPC_Decode, 190, 11, 3, // Opcode: VCMPGTUB
/* 1323 */    MCD::OPC_FilterValue, 9, 4, 0, // Skip to: 1331
/* 1327 */    MCD::OPC_Decode, 194, 11, 3, // Opcode: VCMPGTUH
/* 1331 */    MCD::OPC_FilterValue, 10, 4, 0, // Skip to: 1339
/* 1335 */    MCD::OPC_Decode, 196, 11, 3, // Opcode: VCMPGTUW
/* 1339 */    MCD::OPC_FilterValue, 11, 4, 0, // Skip to: 1347
/* 1343 */    MCD::OPC_Decode, 180, 11, 3, // Opcode: VCMPGTFP
/* 1347 */    MCD::OPC_FilterValue, 12, 4, 0, // Skip to: 1355
/* 1351 */    MCD::OPC_Decode, 182, 11, 3, // Opcode: VCMPGTSB
/* 1355 */    MCD::OPC_FilterValue, 13, 4, 0, // Skip to: 1363
/* 1359 */    MCD::OPC_Decode, 186, 11, 3, // Opcode: VCMPGTSH
/* 1363 */    MCD::OPC_FilterValue, 14, 4, 0, // Skip to: 1371
/* 1367 */    MCD::OPC_Decode, 188, 11, 3, // Opcode: VCMPGTSW
/* 1371 */    MCD::OPC_FilterValue, 15, 4, 0, // Skip to: 1379
/* 1375 */    MCD::OPC_Decode, 166, 11, 3, // Opcode: VCMPBFP
/* 1379 */    MCD::OPC_FilterValue, 16, 4, 0, // Skip to: 1387
/* 1383 */    MCD::OPC_Decode, 171, 11, 3, // Opcode: VCMPEQUBo
/* 1387 */    MCD::OPC_FilterValue, 17, 4, 0, // Skip to: 1395
/* 1391 */    MCD::OPC_Decode, 175, 11, 3, // Opcode: VCMPEQUHo
/* 1395 */    MCD::OPC_FilterValue, 18, 4, 0, // Skip to: 1403
/* 1399 */    MCD::OPC_Decode, 177, 11, 3, // Opcode: VCMPEQUWo
/* 1403 */    MCD::OPC_FilterValue, 19, 4, 0, // Skip to: 1411
/* 1407 */    MCD::OPC_Decode, 169, 11, 3, // Opcode: VCMPEQFPo
/* 1411 */    MCD::OPC_FilterValue, 23, 4, 0, // Skip to: 1419
/* 1415 */    MCD::OPC_Decode, 179, 11, 3, // Opcode: VCMPGEFPo
/* 1419 */    MCD::OPC_FilterValue, 24, 4, 0, // Skip to: 1427
/* 1423 */    MCD::OPC_Decode, 191, 11, 3, // Opcode: VCMPGTUBo
/* 1427 */    MCD::OPC_FilterValue, 25, 4, 0, // Skip to: 1435
/* 1431 */    MCD::OPC_Decode, 195, 11, 3, // Opcode: VCMPGTUHo
/* 1435 */    MCD::OPC_FilterValue, 26, 4, 0, // Skip to: 1443
/* 1439 */    MCD::OPC_Decode, 197, 11, 3, // Opcode: VCMPGTUWo
/* 1443 */    MCD::OPC_FilterValue, 27, 4, 0, // Skip to: 1451
/* 1447 */    MCD::OPC_Decode, 181, 11, 3, // Opcode: VCMPGTFPo
/* 1451 */    MCD::OPC_FilterValue, 28, 4, 0, // Skip to: 1459
/* 1455 */    MCD::OPC_Decode, 183, 11, 3, // Opcode: VCMPGTSBo
/* 1459 */    MCD::OPC_FilterValue, 29, 4, 0, // Skip to: 1467
/* 1463 */    MCD::OPC_Decode, 187, 11, 3, // Opcode: VCMPGTSHo
/* 1467 */    MCD::OPC_FilterValue, 30, 4, 0, // Skip to: 1475
/* 1471 */    MCD::OPC_Decode, 189, 11, 3, // Opcode: VCMPGTSWo
/* 1475 */    MCD::OPC_FilterValue, 31, 43, 48, // Skip to: 13810
/* 1479 */    MCD::OPC_Decode, 167, 11, 3, // Opcode: VCMPBFPo
/* 1483 */    MCD::OPC_FilterValue, 7, 147, 0, // Skip to: 1634
/* 1487 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 1490 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 1498
/* 1494 */    MCD::OPC_Decode, 198, 11, 3, // Opcode: VCMPNEB
/* 1498 */    MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 1506
/* 1502 */    MCD::OPC_Decode, 200, 11, 3, // Opcode: VCMPNEH
/* 1506 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 1514
/* 1510 */    MCD::OPC_Decode, 202, 11, 3, // Opcode: VCMPNEW
/* 1514 */    MCD::OPC_FilterValue, 3, 4, 0, // Skip to: 1522
/* 1518 */    MCD::OPC_Decode, 172, 11, 3, // Opcode: VCMPEQUD
/* 1522 */    MCD::OPC_FilterValue, 4, 4, 0, // Skip to: 1530
/* 1526 */    MCD::OPC_Decode, 204, 11, 3, // Opcode: VCMPNEZB
/* 1530 */    MCD::OPC_FilterValue, 5, 4, 0, // Skip to: 1538
/* 1534 */    MCD::OPC_Decode, 206, 11, 3, // Opcode: VCMPNEZH
/* 1538 */    MCD::OPC_FilterValue, 6, 4, 0, // Skip to: 1546
/* 1542 */    MCD::OPC_Decode, 208, 11, 3, // Opcode: VCMPNEZW
/* 1546 */    MCD::OPC_FilterValue, 11, 4, 0, // Skip to: 1554
/* 1550 */    MCD::OPC_Decode, 192, 11, 3, // Opcode: VCMPGTUD
/* 1554 */    MCD::OPC_FilterValue, 15, 4, 0, // Skip to: 1562
/* 1558 */    MCD::OPC_Decode, 184, 11, 3, // Opcode: VCMPGTSD
/* 1562 */    MCD::OPC_FilterValue, 16, 4, 0, // Skip to: 1570
/* 1566 */    MCD::OPC_Decode, 199, 11, 3, // Opcode: VCMPNEBo
/* 1570 */    MCD::OPC_FilterValue, 17, 4, 0, // Skip to: 1578
/* 1574 */    MCD::OPC_Decode, 201, 11, 3, // Opcode: VCMPNEHo
/* 1578 */    MCD::OPC_FilterValue, 18, 4, 0, // Skip to: 1586
/* 1582 */    MCD::OPC_Decode, 203, 11, 3, // Opcode: VCMPNEWo
/* 1586 */    MCD::OPC_FilterValue, 19, 4, 0, // Skip to: 1594
/* 1590 */    MCD::OPC_Decode, 173, 11, 3, // Opcode: VCMPEQUDo
/* 1594 */    MCD::OPC_FilterValue, 20, 4, 0, // Skip to: 1602
/* 1598 */    MCD::OPC_Decode, 205, 11, 3, // Opcode: VCMPNEZBo
/* 1602 */    MCD::OPC_FilterValue, 21, 4, 0, // Skip to: 1610
/* 1606 */    MCD::OPC_Decode, 207, 11, 3, // Opcode: VCMPNEZHo
/* 1610 */    MCD::OPC_FilterValue, 22, 4, 0, // Skip to: 1618
/* 1614 */    MCD::OPC_Decode, 209, 11, 3, // Opcode: VCMPNEZWo
/* 1618 */    MCD::OPC_FilterValue, 27, 4, 0, // Skip to: 1626
/* 1622 */    MCD::OPC_Decode, 193, 11, 3, // Opcode: VCMPGTUDo
/* 1626 */    MCD::OPC_FilterValue, 31, 148, 47, // Skip to: 13810
/* 1630 */    MCD::OPC_Decode, 185, 11, 3, // Opcode: VCMPGTSDo
/* 1634 */    MCD::OPC_FilterValue, 8, 201, 0, // Skip to: 1839
/* 1638 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 1641 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 1649
/* 1645 */    MCD::OPC_Decode, 168, 12, 3, // Opcode: VMULOUB
/* 1649 */    MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 1657
/* 1653 */    MCD::OPC_Decode, 169, 12, 3, // Opcode: VMULOUH
/* 1657 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 1665
/* 1661 */    MCD::OPC_Decode, 170, 12, 3, // Opcode: VMULOUW
/* 1665 */    MCD::OPC_FilterValue, 4, 4, 0, // Skip to: 1673
/* 1669 */    MCD::OPC_Decode, 165, 12, 3, // Opcode: VMULOSB
/* 1673 */    MCD::OPC_FilterValue, 5, 4, 0, // Skip to: 1681
/* 1677 */    MCD::OPC_Decode, 166, 12, 3, // Opcode: VMULOSH
/* 1681 */    MCD::OPC_FilterValue, 6, 4, 0, // Skip to: 1689
/* 1685 */    MCD::OPC_Decode, 167, 12, 3, // Opcode: VMULOSW
/* 1689 */    MCD::OPC_FilterValue, 8, 4, 0, // Skip to: 1697
/* 1693 */    MCD::OPC_Decode, 162, 12, 3, // Opcode: VMULEUB
/* 1697 */    MCD::OPC_FilterValue, 9, 4, 0, // Skip to: 1705
/* 1701 */    MCD::OPC_Decode, 163, 12, 3, // Opcode: VMULEUH
/* 1705 */    MCD::OPC_FilterValue, 10, 4, 0, // Skip to: 1713
/* 1709 */    MCD::OPC_Decode, 164, 12, 3, // Opcode: VMULEUW
/* 1713 */    MCD::OPC_FilterValue, 12, 4, 0, // Skip to: 1721
/* 1717 */    MCD::OPC_Decode, 159, 12, 3, // Opcode: VMULESB
/* 1721 */    MCD::OPC_FilterValue, 13, 4, 0, // Skip to: 1729
/* 1725 */    MCD::OPC_Decode, 160, 12, 3, // Opcode: VMULESH
/* 1729 */    MCD::OPC_FilterValue, 14, 4, 0, // Skip to: 1737
/* 1733 */    MCD::OPC_Decode, 161, 12, 3, // Opcode: VMULESW
/* 1737 */    MCD::OPC_FilterValue, 16, 4, 0, // Skip to: 1745
/* 1741 */    MCD::OPC_Decode, 197, 12, 3, // Opcode: VPMSUMB
/* 1745 */    MCD::OPC_FilterValue, 17, 4, 0, // Skip to: 1753
/* 1749 */    MCD::OPC_Decode, 199, 12, 3, // Opcode: VPMSUMH
/* 1753 */    MCD::OPC_FilterValue, 18, 4, 0, // Skip to: 1761
/* 1757 */    MCD::OPC_Decode, 200, 12, 3, // Opcode: VPMSUMW
/* 1761 */    MCD::OPC_FilterValue, 19, 4, 0, // Skip to: 1769
/* 1765 */    MCD::OPC_Decode, 198, 12, 3, // Opcode: VPMSUMD
/* 1769 */    MCD::OPC_FilterValue, 20, 4, 0, // Skip to: 1777
/* 1773 */    MCD::OPC_Decode, 159, 11, 3, // Opcode: VCIPHER
/* 1777 */    MCD::OPC_FilterValue, 21, 4, 0, // Skip to: 1785
/* 1781 */    MCD::OPC_Decode, 173, 12, 3, // Opcode: VNCIPHER
/* 1785 */    MCD::OPC_FilterValue, 23, 10, 0, // Skip to: 1799
/* 1789 */    MCD::OPC_CheckField, 11, 5, 0, 239, 46, // Skip to: 13810
/* 1795 */    MCD::OPC_Decode, 222, 12, 4, // Opcode: VSBOX
/* 1799 */    MCD::OPC_FilterValue, 24, 4, 0, // Skip to: 1807
/* 1803 */    MCD::OPC_Decode, 144, 13, 3, // Opcode: VSUM4UBS
/* 1807 */    MCD::OPC_FilterValue, 25, 4, 0, // Skip to: 1815
/* 1811 */    MCD::OPC_Decode, 143, 13, 3, // Opcode: VSUM4SHS
/* 1815 */    MCD::OPC_FilterValue, 26, 4, 0, // Skip to: 1823
/* 1819 */    MCD::OPC_Decode, 141, 13, 3, // Opcode: VSUM2SWS
/* 1823 */    MCD::OPC_FilterValue, 28, 4, 0, // Skip to: 1831
/* 1827 */    MCD::OPC_Decode, 142, 13, 3, // Opcode: VSUM4SBS
/* 1831 */    MCD::OPC_FilterValue, 30, 199, 46, // Skip to: 13810
/* 1835 */    MCD::OPC_Decode, 145, 13, 3, // Opcode: VSUMSWS
/* 1839 */    MCD::OPC_FilterValue, 9, 27, 0, // Skip to: 1870
/* 1843 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 1846 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 1854
/* 1850 */    MCD::OPC_Decode, 171, 12, 3, // Opcode: VMULUWM
/* 1854 */    MCD::OPC_FilterValue, 20, 4, 0, // Skip to: 1862
/* 1858 */    MCD::OPC_Decode, 160, 11, 3, // Opcode: VCIPHERLAST
/* 1862 */    MCD::OPC_FilterValue, 21, 168, 46, // Skip to: 13810
/* 1866 */    MCD::OPC_Decode, 174, 12, 3, // Opcode: VNCIPHERLAST
/* 1870 */    MCD::OPC_FilterValue, 10, 179, 0, // Skip to: 2053
/* 1874 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 1877 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 1885
/* 1881 */    MCD::OPC_Decode, 133, 11, 3, // Opcode: VADDFP
/* 1885 */    MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 1893
/* 1889 */    MCD::OPC_Decode, 129, 13, 3, // Opcode: VSUBFP
/* 1893 */    MCD::OPC_FilterValue, 4, 10, 0, // Skip to: 1907
/* 1897 */    MCD::OPC_CheckField, 16, 5, 0, 131, 46, // Skip to: 13810
/* 1903 */    MCD::OPC_Decode, 208, 12, 6, // Opcode: VREFP
/* 1907 */    MCD::OPC_FilterValue, 5, 10, 0, // Skip to: 1921
/* 1911 */    MCD::OPC_CheckField, 16, 5, 0, 117, 46, // Skip to: 13810
/* 1917 */    MCD::OPC_Decode, 221, 12, 6, // Opcode: VRSQRTEFP
/* 1921 */    MCD::OPC_FilterValue, 6, 10, 0, // Skip to: 1935
/* 1925 */    MCD::OPC_CheckField, 16, 5, 0, 103, 46, // Skip to: 13810
/* 1931 */    MCD::OPC_Decode, 220, 11, 6, // Opcode: VEXPTEFP
/* 1935 */    MCD::OPC_FilterValue, 7, 10, 0, // Skip to: 1949
/* 1939 */    MCD::OPC_CheckField, 16, 5, 0, 89, 46, // Skip to: 13810
/* 1945 */    MCD::OPC_Decode, 246, 11, 6, // Opcode: VLOGEFP
/* 1949 */    MCD::OPC_FilterValue, 8, 10, 0, // Skip to: 1963
/* 1953 */    MCD::OPC_CheckField, 16, 5, 0, 75, 46, // Skip to: 13810
/* 1959 */    MCD::OPC_Decode, 210, 12, 6, // Opcode: VRFIN
/* 1963 */    MCD::OPC_FilterValue, 9, 10, 0, // Skip to: 1977
/* 1967 */    MCD::OPC_CheckField, 16, 5, 0, 61, 46, // Skip to: 13810
/* 1973 */    MCD::OPC_Decode, 212, 12, 6, // Opcode: VRFIZ
/* 1977 */    MCD::OPC_FilterValue, 10, 10, 0, // Skip to: 1991
/* 1981 */    MCD::OPC_CheckField, 16, 5, 0, 47, 46, // Skip to: 13810
/* 1987 */    MCD::OPC_Decode, 211, 12, 6, // Opcode: VRFIP
/* 1991 */    MCD::OPC_FilterValue, 11, 10, 0, // Skip to: 2005
/* 1995 */    MCD::OPC_CheckField, 16, 5, 0, 33, 46, // Skip to: 13810
/* 2001 */    MCD::OPC_Decode, 209, 12, 6, // Opcode: VRFIM
/* 2005 */    MCD::OPC_FilterValue, 12, 4, 0, // Skip to: 2013
/* 2009 */    MCD::OPC_Decode, 157, 11, 13, // Opcode: VCFUX
/* 2013 */    MCD::OPC_FilterValue, 13, 4, 0, // Skip to: 2021
/* 2017 */    MCD::OPC_Decode, 155, 11, 13, // Opcode: VCFSX
/* 2021 */    MCD::OPC_FilterValue, 14, 4, 0, // Skip to: 2029
/* 2025 */    MCD::OPC_Decode, 212, 11, 13, // Opcode: VCTUXS
/* 2029 */    MCD::OPC_FilterValue, 15, 4, 0, // Skip to: 2037
/* 2033 */    MCD::OPC_Decode, 210, 11, 13, // Opcode: VCTSXS
/* 2037 */    MCD::OPC_FilterValue, 16, 4, 0, // Skip to: 2045
/* 2041 */    MCD::OPC_Decode, 248, 11, 3, // Opcode: VMAXFP
/* 2045 */    MCD::OPC_FilterValue, 17, 241, 45, // Skip to: 13810
/* 2049 */    MCD::OPC_Decode, 131, 12, 3, // Opcode: VMINFP
/* 2053 */    MCD::OPC_FilterValue, 12, 179, 0, // Skip to: 2236
/* 2057 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 2060 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 2068
/* 2064 */    MCD::OPC_Decode, 142, 12, 3, // Opcode: VMRGHB
/* 2068 */    MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 2076
/* 2072 */    MCD::OPC_Decode, 143, 12, 3, // Opcode: VMRGHH
/* 2076 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 2084
/* 2080 */    MCD::OPC_Decode, 144, 12, 3, // Opcode: VMRGHW
/* 2084 */    MCD::OPC_FilterValue, 4, 4, 0, // Skip to: 2092
/* 2088 */    MCD::OPC_Decode, 145, 12, 3, // Opcode: VMRGLB
/* 2092 */    MCD::OPC_FilterValue, 5, 4, 0, // Skip to: 2100
/* 2096 */    MCD::OPC_Decode, 146, 12, 3, // Opcode: VMRGLH
/* 2100 */    MCD::OPC_FilterValue, 6, 4, 0, // Skip to: 2108
/* 2104 */    MCD::OPC_Decode, 147, 12, 3, // Opcode: VMRGLW
/* 2108 */    MCD::OPC_FilterValue, 8, 4, 0, // Skip to: 2116
/* 2112 */    MCD::OPC_Decode, 234, 12, 13, // Opcode: VSPLTB
/* 2116 */    MCD::OPC_FilterValue, 9, 4, 0, // Skip to: 2124
/* 2120 */    MCD::OPC_Decode, 236, 12, 13, // Opcode: VSPLTH
/* 2124 */    MCD::OPC_FilterValue, 10, 4, 0, // Skip to: 2132
/* 2128 */    MCD::OPC_Decode, 241, 12, 13, // Opcode: VSPLTW
/* 2132 */    MCD::OPC_FilterValue, 12, 10, 0, // Skip to: 2146
/* 2136 */    MCD::OPC_CheckField, 11, 5, 0, 148, 45, // Skip to: 13810
/* 2142 */    MCD::OPC_Decode, 238, 12, 14, // Opcode: VSPLTISB
/* 2146 */    MCD::OPC_FilterValue, 13, 10, 0, // Skip to: 2160
/* 2150 */    MCD::OPC_CheckField, 11, 5, 0, 134, 45, // Skip to: 13810
/* 2156 */    MCD::OPC_Decode, 239, 12, 14, // Opcode: VSPLTISH
/* 2160 */    MCD::OPC_FilterValue, 14, 10, 0, // Skip to: 2174
/* 2164 */    MCD::OPC_CheckField, 11, 5, 0, 120, 45, // Skip to: 13810
/* 2170 */    MCD::OPC_Decode, 240, 12, 14, // Opcode: VSPLTISW
/* 2174 */    MCD::OPC_FilterValue, 16, 4, 0, // Skip to: 2182
/* 2178 */    MCD::OPC_Decode, 231, 12, 3, // Opcode: VSLO
/* 2182 */    MCD::OPC_FilterValue, 17, 4, 0, // Skip to: 2190
/* 2186 */    MCD::OPC_Decode, 250, 12, 3, // Opcode: VSRO
/* 2190 */    MCD::OPC_FilterValue, 20, 10, 0, // Skip to: 2204
/* 2194 */    MCD::OPC_CheckField, 16, 5, 0, 90, 45, // Skip to: 13810
/* 2200 */    MCD::OPC_Decode, 241, 11, 6, // Opcode: VGBBD
/* 2204 */    MCD::OPC_FilterValue, 21, 4, 0, // Skip to: 2212
/* 2208 */    MCD::OPC_Decode, 154, 11, 3, // Opcode: VBPERMQ
/* 2212 */    MCD::OPC_FilterValue, 23, 4, 0, // Skip to: 2220
/* 2216 */    MCD::OPC_Decode, 153, 11, 3, // Opcode: VBPERMD
/* 2220 */    MCD::OPC_FilterValue, 26, 4, 0, // Skip to: 2228
/* 2224 */    MCD::OPC_Decode, 148, 12, 3, // Opcode: VMRGOW
/* 2228 */    MCD::OPC_FilterValue, 30, 58, 45, // Skip to: 13810
/* 2232 */    MCD::OPC_Decode, 141, 12, 3, // Opcode: VMRGEW
/* 2236 */    MCD::OPC_FilterValue, 13, 115, 0, // Skip to: 2355
/* 2240 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 2243 */    MCD::OPC_FilterValue, 8, 4, 0, // Skip to: 2251
/* 2247 */    MCD::OPC_Decode, 222, 11, 15, // Opcode: VEXTRACTUB
/* 2251 */    MCD::OPC_FilterValue, 9, 4, 0, // Skip to: 2259
/* 2255 */    MCD::OPC_Decode, 223, 11, 15, // Opcode: VEXTRACTUH
/* 2259 */    MCD::OPC_FilterValue, 10, 4, 0, // Skip to: 2267
/* 2263 */    MCD::OPC_Decode, 224, 11, 15, // Opcode: VEXTRACTUW
/* 2267 */    MCD::OPC_FilterValue, 11, 4, 0, // Skip to: 2275
/* 2271 */    MCD::OPC_Decode, 221, 11, 15, // Opcode: VEXTRACTD
/* 2275 */    MCD::OPC_FilterValue, 12, 4, 0, // Skip to: 2283
/* 2279 */    MCD::OPC_Decode, 242, 11, 15, // Opcode: VINSERTB
/* 2283 */    MCD::OPC_FilterValue, 13, 4, 0, // Skip to: 2291
/* 2287 */    MCD::OPC_Decode, 244, 11, 15, // Opcode: VINSERTH
/* 2291 */    MCD::OPC_FilterValue, 14, 4, 0, // Skip to: 2299
/* 2295 */    MCD::OPC_Decode, 245, 11, 15, // Opcode: VINSERTW
/* 2299 */    MCD::OPC_FilterValue, 15, 4, 0, // Skip to: 2307
/* 2303 */    MCD::OPC_Decode, 243, 11, 15, // Opcode: VINSERTD
/* 2307 */    MCD::OPC_FilterValue, 24, 4, 0, // Skip to: 2315
/* 2311 */    MCD::OPC_Decode, 235, 11, 16, // Opcode: VEXTUBLX
/* 2315 */    MCD::OPC_FilterValue, 25, 4, 0, // Skip to: 2323
/* 2319 */    MCD::OPC_Decode, 237, 11, 16, // Opcode: VEXTUHLX
/* 2323 */    MCD::OPC_FilterValue, 26, 4, 0, // Skip to: 2331
/* 2327 */    MCD::OPC_Decode, 239, 11, 16, // Opcode: VEXTUWLX
/* 2331 */    MCD::OPC_FilterValue, 28, 4, 0, // Skip to: 2339
/* 2335 */    MCD::OPC_Decode, 236, 11, 16, // Opcode: VEXTUBRX
/* 2339 */    MCD::OPC_FilterValue, 29, 4, 0, // Skip to: 2347
/* 2343 */    MCD::OPC_Decode, 238, 11, 16, // Opcode: VEXTUHRX
/* 2347 */    MCD::OPC_FilterValue, 30, 195, 44, // Skip to: 13810
/* 2351 */    MCD::OPC_Decode, 240, 11, 16, // Opcode: VEXTUWRX
/* 2355 */    MCD::OPC_FilterValue, 14, 219, 0, // Skip to: 2578
/* 2359 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 2362 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 2370
/* 2366 */    MCD::OPC_Decode, 193, 12, 3, // Opcode: VPKUHUM
/* 2370 */    MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 2378
/* 2374 */    MCD::OPC_Decode, 195, 12, 3, // Opcode: VPKUWUM
/* 2378 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 2386
/* 2382 */    MCD::OPC_Decode, 194, 12, 3, // Opcode: VPKUHUS
/* 2386 */    MCD::OPC_FilterValue, 3, 4, 0, // Skip to: 2394
/* 2390 */    MCD::OPC_Decode, 196, 12, 3, // Opcode: VPKUWUS
/* 2394 */    MCD::OPC_FilterValue, 4, 4, 0, // Skip to: 2402
/* 2398 */    MCD::OPC_Decode, 188, 12, 3, // Opcode: VPKSHUS
/* 2402 */    MCD::OPC_FilterValue, 5, 4, 0, // Skip to: 2410
/* 2406 */    MCD::OPC_Decode, 190, 12, 3, // Opcode: VPKSWUS
/* 2410 */    MCD::OPC_FilterValue, 6, 4, 0, // Skip to: 2418
/* 2414 */    MCD::OPC_Decode, 187, 12, 3, // Opcode: VPKSHSS
/* 2418 */    MCD::OPC_FilterValue, 7, 4, 0, // Skip to: 2426
/* 2422 */    MCD::OPC_Decode, 189, 12, 3, // Opcode: VPKSWSS
/* 2426 */    MCD::OPC_FilterValue, 8, 10, 0, // Skip to: 2440
/* 2430 */    MCD::OPC_CheckField, 16, 5, 0, 110, 44, // Skip to: 13810
/* 2436 */    MCD::OPC_Decode, 147, 13, 6, // Opcode: VUPKHSB
/* 2440 */    MCD::OPC_FilterValue, 9, 10, 0, // Skip to: 2454
/* 2444 */    MCD::OPC_CheckField, 16, 5, 0, 96, 44, // Skip to: 13810
/* 2450 */    MCD::OPC_Decode, 148, 13, 6, // Opcode: VUPKHSH
/* 2454 */    MCD::OPC_FilterValue, 10, 10, 0, // Skip to: 2468
/* 2458 */    MCD::OPC_CheckField, 16, 5, 0, 82, 44, // Skip to: 13810
/* 2464 */    MCD::OPC_Decode, 151, 13, 6, // Opcode: VUPKLSB
/* 2468 */    MCD::OPC_FilterValue, 11, 10, 0, // Skip to: 2482
/* 2472 */    MCD::OPC_CheckField, 16, 5, 0, 68, 44, // Skip to: 13810
/* 2478 */    MCD::OPC_Decode, 152, 13, 6, // Opcode: VUPKLSH
/* 2482 */    MCD::OPC_FilterValue, 12, 4, 0, // Skip to: 2490
/* 2486 */    MCD::OPC_Decode, 184, 12, 3, // Opcode: VPKPX
/* 2490 */    MCD::OPC_FilterValue, 13, 10, 0, // Skip to: 2504
/* 2494 */    MCD::OPC_CheckField, 16, 5, 0, 46, 44, // Skip to: 13810
/* 2500 */    MCD::OPC_Decode, 146, 13, 6, // Opcode: VUPKHPX
/* 2504 */    MCD::OPC_FilterValue, 15, 10, 0, // Skip to: 2518
/* 2508 */    MCD::OPC_CheckField, 16, 5, 0, 32, 44, // Skip to: 13810
/* 2514 */    MCD::OPC_Decode, 150, 13, 6, // Opcode: VUPKLPX
/* 2518 */    MCD::OPC_FilterValue, 17, 4, 0, // Skip to: 2526
/* 2522 */    MCD::OPC_Decode, 191, 12, 3, // Opcode: VPKUDUM
/* 2526 */    MCD::OPC_FilterValue, 19, 4, 0, // Skip to: 2534
/* 2530 */    MCD::OPC_Decode, 192, 12, 3, // Opcode: VPKUDUS
/* 2534 */    MCD::OPC_FilterValue, 21, 4, 0, // Skip to: 2542
/* 2538 */    MCD::OPC_Decode, 186, 12, 3, // Opcode: VPKSDUS
/* 2542 */    MCD::OPC_FilterValue, 23, 4, 0, // Skip to: 2550
/* 2546 */    MCD::OPC_Decode, 185, 12, 3, // Opcode: VPKSDSS
/* 2550 */    MCD::OPC_FilterValue, 25, 10, 0, // Skip to: 2564
/* 2554 */    MCD::OPC_CheckField, 16, 5, 0, 242, 43, // Skip to: 13810
/* 2560 */    MCD::OPC_Decode, 149, 13, 6, // Opcode: VUPKHSW
/* 2564 */    MCD::OPC_FilterValue, 27, 234, 43, // Skip to: 13810
/* 2568 */    MCD::OPC_CheckField, 16, 5, 0, 228, 43, // Skip to: 13810
/* 2574 */    MCD::OPC_Decode, 153, 13, 6, // Opcode: VUPKLSW
/* 2578 */    MCD::OPC_FilterValue, 32, 4, 0, // Skip to: 2586
/* 2582 */    MCD::OPC_Decode, 129, 12, 17, // Opcode: VMHADDSHS
/* 2586 */    MCD::OPC_FilterValue, 33, 4, 0, // Skip to: 2594
/* 2590 */    MCD::OPC_Decode, 130, 12, 17, // Opcode: VMHRADDSHS
/* 2594 */    MCD::OPC_FilterValue, 34, 4, 0, // Skip to: 2602
/* 2598 */    MCD::OPC_Decode, 140, 12, 17, // Opcode: VMLADDUHM
/* 2602 */    MCD::OPC_FilterValue, 36, 4, 0, // Skip to: 2610
/* 2606 */    MCD::OPC_Decode, 152, 12, 17, // Opcode: VMSUMUBM
/* 2610 */    MCD::OPC_FilterValue, 37, 4, 0, // Skip to: 2618
/* 2614 */    MCD::OPC_Decode, 149, 12, 17, // Opcode: VMSUMMBM
/* 2618 */    MCD::OPC_FilterValue, 38, 4, 0, // Skip to: 2626
/* 2622 */    MCD::OPC_Decode, 153, 12, 17, // Opcode: VMSUMUHM
/* 2626 */    MCD::OPC_FilterValue, 39, 4, 0, // Skip to: 2634
/* 2630 */    MCD::OPC_Decode, 154, 12, 17, // Opcode: VMSUMUHS
/* 2634 */    MCD::OPC_FilterValue, 40, 4, 0, // Skip to: 2642
/* 2638 */    MCD::OPC_Decode, 150, 12, 17, // Opcode: VMSUMSHM
/* 2642 */    MCD::OPC_FilterValue, 41, 4, 0, // Skip to: 2650
/* 2646 */    MCD::OPC_Decode, 151, 12, 17, // Opcode: VMSUMSHS
/* 2650 */    MCD::OPC_FilterValue, 42, 4, 0, // Skip to: 2658
/* 2654 */    MCD::OPC_Decode, 223, 12, 17, // Opcode: VSEL
/* 2658 */    MCD::OPC_FilterValue, 43, 4, 0, // Skip to: 2666
/* 2662 */    MCD::OPC_Decode, 181, 12, 17, // Opcode: VPERM
/* 2666 */    MCD::OPC_FilterValue, 44, 10, 0, // Skip to: 2680
/* 2670 */    MCD::OPC_CheckField, 10, 1, 0, 126, 43, // Skip to: 13810
/* 2676 */    MCD::OPC_Decode, 229, 12, 18, // Opcode: VSLDOI
/* 2680 */    MCD::OPC_FilterValue, 45, 4, 0, // Skip to: 2688
/* 2684 */    MCD::OPC_Decode, 183, 12, 17, // Opcode: VPERMXOR
/* 2688 */    MCD::OPC_FilterValue, 46, 4, 0, // Skip to: 2696
/* 2692 */    MCD::OPC_Decode, 247, 11, 19, // Opcode: VMADDFP
/* 2696 */    MCD::OPC_FilterValue, 47, 4, 0, // Skip to: 2704
/* 2700 */    MCD::OPC_Decode, 177, 12, 19, // Opcode: VNMSUBFP
/* 2704 */    MCD::OPC_FilterValue, 59, 4, 0, // Skip to: 2712
/* 2708 */    MCD::OPC_Decode, 182, 12, 17, // Opcode: VPERMR
/* 2712 */    MCD::OPC_FilterValue, 60, 4, 0, // Skip to: 2720
/* 2716 */    MCD::OPC_Decode, 132, 11, 17, // Opcode: VADDEUQM
/* 2720 */    MCD::OPC_FilterValue, 61, 4, 0, // Skip to: 2728
/* 2724 */    MCD::OPC_Decode, 131, 11, 17, // Opcode: VADDECUQ
/* 2728 */    MCD::OPC_FilterValue, 62, 4, 0, // Skip to: 2736
/* 2732 */    MCD::OPC_Decode, 128, 13, 17, // Opcode: VSUBEUQM
/* 2736 */    MCD::OPC_FilterValue, 63, 62, 43, // Skip to: 13810
/* 2740 */    MCD::OPC_Decode, 255, 12, 17, // Opcode: VSUBECUQ
/* 2744 */    MCD::OPC_FilterValue, 7, 4, 0, // Skip to: 2752
/* 2748 */    MCD::OPC_Decode, 179, 7, 20, // Opcode: MULLI
/* 2752 */    MCD::OPC_FilterValue, 8, 4, 0, // Skip to: 2760
/* 2756 */    MCD::OPC_Decode, 193, 10, 20, // Opcode: SUBFIC
/* 2760 */    MCD::OPC_FilterValue, 10, 19, 0, // Skip to: 2783
/* 2764 */    MCD::OPC_ExtractField, 21, 2,  // Inst{22-21} ...
/* 2767 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 2775
/* 2771 */    MCD::OPC_Decode, 201, 2, 21, // Opcode: CMPLWI
/* 2775 */    MCD::OPC_FilterValue, 1, 23, 43, // Skip to: 13810
/* 2779 */    MCD::OPC_Decode, 199, 2, 22, // Opcode: CMPLDI
/* 2783 */    MCD::OPC_FilterValue, 11, 19, 0, // Skip to: 2806
/* 2787 */    MCD::OPC_ExtractField, 21, 2,  // Inst{22-21} ...
/* 2790 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 2798
/* 2794 */    MCD::OPC_Decode, 205, 2, 23, // Opcode: CMPWI
/* 2798 */    MCD::OPC_FilterValue, 1, 0, 43, // Skip to: 13810
/* 2802 */    MCD::OPC_Decode, 196, 2, 24, // Opcode: CMPDI
/* 2806 */    MCD::OPC_FilterValue, 12, 3, 0, // Skip to: 2813
/* 2810 */    MCD::OPC_Decode, 113, 20, // Opcode: ADDIC
/* 2813 */    MCD::OPC_FilterValue, 13, 3, 0, // Skip to: 2820
/* 2817 */    MCD::OPC_Decode, 115, 20, // Opcode: ADDICo
/* 2820 */    MCD::OPC_FilterValue, 14, 13, 0, // Skip to: 2837
/* 2824 */    MCD::OPC_CheckField, 16, 5, 0, 4, 0, // Skip to: 2834
/* 2830 */    MCD::OPC_Decode, 180, 6, 25, // Opcode: LI
/* 2834 */    MCD::OPC_Decode, 111, 26, // Opcode: ADDI
/* 2837 */    MCD::OPC_FilterValue, 15, 13, 0, // Skip to: 2854
/* 2841 */    MCD::OPC_CheckField, 16, 5, 0, 4, 0, // Skip to: 2851
/* 2847 */    MCD::OPC_Decode, 182, 6, 25, // Opcode: LIS
/* 2851 */    MCD::OPC_Decode, 116, 26, // Opcode: ADDIS
/* 2854 */    MCD::OPC_FilterValue, 16, 7, 1, // Skip to: 3121
/* 2858 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 2861 */    MCD::OPC_FilterValue, 0, 61, 0, // Skip to: 2926
/* 2865 */    MCD::OPC_ExtractField, 16, 10,  // Inst{25-16} ...
/* 2868 */    MCD::OPC_FilterValue, 128, 4, 4, 0, // Skip to: 2877
/* 2873 */    MCD::OPC_Decode, 129, 2, 27, // Opcode: BDNZ
/* 2877 */    MCD::OPC_FilterValue, 192, 4, 4, 0, // Skip to: 2886
/* 2882 */    MCD::OPC_Decode, 149, 2, 27, // Opcode: BDZ
/* 2886 */    MCD::OPC_FilterValue, 128, 6, 4, 0, // Skip to: 2895
/* 2891 */    MCD::OPC_Decode, 147, 2, 27, // Opcode: BDNZm
/* 2895 */    MCD::OPC_FilterValue, 160, 6, 4, 0, // Skip to: 2904
/* 2900 */    MCD::OPC_Decode, 148, 2, 27, // Opcode: BDNZp
/* 2904 */    MCD::OPC_FilterValue, 192, 6, 4, 0, // Skip to: 2913
/* 2909 */    MCD::OPC_Decode, 167, 2, 27, // Opcode: BDZm
/* 2913 */    MCD::OPC_FilterValue, 224, 6, 4, 0, // Skip to: 2922
/* 2918 */    MCD::OPC_Decode, 168, 2, 27, // Opcode: BDZp
/* 2922 */    MCD::OPC_Decode, 163, 15, 28, // Opcode: gBC
/* 2926 */    MCD::OPC_FilterValue, 1, 61, 0, // Skip to: 2991
/* 2930 */    MCD::OPC_ExtractField, 16, 10,  // Inst{25-16} ...
/* 2933 */    MCD::OPC_FilterValue, 128, 4, 4, 0, // Skip to: 2942
/* 2938 */    MCD::OPC_Decode, 134, 2, 27, // Opcode: BDNZL
/* 2942 */    MCD::OPC_FilterValue, 192, 4, 4, 0, // Skip to: 2951
/* 2947 */    MCD::OPC_Decode, 154, 2, 27, // Opcode: BDZL
/* 2951 */    MCD::OPC_FilterValue, 128, 6, 4, 0, // Skip to: 2960
/* 2956 */    MCD::OPC_Decode, 145, 2, 27, // Opcode: BDNZLm
/* 2960 */    MCD::OPC_FilterValue, 160, 6, 4, 0, // Skip to: 2969
/* 2965 */    MCD::OPC_Decode, 146, 2, 27, // Opcode: BDNZLp
/* 2969 */    MCD::OPC_FilterValue, 192, 6, 4, 0, // Skip to: 2978
/* 2974 */    MCD::OPC_Decode, 165, 2, 27, // Opcode: BDZLm
/* 2978 */    MCD::OPC_FilterValue, 224, 6, 4, 0, // Skip to: 2987
/* 2983 */    MCD::OPC_Decode, 166, 2, 27, // Opcode: BDZLp
/* 2987 */    MCD::OPC_Decode, 168, 15, 28, // Opcode: gBCL
/* 2991 */    MCD::OPC_FilterValue, 2, 61, 0, // Skip to: 3056
/* 2995 */    MCD::OPC_ExtractField, 16, 10,  // Inst{25-16} ...
/* 2998 */    MCD::OPC_FilterValue, 128, 4, 4, 0, // Skip to: 3007
/* 3003 */    MCD::OPC_Decode, 131, 2, 27, // Opcode: BDNZA
/* 3007 */    MCD::OPC_FilterValue, 192, 4, 4, 0, // Skip to: 3016
/* 3012 */    MCD::OPC_Decode, 151, 2, 27, // Opcode: BDZA
/* 3016 */    MCD::OPC_FilterValue, 128, 6, 4, 0, // Skip to: 3025
/* 3021 */    MCD::OPC_Decode, 132, 2, 27, // Opcode: BDNZAm
/* 3025 */    MCD::OPC_FilterValue, 160, 6, 4, 0, // Skip to: 3034
/* 3030 */    MCD::OPC_Decode, 133, 2, 27, // Opcode: BDNZAp
/* 3034 */    MCD::OPC_FilterValue, 192, 6, 4, 0, // Skip to: 3043
/* 3039 */    MCD::OPC_Decode, 152, 2, 27, // Opcode: BDZAm
/* 3043 */    MCD::OPC_FilterValue, 224, 6, 4, 0, // Skip to: 3052
/* 3048 */    MCD::OPC_Decode, 153, 2, 27, // Opcode: BDZAp
/* 3052 */    MCD::OPC_Decode, 164, 15, 28, // Opcode: gBCA
/* 3056 */    MCD::OPC_FilterValue, 3, 254, 41, // Skip to: 13810
/* 3060 */    MCD::OPC_ExtractField, 16, 10,  // Inst{25-16} ...
/* 3063 */    MCD::OPC_FilterValue, 128, 4, 4, 0, // Skip to: 3072
/* 3068 */    MCD::OPC_Decode, 135, 2, 27, // Opcode: BDNZLA
/* 3072 */    MCD::OPC_FilterValue, 192, 4, 4, 0, // Skip to: 3081
/* 3077 */    MCD::OPC_Decode, 155, 2, 27, // Opcode: BDZLA
/* 3081 */    MCD::OPC_FilterValue, 128, 6, 4, 0, // Skip to: 3090
/* 3086 */    MCD::OPC_Decode, 136, 2, 27, // Opcode: BDNZLAm
/* 3090 */    MCD::OPC_FilterValue, 160, 6, 4, 0, // Skip to: 3099
/* 3095 */    MCD::OPC_Decode, 137, 2, 27, // Opcode: BDNZLAp
/* 3099 */    MCD::OPC_FilterValue, 192, 6, 4, 0, // Skip to: 3108
/* 3104 */    MCD::OPC_Decode, 156, 2, 27, // Opcode: BDZLAm
/* 3108 */    MCD::OPC_FilterValue, 224, 6, 4, 0, // Skip to: 3117
/* 3113 */    MCD::OPC_Decode, 157, 2, 27, // Opcode: BDZLAp
/* 3117 */    MCD::OPC_Decode, 169, 15, 28, // Opcode: gBCLA
/* 3121 */    MCD::OPC_FilterValue, 17, 10, 0, // Skip to: 3135
/* 3125 */    MCD::OPC_CheckField, 1, 1, 1, 183, 41, // Skip to: 13810
/* 3131 */    MCD::OPC_Decode, 174, 9, 29, // Opcode: SC
/* 3135 */    MCD::OPC_FilterValue, 18, 35, 0, // Skip to: 3174
/* 3139 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 3142 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 3150
/* 3146 */    MCD::OPC_Decode, 210, 1, 30, // Opcode: B
/* 3150 */    MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 3158
/* 3154 */    MCD::OPC_Decode, 169, 2, 30, // Opcode: BL
/* 3158 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 3166
/* 3162 */    MCD::OPC_Decode, 211, 1, 30, // Opcode: BA
/* 3166 */    MCD::OPC_FilterValue, 3, 144, 41, // Skip to: 13810
/* 3170 */    MCD::OPC_Decode, 175, 2, 30, // Opcode: BLA
/* 3174 */    MCD::OPC_FilterValue, 19, 39, 2, // Skip to: 3729
/* 3178 */    MCD::OPC_ExtractField, 0, 11,  // Inst{10-0} ...
/* 3181 */    MCD::OPC_FilterValue, 0, 16, 0, // Skip to: 3201
/* 3185 */    MCD::OPC_CheckField, 21, 2, 0, 123, 41, // Skip to: 13810
/* 3191 */    MCD::OPC_CheckField, 11, 7, 0, 117, 41, // Skip to: 13810
/* 3197 */    MCD::OPC_Decode, 232, 6, 31, // Opcode: MCRF
/* 3201 */    MCD::OPC_FilterValue, 32, 119, 0, // Skip to: 3324
/* 3205 */    MCD::OPC_ExtractField, 13, 3,  // Inst{15-13} ...
/* 3208 */    MCD::OPC_FilterValue, 0, 102, 41, // Skip to: 13810
/* 3212 */    MCD::OPC_ExtractField, 16, 10,  // Inst{25-16} ...
/* 3215 */    MCD::OPC_FilterValue, 128, 4, 10, 0, // Skip to: 3230
/* 3220 */    MCD::OPC_CheckField, 11, 2, 0, 94, 0, // Skip to: 3320
/* 3226 */    MCD::OPC_Decode, 138, 2, 0, // Opcode: BDNZLR
/* 3230 */    MCD::OPC_FilterValue, 192, 4, 10, 0, // Skip to: 3245
/* 3235 */    MCD::OPC_CheckField, 11, 2, 0, 79, 0, // Skip to: 3320
/* 3241 */    MCD::OPC_Decode, 158, 2, 0, // Opcode: BDZLR
/* 3245 */    MCD::OPC_FilterValue, 128, 5, 10, 0, // Skip to: 3260
/* 3250 */    MCD::OPC_CheckField, 11, 2, 0, 64, 0, // Skip to: 3320
/* 3256 */    MCD::OPC_Decode, 178, 2, 0, // Opcode: BLR
/* 3260 */    MCD::OPC_FilterValue, 128, 6, 10, 0, // Skip to: 3275
/* 3265 */    MCD::OPC_CheckField, 11, 2, 0, 49, 0, // Skip to: 3320
/* 3271 */    MCD::OPC_Decode, 143, 2, 0, // Opcode: BDNZLRm
/* 3275 */    MCD::OPC_FilterValue, 160, 6, 10, 0, // Skip to: 3290
/* 3280 */    MCD::OPC_CheckField, 11, 2, 0, 34, 0, // Skip to: 3320
/* 3286 */    MCD::OPC_Decode, 144, 2, 0, // Opcode: BDNZLRp
/* 3290 */    MCD::OPC_FilterValue, 192, 6, 10, 0, // Skip to: 3305
/* 3295 */    MCD::OPC_CheckField, 11, 2, 0, 19, 0, // Skip to: 3320
/* 3301 */    MCD::OPC_Decode, 163, 2, 0, // Opcode: BDZLRm
/* 3305 */    MCD::OPC_FilterValue, 224, 6, 10, 0, // Skip to: 3320
/* 3310 */    MCD::OPC_CheckField, 11, 2, 0, 4, 0, // Skip to: 3320
/* 3316 */    MCD::OPC_Decode, 164, 2, 0, // Opcode: BDZLRp
/* 3320 */    MCD::OPC_Decode, 171, 15, 32, // Opcode: gBCLR
/* 3324 */    MCD::OPC_FilterValue, 33, 119, 0, // Skip to: 3447
/* 3328 */    MCD::OPC_ExtractField, 13, 3,  // Inst{15-13} ...
/* 3331 */    MCD::OPC_FilterValue, 0, 235, 40, // Skip to: 13810
/* 3335 */    MCD::OPC_ExtractField, 16, 10,  // Inst{25-16} ...
/* 3338 */    MCD::OPC_FilterValue, 128, 4, 10, 0, // Skip to: 3353
/* 3343 */    MCD::OPC_CheckField, 11, 2, 0, 94, 0, // Skip to: 3443
/* 3349 */    MCD::OPC_Decode, 140, 2, 0, // Opcode: BDNZLRL
/* 3353 */    MCD::OPC_FilterValue, 192, 4, 10, 0, // Skip to: 3368
/* 3358 */    MCD::OPC_CheckField, 11, 2, 0, 79, 0, // Skip to: 3443
/* 3364 */    MCD::OPC_Decode, 160, 2, 0, // Opcode: BDZLRL
/* 3368 */    MCD::OPC_FilterValue, 128, 5, 10, 0, // Skip to: 3383
/* 3373 */    MCD::OPC_CheckField, 11, 2, 0, 64, 0, // Skip to: 3443
/* 3379 */    MCD::OPC_Decode, 180, 2, 0, // Opcode: BLRL
/* 3383 */    MCD::OPC_FilterValue, 128, 6, 10, 0, // Skip to: 3398
/* 3388 */    MCD::OPC_CheckField, 11, 2, 0, 49, 0, // Skip to: 3443
/* 3394 */    MCD::OPC_Decode, 141, 2, 0, // Opcode: BDNZLRLm
/* 3398 */    MCD::OPC_FilterValue, 160, 6, 10, 0, // Skip to: 3413
/* 3403 */    MCD::OPC_CheckField, 11, 2, 0, 34, 0, // Skip to: 3443
/* 3409 */    MCD::OPC_Decode, 142, 2, 0, // Opcode: BDNZLRLp
/* 3413 */    MCD::OPC_FilterValue, 192, 6, 10, 0, // Skip to: 3428
/* 3418 */    MCD::OPC_CheckField, 11, 2, 0, 19, 0, // Skip to: 3443
/* 3424 */    MCD::OPC_Decode, 161, 2, 0, // Opcode: BDZLRLm
/* 3428 */    MCD::OPC_FilterValue, 224, 6, 10, 0, // Skip to: 3443
/* 3433 */    MCD::OPC_CheckField, 11, 2, 0, 4, 0, // Skip to: 3443
/* 3439 */    MCD::OPC_Decode, 162, 2, 0, // Opcode: BDZLRLp
/* 3443 */    MCD::OPC_Decode, 172, 15, 32, // Opcode: gBCLRL
/* 3447 */    MCD::OPC_FilterValue, 36, 10, 0, // Skip to: 3461
/* 3451 */    MCD::OPC_CheckField, 11, 15, 0, 113, 40, // Skip to: 13810
/* 3457 */    MCD::OPC_Decode, 136, 9, 0, // Opcode: RFID
/* 3461 */    MCD::OPC_FilterValue, 66, 4, 0, // Skip to: 3469
/* 3465 */    MCD::OPC_Decode, 235, 2, 33, // Opcode: CRNOR
/* 3469 */    MCD::OPC_FilterValue, 76, 10, 0, // Skip to: 3483
/* 3473 */    MCD::OPC_CheckField, 11, 15, 0, 91, 40, // Skip to: 13810
/* 3479 */    MCD::OPC_Decode, 137, 9, 0, // Opcode: RFMCI
/* 3483 */    MCD::OPC_FilterValue, 78, 10, 0, // Skip to: 3497
/* 3487 */    MCD::OPC_CheckField, 11, 15, 0, 77, 40, // Skip to: 13810
/* 3493 */    MCD::OPC_Decode, 133, 9, 0, // Opcode: RFDI
/* 3497 */    MCD::OPC_FilterValue, 100, 10, 0, // Skip to: 3511
/* 3501 */    MCD::OPC_CheckField, 11, 15, 0, 63, 40, // Skip to: 13810
/* 3507 */    MCD::OPC_Decode, 135, 9, 0, // Opcode: RFI
/* 3511 */    MCD::OPC_FilterValue, 102, 10, 0, // Skip to: 3525
/* 3515 */    MCD::OPC_CheckField, 11, 15, 0, 49, 40, // Skip to: 13810
/* 3521 */    MCD::OPC_Decode, 132, 9, 0, // Opcode: RFCI
/* 3525 */    MCD::OPC_FilterValue, 130, 2, 4, 0, // Skip to: 3534
/* 3530 */    MCD::OPC_Decode, 232, 2, 33, // Opcode: CRANDC
/* 3534 */    MCD::OPC_FilterValue, 164, 2, 10, 0, // Skip to: 3549
/* 3539 */    MCD::OPC_CheckField, 12, 14, 0, 25, 40, // Skip to: 13810
/* 3545 */    MCD::OPC_Decode, 134, 9, 34, // Opcode: RFEBB
/* 3549 */    MCD::OPC_FilterValue, 172, 2, 10, 0, // Skip to: 3564
/* 3554 */    MCD::OPC_CheckField, 11, 15, 0, 10, 40, // Skip to: 13810
/* 3560 */    MCD::OPC_Decode, 246, 5, 0, // Opcode: ISYNC
/* 3564 */    MCD::OPC_FilterValue, 130, 3, 4, 0, // Skip to: 3573
/* 3569 */    MCD::OPC_Decode, 240, 2, 33, // Opcode: CRXOR
/* 3573 */    MCD::OPC_FilterValue, 194, 3, 4, 0, // Skip to: 3582
/* 3578 */    MCD::OPC_Decode, 234, 2, 33, // Opcode: CRNAND
/* 3582 */    MCD::OPC_FilterValue, 130, 4, 4, 0, // Skip to: 3591
/* 3587 */    MCD::OPC_Decode, 231, 2, 33, // Opcode: CRAND
/* 3591 */    MCD::OPC_FilterValue, 164, 4, 10, 0, // Skip to: 3606
/* 3596 */    MCD::OPC_CheckField, 11, 15, 0, 224, 39, // Skip to: 13810
/* 3602 */    MCD::OPC_Decode, 231, 5, 0, // Opcode: HRFID
/* 3606 */    MCD::OPC_FilterValue, 194, 4, 4, 0, // Skip to: 3615
/* 3611 */    MCD::OPC_Decode, 233, 2, 33, // Opcode: CREQV
/* 3615 */    MCD::OPC_FilterValue, 228, 5, 10, 0, // Skip to: 3630
/* 3620 */    MCD::OPC_CheckField, 11, 15, 0, 200, 39, // Skip to: 13810
/* 3626 */    MCD::OPC_Decode, 146, 10, 0, // Opcode: STOP
/* 3630 */    MCD::OPC_FilterValue, 194, 6, 4, 0, // Skip to: 3639
/* 3635 */    MCD::OPC_Decode, 237, 2, 33, // Opcode: CRORC
/* 3639 */    MCD::OPC_FilterValue, 228, 6, 10, 0, // Skip to: 3654
/* 3644 */    MCD::OPC_CheckField, 11, 15, 0, 176, 39, // Skip to: 13810
/* 3650 */    MCD::OPC_Decode, 190, 7, 0, // Opcode: NAP
/* 3654 */    MCD::OPC_FilterValue, 130, 7, 4, 0, // Skip to: 3663
/* 3659 */    MCD::OPC_Decode, 236, 2, 33, // Opcode: CROR
/* 3663 */    MCD::OPC_FilterValue, 160, 8, 28, 0, // Skip to: 3696
/* 3668 */    MCD::OPC_ExtractField, 13, 3,  // Inst{15-13} ...
/* 3671 */    MCD::OPC_FilterValue, 0, 151, 39, // Skip to: 13810
/* 3675 */    MCD::OPC_CheckField, 16, 10, 128, 5, 10, 0, // Skip to: 3692
/* 3682 */    MCD::OPC_CheckField, 11, 2, 0, 4, 0, // Skip to: 3692
/* 3688 */    MCD::OPC_Decode, 251, 1, 0, // Opcode: BCTR
/* 3692 */    MCD::OPC_Decode, 166, 15, 32, // Opcode: gBCCTR
/* 3696 */    MCD::OPC_FilterValue, 161, 8, 125, 39, // Skip to: 13810
/* 3701 */    MCD::OPC_ExtractField, 13, 3,  // Inst{15-13} ...
/* 3704 */    MCD::OPC_FilterValue, 0, 118, 39, // Skip to: 13810
/* 3708 */    MCD::OPC_CheckField, 16, 10, 128, 5, 10, 0, // Skip to: 3725
/* 3715 */    MCD::OPC_CheckField, 11, 2, 0, 4, 0, // Skip to: 3725
/* 3721 */    MCD::OPC_Decode, 253, 1, 0, // Opcode: BCTRL
/* 3725 */    MCD::OPC_Decode, 167, 15, 32, // Opcode: gBCCTRL
/* 3729 */    MCD::OPC_FilterValue, 20, 19, 0, // Skip to: 3752
/* 3733 */    MCD::OPC_ExtractField, 0, 1,  // Inst{0} ...
/* 3736 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 3744
/* 3740 */    MCD::OPC_Decode, 151, 9, 35, // Opcode: RLWIMI
/* 3744 */    MCD::OPC_FilterValue, 1, 78, 39, // Skip to: 13810
/* 3748 */    MCD::OPC_Decode, 155, 9, 35, // Opcode: RLWIMIo
/* 3752 */    MCD::OPC_FilterValue, 21, 19, 0, // Skip to: 3775
/* 3756 */    MCD::OPC_ExtractField, 0, 1,  // Inst{0} ...
/* 3759 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 3767
/* 3763 */    MCD::OPC_Decode, 157, 9, 36, // Opcode: RLWINM
/* 3767 */    MCD::OPC_FilterValue, 1, 55, 39, // Skip to: 13810
/* 3771 */    MCD::OPC_Decode, 161, 9, 36, // Opcode: RLWINMo
/* 3775 */    MCD::OPC_FilterValue, 23, 19, 0, // Skip to: 3798
/* 3779 */    MCD::OPC_ExtractField, 0, 1,  // Inst{0} ...
/* 3782 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 3790
/* 3786 */    MCD::OPC_Decode, 163, 9, 37, // Opcode: RLWNM
/* 3790 */    MCD::OPC_FilterValue, 1, 32, 39, // Skip to: 13810
/* 3794 */    MCD::OPC_Decode, 167, 9, 37, // Opcode: RLWNMo
/* 3798 */    MCD::OPC_FilterValue, 24, 14, 0, // Skip to: 3816
/* 3802 */    MCD::OPC_CheckField, 0, 26, 0, 4, 0, // Skip to: 3812
/* 3808 */    MCD::OPC_Decode, 195, 7, 0, // Opcode: NOP
/* 3812 */    MCD::OPC_Decode, 209, 7, 38, // Opcode: ORI
/* 3816 */    MCD::OPC_FilterValue, 25, 4, 0, // Skip to: 3824
/* 3820 */    MCD::OPC_Decode, 211, 7, 38, // Opcode: ORIS
/* 3824 */    MCD::OPC_FilterValue, 26, 4, 0, // Skip to: 3832
/* 3828 */    MCD::OPC_Decode, 167, 13, 38, // Opcode: XORI
/* 3832 */    MCD::OPC_FilterValue, 27, 4, 0, // Skip to: 3840
/* 3836 */    MCD::OPC_Decode, 169, 13, 38, // Opcode: XORIS
/* 3840 */    MCD::OPC_FilterValue, 28, 4, 0, // Skip to: 3848
/* 3844 */    MCD::OPC_Decode, 154, 1, 38, // Opcode: ANDIo
/* 3848 */    MCD::OPC_FilterValue, 29, 4, 0, // Skip to: 3856
/* 3852 */    MCD::OPC_Decode, 152, 1, 38, // Opcode: ANDISo
/* 3856 */    MCD::OPC_FilterValue, 30, 134, 0, // Skip to: 3994
/* 3860 */    MCD::OPC_ExtractField, 2, 3,  // Inst{4-2} ...
/* 3863 */    MCD::OPC_FilterValue, 0, 19, 0, // Skip to: 3886
/* 3867 */    MCD::OPC_ExtractField, 0, 1,  // Inst{0} ...
/* 3870 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 3878
/* 3874 */    MCD::OPC_Decode, 143, 9, 39, // Opcode: RLDICL
/* 3878 */    MCD::OPC_FilterValue, 1, 200, 38, // Skip to: 13810
/* 3882 */    MCD::OPC_Decode, 145, 9, 39, // Opcode: RLDICLo
/* 3886 */    MCD::OPC_FilterValue, 1, 19, 0, // Skip to: 3909
/* 3890 */    MCD::OPC_ExtractField, 0, 1,  // Inst{0} ...
/* 3893 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 3901
/* 3897 */    MCD::OPC_Decode, 146, 9, 39, // Opcode: RLDICR
/* 3901 */    MCD::OPC_FilterValue, 1, 177, 38, // Skip to: 13810
/* 3905 */    MCD::OPC_Decode, 147, 9, 39, // Opcode: RLDICRo
/* 3909 */    MCD::OPC_FilterValue, 2, 19, 0, // Skip to: 3932
/* 3913 */    MCD::OPC_ExtractField, 0, 1,  // Inst{0} ...
/* 3916 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 3924
/* 3920 */    MCD::OPC_Decode, 142, 9, 39, // Opcode: RLDIC
/* 3924 */    MCD::OPC_FilterValue, 1, 154, 38, // Skip to: 13810
/* 3928 */    MCD::OPC_Decode, 148, 9, 39, // Opcode: RLDICo
/* 3932 */    MCD::OPC_FilterValue, 3, 19, 0, // Skip to: 3955
/* 3936 */    MCD::OPC_ExtractField, 0, 1,  // Inst{0} ...
/* 3939 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 3947
/* 3943 */    MCD::OPC_Decode, 149, 9, 40, // Opcode: RLDIMI
/* 3947 */    MCD::OPC_FilterValue, 1, 131, 38, // Skip to: 13810
/* 3951 */    MCD::OPC_Decode, 150, 9, 40, // Opcode: RLDIMIo
/* 3955 */    MCD::OPC_FilterValue, 4, 123, 38, // Skip to: 13810
/* 3959 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 3962 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 3970
/* 3966 */    MCD::OPC_Decode, 138, 9, 41, // Opcode: RLDCL
/* 3970 */    MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 3978
/* 3974 */    MCD::OPC_Decode, 139, 9, 41, // Opcode: RLDCLo
/* 3978 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 3986
/* 3982 */    MCD::OPC_Decode, 140, 9, 41, // Opcode: RLDCR
/* 3986 */    MCD::OPC_FilterValue, 3, 92, 38, // Skip to: 13810
/* 3990 */    MCD::OPC_Decode, 141, 9, 41, // Opcode: RLDCRo
/* 3994 */    MCD::OPC_FilterValue, 31, 45, 17, // Skip to: 8395
/* 3998 */    MCD::OPC_ExtractField, 2, 4,  // Inst{5-2} ...
/* 4001 */    MCD::OPC_FilterValue, 0, 133, 0, // Skip to: 4138
/* 4005 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 4008 */    MCD::OPC_FilterValue, 0, 31, 0, // Skip to: 4043
/* 4012 */    MCD::OPC_ExtractField, 21, 2,  // Inst{22-21} ...
/* 4015 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 4029
/* 4019 */    MCD::OPC_CheckField, 0, 2, 0, 57, 38, // Skip to: 13810
/* 4025 */    MCD::OPC_Decode, 204, 2, 42, // Opcode: CMPW
/* 4029 */    MCD::OPC_FilterValue, 1, 49, 38, // Skip to: 13810
/* 4033 */    MCD::OPC_CheckField, 0, 2, 0, 43, 38, // Skip to: 13810
/* 4039 */    MCD::OPC_Decode, 195, 2, 43, // Opcode: CMPD
/* 4043 */    MCD::OPC_FilterValue, 1, 31, 0, // Skip to: 4078
/* 4047 */    MCD::OPC_ExtractField, 21, 2,  // Inst{22-21} ...
/* 4050 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 4064
/* 4054 */    MCD::OPC_CheckField, 0, 2, 0, 22, 38, // Skip to: 13810
/* 4060 */    MCD::OPC_Decode, 200, 2, 42, // Opcode: CMPLW
/* 4064 */    MCD::OPC_FilterValue, 1, 14, 38, // Skip to: 13810
/* 4068 */    MCD::OPC_CheckField, 0, 2, 0, 8, 38, // Skip to: 13810
/* 4074 */    MCD::OPC_Decode, 198, 2, 43, // Opcode: CMPLD
/* 4078 */    MCD::OPC_FilterValue, 6, 16, 0, // Skip to: 4098
/* 4082 */    MCD::OPC_CheckField, 22, 1, 0, 250, 37, // Skip to: 13810
/* 4088 */    MCD::OPC_CheckField, 0, 2, 0, 244, 37, // Skip to: 13810
/* 4094 */    MCD::OPC_Decode, 202, 2, 44, // Opcode: CMPRB
/* 4098 */    MCD::OPC_FilterValue, 7, 16, 0, // Skip to: 4118
/* 4102 */    MCD::OPC_CheckField, 21, 2, 0, 230, 37, // Skip to: 13810
/* 4108 */    MCD::OPC_CheckField, 0, 2, 0, 224, 37, // Skip to: 13810
/* 4114 */    MCD::OPC_Decode, 197, 2, 45, // Opcode: CMPEQB
/* 4118 */    MCD::OPC_FilterValue, 18, 216, 37, // Skip to: 13810
/* 4122 */    MCD::OPC_CheckField, 11, 12, 0, 210, 37, // Skip to: 13810
/* 4128 */    MCD::OPC_CheckField, 0, 2, 0, 204, 37, // Skip to: 13810
/* 4134 */    MCD::OPC_Decode, 234, 6, 46, // Opcode: MCRXRX
/* 4138 */    MCD::OPC_FilterValue, 1, 65, 0, // Skip to: 4207
/* 4142 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 4145 */    MCD::OPC_FilterValue, 4, 16, 0, // Skip to: 4165
/* 4149 */    MCD::OPC_CheckField, 16, 1, 0, 183, 37, // Skip to: 13810
/* 4155 */    MCD::OPC_CheckField, 1, 1, 1, 177, 37, // Skip to: 13810
/* 4161 */    MCD::OPC_Decode, 162, 13, 47, // Opcode: WRTEE
/* 4165 */    MCD::OPC_FilterValue, 5, 10, 0, // Skip to: 4179
/* 4169 */    MCD::OPC_CheckField, 1, 1, 1, 163, 37, // Skip to: 13810
/* 4175 */    MCD::OPC_Decode, 163, 13, 48, // Opcode: WRTEEI
/* 4179 */    MCD::OPC_FilterValue, 10, 10, 0, // Skip to: 4193
/* 4183 */    MCD::OPC_CheckField, 0, 2, 2, 149, 37, // Skip to: 13810
/* 4189 */    MCD::OPC_Decode, 240, 6, 49, // Opcode: MFDCR
/* 4193 */    MCD::OPC_FilterValue, 14, 141, 37, // Skip to: 13810
/* 4197 */    MCD::OPC_CheckField, 0, 2, 2, 135, 37, // Skip to: 13810
/* 4203 */    MCD::OPC_Decode, 142, 7, 49, // Opcode: MTDCR
/* 4207 */    MCD::OPC_FilterValue, 2, 44, 0, // Skip to: 4255
/* 4211 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 4214 */    MCD::OPC_FilterValue, 0, 23, 0, // Skip to: 4241
/* 4218 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 4221 */    MCD::OPC_FilterValue, 0, 113, 37, // Skip to: 13810
/* 4225 */    MCD::OPC_CheckField, 11, 15, 128, 248, 1, 4, 0, // Skip to: 4237
/* 4233 */    MCD::OPC_Decode, 246, 10, 0, // Opcode: TRAP
/* 4237 */    MCD::OPC_Decode, 250, 10, 50, // Opcode: TW
/* 4241 */    MCD::OPC_FilterValue, 2, 93, 37, // Skip to: 13810
/* 4245 */    MCD::OPC_CheckField, 0, 2, 0, 87, 37, // Skip to: 13810
/* 4251 */    MCD::OPC_Decode, 229, 10, 51, // Opcode: TD
/* 4255 */    MCD::OPC_FilterValue, 3, 121, 1, // Skip to: 4636
/* 4259 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 4262 */    MCD::OPC_FilterValue, 0, 19, 0, // Skip to: 4285
/* 4266 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 4269 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 4277
/* 4273 */    MCD::OPC_Decode, 189, 6, 52, // Opcode: LVSL
/* 4277 */    MCD::OPC_FilterValue, 2, 57, 37, // Skip to: 13810
/* 4281 */    MCD::OPC_Decode, 186, 6, 52, // Opcode: LVEBX
/* 4285 */    MCD::OPC_FilterValue, 1, 19, 0, // Skip to: 4308
/* 4289 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 4292 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 4300
/* 4296 */    MCD::OPC_Decode, 190, 6, 52, // Opcode: LVSR
/* 4300 */    MCD::OPC_FilterValue, 2, 34, 37, // Skip to: 13810
/* 4304 */    MCD::OPC_Decode, 187, 6, 52, // Opcode: LVEHX
/* 4308 */    MCD::OPC_FilterValue, 2, 10, 0, // Skip to: 4322
/* 4312 */    MCD::OPC_CheckField, 0, 2, 2, 20, 37, // Skip to: 13810
/* 4318 */    MCD::OPC_Decode, 188, 6, 52, // Opcode: LVEWX
/* 4322 */    MCD::OPC_FilterValue, 3, 10, 0, // Skip to: 4336
/* 4326 */    MCD::OPC_CheckField, 0, 2, 2, 6, 37, // Skip to: 13810
/* 4332 */    MCD::OPC_Decode, 191, 6, 52, // Opcode: LVX
/* 4336 */    MCD::OPC_FilterValue, 4, 10, 0, // Skip to: 4350
/* 4340 */    MCD::OPC_CheckField, 0, 2, 2, 248, 36, // Skip to: 13810
/* 4346 */    MCD::OPC_Decode, 148, 10, 52, // Opcode: STVEBX
/* 4350 */    MCD::OPC_FilterValue, 5, 10, 0, // Skip to: 4364
/* 4354 */    MCD::OPC_CheckField, 0, 2, 2, 234, 36, // Skip to: 13810
/* 4360 */    MCD::OPC_Decode, 149, 10, 52, // Opcode: STVEHX
/* 4364 */    MCD::OPC_FilterValue, 6, 25, 0, // Skip to: 4393
/* 4368 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 4371 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 4385
/* 4375 */    MCD::OPC_CheckField, 25, 1, 0, 213, 36, // Skip to: 13810
/* 4381 */    MCD::OPC_Decode, 234, 5, 53, // Opcode: ICBLQ
/* 4385 */    MCD::OPC_FilterValue, 2, 205, 36, // Skip to: 13810
/* 4389 */    MCD::OPC_Decode, 150, 10, 52, // Opcode: STVEWX
/* 4393 */    MCD::OPC_FilterValue, 7, 25, 0, // Skip to: 4422
/* 4397 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 4400 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 4414
/* 4404 */    MCD::OPC_CheckField, 25, 1, 0, 184, 36, // Skip to: 13810
/* 4410 */    MCD::OPC_Decode, 233, 5, 53, // Opcode: ICBLC
/* 4414 */    MCD::OPC_FilterValue, 2, 176, 36, // Skip to: 13810
/* 4418 */    MCD::OPC_Decode, 151, 10, 52, // Opcode: STVX
/* 4422 */    MCD::OPC_FilterValue, 11, 10, 0, // Skip to: 4436
/* 4426 */    MCD::OPC_CheckField, 0, 2, 2, 162, 36, // Skip to: 13810
/* 4432 */    MCD::OPC_Decode, 192, 6, 52, // Opcode: LVXL
/* 4436 */    MCD::OPC_FilterValue, 14, 16, 0, // Skip to: 4456
/* 4440 */    MCD::OPC_CheckField, 21, 5, 0, 148, 36, // Skip to: 13810
/* 4446 */    MCD::OPC_CheckField, 0, 2, 0, 142, 36, // Skip to: 13810
/* 4452 */    MCD::OPC_Decode, 132, 3, 54, // Opcode: DCCCI
/* 4456 */    MCD::OPC_FilterValue, 15, 25, 0, // Skip to: 4485
/* 4460 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 4463 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 4477
/* 4467 */    MCD::OPC_CheckField, 25, 1, 0, 121, 36, // Skip to: 13810
/* 4473 */    MCD::OPC_Decode, 236, 5, 53, // Opcode: ICBTLS
/* 4477 */    MCD::OPC_FilterValue, 2, 113, 36, // Skip to: 13810
/* 4481 */    MCD::OPC_Decode, 152, 10, 52, // Opcode: STVXL
/* 4485 */    MCD::OPC_FilterValue, 18, 10, 0, // Skip to: 4499
/* 4489 */    MCD::OPC_CheckField, 0, 2, 0, 99, 36, // Skip to: 13810
/* 4495 */    MCD::OPC_Decode, 196, 6, 55, // Opcode: LWAT
/* 4499 */    MCD::OPC_FilterValue, 19, 10, 0, // Skip to: 4513
/* 4503 */    MCD::OPC_CheckField, 0, 2, 0, 85, 36, // Skip to: 13810
/* 4509 */    MCD::OPC_Decode, 135, 6, 56, // Opcode: LDAT
/* 4513 */    MCD::OPC_FilterValue, 22, 10, 0, // Skip to: 4527
/* 4517 */    MCD::OPC_CheckField, 0, 2, 0, 71, 36, // Skip to: 13810
/* 4523 */    MCD::OPC_Decode, 155, 10, 55, // Opcode: STWAT
/* 4527 */    MCD::OPC_FilterValue, 23, 10, 0, // Skip to: 4541
/* 4531 */    MCD::OPC_CheckField, 0, 2, 0, 57, 36, // Skip to: 13810
/* 4537 */    MCD::OPC_Decode, 246, 9, 56, // Opcode: STDAT
/* 4541 */    MCD::OPC_FilterValue, 24, 16, 0, // Skip to: 4561
/* 4545 */    MCD::OPC_CheckField, 22, 4, 0, 43, 36, // Skip to: 13810
/* 4551 */    MCD::OPC_CheckField, 0, 2, 0, 37, 36, // Skip to: 13810
/* 4557 */    MCD::OPC_Decode, 219, 2, 57, // Opcode: CP_COPY
/* 4561 */    MCD::OPC_FilterValue, 26, 16, 0, // Skip to: 4581
/* 4565 */    MCD::OPC_CheckField, 11, 15, 0, 23, 36, // Skip to: 13810
/* 4571 */    MCD::OPC_CheckField, 0, 2, 0, 17, 36, // Skip to: 13810
/* 4577 */    MCD::OPC_Decode, 218, 2, 0, // Opcode: CP_ABORT
/* 4581 */    MCD::OPC_FilterValue, 28, 31, 0, // Skip to: 4616
/* 4585 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 4588 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 4602
/* 4592 */    MCD::OPC_CheckField, 22, 4, 0, 252, 35, // Skip to: 13810
/* 4598 */    MCD::OPC_Decode, 223, 2, 57, // Opcode: CP_PASTE
/* 4602 */    MCD::OPC_FilterValue, 1, 244, 35, // Skip to: 13810
/* 4606 */    MCD::OPC_CheckField, 22, 4, 0, 238, 35, // Skip to: 13810
/* 4612 */    MCD::OPC_Decode, 227, 2, 57, // Opcode: CP_PASTEo
/* 4616 */    MCD::OPC_FilterValue, 30, 230, 35, // Skip to: 13810
/* 4620 */    MCD::OPC_CheckField, 21, 5, 0, 224, 35, // Skip to: 13810
/* 4626 */    MCD::OPC_CheckField, 0, 2, 0, 218, 35, // Skip to: 13810
/* 4632 */    MCD::OPC_Decode, 237, 5, 54, // Opcode: ICCCI
/* 4636 */    MCD::OPC_FilterValue, 4, 68, 1, // Skip to: 4964
/* 4640 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 4643 */    MCD::OPC_FilterValue, 0, 35, 0, // Skip to: 4682
/* 4647 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 4650 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 4658
/* 4654 */    MCD::OPC_Decode, 185, 10, 58, // Opcode: SUBFC
/* 4658 */    MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 4666
/* 4662 */    MCD::OPC_Decode, 188, 10, 58, // Opcode: SUBFCo
/* 4666 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 4674
/* 4670 */    MCD::OPC_Decode, 170, 7, 59, // Opcode: MULHDU
/* 4674 */    MCD::OPC_FilterValue, 3, 172, 35, // Skip to: 13810
/* 4678 */    MCD::OPC_Decode, 171, 7, 59, // Opcode: MULHDUo
/* 4682 */    MCD::OPC_FilterValue, 1, 19, 0, // Skip to: 4705
/* 4686 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 4689 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 4697
/* 4693 */    MCD::OPC_Decode, 182, 10, 58, // Opcode: SUBF
/* 4697 */    MCD::OPC_FilterValue, 1, 149, 35, // Skip to: 13810
/* 4701 */    MCD::OPC_Decode, 203, 10, 58, // Opcode: SUBFo
/* 4705 */    MCD::OPC_FilterValue, 2, 19, 0, // Skip to: 4728
/* 4709 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 4712 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 4720
/* 4716 */    MCD::OPC_Decode, 169, 7, 59, // Opcode: MULHD
/* 4720 */    MCD::OPC_FilterValue, 3, 126, 35, // Skip to: 13810
/* 4724 */    MCD::OPC_Decode, 172, 7, 59, // Opcode: MULHDo
/* 4728 */    MCD::OPC_FilterValue, 3, 31, 0, // Skip to: 4763
/* 4732 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 4735 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 4749
/* 4739 */    MCD::OPC_CheckField, 11, 5, 0, 105, 35, // Skip to: 13810
/* 4745 */    MCD::OPC_Decode, 191, 7, 60, // Opcode: NEG
/* 4749 */    MCD::OPC_FilterValue, 1, 97, 35, // Skip to: 13810
/* 4753 */    MCD::OPC_CheckField, 11, 5, 0, 91, 35, // Skip to: 13810
/* 4759 */    MCD::OPC_Decode, 194, 7, 60, // Opcode: NEGo
/* 4763 */    MCD::OPC_FilterValue, 4, 19, 0, // Skip to: 4786
/* 4767 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 4770 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 4778
/* 4774 */    MCD::OPC_Decode, 189, 10, 58, // Opcode: SUBFE
/* 4778 */    MCD::OPC_FilterValue, 1, 68, 35, // Skip to: 13810
/* 4782 */    MCD::OPC_Decode, 192, 10, 58, // Opcode: SUBFEo
/* 4786 */    MCD::OPC_FilterValue, 6, 31, 0, // Skip to: 4821
/* 4790 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 4793 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 4807
/* 4797 */    MCD::OPC_CheckField, 11, 5, 0, 47, 35, // Skip to: 13810
/* 4803 */    MCD::OPC_Decode, 199, 10, 60, // Opcode: SUBFZE
/* 4807 */    MCD::OPC_FilterValue, 1, 39, 35, // Skip to: 13810
/* 4811 */    MCD::OPC_CheckField, 11, 5, 0, 33, 35, // Skip to: 13810
/* 4817 */    MCD::OPC_Decode, 202, 10, 60, // Opcode: SUBFZEo
/* 4821 */    MCD::OPC_FilterValue, 7, 47, 0, // Skip to: 4872
/* 4825 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 4828 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 4842
/* 4832 */    MCD::OPC_CheckField, 11, 5, 0, 12, 35, // Skip to: 13810
/* 4838 */    MCD::OPC_Decode, 195, 10, 60, // Opcode: SUBFME
/* 4842 */    MCD::OPC_FilterValue, 1, 10, 0, // Skip to: 4856
/* 4846 */    MCD::OPC_CheckField, 11, 5, 0, 254, 34, // Skip to: 13810
/* 4852 */    MCD::OPC_Decode, 198, 10, 60, // Opcode: SUBFMEo
/* 4856 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 4864
/* 4860 */    MCD::OPC_Decode, 177, 7, 59, // Opcode: MULLD
/* 4864 */    MCD::OPC_FilterValue, 3, 238, 34, // Skip to: 13810
/* 4868 */    MCD::OPC_Decode, 178, 7, 59, // Opcode: MULLDo
/* 4872 */    MCD::OPC_FilterValue, 12, 19, 0, // Skip to: 4895
/* 4876 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 4879 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 4887
/* 4883 */    MCD::OPC_Decode, 139, 3, 59, // Opcode: DIVDEU
/* 4887 */    MCD::OPC_FilterValue, 3, 215, 34, // Skip to: 13810
/* 4891 */    MCD::OPC_Decode, 140, 3, 59, // Opcode: DIVDEUo
/* 4895 */    MCD::OPC_FilterValue, 13, 19, 0, // Skip to: 4918
/* 4899 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 4902 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 4910
/* 4906 */    MCD::OPC_Decode, 138, 3, 59, // Opcode: DIVDE
/* 4910 */    MCD::OPC_FilterValue, 3, 192, 34, // Skip to: 13810
/* 4914 */    MCD::OPC_Decode, 141, 3, 59, // Opcode: DIVDEo
/* 4918 */    MCD::OPC_FilterValue, 14, 19, 0, // Skip to: 4941
/* 4922 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 4925 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 4933
/* 4929 */    MCD::OPC_Decode, 142, 3, 59, // Opcode: DIVDU
/* 4933 */    MCD::OPC_FilterValue, 3, 169, 34, // Skip to: 13810
/* 4937 */    MCD::OPC_Decode, 143, 3, 59, // Opcode: DIVDUo
/* 4941 */    MCD::OPC_FilterValue, 15, 161, 34, // Skip to: 13810
/* 4945 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 4948 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 4956
/* 4952 */    MCD::OPC_Decode, 137, 3, 59, // Opcode: DIVD
/* 4956 */    MCD::OPC_FilterValue, 3, 146, 34, // Skip to: 13810
/* 4960 */    MCD::OPC_Decode, 144, 3, 59, // Opcode: DIVDo
/* 4964 */    MCD::OPC_FilterValue, 5, 27, 1, // Skip to: 5251
/* 4968 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 4971 */    MCD::OPC_FilterValue, 0, 33, 0, // Skip to: 5008
/* 4975 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 4978 */    MCD::OPC_FilterValue, 0, 3, 0, // Skip to: 4985
/* 4982 */    MCD::OPC_Decode, 103, 58, // Opcode: ADDC
/* 4985 */    MCD::OPC_FilterValue, 1, 3, 0, // Skip to: 4992
/* 4989 */    MCD::OPC_Decode, 106, 58, // Opcode: ADDCo
/* 4992 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 5000
/* 4996 */    MCD::OPC_Decode, 174, 7, 58, // Opcode: MULHWU
/* 5000 */    MCD::OPC_FilterValue, 3, 102, 34, // Skip to: 13810
/* 5004 */    MCD::OPC_Decode, 175, 7, 58, // Opcode: MULHWUo
/* 5008 */    MCD::OPC_FilterValue, 2, 19, 0, // Skip to: 5031
/* 5012 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 5015 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 5023
/* 5019 */    MCD::OPC_Decode, 173, 7, 58, // Opcode: MULHW
/* 5023 */    MCD::OPC_FilterValue, 3, 79, 34, // Skip to: 13810
/* 5027 */    MCD::OPC_Decode, 176, 7, 58, // Opcode: MULHWo
/* 5031 */    MCD::OPC_FilterValue, 4, 17, 0, // Skip to: 5052
/* 5035 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 5038 */    MCD::OPC_FilterValue, 0, 3, 0, // Skip to: 5045
/* 5042 */    MCD::OPC_Decode, 107, 58, // Opcode: ADDE
/* 5045 */    MCD::OPC_FilterValue, 1, 57, 34, // Skip to: 13810
/* 5049 */    MCD::OPC_Decode, 110, 58, // Opcode: ADDEo
/* 5052 */    MCD::OPC_FilterValue, 6, 31, 0, // Skip to: 5087
/* 5056 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 5059 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 5073
/* 5063 */    MCD::OPC_CheckField, 11, 5, 0, 37, 34, // Skip to: 13810
/* 5069 */    MCD::OPC_Decode, 139, 1, 60, // Opcode: ADDZE
/* 5073 */    MCD::OPC_FilterValue, 1, 29, 34, // Skip to: 13810
/* 5077 */    MCD::OPC_CheckField, 11, 5, 0, 23, 34, // Skip to: 13810
/* 5083 */    MCD::OPC_Decode, 142, 1, 60, // Opcode: ADDZEo
/* 5087 */    MCD::OPC_FilterValue, 7, 47, 0, // Skip to: 5138
/* 5091 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 5094 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 5108
/* 5098 */    MCD::OPC_CheckField, 11, 5, 0, 2, 34, // Skip to: 13810
/* 5104 */    MCD::OPC_Decode, 135, 1, 60, // Opcode: ADDME
/* 5108 */    MCD::OPC_FilterValue, 1, 10, 0, // Skip to: 5122
/* 5112 */    MCD::OPC_CheckField, 11, 5, 0, 244, 33, // Skip to: 13810
/* 5118 */    MCD::OPC_Decode, 138, 1, 60, // Opcode: ADDMEo
/* 5122 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 5130
/* 5126 */    MCD::OPC_Decode, 181, 7, 58, // Opcode: MULLW
/* 5130 */    MCD::OPC_FilterValue, 3, 228, 33, // Skip to: 13810
/* 5134 */    MCD::OPC_Decode, 182, 7, 58, // Opcode: MULLWo
/* 5138 */    MCD::OPC_FilterValue, 8, 17, 0, // Skip to: 5159
/* 5142 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 5145 */    MCD::OPC_FilterValue, 0, 3, 0, // Skip to: 5152
/* 5149 */    MCD::OPC_Decode, 96, 58, // Opcode: ADD4
/* 5152 */    MCD::OPC_FilterValue, 1, 206, 33, // Skip to: 13810
/* 5156 */    MCD::OPC_Decode, 98, 58, // Opcode: ADD4o
/* 5159 */    MCD::OPC_FilterValue, 12, 19, 0, // Skip to: 5182
/* 5163 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 5166 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 5174
/* 5170 */    MCD::OPC_Decode, 147, 3, 58, // Opcode: DIVWEU
/* 5174 */    MCD::OPC_FilterValue, 3, 184, 33, // Skip to: 13810
/* 5178 */    MCD::OPC_Decode, 148, 3, 58, // Opcode: DIVWEUo
/* 5182 */    MCD::OPC_FilterValue, 13, 19, 0, // Skip to: 5205
/* 5186 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 5189 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 5197
/* 5193 */    MCD::OPC_Decode, 146, 3, 58, // Opcode: DIVWE
/* 5197 */    MCD::OPC_FilterValue, 3, 161, 33, // Skip to: 13810
/* 5201 */    MCD::OPC_Decode, 149, 3, 58, // Opcode: DIVWEo
/* 5205 */    MCD::OPC_FilterValue, 14, 19, 0, // Skip to: 5228
/* 5209 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 5212 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 5220
/* 5216 */    MCD::OPC_Decode, 150, 3, 58, // Opcode: DIVWU
/* 5220 */    MCD::OPC_FilterValue, 3, 138, 33, // Skip to: 13810
/* 5224 */    MCD::OPC_Decode, 151, 3, 58, // Opcode: DIVWUo
/* 5228 */    MCD::OPC_FilterValue, 15, 130, 33, // Skip to: 13810
/* 5232 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 5235 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 5243
/* 5239 */    MCD::OPC_Decode, 145, 3, 58, // Opcode: DIVW
/* 5243 */    MCD::OPC_FilterValue, 3, 115, 33, // Skip to: 13810
/* 5247 */    MCD::OPC_Decode, 152, 3, 58, // Opcode: DIVWo
/* 5251 */    MCD::OPC_FilterValue, 6, 95, 1, // Skip to: 5606
/* 5255 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 5258 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 5272
/* 5262 */    MCD::OPC_CheckField, 1, 1, 0, 94, 33, // Skip to: 13810
/* 5268 */    MCD::OPC_Decode, 218, 6, 61, // Opcode: LXSIWZX
/* 5272 */    MCD::OPC_FilterValue, 2, 10, 0, // Skip to: 5286
/* 5276 */    MCD::OPC_CheckField, 1, 1, 0, 80, 33, // Skip to: 13810
/* 5282 */    MCD::OPC_Decode, 217, 6, 61, // Opcode: LXSIWAX
/* 5286 */    MCD::OPC_FilterValue, 4, 10, 0, // Skip to: 5300
/* 5290 */    MCD::OPC_CheckField, 1, 1, 0, 66, 33, // Skip to: 13810
/* 5296 */    MCD::OPC_Decode, 171, 10, 61, // Opcode: STXSIWX
/* 5300 */    MCD::OPC_FilterValue, 8, 19, 0, // Skip to: 5323
/* 5304 */    MCD::OPC_ExtractField, 1, 1,  // Inst{1} ...
/* 5307 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 5315
/* 5311 */    MCD::OPC_Decode, 230, 6, 62, // Opcode: LXVX
/* 5315 */    MCD::OPC_FilterValue, 1, 43, 33, // Skip to: 13810
/* 5319 */    MCD::OPC_Decode, 226, 6, 63, // Opcode: LXVL
/* 5323 */    MCD::OPC_FilterValue, 9, 10, 0, // Skip to: 5337
/* 5327 */    MCD::OPC_CheckField, 1, 1, 1, 29, 33, // Skip to: 13810
/* 5333 */    MCD::OPC_Decode, 227, 6, 63, // Opcode: LXVLL
/* 5337 */    MCD::OPC_FilterValue, 10, 10, 0, // Skip to: 5351
/* 5341 */    MCD::OPC_CheckField, 1, 1, 0, 15, 33, // Skip to: 13810
/* 5347 */    MCD::OPC_Decode, 224, 6, 62, // Opcode: LXVDSX
/* 5351 */    MCD::OPC_FilterValue, 11, 10, 0, // Skip to: 5365
/* 5355 */    MCD::OPC_CheckField, 1, 1, 0, 1, 33, // Skip to: 13810
/* 5361 */    MCD::OPC_Decode, 229, 6, 62, // Opcode: LXVWSX
/* 5365 */    MCD::OPC_FilterValue, 12, 19, 0, // Skip to: 5388
/* 5369 */    MCD::OPC_ExtractField, 1, 1,  // Inst{1} ...
/* 5372 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 5380
/* 5376 */    MCD::OPC_Decode, 181, 10, 62, // Opcode: STXVX
/* 5380 */    MCD::OPC_FilterValue, 1, 234, 32, // Skip to: 13810
/* 5384 */    MCD::OPC_Decode, 178, 10, 63, // Opcode: STXVL
/* 5388 */    MCD::OPC_FilterValue, 13, 10, 0, // Skip to: 5402
/* 5392 */    MCD::OPC_CheckField, 1, 1, 1, 220, 32, // Skip to: 13810
/* 5398 */    MCD::OPC_Decode, 179, 10, 63, // Opcode: STXVLL
/* 5402 */    MCD::OPC_FilterValue, 16, 10, 0, // Skip to: 5416
/* 5406 */    MCD::OPC_CheckField, 1, 1, 0, 206, 32, // Skip to: 13810
/* 5412 */    MCD::OPC_Decode, 220, 6, 64, // Opcode: LXSSPX
/* 5416 */    MCD::OPC_FilterValue, 18, 10, 0, // Skip to: 5430
/* 5420 */    MCD::OPC_CheckField, 1, 1, 0, 192, 32, // Skip to: 13810
/* 5426 */    MCD::OPC_Decode, 214, 6, 61, // Opcode: LXSDX
/* 5430 */    MCD::OPC_FilterValue, 20, 10, 0, // Skip to: 5444
/* 5434 */    MCD::OPC_CheckField, 1, 1, 0, 178, 32, // Skip to: 13810
/* 5440 */    MCD::OPC_Decode, 173, 10, 64, // Opcode: STXSSPX
/* 5444 */    MCD::OPC_FilterValue, 22, 10, 0, // Skip to: 5458
/* 5448 */    MCD::OPC_CheckField, 1, 1, 0, 164, 32, // Skip to: 13810
/* 5454 */    MCD::OPC_Decode, 166, 10, 61, // Opcode: STXSDX
/* 5458 */    MCD::OPC_FilterValue, 24, 19, 0, // Skip to: 5481
/* 5462 */    MCD::OPC_ExtractField, 1, 1,  // Inst{1} ...
/* 5465 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 5473
/* 5469 */    MCD::OPC_Decode, 228, 6, 62, // Opcode: LXVW4X
/* 5473 */    MCD::OPC_FilterValue, 1, 141, 32, // Skip to: 13810
/* 5477 */    MCD::OPC_Decode, 215, 6, 61, // Opcode: LXSIBZX
/* 5481 */    MCD::OPC_FilterValue, 25, 19, 0, // Skip to: 5504
/* 5485 */    MCD::OPC_ExtractField, 1, 1,  // Inst{1} ...
/* 5488 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 5496
/* 5492 */    MCD::OPC_Decode, 225, 6, 62, // Opcode: LXVH8X
/* 5496 */    MCD::OPC_FilterValue, 1, 118, 32, // Skip to: 13810
/* 5500 */    MCD::OPC_Decode, 216, 6, 61, // Opcode: LXSIHZX
/* 5504 */    MCD::OPC_FilterValue, 26, 10, 0, // Skip to: 5518
/* 5508 */    MCD::OPC_CheckField, 1, 1, 0, 104, 32, // Skip to: 13810
/* 5514 */    MCD::OPC_Decode, 223, 6, 62, // Opcode: LXVD2X
/* 5518 */    MCD::OPC_FilterValue, 27, 10, 0, // Skip to: 5532
/* 5522 */    MCD::OPC_CheckField, 1, 1, 0, 90, 32, // Skip to: 13810
/* 5528 */    MCD::OPC_Decode, 222, 6, 62, // Opcode: LXVB16X
/* 5532 */    MCD::OPC_FilterValue, 28, 19, 0, // Skip to: 5555
/* 5536 */    MCD::OPC_ExtractField, 1, 1,  // Inst{1} ...
/* 5539 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 5547
/* 5543 */    MCD::OPC_Decode, 180, 10, 62, // Opcode: STXVW4X
/* 5547 */    MCD::OPC_FilterValue, 1, 67, 32, // Skip to: 13810
/* 5551 */    MCD::OPC_Decode, 167, 10, 61, // Opcode: STXSIBX
/* 5555 */    MCD::OPC_FilterValue, 29, 19, 0, // Skip to: 5578
/* 5559 */    MCD::OPC_ExtractField, 1, 1,  // Inst{1} ...
/* 5562 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 5570
/* 5566 */    MCD::OPC_Decode, 177, 10, 62, // Opcode: STXVH8X
/* 5570 */    MCD::OPC_FilterValue, 1, 44, 32, // Skip to: 13810
/* 5574 */    MCD::OPC_Decode, 169, 10, 61, // Opcode: STXSIHX
/* 5578 */    MCD::OPC_FilterValue, 30, 10, 0, // Skip to: 5592
/* 5582 */    MCD::OPC_CheckField, 1, 1, 0, 30, 32, // Skip to: 13810
/* 5588 */    MCD::OPC_Decode, 176, 10, 62, // Opcode: STXVD2X
/* 5592 */    MCD::OPC_FilterValue, 31, 22, 32, // Skip to: 13810
/* 5596 */    MCD::OPC_CheckField, 1, 1, 0, 16, 32, // Skip to: 13810
/* 5602 */    MCD::OPC_Decode, 175, 10, 62, // Opcode: STXVB16X
/* 5606 */    MCD::OPC_FilterValue, 7, 217, 0, // Skip to: 5827
/* 5610 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 5613 */    MCD::OPC_FilterValue, 0, 55, 0, // Skip to: 5672
/* 5617 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 5620 */    MCD::OPC_FilterValue, 9, 4, 0, // Skip to: 5628
/* 5624 */    MCD::OPC_Decode, 235, 6, 65, // Opcode: MFBHRBE
/* 5628 */    MCD::OPC_FilterValue, 10, 4, 0, // Skip to: 5636
/* 5632 */    MCD::OPC_Decode, 248, 6, 49, // Opcode: MFPMR
/* 5636 */    MCD::OPC_FilterValue, 13, 10, 0, // Skip to: 5650
/* 5640 */    MCD::OPC_CheckField, 11, 15, 0, 228, 31, // Skip to: 13810
/* 5646 */    MCD::OPC_Decode, 184, 2, 0, // Opcode: CLRBHRB
/* 5650 */    MCD::OPC_FilterValue, 14, 4, 0, // Skip to: 5658
/* 5654 */    MCD::OPC_Decode, 156, 7, 66, // Opcode: MTPMR
/* 5658 */    MCD::OPC_FilterValue, 22, 212, 31, // Skip to: 13810
/* 5662 */    MCD::OPC_CheckField, 11, 12, 0, 206, 31, // Skip to: 13810
/* 5668 */    MCD::OPC_Decode, 221, 10, 46, // Opcode: TCHECK
/* 5672 */    MCD::OPC_FilterValue, 1, 143, 0, // Skip to: 5819
/* 5676 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 5679 */    MCD::OPC_FilterValue, 20, 16, 0, // Skip to: 5699
/* 5683 */    MCD::OPC_CheckField, 22, 4, 0, 185, 31, // Skip to: 13810
/* 5689 */    MCD::OPC_CheckField, 11, 10, 0, 179, 31, // Skip to: 13810
/* 5695 */    MCD::OPC_Decode, 220, 10, 67, // Opcode: TBEGIN
/* 5699 */    MCD::OPC_FilterValue, 21, 10, 0, // Skip to: 5713
/* 5703 */    MCD::OPC_CheckField, 11, 14, 0, 165, 31, // Skip to: 13810
/* 5709 */    MCD::OPC_Decode, 231, 10, 68, // Opcode: TEND
/* 5713 */    MCD::OPC_FilterValue, 23, 16, 0, // Skip to: 5733
/* 5717 */    MCD::OPC_CheckField, 22, 3, 0, 151, 31, // Skip to: 13810
/* 5723 */    MCD::OPC_CheckField, 11, 10, 0, 145, 31, // Skip to: 13810
/* 5729 */    MCD::OPC_Decode, 249, 10, 67, // Opcode: TSR
/* 5733 */    MCD::OPC_FilterValue, 24, 4, 0, // Skip to: 5741
/* 5737 */    MCD::OPC_Decode, 212, 10, 69, // Opcode: TABORTWC
/* 5741 */    MCD::OPC_FilterValue, 25, 4, 0, // Skip to: 5749
/* 5745 */    MCD::OPC_Decode, 210, 10, 69, // Opcode: TABORTDC
/* 5749 */    MCD::OPC_FilterValue, 26, 4, 0, // Skip to: 5757
/* 5753 */    MCD::OPC_Decode, 213, 10, 70, // Opcode: TABORTWCI
/* 5757 */    MCD::OPC_FilterValue, 27, 4, 0, // Skip to: 5765
/* 5761 */    MCD::OPC_Decode, 211, 10, 70, // Opcode: TABORTDCI
/* 5765 */    MCD::OPC_FilterValue, 28, 16, 0, // Skip to: 5785
/* 5769 */    MCD::OPC_CheckField, 21, 5, 0, 99, 31, // Skip to: 13810
/* 5775 */    MCD::OPC_CheckField, 11, 5, 0, 93, 31, // Skip to: 13810
/* 5781 */    MCD::OPC_Decode, 209, 10, 71, // Opcode: TABORT
/* 5785 */    MCD::OPC_FilterValue, 29, 16, 0, // Skip to: 5805
/* 5789 */    MCD::OPC_CheckField, 21, 5, 0, 79, 31, // Skip to: 13810
/* 5795 */    MCD::OPC_CheckField, 11, 5, 0, 73, 31, // Skip to: 13810
/* 5801 */    MCD::OPC_Decode, 248, 10, 71, // Opcode: TRECLAIM
/* 5805 */    MCD::OPC_FilterValue, 31, 65, 31, // Skip to: 13810
/* 5809 */    MCD::OPC_CheckField, 11, 15, 0, 59, 31, // Skip to: 13810
/* 5815 */    MCD::OPC_Decode, 247, 10, 0, // Opcode: TRECHKPT
/* 5819 */    MCD::OPC_FilterValue, 2, 51, 31, // Skip to: 13810
/* 5823 */    MCD::OPC_Decode, 244, 5, 72, // Opcode: ISEL
/* 5827 */    MCD::OPC_FilterValue, 8, 43, 0, // Skip to: 5874
/* 5831 */    MCD::OPC_ExtractField, 20, 1,  // Inst{20} ...
/* 5834 */    MCD::OPC_FilterValue, 0, 16, 0, // Skip to: 5854
/* 5838 */    MCD::OPC_CheckField, 6, 6, 4, 30, 31, // Skip to: 13810
/* 5844 */    MCD::OPC_CheckField, 0, 2, 0, 24, 31, // Skip to: 13810
/* 5850 */    MCD::OPC_Decode, 136, 7, 73, // Opcode: MTCRF
/* 5854 */    MCD::OPC_FilterValue, 1, 16, 31, // Skip to: 13810
/* 5858 */    MCD::OPC_CheckField, 6, 6, 4, 10, 31, // Skip to: 13810
/* 5864 */    MCD::OPC_CheckField, 0, 2, 0, 4, 31, // Skip to: 13810
/* 5870 */    MCD::OPC_Decode, 154, 7, 74, // Opcode: MTOCRF
/* 5874 */    MCD::OPC_FilterValue, 9, 180, 2, // Skip to: 6570
/* 5878 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 5881 */    MCD::OPC_FilterValue, 0, 43, 0, // Skip to: 5928
/* 5885 */    MCD::OPC_ExtractField, 20, 1,  // Inst{20} ...
/* 5888 */    MCD::OPC_FilterValue, 0, 16, 0, // Skip to: 5908
/* 5892 */    MCD::OPC_CheckField, 11, 9, 0, 232, 30, // Skip to: 13810
/* 5898 */    MCD::OPC_CheckField, 0, 2, 2, 226, 30, // Skip to: 13810
/* 5904 */    MCD::OPC_Decode, 236, 6, 47, // Opcode: MFCR
/* 5908 */    MCD::OPC_FilterValue, 1, 218, 30, // Skip to: 13810
/* 5912 */    MCD::OPC_CheckField, 11, 1, 0, 212, 30, // Skip to: 13810
/* 5918 */    MCD::OPC_CheckField, 0, 2, 2, 206, 30, // Skip to: 13810
/* 5924 */    MCD::OPC_Decode, 246, 6, 75, // Opcode: MFOCRF
/* 5928 */    MCD::OPC_FilterValue, 1, 16, 0, // Skip to: 5948
/* 5932 */    MCD::OPC_CheckField, 11, 5, 0, 192, 30, // Skip to: 13810
/* 5938 */    MCD::OPC_CheckField, 1, 1, 1, 186, 30, // Skip to: 13810
/* 5944 */    MCD::OPC_Decode, 131, 7, 76, // Opcode: MFVSRD
/* 5948 */    MCD::OPC_FilterValue, 2, 16, 0, // Skip to: 5968
/* 5952 */    MCD::OPC_CheckField, 11, 10, 0, 172, 30, // Skip to: 13810
/* 5958 */    MCD::OPC_CheckField, 0, 2, 2, 166, 30, // Skip to: 13810
/* 5964 */    MCD::OPC_Decode, 245, 6, 47, // Opcode: MFMSR
/* 5968 */    MCD::OPC_FilterValue, 3, 16, 0, // Skip to: 5988
/* 5972 */    MCD::OPC_CheckField, 11, 5, 0, 152, 30, // Skip to: 13810
/* 5978 */    MCD::OPC_CheckField, 1, 1, 1, 146, 30, // Skip to: 13810
/* 5984 */    MCD::OPC_Decode, 133, 7, 77, // Opcode: MFVSRWZ
/* 5988 */    MCD::OPC_FilterValue, 4, 10, 0, // Skip to: 6002
/* 5992 */    MCD::OPC_CheckField, 1, 1, 0, 132, 30, // Skip to: 13810
/* 5998 */    MCD::OPC_Decode, 152, 7, 78, // Opcode: MTMSR
/* 6002 */    MCD::OPC_FilterValue, 5, 25, 0, // Skip to: 6031
/* 6006 */    MCD::OPC_ExtractField, 1, 1,  // Inst{1} ...
/* 6009 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 6017
/* 6013 */    MCD::OPC_Decode, 153, 7, 78, // Opcode: MTMSRD
/* 6017 */    MCD::OPC_FilterValue, 1, 109, 30, // Skip to: 13810
/* 6021 */    MCD::OPC_CheckField, 11, 5, 0, 103, 30, // Skip to: 13810
/* 6027 */    MCD::OPC_Decode, 164, 7, 79, // Opcode: MTVSRD
/* 6031 */    MCD::OPC_FilterValue, 6, 25, 0, // Skip to: 6060
/* 6035 */    MCD::OPC_ExtractField, 1, 1,  // Inst{1} ...
/* 6038 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 6046
/* 6042 */    MCD::OPC_Decode, 159, 7, 80, // Opcode: MTSR
/* 6046 */    MCD::OPC_FilterValue, 1, 80, 30, // Skip to: 13810
/* 6050 */    MCD::OPC_CheckField, 11, 5, 0, 74, 30, // Skip to: 13810
/* 6056 */    MCD::OPC_Decode, 166, 7, 81, // Opcode: MTVSRWA
/* 6060 */    MCD::OPC_FilterValue, 7, 25, 0, // Skip to: 6089
/* 6064 */    MCD::OPC_ExtractField, 1, 1,  // Inst{1} ...
/* 6067 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 6075
/* 6071 */    MCD::OPC_Decode, 160, 7, 82, // Opcode: MTSRIN
/* 6075 */    MCD::OPC_FilterValue, 1, 51, 30, // Skip to: 13810
/* 6079 */    MCD::OPC_CheckField, 11, 5, 0, 45, 30, // Skip to: 13810
/* 6085 */    MCD::OPC_Decode, 168, 7, 81, // Opcode: MTVSRWZ
/* 6089 */    MCD::OPC_FilterValue, 8, 16, 0, // Skip to: 6109
/* 6093 */    MCD::OPC_CheckField, 16, 10, 0, 31, 30, // Skip to: 13810
/* 6099 */    MCD::OPC_CheckField, 0, 2, 0, 25, 30, // Skip to: 13810
/* 6105 */    MCD::OPC_Decode, 234, 10, 83, // Opcode: TLBIEL
/* 6109 */    MCD::OPC_FilterValue, 9, 37, 0, // Skip to: 6150
/* 6113 */    MCD::OPC_ExtractField, 1, 1,  // Inst{1} ...
/* 6116 */    MCD::OPC_FilterValue, 0, 16, 0, // Skip to: 6136
/* 6120 */    MCD::OPC_CheckField, 16, 5, 0, 4, 30, // Skip to: 13810
/* 6126 */    MCD::OPC_CheckField, 0, 1, 0, 254, 29, // Skip to: 13810
/* 6132 */    MCD::OPC_Decode, 233, 10, 82, // Opcode: TLBIE
/* 6136 */    MCD::OPC_FilterValue, 1, 246, 29, // Skip to: 13810
/* 6140 */    MCD::OPC_CheckField, 11, 5, 0, 240, 29, // Skip to: 13810
/* 6146 */    MCD::OPC_Decode, 132, 7, 84, // Opcode: MFVSRLD
/* 6150 */    MCD::OPC_FilterValue, 10, 46, 0, // Skip to: 6200
/* 6154 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 6157 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 6171
/* 6161 */    MCD::OPC_CheckField, 11, 15, 0, 219, 29, // Skip to: 13810
/* 6167 */    MCD::OPC_Decode, 203, 9, 0, // Opcode: SLBSYNC
/* 6171 */    MCD::OPC_FilterValue, 2, 211, 29, // Skip to: 13810
/* 6175 */    MCD::OPC_ExtractField, 11, 10,  // Inst{20-11} ...
/* 6178 */    MCD::OPC_FilterValue, 128, 2, 4, 0, // Skip to: 6187
/* 6183 */    MCD::OPC_Decode, 243, 6, 47, // Opcode: MFLR
/* 6187 */    MCD::OPC_FilterValue, 160, 2, 4, 0, // Skip to: 6196
/* 6192 */    MCD::OPC_Decode, 238, 6, 47, // Opcode: MFCTR
/* 6196 */    MCD::OPC_Decode, 249, 6, 49, // Opcode: MFSPR
/* 6200 */    MCD::OPC_FilterValue, 11, 25, 0, // Skip to: 6229
/* 6204 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 6207 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 6221
/* 6211 */    MCD::OPC_CheckField, 11, 15, 0, 169, 29, // Skip to: 13810
/* 6217 */    MCD::OPC_Decode, 232, 10, 0, // Opcode: TLBIA
/* 6221 */    MCD::OPC_FilterValue, 2, 161, 29, // Skip to: 13810
/* 6225 */    MCD::OPC_Decode, 253, 6, 49, // Opcode: MFTB
/* 6229 */    MCD::OPC_FilterValue, 12, 37, 0, // Skip to: 6270
/* 6233 */    MCD::OPC_ExtractField, 1, 1,  // Inst{1} ...
/* 6236 */    MCD::OPC_FilterValue, 0, 16, 0, // Skip to: 6256
/* 6240 */    MCD::OPC_CheckField, 16, 5, 0, 140, 29, // Skip to: 13810
/* 6246 */    MCD::OPC_CheckField, 0, 1, 0, 134, 29, // Skip to: 13810
/* 6252 */    MCD::OPC_Decode, 202, 9, 82, // Opcode: SLBMTE
/* 6256 */    MCD::OPC_FilterValue, 1, 126, 29, // Skip to: 13810
/* 6260 */    MCD::OPC_CheckField, 11, 5, 0, 120, 29, // Skip to: 13810
/* 6266 */    MCD::OPC_Decode, 167, 7, 85, // Opcode: MTVSRWS
/* 6270 */    MCD::OPC_FilterValue, 13, 31, 0, // Skip to: 6305
/* 6274 */    MCD::OPC_ExtractField, 1, 1,  // Inst{1} ...
/* 6277 */    MCD::OPC_FilterValue, 0, 16, 0, // Skip to: 6297
/* 6281 */    MCD::OPC_CheckField, 16, 10, 0, 99, 29, // Skip to: 13810
/* 6287 */    MCD::OPC_CheckField, 0, 1, 0, 93, 29, // Skip to: 13810
/* 6293 */    MCD::OPC_Decode, 198, 9, 83, // Opcode: SLBIE
/* 6297 */    MCD::OPC_FilterValue, 1, 85, 29, // Skip to: 13810
/* 6301 */    MCD::OPC_Decode, 165, 7, 86, // Opcode: MTVSRDD
/* 6305 */    MCD::OPC_FilterValue, 14, 46, 0, // Skip to: 6355
/* 6309 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 6312 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 6326
/* 6316 */    MCD::OPC_CheckField, 16, 5, 0, 64, 29, // Skip to: 13810
/* 6322 */    MCD::OPC_Decode, 199, 9, 82, // Opcode: SLBIEG
/* 6326 */    MCD::OPC_FilterValue, 2, 56, 29, // Skip to: 13810
/* 6330 */    MCD::OPC_ExtractField, 11, 10,  // Inst{20-11} ...
/* 6333 */    MCD::OPC_FilterValue, 128, 2, 4, 0, // Skip to: 6342
/* 6338 */    MCD::OPC_Decode, 150, 7, 47, // Opcode: MTLR
/* 6342 */    MCD::OPC_FilterValue, 160, 2, 4, 0, // Skip to: 6351
/* 6347 */    MCD::OPC_Decode, 138, 7, 47, // Opcode: MTCTR
/* 6351 */    MCD::OPC_Decode, 157, 7, 66, // Opcode: MTSPR
/* 6355 */    MCD::OPC_FilterValue, 15, 16, 0, // Skip to: 6375
/* 6359 */    MCD::OPC_CheckField, 11, 15, 0, 21, 29, // Skip to: 13810
/* 6365 */    MCD::OPC_CheckField, 0, 2, 0, 15, 29, // Skip to: 13810
/* 6371 */    MCD::OPC_Decode, 197, 9, 0, // Opcode: SLBIA
/* 6375 */    MCD::OPC_FilterValue, 18, 10, 0, // Skip to: 6389
/* 6379 */    MCD::OPC_CheckField, 1, 1, 1, 1, 29, // Skip to: 13810
/* 6385 */    MCD::OPC_Decode, 251, 6, 80, // Opcode: MFSR
/* 6389 */    MCD::OPC_FilterValue, 20, 10, 0, // Skip to: 6403
/* 6393 */    MCD::OPC_CheckField, 1, 1, 1, 243, 28, // Skip to: 13810
/* 6399 */    MCD::OPC_Decode, 252, 6, 82, // Opcode: MFSRIN
/* 6403 */    MCD::OPC_FilterValue, 24, 16, 0, // Skip to: 6423
/* 6407 */    MCD::OPC_CheckField, 21, 5, 0, 229, 28, // Skip to: 13810
/* 6413 */    MCD::OPC_CheckField, 0, 2, 0, 223, 28, // Skip to: 13810
/* 6419 */    MCD::OPC_Decode, 235, 10, 54, // Opcode: TLBIVAX
/* 6423 */    MCD::OPC_FilterValue, 26, 16, 0, // Skip to: 6443
/* 6427 */    MCD::OPC_CheckField, 16, 5, 0, 209, 28, // Skip to: 13810
/* 6433 */    MCD::OPC_CheckField, 0, 2, 2, 203, 28, // Skip to: 13810
/* 6439 */    MCD::OPC_Decode, 201, 9, 82, // Opcode: SLBMFEV
/* 6443 */    MCD::OPC_FilterValue, 28, 43, 0, // Skip to: 6490
/* 6447 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 6450 */    MCD::OPC_FilterValue, 0, 14, 0, // Skip to: 6468
/* 6454 */    MCD::OPC_CheckField, 21, 5, 0, 4, 0, // Skip to: 6464
/* 6460 */    MCD::OPC_Decode, 240, 10, 54, // Opcode: TLBSX
/* 6464 */    MCD::OPC_Decode, 241, 10, 58, // Opcode: TLBSX2
/* 6468 */    MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 6476
/* 6472 */    MCD::OPC_Decode, 242, 10, 58, // Opcode: TLBSX2D
/* 6476 */    MCD::OPC_FilterValue, 2, 162, 28, // Skip to: 13810
/* 6480 */    MCD::OPC_CheckField, 16, 5, 0, 156, 28, // Skip to: 13810
/* 6486 */    MCD::OPC_Decode, 200, 9, 82, // Opcode: SLBMFEE
/* 6490 */    MCD::OPC_FilterValue, 29, 21, 0, // Skip to: 6515
/* 6494 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 6497 */    MCD::OPC_FilterValue, 0, 141, 28, // Skip to: 13810
/* 6501 */    MCD::OPC_CheckField, 11, 15, 0, 4, 0, // Skip to: 6511
/* 6507 */    MCD::OPC_Decode, 238, 10, 0, // Opcode: TLBRE
/* 6511 */    MCD::OPC_Decode, 239, 10, 87, // Opcode: TLBRE2
/* 6515 */    MCD::OPC_FilterValue, 30, 31, 0, // Skip to: 6550
/* 6519 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 6522 */    MCD::OPC_FilterValue, 0, 116, 28, // Skip to: 13810
/* 6526 */    MCD::OPC_CheckField, 11, 15, 0, 4, 0, // Skip to: 6536
/* 6532 */    MCD::OPC_Decode, 244, 10, 0, // Opcode: TLBWE
/* 6536 */    MCD::OPC_CheckField, 16, 10, 0, 4, 0, // Skip to: 6546
/* 6542 */    MCD::OPC_Decode, 236, 10, 83, // Opcode: TLBLD
/* 6546 */    MCD::OPC_Decode, 245, 10, 87, // Opcode: TLBWE2
/* 6550 */    MCD::OPC_FilterValue, 31, 88, 28, // Skip to: 13810
/* 6554 */    MCD::OPC_CheckField, 16, 10, 0, 82, 28, // Skip to: 13810
/* 6560 */    MCD::OPC_CheckField, 0, 2, 0, 76, 28, // Skip to: 13810
/* 6566 */    MCD::OPC_Decode, 237, 10, 83, // Opcode: TLBLI
/* 6570 */    MCD::OPC_FilterValue, 10, 93, 1, // Skip to: 6923
/* 6574 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 6577 */    MCD::OPC_FilterValue, 0, 27, 0, // Skip to: 6608
/* 6581 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 6584 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 6592
/* 6588 */    MCD::OPC_Decode, 194, 6, 88, // Opcode: LWARX
/* 6592 */    MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 6600
/* 6596 */    MCD::OPC_Decode, 195, 6, 88, // Opcode: LWARXL
/* 6600 */    MCD::OPC_FilterValue, 2, 38, 28, // Skip to: 13810
/* 6604 */    MCD::OPC_Decode, 141, 6, 89, // Opcode: LDX
/* 6608 */    MCD::OPC_FilterValue, 1, 27, 0, // Skip to: 6639
/* 6612 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 6615 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 6623
/* 6619 */    MCD::OPC_Decode, 249, 5, 88, // Opcode: LBARX
/* 6623 */    MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 6631
/* 6627 */    MCD::OPC_Decode, 250, 5, 88, // Opcode: LBARXL
/* 6631 */    MCD::OPC_FilterValue, 2, 7, 28, // Skip to: 13810
/* 6635 */    MCD::OPC_Decode, 140, 6, 90, // Opcode: LDUX
/* 6639 */    MCD::OPC_FilterValue, 2, 19, 0, // Skip to: 6662
/* 6643 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 6646 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 6654
/* 6650 */    MCD::OPC_Decode, 133, 6, 89, // Opcode: LDARX
/* 6654 */    MCD::OPC_FilterValue, 1, 240, 27, // Skip to: 13810
/* 6658 */    MCD::OPC_Decode, 134, 6, 89, // Opcode: LDARXL
/* 6662 */    MCD::OPC_FilterValue, 3, 19, 0, // Skip to: 6685
/* 6666 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 6669 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 6677
/* 6673 */    MCD::OPC_Decode, 161, 6, 88, // Opcode: LHARX
/* 6677 */    MCD::OPC_FilterValue, 1, 217, 27, // Skip to: 13810
/* 6681 */    MCD::OPC_Decode, 162, 6, 88, // Opcode: LHARXL
/* 6685 */    MCD::OPC_FilterValue, 4, 10, 0, // Skip to: 6699
/* 6689 */    MCD::OPC_CheckField, 0, 2, 2, 203, 27, // Skip to: 13810
/* 6695 */    MCD::OPC_Decode, 252, 9, 89, // Opcode: STDX
/* 6699 */    MCD::OPC_FilterValue, 5, 10, 0, // Skip to: 6713
/* 6703 */    MCD::OPC_CheckField, 0, 2, 2, 189, 27, // Skip to: 13810
/* 6709 */    MCD::OPC_Decode, 251, 9, 91, // Opcode: STDUX
/* 6713 */    MCD::OPC_FilterValue, 9, 10, 0, // Skip to: 6727
/* 6717 */    MCD::OPC_CheckField, 0, 2, 2, 175, 27, // Skip to: 13810
/* 6723 */    MCD::OPC_Decode, 138, 6, 89, // Opcode: LDMX
/* 6727 */    MCD::OPC_FilterValue, 10, 10, 0, // Skip to: 6741
/* 6731 */    MCD::OPC_CheckField, 0, 2, 2, 161, 27, // Skip to: 13810
/* 6737 */    MCD::OPC_Decode, 198, 6, 89, // Opcode: LWAX
/* 6741 */    MCD::OPC_FilterValue, 11, 10, 0, // Skip to: 6755
/* 6745 */    MCD::OPC_CheckField, 0, 2, 2, 147, 27, // Skip to: 13810
/* 6751 */    MCD::OPC_Decode, 197, 6, 90, // Opcode: LWAUX
/* 6755 */    MCD::OPC_FilterValue, 16, 10, 0, // Skip to: 6769
/* 6759 */    MCD::OPC_CheckField, 0, 2, 0, 133, 27, // Skip to: 13810
/* 6765 */    MCD::OPC_Decode, 136, 6, 89, // Opcode: LDBRX
/* 6769 */    MCD::OPC_FilterValue, 18, 10, 0, // Skip to: 6783
/* 6773 */    MCD::OPC_CheckField, 0, 2, 2, 119, 27, // Skip to: 13810
/* 6779 */    MCD::OPC_Decode, 185, 6, 55, // Opcode: LSWI
/* 6783 */    MCD::OPC_FilterValue, 20, 10, 0, // Skip to: 6797
/* 6787 */    MCD::OPC_CheckField, 0, 2, 0, 105, 27, // Skip to: 13810
/* 6793 */    MCD::OPC_Decode, 247, 9, 89, // Opcode: STDBRX
/* 6797 */    MCD::OPC_FilterValue, 22, 10, 0, // Skip to: 6811
/* 6801 */    MCD::OPC_CheckField, 0, 2, 2, 91, 27, // Skip to: 13810
/* 6807 */    MCD::OPC_Decode, 147, 10, 55, // Opcode: STSWI
/* 6811 */    MCD::OPC_FilterValue, 24, 10, 0, // Skip to: 6825
/* 6815 */    MCD::OPC_CheckField, 0, 2, 2, 77, 27, // Skip to: 13810
/* 6821 */    MCD::OPC_Decode, 205, 6, 58, // Opcode: LWZCIX
/* 6825 */    MCD::OPC_FilterValue, 25, 10, 0, // Skip to: 6839
/* 6829 */    MCD::OPC_CheckField, 0, 2, 2, 63, 27, // Skip to: 13810
/* 6835 */    MCD::OPC_Decode, 173, 6, 58, // Opcode: LHZCIX
/* 6839 */    MCD::OPC_FilterValue, 26, 10, 0, // Skip to: 6853
/* 6843 */    MCD::OPC_CheckField, 0, 2, 2, 49, 27, // Skip to: 13810
/* 6849 */    MCD::OPC_Decode, 253, 5, 58, // Opcode: LBZCIX
/* 6853 */    MCD::OPC_FilterValue, 27, 10, 0, // Skip to: 6867
/* 6857 */    MCD::OPC_CheckField, 0, 2, 2, 35, 27, // Skip to: 13810
/* 6863 */    MCD::OPC_Decode, 137, 6, 58, // Opcode: LDCIX
/* 6867 */    MCD::OPC_FilterValue, 28, 10, 0, // Skip to: 6881
/* 6871 */    MCD::OPC_CheckField, 0, 2, 2, 21, 27, // Skip to: 13810
/* 6877 */    MCD::OPC_Decode, 157, 10, 58, // Opcode: STWCIX
/* 6881 */    MCD::OPC_FilterValue, 29, 10, 0, // Skip to: 6895
/* 6885 */    MCD::OPC_CheckField, 0, 2, 2, 7, 27, // Skip to: 13810
/* 6891 */    MCD::OPC_Decode, 137, 10, 58, // Opcode: STHCIX
/* 6895 */    MCD::OPC_FilterValue, 30, 10, 0, // Skip to: 6909
/* 6899 */    MCD::OPC_CheckField, 0, 2, 2, 249, 26, // Skip to: 13810
/* 6905 */    MCD::OPC_Decode, 237, 9, 58, // Opcode: STBCIX
/* 6909 */    MCD::OPC_FilterValue, 31, 241, 26, // Skip to: 13810
/* 6913 */    MCD::OPC_CheckField, 0, 2, 2, 235, 26, // Skip to: 13810
/* 6919 */    MCD::OPC_Decode, 248, 9, 58, // Opcode: STDCIX
/* 6923 */    MCD::OPC_FilterValue, 11, 242, 2, // Skip to: 7681
/* 6927 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 6930 */    MCD::OPC_FilterValue, 0, 25, 0, // Skip to: 6959
/* 6934 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 6937 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 6951
/* 6941 */    MCD::OPC_CheckField, 25, 1, 0, 207, 26, // Skip to: 13810
/* 6947 */    MCD::OPC_Decode, 235, 5, 53, // Opcode: ICBT
/* 6951 */    MCD::OPC_FilterValue, 2, 199, 26, // Skip to: 13810
/* 6955 */    MCD::OPC_Decode, 210, 6, 88, // Opcode: LWZX
/* 6959 */    MCD::OPC_FilterValue, 1, 25, 0, // Skip to: 6988
/* 6963 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 6966 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 6980
/* 6970 */    MCD::OPC_CheckField, 21, 5, 0, 178, 26, // Skip to: 13810
/* 6976 */    MCD::OPC_Decode, 247, 2, 92, // Opcode: DCBST
/* 6980 */    MCD::OPC_FilterValue, 2, 170, 26, // Skip to: 13810
/* 6984 */    MCD::OPC_Decode, 208, 6, 93, // Opcode: LWZUX
/* 6988 */    MCD::OPC_FilterValue, 2, 19, 0, // Skip to: 7011
/* 6992 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 6995 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 7003
/* 6999 */    MCD::OPC_Decode, 242, 2, 94, // Opcode: DCBF
/* 7003 */    MCD::OPC_FilterValue, 2, 147, 26, // Skip to: 13810
/* 7007 */    MCD::OPC_Decode, 130, 6, 88, // Opcode: LBZX
/* 7011 */    MCD::OPC_FilterValue, 3, 10, 0, // Skip to: 7025
/* 7015 */    MCD::OPC_CheckField, 0, 2, 2, 133, 26, // Skip to: 13810
/* 7021 */    MCD::OPC_Decode, 128, 6, 93, // Opcode: LBZUX
/* 7025 */    MCD::OPC_FilterValue, 4, 19, 0, // Skip to: 7048
/* 7029 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 7032 */    MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 7040
/* 7036 */    MCD::OPC_Decode, 158, 10, 88, // Opcode: STWCX
/* 7040 */    MCD::OPC_FilterValue, 2, 110, 26, // Skip to: 13810
/* 7044 */    MCD::OPC_Decode, 163, 10, 88, // Opcode: STWX
/* 7048 */    MCD::OPC_FilterValue, 5, 10, 0, // Skip to: 7062
/* 7052 */    MCD::OPC_CheckField, 0, 2, 2, 96, 26, // Skip to: 13810
/* 7058 */    MCD::OPC_Decode, 161, 10, 95, // Opcode: STWUX
/* 7062 */    MCD::OPC_FilterValue, 6, 19, 0, // Skip to: 7085
/* 7066 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 7069 */    MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 7077
/* 7073 */    MCD::OPC_Decode, 249, 9, 89, // Opcode: STDCX
/* 7077 */    MCD::OPC_FilterValue, 2, 73, 26, // Skip to: 13810
/* 7081 */    MCD::OPC_Decode, 243, 9, 88, // Opcode: STBX
/* 7085 */    MCD::OPC_FilterValue, 7, 19, 0, // Skip to: 7108
/* 7089 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 7092 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 7100
/* 7096 */    MCD::OPC_Decode, 251, 2, 94, // Opcode: DCBTST
/* 7100 */    MCD::OPC_FilterValue, 2, 50, 26, // Skip to: 13810
/* 7104 */    MCD::OPC_Decode, 241, 9, 95, // Opcode: STBUX
/* 7108 */    MCD::OPC_FilterValue, 8, 19, 0, // Skip to: 7131
/* 7112 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 7115 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 7123
/* 7119 */    MCD::OPC_Decode, 248, 2, 94, // Opcode: DCBT
/* 7123 */    MCD::OPC_FilterValue, 2, 27, 26, // Skip to: 13810
/* 7127 */    MCD::OPC_Decode, 178, 6, 88, // Opcode: LHZX
/* 7131 */    MCD::OPC_FilterValue, 9, 10, 0, // Skip to: 7145
/* 7135 */    MCD::OPC_CheckField, 0, 2, 2, 13, 26, // Skip to: 13810
/* 7141 */    MCD::OPC_Decode, 176, 6, 93, // Opcode: LHZUX
/* 7145 */    MCD::OPC_FilterValue, 10, 34, 0, // Skip to: 7183
/* 7149 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 7152 */    MCD::OPC_FilterValue, 0, 19, 0, // Skip to: 7175
/* 7156 */    MCD::OPC_ExtractField, 23, 3,  // Inst{25-23} ...
/* 7159 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 7167
/* 7163 */    MCD::OPC_Decode, 155, 3, 96, // Opcode: DST
/* 7167 */    MCD::OPC_FilterValue, 4, 239, 25, // Skip to: 13810
/* 7171 */    MCD::OPC_Decode, 161, 3, 96, // Opcode: DSTT
/* 7175 */    MCD::OPC_FilterValue, 2, 231, 25, // Skip to: 13810
/* 7179 */    MCD::OPC_Decode, 167, 6, 88, // Opcode: LHAX
/* 7183 */    MCD::OPC_FilterValue, 11, 34, 0, // Skip to: 7221
/* 7187 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 7190 */    MCD::OPC_FilterValue, 0, 19, 0, // Skip to: 7213
/* 7194 */    MCD::OPC_ExtractField, 23, 3,  // Inst{25-23} ...
/* 7197 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 7205
/* 7201 */    MCD::OPC_Decode, 157, 3, 96, // Opcode: DSTST
/* 7205 */    MCD::OPC_FilterValue, 4, 201, 25, // Skip to: 13810
/* 7209 */    MCD::OPC_Decode, 159, 3, 96, // Opcode: DSTSTT
/* 7213 */    MCD::OPC_FilterValue, 2, 193, 25, // Skip to: 13810
/* 7217 */    MCD::OPC_Decode, 165, 6, 93, // Opcode: LHAUX
/* 7221 */    MCD::OPC_FilterValue, 12, 10, 0, // Skip to: 7235
/* 7225 */    MCD::OPC_CheckField, 0, 2, 2, 179, 25, // Skip to: 13810
/* 7231 */    MCD::OPC_Decode, 143, 10, 88, // Opcode: STHX
/* 7235 */    MCD::OPC_FilterValue, 13, 10, 0, // Skip to: 7249
/* 7239 */    MCD::OPC_CheckField, 0, 2, 2, 165, 25, // Skip to: 13810
/* 7245 */    MCD::OPC_Decode, 141, 10, 95, // Opcode: STHUX
/* 7249 */    MCD::OPC_FilterValue, 14, 16, 0, // Skip to: 7269
/* 7253 */    MCD::OPC_CheckField, 21, 5, 0, 151, 25, // Skip to: 13810
/* 7259 */    MCD::OPC_CheckField, 0, 2, 0, 145, 25, // Skip to: 13810
/* 7265 */    MCD::OPC_Decode, 246, 2, 92, // Opcode: DCBI
/* 7269 */    MCD::OPC_FilterValue, 16, 19, 0, // Skip to: 7292
/* 7273 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 7276 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 7284
/* 7280 */    MCD::OPC_Decode, 201, 6, 88, // Opcode: LWBRX
/* 7284 */    MCD::OPC_FilterValue, 2, 122, 25, // Skip to: 13810
/* 7288 */    MCD::OPC_Decode, 158, 6, 97, // Opcode: LFSX
/* 7292 */    MCD::OPC_FilterValue, 17, 25, 0, // Skip to: 7321
/* 7296 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 7299 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 7313
/* 7303 */    MCD::OPC_CheckField, 11, 15, 0, 101, 25, // Skip to: 13810
/* 7309 */    MCD::OPC_Decode, 243, 10, 0, // Opcode: TLBSYNC
/* 7313 */    MCD::OPC_FilterValue, 2, 93, 25, // Skip to: 13810
/* 7317 */    MCD::OPC_Decode, 157, 6, 98, // Opcode: LFSUX
/* 7321 */    MCD::OPC_FilterValue, 18, 31, 0, // Skip to: 7356
/* 7325 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 7328 */    MCD::OPC_FilterValue, 0, 16, 0, // Skip to: 7348
/* 7332 */    MCD::OPC_CheckField, 23, 3, 0, 72, 25, // Skip to: 13810
/* 7338 */    MCD::OPC_CheckField, 11, 10, 0, 66, 25, // Skip to: 13810
/* 7344 */    MCD::OPC_Decode, 208, 10, 99, // Opcode: SYNC
/* 7348 */    MCD::OPC_FilterValue, 2, 58, 25, // Skip to: 13810
/* 7352 */    MCD::OPC_Decode, 152, 6, 100, // Opcode: LFDX
/* 7356 */    MCD::OPC_FilterValue, 19, 10, 0, // Skip to: 7370
/* 7360 */    MCD::OPC_CheckField, 0, 2, 2, 44, 25, // Skip to: 13810
/* 7366 */    MCD::OPC_Decode, 151, 6, 101, // Opcode: LFDUX
/* 7370 */    MCD::OPC_FilterValue, 20, 19, 0, // Skip to: 7393
/* 7374 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 7377 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 7385
/* 7381 */    MCD::OPC_Decode, 156, 10, 88, // Opcode: STWBRX
/* 7385 */    MCD::OPC_FilterValue, 2, 21, 25, // Skip to: 13810
/* 7389 */    MCD::OPC_Decode, 133, 10, 97, // Opcode: STFSX
/* 7393 */    MCD::OPC_FilterValue, 21, 19, 0, // Skip to: 7416
/* 7397 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 7400 */    MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 7408
/* 7404 */    MCD::OPC_Decode, 238, 9, 88, // Opcode: STBCX
/* 7408 */    MCD::OPC_FilterValue, 2, 254, 24, // Skip to: 13810
/* 7412 */    MCD::OPC_Decode, 132, 10, 102, // Opcode: STFSUX
/* 7416 */    MCD::OPC_FilterValue, 22, 19, 0, // Skip to: 7439
/* 7420 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 7423 */    MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 7431
/* 7427 */    MCD::OPC_Decode, 138, 10, 88, // Opcode: STHCX
/* 7431 */    MCD::OPC_FilterValue, 2, 231, 24, // Skip to: 13810
/* 7435 */    MCD::OPC_Decode, 128, 10, 100, // Opcode: STFDX
/* 7439 */    MCD::OPC_FilterValue, 23, 25, 0, // Skip to: 7468
/* 7443 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 7446 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 7460
/* 7450 */    MCD::OPC_CheckField, 21, 5, 0, 210, 24, // Skip to: 13810
/* 7456 */    MCD::OPC_Decode, 241, 2, 92, // Opcode: DCBA
/* 7460 */    MCD::OPC_FilterValue, 2, 202, 24, // Skip to: 13810
/* 7464 */    MCD::OPC_Decode, 255, 9, 103, // Opcode: STFDUX
/* 7468 */    MCD::OPC_FilterValue, 24, 10, 0, // Skip to: 7482
/* 7472 */    MCD::OPC_CheckField, 0, 2, 0, 188, 24, // Skip to: 13810
/* 7478 */    MCD::OPC_Decode, 169, 6, 88, // Opcode: LHBRX
/* 7482 */    MCD::OPC_FilterValue, 25, 43, 0, // Skip to: 7529
/* 7486 */    MCD::OPC_ExtractField, 23, 3,  // Inst{25-23} ...
/* 7489 */    MCD::OPC_FilterValue, 0, 16, 0, // Skip to: 7509
/* 7493 */    MCD::OPC_CheckField, 11, 10, 0, 167, 24, // Skip to: 13810
/* 7499 */    MCD::OPC_CheckField, 0, 2, 0, 161, 24, // Skip to: 13810
/* 7505 */    MCD::OPC_Decode, 153, 3, 104, // Opcode: DSS
/* 7509 */    MCD::OPC_FilterValue, 4, 153, 24, // Skip to: 13810
/* 7513 */    MCD::OPC_CheckField, 11, 12, 0, 147, 24, // Skip to: 13810
/* 7519 */    MCD::OPC_CheckField, 0, 2, 0, 141, 24, // Skip to: 13810
/* 7525 */    MCD::OPC_Decode, 154, 3, 0, // Opcode: DSSALL
/* 7529 */    MCD::OPC_FilterValue, 26, 41, 0, // Skip to: 7574
/* 7533 */    MCD::OPC_ExtractField, 1, 1,  // Inst{1} ...
/* 7536 */    MCD::OPC_FilterValue, 0, 20, 0, // Skip to: 7560
/* 7540 */    MCD::OPC_CheckField, 11, 15, 0, 10, 0, // Skip to: 7556
/* 7546 */    MCD::OPC_CheckField, 0, 1, 0, 4, 0, // Skip to: 7556
/* 7552 */    MCD::OPC_Decode, 241, 4, 0, // Opcode: EnforceIEIO
/* 7556 */    MCD::OPC_Decode, 231, 6, 105, // Opcode: MBAR
/* 7560 */    MCD::OPC_FilterValue, 1, 102, 24, // Skip to: 13810
/* 7564 */    MCD::OPC_CheckField, 0, 1, 0, 96, 24, // Skip to: 13810
/* 7570 */    MCD::OPC_Decode, 153, 6, 100, // Opcode: LFIWAX
/* 7574 */    MCD::OPC_FilterValue, 27, 25, 0, // Skip to: 7603
/* 7578 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 7581 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 7595
/* 7585 */    MCD::OPC_CheckField, 11, 15, 0, 75, 24, // Skip to: 13810
/* 7591 */    MCD::OPC_Decode, 134, 7, 0, // Opcode: MSGSYNC
/* 7595 */    MCD::OPC_FilterValue, 2, 67, 24, // Skip to: 13810
/* 7599 */    MCD::OPC_Decode, 154, 6, 100, // Opcode: LFIWZX
/* 7603 */    MCD::OPC_FilterValue, 28, 10, 0, // Skip to: 7617
/* 7607 */    MCD::OPC_CheckField, 0, 2, 0, 53, 24, // Skip to: 13810
/* 7613 */    MCD::OPC_Decode, 136, 10, 88, // Opcode: STHBRX
/* 7617 */    MCD::OPC_FilterValue, 30, 25, 0, // Skip to: 7646
/* 7621 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 7624 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 7638
/* 7628 */    MCD::OPC_CheckField, 21, 5, 0, 32, 24, // Skip to: 13810
/* 7634 */    MCD::OPC_Decode, 232, 5, 92, // Opcode: ICBI
/* 7638 */    MCD::OPC_FilterValue, 2, 24, 24, // Skip to: 13810
/* 7642 */    MCD::OPC_Decode, 129, 10, 100, // Opcode: STFIWX
/* 7646 */    MCD::OPC_FilterValue, 31, 16, 24, // Skip to: 13810
/* 7650 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 7653 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 7667
/* 7657 */    MCD::OPC_CheckField, 0, 2, 0, 3, 24, // Skip to: 13810
/* 7663 */    MCD::OPC_Decode, 130, 3, 92, // Opcode: DCBZ
/* 7667 */    MCD::OPC_FilterValue, 1, 251, 23, // Skip to: 13810
/* 7671 */    MCD::OPC_CheckField, 0, 2, 0, 245, 23, // Skip to: 13810
/* 7677 */    MCD::OPC_Decode, 131, 3, 92, // Opcode: DCBZL
/* 7681 */    MCD::OPC_FilterValue, 12, 95, 0, // Skip to: 7780
/* 7685 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 7688 */    MCD::OPC_FilterValue, 0, 19, 0, // Skip to: 7711
/* 7692 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 7695 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 7703
/* 7699 */    MCD::OPC_Decode, 208, 9, 106, // Opcode: SLW
/* 7703 */    MCD::OPC_FilterValue, 1, 215, 23, // Skip to: 13810
/* 7707 */    MCD::OPC_Decode, 213, 9, 106, // Opcode: SLWo
/* 7711 */    MCD::OPC_FilterValue, 16, 19, 0, // Skip to: 7734
/* 7715 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 7718 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 7726
/* 7722 */    MCD::OPC_Decode, 229, 9, 106, // Opcode: SRW
/* 7726 */    MCD::OPC_FilterValue, 1, 192, 23, // Skip to: 13810
/* 7730 */    MCD::OPC_Decode, 234, 9, 106, // Opcode: SRWo
/* 7734 */    MCD::OPC_FilterValue, 24, 19, 0, // Skip to: 7757
/* 7738 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 7741 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 7749
/* 7745 */    MCD::OPC_Decode, 221, 9, 106, // Opcode: SRAW
/* 7749 */    MCD::OPC_FilterValue, 1, 169, 23, // Skip to: 13810
/* 7753 */    MCD::OPC_Decode, 224, 9, 106, // Opcode: SRAWo
/* 7757 */    MCD::OPC_FilterValue, 25, 161, 23, // Skip to: 13810
/* 7761 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 7764 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 7772
/* 7768 */    MCD::OPC_Decode, 222, 9, 107, // Opcode: SRAWI
/* 7772 */    MCD::OPC_FilterValue, 1, 146, 23, // Skip to: 13810
/* 7776 */    MCD::OPC_Decode, 223, 9, 107, // Opcode: SRAWIo
/* 7780 */    MCD::OPC_FilterValue, 13, 110, 1, // Skip to: 8150
/* 7784 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 7787 */    MCD::OPC_FilterValue, 0, 47, 0, // Skip to: 7838
/* 7791 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 7794 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 7808
/* 7798 */    MCD::OPC_CheckField, 11, 5, 0, 118, 23, // Skip to: 13810
/* 7804 */    MCD::OPC_Decode, 208, 2, 108, // Opcode: CNTLZW
/* 7808 */    MCD::OPC_FilterValue, 1, 10, 0, // Skip to: 7822
/* 7812 */    MCD::OPC_CheckField, 11, 5, 0, 104, 23, // Skip to: 13810
/* 7818 */    MCD::OPC_Decode, 211, 2, 108, // Opcode: CNTLZWo
/* 7822 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 7830
/* 7826 */    MCD::OPC_Decode, 204, 9, 109, // Opcode: SLD
/* 7830 */    MCD::OPC_FilterValue, 3, 88, 23, // Skip to: 13810
/* 7834 */    MCD::OPC_Decode, 207, 9, 109, // Opcode: SLDo
/* 7838 */    MCD::OPC_FilterValue, 1, 31, 0, // Skip to: 7873
/* 7842 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 7845 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 7859
/* 7849 */    MCD::OPC_CheckField, 11, 5, 0, 67, 23, // Skip to: 13810
/* 7855 */    MCD::OPC_Decode, 206, 2, 110, // Opcode: CNTLZD
/* 7859 */    MCD::OPC_FilterValue, 1, 59, 23, // Skip to: 13810
/* 7863 */    MCD::OPC_CheckField, 11, 5, 0, 53, 23, // Skip to: 13810
/* 7869 */    MCD::OPC_Decode, 207, 2, 110, // Opcode: CNTLZDo
/* 7873 */    MCD::OPC_FilterValue, 11, 16, 0, // Skip to: 7893
/* 7877 */    MCD::OPC_CheckField, 11, 5, 0, 39, 23, // Skip to: 13810
/* 7883 */    MCD::OPC_CheckField, 0, 2, 0, 33, 23, // Skip to: 13810
/* 7889 */    MCD::OPC_Decode, 215, 7, 108, // Opcode: POPCNTW
/* 7893 */    MCD::OPC_FilterValue, 15, 16, 0, // Skip to: 7913
/* 7897 */    MCD::OPC_CheckField, 11, 5, 0, 19, 23, // Skip to: 13810
/* 7903 */    MCD::OPC_CheckField, 0, 2, 0, 13, 23, // Skip to: 13810
/* 7909 */    MCD::OPC_Decode, 214, 7, 110, // Opcode: POPCNTD
/* 7913 */    MCD::OPC_FilterValue, 16, 47, 0, // Skip to: 7964
/* 7917 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 7920 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 7934
/* 7924 */    MCD::OPC_CheckField, 11, 5, 0, 248, 22, // Skip to: 13810
/* 7930 */    MCD::OPC_Decode, 214, 2, 108, // Opcode: CNTTZW
/* 7934 */    MCD::OPC_FilterValue, 1, 10, 0, // Skip to: 7948
/* 7938 */    MCD::OPC_CheckField, 11, 5, 0, 234, 22, // Skip to: 13810
/* 7944 */    MCD::OPC_Decode, 217, 2, 108, // Opcode: CNTTZWo
/* 7948 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 7956
/* 7952 */    MCD::OPC_Decode, 225, 9, 109, // Opcode: SRD
/* 7956 */    MCD::OPC_FilterValue, 3, 218, 22, // Skip to: 13810
/* 7960 */    MCD::OPC_Decode, 228, 9, 109, // Opcode: SRDo
/* 7964 */    MCD::OPC_FilterValue, 17, 31, 0, // Skip to: 7999
/* 7968 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 7971 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 7985
/* 7975 */    MCD::OPC_CheckField, 11, 5, 0, 197, 22, // Skip to: 13810
/* 7981 */    MCD::OPC_Decode, 212, 2, 110, // Opcode: CNTTZD
/* 7985 */    MCD::OPC_FilterValue, 1, 189, 22, // Skip to: 13810
/* 7989 */    MCD::OPC_CheckField, 11, 5, 0, 183, 22, // Skip to: 13810
/* 7995 */    MCD::OPC_Decode, 213, 2, 110, // Opcode: CNTTZDo
/* 7999 */    MCD::OPC_FilterValue, 24, 19, 0, // Skip to: 8022
/* 8003 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 8006 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 8014
/* 8010 */    MCD::OPC_Decode, 217, 9, 109, // Opcode: SRAD
/* 8014 */    MCD::OPC_FilterValue, 1, 160, 22, // Skip to: 13810
/* 8018 */    MCD::OPC_Decode, 220, 9, 109, // Opcode: SRADo
/* 8022 */    MCD::OPC_FilterValue, 25, 19, 0, // Skip to: 8045
/* 8026 */    MCD::OPC_ExtractField, 0, 1,  // Inst{0} ...
/* 8029 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 8037
/* 8033 */    MCD::OPC_Decode, 218, 9, 111, // Opcode: SRADI
/* 8037 */    MCD::OPC_FilterValue, 1, 137, 22, // Skip to: 13810
/* 8041 */    MCD::OPC_Decode, 219, 9, 111, // Opcode: SRADIo
/* 8045 */    MCD::OPC_FilterValue, 28, 31, 0, // Skip to: 8080
/* 8049 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 8052 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 8066
/* 8056 */    MCD::OPC_CheckField, 11, 5, 0, 116, 22, // Skip to: 13810
/* 8062 */    MCD::OPC_Decode, 232, 4, 108, // Opcode: EXTSH
/* 8066 */    MCD::OPC_FilterValue, 1, 108, 22, // Skip to: 13810
/* 8070 */    MCD::OPC_CheckField, 11, 5, 0, 102, 22, // Skip to: 13810
/* 8076 */    MCD::OPC_Decode, 236, 4, 108, // Opcode: EXTSHo
/* 8080 */    MCD::OPC_FilterValue, 29, 31, 0, // Skip to: 8115
/* 8084 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 8087 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 8101
/* 8091 */    MCD::OPC_CheckField, 11, 5, 0, 81, 22, // Skip to: 13810
/* 8097 */    MCD::OPC_Decode, 227, 4, 108, // Opcode: EXTSB
/* 8101 */    MCD::OPC_FilterValue, 1, 73, 22, // Skip to: 13810
/* 8105 */    MCD::OPC_CheckField, 11, 5, 0, 67, 22, // Skip to: 13810
/* 8111 */    MCD::OPC_Decode, 231, 4, 108, // Opcode: EXTSBo
/* 8115 */    MCD::OPC_FilterValue, 30, 59, 22, // Skip to: 13810
/* 8119 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 8122 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 8136
/* 8126 */    MCD::OPC_CheckField, 11, 5, 0, 46, 22, // Skip to: 13810
/* 8132 */    MCD::OPC_Decode, 237, 4, 110, // Opcode: EXTSW
/* 8136 */    MCD::OPC_FilterValue, 1, 38, 22, // Skip to: 13810
/* 8140 */    MCD::OPC_CheckField, 11, 5, 0, 32, 22, // Skip to: 13810
/* 8146 */    MCD::OPC_Decode, 240, 4, 110, // Opcode: EXTSWo
/* 8150 */    MCD::OPC_FilterValue, 14, 215, 0, // Skip to: 8369
/* 8154 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 8157 */    MCD::OPC_FilterValue, 0, 19, 0, // Skip to: 8180
/* 8161 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 8164 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 8172
/* 8168 */    MCD::OPC_Decode, 145, 1, 106, // Opcode: AND
/* 8172 */    MCD::OPC_FilterValue, 1, 2, 22, // Skip to: 13810
/* 8176 */    MCD::OPC_Decode, 160, 1, 106, // Opcode: ANDo
/* 8180 */    MCD::OPC_FilterValue, 1, 19, 0, // Skip to: 8203
/* 8184 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 8187 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 8195
/* 8191 */    MCD::OPC_Decode, 148, 1, 106, // Opcode: ANDC
/* 8195 */    MCD::OPC_FilterValue, 1, 235, 21, // Skip to: 13810
/* 8199 */    MCD::OPC_Decode, 151, 1, 106, // Opcode: ANDCo
/* 8203 */    MCD::OPC_FilterValue, 3, 19, 0, // Skip to: 8226
/* 8207 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 8210 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 8218
/* 8214 */    MCD::OPC_Decode, 198, 7, 106, // Opcode: NOR
/* 8218 */    MCD::OPC_FilterValue, 1, 212, 21, // Skip to: 13810
/* 8222 */    MCD::OPC_Decode, 201, 7, 106, // Opcode: NORo
/* 8226 */    MCD::OPC_FilterValue, 7, 10, 0, // Skip to: 8240
/* 8230 */    MCD::OPC_CheckField, 0, 2, 0, 198, 21, // Skip to: 13810
/* 8236 */    MCD::OPC_Decode, 182, 2, 112, // Opcode: BPERMD
/* 8240 */    MCD::OPC_FilterValue, 8, 19, 0, // Skip to: 8263
/* 8244 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 8247 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 8255
/* 8251 */    MCD::OPC_Decode, 172, 3, 106, // Opcode: EQV
/* 8255 */    MCD::OPC_FilterValue, 1, 175, 21, // Skip to: 13810
/* 8259 */    MCD::OPC_Decode, 175, 3, 106, // Opcode: EQVo
/* 8263 */    MCD::OPC_FilterValue, 9, 19, 0, // Skip to: 8286
/* 8267 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 8270 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 8278
/* 8274 */    MCD::OPC_Decode, 164, 13, 106, // Opcode: XOR
/* 8278 */    MCD::OPC_FilterValue, 1, 152, 21, // Skip to: 13810
/* 8282 */    MCD::OPC_Decode, 171, 13, 106, // Opcode: XORo
/* 8286 */    MCD::OPC_FilterValue, 12, 19, 0, // Skip to: 8309
/* 8290 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 8293 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 8301
/* 8297 */    MCD::OPC_Decode, 205, 7, 106, // Opcode: ORC
/* 8301 */    MCD::OPC_FilterValue, 1, 129, 21, // Skip to: 13810
/* 8305 */    MCD::OPC_Decode, 208, 7, 106, // Opcode: ORCo
/* 8309 */    MCD::OPC_FilterValue, 13, 19, 0, // Skip to: 8332
/* 8313 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 8316 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 8324
/* 8320 */    MCD::OPC_Decode, 202, 7, 106, // Opcode: OR
/* 8324 */    MCD::OPC_FilterValue, 1, 106, 21, // Skip to: 13810
/* 8328 */    MCD::OPC_Decode, 213, 7, 106, // Opcode: ORo
/* 8332 */    MCD::OPC_FilterValue, 14, 19, 0, // Skip to: 8355
/* 8336 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 8339 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 8347
/* 8343 */    MCD::OPC_Decode, 186, 7, 106, // Opcode: NAND
/* 8347 */    MCD::OPC_FilterValue, 1, 83, 21, // Skip to: 13810
/* 8351 */    MCD::OPC_Decode, 189, 7, 106, // Opcode: NANDo
/* 8355 */    MCD::OPC_FilterValue, 15, 75, 21, // Skip to: 13810
/* 8359 */    MCD::OPC_CheckField, 0, 2, 0, 69, 21, // Skip to: 13810
/* 8365 */    MCD::OPC_Decode, 193, 2, 106, // Opcode: CMPB
/* 8369 */    MCD::OPC_FilterValue, 15, 61, 21, // Skip to: 13810
/* 8373 */    MCD::OPC_CheckField, 23, 3, 0, 55, 21, // Skip to: 13810
/* 8379 */    MCD::OPC_CheckField, 6, 15, 1, 49, 21, // Skip to: 13810
/* 8385 */    MCD::OPC_CheckField, 0, 2, 0, 43, 21, // Skip to: 13810
/* 8391 */    MCD::OPC_Decode, 161, 13, 99, // Opcode: WAIT
/* 8395 */    MCD::OPC_FilterValue, 32, 4, 0, // Skip to: 8403
/* 8399 */    MCD::OPC_Decode, 203, 6, 113, // Opcode: LWZ
/* 8403 */    MCD::OPC_FilterValue, 33, 4, 0, // Skip to: 8411
/* 8407 */    MCD::OPC_Decode, 206, 6, 113, // Opcode: LWZU
/* 8411 */    MCD::OPC_FilterValue, 34, 4, 0, // Skip to: 8419
/* 8415 */    MCD::OPC_Decode, 251, 5, 113, // Opcode: LBZ
/* 8419 */    MCD::OPC_FilterValue, 35, 4, 0, // Skip to: 8427
/* 8423 */    MCD::OPC_Decode, 254, 5, 113, // Opcode: LBZU
/* 8427 */    MCD::OPC_FilterValue, 36, 4, 0, // Skip to: 8435
/* 8431 */    MCD::OPC_Decode, 153, 10, 113, // Opcode: STW
/* 8435 */    MCD::OPC_FilterValue, 37, 4, 0, // Skip to: 8443
/* 8439 */    MCD::OPC_Decode, 159, 10, 113, // Opcode: STWU
/* 8443 */    MCD::OPC_FilterValue, 38, 4, 0, // Skip to: 8451
/* 8447 */    MCD::OPC_Decode, 235, 9, 113, // Opcode: STB
/* 8451 */    MCD::OPC_FilterValue, 39, 4, 0, // Skip to: 8459
/* 8455 */    MCD::OPC_Decode, 239, 9, 113, // Opcode: STBU
/* 8459 */    MCD::OPC_FilterValue, 40, 4, 0, // Skip to: 8467
/* 8463 */    MCD::OPC_Decode, 171, 6, 113, // Opcode: LHZ
/* 8467 */    MCD::OPC_FilterValue, 41, 4, 0, // Skip to: 8475
/* 8471 */    MCD::OPC_Decode, 174, 6, 113, // Opcode: LHZU
/* 8475 */    MCD::OPC_FilterValue, 42, 4, 0, // Skip to: 8483
/* 8479 */    MCD::OPC_Decode, 159, 6, 113, // Opcode: LHA
/* 8483 */    MCD::OPC_FilterValue, 43, 4, 0, // Skip to: 8491
/* 8487 */    MCD::OPC_Decode, 163, 6, 113, // Opcode: LHAU
/* 8491 */    MCD::OPC_FilterValue, 44, 4, 0, // Skip to: 8499
/* 8495 */    MCD::OPC_Decode, 134, 10, 113, // Opcode: STH
/* 8499 */    MCD::OPC_FilterValue, 45, 4, 0, // Skip to: 8507
/* 8503 */    MCD::OPC_Decode, 139, 10, 113, // Opcode: STHU
/* 8507 */    MCD::OPC_FilterValue, 46, 4, 0, // Skip to: 8515
/* 8511 */    MCD::OPC_Decode, 184, 6, 113, // Opcode: LMW
/* 8515 */    MCD::OPC_FilterValue, 47, 4, 0, // Skip to: 8523
/* 8519 */    MCD::OPC_Decode, 145, 10, 113, // Opcode: STMW
/* 8523 */    MCD::OPC_FilterValue, 48, 4, 0, // Skip to: 8531
/* 8527 */    MCD::OPC_Decode, 155, 6, 114, // Opcode: LFS
/* 8531 */    MCD::OPC_FilterValue, 49, 4, 0, // Skip to: 8539
/* 8535 */    MCD::OPC_Decode, 156, 6, 114, // Opcode: LFSU
/* 8539 */    MCD::OPC_FilterValue, 50, 4, 0, // Skip to: 8547
/* 8543 */    MCD::OPC_Decode, 149, 6, 115, // Opcode: LFD
/* 8547 */    MCD::OPC_FilterValue, 51, 4, 0, // Skip to: 8555
/* 8551 */    MCD::OPC_Decode, 150, 6, 115, // Opcode: LFDU
/* 8555 */    MCD::OPC_FilterValue, 52, 4, 0, // Skip to: 8563
/* 8559 */    MCD::OPC_Decode, 130, 10, 114, // Opcode: STFS
/* 8563 */    MCD::OPC_FilterValue, 53, 4, 0, // Skip to: 8571
/* 8567 */    MCD::OPC_Decode, 131, 10, 114, // Opcode: STFSU
/* 8571 */    MCD::OPC_FilterValue, 54, 4, 0, // Skip to: 8579
/* 8575 */    MCD::OPC_Decode, 253, 9, 115, // Opcode: STFD
/* 8579 */    MCD::OPC_FilterValue, 55, 4, 0, // Skip to: 8587
/* 8583 */    MCD::OPC_Decode, 254, 9, 115, // Opcode: STFDU
/* 8587 */    MCD::OPC_FilterValue, 57, 19, 0, // Skip to: 8610
/* 8591 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 8594 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 8602
/* 8598 */    MCD::OPC_Decode, 213, 6, 116, // Opcode: LXSD
/* 8602 */    MCD::OPC_FilterValue, 3, 84, 20, // Skip to: 13810
/* 8606 */    MCD::OPC_Decode, 219, 6, 116, // Opcode: LXSSP
/* 8610 */    MCD::OPC_FilterValue, 58, 27, 0, // Skip to: 8641
/* 8614 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 8617 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 8625
/* 8621 */    MCD::OPC_Decode, 132, 6, 117, // Opcode: LD
/* 8625 */    MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 8633
/* 8629 */    MCD::OPC_Decode, 139, 6, 117, // Opcode: LDU
/* 8633 */    MCD::OPC_FilterValue, 2, 53, 20, // Skip to: 13810
/* 8637 */    MCD::OPC_Decode, 193, 6, 117, // Opcode: LWA
/* 8641 */    MCD::OPC_FilterValue, 59, 113, 1, // Skip to: 9014
/* 8645 */    MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 8648 */    MCD::OPC_FilterValue, 28, 31, 0, // Skip to: 8683
/* 8652 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 8655 */    MCD::OPC_FilterValue, 26, 10, 0, // Skip to: 8669
/* 8659 */    MCD::OPC_CheckField, 16, 5, 0, 25, 20, // Skip to: 13810
/* 8665 */    MCD::OPC_Decode, 252, 4, 118, // Opcode: FCFIDS
/* 8669 */    MCD::OPC_FilterValue, 30, 17, 20, // Skip to: 13810
/* 8673 */    MCD::OPC_CheckField, 16, 5, 0, 11, 20, // Skip to: 13810
/* 8679 */    MCD::OPC_Decode, 255, 4, 118, // Opcode: FCFIDUS
/* 8683 */    MCD::OPC_FilterValue, 29, 31, 0, // Skip to: 8718
/* 8687 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 8690 */    MCD::OPC_FilterValue, 26, 10, 0, // Skip to: 8704
/* 8694 */    MCD::OPC_CheckField, 16, 5, 0, 246, 19, // Skip to: 13810
/* 8700 */    MCD::OPC_Decode, 253, 4, 118, // Opcode: FCFIDSo
/* 8704 */    MCD::OPC_FilterValue, 30, 238, 19, // Skip to: 13810
/* 8708 */    MCD::OPC_CheckField, 16, 5, 0, 232, 19, // Skip to: 13810
/* 8714 */    MCD::OPC_Decode, 128, 5, 118, // Opcode: FCFIDUSo
/* 8718 */    MCD::OPC_FilterValue, 36, 10, 0, // Skip to: 8732
/* 8722 */    MCD::OPC_CheckField, 6, 5, 0, 218, 19, // Skip to: 13810
/* 8728 */    MCD::OPC_Decode, 154, 5, 119, // Opcode: FDIVS
/* 8732 */    MCD::OPC_FilterValue, 37, 10, 0, // Skip to: 8746
/* 8736 */    MCD::OPC_CheckField, 6, 5, 0, 204, 19, // Skip to: 13810
/* 8742 */    MCD::OPC_Decode, 155, 5, 119, // Opcode: FDIVSo
/* 8746 */    MCD::OPC_FilterValue, 40, 10, 0, // Skip to: 8760
/* 8750 */    MCD::OPC_CheckField, 6, 5, 0, 190, 19, // Skip to: 13810
/* 8756 */    MCD::OPC_Decode, 222, 5, 119, // Opcode: FSUBS
/* 8760 */    MCD::OPC_FilterValue, 41, 10, 0, // Skip to: 8774
/* 8764 */    MCD::OPC_CheckField, 6, 5, 0, 176, 19, // Skip to: 13810
/* 8770 */    MCD::OPC_Decode, 223, 5, 119, // Opcode: FSUBSo
/* 8774 */    MCD::OPC_FilterValue, 42, 10, 0, // Skip to: 8788
/* 8778 */    MCD::OPC_CheckField, 6, 5, 0, 162, 19, // Skip to: 13810
/* 8784 */    MCD::OPC_Decode, 247, 4, 119, // Opcode: FADDS
/* 8788 */    MCD::OPC_FilterValue, 43, 10, 0, // Skip to: 8802
/* 8792 */    MCD::OPC_CheckField, 6, 5, 0, 148, 19, // Skip to: 13810
/* 8798 */    MCD::OPC_Decode, 248, 4, 119, // Opcode: FADDSo
/* 8802 */    MCD::OPC_FilterValue, 44, 16, 0, // Skip to: 8822
/* 8806 */    MCD::OPC_CheckField, 16, 5, 0, 134, 19, // Skip to: 13810
/* 8812 */    MCD::OPC_CheckField, 6, 5, 0, 128, 19, // Skip to: 13810
/* 8818 */    MCD::OPC_Decode, 218, 5, 120, // Opcode: FSQRTS
/* 8822 */    MCD::OPC_FilterValue, 45, 16, 0, // Skip to: 8842
/* 8826 */    MCD::OPC_CheckField, 16, 5, 0, 114, 19, // Skip to: 13810
/* 8832 */    MCD::OPC_CheckField, 6, 5, 0, 108, 19, // Skip to: 13810
/* 8838 */    MCD::OPC_Decode, 219, 5, 120, // Opcode: FSQRTSo
/* 8842 */    MCD::OPC_FilterValue, 48, 16, 0, // Skip to: 8862
/* 8846 */    MCD::OPC_CheckField, 16, 5, 0, 94, 19, // Skip to: 13810
/* 8852 */    MCD::OPC_CheckField, 6, 5, 0, 88, 19, // Skip to: 13810
/* 8858 */    MCD::OPC_Decode, 188, 5, 120, // Opcode: FRES
/* 8862 */    MCD::OPC_FilterValue, 49, 16, 0, // Skip to: 8882
/* 8866 */    MCD::OPC_CheckField, 16, 5, 0, 74, 19, // Skip to: 13810
/* 8872 */    MCD::OPC_CheckField, 6, 5, 0, 68, 19, // Skip to: 13810
/* 8878 */    MCD::OPC_Decode, 189, 5, 120, // Opcode: FRESo
/* 8882 */    MCD::OPC_FilterValue, 50, 10, 0, // Skip to: 8896
/* 8886 */    MCD::OPC_CheckField, 11, 5, 0, 54, 19, // Skip to: 13810
/* 8892 */    MCD::OPC_Decode, 168, 5, 121, // Opcode: FMULS
/* 8896 */    MCD::OPC_FilterValue, 51, 10, 0, // Skip to: 8910
/* 8900 */    MCD::OPC_CheckField, 11, 5, 0, 40, 19, // Skip to: 13810
/* 8906 */    MCD::OPC_Decode, 169, 5, 121, // Opcode: FMULSo
/* 8910 */    MCD::OPC_FilterValue, 52, 16, 0, // Skip to: 8930
/* 8914 */    MCD::OPC_CheckField, 16, 5, 0, 26, 19, // Skip to: 13810
/* 8920 */    MCD::OPC_CheckField, 6, 5, 0, 20, 19, // Skip to: 13810
/* 8926 */    MCD::OPC_Decode, 210, 5, 120, // Opcode: FRSQRTES
/* 8930 */    MCD::OPC_FilterValue, 53, 16, 0, // Skip to: 8950
/* 8934 */    MCD::OPC_CheckField, 16, 5, 0, 6, 19, // Skip to: 13810
/* 8940 */    MCD::OPC_CheckField, 6, 5, 0, 0, 19, // Skip to: 13810
/* 8946 */    MCD::OPC_Decode, 211, 5, 120, // Opcode: FRSQRTESo
/* 8950 */    MCD::OPC_FilterValue, 56, 4, 0, // Skip to: 8958
/* 8954 */    MCD::OPC_Decode, 164, 5, 122, // Opcode: FMSUBS
/* 8958 */    MCD::OPC_FilterValue, 57, 4, 0, // Skip to: 8966
/* 8962 */    MCD::OPC_Decode, 165, 5, 122, // Opcode: FMSUBSo
/* 8966 */    MCD::OPC_FilterValue, 58, 4, 0, // Skip to: 8974
/* 8970 */    MCD::OPC_Decode, 158, 5, 122, // Opcode: FMADDS
/* 8974 */    MCD::OPC_FilterValue, 59, 4, 0, // Skip to: 8982
/* 8978 */    MCD::OPC_Decode, 159, 5, 122, // Opcode: FMADDSo
/* 8982 */    MCD::OPC_FilterValue, 60, 4, 0, // Skip to: 8990
/* 8986 */    MCD::OPC_Decode, 184, 5, 122, // Opcode: FNMSUBS
/* 8990 */    MCD::OPC_FilterValue, 61, 4, 0, // Skip to: 8998
/* 8994 */    MCD::OPC_Decode, 185, 5, 122, // Opcode: FNMSUBSo
/* 8998 */    MCD::OPC_FilterValue, 62, 4, 0, // Skip to: 9006
/* 9002 */    MCD::OPC_Decode, 180, 5, 122, // Opcode: FNMADDS
/* 9006 */    MCD::OPC_FilterValue, 63, 192, 18, // Skip to: 13810
/* 9010 */    MCD::OPC_Decode, 181, 5, 122, // Opcode: FNMADDSo
/* 9014 */    MCD::OPC_FilterValue, 60, 69, 12, // Skip to: 12159
/* 9018 */    MCD::OPC_ExtractField, 4, 2,  // Inst{5-4} ...
/* 9021 */    MCD::OPC_FilterValue, 0, 238, 2, // Skip to: 9775
/* 9025 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 9028 */    MCD::OPC_FilterValue, 0, 19, 0, // Skip to: 9051
/* 9032 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 9035 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 9043
/* 9039 */    MCD::OPC_Decode, 177, 13, 123, // Opcode: XSADDSP
/* 9043 */    MCD::OPC_FilterValue, 1, 155, 18, // Skip to: 13810
/* 9047 */    MCD::OPC_Decode, 224, 13, 124, // Opcode: XSMADDASP
/* 9051 */    MCD::OPC_FilterValue, 1, 19, 0, // Skip to: 9074
/* 9055 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 9058 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 9066
/* 9062 */    MCD::OPC_Decode, 152, 14, 123, // Opcode: XSSUBSP
/* 9066 */    MCD::OPC_FilterValue, 1, 132, 18, // Skip to: 13810
/* 9070 */    MCD::OPC_Decode, 226, 13, 124, // Opcode: XSMADDMSP
/* 9074 */    MCD::OPC_FilterValue, 2, 19, 0, // Skip to: 9097
/* 9078 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 9081 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 9089
/* 9085 */    MCD::OPC_Decode, 244, 13, 123, // Opcode: XSMULSP
/* 9089 */    MCD::OPC_FilterValue, 1, 109, 18, // Skip to: 13810
/* 9093 */    MCD::OPC_Decode, 236, 13, 124, // Opcode: XSMSUBASP
/* 9097 */    MCD::OPC_FilterValue, 3, 19, 0, // Skip to: 9120
/* 9101 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 9104 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 9112
/* 9108 */    MCD::OPC_Decode, 220, 13, 123, // Opcode: XSDIVSP
/* 9112 */    MCD::OPC_FilterValue, 1, 86, 18, // Skip to: 13810
/* 9116 */    MCD::OPC_Decode, 238, 13, 124, // Opcode: XSMSUBMSP
/* 9120 */    MCD::OPC_FilterValue, 4, 19, 0, // Skip to: 9143
/* 9124 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 9127 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 9135
/* 9131 */    MCD::OPC_Decode, 174, 13, 125, // Opcode: XSADDDP
/* 9135 */    MCD::OPC_FilterValue, 1, 63, 18, // Skip to: 13810
/* 9139 */    MCD::OPC_Decode, 223, 13, 126, // Opcode: XSMADDADP
/* 9143 */    MCD::OPC_FilterValue, 5, 19, 0, // Skip to: 9166
/* 9147 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 9150 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 9158
/* 9154 */    MCD::OPC_Decode, 149, 14, 125, // Opcode: XSSUBDP
/* 9158 */    MCD::OPC_FilterValue, 1, 40, 18, // Skip to: 13810
/* 9162 */    MCD::OPC_Decode, 225, 13, 126, // Opcode: XSMADDMDP
/* 9166 */    MCD::OPC_FilterValue, 6, 19, 0, // Skip to: 9189
/* 9170 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 9173 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 9181
/* 9177 */    MCD::OPC_Decode, 241, 13, 125, // Opcode: XSMULDP
/* 9181 */    MCD::OPC_FilterValue, 1, 17, 18, // Skip to: 13810
/* 9185 */    MCD::OPC_Decode, 235, 13, 126, // Opcode: XSMSUBADP
/* 9189 */    MCD::OPC_FilterValue, 7, 19, 0, // Skip to: 9212
/* 9193 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 9196 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 9204
/* 9200 */    MCD::OPC_Decode, 217, 13, 125, // Opcode: XSDIVDP
/* 9204 */    MCD::OPC_FilterValue, 1, 250, 17, // Skip to: 13810
/* 9208 */    MCD::OPC_Decode, 237, 13, 126, // Opcode: XSMSUBMDP
/* 9212 */    MCD::OPC_FilterValue, 8, 20, 0, // Skip to: 9236
/* 9216 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 9219 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 9227
/* 9223 */    MCD::OPC_Decode, 165, 14, 127, // Opcode: XVADDSP
/* 9227 */    MCD::OPC_FilterValue, 1, 227, 17, // Skip to: 13810
/* 9231 */    MCD::OPC_Decode, 209, 14, 128, 1, // Opcode: XVMADDASP
/* 9236 */    MCD::OPC_FilterValue, 9, 20, 0, // Skip to: 9260
/* 9240 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 9243 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 9251
/* 9247 */    MCD::OPC_Decode, 251, 14, 127, // Opcode: XVSUBSP
/* 9251 */    MCD::OPC_FilterValue, 1, 203, 17, // Skip to: 13810
/* 9255 */    MCD::OPC_Decode, 211, 14, 128, 1, // Opcode: XVMADDMSP
/* 9260 */    MCD::OPC_FilterValue, 10, 20, 0, // Skip to: 9284
/* 9264 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 9267 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 9275
/* 9271 */    MCD::OPC_Decode, 221, 14, 127, // Opcode: XVMULSP
/* 9275 */    MCD::OPC_FilterValue, 1, 179, 17, // Skip to: 13810
/* 9279 */    MCD::OPC_Decode, 217, 14, 128, 1, // Opcode: XVMSUBASP
/* 9284 */    MCD::OPC_FilterValue, 11, 20, 0, // Skip to: 9308
/* 9288 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 9291 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 9299
/* 9295 */    MCD::OPC_Decode, 205, 14, 127, // Opcode: XVDIVSP
/* 9299 */    MCD::OPC_FilterValue, 1, 155, 17, // Skip to: 13810
/* 9303 */    MCD::OPC_Decode, 219, 14, 128, 1, // Opcode: XVMSUBMSP
/* 9308 */    MCD::OPC_FilterValue, 12, 20, 0, // Skip to: 9332
/* 9312 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 9315 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 9323
/* 9319 */    MCD::OPC_Decode, 164, 14, 127, // Opcode: XVADDDP
/* 9323 */    MCD::OPC_FilterValue, 1, 131, 17, // Skip to: 13810
/* 9327 */    MCD::OPC_Decode, 208, 14, 128, 1, // Opcode: XVMADDADP
/* 9332 */    MCD::OPC_FilterValue, 13, 20, 0, // Skip to: 9356
/* 9336 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 9339 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 9347
/* 9343 */    MCD::OPC_Decode, 250, 14, 127, // Opcode: XVSUBDP
/* 9347 */    MCD::OPC_FilterValue, 1, 107, 17, // Skip to: 13810
/* 9351 */    MCD::OPC_Decode, 210, 14, 128, 1, // Opcode: XVMADDMDP
/* 9356 */    MCD::OPC_FilterValue, 14, 20, 0, // Skip to: 9380
/* 9360 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 9363 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 9371
/* 9367 */    MCD::OPC_Decode, 220, 14, 127, // Opcode: XVMULDP
/* 9371 */    MCD::OPC_FilterValue, 1, 83, 17, // Skip to: 13810
/* 9375 */    MCD::OPC_Decode, 216, 14, 128, 1, // Opcode: XVMSUBADP
/* 9380 */    MCD::OPC_FilterValue, 15, 20, 0, // Skip to: 9404
/* 9384 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 9387 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 9395
/* 9391 */    MCD::OPC_Decode, 204, 14, 127, // Opcode: XVDIVDP
/* 9395 */    MCD::OPC_FilterValue, 1, 59, 17, // Skip to: 13810
/* 9399 */    MCD::OPC_Decode, 218, 14, 128, 1, // Opcode: XVMSUBMDP
/* 9404 */    MCD::OPC_FilterValue, 16, 20, 0, // Skip to: 9428
/* 9408 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 9411 */    MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 9420
/* 9415 */    MCD::OPC_Decode, 229, 13, 129, 1, // Opcode: XSMAXCDP
/* 9420 */    MCD::OPC_FilterValue, 1, 34, 17, // Skip to: 13810
/* 9424 */    MCD::OPC_Decode, 250, 13, 124, // Opcode: XSNMADDASP
/* 9428 */    MCD::OPC_FilterValue, 17, 20, 0, // Skip to: 9452
/* 9432 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 9435 */    MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 9444
/* 9439 */    MCD::OPC_Decode, 232, 13, 129, 1, // Opcode: XSMINCDP
/* 9444 */    MCD::OPC_FilterValue, 1, 10, 17, // Skip to: 13810
/* 9448 */    MCD::OPC_Decode, 252, 13, 124, // Opcode: XSNMADDMSP
/* 9452 */    MCD::OPC_FilterValue, 18, 20, 0, // Skip to: 9476
/* 9456 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 9459 */    MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 9468
/* 9463 */    MCD::OPC_Decode, 231, 13, 129, 1, // Opcode: XSMAXJDP
/* 9468 */    MCD::OPC_FilterValue, 1, 242, 16, // Skip to: 13810
/* 9472 */    MCD::OPC_Decode, 128, 14, 124, // Opcode: XSNMSUBASP
/* 9476 */    MCD::OPC_FilterValue, 19, 20, 0, // Skip to: 9500
/* 9480 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 9483 */    MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 9492
/* 9487 */    MCD::OPC_Decode, 234, 13, 129, 1, // Opcode: XSMINJDP
/* 9492 */    MCD::OPC_FilterValue, 1, 218, 16, // Skip to: 13810
/* 9496 */    MCD::OPC_Decode, 130, 14, 124, // Opcode: XSNMSUBMSP
/* 9500 */    MCD::OPC_FilterValue, 20, 19, 0, // Skip to: 9523
/* 9504 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 9507 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 9515
/* 9511 */    MCD::OPC_Decode, 230, 13, 125, // Opcode: XSMAXDP
/* 9515 */    MCD::OPC_FilterValue, 1, 195, 16, // Skip to: 13810
/* 9519 */    MCD::OPC_Decode, 249, 13, 126, // Opcode: XSNMADDADP
/* 9523 */    MCD::OPC_FilterValue, 21, 19, 0, // Skip to: 9546
/* 9527 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 9530 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 9538
/* 9534 */    MCD::OPC_Decode, 233, 13, 125, // Opcode: XSMINDP
/* 9538 */    MCD::OPC_FilterValue, 1, 172, 16, // Skip to: 13810
/* 9542 */    MCD::OPC_Decode, 251, 13, 126, // Opcode: XSNMADDMDP
/* 9546 */    MCD::OPC_FilterValue, 22, 19, 0, // Skip to: 9569
/* 9550 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 9553 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 9561
/* 9557 */    MCD::OPC_Decode, 188, 13, 125, // Opcode: XSCPSGNDP
/* 9561 */    MCD::OPC_FilterValue, 1, 149, 16, // Skip to: 13810
/* 9565 */    MCD::OPC_Decode, 255, 13, 126, // Opcode: XSNMSUBADP
/* 9569 */    MCD::OPC_FilterValue, 23, 10, 0, // Skip to: 9583
/* 9573 */    MCD::OPC_CheckField, 3, 1, 1, 135, 16, // Skip to: 13810
/* 9579 */    MCD::OPC_Decode, 129, 14, 126, // Opcode: XSNMSUBMDP
/* 9583 */    MCD::OPC_FilterValue, 24, 20, 0, // Skip to: 9607
/* 9587 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 9590 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 9598
/* 9594 */    MCD::OPC_Decode, 213, 14, 127, // Opcode: XVMAXSP
/* 9598 */    MCD::OPC_FilterValue, 1, 112, 16, // Skip to: 13810
/* 9602 */    MCD::OPC_Decode, 227, 14, 128, 1, // Opcode: XVNMADDASP
/* 9607 */    MCD::OPC_FilterValue, 25, 20, 0, // Skip to: 9631
/* 9611 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 9614 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 9622
/* 9618 */    MCD::OPC_Decode, 215, 14, 127, // Opcode: XVMINSP
/* 9622 */    MCD::OPC_FilterValue, 1, 88, 16, // Skip to: 13810
/* 9626 */    MCD::OPC_Decode, 229, 14, 128, 1, // Opcode: XVNMADDMSP
/* 9631 */    MCD::OPC_FilterValue, 26, 20, 0, // Skip to: 9655
/* 9635 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 9638 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 9646
/* 9642 */    MCD::OPC_Decode, 183, 14, 127, // Opcode: XVCPSGNSP
/* 9646 */    MCD::OPC_FilterValue, 1, 64, 16, // Skip to: 13810
/* 9650 */    MCD::OPC_Decode, 231, 14, 128, 1, // Opcode: XVNMSUBASP
/* 9655 */    MCD::OPC_FilterValue, 27, 20, 0, // Skip to: 9679
/* 9659 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 9662 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 9670
/* 9666 */    MCD::OPC_Decode, 207, 14, 127, // Opcode: XVIEXPSP
/* 9670 */    MCD::OPC_FilterValue, 1, 40, 16, // Skip to: 13810
/* 9674 */    MCD::OPC_Decode, 233, 14, 128, 1, // Opcode: XVNMSUBMSP
/* 9679 */    MCD::OPC_FilterValue, 28, 20, 0, // Skip to: 9703
/* 9683 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 9686 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 9694
/* 9690 */    MCD::OPC_Decode, 212, 14, 127, // Opcode: XVMAXDP
/* 9694 */    MCD::OPC_FilterValue, 1, 16, 16, // Skip to: 13810
/* 9698 */    MCD::OPC_Decode, 226, 14, 128, 1, // Opcode: XVNMADDADP
/* 9703 */    MCD::OPC_FilterValue, 29, 20, 0, // Skip to: 9727
/* 9707 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 9710 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 9718
/* 9714 */    MCD::OPC_Decode, 214, 14, 127, // Opcode: XVMINDP
/* 9718 */    MCD::OPC_FilterValue, 1, 248, 15, // Skip to: 13810
/* 9722 */    MCD::OPC_Decode, 228, 14, 128, 1, // Opcode: XVNMADDMDP
/* 9727 */    MCD::OPC_FilterValue, 30, 20, 0, // Skip to: 9751
/* 9731 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 9734 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 9742
/* 9738 */    MCD::OPC_Decode, 182, 14, 127, // Opcode: XVCPSGNDP
/* 9742 */    MCD::OPC_FilterValue, 1, 224, 15, // Skip to: 13810
/* 9746 */    MCD::OPC_Decode, 230, 14, 128, 1, // Opcode: XVNMSUBADP
/* 9751 */    MCD::OPC_FilterValue, 31, 215, 15, // Skip to: 13810
/* 9755 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 9758 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 9766
/* 9762 */    MCD::OPC_Decode, 206, 14, 127, // Opcode: XVIEXPDP
/* 9766 */    MCD::OPC_FilterValue, 1, 200, 15, // Skip to: 13810
/* 9770 */    MCD::OPC_Decode, 232, 14, 128, 1, // Opcode: XVNMSUBMDP
/* 9775 */    MCD::OPC_FilterValue, 1, 71, 2, // Skip to: 10362
/* 9779 */    MCD::OPC_ExtractField, 6, 2,  // Inst{7-6} ...
/* 9782 */    MCD::OPC_FilterValue, 0, 111, 0, // Skip to: 9897
/* 9786 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 9789 */    MCD::OPC_FilterValue, 0, 35, 0, // Skip to: 9828
/* 9793 */    MCD::OPC_ExtractField, 10, 1,  // Inst{10} ...
/* 9796 */    MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 9805
/* 9800 */    MCD::OPC_Decode, 159, 15, 130, 1, // Opcode: XXSLDWI
/* 9805 */    MCD::OPC_FilterValue, 1, 161, 15, // Skip to: 13810
/* 9809 */    MCD::OPC_ExtractField, 8, 2,  // Inst{9-8} ...
/* 9812 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 9820
/* 9816 */    MCD::OPC_Decode, 140, 15, 127, // Opcode: XXLAND
/* 9820 */    MCD::OPC_FilterValue, 1, 146, 15, // Skip to: 13810
/* 9824 */    MCD::OPC_Decode, 144, 15, 127, // Opcode: XXLNOR
/* 9828 */    MCD::OPC_FilterValue, 1, 138, 15, // Skip to: 13810
/* 9832 */    MCD::OPC_ExtractField, 8, 3,  // Inst{10-8} ...
/* 9835 */    MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 9844
/* 9839 */    MCD::OPC_Decode, 178, 13, 129, 1, // Opcode: XSCMPEQDP
/* 9844 */    MCD::OPC_FilterValue, 1, 17, 0, // Skip to: 9865
/* 9848 */    MCD::OPC_CheckField, 21, 2, 0, 116, 15, // Skip to: 13810
/* 9854 */    MCD::OPC_CheckField, 0, 1, 0, 110, 15, // Skip to: 13810
/* 9860 */    MCD::OPC_Decode, 186, 13, 131, 1, // Opcode: XSCMPUDP
/* 9865 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 9873
/* 9869 */    MCD::OPC_Decode, 168, 14, 127, // Opcode: XVCMPEQSP
/* 9873 */    MCD::OPC_FilterValue, 3, 4, 0, // Skip to: 9881
/* 9877 */    MCD::OPC_Decode, 166, 14, 127, // Opcode: XVCMPEQDP
/* 9881 */    MCD::OPC_FilterValue, 6, 4, 0, // Skip to: 9889
/* 9885 */    MCD::OPC_Decode, 169, 14, 127, // Opcode: XVCMPEQSPo
/* 9889 */    MCD::OPC_FilterValue, 7, 77, 15, // Skip to: 13810
/* 9893 */    MCD::OPC_Decode, 167, 14, 127, // Opcode: XVCMPEQDPo
/* 9897 */    MCD::OPC_FilterValue, 1, 111, 0, // Skip to: 10012
/* 9901 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 9904 */    MCD::OPC_FilterValue, 0, 35, 0, // Skip to: 9943
/* 9908 */    MCD::OPC_ExtractField, 10, 1,  // Inst{10} ...
/* 9911 */    MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 9920
/* 9915 */    MCD::OPC_Decode, 155, 15, 130, 1, // Opcode: XXPERMDI
/* 9920 */    MCD::OPC_FilterValue, 1, 46, 15, // Skip to: 13810
/* 9924 */    MCD::OPC_ExtractField, 8, 2,  // Inst{9-8} ...
/* 9927 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 9935
/* 9931 */    MCD::OPC_Decode, 141, 15, 127, // Opcode: XXLANDC
/* 9935 */    MCD::OPC_FilterValue, 1, 31, 15, // Skip to: 13810
/* 9939 */    MCD::OPC_Decode, 146, 15, 127, // Opcode: XXLORC
/* 9943 */    MCD::OPC_FilterValue, 1, 23, 15, // Skip to: 13810
/* 9947 */    MCD::OPC_ExtractField, 8, 3,  // Inst{10-8} ...
/* 9950 */    MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 9959
/* 9954 */    MCD::OPC_Decode, 182, 13, 129, 1, // Opcode: XSCMPGTDP
/* 9959 */    MCD::OPC_FilterValue, 1, 17, 0, // Skip to: 9980
/* 9963 */    MCD::OPC_CheckField, 21, 2, 0, 1, 15, // Skip to: 13810
/* 9969 */    MCD::OPC_CheckField, 0, 1, 0, 251, 14, // Skip to: 13810
/* 9975 */    MCD::OPC_Decode, 184, 13, 131, 1, // Opcode: XSCMPODP
/* 9980 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 9988
/* 9984 */    MCD::OPC_Decode, 176, 14, 127, // Opcode: XVCMPGTSP
/* 9988 */    MCD::OPC_FilterValue, 3, 4, 0, // Skip to: 9996
/* 9992 */    MCD::OPC_Decode, 174, 14, 127, // Opcode: XVCMPGTDP
/* 9996 */    MCD::OPC_FilterValue, 6, 4, 0, // Skip to: 10004
/* 10000 */   MCD::OPC_Decode, 177, 14, 127, // Opcode: XVCMPGTSPo
/* 10004 */   MCD::OPC_FilterValue, 7, 218, 14, // Skip to: 13810
/* 10008 */   MCD::OPC_Decode, 175, 14, 127, // Opcode: XVCMPGTDPo
/* 10012 */   MCD::OPC_FilterValue, 2, 157, 0, // Skip to: 10173
/* 10016 */   MCD::OPC_ExtractField, 8, 3,  // Inst{10-8} ...
/* 10019 */   MCD::OPC_FilterValue, 0, 20, 0, // Skip to: 10043
/* 10023 */   MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 10026 */   MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 10034
/* 10030 */   MCD::OPC_Decode, 152, 15, 127, // Opcode: XXMRGHW
/* 10034 */   MCD::OPC_FilterValue, 1, 188, 14, // Skip to: 13810
/* 10038 */   MCD::OPC_Decode, 181, 13, 129, 1, // Opcode: XSCMPGEDP
/* 10043 */   MCD::OPC_FilterValue, 1, 10, 0, // Skip to: 10057
/* 10047 */   MCD::OPC_CheckField, 3, 1, 0, 173, 14, // Skip to: 13810
/* 10053 */   MCD::OPC_Decode, 153, 15, 127, // Opcode: XXMRGLW
/* 10057 */   MCD::OPC_FilterValue, 2, 42, 0, // Skip to: 10103
/* 10061 */   MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 10064 */   MCD::OPC_FilterValue, 0, 27, 0, // Skip to: 10095
/* 10068 */   MCD::OPC_ExtractField, 2, 1,  // Inst{2} ...
/* 10071 */   MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 10086
/* 10075 */   MCD::OPC_CheckField, 18, 3, 0, 145, 14, // Skip to: 13810
/* 10081 */   MCD::OPC_Decode, 161, 15, 132, 1, // Opcode: XXSPLTW
/* 10086 */   MCD::OPC_FilterValue, 1, 136, 14, // Skip to: 13810
/* 10090 */   MCD::OPC_Decode, 138, 15, 133, 1, // Opcode: XXEXTRACTUW
/* 10095 */   MCD::OPC_FilterValue, 1, 127, 14, // Skip to: 13810
/* 10099 */   MCD::OPC_Decode, 172, 14, 127, // Opcode: XVCMPGESP
/* 10103 */   MCD::OPC_FilterValue, 3, 10, 0, // Skip to: 10117
/* 10107 */   MCD::OPC_CheckField, 3, 1, 1, 113, 14, // Skip to: 13810
/* 10113 */   MCD::OPC_Decode, 170, 14, 127, // Opcode: XVCMPGEDP
/* 10117 */   MCD::OPC_FilterValue, 4, 10, 0, // Skip to: 10131
/* 10121 */   MCD::OPC_CheckField, 3, 1, 0, 99, 14, // Skip to: 13810
/* 10127 */   MCD::OPC_Decode, 145, 15, 127, // Opcode: XXLOR
/* 10131 */   MCD::OPC_FilterValue, 5, 10, 0, // Skip to: 10145
/* 10135 */   MCD::OPC_CheckField, 3, 1, 0, 85, 14, // Skip to: 13810
/* 10141 */   MCD::OPC_Decode, 143, 15, 127, // Opcode: XXLNAND
/* 10145 */   MCD::OPC_FilterValue, 6, 10, 0, // Skip to: 10159
/* 10149 */   MCD::OPC_CheckField, 3, 1, 1, 71, 14, // Skip to: 13810
/* 10155 */   MCD::OPC_Decode, 173, 14, 127, // Opcode: XVCMPGESPo
/* 10159 */   MCD::OPC_FilterValue, 7, 63, 14, // Skip to: 13810
/* 10163 */   MCD::OPC_CheckField, 3, 1, 1, 57, 14, // Skip to: 13810
/* 10169 */   MCD::OPC_Decode, 171, 14, 127, // Opcode: XVCMPGEDPo
/* 10173 */   MCD::OPC_FilterValue, 3, 49, 14, // Skip to: 13810
/* 10177 */   MCD::OPC_ExtractField, 8, 3,  // Inst{10-8} ...
/* 10180 */   MCD::OPC_FilterValue, 0, 20, 0, // Skip to: 10204
/* 10184 */   MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 10187 */   MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 10195
/* 10191 */   MCD::OPC_Decode, 154, 15, 127, // Opcode: XXPERM
/* 10195 */   MCD::OPC_FilterValue, 1, 27, 14, // Skip to: 13810
/* 10199 */   MCD::OPC_Decode, 183, 13, 129, 1, // Opcode: XSCMPNEDP
/* 10204 */   MCD::OPC_FilterValue, 1, 32, 0, // Skip to: 10240
/* 10208 */   MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 10211 */   MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 10219
/* 10215 */   MCD::OPC_Decode, 157, 15, 127, // Opcode: XXPERMR
/* 10219 */   MCD::OPC_FilterValue, 1, 3, 14, // Skip to: 13810
/* 10223 */   MCD::OPC_CheckField, 21, 2, 0, 253, 13, // Skip to: 13810
/* 10229 */   MCD::OPC_CheckField, 0, 1, 0, 247, 13, // Skip to: 13810
/* 10235 */   MCD::OPC_Decode, 179, 13, 131, 1, // Opcode: XSCMPEXPDP
/* 10240 */   MCD::OPC_FilterValue, 2, 48, 0, // Skip to: 10292
/* 10244 */   MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 10247 */   MCD::OPC_FilterValue, 0, 33, 0, // Skip to: 10284
/* 10251 */   MCD::OPC_ExtractField, 2, 1,  // Inst{2} ...
/* 10254 */   MCD::OPC_FilterValue, 0, 17, 0, // Skip to: 10275
/* 10258 */   MCD::OPC_CheckField, 19, 2, 0, 218, 13, // Skip to: 13810
/* 10264 */   MCD::OPC_CheckField, 1, 1, 0, 212, 13, // Skip to: 13810
/* 10270 */   MCD::OPC_Decode, 160, 15, 134, 1, // Opcode: XXSPLTIB
/* 10275 */   MCD::OPC_FilterValue, 1, 203, 13, // Skip to: 13810
/* 10279 */   MCD::OPC_Decode, 139, 15, 135, 1, // Opcode: XXINSERTW
/* 10284 */   MCD::OPC_FilterValue, 1, 194, 13, // Skip to: 13810
/* 10288 */   MCD::OPC_Decode, 180, 14, 127, // Opcode: XVCMPNESP
/* 10292 */   MCD::OPC_FilterValue, 3, 10, 0, // Skip to: 10306
/* 10296 */   MCD::OPC_CheckField, 3, 1, 1, 180, 13, // Skip to: 13810
/* 10302 */   MCD::OPC_Decode, 178, 14, 127, // Opcode: XVCMPNEDP
/* 10306 */   MCD::OPC_FilterValue, 4, 10, 0, // Skip to: 10320
/* 10310 */   MCD::OPC_CheckField, 3, 1, 0, 166, 13, // Skip to: 13810
/* 10316 */   MCD::OPC_Decode, 148, 15, 127, // Opcode: XXLXOR
/* 10320 */   MCD::OPC_FilterValue, 5, 10, 0, // Skip to: 10334
/* 10324 */   MCD::OPC_CheckField, 3, 1, 0, 152, 13, // Skip to: 13810
/* 10330 */   MCD::OPC_Decode, 142, 15, 127, // Opcode: XXLEQV
/* 10334 */   MCD::OPC_FilterValue, 6, 10, 0, // Skip to: 10348
/* 10338 */   MCD::OPC_CheckField, 3, 1, 1, 138, 13, // Skip to: 13810
/* 10344 */   MCD::OPC_Decode, 181, 14, 127, // Opcode: XVCMPNESPo
/* 10348 */   MCD::OPC_FilterValue, 7, 130, 13, // Skip to: 13810
/* 10352 */   MCD::OPC_CheckField, 3, 1, 1, 124, 13, // Skip to: 13810
/* 10358 */   MCD::OPC_Decode, 179, 14, 127, // Opcode: XVCMPNEDPo
/* 10362 */   MCD::OPC_FilterValue, 2, 248, 6, // Skip to: 12150
/* 10366 */   MCD::OPC_ExtractField, 7, 4,  // Inst{10-7} ...
/* 10369 */   MCD::OPC_FilterValue, 0, 61, 0, // Skip to: 10434
/* 10373 */   MCD::OPC_ExtractField, 2, 2,  // Inst{3-2} ...
/* 10376 */   MCD::OPC_FilterValue, 2, 33, 0, // Skip to: 10413
/* 10380 */   MCD::OPC_ExtractField, 6, 1,  // Inst{6} ...
/* 10383 */   MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 10398
/* 10387 */   MCD::OPC_CheckField, 16, 5, 0, 89, 13, // Skip to: 13810
/* 10393 */   MCD::OPC_Decode, 144, 14, 136, 1, // Opcode: XSRSQRTESP
/* 10398 */   MCD::OPC_FilterValue, 1, 80, 13, // Skip to: 13810
/* 10402 */   MCD::OPC_CheckField, 16, 5, 0, 74, 13, // Skip to: 13810
/* 10408 */   MCD::OPC_Decode, 139, 14, 136, 1, // Opcode: XSRESP
/* 10413 */   MCD::OPC_FilterValue, 3, 65, 13, // Skip to: 13810
/* 10417 */   MCD::OPC_CheckField, 16, 5, 0, 59, 13, // Skip to: 13810
/* 10423 */   MCD::OPC_CheckField, 6, 1, 0, 53, 13, // Skip to: 13810
/* 10429 */   MCD::OPC_Decode, 148, 14, 136, 1, // Opcode: XSSQRTSP
/* 10434 */   MCD::OPC_FilterValue, 2, 135, 0, // Skip to: 10573
/* 10438 */   MCD::OPC_ExtractField, 2, 2,  // Inst{3-2} ...
/* 10441 */   MCD::OPC_FilterValue, 0, 33, 0, // Skip to: 10478
/* 10445 */   MCD::OPC_ExtractField, 6, 1,  // Inst{6} ...
/* 10448 */   MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 10463
/* 10452 */   MCD::OPC_CheckField, 16, 5, 0, 24, 13, // Skip to: 13810
/* 10458 */   MCD::OPC_Decode, 200, 13, 137, 1, // Opcode: XSCVDPUXWS
/* 10463 */   MCD::OPC_FilterValue, 1, 15, 13, // Skip to: 13810
/* 10467 */   MCD::OPC_CheckField, 16, 5, 0, 9, 13, // Skip to: 13810
/* 10473 */   MCD::OPC_Decode, 196, 13, 137, 1, // Opcode: XSCVDPSXWS
/* 10478 */   MCD::OPC_FilterValue, 1, 33, 0, // Skip to: 10515
/* 10482 */   MCD::OPC_ExtractField, 6, 1,  // Inst{6} ...
/* 10485 */   MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 10500
/* 10489 */   MCD::OPC_CheckField, 16, 5, 0, 243, 12, // Skip to: 13810
/* 10495 */   MCD::OPC_Decode, 133, 14, 137, 1, // Opcode: XSRDPI
/* 10500 */   MCD::OPC_FilterValue, 1, 234, 12, // Skip to: 13810
/* 10504 */   MCD::OPC_CheckField, 16, 5, 0, 228, 12, // Skip to: 13810
/* 10510 */   MCD::OPC_Decode, 137, 14, 137, 1, // Opcode: XSRDPIZ
/* 10515 */   MCD::OPC_FilterValue, 2, 33, 0, // Skip to: 10552
/* 10519 */   MCD::OPC_ExtractField, 6, 1,  // Inst{6} ...
/* 10522 */   MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 10537
/* 10526 */   MCD::OPC_CheckField, 16, 5, 0, 206, 12, // Skip to: 13810
/* 10532 */   MCD::OPC_Decode, 143, 14, 137, 1, // Opcode: XSRSQRTEDP
/* 10537 */   MCD::OPC_FilterValue, 1, 197, 12, // Skip to: 13810
/* 10541 */   MCD::OPC_CheckField, 16, 5, 0, 191, 12, // Skip to: 13810
/* 10547 */   MCD::OPC_Decode, 138, 14, 137, 1, // Opcode: XSREDP
/* 10552 */   MCD::OPC_FilterValue, 3, 182, 12, // Skip to: 13810
/* 10556 */   MCD::OPC_CheckField, 16, 5, 0, 176, 12, // Skip to: 13810
/* 10562 */   MCD::OPC_CheckField, 6, 1, 0, 170, 12, // Skip to: 13810
/* 10568 */   MCD::OPC_Decode, 145, 14, 137, 1, // Opcode: XSSQRTDP
/* 10573 */   MCD::OPC_FilterValue, 3, 123, 0, // Skip to: 10700
/* 10577 */   MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 10580 */   MCD::OPC_FilterValue, 0, 45, 0, // Skip to: 10629
/* 10584 */   MCD::OPC_ExtractField, 6, 1,  // Inst{6} ...
/* 10587 */   MCD::OPC_FilterValue, 0, 17, 0, // Skip to: 10608
/* 10591 */   MCD::OPC_CheckField, 16, 5, 0, 141, 12, // Skip to: 13810
/* 10597 */   MCD::OPC_CheckField, 2, 1, 1, 135, 12, // Skip to: 13810
/* 10603 */   MCD::OPC_Decode, 136, 14, 137, 1, // Opcode: XSRDPIP
/* 10608 */   MCD::OPC_FilterValue, 1, 126, 12, // Skip to: 13810
/* 10612 */   MCD::OPC_CheckField, 16, 5, 0, 120, 12, // Skip to: 13810
/* 10618 */   MCD::OPC_CheckField, 2, 1, 1, 114, 12, // Skip to: 13810
/* 10624 */   MCD::OPC_Decode, 135, 14, 137, 1, // Opcode: XSRDPIM
/* 10629 */   MCD::OPC_FilterValue, 1, 105, 12, // Skip to: 13810
/* 10633 */   MCD::OPC_ExtractField, 6, 1,  // Inst{6} ...
/* 10636 */   MCD::OPC_FilterValue, 0, 39, 0, // Skip to: 10679
/* 10640 */   MCD::OPC_ExtractField, 2, 1,  // Inst{2} ...
/* 10643 */   MCD::OPC_FilterValue, 0, 17, 0, // Skip to: 10664
/* 10647 */   MCD::OPC_CheckField, 16, 7, 0, 85, 12, // Skip to: 13810
/* 10653 */   MCD::OPC_CheckField, 0, 1, 0, 79, 12, // Skip to: 13810
/* 10659 */   MCD::OPC_Decode, 154, 14, 138, 1, // Opcode: XSTSQRTDP
/* 10664 */   MCD::OPC_FilterValue, 1, 70, 12, // Skip to: 13810
/* 10668 */   MCD::OPC_CheckField, 16, 5, 0, 64, 12, // Skip to: 13810
/* 10674 */   MCD::OPC_Decode, 134, 14, 137, 1, // Opcode: XSRDPIC
/* 10679 */   MCD::OPC_FilterValue, 1, 55, 12, // Skip to: 13810
/* 10683 */   MCD::OPC_CheckField, 21, 2, 0, 49, 12, // Skip to: 13810
/* 10689 */   MCD::OPC_CheckField, 0, 1, 0, 43, 12, // Skip to: 13810
/* 10695 */   MCD::OPC_Decode, 153, 14, 131, 1, // Opcode: XSTDIVDP
/* 10700 */   MCD::OPC_FilterValue, 4, 135, 0, // Skip to: 10839
/* 10704 */   MCD::OPC_ExtractField, 2, 2,  // Inst{3-2} ...
/* 10707 */   MCD::OPC_FilterValue, 0, 33, 0, // Skip to: 10744
/* 10711 */   MCD::OPC_ExtractField, 6, 1,  // Inst{6} ...
/* 10714 */   MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 10729
/* 10718 */   MCD::OPC_CheckField, 16, 5, 0, 14, 12, // Skip to: 13810
/* 10724 */   MCD::OPC_Decode, 195, 14, 139, 1, // Opcode: XVCVSPUXWS
/* 10729 */   MCD::OPC_FilterValue, 1, 5, 12, // Skip to: 13810
/* 10733 */   MCD::OPC_CheckField, 16, 5, 0, 255, 11, // Skip to: 13810
/* 10739 */   MCD::OPC_Decode, 193, 14, 139, 1, // Opcode: XVCVSPSXWS
/* 10744 */   MCD::OPC_FilterValue, 1, 33, 0, // Skip to: 10781
/* 10748 */   MCD::OPC_ExtractField, 6, 1,  // Inst{6} ...
/* 10751 */   MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 10766
/* 10755 */   MCD::OPC_CheckField, 16, 5, 0, 233, 11, // Skip to: 13810
/* 10761 */   MCD::OPC_Decode, 241, 14, 139, 1, // Opcode: XVRSPI
/* 10766 */   MCD::OPC_FilterValue, 1, 224, 11, // Skip to: 13810
/* 10770 */   MCD::OPC_CheckField, 16, 5, 0, 218, 11, // Skip to: 13810
/* 10776 */   MCD::OPC_Decode, 245, 14, 139, 1, // Opcode: XVRSPIZ
/* 10781 */   MCD::OPC_FilterValue, 2, 33, 0, // Skip to: 10818
/* 10785 */   MCD::OPC_ExtractField, 6, 1,  // Inst{6} ...
/* 10788 */   MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 10803
/* 10792 */   MCD::OPC_CheckField, 16, 5, 0, 196, 11, // Skip to: 13810
/* 10798 */   MCD::OPC_Decode, 247, 14, 139, 1, // Opcode: XVRSQRTESP
/* 10803 */   MCD::OPC_FilterValue, 1, 187, 11, // Skip to: 13810
/* 10807 */   MCD::OPC_CheckField, 16, 5, 0, 181, 11, // Skip to: 13810
/* 10813 */   MCD::OPC_Decode, 240, 14, 139, 1, // Opcode: XVRESP
/* 10818 */   MCD::OPC_FilterValue, 3, 172, 11, // Skip to: 13810
/* 10822 */   MCD::OPC_CheckField, 16, 5, 0, 166, 11, // Skip to: 13810
/* 10828 */   MCD::OPC_CheckField, 6, 1, 0, 160, 11, // Skip to: 13810
/* 10834 */   MCD::OPC_Decode, 249, 14, 139, 1, // Opcode: XVSQRTSP
/* 10839 */   MCD::OPC_FilterValue, 5, 155, 0, // Skip to: 10998
/* 10843 */   MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 10846 */   MCD::OPC_FilterValue, 0, 77, 0, // Skip to: 10927
/* 10850 */   MCD::OPC_ExtractField, 2, 1,  // Inst{2} ...
/* 10853 */   MCD::OPC_FilterValue, 0, 33, 0, // Skip to: 10890
/* 10857 */   MCD::OPC_ExtractField, 6, 1,  // Inst{6} ...
/* 10860 */   MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 10875
/* 10864 */   MCD::OPC_CheckField, 16, 5, 0, 124, 11, // Skip to: 13810
/* 10870 */   MCD::OPC_Decode, 203, 14, 139, 1, // Opcode: XVCVUXWSP
/* 10875 */   MCD::OPC_FilterValue, 1, 115, 11, // Skip to: 13810
/* 10879 */   MCD::OPC_CheckField, 16, 5, 0, 109, 11, // Skip to: 13810
/* 10885 */   MCD::OPC_Decode, 199, 14, 139, 1, // Opcode: XVCVSXWSP
/* 10890 */   MCD::OPC_FilterValue, 1, 100, 11, // Skip to: 13810
/* 10894 */   MCD::OPC_ExtractField, 6, 1,  // Inst{6} ...
/* 10897 */   MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 10912
/* 10901 */   MCD::OPC_CheckField, 16, 5, 0, 87, 11, // Skip to: 13810
/* 10907 */   MCD::OPC_Decode, 244, 14, 139, 1, // Opcode: XVRSPIP
/* 10912 */   MCD::OPC_FilterValue, 1, 78, 11, // Skip to: 13810
/* 10916 */   MCD::OPC_CheckField, 16, 5, 0, 72, 11, // Skip to: 13810
/* 10922 */   MCD::OPC_Decode, 243, 14, 139, 1, // Opcode: XVRSPIM
/* 10927 */   MCD::OPC_FilterValue, 1, 63, 11, // Skip to: 13810
/* 10931 */   MCD::OPC_ExtractField, 6, 1,  // Inst{6} ...
/* 10934 */   MCD::OPC_FilterValue, 0, 39, 0, // Skip to: 10977
/* 10938 */   MCD::OPC_ExtractField, 2, 1,  // Inst{2} ...
/* 10941 */   MCD::OPC_FilterValue, 0, 17, 0, // Skip to: 10962
/* 10945 */   MCD::OPC_CheckField, 16, 7, 0, 43, 11, // Skip to: 13810
/* 10951 */   MCD::OPC_CheckField, 0, 1, 0, 37, 11, // Skip to: 13810
/* 10957 */   MCD::OPC_Decode, 255, 14, 140, 1, // Opcode: XVTSQRTSP
/* 10962 */   MCD::OPC_FilterValue, 1, 28, 11, // Skip to: 13810
/* 10966 */   MCD::OPC_CheckField, 16, 5, 0, 22, 11, // Skip to: 13810
/* 10972 */   MCD::OPC_Decode, 242, 14, 139, 1, // Opcode: XVRSPIC
/* 10977 */   MCD::OPC_FilterValue, 1, 13, 11, // Skip to: 13810
/* 10981 */   MCD::OPC_CheckField, 21, 2, 0, 7, 11, // Skip to: 13810
/* 10987 */   MCD::OPC_CheckField, 0, 1, 0, 1, 11, // Skip to: 13810
/* 10993 */   MCD::OPC_Decode, 253, 14, 141, 1, // Opcode: XVTDIVSP
/* 10998 */   MCD::OPC_FilterValue, 6, 135, 0, // Skip to: 11137
/* 11002 */   MCD::OPC_ExtractField, 2, 2,  // Inst{3-2} ...
/* 11005 */   MCD::OPC_FilterValue, 0, 33, 0, // Skip to: 11042
/* 11009 */   MCD::OPC_ExtractField, 6, 1,  // Inst{6} ...
/* 11012 */   MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 11027
/* 11016 */   MCD::OPC_CheckField, 16, 5, 0, 228, 10, // Skip to: 13810
/* 11022 */   MCD::OPC_Decode, 188, 14, 139, 1, // Opcode: XVCVDPUXWS
/* 11027 */   MCD::OPC_FilterValue, 1, 219, 10, // Skip to: 13810
/* 11031 */   MCD::OPC_CheckField, 16, 5, 0, 213, 10, // Skip to: 13810
/* 11037 */   MCD::OPC_Decode, 186, 14, 139, 1, // Opcode: XVCVDPSXWS
/* 11042 */   MCD::OPC_FilterValue, 1, 33, 0, // Skip to: 11079
/* 11046 */   MCD::OPC_ExtractField, 6, 1,  // Inst{6} ...
/* 11049 */   MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 11064
/* 11053 */   MCD::OPC_CheckField, 16, 5, 0, 191, 10, // Skip to: 13810
/* 11059 */   MCD::OPC_Decode, 234, 14, 139, 1, // Opcode: XVRDPI
/* 11064 */   MCD::OPC_FilterValue, 1, 182, 10, // Skip to: 13810
/* 11068 */   MCD::OPC_CheckField, 16, 5, 0, 176, 10, // Skip to: 13810
/* 11074 */   MCD::OPC_Decode, 238, 14, 139, 1, // Opcode: XVRDPIZ
/* 11079 */   MCD::OPC_FilterValue, 2, 33, 0, // Skip to: 11116
/* 11083 */   MCD::OPC_ExtractField, 6, 1,  // Inst{6} ...
/* 11086 */   MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 11101
/* 11090 */   MCD::OPC_CheckField, 16, 5, 0, 154, 10, // Skip to: 13810
/* 11096 */   MCD::OPC_Decode, 246, 14, 139, 1, // Opcode: XVRSQRTEDP
/* 11101 */   MCD::OPC_FilterValue, 1, 145, 10, // Skip to: 13810
/* 11105 */   MCD::OPC_CheckField, 16, 5, 0, 139, 10, // Skip to: 13810
/* 11111 */   MCD::OPC_Decode, 239, 14, 139, 1, // Opcode: XVREDP
/* 11116 */   MCD::OPC_FilterValue, 3, 130, 10, // Skip to: 13810
/* 11120 */   MCD::OPC_CheckField, 16, 5, 0, 124, 10, // Skip to: 13810
/* 11126 */   MCD::OPC_CheckField, 6, 1, 0, 118, 10, // Skip to: 13810
/* 11132 */   MCD::OPC_Decode, 248, 14, 139, 1, // Opcode: XVSQRTDP
/* 11137 */   MCD::OPC_FilterValue, 7, 155, 0, // Skip to: 11296
/* 11141 */   MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 11144 */   MCD::OPC_FilterValue, 0, 77, 0, // Skip to: 11225
/* 11148 */   MCD::OPC_ExtractField, 2, 1,  // Inst{2} ...
/* 11151 */   MCD::OPC_FilterValue, 0, 33, 0, // Skip to: 11188
/* 11155 */   MCD::OPC_ExtractField, 6, 1,  // Inst{6} ...
/* 11158 */   MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 11173
/* 11162 */   MCD::OPC_CheckField, 16, 5, 0, 82, 10, // Skip to: 13810
/* 11168 */   MCD::OPC_Decode, 202, 14, 139, 1, // Opcode: XVCVUXWDP
/* 11173 */   MCD::OPC_FilterValue, 1, 73, 10, // Skip to: 13810
/* 11177 */   MCD::OPC_CheckField, 16, 5, 0, 67, 10, // Skip to: 13810
/* 11183 */   MCD::OPC_Decode, 198, 14, 139, 1, // Opcode: XVCVSXWDP
/* 11188 */   MCD::OPC_FilterValue, 1, 58, 10, // Skip to: 13810
/* 11192 */   MCD::OPC_ExtractField, 6, 1,  // Inst{6} ...
/* 11195 */   MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 11210
/* 11199 */   MCD::OPC_CheckField, 16, 5, 0, 45, 10, // Skip to: 13810
/* 11205 */   MCD::OPC_Decode, 237, 14, 139, 1, // Opcode: XVRDPIP
/* 11210 */   MCD::OPC_FilterValue, 1, 36, 10, // Skip to: 13810
/* 11214 */   MCD::OPC_CheckField, 16, 5, 0, 30, 10, // Skip to: 13810
/* 11220 */   MCD::OPC_Decode, 236, 14, 139, 1, // Opcode: XVRDPIM
/* 11225 */   MCD::OPC_FilterValue, 1, 21, 10, // Skip to: 13810
/* 11229 */   MCD::OPC_ExtractField, 6, 1,  // Inst{6} ...
/* 11232 */   MCD::OPC_FilterValue, 0, 39, 0, // Skip to: 11275
/* 11236 */   MCD::OPC_ExtractField, 2, 1,  // Inst{2} ...
/* 11239 */   MCD::OPC_FilterValue, 0, 17, 0, // Skip to: 11260
/* 11243 */   MCD::OPC_CheckField, 16, 7, 0, 1, 10, // Skip to: 13810
/* 11249 */   MCD::OPC_CheckField, 0, 1, 0, 251, 9, // Skip to: 13810
/* 11255 */   MCD::OPC_Decode, 254, 14, 140, 1, // Opcode: XVTSQRTDP
/* 11260 */   MCD::OPC_FilterValue, 1, 242, 9, // Skip to: 13810
/* 11264 */   MCD::OPC_CheckField, 16, 5, 0, 236, 9, // Skip to: 13810
/* 11270 */   MCD::OPC_Decode, 235, 14, 139, 1, // Opcode: XVRDPIC
/* 11275 */   MCD::OPC_FilterValue, 1, 227, 9, // Skip to: 13810
/* 11279 */   MCD::OPC_CheckField, 21, 2, 0, 221, 9, // Skip to: 13810
/* 11285 */   MCD::OPC_CheckField, 0, 1, 0, 215, 9, // Skip to: 13810
/* 11291 */   MCD::OPC_Decode, 252, 14, 141, 1, // Opcode: XVTDIVDP
/* 11296 */   MCD::OPC_FilterValue, 8, 45, 0, // Skip to: 11345
/* 11300 */   MCD::OPC_ExtractField, 2, 2,  // Inst{3-2} ...
/* 11303 */   MCD::OPC_FilterValue, 1, 17, 0, // Skip to: 11324
/* 11307 */   MCD::OPC_CheckField, 16, 5, 0, 193, 9, // Skip to: 13810
/* 11313 */   MCD::OPC_CheckField, 6, 1, 0, 187, 9, // Skip to: 13810
/* 11319 */   MCD::OPC_Decode, 192, 13, 137, 1, // Opcode: XSCVDPSP
/* 11324 */   MCD::OPC_FilterValue, 3, 178, 9, // Skip to: 13810
/* 11328 */   MCD::OPC_CheckField, 16, 5, 0, 172, 9, // Skip to: 13810
/* 11334 */   MCD::OPC_CheckField, 6, 1, 0, 166, 9, // Skip to: 13810
/* 11340 */   MCD::OPC_Decode, 193, 13, 142, 1, // Opcode: XSCVDPSPN
/* 11345 */   MCD::OPC_FilterValue, 9, 61, 0, // Skip to: 11410
/* 11349 */   MCD::OPC_ExtractField, 2, 2,  // Inst{3-2} ...
/* 11352 */   MCD::OPC_FilterValue, 0, 33, 0, // Skip to: 11389
/* 11356 */   MCD::OPC_ExtractField, 6, 1,  // Inst{6} ...
/* 11359 */   MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 11374
/* 11363 */   MCD::OPC_CheckField, 16, 5, 0, 137, 9, // Skip to: 13810
/* 11369 */   MCD::OPC_Decode, 216, 13, 143, 1, // Opcode: XSCVUXDSP
/* 11374 */   MCD::OPC_FilterValue, 1, 128, 9, // Skip to: 13810
/* 11378 */   MCD::OPC_CheckField, 16, 5, 0, 122, 9, // Skip to: 13810
/* 11384 */   MCD::OPC_Decode, 213, 13, 143, 1, // Opcode: XSCVSXDSP
/* 11389 */   MCD::OPC_FilterValue, 2, 113, 9, // Skip to: 13810
/* 11393 */   MCD::OPC_CheckField, 6, 1, 0, 107, 9, // Skip to: 13810
/* 11399 */   MCD::OPC_CheckField, 0, 1, 0, 101, 9, // Skip to: 13810
/* 11405 */   MCD::OPC_Decode, 157, 14, 144, 1, // Opcode: XSTSTDCSP
/* 11410 */   MCD::OPC_FilterValue, 10, 160, 0, // Skip to: 11574
/* 11414 */   MCD::OPC_ExtractField, 16, 5,  // Inst{20-16} ...
/* 11417 */   MCD::OPC_FilterValue, 0, 84, 0, // Skip to: 11505
/* 11421 */   MCD::OPC_ExtractField, 2, 2,  // Inst{3-2} ...
/* 11424 */   MCD::OPC_FilterValue, 0, 21, 0, // Skip to: 11449
/* 11428 */   MCD::OPC_ExtractField, 6, 1,  // Inst{6} ...
/* 11431 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 11440
/* 11435 */   MCD::OPC_Decode, 198, 13, 137, 1, // Opcode: XSCVDPUXDS
/* 11440 */   MCD::OPC_FilterValue, 1, 62, 9, // Skip to: 13810
/* 11444 */   MCD::OPC_Decode, 194, 13, 137, 1, // Opcode: XSCVDPSXDS
/* 11449 */   MCD::OPC_FilterValue, 1, 21, 0, // Skip to: 11474
/* 11453 */   MCD::OPC_ExtractField, 6, 1,  // Inst{6} ...
/* 11456 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 11465
/* 11460 */   MCD::OPC_Decode, 210, 13, 137, 1, // Opcode: XSCVSPDP
/* 11465 */   MCD::OPC_FilterValue, 1, 37, 9, // Skip to: 13810
/* 11469 */   MCD::OPC_Decode, 172, 13, 137, 1, // Opcode: XSABSDP
/* 11474 */   MCD::OPC_FilterValue, 3, 28, 9, // Skip to: 13810
/* 11478 */   MCD::OPC_ExtractField, 6, 1,  // Inst{6} ...
/* 11481 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 11490
/* 11485 */   MCD::OPC_Decode, 211, 13, 145, 1, // Opcode: XSCVSPDPN
/* 11490 */   MCD::OPC_FilterValue, 1, 12, 9, // Skip to: 13810
/* 11494 */   MCD::OPC_CheckField, 0, 1, 0, 6, 9, // Skip to: 13810
/* 11500 */   MCD::OPC_Decode, 158, 14, 146, 1, // Opcode: XSXEXPDP
/* 11505 */   MCD::OPC_FilterValue, 1, 23, 0, // Skip to: 11532
/* 11509 */   MCD::OPC_CheckField, 6, 1, 1, 247, 8, // Skip to: 13810
/* 11515 */   MCD::OPC_CheckField, 2, 2, 3, 241, 8, // Skip to: 13810
/* 11521 */   MCD::OPC_CheckField, 0, 1, 0, 235, 8, // Skip to: 13810
/* 11527 */   MCD::OPC_Decode, 160, 14, 146, 1, // Opcode: XSXSIGDP
/* 11532 */   MCD::OPC_FilterValue, 16, 17, 0, // Skip to: 11553
/* 11536 */   MCD::OPC_CheckField, 6, 1, 1, 220, 8, // Skip to: 13810
/* 11542 */   MCD::OPC_CheckField, 2, 2, 3, 214, 8, // Skip to: 13810
/* 11548 */   MCD::OPC_Decode, 202, 13, 137, 1, // Opcode: XSCVHPDP
/* 11553 */   MCD::OPC_FilterValue, 17, 205, 8, // Skip to: 13810
/* 11557 */   MCD::OPC_CheckField, 6, 1, 1, 199, 8, // Skip to: 13810
/* 11563 */   MCD::OPC_CheckField, 2, 2, 3, 193, 8, // Skip to: 13810
/* 11569 */   MCD::OPC_Decode, 190, 13, 137, 1, // Opcode: XSCVDPHP
/* 11574 */   MCD::OPC_FilterValue, 11, 98, 0, // Skip to: 11676
/* 11578 */   MCD::OPC_ExtractField, 2, 2,  // Inst{3-2} ...
/* 11581 */   MCD::OPC_FilterValue, 0, 33, 0, // Skip to: 11618
/* 11585 */   MCD::OPC_ExtractField, 6, 1,  // Inst{6} ...
/* 11588 */   MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 11603
/* 11592 */   MCD::OPC_CheckField, 16, 5, 0, 164, 8, // Skip to: 13810
/* 11598 */   MCD::OPC_Decode, 215, 13, 137, 1, // Opcode: XSCVUXDDP
/* 11603 */   MCD::OPC_FilterValue, 1, 155, 8, // Skip to: 13810
/* 11607 */   MCD::OPC_CheckField, 16, 5, 0, 149, 8, // Skip to: 13810
/* 11613 */   MCD::OPC_Decode, 212, 13, 137, 1, // Opcode: XSCVSXDDP
/* 11618 */   MCD::OPC_FilterValue, 1, 33, 0, // Skip to: 11655
/* 11622 */   MCD::OPC_ExtractField, 6, 1,  // Inst{6} ...
/* 11625 */   MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 11640
/* 11629 */   MCD::OPC_CheckField, 16, 5, 0, 127, 8, // Skip to: 13810
/* 11635 */   MCD::OPC_Decode, 245, 13, 137, 1, // Opcode: XSNABSDP
/* 11640 */   MCD::OPC_FilterValue, 1, 118, 8, // Skip to: 13810
/* 11644 */   MCD::OPC_CheckField, 16, 5, 0, 112, 8, // Skip to: 13810
/* 11650 */   MCD::OPC_Decode, 247, 13, 137, 1, // Opcode: XSNEGDP
/* 11655 */   MCD::OPC_FilterValue, 2, 103, 8, // Skip to: 13810
/* 11659 */   MCD::OPC_CheckField, 6, 1, 0, 97, 8, // Skip to: 13810
/* 11665 */   MCD::OPC_CheckField, 0, 1, 0, 91, 8, // Skip to: 13810
/* 11671 */   MCD::OPC_Decode, 155, 14, 144, 1, // Opcode: XSTSTDCDP
/* 11676 */   MCD::OPC_FilterValue, 12, 77, 0, // Skip to: 11757
/* 11680 */   MCD::OPC_ExtractField, 2, 2,  // Inst{3-2} ...
/* 11683 */   MCD::OPC_FilterValue, 0, 33, 0, // Skip to: 11720
/* 11687 */   MCD::OPC_ExtractField, 6, 1,  // Inst{6} ...
/* 11690 */   MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 11705
/* 11694 */   MCD::OPC_CheckField, 16, 5, 0, 62, 8, // Skip to: 13810
/* 11700 */   MCD::OPC_Decode, 194, 14, 139, 1, // Opcode: XVCVSPUXDS
/* 11705 */   MCD::OPC_FilterValue, 1, 53, 8, // Skip to: 13810
/* 11709 */   MCD::OPC_CheckField, 16, 5, 0, 47, 8, // Skip to: 13810
/* 11715 */   MCD::OPC_Decode, 192, 14, 139, 1, // Opcode: XVCVSPSXDS
/* 11720 */   MCD::OPC_FilterValue, 1, 38, 8, // Skip to: 13810
/* 11724 */   MCD::OPC_ExtractField, 6, 1,  // Inst{6} ...
/* 11727 */   MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 11742
/* 11731 */   MCD::OPC_CheckField, 16, 5, 0, 25, 8, // Skip to: 13810
/* 11737 */   MCD::OPC_Decode, 184, 14, 139, 1, // Opcode: XVCVDPSP
/* 11742 */   MCD::OPC_FilterValue, 1, 16, 8, // Skip to: 13810
/* 11746 */   MCD::OPC_CheckField, 16, 5, 0, 10, 8, // Skip to: 13810
/* 11752 */   MCD::OPC_Decode, 163, 14, 139, 1, // Opcode: XVABSSP
/* 11757 */   MCD::OPC_FilterValue, 13, 93, 0, // Skip to: 11854
/* 11761 */   MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 11764 */   MCD::OPC_FilterValue, 0, 77, 0, // Skip to: 11845
/* 11768 */   MCD::OPC_ExtractField, 2, 1,  // Inst{2} ...
/* 11771 */   MCD::OPC_FilterValue, 0, 33, 0, // Skip to: 11808
/* 11775 */   MCD::OPC_ExtractField, 6, 1,  // Inst{6} ...
/* 11778 */   MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 11793
/* 11782 */   MCD::OPC_CheckField, 16, 5, 0, 230, 7, // Skip to: 13810
/* 11788 */   MCD::OPC_Decode, 201, 14, 139, 1, // Opcode: XVCVUXDSP
/* 11793 */   MCD::OPC_FilterValue, 1, 221, 7, // Skip to: 13810
/* 11797 */   MCD::OPC_CheckField, 16, 5, 0, 215, 7, // Skip to: 13810
/* 11803 */   MCD::OPC_Decode, 197, 14, 139, 1, // Opcode: XVCVSXDSP
/* 11808 */   MCD::OPC_FilterValue, 1, 206, 7, // Skip to: 13810
/* 11812 */   MCD::OPC_ExtractField, 6, 1,  // Inst{6} ...
/* 11815 */   MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 11830
/* 11819 */   MCD::OPC_CheckField, 16, 5, 0, 193, 7, // Skip to: 13810
/* 11825 */   MCD::OPC_Decode, 223, 14, 139, 1, // Opcode: XVNABSSP
/* 11830 */   MCD::OPC_FilterValue, 1, 184, 7, // Skip to: 13810
/* 11834 */   MCD::OPC_CheckField, 16, 5, 0, 178, 7, // Skip to: 13810
/* 11840 */   MCD::OPC_Decode, 225, 14, 139, 1, // Opcode: XVNEGSP
/* 11845 */   MCD::OPC_FilterValue, 1, 169, 7, // Skip to: 13810
/* 11849 */   MCD::OPC_Decode, 129, 15, 147, 1, // Opcode: XVTSTDCSP
/* 11854 */   MCD::OPC_FilterValue, 14, 195, 0, // Skip to: 12053
/* 11858 */   MCD::OPC_ExtractField, 2, 2,  // Inst{3-2} ...
/* 11861 */   MCD::OPC_FilterValue, 0, 33, 0, // Skip to: 11898
/* 11865 */   MCD::OPC_ExtractField, 6, 1,  // Inst{6} ...
/* 11868 */   MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 11883
/* 11872 */   MCD::OPC_CheckField, 16, 5, 0, 140, 7, // Skip to: 13810
/* 11878 */   MCD::OPC_Decode, 187, 14, 139, 1, // Opcode: XVCVDPUXDS
/* 11883 */   MCD::OPC_FilterValue, 1, 131, 7, // Skip to: 13810
/* 11887 */   MCD::OPC_CheckField, 16, 5, 0, 125, 7, // Skip to: 13810
/* 11893 */   MCD::OPC_Decode, 185, 14, 139, 1, // Opcode: XVCVDPSXDS
/* 11898 */   MCD::OPC_FilterValue, 1, 33, 0, // Skip to: 11935
/* 11902 */   MCD::OPC_ExtractField, 6, 1,  // Inst{6} ...
/* 11905 */   MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 11920
/* 11909 */   MCD::OPC_CheckField, 16, 5, 0, 103, 7, // Skip to: 13810
/* 11915 */   MCD::OPC_Decode, 190, 14, 139, 1, // Opcode: XVCVSPDP
/* 11920 */   MCD::OPC_FilterValue, 1, 94, 7, // Skip to: 13810
/* 11924 */   MCD::OPC_CheckField, 16, 5, 0, 88, 7, // Skip to: 13810
/* 11930 */   MCD::OPC_Decode, 162, 14, 139, 1, // Opcode: XVABSDP
/* 11935 */   MCD::OPC_FilterValue, 3, 79, 7, // Skip to: 13810
/* 11939 */   MCD::OPC_ExtractField, 6, 1,  // Inst{6} ...
/* 11942 */   MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 11956
/* 11946 */   MCD::OPC_CheckField, 1, 1, 0, 66, 7, // Skip to: 13810
/* 11952 */   MCD::OPC_Decode, 221, 13, 86, // Opcode: XSIEXPDP
/* 11956 */   MCD::OPC_FilterValue, 1, 58, 7, // Skip to: 13810
/* 11960 */   MCD::OPC_ExtractField, 16, 5,  // Inst{20-16} ...
/* 11963 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 11972
/* 11967 */   MCD::OPC_Decode, 130, 15, 139, 1, // Opcode: XVXEXPDP
/* 11972 */   MCD::OPC_FilterValue, 1, 5, 0, // Skip to: 11981
/* 11976 */   MCD::OPC_Decode, 132, 15, 139, 1, // Opcode: XVXSIGDP
/* 11981 */   MCD::OPC_FilterValue, 7, 5, 0, // Skip to: 11990
/* 11985 */   MCD::OPC_Decode, 135, 15, 139, 1, // Opcode: XXBRH
/* 11990 */   MCD::OPC_FilterValue, 8, 5, 0, // Skip to: 11999
/* 11994 */   MCD::OPC_Decode, 131, 15, 139, 1, // Opcode: XVXEXPSP
/* 11999 */   MCD::OPC_FilterValue, 9, 5, 0, // Skip to: 12008
/* 12003 */   MCD::OPC_Decode, 133, 15, 139, 1, // Opcode: XVXSIGSP
/* 12008 */   MCD::OPC_FilterValue, 15, 5, 0, // Skip to: 12017
/* 12012 */   MCD::OPC_Decode, 137, 15, 139, 1, // Opcode: XXBRW
/* 12017 */   MCD::OPC_FilterValue, 23, 5, 0, // Skip to: 12026
/* 12021 */   MCD::OPC_Decode, 134, 15, 139, 1, // Opcode: XXBRD
/* 12026 */   MCD::OPC_FilterValue, 24, 5, 0, // Skip to: 12035
/* 12030 */   MCD::OPC_Decode, 189, 14, 139, 1, // Opcode: XVCVHPSP
/* 12035 */   MCD::OPC_FilterValue, 25, 5, 0, // Skip to: 12044
/* 12039 */   MCD::OPC_Decode, 191, 14, 139, 1, // Opcode: XVCVSPHP
/* 12044 */   MCD::OPC_FilterValue, 31, 226, 6, // Skip to: 13810
/* 12048 */   MCD::OPC_Decode, 136, 15, 139, 1, // Opcode: XXBRQ
/* 12053 */   MCD::OPC_FilterValue, 15, 217, 6, // Skip to: 13810
/* 12057 */   MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 12060 */   MCD::OPC_FilterValue, 0, 77, 0, // Skip to: 12141
/* 12064 */   MCD::OPC_ExtractField, 2, 1,  // Inst{2} ...
/* 12067 */   MCD::OPC_FilterValue, 0, 33, 0, // Skip to: 12104
/* 12071 */   MCD::OPC_ExtractField, 6, 1,  // Inst{6} ...
/* 12074 */   MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 12089
/* 12078 */   MCD::OPC_CheckField, 16, 5, 0, 190, 6, // Skip to: 13810
/* 12084 */   MCD::OPC_Decode, 200, 14, 139, 1, // Opcode: XVCVUXDDP
/* 12089 */   MCD::OPC_FilterValue, 1, 181, 6, // Skip to: 13810
/* 12093 */   MCD::OPC_CheckField, 16, 5, 0, 175, 6, // Skip to: 13810
/* 12099 */   MCD::OPC_Decode, 196, 14, 139, 1, // Opcode: XVCVSXDDP
/* 12104 */   MCD::OPC_FilterValue, 1, 166, 6, // Skip to: 13810
/* 12108 */   MCD::OPC_ExtractField, 6, 1,  // Inst{6} ...
/* 12111 */   MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 12126
/* 12115 */   MCD::OPC_CheckField, 16, 5, 0, 153, 6, // Skip to: 13810
/* 12121 */   MCD::OPC_Decode, 222, 14, 139, 1, // Opcode: XVNABSDP
/* 12126 */   MCD::OPC_FilterValue, 1, 144, 6, // Skip to: 13810
/* 12130 */   MCD::OPC_CheckField, 16, 5, 0, 138, 6, // Skip to: 13810
/* 12136 */   MCD::OPC_Decode, 224, 14, 139, 1, // Opcode: XVNEGDP
/* 12141 */   MCD::OPC_FilterValue, 1, 129, 6, // Skip to: 13810
/* 12145 */   MCD::OPC_Decode, 128, 15, 147, 1, // Opcode: XVTSTDCDP
/* 12150 */   MCD::OPC_FilterValue, 3, 120, 6, // Skip to: 13810
/* 12154 */   MCD::OPC_Decode, 158, 15, 148, 1, // Opcode: XXSEL
/* 12159 */   MCD::OPC_FilterValue, 61, 44, 0, // Skip to: 12207
/* 12163 */   MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 12166 */   MCD::OPC_FilterValue, 1, 21, 0, // Skip to: 12191
/* 12170 */   MCD::OPC_ExtractField, 2, 1,  // Inst{2} ...
/* 12173 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 12182
/* 12177 */   MCD::OPC_Decode, 221, 6, 149, 1, // Opcode: LXV
/* 12182 */   MCD::OPC_FilterValue, 1, 88, 6, // Skip to: 13810
/* 12186 */   MCD::OPC_Decode, 174, 10, 149, 1, // Opcode: STXV
/* 12191 */   MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 12199
/* 12195 */   MCD::OPC_Decode, 165, 10, 116, // Opcode: STXSD
/* 12199 */   MCD::OPC_FilterValue, 3, 71, 6, // Skip to: 13810
/* 12203 */   MCD::OPC_Decode, 172, 10, 116, // Opcode: STXSSP
/* 12207 */   MCD::OPC_FilterValue, 62, 19, 0, // Skip to: 12230
/* 12211 */   MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 12214 */   MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 12222
/* 12218 */   MCD::OPC_Decode, 245, 9, 117, // Opcode: STD
/* 12222 */   MCD::OPC_FilterValue, 1, 48, 6, // Skip to: 13810
/* 12226 */   MCD::OPC_Decode, 250, 9, 117, // Opcode: STDU
/* 12230 */   MCD::OPC_FilterValue, 63, 40, 6, // Skip to: 13810
/* 12234 */   MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 12237 */   MCD::OPC_FilterValue, 0, 68, 0, // Skip to: 12309
/* 12241 */   MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 12244 */   MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 12259
/* 12248 */   MCD::OPC_CheckField, 21, 2, 0, 20, 6, // Skip to: 13810
/* 12254 */   MCD::OPC_Decode, 132, 5, 150, 1, // Opcode: FCMPUS
/* 12259 */   MCD::OPC_FilterValue, 2, 16, 0, // Skip to: 12279
/* 12263 */   MCD::OPC_CheckField, 21, 2, 0, 5, 6, // Skip to: 13810
/* 12269 */   MCD::OPC_CheckField, 11, 7, 0, 255, 5, // Skip to: 13810
/* 12275 */   MCD::OPC_Decode, 233, 6, 31, // Opcode: MCRFS
/* 12279 */   MCD::OPC_FilterValue, 4, 11, 0, // Skip to: 12294
/* 12283 */   MCD::OPC_CheckField, 21, 2, 0, 241, 5, // Skip to: 13810
/* 12289 */   MCD::OPC_Decode, 225, 5, 151, 1, // Opcode: FTDIV
/* 12294 */   MCD::OPC_FilterValue, 5, 232, 5, // Skip to: 13810
/* 12298 */   MCD::OPC_CheckField, 16, 7, 0, 226, 5, // Skip to: 13810
/* 12304 */   MCD::OPC_Decode, 226, 5, 152, 1, // Opcode: FTSQRT
/* 12309 */   MCD::OPC_FilterValue, 8, 11, 1, // Skip to: 12580
/* 12313 */   MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 12316 */   MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 12324
/* 12320 */   MCD::OPC_Decode, 175, 13, 3, // Opcode: XSADDQP
/* 12324 */   MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 12332
/* 12328 */   MCD::OPC_Decode, 242, 13, 3, // Opcode: XSMULQP
/* 12332 */   MCD::OPC_FilterValue, 3, 4, 0, // Skip to: 12340
/* 12336 */   MCD::OPC_Decode, 189, 13, 3, // Opcode: XSCPSGNQP
/* 12340 */   MCD::OPC_FilterValue, 4, 11, 0, // Skip to: 12355
/* 12344 */   MCD::OPC_CheckField, 21, 2, 0, 180, 5, // Skip to: 13810
/* 12350 */   MCD::OPC_Decode, 185, 13, 153, 1, // Opcode: XSCMPOQP
/* 12355 */   MCD::OPC_FilterValue, 5, 11, 0, // Skip to: 12370
/* 12359 */   MCD::OPC_CheckField, 21, 2, 0, 165, 5, // Skip to: 13810
/* 12365 */   MCD::OPC_Decode, 180, 13, 153, 1, // Opcode: XSCMPEXPQP
/* 12370 */   MCD::OPC_FilterValue, 12, 4, 0, // Skip to: 12378
/* 12374 */   MCD::OPC_Decode, 227, 13, 3, // Opcode: XSMADDQP
/* 12378 */   MCD::OPC_FilterValue, 13, 4, 0, // Skip to: 12386
/* 12382 */   MCD::OPC_Decode, 239, 13, 3, // Opcode: XSMSUBQP
/* 12386 */   MCD::OPC_FilterValue, 14, 4, 0, // Skip to: 12394
/* 12390 */   MCD::OPC_Decode, 253, 13, 3, // Opcode: XSNMADDQP
/* 12394 */   MCD::OPC_FilterValue, 15, 4, 0, // Skip to: 12402
/* 12398 */   MCD::OPC_Decode, 131, 14, 3, // Opcode: XSNMSUBQP
/* 12402 */   MCD::OPC_FilterValue, 16, 4, 0, // Skip to: 12410
/* 12406 */   MCD::OPC_Decode, 150, 14, 3, // Opcode: XSSUBQP
/* 12410 */   MCD::OPC_FilterValue, 17, 4, 0, // Skip to: 12418
/* 12414 */   MCD::OPC_Decode, 218, 13, 3, // Opcode: XSDIVQP
/* 12418 */   MCD::OPC_FilterValue, 20, 11, 0, // Skip to: 12433
/* 12422 */   MCD::OPC_CheckField, 21, 2, 0, 102, 5, // Skip to: 13810
/* 12428 */   MCD::OPC_Decode, 187, 13, 153, 1, // Opcode: XSCMPUQP
/* 12433 */   MCD::OPC_FilterValue, 22, 5, 0, // Skip to: 12442
/* 12437 */   MCD::OPC_Decode, 156, 14, 154, 1, // Opcode: XSTSTDCQP
/* 12442 */   MCD::OPC_FilterValue, 25, 51, 0, // Skip to: 12497
/* 12446 */   MCD::OPC_ExtractField, 16, 5,  // Inst{20-16} ...
/* 12449 */   MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 12457
/* 12453 */   MCD::OPC_Decode, 173, 13, 6, // Opcode: XSABSQP
/* 12457 */   MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 12465
/* 12461 */   MCD::OPC_Decode, 159, 14, 6, // Opcode: XSXEXPQP
/* 12465 */   MCD::OPC_FilterValue, 8, 4, 0, // Skip to: 12473
/* 12469 */   MCD::OPC_Decode, 246, 13, 6, // Opcode: XSNABSQP
/* 12473 */   MCD::OPC_FilterValue, 16, 4, 0, // Skip to: 12481
/* 12477 */   MCD::OPC_Decode, 248, 13, 6, // Opcode: XSNEGQP
/* 12481 */   MCD::OPC_FilterValue, 18, 4, 0, // Skip to: 12489
/* 12485 */   MCD::OPC_Decode, 161, 14, 6, // Opcode: XSXSIGQP
/* 12489 */   MCD::OPC_FilterValue, 27, 37, 5, // Skip to: 13810
/* 12493 */   MCD::OPC_Decode, 146, 14, 6, // Opcode: XSSQRTQP
/* 12497 */   MCD::OPC_FilterValue, 26, 70, 0, // Skip to: 12571
/* 12501 */   MCD::OPC_ExtractField, 16, 5,  // Inst{20-16} ...
/* 12504 */   MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 12512
/* 12508 */   MCD::OPC_Decode, 208, 13, 6, // Opcode: XSCVQPUWZ
/* 12512 */   MCD::OPC_FilterValue, 2, 5, 0, // Skip to: 12521
/* 12516 */   MCD::OPC_Decode, 214, 13, 155, 1, // Opcode: XSCVUDQP
/* 12521 */   MCD::OPC_FilterValue, 9, 4, 0, // Skip to: 12529
/* 12525 */   MCD::OPC_Decode, 206, 13, 6, // Opcode: XSCVQPSWZ
/* 12529 */   MCD::OPC_FilterValue, 10, 5, 0, // Skip to: 12538
/* 12533 */   MCD::OPC_Decode, 209, 13, 155, 1, // Opcode: XSCVSDQP
/* 12538 */   MCD::OPC_FilterValue, 17, 4, 0, // Skip to: 12546
/* 12542 */   MCD::OPC_Decode, 207, 13, 6, // Opcode: XSCVQPUDZ
/* 12546 */   MCD::OPC_FilterValue, 20, 4, 0, // Skip to: 12554
/* 12550 */   MCD::OPC_Decode, 203, 13, 6, // Opcode: XSCVQPDP
/* 12554 */   MCD::OPC_FilterValue, 22, 5, 0, // Skip to: 12563
/* 12558 */   MCD::OPC_Decode, 191, 13, 155, 1, // Opcode: XSCVDPQP
/* 12563 */   MCD::OPC_FilterValue, 25, 219, 4, // Skip to: 13810
/* 12567 */   MCD::OPC_Decode, 205, 13, 6, // Opcode: XSCVQPSDZ
/* 12571 */   MCD::OPC_FilterValue, 27, 211, 4, // Skip to: 13810
/* 12575 */   MCD::OPC_Decode, 222, 13, 156, 1, // Opcode: XSIEXPQP
/* 12580 */   MCD::OPC_FilterValue, 9, 95, 0, // Skip to: 12679
/* 12584 */   MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 12587 */   MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 12595
/* 12591 */   MCD::OPC_Decode, 176, 13, 3, // Opcode: XSADDQPO
/* 12595 */   MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 12603
/* 12599 */   MCD::OPC_Decode, 243, 13, 3, // Opcode: XSMULQPO
/* 12603 */   MCD::OPC_FilterValue, 12, 4, 0, // Skip to: 12611
/* 12607 */   MCD::OPC_Decode, 228, 13, 3, // Opcode: XSMADDQPO
/* 12611 */   MCD::OPC_FilterValue, 13, 4, 0, // Skip to: 12619
/* 12615 */   MCD::OPC_Decode, 240, 13, 3, // Opcode: XSMSUBQPO
/* 12619 */   MCD::OPC_FilterValue, 14, 4, 0, // Skip to: 12627
/* 12623 */   MCD::OPC_Decode, 254, 13, 3, // Opcode: XSNMADDQPO
/* 12627 */   MCD::OPC_FilterValue, 15, 4, 0, // Skip to: 12635
/* 12631 */   MCD::OPC_Decode, 132, 14, 3, // Opcode: XSNMSUBQPO
/* 12635 */   MCD::OPC_FilterValue, 16, 4, 0, // Skip to: 12643
/* 12639 */   MCD::OPC_Decode, 151, 14, 3, // Opcode: XSSUBQPO
/* 12643 */   MCD::OPC_FilterValue, 17, 4, 0, // Skip to: 12651
/* 12647 */   MCD::OPC_Decode, 219, 13, 3, // Opcode: XSDIVQPO
/* 12651 */   MCD::OPC_FilterValue, 25, 10, 0, // Skip to: 12665
/* 12655 */   MCD::OPC_CheckField, 16, 5, 27, 125, 4, // Skip to: 13810
/* 12661 */   MCD::OPC_Decode, 147, 14, 6, // Opcode: XSSQRTQPO
/* 12665 */   MCD::OPC_FilterValue, 26, 117, 4, // Skip to: 13810
/* 12669 */   MCD::OPC_CheckField, 16, 5, 20, 111, 4, // Skip to: 13810
/* 12675 */   MCD::OPC_Decode, 204, 13, 6, // Opcode: XSCVQPDPO
/* 12679 */   MCD::OPC_FilterValue, 10, 21, 0, // Skip to: 12704
/* 12683 */   MCD::OPC_ExtractField, 6, 3,  // Inst{8-6} ...
/* 12686 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 12695
/* 12690 */   MCD::OPC_Decode, 140, 14, 157, 1, // Opcode: XSRQPI
/* 12695 */   MCD::OPC_FilterValue, 1, 87, 4, // Skip to: 13810
/* 12699 */   MCD::OPC_Decode, 142, 14, 157, 1, // Opcode: XSRQPXP
/* 12704 */   MCD::OPC_FilterValue, 11, 11, 0, // Skip to: 12719
/* 12708 */   MCD::OPC_CheckField, 6, 3, 0, 72, 4, // Skip to: 13810
/* 12714 */   MCD::OPC_Decode, 141, 14, 157, 1, // Opcode: XSRQPIX
/* 12719 */   MCD::OPC_FilterValue, 12, 46, 0, // Skip to: 12769
/* 12723 */   MCD::OPC_ExtractField, 6, 6,  // Inst{11-6} ...
/* 12726 */   MCD::OPC_FilterValue, 1, 10, 0, // Skip to: 12740
/* 12730 */   MCD::OPC_CheckField, 12, 9, 0, 50, 4, // Skip to: 13810
/* 12736 */   MCD::OPC_Decode, 144, 7, 105, // Opcode: MTFSB1
/* 12740 */   MCD::OPC_FilterValue, 2, 10, 0, // Skip to: 12754
/* 12744 */   MCD::OPC_CheckField, 12, 9, 0, 36, 4, // Skip to: 13810
/* 12750 */   MCD::OPC_Decode, 143, 7, 105, // Opcode: MTFSB0
/* 12754 */   MCD::OPC_FilterValue, 4, 28, 4, // Skip to: 13810
/* 12758 */   MCD::OPC_CheckField, 17, 6, 0, 22, 4, // Skip to: 13810
/* 12764 */   MCD::OPC_Decode, 146, 7, 158, 1, // Opcode: MTFSFI
/* 12769 */   MCD::OPC_FilterValue, 13, 17, 0, // Skip to: 12790
/* 12773 */   MCD::OPC_CheckField, 17, 6, 0, 7, 4, // Skip to: 13810
/* 12779 */   MCD::OPC_CheckField, 6, 6, 4, 1, 4, // Skip to: 13810
/* 12785 */   MCD::OPC_Decode, 147, 7, 158, 1, // Opcode: MTFSFIo
/* 12790 */   MCD::OPC_FilterValue, 14, 27, 0, // Skip to: 12821
/* 12794 */   MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 12797 */   MCD::OPC_FilterValue, 18, 11, 0, // Skip to: 12812
/* 12801 */   MCD::OPC_CheckField, 11, 10, 0, 235, 3, // Skip to: 13810
/* 12807 */   MCD::OPC_Decode, 241, 6, 159, 1, // Opcode: MFFS
/* 12812 */   MCD::OPC_FilterValue, 22, 226, 3, // Skip to: 13810
/* 12816 */   MCD::OPC_Decode, 145, 7, 160, 1, // Opcode: MTFSF
/* 12821 */   MCD::OPC_FilterValue, 15, 27, 0, // Skip to: 12852
/* 12825 */   MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 12828 */   MCD::OPC_FilterValue, 18, 11, 0, // Skip to: 12843
/* 12832 */   MCD::OPC_CheckField, 11, 10, 0, 204, 3, // Skip to: 13810
/* 12838 */   MCD::OPC_Decode, 242, 6, 159, 1, // Opcode: MFFSo
/* 12843 */   MCD::OPC_FilterValue, 22, 195, 3, // Skip to: 13810
/* 12847 */   MCD::OPC_Decode, 149, 7, 160, 1, // Opcode: MTFSFo
/* 12852 */   MCD::OPC_FilterValue, 16, 123, 0, // Skip to: 12979
/* 12856 */   MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 12859 */   MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 12867
/* 12863 */   MCD::OPC_Decode, 135, 5, 119, // Opcode: FCPSGNS
/* 12867 */   MCD::OPC_FilterValue, 1, 10, 0, // Skip to: 12881
/* 12871 */   MCD::OPC_CheckField, 16, 5, 0, 165, 3, // Skip to: 13810
/* 12877 */   MCD::OPC_Decode, 177, 5, 120, // Opcode: FNEGS
/* 12881 */   MCD::OPC_FilterValue, 2, 10, 0, // Skip to: 12895
/* 12885 */   MCD::OPC_CheckField, 16, 5, 0, 151, 3, // Skip to: 13810
/* 12891 */   MCD::OPC_Decode, 161, 5, 120, // Opcode: FMR
/* 12895 */   MCD::OPC_FilterValue, 4, 10, 0, // Skip to: 12909
/* 12899 */   MCD::OPC_CheckField, 16, 5, 0, 137, 3, // Skip to: 13810
/* 12905 */   MCD::OPC_Decode, 173, 5, 120, // Opcode: FNABSS
/* 12909 */   MCD::OPC_FilterValue, 8, 10, 0, // Skip to: 12923
/* 12913 */   MCD::OPC_CheckField, 16, 5, 0, 123, 3, // Skip to: 13810
/* 12919 */   MCD::OPC_Decode, 244, 4, 120, // Opcode: FABSS
/* 12923 */   MCD::OPC_FilterValue, 12, 10, 0, // Skip to: 12937
/* 12927 */   MCD::OPC_CheckField, 16, 5, 0, 109, 3, // Skip to: 13810
/* 12933 */   MCD::OPC_Decode, 197, 5, 120, // Opcode: FRINS
/* 12937 */   MCD::OPC_FilterValue, 13, 10, 0, // Skip to: 12951
/* 12941 */   MCD::OPC_CheckField, 16, 5, 0, 95, 3, // Skip to: 13810
/* 12947 */   MCD::OPC_Decode, 205, 5, 120, // Opcode: FRIZS
/* 12951 */   MCD::OPC_FilterValue, 14, 10, 0, // Skip to: 12965
/* 12955 */   MCD::OPC_CheckField, 16, 5, 0, 81, 3, // Skip to: 13810
/* 12961 */   MCD::OPC_Decode, 201, 5, 120, // Opcode: FRIPS
/* 12965 */   MCD::OPC_FilterValue, 15, 73, 3, // Skip to: 13810
/* 12969 */   MCD::OPC_CheckField, 16, 5, 0, 67, 3, // Skip to: 13810
/* 12975 */   MCD::OPC_Decode, 193, 5, 120, // Opcode: FRIMS
/* 12979 */   MCD::OPC_FilterValue, 17, 123, 0, // Skip to: 13106
/* 12983 */   MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 12986 */   MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 12994
/* 12990 */   MCD::OPC_Decode, 136, 5, 119, // Opcode: FCPSGNSo
/* 12994 */   MCD::OPC_FilterValue, 1, 10, 0, // Skip to: 13008
/* 12998 */   MCD::OPC_CheckField, 16, 5, 0, 38, 3, // Skip to: 13810
/* 13004 */   MCD::OPC_Decode, 178, 5, 120, // Opcode: FNEGSo
/* 13008 */   MCD::OPC_FilterValue, 2, 10, 0, // Skip to: 13022
/* 13012 */   MCD::OPC_CheckField, 16, 5, 0, 24, 3, // Skip to: 13810
/* 13018 */   MCD::OPC_Decode, 162, 5, 120, // Opcode: FMRo
/* 13022 */   MCD::OPC_FilterValue, 4, 10, 0, // Skip to: 13036
/* 13026 */   MCD::OPC_CheckField, 16, 5, 0, 10, 3, // Skip to: 13810
/* 13032 */   MCD::OPC_Decode, 174, 5, 120, // Opcode: FNABSSo
/* 13036 */   MCD::OPC_FilterValue, 8, 10, 0, // Skip to: 13050
/* 13040 */   MCD::OPC_CheckField, 16, 5, 0, 252, 2, // Skip to: 13810
/* 13046 */   MCD::OPC_Decode, 245, 4, 120, // Opcode: FABSSo
/* 13050 */   MCD::OPC_FilterValue, 12, 10, 0, // Skip to: 13064
/* 13054 */   MCD::OPC_CheckField, 16, 5, 0, 238, 2, // Skip to: 13810
/* 13060 */   MCD::OPC_Decode, 198, 5, 120, // Opcode: FRINSo
/* 13064 */   MCD::OPC_FilterValue, 13, 10, 0, // Skip to: 13078
/* 13068 */   MCD::OPC_CheckField, 16, 5, 0, 224, 2, // Skip to: 13810
/* 13074 */   MCD::OPC_Decode, 206, 5, 120, // Opcode: FRIZSo
/* 13078 */   MCD::OPC_FilterValue, 14, 10, 0, // Skip to: 13092
/* 13082 */   MCD::OPC_CheckField, 16, 5, 0, 210, 2, // Skip to: 13810
/* 13088 */   MCD::OPC_Decode, 202, 5, 120, // Opcode: FRIPSo
/* 13092 */   MCD::OPC_FilterValue, 15, 202, 2, // Skip to: 13810
/* 13096 */   MCD::OPC_CheckField, 16, 5, 0, 196, 2, // Skip to: 13810
/* 13102 */   MCD::OPC_Decode, 194, 5, 120, // Opcode: FRIMSo
/* 13106 */   MCD::OPC_FilterValue, 24, 16, 0, // Skip to: 13126
/* 13110 */   MCD::OPC_CheckField, 16, 5, 0, 182, 2, // Skip to: 13810
/* 13116 */   MCD::OPC_CheckField, 6, 5, 0, 176, 2, // Skip to: 13810
/* 13122 */   MCD::OPC_Decode, 207, 5, 118, // Opcode: FRSP
/* 13126 */   MCD::OPC_FilterValue, 25, 16, 0, // Skip to: 13146
/* 13130 */   MCD::OPC_CheckField, 16, 5, 0, 162, 2, // Skip to: 13810
/* 13136 */   MCD::OPC_CheckField, 6, 5, 0, 156, 2, // Skip to: 13810
/* 13142 */   MCD::OPC_Decode, 208, 5, 118, // Opcode: FRSPo
/* 13146 */   MCD::OPC_FilterValue, 28, 93, 0, // Skip to: 13243
/* 13150 */   MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 13153 */   MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 13168
/* 13157 */   MCD::OPC_CheckField, 16, 5, 0, 135, 2, // Skip to: 13810
/* 13163 */   MCD::OPC_Decode, 145, 5, 161, 1, // Opcode: FCTIW
/* 13168 */   MCD::OPC_FilterValue, 4, 11, 0, // Skip to: 13183
/* 13172 */   MCD::OPC_CheckField, 16, 5, 0, 120, 2, // Skip to: 13810
/* 13178 */   MCD::OPC_Decode, 146, 5, 161, 1, // Opcode: FCTIWU
/* 13183 */   MCD::OPC_FilterValue, 25, 11, 0, // Skip to: 13198
/* 13187 */   MCD::OPC_CheckField, 16, 5, 0, 105, 2, // Skip to: 13810
/* 13193 */   MCD::OPC_Decode, 137, 5, 161, 1, // Opcode: FCTID
/* 13198 */   MCD::OPC_FilterValue, 26, 11, 0, // Skip to: 13213
/* 13202 */   MCD::OPC_CheckField, 16, 5, 0, 90, 2, // Skip to: 13810
/* 13208 */   MCD::OPC_Decode, 251, 4, 161, 1, // Opcode: FCFID
/* 13213 */   MCD::OPC_FilterValue, 29, 11, 0, // Skip to: 13228
/* 13217 */   MCD::OPC_CheckField, 16, 5, 0, 75, 2, // Skip to: 13810
/* 13223 */   MCD::OPC_Decode, 138, 5, 161, 1, // Opcode: FCTIDU
/* 13228 */   MCD::OPC_FilterValue, 30, 66, 2, // Skip to: 13810
/* 13232 */   MCD::OPC_CheckField, 16, 5, 0, 60, 2, // Skip to: 13810
/* 13238 */   MCD::OPC_Decode, 254, 4, 161, 1, // Opcode: FCFIDU
/* 13243 */   MCD::OPC_FilterValue, 29, 93, 0, // Skip to: 13340
/* 13247 */   MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 13250 */   MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 13265
/* 13254 */   MCD::OPC_CheckField, 16, 5, 0, 38, 2, // Skip to: 13810
/* 13260 */   MCD::OPC_Decode, 152, 5, 161, 1, // Opcode: FCTIWo
/* 13265 */   MCD::OPC_FilterValue, 4, 11, 0, // Skip to: 13280
/* 13269 */   MCD::OPC_CheckField, 16, 5, 0, 23, 2, // Skip to: 13810
/* 13275 */   MCD::OPC_Decode, 149, 5, 161, 1, // Opcode: FCTIWUo
/* 13280 */   MCD::OPC_FilterValue, 25, 11, 0, // Skip to: 13295
/* 13284 */   MCD::OPC_CheckField, 16, 5, 0, 8, 2, // Skip to: 13810
/* 13290 */   MCD::OPC_Decode, 144, 5, 161, 1, // Opcode: FCTIDo
/* 13295 */   MCD::OPC_FilterValue, 26, 11, 0, // Skip to: 13310
/* 13299 */   MCD::OPC_CheckField, 16, 5, 0, 249, 1, // Skip to: 13810
/* 13305 */   MCD::OPC_Decode, 130, 5, 161, 1, // Opcode: FCFIDo
/* 13310 */   MCD::OPC_FilterValue, 29, 11, 0, // Skip to: 13325
/* 13314 */   MCD::OPC_CheckField, 16, 5, 0, 234, 1, // Skip to: 13810
/* 13320 */   MCD::OPC_Decode, 141, 5, 161, 1, // Opcode: FCTIDUo
/* 13325 */   MCD::OPC_FilterValue, 30, 225, 1, // Skip to: 13810
/* 13329 */   MCD::OPC_CheckField, 16, 5, 0, 219, 1, // Skip to: 13810
/* 13335 */   MCD::OPC_Decode, 129, 5, 161, 1, // Opcode: FCFIDUo
/* 13340 */   MCD::OPC_FilterValue, 30, 63, 0, // Skip to: 13407
/* 13344 */   MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 13347 */   MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 13362
/* 13351 */   MCD::OPC_CheckField, 16, 5, 0, 197, 1, // Skip to: 13810
/* 13357 */   MCD::OPC_Decode, 150, 5, 161, 1, // Opcode: FCTIWZ
/* 13362 */   MCD::OPC_FilterValue, 4, 11, 0, // Skip to: 13377
/* 13366 */   MCD::OPC_CheckField, 16, 5, 0, 182, 1, // Skip to: 13810
/* 13372 */   MCD::OPC_Decode, 147, 5, 161, 1, // Opcode: FCTIWUZ
/* 13377 */   MCD::OPC_FilterValue, 25, 11, 0, // Skip to: 13392
/* 13381 */   MCD::OPC_CheckField, 16, 5, 0, 167, 1, // Skip to: 13810
/* 13387 */   MCD::OPC_Decode, 142, 5, 161, 1, // Opcode: FCTIDZ
/* 13392 */   MCD::OPC_FilterValue, 29, 158, 1, // Skip to: 13810
/* 13396 */   MCD::OPC_CheckField, 16, 5, 0, 152, 1, // Skip to: 13810
/* 13402 */   MCD::OPC_Decode, 139, 5, 161, 1, // Opcode: FCTIDUZ
/* 13407 */   MCD::OPC_FilterValue, 31, 63, 0, // Skip to: 13474
/* 13411 */   MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 13414 */   MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 13429
/* 13418 */   MCD::OPC_CheckField, 16, 5, 0, 130, 1, // Skip to: 13810
/* 13424 */   MCD::OPC_Decode, 151, 5, 161, 1, // Opcode: FCTIWZo
/* 13429 */   MCD::OPC_FilterValue, 4, 11, 0, // Skip to: 13444
/* 13433 */   MCD::OPC_CheckField, 16, 5, 0, 115, 1, // Skip to: 13810
/* 13439 */   MCD::OPC_Decode, 148, 5, 161, 1, // Opcode: FCTIWUZo
/* 13444 */   MCD::OPC_FilterValue, 25, 11, 0, // Skip to: 13459
/* 13448 */   MCD::OPC_CheckField, 16, 5, 0, 100, 1, // Skip to: 13810
/* 13454 */   MCD::OPC_Decode, 143, 5, 161, 1, // Opcode: FCTIDZo
/* 13459 */   MCD::OPC_FilterValue, 29, 91, 1, // Skip to: 13810
/* 13463 */   MCD::OPC_CheckField, 16, 5, 0, 85, 1, // Skip to: 13810
/* 13469 */   MCD::OPC_Decode, 140, 5, 161, 1, // Opcode: FCTIDUZo
/* 13474 */   MCD::OPC_FilterValue, 36, 11, 0, // Skip to: 13489
/* 13478 */   MCD::OPC_CheckField, 6, 5, 0, 70, 1, // Skip to: 13810
/* 13484 */   MCD::OPC_Decode, 153, 5, 162, 1, // Opcode: FDIV
/* 13489 */   MCD::OPC_FilterValue, 37, 11, 0, // Skip to: 13504
/* 13493 */   MCD::OPC_CheckField, 6, 5, 0, 55, 1, // Skip to: 13810
/* 13499 */   MCD::OPC_Decode, 156, 5, 162, 1, // Opcode: FDIVo
/* 13504 */   MCD::OPC_FilterValue, 40, 11, 0, // Skip to: 13519
/* 13508 */   MCD::OPC_CheckField, 6, 5, 0, 40, 1, // Skip to: 13810
/* 13514 */   MCD::OPC_Decode, 221, 5, 162, 1, // Opcode: FSUB
/* 13519 */   MCD::OPC_FilterValue, 41, 11, 0, // Skip to: 13534
/* 13523 */   MCD::OPC_CheckField, 6, 5, 0, 25, 1, // Skip to: 13810
/* 13529 */   MCD::OPC_Decode, 224, 5, 162, 1, // Opcode: FSUBo
/* 13534 */   MCD::OPC_FilterValue, 42, 11, 0, // Skip to: 13549
/* 13538 */   MCD::OPC_CheckField, 6, 5, 0, 10, 1, // Skip to: 13810
/* 13544 */   MCD::OPC_Decode, 246, 4, 162, 1, // Opcode: FADD
/* 13549 */   MCD::OPC_FilterValue, 43, 11, 0, // Skip to: 13564
/* 13553 */   MCD::OPC_CheckField, 6, 5, 0, 251, 0, // Skip to: 13810
/* 13559 */   MCD::OPC_Decode, 249, 4, 162, 1, // Opcode: FADDo
/* 13564 */   MCD::OPC_FilterValue, 44, 17, 0, // Skip to: 13585
/* 13568 */   MCD::OPC_CheckField, 16, 5, 0, 236, 0, // Skip to: 13810
/* 13574 */   MCD::OPC_CheckField, 6, 5, 0, 230, 0, // Skip to: 13810
/* 13580 */   MCD::OPC_Decode, 217, 5, 161, 1, // Opcode: FSQRT
/* 13585 */   MCD::OPC_FilterValue, 45, 17, 0, // Skip to: 13606
/* 13589 */   MCD::OPC_CheckField, 16, 5, 0, 215, 0, // Skip to: 13810
/* 13595 */   MCD::OPC_CheckField, 6, 5, 0, 209, 0, // Skip to: 13810
/* 13601 */   MCD::OPC_Decode, 220, 5, 161, 1, // Opcode: FSQRTo
/* 13606 */   MCD::OPC_FilterValue, 46, 5, 0, // Skip to: 13615
/* 13610 */   MCD::OPC_Decode, 215, 5, 163, 1, // Opcode: FSELS
/* 13615 */   MCD::OPC_FilterValue, 47, 5, 0, // Skip to: 13624
/* 13619 */   MCD::OPC_Decode, 216, 5, 163, 1, // Opcode: FSELSo
/* 13624 */   MCD::OPC_FilterValue, 48, 17, 0, // Skip to: 13645
/* 13628 */   MCD::OPC_CheckField, 16, 5, 0, 176, 0, // Skip to: 13810
/* 13634 */   MCD::OPC_CheckField, 6, 5, 0, 170, 0, // Skip to: 13810
/* 13640 */   MCD::OPC_Decode, 187, 5, 161, 1, // Opcode: FRE
/* 13645 */   MCD::OPC_FilterValue, 49, 17, 0, // Skip to: 13666
/* 13649 */   MCD::OPC_CheckField, 16, 5, 0, 155, 0, // Skip to: 13810
/* 13655 */   MCD::OPC_CheckField, 6, 5, 0, 149, 0, // Skip to: 13810
/* 13661 */   MCD::OPC_Decode, 190, 5, 161, 1, // Opcode: FREo
/* 13666 */   MCD::OPC_FilterValue, 50, 11, 0, // Skip to: 13681
/* 13670 */   MCD::OPC_CheckField, 11, 5, 0, 134, 0, // Skip to: 13810
/* 13676 */   MCD::OPC_Decode, 167, 5, 164, 1, // Opcode: FMUL
/* 13681 */   MCD::OPC_FilterValue, 51, 11, 0, // Skip to: 13696
/* 13685 */   MCD::OPC_CheckField, 11, 5, 0, 119, 0, // Skip to: 13810
/* 13691 */   MCD::OPC_Decode, 170, 5, 164, 1, // Opcode: FMULo
/* 13696 */   MCD::OPC_FilterValue, 52, 17, 0, // Skip to: 13717
/* 13700 */   MCD::OPC_CheckField, 16, 5, 0, 104, 0, // Skip to: 13810
/* 13706 */   MCD::OPC_CheckField, 6, 5, 0, 98, 0, // Skip to: 13810
/* 13712 */   MCD::OPC_Decode, 209, 5, 161, 1, // Opcode: FRSQRTE
/* 13717 */   MCD::OPC_FilterValue, 53, 17, 0, // Skip to: 13738
/* 13721 */   MCD::OPC_CheckField, 16, 5, 0, 83, 0, // Skip to: 13810
/* 13727 */   MCD::OPC_CheckField, 6, 5, 0, 77, 0, // Skip to: 13810
/* 13733 */   MCD::OPC_Decode, 212, 5, 161, 1, // Opcode: FRSQRTEo
/* 13738 */   MCD::OPC_FilterValue, 56, 5, 0, // Skip to: 13747
/* 13742 */   MCD::OPC_Decode, 163, 5, 165, 1, // Opcode: FMSUB
/* 13747 */   MCD::OPC_FilterValue, 57, 5, 0, // Skip to: 13756
/* 13751 */   MCD::OPC_Decode, 166, 5, 165, 1, // Opcode: FMSUBo
/* 13756 */   MCD::OPC_FilterValue, 58, 5, 0, // Skip to: 13765
/* 13760 */   MCD::OPC_Decode, 157, 5, 165, 1, // Opcode: FMADD
/* 13765 */   MCD::OPC_FilterValue, 59, 5, 0, // Skip to: 13774
/* 13769 */   MCD::OPC_Decode, 160, 5, 165, 1, // Opcode: FMADDo
/* 13774 */   MCD::OPC_FilterValue, 60, 5, 0, // Skip to: 13783
/* 13778 */   MCD::OPC_Decode, 183, 5, 165, 1, // Opcode: FNMSUB
/* 13783 */   MCD::OPC_FilterValue, 61, 5, 0, // Skip to: 13792
/* 13787 */   MCD::OPC_Decode, 186, 5, 165, 1, // Opcode: FNMSUBo
/* 13792 */   MCD::OPC_FilterValue, 62, 5, 0, // Skip to: 13801
/* 13796 */   MCD::OPC_Decode, 179, 5, 165, 1, // Opcode: FNMADD
/* 13801 */   MCD::OPC_FilterValue, 63, 5, 0, // Skip to: 13810
/* 13805 */   MCD::OPC_Decode, 182, 5, 165, 1, // Opcode: FNMADDo
/* 13810 */   MCD::OPC_Fail,
  0
};

static const uint8_t DecoderTableQPX32[] = {
/* 0 */       MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 3 */       MCD::OPC_FilterValue, 0, 63, 0, // Skip to: 70
/* 7 */       MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 10 */      MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 25
/* 14 */      MCD::OPC_CheckField, 26, 6, 4, 178, 7, // Skip to: 1990
/* 20 */      MCD::OPC_Decode, 235, 7, 166, 1, // Opcode: QVFCMPEQb
/* 25 */      MCD::OPC_FilterValue, 1, 11, 0, // Skip to: 40
/* 29 */      MCD::OPC_CheckField, 26, 6, 4, 163, 7, // Skip to: 1990
/* 35 */      MCD::OPC_Decode, 238, 7, 166, 1, // Opcode: QVFCMPGTb
/* 40 */      MCD::OPC_FilterValue, 2, 11, 0, // Skip to: 55
/* 44 */      MCD::OPC_CheckField, 26, 6, 4, 148, 7, // Skip to: 1990
/* 50 */      MCD::OPC_Decode, 177, 8, 166, 1, // Opcode: QVFTSTNANb
/* 55 */      MCD::OPC_FilterValue, 3, 139, 7, // Skip to: 1990
/* 59 */      MCD::OPC_CheckField, 26, 6, 4, 133, 7, // Skip to: 1990
/* 65 */      MCD::OPC_Decode, 241, 7, 166, 1, // Opcode: QVFCMPLTb
/* 70 */      MCD::OPC_FilterValue, 2, 21, 0, // Skip to: 95
/* 74 */      MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 77 */      MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 86
/* 81 */      MCD::OPC_Decode, 186, 8, 167, 1, // Opcode: QVFXXMADDS
/* 86 */      MCD::OPC_FilterValue, 4, 108, 7, // Skip to: 1990
/* 90 */      MCD::OPC_Decode, 185, 8, 167, 1, // Opcode: QVFXXMADD
/* 95 */      MCD::OPC_FilterValue, 6, 21, 0, // Skip to: 120
/* 99 */      MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 102 */     MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 111
/* 106 */     MCD::OPC_Decode, 184, 8, 167, 1, // Opcode: QVFXXCPNMADDS
/* 111 */     MCD::OPC_FilterValue, 4, 83, 7, // Skip to: 1990
/* 115 */     MCD::OPC_Decode, 183, 8, 167, 1, // Opcode: QVFXXCPNMADD
/* 120 */     MCD::OPC_FilterValue, 8, 17, 0, // Skip to: 141
/* 124 */     MCD::OPC_CheckField, 26, 6, 4, 68, 7, // Skip to: 1990
/* 130 */     MCD::OPC_CheckField, 6, 1, 0, 62, 7, // Skip to: 1990
/* 136 */     MCD::OPC_Decode, 255, 7, 168, 1, // Opcode: QVFLOGICALb
/* 141 */     MCD::OPC_FilterValue, 10, 191, 0, // Skip to: 336
/* 145 */     MCD::OPC_ExtractField, 6, 3,  // Inst{8-6} ...
/* 148 */     MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 163
/* 152 */     MCD::OPC_CheckField, 26, 6, 4, 40, 7, // Skip to: 1990
/* 158 */     MCD::OPC_Decode, 218, 7, 169, 1, // Opcode: QVALIGNI
/* 163 */     MCD::OPC_FilterValue, 1, 17, 0, // Skip to: 184
/* 167 */     MCD::OPC_CheckField, 26, 6, 4, 25, 7, // Skip to: 1990
/* 173 */     MCD::OPC_CheckField, 11, 5, 0, 19, 7, // Skip to: 1990
/* 179 */     MCD::OPC_Decode, 221, 7, 170, 1, // Opcode: QVESPLATI
/* 184 */     MCD::OPC_FilterValue, 4, 37, 0, // Skip to: 225
/* 188 */     MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 191 */     MCD::OPC_FilterValue, 4, 5, 0, // Skip to: 200
/* 195 */     MCD::OPC_Decode, 189, 8, 171, 1, // Opcode: QVGPCI
/* 200 */     MCD::OPC_FilterValue, 31, 250, 6, // Skip to: 1990
/* 204 */     MCD::OPC_ExtractField, 9, 2,  // Inst{10-9} ...
/* 207 */     MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 216
/* 211 */     MCD::OPC_Decode, 233, 8, 172, 1, // Opcode: QVSTFCSXI
/* 216 */     MCD::OPC_FilterValue, 2, 234, 6, // Skip to: 1990
/* 220 */     MCD::OPC_Decode, 254, 8, 172, 1, // Opcode: QVSTFSXI
/* 225 */     MCD::OPC_FilterValue, 5, 33, 0, // Skip to: 262
/* 229 */     MCD::OPC_ExtractField, 9, 2,  // Inst{10-9} ...
/* 232 */     MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 247
/* 236 */     MCD::OPC_CheckField, 26, 6, 31, 212, 6, // Skip to: 1990
/* 242 */     MCD::OPC_Decode, 229, 8, 172, 1, // Opcode: QVSTFCSUXI
/* 247 */     MCD::OPC_FilterValue, 2, 203, 6, // Skip to: 1990
/* 251 */     MCD::OPC_CheckField, 26, 6, 31, 197, 6, // Skip to: 1990
/* 257 */     MCD::OPC_Decode, 249, 8, 172, 1, // Opcode: QVSTFSUXI
/* 262 */     MCD::OPC_FilterValue, 6, 33, 0, // Skip to: 299
/* 266 */     MCD::OPC_ExtractField, 9, 2,  // Inst{10-9} ...
/* 269 */     MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 284
/* 273 */     MCD::OPC_CheckField, 26, 6, 31, 175, 6, // Skip to: 1990
/* 279 */     MCD::OPC_Decode, 225, 8, 172, 1, // Opcode: QVSTFCDXI
/* 284 */     MCD::OPC_FilterValue, 2, 166, 6, // Skip to: 1990
/* 288 */     MCD::OPC_CheckField, 26, 6, 31, 160, 6, // Skip to: 1990
/* 294 */     MCD::OPC_Decode, 242, 8, 172, 1, // Opcode: QVSTFDXI
/* 299 */     MCD::OPC_FilterValue, 7, 151, 6, // Skip to: 1990
/* 303 */     MCD::OPC_ExtractField, 9, 2,  // Inst{10-9} ...
/* 306 */     MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 321
/* 310 */     MCD::OPC_CheckField, 26, 6, 31, 138, 6, // Skip to: 1990
/* 316 */     MCD::OPC_Decode, 221, 8, 172, 1, // Opcode: QVSTFCDUXI
/* 321 */     MCD::OPC_FilterValue, 2, 129, 6, // Skip to: 1990
/* 325 */     MCD::OPC_CheckField, 26, 6, 31, 123, 6, // Skip to: 1990
/* 331 */     MCD::OPC_Decode, 238, 8, 172, 1, // Opcode: QVSTFDUXI
/* 336 */     MCD::OPC_FilterValue, 11, 123, 0, // Skip to: 463
/* 340 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 343 */     MCD::OPC_FilterValue, 4, 11, 0, // Skip to: 358
/* 347 */     MCD::OPC_CheckField, 26, 6, 31, 101, 6, // Skip to: 1990
/* 353 */     MCD::OPC_Decode, 234, 8, 172, 1, // Opcode: QVSTFCSXIA
/* 358 */     MCD::OPC_FilterValue, 5, 11, 0, // Skip to: 373
/* 362 */     MCD::OPC_CheckField, 26, 6, 31, 86, 6, // Skip to: 1990
/* 368 */     MCD::OPC_Decode, 230, 8, 172, 1, // Opcode: QVSTFCSUXIA
/* 373 */     MCD::OPC_FilterValue, 6, 11, 0, // Skip to: 388
/* 377 */     MCD::OPC_CheckField, 26, 6, 31, 71, 6, // Skip to: 1990
/* 383 */     MCD::OPC_Decode, 226, 8, 172, 1, // Opcode: QVSTFCDXIA
/* 388 */     MCD::OPC_FilterValue, 7, 11, 0, // Skip to: 403
/* 392 */     MCD::OPC_CheckField, 26, 6, 31, 56, 6, // Skip to: 1990
/* 398 */     MCD::OPC_Decode, 222, 8, 172, 1, // Opcode: QVSTFCDUXIA
/* 403 */     MCD::OPC_FilterValue, 20, 11, 0, // Skip to: 418
/* 407 */     MCD::OPC_CheckField, 26, 6, 31, 41, 6, // Skip to: 1990
/* 413 */     MCD::OPC_Decode, 255, 8, 172, 1, // Opcode: QVSTFSXIA
/* 418 */     MCD::OPC_FilterValue, 21, 11, 0, // Skip to: 433
/* 422 */     MCD::OPC_CheckField, 26, 6, 31, 26, 6, // Skip to: 1990
/* 428 */     MCD::OPC_Decode, 250, 8, 172, 1, // Opcode: QVSTFSUXIA
/* 433 */     MCD::OPC_FilterValue, 22, 11, 0, // Skip to: 448
/* 437 */     MCD::OPC_CheckField, 26, 6, 31, 11, 6, // Skip to: 1990
/* 443 */     MCD::OPC_Decode, 243, 8, 172, 1, // Opcode: QVSTFDXIA
/* 448 */     MCD::OPC_FilterValue, 23, 2, 6, // Skip to: 1990
/* 452 */     MCD::OPC_CheckField, 26, 6, 31, 252, 5, // Skip to: 1990
/* 458 */     MCD::OPC_Decode, 239, 8, 172, 1, // Opcode: QVSTFDUXIA
/* 463 */     MCD::OPC_FilterValue, 12, 55, 0, // Skip to: 522
/* 467 */     MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 470 */     MCD::OPC_FilterValue, 4, 5, 0, // Skip to: 479
/* 474 */     MCD::OPC_Decode, 151, 8, 167, 1, // Opcode: QVFPERM
/* 479 */     MCD::OPC_FilterValue, 31, 227, 5, // Skip to: 1990
/* 483 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 486 */     MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 495
/* 490 */     MCD::OPC_Decode, 218, 8, 172, 1, // Opcode: QVLPCRSX
/* 495 */     MCD::OPC_FilterValue, 2, 5, 0, // Skip to: 504
/* 499 */     MCD::OPC_Decode, 217, 8, 172, 1, // Opcode: QVLPCRDX
/* 504 */     MCD::OPC_FilterValue, 16, 5, 0, // Skip to: 513
/* 508 */     MCD::OPC_Decode, 215, 8, 172, 1, // Opcode: QVLPCLSX
/* 513 */     MCD::OPC_FilterValue, 18, 193, 5, // Skip to: 1990
/* 517 */     MCD::OPC_Decode, 214, 8, 172, 1, // Opcode: QVLPCLDX
/* 522 */     MCD::OPC_FilterValue, 14, 32, 1, // Skip to: 814
/* 526 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 529 */     MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 544
/* 533 */     MCD::OPC_CheckField, 26, 6, 31, 171, 5, // Skip to: 1990
/* 539 */     MCD::OPC_Decode, 196, 8, 172, 1, // Opcode: QVLFCSX
/* 544 */     MCD::OPC_FilterValue, 1, 11, 0, // Skip to: 559
/* 548 */     MCD::OPC_CheckField, 26, 6, 31, 156, 5, // Skip to: 1990
/* 554 */     MCD::OPC_Decode, 194, 8, 172, 1, // Opcode: QVLFCSUX
/* 559 */     MCD::OPC_FilterValue, 2, 11, 0, // Skip to: 574
/* 563 */     MCD::OPC_CheckField, 26, 6, 31, 141, 5, // Skip to: 1990
/* 569 */     MCD::OPC_Decode, 192, 8, 172, 1, // Opcode: QVLFCDX
/* 574 */     MCD::OPC_FilterValue, 3, 11, 0, // Skip to: 589
/* 578 */     MCD::OPC_CheckField, 26, 6, 31, 126, 5, // Skip to: 1990
/* 584 */     MCD::OPC_Decode, 190, 8, 172, 1, // Opcode: QVLFCDUX
/* 589 */     MCD::OPC_FilterValue, 4, 11, 0, // Skip to: 604
/* 593 */     MCD::OPC_CheckField, 26, 6, 31, 111, 5, // Skip to: 1990
/* 599 */     MCD::OPC_Decode, 231, 8, 172, 1, // Opcode: QVSTFCSX
/* 604 */     MCD::OPC_FilterValue, 5, 11, 0, // Skip to: 619
/* 608 */     MCD::OPC_CheckField, 26, 6, 31, 96, 5, // Skip to: 1990
/* 614 */     MCD::OPC_Decode, 227, 8, 172, 1, // Opcode: QVSTFCSUX
/* 619 */     MCD::OPC_FilterValue, 6, 11, 0, // Skip to: 634
/* 623 */     MCD::OPC_CheckField, 26, 6, 31, 81, 5, // Skip to: 1990
/* 629 */     MCD::OPC_Decode, 223, 8, 172, 1, // Opcode: QVSTFCDX
/* 634 */     MCD::OPC_FilterValue, 7, 11, 0, // Skip to: 649
/* 638 */     MCD::OPC_CheckField, 26, 6, 31, 66, 5, // Skip to: 1990
/* 644 */     MCD::OPC_Decode, 219, 8, 172, 1, // Opcode: QVSTFCDUX
/* 649 */     MCD::OPC_FilterValue, 16, 11, 0, // Skip to: 664
/* 653 */     MCD::OPC_CheckField, 26, 6, 31, 51, 5, // Skip to: 1990
/* 659 */     MCD::OPC_Decode, 210, 8, 172, 1, // Opcode: QVLFSX
/* 664 */     MCD::OPC_FilterValue, 17, 11, 0, // Skip to: 679
/* 668 */     MCD::OPC_CheckField, 26, 6, 31, 36, 5, // Skip to: 1990
/* 674 */     MCD::OPC_Decode, 208, 8, 173, 1, // Opcode: QVLFSUX
/* 679 */     MCD::OPC_FilterValue, 18, 11, 0, // Skip to: 694
/* 683 */     MCD::OPC_CheckField, 26, 6, 31, 21, 5, // Skip to: 1990
/* 689 */     MCD::OPC_Decode, 201, 8, 172, 1, // Opcode: QVLFDX
/* 694 */     MCD::OPC_FilterValue, 19, 11, 0, // Skip to: 709
/* 698 */     MCD::OPC_CheckField, 26, 6, 31, 6, 5, // Skip to: 1990
/* 704 */     MCD::OPC_Decode, 199, 8, 174, 1, // Opcode: QVLFDUX
/* 709 */     MCD::OPC_FilterValue, 20, 11, 0, // Skip to: 724
/* 713 */     MCD::OPC_CheckField, 26, 6, 31, 247, 4, // Skip to: 1990
/* 719 */     MCD::OPC_Decode, 252, 8, 172, 1, // Opcode: QVSTFSX
/* 724 */     MCD::OPC_FilterValue, 21, 11, 0, // Skip to: 739
/* 728 */     MCD::OPC_CheckField, 26, 6, 31, 232, 4, // Skip to: 1990
/* 734 */     MCD::OPC_Decode, 247, 8, 175, 1, // Opcode: QVSTFSUX
/* 739 */     MCD::OPC_FilterValue, 22, 11, 0, // Skip to: 754
/* 743 */     MCD::OPC_CheckField, 26, 6, 31, 217, 4, // Skip to: 1990
/* 749 */     MCD::OPC_Decode, 240, 8, 172, 1, // Opcode: QVSTFDX
/* 754 */     MCD::OPC_FilterValue, 23, 11, 0, // Skip to: 769
/* 758 */     MCD::OPC_CheckField, 26, 6, 31, 202, 4, // Skip to: 1990
/* 764 */     MCD::OPC_Decode, 236, 8, 176, 1, // Opcode: QVSTFDUX
/* 769 */     MCD::OPC_FilterValue, 26, 11, 0, // Skip to: 784
/* 773 */     MCD::OPC_CheckField, 26, 6, 31, 187, 4, // Skip to: 1990
/* 779 */     MCD::OPC_Decode, 206, 8, 172, 1, // Opcode: QVLFIWZX
/* 784 */     MCD::OPC_FilterValue, 27, 11, 0, // Skip to: 799
/* 788 */     MCD::OPC_CheckField, 26, 6, 31, 172, 4, // Skip to: 1990
/* 794 */     MCD::OPC_Decode, 204, 8, 172, 1, // Opcode: QVLFIWAX
/* 799 */     MCD::OPC_FilterValue, 30, 163, 4, // Skip to: 1990
/* 803 */     MCD::OPC_CheckField, 26, 6, 31, 157, 4, // Skip to: 1990
/* 809 */     MCD::OPC_Decode, 245, 8, 172, 1, // Opcode: QVSTFIWX
/* 814 */     MCD::OPC_FilterValue, 15, 32, 1, // Skip to: 1106
/* 818 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 821 */     MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 836
/* 825 */     MCD::OPC_CheckField, 26, 6, 31, 135, 4, // Skip to: 1990
/* 831 */     MCD::OPC_Decode, 197, 8, 172, 1, // Opcode: QVLFCSXA
/* 836 */     MCD::OPC_FilterValue, 1, 11, 0, // Skip to: 851
/* 840 */     MCD::OPC_CheckField, 26, 6, 31, 120, 4, // Skip to: 1990
/* 846 */     MCD::OPC_Decode, 195, 8, 172, 1, // Opcode: QVLFCSUXA
/* 851 */     MCD::OPC_FilterValue, 2, 11, 0, // Skip to: 866
/* 855 */     MCD::OPC_CheckField, 26, 6, 31, 105, 4, // Skip to: 1990
/* 861 */     MCD::OPC_Decode, 193, 8, 172, 1, // Opcode: QVLFCDXA
/* 866 */     MCD::OPC_FilterValue, 3, 11, 0, // Skip to: 881
/* 870 */     MCD::OPC_CheckField, 26, 6, 31, 90, 4, // Skip to: 1990
/* 876 */     MCD::OPC_Decode, 191, 8, 172, 1, // Opcode: QVLFCDUXA
/* 881 */     MCD::OPC_FilterValue, 4, 11, 0, // Skip to: 896
/* 885 */     MCD::OPC_CheckField, 26, 6, 31, 75, 4, // Skip to: 1990
/* 891 */     MCD::OPC_Decode, 232, 8, 172, 1, // Opcode: QVSTFCSXA
/* 896 */     MCD::OPC_FilterValue, 5, 11, 0, // Skip to: 911
/* 900 */     MCD::OPC_CheckField, 26, 6, 31, 60, 4, // Skip to: 1990
/* 906 */     MCD::OPC_Decode, 228, 8, 172, 1, // Opcode: QVSTFCSUXA
/* 911 */     MCD::OPC_FilterValue, 6, 11, 0, // Skip to: 926
/* 915 */     MCD::OPC_CheckField, 26, 6, 31, 45, 4, // Skip to: 1990
/* 921 */     MCD::OPC_Decode, 224, 8, 172, 1, // Opcode: QVSTFCDXA
/* 926 */     MCD::OPC_FilterValue, 7, 11, 0, // Skip to: 941
/* 930 */     MCD::OPC_CheckField, 26, 6, 31, 30, 4, // Skip to: 1990
/* 936 */     MCD::OPC_Decode, 220, 8, 172, 1, // Opcode: QVSTFCDUXA
/* 941 */     MCD::OPC_FilterValue, 16, 11, 0, // Skip to: 956
/* 945 */     MCD::OPC_CheckField, 26, 6, 31, 15, 4, // Skip to: 1990
/* 951 */     MCD::OPC_Decode, 211, 8, 172, 1, // Opcode: QVLFSXA
/* 956 */     MCD::OPC_FilterValue, 17, 11, 0, // Skip to: 971
/* 960 */     MCD::OPC_CheckField, 26, 6, 31, 0, 4, // Skip to: 1990
/* 966 */     MCD::OPC_Decode, 209, 8, 172, 1, // Opcode: QVLFSUXA
/* 971 */     MCD::OPC_FilterValue, 18, 11, 0, // Skip to: 986
/* 975 */     MCD::OPC_CheckField, 26, 6, 31, 241, 3, // Skip to: 1990
/* 981 */     MCD::OPC_Decode, 202, 8, 172, 1, // Opcode: QVLFDXA
/* 986 */     MCD::OPC_FilterValue, 19, 11, 0, // Skip to: 1001
/* 990 */     MCD::OPC_CheckField, 26, 6, 31, 226, 3, // Skip to: 1990
/* 996 */     MCD::OPC_Decode, 200, 8, 172, 1, // Opcode: QVLFDUXA
/* 1001 */    MCD::OPC_FilterValue, 20, 11, 0, // Skip to: 1016
/* 1005 */    MCD::OPC_CheckField, 26, 6, 31, 211, 3, // Skip to: 1990
/* 1011 */    MCD::OPC_Decode, 253, 8, 172, 1, // Opcode: QVSTFSXA
/* 1016 */    MCD::OPC_FilterValue, 21, 11, 0, // Skip to: 1031
/* 1020 */    MCD::OPC_CheckField, 26, 6, 31, 196, 3, // Skip to: 1990
/* 1026 */    MCD::OPC_Decode, 248, 8, 172, 1, // Opcode: QVSTFSUXA
/* 1031 */    MCD::OPC_FilterValue, 22, 11, 0, // Skip to: 1046
/* 1035 */    MCD::OPC_CheckField, 26, 6, 31, 181, 3, // Skip to: 1990
/* 1041 */    MCD::OPC_Decode, 241, 8, 172, 1, // Opcode: QVSTFDXA
/* 1046 */    MCD::OPC_FilterValue, 23, 11, 0, // Skip to: 1061
/* 1050 */    MCD::OPC_CheckField, 26, 6, 31, 166, 3, // Skip to: 1990
/* 1056 */    MCD::OPC_Decode, 237, 8, 172, 1, // Opcode: QVSTFDUXA
/* 1061 */    MCD::OPC_FilterValue, 26, 11, 0, // Skip to: 1076
/* 1065 */    MCD::OPC_CheckField, 26, 6, 31, 151, 3, // Skip to: 1990
/* 1071 */    MCD::OPC_Decode, 207, 8, 172, 1, // Opcode: QVLFIWZXA
/* 1076 */    MCD::OPC_FilterValue, 27, 11, 0, // Skip to: 1091
/* 1080 */    MCD::OPC_CheckField, 26, 6, 31, 136, 3, // Skip to: 1990
/* 1086 */    MCD::OPC_Decode, 205, 8, 172, 1, // Opcode: QVLFIWAXA
/* 1091 */    MCD::OPC_FilterValue, 30, 127, 3, // Skip to: 1990
/* 1095 */    MCD::OPC_CheckField, 26, 6, 31, 121, 3, // Skip to: 1990
/* 1101 */    MCD::OPC_Decode, 246, 8, 172, 1, // Opcode: QVSTFIWXA
/* 1106 */    MCD::OPC_FilterValue, 16, 186, 0, // Skip to: 1296
/* 1110 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 1113 */    MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 1128
/* 1117 */    MCD::OPC_CheckField, 26, 6, 4, 99, 3, // Skip to: 1990
/* 1123 */    MCD::OPC_Decode, 243, 7, 177, 1, // Opcode: QVFCPSGN
/* 1128 */    MCD::OPC_FilterValue, 1, 17, 0, // Skip to: 1149
/* 1132 */    MCD::OPC_CheckField, 26, 6, 4, 84, 3, // Skip to: 1990
/* 1138 */    MCD::OPC_CheckField, 16, 5, 0, 78, 3, // Skip to: 1990
/* 1144 */    MCD::OPC_Decode, 143, 8, 178, 1, // Opcode: QVFNEG
/* 1149 */    MCD::OPC_FilterValue, 2, 17, 0, // Skip to: 1170
/* 1153 */    MCD::OPC_CheckField, 26, 6, 4, 63, 3, // Skip to: 1990
/* 1159 */    MCD::OPC_CheckField, 16, 5, 0, 57, 3, // Skip to: 1990
/* 1165 */    MCD::OPC_Decode, 132, 8, 178, 1, // Opcode: QVFMR
/* 1170 */    MCD::OPC_FilterValue, 4, 17, 0, // Skip to: 1191
/* 1174 */    MCD::OPC_CheckField, 26, 6, 4, 42, 3, // Skip to: 1990
/* 1180 */    MCD::OPC_CheckField, 16, 5, 0, 36, 3, // Skip to: 1990
/* 1186 */    MCD::OPC_Decode, 141, 8, 178, 1, // Opcode: QVFNABS
/* 1191 */    MCD::OPC_FilterValue, 8, 17, 0, // Skip to: 1212
/* 1195 */    MCD::OPC_CheckField, 26, 6, 4, 21, 3, // Skip to: 1990
/* 1201 */    MCD::OPC_CheckField, 16, 5, 0, 15, 3, // Skip to: 1990
/* 1207 */    MCD::OPC_Decode, 224, 7, 178, 1, // Opcode: QVFABS
/* 1212 */    MCD::OPC_FilterValue, 12, 17, 0, // Skip to: 1233
/* 1216 */    MCD::OPC_CheckField, 26, 6, 4, 0, 3, // Skip to: 1990
/* 1222 */    MCD::OPC_CheckField, 16, 5, 0, 250, 2, // Skip to: 1990
/* 1228 */    MCD::OPC_Decode, 158, 8, 178, 1, // Opcode: QVFRIN
/* 1233 */    MCD::OPC_FilterValue, 13, 17, 0, // Skip to: 1254
/* 1237 */    MCD::OPC_CheckField, 26, 6, 4, 235, 2, // Skip to: 1990
/* 1243 */    MCD::OPC_CheckField, 16, 5, 0, 229, 2, // Skip to: 1990
/* 1249 */    MCD::OPC_Decode, 162, 8, 178, 1, // Opcode: QVFRIZ
/* 1254 */    MCD::OPC_FilterValue, 14, 17, 0, // Skip to: 1275
/* 1258 */    MCD::OPC_CheckField, 26, 6, 4, 214, 2, // Skip to: 1990
/* 1264 */    MCD::OPC_CheckField, 16, 5, 0, 208, 2, // Skip to: 1990
/* 1270 */    MCD::OPC_Decode, 160, 8, 178, 1, // Opcode: QVFRIP
/* 1275 */    MCD::OPC_FilterValue, 15, 199, 2, // Skip to: 1990
/* 1279 */    MCD::OPC_CheckField, 26, 6, 4, 193, 2, // Skip to: 1990
/* 1285 */    MCD::OPC_CheckField, 16, 5, 0, 187, 2, // Skip to: 1990
/* 1291 */    MCD::OPC_Decode, 156, 8, 178, 1, // Opcode: QVFRIM
/* 1296 */    MCD::OPC_FilterValue, 18, 21, 0, // Skip to: 1321
/* 1300 */    MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 1303 */    MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 1312
/* 1307 */    MCD::OPC_Decode, 180, 8, 167, 1, // Opcode: QVFXMADDS
/* 1312 */    MCD::OPC_FilterValue, 4, 162, 2, // Skip to: 1990
/* 1316 */    MCD::OPC_Decode, 179, 8, 167, 1, // Opcode: QVFXMADD
/* 1321 */    MCD::OPC_FilterValue, 22, 21, 0, // Skip to: 1346
/* 1325 */    MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 1328 */    MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 1337
/* 1332 */    MCD::OPC_Decode, 188, 8, 167, 1, // Opcode: QVFXXNPMADDS
/* 1337 */    MCD::OPC_FilterValue, 4, 137, 2, // Skip to: 1990
/* 1341 */    MCD::OPC_Decode, 187, 8, 167, 1, // Opcode: QVFXXNPMADD
/* 1346 */    MCD::OPC_FilterValue, 24, 23, 0, // Skip to: 1373
/* 1350 */    MCD::OPC_CheckField, 26, 6, 4, 122, 2, // Skip to: 1990
/* 1356 */    MCD::OPC_CheckField, 16, 5, 0, 116, 2, // Skip to: 1990
/* 1362 */    MCD::OPC_CheckField, 6, 5, 0, 110, 2, // Skip to: 1990
/* 1368 */    MCD::OPC_Decode, 165, 8, 179, 1, // Opcode: QVFRSPs
/* 1373 */    MCD::OPC_FilterValue, 28, 161, 0, // Skip to: 1538
/* 1377 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 1380 */    MCD::OPC_FilterValue, 0, 17, 0, // Skip to: 1401
/* 1384 */    MCD::OPC_CheckField, 26, 6, 4, 88, 2, // Skip to: 1990
/* 1390 */    MCD::OPC_CheckField, 16, 5, 0, 82, 2, // Skip to: 1990
/* 1396 */    MCD::OPC_Decode, 250, 7, 178, 1, // Opcode: QVFCTIW
/* 1401 */    MCD::OPC_FilterValue, 4, 17, 0, // Skip to: 1422
/* 1405 */    MCD::OPC_CheckField, 26, 6, 4, 67, 2, // Skip to: 1990
/* 1411 */    MCD::OPC_CheckField, 16, 5, 0, 61, 2, // Skip to: 1990
/* 1417 */    MCD::OPC_Decode, 251, 7, 178, 1, // Opcode: QVFCTIWU
/* 1422 */    MCD::OPC_FilterValue, 25, 17, 0, // Skip to: 1443
/* 1426 */    MCD::OPC_CheckField, 26, 6, 4, 46, 2, // Skip to: 1990
/* 1432 */    MCD::OPC_CheckField, 16, 5, 0, 40, 2, // Skip to: 1990
/* 1438 */    MCD::OPC_Decode, 245, 7, 178, 1, // Opcode: QVFCTID
/* 1443 */    MCD::OPC_FilterValue, 26, 33, 0, // Skip to: 1480
/* 1447 */    MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 1450 */    MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 1465
/* 1454 */    MCD::OPC_CheckField, 16, 5, 0, 18, 2, // Skip to: 1990
/* 1460 */    MCD::OPC_Decode, 230, 7, 178, 1, // Opcode: QVFCFIDS
/* 1465 */    MCD::OPC_FilterValue, 4, 9, 2, // Skip to: 1990
/* 1469 */    MCD::OPC_CheckField, 16, 5, 0, 3, 2, // Skip to: 1990
/* 1475 */    MCD::OPC_Decode, 229, 7, 178, 1, // Opcode: QVFCFID
/* 1480 */    MCD::OPC_FilterValue, 29, 17, 0, // Skip to: 1501
/* 1484 */    MCD::OPC_CheckField, 26, 6, 4, 244, 1, // Skip to: 1990
/* 1490 */    MCD::OPC_CheckField, 16, 5, 0, 238, 1, // Skip to: 1990
/* 1496 */    MCD::OPC_Decode, 246, 7, 178, 1, // Opcode: QVFCTIDU
/* 1501 */    MCD::OPC_FilterValue, 30, 229, 1, // Skip to: 1990
/* 1505 */    MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 1508 */    MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 1523
/* 1512 */    MCD::OPC_CheckField, 16, 5, 0, 216, 1, // Skip to: 1990
/* 1518 */    MCD::OPC_Decode, 232, 7, 178, 1, // Opcode: QVFCFIDUS
/* 1523 */    MCD::OPC_FilterValue, 4, 207, 1, // Skip to: 1990
/* 1527 */    MCD::OPC_CheckField, 16, 5, 0, 201, 1, // Skip to: 1990
/* 1533 */    MCD::OPC_Decode, 231, 7, 178, 1, // Opcode: QVFCFIDU
/* 1538 */    MCD::OPC_FilterValue, 30, 87, 0, // Skip to: 1629
/* 1542 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 1545 */    MCD::OPC_FilterValue, 0, 17, 0, // Skip to: 1566
/* 1549 */    MCD::OPC_CheckField, 26, 6, 4, 179, 1, // Skip to: 1990
/* 1555 */    MCD::OPC_CheckField, 16, 5, 0, 173, 1, // Skip to: 1990
/* 1561 */    MCD::OPC_Decode, 253, 7, 178, 1, // Opcode: QVFCTIWZ
/* 1566 */    MCD::OPC_FilterValue, 4, 17, 0, // Skip to: 1587
/* 1570 */    MCD::OPC_CheckField, 26, 6, 4, 158, 1, // Skip to: 1990
/* 1576 */    MCD::OPC_CheckField, 16, 5, 0, 152, 1, // Skip to: 1990
/* 1582 */    MCD::OPC_Decode, 252, 7, 178, 1, // Opcode: QVFCTIWUZ
/* 1587 */    MCD::OPC_FilterValue, 25, 17, 0, // Skip to: 1608
/* 1591 */    MCD::OPC_CheckField, 26, 6, 4, 137, 1, // Skip to: 1990
/* 1597 */    MCD::OPC_CheckField, 16, 5, 0, 131, 1, // Skip to: 1990
/* 1603 */    MCD::OPC_Decode, 248, 7, 178, 1, // Opcode: QVFCTIDZ
/* 1608 */    MCD::OPC_FilterValue, 29, 122, 1, // Skip to: 1990
/* 1612 */    MCD::OPC_CheckField, 26, 6, 4, 116, 1, // Skip to: 1990
/* 1618 */    MCD::OPC_CheckField, 16, 5, 0, 110, 1, // Skip to: 1990
/* 1624 */    MCD::OPC_Decode, 247, 7, 178, 1, // Opcode: QVFCTIDUZ
/* 1629 */    MCD::OPC_FilterValue, 34, 33, 0, // Skip to: 1666
/* 1633 */    MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 1636 */    MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 1651
/* 1640 */    MCD::OPC_CheckField, 11, 5, 0, 88, 1, // Skip to: 1990
/* 1646 */    MCD::OPC_Decode, 182, 8, 180, 1, // Opcode: QVFXMULS
/* 1651 */    MCD::OPC_FilterValue, 4, 79, 1, // Skip to: 1990
/* 1655 */    MCD::OPC_CheckField, 11, 5, 0, 73, 1, // Skip to: 1990
/* 1661 */    MCD::OPC_Decode, 181, 8, 180, 1, // Opcode: QVFXMUL
/* 1666 */    MCD::OPC_FilterValue, 40, 33, 0, // Skip to: 1703
/* 1670 */    MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 1673 */    MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 1688
/* 1677 */    MCD::OPC_CheckField, 6, 5, 0, 51, 1, // Skip to: 1990
/* 1683 */    MCD::OPC_Decode, 175, 8, 181, 1, // Opcode: QVFSUBSs
/* 1688 */    MCD::OPC_FilterValue, 4, 42, 1, // Skip to: 1990
/* 1692 */    MCD::OPC_CheckField, 6, 5, 0, 36, 1, // Skip to: 1990
/* 1698 */    MCD::OPC_Decode, 173, 8, 177, 1, // Opcode: QVFSUB
/* 1703 */    MCD::OPC_FilterValue, 42, 33, 0, // Skip to: 1740
/* 1707 */    MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 1710 */    MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 1725
/* 1714 */    MCD::OPC_CheckField, 6, 5, 0, 14, 1, // Skip to: 1990
/* 1720 */    MCD::OPC_Decode, 228, 7, 181, 1, // Opcode: QVFADDSs
/* 1725 */    MCD::OPC_FilterValue, 4, 5, 1, // Skip to: 1990
/* 1729 */    MCD::OPC_CheckField, 6, 5, 0, 255, 0, // Skip to: 1990
/* 1735 */    MCD::OPC_Decode, 226, 7, 177, 1, // Opcode: QVFADD
/* 1740 */    MCD::OPC_FilterValue, 46, 11, 0, // Skip to: 1755
/* 1744 */    MCD::OPC_CheckField, 26, 6, 4, 240, 0, // Skip to: 1990
/* 1750 */    MCD::OPC_Decode, 170, 8, 182, 1, // Opcode: QVFSELb
/* 1755 */    MCD::OPC_FilterValue, 48, 45, 0, // Skip to: 1804
/* 1759 */    MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 1762 */    MCD::OPC_FilterValue, 0, 17, 0, // Skip to: 1783
/* 1766 */    MCD::OPC_CheckField, 16, 5, 0, 218, 0, // Skip to: 1990
/* 1772 */    MCD::OPC_CheckField, 6, 5, 0, 212, 0, // Skip to: 1990
/* 1778 */    MCD::OPC_Decode, 154, 8, 178, 1, // Opcode: QVFRES
/* 1783 */    MCD::OPC_FilterValue, 4, 203, 0, // Skip to: 1990
/* 1787 */    MCD::OPC_CheckField, 16, 5, 0, 197, 0, // Skip to: 1990
/* 1793 */    MCD::OPC_CheckField, 6, 5, 0, 191, 0, // Skip to: 1990
/* 1799 */    MCD::OPC_Decode, 153, 8, 178, 1, // Opcode: QVFRE
/* 1804 */    MCD::OPC_FilterValue, 50, 33, 0, // Skip to: 1841
/* 1808 */    MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 1811 */    MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 1826
/* 1815 */    MCD::OPC_CheckField, 11, 5, 0, 169, 0, // Skip to: 1990
/* 1821 */    MCD::OPC_Decode, 140, 8, 183, 1, // Opcode: QVFMULSs
/* 1826 */    MCD::OPC_FilterValue, 4, 160, 0, // Skip to: 1990
/* 1830 */    MCD::OPC_CheckField, 11, 5, 0, 154, 0, // Skip to: 1990
/* 1836 */    MCD::OPC_Decode, 138, 8, 180, 1, // Opcode: QVFMUL
/* 1841 */    MCD::OPC_FilterValue, 52, 45, 0, // Skip to: 1890
/* 1845 */    MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 1848 */    MCD::OPC_FilterValue, 0, 17, 0, // Skip to: 1869
/* 1852 */    MCD::OPC_CheckField, 16, 5, 0, 132, 0, // Skip to: 1990
/* 1858 */    MCD::OPC_CheckField, 6, 5, 0, 126, 0, // Skip to: 1990
/* 1864 */    MCD::OPC_Decode, 167, 8, 178, 1, // Opcode: QVFRSQRTES
/* 1869 */    MCD::OPC_FilterValue, 4, 117, 0, // Skip to: 1990
/* 1873 */    MCD::OPC_CheckField, 16, 5, 0, 111, 0, // Skip to: 1990
/* 1879 */    MCD::OPC_CheckField, 6, 5, 0, 105, 0, // Skip to: 1990
/* 1885 */    MCD::OPC_Decode, 166, 8, 178, 1, // Opcode: QVFRSQRTE
/* 1890 */    MCD::OPC_FilterValue, 56, 21, 0, // Skip to: 1915
/* 1894 */    MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 1897 */    MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 1906
/* 1901 */    MCD::OPC_Decode, 137, 8, 184, 1, // Opcode: QVFMSUBSs
/* 1906 */    MCD::OPC_FilterValue, 4, 80, 0, // Skip to: 1990
/* 1910 */    MCD::OPC_Decode, 135, 8, 167, 1, // Opcode: QVFMSUB
/* 1915 */    MCD::OPC_FilterValue, 58, 21, 0, // Skip to: 1940
/* 1919 */    MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 1922 */    MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 1931
/* 1926 */    MCD::OPC_Decode, 131, 8, 184, 1, // Opcode: QVFMADDSs
/* 1931 */    MCD::OPC_FilterValue, 4, 55, 0, // Skip to: 1990
/* 1935 */    MCD::OPC_Decode, 129, 8, 167, 1, // Opcode: QVFMADD
/* 1940 */    MCD::OPC_FilterValue, 60, 21, 0, // Skip to: 1965
/* 1944 */    MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 1947 */    MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 1956
/* 1951 */    MCD::OPC_Decode, 150, 8, 184, 1, // Opcode: QVFNMSUBSs
/* 1956 */    MCD::OPC_FilterValue, 4, 30, 0, // Skip to: 1990
/* 1960 */    MCD::OPC_Decode, 148, 8, 167, 1, // Opcode: QVFNMSUB
/* 1965 */    MCD::OPC_FilterValue, 62, 21, 0, // Skip to: 1990
/* 1969 */    MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 1972 */    MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 1981
/* 1976 */    MCD::OPC_Decode, 147, 8, 184, 1, // Opcode: QVFNMADDSs
/* 1981 */    MCD::OPC_FilterValue, 4, 5, 0, // Skip to: 1990
/* 1985 */    MCD::OPC_Decode, 145, 8, 167, 1, // Opcode: QVFNMADD
/* 1990 */    MCD::OPC_Fail,
  0
};

static bool checkDecoderPredicate(unsigned Idx, const FeatureBitset& Bits) {
  llvm_unreachable("Invalid index!");
}

template<typename InsnType>
static DecodeStatus decodeToMCInst(DecodeStatus S, unsigned Idx, InsnType insn, MCInst &MI,
                                   uint64_t Address, const void *Decoder, bool &DecodeComplete) {
  DecodeComplete = true;
  InsnType tmp;
  switch (Idx) {
  default: llvm_unreachable("Invalid index!");
  case 0:
    return S;
  case 1:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (decodeUImmOperand<5>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 16);
    if (decodeSImmOperand<16>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 2:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (decodeUImmOperand<5>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 16);
    if (decodeSImmOperand<16>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 3:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeVRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeVRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeVRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 4:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeVRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeVRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 5:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeVRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeVRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeVRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 9, 1);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 6:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeVRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeVRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 7:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeVRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeVRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 9, 1);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 8:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeVRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 9:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeVRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeVRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 15, 1);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 11, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 10:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeVRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 11:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeVRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 12:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeVRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeVRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeVRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeVRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 13:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeVRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (decodeUImmOperand<5>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeVRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 14:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeVRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (decodeSImmOperand<5>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 15:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeVRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeVRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 16:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeVRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 17:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeVRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeVRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeVRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeVRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 18:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeVRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeVRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeVRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 4);
    if (decodeUImmOperand<5>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 19:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeVRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeVRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeVRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeVRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 20:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 16);
    if (decodeSImmOperand<16>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 21:
    tmp = fieldFromInstruction(insn, 23, 3);
    if (DecodeCRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 16);
    if (decodeUImmOperand<16>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 22:
    tmp = fieldFromInstruction(insn, 23, 3);
    if (DecodeCRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 16);
    if (decodeUImmOperand<16>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 23:
    tmp = fieldFromInstruction(insn, 23, 3);
    if (DecodeCRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 16);
    if (decodeSImmOperand<16>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 24:
    tmp = fieldFromInstruction(insn, 23, 3);
    if (DecodeCRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 16);
    if (decodeSImmOperand<16>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 25:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 16);
    if (decodeSImmOperand<16>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 26:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPRC_NOR0RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 16);
    if (decodeSImmOperand<16>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 27:
    tmp = fieldFromInstruction(insn, 2, 14);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 28:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (decodeUImmOperand<5>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCRBITRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 2, 14);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 29:
    tmp = fieldFromInstruction(insn, 5, 7);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 30:
    tmp = fieldFromInstruction(insn, 2, 24);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 31:
    tmp = fieldFromInstruction(insn, 23, 3);
    if (DecodeCRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 18, 3);
    if (DecodeCRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 32:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (decodeUImmOperand<5>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCRBITRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 2);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 33:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeCRBITRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCRBITRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeCRBITRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 34:
    tmp = fieldFromInstruction(insn, 11, 1);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 35:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (decodeUImmOperand<5>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (decodeUImmOperand<5>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 1, 5);
    if (decodeUImmOperand<5>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 36:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (decodeUImmOperand<5>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (decodeUImmOperand<5>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 1, 5);
    if (decodeUImmOperand<5>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 37:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (decodeUImmOperand<5>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 1, 5);
    if (decodeUImmOperand<5>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 38:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 16);
    if (decodeUImmOperand<16>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 39:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 1, 1) << 5;
    tmp |= fieldFromInstruction(insn, 11, 5) << 0;
    if (decodeUImmOperand<6>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 5, 1) << 5;
    tmp |= fieldFromInstruction(insn, 6, 5) << 0;
    if (decodeUImmOperand<6>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 40:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 1, 1) << 5;
    tmp |= fieldFromInstruction(insn, 11, 5) << 0;
    if (decodeUImmOperand<6>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 5, 1) << 5;
    tmp |= fieldFromInstruction(insn, 6, 5) << 0;
    if (decodeUImmOperand<6>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 41:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 5, 1) << 5;
    tmp |= fieldFromInstruction(insn, 6, 5) << 0;
    if (decodeUImmOperand<6>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 42:
    tmp = fieldFromInstruction(insn, 23, 3);
    if (DecodeCRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 43:
    tmp = fieldFromInstruction(insn, 23, 3);
    if (DecodeCRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 44:
    tmp = fieldFromInstruction(insn, 23, 3);
    if (DecodeCRBITRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 1);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 45:
    tmp = fieldFromInstruction(insn, 23, 3);
    if (DecodeCRBITRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 46:
    tmp = fieldFromInstruction(insn, 23, 3);
    if (DecodeCRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 47:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 48:
    tmp = fieldFromInstruction(insn, 15, 1);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 49:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 11, 5) << 5;
    tmp |= fieldFromInstruction(insn, 16, 5) << 0;
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 50:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (decodeUImmOperand<5>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 51:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (decodeUImmOperand<5>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 52:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeVRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePointerLikeRegClass1(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodePointerLikeRegClass0(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 53:
    tmp = fieldFromInstruction(insn, 21, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePointerLikeRegClass1(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodePointerLikeRegClass0(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 54:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 55:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (decodeUImmOperand<5>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 56:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (decodeUImmOperand<5>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 57:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 1);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 58:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 59:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 60:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 61:
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 1) << 5;
    tmp |= fieldFromInstruction(insn, 21, 5) << 0;
    if (DecodeVSFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePointerLikeRegClass1(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodePointerLikeRegClass0(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 62:
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 1) << 5;
    tmp |= fieldFromInstruction(insn, 21, 5) << 0;
    if (DecodeVSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePointerLikeRegClass1(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodePointerLikeRegClass0(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 63:
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 1) << 5;
    tmp |= fieldFromInstruction(insn, 21, 5) << 0;
    if (DecodeVSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePointerLikeRegClass1(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 64:
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 1) << 5;
    tmp |= fieldFromInstruction(insn, 21, 5) << 0;
    if (DecodeVSSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePointerLikeRegClass1(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodePointerLikeRegClass0(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 65:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 10);
    if (decodeUImmOperand<10>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 66:
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 11, 5) << 5;
    tmp |= fieldFromInstruction(insn, 16, 5) << 0;
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 67:
    tmp = fieldFromInstruction(insn, 21, 1);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 68:
    tmp = fieldFromInstruction(insn, 25, 1);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 69:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeCRRC0RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 70:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeCRRC0RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (decodeUImmOperand<5>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 71:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 72:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPRC_NOR0RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeCRBITRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 73:
    tmp = fieldFromInstruction(insn, 12, 8);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 74:
    tmp = fieldFromInstruction(insn, 12, 8);
    if (decodeCRBitMOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 75:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 12, 8);
    if (decodeCRBitMOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 76:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 1) << 5;
    tmp |= fieldFromInstruction(insn, 21, 5) << 0;
    if (DecodeVSFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 77:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 1) << 5;
    tmp |= fieldFromInstruction(insn, 21, 5) << 0;
    if (DecodeVSFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 78:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 1);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 79:
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 1) << 5;
    tmp |= fieldFromInstruction(insn, 21, 5) << 0;
    if (DecodeVSFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 80:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 81:
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 1) << 5;
    tmp |= fieldFromInstruction(insn, 21, 5) << 0;
    if (DecodeVSFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 82:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 83:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 84:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 1) << 5;
    tmp |= fieldFromInstruction(insn, 21, 5) << 0;
    if (DecodeVSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 85:
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 1) << 5;
    tmp |= fieldFromInstruction(insn, 21, 5) << 0;
    if (DecodeVSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 86:
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 1) << 5;
    tmp |= fieldFromInstruction(insn, 21, 5) << 0;
    if (DecodeVSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 87:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 1);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 88:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePointerLikeRegClass1(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodePointerLikeRegClass0(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 89:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePointerLikeRegClass1(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodePointerLikeRegClass0(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 90:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePointerLikeRegClass1(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePointerLikeRegClass1(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodePointerLikeRegClass0(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 91:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePointerLikeRegClass1(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePointerLikeRegClass1(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodePointerLikeRegClass0(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 92:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePointerLikeRegClass1(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodePointerLikeRegClass0(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 93:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePointerLikeRegClass1(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePointerLikeRegClass1(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodePointerLikeRegClass0(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 94:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (decodeUImmOperand<5>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePointerLikeRegClass1(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodePointerLikeRegClass0(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 95:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePointerLikeRegClass1(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePointerLikeRegClass1(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodePointerLikeRegClass0(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 96:
    tmp = fieldFromInstruction(insn, 21, 2);
    if (decodeUImmOperand<5>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 97:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeF4RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePointerLikeRegClass1(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodePointerLikeRegClass0(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 98:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeF4RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePointerLikeRegClass1(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePointerLikeRegClass1(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodePointerLikeRegClass0(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 99:
    tmp = fieldFromInstruction(insn, 21, 2);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 100:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeF8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePointerLikeRegClass1(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodePointerLikeRegClass0(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 101:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeF8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePointerLikeRegClass1(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePointerLikeRegClass1(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodePointerLikeRegClass0(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 102:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePointerLikeRegClass1(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeF4RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePointerLikeRegClass1(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodePointerLikeRegClass0(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 103:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePointerLikeRegClass1(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeF8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePointerLikeRegClass1(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodePointerLikeRegClass0(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 104:
    tmp = fieldFromInstruction(insn, 21, 2);
    if (decodeUImmOperand<5>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 105:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (decodeUImmOperand<5>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 106:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 107:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (decodeUImmOperand<5>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 108:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 109:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 110:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 111:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 1, 1) << 5;
    tmp |= fieldFromInstruction(insn, 11, 5) << 0;
    if (decodeUImmOperand<6>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 112:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 113:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 21);
    if (decodeMemRIOperands(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 114:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeF4RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 21);
    if (decodeMemRIOperands(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 115:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeF8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 21);
    if (decodeMemRIOperands(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 116:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeVFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 2, 19);
    if (decodeMemRIXOperands(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 117:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 2, 19);
    if (decodeMemRIXOperands(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 118:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeF4RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeF8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 119:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeF4RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeF4RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeF4RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 120:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeF4RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeF4RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 121:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeF4RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeF4RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeF4RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 122:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeF4RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeF4RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeF4RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeF4RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 123:
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 1) << 5;
    tmp |= fieldFromInstruction(insn, 21, 5) << 0;
    if (DecodeVSSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 2, 1) << 5;
    tmp |= fieldFromInstruction(insn, 16, 5) << 0;
    if (DecodeVSSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 1, 1) << 5;
    tmp |= fieldFromInstruction(insn, 11, 5) << 0;
    if (DecodeVSSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 124:
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 1) << 5;
    tmp |= fieldFromInstruction(insn, 21, 5) << 0;
    if (DecodeVSSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 1) << 5;
    tmp |= fieldFromInstruction(insn, 21, 5) << 0;
    if (DecodeVSSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 2, 1) << 5;
    tmp |= fieldFromInstruction(insn, 16, 5) << 0;
    if (DecodeVSSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 1, 1) << 5;
    tmp |= fieldFromInstruction(insn, 11, 5) << 0;
    if (DecodeVSSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 125:
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 1) << 5;
    tmp |= fieldFromInstruction(insn, 21, 5) << 0;
    if (DecodeVSFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 2, 1) << 5;
    tmp |= fieldFromInstruction(insn, 16, 5) << 0;
    if (DecodeVSFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 1, 1) << 5;
    tmp |= fieldFromInstruction(insn, 11, 5) << 0;
    if (DecodeVSFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 126:
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 1) << 5;
    tmp |= fieldFromInstruction(insn, 21, 5) << 0;
    if (DecodeVSFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 1) << 5;
    tmp |= fieldFromInstruction(insn, 21, 5) << 0;
    if (DecodeVSFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 2, 1) << 5;
    tmp |= fieldFromInstruction(insn, 16, 5) << 0;
    if (DecodeVSFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 1, 1) << 5;
    tmp |= fieldFromInstruction(insn, 11, 5) << 0;
    if (DecodeVSFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 127:
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 1) << 5;
    tmp |= fieldFromInstruction(insn, 21, 5) << 0;
    if (DecodeVSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 2, 1) << 5;
    tmp |= fieldFromInstruction(insn, 16, 5) << 0;
    if (DecodeVSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 1, 1) << 5;
    tmp |= fieldFromInstruction(insn, 11, 5) << 0;
    if (DecodeVSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 128:
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 1) << 5;
    tmp |= fieldFromInstruction(insn, 21, 5) << 0;
    if (DecodeVSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 1) << 5;
    tmp |= fieldFromInstruction(insn, 21, 5) << 0;
    if (DecodeVSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 2, 1) << 5;
    tmp |= fieldFromInstruction(insn, 16, 5) << 0;
    if (DecodeVSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 1, 1) << 5;
    tmp |= fieldFromInstruction(insn, 11, 5) << 0;
    if (DecodeVSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 129:
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 1) << 5;
    tmp |= fieldFromInstruction(insn, 21, 5) << 0;
    if (DecodeVSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 2, 1) << 5;
    tmp |= fieldFromInstruction(insn, 16, 5) << 0;
    if (DecodeVSFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 1, 1) << 5;
    tmp |= fieldFromInstruction(insn, 11, 5) << 0;
    if (DecodeVSFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 130:
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 1) << 5;
    tmp |= fieldFromInstruction(insn, 21, 5) << 0;
    if (DecodeVSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 2, 1) << 5;
    tmp |= fieldFromInstruction(insn, 16, 5) << 0;
    if (DecodeVSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 1, 1) << 5;
    tmp |= fieldFromInstruction(insn, 11, 5) << 0;
    if (DecodeVSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 8, 2);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 131:
    tmp = fieldFromInstruction(insn, 23, 3);
    if (DecodeCRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 2, 1) << 5;
    tmp |= fieldFromInstruction(insn, 16, 5) << 0;
    if (DecodeVSFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 1, 1) << 5;
    tmp |= fieldFromInstruction(insn, 11, 5) << 0;
    if (DecodeVSFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 132:
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 1) << 5;
    tmp |= fieldFromInstruction(insn, 21, 5) << 0;
    if (DecodeVSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 1, 1) << 5;
    tmp |= fieldFromInstruction(insn, 11, 5) << 0;
    if (DecodeVSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 2);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 133:
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 1) << 5;
    tmp |= fieldFromInstruction(insn, 21, 5) << 0;
    if (DecodeVSFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 1, 1) << 5;
    tmp |= fieldFromInstruction(insn, 11, 5) << 0;
    if (DecodeVSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 134:
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 1) << 5;
    tmp |= fieldFromInstruction(insn, 21, 5) << 0;
    if (DecodeVSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 8);
    if (decodeUImmOperand<8>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 135:
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 1) << 5;
    tmp |= fieldFromInstruction(insn, 21, 5) << 0;
    if (DecodeVSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 1) << 5;
    tmp |= fieldFromInstruction(insn, 21, 5) << 0;
    if (DecodeVSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 1, 1) << 5;
    tmp |= fieldFromInstruction(insn, 11, 5) << 0;
    if (DecodeVSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 136:
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 1) << 5;
    tmp |= fieldFromInstruction(insn, 21, 5) << 0;
    if (DecodeVSSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 1, 1) << 5;
    tmp |= fieldFromInstruction(insn, 11, 5) << 0;
    if (DecodeVSSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 137:
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 1) << 5;
    tmp |= fieldFromInstruction(insn, 21, 5) << 0;
    if (DecodeVSFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 1, 1) << 5;
    tmp |= fieldFromInstruction(insn, 11, 5) << 0;
    if (DecodeVSFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 138:
    tmp = fieldFromInstruction(insn, 23, 3);
    if (DecodeCRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 1, 1) << 5;
    tmp |= fieldFromInstruction(insn, 11, 5) << 0;
    if (DecodeVSFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 139:
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 1) << 5;
    tmp |= fieldFromInstruction(insn, 21, 5) << 0;
    if (DecodeVSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 1, 1) << 5;
    tmp |= fieldFromInstruction(insn, 11, 5) << 0;
    if (DecodeVSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 140:
    tmp = fieldFromInstruction(insn, 23, 3);
    if (DecodeCRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 1, 1) << 5;
    tmp |= fieldFromInstruction(insn, 11, 5) << 0;
    if (DecodeVSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 141:
    tmp = fieldFromInstruction(insn, 23, 3);
    if (DecodeCRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 2, 1) << 5;
    tmp |= fieldFromInstruction(insn, 16, 5) << 0;
    if (DecodeVSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 1, 1) << 5;
    tmp |= fieldFromInstruction(insn, 11, 5) << 0;
    if (DecodeVSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 142:
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 1) << 5;
    tmp |= fieldFromInstruction(insn, 21, 5) << 0;
    if (DecodeVSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 1, 1) << 5;
    tmp |= fieldFromInstruction(insn, 11, 5) << 0;
    if (DecodeVSSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 143:
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 1) << 5;
    tmp |= fieldFromInstruction(insn, 21, 5) << 0;
    if (DecodeVSSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 1, 1) << 5;
    tmp |= fieldFromInstruction(insn, 11, 5) << 0;
    if (DecodeVSFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 144:
    tmp = fieldFromInstruction(insn, 23, 3);
    if (DecodeCRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 7);
    if (decodeUImmOperand<7>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 1, 1) << 5;
    tmp |= fieldFromInstruction(insn, 11, 5) << 0;
    if (DecodeVSFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 145:
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 1) << 5;
    tmp |= fieldFromInstruction(insn, 21, 5) << 0;
    if (DecodeVSSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 1, 1) << 5;
    tmp |= fieldFromInstruction(insn, 11, 5) << 0;
    if (DecodeVSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 146:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 1, 1) << 5;
    tmp |= fieldFromInstruction(insn, 11, 5) << 0;
    if (DecodeVSFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 147:
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 1) << 5;
    tmp |= fieldFromInstruction(insn, 21, 5) << 0;
    if (DecodeVSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 2, 1) << 6;
    tmp |= fieldFromInstruction(insn, 6, 1) << 5;
    tmp |= fieldFromInstruction(insn, 16, 5) << 0;
    if (decodeUImmOperand<7>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 1, 1) << 5;
    tmp |= fieldFromInstruction(insn, 11, 5) << 0;
    if (DecodeVSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 148:
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 1) << 5;
    tmp |= fieldFromInstruction(insn, 21, 5) << 0;
    if (DecodeVSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 2, 1) << 5;
    tmp |= fieldFromInstruction(insn, 16, 5) << 0;
    if (DecodeVSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 1, 1) << 5;
    tmp |= fieldFromInstruction(insn, 11, 5) << 0;
    if (DecodeVSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 3, 1) << 5;
    tmp |= fieldFromInstruction(insn, 6, 5) << 0;
    if (DecodeVSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 149:
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 3, 1) << 5;
    tmp |= fieldFromInstruction(insn, 21, 5) << 0;
    if (DecodeVSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 4, 17);
    if (decodeMemRIX16Operands(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 150:
    tmp = fieldFromInstruction(insn, 23, 3);
    if (DecodeCRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeF4RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeF4RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 151:
    tmp = fieldFromInstruction(insn, 23, 3);
    if (DecodeCRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeF8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeF8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 152:
    tmp = fieldFromInstruction(insn, 23, 3);
    if (DecodeCRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeF8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 153:
    tmp = fieldFromInstruction(insn, 23, 3);
    if (DecodeCRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeVRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeVRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 154:
    tmp = fieldFromInstruction(insn, 23, 3);
    if (DecodeCRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 7);
    if (decodeUImmOperand<7>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeVRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 155:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeVRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeVFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 156:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeVRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeVRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeVSFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 157:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeVRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeVRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 9, 2);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 158:
    tmp = fieldFromInstruction(insn, 23, 3);
    if (DecodeCRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 12, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 16, 1);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 159:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeF8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 160:
    tmp = fieldFromInstruction(insn, 17, 8);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeF8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 25, 1);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 16, 1);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 161:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeF8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeF8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 162:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeF8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeF8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeF8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 163:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeF4RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeF8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeF4RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeF4RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 164:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeF8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeF8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeF8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 165:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeF8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeF8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeF8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeF8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 166:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeQBRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeQFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeQFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 167:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeQFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeQFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeQFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeQFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 168:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeQBRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeQBRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeQBRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 7, 4);
    if (decodeUImmOperand<12>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 169:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeQFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeQFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeQFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 9, 2);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 170:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeQFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeQFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 9, 2);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 171:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeQFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 9, 12);
    if (decodeUImmOperand<12>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 172:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeQFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePointerLikeRegClass1(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodePointerLikeRegClass0(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 173:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeQSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePointerLikeRegClass1(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePointerLikeRegClass1(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodePointerLikeRegClass0(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 174:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeQFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePointerLikeRegClass1(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePointerLikeRegClass1(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodePointerLikeRegClass0(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 175:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePointerLikeRegClass1(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeQSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePointerLikeRegClass1(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodePointerLikeRegClass0(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 176:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePointerLikeRegClass1(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeQFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePointerLikeRegClass1(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodePointerLikeRegClass0(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 177:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeQFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeQFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeQFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 178:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeQFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeQFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 179:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeQSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeQFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 180:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeQFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeQFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeQFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 181:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeQSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeQSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeQSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 182:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeQFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeQBRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeQFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeQFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 183:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeQSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeQSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeQSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 184:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeQSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeQSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeQSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeQSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  }
}

template<typename InsnType>
static DecodeStatus decodeInstruction(const uint8_t DecodeTable[], MCInst &MI,
                                      InsnType insn, uint64_t Address,
                                      const void *DisAsm,
                                      const MCSubtargetInfo &STI) {
  const FeatureBitset& Bits = STI.getFeatureBits();

  const uint8_t *Ptr = DecodeTable;
  uint32_t CurFieldValue = 0;
  DecodeStatus S = MCDisassembler::Success;
  while (true) {
    ptrdiff_t Loc = Ptr - DecodeTable;
    switch (*Ptr) {
    default:
      errs() << Loc << ": Unexpected decode table opcode!\n";
      return MCDisassembler::Fail;
    case MCD::OPC_ExtractField: {
      unsigned Start = *++Ptr;
      unsigned Len = *++Ptr;
      ++Ptr;
      CurFieldValue = fieldFromInstruction(insn, Start, Len);
      DEBUG(dbgs() << Loc << ": OPC_ExtractField(" << Start << ", "
                   << Len << "): " << CurFieldValue << "\n");
      break;
    }
    case MCD::OPC_FilterValue: {
      // Decode the field value.
      unsigned Len;
      InsnType Val = decodeULEB128(++Ptr, &Len);
      Ptr += Len;
      // NumToSkip is a plain 16-bit integer.
      unsigned NumToSkip = *Ptr++;
      NumToSkip |= (*Ptr++) << 8;

      // Perform the filter operation.
      if (Val != CurFieldValue)
        Ptr += NumToSkip;
      DEBUG(dbgs() << Loc << ": OPC_FilterValue(" << Val << ", " << NumToSkip
                   << "): " << ((Val != CurFieldValue) ? "FAIL:" : "PASS:")
                   << " continuing at " << (Ptr - DecodeTable) << "\n");

      break;
    }
    case MCD::OPC_CheckField: {
      unsigned Start = *++Ptr;
      unsigned Len = *++Ptr;
      InsnType FieldValue = fieldFromInstruction(insn, Start, Len);
      // Decode the field value.
      uint32_t ExpectedValue = decodeULEB128(++Ptr, &Len);
      Ptr += Len;
      // NumToSkip is a plain 16-bit integer.
      unsigned NumToSkip = *Ptr++;
      NumToSkip |= (*Ptr++) << 8;

      // If the actual and expected values don't match, skip.
      if (ExpectedValue != FieldValue)
        Ptr += NumToSkip;
      DEBUG(dbgs() << Loc << ": OPC_CheckField(" << Start << ", "
                   << Len << ", " << ExpectedValue << ", " << NumToSkip
                   << "): FieldValue = " << FieldValue << ", ExpectedValue = "
                   << ExpectedValue << ": "
                   << ((ExpectedValue == FieldValue) ? "PASS\n" : "FAIL\n"));
      break;
    }
    case MCD::OPC_CheckPredicate: {
      unsigned Len;
      // Decode the Predicate Index value.
      unsigned PIdx = decodeULEB128(++Ptr, &Len);
      Ptr += Len;
      // NumToSkip is a plain 16-bit integer.
      unsigned NumToSkip = *Ptr++;
      NumToSkip |= (*Ptr++) << 8;
      // Check the predicate.
      bool Pred;
      if (!(Pred = checkDecoderPredicate(PIdx, Bits)))
        Ptr += NumToSkip;
      (void)Pred;
      DEBUG(dbgs() << Loc << ": OPC_CheckPredicate(" << PIdx << "): "
            << (Pred ? "PASS\n" : "FAIL\n"));

      break;
    }
    case MCD::OPC_Decode: {
      unsigned Len;
      // Decode the Opcode value.
      unsigned Opc = decodeULEB128(++Ptr, &Len);
      Ptr += Len;
      unsigned DecodeIdx = decodeULEB128(Ptr, &Len);
      Ptr += Len;

      MI.clear();
      MI.setOpcode(Opc);
      bool DecodeComplete;
      S = decodeToMCInst(S, DecodeIdx, insn, MI, Address, DisAsm, DecodeComplete);
      assert(DecodeComplete);

      DEBUG(dbgs() << Loc << ": OPC_Decode: opcode " << Opc
                   << ", using decoder " << DecodeIdx << ": "
                   << (S != MCDisassembler::Fail ? "PASS" : "FAIL") << "\n");
      return S;
    }
    case MCD::OPC_TryDecode: {
      unsigned Len;
      // Decode the Opcode value.
      unsigned Opc = decodeULEB128(++Ptr, &Len);
      Ptr += Len;
      unsigned DecodeIdx = decodeULEB128(Ptr, &Len);
      Ptr += Len;
      // NumToSkip is a plain 16-bit integer.
      unsigned NumToSkip = *Ptr++;
      NumToSkip |= (*Ptr++) << 8;

      // Perform the decode operation.
      MCInst TmpMI;
      TmpMI.setOpcode(Opc);
      bool DecodeComplete;
      S = decodeToMCInst(S, DecodeIdx, insn, TmpMI, Address, DisAsm, DecodeComplete);
      DEBUG(dbgs() << Loc << ": OPC_TryDecode: opcode " << Opc
                   << ", using decoder " << DecodeIdx << ": ");

      if (DecodeComplete) {
        // Decoding complete.
        DEBUG(dbgs() << (S != MCDisassembler::Fail ? "PASS" : "FAIL") << "\n");
        MI = TmpMI;
        return S;
      } else {
        assert(S == MCDisassembler::Fail);
        // If the decoding was incomplete, skip.
        Ptr += NumToSkip;
        DEBUG(dbgs() << "FAIL: continuing at " << (Ptr - DecodeTable) << "\n");
        // Reset decode status. This also drops a SoftFail status that could be
        // set before the decode attempt.
        S = MCDisassembler::Success;
      }
      break;
    }
    case MCD::OPC_SoftFail: {
      // Decode the mask values.
      unsigned Len;
      InsnType PositiveMask = decodeULEB128(++Ptr, &Len);
      Ptr += Len;
      InsnType NegativeMask = decodeULEB128(Ptr, &Len);
      Ptr += Len;
      bool Fail = (insn & PositiveMask) || (~insn & NegativeMask);
      if (Fail)
        S = MCDisassembler::SoftFail;
      DEBUG(dbgs() << Loc << ": OPC_SoftFail: " << (Fail ? "FAIL\n":"PASS\n"));
      break;
    }
    case MCD::OPC_Fail: {
      DEBUG(dbgs() << Loc << ": OPC_Fail\n");
      return MCDisassembler::Fail;
    }
    }
  }
  llvm_unreachable("bogosity detected in disassembler state machine!");
}


} // End llvm namespace
