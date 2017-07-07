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
/* 7 */       MCD::OPC_CheckField, 1, 10, 128, 2, 23, 54, // Skip to: 13861
/* 14 */      MCD::OPC_Decode, 210, 1, 0, // Opcode: ATTN
/* 18 */      MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 26
/* 22 */      MCD::OPC_Decode, 242, 10, 1, // Opcode: TDI
/* 26 */      MCD::OPC_FilterValue, 3, 4, 0, // Skip to: 34
/* 30 */      MCD::OPC_Decode, 135, 11, 2, // Opcode: TWI
/* 34 */      MCD::OPC_FilterValue, 4, 146, 10, // Skip to: 2744
/* 38 */      MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 41 */      MCD::OPC_FilterValue, 0, 211, 0, // Skip to: 256
/* 45 */      MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 48 */      MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 56
/* 52 */      MCD::OPC_Decode, 149, 11, 3, // Opcode: VADDUBM
/* 56 */      MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 64
/* 60 */      MCD::OPC_Decode, 152, 11, 3, // Opcode: VADDUHM
/* 64 */      MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 72
/* 68 */      MCD::OPC_Decode, 155, 11, 3, // Opcode: VADDUWM
/* 72 */      MCD::OPC_FilterValue, 3, 4, 0, // Skip to: 80
/* 76 */      MCD::OPC_Decode, 151, 11, 3, // Opcode: VADDUDM
/* 80 */      MCD::OPC_FilterValue, 4, 4, 0, // Skip to: 88
/* 84 */      MCD::OPC_Decode, 154, 11, 3, // Opcode: VADDUQM
/* 88 */      MCD::OPC_FilterValue, 5, 4, 0, // Skip to: 96
/* 92 */      MCD::OPC_Decode, 141, 11, 3, // Opcode: VADDCUQ
/* 96 */      MCD::OPC_FilterValue, 6, 4, 0, // Skip to: 104
/* 100 */     MCD::OPC_Decode, 142, 11, 3, // Opcode: VADDCUW
/* 104 */     MCD::OPC_FilterValue, 8, 4, 0, // Skip to: 112
/* 108 */     MCD::OPC_Decode, 150, 11, 3, // Opcode: VADDUBS
/* 112 */     MCD::OPC_FilterValue, 9, 4, 0, // Skip to: 120
/* 116 */     MCD::OPC_Decode, 153, 11, 3, // Opcode: VADDUHS
/* 120 */     MCD::OPC_FilterValue, 10, 4, 0, // Skip to: 128
/* 124 */     MCD::OPC_Decode, 156, 11, 3, // Opcode: VADDUWS
/* 128 */     MCD::OPC_FilterValue, 12, 4, 0, // Skip to: 136
/* 132 */     MCD::OPC_Decode, 146, 11, 3, // Opcode: VADDSBS
/* 136 */     MCD::OPC_FilterValue, 13, 4, 0, // Skip to: 144
/* 140 */     MCD::OPC_Decode, 147, 11, 3, // Opcode: VADDSHS
/* 144 */     MCD::OPC_FilterValue, 14, 4, 0, // Skip to: 152
/* 148 */     MCD::OPC_Decode, 148, 11, 3, // Opcode: VADDSWS
/* 152 */     MCD::OPC_FilterValue, 16, 4, 0, // Skip to: 160
/* 156 */     MCD::OPC_Decode, 145, 13, 3, // Opcode: VSUBUBM
/* 160 */     MCD::OPC_FilterValue, 17, 4, 0, // Skip to: 168
/* 164 */     MCD::OPC_Decode, 148, 13, 3, // Opcode: VSUBUHM
/* 168 */     MCD::OPC_FilterValue, 18, 4, 0, // Skip to: 176
/* 172 */     MCD::OPC_Decode, 151, 13, 3, // Opcode: VSUBUWM
/* 176 */     MCD::OPC_FilterValue, 19, 4, 0, // Skip to: 184
/* 180 */     MCD::OPC_Decode, 147, 13, 3, // Opcode: VSUBUDM
/* 184 */     MCD::OPC_FilterValue, 20, 4, 0, // Skip to: 192
/* 188 */     MCD::OPC_Decode, 150, 13, 3, // Opcode: VSUBUQM
/* 192 */     MCD::OPC_FilterValue, 21, 4, 0, // Skip to: 200
/* 196 */     MCD::OPC_Decode, 137, 13, 3, // Opcode: VSUBCUQ
/* 200 */     MCD::OPC_FilterValue, 22, 4, 0, // Skip to: 208
/* 204 */     MCD::OPC_Decode, 138, 13, 3, // Opcode: VSUBCUW
/* 208 */     MCD::OPC_FilterValue, 24, 4, 0, // Skip to: 216
/* 212 */     MCD::OPC_Decode, 146, 13, 3, // Opcode: VSUBUBS
/* 216 */     MCD::OPC_FilterValue, 25, 4, 0, // Skip to: 224
/* 220 */     MCD::OPC_Decode, 149, 13, 3, // Opcode: VSUBUHS
/* 224 */     MCD::OPC_FilterValue, 26, 4, 0, // Skip to: 232
/* 228 */     MCD::OPC_Decode, 152, 13, 3, // Opcode: VSUBUWS
/* 232 */     MCD::OPC_FilterValue, 28, 4, 0, // Skip to: 240
/* 236 */     MCD::OPC_Decode, 142, 13, 3, // Opcode: VSUBSBS
/* 240 */     MCD::OPC_FilterValue, 29, 4, 0, // Skip to: 248
/* 244 */     MCD::OPC_Decode, 143, 13, 3, // Opcode: VSUBSHS
/* 248 */     MCD::OPC_FilterValue, 30, 41, 53, // Skip to: 13861
/* 252 */     MCD::OPC_Decode, 144, 13, 3, // Opcode: VSUBSWS
/* 256 */     MCD::OPC_FilterValue, 1, 233, 0, // Skip to: 493
/* 260 */     MCD::OPC_ExtractField, 6, 3,  // Inst{8-6} ...
/* 263 */     MCD::OPC_FilterValue, 0, 19, 0, // Skip to: 286
/* 267 */     MCD::OPC_ExtractField, 9, 7,  // Inst{15-9} ...
/* 270 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 278
/* 274 */     MCD::OPC_Decode, 167, 12, 4, // Opcode: VMUL10CUQ
/* 278 */     MCD::OPC_FilterValue, 1, 11, 53, // Skip to: 13861
/* 282 */     MCD::OPC_Decode, 170, 12, 4, // Opcode: VMUL10UQ
/* 286 */     MCD::OPC_FilterValue, 1, 19, 0, // Skip to: 309
/* 290 */     MCD::OPC_ExtractField, 9, 2,  // Inst{10-9} ...
/* 293 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 301
/* 297 */     MCD::OPC_Decode, 168, 12, 3, // Opcode: VMUL10ECUQ
/* 301 */     MCD::OPC_FilterValue, 1, 244, 52, // Skip to: 13861
/* 305 */     MCD::OPC_Decode, 169, 12, 3, // Opcode: VMUL10EUQ
/* 309 */     MCD::OPC_FilterValue, 2, 10, 0, // Skip to: 323
/* 313 */     MCD::OPC_CheckField, 9, 2, 2, 230, 52, // Skip to: 13861
/* 319 */     MCD::OPC_Decode, 243, 1, 3, // Opcode: BCDUSo
/* 323 */     MCD::OPC_FilterValue, 3, 10, 0, // Skip to: 337
/* 327 */     MCD::OPC_CheckField, 10, 1, 1, 216, 52, // Skip to: 13861
/* 333 */     MCD::OPC_Decode, 241, 1, 5, // Opcode: BCDSo
/* 337 */     MCD::OPC_FilterValue, 4, 10, 0, // Skip to: 351
/* 341 */     MCD::OPC_CheckField, 10, 1, 1, 202, 52, // Skip to: 13861
/* 347 */     MCD::OPC_Decode, 242, 1, 5, // Opcode: BCDTRUNCo
/* 351 */     MCD::OPC_FilterValue, 5, 19, 0, // Skip to: 374
/* 355 */     MCD::OPC_ExtractField, 9, 2,  // Inst{10-9} ...
/* 358 */     MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 366
/* 362 */     MCD::OPC_Decode, 235, 1, 3, // Opcode: BCDCPSGNo
/* 366 */     MCD::OPC_FilterValue, 2, 179, 52, // Skip to: 13861
/* 370 */     MCD::OPC_Decode, 244, 1, 3, // Opcode: BCDUTRUNCo
/* 374 */     MCD::OPC_FilterValue, 6, 101, 0, // Skip to: 479
/* 378 */     MCD::OPC_ExtractField, 16, 5,  // Inst{20-16} ...
/* 381 */     MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 395
/* 385 */     MCD::OPC_CheckField, 9, 2, 2, 158, 52, // Skip to: 13861
/* 391 */     MCD::OPC_Decode, 237, 1, 6, // Opcode: BCDCTSQo
/* 395 */     MCD::OPC_FilterValue, 2, 10, 0, // Skip to: 409
/* 399 */     MCD::OPC_CheckField, 10, 1, 1, 144, 52, // Skip to: 13861
/* 405 */     MCD::OPC_Decode, 233, 1, 7, // Opcode: BCDCFSQo
/* 409 */     MCD::OPC_FilterValue, 4, 10, 0, // Skip to: 423
/* 413 */     MCD::OPC_CheckField, 10, 1, 1, 130, 52, // Skip to: 13861
/* 419 */     MCD::OPC_Decode, 238, 1, 7, // Opcode: BCDCTZo
/* 423 */     MCD::OPC_FilterValue, 5, 10, 0, // Skip to: 437
/* 427 */     MCD::OPC_CheckField, 9, 2, 2, 116, 52, // Skip to: 13861
/* 433 */     MCD::OPC_Decode, 236, 1, 6, // Opcode: BCDCTNo
/* 437 */     MCD::OPC_FilterValue, 6, 10, 0, // Skip to: 451
/* 441 */     MCD::OPC_CheckField, 10, 1, 1, 102, 52, // Skip to: 13861
/* 447 */     MCD::OPC_Decode, 234, 1, 7, // Opcode: BCDCFZo
/* 451 */     MCD::OPC_FilterValue, 7, 10, 0, // Skip to: 465
/* 455 */     MCD::OPC_CheckField, 10, 1, 1, 88, 52, // Skip to: 13861
/* 461 */     MCD::OPC_Decode, 232, 1, 7, // Opcode: BCDCFNo
/* 465 */     MCD::OPC_FilterValue, 31, 80, 52, // Skip to: 13861
/* 469 */     MCD::OPC_CheckField, 10, 1, 1, 74, 52, // Skip to: 13861
/* 475 */     MCD::OPC_Decode, 239, 1, 7, // Opcode: BCDSETSGNo
/* 479 */     MCD::OPC_FilterValue, 7, 66, 52, // Skip to: 13861
/* 483 */     MCD::OPC_CheckField, 10, 1, 1, 60, 52, // Skip to: 13861
/* 489 */     MCD::OPC_Decode, 240, 1, 5, // Opcode: BCDSRo
/* 493 */     MCD::OPC_FilterValue, 2, 130, 1, // Skip to: 883
/* 497 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 500 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 508
/* 504 */     MCD::OPC_Decode, 137, 12, 3, // Opcode: VMAXUB
/* 508 */     MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 516
/* 512 */     MCD::OPC_Decode, 139, 12, 3, // Opcode: VMAXUH
/* 516 */     MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 524
/* 520 */     MCD::OPC_Decode, 140, 12, 3, // Opcode: VMAXUW
/* 524 */     MCD::OPC_FilterValue, 3, 4, 0, // Skip to: 532
/* 528 */     MCD::OPC_Decode, 138, 12, 3, // Opcode: VMAXUD
/* 532 */     MCD::OPC_FilterValue, 4, 4, 0, // Skip to: 540
/* 536 */     MCD::OPC_Decode, 133, 12, 3, // Opcode: VMAXSB
/* 540 */     MCD::OPC_FilterValue, 5, 4, 0, // Skip to: 548
/* 544 */     MCD::OPC_Decode, 135, 12, 3, // Opcode: VMAXSH
/* 548 */     MCD::OPC_FilterValue, 6, 4, 0, // Skip to: 556
/* 552 */     MCD::OPC_Decode, 136, 12, 3, // Opcode: VMAXSW
/* 556 */     MCD::OPC_FilterValue, 7, 4, 0, // Skip to: 564
/* 560 */     MCD::OPC_Decode, 134, 12, 3, // Opcode: VMAXSD
/* 564 */     MCD::OPC_FilterValue, 8, 4, 0, // Skip to: 572
/* 568 */     MCD::OPC_Decode, 148, 12, 3, // Opcode: VMINUB
/* 572 */     MCD::OPC_FilterValue, 9, 4, 0, // Skip to: 580
/* 576 */     MCD::OPC_Decode, 150, 12, 3, // Opcode: VMINUH
/* 580 */     MCD::OPC_FilterValue, 10, 4, 0, // Skip to: 588
/* 584 */     MCD::OPC_Decode, 151, 12, 3, // Opcode: VMINUW
/* 588 */     MCD::OPC_FilterValue, 11, 4, 0, // Skip to: 596
/* 592 */     MCD::OPC_Decode, 149, 12, 3, // Opcode: VMINUD
/* 596 */     MCD::OPC_FilterValue, 12, 4, 0, // Skip to: 604
/* 600 */     MCD::OPC_Decode, 144, 12, 3, // Opcode: VMINSB
/* 604 */     MCD::OPC_FilterValue, 13, 4, 0, // Skip to: 612
/* 608 */     MCD::OPC_Decode, 146, 12, 3, // Opcode: VMINSH
/* 612 */     MCD::OPC_FilterValue, 14, 4, 0, // Skip to: 620
/* 616 */     MCD::OPC_Decode, 147, 12, 3, // Opcode: VMINSW
/* 620 */     MCD::OPC_FilterValue, 15, 4, 0, // Skip to: 628
/* 624 */     MCD::OPC_Decode, 145, 12, 3, // Opcode: VMINSD
/* 628 */     MCD::OPC_FilterValue, 16, 4, 0, // Skip to: 636
/* 632 */     MCD::OPC_Decode, 162, 11, 3, // Opcode: VAVGUB
/* 636 */     MCD::OPC_FilterValue, 17, 4, 0, // Skip to: 644
/* 640 */     MCD::OPC_Decode, 163, 11, 3, // Opcode: VAVGUH
/* 644 */     MCD::OPC_FilterValue, 18, 4, 0, // Skip to: 652
/* 648 */     MCD::OPC_Decode, 164, 11, 3, // Opcode: VAVGUW
/* 652 */     MCD::OPC_FilterValue, 20, 4, 0, // Skip to: 660
/* 656 */     MCD::OPC_Decode, 159, 11, 3, // Opcode: VAVGSB
/* 660 */     MCD::OPC_FilterValue, 21, 4, 0, // Skip to: 668
/* 664 */     MCD::OPC_Decode, 160, 11, 3, // Opcode: VAVGSH
/* 668 */     MCD::OPC_FilterValue, 22, 4, 0, // Skip to: 676
/* 672 */     MCD::OPC_Decode, 161, 11, 3, // Opcode: VAVGSW
/* 676 */     MCD::OPC_FilterValue, 24, 131, 0, // Skip to: 811
/* 680 */     MCD::OPC_ExtractField, 16, 5,  // Inst{20-16} ...
/* 683 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 691
/* 687 */     MCD::OPC_Decode, 176, 11, 8, // Opcode: VCLZLSBB
/* 691 */     MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 699
/* 695 */     MCD::OPC_Decode, 229, 11, 8, // Opcode: VCTZLSBB
/* 699 */     MCD::OPC_FilterValue, 6, 4, 0, // Skip to: 707
/* 703 */     MCD::OPC_Decode, 188, 12, 6, // Opcode: VNEGW
/* 707 */     MCD::OPC_FilterValue, 7, 4, 0, // Skip to: 715
/* 711 */     MCD::OPC_Decode, 187, 12, 6, // Opcode: VNEGD
/* 715 */     MCD::OPC_FilterValue, 8, 4, 0, // Skip to: 723
/* 719 */     MCD::OPC_Decode, 219, 12, 6, // Opcode: VPRTYBW
/* 723 */     MCD::OPC_FilterValue, 9, 4, 0, // Skip to: 731
/* 727 */     MCD::OPC_Decode, 217, 12, 6, // Opcode: VPRTYBD
/* 731 */     MCD::OPC_FilterValue, 10, 4, 0, // Skip to: 739
/* 735 */     MCD::OPC_Decode, 218, 12, 6, // Opcode: VPRTYBQ
/* 739 */     MCD::OPC_FilterValue, 16, 4, 0, // Skip to: 747
/* 743 */     MCD::OPC_Decode, 239, 11, 6, // Opcode: VEXTSB2W
/* 747 */     MCD::OPC_FilterValue, 17, 4, 0, // Skip to: 755
/* 751 */     MCD::OPC_Decode, 243, 11, 6, // Opcode: VEXTSH2W
/* 755 */     MCD::OPC_FilterValue, 24, 4, 0, // Skip to: 763
/* 759 */     MCD::OPC_Decode, 237, 11, 6, // Opcode: VEXTSB2D
/* 763 */     MCD::OPC_FilterValue, 25, 4, 0, // Skip to: 771
/* 767 */     MCD::OPC_Decode, 241, 11, 6, // Opcode: VEXTSH2D
/* 771 */     MCD::OPC_FilterValue, 26, 4, 0, // Skip to: 779
/* 775 */     MCD::OPC_Decode, 245, 11, 6, // Opcode: VEXTSW2D
/* 779 */     MCD::OPC_FilterValue, 28, 4, 0, // Skip to: 787
/* 783 */     MCD::OPC_Decode, 226, 11, 6, // Opcode: VCTZB
/* 787 */     MCD::OPC_FilterValue, 29, 4, 0, // Skip to: 795
/* 791 */     MCD::OPC_Decode, 228, 11, 6, // Opcode: VCTZH
/* 795 */     MCD::OPC_FilterValue, 30, 4, 0, // Skip to: 803
/* 799 */     MCD::OPC_Decode, 230, 11, 6, // Opcode: VCTZW
/* 803 */     MCD::OPC_FilterValue, 31, 254, 50, // Skip to: 13861
/* 807 */     MCD::OPC_Decode, 227, 11, 6, // Opcode: VCTZD
/* 811 */     MCD::OPC_FilterValue, 26, 4, 0, // Skip to: 819
/* 815 */     MCD::OPC_Decode, 237, 12, 9, // Opcode: VSHASIGMAW
/* 819 */     MCD::OPC_FilterValue, 27, 4, 0, // Skip to: 827
/* 823 */     MCD::OPC_Decode, 236, 12, 9, // Opcode: VSHASIGMAD
/* 827 */     MCD::OPC_FilterValue, 28, 10, 0, // Skip to: 841
/* 831 */     MCD::OPC_CheckField, 16, 5, 0, 224, 50, // Skip to: 13861
/* 837 */     MCD::OPC_Decode, 173, 11, 6, // Opcode: VCLZB
/* 841 */     MCD::OPC_FilterValue, 29, 10, 0, // Skip to: 855
/* 845 */     MCD::OPC_CheckField, 16, 5, 0, 210, 50, // Skip to: 13861
/* 851 */     MCD::OPC_Decode, 175, 11, 6, // Opcode: VCLZH
/* 855 */     MCD::OPC_FilterValue, 30, 10, 0, // Skip to: 869
/* 859 */     MCD::OPC_CheckField, 16, 5, 0, 196, 50, // Skip to: 13861
/* 865 */     MCD::OPC_Decode, 177, 11, 6, // Opcode: VCLZW
/* 869 */     MCD::OPC_FilterValue, 31, 188, 50, // Skip to: 13861
/* 873 */     MCD::OPC_CheckField, 16, 5, 0, 182, 50, // Skip to: 13861
/* 879 */     MCD::OPC_Decode, 174, 11, 6, // Opcode: VCLZD
/* 883 */     MCD::OPC_FilterValue, 3, 83, 0, // Skip to: 970
/* 887 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 890 */     MCD::OPC_FilterValue, 16, 4, 0, // Skip to: 898
/* 894 */     MCD::OPC_Decode, 138, 11, 3, // Opcode: VABSDUB
/* 898 */     MCD::OPC_FilterValue, 17, 4, 0, // Skip to: 906
/* 902 */     MCD::OPC_Decode, 139, 11, 3, // Opcode: VABSDUH
/* 906 */     MCD::OPC_FilterValue, 18, 4, 0, // Skip to: 914
/* 910 */     MCD::OPC_Decode, 140, 11, 3, // Opcode: VABSDUW
/* 914 */     MCD::OPC_FilterValue, 28, 10, 0, // Skip to: 928
/* 918 */     MCD::OPC_CheckField, 16, 5, 0, 137, 50, // Skip to: 13861
/* 924 */     MCD::OPC_Decode, 213, 12, 6, // Opcode: VPOPCNTB
/* 928 */     MCD::OPC_FilterValue, 29, 10, 0, // Skip to: 942
/* 932 */     MCD::OPC_CheckField, 16, 5, 0, 123, 50, // Skip to: 13861
/* 938 */     MCD::OPC_Decode, 215, 12, 6, // Opcode: VPOPCNTH
/* 942 */     MCD::OPC_FilterValue, 30, 10, 0, // Skip to: 956
/* 946 */     MCD::OPC_CheckField, 16, 5, 0, 109, 50, // Skip to: 13861
/* 952 */     MCD::OPC_Decode, 216, 12, 6, // Opcode: VPOPCNTW
/* 956 */     MCD::OPC_FilterValue, 31, 101, 50, // Skip to: 13861
/* 960 */     MCD::OPC_CheckField, 16, 5, 0, 95, 50, // Skip to: 13861
/* 966 */     MCD::OPC_Decode, 214, 12, 6, // Opcode: VPOPCNTD
/* 970 */     MCD::OPC_FilterValue, 4, 255, 0, // Skip to: 1229
/* 974 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 977 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 985
/* 981 */     MCD::OPC_Decode, 225, 12, 3, // Opcode: VRLB
/* 985 */     MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 993
/* 989 */     MCD::OPC_Decode, 229, 12, 3, // Opcode: VRLH
/* 993 */     MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 1001
/* 997 */     MCD::OPC_Decode, 230, 12, 3, // Opcode: VRLW
/* 1001 */    MCD::OPC_FilterValue, 3, 4, 0, // Skip to: 1009
/* 1005 */    MCD::OPC_Decode, 226, 12, 3, // Opcode: VRLD
/* 1009 */    MCD::OPC_FilterValue, 4, 4, 0, // Skip to: 1017
/* 1013 */    MCD::OPC_Decode, 239, 12, 3, // Opcode: VSLB
/* 1017 */    MCD::OPC_FilterValue, 5, 4, 0, // Skip to: 1025
/* 1021 */    MCD::OPC_Decode, 242, 12, 3, // Opcode: VSLH
/* 1025 */    MCD::OPC_FilterValue, 6, 4, 0, // Skip to: 1033
/* 1029 */    MCD::OPC_Decode, 245, 12, 3, // Opcode: VSLW
/* 1033 */    MCD::OPC_FilterValue, 7, 4, 0, // Skip to: 1041
/* 1037 */    MCD::OPC_Decode, 238, 12, 3, // Opcode: VSL
/* 1041 */    MCD::OPC_FilterValue, 8, 4, 0, // Skip to: 1049
/* 1045 */    MCD::OPC_Decode, 131, 13, 3, // Opcode: VSRB
/* 1049 */    MCD::OPC_FilterValue, 9, 4, 0, // Skip to: 1057
/* 1053 */    MCD::OPC_Decode, 133, 13, 3, // Opcode: VSRH
/* 1057 */    MCD::OPC_FilterValue, 10, 4, 0, // Skip to: 1065
/* 1061 */    MCD::OPC_Decode, 136, 13, 3, // Opcode: VSRW
/* 1065 */    MCD::OPC_FilterValue, 11, 4, 0, // Skip to: 1073
/* 1069 */    MCD::OPC_Decode, 254, 12, 3, // Opcode: VSR
/* 1073 */    MCD::OPC_FilterValue, 12, 4, 0, // Skip to: 1081
/* 1077 */    MCD::OPC_Decode, 255, 12, 3, // Opcode: VSRAB
/* 1081 */    MCD::OPC_FilterValue, 13, 4, 0, // Skip to: 1089
/* 1085 */    MCD::OPC_Decode, 129, 13, 3, // Opcode: VSRAH
/* 1089 */    MCD::OPC_FilterValue, 14, 4, 0, // Skip to: 1097
/* 1093 */    MCD::OPC_Decode, 130, 13, 3, // Opcode: VSRAW
/* 1097 */    MCD::OPC_FilterValue, 15, 4, 0, // Skip to: 1105
/* 1101 */    MCD::OPC_Decode, 128, 13, 3, // Opcode: VSRAD
/* 1105 */    MCD::OPC_FilterValue, 16, 4, 0, // Skip to: 1113
/* 1109 */    MCD::OPC_Decode, 157, 11, 3, // Opcode: VAND
/* 1113 */    MCD::OPC_FilterValue, 17, 4, 0, // Skip to: 1121
/* 1117 */    MCD::OPC_Decode, 158, 11, 3, // Opcode: VANDC
/* 1121 */    MCD::OPC_FilterValue, 18, 4, 0, // Skip to: 1129
/* 1125 */    MCD::OPC_Decode, 191, 12, 3, // Opcode: VOR
/* 1129 */    MCD::OPC_FilterValue, 19, 4, 0, // Skip to: 1137
/* 1133 */    MCD::OPC_Decode, 166, 13, 3, // Opcode: VXOR
/* 1137 */    MCD::OPC_FilterValue, 20, 4, 0, // Skip to: 1145
/* 1141 */    MCD::OPC_Decode, 190, 12, 3, // Opcode: VNOR
/* 1145 */    MCD::OPC_FilterValue, 21, 4, 0, // Skip to: 1153
/* 1149 */    MCD::OPC_Decode, 192, 12, 3, // Opcode: VORC
/* 1153 */    MCD::OPC_FilterValue, 22, 4, 0, // Skip to: 1161
/* 1157 */    MCD::OPC_Decode, 184, 12, 3, // Opcode: VNAND
/* 1161 */    MCD::OPC_FilterValue, 23, 4, 0, // Skip to: 1169
/* 1165 */    MCD::OPC_Decode, 240, 12, 3, // Opcode: VSLD
/* 1169 */    MCD::OPC_FilterValue, 24, 10, 0, // Skip to: 1183
/* 1173 */    MCD::OPC_CheckField, 11, 10, 0, 138, 49, // Skip to: 13861
/* 1179 */    MCD::OPC_Decode, 134, 7, 10, // Opcode: MFVSCR
/* 1183 */    MCD::OPC_FilterValue, 25, 10, 0, // Skip to: 1197
/* 1187 */    MCD::OPC_CheckField, 16, 10, 0, 124, 49, // Skip to: 13861
/* 1193 */    MCD::OPC_Decode, 171, 7, 11, // Opcode: MTVSCR
/* 1197 */    MCD::OPC_FilterValue, 26, 4, 0, // Skip to: 1205
/* 1201 */    MCD::OPC_Decode, 231, 11, 3, // Opcode: VEQV
/* 1205 */    MCD::OPC_FilterValue, 27, 4, 0, // Skip to: 1213
/* 1209 */    MCD::OPC_Decode, 132, 13, 3, // Opcode: VSRD
/* 1213 */    MCD::OPC_FilterValue, 28, 4, 0, // Skip to: 1221
/* 1217 */    MCD::OPC_Decode, 135, 13, 3, // Opcode: VSRV
/* 1221 */    MCD::OPC_FilterValue, 29, 92, 49, // Skip to: 13861
/* 1225 */    MCD::OPC_Decode, 244, 12, 3, // Opcode: VSLV
/* 1229 */    MCD::OPC_FilterValue, 5, 35, 0, // Skip to: 1268
/* 1233 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 1236 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 1244
/* 1240 */    MCD::OPC_Decode, 231, 12, 12, // Opcode: VRLWMI
/* 1244 */    MCD::OPC_FilterValue, 3, 4, 0, // Skip to: 1252
/* 1248 */    MCD::OPC_Decode, 227, 12, 12, // Opcode: VRLDMI
/* 1252 */    MCD::OPC_FilterValue, 6, 4, 0, // Skip to: 1260
/* 1256 */    MCD::OPC_Decode, 232, 12, 3, // Opcode: VRLWNM
/* 1260 */    MCD::OPC_FilterValue, 7, 53, 49, // Skip to: 13861
/* 1264 */    MCD::OPC_Decode, 228, 12, 3, // Opcode: VRLDNM
/* 1268 */    MCD::OPC_FilterValue, 6, 211, 0, // Skip to: 1483
/* 1272 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 1275 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 1283
/* 1279 */    MCD::OPC_Decode, 182, 11, 3, // Opcode: VCMPEQUB
/* 1283 */    MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 1291
/* 1287 */    MCD::OPC_Decode, 186, 11, 3, // Opcode: VCMPEQUH
/* 1291 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 1299
/* 1295 */    MCD::OPC_Decode, 188, 11, 3, // Opcode: VCMPEQUW
/* 1299 */    MCD::OPC_FilterValue, 3, 4, 0, // Skip to: 1307
/* 1303 */    MCD::OPC_Decode, 180, 11, 3, // Opcode: VCMPEQFP
/* 1307 */    MCD::OPC_FilterValue, 7, 4, 0, // Skip to: 1315
/* 1311 */    MCD::OPC_Decode, 190, 11, 3, // Opcode: VCMPGEFP
/* 1315 */    MCD::OPC_FilterValue, 8, 4, 0, // Skip to: 1323
/* 1319 */    MCD::OPC_Decode, 202, 11, 3, // Opcode: VCMPGTUB
/* 1323 */    MCD::OPC_FilterValue, 9, 4, 0, // Skip to: 1331
/* 1327 */    MCD::OPC_Decode, 206, 11, 3, // Opcode: VCMPGTUH
/* 1331 */    MCD::OPC_FilterValue, 10, 4, 0, // Skip to: 1339
/* 1335 */    MCD::OPC_Decode, 208, 11, 3, // Opcode: VCMPGTUW
/* 1339 */    MCD::OPC_FilterValue, 11, 4, 0, // Skip to: 1347
/* 1343 */    MCD::OPC_Decode, 192, 11, 3, // Opcode: VCMPGTFP
/* 1347 */    MCD::OPC_FilterValue, 12, 4, 0, // Skip to: 1355
/* 1351 */    MCD::OPC_Decode, 194, 11, 3, // Opcode: VCMPGTSB
/* 1355 */    MCD::OPC_FilterValue, 13, 4, 0, // Skip to: 1363
/* 1359 */    MCD::OPC_Decode, 198, 11, 3, // Opcode: VCMPGTSH
/* 1363 */    MCD::OPC_FilterValue, 14, 4, 0, // Skip to: 1371
/* 1367 */    MCD::OPC_Decode, 200, 11, 3, // Opcode: VCMPGTSW
/* 1371 */    MCD::OPC_FilterValue, 15, 4, 0, // Skip to: 1379
/* 1375 */    MCD::OPC_Decode, 178, 11, 3, // Opcode: VCMPBFP
/* 1379 */    MCD::OPC_FilterValue, 16, 4, 0, // Skip to: 1387
/* 1383 */    MCD::OPC_Decode, 183, 11, 3, // Opcode: VCMPEQUBo
/* 1387 */    MCD::OPC_FilterValue, 17, 4, 0, // Skip to: 1395
/* 1391 */    MCD::OPC_Decode, 187, 11, 3, // Opcode: VCMPEQUHo
/* 1395 */    MCD::OPC_FilterValue, 18, 4, 0, // Skip to: 1403
/* 1399 */    MCD::OPC_Decode, 189, 11, 3, // Opcode: VCMPEQUWo
/* 1403 */    MCD::OPC_FilterValue, 19, 4, 0, // Skip to: 1411
/* 1407 */    MCD::OPC_Decode, 181, 11, 3, // Opcode: VCMPEQFPo
/* 1411 */    MCD::OPC_FilterValue, 23, 4, 0, // Skip to: 1419
/* 1415 */    MCD::OPC_Decode, 191, 11, 3, // Opcode: VCMPGEFPo
/* 1419 */    MCD::OPC_FilterValue, 24, 4, 0, // Skip to: 1427
/* 1423 */    MCD::OPC_Decode, 203, 11, 3, // Opcode: VCMPGTUBo
/* 1427 */    MCD::OPC_FilterValue, 25, 4, 0, // Skip to: 1435
/* 1431 */    MCD::OPC_Decode, 207, 11, 3, // Opcode: VCMPGTUHo
/* 1435 */    MCD::OPC_FilterValue, 26, 4, 0, // Skip to: 1443
/* 1439 */    MCD::OPC_Decode, 209, 11, 3, // Opcode: VCMPGTUWo
/* 1443 */    MCD::OPC_FilterValue, 27, 4, 0, // Skip to: 1451
/* 1447 */    MCD::OPC_Decode, 193, 11, 3, // Opcode: VCMPGTFPo
/* 1451 */    MCD::OPC_FilterValue, 28, 4, 0, // Skip to: 1459
/* 1455 */    MCD::OPC_Decode, 195, 11, 3, // Opcode: VCMPGTSBo
/* 1459 */    MCD::OPC_FilterValue, 29, 4, 0, // Skip to: 1467
/* 1463 */    MCD::OPC_Decode, 199, 11, 3, // Opcode: VCMPGTSHo
/* 1467 */    MCD::OPC_FilterValue, 30, 4, 0, // Skip to: 1475
/* 1471 */    MCD::OPC_Decode, 201, 11, 3, // Opcode: VCMPGTSWo
/* 1475 */    MCD::OPC_FilterValue, 31, 94, 48, // Skip to: 13861
/* 1479 */    MCD::OPC_Decode, 179, 11, 3, // Opcode: VCMPBFPo
/* 1483 */    MCD::OPC_FilterValue, 7, 147, 0, // Skip to: 1634
/* 1487 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 1490 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 1498
/* 1494 */    MCD::OPC_Decode, 210, 11, 3, // Opcode: VCMPNEB
/* 1498 */    MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 1506
/* 1502 */    MCD::OPC_Decode, 212, 11, 3, // Opcode: VCMPNEH
/* 1506 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 1514
/* 1510 */    MCD::OPC_Decode, 214, 11, 3, // Opcode: VCMPNEW
/* 1514 */    MCD::OPC_FilterValue, 3, 4, 0, // Skip to: 1522
/* 1518 */    MCD::OPC_Decode, 184, 11, 3, // Opcode: VCMPEQUD
/* 1522 */    MCD::OPC_FilterValue, 4, 4, 0, // Skip to: 1530
/* 1526 */    MCD::OPC_Decode, 216, 11, 3, // Opcode: VCMPNEZB
/* 1530 */    MCD::OPC_FilterValue, 5, 4, 0, // Skip to: 1538
/* 1534 */    MCD::OPC_Decode, 218, 11, 3, // Opcode: VCMPNEZH
/* 1538 */    MCD::OPC_FilterValue, 6, 4, 0, // Skip to: 1546
/* 1542 */    MCD::OPC_Decode, 220, 11, 3, // Opcode: VCMPNEZW
/* 1546 */    MCD::OPC_FilterValue, 11, 4, 0, // Skip to: 1554
/* 1550 */    MCD::OPC_Decode, 204, 11, 3, // Opcode: VCMPGTUD
/* 1554 */    MCD::OPC_FilterValue, 15, 4, 0, // Skip to: 1562
/* 1558 */    MCD::OPC_Decode, 196, 11, 3, // Opcode: VCMPGTSD
/* 1562 */    MCD::OPC_FilterValue, 16, 4, 0, // Skip to: 1570
/* 1566 */    MCD::OPC_Decode, 211, 11, 3, // Opcode: VCMPNEBo
/* 1570 */    MCD::OPC_FilterValue, 17, 4, 0, // Skip to: 1578
/* 1574 */    MCD::OPC_Decode, 213, 11, 3, // Opcode: VCMPNEHo
/* 1578 */    MCD::OPC_FilterValue, 18, 4, 0, // Skip to: 1586
/* 1582 */    MCD::OPC_Decode, 215, 11, 3, // Opcode: VCMPNEWo
/* 1586 */    MCD::OPC_FilterValue, 19, 4, 0, // Skip to: 1594
/* 1590 */    MCD::OPC_Decode, 185, 11, 3, // Opcode: VCMPEQUDo
/* 1594 */    MCD::OPC_FilterValue, 20, 4, 0, // Skip to: 1602
/* 1598 */    MCD::OPC_Decode, 217, 11, 3, // Opcode: VCMPNEZBo
/* 1602 */    MCD::OPC_FilterValue, 21, 4, 0, // Skip to: 1610
/* 1606 */    MCD::OPC_Decode, 219, 11, 3, // Opcode: VCMPNEZHo
/* 1610 */    MCD::OPC_FilterValue, 22, 4, 0, // Skip to: 1618
/* 1614 */    MCD::OPC_Decode, 221, 11, 3, // Opcode: VCMPNEZWo
/* 1618 */    MCD::OPC_FilterValue, 27, 4, 0, // Skip to: 1626
/* 1622 */    MCD::OPC_Decode, 205, 11, 3, // Opcode: VCMPGTUDo
/* 1626 */    MCD::OPC_FilterValue, 31, 199, 47, // Skip to: 13861
/* 1630 */    MCD::OPC_Decode, 197, 11, 3, // Opcode: VCMPGTSDo
/* 1634 */    MCD::OPC_FilterValue, 8, 201, 0, // Skip to: 1839
/* 1638 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 1641 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 1649
/* 1645 */    MCD::OPC_Decode, 180, 12, 3, // Opcode: VMULOUB
/* 1649 */    MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 1657
/* 1653 */    MCD::OPC_Decode, 181, 12, 3, // Opcode: VMULOUH
/* 1657 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 1665
/* 1661 */    MCD::OPC_Decode, 182, 12, 3, // Opcode: VMULOUW
/* 1665 */    MCD::OPC_FilterValue, 4, 4, 0, // Skip to: 1673
/* 1669 */    MCD::OPC_Decode, 177, 12, 3, // Opcode: VMULOSB
/* 1673 */    MCD::OPC_FilterValue, 5, 4, 0, // Skip to: 1681
/* 1677 */    MCD::OPC_Decode, 178, 12, 3, // Opcode: VMULOSH
/* 1681 */    MCD::OPC_FilterValue, 6, 4, 0, // Skip to: 1689
/* 1685 */    MCD::OPC_Decode, 179, 12, 3, // Opcode: VMULOSW
/* 1689 */    MCD::OPC_FilterValue, 8, 4, 0, // Skip to: 1697
/* 1693 */    MCD::OPC_Decode, 174, 12, 3, // Opcode: VMULEUB
/* 1697 */    MCD::OPC_FilterValue, 9, 4, 0, // Skip to: 1705
/* 1701 */    MCD::OPC_Decode, 175, 12, 3, // Opcode: VMULEUH
/* 1705 */    MCD::OPC_FilterValue, 10, 4, 0, // Skip to: 1713
/* 1709 */    MCD::OPC_Decode, 176, 12, 3, // Opcode: VMULEUW
/* 1713 */    MCD::OPC_FilterValue, 12, 4, 0, // Skip to: 1721
/* 1717 */    MCD::OPC_Decode, 171, 12, 3, // Opcode: VMULESB
/* 1721 */    MCD::OPC_FilterValue, 13, 4, 0, // Skip to: 1729
/* 1725 */    MCD::OPC_Decode, 172, 12, 3, // Opcode: VMULESH
/* 1729 */    MCD::OPC_FilterValue, 14, 4, 0, // Skip to: 1737
/* 1733 */    MCD::OPC_Decode, 173, 12, 3, // Opcode: VMULESW
/* 1737 */    MCD::OPC_FilterValue, 16, 4, 0, // Skip to: 1745
/* 1741 */    MCD::OPC_Decode, 209, 12, 3, // Opcode: VPMSUMB
/* 1745 */    MCD::OPC_FilterValue, 17, 4, 0, // Skip to: 1753
/* 1749 */    MCD::OPC_Decode, 211, 12, 3, // Opcode: VPMSUMH
/* 1753 */    MCD::OPC_FilterValue, 18, 4, 0, // Skip to: 1761
/* 1757 */    MCD::OPC_Decode, 212, 12, 3, // Opcode: VPMSUMW
/* 1761 */    MCD::OPC_FilterValue, 19, 4, 0, // Skip to: 1769
/* 1765 */    MCD::OPC_Decode, 210, 12, 3, // Opcode: VPMSUMD
/* 1769 */    MCD::OPC_FilterValue, 20, 4, 0, // Skip to: 1777
/* 1773 */    MCD::OPC_Decode, 171, 11, 3, // Opcode: VCIPHER
/* 1777 */    MCD::OPC_FilterValue, 21, 4, 0, // Skip to: 1785
/* 1781 */    MCD::OPC_Decode, 185, 12, 3, // Opcode: VNCIPHER
/* 1785 */    MCD::OPC_FilterValue, 23, 10, 0, // Skip to: 1799
/* 1789 */    MCD::OPC_CheckField, 11, 5, 0, 34, 47, // Skip to: 13861
/* 1795 */    MCD::OPC_Decode, 234, 12, 4, // Opcode: VSBOX
/* 1799 */    MCD::OPC_FilterValue, 24, 4, 0, // Skip to: 1807
/* 1803 */    MCD::OPC_Decode, 156, 13, 3, // Opcode: VSUM4UBS
/* 1807 */    MCD::OPC_FilterValue, 25, 4, 0, // Skip to: 1815
/* 1811 */    MCD::OPC_Decode, 155, 13, 3, // Opcode: VSUM4SHS
/* 1815 */    MCD::OPC_FilterValue, 26, 4, 0, // Skip to: 1823
/* 1819 */    MCD::OPC_Decode, 153, 13, 3, // Opcode: VSUM2SWS
/* 1823 */    MCD::OPC_FilterValue, 28, 4, 0, // Skip to: 1831
/* 1827 */    MCD::OPC_Decode, 154, 13, 3, // Opcode: VSUM4SBS
/* 1831 */    MCD::OPC_FilterValue, 30, 250, 46, // Skip to: 13861
/* 1835 */    MCD::OPC_Decode, 157, 13, 3, // Opcode: VSUMSWS
/* 1839 */    MCD::OPC_FilterValue, 9, 27, 0, // Skip to: 1870
/* 1843 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 1846 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 1854
/* 1850 */    MCD::OPC_Decode, 183, 12, 3, // Opcode: VMULUWM
/* 1854 */    MCD::OPC_FilterValue, 20, 4, 0, // Skip to: 1862
/* 1858 */    MCD::OPC_Decode, 172, 11, 3, // Opcode: VCIPHERLAST
/* 1862 */    MCD::OPC_FilterValue, 21, 219, 46, // Skip to: 13861
/* 1866 */    MCD::OPC_Decode, 186, 12, 3, // Opcode: VNCIPHERLAST
/* 1870 */    MCD::OPC_FilterValue, 10, 179, 0, // Skip to: 2053
/* 1874 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 1877 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 1885
/* 1881 */    MCD::OPC_Decode, 145, 11, 3, // Opcode: VADDFP
/* 1885 */    MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 1893
/* 1889 */    MCD::OPC_Decode, 141, 13, 3, // Opcode: VSUBFP
/* 1893 */    MCD::OPC_FilterValue, 4, 10, 0, // Skip to: 1907
/* 1897 */    MCD::OPC_CheckField, 16, 5, 0, 182, 46, // Skip to: 13861
/* 1903 */    MCD::OPC_Decode, 220, 12, 6, // Opcode: VREFP
/* 1907 */    MCD::OPC_FilterValue, 5, 10, 0, // Skip to: 1921
/* 1911 */    MCD::OPC_CheckField, 16, 5, 0, 168, 46, // Skip to: 13861
/* 1917 */    MCD::OPC_Decode, 233, 12, 6, // Opcode: VRSQRTEFP
/* 1921 */    MCD::OPC_FilterValue, 6, 10, 0, // Skip to: 1935
/* 1925 */    MCD::OPC_CheckField, 16, 5, 0, 154, 46, // Skip to: 13861
/* 1931 */    MCD::OPC_Decode, 232, 11, 6, // Opcode: VEXPTEFP
/* 1935 */    MCD::OPC_FilterValue, 7, 10, 0, // Skip to: 1949
/* 1939 */    MCD::OPC_CheckField, 16, 5, 0, 140, 46, // Skip to: 13861
/* 1945 */    MCD::OPC_Decode, 130, 12, 6, // Opcode: VLOGEFP
/* 1949 */    MCD::OPC_FilterValue, 8, 10, 0, // Skip to: 1963
/* 1953 */    MCD::OPC_CheckField, 16, 5, 0, 126, 46, // Skip to: 13861
/* 1959 */    MCD::OPC_Decode, 222, 12, 6, // Opcode: VRFIN
/* 1963 */    MCD::OPC_FilterValue, 9, 10, 0, // Skip to: 1977
/* 1967 */    MCD::OPC_CheckField, 16, 5, 0, 112, 46, // Skip to: 13861
/* 1973 */    MCD::OPC_Decode, 224, 12, 6, // Opcode: VRFIZ
/* 1977 */    MCD::OPC_FilterValue, 10, 10, 0, // Skip to: 1991
/* 1981 */    MCD::OPC_CheckField, 16, 5, 0, 98, 46, // Skip to: 13861
/* 1987 */    MCD::OPC_Decode, 223, 12, 6, // Opcode: VRFIP
/* 1991 */    MCD::OPC_FilterValue, 11, 10, 0, // Skip to: 2005
/* 1995 */    MCD::OPC_CheckField, 16, 5, 0, 84, 46, // Skip to: 13861
/* 2001 */    MCD::OPC_Decode, 221, 12, 6, // Opcode: VRFIM
/* 2005 */    MCD::OPC_FilterValue, 12, 4, 0, // Skip to: 2013
/* 2009 */    MCD::OPC_Decode, 169, 11, 13, // Opcode: VCFUX
/* 2013 */    MCD::OPC_FilterValue, 13, 4, 0, // Skip to: 2021
/* 2017 */    MCD::OPC_Decode, 167, 11, 13, // Opcode: VCFSX
/* 2021 */    MCD::OPC_FilterValue, 14, 4, 0, // Skip to: 2029
/* 2025 */    MCD::OPC_Decode, 224, 11, 13, // Opcode: VCTUXS
/* 2029 */    MCD::OPC_FilterValue, 15, 4, 0, // Skip to: 2037
/* 2033 */    MCD::OPC_Decode, 222, 11, 13, // Opcode: VCTSXS
/* 2037 */    MCD::OPC_FilterValue, 16, 4, 0, // Skip to: 2045
/* 2041 */    MCD::OPC_Decode, 132, 12, 3, // Opcode: VMAXFP
/* 2045 */    MCD::OPC_FilterValue, 17, 36, 46, // Skip to: 13861
/* 2049 */    MCD::OPC_Decode, 143, 12, 3, // Opcode: VMINFP
/* 2053 */    MCD::OPC_FilterValue, 12, 179, 0, // Skip to: 2236
/* 2057 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 2060 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 2068
/* 2064 */    MCD::OPC_Decode, 154, 12, 3, // Opcode: VMRGHB
/* 2068 */    MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 2076
/* 2072 */    MCD::OPC_Decode, 155, 12, 3, // Opcode: VMRGHH
/* 2076 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 2084
/* 2080 */    MCD::OPC_Decode, 156, 12, 3, // Opcode: VMRGHW
/* 2084 */    MCD::OPC_FilterValue, 4, 4, 0, // Skip to: 2092
/* 2088 */    MCD::OPC_Decode, 157, 12, 3, // Opcode: VMRGLB
/* 2092 */    MCD::OPC_FilterValue, 5, 4, 0, // Skip to: 2100
/* 2096 */    MCD::OPC_Decode, 158, 12, 3, // Opcode: VMRGLH
/* 2100 */    MCD::OPC_FilterValue, 6, 4, 0, // Skip to: 2108
/* 2104 */    MCD::OPC_Decode, 159, 12, 3, // Opcode: VMRGLW
/* 2108 */    MCD::OPC_FilterValue, 8, 4, 0, // Skip to: 2116
/* 2112 */    MCD::OPC_Decode, 246, 12, 13, // Opcode: VSPLTB
/* 2116 */    MCD::OPC_FilterValue, 9, 4, 0, // Skip to: 2124
/* 2120 */    MCD::OPC_Decode, 248, 12, 13, // Opcode: VSPLTH
/* 2124 */    MCD::OPC_FilterValue, 10, 4, 0, // Skip to: 2132
/* 2128 */    MCD::OPC_Decode, 253, 12, 13, // Opcode: VSPLTW
/* 2132 */    MCD::OPC_FilterValue, 12, 10, 0, // Skip to: 2146
/* 2136 */    MCD::OPC_CheckField, 11, 5, 0, 199, 45, // Skip to: 13861
/* 2142 */    MCD::OPC_Decode, 250, 12, 14, // Opcode: VSPLTISB
/* 2146 */    MCD::OPC_FilterValue, 13, 10, 0, // Skip to: 2160
/* 2150 */    MCD::OPC_CheckField, 11, 5, 0, 185, 45, // Skip to: 13861
/* 2156 */    MCD::OPC_Decode, 251, 12, 14, // Opcode: VSPLTISH
/* 2160 */    MCD::OPC_FilterValue, 14, 10, 0, // Skip to: 2174
/* 2164 */    MCD::OPC_CheckField, 11, 5, 0, 171, 45, // Skip to: 13861
/* 2170 */    MCD::OPC_Decode, 252, 12, 14, // Opcode: VSPLTISW
/* 2174 */    MCD::OPC_FilterValue, 16, 4, 0, // Skip to: 2182
/* 2178 */    MCD::OPC_Decode, 243, 12, 3, // Opcode: VSLO
/* 2182 */    MCD::OPC_FilterValue, 17, 4, 0, // Skip to: 2190
/* 2186 */    MCD::OPC_Decode, 134, 13, 3, // Opcode: VSRO
/* 2190 */    MCD::OPC_FilterValue, 20, 10, 0, // Skip to: 2204
/* 2194 */    MCD::OPC_CheckField, 16, 5, 0, 141, 45, // Skip to: 13861
/* 2200 */    MCD::OPC_Decode, 253, 11, 6, // Opcode: VGBBD
/* 2204 */    MCD::OPC_FilterValue, 21, 4, 0, // Skip to: 2212
/* 2208 */    MCD::OPC_Decode, 166, 11, 3, // Opcode: VBPERMQ
/* 2212 */    MCD::OPC_FilterValue, 23, 4, 0, // Skip to: 2220
/* 2216 */    MCD::OPC_Decode, 165, 11, 3, // Opcode: VBPERMD
/* 2220 */    MCD::OPC_FilterValue, 26, 4, 0, // Skip to: 2228
/* 2224 */    MCD::OPC_Decode, 160, 12, 3, // Opcode: VMRGOW
/* 2228 */    MCD::OPC_FilterValue, 30, 109, 45, // Skip to: 13861
/* 2232 */    MCD::OPC_Decode, 153, 12, 3, // Opcode: VMRGEW
/* 2236 */    MCD::OPC_FilterValue, 13, 115, 0, // Skip to: 2355
/* 2240 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 2243 */    MCD::OPC_FilterValue, 8, 4, 0, // Skip to: 2251
/* 2247 */    MCD::OPC_Decode, 234, 11, 15, // Opcode: VEXTRACTUB
/* 2251 */    MCD::OPC_FilterValue, 9, 4, 0, // Skip to: 2259
/* 2255 */    MCD::OPC_Decode, 235, 11, 15, // Opcode: VEXTRACTUH
/* 2259 */    MCD::OPC_FilterValue, 10, 4, 0, // Skip to: 2267
/* 2263 */    MCD::OPC_Decode, 236, 11, 15, // Opcode: VEXTRACTUW
/* 2267 */    MCD::OPC_FilterValue, 11, 4, 0, // Skip to: 2275
/* 2271 */    MCD::OPC_Decode, 233, 11, 15, // Opcode: VEXTRACTD
/* 2275 */    MCD::OPC_FilterValue, 12, 4, 0, // Skip to: 2283
/* 2279 */    MCD::OPC_Decode, 254, 11, 15, // Opcode: VINSERTB
/* 2283 */    MCD::OPC_FilterValue, 13, 4, 0, // Skip to: 2291
/* 2287 */    MCD::OPC_Decode, 128, 12, 15, // Opcode: VINSERTH
/* 2291 */    MCD::OPC_FilterValue, 14, 4, 0, // Skip to: 2299
/* 2295 */    MCD::OPC_Decode, 129, 12, 15, // Opcode: VINSERTW
/* 2299 */    MCD::OPC_FilterValue, 15, 4, 0, // Skip to: 2307
/* 2303 */    MCD::OPC_Decode, 255, 11, 15, // Opcode: VINSERTD
/* 2307 */    MCD::OPC_FilterValue, 24, 4, 0, // Skip to: 2315
/* 2311 */    MCD::OPC_Decode, 247, 11, 16, // Opcode: VEXTUBLX
/* 2315 */    MCD::OPC_FilterValue, 25, 4, 0, // Skip to: 2323
/* 2319 */    MCD::OPC_Decode, 249, 11, 16, // Opcode: VEXTUHLX
/* 2323 */    MCD::OPC_FilterValue, 26, 4, 0, // Skip to: 2331
/* 2327 */    MCD::OPC_Decode, 251, 11, 16, // Opcode: VEXTUWLX
/* 2331 */    MCD::OPC_FilterValue, 28, 4, 0, // Skip to: 2339
/* 2335 */    MCD::OPC_Decode, 248, 11, 16, // Opcode: VEXTUBRX
/* 2339 */    MCD::OPC_FilterValue, 29, 4, 0, // Skip to: 2347
/* 2343 */    MCD::OPC_Decode, 250, 11, 16, // Opcode: VEXTUHRX
/* 2347 */    MCD::OPC_FilterValue, 30, 246, 44, // Skip to: 13861
/* 2351 */    MCD::OPC_Decode, 252, 11, 16, // Opcode: VEXTUWRX
/* 2355 */    MCD::OPC_FilterValue, 14, 219, 0, // Skip to: 2578
/* 2359 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 2362 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 2370
/* 2366 */    MCD::OPC_Decode, 205, 12, 3, // Opcode: VPKUHUM
/* 2370 */    MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 2378
/* 2374 */    MCD::OPC_Decode, 207, 12, 3, // Opcode: VPKUWUM
/* 2378 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 2386
/* 2382 */    MCD::OPC_Decode, 206, 12, 3, // Opcode: VPKUHUS
/* 2386 */    MCD::OPC_FilterValue, 3, 4, 0, // Skip to: 2394
/* 2390 */    MCD::OPC_Decode, 208, 12, 3, // Opcode: VPKUWUS
/* 2394 */    MCD::OPC_FilterValue, 4, 4, 0, // Skip to: 2402
/* 2398 */    MCD::OPC_Decode, 200, 12, 3, // Opcode: VPKSHUS
/* 2402 */    MCD::OPC_FilterValue, 5, 4, 0, // Skip to: 2410
/* 2406 */    MCD::OPC_Decode, 202, 12, 3, // Opcode: VPKSWUS
/* 2410 */    MCD::OPC_FilterValue, 6, 4, 0, // Skip to: 2418
/* 2414 */    MCD::OPC_Decode, 199, 12, 3, // Opcode: VPKSHSS
/* 2418 */    MCD::OPC_FilterValue, 7, 4, 0, // Skip to: 2426
/* 2422 */    MCD::OPC_Decode, 201, 12, 3, // Opcode: VPKSWSS
/* 2426 */    MCD::OPC_FilterValue, 8, 10, 0, // Skip to: 2440
/* 2430 */    MCD::OPC_CheckField, 16, 5, 0, 161, 44, // Skip to: 13861
/* 2436 */    MCD::OPC_Decode, 159, 13, 6, // Opcode: VUPKHSB
/* 2440 */    MCD::OPC_FilterValue, 9, 10, 0, // Skip to: 2454
/* 2444 */    MCD::OPC_CheckField, 16, 5, 0, 147, 44, // Skip to: 13861
/* 2450 */    MCD::OPC_Decode, 160, 13, 6, // Opcode: VUPKHSH
/* 2454 */    MCD::OPC_FilterValue, 10, 10, 0, // Skip to: 2468
/* 2458 */    MCD::OPC_CheckField, 16, 5, 0, 133, 44, // Skip to: 13861
/* 2464 */    MCD::OPC_Decode, 163, 13, 6, // Opcode: VUPKLSB
/* 2468 */    MCD::OPC_FilterValue, 11, 10, 0, // Skip to: 2482
/* 2472 */    MCD::OPC_CheckField, 16, 5, 0, 119, 44, // Skip to: 13861
/* 2478 */    MCD::OPC_Decode, 164, 13, 6, // Opcode: VUPKLSH
/* 2482 */    MCD::OPC_FilterValue, 12, 4, 0, // Skip to: 2490
/* 2486 */    MCD::OPC_Decode, 196, 12, 3, // Opcode: VPKPX
/* 2490 */    MCD::OPC_FilterValue, 13, 10, 0, // Skip to: 2504
/* 2494 */    MCD::OPC_CheckField, 16, 5, 0, 97, 44, // Skip to: 13861
/* 2500 */    MCD::OPC_Decode, 158, 13, 6, // Opcode: VUPKHPX
/* 2504 */    MCD::OPC_FilterValue, 15, 10, 0, // Skip to: 2518
/* 2508 */    MCD::OPC_CheckField, 16, 5, 0, 83, 44, // Skip to: 13861
/* 2514 */    MCD::OPC_Decode, 162, 13, 6, // Opcode: VUPKLPX
/* 2518 */    MCD::OPC_FilterValue, 17, 4, 0, // Skip to: 2526
/* 2522 */    MCD::OPC_Decode, 203, 12, 3, // Opcode: VPKUDUM
/* 2526 */    MCD::OPC_FilterValue, 19, 4, 0, // Skip to: 2534
/* 2530 */    MCD::OPC_Decode, 204, 12, 3, // Opcode: VPKUDUS
/* 2534 */    MCD::OPC_FilterValue, 21, 4, 0, // Skip to: 2542
/* 2538 */    MCD::OPC_Decode, 198, 12, 3, // Opcode: VPKSDUS
/* 2542 */    MCD::OPC_FilterValue, 23, 4, 0, // Skip to: 2550
/* 2546 */    MCD::OPC_Decode, 197, 12, 3, // Opcode: VPKSDSS
/* 2550 */    MCD::OPC_FilterValue, 25, 10, 0, // Skip to: 2564
/* 2554 */    MCD::OPC_CheckField, 16, 5, 0, 37, 44, // Skip to: 13861
/* 2560 */    MCD::OPC_Decode, 161, 13, 6, // Opcode: VUPKHSW
/* 2564 */    MCD::OPC_FilterValue, 27, 29, 44, // Skip to: 13861
/* 2568 */    MCD::OPC_CheckField, 16, 5, 0, 23, 44, // Skip to: 13861
/* 2574 */    MCD::OPC_Decode, 165, 13, 6, // Opcode: VUPKLSW
/* 2578 */    MCD::OPC_FilterValue, 32, 4, 0, // Skip to: 2586
/* 2582 */    MCD::OPC_Decode, 141, 12, 17, // Opcode: VMHADDSHS
/* 2586 */    MCD::OPC_FilterValue, 33, 4, 0, // Skip to: 2594
/* 2590 */    MCD::OPC_Decode, 142, 12, 17, // Opcode: VMHRADDSHS
/* 2594 */    MCD::OPC_FilterValue, 34, 4, 0, // Skip to: 2602
/* 2598 */    MCD::OPC_Decode, 152, 12, 17, // Opcode: VMLADDUHM
/* 2602 */    MCD::OPC_FilterValue, 36, 4, 0, // Skip to: 2610
/* 2606 */    MCD::OPC_Decode, 164, 12, 17, // Opcode: VMSUMUBM
/* 2610 */    MCD::OPC_FilterValue, 37, 4, 0, // Skip to: 2618
/* 2614 */    MCD::OPC_Decode, 161, 12, 17, // Opcode: VMSUMMBM
/* 2618 */    MCD::OPC_FilterValue, 38, 4, 0, // Skip to: 2626
/* 2622 */    MCD::OPC_Decode, 165, 12, 17, // Opcode: VMSUMUHM
/* 2626 */    MCD::OPC_FilterValue, 39, 4, 0, // Skip to: 2634
/* 2630 */    MCD::OPC_Decode, 166, 12, 17, // Opcode: VMSUMUHS
/* 2634 */    MCD::OPC_FilterValue, 40, 4, 0, // Skip to: 2642
/* 2638 */    MCD::OPC_Decode, 162, 12, 17, // Opcode: VMSUMSHM
/* 2642 */    MCD::OPC_FilterValue, 41, 4, 0, // Skip to: 2650
/* 2646 */    MCD::OPC_Decode, 163, 12, 17, // Opcode: VMSUMSHS
/* 2650 */    MCD::OPC_FilterValue, 42, 4, 0, // Skip to: 2658
/* 2654 */    MCD::OPC_Decode, 235, 12, 17, // Opcode: VSEL
/* 2658 */    MCD::OPC_FilterValue, 43, 4, 0, // Skip to: 2666
/* 2662 */    MCD::OPC_Decode, 193, 12, 17, // Opcode: VPERM
/* 2666 */    MCD::OPC_FilterValue, 44, 10, 0, // Skip to: 2680
/* 2670 */    MCD::OPC_CheckField, 10, 1, 0, 177, 43, // Skip to: 13861
/* 2676 */    MCD::OPC_Decode, 241, 12, 18, // Opcode: VSLDOI
/* 2680 */    MCD::OPC_FilterValue, 45, 4, 0, // Skip to: 2688
/* 2684 */    MCD::OPC_Decode, 195, 12, 17, // Opcode: VPERMXOR
/* 2688 */    MCD::OPC_FilterValue, 46, 4, 0, // Skip to: 2696
/* 2692 */    MCD::OPC_Decode, 131, 12, 19, // Opcode: VMADDFP
/* 2696 */    MCD::OPC_FilterValue, 47, 4, 0, // Skip to: 2704
/* 2700 */    MCD::OPC_Decode, 189, 12, 19, // Opcode: VNMSUBFP
/* 2704 */    MCD::OPC_FilterValue, 59, 4, 0, // Skip to: 2712
/* 2708 */    MCD::OPC_Decode, 194, 12, 17, // Opcode: VPERMR
/* 2712 */    MCD::OPC_FilterValue, 60, 4, 0, // Skip to: 2720
/* 2716 */    MCD::OPC_Decode, 144, 11, 17, // Opcode: VADDEUQM
/* 2720 */    MCD::OPC_FilterValue, 61, 4, 0, // Skip to: 2728
/* 2724 */    MCD::OPC_Decode, 143, 11, 17, // Opcode: VADDECUQ
/* 2728 */    MCD::OPC_FilterValue, 62, 4, 0, // Skip to: 2736
/* 2732 */    MCD::OPC_Decode, 140, 13, 17, // Opcode: VSUBEUQM
/* 2736 */    MCD::OPC_FilterValue, 63, 113, 43, // Skip to: 13861
/* 2740 */    MCD::OPC_Decode, 139, 13, 17, // Opcode: VSUBECUQ
/* 2744 */    MCD::OPC_FilterValue, 7, 4, 0, // Skip to: 2752
/* 2748 */    MCD::OPC_Decode, 187, 7, 20, // Opcode: MULLI
/* 2752 */    MCD::OPC_FilterValue, 8, 4, 0, // Skip to: 2760
/* 2756 */    MCD::OPC_Decode, 205, 10, 20, // Opcode: SUBFIC
/* 2760 */    MCD::OPC_FilterValue, 10, 19, 0, // Skip to: 2783
/* 2764 */    MCD::OPC_ExtractField, 21, 2,  // Inst{22-21} ...
/* 2767 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 2775
/* 2771 */    MCD::OPC_Decode, 203, 2, 21, // Opcode: CMPLWI
/* 2775 */    MCD::OPC_FilterValue, 1, 74, 43, // Skip to: 13861
/* 2779 */    MCD::OPC_Decode, 201, 2, 22, // Opcode: CMPLDI
/* 2783 */    MCD::OPC_FilterValue, 11, 19, 0, // Skip to: 2806
/* 2787 */    MCD::OPC_ExtractField, 21, 2,  // Inst{22-21} ...
/* 2790 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 2798
/* 2794 */    MCD::OPC_Decode, 207, 2, 23, // Opcode: CMPWI
/* 2798 */    MCD::OPC_FilterValue, 1, 51, 43, // Skip to: 13861
/* 2802 */    MCD::OPC_Decode, 198, 2, 24, // Opcode: CMPDI
/* 2806 */    MCD::OPC_FilterValue, 12, 3, 0, // Skip to: 2813
/* 2810 */    MCD::OPC_Decode, 114, 20, // Opcode: ADDIC
/* 2813 */    MCD::OPC_FilterValue, 13, 3, 0, // Skip to: 2820
/* 2817 */    MCD::OPC_Decode, 116, 20, // Opcode: ADDICo
/* 2820 */    MCD::OPC_FilterValue, 14, 13, 0, // Skip to: 2837
/* 2824 */    MCD::OPC_CheckField, 16, 5, 0, 4, 0, // Skip to: 2834
/* 2830 */    MCD::OPC_Decode, 184, 6, 25, // Opcode: LI
/* 2834 */    MCD::OPC_Decode, 112, 26, // Opcode: ADDI
/* 2837 */    MCD::OPC_FilterValue, 15, 13, 0, // Skip to: 2854
/* 2841 */    MCD::OPC_CheckField, 16, 5, 0, 4, 0, // Skip to: 2851
/* 2847 */    MCD::OPC_Decode, 186, 6, 25, // Opcode: LIS
/* 2851 */    MCD::OPC_Decode, 117, 26, // Opcode: ADDIS
/* 2854 */    MCD::OPC_FilterValue, 16, 7, 1, // Skip to: 3121
/* 2858 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 2861 */    MCD::OPC_FilterValue, 0, 61, 0, // Skip to: 2926
/* 2865 */    MCD::OPC_ExtractField, 16, 10,  // Inst{25-16} ...
/* 2868 */    MCD::OPC_FilterValue, 128, 4, 4, 0, // Skip to: 2877
/* 2873 */    MCD::OPC_Decode, 130, 2, 27, // Opcode: BDNZ
/* 2877 */    MCD::OPC_FilterValue, 192, 4, 4, 0, // Skip to: 2886
/* 2882 */    MCD::OPC_Decode, 150, 2, 27, // Opcode: BDZ
/* 2886 */    MCD::OPC_FilterValue, 128, 6, 4, 0, // Skip to: 2895
/* 2891 */    MCD::OPC_Decode, 148, 2, 27, // Opcode: BDNZm
/* 2895 */    MCD::OPC_FilterValue, 160, 6, 4, 0, // Skip to: 2904
/* 2900 */    MCD::OPC_Decode, 149, 2, 27, // Opcode: BDNZp
/* 2904 */    MCD::OPC_FilterValue, 192, 6, 4, 0, // Skip to: 2913
/* 2909 */    MCD::OPC_Decode, 168, 2, 27, // Opcode: BDZm
/* 2913 */    MCD::OPC_FilterValue, 224, 6, 4, 0, // Skip to: 2922
/* 2918 */    MCD::OPC_Decode, 169, 2, 27, // Opcode: BDZp
/* 2922 */    MCD::OPC_Decode, 175, 15, 28, // Opcode: gBC
/* 2926 */    MCD::OPC_FilterValue, 1, 61, 0, // Skip to: 2991
/* 2930 */    MCD::OPC_ExtractField, 16, 10,  // Inst{25-16} ...
/* 2933 */    MCD::OPC_FilterValue, 128, 4, 4, 0, // Skip to: 2942
/* 2938 */    MCD::OPC_Decode, 135, 2, 27, // Opcode: BDNZL
/* 2942 */    MCD::OPC_FilterValue, 192, 4, 4, 0, // Skip to: 2951
/* 2947 */    MCD::OPC_Decode, 155, 2, 27, // Opcode: BDZL
/* 2951 */    MCD::OPC_FilterValue, 128, 6, 4, 0, // Skip to: 2960
/* 2956 */    MCD::OPC_Decode, 146, 2, 27, // Opcode: BDNZLm
/* 2960 */    MCD::OPC_FilterValue, 160, 6, 4, 0, // Skip to: 2969
/* 2965 */    MCD::OPC_Decode, 147, 2, 27, // Opcode: BDNZLp
/* 2969 */    MCD::OPC_FilterValue, 192, 6, 4, 0, // Skip to: 2978
/* 2974 */    MCD::OPC_Decode, 166, 2, 27, // Opcode: BDZLm
/* 2978 */    MCD::OPC_FilterValue, 224, 6, 4, 0, // Skip to: 2987
/* 2983 */    MCD::OPC_Decode, 167, 2, 27, // Opcode: BDZLp
/* 2987 */    MCD::OPC_Decode, 180, 15, 28, // Opcode: gBCL
/* 2991 */    MCD::OPC_FilterValue, 2, 61, 0, // Skip to: 3056
/* 2995 */    MCD::OPC_ExtractField, 16, 10,  // Inst{25-16} ...
/* 2998 */    MCD::OPC_FilterValue, 128, 4, 4, 0, // Skip to: 3007
/* 3003 */    MCD::OPC_Decode, 132, 2, 27, // Opcode: BDNZA
/* 3007 */    MCD::OPC_FilterValue, 192, 4, 4, 0, // Skip to: 3016
/* 3012 */    MCD::OPC_Decode, 152, 2, 27, // Opcode: BDZA
/* 3016 */    MCD::OPC_FilterValue, 128, 6, 4, 0, // Skip to: 3025
/* 3021 */    MCD::OPC_Decode, 133, 2, 27, // Opcode: BDNZAm
/* 3025 */    MCD::OPC_FilterValue, 160, 6, 4, 0, // Skip to: 3034
/* 3030 */    MCD::OPC_Decode, 134, 2, 27, // Opcode: BDNZAp
/* 3034 */    MCD::OPC_FilterValue, 192, 6, 4, 0, // Skip to: 3043
/* 3039 */    MCD::OPC_Decode, 153, 2, 27, // Opcode: BDZAm
/* 3043 */    MCD::OPC_FilterValue, 224, 6, 4, 0, // Skip to: 3052
/* 3048 */    MCD::OPC_Decode, 154, 2, 27, // Opcode: BDZAp
/* 3052 */    MCD::OPC_Decode, 176, 15, 28, // Opcode: gBCA
/* 3056 */    MCD::OPC_FilterValue, 3, 49, 42, // Skip to: 13861
/* 3060 */    MCD::OPC_ExtractField, 16, 10,  // Inst{25-16} ...
/* 3063 */    MCD::OPC_FilterValue, 128, 4, 4, 0, // Skip to: 3072
/* 3068 */    MCD::OPC_Decode, 136, 2, 27, // Opcode: BDNZLA
/* 3072 */    MCD::OPC_FilterValue, 192, 4, 4, 0, // Skip to: 3081
/* 3077 */    MCD::OPC_Decode, 156, 2, 27, // Opcode: BDZLA
/* 3081 */    MCD::OPC_FilterValue, 128, 6, 4, 0, // Skip to: 3090
/* 3086 */    MCD::OPC_Decode, 137, 2, 27, // Opcode: BDNZLAm
/* 3090 */    MCD::OPC_FilterValue, 160, 6, 4, 0, // Skip to: 3099
/* 3095 */    MCD::OPC_Decode, 138, 2, 27, // Opcode: BDNZLAp
/* 3099 */    MCD::OPC_FilterValue, 192, 6, 4, 0, // Skip to: 3108
/* 3104 */    MCD::OPC_Decode, 157, 2, 27, // Opcode: BDZLAm
/* 3108 */    MCD::OPC_FilterValue, 224, 6, 4, 0, // Skip to: 3117
/* 3113 */    MCD::OPC_Decode, 158, 2, 27, // Opcode: BDZLAp
/* 3117 */    MCD::OPC_Decode, 181, 15, 28, // Opcode: gBCLA
/* 3121 */    MCD::OPC_FilterValue, 17, 10, 0, // Skip to: 3135
/* 3125 */    MCD::OPC_CheckField, 1, 1, 1, 234, 41, // Skip to: 13861
/* 3131 */    MCD::OPC_Decode, 185, 9, 29, // Opcode: SC
/* 3135 */    MCD::OPC_FilterValue, 18, 35, 0, // Skip to: 3174
/* 3139 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 3142 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 3150
/* 3146 */    MCD::OPC_Decode, 211, 1, 30, // Opcode: B
/* 3150 */    MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 3158
/* 3154 */    MCD::OPC_Decode, 170, 2, 30, // Opcode: BL
/* 3158 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 3166
/* 3162 */    MCD::OPC_Decode, 212, 1, 30, // Opcode: BA
/* 3166 */    MCD::OPC_FilterValue, 3, 195, 41, // Skip to: 13861
/* 3170 */    MCD::OPC_Decode, 176, 2, 30, // Opcode: BLA
/* 3174 */    MCD::OPC_FilterValue, 19, 39, 2, // Skip to: 3729
/* 3178 */    MCD::OPC_ExtractField, 0, 11,  // Inst{10-0} ...
/* 3181 */    MCD::OPC_FilterValue, 0, 16, 0, // Skip to: 3201
/* 3185 */    MCD::OPC_CheckField, 21, 2, 0, 174, 41, // Skip to: 13861
/* 3191 */    MCD::OPC_CheckField, 11, 7, 0, 168, 41, // Skip to: 13861
/* 3197 */    MCD::OPC_Decode, 236, 6, 31, // Opcode: MCRF
/* 3201 */    MCD::OPC_FilterValue, 32, 119, 0, // Skip to: 3324
/* 3205 */    MCD::OPC_ExtractField, 13, 3,  // Inst{15-13} ...
/* 3208 */    MCD::OPC_FilterValue, 0, 153, 41, // Skip to: 13861
/* 3212 */    MCD::OPC_ExtractField, 16, 10,  // Inst{25-16} ...
/* 3215 */    MCD::OPC_FilterValue, 128, 4, 10, 0, // Skip to: 3230
/* 3220 */    MCD::OPC_CheckField, 11, 2, 0, 94, 0, // Skip to: 3320
/* 3226 */    MCD::OPC_Decode, 139, 2, 0, // Opcode: BDNZLR
/* 3230 */    MCD::OPC_FilterValue, 192, 4, 10, 0, // Skip to: 3245
/* 3235 */    MCD::OPC_CheckField, 11, 2, 0, 79, 0, // Skip to: 3320
/* 3241 */    MCD::OPC_Decode, 159, 2, 0, // Opcode: BDZLR
/* 3245 */    MCD::OPC_FilterValue, 128, 5, 10, 0, // Skip to: 3260
/* 3250 */    MCD::OPC_CheckField, 11, 2, 0, 64, 0, // Skip to: 3320
/* 3256 */    MCD::OPC_Decode, 179, 2, 0, // Opcode: BLR
/* 3260 */    MCD::OPC_FilterValue, 128, 6, 10, 0, // Skip to: 3275
/* 3265 */    MCD::OPC_CheckField, 11, 2, 0, 49, 0, // Skip to: 3320
/* 3271 */    MCD::OPC_Decode, 144, 2, 0, // Opcode: BDNZLRm
/* 3275 */    MCD::OPC_FilterValue, 160, 6, 10, 0, // Skip to: 3290
/* 3280 */    MCD::OPC_CheckField, 11, 2, 0, 34, 0, // Skip to: 3320
/* 3286 */    MCD::OPC_Decode, 145, 2, 0, // Opcode: BDNZLRp
/* 3290 */    MCD::OPC_FilterValue, 192, 6, 10, 0, // Skip to: 3305
/* 3295 */    MCD::OPC_CheckField, 11, 2, 0, 19, 0, // Skip to: 3320
/* 3301 */    MCD::OPC_Decode, 164, 2, 0, // Opcode: BDZLRm
/* 3305 */    MCD::OPC_FilterValue, 224, 6, 10, 0, // Skip to: 3320
/* 3310 */    MCD::OPC_CheckField, 11, 2, 0, 4, 0, // Skip to: 3320
/* 3316 */    MCD::OPC_Decode, 165, 2, 0, // Opcode: BDZLRp
/* 3320 */    MCD::OPC_Decode, 183, 15, 32, // Opcode: gBCLR
/* 3324 */    MCD::OPC_FilterValue, 33, 119, 0, // Skip to: 3447
/* 3328 */    MCD::OPC_ExtractField, 13, 3,  // Inst{15-13} ...
/* 3331 */    MCD::OPC_FilterValue, 0, 30, 41, // Skip to: 13861
/* 3335 */    MCD::OPC_ExtractField, 16, 10,  // Inst{25-16} ...
/* 3338 */    MCD::OPC_FilterValue, 128, 4, 10, 0, // Skip to: 3353
/* 3343 */    MCD::OPC_CheckField, 11, 2, 0, 94, 0, // Skip to: 3443
/* 3349 */    MCD::OPC_Decode, 141, 2, 0, // Opcode: BDNZLRL
/* 3353 */    MCD::OPC_FilterValue, 192, 4, 10, 0, // Skip to: 3368
/* 3358 */    MCD::OPC_CheckField, 11, 2, 0, 79, 0, // Skip to: 3443
/* 3364 */    MCD::OPC_Decode, 161, 2, 0, // Opcode: BDZLRL
/* 3368 */    MCD::OPC_FilterValue, 128, 5, 10, 0, // Skip to: 3383
/* 3373 */    MCD::OPC_CheckField, 11, 2, 0, 64, 0, // Skip to: 3443
/* 3379 */    MCD::OPC_Decode, 181, 2, 0, // Opcode: BLRL
/* 3383 */    MCD::OPC_FilterValue, 128, 6, 10, 0, // Skip to: 3398
/* 3388 */    MCD::OPC_CheckField, 11, 2, 0, 49, 0, // Skip to: 3443
/* 3394 */    MCD::OPC_Decode, 142, 2, 0, // Opcode: BDNZLRLm
/* 3398 */    MCD::OPC_FilterValue, 160, 6, 10, 0, // Skip to: 3413
/* 3403 */    MCD::OPC_CheckField, 11, 2, 0, 34, 0, // Skip to: 3443
/* 3409 */    MCD::OPC_Decode, 143, 2, 0, // Opcode: BDNZLRLp
/* 3413 */    MCD::OPC_FilterValue, 192, 6, 10, 0, // Skip to: 3428
/* 3418 */    MCD::OPC_CheckField, 11, 2, 0, 19, 0, // Skip to: 3443
/* 3424 */    MCD::OPC_Decode, 162, 2, 0, // Opcode: BDZLRLm
/* 3428 */    MCD::OPC_FilterValue, 224, 6, 10, 0, // Skip to: 3443
/* 3433 */    MCD::OPC_CheckField, 11, 2, 0, 4, 0, // Skip to: 3443
/* 3439 */    MCD::OPC_Decode, 163, 2, 0, // Opcode: BDZLRLp
/* 3443 */    MCD::OPC_Decode, 184, 15, 32, // Opcode: gBCLRL
/* 3447 */    MCD::OPC_FilterValue, 36, 10, 0, // Skip to: 3461
/* 3451 */    MCD::OPC_CheckField, 11, 15, 0, 164, 40, // Skip to: 13861
/* 3457 */    MCD::OPC_Decode, 144, 9, 0, // Opcode: RFID
/* 3461 */    MCD::OPC_FilterValue, 66, 4, 0, // Skip to: 3469
/* 3465 */    MCD::OPC_Decode, 237, 2, 33, // Opcode: CRNOR
/* 3469 */    MCD::OPC_FilterValue, 76, 10, 0, // Skip to: 3483
/* 3473 */    MCD::OPC_CheckField, 11, 15, 0, 142, 40, // Skip to: 13861
/* 3479 */    MCD::OPC_Decode, 145, 9, 0, // Opcode: RFMCI
/* 3483 */    MCD::OPC_FilterValue, 78, 10, 0, // Skip to: 3497
/* 3487 */    MCD::OPC_CheckField, 11, 15, 0, 128, 40, // Skip to: 13861
/* 3493 */    MCD::OPC_Decode, 141, 9, 0, // Opcode: RFDI
/* 3497 */    MCD::OPC_FilterValue, 100, 10, 0, // Skip to: 3511
/* 3501 */    MCD::OPC_CheckField, 11, 15, 0, 114, 40, // Skip to: 13861
/* 3507 */    MCD::OPC_Decode, 143, 9, 0, // Opcode: RFI
/* 3511 */    MCD::OPC_FilterValue, 102, 10, 0, // Skip to: 3525
/* 3515 */    MCD::OPC_CheckField, 11, 15, 0, 100, 40, // Skip to: 13861
/* 3521 */    MCD::OPC_Decode, 140, 9, 0, // Opcode: RFCI
/* 3525 */    MCD::OPC_FilterValue, 130, 2, 4, 0, // Skip to: 3534
/* 3530 */    MCD::OPC_Decode, 234, 2, 33, // Opcode: CRANDC
/* 3534 */    MCD::OPC_FilterValue, 164, 2, 10, 0, // Skip to: 3549
/* 3539 */    MCD::OPC_CheckField, 12, 14, 0, 76, 40, // Skip to: 13861
/* 3545 */    MCD::OPC_Decode, 142, 9, 34, // Opcode: RFEBB
/* 3549 */    MCD::OPC_FilterValue, 172, 2, 10, 0, // Skip to: 3564
/* 3554 */    MCD::OPC_CheckField, 11, 15, 0, 61, 40, // Skip to: 13861
/* 3560 */    MCD::OPC_Decode, 250, 5, 0, // Opcode: ISYNC
/* 3564 */    MCD::OPC_FilterValue, 130, 3, 4, 0, // Skip to: 3573
/* 3569 */    MCD::OPC_Decode, 242, 2, 33, // Opcode: CRXOR
/* 3573 */    MCD::OPC_FilterValue, 194, 3, 4, 0, // Skip to: 3582
/* 3578 */    MCD::OPC_Decode, 236, 2, 33, // Opcode: CRNAND
/* 3582 */    MCD::OPC_FilterValue, 130, 4, 4, 0, // Skip to: 3591
/* 3587 */    MCD::OPC_Decode, 233, 2, 33, // Opcode: CRAND
/* 3591 */    MCD::OPC_FilterValue, 164, 4, 10, 0, // Skip to: 3606
/* 3596 */    MCD::OPC_CheckField, 11, 15, 0, 19, 40, // Skip to: 13861
/* 3602 */    MCD::OPC_Decode, 235, 5, 0, // Opcode: HRFID
/* 3606 */    MCD::OPC_FilterValue, 194, 4, 4, 0, // Skip to: 3615
/* 3611 */    MCD::OPC_Decode, 235, 2, 33, // Opcode: CREQV
/* 3615 */    MCD::OPC_FilterValue, 228, 5, 10, 0, // Skip to: 3630
/* 3620 */    MCD::OPC_CheckField, 11, 15, 0, 251, 39, // Skip to: 13861
/* 3626 */    MCD::OPC_Decode, 158, 10, 0, // Opcode: STOP
/* 3630 */    MCD::OPC_FilterValue, 194, 6, 4, 0, // Skip to: 3639
/* 3635 */    MCD::OPC_Decode, 239, 2, 33, // Opcode: CRORC
/* 3639 */    MCD::OPC_FilterValue, 228, 6, 10, 0, // Skip to: 3654
/* 3644 */    MCD::OPC_CheckField, 11, 15, 0, 227, 39, // Skip to: 13861
/* 3650 */    MCD::OPC_Decode, 198, 7, 0, // Opcode: NAP
/* 3654 */    MCD::OPC_FilterValue, 130, 7, 4, 0, // Skip to: 3663
/* 3659 */    MCD::OPC_Decode, 238, 2, 33, // Opcode: CROR
/* 3663 */    MCD::OPC_FilterValue, 160, 8, 28, 0, // Skip to: 3696
/* 3668 */    MCD::OPC_ExtractField, 13, 3,  // Inst{15-13} ...
/* 3671 */    MCD::OPC_FilterValue, 0, 202, 39, // Skip to: 13861
/* 3675 */    MCD::OPC_CheckField, 16, 10, 128, 5, 10, 0, // Skip to: 3692
/* 3682 */    MCD::OPC_CheckField, 11, 2, 0, 4, 0, // Skip to: 3692
/* 3688 */    MCD::OPC_Decode, 252, 1, 0, // Opcode: BCTR
/* 3692 */    MCD::OPC_Decode, 178, 15, 32, // Opcode: gBCCTR
/* 3696 */    MCD::OPC_FilterValue, 161, 8, 176, 39, // Skip to: 13861
/* 3701 */    MCD::OPC_ExtractField, 13, 3,  // Inst{15-13} ...
/* 3704 */    MCD::OPC_FilterValue, 0, 169, 39, // Skip to: 13861
/* 3708 */    MCD::OPC_CheckField, 16, 10, 128, 5, 10, 0, // Skip to: 3725
/* 3715 */    MCD::OPC_CheckField, 11, 2, 0, 4, 0, // Skip to: 3725
/* 3721 */    MCD::OPC_Decode, 254, 1, 0, // Opcode: BCTRL
/* 3725 */    MCD::OPC_Decode, 179, 15, 32, // Opcode: gBCCTRL
/* 3729 */    MCD::OPC_FilterValue, 20, 19, 0, // Skip to: 3752
/* 3733 */    MCD::OPC_ExtractField, 0, 1,  // Inst{0} ...
/* 3736 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 3744
/* 3740 */    MCD::OPC_Decode, 162, 9, 35, // Opcode: RLWIMI
/* 3744 */    MCD::OPC_FilterValue, 1, 129, 39, // Skip to: 13861
/* 3748 */    MCD::OPC_Decode, 166, 9, 35, // Opcode: RLWIMIo
/* 3752 */    MCD::OPC_FilterValue, 21, 19, 0, // Skip to: 3775
/* 3756 */    MCD::OPC_ExtractField, 0, 1,  // Inst{0} ...
/* 3759 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 3767
/* 3763 */    MCD::OPC_Decode, 168, 9, 36, // Opcode: RLWINM
/* 3767 */    MCD::OPC_FilterValue, 1, 106, 39, // Skip to: 13861
/* 3771 */    MCD::OPC_Decode, 172, 9, 36, // Opcode: RLWINMo
/* 3775 */    MCD::OPC_FilterValue, 23, 19, 0, // Skip to: 3798
/* 3779 */    MCD::OPC_ExtractField, 0, 1,  // Inst{0} ...
/* 3782 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 3790
/* 3786 */    MCD::OPC_Decode, 174, 9, 37, // Opcode: RLWNM
/* 3790 */    MCD::OPC_FilterValue, 1, 83, 39, // Skip to: 13861
/* 3794 */    MCD::OPC_Decode, 178, 9, 37, // Opcode: RLWNMo
/* 3798 */    MCD::OPC_FilterValue, 24, 14, 0, // Skip to: 3816
/* 3802 */    MCD::OPC_CheckField, 0, 26, 0, 4, 0, // Skip to: 3812
/* 3808 */    MCD::OPC_Decode, 203, 7, 0, // Opcode: NOP
/* 3812 */    MCD::OPC_Decode, 217, 7, 38, // Opcode: ORI
/* 3816 */    MCD::OPC_FilterValue, 25, 4, 0, // Skip to: 3824
/* 3820 */    MCD::OPC_Decode, 219, 7, 38, // Opcode: ORIS
/* 3824 */    MCD::OPC_FilterValue, 26, 4, 0, // Skip to: 3832
/* 3828 */    MCD::OPC_Decode, 179, 13, 38, // Opcode: XORI
/* 3832 */    MCD::OPC_FilterValue, 27, 4, 0, // Skip to: 3840
/* 3836 */    MCD::OPC_Decode, 181, 13, 38, // Opcode: XORIS
/* 3840 */    MCD::OPC_FilterValue, 28, 4, 0, // Skip to: 3848
/* 3844 */    MCD::OPC_Decode, 155, 1, 38, // Opcode: ANDIo
/* 3848 */    MCD::OPC_FilterValue, 29, 4, 0, // Skip to: 3856
/* 3852 */    MCD::OPC_Decode, 153, 1, 38, // Opcode: ANDISo
/* 3856 */    MCD::OPC_FilterValue, 30, 134, 0, // Skip to: 3994
/* 3860 */    MCD::OPC_ExtractField, 2, 3,  // Inst{4-2} ...
/* 3863 */    MCD::OPC_FilterValue, 0, 19, 0, // Skip to: 3886
/* 3867 */    MCD::OPC_ExtractField, 0, 1,  // Inst{0} ...
/* 3870 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 3878
/* 3874 */    MCD::OPC_Decode, 151, 9, 39, // Opcode: RLDICL
/* 3878 */    MCD::OPC_FilterValue, 1, 251, 38, // Skip to: 13861
/* 3882 */    MCD::OPC_Decode, 155, 9, 39, // Opcode: RLDICLo
/* 3886 */    MCD::OPC_FilterValue, 1, 19, 0, // Skip to: 3909
/* 3890 */    MCD::OPC_ExtractField, 0, 1,  // Inst{0} ...
/* 3893 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 3901
/* 3897 */    MCD::OPC_Decode, 156, 9, 39, // Opcode: RLDICR
/* 3901 */    MCD::OPC_FilterValue, 1, 228, 38, // Skip to: 13861
/* 3905 */    MCD::OPC_Decode, 158, 9, 39, // Opcode: RLDICRo
/* 3909 */    MCD::OPC_FilterValue, 2, 19, 0, // Skip to: 3932
/* 3913 */    MCD::OPC_ExtractField, 0, 1,  // Inst{0} ...
/* 3916 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 3924
/* 3920 */    MCD::OPC_Decode, 150, 9, 39, // Opcode: RLDIC
/* 3924 */    MCD::OPC_FilterValue, 1, 205, 38, // Skip to: 13861
/* 3928 */    MCD::OPC_Decode, 159, 9, 39, // Opcode: RLDICo
/* 3932 */    MCD::OPC_FilterValue, 3, 19, 0, // Skip to: 3955
/* 3936 */    MCD::OPC_ExtractField, 0, 1,  // Inst{0} ...
/* 3939 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 3947
/* 3943 */    MCD::OPC_Decode, 160, 9, 40, // Opcode: RLDIMI
/* 3947 */    MCD::OPC_FilterValue, 1, 182, 38, // Skip to: 13861
/* 3951 */    MCD::OPC_Decode, 161, 9, 40, // Opcode: RLDIMIo
/* 3955 */    MCD::OPC_FilterValue, 4, 174, 38, // Skip to: 13861
/* 3959 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 3962 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 3970
/* 3966 */    MCD::OPC_Decode, 146, 9, 41, // Opcode: RLDCL
/* 3970 */    MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 3978
/* 3974 */    MCD::OPC_Decode, 147, 9, 41, // Opcode: RLDCLo
/* 3978 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 3986
/* 3982 */    MCD::OPC_Decode, 148, 9, 41, // Opcode: RLDCR
/* 3986 */    MCD::OPC_FilterValue, 3, 143, 38, // Skip to: 13861
/* 3990 */    MCD::OPC_Decode, 149, 9, 41, // Opcode: RLDCRo
/* 3994 */    MCD::OPC_FilterValue, 31, 95, 17, // Skip to: 8445
/* 3998 */    MCD::OPC_ExtractField, 2, 4,  // Inst{5-2} ...
/* 4001 */    MCD::OPC_FilterValue, 0, 133, 0, // Skip to: 4138
/* 4005 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 4008 */    MCD::OPC_FilterValue, 0, 31, 0, // Skip to: 4043
/* 4012 */    MCD::OPC_ExtractField, 21, 2,  // Inst{22-21} ...
/* 4015 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 4029
/* 4019 */    MCD::OPC_CheckField, 0, 2, 0, 108, 38, // Skip to: 13861
/* 4025 */    MCD::OPC_Decode, 206, 2, 42, // Opcode: CMPW
/* 4029 */    MCD::OPC_FilterValue, 1, 100, 38, // Skip to: 13861
/* 4033 */    MCD::OPC_CheckField, 0, 2, 0, 94, 38, // Skip to: 13861
/* 4039 */    MCD::OPC_Decode, 197, 2, 43, // Opcode: CMPD
/* 4043 */    MCD::OPC_FilterValue, 1, 31, 0, // Skip to: 4078
/* 4047 */    MCD::OPC_ExtractField, 21, 2,  // Inst{22-21} ...
/* 4050 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 4064
/* 4054 */    MCD::OPC_CheckField, 0, 2, 0, 73, 38, // Skip to: 13861
/* 4060 */    MCD::OPC_Decode, 202, 2, 42, // Opcode: CMPLW
/* 4064 */    MCD::OPC_FilterValue, 1, 65, 38, // Skip to: 13861
/* 4068 */    MCD::OPC_CheckField, 0, 2, 0, 59, 38, // Skip to: 13861
/* 4074 */    MCD::OPC_Decode, 200, 2, 43, // Opcode: CMPLD
/* 4078 */    MCD::OPC_FilterValue, 6, 16, 0, // Skip to: 4098
/* 4082 */    MCD::OPC_CheckField, 22, 1, 0, 45, 38, // Skip to: 13861
/* 4088 */    MCD::OPC_CheckField, 0, 2, 0, 39, 38, // Skip to: 13861
/* 4094 */    MCD::OPC_Decode, 204, 2, 44, // Opcode: CMPRB
/* 4098 */    MCD::OPC_FilterValue, 7, 16, 0, // Skip to: 4118
/* 4102 */    MCD::OPC_CheckField, 21, 2, 0, 25, 38, // Skip to: 13861
/* 4108 */    MCD::OPC_CheckField, 0, 2, 0, 19, 38, // Skip to: 13861
/* 4114 */    MCD::OPC_Decode, 199, 2, 45, // Opcode: CMPEQB
/* 4118 */    MCD::OPC_FilterValue, 18, 11, 38, // Skip to: 13861
/* 4122 */    MCD::OPC_CheckField, 11, 12, 0, 5, 38, // Skip to: 13861
/* 4128 */    MCD::OPC_CheckField, 0, 2, 0, 255, 37, // Skip to: 13861
/* 4134 */    MCD::OPC_Decode, 238, 6, 46, // Opcode: MCRXRX
/* 4138 */    MCD::OPC_FilterValue, 1, 65, 0, // Skip to: 4207
/* 4142 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 4145 */    MCD::OPC_FilterValue, 4, 16, 0, // Skip to: 4165
/* 4149 */    MCD::OPC_CheckField, 16, 1, 0, 234, 37, // Skip to: 13861
/* 4155 */    MCD::OPC_CheckField, 1, 1, 1, 228, 37, // Skip to: 13861
/* 4161 */    MCD::OPC_Decode, 174, 13, 47, // Opcode: WRTEE
/* 4165 */    MCD::OPC_FilterValue, 5, 10, 0, // Skip to: 4179
/* 4169 */    MCD::OPC_CheckField, 1, 1, 1, 214, 37, // Skip to: 13861
/* 4175 */    MCD::OPC_Decode, 175, 13, 48, // Opcode: WRTEEI
/* 4179 */    MCD::OPC_FilterValue, 10, 10, 0, // Skip to: 4193
/* 4183 */    MCD::OPC_CheckField, 0, 2, 2, 200, 37, // Skip to: 13861
/* 4189 */    MCD::OPC_Decode, 244, 6, 49, // Opcode: MFDCR
/* 4193 */    MCD::OPC_FilterValue, 14, 192, 37, // Skip to: 13861
/* 4197 */    MCD::OPC_CheckField, 0, 2, 2, 186, 37, // Skip to: 13861
/* 4203 */    MCD::OPC_Decode, 150, 7, 49, // Opcode: MTDCR
/* 4207 */    MCD::OPC_FilterValue, 2, 44, 0, // Skip to: 4255
/* 4211 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 4214 */    MCD::OPC_FilterValue, 0, 23, 0, // Skip to: 4241
/* 4218 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 4221 */    MCD::OPC_FilterValue, 0, 164, 37, // Skip to: 13861
/* 4225 */    MCD::OPC_CheckField, 11, 15, 128, 248, 1, 4, 0, // Skip to: 4237
/* 4233 */    MCD::OPC_Decode, 130, 11, 0, // Opcode: TRAP
/* 4237 */    MCD::OPC_Decode, 134, 11, 50, // Opcode: TW
/* 4241 */    MCD::OPC_FilterValue, 2, 144, 37, // Skip to: 13861
/* 4245 */    MCD::OPC_CheckField, 0, 2, 0, 138, 37, // Skip to: 13861
/* 4251 */    MCD::OPC_Decode, 241, 10, 51, // Opcode: TD
/* 4255 */    MCD::OPC_FilterValue, 3, 121, 1, // Skip to: 4636
/* 4259 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 4262 */    MCD::OPC_FilterValue, 0, 19, 0, // Skip to: 4285
/* 4266 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 4269 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 4277
/* 4273 */    MCD::OPC_Decode, 193, 6, 52, // Opcode: LVSL
/* 4277 */    MCD::OPC_FilterValue, 2, 108, 37, // Skip to: 13861
/* 4281 */    MCD::OPC_Decode, 190, 6, 52, // Opcode: LVEBX
/* 4285 */    MCD::OPC_FilterValue, 1, 19, 0, // Skip to: 4308
/* 4289 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 4292 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 4300
/* 4296 */    MCD::OPC_Decode, 194, 6, 52, // Opcode: LVSR
/* 4300 */    MCD::OPC_FilterValue, 2, 85, 37, // Skip to: 13861
/* 4304 */    MCD::OPC_Decode, 191, 6, 52, // Opcode: LVEHX
/* 4308 */    MCD::OPC_FilterValue, 2, 10, 0, // Skip to: 4322
/* 4312 */    MCD::OPC_CheckField, 0, 2, 2, 71, 37, // Skip to: 13861
/* 4318 */    MCD::OPC_Decode, 192, 6, 52, // Opcode: LVEWX
/* 4322 */    MCD::OPC_FilterValue, 3, 10, 0, // Skip to: 4336
/* 4326 */    MCD::OPC_CheckField, 0, 2, 2, 57, 37, // Skip to: 13861
/* 4332 */    MCD::OPC_Decode, 195, 6, 52, // Opcode: LVX
/* 4336 */    MCD::OPC_FilterValue, 4, 10, 0, // Skip to: 4350
/* 4340 */    MCD::OPC_CheckField, 0, 2, 2, 43, 37, // Skip to: 13861
/* 4346 */    MCD::OPC_Decode, 160, 10, 52, // Opcode: STVEBX
/* 4350 */    MCD::OPC_FilterValue, 5, 10, 0, // Skip to: 4364
/* 4354 */    MCD::OPC_CheckField, 0, 2, 2, 29, 37, // Skip to: 13861
/* 4360 */    MCD::OPC_Decode, 161, 10, 52, // Opcode: STVEHX
/* 4364 */    MCD::OPC_FilterValue, 6, 25, 0, // Skip to: 4393
/* 4368 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 4371 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 4385
/* 4375 */    MCD::OPC_CheckField, 25, 1, 0, 8, 37, // Skip to: 13861
/* 4381 */    MCD::OPC_Decode, 238, 5, 53, // Opcode: ICBLQ
/* 4385 */    MCD::OPC_FilterValue, 2, 0, 37, // Skip to: 13861
/* 4389 */    MCD::OPC_Decode, 162, 10, 52, // Opcode: STVEWX
/* 4393 */    MCD::OPC_FilterValue, 7, 25, 0, // Skip to: 4422
/* 4397 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 4400 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 4414
/* 4404 */    MCD::OPC_CheckField, 25, 1, 0, 235, 36, // Skip to: 13861
/* 4410 */    MCD::OPC_Decode, 237, 5, 53, // Opcode: ICBLC
/* 4414 */    MCD::OPC_FilterValue, 2, 227, 36, // Skip to: 13861
/* 4418 */    MCD::OPC_Decode, 163, 10, 52, // Opcode: STVX
/* 4422 */    MCD::OPC_FilterValue, 11, 10, 0, // Skip to: 4436
/* 4426 */    MCD::OPC_CheckField, 0, 2, 2, 213, 36, // Skip to: 13861
/* 4432 */    MCD::OPC_Decode, 196, 6, 52, // Opcode: LVXL
/* 4436 */    MCD::OPC_FilterValue, 14, 16, 0, // Skip to: 4456
/* 4440 */    MCD::OPC_CheckField, 21, 5, 0, 199, 36, // Skip to: 13861
/* 4446 */    MCD::OPC_CheckField, 0, 2, 0, 193, 36, // Skip to: 13861
/* 4452 */    MCD::OPC_Decode, 135, 3, 54, // Opcode: DCCCI
/* 4456 */    MCD::OPC_FilterValue, 15, 25, 0, // Skip to: 4485
/* 4460 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 4463 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 4477
/* 4467 */    MCD::OPC_CheckField, 25, 1, 0, 172, 36, // Skip to: 13861
/* 4473 */    MCD::OPC_Decode, 240, 5, 53, // Opcode: ICBTLS
/* 4477 */    MCD::OPC_FilterValue, 2, 164, 36, // Skip to: 13861
/* 4481 */    MCD::OPC_Decode, 164, 10, 52, // Opcode: STVXL
/* 4485 */    MCD::OPC_FilterValue, 18, 10, 0, // Skip to: 4499
/* 4489 */    MCD::OPC_CheckField, 0, 2, 0, 150, 36, // Skip to: 13861
/* 4495 */    MCD::OPC_Decode, 200, 6, 55, // Opcode: LWAT
/* 4499 */    MCD::OPC_FilterValue, 19, 10, 0, // Skip to: 4513
/* 4503 */    MCD::OPC_CheckField, 0, 2, 0, 136, 36, // Skip to: 13861
/* 4509 */    MCD::OPC_Decode, 139, 6, 56, // Opcode: LDAT
/* 4513 */    MCD::OPC_FilterValue, 22, 10, 0, // Skip to: 4527
/* 4517 */    MCD::OPC_CheckField, 0, 2, 0, 122, 36, // Skip to: 13861
/* 4523 */    MCD::OPC_Decode, 167, 10, 55, // Opcode: STWAT
/* 4527 */    MCD::OPC_FilterValue, 23, 10, 0, // Skip to: 4541
/* 4531 */    MCD::OPC_CheckField, 0, 2, 0, 108, 36, // Skip to: 13861
/* 4537 */    MCD::OPC_Decode, 130, 10, 56, // Opcode: STDAT
/* 4541 */    MCD::OPC_FilterValue, 24, 16, 0, // Skip to: 4561
/* 4545 */    MCD::OPC_CheckField, 22, 4, 0, 94, 36, // Skip to: 13861
/* 4551 */    MCD::OPC_CheckField, 0, 2, 0, 88, 36, // Skip to: 13861
/* 4557 */    MCD::OPC_Decode, 221, 2, 57, // Opcode: CP_COPY
/* 4561 */    MCD::OPC_FilterValue, 26, 16, 0, // Skip to: 4581
/* 4565 */    MCD::OPC_CheckField, 11, 15, 0, 74, 36, // Skip to: 13861
/* 4571 */    MCD::OPC_CheckField, 0, 2, 0, 68, 36, // Skip to: 13861
/* 4577 */    MCD::OPC_Decode, 220, 2, 0, // Opcode: CP_ABORT
/* 4581 */    MCD::OPC_FilterValue, 28, 31, 0, // Skip to: 4616
/* 4585 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 4588 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 4602
/* 4592 */    MCD::OPC_CheckField, 22, 4, 0, 47, 36, // Skip to: 13861
/* 4598 */    MCD::OPC_Decode, 225, 2, 57, // Opcode: CP_PASTE
/* 4602 */    MCD::OPC_FilterValue, 1, 39, 36, // Skip to: 13861
/* 4606 */    MCD::OPC_CheckField, 22, 4, 0, 33, 36, // Skip to: 13861
/* 4612 */    MCD::OPC_Decode, 229, 2, 57, // Opcode: CP_PASTEo
/* 4616 */    MCD::OPC_FilterValue, 30, 25, 36, // Skip to: 13861
/* 4620 */    MCD::OPC_CheckField, 21, 5, 0, 19, 36, // Skip to: 13861
/* 4626 */    MCD::OPC_CheckField, 0, 2, 0, 13, 36, // Skip to: 13861
/* 4632 */    MCD::OPC_Decode, 241, 5, 54, // Opcode: ICCCI
/* 4636 */    MCD::OPC_FilterValue, 4, 96, 1, // Skip to: 4992
/* 4640 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 4643 */    MCD::OPC_FilterValue, 0, 35, 0, // Skip to: 4682
/* 4647 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 4650 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 4658
/* 4654 */    MCD::OPC_Decode, 197, 10, 58, // Opcode: SUBFC
/* 4658 */    MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 4666
/* 4662 */    MCD::OPC_Decode, 200, 10, 58, // Opcode: SUBFCo
/* 4666 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 4674
/* 4670 */    MCD::OPC_Decode, 178, 7, 59, // Opcode: MULHDU
/* 4674 */    MCD::OPC_FilterValue, 3, 223, 35, // Skip to: 13861
/* 4678 */    MCD::OPC_Decode, 179, 7, 59, // Opcode: MULHDUo
/* 4682 */    MCD::OPC_FilterValue, 1, 19, 0, // Skip to: 4705
/* 4686 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 4689 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 4697
/* 4693 */    MCD::OPC_Decode, 194, 10, 58, // Opcode: SUBF
/* 4697 */    MCD::OPC_FilterValue, 1, 200, 35, // Skip to: 13861
/* 4701 */    MCD::OPC_Decode, 215, 10, 58, // Opcode: SUBFo
/* 4705 */    MCD::OPC_FilterValue, 2, 19, 0, // Skip to: 4728
/* 4709 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 4712 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 4720
/* 4716 */    MCD::OPC_Decode, 177, 7, 59, // Opcode: MULHD
/* 4720 */    MCD::OPC_FilterValue, 3, 177, 35, // Skip to: 13861
/* 4724 */    MCD::OPC_Decode, 180, 7, 59, // Opcode: MULHDo
/* 4728 */    MCD::OPC_FilterValue, 3, 31, 0, // Skip to: 4763
/* 4732 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 4735 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 4749
/* 4739 */    MCD::OPC_CheckField, 11, 5, 0, 156, 35, // Skip to: 13861
/* 4745 */    MCD::OPC_Decode, 199, 7, 60, // Opcode: NEG
/* 4749 */    MCD::OPC_FilterValue, 1, 148, 35, // Skip to: 13861
/* 4753 */    MCD::OPC_CheckField, 11, 5, 0, 142, 35, // Skip to: 13861
/* 4759 */    MCD::OPC_Decode, 202, 7, 60, // Opcode: NEGo
/* 4763 */    MCD::OPC_FilterValue, 4, 19, 0, // Skip to: 4786
/* 4767 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 4770 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 4778
/* 4774 */    MCD::OPC_Decode, 201, 10, 58, // Opcode: SUBFE
/* 4778 */    MCD::OPC_FilterValue, 1, 119, 35, // Skip to: 13861
/* 4782 */    MCD::OPC_Decode, 204, 10, 58, // Opcode: SUBFEo
/* 4786 */    MCD::OPC_FilterValue, 6, 31, 0, // Skip to: 4821
/* 4790 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 4793 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 4807
/* 4797 */    MCD::OPC_CheckField, 11, 5, 0, 98, 35, // Skip to: 13861
/* 4803 */    MCD::OPC_Decode, 211, 10, 60, // Opcode: SUBFZE
/* 4807 */    MCD::OPC_FilterValue, 1, 90, 35, // Skip to: 13861
/* 4811 */    MCD::OPC_CheckField, 11, 5, 0, 84, 35, // Skip to: 13861
/* 4817 */    MCD::OPC_Decode, 214, 10, 60, // Opcode: SUBFZEo
/* 4821 */    MCD::OPC_FilterValue, 7, 47, 0, // Skip to: 4872
/* 4825 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 4828 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 4842
/* 4832 */    MCD::OPC_CheckField, 11, 5, 0, 63, 35, // Skip to: 13861
/* 4838 */    MCD::OPC_Decode, 207, 10, 60, // Opcode: SUBFME
/* 4842 */    MCD::OPC_FilterValue, 1, 10, 0, // Skip to: 4856
/* 4846 */    MCD::OPC_CheckField, 11, 5, 0, 49, 35, // Skip to: 13861
/* 4852 */    MCD::OPC_Decode, 210, 10, 60, // Opcode: SUBFMEo
/* 4856 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 4864
/* 4860 */    MCD::OPC_Decode, 185, 7, 59, // Opcode: MULLD
/* 4864 */    MCD::OPC_FilterValue, 3, 33, 35, // Skip to: 13861
/* 4868 */    MCD::OPC_Decode, 186, 7, 59, // Opcode: MULLDo
/* 4872 */    MCD::OPC_FilterValue, 8, 10, 0, // Skip to: 4886
/* 4876 */    MCD::OPC_CheckField, 0, 2, 2, 19, 35, // Skip to: 13861
/* 4882 */    MCD::OPC_Decode, 140, 7, 59, // Opcode: MODUD
/* 4886 */    MCD::OPC_FilterValue, 12, 19, 0, // Skip to: 4909
/* 4890 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 4893 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 4901
/* 4897 */    MCD::OPC_Decode, 142, 3, 59, // Opcode: DIVDEU
/* 4901 */    MCD::OPC_FilterValue, 3, 252, 34, // Skip to: 13861
/* 4905 */    MCD::OPC_Decode, 143, 3, 59, // Opcode: DIVDEUo
/* 4909 */    MCD::OPC_FilterValue, 13, 19, 0, // Skip to: 4932
/* 4913 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 4916 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 4924
/* 4920 */    MCD::OPC_Decode, 141, 3, 59, // Opcode: DIVDE
/* 4924 */    MCD::OPC_FilterValue, 3, 229, 34, // Skip to: 13861
/* 4928 */    MCD::OPC_Decode, 144, 3, 59, // Opcode: DIVDEo
/* 4932 */    MCD::OPC_FilterValue, 14, 19, 0, // Skip to: 4955
/* 4936 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 4939 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 4947
/* 4943 */    MCD::OPC_Decode, 145, 3, 59, // Opcode: DIVDU
/* 4947 */    MCD::OPC_FilterValue, 3, 206, 34, // Skip to: 13861
/* 4951 */    MCD::OPC_Decode, 146, 3, 59, // Opcode: DIVDUo
/* 4955 */    MCD::OPC_FilterValue, 15, 19, 0, // Skip to: 4978
/* 4959 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 4962 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 4970
/* 4966 */    MCD::OPC_Decode, 140, 3, 59, // Opcode: DIVD
/* 4970 */    MCD::OPC_FilterValue, 3, 183, 34, // Skip to: 13861
/* 4974 */    MCD::OPC_Decode, 147, 3, 59, // Opcode: DIVDo
/* 4978 */    MCD::OPC_FilterValue, 24, 175, 34, // Skip to: 13861
/* 4982 */    MCD::OPC_CheckField, 0, 2, 2, 169, 34, // Skip to: 13861
/* 4988 */    MCD::OPC_Decode, 138, 7, 59, // Opcode: MODSD
/* 4992 */    MCD::OPC_FilterValue, 5, 49, 1, // Skip to: 5301
/* 4996 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 4999 */    MCD::OPC_FilterValue, 0, 33, 0, // Skip to: 5036
/* 5003 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 5006 */    MCD::OPC_FilterValue, 0, 3, 0, // Skip to: 5013
/* 5010 */    MCD::OPC_Decode, 104, 58, // Opcode: ADDC
/* 5013 */    MCD::OPC_FilterValue, 1, 3, 0, // Skip to: 5020
/* 5017 */    MCD::OPC_Decode, 107, 58, // Opcode: ADDCo
/* 5020 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 5028
/* 5024 */    MCD::OPC_Decode, 182, 7, 58, // Opcode: MULHWU
/* 5028 */    MCD::OPC_FilterValue, 3, 125, 34, // Skip to: 13861
/* 5032 */    MCD::OPC_Decode, 183, 7, 58, // Opcode: MULHWUo
/* 5036 */    MCD::OPC_FilterValue, 2, 19, 0, // Skip to: 5059
/* 5040 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 5043 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 5051
/* 5047 */    MCD::OPC_Decode, 181, 7, 58, // Opcode: MULHW
/* 5051 */    MCD::OPC_FilterValue, 3, 102, 34, // Skip to: 13861
/* 5055 */    MCD::OPC_Decode, 184, 7, 58, // Opcode: MULHWo
/* 5059 */    MCD::OPC_FilterValue, 4, 17, 0, // Skip to: 5080
/* 5063 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 5066 */    MCD::OPC_FilterValue, 0, 3, 0, // Skip to: 5073
/* 5070 */    MCD::OPC_Decode, 108, 58, // Opcode: ADDE
/* 5073 */    MCD::OPC_FilterValue, 1, 80, 34, // Skip to: 13861
/* 5077 */    MCD::OPC_Decode, 111, 58, // Opcode: ADDEo
/* 5080 */    MCD::OPC_FilterValue, 6, 31, 0, // Skip to: 5115
/* 5084 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 5087 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 5101
/* 5091 */    MCD::OPC_CheckField, 11, 5, 0, 60, 34, // Skip to: 13861
/* 5097 */    MCD::OPC_Decode, 140, 1, 60, // Opcode: ADDZE
/* 5101 */    MCD::OPC_FilterValue, 1, 52, 34, // Skip to: 13861
/* 5105 */    MCD::OPC_CheckField, 11, 5, 0, 46, 34, // Skip to: 13861
/* 5111 */    MCD::OPC_Decode, 143, 1, 60, // Opcode: ADDZEo
/* 5115 */    MCD::OPC_FilterValue, 7, 47, 0, // Skip to: 5166
/* 5119 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 5122 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 5136
/* 5126 */    MCD::OPC_CheckField, 11, 5, 0, 25, 34, // Skip to: 13861
/* 5132 */    MCD::OPC_Decode, 136, 1, 60, // Opcode: ADDME
/* 5136 */    MCD::OPC_FilterValue, 1, 10, 0, // Skip to: 5150
/* 5140 */    MCD::OPC_CheckField, 11, 5, 0, 11, 34, // Skip to: 13861
/* 5146 */    MCD::OPC_Decode, 139, 1, 60, // Opcode: ADDMEo
/* 5150 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 5158
/* 5154 */    MCD::OPC_Decode, 189, 7, 58, // Opcode: MULLW
/* 5158 */    MCD::OPC_FilterValue, 3, 251, 33, // Skip to: 13861
/* 5162 */    MCD::OPC_Decode, 190, 7, 58, // Opcode: MULLWo
/* 5166 */    MCD::OPC_FilterValue, 8, 25, 0, // Skip to: 5195
/* 5170 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 5173 */    MCD::OPC_FilterValue, 0, 3, 0, // Skip to: 5180
/* 5177 */    MCD::OPC_Decode, 97, 58, // Opcode: ADD4
/* 5180 */    MCD::OPC_FilterValue, 1, 3, 0, // Skip to: 5187
/* 5184 */    MCD::OPC_Decode, 99, 58, // Opcode: ADD4o
/* 5187 */    MCD::OPC_FilterValue, 2, 222, 33, // Skip to: 13861
/* 5191 */    MCD::OPC_Decode, 141, 7, 58, // Opcode: MODUW
/* 5195 */    MCD::OPC_FilterValue, 12, 19, 0, // Skip to: 5218
/* 5199 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 5202 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 5210
/* 5206 */    MCD::OPC_Decode, 150, 3, 58, // Opcode: DIVWEU
/* 5210 */    MCD::OPC_FilterValue, 3, 199, 33, // Skip to: 13861
/* 5214 */    MCD::OPC_Decode, 151, 3, 58, // Opcode: DIVWEUo
/* 5218 */    MCD::OPC_FilterValue, 13, 19, 0, // Skip to: 5241
/* 5222 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 5225 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 5233
/* 5229 */    MCD::OPC_Decode, 149, 3, 58, // Opcode: DIVWE
/* 5233 */    MCD::OPC_FilterValue, 3, 176, 33, // Skip to: 13861
/* 5237 */    MCD::OPC_Decode, 152, 3, 58, // Opcode: DIVWEo
/* 5241 */    MCD::OPC_FilterValue, 14, 19, 0, // Skip to: 5264
/* 5245 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 5248 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 5256
/* 5252 */    MCD::OPC_Decode, 153, 3, 58, // Opcode: DIVWU
/* 5256 */    MCD::OPC_FilterValue, 3, 153, 33, // Skip to: 13861
/* 5260 */    MCD::OPC_Decode, 154, 3, 58, // Opcode: DIVWUo
/* 5264 */    MCD::OPC_FilterValue, 15, 19, 0, // Skip to: 5287
/* 5268 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 5271 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 5279
/* 5275 */    MCD::OPC_Decode, 148, 3, 58, // Opcode: DIVW
/* 5279 */    MCD::OPC_FilterValue, 3, 130, 33, // Skip to: 13861
/* 5283 */    MCD::OPC_Decode, 155, 3, 58, // Opcode: DIVWo
/* 5287 */    MCD::OPC_FilterValue, 24, 122, 33, // Skip to: 13861
/* 5291 */    MCD::OPC_CheckField, 0, 2, 2, 116, 33, // Skip to: 13861
/* 5297 */    MCD::OPC_Decode, 139, 7, 58, // Opcode: MODSW
/* 5301 */    MCD::OPC_FilterValue, 6, 95, 1, // Skip to: 5656
/* 5305 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 5308 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 5322
/* 5312 */    MCD::OPC_CheckField, 1, 1, 0, 95, 33, // Skip to: 13861
/* 5318 */    MCD::OPC_Decode, 222, 6, 61, // Opcode: LXSIWZX
/* 5322 */    MCD::OPC_FilterValue, 2, 10, 0, // Skip to: 5336
/* 5326 */    MCD::OPC_CheckField, 1, 1, 0, 81, 33, // Skip to: 13861
/* 5332 */    MCD::OPC_Decode, 221, 6, 61, // Opcode: LXSIWAX
/* 5336 */    MCD::OPC_FilterValue, 4, 10, 0, // Skip to: 5350
/* 5340 */    MCD::OPC_CheckField, 1, 1, 0, 67, 33, // Skip to: 13861
/* 5346 */    MCD::OPC_Decode, 183, 10, 61, // Opcode: STXSIWX
/* 5350 */    MCD::OPC_FilterValue, 8, 19, 0, // Skip to: 5373
/* 5354 */    MCD::OPC_ExtractField, 1, 1,  // Inst{1} ...
/* 5357 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 5365
/* 5361 */    MCD::OPC_Decode, 234, 6, 62, // Opcode: LXVX
/* 5365 */    MCD::OPC_FilterValue, 1, 44, 33, // Skip to: 13861
/* 5369 */    MCD::OPC_Decode, 230, 6, 63, // Opcode: LXVL
/* 5373 */    MCD::OPC_FilterValue, 9, 10, 0, // Skip to: 5387
/* 5377 */    MCD::OPC_CheckField, 1, 1, 1, 30, 33, // Skip to: 13861
/* 5383 */    MCD::OPC_Decode, 231, 6, 63, // Opcode: LXVLL
/* 5387 */    MCD::OPC_FilterValue, 10, 10, 0, // Skip to: 5401
/* 5391 */    MCD::OPC_CheckField, 1, 1, 0, 16, 33, // Skip to: 13861
/* 5397 */    MCD::OPC_Decode, 228, 6, 62, // Opcode: LXVDSX
/* 5401 */    MCD::OPC_FilterValue, 11, 10, 0, // Skip to: 5415
/* 5405 */    MCD::OPC_CheckField, 1, 1, 0, 2, 33, // Skip to: 13861
/* 5411 */    MCD::OPC_Decode, 233, 6, 62, // Opcode: LXVWSX
/* 5415 */    MCD::OPC_FilterValue, 12, 19, 0, // Skip to: 5438
/* 5419 */    MCD::OPC_ExtractField, 1, 1,  // Inst{1} ...
/* 5422 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 5430
/* 5426 */    MCD::OPC_Decode, 193, 10, 62, // Opcode: STXVX
/* 5430 */    MCD::OPC_FilterValue, 1, 235, 32, // Skip to: 13861
/* 5434 */    MCD::OPC_Decode, 190, 10, 63, // Opcode: STXVL
/* 5438 */    MCD::OPC_FilterValue, 13, 10, 0, // Skip to: 5452
/* 5442 */    MCD::OPC_CheckField, 1, 1, 1, 221, 32, // Skip to: 13861
/* 5448 */    MCD::OPC_Decode, 191, 10, 63, // Opcode: STXVLL
/* 5452 */    MCD::OPC_FilterValue, 16, 10, 0, // Skip to: 5466
/* 5456 */    MCD::OPC_CheckField, 1, 1, 0, 207, 32, // Skip to: 13861
/* 5462 */    MCD::OPC_Decode, 224, 6, 64, // Opcode: LXSSPX
/* 5466 */    MCD::OPC_FilterValue, 18, 10, 0, // Skip to: 5480
/* 5470 */    MCD::OPC_CheckField, 1, 1, 0, 193, 32, // Skip to: 13861
/* 5476 */    MCD::OPC_Decode, 218, 6, 61, // Opcode: LXSDX
/* 5480 */    MCD::OPC_FilterValue, 20, 10, 0, // Skip to: 5494
/* 5484 */    MCD::OPC_CheckField, 1, 1, 0, 179, 32, // Skip to: 13861
/* 5490 */    MCD::OPC_Decode, 185, 10, 64, // Opcode: STXSSPX
/* 5494 */    MCD::OPC_FilterValue, 22, 10, 0, // Skip to: 5508
/* 5498 */    MCD::OPC_CheckField, 1, 1, 0, 165, 32, // Skip to: 13861
/* 5504 */    MCD::OPC_Decode, 178, 10, 61, // Opcode: STXSDX
/* 5508 */    MCD::OPC_FilterValue, 24, 19, 0, // Skip to: 5531
/* 5512 */    MCD::OPC_ExtractField, 1, 1,  // Inst{1} ...
/* 5515 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 5523
/* 5519 */    MCD::OPC_Decode, 232, 6, 62, // Opcode: LXVW4X
/* 5523 */    MCD::OPC_FilterValue, 1, 142, 32, // Skip to: 13861
/* 5527 */    MCD::OPC_Decode, 219, 6, 61, // Opcode: LXSIBZX
/* 5531 */    MCD::OPC_FilterValue, 25, 19, 0, // Skip to: 5554
/* 5535 */    MCD::OPC_ExtractField, 1, 1,  // Inst{1} ...
/* 5538 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 5546
/* 5542 */    MCD::OPC_Decode, 229, 6, 62, // Opcode: LXVH8X
/* 5546 */    MCD::OPC_FilterValue, 1, 119, 32, // Skip to: 13861
/* 5550 */    MCD::OPC_Decode, 220, 6, 61, // Opcode: LXSIHZX
/* 5554 */    MCD::OPC_FilterValue, 26, 10, 0, // Skip to: 5568
/* 5558 */    MCD::OPC_CheckField, 1, 1, 0, 105, 32, // Skip to: 13861
/* 5564 */    MCD::OPC_Decode, 227, 6, 62, // Opcode: LXVD2X
/* 5568 */    MCD::OPC_FilterValue, 27, 10, 0, // Skip to: 5582
/* 5572 */    MCD::OPC_CheckField, 1, 1, 0, 91, 32, // Skip to: 13861
/* 5578 */    MCD::OPC_Decode, 226, 6, 62, // Opcode: LXVB16X
/* 5582 */    MCD::OPC_FilterValue, 28, 19, 0, // Skip to: 5605
/* 5586 */    MCD::OPC_ExtractField, 1, 1,  // Inst{1} ...
/* 5589 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 5597
/* 5593 */    MCD::OPC_Decode, 192, 10, 62, // Opcode: STXVW4X
/* 5597 */    MCD::OPC_FilterValue, 1, 68, 32, // Skip to: 13861
/* 5601 */    MCD::OPC_Decode, 179, 10, 61, // Opcode: STXSIBX
/* 5605 */    MCD::OPC_FilterValue, 29, 19, 0, // Skip to: 5628
/* 5609 */    MCD::OPC_ExtractField, 1, 1,  // Inst{1} ...
/* 5612 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 5620
/* 5616 */    MCD::OPC_Decode, 189, 10, 62, // Opcode: STXVH8X
/* 5620 */    MCD::OPC_FilterValue, 1, 45, 32, // Skip to: 13861
/* 5624 */    MCD::OPC_Decode, 181, 10, 61, // Opcode: STXSIHX
/* 5628 */    MCD::OPC_FilterValue, 30, 10, 0, // Skip to: 5642
/* 5632 */    MCD::OPC_CheckField, 1, 1, 0, 31, 32, // Skip to: 13861
/* 5638 */    MCD::OPC_Decode, 188, 10, 62, // Opcode: STXVD2X
/* 5642 */    MCD::OPC_FilterValue, 31, 23, 32, // Skip to: 13861
/* 5646 */    MCD::OPC_CheckField, 1, 1, 0, 17, 32, // Skip to: 13861
/* 5652 */    MCD::OPC_Decode, 187, 10, 62, // Opcode: STXVB16X
/* 5656 */    MCD::OPC_FilterValue, 7, 217, 0, // Skip to: 5877
/* 5660 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 5663 */    MCD::OPC_FilterValue, 0, 55, 0, // Skip to: 5722
/* 5667 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 5670 */    MCD::OPC_FilterValue, 9, 4, 0, // Skip to: 5678
/* 5674 */    MCD::OPC_Decode, 239, 6, 65, // Opcode: MFBHRBE
/* 5678 */    MCD::OPC_FilterValue, 10, 4, 0, // Skip to: 5686
/* 5682 */    MCD::OPC_Decode, 252, 6, 49, // Opcode: MFPMR
/* 5686 */    MCD::OPC_FilterValue, 13, 10, 0, // Skip to: 5700
/* 5690 */    MCD::OPC_CheckField, 11, 15, 0, 229, 31, // Skip to: 13861
/* 5696 */    MCD::OPC_Decode, 186, 2, 0, // Opcode: CLRBHRB
/* 5700 */    MCD::OPC_FilterValue, 14, 4, 0, // Skip to: 5708
/* 5704 */    MCD::OPC_Decode, 164, 7, 66, // Opcode: MTPMR
/* 5708 */    MCD::OPC_FilterValue, 22, 213, 31, // Skip to: 13861
/* 5712 */    MCD::OPC_CheckField, 11, 12, 0, 207, 31, // Skip to: 13861
/* 5718 */    MCD::OPC_Decode, 233, 10, 46, // Opcode: TCHECK
/* 5722 */    MCD::OPC_FilterValue, 1, 143, 0, // Skip to: 5869
/* 5726 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 5729 */    MCD::OPC_FilterValue, 20, 16, 0, // Skip to: 5749
/* 5733 */    MCD::OPC_CheckField, 22, 4, 0, 186, 31, // Skip to: 13861
/* 5739 */    MCD::OPC_CheckField, 11, 10, 0, 180, 31, // Skip to: 13861
/* 5745 */    MCD::OPC_Decode, 232, 10, 67, // Opcode: TBEGIN
/* 5749 */    MCD::OPC_FilterValue, 21, 10, 0, // Skip to: 5763
/* 5753 */    MCD::OPC_CheckField, 11, 14, 0, 166, 31, // Skip to: 13861
/* 5759 */    MCD::OPC_Decode, 243, 10, 68, // Opcode: TEND
/* 5763 */    MCD::OPC_FilterValue, 23, 16, 0, // Skip to: 5783
/* 5767 */    MCD::OPC_CheckField, 22, 3, 0, 152, 31, // Skip to: 13861
/* 5773 */    MCD::OPC_CheckField, 11, 10, 0, 146, 31, // Skip to: 13861
/* 5779 */    MCD::OPC_Decode, 133, 11, 67, // Opcode: TSR
/* 5783 */    MCD::OPC_FilterValue, 24, 4, 0, // Skip to: 5791
/* 5787 */    MCD::OPC_Decode, 224, 10, 69, // Opcode: TABORTWC
/* 5791 */    MCD::OPC_FilterValue, 25, 4, 0, // Skip to: 5799
/* 5795 */    MCD::OPC_Decode, 222, 10, 69, // Opcode: TABORTDC
/* 5799 */    MCD::OPC_FilterValue, 26, 4, 0, // Skip to: 5807
/* 5803 */    MCD::OPC_Decode, 225, 10, 70, // Opcode: TABORTWCI
/* 5807 */    MCD::OPC_FilterValue, 27, 4, 0, // Skip to: 5815
/* 5811 */    MCD::OPC_Decode, 223, 10, 70, // Opcode: TABORTDCI
/* 5815 */    MCD::OPC_FilterValue, 28, 16, 0, // Skip to: 5835
/* 5819 */    MCD::OPC_CheckField, 21, 5, 0, 100, 31, // Skip to: 13861
/* 5825 */    MCD::OPC_CheckField, 11, 5, 0, 94, 31, // Skip to: 13861
/* 5831 */    MCD::OPC_Decode, 221, 10, 71, // Opcode: TABORT
/* 5835 */    MCD::OPC_FilterValue, 29, 16, 0, // Skip to: 5855
/* 5839 */    MCD::OPC_CheckField, 21, 5, 0, 80, 31, // Skip to: 13861
/* 5845 */    MCD::OPC_CheckField, 11, 5, 0, 74, 31, // Skip to: 13861
/* 5851 */    MCD::OPC_Decode, 132, 11, 71, // Opcode: TRECLAIM
/* 5855 */    MCD::OPC_FilterValue, 31, 66, 31, // Skip to: 13861
/* 5859 */    MCD::OPC_CheckField, 11, 15, 0, 60, 31, // Skip to: 13861
/* 5865 */    MCD::OPC_Decode, 131, 11, 0, // Opcode: TRECHKPT
/* 5869 */    MCD::OPC_FilterValue, 2, 52, 31, // Skip to: 13861
/* 5873 */    MCD::OPC_Decode, 248, 5, 72, // Opcode: ISEL
/* 5877 */    MCD::OPC_FilterValue, 8, 43, 0, // Skip to: 5924
/* 5881 */    MCD::OPC_ExtractField, 20, 1,  // Inst{20} ...
/* 5884 */    MCD::OPC_FilterValue, 0, 16, 0, // Skip to: 5904
/* 5888 */    MCD::OPC_CheckField, 6, 6, 4, 31, 31, // Skip to: 13861
/* 5894 */    MCD::OPC_CheckField, 0, 2, 0, 25, 31, // Skip to: 13861
/* 5900 */    MCD::OPC_Decode, 144, 7, 73, // Opcode: MTCRF
/* 5904 */    MCD::OPC_FilterValue, 1, 17, 31, // Skip to: 13861
/* 5908 */    MCD::OPC_CheckField, 6, 6, 4, 11, 31, // Skip to: 13861
/* 5914 */    MCD::OPC_CheckField, 0, 2, 0, 5, 31, // Skip to: 13861
/* 5920 */    MCD::OPC_Decode, 162, 7, 74, // Opcode: MTOCRF
/* 5924 */    MCD::OPC_FilterValue, 9, 180, 2, // Skip to: 6620
/* 5928 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 5931 */    MCD::OPC_FilterValue, 0, 43, 0, // Skip to: 5978
/* 5935 */    MCD::OPC_ExtractField, 20, 1,  // Inst{20} ...
/* 5938 */    MCD::OPC_FilterValue, 0, 16, 0, // Skip to: 5958
/* 5942 */    MCD::OPC_CheckField, 11, 9, 0, 233, 30, // Skip to: 13861
/* 5948 */    MCD::OPC_CheckField, 0, 2, 2, 227, 30, // Skip to: 13861
/* 5954 */    MCD::OPC_Decode, 240, 6, 47, // Opcode: MFCR
/* 5958 */    MCD::OPC_FilterValue, 1, 219, 30, // Skip to: 13861
/* 5962 */    MCD::OPC_CheckField, 11, 1, 0, 213, 30, // Skip to: 13861
/* 5968 */    MCD::OPC_CheckField, 0, 2, 2, 207, 30, // Skip to: 13861
/* 5974 */    MCD::OPC_Decode, 250, 6, 75, // Opcode: MFOCRF
/* 5978 */    MCD::OPC_FilterValue, 1, 16, 0, // Skip to: 5998
/* 5982 */    MCD::OPC_CheckField, 11, 5, 0, 193, 30, // Skip to: 13861
/* 5988 */    MCD::OPC_CheckField, 1, 1, 1, 187, 30, // Skip to: 13861
/* 5994 */    MCD::OPC_Decode, 135, 7, 76, // Opcode: MFVSRD
/* 5998 */    MCD::OPC_FilterValue, 2, 16, 0, // Skip to: 6018
/* 6002 */    MCD::OPC_CheckField, 11, 10, 0, 173, 30, // Skip to: 13861
/* 6008 */    MCD::OPC_CheckField, 0, 2, 2, 167, 30, // Skip to: 13861
/* 6014 */    MCD::OPC_Decode, 249, 6, 47, // Opcode: MFMSR
/* 6018 */    MCD::OPC_FilterValue, 3, 16, 0, // Skip to: 6038
/* 6022 */    MCD::OPC_CheckField, 11, 5, 0, 153, 30, // Skip to: 13861
/* 6028 */    MCD::OPC_CheckField, 1, 1, 1, 147, 30, // Skip to: 13861
/* 6034 */    MCD::OPC_Decode, 137, 7, 77, // Opcode: MFVSRWZ
/* 6038 */    MCD::OPC_FilterValue, 4, 10, 0, // Skip to: 6052
/* 6042 */    MCD::OPC_CheckField, 1, 1, 0, 133, 30, // Skip to: 13861
/* 6048 */    MCD::OPC_Decode, 160, 7, 78, // Opcode: MTMSR
/* 6052 */    MCD::OPC_FilterValue, 5, 25, 0, // Skip to: 6081
/* 6056 */    MCD::OPC_ExtractField, 1, 1,  // Inst{1} ...
/* 6059 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 6067
/* 6063 */    MCD::OPC_Decode, 161, 7, 78, // Opcode: MTMSRD
/* 6067 */    MCD::OPC_FilterValue, 1, 110, 30, // Skip to: 13861
/* 6071 */    MCD::OPC_CheckField, 11, 5, 0, 104, 30, // Skip to: 13861
/* 6077 */    MCD::OPC_Decode, 172, 7, 79, // Opcode: MTVSRD
/* 6081 */    MCD::OPC_FilterValue, 6, 25, 0, // Skip to: 6110
/* 6085 */    MCD::OPC_ExtractField, 1, 1,  // Inst{1} ...
/* 6088 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 6096
/* 6092 */    MCD::OPC_Decode, 167, 7, 80, // Opcode: MTSR
/* 6096 */    MCD::OPC_FilterValue, 1, 81, 30, // Skip to: 13861
/* 6100 */    MCD::OPC_CheckField, 11, 5, 0, 75, 30, // Skip to: 13861
/* 6106 */    MCD::OPC_Decode, 174, 7, 81, // Opcode: MTVSRWA
/* 6110 */    MCD::OPC_FilterValue, 7, 25, 0, // Skip to: 6139
/* 6114 */    MCD::OPC_ExtractField, 1, 1,  // Inst{1} ...
/* 6117 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 6125
/* 6121 */    MCD::OPC_Decode, 168, 7, 82, // Opcode: MTSRIN
/* 6125 */    MCD::OPC_FilterValue, 1, 52, 30, // Skip to: 13861
/* 6129 */    MCD::OPC_CheckField, 11, 5, 0, 46, 30, // Skip to: 13861
/* 6135 */    MCD::OPC_Decode, 176, 7, 81, // Opcode: MTVSRWZ
/* 6139 */    MCD::OPC_FilterValue, 8, 16, 0, // Skip to: 6159
/* 6143 */    MCD::OPC_CheckField, 16, 10, 0, 32, 30, // Skip to: 13861
/* 6149 */    MCD::OPC_CheckField, 0, 2, 0, 26, 30, // Skip to: 13861
/* 6155 */    MCD::OPC_Decode, 246, 10, 83, // Opcode: TLBIEL
/* 6159 */    MCD::OPC_FilterValue, 9, 37, 0, // Skip to: 6200
/* 6163 */    MCD::OPC_ExtractField, 1, 1,  // Inst{1} ...
/* 6166 */    MCD::OPC_FilterValue, 0, 16, 0, // Skip to: 6186
/* 6170 */    MCD::OPC_CheckField, 16, 5, 0, 5, 30, // Skip to: 13861
/* 6176 */    MCD::OPC_CheckField, 0, 1, 0, 255, 29, // Skip to: 13861
/* 6182 */    MCD::OPC_Decode, 245, 10, 82, // Opcode: TLBIE
/* 6186 */    MCD::OPC_FilterValue, 1, 247, 29, // Skip to: 13861
/* 6190 */    MCD::OPC_CheckField, 11, 5, 0, 241, 29, // Skip to: 13861
/* 6196 */    MCD::OPC_Decode, 136, 7, 84, // Opcode: MFVSRLD
/* 6200 */    MCD::OPC_FilterValue, 10, 46, 0, // Skip to: 6250
/* 6204 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 6207 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 6221
/* 6211 */    MCD::OPC_CheckField, 11, 15, 0, 220, 29, // Skip to: 13861
/* 6217 */    MCD::OPC_Decode, 214, 9, 0, // Opcode: SLBSYNC
/* 6221 */    MCD::OPC_FilterValue, 2, 212, 29, // Skip to: 13861
/* 6225 */    MCD::OPC_ExtractField, 11, 10,  // Inst{20-11} ...
/* 6228 */    MCD::OPC_FilterValue, 128, 2, 4, 0, // Skip to: 6237
/* 6233 */    MCD::OPC_Decode, 247, 6, 47, // Opcode: MFLR
/* 6237 */    MCD::OPC_FilterValue, 160, 2, 4, 0, // Skip to: 6246
/* 6242 */    MCD::OPC_Decode, 242, 6, 47, // Opcode: MFCTR
/* 6246 */    MCD::OPC_Decode, 253, 6, 49, // Opcode: MFSPR
/* 6250 */    MCD::OPC_FilterValue, 11, 25, 0, // Skip to: 6279
/* 6254 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 6257 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 6271
/* 6261 */    MCD::OPC_CheckField, 11, 15, 0, 170, 29, // Skip to: 13861
/* 6267 */    MCD::OPC_Decode, 244, 10, 0, // Opcode: TLBIA
/* 6271 */    MCD::OPC_FilterValue, 2, 162, 29, // Skip to: 13861
/* 6275 */    MCD::OPC_Decode, 129, 7, 49, // Opcode: MFTB
/* 6279 */    MCD::OPC_FilterValue, 12, 37, 0, // Skip to: 6320
/* 6283 */    MCD::OPC_ExtractField, 1, 1,  // Inst{1} ...
/* 6286 */    MCD::OPC_FilterValue, 0, 16, 0, // Skip to: 6306
/* 6290 */    MCD::OPC_CheckField, 16, 5, 0, 141, 29, // Skip to: 13861
/* 6296 */    MCD::OPC_CheckField, 0, 1, 0, 135, 29, // Skip to: 13861
/* 6302 */    MCD::OPC_Decode, 213, 9, 82, // Opcode: SLBMTE
/* 6306 */    MCD::OPC_FilterValue, 1, 127, 29, // Skip to: 13861
/* 6310 */    MCD::OPC_CheckField, 11, 5, 0, 121, 29, // Skip to: 13861
/* 6316 */    MCD::OPC_Decode, 175, 7, 85, // Opcode: MTVSRWS
/* 6320 */    MCD::OPC_FilterValue, 13, 31, 0, // Skip to: 6355
/* 6324 */    MCD::OPC_ExtractField, 1, 1,  // Inst{1} ...
/* 6327 */    MCD::OPC_FilterValue, 0, 16, 0, // Skip to: 6347
/* 6331 */    MCD::OPC_CheckField, 16, 10, 0, 100, 29, // Skip to: 13861
/* 6337 */    MCD::OPC_CheckField, 0, 1, 0, 94, 29, // Skip to: 13861
/* 6343 */    MCD::OPC_Decode, 209, 9, 83, // Opcode: SLBIE
/* 6347 */    MCD::OPC_FilterValue, 1, 86, 29, // Skip to: 13861
/* 6351 */    MCD::OPC_Decode, 173, 7, 86, // Opcode: MTVSRDD
/* 6355 */    MCD::OPC_FilterValue, 14, 46, 0, // Skip to: 6405
/* 6359 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 6362 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 6376
/* 6366 */    MCD::OPC_CheckField, 16, 5, 0, 65, 29, // Skip to: 13861
/* 6372 */    MCD::OPC_Decode, 210, 9, 82, // Opcode: SLBIEG
/* 6376 */    MCD::OPC_FilterValue, 2, 57, 29, // Skip to: 13861
/* 6380 */    MCD::OPC_ExtractField, 11, 10,  // Inst{20-11} ...
/* 6383 */    MCD::OPC_FilterValue, 128, 2, 4, 0, // Skip to: 6392
/* 6388 */    MCD::OPC_Decode, 158, 7, 47, // Opcode: MTLR
/* 6392 */    MCD::OPC_FilterValue, 160, 2, 4, 0, // Skip to: 6401
/* 6397 */    MCD::OPC_Decode, 146, 7, 47, // Opcode: MTCTR
/* 6401 */    MCD::OPC_Decode, 165, 7, 66, // Opcode: MTSPR
/* 6405 */    MCD::OPC_FilterValue, 15, 16, 0, // Skip to: 6425
/* 6409 */    MCD::OPC_CheckField, 11, 15, 0, 22, 29, // Skip to: 13861
/* 6415 */    MCD::OPC_CheckField, 0, 2, 0, 16, 29, // Skip to: 13861
/* 6421 */    MCD::OPC_Decode, 208, 9, 0, // Opcode: SLBIA
/* 6425 */    MCD::OPC_FilterValue, 18, 10, 0, // Skip to: 6439
/* 6429 */    MCD::OPC_CheckField, 1, 1, 1, 2, 29, // Skip to: 13861
/* 6435 */    MCD::OPC_Decode, 255, 6, 80, // Opcode: MFSR
/* 6439 */    MCD::OPC_FilterValue, 20, 10, 0, // Skip to: 6453
/* 6443 */    MCD::OPC_CheckField, 1, 1, 1, 244, 28, // Skip to: 13861
/* 6449 */    MCD::OPC_Decode, 128, 7, 82, // Opcode: MFSRIN
/* 6453 */    MCD::OPC_FilterValue, 24, 16, 0, // Skip to: 6473
/* 6457 */    MCD::OPC_CheckField, 21, 5, 0, 230, 28, // Skip to: 13861
/* 6463 */    MCD::OPC_CheckField, 0, 2, 0, 224, 28, // Skip to: 13861
/* 6469 */    MCD::OPC_Decode, 247, 10, 54, // Opcode: TLBIVAX
/* 6473 */    MCD::OPC_FilterValue, 26, 16, 0, // Skip to: 6493
/* 6477 */    MCD::OPC_CheckField, 16, 5, 0, 210, 28, // Skip to: 13861
/* 6483 */    MCD::OPC_CheckField, 0, 2, 2, 204, 28, // Skip to: 13861
/* 6489 */    MCD::OPC_Decode, 212, 9, 82, // Opcode: SLBMFEV
/* 6493 */    MCD::OPC_FilterValue, 28, 43, 0, // Skip to: 6540
/* 6497 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 6500 */    MCD::OPC_FilterValue, 0, 14, 0, // Skip to: 6518
/* 6504 */    MCD::OPC_CheckField, 21, 5, 0, 4, 0, // Skip to: 6514
/* 6510 */    MCD::OPC_Decode, 252, 10, 54, // Opcode: TLBSX
/* 6514 */    MCD::OPC_Decode, 253, 10, 58, // Opcode: TLBSX2
/* 6518 */    MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 6526
/* 6522 */    MCD::OPC_Decode, 254, 10, 58, // Opcode: TLBSX2D
/* 6526 */    MCD::OPC_FilterValue, 2, 163, 28, // Skip to: 13861
/* 6530 */    MCD::OPC_CheckField, 16, 5, 0, 157, 28, // Skip to: 13861
/* 6536 */    MCD::OPC_Decode, 211, 9, 82, // Opcode: SLBMFEE
/* 6540 */    MCD::OPC_FilterValue, 29, 21, 0, // Skip to: 6565
/* 6544 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 6547 */    MCD::OPC_FilterValue, 0, 142, 28, // Skip to: 13861
/* 6551 */    MCD::OPC_CheckField, 11, 15, 0, 4, 0, // Skip to: 6561
/* 6557 */    MCD::OPC_Decode, 250, 10, 0, // Opcode: TLBRE
/* 6561 */    MCD::OPC_Decode, 251, 10, 87, // Opcode: TLBRE2
/* 6565 */    MCD::OPC_FilterValue, 30, 31, 0, // Skip to: 6600
/* 6569 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 6572 */    MCD::OPC_FilterValue, 0, 117, 28, // Skip to: 13861
/* 6576 */    MCD::OPC_CheckField, 11, 15, 0, 4, 0, // Skip to: 6586
/* 6582 */    MCD::OPC_Decode, 128, 11, 0, // Opcode: TLBWE
/* 6586 */    MCD::OPC_CheckField, 16, 10, 0, 4, 0, // Skip to: 6596
/* 6592 */    MCD::OPC_Decode, 248, 10, 83, // Opcode: TLBLD
/* 6596 */    MCD::OPC_Decode, 129, 11, 87, // Opcode: TLBWE2
/* 6600 */    MCD::OPC_FilterValue, 31, 89, 28, // Skip to: 13861
/* 6604 */    MCD::OPC_CheckField, 16, 10, 0, 83, 28, // Skip to: 13861
/* 6610 */    MCD::OPC_CheckField, 0, 2, 0, 77, 28, // Skip to: 13861
/* 6616 */    MCD::OPC_Decode, 249, 10, 83, // Opcode: TLBLI
/* 6620 */    MCD::OPC_FilterValue, 10, 93, 1, // Skip to: 6973
/* 6624 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 6627 */    MCD::OPC_FilterValue, 0, 27, 0, // Skip to: 6658
/* 6631 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 6634 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 6642
/* 6638 */    MCD::OPC_Decode, 198, 6, 88, // Opcode: LWARX
/* 6642 */    MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 6650
/* 6646 */    MCD::OPC_Decode, 199, 6, 88, // Opcode: LWARXL
/* 6650 */    MCD::OPC_FilterValue, 2, 39, 28, // Skip to: 13861
/* 6654 */    MCD::OPC_Decode, 145, 6, 89, // Opcode: LDX
/* 6658 */    MCD::OPC_FilterValue, 1, 27, 0, // Skip to: 6689
/* 6662 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 6665 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 6673
/* 6669 */    MCD::OPC_Decode, 253, 5, 88, // Opcode: LBARX
/* 6673 */    MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 6681
/* 6677 */    MCD::OPC_Decode, 254, 5, 88, // Opcode: LBARXL
/* 6681 */    MCD::OPC_FilterValue, 2, 8, 28, // Skip to: 13861
/* 6685 */    MCD::OPC_Decode, 144, 6, 90, // Opcode: LDUX
/* 6689 */    MCD::OPC_FilterValue, 2, 19, 0, // Skip to: 6712
/* 6693 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 6696 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 6704
/* 6700 */    MCD::OPC_Decode, 137, 6, 89, // Opcode: LDARX
/* 6704 */    MCD::OPC_FilterValue, 1, 241, 27, // Skip to: 13861
/* 6708 */    MCD::OPC_Decode, 138, 6, 89, // Opcode: LDARXL
/* 6712 */    MCD::OPC_FilterValue, 3, 19, 0, // Skip to: 6735
/* 6716 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 6719 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 6727
/* 6723 */    MCD::OPC_Decode, 165, 6, 88, // Opcode: LHARX
/* 6727 */    MCD::OPC_FilterValue, 1, 218, 27, // Skip to: 13861
/* 6731 */    MCD::OPC_Decode, 166, 6, 88, // Opcode: LHARXL
/* 6735 */    MCD::OPC_FilterValue, 4, 10, 0, // Skip to: 6749
/* 6739 */    MCD::OPC_CheckField, 0, 2, 2, 204, 27, // Skip to: 13861
/* 6745 */    MCD::OPC_Decode, 136, 10, 89, // Opcode: STDX
/* 6749 */    MCD::OPC_FilterValue, 5, 10, 0, // Skip to: 6763
/* 6753 */    MCD::OPC_CheckField, 0, 2, 2, 190, 27, // Skip to: 13861
/* 6759 */    MCD::OPC_Decode, 135, 10, 91, // Opcode: STDUX
/* 6763 */    MCD::OPC_FilterValue, 9, 10, 0, // Skip to: 6777
/* 6767 */    MCD::OPC_CheckField, 0, 2, 2, 176, 27, // Skip to: 13861
/* 6773 */    MCD::OPC_Decode, 142, 6, 89, // Opcode: LDMX
/* 6777 */    MCD::OPC_FilterValue, 10, 10, 0, // Skip to: 6791
/* 6781 */    MCD::OPC_CheckField, 0, 2, 2, 162, 27, // Skip to: 13861
/* 6787 */    MCD::OPC_Decode, 202, 6, 89, // Opcode: LWAX
/* 6791 */    MCD::OPC_FilterValue, 11, 10, 0, // Skip to: 6805
/* 6795 */    MCD::OPC_CheckField, 0, 2, 2, 148, 27, // Skip to: 13861
/* 6801 */    MCD::OPC_Decode, 201, 6, 90, // Opcode: LWAUX
/* 6805 */    MCD::OPC_FilterValue, 16, 10, 0, // Skip to: 6819
/* 6809 */    MCD::OPC_CheckField, 0, 2, 0, 134, 27, // Skip to: 13861
/* 6815 */    MCD::OPC_Decode, 140, 6, 89, // Opcode: LDBRX
/* 6819 */    MCD::OPC_FilterValue, 18, 10, 0, // Skip to: 6833
/* 6823 */    MCD::OPC_CheckField, 0, 2, 2, 120, 27, // Skip to: 13861
/* 6829 */    MCD::OPC_Decode, 189, 6, 55, // Opcode: LSWI
/* 6833 */    MCD::OPC_FilterValue, 20, 10, 0, // Skip to: 6847
/* 6837 */    MCD::OPC_CheckField, 0, 2, 0, 106, 27, // Skip to: 13861
/* 6843 */    MCD::OPC_Decode, 131, 10, 89, // Opcode: STDBRX
/* 6847 */    MCD::OPC_FilterValue, 22, 10, 0, // Skip to: 6861
/* 6851 */    MCD::OPC_CheckField, 0, 2, 2, 92, 27, // Skip to: 13861
/* 6857 */    MCD::OPC_Decode, 159, 10, 55, // Opcode: STSWI
/* 6861 */    MCD::OPC_FilterValue, 24, 10, 0, // Skip to: 6875
/* 6865 */    MCD::OPC_CheckField, 0, 2, 2, 78, 27, // Skip to: 13861
/* 6871 */    MCD::OPC_Decode, 209, 6, 58, // Opcode: LWZCIX
/* 6875 */    MCD::OPC_FilterValue, 25, 10, 0, // Skip to: 6889
/* 6879 */    MCD::OPC_CheckField, 0, 2, 2, 64, 27, // Skip to: 13861
/* 6885 */    MCD::OPC_Decode, 177, 6, 58, // Opcode: LHZCIX
/* 6889 */    MCD::OPC_FilterValue, 26, 10, 0, // Skip to: 6903
/* 6893 */    MCD::OPC_CheckField, 0, 2, 2, 50, 27, // Skip to: 13861
/* 6899 */    MCD::OPC_Decode, 129, 6, 58, // Opcode: LBZCIX
/* 6903 */    MCD::OPC_FilterValue, 27, 10, 0, // Skip to: 6917
/* 6907 */    MCD::OPC_CheckField, 0, 2, 2, 36, 27, // Skip to: 13861
/* 6913 */    MCD::OPC_Decode, 141, 6, 58, // Opcode: LDCIX
/* 6917 */    MCD::OPC_FilterValue, 28, 10, 0, // Skip to: 6931
/* 6921 */    MCD::OPC_CheckField, 0, 2, 2, 22, 27, // Skip to: 13861
/* 6927 */    MCD::OPC_Decode, 169, 10, 58, // Opcode: STWCIX
/* 6931 */    MCD::OPC_FilterValue, 29, 10, 0, // Skip to: 6945
/* 6935 */    MCD::OPC_CheckField, 0, 2, 2, 8, 27, // Skip to: 13861
/* 6941 */    MCD::OPC_Decode, 149, 10, 58, // Opcode: STHCIX
/* 6945 */    MCD::OPC_FilterValue, 30, 10, 0, // Skip to: 6959
/* 6949 */    MCD::OPC_CheckField, 0, 2, 2, 250, 26, // Skip to: 13861
/* 6955 */    MCD::OPC_Decode, 249, 9, 58, // Opcode: STBCIX
/* 6959 */    MCD::OPC_FilterValue, 31, 242, 26, // Skip to: 13861
/* 6963 */    MCD::OPC_CheckField, 0, 2, 2, 236, 26, // Skip to: 13861
/* 6969 */    MCD::OPC_Decode, 132, 10, 58, // Opcode: STDCIX
/* 6973 */    MCD::OPC_FilterValue, 11, 242, 2, // Skip to: 7731
/* 6977 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 6980 */    MCD::OPC_FilterValue, 0, 25, 0, // Skip to: 7009
/* 6984 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 6987 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 7001
/* 6991 */    MCD::OPC_CheckField, 25, 1, 0, 208, 26, // Skip to: 13861
/* 6997 */    MCD::OPC_Decode, 239, 5, 53, // Opcode: ICBT
/* 7001 */    MCD::OPC_FilterValue, 2, 200, 26, // Skip to: 13861
/* 7005 */    MCD::OPC_Decode, 214, 6, 88, // Opcode: LWZX
/* 7009 */    MCD::OPC_FilterValue, 1, 25, 0, // Skip to: 7038
/* 7013 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 7016 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 7030
/* 7020 */    MCD::OPC_CheckField, 21, 5, 0, 179, 26, // Skip to: 13861
/* 7026 */    MCD::OPC_Decode, 250, 2, 92, // Opcode: DCBST
/* 7030 */    MCD::OPC_FilterValue, 2, 171, 26, // Skip to: 13861
/* 7034 */    MCD::OPC_Decode, 212, 6, 93, // Opcode: LWZUX
/* 7038 */    MCD::OPC_FilterValue, 2, 19, 0, // Skip to: 7061
/* 7042 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 7045 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 7053
/* 7049 */    MCD::OPC_Decode, 245, 2, 94, // Opcode: DCBF
/* 7053 */    MCD::OPC_FilterValue, 2, 148, 26, // Skip to: 13861
/* 7057 */    MCD::OPC_Decode, 134, 6, 88, // Opcode: LBZX
/* 7061 */    MCD::OPC_FilterValue, 3, 10, 0, // Skip to: 7075
/* 7065 */    MCD::OPC_CheckField, 0, 2, 2, 134, 26, // Skip to: 13861
/* 7071 */    MCD::OPC_Decode, 132, 6, 93, // Opcode: LBZUX
/* 7075 */    MCD::OPC_FilterValue, 4, 19, 0, // Skip to: 7098
/* 7079 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 7082 */    MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 7090
/* 7086 */    MCD::OPC_Decode, 170, 10, 88, // Opcode: STWCX
/* 7090 */    MCD::OPC_FilterValue, 2, 111, 26, // Skip to: 13861
/* 7094 */    MCD::OPC_Decode, 175, 10, 88, // Opcode: STWX
/* 7098 */    MCD::OPC_FilterValue, 5, 10, 0, // Skip to: 7112
/* 7102 */    MCD::OPC_CheckField, 0, 2, 2, 97, 26, // Skip to: 13861
/* 7108 */    MCD::OPC_Decode, 173, 10, 95, // Opcode: STWUX
/* 7112 */    MCD::OPC_FilterValue, 6, 19, 0, // Skip to: 7135
/* 7116 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 7119 */    MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 7127
/* 7123 */    MCD::OPC_Decode, 133, 10, 89, // Opcode: STDCX
/* 7127 */    MCD::OPC_FilterValue, 2, 74, 26, // Skip to: 13861
/* 7131 */    MCD::OPC_Decode, 255, 9, 88, // Opcode: STBX
/* 7135 */    MCD::OPC_FilterValue, 7, 19, 0, // Skip to: 7158
/* 7139 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 7142 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 7150
/* 7146 */    MCD::OPC_Decode, 254, 2, 94, // Opcode: DCBTST
/* 7150 */    MCD::OPC_FilterValue, 2, 51, 26, // Skip to: 13861
/* 7154 */    MCD::OPC_Decode, 253, 9, 95, // Opcode: STBUX
/* 7158 */    MCD::OPC_FilterValue, 8, 19, 0, // Skip to: 7181
/* 7162 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 7165 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 7173
/* 7169 */    MCD::OPC_Decode, 251, 2, 94, // Opcode: DCBT
/* 7173 */    MCD::OPC_FilterValue, 2, 28, 26, // Skip to: 13861
/* 7177 */    MCD::OPC_Decode, 182, 6, 88, // Opcode: LHZX
/* 7181 */    MCD::OPC_FilterValue, 9, 10, 0, // Skip to: 7195
/* 7185 */    MCD::OPC_CheckField, 0, 2, 2, 14, 26, // Skip to: 13861
/* 7191 */    MCD::OPC_Decode, 180, 6, 93, // Opcode: LHZUX
/* 7195 */    MCD::OPC_FilterValue, 10, 34, 0, // Skip to: 7233
/* 7199 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 7202 */    MCD::OPC_FilterValue, 0, 19, 0, // Skip to: 7225
/* 7206 */    MCD::OPC_ExtractField, 23, 3,  // Inst{25-23} ...
/* 7209 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 7217
/* 7213 */    MCD::OPC_Decode, 158, 3, 96, // Opcode: DST
/* 7217 */    MCD::OPC_FilterValue, 4, 240, 25, // Skip to: 13861
/* 7221 */    MCD::OPC_Decode, 164, 3, 96, // Opcode: DSTT
/* 7225 */    MCD::OPC_FilterValue, 2, 232, 25, // Skip to: 13861
/* 7229 */    MCD::OPC_Decode, 171, 6, 88, // Opcode: LHAX
/* 7233 */    MCD::OPC_FilterValue, 11, 34, 0, // Skip to: 7271
/* 7237 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 7240 */    MCD::OPC_FilterValue, 0, 19, 0, // Skip to: 7263
/* 7244 */    MCD::OPC_ExtractField, 23, 3,  // Inst{25-23} ...
/* 7247 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 7255
/* 7251 */    MCD::OPC_Decode, 160, 3, 96, // Opcode: DSTST
/* 7255 */    MCD::OPC_FilterValue, 4, 202, 25, // Skip to: 13861
/* 7259 */    MCD::OPC_Decode, 162, 3, 96, // Opcode: DSTSTT
/* 7263 */    MCD::OPC_FilterValue, 2, 194, 25, // Skip to: 13861
/* 7267 */    MCD::OPC_Decode, 169, 6, 93, // Opcode: LHAUX
/* 7271 */    MCD::OPC_FilterValue, 12, 10, 0, // Skip to: 7285
/* 7275 */    MCD::OPC_CheckField, 0, 2, 2, 180, 25, // Skip to: 13861
/* 7281 */    MCD::OPC_Decode, 155, 10, 88, // Opcode: STHX
/* 7285 */    MCD::OPC_FilterValue, 13, 10, 0, // Skip to: 7299
/* 7289 */    MCD::OPC_CheckField, 0, 2, 2, 166, 25, // Skip to: 13861
/* 7295 */    MCD::OPC_Decode, 153, 10, 95, // Opcode: STHUX
/* 7299 */    MCD::OPC_FilterValue, 14, 16, 0, // Skip to: 7319
/* 7303 */    MCD::OPC_CheckField, 21, 5, 0, 152, 25, // Skip to: 13861
/* 7309 */    MCD::OPC_CheckField, 0, 2, 0, 146, 25, // Skip to: 13861
/* 7315 */    MCD::OPC_Decode, 249, 2, 92, // Opcode: DCBI
/* 7319 */    MCD::OPC_FilterValue, 16, 19, 0, // Skip to: 7342
/* 7323 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 7326 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 7334
/* 7330 */    MCD::OPC_Decode, 205, 6, 88, // Opcode: LWBRX
/* 7334 */    MCD::OPC_FilterValue, 2, 123, 25, // Skip to: 13861
/* 7338 */    MCD::OPC_Decode, 162, 6, 97, // Opcode: LFSX
/* 7342 */    MCD::OPC_FilterValue, 17, 25, 0, // Skip to: 7371
/* 7346 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 7349 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 7363
/* 7353 */    MCD::OPC_CheckField, 11, 15, 0, 102, 25, // Skip to: 13861
/* 7359 */    MCD::OPC_Decode, 255, 10, 0, // Opcode: TLBSYNC
/* 7363 */    MCD::OPC_FilterValue, 2, 94, 25, // Skip to: 13861
/* 7367 */    MCD::OPC_Decode, 161, 6, 98, // Opcode: LFSUX
/* 7371 */    MCD::OPC_FilterValue, 18, 31, 0, // Skip to: 7406
/* 7375 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 7378 */    MCD::OPC_FilterValue, 0, 16, 0, // Skip to: 7398
/* 7382 */    MCD::OPC_CheckField, 23, 3, 0, 73, 25, // Skip to: 13861
/* 7388 */    MCD::OPC_CheckField, 11, 10, 0, 67, 25, // Skip to: 13861
/* 7394 */    MCD::OPC_Decode, 220, 10, 99, // Opcode: SYNC
/* 7398 */    MCD::OPC_FilterValue, 2, 59, 25, // Skip to: 13861
/* 7402 */    MCD::OPC_Decode, 156, 6, 100, // Opcode: LFDX
/* 7406 */    MCD::OPC_FilterValue, 19, 10, 0, // Skip to: 7420
/* 7410 */    MCD::OPC_CheckField, 0, 2, 2, 45, 25, // Skip to: 13861
/* 7416 */    MCD::OPC_Decode, 155, 6, 101, // Opcode: LFDUX
/* 7420 */    MCD::OPC_FilterValue, 20, 19, 0, // Skip to: 7443
/* 7424 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 7427 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 7435
/* 7431 */    MCD::OPC_Decode, 168, 10, 88, // Opcode: STWBRX
/* 7435 */    MCD::OPC_FilterValue, 2, 22, 25, // Skip to: 13861
/* 7439 */    MCD::OPC_Decode, 145, 10, 97, // Opcode: STFSX
/* 7443 */    MCD::OPC_FilterValue, 21, 19, 0, // Skip to: 7466
/* 7447 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 7450 */    MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 7458
/* 7454 */    MCD::OPC_Decode, 250, 9, 88, // Opcode: STBCX
/* 7458 */    MCD::OPC_FilterValue, 2, 255, 24, // Skip to: 13861
/* 7462 */    MCD::OPC_Decode, 144, 10, 102, // Opcode: STFSUX
/* 7466 */    MCD::OPC_FilterValue, 22, 19, 0, // Skip to: 7489
/* 7470 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 7473 */    MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 7481
/* 7477 */    MCD::OPC_Decode, 150, 10, 88, // Opcode: STHCX
/* 7481 */    MCD::OPC_FilterValue, 2, 232, 24, // Skip to: 13861
/* 7485 */    MCD::OPC_Decode, 140, 10, 100, // Opcode: STFDX
/* 7489 */    MCD::OPC_FilterValue, 23, 25, 0, // Skip to: 7518
/* 7493 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 7496 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 7510
/* 7500 */    MCD::OPC_CheckField, 21, 5, 0, 211, 24, // Skip to: 13861
/* 7506 */    MCD::OPC_Decode, 244, 2, 92, // Opcode: DCBA
/* 7510 */    MCD::OPC_FilterValue, 2, 203, 24, // Skip to: 13861
/* 7514 */    MCD::OPC_Decode, 139, 10, 103, // Opcode: STFDUX
/* 7518 */    MCD::OPC_FilterValue, 24, 10, 0, // Skip to: 7532
/* 7522 */    MCD::OPC_CheckField, 0, 2, 0, 189, 24, // Skip to: 13861
/* 7528 */    MCD::OPC_Decode, 173, 6, 88, // Opcode: LHBRX
/* 7532 */    MCD::OPC_FilterValue, 25, 43, 0, // Skip to: 7579
/* 7536 */    MCD::OPC_ExtractField, 23, 3,  // Inst{25-23} ...
/* 7539 */    MCD::OPC_FilterValue, 0, 16, 0, // Skip to: 7559
/* 7543 */    MCD::OPC_CheckField, 11, 10, 0, 168, 24, // Skip to: 13861
/* 7549 */    MCD::OPC_CheckField, 0, 2, 0, 162, 24, // Skip to: 13861
/* 7555 */    MCD::OPC_Decode, 156, 3, 104, // Opcode: DSS
/* 7559 */    MCD::OPC_FilterValue, 4, 154, 24, // Skip to: 13861
/* 7563 */    MCD::OPC_CheckField, 11, 12, 0, 148, 24, // Skip to: 13861
/* 7569 */    MCD::OPC_CheckField, 0, 2, 0, 142, 24, // Skip to: 13861
/* 7575 */    MCD::OPC_Decode, 157, 3, 0, // Opcode: DSSALL
/* 7579 */    MCD::OPC_FilterValue, 26, 41, 0, // Skip to: 7624
/* 7583 */    MCD::OPC_ExtractField, 1, 1,  // Inst{1} ...
/* 7586 */    MCD::OPC_FilterValue, 0, 20, 0, // Skip to: 7610
/* 7590 */    MCD::OPC_CheckField, 11, 15, 0, 10, 0, // Skip to: 7606
/* 7596 */    MCD::OPC_CheckField, 0, 1, 0, 4, 0, // Skip to: 7606
/* 7602 */    MCD::OPC_Decode, 245, 4, 0, // Opcode: EnforceIEIO
/* 7606 */    MCD::OPC_Decode, 235, 6, 105, // Opcode: MBAR
/* 7610 */    MCD::OPC_FilterValue, 1, 103, 24, // Skip to: 13861
/* 7614 */    MCD::OPC_CheckField, 0, 1, 0, 97, 24, // Skip to: 13861
/* 7620 */    MCD::OPC_Decode, 157, 6, 100, // Opcode: LFIWAX
/* 7624 */    MCD::OPC_FilterValue, 27, 25, 0, // Skip to: 7653
/* 7628 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 7631 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 7645
/* 7635 */    MCD::OPC_CheckField, 11, 15, 0, 76, 24, // Skip to: 13861
/* 7641 */    MCD::OPC_Decode, 142, 7, 0, // Opcode: MSGSYNC
/* 7645 */    MCD::OPC_FilterValue, 2, 68, 24, // Skip to: 13861
/* 7649 */    MCD::OPC_Decode, 158, 6, 100, // Opcode: LFIWZX
/* 7653 */    MCD::OPC_FilterValue, 28, 10, 0, // Skip to: 7667
/* 7657 */    MCD::OPC_CheckField, 0, 2, 0, 54, 24, // Skip to: 13861
/* 7663 */    MCD::OPC_Decode, 148, 10, 88, // Opcode: STHBRX
/* 7667 */    MCD::OPC_FilterValue, 30, 25, 0, // Skip to: 7696
/* 7671 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 7674 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 7688
/* 7678 */    MCD::OPC_CheckField, 21, 5, 0, 33, 24, // Skip to: 13861
/* 7684 */    MCD::OPC_Decode, 236, 5, 92, // Opcode: ICBI
/* 7688 */    MCD::OPC_FilterValue, 2, 25, 24, // Skip to: 13861
/* 7692 */    MCD::OPC_Decode, 141, 10, 100, // Opcode: STFIWX
/* 7696 */    MCD::OPC_FilterValue, 31, 17, 24, // Skip to: 13861
/* 7700 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 7703 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 7717
/* 7707 */    MCD::OPC_CheckField, 0, 2, 0, 4, 24, // Skip to: 13861
/* 7713 */    MCD::OPC_Decode, 133, 3, 92, // Opcode: DCBZ
/* 7717 */    MCD::OPC_FilterValue, 1, 252, 23, // Skip to: 13861
/* 7721 */    MCD::OPC_CheckField, 0, 2, 0, 246, 23, // Skip to: 13861
/* 7727 */    MCD::OPC_Decode, 134, 3, 92, // Opcode: DCBZL
/* 7731 */    MCD::OPC_FilterValue, 12, 95, 0, // Skip to: 7830
/* 7735 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 7738 */    MCD::OPC_FilterValue, 0, 19, 0, // Skip to: 7761
/* 7742 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 7745 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 7753
/* 7749 */    MCD::OPC_Decode, 219, 9, 106, // Opcode: SLW
/* 7753 */    MCD::OPC_FilterValue, 1, 216, 23, // Skip to: 13861
/* 7757 */    MCD::OPC_Decode, 224, 9, 106, // Opcode: SLWo
/* 7761 */    MCD::OPC_FilterValue, 16, 19, 0, // Skip to: 7784
/* 7765 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 7768 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 7776
/* 7772 */    MCD::OPC_Decode, 241, 9, 106, // Opcode: SRW
/* 7776 */    MCD::OPC_FilterValue, 1, 193, 23, // Skip to: 13861
/* 7780 */    MCD::OPC_Decode, 246, 9, 106, // Opcode: SRWo
/* 7784 */    MCD::OPC_FilterValue, 24, 19, 0, // Skip to: 7807
/* 7788 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 7791 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 7799
/* 7795 */    MCD::OPC_Decode, 233, 9, 106, // Opcode: SRAW
/* 7799 */    MCD::OPC_FilterValue, 1, 170, 23, // Skip to: 13861
/* 7803 */    MCD::OPC_Decode, 236, 9, 106, // Opcode: SRAWo
/* 7807 */    MCD::OPC_FilterValue, 25, 162, 23, // Skip to: 13861
/* 7811 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 7814 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 7822
/* 7818 */    MCD::OPC_Decode, 234, 9, 107, // Opcode: SRAWI
/* 7822 */    MCD::OPC_FilterValue, 1, 147, 23, // Skip to: 13861
/* 7826 */    MCD::OPC_Decode, 235, 9, 107, // Opcode: SRAWIo
/* 7830 */    MCD::OPC_FilterValue, 13, 110, 1, // Skip to: 8200
/* 7834 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 7837 */    MCD::OPC_FilterValue, 0, 47, 0, // Skip to: 7888
/* 7841 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 7844 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 7858
/* 7848 */    MCD::OPC_CheckField, 11, 5, 0, 119, 23, // Skip to: 13861
/* 7854 */    MCD::OPC_Decode, 210, 2, 108, // Opcode: CNTLZW
/* 7858 */    MCD::OPC_FilterValue, 1, 10, 0, // Skip to: 7872
/* 7862 */    MCD::OPC_CheckField, 11, 5, 0, 105, 23, // Skip to: 13861
/* 7868 */    MCD::OPC_Decode, 213, 2, 108, // Opcode: CNTLZWo
/* 7872 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 7880
/* 7876 */    MCD::OPC_Decode, 215, 9, 109, // Opcode: SLD
/* 7880 */    MCD::OPC_FilterValue, 3, 89, 23, // Skip to: 13861
/* 7884 */    MCD::OPC_Decode, 218, 9, 109, // Opcode: SLDo
/* 7888 */    MCD::OPC_FilterValue, 1, 31, 0, // Skip to: 7923
/* 7892 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 7895 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 7909
/* 7899 */    MCD::OPC_CheckField, 11, 5, 0, 68, 23, // Skip to: 13861
/* 7905 */    MCD::OPC_Decode, 208, 2, 110, // Opcode: CNTLZD
/* 7909 */    MCD::OPC_FilterValue, 1, 60, 23, // Skip to: 13861
/* 7913 */    MCD::OPC_CheckField, 11, 5, 0, 54, 23, // Skip to: 13861
/* 7919 */    MCD::OPC_Decode, 209, 2, 110, // Opcode: CNTLZDo
/* 7923 */    MCD::OPC_FilterValue, 11, 16, 0, // Skip to: 7943
/* 7927 */    MCD::OPC_CheckField, 11, 5, 0, 40, 23, // Skip to: 13861
/* 7933 */    MCD::OPC_CheckField, 0, 2, 0, 34, 23, // Skip to: 13861
/* 7939 */    MCD::OPC_Decode, 223, 7, 108, // Opcode: POPCNTW
/* 7943 */    MCD::OPC_FilterValue, 15, 16, 0, // Skip to: 7963
/* 7947 */    MCD::OPC_CheckField, 11, 5, 0, 20, 23, // Skip to: 13861
/* 7953 */    MCD::OPC_CheckField, 0, 2, 0, 14, 23, // Skip to: 13861
/* 7959 */    MCD::OPC_Decode, 222, 7, 110, // Opcode: POPCNTD
/* 7963 */    MCD::OPC_FilterValue, 16, 47, 0, // Skip to: 8014
/* 7967 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 7970 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 7984
/* 7974 */    MCD::OPC_CheckField, 11, 5, 0, 249, 22, // Skip to: 13861
/* 7980 */    MCD::OPC_Decode, 216, 2, 108, // Opcode: CNTTZW
/* 7984 */    MCD::OPC_FilterValue, 1, 10, 0, // Skip to: 7998
/* 7988 */    MCD::OPC_CheckField, 11, 5, 0, 235, 22, // Skip to: 13861
/* 7994 */    MCD::OPC_Decode, 219, 2, 108, // Opcode: CNTTZWo
/* 7998 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 8006
/* 8002 */    MCD::OPC_Decode, 237, 9, 109, // Opcode: SRD
/* 8006 */    MCD::OPC_FilterValue, 3, 219, 22, // Skip to: 13861
/* 8010 */    MCD::OPC_Decode, 240, 9, 109, // Opcode: SRDo
/* 8014 */    MCD::OPC_FilterValue, 17, 31, 0, // Skip to: 8049
/* 8018 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 8021 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 8035
/* 8025 */    MCD::OPC_CheckField, 11, 5, 0, 198, 22, // Skip to: 13861
/* 8031 */    MCD::OPC_Decode, 214, 2, 110, // Opcode: CNTTZD
/* 8035 */    MCD::OPC_FilterValue, 1, 190, 22, // Skip to: 13861
/* 8039 */    MCD::OPC_CheckField, 11, 5, 0, 184, 22, // Skip to: 13861
/* 8045 */    MCD::OPC_Decode, 215, 2, 110, // Opcode: CNTTZDo
/* 8049 */    MCD::OPC_FilterValue, 24, 19, 0, // Skip to: 8072
/* 8053 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 8056 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 8064
/* 8060 */    MCD::OPC_Decode, 228, 9, 109, // Opcode: SRAD
/* 8064 */    MCD::OPC_FilterValue, 1, 161, 22, // Skip to: 13861
/* 8068 */    MCD::OPC_Decode, 232, 9, 109, // Opcode: SRADo
/* 8072 */    MCD::OPC_FilterValue, 25, 19, 0, // Skip to: 8095
/* 8076 */    MCD::OPC_ExtractField, 0, 1,  // Inst{0} ...
/* 8079 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 8087
/* 8083 */    MCD::OPC_Decode, 229, 9, 111, // Opcode: SRADI
/* 8087 */    MCD::OPC_FilterValue, 1, 138, 22, // Skip to: 13861
/* 8091 */    MCD::OPC_Decode, 231, 9, 111, // Opcode: SRADIo
/* 8095 */    MCD::OPC_FilterValue, 28, 31, 0, // Skip to: 8130
/* 8099 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 8102 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 8116
/* 8106 */    MCD::OPC_CheckField, 11, 5, 0, 117, 22, // Skip to: 13861
/* 8112 */    MCD::OPC_Decode, 235, 4, 108, // Opcode: EXTSH
/* 8116 */    MCD::OPC_FilterValue, 1, 109, 22, // Skip to: 13861
/* 8120 */    MCD::OPC_CheckField, 11, 5, 0, 103, 22, // Skip to: 13861
/* 8126 */    MCD::OPC_Decode, 239, 4, 108, // Opcode: EXTSHo
/* 8130 */    MCD::OPC_FilterValue, 29, 31, 0, // Skip to: 8165
/* 8134 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 8137 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 8151
/* 8141 */    MCD::OPC_CheckField, 11, 5, 0, 82, 22, // Skip to: 13861
/* 8147 */    MCD::OPC_Decode, 230, 4, 108, // Opcode: EXTSB
/* 8151 */    MCD::OPC_FilterValue, 1, 74, 22, // Skip to: 13861
/* 8155 */    MCD::OPC_CheckField, 11, 5, 0, 68, 22, // Skip to: 13861
/* 8161 */    MCD::OPC_Decode, 234, 4, 108, // Opcode: EXTSBo
/* 8165 */    MCD::OPC_FilterValue, 30, 60, 22, // Skip to: 13861
/* 8169 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 8172 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 8186
/* 8176 */    MCD::OPC_CheckField, 11, 5, 0, 47, 22, // Skip to: 13861
/* 8182 */    MCD::OPC_Decode, 240, 4, 110, // Opcode: EXTSW
/* 8186 */    MCD::OPC_FilterValue, 1, 39, 22, // Skip to: 13861
/* 8190 */    MCD::OPC_CheckField, 11, 5, 0, 33, 22, // Skip to: 13861
/* 8196 */    MCD::OPC_Decode, 244, 4, 110, // Opcode: EXTSWo
/* 8200 */    MCD::OPC_FilterValue, 14, 215, 0, // Skip to: 8419
/* 8204 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 8207 */    MCD::OPC_FilterValue, 0, 19, 0, // Skip to: 8230
/* 8211 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 8214 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 8222
/* 8218 */    MCD::OPC_Decode, 146, 1, 106, // Opcode: AND
/* 8222 */    MCD::OPC_FilterValue, 1, 3, 22, // Skip to: 13861
/* 8226 */    MCD::OPC_Decode, 161, 1, 106, // Opcode: ANDo
/* 8230 */    MCD::OPC_FilterValue, 1, 19, 0, // Skip to: 8253
/* 8234 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 8237 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 8245
/* 8241 */    MCD::OPC_Decode, 149, 1, 106, // Opcode: ANDC
/* 8245 */    MCD::OPC_FilterValue, 1, 236, 21, // Skip to: 13861
/* 8249 */    MCD::OPC_Decode, 152, 1, 106, // Opcode: ANDCo
/* 8253 */    MCD::OPC_FilterValue, 3, 19, 0, // Skip to: 8276
/* 8257 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 8260 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 8268
/* 8264 */    MCD::OPC_Decode, 206, 7, 106, // Opcode: NOR
/* 8268 */    MCD::OPC_FilterValue, 1, 213, 21, // Skip to: 13861
/* 8272 */    MCD::OPC_Decode, 209, 7, 106, // Opcode: NORo
/* 8276 */    MCD::OPC_FilterValue, 7, 10, 0, // Skip to: 8290
/* 8280 */    MCD::OPC_CheckField, 0, 2, 0, 199, 21, // Skip to: 13861
/* 8286 */    MCD::OPC_Decode, 183, 2, 112, // Opcode: BPERMD
/* 8290 */    MCD::OPC_FilterValue, 8, 19, 0, // Skip to: 8313
/* 8294 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 8297 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 8305
/* 8301 */    MCD::OPC_Decode, 175, 3, 106, // Opcode: EQV
/* 8305 */    MCD::OPC_FilterValue, 1, 176, 21, // Skip to: 13861
/* 8309 */    MCD::OPC_Decode, 178, 3, 106, // Opcode: EQVo
/* 8313 */    MCD::OPC_FilterValue, 9, 19, 0, // Skip to: 8336
/* 8317 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 8320 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 8328
/* 8324 */    MCD::OPC_Decode, 176, 13, 106, // Opcode: XOR
/* 8328 */    MCD::OPC_FilterValue, 1, 153, 21, // Skip to: 13861
/* 8332 */    MCD::OPC_Decode, 183, 13, 106, // Opcode: XORo
/* 8336 */    MCD::OPC_FilterValue, 12, 19, 0, // Skip to: 8359
/* 8340 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 8343 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 8351
/* 8347 */    MCD::OPC_Decode, 213, 7, 106, // Opcode: ORC
/* 8351 */    MCD::OPC_FilterValue, 1, 130, 21, // Skip to: 13861
/* 8355 */    MCD::OPC_Decode, 216, 7, 106, // Opcode: ORCo
/* 8359 */    MCD::OPC_FilterValue, 13, 19, 0, // Skip to: 8382
/* 8363 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 8366 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 8374
/* 8370 */    MCD::OPC_Decode, 210, 7, 106, // Opcode: OR
/* 8374 */    MCD::OPC_FilterValue, 1, 107, 21, // Skip to: 13861
/* 8378 */    MCD::OPC_Decode, 221, 7, 106, // Opcode: ORo
/* 8382 */    MCD::OPC_FilterValue, 14, 19, 0, // Skip to: 8405
/* 8386 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 8389 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 8397
/* 8393 */    MCD::OPC_Decode, 194, 7, 106, // Opcode: NAND
/* 8397 */    MCD::OPC_FilterValue, 1, 84, 21, // Skip to: 13861
/* 8401 */    MCD::OPC_Decode, 197, 7, 106, // Opcode: NANDo
/* 8405 */    MCD::OPC_FilterValue, 15, 76, 21, // Skip to: 13861
/* 8409 */    MCD::OPC_CheckField, 0, 2, 0, 70, 21, // Skip to: 13861
/* 8415 */    MCD::OPC_Decode, 195, 2, 106, // Opcode: CMPB
/* 8419 */    MCD::OPC_FilterValue, 15, 62, 21, // Skip to: 13861
/* 8423 */    MCD::OPC_CheckField, 23, 3, 0, 56, 21, // Skip to: 13861
/* 8429 */    MCD::OPC_CheckField, 6, 15, 1, 50, 21, // Skip to: 13861
/* 8435 */    MCD::OPC_CheckField, 0, 2, 0, 44, 21, // Skip to: 13861
/* 8441 */    MCD::OPC_Decode, 173, 13, 99, // Opcode: WAIT
/* 8445 */    MCD::OPC_FilterValue, 32, 4, 0, // Skip to: 8453
/* 8449 */    MCD::OPC_Decode, 207, 6, 113, // Opcode: LWZ
/* 8453 */    MCD::OPC_FilterValue, 33, 4, 0, // Skip to: 8461
/* 8457 */    MCD::OPC_Decode, 210, 6, 113, // Opcode: LWZU
/* 8461 */    MCD::OPC_FilterValue, 34, 4, 0, // Skip to: 8469
/* 8465 */    MCD::OPC_Decode, 255, 5, 113, // Opcode: LBZ
/* 8469 */    MCD::OPC_FilterValue, 35, 4, 0, // Skip to: 8477
/* 8473 */    MCD::OPC_Decode, 130, 6, 113, // Opcode: LBZU
/* 8477 */    MCD::OPC_FilterValue, 36, 4, 0, // Skip to: 8485
/* 8481 */    MCD::OPC_Decode, 165, 10, 113, // Opcode: STW
/* 8485 */    MCD::OPC_FilterValue, 37, 4, 0, // Skip to: 8493
/* 8489 */    MCD::OPC_Decode, 171, 10, 113, // Opcode: STWU
/* 8493 */    MCD::OPC_FilterValue, 38, 4, 0, // Skip to: 8501
/* 8497 */    MCD::OPC_Decode, 247, 9, 113, // Opcode: STB
/* 8501 */    MCD::OPC_FilterValue, 39, 4, 0, // Skip to: 8509
/* 8505 */    MCD::OPC_Decode, 251, 9, 113, // Opcode: STBU
/* 8509 */    MCD::OPC_FilterValue, 40, 4, 0, // Skip to: 8517
/* 8513 */    MCD::OPC_Decode, 175, 6, 113, // Opcode: LHZ
/* 8517 */    MCD::OPC_FilterValue, 41, 4, 0, // Skip to: 8525
/* 8521 */    MCD::OPC_Decode, 178, 6, 113, // Opcode: LHZU
/* 8525 */    MCD::OPC_FilterValue, 42, 4, 0, // Skip to: 8533
/* 8529 */    MCD::OPC_Decode, 163, 6, 113, // Opcode: LHA
/* 8533 */    MCD::OPC_FilterValue, 43, 4, 0, // Skip to: 8541
/* 8537 */    MCD::OPC_Decode, 167, 6, 113, // Opcode: LHAU
/* 8541 */    MCD::OPC_FilterValue, 44, 4, 0, // Skip to: 8549
/* 8545 */    MCD::OPC_Decode, 146, 10, 113, // Opcode: STH
/* 8549 */    MCD::OPC_FilterValue, 45, 4, 0, // Skip to: 8557
/* 8553 */    MCD::OPC_Decode, 151, 10, 113, // Opcode: STHU
/* 8557 */    MCD::OPC_FilterValue, 46, 4, 0, // Skip to: 8565
/* 8561 */    MCD::OPC_Decode, 188, 6, 113, // Opcode: LMW
/* 8565 */    MCD::OPC_FilterValue, 47, 4, 0, // Skip to: 8573
/* 8569 */    MCD::OPC_Decode, 157, 10, 113, // Opcode: STMW
/* 8573 */    MCD::OPC_FilterValue, 48, 4, 0, // Skip to: 8581
/* 8577 */    MCD::OPC_Decode, 159, 6, 114, // Opcode: LFS
/* 8581 */    MCD::OPC_FilterValue, 49, 4, 0, // Skip to: 8589
/* 8585 */    MCD::OPC_Decode, 160, 6, 114, // Opcode: LFSU
/* 8589 */    MCD::OPC_FilterValue, 50, 4, 0, // Skip to: 8597
/* 8593 */    MCD::OPC_Decode, 153, 6, 115, // Opcode: LFD
/* 8597 */    MCD::OPC_FilterValue, 51, 4, 0, // Skip to: 8605
/* 8601 */    MCD::OPC_Decode, 154, 6, 115, // Opcode: LFDU
/* 8605 */    MCD::OPC_FilterValue, 52, 4, 0, // Skip to: 8613
/* 8609 */    MCD::OPC_Decode, 142, 10, 114, // Opcode: STFS
/* 8613 */    MCD::OPC_FilterValue, 53, 4, 0, // Skip to: 8621
/* 8617 */    MCD::OPC_Decode, 143, 10, 114, // Opcode: STFSU
/* 8621 */    MCD::OPC_FilterValue, 54, 4, 0, // Skip to: 8629
/* 8625 */    MCD::OPC_Decode, 137, 10, 115, // Opcode: STFD
/* 8629 */    MCD::OPC_FilterValue, 55, 4, 0, // Skip to: 8637
/* 8633 */    MCD::OPC_Decode, 138, 10, 115, // Opcode: STFDU
/* 8637 */    MCD::OPC_FilterValue, 57, 19, 0, // Skip to: 8660
/* 8641 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 8644 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 8652
/* 8648 */    MCD::OPC_Decode, 217, 6, 116, // Opcode: LXSD
/* 8652 */    MCD::OPC_FilterValue, 3, 85, 20, // Skip to: 13861
/* 8656 */    MCD::OPC_Decode, 223, 6, 116, // Opcode: LXSSP
/* 8660 */    MCD::OPC_FilterValue, 58, 27, 0, // Skip to: 8691
/* 8664 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 8667 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 8675
/* 8671 */    MCD::OPC_Decode, 136, 6, 117, // Opcode: LD
/* 8675 */    MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 8683
/* 8679 */    MCD::OPC_Decode, 143, 6, 117, // Opcode: LDU
/* 8683 */    MCD::OPC_FilterValue, 2, 54, 20, // Skip to: 13861
/* 8687 */    MCD::OPC_Decode, 197, 6, 117, // Opcode: LWA
/* 8691 */    MCD::OPC_FilterValue, 59, 113, 1, // Skip to: 9064
/* 8695 */    MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 8698 */    MCD::OPC_FilterValue, 28, 31, 0, // Skip to: 8733
/* 8702 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 8705 */    MCD::OPC_FilterValue, 26, 10, 0, // Skip to: 8719
/* 8709 */    MCD::OPC_CheckField, 16, 5, 0, 26, 20, // Skip to: 13861
/* 8715 */    MCD::OPC_Decode, 128, 5, 118, // Opcode: FCFIDS
/* 8719 */    MCD::OPC_FilterValue, 30, 18, 20, // Skip to: 13861
/* 8723 */    MCD::OPC_CheckField, 16, 5, 0, 12, 20, // Skip to: 13861
/* 8729 */    MCD::OPC_Decode, 131, 5, 118, // Opcode: FCFIDUS
/* 8733 */    MCD::OPC_FilterValue, 29, 31, 0, // Skip to: 8768
/* 8737 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 8740 */    MCD::OPC_FilterValue, 26, 10, 0, // Skip to: 8754
/* 8744 */    MCD::OPC_CheckField, 16, 5, 0, 247, 19, // Skip to: 13861
/* 8750 */    MCD::OPC_Decode, 129, 5, 118, // Opcode: FCFIDSo
/* 8754 */    MCD::OPC_FilterValue, 30, 239, 19, // Skip to: 13861
/* 8758 */    MCD::OPC_CheckField, 16, 5, 0, 233, 19, // Skip to: 13861
/* 8764 */    MCD::OPC_Decode, 132, 5, 118, // Opcode: FCFIDUSo
/* 8768 */    MCD::OPC_FilterValue, 36, 10, 0, // Skip to: 8782
/* 8772 */    MCD::OPC_CheckField, 6, 5, 0, 219, 19, // Skip to: 13861
/* 8778 */    MCD::OPC_Decode, 158, 5, 119, // Opcode: FDIVS
/* 8782 */    MCD::OPC_FilterValue, 37, 10, 0, // Skip to: 8796
/* 8786 */    MCD::OPC_CheckField, 6, 5, 0, 205, 19, // Skip to: 13861
/* 8792 */    MCD::OPC_Decode, 159, 5, 119, // Opcode: FDIVSo
/* 8796 */    MCD::OPC_FilterValue, 40, 10, 0, // Skip to: 8810
/* 8800 */    MCD::OPC_CheckField, 6, 5, 0, 191, 19, // Skip to: 13861
/* 8806 */    MCD::OPC_Decode, 226, 5, 119, // Opcode: FSUBS
/* 8810 */    MCD::OPC_FilterValue, 41, 10, 0, // Skip to: 8824
/* 8814 */    MCD::OPC_CheckField, 6, 5, 0, 177, 19, // Skip to: 13861
/* 8820 */    MCD::OPC_Decode, 227, 5, 119, // Opcode: FSUBSo
/* 8824 */    MCD::OPC_FilterValue, 42, 10, 0, // Skip to: 8838
/* 8828 */    MCD::OPC_CheckField, 6, 5, 0, 163, 19, // Skip to: 13861
/* 8834 */    MCD::OPC_Decode, 251, 4, 119, // Opcode: FADDS
/* 8838 */    MCD::OPC_FilterValue, 43, 10, 0, // Skip to: 8852
/* 8842 */    MCD::OPC_CheckField, 6, 5, 0, 149, 19, // Skip to: 13861
/* 8848 */    MCD::OPC_Decode, 252, 4, 119, // Opcode: FADDSo
/* 8852 */    MCD::OPC_FilterValue, 44, 16, 0, // Skip to: 8872
/* 8856 */    MCD::OPC_CheckField, 16, 5, 0, 135, 19, // Skip to: 13861
/* 8862 */    MCD::OPC_CheckField, 6, 5, 0, 129, 19, // Skip to: 13861
/* 8868 */    MCD::OPC_Decode, 222, 5, 120, // Opcode: FSQRTS
/* 8872 */    MCD::OPC_FilterValue, 45, 16, 0, // Skip to: 8892
/* 8876 */    MCD::OPC_CheckField, 16, 5, 0, 115, 19, // Skip to: 13861
/* 8882 */    MCD::OPC_CheckField, 6, 5, 0, 109, 19, // Skip to: 13861
/* 8888 */    MCD::OPC_Decode, 223, 5, 120, // Opcode: FSQRTSo
/* 8892 */    MCD::OPC_FilterValue, 48, 16, 0, // Skip to: 8912
/* 8896 */    MCD::OPC_CheckField, 16, 5, 0, 95, 19, // Skip to: 13861
/* 8902 */    MCD::OPC_CheckField, 6, 5, 0, 89, 19, // Skip to: 13861
/* 8908 */    MCD::OPC_Decode, 192, 5, 120, // Opcode: FRES
/* 8912 */    MCD::OPC_FilterValue, 49, 16, 0, // Skip to: 8932
/* 8916 */    MCD::OPC_CheckField, 16, 5, 0, 75, 19, // Skip to: 13861
/* 8922 */    MCD::OPC_CheckField, 6, 5, 0, 69, 19, // Skip to: 13861
/* 8928 */    MCD::OPC_Decode, 193, 5, 120, // Opcode: FRESo
/* 8932 */    MCD::OPC_FilterValue, 50, 10, 0, // Skip to: 8946
/* 8936 */    MCD::OPC_CheckField, 11, 5, 0, 55, 19, // Skip to: 13861
/* 8942 */    MCD::OPC_Decode, 172, 5, 121, // Opcode: FMULS
/* 8946 */    MCD::OPC_FilterValue, 51, 10, 0, // Skip to: 8960
/* 8950 */    MCD::OPC_CheckField, 11, 5, 0, 41, 19, // Skip to: 13861
/* 8956 */    MCD::OPC_Decode, 173, 5, 121, // Opcode: FMULSo
/* 8960 */    MCD::OPC_FilterValue, 52, 16, 0, // Skip to: 8980
/* 8964 */    MCD::OPC_CheckField, 16, 5, 0, 27, 19, // Skip to: 13861
/* 8970 */    MCD::OPC_CheckField, 6, 5, 0, 21, 19, // Skip to: 13861
/* 8976 */    MCD::OPC_Decode, 214, 5, 120, // Opcode: FRSQRTES
/* 8980 */    MCD::OPC_FilterValue, 53, 16, 0, // Skip to: 9000
/* 8984 */    MCD::OPC_CheckField, 16, 5, 0, 7, 19, // Skip to: 13861
/* 8990 */    MCD::OPC_CheckField, 6, 5, 0, 1, 19, // Skip to: 13861
/* 8996 */    MCD::OPC_Decode, 215, 5, 120, // Opcode: FRSQRTESo
/* 9000 */    MCD::OPC_FilterValue, 56, 4, 0, // Skip to: 9008
/* 9004 */    MCD::OPC_Decode, 168, 5, 122, // Opcode: FMSUBS
/* 9008 */    MCD::OPC_FilterValue, 57, 4, 0, // Skip to: 9016
/* 9012 */    MCD::OPC_Decode, 169, 5, 122, // Opcode: FMSUBSo
/* 9016 */    MCD::OPC_FilterValue, 58, 4, 0, // Skip to: 9024
/* 9020 */    MCD::OPC_Decode, 162, 5, 122, // Opcode: FMADDS
/* 9024 */    MCD::OPC_FilterValue, 59, 4, 0, // Skip to: 9032
/* 9028 */    MCD::OPC_Decode, 163, 5, 122, // Opcode: FMADDSo
/* 9032 */    MCD::OPC_FilterValue, 60, 4, 0, // Skip to: 9040
/* 9036 */    MCD::OPC_Decode, 188, 5, 122, // Opcode: FNMSUBS
/* 9040 */    MCD::OPC_FilterValue, 61, 4, 0, // Skip to: 9048
/* 9044 */    MCD::OPC_Decode, 189, 5, 122, // Opcode: FNMSUBSo
/* 9048 */    MCD::OPC_FilterValue, 62, 4, 0, // Skip to: 9056
/* 9052 */    MCD::OPC_Decode, 184, 5, 122, // Opcode: FNMADDS
/* 9056 */    MCD::OPC_FilterValue, 63, 193, 18, // Skip to: 13861
/* 9060 */    MCD::OPC_Decode, 185, 5, 122, // Opcode: FNMADDSo
/* 9064 */    MCD::OPC_FilterValue, 60, 70, 12, // Skip to: 12210
/* 9068 */    MCD::OPC_ExtractField, 4, 2,  // Inst{5-4} ...
/* 9071 */    MCD::OPC_FilterValue, 0, 238, 2, // Skip to: 9825
/* 9075 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 9078 */    MCD::OPC_FilterValue, 0, 19, 0, // Skip to: 9101
/* 9082 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 9085 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 9093
/* 9089 */    MCD::OPC_Decode, 189, 13, 123, // Opcode: XSADDSP
/* 9093 */    MCD::OPC_FilterValue, 1, 156, 18, // Skip to: 13861
/* 9097 */    MCD::OPC_Decode, 236, 13, 124, // Opcode: XSMADDASP
/* 9101 */    MCD::OPC_FilterValue, 1, 19, 0, // Skip to: 9124
/* 9105 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 9108 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 9116
/* 9112 */    MCD::OPC_Decode, 164, 14, 123, // Opcode: XSSUBSP
/* 9116 */    MCD::OPC_FilterValue, 1, 133, 18, // Skip to: 13861
/* 9120 */    MCD::OPC_Decode, 238, 13, 124, // Opcode: XSMADDMSP
/* 9124 */    MCD::OPC_FilterValue, 2, 19, 0, // Skip to: 9147
/* 9128 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 9131 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 9139
/* 9135 */    MCD::OPC_Decode, 128, 14, 123, // Opcode: XSMULSP
/* 9139 */    MCD::OPC_FilterValue, 1, 110, 18, // Skip to: 13861
/* 9143 */    MCD::OPC_Decode, 248, 13, 124, // Opcode: XSMSUBASP
/* 9147 */    MCD::OPC_FilterValue, 3, 19, 0, // Skip to: 9170
/* 9151 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 9154 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 9162
/* 9158 */    MCD::OPC_Decode, 232, 13, 123, // Opcode: XSDIVSP
/* 9162 */    MCD::OPC_FilterValue, 1, 87, 18, // Skip to: 13861
/* 9166 */    MCD::OPC_Decode, 250, 13, 124, // Opcode: XSMSUBMSP
/* 9170 */    MCD::OPC_FilterValue, 4, 19, 0, // Skip to: 9193
/* 9174 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 9177 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 9185
/* 9181 */    MCD::OPC_Decode, 186, 13, 125, // Opcode: XSADDDP
/* 9185 */    MCD::OPC_FilterValue, 1, 64, 18, // Skip to: 13861
/* 9189 */    MCD::OPC_Decode, 235, 13, 126, // Opcode: XSMADDADP
/* 9193 */    MCD::OPC_FilterValue, 5, 19, 0, // Skip to: 9216
/* 9197 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 9200 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 9208
/* 9204 */    MCD::OPC_Decode, 161, 14, 125, // Opcode: XSSUBDP
/* 9208 */    MCD::OPC_FilterValue, 1, 41, 18, // Skip to: 13861
/* 9212 */    MCD::OPC_Decode, 237, 13, 126, // Opcode: XSMADDMDP
/* 9216 */    MCD::OPC_FilterValue, 6, 19, 0, // Skip to: 9239
/* 9220 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 9223 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 9231
/* 9227 */    MCD::OPC_Decode, 253, 13, 125, // Opcode: XSMULDP
/* 9231 */    MCD::OPC_FilterValue, 1, 18, 18, // Skip to: 13861
/* 9235 */    MCD::OPC_Decode, 247, 13, 126, // Opcode: XSMSUBADP
/* 9239 */    MCD::OPC_FilterValue, 7, 19, 0, // Skip to: 9262
/* 9243 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 9246 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 9254
/* 9250 */    MCD::OPC_Decode, 229, 13, 125, // Opcode: XSDIVDP
/* 9254 */    MCD::OPC_FilterValue, 1, 251, 17, // Skip to: 13861
/* 9258 */    MCD::OPC_Decode, 249, 13, 126, // Opcode: XSMSUBMDP
/* 9262 */    MCD::OPC_FilterValue, 8, 20, 0, // Skip to: 9286
/* 9266 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 9269 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 9277
/* 9273 */    MCD::OPC_Decode, 177, 14, 127, // Opcode: XVADDSP
/* 9277 */    MCD::OPC_FilterValue, 1, 228, 17, // Skip to: 13861
/* 9281 */    MCD::OPC_Decode, 221, 14, 128, 1, // Opcode: XVMADDASP
/* 9286 */    MCD::OPC_FilterValue, 9, 20, 0, // Skip to: 9310
/* 9290 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 9293 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 9301
/* 9297 */    MCD::OPC_Decode, 135, 15, 127, // Opcode: XVSUBSP
/* 9301 */    MCD::OPC_FilterValue, 1, 204, 17, // Skip to: 13861
/* 9305 */    MCD::OPC_Decode, 223, 14, 128, 1, // Opcode: XVMADDMSP
/* 9310 */    MCD::OPC_FilterValue, 10, 20, 0, // Skip to: 9334
/* 9314 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 9317 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 9325
/* 9321 */    MCD::OPC_Decode, 233, 14, 127, // Opcode: XVMULSP
/* 9325 */    MCD::OPC_FilterValue, 1, 180, 17, // Skip to: 13861
/* 9329 */    MCD::OPC_Decode, 229, 14, 128, 1, // Opcode: XVMSUBASP
/* 9334 */    MCD::OPC_FilterValue, 11, 20, 0, // Skip to: 9358
/* 9338 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 9341 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 9349
/* 9345 */    MCD::OPC_Decode, 217, 14, 127, // Opcode: XVDIVSP
/* 9349 */    MCD::OPC_FilterValue, 1, 156, 17, // Skip to: 13861
/* 9353 */    MCD::OPC_Decode, 231, 14, 128, 1, // Opcode: XVMSUBMSP
/* 9358 */    MCD::OPC_FilterValue, 12, 20, 0, // Skip to: 9382
/* 9362 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 9365 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 9373
/* 9369 */    MCD::OPC_Decode, 176, 14, 127, // Opcode: XVADDDP
/* 9373 */    MCD::OPC_FilterValue, 1, 132, 17, // Skip to: 13861
/* 9377 */    MCD::OPC_Decode, 220, 14, 128, 1, // Opcode: XVMADDADP
/* 9382 */    MCD::OPC_FilterValue, 13, 20, 0, // Skip to: 9406
/* 9386 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 9389 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 9397
/* 9393 */    MCD::OPC_Decode, 134, 15, 127, // Opcode: XVSUBDP
/* 9397 */    MCD::OPC_FilterValue, 1, 108, 17, // Skip to: 13861
/* 9401 */    MCD::OPC_Decode, 222, 14, 128, 1, // Opcode: XVMADDMDP
/* 9406 */    MCD::OPC_FilterValue, 14, 20, 0, // Skip to: 9430
/* 9410 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 9413 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 9421
/* 9417 */    MCD::OPC_Decode, 232, 14, 127, // Opcode: XVMULDP
/* 9421 */    MCD::OPC_FilterValue, 1, 84, 17, // Skip to: 13861
/* 9425 */    MCD::OPC_Decode, 228, 14, 128, 1, // Opcode: XVMSUBADP
/* 9430 */    MCD::OPC_FilterValue, 15, 20, 0, // Skip to: 9454
/* 9434 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 9437 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 9445
/* 9441 */    MCD::OPC_Decode, 216, 14, 127, // Opcode: XVDIVDP
/* 9445 */    MCD::OPC_FilterValue, 1, 60, 17, // Skip to: 13861
/* 9449 */    MCD::OPC_Decode, 230, 14, 128, 1, // Opcode: XVMSUBMDP
/* 9454 */    MCD::OPC_FilterValue, 16, 20, 0, // Skip to: 9478
/* 9458 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 9461 */    MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 9470
/* 9465 */    MCD::OPC_Decode, 241, 13, 129, 1, // Opcode: XSMAXCDP
/* 9470 */    MCD::OPC_FilterValue, 1, 35, 17, // Skip to: 13861
/* 9474 */    MCD::OPC_Decode, 134, 14, 124, // Opcode: XSNMADDASP
/* 9478 */    MCD::OPC_FilterValue, 17, 20, 0, // Skip to: 9502
/* 9482 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 9485 */    MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 9494
/* 9489 */    MCD::OPC_Decode, 244, 13, 129, 1, // Opcode: XSMINCDP
/* 9494 */    MCD::OPC_FilterValue, 1, 11, 17, // Skip to: 13861
/* 9498 */    MCD::OPC_Decode, 136, 14, 124, // Opcode: XSNMADDMSP
/* 9502 */    MCD::OPC_FilterValue, 18, 20, 0, // Skip to: 9526
/* 9506 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 9509 */    MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 9518
/* 9513 */    MCD::OPC_Decode, 243, 13, 129, 1, // Opcode: XSMAXJDP
/* 9518 */    MCD::OPC_FilterValue, 1, 243, 16, // Skip to: 13861
/* 9522 */    MCD::OPC_Decode, 140, 14, 124, // Opcode: XSNMSUBASP
/* 9526 */    MCD::OPC_FilterValue, 19, 20, 0, // Skip to: 9550
/* 9530 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 9533 */    MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 9542
/* 9537 */    MCD::OPC_Decode, 246, 13, 129, 1, // Opcode: XSMINJDP
/* 9542 */    MCD::OPC_FilterValue, 1, 219, 16, // Skip to: 13861
/* 9546 */    MCD::OPC_Decode, 142, 14, 124, // Opcode: XSNMSUBMSP
/* 9550 */    MCD::OPC_FilterValue, 20, 19, 0, // Skip to: 9573
/* 9554 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 9557 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 9565
/* 9561 */    MCD::OPC_Decode, 242, 13, 125, // Opcode: XSMAXDP
/* 9565 */    MCD::OPC_FilterValue, 1, 196, 16, // Skip to: 13861
/* 9569 */    MCD::OPC_Decode, 133, 14, 126, // Opcode: XSNMADDADP
/* 9573 */    MCD::OPC_FilterValue, 21, 19, 0, // Skip to: 9596
/* 9577 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 9580 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 9588
/* 9584 */    MCD::OPC_Decode, 245, 13, 125, // Opcode: XSMINDP
/* 9588 */    MCD::OPC_FilterValue, 1, 173, 16, // Skip to: 13861
/* 9592 */    MCD::OPC_Decode, 135, 14, 126, // Opcode: XSNMADDMDP
/* 9596 */    MCD::OPC_FilterValue, 22, 19, 0, // Skip to: 9619
/* 9600 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 9603 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 9611
/* 9607 */    MCD::OPC_Decode, 200, 13, 125, // Opcode: XSCPSGNDP
/* 9611 */    MCD::OPC_FilterValue, 1, 150, 16, // Skip to: 13861
/* 9615 */    MCD::OPC_Decode, 139, 14, 126, // Opcode: XSNMSUBADP
/* 9619 */    MCD::OPC_FilterValue, 23, 10, 0, // Skip to: 9633
/* 9623 */    MCD::OPC_CheckField, 3, 1, 1, 136, 16, // Skip to: 13861
/* 9629 */    MCD::OPC_Decode, 141, 14, 126, // Opcode: XSNMSUBMDP
/* 9633 */    MCD::OPC_FilterValue, 24, 20, 0, // Skip to: 9657
/* 9637 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 9640 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 9648
/* 9644 */    MCD::OPC_Decode, 225, 14, 127, // Opcode: XVMAXSP
/* 9648 */    MCD::OPC_FilterValue, 1, 113, 16, // Skip to: 13861
/* 9652 */    MCD::OPC_Decode, 239, 14, 128, 1, // Opcode: XVNMADDASP
/* 9657 */    MCD::OPC_FilterValue, 25, 20, 0, // Skip to: 9681
/* 9661 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 9664 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 9672
/* 9668 */    MCD::OPC_Decode, 227, 14, 127, // Opcode: XVMINSP
/* 9672 */    MCD::OPC_FilterValue, 1, 89, 16, // Skip to: 13861
/* 9676 */    MCD::OPC_Decode, 241, 14, 128, 1, // Opcode: XVNMADDMSP
/* 9681 */    MCD::OPC_FilterValue, 26, 20, 0, // Skip to: 9705
/* 9685 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 9688 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 9696
/* 9692 */    MCD::OPC_Decode, 195, 14, 127, // Opcode: XVCPSGNSP
/* 9696 */    MCD::OPC_FilterValue, 1, 65, 16, // Skip to: 13861
/* 9700 */    MCD::OPC_Decode, 243, 14, 128, 1, // Opcode: XVNMSUBASP
/* 9705 */    MCD::OPC_FilterValue, 27, 20, 0, // Skip to: 9729
/* 9709 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 9712 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 9720
/* 9716 */    MCD::OPC_Decode, 219, 14, 127, // Opcode: XVIEXPSP
/* 9720 */    MCD::OPC_FilterValue, 1, 41, 16, // Skip to: 13861
/* 9724 */    MCD::OPC_Decode, 245, 14, 128, 1, // Opcode: XVNMSUBMSP
/* 9729 */    MCD::OPC_FilterValue, 28, 20, 0, // Skip to: 9753
/* 9733 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 9736 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 9744
/* 9740 */    MCD::OPC_Decode, 224, 14, 127, // Opcode: XVMAXDP
/* 9744 */    MCD::OPC_FilterValue, 1, 17, 16, // Skip to: 13861
/* 9748 */    MCD::OPC_Decode, 238, 14, 128, 1, // Opcode: XVNMADDADP
/* 9753 */    MCD::OPC_FilterValue, 29, 20, 0, // Skip to: 9777
/* 9757 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 9760 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 9768
/* 9764 */    MCD::OPC_Decode, 226, 14, 127, // Opcode: XVMINDP
/* 9768 */    MCD::OPC_FilterValue, 1, 249, 15, // Skip to: 13861
/* 9772 */    MCD::OPC_Decode, 240, 14, 128, 1, // Opcode: XVNMADDMDP
/* 9777 */    MCD::OPC_FilterValue, 30, 20, 0, // Skip to: 9801
/* 9781 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 9784 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 9792
/* 9788 */    MCD::OPC_Decode, 194, 14, 127, // Opcode: XVCPSGNDP
/* 9792 */    MCD::OPC_FilterValue, 1, 225, 15, // Skip to: 13861
/* 9796 */    MCD::OPC_Decode, 242, 14, 128, 1, // Opcode: XVNMSUBADP
/* 9801 */    MCD::OPC_FilterValue, 31, 216, 15, // Skip to: 13861
/* 9805 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 9808 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 9816
/* 9812 */    MCD::OPC_Decode, 218, 14, 127, // Opcode: XVIEXPDP
/* 9816 */    MCD::OPC_FilterValue, 1, 201, 15, // Skip to: 13861
/* 9820 */    MCD::OPC_Decode, 244, 14, 128, 1, // Opcode: XVNMSUBMDP
/* 9825 */    MCD::OPC_FilterValue, 1, 71, 2, // Skip to: 10412
/* 9829 */    MCD::OPC_ExtractField, 6, 2,  // Inst{7-6} ...
/* 9832 */    MCD::OPC_FilterValue, 0, 111, 0, // Skip to: 9947
/* 9836 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 9839 */    MCD::OPC_FilterValue, 0, 35, 0, // Skip to: 9878
/* 9843 */    MCD::OPC_ExtractField, 10, 1,  // Inst{10} ...
/* 9846 */    MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 9855
/* 9850 */    MCD::OPC_Decode, 171, 15, 130, 1, // Opcode: XXSLDWI
/* 9855 */    MCD::OPC_FilterValue, 1, 162, 15, // Skip to: 13861
/* 9859 */    MCD::OPC_ExtractField, 8, 2,  // Inst{9-8} ...
/* 9862 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 9870
/* 9866 */    MCD::OPC_Decode, 152, 15, 127, // Opcode: XXLAND
/* 9870 */    MCD::OPC_FilterValue, 1, 147, 15, // Skip to: 13861
/* 9874 */    MCD::OPC_Decode, 156, 15, 127, // Opcode: XXLNOR
/* 9878 */    MCD::OPC_FilterValue, 1, 139, 15, // Skip to: 13861
/* 9882 */    MCD::OPC_ExtractField, 8, 3,  // Inst{10-8} ...
/* 9885 */    MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 9894
/* 9889 */    MCD::OPC_Decode, 190, 13, 129, 1, // Opcode: XSCMPEQDP
/* 9894 */    MCD::OPC_FilterValue, 1, 17, 0, // Skip to: 9915
/* 9898 */    MCD::OPC_CheckField, 21, 2, 0, 117, 15, // Skip to: 13861
/* 9904 */    MCD::OPC_CheckField, 0, 1, 0, 111, 15, // Skip to: 13861
/* 9910 */    MCD::OPC_Decode, 198, 13, 131, 1, // Opcode: XSCMPUDP
/* 9915 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 9923
/* 9919 */    MCD::OPC_Decode, 180, 14, 127, // Opcode: XVCMPEQSP
/* 9923 */    MCD::OPC_FilterValue, 3, 4, 0, // Skip to: 9931
/* 9927 */    MCD::OPC_Decode, 178, 14, 127, // Opcode: XVCMPEQDP
/* 9931 */    MCD::OPC_FilterValue, 6, 4, 0, // Skip to: 9939
/* 9935 */    MCD::OPC_Decode, 181, 14, 127, // Opcode: XVCMPEQSPo
/* 9939 */    MCD::OPC_FilterValue, 7, 78, 15, // Skip to: 13861
/* 9943 */    MCD::OPC_Decode, 179, 14, 127, // Opcode: XVCMPEQDPo
/* 9947 */    MCD::OPC_FilterValue, 1, 111, 0, // Skip to: 10062
/* 9951 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 9954 */    MCD::OPC_FilterValue, 0, 35, 0, // Skip to: 9993
/* 9958 */    MCD::OPC_ExtractField, 10, 1,  // Inst{10} ...
/* 9961 */    MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 9970
/* 9965 */    MCD::OPC_Decode, 167, 15, 130, 1, // Opcode: XXPERMDI
/* 9970 */    MCD::OPC_FilterValue, 1, 47, 15, // Skip to: 13861
/* 9974 */    MCD::OPC_ExtractField, 8, 2,  // Inst{9-8} ...
/* 9977 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 9985
/* 9981 */    MCD::OPC_Decode, 153, 15, 127, // Opcode: XXLANDC
/* 9985 */    MCD::OPC_FilterValue, 1, 32, 15, // Skip to: 13861
/* 9989 */    MCD::OPC_Decode, 158, 15, 127, // Opcode: XXLORC
/* 9993 */    MCD::OPC_FilterValue, 1, 24, 15, // Skip to: 13861
/* 9997 */    MCD::OPC_ExtractField, 8, 3,  // Inst{10-8} ...
/* 10000 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 10009
/* 10004 */   MCD::OPC_Decode, 194, 13, 129, 1, // Opcode: XSCMPGTDP
/* 10009 */   MCD::OPC_FilterValue, 1, 17, 0, // Skip to: 10030
/* 10013 */   MCD::OPC_CheckField, 21, 2, 0, 2, 15, // Skip to: 13861
/* 10019 */   MCD::OPC_CheckField, 0, 1, 0, 252, 14, // Skip to: 13861
/* 10025 */   MCD::OPC_Decode, 196, 13, 131, 1, // Opcode: XSCMPODP
/* 10030 */   MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 10038
/* 10034 */   MCD::OPC_Decode, 188, 14, 127, // Opcode: XVCMPGTSP
/* 10038 */   MCD::OPC_FilterValue, 3, 4, 0, // Skip to: 10046
/* 10042 */   MCD::OPC_Decode, 186, 14, 127, // Opcode: XVCMPGTDP
/* 10046 */   MCD::OPC_FilterValue, 6, 4, 0, // Skip to: 10054
/* 10050 */   MCD::OPC_Decode, 189, 14, 127, // Opcode: XVCMPGTSPo
/* 10054 */   MCD::OPC_FilterValue, 7, 219, 14, // Skip to: 13861
/* 10058 */   MCD::OPC_Decode, 187, 14, 127, // Opcode: XVCMPGTDPo
/* 10062 */   MCD::OPC_FilterValue, 2, 157, 0, // Skip to: 10223
/* 10066 */   MCD::OPC_ExtractField, 8, 3,  // Inst{10-8} ...
/* 10069 */   MCD::OPC_FilterValue, 0, 20, 0, // Skip to: 10093
/* 10073 */   MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 10076 */   MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 10084
/* 10080 */   MCD::OPC_Decode, 164, 15, 127, // Opcode: XXMRGHW
/* 10084 */   MCD::OPC_FilterValue, 1, 189, 14, // Skip to: 13861
/* 10088 */   MCD::OPC_Decode, 193, 13, 129, 1, // Opcode: XSCMPGEDP
/* 10093 */   MCD::OPC_FilterValue, 1, 10, 0, // Skip to: 10107
/* 10097 */   MCD::OPC_CheckField, 3, 1, 0, 174, 14, // Skip to: 13861
/* 10103 */   MCD::OPC_Decode, 165, 15, 127, // Opcode: XXMRGLW
/* 10107 */   MCD::OPC_FilterValue, 2, 42, 0, // Skip to: 10153
/* 10111 */   MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 10114 */   MCD::OPC_FilterValue, 0, 27, 0, // Skip to: 10145
/* 10118 */   MCD::OPC_ExtractField, 2, 1,  // Inst{2} ...
/* 10121 */   MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 10136
/* 10125 */   MCD::OPC_CheckField, 18, 3, 0, 146, 14, // Skip to: 13861
/* 10131 */   MCD::OPC_Decode, 173, 15, 132, 1, // Opcode: XXSPLTW
/* 10136 */   MCD::OPC_FilterValue, 1, 137, 14, // Skip to: 13861
/* 10140 */   MCD::OPC_Decode, 150, 15, 133, 1, // Opcode: XXEXTRACTUW
/* 10145 */   MCD::OPC_FilterValue, 1, 128, 14, // Skip to: 13861
/* 10149 */   MCD::OPC_Decode, 184, 14, 127, // Opcode: XVCMPGESP
/* 10153 */   MCD::OPC_FilterValue, 3, 10, 0, // Skip to: 10167
/* 10157 */   MCD::OPC_CheckField, 3, 1, 1, 114, 14, // Skip to: 13861
/* 10163 */   MCD::OPC_Decode, 182, 14, 127, // Opcode: XVCMPGEDP
/* 10167 */   MCD::OPC_FilterValue, 4, 10, 0, // Skip to: 10181
/* 10171 */   MCD::OPC_CheckField, 3, 1, 0, 100, 14, // Skip to: 13861
/* 10177 */   MCD::OPC_Decode, 157, 15, 127, // Opcode: XXLOR
/* 10181 */   MCD::OPC_FilterValue, 5, 10, 0, // Skip to: 10195
/* 10185 */   MCD::OPC_CheckField, 3, 1, 0, 86, 14, // Skip to: 13861
/* 10191 */   MCD::OPC_Decode, 155, 15, 127, // Opcode: XXLNAND
/* 10195 */   MCD::OPC_FilterValue, 6, 10, 0, // Skip to: 10209
/* 10199 */   MCD::OPC_CheckField, 3, 1, 1, 72, 14, // Skip to: 13861
/* 10205 */   MCD::OPC_Decode, 185, 14, 127, // Opcode: XVCMPGESPo
/* 10209 */   MCD::OPC_FilterValue, 7, 64, 14, // Skip to: 13861
/* 10213 */   MCD::OPC_CheckField, 3, 1, 1, 58, 14, // Skip to: 13861
/* 10219 */   MCD::OPC_Decode, 183, 14, 127, // Opcode: XVCMPGEDPo
/* 10223 */   MCD::OPC_FilterValue, 3, 50, 14, // Skip to: 13861
/* 10227 */   MCD::OPC_ExtractField, 8, 3,  // Inst{10-8} ...
/* 10230 */   MCD::OPC_FilterValue, 0, 20, 0, // Skip to: 10254
/* 10234 */   MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 10237 */   MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 10245
/* 10241 */   MCD::OPC_Decode, 166, 15, 127, // Opcode: XXPERM
/* 10245 */   MCD::OPC_FilterValue, 1, 28, 14, // Skip to: 13861
/* 10249 */   MCD::OPC_Decode, 195, 13, 129, 1, // Opcode: XSCMPNEDP
/* 10254 */   MCD::OPC_FilterValue, 1, 32, 0, // Skip to: 10290
/* 10258 */   MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 10261 */   MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 10269
/* 10265 */   MCD::OPC_Decode, 169, 15, 127, // Opcode: XXPERMR
/* 10269 */   MCD::OPC_FilterValue, 1, 4, 14, // Skip to: 13861
/* 10273 */   MCD::OPC_CheckField, 21, 2, 0, 254, 13, // Skip to: 13861
/* 10279 */   MCD::OPC_CheckField, 0, 1, 0, 248, 13, // Skip to: 13861
/* 10285 */   MCD::OPC_Decode, 191, 13, 131, 1, // Opcode: XSCMPEXPDP
/* 10290 */   MCD::OPC_FilterValue, 2, 48, 0, // Skip to: 10342
/* 10294 */   MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 10297 */   MCD::OPC_FilterValue, 0, 33, 0, // Skip to: 10334
/* 10301 */   MCD::OPC_ExtractField, 2, 1,  // Inst{2} ...
/* 10304 */   MCD::OPC_FilterValue, 0, 17, 0, // Skip to: 10325
/* 10308 */   MCD::OPC_CheckField, 19, 2, 0, 219, 13, // Skip to: 13861
/* 10314 */   MCD::OPC_CheckField, 1, 1, 0, 213, 13, // Skip to: 13861
/* 10320 */   MCD::OPC_Decode, 172, 15, 134, 1, // Opcode: XXSPLTIB
/* 10325 */   MCD::OPC_FilterValue, 1, 204, 13, // Skip to: 13861
/* 10329 */   MCD::OPC_Decode, 151, 15, 135, 1, // Opcode: XXINSERTW
/* 10334 */   MCD::OPC_FilterValue, 1, 195, 13, // Skip to: 13861
/* 10338 */   MCD::OPC_Decode, 192, 14, 127, // Opcode: XVCMPNESP
/* 10342 */   MCD::OPC_FilterValue, 3, 10, 0, // Skip to: 10356
/* 10346 */   MCD::OPC_CheckField, 3, 1, 1, 181, 13, // Skip to: 13861
/* 10352 */   MCD::OPC_Decode, 190, 14, 127, // Opcode: XVCMPNEDP
/* 10356 */   MCD::OPC_FilterValue, 4, 10, 0, // Skip to: 10370
/* 10360 */   MCD::OPC_CheckField, 3, 1, 0, 167, 13, // Skip to: 13861
/* 10366 */   MCD::OPC_Decode, 160, 15, 127, // Opcode: XXLXOR
/* 10370 */   MCD::OPC_FilterValue, 5, 10, 0, // Skip to: 10384
/* 10374 */   MCD::OPC_CheckField, 3, 1, 0, 153, 13, // Skip to: 13861
/* 10380 */   MCD::OPC_Decode, 154, 15, 127, // Opcode: XXLEQV
/* 10384 */   MCD::OPC_FilterValue, 6, 10, 0, // Skip to: 10398
/* 10388 */   MCD::OPC_CheckField, 3, 1, 1, 139, 13, // Skip to: 13861
/* 10394 */   MCD::OPC_Decode, 193, 14, 127, // Opcode: XVCMPNESPo
/* 10398 */   MCD::OPC_FilterValue, 7, 131, 13, // Skip to: 13861
/* 10402 */   MCD::OPC_CheckField, 3, 1, 1, 125, 13, // Skip to: 13861
/* 10408 */   MCD::OPC_Decode, 191, 14, 127, // Opcode: XVCMPNEDPo
/* 10412 */   MCD::OPC_FilterValue, 2, 249, 6, // Skip to: 12201
/* 10416 */   MCD::OPC_ExtractField, 7, 4,  // Inst{10-7} ...
/* 10419 */   MCD::OPC_FilterValue, 0, 61, 0, // Skip to: 10484
/* 10423 */   MCD::OPC_ExtractField, 2, 2,  // Inst{3-2} ...
/* 10426 */   MCD::OPC_FilterValue, 2, 33, 0, // Skip to: 10463
/* 10430 */   MCD::OPC_ExtractField, 6, 1,  // Inst{6} ...
/* 10433 */   MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 10448
/* 10437 */   MCD::OPC_CheckField, 16, 5, 0, 90, 13, // Skip to: 13861
/* 10443 */   MCD::OPC_Decode, 156, 14, 136, 1, // Opcode: XSRSQRTESP
/* 10448 */   MCD::OPC_FilterValue, 1, 81, 13, // Skip to: 13861
/* 10452 */   MCD::OPC_CheckField, 16, 5, 0, 75, 13, // Skip to: 13861
/* 10458 */   MCD::OPC_Decode, 151, 14, 136, 1, // Opcode: XSRESP
/* 10463 */   MCD::OPC_FilterValue, 3, 66, 13, // Skip to: 13861
/* 10467 */   MCD::OPC_CheckField, 16, 5, 0, 60, 13, // Skip to: 13861
/* 10473 */   MCD::OPC_CheckField, 6, 1, 0, 54, 13, // Skip to: 13861
/* 10479 */   MCD::OPC_Decode, 160, 14, 136, 1, // Opcode: XSSQRTSP
/* 10484 */   MCD::OPC_FilterValue, 2, 135, 0, // Skip to: 10623
/* 10488 */   MCD::OPC_ExtractField, 2, 2,  // Inst{3-2} ...
/* 10491 */   MCD::OPC_FilterValue, 0, 33, 0, // Skip to: 10528
/* 10495 */   MCD::OPC_ExtractField, 6, 1,  // Inst{6} ...
/* 10498 */   MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 10513
/* 10502 */   MCD::OPC_CheckField, 16, 5, 0, 25, 13, // Skip to: 13861
/* 10508 */   MCD::OPC_Decode, 212, 13, 137, 1, // Opcode: XSCVDPUXWS
/* 10513 */   MCD::OPC_FilterValue, 1, 16, 13, // Skip to: 13861
/* 10517 */   MCD::OPC_CheckField, 16, 5, 0, 10, 13, // Skip to: 13861
/* 10523 */   MCD::OPC_Decode, 208, 13, 137, 1, // Opcode: XSCVDPSXWS
/* 10528 */   MCD::OPC_FilterValue, 1, 33, 0, // Skip to: 10565
/* 10532 */   MCD::OPC_ExtractField, 6, 1,  // Inst{6} ...
/* 10535 */   MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 10550
/* 10539 */   MCD::OPC_CheckField, 16, 5, 0, 244, 12, // Skip to: 13861
/* 10545 */   MCD::OPC_Decode, 145, 14, 137, 1, // Opcode: XSRDPI
/* 10550 */   MCD::OPC_FilterValue, 1, 235, 12, // Skip to: 13861
/* 10554 */   MCD::OPC_CheckField, 16, 5, 0, 229, 12, // Skip to: 13861
/* 10560 */   MCD::OPC_Decode, 149, 14, 137, 1, // Opcode: XSRDPIZ
/* 10565 */   MCD::OPC_FilterValue, 2, 33, 0, // Skip to: 10602
/* 10569 */   MCD::OPC_ExtractField, 6, 1,  // Inst{6} ...
/* 10572 */   MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 10587
/* 10576 */   MCD::OPC_CheckField, 16, 5, 0, 207, 12, // Skip to: 13861
/* 10582 */   MCD::OPC_Decode, 155, 14, 137, 1, // Opcode: XSRSQRTEDP
/* 10587 */   MCD::OPC_FilterValue, 1, 198, 12, // Skip to: 13861
/* 10591 */   MCD::OPC_CheckField, 16, 5, 0, 192, 12, // Skip to: 13861
/* 10597 */   MCD::OPC_Decode, 150, 14, 137, 1, // Opcode: XSREDP
/* 10602 */   MCD::OPC_FilterValue, 3, 183, 12, // Skip to: 13861
/* 10606 */   MCD::OPC_CheckField, 16, 5, 0, 177, 12, // Skip to: 13861
/* 10612 */   MCD::OPC_CheckField, 6, 1, 0, 171, 12, // Skip to: 13861
/* 10618 */   MCD::OPC_Decode, 157, 14, 137, 1, // Opcode: XSSQRTDP
/* 10623 */   MCD::OPC_FilterValue, 3, 123, 0, // Skip to: 10750
/* 10627 */   MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 10630 */   MCD::OPC_FilterValue, 0, 45, 0, // Skip to: 10679
/* 10634 */   MCD::OPC_ExtractField, 6, 1,  // Inst{6} ...
/* 10637 */   MCD::OPC_FilterValue, 0, 17, 0, // Skip to: 10658
/* 10641 */   MCD::OPC_CheckField, 16, 5, 0, 142, 12, // Skip to: 13861
/* 10647 */   MCD::OPC_CheckField, 2, 1, 1, 136, 12, // Skip to: 13861
/* 10653 */   MCD::OPC_Decode, 148, 14, 137, 1, // Opcode: XSRDPIP
/* 10658 */   MCD::OPC_FilterValue, 1, 127, 12, // Skip to: 13861
/* 10662 */   MCD::OPC_CheckField, 16, 5, 0, 121, 12, // Skip to: 13861
/* 10668 */   MCD::OPC_CheckField, 2, 1, 1, 115, 12, // Skip to: 13861
/* 10674 */   MCD::OPC_Decode, 147, 14, 137, 1, // Opcode: XSRDPIM
/* 10679 */   MCD::OPC_FilterValue, 1, 106, 12, // Skip to: 13861
/* 10683 */   MCD::OPC_ExtractField, 6, 1,  // Inst{6} ...
/* 10686 */   MCD::OPC_FilterValue, 0, 39, 0, // Skip to: 10729
/* 10690 */   MCD::OPC_ExtractField, 2, 1,  // Inst{2} ...
/* 10693 */   MCD::OPC_FilterValue, 0, 17, 0, // Skip to: 10714
/* 10697 */   MCD::OPC_CheckField, 16, 7, 0, 86, 12, // Skip to: 13861
/* 10703 */   MCD::OPC_CheckField, 0, 1, 0, 80, 12, // Skip to: 13861
/* 10709 */   MCD::OPC_Decode, 166, 14, 138, 1, // Opcode: XSTSQRTDP
/* 10714 */   MCD::OPC_FilterValue, 1, 71, 12, // Skip to: 13861
/* 10718 */   MCD::OPC_CheckField, 16, 5, 0, 65, 12, // Skip to: 13861
/* 10724 */   MCD::OPC_Decode, 146, 14, 137, 1, // Opcode: XSRDPIC
/* 10729 */   MCD::OPC_FilterValue, 1, 56, 12, // Skip to: 13861
/* 10733 */   MCD::OPC_CheckField, 21, 2, 0, 50, 12, // Skip to: 13861
/* 10739 */   MCD::OPC_CheckField, 0, 1, 0, 44, 12, // Skip to: 13861
/* 10745 */   MCD::OPC_Decode, 165, 14, 131, 1, // Opcode: XSTDIVDP
/* 10750 */   MCD::OPC_FilterValue, 4, 135, 0, // Skip to: 10889
/* 10754 */   MCD::OPC_ExtractField, 2, 2,  // Inst{3-2} ...
/* 10757 */   MCD::OPC_FilterValue, 0, 33, 0, // Skip to: 10794
/* 10761 */   MCD::OPC_ExtractField, 6, 1,  // Inst{6} ...
/* 10764 */   MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 10779
/* 10768 */   MCD::OPC_CheckField, 16, 5, 0, 15, 12, // Skip to: 13861
/* 10774 */   MCD::OPC_Decode, 207, 14, 139, 1, // Opcode: XVCVSPUXWS
/* 10779 */   MCD::OPC_FilterValue, 1, 6, 12, // Skip to: 13861
/* 10783 */   MCD::OPC_CheckField, 16, 5, 0, 0, 12, // Skip to: 13861
/* 10789 */   MCD::OPC_Decode, 205, 14, 139, 1, // Opcode: XVCVSPSXWS
/* 10794 */   MCD::OPC_FilterValue, 1, 33, 0, // Skip to: 10831
/* 10798 */   MCD::OPC_ExtractField, 6, 1,  // Inst{6} ...
/* 10801 */   MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 10816
/* 10805 */   MCD::OPC_CheckField, 16, 5, 0, 234, 11, // Skip to: 13861
/* 10811 */   MCD::OPC_Decode, 253, 14, 139, 1, // Opcode: XVRSPI
/* 10816 */   MCD::OPC_FilterValue, 1, 225, 11, // Skip to: 13861
/* 10820 */   MCD::OPC_CheckField, 16, 5, 0, 219, 11, // Skip to: 13861
/* 10826 */   MCD::OPC_Decode, 129, 15, 139, 1, // Opcode: XVRSPIZ
/* 10831 */   MCD::OPC_FilterValue, 2, 33, 0, // Skip to: 10868
/* 10835 */   MCD::OPC_ExtractField, 6, 1,  // Inst{6} ...
/* 10838 */   MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 10853
/* 10842 */   MCD::OPC_CheckField, 16, 5, 0, 197, 11, // Skip to: 13861
/* 10848 */   MCD::OPC_Decode, 131, 15, 139, 1, // Opcode: XVRSQRTESP
/* 10853 */   MCD::OPC_FilterValue, 1, 188, 11, // Skip to: 13861
/* 10857 */   MCD::OPC_CheckField, 16, 5, 0, 182, 11, // Skip to: 13861
/* 10863 */   MCD::OPC_Decode, 252, 14, 139, 1, // Opcode: XVRESP
/* 10868 */   MCD::OPC_FilterValue, 3, 173, 11, // Skip to: 13861
/* 10872 */   MCD::OPC_CheckField, 16, 5, 0, 167, 11, // Skip to: 13861
/* 10878 */   MCD::OPC_CheckField, 6, 1, 0, 161, 11, // Skip to: 13861
/* 10884 */   MCD::OPC_Decode, 133, 15, 139, 1, // Opcode: XVSQRTSP
/* 10889 */   MCD::OPC_FilterValue, 5, 155, 0, // Skip to: 11048
/* 10893 */   MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 10896 */   MCD::OPC_FilterValue, 0, 77, 0, // Skip to: 10977
/* 10900 */   MCD::OPC_ExtractField, 2, 1,  // Inst{2} ...
/* 10903 */   MCD::OPC_FilterValue, 0, 33, 0, // Skip to: 10940
/* 10907 */   MCD::OPC_ExtractField, 6, 1,  // Inst{6} ...
/* 10910 */   MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 10925
/* 10914 */   MCD::OPC_CheckField, 16, 5, 0, 125, 11, // Skip to: 13861
/* 10920 */   MCD::OPC_Decode, 215, 14, 139, 1, // Opcode: XVCVUXWSP
/* 10925 */   MCD::OPC_FilterValue, 1, 116, 11, // Skip to: 13861
/* 10929 */   MCD::OPC_CheckField, 16, 5, 0, 110, 11, // Skip to: 13861
/* 10935 */   MCD::OPC_Decode, 211, 14, 139, 1, // Opcode: XVCVSXWSP
/* 10940 */   MCD::OPC_FilterValue, 1, 101, 11, // Skip to: 13861
/* 10944 */   MCD::OPC_ExtractField, 6, 1,  // Inst{6} ...
/* 10947 */   MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 10962
/* 10951 */   MCD::OPC_CheckField, 16, 5, 0, 88, 11, // Skip to: 13861
/* 10957 */   MCD::OPC_Decode, 128, 15, 139, 1, // Opcode: XVRSPIP
/* 10962 */   MCD::OPC_FilterValue, 1, 79, 11, // Skip to: 13861
/* 10966 */   MCD::OPC_CheckField, 16, 5, 0, 73, 11, // Skip to: 13861
/* 10972 */   MCD::OPC_Decode, 255, 14, 139, 1, // Opcode: XVRSPIM
/* 10977 */   MCD::OPC_FilterValue, 1, 64, 11, // Skip to: 13861
/* 10981 */   MCD::OPC_ExtractField, 6, 1,  // Inst{6} ...
/* 10984 */   MCD::OPC_FilterValue, 0, 39, 0, // Skip to: 11027
/* 10988 */   MCD::OPC_ExtractField, 2, 1,  // Inst{2} ...
/* 10991 */   MCD::OPC_FilterValue, 0, 17, 0, // Skip to: 11012
/* 10995 */   MCD::OPC_CheckField, 16, 7, 0, 44, 11, // Skip to: 13861
/* 11001 */   MCD::OPC_CheckField, 0, 1, 0, 38, 11, // Skip to: 13861
/* 11007 */   MCD::OPC_Decode, 139, 15, 140, 1, // Opcode: XVTSQRTSP
/* 11012 */   MCD::OPC_FilterValue, 1, 29, 11, // Skip to: 13861
/* 11016 */   MCD::OPC_CheckField, 16, 5, 0, 23, 11, // Skip to: 13861
/* 11022 */   MCD::OPC_Decode, 254, 14, 139, 1, // Opcode: XVRSPIC
/* 11027 */   MCD::OPC_FilterValue, 1, 14, 11, // Skip to: 13861
/* 11031 */   MCD::OPC_CheckField, 21, 2, 0, 8, 11, // Skip to: 13861
/* 11037 */   MCD::OPC_CheckField, 0, 1, 0, 2, 11, // Skip to: 13861
/* 11043 */   MCD::OPC_Decode, 137, 15, 141, 1, // Opcode: XVTDIVSP
/* 11048 */   MCD::OPC_FilterValue, 6, 135, 0, // Skip to: 11187
/* 11052 */   MCD::OPC_ExtractField, 2, 2,  // Inst{3-2} ...
/* 11055 */   MCD::OPC_FilterValue, 0, 33, 0, // Skip to: 11092
/* 11059 */   MCD::OPC_ExtractField, 6, 1,  // Inst{6} ...
/* 11062 */   MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 11077
/* 11066 */   MCD::OPC_CheckField, 16, 5, 0, 229, 10, // Skip to: 13861
/* 11072 */   MCD::OPC_Decode, 200, 14, 139, 1, // Opcode: XVCVDPUXWS
/* 11077 */   MCD::OPC_FilterValue, 1, 220, 10, // Skip to: 13861
/* 11081 */   MCD::OPC_CheckField, 16, 5, 0, 214, 10, // Skip to: 13861
/* 11087 */   MCD::OPC_Decode, 198, 14, 139, 1, // Opcode: XVCVDPSXWS
/* 11092 */   MCD::OPC_FilterValue, 1, 33, 0, // Skip to: 11129
/* 11096 */   MCD::OPC_ExtractField, 6, 1,  // Inst{6} ...
/* 11099 */   MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 11114
/* 11103 */   MCD::OPC_CheckField, 16, 5, 0, 192, 10, // Skip to: 13861
/* 11109 */   MCD::OPC_Decode, 246, 14, 139, 1, // Opcode: XVRDPI
/* 11114 */   MCD::OPC_FilterValue, 1, 183, 10, // Skip to: 13861
/* 11118 */   MCD::OPC_CheckField, 16, 5, 0, 177, 10, // Skip to: 13861
/* 11124 */   MCD::OPC_Decode, 250, 14, 139, 1, // Opcode: XVRDPIZ
/* 11129 */   MCD::OPC_FilterValue, 2, 33, 0, // Skip to: 11166
/* 11133 */   MCD::OPC_ExtractField, 6, 1,  // Inst{6} ...
/* 11136 */   MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 11151
/* 11140 */   MCD::OPC_CheckField, 16, 5, 0, 155, 10, // Skip to: 13861
/* 11146 */   MCD::OPC_Decode, 130, 15, 139, 1, // Opcode: XVRSQRTEDP
/* 11151 */   MCD::OPC_FilterValue, 1, 146, 10, // Skip to: 13861
/* 11155 */   MCD::OPC_CheckField, 16, 5, 0, 140, 10, // Skip to: 13861
/* 11161 */   MCD::OPC_Decode, 251, 14, 139, 1, // Opcode: XVREDP
/* 11166 */   MCD::OPC_FilterValue, 3, 131, 10, // Skip to: 13861
/* 11170 */   MCD::OPC_CheckField, 16, 5, 0, 125, 10, // Skip to: 13861
/* 11176 */   MCD::OPC_CheckField, 6, 1, 0, 119, 10, // Skip to: 13861
/* 11182 */   MCD::OPC_Decode, 132, 15, 139, 1, // Opcode: XVSQRTDP
/* 11187 */   MCD::OPC_FilterValue, 7, 155, 0, // Skip to: 11346
/* 11191 */   MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 11194 */   MCD::OPC_FilterValue, 0, 77, 0, // Skip to: 11275
/* 11198 */   MCD::OPC_ExtractField, 2, 1,  // Inst{2} ...
/* 11201 */   MCD::OPC_FilterValue, 0, 33, 0, // Skip to: 11238
/* 11205 */   MCD::OPC_ExtractField, 6, 1,  // Inst{6} ...
/* 11208 */   MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 11223
/* 11212 */   MCD::OPC_CheckField, 16, 5, 0, 83, 10, // Skip to: 13861
/* 11218 */   MCD::OPC_Decode, 214, 14, 139, 1, // Opcode: XVCVUXWDP
/* 11223 */   MCD::OPC_FilterValue, 1, 74, 10, // Skip to: 13861
/* 11227 */   MCD::OPC_CheckField, 16, 5, 0, 68, 10, // Skip to: 13861
/* 11233 */   MCD::OPC_Decode, 210, 14, 139, 1, // Opcode: XVCVSXWDP
/* 11238 */   MCD::OPC_FilterValue, 1, 59, 10, // Skip to: 13861
/* 11242 */   MCD::OPC_ExtractField, 6, 1,  // Inst{6} ...
/* 11245 */   MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 11260
/* 11249 */   MCD::OPC_CheckField, 16, 5, 0, 46, 10, // Skip to: 13861
/* 11255 */   MCD::OPC_Decode, 249, 14, 139, 1, // Opcode: XVRDPIP
/* 11260 */   MCD::OPC_FilterValue, 1, 37, 10, // Skip to: 13861
/* 11264 */   MCD::OPC_CheckField, 16, 5, 0, 31, 10, // Skip to: 13861
/* 11270 */   MCD::OPC_Decode, 248, 14, 139, 1, // Opcode: XVRDPIM
/* 11275 */   MCD::OPC_FilterValue, 1, 22, 10, // Skip to: 13861
/* 11279 */   MCD::OPC_ExtractField, 6, 1,  // Inst{6} ...
/* 11282 */   MCD::OPC_FilterValue, 0, 39, 0, // Skip to: 11325
/* 11286 */   MCD::OPC_ExtractField, 2, 1,  // Inst{2} ...
/* 11289 */   MCD::OPC_FilterValue, 0, 17, 0, // Skip to: 11310
/* 11293 */   MCD::OPC_CheckField, 16, 7, 0, 2, 10, // Skip to: 13861
/* 11299 */   MCD::OPC_CheckField, 0, 1, 0, 252, 9, // Skip to: 13861
/* 11305 */   MCD::OPC_Decode, 138, 15, 140, 1, // Opcode: XVTSQRTDP
/* 11310 */   MCD::OPC_FilterValue, 1, 243, 9, // Skip to: 13861
/* 11314 */   MCD::OPC_CheckField, 16, 5, 0, 237, 9, // Skip to: 13861
/* 11320 */   MCD::OPC_Decode, 247, 14, 139, 1, // Opcode: XVRDPIC
/* 11325 */   MCD::OPC_FilterValue, 1, 228, 9, // Skip to: 13861
/* 11329 */   MCD::OPC_CheckField, 21, 2, 0, 222, 9, // Skip to: 13861
/* 11335 */   MCD::OPC_CheckField, 0, 1, 0, 216, 9, // Skip to: 13861
/* 11341 */   MCD::OPC_Decode, 136, 15, 141, 1, // Opcode: XVTDIVDP
/* 11346 */   MCD::OPC_FilterValue, 8, 45, 0, // Skip to: 11395
/* 11350 */   MCD::OPC_ExtractField, 2, 2,  // Inst{3-2} ...
/* 11353 */   MCD::OPC_FilterValue, 1, 17, 0, // Skip to: 11374
/* 11357 */   MCD::OPC_CheckField, 16, 5, 0, 194, 9, // Skip to: 13861
/* 11363 */   MCD::OPC_CheckField, 6, 1, 0, 188, 9, // Skip to: 13861
/* 11369 */   MCD::OPC_Decode, 204, 13, 137, 1, // Opcode: XSCVDPSP
/* 11374 */   MCD::OPC_FilterValue, 3, 179, 9, // Skip to: 13861
/* 11378 */   MCD::OPC_CheckField, 16, 5, 0, 173, 9, // Skip to: 13861
/* 11384 */   MCD::OPC_CheckField, 6, 1, 0, 167, 9, // Skip to: 13861
/* 11390 */   MCD::OPC_Decode, 205, 13, 142, 1, // Opcode: XSCVDPSPN
/* 11395 */   MCD::OPC_FilterValue, 9, 61, 0, // Skip to: 11460
/* 11399 */   MCD::OPC_ExtractField, 2, 2,  // Inst{3-2} ...
/* 11402 */   MCD::OPC_FilterValue, 0, 33, 0, // Skip to: 11439
/* 11406 */   MCD::OPC_ExtractField, 6, 1,  // Inst{6} ...
/* 11409 */   MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 11424
/* 11413 */   MCD::OPC_CheckField, 16, 5, 0, 138, 9, // Skip to: 13861
/* 11419 */   MCD::OPC_Decode, 228, 13, 143, 1, // Opcode: XSCVUXDSP
/* 11424 */   MCD::OPC_FilterValue, 1, 129, 9, // Skip to: 13861
/* 11428 */   MCD::OPC_CheckField, 16, 5, 0, 123, 9, // Skip to: 13861
/* 11434 */   MCD::OPC_Decode, 225, 13, 143, 1, // Opcode: XSCVSXDSP
/* 11439 */   MCD::OPC_FilterValue, 2, 114, 9, // Skip to: 13861
/* 11443 */   MCD::OPC_CheckField, 6, 1, 0, 108, 9, // Skip to: 13861
/* 11449 */   MCD::OPC_CheckField, 0, 1, 0, 102, 9, // Skip to: 13861
/* 11455 */   MCD::OPC_Decode, 169, 14, 144, 1, // Opcode: XSTSTDCSP
/* 11460 */   MCD::OPC_FilterValue, 10, 160, 0, // Skip to: 11624
/* 11464 */   MCD::OPC_ExtractField, 16, 5,  // Inst{20-16} ...
/* 11467 */   MCD::OPC_FilterValue, 0, 84, 0, // Skip to: 11555
/* 11471 */   MCD::OPC_ExtractField, 2, 2,  // Inst{3-2} ...
/* 11474 */   MCD::OPC_FilterValue, 0, 21, 0, // Skip to: 11499
/* 11478 */   MCD::OPC_ExtractField, 6, 1,  // Inst{6} ...
/* 11481 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 11490
/* 11485 */   MCD::OPC_Decode, 210, 13, 137, 1, // Opcode: XSCVDPUXDS
/* 11490 */   MCD::OPC_FilterValue, 1, 63, 9, // Skip to: 13861
/* 11494 */   MCD::OPC_Decode, 206, 13, 137, 1, // Opcode: XSCVDPSXDS
/* 11499 */   MCD::OPC_FilterValue, 1, 21, 0, // Skip to: 11524
/* 11503 */   MCD::OPC_ExtractField, 6, 1,  // Inst{6} ...
/* 11506 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 11515
/* 11510 */   MCD::OPC_Decode, 222, 13, 137, 1, // Opcode: XSCVSPDP
/* 11515 */   MCD::OPC_FilterValue, 1, 38, 9, // Skip to: 13861
/* 11519 */   MCD::OPC_Decode, 184, 13, 137, 1, // Opcode: XSABSDP
/* 11524 */   MCD::OPC_FilterValue, 3, 29, 9, // Skip to: 13861
/* 11528 */   MCD::OPC_ExtractField, 6, 1,  // Inst{6} ...
/* 11531 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 11540
/* 11535 */   MCD::OPC_Decode, 223, 13, 145, 1, // Opcode: XSCVSPDPN
/* 11540 */   MCD::OPC_FilterValue, 1, 13, 9, // Skip to: 13861
/* 11544 */   MCD::OPC_CheckField, 0, 1, 0, 7, 9, // Skip to: 13861
/* 11550 */   MCD::OPC_Decode, 170, 14, 146, 1, // Opcode: XSXEXPDP
/* 11555 */   MCD::OPC_FilterValue, 1, 23, 0, // Skip to: 11582
/* 11559 */   MCD::OPC_CheckField, 6, 1, 1, 248, 8, // Skip to: 13861
/* 11565 */   MCD::OPC_CheckField, 2, 2, 3, 242, 8, // Skip to: 13861
/* 11571 */   MCD::OPC_CheckField, 0, 1, 0, 236, 8, // Skip to: 13861
/* 11577 */   MCD::OPC_Decode, 172, 14, 146, 1, // Opcode: XSXSIGDP
/* 11582 */   MCD::OPC_FilterValue, 16, 17, 0, // Skip to: 11603
/* 11586 */   MCD::OPC_CheckField, 6, 1, 1, 221, 8, // Skip to: 13861
/* 11592 */   MCD::OPC_CheckField, 2, 2, 3, 215, 8, // Skip to: 13861
/* 11598 */   MCD::OPC_Decode, 214, 13, 137, 1, // Opcode: XSCVHPDP
/* 11603 */   MCD::OPC_FilterValue, 17, 206, 8, // Skip to: 13861
/* 11607 */   MCD::OPC_CheckField, 6, 1, 1, 200, 8, // Skip to: 13861
/* 11613 */   MCD::OPC_CheckField, 2, 2, 3, 194, 8, // Skip to: 13861
/* 11619 */   MCD::OPC_Decode, 202, 13, 137, 1, // Opcode: XSCVDPHP
/* 11624 */   MCD::OPC_FilterValue, 11, 98, 0, // Skip to: 11726
/* 11628 */   MCD::OPC_ExtractField, 2, 2,  // Inst{3-2} ...
/* 11631 */   MCD::OPC_FilterValue, 0, 33, 0, // Skip to: 11668
/* 11635 */   MCD::OPC_ExtractField, 6, 1,  // Inst{6} ...
/* 11638 */   MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 11653
/* 11642 */   MCD::OPC_CheckField, 16, 5, 0, 165, 8, // Skip to: 13861
/* 11648 */   MCD::OPC_Decode, 227, 13, 137, 1, // Opcode: XSCVUXDDP
/* 11653 */   MCD::OPC_FilterValue, 1, 156, 8, // Skip to: 13861
/* 11657 */   MCD::OPC_CheckField, 16, 5, 0, 150, 8, // Skip to: 13861
/* 11663 */   MCD::OPC_Decode, 224, 13, 137, 1, // Opcode: XSCVSXDDP
/* 11668 */   MCD::OPC_FilterValue, 1, 33, 0, // Skip to: 11705
/* 11672 */   MCD::OPC_ExtractField, 6, 1,  // Inst{6} ...
/* 11675 */   MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 11690
/* 11679 */   MCD::OPC_CheckField, 16, 5, 0, 128, 8, // Skip to: 13861
/* 11685 */   MCD::OPC_Decode, 129, 14, 137, 1, // Opcode: XSNABSDP
/* 11690 */   MCD::OPC_FilterValue, 1, 119, 8, // Skip to: 13861
/* 11694 */   MCD::OPC_CheckField, 16, 5, 0, 113, 8, // Skip to: 13861
/* 11700 */   MCD::OPC_Decode, 131, 14, 137, 1, // Opcode: XSNEGDP
/* 11705 */   MCD::OPC_FilterValue, 2, 104, 8, // Skip to: 13861
/* 11709 */   MCD::OPC_CheckField, 6, 1, 0, 98, 8, // Skip to: 13861
/* 11715 */   MCD::OPC_CheckField, 0, 1, 0, 92, 8, // Skip to: 13861
/* 11721 */   MCD::OPC_Decode, 167, 14, 144, 1, // Opcode: XSTSTDCDP
/* 11726 */   MCD::OPC_FilterValue, 12, 77, 0, // Skip to: 11807
/* 11730 */   MCD::OPC_ExtractField, 2, 2,  // Inst{3-2} ...
/* 11733 */   MCD::OPC_FilterValue, 0, 33, 0, // Skip to: 11770
/* 11737 */   MCD::OPC_ExtractField, 6, 1,  // Inst{6} ...
/* 11740 */   MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 11755
/* 11744 */   MCD::OPC_CheckField, 16, 5, 0, 63, 8, // Skip to: 13861
/* 11750 */   MCD::OPC_Decode, 206, 14, 139, 1, // Opcode: XVCVSPUXDS
/* 11755 */   MCD::OPC_FilterValue, 1, 54, 8, // Skip to: 13861
/* 11759 */   MCD::OPC_CheckField, 16, 5, 0, 48, 8, // Skip to: 13861
/* 11765 */   MCD::OPC_Decode, 204, 14, 139, 1, // Opcode: XVCVSPSXDS
/* 11770 */   MCD::OPC_FilterValue, 1, 39, 8, // Skip to: 13861
/* 11774 */   MCD::OPC_ExtractField, 6, 1,  // Inst{6} ...
/* 11777 */   MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 11792
/* 11781 */   MCD::OPC_CheckField, 16, 5, 0, 26, 8, // Skip to: 13861
/* 11787 */   MCD::OPC_Decode, 196, 14, 139, 1, // Opcode: XVCVDPSP
/* 11792 */   MCD::OPC_FilterValue, 1, 17, 8, // Skip to: 13861
/* 11796 */   MCD::OPC_CheckField, 16, 5, 0, 11, 8, // Skip to: 13861
/* 11802 */   MCD::OPC_Decode, 175, 14, 139, 1, // Opcode: XVABSSP
/* 11807 */   MCD::OPC_FilterValue, 13, 93, 0, // Skip to: 11904
/* 11811 */   MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 11814 */   MCD::OPC_FilterValue, 0, 77, 0, // Skip to: 11895
/* 11818 */   MCD::OPC_ExtractField, 2, 1,  // Inst{2} ...
/* 11821 */   MCD::OPC_FilterValue, 0, 33, 0, // Skip to: 11858
/* 11825 */   MCD::OPC_ExtractField, 6, 1,  // Inst{6} ...
/* 11828 */   MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 11843
/* 11832 */   MCD::OPC_CheckField, 16, 5, 0, 231, 7, // Skip to: 13861
/* 11838 */   MCD::OPC_Decode, 213, 14, 139, 1, // Opcode: XVCVUXDSP
/* 11843 */   MCD::OPC_FilterValue, 1, 222, 7, // Skip to: 13861
/* 11847 */   MCD::OPC_CheckField, 16, 5, 0, 216, 7, // Skip to: 13861
/* 11853 */   MCD::OPC_Decode, 209, 14, 139, 1, // Opcode: XVCVSXDSP
/* 11858 */   MCD::OPC_FilterValue, 1, 207, 7, // Skip to: 13861
/* 11862 */   MCD::OPC_ExtractField, 6, 1,  // Inst{6} ...
/* 11865 */   MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 11880
/* 11869 */   MCD::OPC_CheckField, 16, 5, 0, 194, 7, // Skip to: 13861
/* 11875 */   MCD::OPC_Decode, 235, 14, 139, 1, // Opcode: XVNABSSP
/* 11880 */   MCD::OPC_FilterValue, 1, 185, 7, // Skip to: 13861
/* 11884 */   MCD::OPC_CheckField, 16, 5, 0, 179, 7, // Skip to: 13861
/* 11890 */   MCD::OPC_Decode, 237, 14, 139, 1, // Opcode: XVNEGSP
/* 11895 */   MCD::OPC_FilterValue, 1, 170, 7, // Skip to: 13861
/* 11899 */   MCD::OPC_Decode, 141, 15, 147, 1, // Opcode: XVTSTDCSP
/* 11904 */   MCD::OPC_FilterValue, 14, 196, 0, // Skip to: 12104
/* 11908 */   MCD::OPC_ExtractField, 2, 2,  // Inst{3-2} ...
/* 11911 */   MCD::OPC_FilterValue, 0, 33, 0, // Skip to: 11948
/* 11915 */   MCD::OPC_ExtractField, 6, 1,  // Inst{6} ...
/* 11918 */   MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 11933
/* 11922 */   MCD::OPC_CheckField, 16, 5, 0, 141, 7, // Skip to: 13861
/* 11928 */   MCD::OPC_Decode, 199, 14, 139, 1, // Opcode: XVCVDPUXDS
/* 11933 */   MCD::OPC_FilterValue, 1, 132, 7, // Skip to: 13861
/* 11937 */   MCD::OPC_CheckField, 16, 5, 0, 126, 7, // Skip to: 13861
/* 11943 */   MCD::OPC_Decode, 197, 14, 139, 1, // Opcode: XVCVDPSXDS
/* 11948 */   MCD::OPC_FilterValue, 1, 33, 0, // Skip to: 11985
/* 11952 */   MCD::OPC_ExtractField, 6, 1,  // Inst{6} ...
/* 11955 */   MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 11970
/* 11959 */   MCD::OPC_CheckField, 16, 5, 0, 104, 7, // Skip to: 13861
/* 11965 */   MCD::OPC_Decode, 202, 14, 139, 1, // Opcode: XVCVSPDP
/* 11970 */   MCD::OPC_FilterValue, 1, 95, 7, // Skip to: 13861
/* 11974 */   MCD::OPC_CheckField, 16, 5, 0, 89, 7, // Skip to: 13861
/* 11980 */   MCD::OPC_Decode, 174, 14, 139, 1, // Opcode: XVABSDP
/* 11985 */   MCD::OPC_FilterValue, 3, 80, 7, // Skip to: 13861
/* 11989 */   MCD::OPC_ExtractField, 6, 1,  // Inst{6} ...
/* 11992 */   MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 12007
/* 11996 */   MCD::OPC_CheckField, 1, 1, 0, 67, 7, // Skip to: 13861
/* 12002 */   MCD::OPC_Decode, 233, 13, 148, 1, // Opcode: XSIEXPDP
/* 12007 */   MCD::OPC_FilterValue, 1, 58, 7, // Skip to: 13861
/* 12011 */   MCD::OPC_ExtractField, 16, 5,  // Inst{20-16} ...
/* 12014 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 12023
/* 12018 */   MCD::OPC_Decode, 142, 15, 139, 1, // Opcode: XVXEXPDP
/* 12023 */   MCD::OPC_FilterValue, 1, 5, 0, // Skip to: 12032
/* 12027 */   MCD::OPC_Decode, 144, 15, 139, 1, // Opcode: XVXSIGDP
/* 12032 */   MCD::OPC_FilterValue, 7, 5, 0, // Skip to: 12041
/* 12036 */   MCD::OPC_Decode, 147, 15, 139, 1, // Opcode: XXBRH
/* 12041 */   MCD::OPC_FilterValue, 8, 5, 0, // Skip to: 12050
/* 12045 */   MCD::OPC_Decode, 143, 15, 139, 1, // Opcode: XVXEXPSP
/* 12050 */   MCD::OPC_FilterValue, 9, 5, 0, // Skip to: 12059
/* 12054 */   MCD::OPC_Decode, 145, 15, 139, 1, // Opcode: XVXSIGSP
/* 12059 */   MCD::OPC_FilterValue, 15, 5, 0, // Skip to: 12068
/* 12063 */   MCD::OPC_Decode, 149, 15, 139, 1, // Opcode: XXBRW
/* 12068 */   MCD::OPC_FilterValue, 23, 5, 0, // Skip to: 12077
/* 12072 */   MCD::OPC_Decode, 146, 15, 139, 1, // Opcode: XXBRD
/* 12077 */   MCD::OPC_FilterValue, 24, 5, 0, // Skip to: 12086
/* 12081 */   MCD::OPC_Decode, 201, 14, 139, 1, // Opcode: XVCVHPSP
/* 12086 */   MCD::OPC_FilterValue, 25, 5, 0, // Skip to: 12095
/* 12090 */   MCD::OPC_Decode, 203, 14, 139, 1, // Opcode: XVCVSPHP
/* 12095 */   MCD::OPC_FilterValue, 31, 226, 6, // Skip to: 13861
/* 12099 */   MCD::OPC_Decode, 148, 15, 139, 1, // Opcode: XXBRQ
/* 12104 */   MCD::OPC_FilterValue, 15, 217, 6, // Skip to: 13861
/* 12108 */   MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 12111 */   MCD::OPC_FilterValue, 0, 77, 0, // Skip to: 12192
/* 12115 */   MCD::OPC_ExtractField, 2, 1,  // Inst{2} ...
/* 12118 */   MCD::OPC_FilterValue, 0, 33, 0, // Skip to: 12155
/* 12122 */   MCD::OPC_ExtractField, 6, 1,  // Inst{6} ...
/* 12125 */   MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 12140
/* 12129 */   MCD::OPC_CheckField, 16, 5, 0, 190, 6, // Skip to: 13861
/* 12135 */   MCD::OPC_Decode, 212, 14, 139, 1, // Opcode: XVCVUXDDP
/* 12140 */   MCD::OPC_FilterValue, 1, 181, 6, // Skip to: 13861
/* 12144 */   MCD::OPC_CheckField, 16, 5, 0, 175, 6, // Skip to: 13861
/* 12150 */   MCD::OPC_Decode, 208, 14, 139, 1, // Opcode: XVCVSXDDP
/* 12155 */   MCD::OPC_FilterValue, 1, 166, 6, // Skip to: 13861
/* 12159 */   MCD::OPC_ExtractField, 6, 1,  // Inst{6} ...
/* 12162 */   MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 12177
/* 12166 */   MCD::OPC_CheckField, 16, 5, 0, 153, 6, // Skip to: 13861
/* 12172 */   MCD::OPC_Decode, 234, 14, 139, 1, // Opcode: XVNABSDP
/* 12177 */   MCD::OPC_FilterValue, 1, 144, 6, // Skip to: 13861
/* 12181 */   MCD::OPC_CheckField, 16, 5, 0, 138, 6, // Skip to: 13861
/* 12187 */   MCD::OPC_Decode, 236, 14, 139, 1, // Opcode: XVNEGDP
/* 12192 */   MCD::OPC_FilterValue, 1, 129, 6, // Skip to: 13861
/* 12196 */   MCD::OPC_Decode, 140, 15, 147, 1, // Opcode: XVTSTDCDP
/* 12201 */   MCD::OPC_FilterValue, 3, 120, 6, // Skip to: 13861
/* 12205 */   MCD::OPC_Decode, 170, 15, 149, 1, // Opcode: XXSEL
/* 12210 */   MCD::OPC_FilterValue, 61, 44, 0, // Skip to: 12258
/* 12214 */   MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 12217 */   MCD::OPC_FilterValue, 1, 21, 0, // Skip to: 12242
/* 12221 */   MCD::OPC_ExtractField, 2, 1,  // Inst{2} ...
/* 12224 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 12233
/* 12228 */   MCD::OPC_Decode, 225, 6, 150, 1, // Opcode: LXV
/* 12233 */   MCD::OPC_FilterValue, 1, 88, 6, // Skip to: 13861
/* 12237 */   MCD::OPC_Decode, 186, 10, 150, 1, // Opcode: STXV
/* 12242 */   MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 12250
/* 12246 */   MCD::OPC_Decode, 177, 10, 116, // Opcode: STXSD
/* 12250 */   MCD::OPC_FilterValue, 3, 71, 6, // Skip to: 13861
/* 12254 */   MCD::OPC_Decode, 184, 10, 116, // Opcode: STXSSP
/* 12258 */   MCD::OPC_FilterValue, 62, 19, 0, // Skip to: 12281
/* 12262 */   MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 12265 */   MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 12273
/* 12269 */   MCD::OPC_Decode, 129, 10, 117, // Opcode: STD
/* 12273 */   MCD::OPC_FilterValue, 1, 48, 6, // Skip to: 13861
/* 12277 */   MCD::OPC_Decode, 134, 10, 117, // Opcode: STDU
/* 12281 */   MCD::OPC_FilterValue, 63, 40, 6, // Skip to: 13861
/* 12285 */   MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 12288 */   MCD::OPC_FilterValue, 0, 68, 0, // Skip to: 12360
/* 12292 */   MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 12295 */   MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 12310
/* 12299 */   MCD::OPC_CheckField, 21, 2, 0, 20, 6, // Skip to: 13861
/* 12305 */   MCD::OPC_Decode, 136, 5, 151, 1, // Opcode: FCMPUS
/* 12310 */   MCD::OPC_FilterValue, 2, 16, 0, // Skip to: 12330
/* 12314 */   MCD::OPC_CheckField, 21, 2, 0, 5, 6, // Skip to: 13861
/* 12320 */   MCD::OPC_CheckField, 11, 7, 0, 255, 5, // Skip to: 13861
/* 12326 */   MCD::OPC_Decode, 237, 6, 31, // Opcode: MCRFS
/* 12330 */   MCD::OPC_FilterValue, 4, 11, 0, // Skip to: 12345
/* 12334 */   MCD::OPC_CheckField, 21, 2, 0, 241, 5, // Skip to: 13861
/* 12340 */   MCD::OPC_Decode, 229, 5, 152, 1, // Opcode: FTDIV
/* 12345 */   MCD::OPC_FilterValue, 5, 232, 5, // Skip to: 13861
/* 12349 */   MCD::OPC_CheckField, 16, 7, 0, 226, 5, // Skip to: 13861
/* 12355 */   MCD::OPC_Decode, 230, 5, 153, 1, // Opcode: FTSQRT
/* 12360 */   MCD::OPC_FilterValue, 8, 11, 1, // Skip to: 12631
/* 12364 */   MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 12367 */   MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 12375
/* 12371 */   MCD::OPC_Decode, 187, 13, 3, // Opcode: XSADDQP
/* 12375 */   MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 12383
/* 12379 */   MCD::OPC_Decode, 254, 13, 3, // Opcode: XSMULQP
/* 12383 */   MCD::OPC_FilterValue, 3, 4, 0, // Skip to: 12391
/* 12387 */   MCD::OPC_Decode, 201, 13, 3, // Opcode: XSCPSGNQP
/* 12391 */   MCD::OPC_FilterValue, 4, 11, 0, // Skip to: 12406
/* 12395 */   MCD::OPC_CheckField, 21, 2, 0, 180, 5, // Skip to: 13861
/* 12401 */   MCD::OPC_Decode, 197, 13, 154, 1, // Opcode: XSCMPOQP
/* 12406 */   MCD::OPC_FilterValue, 5, 11, 0, // Skip to: 12421
/* 12410 */   MCD::OPC_CheckField, 21, 2, 0, 165, 5, // Skip to: 13861
/* 12416 */   MCD::OPC_Decode, 192, 13, 154, 1, // Opcode: XSCMPEXPQP
/* 12421 */   MCD::OPC_FilterValue, 12, 4, 0, // Skip to: 12429
/* 12425 */   MCD::OPC_Decode, 239, 13, 3, // Opcode: XSMADDQP
/* 12429 */   MCD::OPC_FilterValue, 13, 4, 0, // Skip to: 12437
/* 12433 */   MCD::OPC_Decode, 251, 13, 3, // Opcode: XSMSUBQP
/* 12437 */   MCD::OPC_FilterValue, 14, 4, 0, // Skip to: 12445
/* 12441 */   MCD::OPC_Decode, 137, 14, 3, // Opcode: XSNMADDQP
/* 12445 */   MCD::OPC_FilterValue, 15, 4, 0, // Skip to: 12453
/* 12449 */   MCD::OPC_Decode, 143, 14, 3, // Opcode: XSNMSUBQP
/* 12453 */   MCD::OPC_FilterValue, 16, 4, 0, // Skip to: 12461
/* 12457 */   MCD::OPC_Decode, 162, 14, 3, // Opcode: XSSUBQP
/* 12461 */   MCD::OPC_FilterValue, 17, 4, 0, // Skip to: 12469
/* 12465 */   MCD::OPC_Decode, 230, 13, 3, // Opcode: XSDIVQP
/* 12469 */   MCD::OPC_FilterValue, 20, 11, 0, // Skip to: 12484
/* 12473 */   MCD::OPC_CheckField, 21, 2, 0, 102, 5, // Skip to: 13861
/* 12479 */   MCD::OPC_Decode, 199, 13, 154, 1, // Opcode: XSCMPUQP
/* 12484 */   MCD::OPC_FilterValue, 22, 5, 0, // Skip to: 12493
/* 12488 */   MCD::OPC_Decode, 168, 14, 155, 1, // Opcode: XSTSTDCQP
/* 12493 */   MCD::OPC_FilterValue, 25, 51, 0, // Skip to: 12548
/* 12497 */   MCD::OPC_ExtractField, 16, 5,  // Inst{20-16} ...
/* 12500 */   MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 12508
/* 12504 */   MCD::OPC_Decode, 185, 13, 6, // Opcode: XSABSQP
/* 12508 */   MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 12516
/* 12512 */   MCD::OPC_Decode, 171, 14, 6, // Opcode: XSXEXPQP
/* 12516 */   MCD::OPC_FilterValue, 8, 4, 0, // Skip to: 12524
/* 12520 */   MCD::OPC_Decode, 130, 14, 6, // Opcode: XSNABSQP
/* 12524 */   MCD::OPC_FilterValue, 16, 4, 0, // Skip to: 12532
/* 12528 */   MCD::OPC_Decode, 132, 14, 6, // Opcode: XSNEGQP
/* 12532 */   MCD::OPC_FilterValue, 18, 4, 0, // Skip to: 12540
/* 12536 */   MCD::OPC_Decode, 173, 14, 6, // Opcode: XSXSIGQP
/* 12540 */   MCD::OPC_FilterValue, 27, 37, 5, // Skip to: 13861
/* 12544 */   MCD::OPC_Decode, 158, 14, 6, // Opcode: XSSQRTQP
/* 12548 */   MCD::OPC_FilterValue, 26, 70, 0, // Skip to: 12622
/* 12552 */   MCD::OPC_ExtractField, 16, 5,  // Inst{20-16} ...
/* 12555 */   MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 12563
/* 12559 */   MCD::OPC_Decode, 220, 13, 6, // Opcode: XSCVQPUWZ
/* 12563 */   MCD::OPC_FilterValue, 2, 5, 0, // Skip to: 12572
/* 12567 */   MCD::OPC_Decode, 226, 13, 156, 1, // Opcode: XSCVUDQP
/* 12572 */   MCD::OPC_FilterValue, 9, 4, 0, // Skip to: 12580
/* 12576 */   MCD::OPC_Decode, 218, 13, 6, // Opcode: XSCVQPSWZ
/* 12580 */   MCD::OPC_FilterValue, 10, 5, 0, // Skip to: 12589
/* 12584 */   MCD::OPC_Decode, 221, 13, 156, 1, // Opcode: XSCVSDQP
/* 12589 */   MCD::OPC_FilterValue, 17, 4, 0, // Skip to: 12597
/* 12593 */   MCD::OPC_Decode, 219, 13, 6, // Opcode: XSCVQPUDZ
/* 12597 */   MCD::OPC_FilterValue, 20, 4, 0, // Skip to: 12605
/* 12601 */   MCD::OPC_Decode, 215, 13, 6, // Opcode: XSCVQPDP
/* 12605 */   MCD::OPC_FilterValue, 22, 5, 0, // Skip to: 12614
/* 12609 */   MCD::OPC_Decode, 203, 13, 156, 1, // Opcode: XSCVDPQP
/* 12614 */   MCD::OPC_FilterValue, 25, 219, 4, // Skip to: 13861
/* 12618 */   MCD::OPC_Decode, 217, 13, 6, // Opcode: XSCVQPSDZ
/* 12622 */   MCD::OPC_FilterValue, 27, 211, 4, // Skip to: 13861
/* 12626 */   MCD::OPC_Decode, 234, 13, 157, 1, // Opcode: XSIEXPQP
/* 12631 */   MCD::OPC_FilterValue, 9, 95, 0, // Skip to: 12730
/* 12635 */   MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 12638 */   MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 12646
/* 12642 */   MCD::OPC_Decode, 188, 13, 3, // Opcode: XSADDQPO
/* 12646 */   MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 12654
/* 12650 */   MCD::OPC_Decode, 255, 13, 3, // Opcode: XSMULQPO
/* 12654 */   MCD::OPC_FilterValue, 12, 4, 0, // Skip to: 12662
/* 12658 */   MCD::OPC_Decode, 240, 13, 3, // Opcode: XSMADDQPO
/* 12662 */   MCD::OPC_FilterValue, 13, 4, 0, // Skip to: 12670
/* 12666 */   MCD::OPC_Decode, 252, 13, 3, // Opcode: XSMSUBQPO
/* 12670 */   MCD::OPC_FilterValue, 14, 4, 0, // Skip to: 12678
/* 12674 */   MCD::OPC_Decode, 138, 14, 3, // Opcode: XSNMADDQPO
/* 12678 */   MCD::OPC_FilterValue, 15, 4, 0, // Skip to: 12686
/* 12682 */   MCD::OPC_Decode, 144, 14, 3, // Opcode: XSNMSUBQPO
/* 12686 */   MCD::OPC_FilterValue, 16, 4, 0, // Skip to: 12694
/* 12690 */   MCD::OPC_Decode, 163, 14, 3, // Opcode: XSSUBQPO
/* 12694 */   MCD::OPC_FilterValue, 17, 4, 0, // Skip to: 12702
/* 12698 */   MCD::OPC_Decode, 231, 13, 3, // Opcode: XSDIVQPO
/* 12702 */   MCD::OPC_FilterValue, 25, 10, 0, // Skip to: 12716
/* 12706 */   MCD::OPC_CheckField, 16, 5, 27, 125, 4, // Skip to: 13861
/* 12712 */   MCD::OPC_Decode, 159, 14, 6, // Opcode: XSSQRTQPO
/* 12716 */   MCD::OPC_FilterValue, 26, 117, 4, // Skip to: 13861
/* 12720 */   MCD::OPC_CheckField, 16, 5, 20, 111, 4, // Skip to: 13861
/* 12726 */   MCD::OPC_Decode, 216, 13, 6, // Opcode: XSCVQPDPO
/* 12730 */   MCD::OPC_FilterValue, 10, 21, 0, // Skip to: 12755
/* 12734 */   MCD::OPC_ExtractField, 6, 3,  // Inst{8-6} ...
/* 12737 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 12746
/* 12741 */   MCD::OPC_Decode, 152, 14, 158, 1, // Opcode: XSRQPI
/* 12746 */   MCD::OPC_FilterValue, 1, 87, 4, // Skip to: 13861
/* 12750 */   MCD::OPC_Decode, 154, 14, 158, 1, // Opcode: XSRQPXP
/* 12755 */   MCD::OPC_FilterValue, 11, 11, 0, // Skip to: 12770
/* 12759 */   MCD::OPC_CheckField, 6, 3, 0, 72, 4, // Skip to: 13861
/* 12765 */   MCD::OPC_Decode, 153, 14, 158, 1, // Opcode: XSRQPIX
/* 12770 */   MCD::OPC_FilterValue, 12, 46, 0, // Skip to: 12820
/* 12774 */   MCD::OPC_ExtractField, 6, 6,  // Inst{11-6} ...
/* 12777 */   MCD::OPC_FilterValue, 1, 10, 0, // Skip to: 12791
/* 12781 */   MCD::OPC_CheckField, 12, 9, 0, 50, 4, // Skip to: 13861
/* 12787 */   MCD::OPC_Decode, 152, 7, 105, // Opcode: MTFSB1
/* 12791 */   MCD::OPC_FilterValue, 2, 10, 0, // Skip to: 12805
/* 12795 */   MCD::OPC_CheckField, 12, 9, 0, 36, 4, // Skip to: 13861
/* 12801 */   MCD::OPC_Decode, 151, 7, 105, // Opcode: MTFSB0
/* 12805 */   MCD::OPC_FilterValue, 4, 28, 4, // Skip to: 13861
/* 12809 */   MCD::OPC_CheckField, 17, 6, 0, 22, 4, // Skip to: 13861
/* 12815 */   MCD::OPC_Decode, 154, 7, 159, 1, // Opcode: MTFSFI
/* 12820 */   MCD::OPC_FilterValue, 13, 17, 0, // Skip to: 12841
/* 12824 */   MCD::OPC_CheckField, 17, 6, 0, 7, 4, // Skip to: 13861
/* 12830 */   MCD::OPC_CheckField, 6, 6, 4, 1, 4, // Skip to: 13861
/* 12836 */   MCD::OPC_Decode, 155, 7, 159, 1, // Opcode: MTFSFIo
/* 12841 */   MCD::OPC_FilterValue, 14, 27, 0, // Skip to: 12872
/* 12845 */   MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 12848 */   MCD::OPC_FilterValue, 18, 11, 0, // Skip to: 12863
/* 12852 */   MCD::OPC_CheckField, 11, 10, 0, 235, 3, // Skip to: 13861
/* 12858 */   MCD::OPC_Decode, 245, 6, 160, 1, // Opcode: MFFS
/* 12863 */   MCD::OPC_FilterValue, 22, 226, 3, // Skip to: 13861
/* 12867 */   MCD::OPC_Decode, 153, 7, 161, 1, // Opcode: MTFSF
/* 12872 */   MCD::OPC_FilterValue, 15, 27, 0, // Skip to: 12903
/* 12876 */   MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 12879 */   MCD::OPC_FilterValue, 18, 11, 0, // Skip to: 12894
/* 12883 */   MCD::OPC_CheckField, 11, 10, 0, 204, 3, // Skip to: 13861
/* 12889 */   MCD::OPC_Decode, 246, 6, 160, 1, // Opcode: MFFSo
/* 12894 */   MCD::OPC_FilterValue, 22, 195, 3, // Skip to: 13861
/* 12898 */   MCD::OPC_Decode, 157, 7, 161, 1, // Opcode: MTFSFo
/* 12903 */   MCD::OPC_FilterValue, 16, 123, 0, // Skip to: 13030
/* 12907 */   MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 12910 */   MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 12918
/* 12914 */   MCD::OPC_Decode, 139, 5, 119, // Opcode: FCPSGNS
/* 12918 */   MCD::OPC_FilterValue, 1, 10, 0, // Skip to: 12932
/* 12922 */   MCD::OPC_CheckField, 16, 5, 0, 165, 3, // Skip to: 13861
/* 12928 */   MCD::OPC_Decode, 181, 5, 120, // Opcode: FNEGS
/* 12932 */   MCD::OPC_FilterValue, 2, 10, 0, // Skip to: 12946
/* 12936 */   MCD::OPC_CheckField, 16, 5, 0, 151, 3, // Skip to: 13861
/* 12942 */   MCD::OPC_Decode, 165, 5, 120, // Opcode: FMR
/* 12946 */   MCD::OPC_FilterValue, 4, 10, 0, // Skip to: 12960
/* 12950 */   MCD::OPC_CheckField, 16, 5, 0, 137, 3, // Skip to: 13861
/* 12956 */   MCD::OPC_Decode, 177, 5, 120, // Opcode: FNABSS
/* 12960 */   MCD::OPC_FilterValue, 8, 10, 0, // Skip to: 12974
/* 12964 */   MCD::OPC_CheckField, 16, 5, 0, 123, 3, // Skip to: 13861
/* 12970 */   MCD::OPC_Decode, 248, 4, 120, // Opcode: FABSS
/* 12974 */   MCD::OPC_FilterValue, 12, 10, 0, // Skip to: 12988
/* 12978 */   MCD::OPC_CheckField, 16, 5, 0, 109, 3, // Skip to: 13861
/* 12984 */   MCD::OPC_Decode, 201, 5, 120, // Opcode: FRINS
/* 12988 */   MCD::OPC_FilterValue, 13, 10, 0, // Skip to: 13002
/* 12992 */   MCD::OPC_CheckField, 16, 5, 0, 95, 3, // Skip to: 13861
/* 12998 */   MCD::OPC_Decode, 209, 5, 120, // Opcode: FRIZS
/* 13002 */   MCD::OPC_FilterValue, 14, 10, 0, // Skip to: 13016
/* 13006 */   MCD::OPC_CheckField, 16, 5, 0, 81, 3, // Skip to: 13861
/* 13012 */   MCD::OPC_Decode, 205, 5, 120, // Opcode: FRIPS
/* 13016 */   MCD::OPC_FilterValue, 15, 73, 3, // Skip to: 13861
/* 13020 */   MCD::OPC_CheckField, 16, 5, 0, 67, 3, // Skip to: 13861
/* 13026 */   MCD::OPC_Decode, 197, 5, 120, // Opcode: FRIMS
/* 13030 */   MCD::OPC_FilterValue, 17, 123, 0, // Skip to: 13157
/* 13034 */   MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 13037 */   MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 13045
/* 13041 */   MCD::OPC_Decode, 140, 5, 119, // Opcode: FCPSGNSo
/* 13045 */   MCD::OPC_FilterValue, 1, 10, 0, // Skip to: 13059
/* 13049 */   MCD::OPC_CheckField, 16, 5, 0, 38, 3, // Skip to: 13861
/* 13055 */   MCD::OPC_Decode, 182, 5, 120, // Opcode: FNEGSo
/* 13059 */   MCD::OPC_FilterValue, 2, 10, 0, // Skip to: 13073
/* 13063 */   MCD::OPC_CheckField, 16, 5, 0, 24, 3, // Skip to: 13861
/* 13069 */   MCD::OPC_Decode, 166, 5, 120, // Opcode: FMRo
/* 13073 */   MCD::OPC_FilterValue, 4, 10, 0, // Skip to: 13087
/* 13077 */   MCD::OPC_CheckField, 16, 5, 0, 10, 3, // Skip to: 13861
/* 13083 */   MCD::OPC_Decode, 178, 5, 120, // Opcode: FNABSSo
/* 13087 */   MCD::OPC_FilterValue, 8, 10, 0, // Skip to: 13101
/* 13091 */   MCD::OPC_CheckField, 16, 5, 0, 252, 2, // Skip to: 13861
/* 13097 */   MCD::OPC_Decode, 249, 4, 120, // Opcode: FABSSo
/* 13101 */   MCD::OPC_FilterValue, 12, 10, 0, // Skip to: 13115
/* 13105 */   MCD::OPC_CheckField, 16, 5, 0, 238, 2, // Skip to: 13861
/* 13111 */   MCD::OPC_Decode, 202, 5, 120, // Opcode: FRINSo
/* 13115 */   MCD::OPC_FilterValue, 13, 10, 0, // Skip to: 13129
/* 13119 */   MCD::OPC_CheckField, 16, 5, 0, 224, 2, // Skip to: 13861
/* 13125 */   MCD::OPC_Decode, 210, 5, 120, // Opcode: FRIZSo
/* 13129 */   MCD::OPC_FilterValue, 14, 10, 0, // Skip to: 13143
/* 13133 */   MCD::OPC_CheckField, 16, 5, 0, 210, 2, // Skip to: 13861
/* 13139 */   MCD::OPC_Decode, 206, 5, 120, // Opcode: FRIPSo
/* 13143 */   MCD::OPC_FilterValue, 15, 202, 2, // Skip to: 13861
/* 13147 */   MCD::OPC_CheckField, 16, 5, 0, 196, 2, // Skip to: 13861
/* 13153 */   MCD::OPC_Decode, 198, 5, 120, // Opcode: FRIMSo
/* 13157 */   MCD::OPC_FilterValue, 24, 16, 0, // Skip to: 13177
/* 13161 */   MCD::OPC_CheckField, 16, 5, 0, 182, 2, // Skip to: 13861
/* 13167 */   MCD::OPC_CheckField, 6, 5, 0, 176, 2, // Skip to: 13861
/* 13173 */   MCD::OPC_Decode, 211, 5, 118, // Opcode: FRSP
/* 13177 */   MCD::OPC_FilterValue, 25, 16, 0, // Skip to: 13197
/* 13181 */   MCD::OPC_CheckField, 16, 5, 0, 162, 2, // Skip to: 13861
/* 13187 */   MCD::OPC_CheckField, 6, 5, 0, 156, 2, // Skip to: 13861
/* 13193 */   MCD::OPC_Decode, 212, 5, 118, // Opcode: FRSPo
/* 13197 */   MCD::OPC_FilterValue, 28, 93, 0, // Skip to: 13294
/* 13201 */   MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 13204 */   MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 13219
/* 13208 */   MCD::OPC_CheckField, 16, 5, 0, 135, 2, // Skip to: 13861
/* 13214 */   MCD::OPC_Decode, 149, 5, 162, 1, // Opcode: FCTIW
/* 13219 */   MCD::OPC_FilterValue, 4, 11, 0, // Skip to: 13234
/* 13223 */   MCD::OPC_CheckField, 16, 5, 0, 120, 2, // Skip to: 13861
/* 13229 */   MCD::OPC_Decode, 150, 5, 162, 1, // Opcode: FCTIWU
/* 13234 */   MCD::OPC_FilterValue, 25, 11, 0, // Skip to: 13249
/* 13238 */   MCD::OPC_CheckField, 16, 5, 0, 105, 2, // Skip to: 13861
/* 13244 */   MCD::OPC_Decode, 141, 5, 162, 1, // Opcode: FCTID
/* 13249 */   MCD::OPC_FilterValue, 26, 11, 0, // Skip to: 13264
/* 13253 */   MCD::OPC_CheckField, 16, 5, 0, 90, 2, // Skip to: 13861
/* 13259 */   MCD::OPC_Decode, 255, 4, 162, 1, // Opcode: FCFID
/* 13264 */   MCD::OPC_FilterValue, 29, 11, 0, // Skip to: 13279
/* 13268 */   MCD::OPC_CheckField, 16, 5, 0, 75, 2, // Skip to: 13861
/* 13274 */   MCD::OPC_Decode, 142, 5, 162, 1, // Opcode: FCTIDU
/* 13279 */   MCD::OPC_FilterValue, 30, 66, 2, // Skip to: 13861
/* 13283 */   MCD::OPC_CheckField, 16, 5, 0, 60, 2, // Skip to: 13861
/* 13289 */   MCD::OPC_Decode, 130, 5, 162, 1, // Opcode: FCFIDU
/* 13294 */   MCD::OPC_FilterValue, 29, 93, 0, // Skip to: 13391
/* 13298 */   MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 13301 */   MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 13316
/* 13305 */   MCD::OPC_CheckField, 16, 5, 0, 38, 2, // Skip to: 13861
/* 13311 */   MCD::OPC_Decode, 156, 5, 162, 1, // Opcode: FCTIWo
/* 13316 */   MCD::OPC_FilterValue, 4, 11, 0, // Skip to: 13331
/* 13320 */   MCD::OPC_CheckField, 16, 5, 0, 23, 2, // Skip to: 13861
/* 13326 */   MCD::OPC_Decode, 153, 5, 162, 1, // Opcode: FCTIWUo
/* 13331 */   MCD::OPC_FilterValue, 25, 11, 0, // Skip to: 13346
/* 13335 */   MCD::OPC_CheckField, 16, 5, 0, 8, 2, // Skip to: 13861
/* 13341 */   MCD::OPC_Decode, 148, 5, 162, 1, // Opcode: FCTIDo
/* 13346 */   MCD::OPC_FilterValue, 26, 11, 0, // Skip to: 13361
/* 13350 */   MCD::OPC_CheckField, 16, 5, 0, 249, 1, // Skip to: 13861
/* 13356 */   MCD::OPC_Decode, 134, 5, 162, 1, // Opcode: FCFIDo
/* 13361 */   MCD::OPC_FilterValue, 29, 11, 0, // Skip to: 13376
/* 13365 */   MCD::OPC_CheckField, 16, 5, 0, 234, 1, // Skip to: 13861
/* 13371 */   MCD::OPC_Decode, 145, 5, 162, 1, // Opcode: FCTIDUo
/* 13376 */   MCD::OPC_FilterValue, 30, 225, 1, // Skip to: 13861
/* 13380 */   MCD::OPC_CheckField, 16, 5, 0, 219, 1, // Skip to: 13861
/* 13386 */   MCD::OPC_Decode, 133, 5, 162, 1, // Opcode: FCFIDUo
/* 13391 */   MCD::OPC_FilterValue, 30, 63, 0, // Skip to: 13458
/* 13395 */   MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 13398 */   MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 13413
/* 13402 */   MCD::OPC_CheckField, 16, 5, 0, 197, 1, // Skip to: 13861
/* 13408 */   MCD::OPC_Decode, 154, 5, 162, 1, // Opcode: FCTIWZ
/* 13413 */   MCD::OPC_FilterValue, 4, 11, 0, // Skip to: 13428
/* 13417 */   MCD::OPC_CheckField, 16, 5, 0, 182, 1, // Skip to: 13861
/* 13423 */   MCD::OPC_Decode, 151, 5, 162, 1, // Opcode: FCTIWUZ
/* 13428 */   MCD::OPC_FilterValue, 25, 11, 0, // Skip to: 13443
/* 13432 */   MCD::OPC_CheckField, 16, 5, 0, 167, 1, // Skip to: 13861
/* 13438 */   MCD::OPC_Decode, 146, 5, 162, 1, // Opcode: FCTIDZ
/* 13443 */   MCD::OPC_FilterValue, 29, 158, 1, // Skip to: 13861
/* 13447 */   MCD::OPC_CheckField, 16, 5, 0, 152, 1, // Skip to: 13861
/* 13453 */   MCD::OPC_Decode, 143, 5, 162, 1, // Opcode: FCTIDUZ
/* 13458 */   MCD::OPC_FilterValue, 31, 63, 0, // Skip to: 13525
/* 13462 */   MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 13465 */   MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 13480
/* 13469 */   MCD::OPC_CheckField, 16, 5, 0, 130, 1, // Skip to: 13861
/* 13475 */   MCD::OPC_Decode, 155, 5, 162, 1, // Opcode: FCTIWZo
/* 13480 */   MCD::OPC_FilterValue, 4, 11, 0, // Skip to: 13495
/* 13484 */   MCD::OPC_CheckField, 16, 5, 0, 115, 1, // Skip to: 13861
/* 13490 */   MCD::OPC_Decode, 152, 5, 162, 1, // Opcode: FCTIWUZo
/* 13495 */   MCD::OPC_FilterValue, 25, 11, 0, // Skip to: 13510
/* 13499 */   MCD::OPC_CheckField, 16, 5, 0, 100, 1, // Skip to: 13861
/* 13505 */   MCD::OPC_Decode, 147, 5, 162, 1, // Opcode: FCTIDZo
/* 13510 */   MCD::OPC_FilterValue, 29, 91, 1, // Skip to: 13861
/* 13514 */   MCD::OPC_CheckField, 16, 5, 0, 85, 1, // Skip to: 13861
/* 13520 */   MCD::OPC_Decode, 144, 5, 162, 1, // Opcode: FCTIDUZo
/* 13525 */   MCD::OPC_FilterValue, 36, 11, 0, // Skip to: 13540
/* 13529 */   MCD::OPC_CheckField, 6, 5, 0, 70, 1, // Skip to: 13861
/* 13535 */   MCD::OPC_Decode, 157, 5, 163, 1, // Opcode: FDIV
/* 13540 */   MCD::OPC_FilterValue, 37, 11, 0, // Skip to: 13555
/* 13544 */   MCD::OPC_CheckField, 6, 5, 0, 55, 1, // Skip to: 13861
/* 13550 */   MCD::OPC_Decode, 160, 5, 163, 1, // Opcode: FDIVo
/* 13555 */   MCD::OPC_FilterValue, 40, 11, 0, // Skip to: 13570
/* 13559 */   MCD::OPC_CheckField, 6, 5, 0, 40, 1, // Skip to: 13861
/* 13565 */   MCD::OPC_Decode, 225, 5, 163, 1, // Opcode: FSUB
/* 13570 */   MCD::OPC_FilterValue, 41, 11, 0, // Skip to: 13585
/* 13574 */   MCD::OPC_CheckField, 6, 5, 0, 25, 1, // Skip to: 13861
/* 13580 */   MCD::OPC_Decode, 228, 5, 163, 1, // Opcode: FSUBo
/* 13585 */   MCD::OPC_FilterValue, 42, 11, 0, // Skip to: 13600
/* 13589 */   MCD::OPC_CheckField, 6, 5, 0, 10, 1, // Skip to: 13861
/* 13595 */   MCD::OPC_Decode, 250, 4, 163, 1, // Opcode: FADD
/* 13600 */   MCD::OPC_FilterValue, 43, 11, 0, // Skip to: 13615
/* 13604 */   MCD::OPC_CheckField, 6, 5, 0, 251, 0, // Skip to: 13861
/* 13610 */   MCD::OPC_Decode, 253, 4, 163, 1, // Opcode: FADDo
/* 13615 */   MCD::OPC_FilterValue, 44, 17, 0, // Skip to: 13636
/* 13619 */   MCD::OPC_CheckField, 16, 5, 0, 236, 0, // Skip to: 13861
/* 13625 */   MCD::OPC_CheckField, 6, 5, 0, 230, 0, // Skip to: 13861
/* 13631 */   MCD::OPC_Decode, 221, 5, 162, 1, // Opcode: FSQRT
/* 13636 */   MCD::OPC_FilterValue, 45, 17, 0, // Skip to: 13657
/* 13640 */   MCD::OPC_CheckField, 16, 5, 0, 215, 0, // Skip to: 13861
/* 13646 */   MCD::OPC_CheckField, 6, 5, 0, 209, 0, // Skip to: 13861
/* 13652 */   MCD::OPC_Decode, 224, 5, 162, 1, // Opcode: FSQRTo
/* 13657 */   MCD::OPC_FilterValue, 46, 5, 0, // Skip to: 13666
/* 13661 */   MCD::OPC_Decode, 219, 5, 164, 1, // Opcode: FSELS
/* 13666 */   MCD::OPC_FilterValue, 47, 5, 0, // Skip to: 13675
/* 13670 */   MCD::OPC_Decode, 220, 5, 164, 1, // Opcode: FSELSo
/* 13675 */   MCD::OPC_FilterValue, 48, 17, 0, // Skip to: 13696
/* 13679 */   MCD::OPC_CheckField, 16, 5, 0, 176, 0, // Skip to: 13861
/* 13685 */   MCD::OPC_CheckField, 6, 5, 0, 170, 0, // Skip to: 13861
/* 13691 */   MCD::OPC_Decode, 191, 5, 162, 1, // Opcode: FRE
/* 13696 */   MCD::OPC_FilterValue, 49, 17, 0, // Skip to: 13717
/* 13700 */   MCD::OPC_CheckField, 16, 5, 0, 155, 0, // Skip to: 13861
/* 13706 */   MCD::OPC_CheckField, 6, 5, 0, 149, 0, // Skip to: 13861
/* 13712 */   MCD::OPC_Decode, 194, 5, 162, 1, // Opcode: FREo
/* 13717 */   MCD::OPC_FilterValue, 50, 11, 0, // Skip to: 13732
/* 13721 */   MCD::OPC_CheckField, 11, 5, 0, 134, 0, // Skip to: 13861
/* 13727 */   MCD::OPC_Decode, 171, 5, 165, 1, // Opcode: FMUL
/* 13732 */   MCD::OPC_FilterValue, 51, 11, 0, // Skip to: 13747
/* 13736 */   MCD::OPC_CheckField, 11, 5, 0, 119, 0, // Skip to: 13861
/* 13742 */   MCD::OPC_Decode, 174, 5, 165, 1, // Opcode: FMULo
/* 13747 */   MCD::OPC_FilterValue, 52, 17, 0, // Skip to: 13768
/* 13751 */   MCD::OPC_CheckField, 16, 5, 0, 104, 0, // Skip to: 13861
/* 13757 */   MCD::OPC_CheckField, 6, 5, 0, 98, 0, // Skip to: 13861
/* 13763 */   MCD::OPC_Decode, 213, 5, 162, 1, // Opcode: FRSQRTE
/* 13768 */   MCD::OPC_FilterValue, 53, 17, 0, // Skip to: 13789
/* 13772 */   MCD::OPC_CheckField, 16, 5, 0, 83, 0, // Skip to: 13861
/* 13778 */   MCD::OPC_CheckField, 6, 5, 0, 77, 0, // Skip to: 13861
/* 13784 */   MCD::OPC_Decode, 216, 5, 162, 1, // Opcode: FRSQRTEo
/* 13789 */   MCD::OPC_FilterValue, 56, 5, 0, // Skip to: 13798
/* 13793 */   MCD::OPC_Decode, 167, 5, 166, 1, // Opcode: FMSUB
/* 13798 */   MCD::OPC_FilterValue, 57, 5, 0, // Skip to: 13807
/* 13802 */   MCD::OPC_Decode, 170, 5, 166, 1, // Opcode: FMSUBo
/* 13807 */   MCD::OPC_FilterValue, 58, 5, 0, // Skip to: 13816
/* 13811 */   MCD::OPC_Decode, 161, 5, 166, 1, // Opcode: FMADD
/* 13816 */   MCD::OPC_FilterValue, 59, 5, 0, // Skip to: 13825
/* 13820 */   MCD::OPC_Decode, 164, 5, 166, 1, // Opcode: FMADDo
/* 13825 */   MCD::OPC_FilterValue, 60, 5, 0, // Skip to: 13834
/* 13829 */   MCD::OPC_Decode, 187, 5, 166, 1, // Opcode: FNMSUB
/* 13834 */   MCD::OPC_FilterValue, 61, 5, 0, // Skip to: 13843
/* 13838 */   MCD::OPC_Decode, 190, 5, 166, 1, // Opcode: FNMSUBo
/* 13843 */   MCD::OPC_FilterValue, 62, 5, 0, // Skip to: 13852
/* 13847 */   MCD::OPC_Decode, 183, 5, 166, 1, // Opcode: FNMADD
/* 13852 */   MCD::OPC_FilterValue, 63, 5, 0, // Skip to: 13861
/* 13856 */   MCD::OPC_Decode, 186, 5, 166, 1, // Opcode: FNMADDo
/* 13861 */   MCD::OPC_Fail,
  0
};

static const uint8_t DecoderTableQPX32[] = {
/* 0 */       MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 3 */       MCD::OPC_FilterValue, 0, 63, 0, // Skip to: 70
/* 7 */       MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 10 */      MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 25
/* 14 */      MCD::OPC_CheckField, 26, 6, 4, 178, 7, // Skip to: 1990
/* 20 */      MCD::OPC_Decode, 243, 7, 167, 1, // Opcode: QVFCMPEQb
/* 25 */      MCD::OPC_FilterValue, 1, 11, 0, // Skip to: 40
/* 29 */      MCD::OPC_CheckField, 26, 6, 4, 163, 7, // Skip to: 1990
/* 35 */      MCD::OPC_Decode, 246, 7, 167, 1, // Opcode: QVFCMPGTb
/* 40 */      MCD::OPC_FilterValue, 2, 11, 0, // Skip to: 55
/* 44 */      MCD::OPC_CheckField, 26, 6, 4, 148, 7, // Skip to: 1990
/* 50 */      MCD::OPC_Decode, 185, 8, 167, 1, // Opcode: QVFTSTNANb
/* 55 */      MCD::OPC_FilterValue, 3, 139, 7, // Skip to: 1990
/* 59 */      MCD::OPC_CheckField, 26, 6, 4, 133, 7, // Skip to: 1990
/* 65 */      MCD::OPC_Decode, 249, 7, 167, 1, // Opcode: QVFCMPLTb
/* 70 */      MCD::OPC_FilterValue, 2, 21, 0, // Skip to: 95
/* 74 */      MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 77 */      MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 86
/* 81 */      MCD::OPC_Decode, 194, 8, 168, 1, // Opcode: QVFXXMADDS
/* 86 */      MCD::OPC_FilterValue, 4, 108, 7, // Skip to: 1990
/* 90 */      MCD::OPC_Decode, 193, 8, 168, 1, // Opcode: QVFXXMADD
/* 95 */      MCD::OPC_FilterValue, 6, 21, 0, // Skip to: 120
/* 99 */      MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 102 */     MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 111
/* 106 */     MCD::OPC_Decode, 192, 8, 168, 1, // Opcode: QVFXXCPNMADDS
/* 111 */     MCD::OPC_FilterValue, 4, 83, 7, // Skip to: 1990
/* 115 */     MCD::OPC_Decode, 191, 8, 168, 1, // Opcode: QVFXXCPNMADD
/* 120 */     MCD::OPC_FilterValue, 8, 17, 0, // Skip to: 141
/* 124 */     MCD::OPC_CheckField, 26, 6, 4, 68, 7, // Skip to: 1990
/* 130 */     MCD::OPC_CheckField, 6, 1, 0, 62, 7, // Skip to: 1990
/* 136 */     MCD::OPC_Decode, 135, 8, 169, 1, // Opcode: QVFLOGICALb
/* 141 */     MCD::OPC_FilterValue, 10, 191, 0, // Skip to: 336
/* 145 */     MCD::OPC_ExtractField, 6, 3,  // Inst{8-6} ...
/* 148 */     MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 163
/* 152 */     MCD::OPC_CheckField, 26, 6, 4, 40, 7, // Skip to: 1990
/* 158 */     MCD::OPC_Decode, 226, 7, 170, 1, // Opcode: QVALIGNI
/* 163 */     MCD::OPC_FilterValue, 1, 17, 0, // Skip to: 184
/* 167 */     MCD::OPC_CheckField, 26, 6, 4, 25, 7, // Skip to: 1990
/* 173 */     MCD::OPC_CheckField, 11, 5, 0, 19, 7, // Skip to: 1990
/* 179 */     MCD::OPC_Decode, 229, 7, 171, 1, // Opcode: QVESPLATI
/* 184 */     MCD::OPC_FilterValue, 4, 37, 0, // Skip to: 225
/* 188 */     MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 191 */     MCD::OPC_FilterValue, 4, 5, 0, // Skip to: 200
/* 195 */     MCD::OPC_Decode, 197, 8, 172, 1, // Opcode: QVGPCI
/* 200 */     MCD::OPC_FilterValue, 31, 250, 6, // Skip to: 1990
/* 204 */     MCD::OPC_ExtractField, 9, 2,  // Inst{10-9} ...
/* 207 */     MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 216
/* 211 */     MCD::OPC_Decode, 241, 8, 173, 1, // Opcode: QVSTFCSXI
/* 216 */     MCD::OPC_FilterValue, 2, 234, 6, // Skip to: 1990
/* 220 */     MCD::OPC_Decode, 134, 9, 173, 1, // Opcode: QVSTFSXI
/* 225 */     MCD::OPC_FilterValue, 5, 33, 0, // Skip to: 262
/* 229 */     MCD::OPC_ExtractField, 9, 2,  // Inst{10-9} ...
/* 232 */     MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 247
/* 236 */     MCD::OPC_CheckField, 26, 6, 31, 212, 6, // Skip to: 1990
/* 242 */     MCD::OPC_Decode, 237, 8, 173, 1, // Opcode: QVSTFCSUXI
/* 247 */     MCD::OPC_FilterValue, 2, 203, 6, // Skip to: 1990
/* 251 */     MCD::OPC_CheckField, 26, 6, 31, 197, 6, // Skip to: 1990
/* 257 */     MCD::OPC_Decode, 129, 9, 173, 1, // Opcode: QVSTFSUXI
/* 262 */     MCD::OPC_FilterValue, 6, 33, 0, // Skip to: 299
/* 266 */     MCD::OPC_ExtractField, 9, 2,  // Inst{10-9} ...
/* 269 */     MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 284
/* 273 */     MCD::OPC_CheckField, 26, 6, 31, 175, 6, // Skip to: 1990
/* 279 */     MCD::OPC_Decode, 233, 8, 173, 1, // Opcode: QVSTFCDXI
/* 284 */     MCD::OPC_FilterValue, 2, 166, 6, // Skip to: 1990
/* 288 */     MCD::OPC_CheckField, 26, 6, 31, 160, 6, // Skip to: 1990
/* 294 */     MCD::OPC_Decode, 250, 8, 173, 1, // Opcode: QVSTFDXI
/* 299 */     MCD::OPC_FilterValue, 7, 151, 6, // Skip to: 1990
/* 303 */     MCD::OPC_ExtractField, 9, 2,  // Inst{10-9} ...
/* 306 */     MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 321
/* 310 */     MCD::OPC_CheckField, 26, 6, 31, 138, 6, // Skip to: 1990
/* 316 */     MCD::OPC_Decode, 229, 8, 173, 1, // Opcode: QVSTFCDUXI
/* 321 */     MCD::OPC_FilterValue, 2, 129, 6, // Skip to: 1990
/* 325 */     MCD::OPC_CheckField, 26, 6, 31, 123, 6, // Skip to: 1990
/* 331 */     MCD::OPC_Decode, 246, 8, 173, 1, // Opcode: QVSTFDUXI
/* 336 */     MCD::OPC_FilterValue, 11, 123, 0, // Skip to: 463
/* 340 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 343 */     MCD::OPC_FilterValue, 4, 11, 0, // Skip to: 358
/* 347 */     MCD::OPC_CheckField, 26, 6, 31, 101, 6, // Skip to: 1990
/* 353 */     MCD::OPC_Decode, 242, 8, 173, 1, // Opcode: QVSTFCSXIA
/* 358 */     MCD::OPC_FilterValue, 5, 11, 0, // Skip to: 373
/* 362 */     MCD::OPC_CheckField, 26, 6, 31, 86, 6, // Skip to: 1990
/* 368 */     MCD::OPC_Decode, 238, 8, 173, 1, // Opcode: QVSTFCSUXIA
/* 373 */     MCD::OPC_FilterValue, 6, 11, 0, // Skip to: 388
/* 377 */     MCD::OPC_CheckField, 26, 6, 31, 71, 6, // Skip to: 1990
/* 383 */     MCD::OPC_Decode, 234, 8, 173, 1, // Opcode: QVSTFCDXIA
/* 388 */     MCD::OPC_FilterValue, 7, 11, 0, // Skip to: 403
/* 392 */     MCD::OPC_CheckField, 26, 6, 31, 56, 6, // Skip to: 1990
/* 398 */     MCD::OPC_Decode, 230, 8, 173, 1, // Opcode: QVSTFCDUXIA
/* 403 */     MCD::OPC_FilterValue, 20, 11, 0, // Skip to: 418
/* 407 */     MCD::OPC_CheckField, 26, 6, 31, 41, 6, // Skip to: 1990
/* 413 */     MCD::OPC_Decode, 135, 9, 173, 1, // Opcode: QVSTFSXIA
/* 418 */     MCD::OPC_FilterValue, 21, 11, 0, // Skip to: 433
/* 422 */     MCD::OPC_CheckField, 26, 6, 31, 26, 6, // Skip to: 1990
/* 428 */     MCD::OPC_Decode, 130, 9, 173, 1, // Opcode: QVSTFSUXIA
/* 433 */     MCD::OPC_FilterValue, 22, 11, 0, // Skip to: 448
/* 437 */     MCD::OPC_CheckField, 26, 6, 31, 11, 6, // Skip to: 1990
/* 443 */     MCD::OPC_Decode, 251, 8, 173, 1, // Opcode: QVSTFDXIA
/* 448 */     MCD::OPC_FilterValue, 23, 2, 6, // Skip to: 1990
/* 452 */     MCD::OPC_CheckField, 26, 6, 31, 252, 5, // Skip to: 1990
/* 458 */     MCD::OPC_Decode, 247, 8, 173, 1, // Opcode: QVSTFDUXIA
/* 463 */     MCD::OPC_FilterValue, 12, 55, 0, // Skip to: 522
/* 467 */     MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 470 */     MCD::OPC_FilterValue, 4, 5, 0, // Skip to: 479
/* 474 */     MCD::OPC_Decode, 159, 8, 168, 1, // Opcode: QVFPERM
/* 479 */     MCD::OPC_FilterValue, 31, 227, 5, // Skip to: 1990
/* 483 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 486 */     MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 495
/* 490 */     MCD::OPC_Decode, 226, 8, 173, 1, // Opcode: QVLPCRSX
/* 495 */     MCD::OPC_FilterValue, 2, 5, 0, // Skip to: 504
/* 499 */     MCD::OPC_Decode, 225, 8, 173, 1, // Opcode: QVLPCRDX
/* 504 */     MCD::OPC_FilterValue, 16, 5, 0, // Skip to: 513
/* 508 */     MCD::OPC_Decode, 223, 8, 173, 1, // Opcode: QVLPCLSX
/* 513 */     MCD::OPC_FilterValue, 18, 193, 5, // Skip to: 1990
/* 517 */     MCD::OPC_Decode, 222, 8, 173, 1, // Opcode: QVLPCLDX
/* 522 */     MCD::OPC_FilterValue, 14, 32, 1, // Skip to: 814
/* 526 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 529 */     MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 544
/* 533 */     MCD::OPC_CheckField, 26, 6, 31, 171, 5, // Skip to: 1990
/* 539 */     MCD::OPC_Decode, 204, 8, 173, 1, // Opcode: QVLFCSX
/* 544 */     MCD::OPC_FilterValue, 1, 11, 0, // Skip to: 559
/* 548 */     MCD::OPC_CheckField, 26, 6, 31, 156, 5, // Skip to: 1990
/* 554 */     MCD::OPC_Decode, 202, 8, 173, 1, // Opcode: QVLFCSUX
/* 559 */     MCD::OPC_FilterValue, 2, 11, 0, // Skip to: 574
/* 563 */     MCD::OPC_CheckField, 26, 6, 31, 141, 5, // Skip to: 1990
/* 569 */     MCD::OPC_Decode, 200, 8, 173, 1, // Opcode: QVLFCDX
/* 574 */     MCD::OPC_FilterValue, 3, 11, 0, // Skip to: 589
/* 578 */     MCD::OPC_CheckField, 26, 6, 31, 126, 5, // Skip to: 1990
/* 584 */     MCD::OPC_Decode, 198, 8, 173, 1, // Opcode: QVLFCDUX
/* 589 */     MCD::OPC_FilterValue, 4, 11, 0, // Skip to: 604
/* 593 */     MCD::OPC_CheckField, 26, 6, 31, 111, 5, // Skip to: 1990
/* 599 */     MCD::OPC_Decode, 239, 8, 173, 1, // Opcode: QVSTFCSX
/* 604 */     MCD::OPC_FilterValue, 5, 11, 0, // Skip to: 619
/* 608 */     MCD::OPC_CheckField, 26, 6, 31, 96, 5, // Skip to: 1990
/* 614 */     MCD::OPC_Decode, 235, 8, 173, 1, // Opcode: QVSTFCSUX
/* 619 */     MCD::OPC_FilterValue, 6, 11, 0, // Skip to: 634
/* 623 */     MCD::OPC_CheckField, 26, 6, 31, 81, 5, // Skip to: 1990
/* 629 */     MCD::OPC_Decode, 231, 8, 173, 1, // Opcode: QVSTFCDX
/* 634 */     MCD::OPC_FilterValue, 7, 11, 0, // Skip to: 649
/* 638 */     MCD::OPC_CheckField, 26, 6, 31, 66, 5, // Skip to: 1990
/* 644 */     MCD::OPC_Decode, 227, 8, 173, 1, // Opcode: QVSTFCDUX
/* 649 */     MCD::OPC_FilterValue, 16, 11, 0, // Skip to: 664
/* 653 */     MCD::OPC_CheckField, 26, 6, 31, 51, 5, // Skip to: 1990
/* 659 */     MCD::OPC_Decode, 218, 8, 173, 1, // Opcode: QVLFSX
/* 664 */     MCD::OPC_FilterValue, 17, 11, 0, // Skip to: 679
/* 668 */     MCD::OPC_CheckField, 26, 6, 31, 36, 5, // Skip to: 1990
/* 674 */     MCD::OPC_Decode, 216, 8, 174, 1, // Opcode: QVLFSUX
/* 679 */     MCD::OPC_FilterValue, 18, 11, 0, // Skip to: 694
/* 683 */     MCD::OPC_CheckField, 26, 6, 31, 21, 5, // Skip to: 1990
/* 689 */     MCD::OPC_Decode, 209, 8, 173, 1, // Opcode: QVLFDX
/* 694 */     MCD::OPC_FilterValue, 19, 11, 0, // Skip to: 709
/* 698 */     MCD::OPC_CheckField, 26, 6, 31, 6, 5, // Skip to: 1990
/* 704 */     MCD::OPC_Decode, 207, 8, 175, 1, // Opcode: QVLFDUX
/* 709 */     MCD::OPC_FilterValue, 20, 11, 0, // Skip to: 724
/* 713 */     MCD::OPC_CheckField, 26, 6, 31, 247, 4, // Skip to: 1990
/* 719 */     MCD::OPC_Decode, 132, 9, 173, 1, // Opcode: QVSTFSX
/* 724 */     MCD::OPC_FilterValue, 21, 11, 0, // Skip to: 739
/* 728 */     MCD::OPC_CheckField, 26, 6, 31, 232, 4, // Skip to: 1990
/* 734 */     MCD::OPC_Decode, 255, 8, 176, 1, // Opcode: QVSTFSUX
/* 739 */     MCD::OPC_FilterValue, 22, 11, 0, // Skip to: 754
/* 743 */     MCD::OPC_CheckField, 26, 6, 31, 217, 4, // Skip to: 1990
/* 749 */     MCD::OPC_Decode, 248, 8, 173, 1, // Opcode: QVSTFDX
/* 754 */     MCD::OPC_FilterValue, 23, 11, 0, // Skip to: 769
/* 758 */     MCD::OPC_CheckField, 26, 6, 31, 202, 4, // Skip to: 1990
/* 764 */     MCD::OPC_Decode, 244, 8, 177, 1, // Opcode: QVSTFDUX
/* 769 */     MCD::OPC_FilterValue, 26, 11, 0, // Skip to: 784
/* 773 */     MCD::OPC_CheckField, 26, 6, 31, 187, 4, // Skip to: 1990
/* 779 */     MCD::OPC_Decode, 214, 8, 173, 1, // Opcode: QVLFIWZX
/* 784 */     MCD::OPC_FilterValue, 27, 11, 0, // Skip to: 799
/* 788 */     MCD::OPC_CheckField, 26, 6, 31, 172, 4, // Skip to: 1990
/* 794 */     MCD::OPC_Decode, 212, 8, 173, 1, // Opcode: QVLFIWAX
/* 799 */     MCD::OPC_FilterValue, 30, 163, 4, // Skip to: 1990
/* 803 */     MCD::OPC_CheckField, 26, 6, 31, 157, 4, // Skip to: 1990
/* 809 */     MCD::OPC_Decode, 253, 8, 173, 1, // Opcode: QVSTFIWX
/* 814 */     MCD::OPC_FilterValue, 15, 32, 1, // Skip to: 1106
/* 818 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 821 */     MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 836
/* 825 */     MCD::OPC_CheckField, 26, 6, 31, 135, 4, // Skip to: 1990
/* 831 */     MCD::OPC_Decode, 205, 8, 173, 1, // Opcode: QVLFCSXA
/* 836 */     MCD::OPC_FilterValue, 1, 11, 0, // Skip to: 851
/* 840 */     MCD::OPC_CheckField, 26, 6, 31, 120, 4, // Skip to: 1990
/* 846 */     MCD::OPC_Decode, 203, 8, 173, 1, // Opcode: QVLFCSUXA
/* 851 */     MCD::OPC_FilterValue, 2, 11, 0, // Skip to: 866
/* 855 */     MCD::OPC_CheckField, 26, 6, 31, 105, 4, // Skip to: 1990
/* 861 */     MCD::OPC_Decode, 201, 8, 173, 1, // Opcode: QVLFCDXA
/* 866 */     MCD::OPC_FilterValue, 3, 11, 0, // Skip to: 881
/* 870 */     MCD::OPC_CheckField, 26, 6, 31, 90, 4, // Skip to: 1990
/* 876 */     MCD::OPC_Decode, 199, 8, 173, 1, // Opcode: QVLFCDUXA
/* 881 */     MCD::OPC_FilterValue, 4, 11, 0, // Skip to: 896
/* 885 */     MCD::OPC_CheckField, 26, 6, 31, 75, 4, // Skip to: 1990
/* 891 */     MCD::OPC_Decode, 240, 8, 173, 1, // Opcode: QVSTFCSXA
/* 896 */     MCD::OPC_FilterValue, 5, 11, 0, // Skip to: 911
/* 900 */     MCD::OPC_CheckField, 26, 6, 31, 60, 4, // Skip to: 1990
/* 906 */     MCD::OPC_Decode, 236, 8, 173, 1, // Opcode: QVSTFCSUXA
/* 911 */     MCD::OPC_FilterValue, 6, 11, 0, // Skip to: 926
/* 915 */     MCD::OPC_CheckField, 26, 6, 31, 45, 4, // Skip to: 1990
/* 921 */     MCD::OPC_Decode, 232, 8, 173, 1, // Opcode: QVSTFCDXA
/* 926 */     MCD::OPC_FilterValue, 7, 11, 0, // Skip to: 941
/* 930 */     MCD::OPC_CheckField, 26, 6, 31, 30, 4, // Skip to: 1990
/* 936 */     MCD::OPC_Decode, 228, 8, 173, 1, // Opcode: QVSTFCDUXA
/* 941 */     MCD::OPC_FilterValue, 16, 11, 0, // Skip to: 956
/* 945 */     MCD::OPC_CheckField, 26, 6, 31, 15, 4, // Skip to: 1990
/* 951 */     MCD::OPC_Decode, 219, 8, 173, 1, // Opcode: QVLFSXA
/* 956 */     MCD::OPC_FilterValue, 17, 11, 0, // Skip to: 971
/* 960 */     MCD::OPC_CheckField, 26, 6, 31, 0, 4, // Skip to: 1990
/* 966 */     MCD::OPC_Decode, 217, 8, 173, 1, // Opcode: QVLFSUXA
/* 971 */     MCD::OPC_FilterValue, 18, 11, 0, // Skip to: 986
/* 975 */     MCD::OPC_CheckField, 26, 6, 31, 241, 3, // Skip to: 1990
/* 981 */     MCD::OPC_Decode, 210, 8, 173, 1, // Opcode: QVLFDXA
/* 986 */     MCD::OPC_FilterValue, 19, 11, 0, // Skip to: 1001
/* 990 */     MCD::OPC_CheckField, 26, 6, 31, 226, 3, // Skip to: 1990
/* 996 */     MCD::OPC_Decode, 208, 8, 173, 1, // Opcode: QVLFDUXA
/* 1001 */    MCD::OPC_FilterValue, 20, 11, 0, // Skip to: 1016
/* 1005 */    MCD::OPC_CheckField, 26, 6, 31, 211, 3, // Skip to: 1990
/* 1011 */    MCD::OPC_Decode, 133, 9, 173, 1, // Opcode: QVSTFSXA
/* 1016 */    MCD::OPC_FilterValue, 21, 11, 0, // Skip to: 1031
/* 1020 */    MCD::OPC_CheckField, 26, 6, 31, 196, 3, // Skip to: 1990
/* 1026 */    MCD::OPC_Decode, 128, 9, 173, 1, // Opcode: QVSTFSUXA
/* 1031 */    MCD::OPC_FilterValue, 22, 11, 0, // Skip to: 1046
/* 1035 */    MCD::OPC_CheckField, 26, 6, 31, 181, 3, // Skip to: 1990
/* 1041 */    MCD::OPC_Decode, 249, 8, 173, 1, // Opcode: QVSTFDXA
/* 1046 */    MCD::OPC_FilterValue, 23, 11, 0, // Skip to: 1061
/* 1050 */    MCD::OPC_CheckField, 26, 6, 31, 166, 3, // Skip to: 1990
/* 1056 */    MCD::OPC_Decode, 245, 8, 173, 1, // Opcode: QVSTFDUXA
/* 1061 */    MCD::OPC_FilterValue, 26, 11, 0, // Skip to: 1076
/* 1065 */    MCD::OPC_CheckField, 26, 6, 31, 151, 3, // Skip to: 1990
/* 1071 */    MCD::OPC_Decode, 215, 8, 173, 1, // Opcode: QVLFIWZXA
/* 1076 */    MCD::OPC_FilterValue, 27, 11, 0, // Skip to: 1091
/* 1080 */    MCD::OPC_CheckField, 26, 6, 31, 136, 3, // Skip to: 1990
/* 1086 */    MCD::OPC_Decode, 213, 8, 173, 1, // Opcode: QVLFIWAXA
/* 1091 */    MCD::OPC_FilterValue, 30, 127, 3, // Skip to: 1990
/* 1095 */    MCD::OPC_CheckField, 26, 6, 31, 121, 3, // Skip to: 1990
/* 1101 */    MCD::OPC_Decode, 254, 8, 173, 1, // Opcode: QVSTFIWXA
/* 1106 */    MCD::OPC_FilterValue, 16, 186, 0, // Skip to: 1296
/* 1110 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 1113 */    MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 1128
/* 1117 */    MCD::OPC_CheckField, 26, 6, 4, 99, 3, // Skip to: 1990
/* 1123 */    MCD::OPC_Decode, 251, 7, 178, 1, // Opcode: QVFCPSGN
/* 1128 */    MCD::OPC_FilterValue, 1, 17, 0, // Skip to: 1149
/* 1132 */    MCD::OPC_CheckField, 26, 6, 4, 84, 3, // Skip to: 1990
/* 1138 */    MCD::OPC_CheckField, 16, 5, 0, 78, 3, // Skip to: 1990
/* 1144 */    MCD::OPC_Decode, 151, 8, 179, 1, // Opcode: QVFNEG
/* 1149 */    MCD::OPC_FilterValue, 2, 17, 0, // Skip to: 1170
/* 1153 */    MCD::OPC_CheckField, 26, 6, 4, 63, 3, // Skip to: 1990
/* 1159 */    MCD::OPC_CheckField, 16, 5, 0, 57, 3, // Skip to: 1990
/* 1165 */    MCD::OPC_Decode, 140, 8, 179, 1, // Opcode: QVFMR
/* 1170 */    MCD::OPC_FilterValue, 4, 17, 0, // Skip to: 1191
/* 1174 */    MCD::OPC_CheckField, 26, 6, 4, 42, 3, // Skip to: 1990
/* 1180 */    MCD::OPC_CheckField, 16, 5, 0, 36, 3, // Skip to: 1990
/* 1186 */    MCD::OPC_Decode, 149, 8, 179, 1, // Opcode: QVFNABS
/* 1191 */    MCD::OPC_FilterValue, 8, 17, 0, // Skip to: 1212
/* 1195 */    MCD::OPC_CheckField, 26, 6, 4, 21, 3, // Skip to: 1990
/* 1201 */    MCD::OPC_CheckField, 16, 5, 0, 15, 3, // Skip to: 1990
/* 1207 */    MCD::OPC_Decode, 232, 7, 179, 1, // Opcode: QVFABS
/* 1212 */    MCD::OPC_FilterValue, 12, 17, 0, // Skip to: 1233
/* 1216 */    MCD::OPC_CheckField, 26, 6, 4, 0, 3, // Skip to: 1990
/* 1222 */    MCD::OPC_CheckField, 16, 5, 0, 250, 2, // Skip to: 1990
/* 1228 */    MCD::OPC_Decode, 166, 8, 179, 1, // Opcode: QVFRIN
/* 1233 */    MCD::OPC_FilterValue, 13, 17, 0, // Skip to: 1254
/* 1237 */    MCD::OPC_CheckField, 26, 6, 4, 235, 2, // Skip to: 1990
/* 1243 */    MCD::OPC_CheckField, 16, 5, 0, 229, 2, // Skip to: 1990
/* 1249 */    MCD::OPC_Decode, 170, 8, 179, 1, // Opcode: QVFRIZ
/* 1254 */    MCD::OPC_FilterValue, 14, 17, 0, // Skip to: 1275
/* 1258 */    MCD::OPC_CheckField, 26, 6, 4, 214, 2, // Skip to: 1990
/* 1264 */    MCD::OPC_CheckField, 16, 5, 0, 208, 2, // Skip to: 1990
/* 1270 */    MCD::OPC_Decode, 168, 8, 179, 1, // Opcode: QVFRIP
/* 1275 */    MCD::OPC_FilterValue, 15, 199, 2, // Skip to: 1990
/* 1279 */    MCD::OPC_CheckField, 26, 6, 4, 193, 2, // Skip to: 1990
/* 1285 */    MCD::OPC_CheckField, 16, 5, 0, 187, 2, // Skip to: 1990
/* 1291 */    MCD::OPC_Decode, 164, 8, 179, 1, // Opcode: QVFRIM
/* 1296 */    MCD::OPC_FilterValue, 18, 21, 0, // Skip to: 1321
/* 1300 */    MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 1303 */    MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 1312
/* 1307 */    MCD::OPC_Decode, 188, 8, 168, 1, // Opcode: QVFXMADDS
/* 1312 */    MCD::OPC_FilterValue, 4, 162, 2, // Skip to: 1990
/* 1316 */    MCD::OPC_Decode, 187, 8, 168, 1, // Opcode: QVFXMADD
/* 1321 */    MCD::OPC_FilterValue, 22, 21, 0, // Skip to: 1346
/* 1325 */    MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 1328 */    MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 1337
/* 1332 */    MCD::OPC_Decode, 196, 8, 168, 1, // Opcode: QVFXXNPMADDS
/* 1337 */    MCD::OPC_FilterValue, 4, 137, 2, // Skip to: 1990
/* 1341 */    MCD::OPC_Decode, 195, 8, 168, 1, // Opcode: QVFXXNPMADD
/* 1346 */    MCD::OPC_FilterValue, 24, 23, 0, // Skip to: 1373
/* 1350 */    MCD::OPC_CheckField, 26, 6, 4, 122, 2, // Skip to: 1990
/* 1356 */    MCD::OPC_CheckField, 16, 5, 0, 116, 2, // Skip to: 1990
/* 1362 */    MCD::OPC_CheckField, 6, 5, 0, 110, 2, // Skip to: 1990
/* 1368 */    MCD::OPC_Decode, 173, 8, 180, 1, // Opcode: QVFRSPs
/* 1373 */    MCD::OPC_FilterValue, 28, 161, 0, // Skip to: 1538
/* 1377 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 1380 */    MCD::OPC_FilterValue, 0, 17, 0, // Skip to: 1401
/* 1384 */    MCD::OPC_CheckField, 26, 6, 4, 88, 2, // Skip to: 1990
/* 1390 */    MCD::OPC_CheckField, 16, 5, 0, 82, 2, // Skip to: 1990
/* 1396 */    MCD::OPC_Decode, 130, 8, 179, 1, // Opcode: QVFCTIW
/* 1401 */    MCD::OPC_FilterValue, 4, 17, 0, // Skip to: 1422
/* 1405 */    MCD::OPC_CheckField, 26, 6, 4, 67, 2, // Skip to: 1990
/* 1411 */    MCD::OPC_CheckField, 16, 5, 0, 61, 2, // Skip to: 1990
/* 1417 */    MCD::OPC_Decode, 131, 8, 179, 1, // Opcode: QVFCTIWU
/* 1422 */    MCD::OPC_FilterValue, 25, 17, 0, // Skip to: 1443
/* 1426 */    MCD::OPC_CheckField, 26, 6, 4, 46, 2, // Skip to: 1990
/* 1432 */    MCD::OPC_CheckField, 16, 5, 0, 40, 2, // Skip to: 1990
/* 1438 */    MCD::OPC_Decode, 253, 7, 179, 1, // Opcode: QVFCTID
/* 1443 */    MCD::OPC_FilterValue, 26, 33, 0, // Skip to: 1480
/* 1447 */    MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 1450 */    MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 1465
/* 1454 */    MCD::OPC_CheckField, 16, 5, 0, 18, 2, // Skip to: 1990
/* 1460 */    MCD::OPC_Decode, 238, 7, 179, 1, // Opcode: QVFCFIDS
/* 1465 */    MCD::OPC_FilterValue, 4, 9, 2, // Skip to: 1990
/* 1469 */    MCD::OPC_CheckField, 16, 5, 0, 3, 2, // Skip to: 1990
/* 1475 */    MCD::OPC_Decode, 237, 7, 179, 1, // Opcode: QVFCFID
/* 1480 */    MCD::OPC_FilterValue, 29, 17, 0, // Skip to: 1501
/* 1484 */    MCD::OPC_CheckField, 26, 6, 4, 244, 1, // Skip to: 1990
/* 1490 */    MCD::OPC_CheckField, 16, 5, 0, 238, 1, // Skip to: 1990
/* 1496 */    MCD::OPC_Decode, 254, 7, 179, 1, // Opcode: QVFCTIDU
/* 1501 */    MCD::OPC_FilterValue, 30, 229, 1, // Skip to: 1990
/* 1505 */    MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 1508 */    MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 1523
/* 1512 */    MCD::OPC_CheckField, 16, 5, 0, 216, 1, // Skip to: 1990
/* 1518 */    MCD::OPC_Decode, 240, 7, 179, 1, // Opcode: QVFCFIDUS
/* 1523 */    MCD::OPC_FilterValue, 4, 207, 1, // Skip to: 1990
/* 1527 */    MCD::OPC_CheckField, 16, 5, 0, 201, 1, // Skip to: 1990
/* 1533 */    MCD::OPC_Decode, 239, 7, 179, 1, // Opcode: QVFCFIDU
/* 1538 */    MCD::OPC_FilterValue, 30, 87, 0, // Skip to: 1629
/* 1542 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 1545 */    MCD::OPC_FilterValue, 0, 17, 0, // Skip to: 1566
/* 1549 */    MCD::OPC_CheckField, 26, 6, 4, 179, 1, // Skip to: 1990
/* 1555 */    MCD::OPC_CheckField, 16, 5, 0, 173, 1, // Skip to: 1990
/* 1561 */    MCD::OPC_Decode, 133, 8, 179, 1, // Opcode: QVFCTIWZ
/* 1566 */    MCD::OPC_FilterValue, 4, 17, 0, // Skip to: 1587
/* 1570 */    MCD::OPC_CheckField, 26, 6, 4, 158, 1, // Skip to: 1990
/* 1576 */    MCD::OPC_CheckField, 16, 5, 0, 152, 1, // Skip to: 1990
/* 1582 */    MCD::OPC_Decode, 132, 8, 179, 1, // Opcode: QVFCTIWUZ
/* 1587 */    MCD::OPC_FilterValue, 25, 17, 0, // Skip to: 1608
/* 1591 */    MCD::OPC_CheckField, 26, 6, 4, 137, 1, // Skip to: 1990
/* 1597 */    MCD::OPC_CheckField, 16, 5, 0, 131, 1, // Skip to: 1990
/* 1603 */    MCD::OPC_Decode, 128, 8, 179, 1, // Opcode: QVFCTIDZ
/* 1608 */    MCD::OPC_FilterValue, 29, 122, 1, // Skip to: 1990
/* 1612 */    MCD::OPC_CheckField, 26, 6, 4, 116, 1, // Skip to: 1990
/* 1618 */    MCD::OPC_CheckField, 16, 5, 0, 110, 1, // Skip to: 1990
/* 1624 */    MCD::OPC_Decode, 255, 7, 179, 1, // Opcode: QVFCTIDUZ
/* 1629 */    MCD::OPC_FilterValue, 34, 33, 0, // Skip to: 1666
/* 1633 */    MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 1636 */    MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 1651
/* 1640 */    MCD::OPC_CheckField, 11, 5, 0, 88, 1, // Skip to: 1990
/* 1646 */    MCD::OPC_Decode, 190, 8, 181, 1, // Opcode: QVFXMULS
/* 1651 */    MCD::OPC_FilterValue, 4, 79, 1, // Skip to: 1990
/* 1655 */    MCD::OPC_CheckField, 11, 5, 0, 73, 1, // Skip to: 1990
/* 1661 */    MCD::OPC_Decode, 189, 8, 181, 1, // Opcode: QVFXMUL
/* 1666 */    MCD::OPC_FilterValue, 40, 33, 0, // Skip to: 1703
/* 1670 */    MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 1673 */    MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 1688
/* 1677 */    MCD::OPC_CheckField, 6, 5, 0, 51, 1, // Skip to: 1990
/* 1683 */    MCD::OPC_Decode, 183, 8, 182, 1, // Opcode: QVFSUBSs
/* 1688 */    MCD::OPC_FilterValue, 4, 42, 1, // Skip to: 1990
/* 1692 */    MCD::OPC_CheckField, 6, 5, 0, 36, 1, // Skip to: 1990
/* 1698 */    MCD::OPC_Decode, 181, 8, 178, 1, // Opcode: QVFSUB
/* 1703 */    MCD::OPC_FilterValue, 42, 33, 0, // Skip to: 1740
/* 1707 */    MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 1710 */    MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 1725
/* 1714 */    MCD::OPC_CheckField, 6, 5, 0, 14, 1, // Skip to: 1990
/* 1720 */    MCD::OPC_Decode, 236, 7, 182, 1, // Opcode: QVFADDSs
/* 1725 */    MCD::OPC_FilterValue, 4, 5, 1, // Skip to: 1990
/* 1729 */    MCD::OPC_CheckField, 6, 5, 0, 255, 0, // Skip to: 1990
/* 1735 */    MCD::OPC_Decode, 234, 7, 178, 1, // Opcode: QVFADD
/* 1740 */    MCD::OPC_FilterValue, 46, 11, 0, // Skip to: 1755
/* 1744 */    MCD::OPC_CheckField, 26, 6, 4, 240, 0, // Skip to: 1990
/* 1750 */    MCD::OPC_Decode, 178, 8, 183, 1, // Opcode: QVFSELb
/* 1755 */    MCD::OPC_FilterValue, 48, 45, 0, // Skip to: 1804
/* 1759 */    MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 1762 */    MCD::OPC_FilterValue, 0, 17, 0, // Skip to: 1783
/* 1766 */    MCD::OPC_CheckField, 16, 5, 0, 218, 0, // Skip to: 1990
/* 1772 */    MCD::OPC_CheckField, 6, 5, 0, 212, 0, // Skip to: 1990
/* 1778 */    MCD::OPC_Decode, 162, 8, 179, 1, // Opcode: QVFRES
/* 1783 */    MCD::OPC_FilterValue, 4, 203, 0, // Skip to: 1990
/* 1787 */    MCD::OPC_CheckField, 16, 5, 0, 197, 0, // Skip to: 1990
/* 1793 */    MCD::OPC_CheckField, 6, 5, 0, 191, 0, // Skip to: 1990
/* 1799 */    MCD::OPC_Decode, 161, 8, 179, 1, // Opcode: QVFRE
/* 1804 */    MCD::OPC_FilterValue, 50, 33, 0, // Skip to: 1841
/* 1808 */    MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 1811 */    MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 1826
/* 1815 */    MCD::OPC_CheckField, 11, 5, 0, 169, 0, // Skip to: 1990
/* 1821 */    MCD::OPC_Decode, 148, 8, 184, 1, // Opcode: QVFMULSs
/* 1826 */    MCD::OPC_FilterValue, 4, 160, 0, // Skip to: 1990
/* 1830 */    MCD::OPC_CheckField, 11, 5, 0, 154, 0, // Skip to: 1990
/* 1836 */    MCD::OPC_Decode, 146, 8, 181, 1, // Opcode: QVFMUL
/* 1841 */    MCD::OPC_FilterValue, 52, 45, 0, // Skip to: 1890
/* 1845 */    MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 1848 */    MCD::OPC_FilterValue, 0, 17, 0, // Skip to: 1869
/* 1852 */    MCD::OPC_CheckField, 16, 5, 0, 132, 0, // Skip to: 1990
/* 1858 */    MCD::OPC_CheckField, 6, 5, 0, 126, 0, // Skip to: 1990
/* 1864 */    MCD::OPC_Decode, 175, 8, 179, 1, // Opcode: QVFRSQRTES
/* 1869 */    MCD::OPC_FilterValue, 4, 117, 0, // Skip to: 1990
/* 1873 */    MCD::OPC_CheckField, 16, 5, 0, 111, 0, // Skip to: 1990
/* 1879 */    MCD::OPC_CheckField, 6, 5, 0, 105, 0, // Skip to: 1990
/* 1885 */    MCD::OPC_Decode, 174, 8, 179, 1, // Opcode: QVFRSQRTE
/* 1890 */    MCD::OPC_FilterValue, 56, 21, 0, // Skip to: 1915
/* 1894 */    MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 1897 */    MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 1906
/* 1901 */    MCD::OPC_Decode, 145, 8, 185, 1, // Opcode: QVFMSUBSs
/* 1906 */    MCD::OPC_FilterValue, 4, 80, 0, // Skip to: 1990
/* 1910 */    MCD::OPC_Decode, 143, 8, 168, 1, // Opcode: QVFMSUB
/* 1915 */    MCD::OPC_FilterValue, 58, 21, 0, // Skip to: 1940
/* 1919 */    MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 1922 */    MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 1931
/* 1926 */    MCD::OPC_Decode, 139, 8, 185, 1, // Opcode: QVFMADDSs
/* 1931 */    MCD::OPC_FilterValue, 4, 55, 0, // Skip to: 1990
/* 1935 */    MCD::OPC_Decode, 137, 8, 168, 1, // Opcode: QVFMADD
/* 1940 */    MCD::OPC_FilterValue, 60, 21, 0, // Skip to: 1965
/* 1944 */    MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 1947 */    MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 1956
/* 1951 */    MCD::OPC_Decode, 158, 8, 185, 1, // Opcode: QVFNMSUBSs
/* 1956 */    MCD::OPC_FilterValue, 4, 30, 0, // Skip to: 1990
/* 1960 */    MCD::OPC_Decode, 156, 8, 168, 1, // Opcode: QVFNMSUB
/* 1965 */    MCD::OPC_FilterValue, 62, 21, 0, // Skip to: 1990
/* 1969 */    MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 1972 */    MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 1981
/* 1976 */    MCD::OPC_Decode, 155, 8, 185, 1, // Opcode: QVFNMADDSs
/* 1981 */    MCD::OPC_FilterValue, 4, 5, 0, // Skip to: 1990
/* 1985 */    MCD::OPC_Decode, 153, 8, 168, 1, // Opcode: QVFNMADD
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
    if (DecodeG8RC_NOX0RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
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
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 149:
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
  case 150:
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 3, 1) << 5;
    tmp |= fieldFromInstruction(insn, 21, 5) << 0;
    if (DecodeVSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 4, 17);
    if (decodeMemRIX16Operands(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 151:
    tmp = fieldFromInstruction(insn, 23, 3);
    if (DecodeCRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeF4RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeF4RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 152:
    tmp = fieldFromInstruction(insn, 23, 3);
    if (DecodeCRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeF8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeF8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 153:
    tmp = fieldFromInstruction(insn, 23, 3);
    if (DecodeCRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeF8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 154:
    tmp = fieldFromInstruction(insn, 23, 3);
    if (DecodeCRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeVRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeVRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 155:
    tmp = fieldFromInstruction(insn, 23, 3);
    if (DecodeCRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 7);
    if (decodeUImmOperand<7>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeVRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 156:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeVRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeVFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 157:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeVRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeVRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeVSFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 158:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeVRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeVRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 9, 2);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 159:
    tmp = fieldFromInstruction(insn, 23, 3);
    if (DecodeCRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 12, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 16, 1);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 160:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeF8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 161:
    tmp = fieldFromInstruction(insn, 17, 8);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeF8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 25, 1);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 16, 1);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 162:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeF8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeF8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 163:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeF8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeF8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeF8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 164:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeF4RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeF8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeF4RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeF4RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 165:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeF8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeF8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeF8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 166:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeF8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeF8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeF8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeF8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 167:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeQBRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeQFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeQFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 168:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeQFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeQFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeQFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeQFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 169:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeQBRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeQBRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeQBRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 7, 4);
    if (decodeUImmOperand<12>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 170:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeQFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeQFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeQFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 9, 2);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 171:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeQFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeQFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 9, 2);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 172:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeQFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 9, 12);
    if (decodeUImmOperand<12>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 173:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeQFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePointerLikeRegClass1(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodePointerLikeRegClass0(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 174:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeQSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePointerLikeRegClass1(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePointerLikeRegClass1(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodePointerLikeRegClass0(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 175:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeQFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePointerLikeRegClass1(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePointerLikeRegClass1(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodePointerLikeRegClass0(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 176:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePointerLikeRegClass1(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeQSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePointerLikeRegClass1(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodePointerLikeRegClass0(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 177:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePointerLikeRegClass1(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeQFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePointerLikeRegClass1(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodePointerLikeRegClass0(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 178:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeQFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeQFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeQFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 179:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeQFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeQFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 180:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeQSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeQFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 181:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeQFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeQFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeQFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 182:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeQSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeQSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeQSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 183:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeQFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeQBRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeQFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeQFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 184:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeQSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeQSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeQSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 185:
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
