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
/* 7 */       MCD::OPC_CheckField, 1, 10, 128, 2, 74, 53, // Skip to: 13656
/* 14 */      MCD::OPC_Decode, 195, 1, 0, // Opcode: ATTN
/* 18 */      MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 26
/* 22 */      MCD::OPC_Decode, 204, 10, 1, // Opcode: TDI
/* 26 */      MCD::OPC_FilterValue, 3, 4, 0, // Skip to: 34
/* 30 */      MCD::OPC_Decode, 225, 10, 2, // Opcode: TWI
/* 34 */      MCD::OPC_FilterValue, 4, 146, 10, // Skip to: 2744
/* 38 */      MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 41 */      MCD::OPC_FilterValue, 0, 211, 0, // Skip to: 256
/* 45 */      MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 48 */      MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 56
/* 52 */      MCD::OPC_Decode, 239, 10, 3, // Opcode: VADDUBM
/* 56 */      MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 64
/* 60 */      MCD::OPC_Decode, 242, 10, 3, // Opcode: VADDUHM
/* 64 */      MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 72
/* 68 */      MCD::OPC_Decode, 245, 10, 3, // Opcode: VADDUWM
/* 72 */      MCD::OPC_FilterValue, 3, 4, 0, // Skip to: 80
/* 76 */      MCD::OPC_Decode, 241, 10, 3, // Opcode: VADDUDM
/* 80 */      MCD::OPC_FilterValue, 4, 4, 0, // Skip to: 88
/* 84 */      MCD::OPC_Decode, 244, 10, 3, // Opcode: VADDUQM
/* 88 */      MCD::OPC_FilterValue, 5, 4, 0, // Skip to: 96
/* 92 */      MCD::OPC_Decode, 231, 10, 3, // Opcode: VADDCUQ
/* 96 */      MCD::OPC_FilterValue, 6, 4, 0, // Skip to: 104
/* 100 */     MCD::OPC_Decode, 232, 10, 3, // Opcode: VADDCUW
/* 104 */     MCD::OPC_FilterValue, 8, 4, 0, // Skip to: 112
/* 108 */     MCD::OPC_Decode, 240, 10, 3, // Opcode: VADDUBS
/* 112 */     MCD::OPC_FilterValue, 9, 4, 0, // Skip to: 120
/* 116 */     MCD::OPC_Decode, 243, 10, 3, // Opcode: VADDUHS
/* 120 */     MCD::OPC_FilterValue, 10, 4, 0, // Skip to: 128
/* 124 */     MCD::OPC_Decode, 246, 10, 3, // Opcode: VADDUWS
/* 128 */     MCD::OPC_FilterValue, 12, 4, 0, // Skip to: 136
/* 132 */     MCD::OPC_Decode, 236, 10, 3, // Opcode: VADDSBS
/* 136 */     MCD::OPC_FilterValue, 13, 4, 0, // Skip to: 144
/* 140 */     MCD::OPC_Decode, 237, 10, 3, // Opcode: VADDSHS
/* 144 */     MCD::OPC_FilterValue, 14, 4, 0, // Skip to: 152
/* 148 */     MCD::OPC_Decode, 238, 10, 3, // Opcode: VADDSWS
/* 152 */     MCD::OPC_FilterValue, 16, 4, 0, // Skip to: 160
/* 156 */     MCD::OPC_Decode, 235, 12, 3, // Opcode: VSUBUBM
/* 160 */     MCD::OPC_FilterValue, 17, 4, 0, // Skip to: 168
/* 164 */     MCD::OPC_Decode, 238, 12, 3, // Opcode: VSUBUHM
/* 168 */     MCD::OPC_FilterValue, 18, 4, 0, // Skip to: 176
/* 172 */     MCD::OPC_Decode, 241, 12, 3, // Opcode: VSUBUWM
/* 176 */     MCD::OPC_FilterValue, 19, 4, 0, // Skip to: 184
/* 180 */     MCD::OPC_Decode, 237, 12, 3, // Opcode: VSUBUDM
/* 184 */     MCD::OPC_FilterValue, 20, 4, 0, // Skip to: 192
/* 188 */     MCD::OPC_Decode, 240, 12, 3, // Opcode: VSUBUQM
/* 192 */     MCD::OPC_FilterValue, 21, 4, 0, // Skip to: 200
/* 196 */     MCD::OPC_Decode, 227, 12, 3, // Opcode: VSUBCUQ
/* 200 */     MCD::OPC_FilterValue, 22, 4, 0, // Skip to: 208
/* 204 */     MCD::OPC_Decode, 228, 12, 3, // Opcode: VSUBCUW
/* 208 */     MCD::OPC_FilterValue, 24, 4, 0, // Skip to: 216
/* 212 */     MCD::OPC_Decode, 236, 12, 3, // Opcode: VSUBUBS
/* 216 */     MCD::OPC_FilterValue, 25, 4, 0, // Skip to: 224
/* 220 */     MCD::OPC_Decode, 239, 12, 3, // Opcode: VSUBUHS
/* 224 */     MCD::OPC_FilterValue, 26, 4, 0, // Skip to: 232
/* 228 */     MCD::OPC_Decode, 242, 12, 3, // Opcode: VSUBUWS
/* 232 */     MCD::OPC_FilterValue, 28, 4, 0, // Skip to: 240
/* 236 */     MCD::OPC_Decode, 232, 12, 3, // Opcode: VSUBSBS
/* 240 */     MCD::OPC_FilterValue, 29, 4, 0, // Skip to: 248
/* 244 */     MCD::OPC_Decode, 233, 12, 3, // Opcode: VSUBSHS
/* 248 */     MCD::OPC_FilterValue, 30, 92, 52, // Skip to: 13656
/* 252 */     MCD::OPC_Decode, 234, 12, 3, // Opcode: VSUBSWS
/* 256 */     MCD::OPC_FilterValue, 1, 233, 0, // Skip to: 493
/* 260 */     MCD::OPC_ExtractField, 6, 3,  // Inst{8-6} ...
/* 263 */     MCD::OPC_FilterValue, 0, 19, 0, // Skip to: 286
/* 267 */     MCD::OPC_ExtractField, 9, 7,  // Inst{15-9} ...
/* 270 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 278
/* 274 */     MCD::OPC_Decode, 129, 12, 4, // Opcode: VMUL10CUQ
/* 278 */     MCD::OPC_FilterValue, 1, 62, 52, // Skip to: 13656
/* 282 */     MCD::OPC_Decode, 132, 12, 4, // Opcode: VMUL10UQ
/* 286 */     MCD::OPC_FilterValue, 1, 19, 0, // Skip to: 309
/* 290 */     MCD::OPC_ExtractField, 9, 2,  // Inst{10-9} ...
/* 293 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 301
/* 297 */     MCD::OPC_Decode, 130, 12, 3, // Opcode: VMUL10ECUQ
/* 301 */     MCD::OPC_FilterValue, 1, 39, 52, // Skip to: 13656
/* 305 */     MCD::OPC_Decode, 131, 12, 3, // Opcode: VMUL10EUQ
/* 309 */     MCD::OPC_FilterValue, 2, 10, 0, // Skip to: 323
/* 313 */     MCD::OPC_CheckField, 9, 2, 2, 25, 52, // Skip to: 13656
/* 319 */     MCD::OPC_Decode, 228, 1, 3, // Opcode: BCDUSo
/* 323 */     MCD::OPC_FilterValue, 3, 10, 0, // Skip to: 337
/* 327 */     MCD::OPC_CheckField, 10, 1, 1, 11, 52, // Skip to: 13656
/* 333 */     MCD::OPC_Decode, 226, 1, 5, // Opcode: BCDSo
/* 337 */     MCD::OPC_FilterValue, 4, 10, 0, // Skip to: 351
/* 341 */     MCD::OPC_CheckField, 10, 1, 1, 253, 51, // Skip to: 13656
/* 347 */     MCD::OPC_Decode, 227, 1, 5, // Opcode: BCDTRUNCo
/* 351 */     MCD::OPC_FilterValue, 5, 19, 0, // Skip to: 374
/* 355 */     MCD::OPC_ExtractField, 9, 2,  // Inst{10-9} ...
/* 358 */     MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 366
/* 362 */     MCD::OPC_Decode, 220, 1, 3, // Opcode: BCDCPSGNo
/* 366 */     MCD::OPC_FilterValue, 2, 230, 51, // Skip to: 13656
/* 370 */     MCD::OPC_Decode, 229, 1, 3, // Opcode: BCDUTRUNCo
/* 374 */     MCD::OPC_FilterValue, 6, 101, 0, // Skip to: 479
/* 378 */     MCD::OPC_ExtractField, 16, 5,  // Inst{20-16} ...
/* 381 */     MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 395
/* 385 */     MCD::OPC_CheckField, 9, 2, 2, 209, 51, // Skip to: 13656
/* 391 */     MCD::OPC_Decode, 222, 1, 6, // Opcode: BCDCTSQo
/* 395 */     MCD::OPC_FilterValue, 2, 10, 0, // Skip to: 409
/* 399 */     MCD::OPC_CheckField, 10, 1, 1, 195, 51, // Skip to: 13656
/* 405 */     MCD::OPC_Decode, 218, 1, 7, // Opcode: BCDCFSQo
/* 409 */     MCD::OPC_FilterValue, 4, 10, 0, // Skip to: 423
/* 413 */     MCD::OPC_CheckField, 10, 1, 1, 181, 51, // Skip to: 13656
/* 419 */     MCD::OPC_Decode, 223, 1, 7, // Opcode: BCDCTZo
/* 423 */     MCD::OPC_FilterValue, 5, 10, 0, // Skip to: 437
/* 427 */     MCD::OPC_CheckField, 9, 2, 2, 167, 51, // Skip to: 13656
/* 433 */     MCD::OPC_Decode, 221, 1, 6, // Opcode: BCDCTNo
/* 437 */     MCD::OPC_FilterValue, 6, 10, 0, // Skip to: 451
/* 441 */     MCD::OPC_CheckField, 10, 1, 1, 153, 51, // Skip to: 13656
/* 447 */     MCD::OPC_Decode, 219, 1, 7, // Opcode: BCDCFZo
/* 451 */     MCD::OPC_FilterValue, 7, 10, 0, // Skip to: 465
/* 455 */     MCD::OPC_CheckField, 10, 1, 1, 139, 51, // Skip to: 13656
/* 461 */     MCD::OPC_Decode, 217, 1, 7, // Opcode: BCDCFNo
/* 465 */     MCD::OPC_FilterValue, 31, 131, 51, // Skip to: 13656
/* 469 */     MCD::OPC_CheckField, 10, 1, 1, 125, 51, // Skip to: 13656
/* 475 */     MCD::OPC_Decode, 224, 1, 7, // Opcode: BCDSETSGNo
/* 479 */     MCD::OPC_FilterValue, 7, 117, 51, // Skip to: 13656
/* 483 */     MCD::OPC_CheckField, 10, 1, 1, 111, 51, // Skip to: 13656
/* 489 */     MCD::OPC_Decode, 225, 1, 5, // Opcode: BCDSRo
/* 493 */     MCD::OPC_FilterValue, 2, 130, 1, // Skip to: 883
/* 497 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 500 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 508
/* 504 */     MCD::OPC_Decode, 227, 11, 3, // Opcode: VMAXUB
/* 508 */     MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 516
/* 512 */     MCD::OPC_Decode, 229, 11, 3, // Opcode: VMAXUH
/* 516 */     MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 524
/* 520 */     MCD::OPC_Decode, 230, 11, 3, // Opcode: VMAXUW
/* 524 */     MCD::OPC_FilterValue, 3, 4, 0, // Skip to: 532
/* 528 */     MCD::OPC_Decode, 228, 11, 3, // Opcode: VMAXUD
/* 532 */     MCD::OPC_FilterValue, 4, 4, 0, // Skip to: 540
/* 536 */     MCD::OPC_Decode, 223, 11, 3, // Opcode: VMAXSB
/* 540 */     MCD::OPC_FilterValue, 5, 4, 0, // Skip to: 548
/* 544 */     MCD::OPC_Decode, 225, 11, 3, // Opcode: VMAXSH
/* 548 */     MCD::OPC_FilterValue, 6, 4, 0, // Skip to: 556
/* 552 */     MCD::OPC_Decode, 226, 11, 3, // Opcode: VMAXSW
/* 556 */     MCD::OPC_FilterValue, 7, 4, 0, // Skip to: 564
/* 560 */     MCD::OPC_Decode, 224, 11, 3, // Opcode: VMAXSD
/* 564 */     MCD::OPC_FilterValue, 8, 4, 0, // Skip to: 572
/* 568 */     MCD::OPC_Decode, 238, 11, 3, // Opcode: VMINUB
/* 572 */     MCD::OPC_FilterValue, 9, 4, 0, // Skip to: 580
/* 576 */     MCD::OPC_Decode, 240, 11, 3, // Opcode: VMINUH
/* 580 */     MCD::OPC_FilterValue, 10, 4, 0, // Skip to: 588
/* 584 */     MCD::OPC_Decode, 241, 11, 3, // Opcode: VMINUW
/* 588 */     MCD::OPC_FilterValue, 11, 4, 0, // Skip to: 596
/* 592 */     MCD::OPC_Decode, 239, 11, 3, // Opcode: VMINUD
/* 596 */     MCD::OPC_FilterValue, 12, 4, 0, // Skip to: 604
/* 600 */     MCD::OPC_Decode, 234, 11, 3, // Opcode: VMINSB
/* 604 */     MCD::OPC_FilterValue, 13, 4, 0, // Skip to: 612
/* 608 */     MCD::OPC_Decode, 236, 11, 3, // Opcode: VMINSH
/* 612 */     MCD::OPC_FilterValue, 14, 4, 0, // Skip to: 620
/* 616 */     MCD::OPC_Decode, 237, 11, 3, // Opcode: VMINSW
/* 620 */     MCD::OPC_FilterValue, 15, 4, 0, // Skip to: 628
/* 624 */     MCD::OPC_Decode, 235, 11, 3, // Opcode: VMINSD
/* 628 */     MCD::OPC_FilterValue, 16, 4, 0, // Skip to: 636
/* 632 */     MCD::OPC_Decode, 252, 10, 3, // Opcode: VAVGUB
/* 636 */     MCD::OPC_FilterValue, 17, 4, 0, // Skip to: 644
/* 640 */     MCD::OPC_Decode, 253, 10, 3, // Opcode: VAVGUH
/* 644 */     MCD::OPC_FilterValue, 18, 4, 0, // Skip to: 652
/* 648 */     MCD::OPC_Decode, 254, 10, 3, // Opcode: VAVGUW
/* 652 */     MCD::OPC_FilterValue, 20, 4, 0, // Skip to: 660
/* 656 */     MCD::OPC_Decode, 249, 10, 3, // Opcode: VAVGSB
/* 660 */     MCD::OPC_FilterValue, 21, 4, 0, // Skip to: 668
/* 664 */     MCD::OPC_Decode, 250, 10, 3, // Opcode: VAVGSH
/* 668 */     MCD::OPC_FilterValue, 22, 4, 0, // Skip to: 676
/* 672 */     MCD::OPC_Decode, 251, 10, 3, // Opcode: VAVGSW
/* 676 */     MCD::OPC_FilterValue, 24, 131, 0, // Skip to: 811
/* 680 */     MCD::OPC_ExtractField, 16, 5,  // Inst{20-16} ...
/* 683 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 691
/* 687 */     MCD::OPC_Decode, 138, 11, 8, // Opcode: VCLZLSBB
/* 691 */     MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 699
/* 695 */     MCD::OPC_Decode, 191, 11, 8, // Opcode: VCTZLSBB
/* 699 */     MCD::OPC_FilterValue, 6, 4, 0, // Skip to: 707
/* 703 */     MCD::OPC_Decode, 150, 12, 6, // Opcode: VNEGW
/* 707 */     MCD::OPC_FilterValue, 7, 4, 0, // Skip to: 715
/* 711 */     MCD::OPC_Decode, 149, 12, 6, // Opcode: VNEGD
/* 715 */     MCD::OPC_FilterValue, 8, 4, 0, // Skip to: 723
/* 719 */     MCD::OPC_Decode, 181, 12, 6, // Opcode: VPRTYBW
/* 723 */     MCD::OPC_FilterValue, 9, 4, 0, // Skip to: 731
/* 727 */     MCD::OPC_Decode, 179, 12, 6, // Opcode: VPRTYBD
/* 731 */     MCD::OPC_FilterValue, 10, 4, 0, // Skip to: 739
/* 735 */     MCD::OPC_Decode, 180, 12, 6, // Opcode: VPRTYBQ
/* 739 */     MCD::OPC_FilterValue, 16, 4, 0, // Skip to: 747
/* 743 */     MCD::OPC_Decode, 201, 11, 6, // Opcode: VEXTSB2W
/* 747 */     MCD::OPC_FilterValue, 17, 4, 0, // Skip to: 755
/* 751 */     MCD::OPC_Decode, 205, 11, 6, // Opcode: VEXTSH2W
/* 755 */     MCD::OPC_FilterValue, 24, 4, 0, // Skip to: 763
/* 759 */     MCD::OPC_Decode, 199, 11, 6, // Opcode: VEXTSB2D
/* 763 */     MCD::OPC_FilterValue, 25, 4, 0, // Skip to: 771
/* 767 */     MCD::OPC_Decode, 203, 11, 6, // Opcode: VEXTSH2D
/* 771 */     MCD::OPC_FilterValue, 26, 4, 0, // Skip to: 779
/* 775 */     MCD::OPC_Decode, 207, 11, 6, // Opcode: VEXTSW2D
/* 779 */     MCD::OPC_FilterValue, 28, 4, 0, // Skip to: 787
/* 783 */     MCD::OPC_Decode, 188, 11, 6, // Opcode: VCTZB
/* 787 */     MCD::OPC_FilterValue, 29, 4, 0, // Skip to: 795
/* 791 */     MCD::OPC_Decode, 190, 11, 6, // Opcode: VCTZH
/* 795 */     MCD::OPC_FilterValue, 30, 4, 0, // Skip to: 803
/* 799 */     MCD::OPC_Decode, 192, 11, 6, // Opcode: VCTZW
/* 803 */     MCD::OPC_FilterValue, 31, 49, 50, // Skip to: 13656
/* 807 */     MCD::OPC_Decode, 189, 11, 6, // Opcode: VCTZD
/* 811 */     MCD::OPC_FilterValue, 26, 4, 0, // Skip to: 819
/* 815 */     MCD::OPC_Decode, 199, 12, 9, // Opcode: VSHASIGMAW
/* 819 */     MCD::OPC_FilterValue, 27, 4, 0, // Skip to: 827
/* 823 */     MCD::OPC_Decode, 198, 12, 9, // Opcode: VSHASIGMAD
/* 827 */     MCD::OPC_FilterValue, 28, 10, 0, // Skip to: 841
/* 831 */     MCD::OPC_CheckField, 16, 5, 0, 19, 50, // Skip to: 13656
/* 837 */     MCD::OPC_Decode, 135, 11, 6, // Opcode: VCLZB
/* 841 */     MCD::OPC_FilterValue, 29, 10, 0, // Skip to: 855
/* 845 */     MCD::OPC_CheckField, 16, 5, 0, 5, 50, // Skip to: 13656
/* 851 */     MCD::OPC_Decode, 137, 11, 6, // Opcode: VCLZH
/* 855 */     MCD::OPC_FilterValue, 30, 10, 0, // Skip to: 869
/* 859 */     MCD::OPC_CheckField, 16, 5, 0, 247, 49, // Skip to: 13656
/* 865 */     MCD::OPC_Decode, 139, 11, 6, // Opcode: VCLZW
/* 869 */     MCD::OPC_FilterValue, 31, 239, 49, // Skip to: 13656
/* 873 */     MCD::OPC_CheckField, 16, 5, 0, 233, 49, // Skip to: 13656
/* 879 */     MCD::OPC_Decode, 136, 11, 6, // Opcode: VCLZD
/* 883 */     MCD::OPC_FilterValue, 3, 83, 0, // Skip to: 970
/* 887 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 890 */     MCD::OPC_FilterValue, 16, 4, 0, // Skip to: 898
/* 894 */     MCD::OPC_Decode, 228, 10, 3, // Opcode: VABSDUB
/* 898 */     MCD::OPC_FilterValue, 17, 4, 0, // Skip to: 906
/* 902 */     MCD::OPC_Decode, 229, 10, 3, // Opcode: VABSDUH
/* 906 */     MCD::OPC_FilterValue, 18, 4, 0, // Skip to: 914
/* 910 */     MCD::OPC_Decode, 230, 10, 3, // Opcode: VABSDUW
/* 914 */     MCD::OPC_FilterValue, 28, 10, 0, // Skip to: 928
/* 918 */     MCD::OPC_CheckField, 16, 5, 0, 188, 49, // Skip to: 13656
/* 924 */     MCD::OPC_Decode, 175, 12, 6, // Opcode: VPOPCNTB
/* 928 */     MCD::OPC_FilterValue, 29, 10, 0, // Skip to: 942
/* 932 */     MCD::OPC_CheckField, 16, 5, 0, 174, 49, // Skip to: 13656
/* 938 */     MCD::OPC_Decode, 177, 12, 6, // Opcode: VPOPCNTH
/* 942 */     MCD::OPC_FilterValue, 30, 10, 0, // Skip to: 956
/* 946 */     MCD::OPC_CheckField, 16, 5, 0, 160, 49, // Skip to: 13656
/* 952 */     MCD::OPC_Decode, 178, 12, 6, // Opcode: VPOPCNTW
/* 956 */     MCD::OPC_FilterValue, 31, 152, 49, // Skip to: 13656
/* 960 */     MCD::OPC_CheckField, 16, 5, 0, 146, 49, // Skip to: 13656
/* 966 */     MCD::OPC_Decode, 176, 12, 6, // Opcode: VPOPCNTD
/* 970 */     MCD::OPC_FilterValue, 4, 255, 0, // Skip to: 1229
/* 974 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 977 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 985
/* 981 */     MCD::OPC_Decode, 187, 12, 3, // Opcode: VRLB
/* 985 */     MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 993
/* 989 */     MCD::OPC_Decode, 191, 12, 3, // Opcode: VRLH
/* 993 */     MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 1001
/* 997 */     MCD::OPC_Decode, 192, 12, 3, // Opcode: VRLW
/* 1001 */    MCD::OPC_FilterValue, 3, 4, 0, // Skip to: 1009
/* 1005 */    MCD::OPC_Decode, 188, 12, 3, // Opcode: VRLD
/* 1009 */    MCD::OPC_FilterValue, 4, 4, 0, // Skip to: 1017
/* 1013 */    MCD::OPC_Decode, 201, 12, 3, // Opcode: VSLB
/* 1017 */    MCD::OPC_FilterValue, 5, 4, 0, // Skip to: 1025
/* 1021 */    MCD::OPC_Decode, 204, 12, 3, // Opcode: VSLH
/* 1025 */    MCD::OPC_FilterValue, 6, 4, 0, // Skip to: 1033
/* 1029 */    MCD::OPC_Decode, 207, 12, 3, // Opcode: VSLW
/* 1033 */    MCD::OPC_FilterValue, 7, 4, 0, // Skip to: 1041
/* 1037 */    MCD::OPC_Decode, 200, 12, 3, // Opcode: VSL
/* 1041 */    MCD::OPC_FilterValue, 8, 4, 0, // Skip to: 1049
/* 1045 */    MCD::OPC_Decode, 221, 12, 3, // Opcode: VSRB
/* 1049 */    MCD::OPC_FilterValue, 9, 4, 0, // Skip to: 1057
/* 1053 */    MCD::OPC_Decode, 223, 12, 3, // Opcode: VSRH
/* 1057 */    MCD::OPC_FilterValue, 10, 4, 0, // Skip to: 1065
/* 1061 */    MCD::OPC_Decode, 226, 12, 3, // Opcode: VSRW
/* 1065 */    MCD::OPC_FilterValue, 11, 4, 0, // Skip to: 1073
/* 1069 */    MCD::OPC_Decode, 216, 12, 3, // Opcode: VSR
/* 1073 */    MCD::OPC_FilterValue, 12, 4, 0, // Skip to: 1081
/* 1077 */    MCD::OPC_Decode, 217, 12, 3, // Opcode: VSRAB
/* 1081 */    MCD::OPC_FilterValue, 13, 4, 0, // Skip to: 1089
/* 1085 */    MCD::OPC_Decode, 219, 12, 3, // Opcode: VSRAH
/* 1089 */    MCD::OPC_FilterValue, 14, 4, 0, // Skip to: 1097
/* 1093 */    MCD::OPC_Decode, 220, 12, 3, // Opcode: VSRAW
/* 1097 */    MCD::OPC_FilterValue, 15, 4, 0, // Skip to: 1105
/* 1101 */    MCD::OPC_Decode, 218, 12, 3, // Opcode: VSRAD
/* 1105 */    MCD::OPC_FilterValue, 16, 4, 0, // Skip to: 1113
/* 1109 */    MCD::OPC_Decode, 247, 10, 3, // Opcode: VAND
/* 1113 */    MCD::OPC_FilterValue, 17, 4, 0, // Skip to: 1121
/* 1117 */    MCD::OPC_Decode, 248, 10, 3, // Opcode: VANDC
/* 1121 */    MCD::OPC_FilterValue, 18, 4, 0, // Skip to: 1129
/* 1125 */    MCD::OPC_Decode, 153, 12, 3, // Opcode: VOR
/* 1129 */    MCD::OPC_FilterValue, 19, 4, 0, // Skip to: 1137
/* 1133 */    MCD::OPC_Decode, 128, 13, 3, // Opcode: VXOR
/* 1137 */    MCD::OPC_FilterValue, 20, 4, 0, // Skip to: 1145
/* 1141 */    MCD::OPC_Decode, 152, 12, 3, // Opcode: VNOR
/* 1145 */    MCD::OPC_FilterValue, 21, 4, 0, // Skip to: 1153
/* 1149 */    MCD::OPC_Decode, 154, 12, 3, // Opcode: VORC
/* 1153 */    MCD::OPC_FilterValue, 22, 4, 0, // Skip to: 1161
/* 1157 */    MCD::OPC_Decode, 146, 12, 3, // Opcode: VNAND
/* 1161 */    MCD::OPC_FilterValue, 23, 4, 0, // Skip to: 1169
/* 1165 */    MCD::OPC_Decode, 202, 12, 3, // Opcode: VSLD
/* 1169 */    MCD::OPC_FilterValue, 24, 10, 0, // Skip to: 1183
/* 1173 */    MCD::OPC_CheckField, 11, 10, 0, 189, 48, // Skip to: 13656
/* 1179 */    MCD::OPC_Decode, 233, 6, 10, // Opcode: MFVSCR
/* 1183 */    MCD::OPC_FilterValue, 25, 10, 0, // Skip to: 1197
/* 1187 */    MCD::OPC_CheckField, 16, 10, 0, 175, 48, // Skip to: 13656
/* 1193 */    MCD::OPC_Decode, 137, 7, 11, // Opcode: MTVSCR
/* 1197 */    MCD::OPC_FilterValue, 26, 4, 0, // Skip to: 1205
/* 1201 */    MCD::OPC_Decode, 193, 11, 3, // Opcode: VEQV
/* 1205 */    MCD::OPC_FilterValue, 27, 4, 0, // Skip to: 1213
/* 1209 */    MCD::OPC_Decode, 222, 12, 3, // Opcode: VSRD
/* 1213 */    MCD::OPC_FilterValue, 28, 4, 0, // Skip to: 1221
/* 1217 */    MCD::OPC_Decode, 225, 12, 3, // Opcode: VSRV
/* 1221 */    MCD::OPC_FilterValue, 29, 143, 48, // Skip to: 13656
/* 1225 */    MCD::OPC_Decode, 206, 12, 3, // Opcode: VSLV
/* 1229 */    MCD::OPC_FilterValue, 5, 35, 0, // Skip to: 1268
/* 1233 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 1236 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 1244
/* 1240 */    MCD::OPC_Decode, 193, 12, 12, // Opcode: VRLWMI
/* 1244 */    MCD::OPC_FilterValue, 3, 4, 0, // Skip to: 1252
/* 1248 */    MCD::OPC_Decode, 189, 12, 12, // Opcode: VRLDMI
/* 1252 */    MCD::OPC_FilterValue, 6, 4, 0, // Skip to: 1260
/* 1256 */    MCD::OPC_Decode, 194, 12, 3, // Opcode: VRLWNM
/* 1260 */    MCD::OPC_FilterValue, 7, 104, 48, // Skip to: 13656
/* 1264 */    MCD::OPC_Decode, 190, 12, 3, // Opcode: VRLDNM
/* 1268 */    MCD::OPC_FilterValue, 6, 211, 0, // Skip to: 1483
/* 1272 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 1275 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 1283
/* 1279 */    MCD::OPC_Decode, 144, 11, 3, // Opcode: VCMPEQUB
/* 1283 */    MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 1291
/* 1287 */    MCD::OPC_Decode, 148, 11, 3, // Opcode: VCMPEQUH
/* 1291 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 1299
/* 1295 */    MCD::OPC_Decode, 150, 11, 3, // Opcode: VCMPEQUW
/* 1299 */    MCD::OPC_FilterValue, 3, 4, 0, // Skip to: 1307
/* 1303 */    MCD::OPC_Decode, 142, 11, 3, // Opcode: VCMPEQFP
/* 1307 */    MCD::OPC_FilterValue, 7, 4, 0, // Skip to: 1315
/* 1311 */    MCD::OPC_Decode, 152, 11, 3, // Opcode: VCMPGEFP
/* 1315 */    MCD::OPC_FilterValue, 8, 4, 0, // Skip to: 1323
/* 1319 */    MCD::OPC_Decode, 164, 11, 3, // Opcode: VCMPGTUB
/* 1323 */    MCD::OPC_FilterValue, 9, 4, 0, // Skip to: 1331
/* 1327 */    MCD::OPC_Decode, 168, 11, 3, // Opcode: VCMPGTUH
/* 1331 */    MCD::OPC_FilterValue, 10, 4, 0, // Skip to: 1339
/* 1335 */    MCD::OPC_Decode, 170, 11, 3, // Opcode: VCMPGTUW
/* 1339 */    MCD::OPC_FilterValue, 11, 4, 0, // Skip to: 1347
/* 1343 */    MCD::OPC_Decode, 154, 11, 3, // Opcode: VCMPGTFP
/* 1347 */    MCD::OPC_FilterValue, 12, 4, 0, // Skip to: 1355
/* 1351 */    MCD::OPC_Decode, 156, 11, 3, // Opcode: VCMPGTSB
/* 1355 */    MCD::OPC_FilterValue, 13, 4, 0, // Skip to: 1363
/* 1359 */    MCD::OPC_Decode, 160, 11, 3, // Opcode: VCMPGTSH
/* 1363 */    MCD::OPC_FilterValue, 14, 4, 0, // Skip to: 1371
/* 1367 */    MCD::OPC_Decode, 162, 11, 3, // Opcode: VCMPGTSW
/* 1371 */    MCD::OPC_FilterValue, 15, 4, 0, // Skip to: 1379
/* 1375 */    MCD::OPC_Decode, 140, 11, 3, // Opcode: VCMPBFP
/* 1379 */    MCD::OPC_FilterValue, 16, 4, 0, // Skip to: 1387
/* 1383 */    MCD::OPC_Decode, 145, 11, 3, // Opcode: VCMPEQUBo
/* 1387 */    MCD::OPC_FilterValue, 17, 4, 0, // Skip to: 1395
/* 1391 */    MCD::OPC_Decode, 149, 11, 3, // Opcode: VCMPEQUHo
/* 1395 */    MCD::OPC_FilterValue, 18, 4, 0, // Skip to: 1403
/* 1399 */    MCD::OPC_Decode, 151, 11, 3, // Opcode: VCMPEQUWo
/* 1403 */    MCD::OPC_FilterValue, 19, 4, 0, // Skip to: 1411
/* 1407 */    MCD::OPC_Decode, 143, 11, 3, // Opcode: VCMPEQFPo
/* 1411 */    MCD::OPC_FilterValue, 23, 4, 0, // Skip to: 1419
/* 1415 */    MCD::OPC_Decode, 153, 11, 3, // Opcode: VCMPGEFPo
/* 1419 */    MCD::OPC_FilterValue, 24, 4, 0, // Skip to: 1427
/* 1423 */    MCD::OPC_Decode, 165, 11, 3, // Opcode: VCMPGTUBo
/* 1427 */    MCD::OPC_FilterValue, 25, 4, 0, // Skip to: 1435
/* 1431 */    MCD::OPC_Decode, 169, 11, 3, // Opcode: VCMPGTUHo
/* 1435 */    MCD::OPC_FilterValue, 26, 4, 0, // Skip to: 1443
/* 1439 */    MCD::OPC_Decode, 171, 11, 3, // Opcode: VCMPGTUWo
/* 1443 */    MCD::OPC_FilterValue, 27, 4, 0, // Skip to: 1451
/* 1447 */    MCD::OPC_Decode, 155, 11, 3, // Opcode: VCMPGTFPo
/* 1451 */    MCD::OPC_FilterValue, 28, 4, 0, // Skip to: 1459
/* 1455 */    MCD::OPC_Decode, 157, 11, 3, // Opcode: VCMPGTSBo
/* 1459 */    MCD::OPC_FilterValue, 29, 4, 0, // Skip to: 1467
/* 1463 */    MCD::OPC_Decode, 161, 11, 3, // Opcode: VCMPGTSHo
/* 1467 */    MCD::OPC_FilterValue, 30, 4, 0, // Skip to: 1475
/* 1471 */    MCD::OPC_Decode, 163, 11, 3, // Opcode: VCMPGTSWo
/* 1475 */    MCD::OPC_FilterValue, 31, 145, 47, // Skip to: 13656
/* 1479 */    MCD::OPC_Decode, 141, 11, 3, // Opcode: VCMPBFPo
/* 1483 */    MCD::OPC_FilterValue, 7, 147, 0, // Skip to: 1634
/* 1487 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 1490 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 1498
/* 1494 */    MCD::OPC_Decode, 172, 11, 3, // Opcode: VCMPNEB
/* 1498 */    MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 1506
/* 1502 */    MCD::OPC_Decode, 174, 11, 3, // Opcode: VCMPNEH
/* 1506 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 1514
/* 1510 */    MCD::OPC_Decode, 176, 11, 3, // Opcode: VCMPNEW
/* 1514 */    MCD::OPC_FilterValue, 3, 4, 0, // Skip to: 1522
/* 1518 */    MCD::OPC_Decode, 146, 11, 3, // Opcode: VCMPEQUD
/* 1522 */    MCD::OPC_FilterValue, 4, 4, 0, // Skip to: 1530
/* 1526 */    MCD::OPC_Decode, 178, 11, 3, // Opcode: VCMPNEZB
/* 1530 */    MCD::OPC_FilterValue, 5, 4, 0, // Skip to: 1538
/* 1534 */    MCD::OPC_Decode, 180, 11, 3, // Opcode: VCMPNEZH
/* 1538 */    MCD::OPC_FilterValue, 6, 4, 0, // Skip to: 1546
/* 1542 */    MCD::OPC_Decode, 182, 11, 3, // Opcode: VCMPNEZW
/* 1546 */    MCD::OPC_FilterValue, 11, 4, 0, // Skip to: 1554
/* 1550 */    MCD::OPC_Decode, 166, 11, 3, // Opcode: VCMPGTUD
/* 1554 */    MCD::OPC_FilterValue, 15, 4, 0, // Skip to: 1562
/* 1558 */    MCD::OPC_Decode, 158, 11, 3, // Opcode: VCMPGTSD
/* 1562 */    MCD::OPC_FilterValue, 16, 4, 0, // Skip to: 1570
/* 1566 */    MCD::OPC_Decode, 173, 11, 3, // Opcode: VCMPNEBo
/* 1570 */    MCD::OPC_FilterValue, 17, 4, 0, // Skip to: 1578
/* 1574 */    MCD::OPC_Decode, 175, 11, 3, // Opcode: VCMPNEHo
/* 1578 */    MCD::OPC_FilterValue, 18, 4, 0, // Skip to: 1586
/* 1582 */    MCD::OPC_Decode, 177, 11, 3, // Opcode: VCMPNEWo
/* 1586 */    MCD::OPC_FilterValue, 19, 4, 0, // Skip to: 1594
/* 1590 */    MCD::OPC_Decode, 147, 11, 3, // Opcode: VCMPEQUDo
/* 1594 */    MCD::OPC_FilterValue, 20, 4, 0, // Skip to: 1602
/* 1598 */    MCD::OPC_Decode, 179, 11, 3, // Opcode: VCMPNEZBo
/* 1602 */    MCD::OPC_FilterValue, 21, 4, 0, // Skip to: 1610
/* 1606 */    MCD::OPC_Decode, 181, 11, 3, // Opcode: VCMPNEZHo
/* 1610 */    MCD::OPC_FilterValue, 22, 4, 0, // Skip to: 1618
/* 1614 */    MCD::OPC_Decode, 183, 11, 3, // Opcode: VCMPNEZWo
/* 1618 */    MCD::OPC_FilterValue, 27, 4, 0, // Skip to: 1626
/* 1622 */    MCD::OPC_Decode, 167, 11, 3, // Opcode: VCMPGTUDo
/* 1626 */    MCD::OPC_FilterValue, 31, 250, 46, // Skip to: 13656
/* 1630 */    MCD::OPC_Decode, 159, 11, 3, // Opcode: VCMPGTSDo
/* 1634 */    MCD::OPC_FilterValue, 8, 201, 0, // Skip to: 1839
/* 1638 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 1641 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 1649
/* 1645 */    MCD::OPC_Decode, 142, 12, 3, // Opcode: VMULOUB
/* 1649 */    MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 1657
/* 1653 */    MCD::OPC_Decode, 143, 12, 3, // Opcode: VMULOUH
/* 1657 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 1665
/* 1661 */    MCD::OPC_Decode, 144, 12, 3, // Opcode: VMULOUW
/* 1665 */    MCD::OPC_FilterValue, 4, 4, 0, // Skip to: 1673
/* 1669 */    MCD::OPC_Decode, 139, 12, 3, // Opcode: VMULOSB
/* 1673 */    MCD::OPC_FilterValue, 5, 4, 0, // Skip to: 1681
/* 1677 */    MCD::OPC_Decode, 140, 12, 3, // Opcode: VMULOSH
/* 1681 */    MCD::OPC_FilterValue, 6, 4, 0, // Skip to: 1689
/* 1685 */    MCD::OPC_Decode, 141, 12, 3, // Opcode: VMULOSW
/* 1689 */    MCD::OPC_FilterValue, 8, 4, 0, // Skip to: 1697
/* 1693 */    MCD::OPC_Decode, 136, 12, 3, // Opcode: VMULEUB
/* 1697 */    MCD::OPC_FilterValue, 9, 4, 0, // Skip to: 1705
/* 1701 */    MCD::OPC_Decode, 137, 12, 3, // Opcode: VMULEUH
/* 1705 */    MCD::OPC_FilterValue, 10, 4, 0, // Skip to: 1713
/* 1709 */    MCD::OPC_Decode, 138, 12, 3, // Opcode: VMULEUW
/* 1713 */    MCD::OPC_FilterValue, 12, 4, 0, // Skip to: 1721
/* 1717 */    MCD::OPC_Decode, 133, 12, 3, // Opcode: VMULESB
/* 1721 */    MCD::OPC_FilterValue, 13, 4, 0, // Skip to: 1729
/* 1725 */    MCD::OPC_Decode, 134, 12, 3, // Opcode: VMULESH
/* 1729 */    MCD::OPC_FilterValue, 14, 4, 0, // Skip to: 1737
/* 1733 */    MCD::OPC_Decode, 135, 12, 3, // Opcode: VMULESW
/* 1737 */    MCD::OPC_FilterValue, 16, 4, 0, // Skip to: 1745
/* 1741 */    MCD::OPC_Decode, 171, 12, 3, // Opcode: VPMSUMB
/* 1745 */    MCD::OPC_FilterValue, 17, 4, 0, // Skip to: 1753
/* 1749 */    MCD::OPC_Decode, 173, 12, 3, // Opcode: VPMSUMH
/* 1753 */    MCD::OPC_FilterValue, 18, 4, 0, // Skip to: 1761
/* 1757 */    MCD::OPC_Decode, 174, 12, 3, // Opcode: VPMSUMW
/* 1761 */    MCD::OPC_FilterValue, 19, 4, 0, // Skip to: 1769
/* 1765 */    MCD::OPC_Decode, 172, 12, 3, // Opcode: VPMSUMD
/* 1769 */    MCD::OPC_FilterValue, 20, 4, 0, // Skip to: 1777
/* 1773 */    MCD::OPC_Decode, 133, 11, 3, // Opcode: VCIPHER
/* 1777 */    MCD::OPC_FilterValue, 21, 4, 0, // Skip to: 1785
/* 1781 */    MCD::OPC_Decode, 147, 12, 3, // Opcode: VNCIPHER
/* 1785 */    MCD::OPC_FilterValue, 23, 10, 0, // Skip to: 1799
/* 1789 */    MCD::OPC_CheckField, 11, 5, 0, 85, 46, // Skip to: 13656
/* 1795 */    MCD::OPC_Decode, 196, 12, 4, // Opcode: VSBOX
/* 1799 */    MCD::OPC_FilterValue, 24, 4, 0, // Skip to: 1807
/* 1803 */    MCD::OPC_Decode, 246, 12, 3, // Opcode: VSUM4UBS
/* 1807 */    MCD::OPC_FilterValue, 25, 4, 0, // Skip to: 1815
/* 1811 */    MCD::OPC_Decode, 245, 12, 3, // Opcode: VSUM4SHS
/* 1815 */    MCD::OPC_FilterValue, 26, 4, 0, // Skip to: 1823
/* 1819 */    MCD::OPC_Decode, 243, 12, 3, // Opcode: VSUM2SWS
/* 1823 */    MCD::OPC_FilterValue, 28, 4, 0, // Skip to: 1831
/* 1827 */    MCD::OPC_Decode, 244, 12, 3, // Opcode: VSUM4SBS
/* 1831 */    MCD::OPC_FilterValue, 30, 45, 46, // Skip to: 13656
/* 1835 */    MCD::OPC_Decode, 247, 12, 3, // Opcode: VSUMSWS
/* 1839 */    MCD::OPC_FilterValue, 9, 27, 0, // Skip to: 1870
/* 1843 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 1846 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 1854
/* 1850 */    MCD::OPC_Decode, 145, 12, 3, // Opcode: VMULUWM
/* 1854 */    MCD::OPC_FilterValue, 20, 4, 0, // Skip to: 1862
/* 1858 */    MCD::OPC_Decode, 134, 11, 3, // Opcode: VCIPHERLAST
/* 1862 */    MCD::OPC_FilterValue, 21, 14, 46, // Skip to: 13656
/* 1866 */    MCD::OPC_Decode, 148, 12, 3, // Opcode: VNCIPHERLAST
/* 1870 */    MCD::OPC_FilterValue, 10, 179, 0, // Skip to: 2053
/* 1874 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 1877 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 1885
/* 1881 */    MCD::OPC_Decode, 235, 10, 3, // Opcode: VADDFP
/* 1885 */    MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 1893
/* 1889 */    MCD::OPC_Decode, 231, 12, 3, // Opcode: VSUBFP
/* 1893 */    MCD::OPC_FilterValue, 4, 10, 0, // Skip to: 1907
/* 1897 */    MCD::OPC_CheckField, 16, 5, 0, 233, 45, // Skip to: 13656
/* 1903 */    MCD::OPC_Decode, 182, 12, 6, // Opcode: VREFP
/* 1907 */    MCD::OPC_FilterValue, 5, 10, 0, // Skip to: 1921
/* 1911 */    MCD::OPC_CheckField, 16, 5, 0, 219, 45, // Skip to: 13656
/* 1917 */    MCD::OPC_Decode, 195, 12, 6, // Opcode: VRSQRTEFP
/* 1921 */    MCD::OPC_FilterValue, 6, 10, 0, // Skip to: 1935
/* 1925 */    MCD::OPC_CheckField, 16, 5, 0, 205, 45, // Skip to: 13656
/* 1931 */    MCD::OPC_Decode, 194, 11, 6, // Opcode: VEXPTEFP
/* 1935 */    MCD::OPC_FilterValue, 7, 10, 0, // Skip to: 1949
/* 1939 */    MCD::OPC_CheckField, 16, 5, 0, 191, 45, // Skip to: 13656
/* 1945 */    MCD::OPC_Decode, 220, 11, 6, // Opcode: VLOGEFP
/* 1949 */    MCD::OPC_FilterValue, 8, 10, 0, // Skip to: 1963
/* 1953 */    MCD::OPC_CheckField, 16, 5, 0, 177, 45, // Skip to: 13656
/* 1959 */    MCD::OPC_Decode, 184, 12, 6, // Opcode: VRFIN
/* 1963 */    MCD::OPC_FilterValue, 9, 10, 0, // Skip to: 1977
/* 1967 */    MCD::OPC_CheckField, 16, 5, 0, 163, 45, // Skip to: 13656
/* 1973 */    MCD::OPC_Decode, 186, 12, 6, // Opcode: VRFIZ
/* 1977 */    MCD::OPC_FilterValue, 10, 10, 0, // Skip to: 1991
/* 1981 */    MCD::OPC_CheckField, 16, 5, 0, 149, 45, // Skip to: 13656
/* 1987 */    MCD::OPC_Decode, 185, 12, 6, // Opcode: VRFIP
/* 1991 */    MCD::OPC_FilterValue, 11, 10, 0, // Skip to: 2005
/* 1995 */    MCD::OPC_CheckField, 16, 5, 0, 135, 45, // Skip to: 13656
/* 2001 */    MCD::OPC_Decode, 183, 12, 6, // Opcode: VRFIM
/* 2005 */    MCD::OPC_FilterValue, 12, 4, 0, // Skip to: 2013
/* 2009 */    MCD::OPC_Decode, 131, 11, 13, // Opcode: VCFUX
/* 2013 */    MCD::OPC_FilterValue, 13, 4, 0, // Skip to: 2021
/* 2017 */    MCD::OPC_Decode, 129, 11, 13, // Opcode: VCFSX
/* 2021 */    MCD::OPC_FilterValue, 14, 4, 0, // Skip to: 2029
/* 2025 */    MCD::OPC_Decode, 186, 11, 13, // Opcode: VCTUXS
/* 2029 */    MCD::OPC_FilterValue, 15, 4, 0, // Skip to: 2037
/* 2033 */    MCD::OPC_Decode, 184, 11, 13, // Opcode: VCTSXS
/* 2037 */    MCD::OPC_FilterValue, 16, 4, 0, // Skip to: 2045
/* 2041 */    MCD::OPC_Decode, 222, 11, 3, // Opcode: VMAXFP
/* 2045 */    MCD::OPC_FilterValue, 17, 87, 45, // Skip to: 13656
/* 2049 */    MCD::OPC_Decode, 233, 11, 3, // Opcode: VMINFP
/* 2053 */    MCD::OPC_FilterValue, 12, 179, 0, // Skip to: 2236
/* 2057 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 2060 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 2068
/* 2064 */    MCD::OPC_Decode, 244, 11, 3, // Opcode: VMRGHB
/* 2068 */    MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 2076
/* 2072 */    MCD::OPC_Decode, 245, 11, 3, // Opcode: VMRGHH
/* 2076 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 2084
/* 2080 */    MCD::OPC_Decode, 246, 11, 3, // Opcode: VMRGHW
/* 2084 */    MCD::OPC_FilterValue, 4, 4, 0, // Skip to: 2092
/* 2088 */    MCD::OPC_Decode, 247, 11, 3, // Opcode: VMRGLB
/* 2092 */    MCD::OPC_FilterValue, 5, 4, 0, // Skip to: 2100
/* 2096 */    MCD::OPC_Decode, 248, 11, 3, // Opcode: VMRGLH
/* 2100 */    MCD::OPC_FilterValue, 6, 4, 0, // Skip to: 2108
/* 2104 */    MCD::OPC_Decode, 249, 11, 3, // Opcode: VMRGLW
/* 2108 */    MCD::OPC_FilterValue, 8, 4, 0, // Skip to: 2116
/* 2112 */    MCD::OPC_Decode, 208, 12, 13, // Opcode: VSPLTB
/* 2116 */    MCD::OPC_FilterValue, 9, 4, 0, // Skip to: 2124
/* 2120 */    MCD::OPC_Decode, 210, 12, 13, // Opcode: VSPLTH
/* 2124 */    MCD::OPC_FilterValue, 10, 4, 0, // Skip to: 2132
/* 2128 */    MCD::OPC_Decode, 215, 12, 13, // Opcode: VSPLTW
/* 2132 */    MCD::OPC_FilterValue, 12, 10, 0, // Skip to: 2146
/* 2136 */    MCD::OPC_CheckField, 11, 5, 0, 250, 44, // Skip to: 13656
/* 2142 */    MCD::OPC_Decode, 212, 12, 14, // Opcode: VSPLTISB
/* 2146 */    MCD::OPC_FilterValue, 13, 10, 0, // Skip to: 2160
/* 2150 */    MCD::OPC_CheckField, 11, 5, 0, 236, 44, // Skip to: 13656
/* 2156 */    MCD::OPC_Decode, 213, 12, 14, // Opcode: VSPLTISH
/* 2160 */    MCD::OPC_FilterValue, 14, 10, 0, // Skip to: 2174
/* 2164 */    MCD::OPC_CheckField, 11, 5, 0, 222, 44, // Skip to: 13656
/* 2170 */    MCD::OPC_Decode, 214, 12, 14, // Opcode: VSPLTISW
/* 2174 */    MCD::OPC_FilterValue, 16, 4, 0, // Skip to: 2182
/* 2178 */    MCD::OPC_Decode, 205, 12, 3, // Opcode: VSLO
/* 2182 */    MCD::OPC_FilterValue, 17, 4, 0, // Skip to: 2190
/* 2186 */    MCD::OPC_Decode, 224, 12, 3, // Opcode: VSRO
/* 2190 */    MCD::OPC_FilterValue, 20, 10, 0, // Skip to: 2204
/* 2194 */    MCD::OPC_CheckField, 16, 5, 0, 192, 44, // Skip to: 13656
/* 2200 */    MCD::OPC_Decode, 215, 11, 6, // Opcode: VGBBD
/* 2204 */    MCD::OPC_FilterValue, 21, 4, 0, // Skip to: 2212
/* 2208 */    MCD::OPC_Decode, 128, 11, 3, // Opcode: VBPERMQ
/* 2212 */    MCD::OPC_FilterValue, 23, 4, 0, // Skip to: 2220
/* 2216 */    MCD::OPC_Decode, 255, 10, 3, // Opcode: VBPERMD
/* 2220 */    MCD::OPC_FilterValue, 26, 4, 0, // Skip to: 2228
/* 2224 */    MCD::OPC_Decode, 250, 11, 3, // Opcode: VMRGOW
/* 2228 */    MCD::OPC_FilterValue, 30, 160, 44, // Skip to: 13656
/* 2232 */    MCD::OPC_Decode, 243, 11, 3, // Opcode: VMRGEW
/* 2236 */    MCD::OPC_FilterValue, 13, 115, 0, // Skip to: 2355
/* 2240 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 2243 */    MCD::OPC_FilterValue, 8, 4, 0, // Skip to: 2251
/* 2247 */    MCD::OPC_Decode, 196, 11, 15, // Opcode: VEXTRACTUB
/* 2251 */    MCD::OPC_FilterValue, 9, 4, 0, // Skip to: 2259
/* 2255 */    MCD::OPC_Decode, 197, 11, 15, // Opcode: VEXTRACTUH
/* 2259 */    MCD::OPC_FilterValue, 10, 4, 0, // Skip to: 2267
/* 2263 */    MCD::OPC_Decode, 198, 11, 15, // Opcode: VEXTRACTUW
/* 2267 */    MCD::OPC_FilterValue, 11, 4, 0, // Skip to: 2275
/* 2271 */    MCD::OPC_Decode, 195, 11, 15, // Opcode: VEXTRACTD
/* 2275 */    MCD::OPC_FilterValue, 12, 4, 0, // Skip to: 2283
/* 2279 */    MCD::OPC_Decode, 216, 11, 15, // Opcode: VINSERTB
/* 2283 */    MCD::OPC_FilterValue, 13, 4, 0, // Skip to: 2291
/* 2287 */    MCD::OPC_Decode, 218, 11, 15, // Opcode: VINSERTH
/* 2291 */    MCD::OPC_FilterValue, 14, 4, 0, // Skip to: 2299
/* 2295 */    MCD::OPC_Decode, 219, 11, 15, // Opcode: VINSERTW
/* 2299 */    MCD::OPC_FilterValue, 15, 4, 0, // Skip to: 2307
/* 2303 */    MCD::OPC_Decode, 217, 11, 15, // Opcode: VINSERTD
/* 2307 */    MCD::OPC_FilterValue, 24, 4, 0, // Skip to: 2315
/* 2311 */    MCD::OPC_Decode, 209, 11, 16, // Opcode: VEXTUBLX
/* 2315 */    MCD::OPC_FilterValue, 25, 4, 0, // Skip to: 2323
/* 2319 */    MCD::OPC_Decode, 211, 11, 16, // Opcode: VEXTUHLX
/* 2323 */    MCD::OPC_FilterValue, 26, 4, 0, // Skip to: 2331
/* 2327 */    MCD::OPC_Decode, 213, 11, 16, // Opcode: VEXTUWLX
/* 2331 */    MCD::OPC_FilterValue, 28, 4, 0, // Skip to: 2339
/* 2335 */    MCD::OPC_Decode, 210, 11, 16, // Opcode: VEXTUBRX
/* 2339 */    MCD::OPC_FilterValue, 29, 4, 0, // Skip to: 2347
/* 2343 */    MCD::OPC_Decode, 212, 11, 16, // Opcode: VEXTUHRX
/* 2347 */    MCD::OPC_FilterValue, 30, 41, 44, // Skip to: 13656
/* 2351 */    MCD::OPC_Decode, 214, 11, 16, // Opcode: VEXTUWRX
/* 2355 */    MCD::OPC_FilterValue, 14, 219, 0, // Skip to: 2578
/* 2359 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 2362 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 2370
/* 2366 */    MCD::OPC_Decode, 167, 12, 3, // Opcode: VPKUHUM
/* 2370 */    MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 2378
/* 2374 */    MCD::OPC_Decode, 169, 12, 3, // Opcode: VPKUWUM
/* 2378 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 2386
/* 2382 */    MCD::OPC_Decode, 168, 12, 3, // Opcode: VPKUHUS
/* 2386 */    MCD::OPC_FilterValue, 3, 4, 0, // Skip to: 2394
/* 2390 */    MCD::OPC_Decode, 170, 12, 3, // Opcode: VPKUWUS
/* 2394 */    MCD::OPC_FilterValue, 4, 4, 0, // Skip to: 2402
/* 2398 */    MCD::OPC_Decode, 162, 12, 3, // Opcode: VPKSHUS
/* 2402 */    MCD::OPC_FilterValue, 5, 4, 0, // Skip to: 2410
/* 2406 */    MCD::OPC_Decode, 164, 12, 3, // Opcode: VPKSWUS
/* 2410 */    MCD::OPC_FilterValue, 6, 4, 0, // Skip to: 2418
/* 2414 */    MCD::OPC_Decode, 161, 12, 3, // Opcode: VPKSHSS
/* 2418 */    MCD::OPC_FilterValue, 7, 4, 0, // Skip to: 2426
/* 2422 */    MCD::OPC_Decode, 163, 12, 3, // Opcode: VPKSWSS
/* 2426 */    MCD::OPC_FilterValue, 8, 10, 0, // Skip to: 2440
/* 2430 */    MCD::OPC_CheckField, 16, 5, 0, 212, 43, // Skip to: 13656
/* 2436 */    MCD::OPC_Decode, 249, 12, 6, // Opcode: VUPKHSB
/* 2440 */    MCD::OPC_FilterValue, 9, 10, 0, // Skip to: 2454
/* 2444 */    MCD::OPC_CheckField, 16, 5, 0, 198, 43, // Skip to: 13656
/* 2450 */    MCD::OPC_Decode, 250, 12, 6, // Opcode: VUPKHSH
/* 2454 */    MCD::OPC_FilterValue, 10, 10, 0, // Skip to: 2468
/* 2458 */    MCD::OPC_CheckField, 16, 5, 0, 184, 43, // Skip to: 13656
/* 2464 */    MCD::OPC_Decode, 253, 12, 6, // Opcode: VUPKLSB
/* 2468 */    MCD::OPC_FilterValue, 11, 10, 0, // Skip to: 2482
/* 2472 */    MCD::OPC_CheckField, 16, 5, 0, 170, 43, // Skip to: 13656
/* 2478 */    MCD::OPC_Decode, 254, 12, 6, // Opcode: VUPKLSH
/* 2482 */    MCD::OPC_FilterValue, 12, 4, 0, // Skip to: 2490
/* 2486 */    MCD::OPC_Decode, 158, 12, 3, // Opcode: VPKPX
/* 2490 */    MCD::OPC_FilterValue, 13, 10, 0, // Skip to: 2504
/* 2494 */    MCD::OPC_CheckField, 16, 5, 0, 148, 43, // Skip to: 13656
/* 2500 */    MCD::OPC_Decode, 248, 12, 6, // Opcode: VUPKHPX
/* 2504 */    MCD::OPC_FilterValue, 15, 10, 0, // Skip to: 2518
/* 2508 */    MCD::OPC_CheckField, 16, 5, 0, 134, 43, // Skip to: 13656
/* 2514 */    MCD::OPC_Decode, 252, 12, 6, // Opcode: VUPKLPX
/* 2518 */    MCD::OPC_FilterValue, 17, 4, 0, // Skip to: 2526
/* 2522 */    MCD::OPC_Decode, 165, 12, 3, // Opcode: VPKUDUM
/* 2526 */    MCD::OPC_FilterValue, 19, 4, 0, // Skip to: 2534
/* 2530 */    MCD::OPC_Decode, 166, 12, 3, // Opcode: VPKUDUS
/* 2534 */    MCD::OPC_FilterValue, 21, 4, 0, // Skip to: 2542
/* 2538 */    MCD::OPC_Decode, 160, 12, 3, // Opcode: VPKSDUS
/* 2542 */    MCD::OPC_FilterValue, 23, 4, 0, // Skip to: 2550
/* 2546 */    MCD::OPC_Decode, 159, 12, 3, // Opcode: VPKSDSS
/* 2550 */    MCD::OPC_FilterValue, 25, 10, 0, // Skip to: 2564
/* 2554 */    MCD::OPC_CheckField, 16, 5, 0, 88, 43, // Skip to: 13656
/* 2560 */    MCD::OPC_Decode, 251, 12, 6, // Opcode: VUPKHSW
/* 2564 */    MCD::OPC_FilterValue, 27, 80, 43, // Skip to: 13656
/* 2568 */    MCD::OPC_CheckField, 16, 5, 0, 74, 43, // Skip to: 13656
/* 2574 */    MCD::OPC_Decode, 255, 12, 6, // Opcode: VUPKLSW
/* 2578 */    MCD::OPC_FilterValue, 32, 4, 0, // Skip to: 2586
/* 2582 */    MCD::OPC_Decode, 231, 11, 17, // Opcode: VMHADDSHS
/* 2586 */    MCD::OPC_FilterValue, 33, 4, 0, // Skip to: 2594
/* 2590 */    MCD::OPC_Decode, 232, 11, 17, // Opcode: VMHRADDSHS
/* 2594 */    MCD::OPC_FilterValue, 34, 4, 0, // Skip to: 2602
/* 2598 */    MCD::OPC_Decode, 242, 11, 17, // Opcode: VMLADDUHM
/* 2602 */    MCD::OPC_FilterValue, 36, 4, 0, // Skip to: 2610
/* 2606 */    MCD::OPC_Decode, 254, 11, 17, // Opcode: VMSUMUBM
/* 2610 */    MCD::OPC_FilterValue, 37, 4, 0, // Skip to: 2618
/* 2614 */    MCD::OPC_Decode, 251, 11, 17, // Opcode: VMSUMMBM
/* 2618 */    MCD::OPC_FilterValue, 38, 4, 0, // Skip to: 2626
/* 2622 */    MCD::OPC_Decode, 255, 11, 17, // Opcode: VMSUMUHM
/* 2626 */    MCD::OPC_FilterValue, 39, 4, 0, // Skip to: 2634
/* 2630 */    MCD::OPC_Decode, 128, 12, 17, // Opcode: VMSUMUHS
/* 2634 */    MCD::OPC_FilterValue, 40, 4, 0, // Skip to: 2642
/* 2638 */    MCD::OPC_Decode, 252, 11, 17, // Opcode: VMSUMSHM
/* 2642 */    MCD::OPC_FilterValue, 41, 4, 0, // Skip to: 2650
/* 2646 */    MCD::OPC_Decode, 253, 11, 17, // Opcode: VMSUMSHS
/* 2650 */    MCD::OPC_FilterValue, 42, 4, 0, // Skip to: 2658
/* 2654 */    MCD::OPC_Decode, 197, 12, 17, // Opcode: VSEL
/* 2658 */    MCD::OPC_FilterValue, 43, 4, 0, // Skip to: 2666
/* 2662 */    MCD::OPC_Decode, 155, 12, 17, // Opcode: VPERM
/* 2666 */    MCD::OPC_FilterValue, 44, 10, 0, // Skip to: 2680
/* 2670 */    MCD::OPC_CheckField, 10, 1, 0, 228, 42, // Skip to: 13656
/* 2676 */    MCD::OPC_Decode, 203, 12, 18, // Opcode: VSLDOI
/* 2680 */    MCD::OPC_FilterValue, 45, 4, 0, // Skip to: 2688
/* 2684 */    MCD::OPC_Decode, 157, 12, 17, // Opcode: VPERMXOR
/* 2688 */    MCD::OPC_FilterValue, 46, 4, 0, // Skip to: 2696
/* 2692 */    MCD::OPC_Decode, 221, 11, 19, // Opcode: VMADDFP
/* 2696 */    MCD::OPC_FilterValue, 47, 4, 0, // Skip to: 2704
/* 2700 */    MCD::OPC_Decode, 151, 12, 19, // Opcode: VNMSUBFP
/* 2704 */    MCD::OPC_FilterValue, 59, 4, 0, // Skip to: 2712
/* 2708 */    MCD::OPC_Decode, 156, 12, 17, // Opcode: VPERMR
/* 2712 */    MCD::OPC_FilterValue, 60, 4, 0, // Skip to: 2720
/* 2716 */    MCD::OPC_Decode, 234, 10, 17, // Opcode: VADDEUQM
/* 2720 */    MCD::OPC_FilterValue, 61, 4, 0, // Skip to: 2728
/* 2724 */    MCD::OPC_Decode, 233, 10, 17, // Opcode: VADDECUQ
/* 2728 */    MCD::OPC_FilterValue, 62, 4, 0, // Skip to: 2736
/* 2732 */    MCD::OPC_Decode, 230, 12, 17, // Opcode: VSUBEUQM
/* 2736 */    MCD::OPC_FilterValue, 63, 164, 42, // Skip to: 13656
/* 2740 */    MCD::OPC_Decode, 229, 12, 17, // Opcode: VSUBECUQ
/* 2744 */    MCD::OPC_FilterValue, 7, 4, 0, // Skip to: 2752
/* 2748 */    MCD::OPC_Decode, 153, 7, 20, // Opcode: MULLI
/* 2752 */    MCD::OPC_FilterValue, 8, 4, 0, // Skip to: 2760
/* 2756 */    MCD::OPC_Decode, 167, 10, 20, // Opcode: SUBFIC
/* 2760 */    MCD::OPC_FilterValue, 10, 19, 0, // Skip to: 2783
/* 2764 */    MCD::OPC_ExtractField, 21, 2,  // Inst{22-21} ...
/* 2767 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 2775
/* 2771 */    MCD::OPC_Decode, 187, 2, 21, // Opcode: CMPLWI
/* 2775 */    MCD::OPC_FilterValue, 1, 125, 42, // Skip to: 13656
/* 2779 */    MCD::OPC_Decode, 185, 2, 22, // Opcode: CMPLDI
/* 2783 */    MCD::OPC_FilterValue, 11, 19, 0, // Skip to: 2806
/* 2787 */    MCD::OPC_ExtractField, 21, 2,  // Inst{22-21} ...
/* 2790 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 2798
/* 2794 */    MCD::OPC_Decode, 191, 2, 23, // Opcode: CMPWI
/* 2798 */    MCD::OPC_FilterValue, 1, 102, 42, // Skip to: 13656
/* 2802 */    MCD::OPC_Decode, 182, 2, 24, // Opcode: CMPDI
/* 2806 */    MCD::OPC_FilterValue, 12, 3, 0, // Skip to: 2813
/* 2810 */    MCD::OPC_Decode, 99, 20, // Opcode: ADDIC
/* 2813 */    MCD::OPC_FilterValue, 13, 3, 0, // Skip to: 2820
/* 2817 */    MCD::OPC_Decode, 101, 20, // Opcode: ADDICo
/* 2820 */    MCD::OPC_FilterValue, 14, 13, 0, // Skip to: 2837
/* 2824 */    MCD::OPC_CheckField, 16, 5, 0, 4, 0, // Skip to: 2834
/* 2830 */    MCD::OPC_Decode, 157, 6, 25, // Opcode: LI
/* 2834 */    MCD::OPC_Decode, 97, 26, // Opcode: ADDI
/* 2837 */    MCD::OPC_FilterValue, 15, 13, 0, // Skip to: 2854
/* 2841 */    MCD::OPC_CheckField, 16, 5, 0, 4, 0, // Skip to: 2851
/* 2847 */    MCD::OPC_Decode, 159, 6, 25, // Opcode: LIS
/* 2851 */    MCD::OPC_Decode, 102, 26, // Opcode: ADDIS
/* 2854 */    MCD::OPC_FilterValue, 16, 7, 1, // Skip to: 3121
/* 2858 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 2861 */    MCD::OPC_FilterValue, 0, 61, 0, // Skip to: 2926
/* 2865 */    MCD::OPC_ExtractField, 16, 10,  // Inst{25-16} ...
/* 2868 */    MCD::OPC_FilterValue, 128, 4, 4, 0, // Skip to: 2877
/* 2873 */    MCD::OPC_Decode, 243, 1, 27, // Opcode: BDNZ
/* 2877 */    MCD::OPC_FilterValue, 192, 4, 4, 0, // Skip to: 2886
/* 2882 */    MCD::OPC_Decode, 135, 2, 27, // Opcode: BDZ
/* 2886 */    MCD::OPC_FilterValue, 128, 6, 4, 0, // Skip to: 2895
/* 2891 */    MCD::OPC_Decode, 133, 2, 27, // Opcode: BDNZm
/* 2895 */    MCD::OPC_FilterValue, 160, 6, 4, 0, // Skip to: 2904
/* 2900 */    MCD::OPC_Decode, 134, 2, 27, // Opcode: BDNZp
/* 2904 */    MCD::OPC_FilterValue, 192, 6, 4, 0, // Skip to: 2913
/* 2909 */    MCD::OPC_Decode, 153, 2, 27, // Opcode: BDZm
/* 2913 */    MCD::OPC_FilterValue, 224, 6, 4, 0, // Skip to: 2922
/* 2918 */    MCD::OPC_Decode, 154, 2, 27, // Opcode: BDZp
/* 2922 */    MCD::OPC_Decode, 137, 15, 28, // Opcode: gBC
/* 2926 */    MCD::OPC_FilterValue, 1, 61, 0, // Skip to: 2991
/* 2930 */    MCD::OPC_ExtractField, 16, 10,  // Inst{25-16} ...
/* 2933 */    MCD::OPC_FilterValue, 128, 4, 4, 0, // Skip to: 2942
/* 2938 */    MCD::OPC_Decode, 248, 1, 27, // Opcode: BDNZL
/* 2942 */    MCD::OPC_FilterValue, 192, 4, 4, 0, // Skip to: 2951
/* 2947 */    MCD::OPC_Decode, 140, 2, 27, // Opcode: BDZL
/* 2951 */    MCD::OPC_FilterValue, 128, 6, 4, 0, // Skip to: 2960
/* 2956 */    MCD::OPC_Decode, 131, 2, 27, // Opcode: BDNZLm
/* 2960 */    MCD::OPC_FilterValue, 160, 6, 4, 0, // Skip to: 2969
/* 2965 */    MCD::OPC_Decode, 132, 2, 27, // Opcode: BDNZLp
/* 2969 */    MCD::OPC_FilterValue, 192, 6, 4, 0, // Skip to: 2978
/* 2974 */    MCD::OPC_Decode, 151, 2, 27, // Opcode: BDZLm
/* 2978 */    MCD::OPC_FilterValue, 224, 6, 4, 0, // Skip to: 2987
/* 2983 */    MCD::OPC_Decode, 152, 2, 27, // Opcode: BDZLp
/* 2987 */    MCD::OPC_Decode, 142, 15, 28, // Opcode: gBCL
/* 2991 */    MCD::OPC_FilterValue, 2, 61, 0, // Skip to: 3056
/* 2995 */    MCD::OPC_ExtractField, 16, 10,  // Inst{25-16} ...
/* 2998 */    MCD::OPC_FilterValue, 128, 4, 4, 0, // Skip to: 3007
/* 3003 */    MCD::OPC_Decode, 245, 1, 27, // Opcode: BDNZA
/* 3007 */    MCD::OPC_FilterValue, 192, 4, 4, 0, // Skip to: 3016
/* 3012 */    MCD::OPC_Decode, 137, 2, 27, // Opcode: BDZA
/* 3016 */    MCD::OPC_FilterValue, 128, 6, 4, 0, // Skip to: 3025
/* 3021 */    MCD::OPC_Decode, 246, 1, 27, // Opcode: BDNZAm
/* 3025 */    MCD::OPC_FilterValue, 160, 6, 4, 0, // Skip to: 3034
/* 3030 */    MCD::OPC_Decode, 247, 1, 27, // Opcode: BDNZAp
/* 3034 */    MCD::OPC_FilterValue, 192, 6, 4, 0, // Skip to: 3043
/* 3039 */    MCD::OPC_Decode, 138, 2, 27, // Opcode: BDZAm
/* 3043 */    MCD::OPC_FilterValue, 224, 6, 4, 0, // Skip to: 3052
/* 3048 */    MCD::OPC_Decode, 139, 2, 27, // Opcode: BDZAp
/* 3052 */    MCD::OPC_Decode, 138, 15, 28, // Opcode: gBCA
/* 3056 */    MCD::OPC_FilterValue, 3, 100, 41, // Skip to: 13656
/* 3060 */    MCD::OPC_ExtractField, 16, 10,  // Inst{25-16} ...
/* 3063 */    MCD::OPC_FilterValue, 128, 4, 4, 0, // Skip to: 3072
/* 3068 */    MCD::OPC_Decode, 249, 1, 27, // Opcode: BDNZLA
/* 3072 */    MCD::OPC_FilterValue, 192, 4, 4, 0, // Skip to: 3081
/* 3077 */    MCD::OPC_Decode, 141, 2, 27, // Opcode: BDZLA
/* 3081 */    MCD::OPC_FilterValue, 128, 6, 4, 0, // Skip to: 3090
/* 3086 */    MCD::OPC_Decode, 250, 1, 27, // Opcode: BDNZLAm
/* 3090 */    MCD::OPC_FilterValue, 160, 6, 4, 0, // Skip to: 3099
/* 3095 */    MCD::OPC_Decode, 251, 1, 27, // Opcode: BDNZLAp
/* 3099 */    MCD::OPC_FilterValue, 192, 6, 4, 0, // Skip to: 3108
/* 3104 */    MCD::OPC_Decode, 142, 2, 27, // Opcode: BDZLAm
/* 3108 */    MCD::OPC_FilterValue, 224, 6, 4, 0, // Skip to: 3117
/* 3113 */    MCD::OPC_Decode, 143, 2, 27, // Opcode: BDZLAp
/* 3117 */    MCD::OPC_Decode, 143, 15, 28, // Opcode: gBCLA
/* 3121 */    MCD::OPC_FilterValue, 17, 10, 0, // Skip to: 3135
/* 3125 */    MCD::OPC_CheckField, 1, 1, 1, 29, 41, // Skip to: 13656
/* 3131 */    MCD::OPC_Decode, 148, 9, 29, // Opcode: SC
/* 3135 */    MCD::OPC_FilterValue, 18, 35, 0, // Skip to: 3174
/* 3139 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 3142 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 3150
/* 3146 */    MCD::OPC_Decode, 196, 1, 30, // Opcode: B
/* 3150 */    MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 3158
/* 3154 */    MCD::OPC_Decode, 155, 2, 30, // Opcode: BL
/* 3158 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 3166
/* 3162 */    MCD::OPC_Decode, 197, 1, 30, // Opcode: BA
/* 3166 */    MCD::OPC_FilterValue, 3, 246, 40, // Skip to: 13656
/* 3170 */    MCD::OPC_Decode, 161, 2, 30, // Opcode: BLA
/* 3174 */    MCD::OPC_FilterValue, 19, 39, 2, // Skip to: 3729
/* 3178 */    MCD::OPC_ExtractField, 0, 11,  // Inst{10-0} ...
/* 3181 */    MCD::OPC_FilterValue, 0, 16, 0, // Skip to: 3201
/* 3185 */    MCD::OPC_CheckField, 21, 2, 0, 225, 40, // Skip to: 13656
/* 3191 */    MCD::OPC_CheckField, 11, 7, 0, 219, 40, // Skip to: 13656
/* 3197 */    MCD::OPC_Decode, 209, 6, 31, // Opcode: MCRF
/* 3201 */    MCD::OPC_FilterValue, 32, 119, 0, // Skip to: 3324
/* 3205 */    MCD::OPC_ExtractField, 13, 3,  // Inst{15-13} ...
/* 3208 */    MCD::OPC_FilterValue, 0, 204, 40, // Skip to: 13656
/* 3212 */    MCD::OPC_ExtractField, 16, 10,  // Inst{25-16} ...
/* 3215 */    MCD::OPC_FilterValue, 128, 4, 10, 0, // Skip to: 3230
/* 3220 */    MCD::OPC_CheckField, 11, 2, 0, 94, 0, // Skip to: 3320
/* 3226 */    MCD::OPC_Decode, 252, 1, 0, // Opcode: BDNZLR
/* 3230 */    MCD::OPC_FilterValue, 192, 4, 10, 0, // Skip to: 3245
/* 3235 */    MCD::OPC_CheckField, 11, 2, 0, 79, 0, // Skip to: 3320
/* 3241 */    MCD::OPC_Decode, 144, 2, 0, // Opcode: BDZLR
/* 3245 */    MCD::OPC_FilterValue, 128, 5, 10, 0, // Skip to: 3260
/* 3250 */    MCD::OPC_CheckField, 11, 2, 0, 64, 0, // Skip to: 3320
/* 3256 */    MCD::OPC_Decode, 164, 2, 0, // Opcode: BLR
/* 3260 */    MCD::OPC_FilterValue, 128, 6, 10, 0, // Skip to: 3275
/* 3265 */    MCD::OPC_CheckField, 11, 2, 0, 49, 0, // Skip to: 3320
/* 3271 */    MCD::OPC_Decode, 129, 2, 0, // Opcode: BDNZLRm
/* 3275 */    MCD::OPC_FilterValue, 160, 6, 10, 0, // Skip to: 3290
/* 3280 */    MCD::OPC_CheckField, 11, 2, 0, 34, 0, // Skip to: 3320
/* 3286 */    MCD::OPC_Decode, 130, 2, 0, // Opcode: BDNZLRp
/* 3290 */    MCD::OPC_FilterValue, 192, 6, 10, 0, // Skip to: 3305
/* 3295 */    MCD::OPC_CheckField, 11, 2, 0, 19, 0, // Skip to: 3320
/* 3301 */    MCD::OPC_Decode, 149, 2, 0, // Opcode: BDZLRm
/* 3305 */    MCD::OPC_FilterValue, 224, 6, 10, 0, // Skip to: 3320
/* 3310 */    MCD::OPC_CheckField, 11, 2, 0, 4, 0, // Skip to: 3320
/* 3316 */    MCD::OPC_Decode, 150, 2, 0, // Opcode: BDZLRp
/* 3320 */    MCD::OPC_Decode, 145, 15, 32, // Opcode: gBCLR
/* 3324 */    MCD::OPC_FilterValue, 33, 119, 0, // Skip to: 3447
/* 3328 */    MCD::OPC_ExtractField, 13, 3,  // Inst{15-13} ...
/* 3331 */    MCD::OPC_FilterValue, 0, 81, 40, // Skip to: 13656
/* 3335 */    MCD::OPC_ExtractField, 16, 10,  // Inst{25-16} ...
/* 3338 */    MCD::OPC_FilterValue, 128, 4, 10, 0, // Skip to: 3353
/* 3343 */    MCD::OPC_CheckField, 11, 2, 0, 94, 0, // Skip to: 3443
/* 3349 */    MCD::OPC_Decode, 254, 1, 0, // Opcode: BDNZLRL
/* 3353 */    MCD::OPC_FilterValue, 192, 4, 10, 0, // Skip to: 3368
/* 3358 */    MCD::OPC_CheckField, 11, 2, 0, 79, 0, // Skip to: 3443
/* 3364 */    MCD::OPC_Decode, 146, 2, 0, // Opcode: BDZLRL
/* 3368 */    MCD::OPC_FilterValue, 128, 5, 10, 0, // Skip to: 3383
/* 3373 */    MCD::OPC_CheckField, 11, 2, 0, 64, 0, // Skip to: 3443
/* 3379 */    MCD::OPC_Decode, 166, 2, 0, // Opcode: BLRL
/* 3383 */    MCD::OPC_FilterValue, 128, 6, 10, 0, // Skip to: 3398
/* 3388 */    MCD::OPC_CheckField, 11, 2, 0, 49, 0, // Skip to: 3443
/* 3394 */    MCD::OPC_Decode, 255, 1, 0, // Opcode: BDNZLRLm
/* 3398 */    MCD::OPC_FilterValue, 160, 6, 10, 0, // Skip to: 3413
/* 3403 */    MCD::OPC_CheckField, 11, 2, 0, 34, 0, // Skip to: 3443
/* 3409 */    MCD::OPC_Decode, 128, 2, 0, // Opcode: BDNZLRLp
/* 3413 */    MCD::OPC_FilterValue, 192, 6, 10, 0, // Skip to: 3428
/* 3418 */    MCD::OPC_CheckField, 11, 2, 0, 19, 0, // Skip to: 3443
/* 3424 */    MCD::OPC_Decode, 147, 2, 0, // Opcode: BDZLRLm
/* 3428 */    MCD::OPC_FilterValue, 224, 6, 10, 0, // Skip to: 3443
/* 3433 */    MCD::OPC_CheckField, 11, 2, 0, 4, 0, // Skip to: 3443
/* 3439 */    MCD::OPC_Decode, 148, 2, 0, // Opcode: BDZLRLp
/* 3443 */    MCD::OPC_Decode, 146, 15, 32, // Opcode: gBCLRL
/* 3447 */    MCD::OPC_FilterValue, 36, 10, 0, // Skip to: 3461
/* 3451 */    MCD::OPC_CheckField, 11, 15, 0, 215, 39, // Skip to: 13656
/* 3457 */    MCD::OPC_Decode, 238, 8, 0, // Opcode: RFID
/* 3461 */    MCD::OPC_FilterValue, 66, 4, 0, // Skip to: 3469
/* 3465 */    MCD::OPC_Decode, 221, 2, 33, // Opcode: CRNOR
/* 3469 */    MCD::OPC_FilterValue, 76, 10, 0, // Skip to: 3483
/* 3473 */    MCD::OPC_CheckField, 11, 15, 0, 193, 39, // Skip to: 13656
/* 3479 */    MCD::OPC_Decode, 239, 8, 0, // Opcode: RFMCI
/* 3483 */    MCD::OPC_FilterValue, 78, 10, 0, // Skip to: 3497
/* 3487 */    MCD::OPC_CheckField, 11, 15, 0, 179, 39, // Skip to: 13656
/* 3493 */    MCD::OPC_Decode, 235, 8, 0, // Opcode: RFDI
/* 3497 */    MCD::OPC_FilterValue, 100, 10, 0, // Skip to: 3511
/* 3501 */    MCD::OPC_CheckField, 11, 15, 0, 165, 39, // Skip to: 13656
/* 3507 */    MCD::OPC_Decode, 237, 8, 0, // Opcode: RFI
/* 3511 */    MCD::OPC_FilterValue, 102, 10, 0, // Skip to: 3525
/* 3515 */    MCD::OPC_CheckField, 11, 15, 0, 151, 39, // Skip to: 13656
/* 3521 */    MCD::OPC_Decode, 234, 8, 0, // Opcode: RFCI
/* 3525 */    MCD::OPC_FilterValue, 130, 2, 4, 0, // Skip to: 3534
/* 3530 */    MCD::OPC_Decode, 218, 2, 33, // Opcode: CRANDC
/* 3534 */    MCD::OPC_FilterValue, 164, 2, 10, 0, // Skip to: 3549
/* 3539 */    MCD::OPC_CheckField, 12, 14, 0, 127, 39, // Skip to: 13656
/* 3545 */    MCD::OPC_Decode, 236, 8, 34, // Opcode: RFEBB
/* 3549 */    MCD::OPC_FilterValue, 172, 2, 10, 0, // Skip to: 3564
/* 3554 */    MCD::OPC_CheckField, 11, 15, 0, 112, 39, // Skip to: 13656
/* 3560 */    MCD::OPC_Decode, 223, 5, 0, // Opcode: ISYNC
/* 3564 */    MCD::OPC_FilterValue, 130, 3, 4, 0, // Skip to: 3573
/* 3569 */    MCD::OPC_Decode, 226, 2, 33, // Opcode: CRXOR
/* 3573 */    MCD::OPC_FilterValue, 194, 3, 4, 0, // Skip to: 3582
/* 3578 */    MCD::OPC_Decode, 220, 2, 33, // Opcode: CRNAND
/* 3582 */    MCD::OPC_FilterValue, 130, 4, 4, 0, // Skip to: 3591
/* 3587 */    MCD::OPC_Decode, 217, 2, 33, // Opcode: CRAND
/* 3591 */    MCD::OPC_FilterValue, 164, 4, 10, 0, // Skip to: 3606
/* 3596 */    MCD::OPC_CheckField, 11, 15, 0, 70, 39, // Skip to: 13656
/* 3602 */    MCD::OPC_Decode, 211, 5, 0, // Opcode: HRFID
/* 3606 */    MCD::OPC_FilterValue, 194, 4, 4, 0, // Skip to: 3615
/* 3611 */    MCD::OPC_Decode, 219, 2, 33, // Opcode: CREQV
/* 3615 */    MCD::OPC_FilterValue, 228, 5, 10, 0, // Skip to: 3630
/* 3620 */    MCD::OPC_CheckField, 11, 15, 0, 46, 39, // Skip to: 13656
/* 3626 */    MCD::OPC_Decode, 248, 9, 0, // Opcode: STOP
/* 3630 */    MCD::OPC_FilterValue, 194, 6, 4, 0, // Skip to: 3639
/* 3635 */    MCD::OPC_Decode, 223, 2, 33, // Opcode: CRORC
/* 3639 */    MCD::OPC_FilterValue, 228, 6, 10, 0, // Skip to: 3654
/* 3644 */    MCD::OPC_CheckField, 11, 15, 0, 22, 39, // Skip to: 13656
/* 3650 */    MCD::OPC_Decode, 164, 7, 0, // Opcode: NAP
/* 3654 */    MCD::OPC_FilterValue, 130, 7, 4, 0, // Skip to: 3663
/* 3659 */    MCD::OPC_Decode, 222, 2, 33, // Opcode: CROR
/* 3663 */    MCD::OPC_FilterValue, 160, 8, 28, 0, // Skip to: 3696
/* 3668 */    MCD::OPC_ExtractField, 13, 3,  // Inst{15-13} ...
/* 3671 */    MCD::OPC_FilterValue, 0, 253, 38, // Skip to: 13656
/* 3675 */    MCD::OPC_CheckField, 16, 10, 128, 5, 10, 0, // Skip to: 3692
/* 3682 */    MCD::OPC_CheckField, 11, 2, 0, 4, 0, // Skip to: 3692
/* 3688 */    MCD::OPC_Decode, 237, 1, 0, // Opcode: BCTR
/* 3692 */    MCD::OPC_Decode, 140, 15, 32, // Opcode: gBCCTR
/* 3696 */    MCD::OPC_FilterValue, 161, 8, 227, 38, // Skip to: 13656
/* 3701 */    MCD::OPC_ExtractField, 13, 3,  // Inst{15-13} ...
/* 3704 */    MCD::OPC_FilterValue, 0, 220, 38, // Skip to: 13656
/* 3708 */    MCD::OPC_CheckField, 16, 10, 128, 5, 10, 0, // Skip to: 3725
/* 3715 */    MCD::OPC_CheckField, 11, 2, 0, 4, 0, // Skip to: 3725
/* 3721 */    MCD::OPC_Decode, 239, 1, 0, // Opcode: BCTRL
/* 3725 */    MCD::OPC_Decode, 141, 15, 32, // Opcode: gBCCTRL
/* 3729 */    MCD::OPC_FilterValue, 20, 19, 0, // Skip to: 3752
/* 3733 */    MCD::OPC_ExtractField, 0, 1,  // Inst{0} ...
/* 3736 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 3744
/* 3740 */    MCD::OPC_Decode, 253, 8, 35, // Opcode: RLWIMI
/* 3744 */    MCD::OPC_FilterValue, 1, 180, 38, // Skip to: 13656
/* 3748 */    MCD::OPC_Decode, 129, 9, 35, // Opcode: RLWIMIo
/* 3752 */    MCD::OPC_FilterValue, 21, 19, 0, // Skip to: 3775
/* 3756 */    MCD::OPC_ExtractField, 0, 1,  // Inst{0} ...
/* 3759 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 3767
/* 3763 */    MCD::OPC_Decode, 131, 9, 36, // Opcode: RLWINM
/* 3767 */    MCD::OPC_FilterValue, 1, 157, 38, // Skip to: 13656
/* 3771 */    MCD::OPC_Decode, 135, 9, 36, // Opcode: RLWINMo
/* 3775 */    MCD::OPC_FilterValue, 23, 19, 0, // Skip to: 3798
/* 3779 */    MCD::OPC_ExtractField, 0, 1,  // Inst{0} ...
/* 3782 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 3790
/* 3786 */    MCD::OPC_Decode, 137, 9, 37, // Opcode: RLWNM
/* 3790 */    MCD::OPC_FilterValue, 1, 134, 38, // Skip to: 13656
/* 3794 */    MCD::OPC_Decode, 141, 9, 37, // Opcode: RLWNMo
/* 3798 */    MCD::OPC_FilterValue, 24, 14, 0, // Skip to: 3816
/* 3802 */    MCD::OPC_CheckField, 0, 26, 0, 4, 0, // Skip to: 3812
/* 3808 */    MCD::OPC_Decode, 169, 7, 0, // Opcode: NOP
/* 3812 */    MCD::OPC_Decode, 183, 7, 38, // Opcode: ORI
/* 3816 */    MCD::OPC_FilterValue, 25, 4, 0, // Skip to: 3824
/* 3820 */    MCD::OPC_Decode, 185, 7, 38, // Opcode: ORIS
/* 3824 */    MCD::OPC_FilterValue, 26, 4, 0, // Skip to: 3832
/* 3828 */    MCD::OPC_Decode, 141, 13, 38, // Opcode: XORI
/* 3832 */    MCD::OPC_FilterValue, 27, 4, 0, // Skip to: 3840
/* 3836 */    MCD::OPC_Decode, 143, 13, 38, // Opcode: XORIS
/* 3840 */    MCD::OPC_FilterValue, 28, 4, 0, // Skip to: 3848
/* 3844 */    MCD::OPC_Decode, 140, 1, 38, // Opcode: ANDIo
/* 3848 */    MCD::OPC_FilterValue, 29, 4, 0, // Skip to: 3856
/* 3852 */    MCD::OPC_Decode, 138, 1, 38, // Opcode: ANDISo
/* 3856 */    MCD::OPC_FilterValue, 30, 134, 0, // Skip to: 3994
/* 3860 */    MCD::OPC_ExtractField, 2, 3,  // Inst{4-2} ...
/* 3863 */    MCD::OPC_FilterValue, 0, 19, 0, // Skip to: 3886
/* 3867 */    MCD::OPC_ExtractField, 0, 1,  // Inst{0} ...
/* 3870 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 3878
/* 3874 */    MCD::OPC_Decode, 245, 8, 39, // Opcode: RLDICL
/* 3878 */    MCD::OPC_FilterValue, 1, 46, 38, // Skip to: 13656
/* 3882 */    MCD::OPC_Decode, 247, 8, 39, // Opcode: RLDICLo
/* 3886 */    MCD::OPC_FilterValue, 1, 19, 0, // Skip to: 3909
/* 3890 */    MCD::OPC_ExtractField, 0, 1,  // Inst{0} ...
/* 3893 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 3901
/* 3897 */    MCD::OPC_Decode, 248, 8, 39, // Opcode: RLDICR
/* 3901 */    MCD::OPC_FilterValue, 1, 23, 38, // Skip to: 13656
/* 3905 */    MCD::OPC_Decode, 249, 8, 39, // Opcode: RLDICRo
/* 3909 */    MCD::OPC_FilterValue, 2, 19, 0, // Skip to: 3932
/* 3913 */    MCD::OPC_ExtractField, 0, 1,  // Inst{0} ...
/* 3916 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 3924
/* 3920 */    MCD::OPC_Decode, 244, 8, 39, // Opcode: RLDIC
/* 3924 */    MCD::OPC_FilterValue, 1, 0, 38, // Skip to: 13656
/* 3928 */    MCD::OPC_Decode, 250, 8, 39, // Opcode: RLDICo
/* 3932 */    MCD::OPC_FilterValue, 3, 19, 0, // Skip to: 3955
/* 3936 */    MCD::OPC_ExtractField, 0, 1,  // Inst{0} ...
/* 3939 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 3947
/* 3943 */    MCD::OPC_Decode, 251, 8, 40, // Opcode: RLDIMI
/* 3947 */    MCD::OPC_FilterValue, 1, 233, 37, // Skip to: 13656
/* 3951 */    MCD::OPC_Decode, 252, 8, 40, // Opcode: RLDIMIo
/* 3955 */    MCD::OPC_FilterValue, 4, 225, 37, // Skip to: 13656
/* 3959 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 3962 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 3970
/* 3966 */    MCD::OPC_Decode, 240, 8, 41, // Opcode: RLDCL
/* 3970 */    MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 3978
/* 3974 */    MCD::OPC_Decode, 241, 8, 41, // Opcode: RLDCLo
/* 3978 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 3986
/* 3982 */    MCD::OPC_Decode, 242, 8, 41, // Opcode: RLDCR
/* 3986 */    MCD::OPC_FilterValue, 3, 194, 37, // Skip to: 13656
/* 3990 */    MCD::OPC_Decode, 243, 8, 41, // Opcode: RLDCRo
/* 3994 */    MCD::OPC_FilterValue, 31, 237, 16, // Skip to: 8331
/* 3998 */    MCD::OPC_ExtractField, 2, 4,  // Inst{5-2} ...
/* 4001 */    MCD::OPC_FilterValue, 0, 133, 0, // Skip to: 4138
/* 4005 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 4008 */    MCD::OPC_FilterValue, 0, 31, 0, // Skip to: 4043
/* 4012 */    MCD::OPC_ExtractField, 21, 2,  // Inst{22-21} ...
/* 4015 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 4029
/* 4019 */    MCD::OPC_CheckField, 0, 2, 0, 159, 37, // Skip to: 13656
/* 4025 */    MCD::OPC_Decode, 190, 2, 42, // Opcode: CMPW
/* 4029 */    MCD::OPC_FilterValue, 1, 151, 37, // Skip to: 13656
/* 4033 */    MCD::OPC_CheckField, 0, 2, 0, 145, 37, // Skip to: 13656
/* 4039 */    MCD::OPC_Decode, 181, 2, 43, // Opcode: CMPD
/* 4043 */    MCD::OPC_FilterValue, 1, 31, 0, // Skip to: 4078
/* 4047 */    MCD::OPC_ExtractField, 21, 2,  // Inst{22-21} ...
/* 4050 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 4064
/* 4054 */    MCD::OPC_CheckField, 0, 2, 0, 124, 37, // Skip to: 13656
/* 4060 */    MCD::OPC_Decode, 186, 2, 42, // Opcode: CMPLW
/* 4064 */    MCD::OPC_FilterValue, 1, 116, 37, // Skip to: 13656
/* 4068 */    MCD::OPC_CheckField, 0, 2, 0, 110, 37, // Skip to: 13656
/* 4074 */    MCD::OPC_Decode, 184, 2, 43, // Opcode: CMPLD
/* 4078 */    MCD::OPC_FilterValue, 6, 16, 0, // Skip to: 4098
/* 4082 */    MCD::OPC_CheckField, 22, 1, 0, 96, 37, // Skip to: 13656
/* 4088 */    MCD::OPC_CheckField, 0, 2, 0, 90, 37, // Skip to: 13656
/* 4094 */    MCD::OPC_Decode, 188, 2, 44, // Opcode: CMPRB
/* 4098 */    MCD::OPC_FilterValue, 7, 16, 0, // Skip to: 4118
/* 4102 */    MCD::OPC_CheckField, 21, 2, 0, 76, 37, // Skip to: 13656
/* 4108 */    MCD::OPC_CheckField, 0, 2, 0, 70, 37, // Skip to: 13656
/* 4114 */    MCD::OPC_Decode, 183, 2, 45, // Opcode: CMPEQB
/* 4118 */    MCD::OPC_FilterValue, 18, 62, 37, // Skip to: 13656
/* 4122 */    MCD::OPC_CheckField, 11, 12, 0, 56, 37, // Skip to: 13656
/* 4128 */    MCD::OPC_CheckField, 0, 2, 0, 50, 37, // Skip to: 13656
/* 4134 */    MCD::OPC_Decode, 211, 6, 46, // Opcode: MCRXRX
/* 4138 */    MCD::OPC_FilterValue, 1, 65, 0, // Skip to: 4207
/* 4142 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 4145 */    MCD::OPC_FilterValue, 4, 16, 0, // Skip to: 4165
/* 4149 */    MCD::OPC_CheckField, 16, 1, 0, 29, 37, // Skip to: 13656
/* 4155 */    MCD::OPC_CheckField, 1, 1, 1, 23, 37, // Skip to: 13656
/* 4161 */    MCD::OPC_Decode, 136, 13, 47, // Opcode: WRTEE
/* 4165 */    MCD::OPC_FilterValue, 5, 10, 0, // Skip to: 4179
/* 4169 */    MCD::OPC_CheckField, 1, 1, 1, 9, 37, // Skip to: 13656
/* 4175 */    MCD::OPC_Decode, 137, 13, 48, // Opcode: WRTEEI
/* 4179 */    MCD::OPC_FilterValue, 10, 10, 0, // Skip to: 4193
/* 4183 */    MCD::OPC_CheckField, 0, 2, 2, 251, 36, // Skip to: 13656
/* 4189 */    MCD::OPC_Decode, 217, 6, 49, // Opcode: MFDCR
/* 4193 */    MCD::OPC_FilterValue, 14, 243, 36, // Skip to: 13656
/* 4197 */    MCD::OPC_CheckField, 0, 2, 2, 237, 36, // Skip to: 13656
/* 4203 */    MCD::OPC_Decode, 245, 6, 49, // Opcode: MTDCR
/* 4207 */    MCD::OPC_FilterValue, 2, 44, 0, // Skip to: 4255
/* 4211 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 4214 */    MCD::OPC_FilterValue, 0, 23, 0, // Skip to: 4241
/* 4218 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 4221 */    MCD::OPC_FilterValue, 0, 215, 36, // Skip to: 13656
/* 4225 */    MCD::OPC_CheckField, 11, 15, 128, 248, 1, 4, 0, // Skip to: 4237
/* 4233 */    MCD::OPC_Decode, 220, 10, 0, // Opcode: TRAP
/* 4237 */    MCD::OPC_Decode, 224, 10, 50, // Opcode: TW
/* 4241 */    MCD::OPC_FilterValue, 2, 195, 36, // Skip to: 13656
/* 4245 */    MCD::OPC_CheckField, 0, 2, 0, 189, 36, // Skip to: 13656
/* 4251 */    MCD::OPC_Decode, 203, 10, 51, // Opcode: TD
/* 4255 */    MCD::OPC_FilterValue, 3, 76, 1, // Skip to: 4591
/* 4259 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 4262 */    MCD::OPC_FilterValue, 0, 19, 0, // Skip to: 4285
/* 4266 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 4269 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 4277
/* 4273 */    MCD::OPC_Decode, 166, 6, 52, // Opcode: LVSL
/* 4277 */    MCD::OPC_FilterValue, 2, 159, 36, // Skip to: 13656
/* 4281 */    MCD::OPC_Decode, 163, 6, 52, // Opcode: LVEBX
/* 4285 */    MCD::OPC_FilterValue, 1, 19, 0, // Skip to: 4308
/* 4289 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 4292 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 4300
/* 4296 */    MCD::OPC_Decode, 167, 6, 52, // Opcode: LVSR
/* 4300 */    MCD::OPC_FilterValue, 2, 136, 36, // Skip to: 13656
/* 4304 */    MCD::OPC_Decode, 164, 6, 52, // Opcode: LVEHX
/* 4308 */    MCD::OPC_FilterValue, 2, 10, 0, // Skip to: 4322
/* 4312 */    MCD::OPC_CheckField, 0, 2, 2, 122, 36, // Skip to: 13656
/* 4318 */    MCD::OPC_Decode, 165, 6, 52, // Opcode: LVEWX
/* 4322 */    MCD::OPC_FilterValue, 3, 10, 0, // Skip to: 4336
/* 4326 */    MCD::OPC_CheckField, 0, 2, 2, 108, 36, // Skip to: 13656
/* 4332 */    MCD::OPC_Decode, 168, 6, 52, // Opcode: LVX
/* 4336 */    MCD::OPC_FilterValue, 4, 10, 0, // Skip to: 4350
/* 4340 */    MCD::OPC_CheckField, 0, 2, 2, 94, 36, // Skip to: 13656
/* 4346 */    MCD::OPC_Decode, 250, 9, 52, // Opcode: STVEBX
/* 4350 */    MCD::OPC_FilterValue, 5, 10, 0, // Skip to: 4364
/* 4354 */    MCD::OPC_CheckField, 0, 2, 2, 80, 36, // Skip to: 13656
/* 4360 */    MCD::OPC_Decode, 251, 9, 52, // Opcode: STVEHX
/* 4364 */    MCD::OPC_FilterValue, 6, 10, 0, // Skip to: 4378
/* 4368 */    MCD::OPC_CheckField, 0, 2, 2, 66, 36, // Skip to: 13656
/* 4374 */    MCD::OPC_Decode, 252, 9, 52, // Opcode: STVEWX
/* 4378 */    MCD::OPC_FilterValue, 7, 10, 0, // Skip to: 4392
/* 4382 */    MCD::OPC_CheckField, 0, 2, 2, 52, 36, // Skip to: 13656
/* 4388 */    MCD::OPC_Decode, 253, 9, 52, // Opcode: STVX
/* 4392 */    MCD::OPC_FilterValue, 11, 10, 0, // Skip to: 4406
/* 4396 */    MCD::OPC_CheckField, 0, 2, 2, 38, 36, // Skip to: 13656
/* 4402 */    MCD::OPC_Decode, 169, 6, 52, // Opcode: LVXL
/* 4406 */    MCD::OPC_FilterValue, 14, 16, 0, // Skip to: 4426
/* 4410 */    MCD::OPC_CheckField, 21, 5, 0, 24, 36, // Skip to: 13656
/* 4416 */    MCD::OPC_CheckField, 0, 2, 0, 18, 36, // Skip to: 13656
/* 4422 */    MCD::OPC_Decode, 246, 2, 53, // Opcode: DCCCI
/* 4426 */    MCD::OPC_FilterValue, 15, 10, 0, // Skip to: 4440
/* 4430 */    MCD::OPC_CheckField, 0, 2, 2, 4, 36, // Skip to: 13656
/* 4436 */    MCD::OPC_Decode, 254, 9, 52, // Opcode: STVXL
/* 4440 */    MCD::OPC_FilterValue, 18, 10, 0, // Skip to: 4454
/* 4444 */    MCD::OPC_CheckField, 0, 2, 0, 246, 35, // Skip to: 13656
/* 4450 */    MCD::OPC_Decode, 173, 6, 54, // Opcode: LWAT
/* 4454 */    MCD::OPC_FilterValue, 19, 10, 0, // Skip to: 4468
/* 4458 */    MCD::OPC_CheckField, 0, 2, 0, 232, 35, // Skip to: 13656
/* 4464 */    MCD::OPC_Decode, 240, 5, 55, // Opcode: LDAT
/* 4468 */    MCD::OPC_FilterValue, 22, 10, 0, // Skip to: 4482
/* 4472 */    MCD::OPC_CheckField, 0, 2, 0, 218, 35, // Skip to: 13656
/* 4478 */    MCD::OPC_Decode, 129, 10, 54, // Opcode: STWAT
/* 4482 */    MCD::OPC_FilterValue, 23, 10, 0, // Skip to: 4496
/* 4486 */    MCD::OPC_CheckField, 0, 2, 0, 204, 35, // Skip to: 13656
/* 4492 */    MCD::OPC_Decode, 220, 9, 55, // Opcode: STDAT
/* 4496 */    MCD::OPC_FilterValue, 24, 16, 0, // Skip to: 4516
/* 4500 */    MCD::OPC_CheckField, 22, 4, 0, 190, 35, // Skip to: 13656
/* 4506 */    MCD::OPC_CheckField, 0, 2, 0, 184, 35, // Skip to: 13656
/* 4512 */    MCD::OPC_Decode, 205, 2, 56, // Opcode: CP_COPY
/* 4516 */    MCD::OPC_FilterValue, 26, 16, 0, // Skip to: 4536
/* 4520 */    MCD::OPC_CheckField, 11, 15, 0, 170, 35, // Skip to: 13656
/* 4526 */    MCD::OPC_CheckField, 0, 2, 0, 164, 35, // Skip to: 13656
/* 4532 */    MCD::OPC_Decode, 204, 2, 0, // Opcode: CP_ABORT
/* 4536 */    MCD::OPC_FilterValue, 28, 31, 0, // Skip to: 4571
/* 4540 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 4543 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 4557
/* 4547 */    MCD::OPC_CheckField, 22, 4, 0, 143, 35, // Skip to: 13656
/* 4553 */    MCD::OPC_Decode, 209, 2, 56, // Opcode: CP_PASTE
/* 4557 */    MCD::OPC_FilterValue, 1, 135, 35, // Skip to: 13656
/* 4561 */    MCD::OPC_CheckField, 22, 4, 0, 129, 35, // Skip to: 13656
/* 4567 */    MCD::OPC_Decode, 213, 2, 56, // Opcode: CP_PASTEo
/* 4571 */    MCD::OPC_FilterValue, 30, 121, 35, // Skip to: 13656
/* 4575 */    MCD::OPC_CheckField, 21, 5, 0, 115, 35, // Skip to: 13656
/* 4581 */    MCD::OPC_CheckField, 0, 2, 0, 109, 35, // Skip to: 13656
/* 4587 */    MCD::OPC_Decode, 214, 5, 53, // Opcode: ICCCI
/* 4591 */    MCD::OPC_FilterValue, 4, 68, 1, // Skip to: 4919
/* 4595 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 4598 */    MCD::OPC_FilterValue, 0, 35, 0, // Skip to: 4637
/* 4602 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 4605 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 4613
/* 4609 */    MCD::OPC_Decode, 159, 10, 57, // Opcode: SUBFC
/* 4613 */    MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 4621
/* 4617 */    MCD::OPC_Decode, 162, 10, 57, // Opcode: SUBFCo
/* 4621 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 4629
/* 4625 */    MCD::OPC_Decode, 144, 7, 58, // Opcode: MULHDU
/* 4629 */    MCD::OPC_FilterValue, 3, 63, 35, // Skip to: 13656
/* 4633 */    MCD::OPC_Decode, 145, 7, 58, // Opcode: MULHDUo
/* 4637 */    MCD::OPC_FilterValue, 1, 19, 0, // Skip to: 4660
/* 4641 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 4644 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 4652
/* 4648 */    MCD::OPC_Decode, 156, 10, 57, // Opcode: SUBF
/* 4652 */    MCD::OPC_FilterValue, 1, 40, 35, // Skip to: 13656
/* 4656 */    MCD::OPC_Decode, 177, 10, 57, // Opcode: SUBFo
/* 4660 */    MCD::OPC_FilterValue, 2, 19, 0, // Skip to: 4683
/* 4664 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 4667 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 4675
/* 4671 */    MCD::OPC_Decode, 143, 7, 58, // Opcode: MULHD
/* 4675 */    MCD::OPC_FilterValue, 3, 17, 35, // Skip to: 13656
/* 4679 */    MCD::OPC_Decode, 146, 7, 58, // Opcode: MULHDo
/* 4683 */    MCD::OPC_FilterValue, 3, 31, 0, // Skip to: 4718
/* 4687 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 4690 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 4704
/* 4694 */    MCD::OPC_CheckField, 11, 5, 0, 252, 34, // Skip to: 13656
/* 4700 */    MCD::OPC_Decode, 165, 7, 59, // Opcode: NEG
/* 4704 */    MCD::OPC_FilterValue, 1, 244, 34, // Skip to: 13656
/* 4708 */    MCD::OPC_CheckField, 11, 5, 0, 238, 34, // Skip to: 13656
/* 4714 */    MCD::OPC_Decode, 168, 7, 59, // Opcode: NEGo
/* 4718 */    MCD::OPC_FilterValue, 4, 19, 0, // Skip to: 4741
/* 4722 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 4725 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 4733
/* 4729 */    MCD::OPC_Decode, 163, 10, 57, // Opcode: SUBFE
/* 4733 */    MCD::OPC_FilterValue, 1, 215, 34, // Skip to: 13656
/* 4737 */    MCD::OPC_Decode, 166, 10, 57, // Opcode: SUBFEo
/* 4741 */    MCD::OPC_FilterValue, 6, 31, 0, // Skip to: 4776
/* 4745 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 4748 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 4762
/* 4752 */    MCD::OPC_CheckField, 11, 5, 0, 194, 34, // Skip to: 13656
/* 4758 */    MCD::OPC_Decode, 173, 10, 59, // Opcode: SUBFZE
/* 4762 */    MCD::OPC_FilterValue, 1, 186, 34, // Skip to: 13656
/* 4766 */    MCD::OPC_CheckField, 11, 5, 0, 180, 34, // Skip to: 13656
/* 4772 */    MCD::OPC_Decode, 176, 10, 59, // Opcode: SUBFZEo
/* 4776 */    MCD::OPC_FilterValue, 7, 47, 0, // Skip to: 4827
/* 4780 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 4783 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 4797
/* 4787 */    MCD::OPC_CheckField, 11, 5, 0, 159, 34, // Skip to: 13656
/* 4793 */    MCD::OPC_Decode, 169, 10, 59, // Opcode: SUBFME
/* 4797 */    MCD::OPC_FilterValue, 1, 10, 0, // Skip to: 4811
/* 4801 */    MCD::OPC_CheckField, 11, 5, 0, 145, 34, // Skip to: 13656
/* 4807 */    MCD::OPC_Decode, 172, 10, 59, // Opcode: SUBFMEo
/* 4811 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 4819
/* 4815 */    MCD::OPC_Decode, 151, 7, 58, // Opcode: MULLD
/* 4819 */    MCD::OPC_FilterValue, 3, 129, 34, // Skip to: 13656
/* 4823 */    MCD::OPC_Decode, 152, 7, 58, // Opcode: MULLDo
/* 4827 */    MCD::OPC_FilterValue, 12, 19, 0, // Skip to: 4850
/* 4831 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 4834 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 4842
/* 4838 */    MCD::OPC_Decode, 253, 2, 58, // Opcode: DIVDEU
/* 4842 */    MCD::OPC_FilterValue, 3, 106, 34, // Skip to: 13656
/* 4846 */    MCD::OPC_Decode, 254, 2, 58, // Opcode: DIVDEUo
/* 4850 */    MCD::OPC_FilterValue, 13, 19, 0, // Skip to: 4873
/* 4854 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 4857 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 4865
/* 4861 */    MCD::OPC_Decode, 252, 2, 58, // Opcode: DIVDE
/* 4865 */    MCD::OPC_FilterValue, 3, 83, 34, // Skip to: 13656
/* 4869 */    MCD::OPC_Decode, 255, 2, 58, // Opcode: DIVDEo
/* 4873 */    MCD::OPC_FilterValue, 14, 19, 0, // Skip to: 4896
/* 4877 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 4880 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 4888
/* 4884 */    MCD::OPC_Decode, 128, 3, 58, // Opcode: DIVDU
/* 4888 */    MCD::OPC_FilterValue, 3, 60, 34, // Skip to: 13656
/* 4892 */    MCD::OPC_Decode, 129, 3, 58, // Opcode: DIVDUo
/* 4896 */    MCD::OPC_FilterValue, 15, 52, 34, // Skip to: 13656
/* 4900 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 4903 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 4911
/* 4907 */    MCD::OPC_Decode, 251, 2, 58, // Opcode: DIVD
/* 4911 */    MCD::OPC_FilterValue, 3, 37, 34, // Skip to: 13656
/* 4915 */    MCD::OPC_Decode, 130, 3, 58, // Opcode: DIVDo
/* 4919 */    MCD::OPC_FilterValue, 5, 24, 1, // Skip to: 5203
/* 4923 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 4926 */    MCD::OPC_FilterValue, 0, 33, 0, // Skip to: 4963
/* 4930 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 4933 */    MCD::OPC_FilterValue, 0, 3, 0, // Skip to: 4940
/* 4937 */    MCD::OPC_Decode, 89, 57, // Opcode: ADDC
/* 4940 */    MCD::OPC_FilterValue, 1, 3, 0, // Skip to: 4947
/* 4944 */    MCD::OPC_Decode, 92, 57, // Opcode: ADDCo
/* 4947 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 4955
/* 4951 */    MCD::OPC_Decode, 148, 7, 57, // Opcode: MULHWU
/* 4955 */    MCD::OPC_FilterValue, 3, 249, 33, // Skip to: 13656
/* 4959 */    MCD::OPC_Decode, 149, 7, 57, // Opcode: MULHWUo
/* 4963 */    MCD::OPC_FilterValue, 2, 19, 0, // Skip to: 4986
/* 4967 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 4970 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 4978
/* 4974 */    MCD::OPC_Decode, 147, 7, 57, // Opcode: MULHW
/* 4978 */    MCD::OPC_FilterValue, 3, 226, 33, // Skip to: 13656
/* 4982 */    MCD::OPC_Decode, 150, 7, 57, // Opcode: MULHWo
/* 4986 */    MCD::OPC_FilterValue, 4, 17, 0, // Skip to: 5007
/* 4990 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 4993 */    MCD::OPC_FilterValue, 0, 3, 0, // Skip to: 5000
/* 4997 */    MCD::OPC_Decode, 93, 57, // Opcode: ADDE
/* 5000 */    MCD::OPC_FilterValue, 1, 204, 33, // Skip to: 13656
/* 5004 */    MCD::OPC_Decode, 96, 57, // Opcode: ADDEo
/* 5007 */    MCD::OPC_FilterValue, 6, 30, 0, // Skip to: 5041
/* 5011 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 5014 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 5027
/* 5018 */    MCD::OPC_CheckField, 11, 5, 0, 184, 33, // Skip to: 13656
/* 5024 */    MCD::OPC_Decode, 125, 59, // Opcode: ADDZE
/* 5027 */    MCD::OPC_FilterValue, 1, 177, 33, // Skip to: 13656
/* 5031 */    MCD::OPC_CheckField, 11, 5, 0, 171, 33, // Skip to: 13656
/* 5037 */    MCD::OPC_Decode, 128, 1, 59, // Opcode: ADDZEo
/* 5041 */    MCD::OPC_FilterValue, 7, 45, 0, // Skip to: 5090
/* 5045 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 5048 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 5061
/* 5052 */    MCD::OPC_CheckField, 11, 5, 0, 150, 33, // Skip to: 13656
/* 5058 */    MCD::OPC_Decode, 121, 59, // Opcode: ADDME
/* 5061 */    MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 5074
/* 5065 */    MCD::OPC_CheckField, 11, 5, 0, 137, 33, // Skip to: 13656
/* 5071 */    MCD::OPC_Decode, 124, 59, // Opcode: ADDMEo
/* 5074 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 5082
/* 5078 */    MCD::OPC_Decode, 155, 7, 57, // Opcode: MULLW
/* 5082 */    MCD::OPC_FilterValue, 3, 122, 33, // Skip to: 13656
/* 5086 */    MCD::OPC_Decode, 156, 7, 57, // Opcode: MULLWo
/* 5090 */    MCD::OPC_FilterValue, 8, 17, 0, // Skip to: 5111
/* 5094 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 5097 */    MCD::OPC_FilterValue, 0, 3, 0, // Skip to: 5104
/* 5101 */    MCD::OPC_Decode, 82, 57, // Opcode: ADD4
/* 5104 */    MCD::OPC_FilterValue, 1, 100, 33, // Skip to: 13656
/* 5108 */    MCD::OPC_Decode, 84, 57, // Opcode: ADD4o
/* 5111 */    MCD::OPC_FilterValue, 12, 19, 0, // Skip to: 5134
/* 5115 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 5118 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 5126
/* 5122 */    MCD::OPC_Decode, 133, 3, 57, // Opcode: DIVWEU
/* 5126 */    MCD::OPC_FilterValue, 3, 78, 33, // Skip to: 13656
/* 5130 */    MCD::OPC_Decode, 134, 3, 57, // Opcode: DIVWEUo
/* 5134 */    MCD::OPC_FilterValue, 13, 19, 0, // Skip to: 5157
/* 5138 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 5141 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 5149
/* 5145 */    MCD::OPC_Decode, 132, 3, 57, // Opcode: DIVWE
/* 5149 */    MCD::OPC_FilterValue, 3, 55, 33, // Skip to: 13656
/* 5153 */    MCD::OPC_Decode, 135, 3, 57, // Opcode: DIVWEo
/* 5157 */    MCD::OPC_FilterValue, 14, 19, 0, // Skip to: 5180
/* 5161 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 5164 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 5172
/* 5168 */    MCD::OPC_Decode, 136, 3, 57, // Opcode: DIVWU
/* 5172 */    MCD::OPC_FilterValue, 3, 32, 33, // Skip to: 13656
/* 5176 */    MCD::OPC_Decode, 137, 3, 57, // Opcode: DIVWUo
/* 5180 */    MCD::OPC_FilterValue, 15, 24, 33, // Skip to: 13656
/* 5184 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 5187 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 5195
/* 5191 */    MCD::OPC_Decode, 131, 3, 57, // Opcode: DIVW
/* 5195 */    MCD::OPC_FilterValue, 3, 9, 33, // Skip to: 13656
/* 5199 */    MCD::OPC_Decode, 138, 3, 57, // Opcode: DIVWo
/* 5203 */    MCD::OPC_FilterValue, 6, 95, 1, // Skip to: 5558
/* 5207 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 5210 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 5224
/* 5214 */    MCD::OPC_CheckField, 1, 1, 0, 244, 32, // Skip to: 13656
/* 5220 */    MCD::OPC_Decode, 195, 6, 60, // Opcode: LXSIWZX
/* 5224 */    MCD::OPC_FilterValue, 2, 10, 0, // Skip to: 5238
/* 5228 */    MCD::OPC_CheckField, 1, 1, 0, 230, 32, // Skip to: 13656
/* 5234 */    MCD::OPC_Decode, 194, 6, 60, // Opcode: LXSIWAX
/* 5238 */    MCD::OPC_FilterValue, 4, 10, 0, // Skip to: 5252
/* 5242 */    MCD::OPC_CheckField, 1, 1, 0, 216, 32, // Skip to: 13656
/* 5248 */    MCD::OPC_Decode, 145, 10, 60, // Opcode: STXSIWX
/* 5252 */    MCD::OPC_FilterValue, 8, 19, 0, // Skip to: 5275
/* 5256 */    MCD::OPC_ExtractField, 1, 1,  // Inst{1} ...
/* 5259 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 5267
/* 5263 */    MCD::OPC_Decode, 207, 6, 61, // Opcode: LXVX
/* 5267 */    MCD::OPC_FilterValue, 1, 193, 32, // Skip to: 13656
/* 5271 */    MCD::OPC_Decode, 203, 6, 62, // Opcode: LXVL
/* 5275 */    MCD::OPC_FilterValue, 9, 10, 0, // Skip to: 5289
/* 5279 */    MCD::OPC_CheckField, 1, 1, 1, 179, 32, // Skip to: 13656
/* 5285 */    MCD::OPC_Decode, 204, 6, 62, // Opcode: LXVLL
/* 5289 */    MCD::OPC_FilterValue, 10, 10, 0, // Skip to: 5303
/* 5293 */    MCD::OPC_CheckField, 1, 1, 0, 165, 32, // Skip to: 13656
/* 5299 */    MCD::OPC_Decode, 201, 6, 61, // Opcode: LXVDSX
/* 5303 */    MCD::OPC_FilterValue, 11, 10, 0, // Skip to: 5317
/* 5307 */    MCD::OPC_CheckField, 1, 1, 0, 151, 32, // Skip to: 13656
/* 5313 */    MCD::OPC_Decode, 206, 6, 61, // Opcode: LXVWSX
/* 5317 */    MCD::OPC_FilterValue, 12, 19, 0, // Skip to: 5340
/* 5321 */    MCD::OPC_ExtractField, 1, 1,  // Inst{1} ...
/* 5324 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 5332
/* 5328 */    MCD::OPC_Decode, 155, 10, 61, // Opcode: STXVX
/* 5332 */    MCD::OPC_FilterValue, 1, 128, 32, // Skip to: 13656
/* 5336 */    MCD::OPC_Decode, 152, 10, 62, // Opcode: STXVL
/* 5340 */    MCD::OPC_FilterValue, 13, 10, 0, // Skip to: 5354
/* 5344 */    MCD::OPC_CheckField, 1, 1, 1, 114, 32, // Skip to: 13656
/* 5350 */    MCD::OPC_Decode, 153, 10, 62, // Opcode: STXVLL
/* 5354 */    MCD::OPC_FilterValue, 16, 10, 0, // Skip to: 5368
/* 5358 */    MCD::OPC_CheckField, 1, 1, 0, 100, 32, // Skip to: 13656
/* 5364 */    MCD::OPC_Decode, 197, 6, 63, // Opcode: LXSSPX
/* 5368 */    MCD::OPC_FilterValue, 18, 10, 0, // Skip to: 5382
/* 5372 */    MCD::OPC_CheckField, 1, 1, 0, 86, 32, // Skip to: 13656
/* 5378 */    MCD::OPC_Decode, 191, 6, 60, // Opcode: LXSDX
/* 5382 */    MCD::OPC_FilterValue, 20, 10, 0, // Skip to: 5396
/* 5386 */    MCD::OPC_CheckField, 1, 1, 0, 72, 32, // Skip to: 13656
/* 5392 */    MCD::OPC_Decode, 147, 10, 63, // Opcode: STXSSPX
/* 5396 */    MCD::OPC_FilterValue, 22, 10, 0, // Skip to: 5410
/* 5400 */    MCD::OPC_CheckField, 1, 1, 0, 58, 32, // Skip to: 13656
/* 5406 */    MCD::OPC_Decode, 140, 10, 60, // Opcode: STXSDX
/* 5410 */    MCD::OPC_FilterValue, 24, 19, 0, // Skip to: 5433
/* 5414 */    MCD::OPC_ExtractField, 1, 1,  // Inst{1} ...
/* 5417 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 5425
/* 5421 */    MCD::OPC_Decode, 205, 6, 61, // Opcode: LXVW4X
/* 5425 */    MCD::OPC_FilterValue, 1, 35, 32, // Skip to: 13656
/* 5429 */    MCD::OPC_Decode, 192, 6, 60, // Opcode: LXSIBZX
/* 5433 */    MCD::OPC_FilterValue, 25, 19, 0, // Skip to: 5456
/* 5437 */    MCD::OPC_ExtractField, 1, 1,  // Inst{1} ...
/* 5440 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 5448
/* 5444 */    MCD::OPC_Decode, 202, 6, 61, // Opcode: LXVH8X
/* 5448 */    MCD::OPC_FilterValue, 1, 12, 32, // Skip to: 13656
/* 5452 */    MCD::OPC_Decode, 193, 6, 60, // Opcode: LXSIHZX
/* 5456 */    MCD::OPC_FilterValue, 26, 10, 0, // Skip to: 5470
/* 5460 */    MCD::OPC_CheckField, 1, 1, 0, 254, 31, // Skip to: 13656
/* 5466 */    MCD::OPC_Decode, 200, 6, 61, // Opcode: LXVD2X
/* 5470 */    MCD::OPC_FilterValue, 27, 10, 0, // Skip to: 5484
/* 5474 */    MCD::OPC_CheckField, 1, 1, 0, 240, 31, // Skip to: 13656
/* 5480 */    MCD::OPC_Decode, 199, 6, 61, // Opcode: LXVB16X
/* 5484 */    MCD::OPC_FilterValue, 28, 19, 0, // Skip to: 5507
/* 5488 */    MCD::OPC_ExtractField, 1, 1,  // Inst{1} ...
/* 5491 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 5499
/* 5495 */    MCD::OPC_Decode, 154, 10, 61, // Opcode: STXVW4X
/* 5499 */    MCD::OPC_FilterValue, 1, 217, 31, // Skip to: 13656
/* 5503 */    MCD::OPC_Decode, 141, 10, 60, // Opcode: STXSIBX
/* 5507 */    MCD::OPC_FilterValue, 29, 19, 0, // Skip to: 5530
/* 5511 */    MCD::OPC_ExtractField, 1, 1,  // Inst{1} ...
/* 5514 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 5522
/* 5518 */    MCD::OPC_Decode, 151, 10, 61, // Opcode: STXVH8X
/* 5522 */    MCD::OPC_FilterValue, 1, 194, 31, // Skip to: 13656
/* 5526 */    MCD::OPC_Decode, 143, 10, 60, // Opcode: STXSIHX
/* 5530 */    MCD::OPC_FilterValue, 30, 10, 0, // Skip to: 5544
/* 5534 */    MCD::OPC_CheckField, 1, 1, 0, 180, 31, // Skip to: 13656
/* 5540 */    MCD::OPC_Decode, 150, 10, 61, // Opcode: STXVD2X
/* 5544 */    MCD::OPC_FilterValue, 31, 172, 31, // Skip to: 13656
/* 5548 */    MCD::OPC_CheckField, 1, 1, 0, 166, 31, // Skip to: 13656
/* 5554 */    MCD::OPC_Decode, 149, 10, 61, // Opcode: STXVB16X
/* 5558 */    MCD::OPC_FilterValue, 7, 201, 0, // Skip to: 5763
/* 5562 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 5565 */    MCD::OPC_FilterValue, 0, 39, 0, // Skip to: 5608
/* 5569 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 5572 */    MCD::OPC_FilterValue, 9, 4, 0, // Skip to: 5580
/* 5576 */    MCD::OPC_Decode, 212, 6, 64, // Opcode: MFBHRBE
/* 5580 */    MCD::OPC_FilterValue, 13, 10, 0, // Skip to: 5594
/* 5584 */    MCD::OPC_CheckField, 11, 15, 0, 130, 31, // Skip to: 13656
/* 5590 */    MCD::OPC_Decode, 170, 2, 0, // Opcode: CLRBHRB
/* 5594 */    MCD::OPC_FilterValue, 22, 122, 31, // Skip to: 13656
/* 5598 */    MCD::OPC_CheckField, 11, 12, 0, 116, 31, // Skip to: 13656
/* 5604 */    MCD::OPC_Decode, 195, 10, 46, // Opcode: TCHECK
/* 5608 */    MCD::OPC_FilterValue, 1, 143, 0, // Skip to: 5755
/* 5612 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 5615 */    MCD::OPC_FilterValue, 20, 16, 0, // Skip to: 5635
/* 5619 */    MCD::OPC_CheckField, 22, 4, 0, 95, 31, // Skip to: 13656
/* 5625 */    MCD::OPC_CheckField, 11, 10, 0, 89, 31, // Skip to: 13656
/* 5631 */    MCD::OPC_Decode, 194, 10, 65, // Opcode: TBEGIN
/* 5635 */    MCD::OPC_FilterValue, 21, 10, 0, // Skip to: 5649
/* 5639 */    MCD::OPC_CheckField, 11, 14, 0, 75, 31, // Skip to: 13656
/* 5645 */    MCD::OPC_Decode, 205, 10, 66, // Opcode: TEND
/* 5649 */    MCD::OPC_FilterValue, 23, 16, 0, // Skip to: 5669
/* 5653 */    MCD::OPC_CheckField, 22, 3, 0, 61, 31, // Skip to: 13656
/* 5659 */    MCD::OPC_CheckField, 11, 10, 0, 55, 31, // Skip to: 13656
/* 5665 */    MCD::OPC_Decode, 223, 10, 65, // Opcode: TSR
/* 5669 */    MCD::OPC_FilterValue, 24, 4, 0, // Skip to: 5677
/* 5673 */    MCD::OPC_Decode, 186, 10, 67, // Opcode: TABORTWC
/* 5677 */    MCD::OPC_FilterValue, 25, 4, 0, // Skip to: 5685
/* 5681 */    MCD::OPC_Decode, 184, 10, 67, // Opcode: TABORTDC
/* 5685 */    MCD::OPC_FilterValue, 26, 4, 0, // Skip to: 5693
/* 5689 */    MCD::OPC_Decode, 187, 10, 68, // Opcode: TABORTWCI
/* 5693 */    MCD::OPC_FilterValue, 27, 4, 0, // Skip to: 5701
/* 5697 */    MCD::OPC_Decode, 185, 10, 68, // Opcode: TABORTDCI
/* 5701 */    MCD::OPC_FilterValue, 28, 16, 0, // Skip to: 5721
/* 5705 */    MCD::OPC_CheckField, 21, 5, 0, 9, 31, // Skip to: 13656
/* 5711 */    MCD::OPC_CheckField, 11, 5, 0, 3, 31, // Skip to: 13656
/* 5717 */    MCD::OPC_Decode, 183, 10, 69, // Opcode: TABORT
/* 5721 */    MCD::OPC_FilterValue, 29, 16, 0, // Skip to: 5741
/* 5725 */    MCD::OPC_CheckField, 21, 5, 0, 245, 30, // Skip to: 13656
/* 5731 */    MCD::OPC_CheckField, 11, 5, 0, 239, 30, // Skip to: 13656
/* 5737 */    MCD::OPC_Decode, 222, 10, 69, // Opcode: TRECLAIM
/* 5741 */    MCD::OPC_FilterValue, 31, 231, 30, // Skip to: 13656
/* 5745 */    MCD::OPC_CheckField, 11, 15, 0, 225, 30, // Skip to: 13656
/* 5751 */    MCD::OPC_Decode, 221, 10, 0, // Opcode: TRECHKPT
/* 5755 */    MCD::OPC_FilterValue, 2, 217, 30, // Skip to: 13656
/* 5759 */    MCD::OPC_Decode, 221, 5, 70, // Opcode: ISEL
/* 5763 */    MCD::OPC_FilterValue, 8, 43, 0, // Skip to: 5810
/* 5767 */    MCD::OPC_ExtractField, 20, 1,  // Inst{20} ...
/* 5770 */    MCD::OPC_FilterValue, 0, 16, 0, // Skip to: 5790
/* 5774 */    MCD::OPC_CheckField, 6, 6, 4, 196, 30, // Skip to: 13656
/* 5780 */    MCD::OPC_CheckField, 0, 2, 0, 190, 30, // Skip to: 13656
/* 5786 */    MCD::OPC_Decode, 239, 6, 71, // Opcode: MTCRF
/* 5790 */    MCD::OPC_FilterValue, 1, 182, 30, // Skip to: 13656
/* 5794 */    MCD::OPC_CheckField, 6, 6, 4, 176, 30, // Skip to: 13656
/* 5800 */    MCD::OPC_CheckField, 0, 2, 0, 170, 30, // Skip to: 13656
/* 5806 */    MCD::OPC_Decode, 129, 7, 72, // Opcode: MTOCRF
/* 5810 */    MCD::OPC_FilterValue, 9, 180, 2, // Skip to: 6506
/* 5814 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 5817 */    MCD::OPC_FilterValue, 0, 43, 0, // Skip to: 5864
/* 5821 */    MCD::OPC_ExtractField, 20, 1,  // Inst{20} ...
/* 5824 */    MCD::OPC_FilterValue, 0, 16, 0, // Skip to: 5844
/* 5828 */    MCD::OPC_CheckField, 11, 9, 0, 142, 30, // Skip to: 13656
/* 5834 */    MCD::OPC_CheckField, 0, 2, 2, 136, 30, // Skip to: 13656
/* 5840 */    MCD::OPC_Decode, 213, 6, 47, // Opcode: MFCR
/* 5844 */    MCD::OPC_FilterValue, 1, 128, 30, // Skip to: 13656
/* 5848 */    MCD::OPC_CheckField, 11, 1, 0, 122, 30, // Skip to: 13656
/* 5854 */    MCD::OPC_CheckField, 0, 2, 2, 116, 30, // Skip to: 13656
/* 5860 */    MCD::OPC_Decode, 223, 6, 73, // Opcode: MFOCRF
/* 5864 */    MCD::OPC_FilterValue, 1, 16, 0, // Skip to: 5884
/* 5868 */    MCD::OPC_CheckField, 11, 5, 0, 102, 30, // Skip to: 13656
/* 5874 */    MCD::OPC_CheckField, 1, 1, 1, 96, 30, // Skip to: 13656
/* 5880 */    MCD::OPC_Decode, 234, 6, 74, // Opcode: MFVSRD
/* 5884 */    MCD::OPC_FilterValue, 2, 16, 0, // Skip to: 5904
/* 5888 */    MCD::OPC_CheckField, 11, 10, 0, 82, 30, // Skip to: 13656
/* 5894 */    MCD::OPC_CheckField, 0, 2, 2, 76, 30, // Skip to: 13656
/* 5900 */    MCD::OPC_Decode, 222, 6, 47, // Opcode: MFMSR
/* 5904 */    MCD::OPC_FilterValue, 3, 16, 0, // Skip to: 5924
/* 5908 */    MCD::OPC_CheckField, 11, 5, 0, 62, 30, // Skip to: 13656
/* 5914 */    MCD::OPC_CheckField, 1, 1, 1, 56, 30, // Skip to: 13656
/* 5920 */    MCD::OPC_Decode, 236, 6, 75, // Opcode: MFVSRWZ
/* 5924 */    MCD::OPC_FilterValue, 4, 10, 0, // Skip to: 5938
/* 5928 */    MCD::OPC_CheckField, 1, 1, 0, 42, 30, // Skip to: 13656
/* 5934 */    MCD::OPC_Decode, 255, 6, 76, // Opcode: MTMSR
/* 5938 */    MCD::OPC_FilterValue, 5, 25, 0, // Skip to: 5967
/* 5942 */    MCD::OPC_ExtractField, 1, 1,  // Inst{1} ...
/* 5945 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 5953
/* 5949 */    MCD::OPC_Decode, 128, 7, 76, // Opcode: MTMSRD
/* 5953 */    MCD::OPC_FilterValue, 1, 19, 30, // Skip to: 13656
/* 5957 */    MCD::OPC_CheckField, 11, 5, 0, 13, 30, // Skip to: 13656
/* 5963 */    MCD::OPC_Decode, 138, 7, 77, // Opcode: MTVSRD
/* 5967 */    MCD::OPC_FilterValue, 6, 25, 0, // Skip to: 5996
/* 5971 */    MCD::OPC_ExtractField, 1, 1,  // Inst{1} ...
/* 5974 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 5982
/* 5978 */    MCD::OPC_Decode, 133, 7, 78, // Opcode: MTSR
/* 5982 */    MCD::OPC_FilterValue, 1, 246, 29, // Skip to: 13656
/* 5986 */    MCD::OPC_CheckField, 11, 5, 0, 240, 29, // Skip to: 13656
/* 5992 */    MCD::OPC_Decode, 140, 7, 79, // Opcode: MTVSRWA
/* 5996 */    MCD::OPC_FilterValue, 7, 25, 0, // Skip to: 6025
/* 6000 */    MCD::OPC_ExtractField, 1, 1,  // Inst{1} ...
/* 6003 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 6011
/* 6007 */    MCD::OPC_Decode, 134, 7, 80, // Opcode: MTSRIN
/* 6011 */    MCD::OPC_FilterValue, 1, 217, 29, // Skip to: 13656
/* 6015 */    MCD::OPC_CheckField, 11, 5, 0, 211, 29, // Skip to: 13656
/* 6021 */    MCD::OPC_Decode, 142, 7, 79, // Opcode: MTVSRWZ
/* 6025 */    MCD::OPC_FilterValue, 8, 16, 0, // Skip to: 6045
/* 6029 */    MCD::OPC_CheckField, 16, 10, 0, 197, 29, // Skip to: 13656
/* 6035 */    MCD::OPC_CheckField, 0, 2, 0, 191, 29, // Skip to: 13656
/* 6041 */    MCD::OPC_Decode, 208, 10, 81, // Opcode: TLBIEL
/* 6045 */    MCD::OPC_FilterValue, 9, 37, 0, // Skip to: 6086
/* 6049 */    MCD::OPC_ExtractField, 1, 1,  // Inst{1} ...
/* 6052 */    MCD::OPC_FilterValue, 0, 16, 0, // Skip to: 6072
/* 6056 */    MCD::OPC_CheckField, 16, 5, 0, 170, 29, // Skip to: 13656
/* 6062 */    MCD::OPC_CheckField, 0, 1, 0, 164, 29, // Skip to: 13656
/* 6068 */    MCD::OPC_Decode, 207, 10, 80, // Opcode: TLBIE
/* 6072 */    MCD::OPC_FilterValue, 1, 156, 29, // Skip to: 13656
/* 6076 */    MCD::OPC_CheckField, 11, 5, 0, 150, 29, // Skip to: 13656
/* 6082 */    MCD::OPC_Decode, 235, 6, 82, // Opcode: MFVSRLD
/* 6086 */    MCD::OPC_FilterValue, 10, 46, 0, // Skip to: 6136
/* 6090 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 6093 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 6107
/* 6097 */    MCD::OPC_CheckField, 11, 15, 0, 129, 29, // Skip to: 13656
/* 6103 */    MCD::OPC_Decode, 177, 9, 0, // Opcode: SLBSYNC
/* 6107 */    MCD::OPC_FilterValue, 2, 121, 29, // Skip to: 13656
/* 6111 */    MCD::OPC_ExtractField, 11, 10,  // Inst{20-11} ...
/* 6114 */    MCD::OPC_FilterValue, 128, 2, 4, 0, // Skip to: 6123
/* 6119 */    MCD::OPC_Decode, 220, 6, 47, // Opcode: MFLR
/* 6123 */    MCD::OPC_FilterValue, 160, 2, 4, 0, // Skip to: 6132
/* 6128 */    MCD::OPC_Decode, 215, 6, 47, // Opcode: MFCTR
/* 6132 */    MCD::OPC_Decode, 225, 6, 49, // Opcode: MFSPR
/* 6136 */    MCD::OPC_FilterValue, 11, 25, 0, // Skip to: 6165
/* 6140 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 6143 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 6157
/* 6147 */    MCD::OPC_CheckField, 11, 15, 0, 79, 29, // Skip to: 13656
/* 6153 */    MCD::OPC_Decode, 206, 10, 0, // Opcode: TLBIA
/* 6157 */    MCD::OPC_FilterValue, 2, 71, 29, // Skip to: 13656
/* 6161 */    MCD::OPC_Decode, 229, 6, 49, // Opcode: MFTB
/* 6165 */    MCD::OPC_FilterValue, 12, 37, 0, // Skip to: 6206
/* 6169 */    MCD::OPC_ExtractField, 1, 1,  // Inst{1} ...
/* 6172 */    MCD::OPC_FilterValue, 0, 16, 0, // Skip to: 6192
/* 6176 */    MCD::OPC_CheckField, 16, 5, 0, 50, 29, // Skip to: 13656
/* 6182 */    MCD::OPC_CheckField, 0, 1, 0, 44, 29, // Skip to: 13656
/* 6188 */    MCD::OPC_Decode, 176, 9, 80, // Opcode: SLBMTE
/* 6192 */    MCD::OPC_FilterValue, 1, 36, 29, // Skip to: 13656
/* 6196 */    MCD::OPC_CheckField, 11, 5, 0, 30, 29, // Skip to: 13656
/* 6202 */    MCD::OPC_Decode, 141, 7, 83, // Opcode: MTVSRWS
/* 6206 */    MCD::OPC_FilterValue, 13, 31, 0, // Skip to: 6241
/* 6210 */    MCD::OPC_ExtractField, 1, 1,  // Inst{1} ...
/* 6213 */    MCD::OPC_FilterValue, 0, 16, 0, // Skip to: 6233
/* 6217 */    MCD::OPC_CheckField, 16, 10, 0, 9, 29, // Skip to: 13656
/* 6223 */    MCD::OPC_CheckField, 0, 1, 0, 3, 29, // Skip to: 13656
/* 6229 */    MCD::OPC_Decode, 172, 9, 81, // Opcode: SLBIE
/* 6233 */    MCD::OPC_FilterValue, 1, 251, 28, // Skip to: 13656
/* 6237 */    MCD::OPC_Decode, 139, 7, 84, // Opcode: MTVSRDD
/* 6241 */    MCD::OPC_FilterValue, 14, 46, 0, // Skip to: 6291
/* 6245 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 6248 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 6262
/* 6252 */    MCD::OPC_CheckField, 16, 5, 0, 230, 28, // Skip to: 13656
/* 6258 */    MCD::OPC_Decode, 173, 9, 80, // Opcode: SLBIEG
/* 6262 */    MCD::OPC_FilterValue, 2, 222, 28, // Skip to: 13656
/* 6266 */    MCD::OPC_ExtractField, 11, 10,  // Inst{20-11} ...
/* 6269 */    MCD::OPC_FilterValue, 128, 2, 4, 0, // Skip to: 6278
/* 6274 */    MCD::OPC_Decode, 253, 6, 47, // Opcode: MTLR
/* 6278 */    MCD::OPC_FilterValue, 160, 2, 4, 0, // Skip to: 6287
/* 6283 */    MCD::OPC_Decode, 241, 6, 47, // Opcode: MTCTR
/* 6287 */    MCD::OPC_Decode, 131, 7, 85, // Opcode: MTSPR
/* 6291 */    MCD::OPC_FilterValue, 15, 16, 0, // Skip to: 6311
/* 6295 */    MCD::OPC_CheckField, 11, 15, 0, 187, 28, // Skip to: 13656
/* 6301 */    MCD::OPC_CheckField, 0, 2, 0, 181, 28, // Skip to: 13656
/* 6307 */    MCD::OPC_Decode, 171, 9, 0, // Opcode: SLBIA
/* 6311 */    MCD::OPC_FilterValue, 18, 10, 0, // Skip to: 6325
/* 6315 */    MCD::OPC_CheckField, 1, 1, 1, 167, 28, // Skip to: 13656
/* 6321 */    MCD::OPC_Decode, 227, 6, 78, // Opcode: MFSR
/* 6325 */    MCD::OPC_FilterValue, 20, 10, 0, // Skip to: 6339
/* 6329 */    MCD::OPC_CheckField, 1, 1, 1, 153, 28, // Skip to: 13656
/* 6335 */    MCD::OPC_Decode, 228, 6, 80, // Opcode: MFSRIN
/* 6339 */    MCD::OPC_FilterValue, 24, 16, 0, // Skip to: 6359
/* 6343 */    MCD::OPC_CheckField, 21, 5, 0, 139, 28, // Skip to: 13656
/* 6349 */    MCD::OPC_CheckField, 0, 2, 0, 133, 28, // Skip to: 13656
/* 6355 */    MCD::OPC_Decode, 209, 10, 53, // Opcode: TLBIVAX
/* 6359 */    MCD::OPC_FilterValue, 26, 16, 0, // Skip to: 6379
/* 6363 */    MCD::OPC_CheckField, 16, 5, 0, 119, 28, // Skip to: 13656
/* 6369 */    MCD::OPC_CheckField, 0, 2, 2, 113, 28, // Skip to: 13656
/* 6375 */    MCD::OPC_Decode, 175, 9, 80, // Opcode: SLBMFEV
/* 6379 */    MCD::OPC_FilterValue, 28, 43, 0, // Skip to: 6426
/* 6383 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 6386 */    MCD::OPC_FilterValue, 0, 14, 0, // Skip to: 6404
/* 6390 */    MCD::OPC_CheckField, 21, 5, 0, 4, 0, // Skip to: 6400
/* 6396 */    MCD::OPC_Decode, 214, 10, 53, // Opcode: TLBSX
/* 6400 */    MCD::OPC_Decode, 215, 10, 57, // Opcode: TLBSX2
/* 6404 */    MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 6412
/* 6408 */    MCD::OPC_Decode, 216, 10, 57, // Opcode: TLBSX2D
/* 6412 */    MCD::OPC_FilterValue, 2, 72, 28, // Skip to: 13656
/* 6416 */    MCD::OPC_CheckField, 16, 5, 0, 66, 28, // Skip to: 13656
/* 6422 */    MCD::OPC_Decode, 174, 9, 80, // Opcode: SLBMFEE
/* 6426 */    MCD::OPC_FilterValue, 29, 21, 0, // Skip to: 6451
/* 6430 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 6433 */    MCD::OPC_FilterValue, 0, 51, 28, // Skip to: 13656
/* 6437 */    MCD::OPC_CheckField, 11, 15, 0, 4, 0, // Skip to: 6447
/* 6443 */    MCD::OPC_Decode, 212, 10, 0, // Opcode: TLBRE
/* 6447 */    MCD::OPC_Decode, 213, 10, 86, // Opcode: TLBRE2
/* 6451 */    MCD::OPC_FilterValue, 30, 31, 0, // Skip to: 6486
/* 6455 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 6458 */    MCD::OPC_FilterValue, 0, 26, 28, // Skip to: 13656
/* 6462 */    MCD::OPC_CheckField, 11, 15, 0, 4, 0, // Skip to: 6472
/* 6468 */    MCD::OPC_Decode, 218, 10, 0, // Opcode: TLBWE
/* 6472 */    MCD::OPC_CheckField, 16, 10, 0, 4, 0, // Skip to: 6482
/* 6478 */    MCD::OPC_Decode, 210, 10, 81, // Opcode: TLBLD
/* 6482 */    MCD::OPC_Decode, 219, 10, 86, // Opcode: TLBWE2
/* 6486 */    MCD::OPC_FilterValue, 31, 254, 27, // Skip to: 13656
/* 6490 */    MCD::OPC_CheckField, 16, 10, 0, 248, 27, // Skip to: 13656
/* 6496 */    MCD::OPC_CheckField, 0, 2, 0, 242, 27, // Skip to: 13656
/* 6502 */    MCD::OPC_Decode, 211, 10, 81, // Opcode: TLBLI
/* 6506 */    MCD::OPC_FilterValue, 10, 93, 1, // Skip to: 6859
/* 6510 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 6513 */    MCD::OPC_FilterValue, 0, 27, 0, // Skip to: 6544
/* 6517 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 6520 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 6528
/* 6524 */    MCD::OPC_Decode, 171, 6, 87, // Opcode: LWARX
/* 6528 */    MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 6536
/* 6532 */    MCD::OPC_Decode, 172, 6, 87, // Opcode: LWARXL
/* 6536 */    MCD::OPC_FilterValue, 2, 204, 27, // Skip to: 13656
/* 6540 */    MCD::OPC_Decode, 246, 5, 88, // Opcode: LDX
/* 6544 */    MCD::OPC_FilterValue, 1, 27, 0, // Skip to: 6575
/* 6548 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 6551 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 6559
/* 6555 */    MCD::OPC_Decode, 226, 5, 87, // Opcode: LBARX
/* 6559 */    MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 6567
/* 6563 */    MCD::OPC_Decode, 227, 5, 87, // Opcode: LBARXL
/* 6567 */    MCD::OPC_FilterValue, 2, 173, 27, // Skip to: 13656
/* 6571 */    MCD::OPC_Decode, 245, 5, 89, // Opcode: LDUX
/* 6575 */    MCD::OPC_FilterValue, 2, 19, 0, // Skip to: 6598
/* 6579 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 6582 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 6590
/* 6586 */    MCD::OPC_Decode, 238, 5, 88, // Opcode: LDARX
/* 6590 */    MCD::OPC_FilterValue, 1, 150, 27, // Skip to: 13656
/* 6594 */    MCD::OPC_Decode, 239, 5, 88, // Opcode: LDARXL
/* 6598 */    MCD::OPC_FilterValue, 3, 19, 0, // Skip to: 6621
/* 6602 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 6605 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 6613
/* 6609 */    MCD::OPC_Decode, 138, 6, 87, // Opcode: LHARX
/* 6613 */    MCD::OPC_FilterValue, 1, 127, 27, // Skip to: 13656
/* 6617 */    MCD::OPC_Decode, 139, 6, 87, // Opcode: LHARXL
/* 6621 */    MCD::OPC_FilterValue, 4, 10, 0, // Skip to: 6635
/* 6625 */    MCD::OPC_CheckField, 0, 2, 2, 113, 27, // Skip to: 13656
/* 6631 */    MCD::OPC_Decode, 226, 9, 88, // Opcode: STDX
/* 6635 */    MCD::OPC_FilterValue, 5, 10, 0, // Skip to: 6649
/* 6639 */    MCD::OPC_CheckField, 0, 2, 2, 99, 27, // Skip to: 13656
/* 6645 */    MCD::OPC_Decode, 225, 9, 90, // Opcode: STDUX
/* 6649 */    MCD::OPC_FilterValue, 9, 10, 0, // Skip to: 6663
/* 6653 */    MCD::OPC_CheckField, 0, 2, 2, 85, 27, // Skip to: 13656
/* 6659 */    MCD::OPC_Decode, 243, 5, 88, // Opcode: LDMX
/* 6663 */    MCD::OPC_FilterValue, 10, 10, 0, // Skip to: 6677
/* 6667 */    MCD::OPC_CheckField, 0, 2, 2, 71, 27, // Skip to: 13656
/* 6673 */    MCD::OPC_Decode, 175, 6, 88, // Opcode: LWAX
/* 6677 */    MCD::OPC_FilterValue, 11, 10, 0, // Skip to: 6691
/* 6681 */    MCD::OPC_CheckField, 0, 2, 2, 57, 27, // Skip to: 13656
/* 6687 */    MCD::OPC_Decode, 174, 6, 89, // Opcode: LWAUX
/* 6691 */    MCD::OPC_FilterValue, 16, 10, 0, // Skip to: 6705
/* 6695 */    MCD::OPC_CheckField, 0, 2, 0, 43, 27, // Skip to: 13656
/* 6701 */    MCD::OPC_Decode, 241, 5, 88, // Opcode: LDBRX
/* 6705 */    MCD::OPC_FilterValue, 18, 10, 0, // Skip to: 6719
/* 6709 */    MCD::OPC_CheckField, 0, 2, 2, 29, 27, // Skip to: 13656
/* 6715 */    MCD::OPC_Decode, 162, 6, 54, // Opcode: LSWI
/* 6719 */    MCD::OPC_FilterValue, 20, 10, 0, // Skip to: 6733
/* 6723 */    MCD::OPC_CheckField, 0, 2, 0, 15, 27, // Skip to: 13656
/* 6729 */    MCD::OPC_Decode, 221, 9, 88, // Opcode: STDBRX
/* 6733 */    MCD::OPC_FilterValue, 22, 10, 0, // Skip to: 6747
/* 6737 */    MCD::OPC_CheckField, 0, 2, 2, 1, 27, // Skip to: 13656
/* 6743 */    MCD::OPC_Decode, 249, 9, 54, // Opcode: STSWI
/* 6747 */    MCD::OPC_FilterValue, 24, 10, 0, // Skip to: 6761
/* 6751 */    MCD::OPC_CheckField, 0, 2, 2, 243, 26, // Skip to: 13656
/* 6757 */    MCD::OPC_Decode, 182, 6, 57, // Opcode: LWZCIX
/* 6761 */    MCD::OPC_FilterValue, 25, 10, 0, // Skip to: 6775
/* 6765 */    MCD::OPC_CheckField, 0, 2, 2, 229, 26, // Skip to: 13656
/* 6771 */    MCD::OPC_Decode, 150, 6, 57, // Opcode: LHZCIX
/* 6775 */    MCD::OPC_FilterValue, 26, 10, 0, // Skip to: 6789
/* 6779 */    MCD::OPC_CheckField, 0, 2, 2, 215, 26, // Skip to: 13656
/* 6785 */    MCD::OPC_Decode, 230, 5, 57, // Opcode: LBZCIX
/* 6789 */    MCD::OPC_FilterValue, 27, 10, 0, // Skip to: 6803
/* 6793 */    MCD::OPC_CheckField, 0, 2, 2, 201, 26, // Skip to: 13656
/* 6799 */    MCD::OPC_Decode, 242, 5, 57, // Opcode: LDCIX
/* 6803 */    MCD::OPC_FilterValue, 28, 10, 0, // Skip to: 6817
/* 6807 */    MCD::OPC_CheckField, 0, 2, 2, 187, 26, // Skip to: 13656
/* 6813 */    MCD::OPC_Decode, 131, 10, 57, // Opcode: STWCIX
/* 6817 */    MCD::OPC_FilterValue, 29, 10, 0, // Skip to: 6831
/* 6821 */    MCD::OPC_CheckField, 0, 2, 2, 173, 26, // Skip to: 13656
/* 6827 */    MCD::OPC_Decode, 239, 9, 57, // Opcode: STHCIX
/* 6831 */    MCD::OPC_FilterValue, 30, 10, 0, // Skip to: 6845
/* 6835 */    MCD::OPC_CheckField, 0, 2, 2, 159, 26, // Skip to: 13656
/* 6841 */    MCD::OPC_Decode, 211, 9, 57, // Opcode: STBCIX
/* 6845 */    MCD::OPC_FilterValue, 31, 151, 26, // Skip to: 13656
/* 6849 */    MCD::OPC_CheckField, 0, 2, 2, 145, 26, // Skip to: 13656
/* 6855 */    MCD::OPC_Decode, 222, 9, 57, // Opcode: STDCIX
/* 6859 */    MCD::OPC_FilterValue, 11, 242, 2, // Skip to: 7617
/* 6863 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 6866 */    MCD::OPC_FilterValue, 0, 25, 0, // Skip to: 6895
/* 6870 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 6873 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 6887
/* 6877 */    MCD::OPC_CheckField, 25, 1, 0, 117, 26, // Skip to: 13656
/* 6883 */    MCD::OPC_Decode, 213, 5, 91, // Opcode: ICBT
/* 6887 */    MCD::OPC_FilterValue, 2, 109, 26, // Skip to: 13656
/* 6891 */    MCD::OPC_Decode, 187, 6, 87, // Opcode: LWZX
/* 6895 */    MCD::OPC_FilterValue, 1, 25, 0, // Skip to: 6924
/* 6899 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 6902 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 6916
/* 6906 */    MCD::OPC_CheckField, 21, 5, 0, 88, 26, // Skip to: 13656
/* 6912 */    MCD::OPC_Decode, 233, 2, 92, // Opcode: DCBST
/* 6916 */    MCD::OPC_FilterValue, 2, 80, 26, // Skip to: 13656
/* 6920 */    MCD::OPC_Decode, 185, 6, 93, // Opcode: LWZUX
/* 6924 */    MCD::OPC_FilterValue, 2, 19, 0, // Skip to: 6947
/* 6928 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 6931 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 6939
/* 6935 */    MCD::OPC_Decode, 228, 2, 94, // Opcode: DCBF
/* 6939 */    MCD::OPC_FilterValue, 2, 57, 26, // Skip to: 13656
/* 6943 */    MCD::OPC_Decode, 235, 5, 87, // Opcode: LBZX
/* 6947 */    MCD::OPC_FilterValue, 3, 10, 0, // Skip to: 6961
/* 6951 */    MCD::OPC_CheckField, 0, 2, 2, 43, 26, // Skip to: 13656
/* 6957 */    MCD::OPC_Decode, 233, 5, 93, // Opcode: LBZUX
/* 6961 */    MCD::OPC_FilterValue, 4, 19, 0, // Skip to: 6984
/* 6965 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 6968 */    MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 6976
/* 6972 */    MCD::OPC_Decode, 132, 10, 87, // Opcode: STWCX
/* 6976 */    MCD::OPC_FilterValue, 2, 20, 26, // Skip to: 13656
/* 6980 */    MCD::OPC_Decode, 137, 10, 87, // Opcode: STWX
/* 6984 */    MCD::OPC_FilterValue, 5, 10, 0, // Skip to: 6998
/* 6988 */    MCD::OPC_CheckField, 0, 2, 2, 6, 26, // Skip to: 13656
/* 6994 */    MCD::OPC_Decode, 135, 10, 95, // Opcode: STWUX
/* 6998 */    MCD::OPC_FilterValue, 6, 19, 0, // Skip to: 7021
/* 7002 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 7005 */    MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 7013
/* 7009 */    MCD::OPC_Decode, 223, 9, 88, // Opcode: STDCX
/* 7013 */    MCD::OPC_FilterValue, 2, 239, 25, // Skip to: 13656
/* 7017 */    MCD::OPC_Decode, 217, 9, 87, // Opcode: STBX
/* 7021 */    MCD::OPC_FilterValue, 7, 19, 0, // Skip to: 7044
/* 7025 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 7028 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 7036
/* 7032 */    MCD::OPC_Decode, 237, 2, 94, // Opcode: DCBTST
/* 7036 */    MCD::OPC_FilterValue, 2, 216, 25, // Skip to: 13656
/* 7040 */    MCD::OPC_Decode, 215, 9, 95, // Opcode: STBUX
/* 7044 */    MCD::OPC_FilterValue, 8, 19, 0, // Skip to: 7067
/* 7048 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 7051 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 7059
/* 7055 */    MCD::OPC_Decode, 234, 2, 94, // Opcode: DCBT
/* 7059 */    MCD::OPC_FilterValue, 2, 193, 25, // Skip to: 13656
/* 7063 */    MCD::OPC_Decode, 155, 6, 87, // Opcode: LHZX
/* 7067 */    MCD::OPC_FilterValue, 9, 10, 0, // Skip to: 7081
/* 7071 */    MCD::OPC_CheckField, 0, 2, 2, 179, 25, // Skip to: 13656
/* 7077 */    MCD::OPC_Decode, 153, 6, 93, // Opcode: LHZUX
/* 7081 */    MCD::OPC_FilterValue, 10, 34, 0, // Skip to: 7119
/* 7085 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 7088 */    MCD::OPC_FilterValue, 0, 19, 0, // Skip to: 7111
/* 7092 */    MCD::OPC_ExtractField, 23, 3,  // Inst{25-23} ...
/* 7095 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 7103
/* 7099 */    MCD::OPC_Decode, 141, 3, 96, // Opcode: DST
/* 7103 */    MCD::OPC_FilterValue, 4, 149, 25, // Skip to: 13656
/* 7107 */    MCD::OPC_Decode, 147, 3, 96, // Opcode: DSTT
/* 7111 */    MCD::OPC_FilterValue, 2, 141, 25, // Skip to: 13656
/* 7115 */    MCD::OPC_Decode, 144, 6, 87, // Opcode: LHAX
/* 7119 */    MCD::OPC_FilterValue, 11, 34, 0, // Skip to: 7157
/* 7123 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 7126 */    MCD::OPC_FilterValue, 0, 19, 0, // Skip to: 7149
/* 7130 */    MCD::OPC_ExtractField, 23, 3,  // Inst{25-23} ...
/* 7133 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 7141
/* 7137 */    MCD::OPC_Decode, 143, 3, 96, // Opcode: DSTST
/* 7141 */    MCD::OPC_FilterValue, 4, 111, 25, // Skip to: 13656
/* 7145 */    MCD::OPC_Decode, 145, 3, 96, // Opcode: DSTSTT
/* 7149 */    MCD::OPC_FilterValue, 2, 103, 25, // Skip to: 13656
/* 7153 */    MCD::OPC_Decode, 142, 6, 93, // Opcode: LHAUX
/* 7157 */    MCD::OPC_FilterValue, 12, 10, 0, // Skip to: 7171
/* 7161 */    MCD::OPC_CheckField, 0, 2, 2, 89, 25, // Skip to: 13656
/* 7167 */    MCD::OPC_Decode, 245, 9, 87, // Opcode: STHX
/* 7171 */    MCD::OPC_FilterValue, 13, 10, 0, // Skip to: 7185
/* 7175 */    MCD::OPC_CheckField, 0, 2, 2, 75, 25, // Skip to: 13656
/* 7181 */    MCD::OPC_Decode, 243, 9, 95, // Opcode: STHUX
/* 7185 */    MCD::OPC_FilterValue, 14, 16, 0, // Skip to: 7205
/* 7189 */    MCD::OPC_CheckField, 21, 5, 0, 61, 25, // Skip to: 13656
/* 7195 */    MCD::OPC_CheckField, 0, 2, 0, 55, 25, // Skip to: 13656
/* 7201 */    MCD::OPC_Decode, 232, 2, 92, // Opcode: DCBI
/* 7205 */    MCD::OPC_FilterValue, 16, 19, 0, // Skip to: 7228
/* 7209 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 7212 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 7220
/* 7216 */    MCD::OPC_Decode, 178, 6, 87, // Opcode: LWBRX
/* 7220 */    MCD::OPC_FilterValue, 2, 32, 25, // Skip to: 13656
/* 7224 */    MCD::OPC_Decode, 135, 6, 97, // Opcode: LFSX
/* 7228 */    MCD::OPC_FilterValue, 17, 25, 0, // Skip to: 7257
/* 7232 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 7235 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 7249
/* 7239 */    MCD::OPC_CheckField, 11, 15, 0, 11, 25, // Skip to: 13656
/* 7245 */    MCD::OPC_Decode, 217, 10, 0, // Opcode: TLBSYNC
/* 7249 */    MCD::OPC_FilterValue, 2, 3, 25, // Skip to: 13656
/* 7253 */    MCD::OPC_Decode, 134, 6, 98, // Opcode: LFSUX
/* 7257 */    MCD::OPC_FilterValue, 18, 31, 0, // Skip to: 7292
/* 7261 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 7264 */    MCD::OPC_FilterValue, 0, 16, 0, // Skip to: 7284
/* 7268 */    MCD::OPC_CheckField, 23, 3, 0, 238, 24, // Skip to: 13656
/* 7274 */    MCD::OPC_CheckField, 11, 10, 0, 232, 24, // Skip to: 13656
/* 7280 */    MCD::OPC_Decode, 182, 10, 99, // Opcode: SYNC
/* 7284 */    MCD::OPC_FilterValue, 2, 224, 24, // Skip to: 13656
/* 7288 */    MCD::OPC_Decode, 129, 6, 100, // Opcode: LFDX
/* 7292 */    MCD::OPC_FilterValue, 19, 10, 0, // Skip to: 7306
/* 7296 */    MCD::OPC_CheckField, 0, 2, 2, 210, 24, // Skip to: 13656
/* 7302 */    MCD::OPC_Decode, 128, 6, 101, // Opcode: LFDUX
/* 7306 */    MCD::OPC_FilterValue, 20, 19, 0, // Skip to: 7329
/* 7310 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 7313 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 7321
/* 7317 */    MCD::OPC_Decode, 130, 10, 87, // Opcode: STWBRX
/* 7321 */    MCD::OPC_FilterValue, 2, 187, 24, // Skip to: 13656
/* 7325 */    MCD::OPC_Decode, 235, 9, 97, // Opcode: STFSX
/* 7329 */    MCD::OPC_FilterValue, 21, 19, 0, // Skip to: 7352
/* 7333 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 7336 */    MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 7344
/* 7340 */    MCD::OPC_Decode, 212, 9, 87, // Opcode: STBCX
/* 7344 */    MCD::OPC_FilterValue, 2, 164, 24, // Skip to: 13656
/* 7348 */    MCD::OPC_Decode, 234, 9, 102, // Opcode: STFSUX
/* 7352 */    MCD::OPC_FilterValue, 22, 19, 0, // Skip to: 7375
/* 7356 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 7359 */    MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 7367
/* 7363 */    MCD::OPC_Decode, 240, 9, 87, // Opcode: STHCX
/* 7367 */    MCD::OPC_FilterValue, 2, 141, 24, // Skip to: 13656
/* 7371 */    MCD::OPC_Decode, 230, 9, 100, // Opcode: STFDX
/* 7375 */    MCD::OPC_FilterValue, 23, 25, 0, // Skip to: 7404
/* 7379 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 7382 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 7396
/* 7386 */    MCD::OPC_CheckField, 21, 5, 0, 120, 24, // Skip to: 13656
/* 7392 */    MCD::OPC_Decode, 227, 2, 92, // Opcode: DCBA
/* 7396 */    MCD::OPC_FilterValue, 2, 112, 24, // Skip to: 13656
/* 7400 */    MCD::OPC_Decode, 229, 9, 103, // Opcode: STFDUX
/* 7404 */    MCD::OPC_FilterValue, 24, 10, 0, // Skip to: 7418
/* 7408 */    MCD::OPC_CheckField, 0, 2, 0, 98, 24, // Skip to: 13656
/* 7414 */    MCD::OPC_Decode, 146, 6, 87, // Opcode: LHBRX
/* 7418 */    MCD::OPC_FilterValue, 25, 43, 0, // Skip to: 7465
/* 7422 */    MCD::OPC_ExtractField, 23, 3,  // Inst{25-23} ...
/* 7425 */    MCD::OPC_FilterValue, 0, 16, 0, // Skip to: 7445
/* 7429 */    MCD::OPC_CheckField, 11, 10, 0, 77, 24, // Skip to: 13656
/* 7435 */    MCD::OPC_CheckField, 0, 2, 0, 71, 24, // Skip to: 13656
/* 7441 */    MCD::OPC_Decode, 139, 3, 104, // Opcode: DSS
/* 7445 */    MCD::OPC_FilterValue, 4, 63, 24, // Skip to: 13656
/* 7449 */    MCD::OPC_CheckField, 11, 12, 0, 57, 24, // Skip to: 13656
/* 7455 */    MCD::OPC_CheckField, 0, 2, 0, 51, 24, // Skip to: 13656
/* 7461 */    MCD::OPC_Decode, 140, 3, 0, // Opcode: DSSALL
/* 7465 */    MCD::OPC_FilterValue, 26, 41, 0, // Skip to: 7510
/* 7469 */    MCD::OPC_ExtractField, 1, 1,  // Inst{1} ...
/* 7472 */    MCD::OPC_FilterValue, 0, 20, 0, // Skip to: 7496
/* 7476 */    MCD::OPC_CheckField, 11, 15, 0, 10, 0, // Skip to: 7492
/* 7482 */    MCD::OPC_CheckField, 0, 1, 0, 4, 0, // Skip to: 7492
/* 7488 */    MCD::OPC_Decode, 227, 4, 0, // Opcode: EnforceIEIO
/* 7492 */    MCD::OPC_Decode, 208, 6, 105, // Opcode: MBAR
/* 7496 */    MCD::OPC_FilterValue, 1, 12, 24, // Skip to: 13656
/* 7500 */    MCD::OPC_CheckField, 0, 1, 0, 6, 24, // Skip to: 13656
/* 7506 */    MCD::OPC_Decode, 130, 6, 100, // Opcode: LFIWAX
/* 7510 */    MCD::OPC_FilterValue, 27, 25, 0, // Skip to: 7539
/* 7514 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 7517 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 7531
/* 7521 */    MCD::OPC_CheckField, 11, 15, 0, 241, 23, // Skip to: 13656
/* 7527 */    MCD::OPC_Decode, 237, 6, 0, // Opcode: MSGSYNC
/* 7531 */    MCD::OPC_FilterValue, 2, 233, 23, // Skip to: 13656
/* 7535 */    MCD::OPC_Decode, 131, 6, 100, // Opcode: LFIWZX
/* 7539 */    MCD::OPC_FilterValue, 28, 10, 0, // Skip to: 7553
/* 7543 */    MCD::OPC_CheckField, 0, 2, 0, 219, 23, // Skip to: 13656
/* 7549 */    MCD::OPC_Decode, 238, 9, 87, // Opcode: STHBRX
/* 7553 */    MCD::OPC_FilterValue, 30, 25, 0, // Skip to: 7582
/* 7557 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 7560 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 7574
/* 7564 */    MCD::OPC_CheckField, 21, 5, 0, 198, 23, // Skip to: 13656
/* 7570 */    MCD::OPC_Decode, 212, 5, 92, // Opcode: ICBI
/* 7574 */    MCD::OPC_FilterValue, 2, 190, 23, // Skip to: 13656
/* 7578 */    MCD::OPC_Decode, 231, 9, 100, // Opcode: STFIWX
/* 7582 */    MCD::OPC_FilterValue, 31, 182, 23, // Skip to: 13656
/* 7586 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 7589 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 7603
/* 7593 */    MCD::OPC_CheckField, 0, 2, 0, 169, 23, // Skip to: 13656
/* 7599 */    MCD::OPC_Decode, 244, 2, 92, // Opcode: DCBZ
/* 7603 */    MCD::OPC_FilterValue, 1, 161, 23, // Skip to: 13656
/* 7607 */    MCD::OPC_CheckField, 0, 2, 0, 155, 23, // Skip to: 13656
/* 7613 */    MCD::OPC_Decode, 245, 2, 92, // Opcode: DCBZL
/* 7617 */    MCD::OPC_FilterValue, 12, 95, 0, // Skip to: 7716
/* 7621 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 7624 */    MCD::OPC_FilterValue, 0, 19, 0, // Skip to: 7647
/* 7628 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 7631 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 7639
/* 7635 */    MCD::OPC_Decode, 182, 9, 106, // Opcode: SLW
/* 7639 */    MCD::OPC_FilterValue, 1, 125, 23, // Skip to: 13656
/* 7643 */    MCD::OPC_Decode, 187, 9, 106, // Opcode: SLWo
/* 7647 */    MCD::OPC_FilterValue, 16, 19, 0, // Skip to: 7670
/* 7651 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 7654 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 7662
/* 7658 */    MCD::OPC_Decode, 203, 9, 106, // Opcode: SRW
/* 7662 */    MCD::OPC_FilterValue, 1, 102, 23, // Skip to: 13656
/* 7666 */    MCD::OPC_Decode, 208, 9, 106, // Opcode: SRWo
/* 7670 */    MCD::OPC_FilterValue, 24, 19, 0, // Skip to: 7693
/* 7674 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 7677 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 7685
/* 7681 */    MCD::OPC_Decode, 195, 9, 106, // Opcode: SRAW
/* 7685 */    MCD::OPC_FilterValue, 1, 79, 23, // Skip to: 13656
/* 7689 */    MCD::OPC_Decode, 198, 9, 106, // Opcode: SRAWo
/* 7693 */    MCD::OPC_FilterValue, 25, 71, 23, // Skip to: 13656
/* 7697 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 7700 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 7708
/* 7704 */    MCD::OPC_Decode, 196, 9, 107, // Opcode: SRAWI
/* 7708 */    MCD::OPC_FilterValue, 1, 56, 23, // Skip to: 13656
/* 7712 */    MCD::OPC_Decode, 197, 9, 107, // Opcode: SRAWIo
/* 7716 */    MCD::OPC_FilterValue, 13, 110, 1, // Skip to: 8086
/* 7720 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 7723 */    MCD::OPC_FilterValue, 0, 47, 0, // Skip to: 7774
/* 7727 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 7730 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 7744
/* 7734 */    MCD::OPC_CheckField, 11, 5, 0, 28, 23, // Skip to: 13656
/* 7740 */    MCD::OPC_Decode, 194, 2, 108, // Opcode: CNTLZW
/* 7744 */    MCD::OPC_FilterValue, 1, 10, 0, // Skip to: 7758
/* 7748 */    MCD::OPC_CheckField, 11, 5, 0, 14, 23, // Skip to: 13656
/* 7754 */    MCD::OPC_Decode, 197, 2, 108, // Opcode: CNTLZWo
/* 7758 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 7766
/* 7762 */    MCD::OPC_Decode, 178, 9, 109, // Opcode: SLD
/* 7766 */    MCD::OPC_FilterValue, 3, 254, 22, // Skip to: 13656
/* 7770 */    MCD::OPC_Decode, 181, 9, 109, // Opcode: SLDo
/* 7774 */    MCD::OPC_FilterValue, 1, 31, 0, // Skip to: 7809
/* 7778 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 7781 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 7795
/* 7785 */    MCD::OPC_CheckField, 11, 5, 0, 233, 22, // Skip to: 13656
/* 7791 */    MCD::OPC_Decode, 192, 2, 110, // Opcode: CNTLZD
/* 7795 */    MCD::OPC_FilterValue, 1, 225, 22, // Skip to: 13656
/* 7799 */    MCD::OPC_CheckField, 11, 5, 0, 219, 22, // Skip to: 13656
/* 7805 */    MCD::OPC_Decode, 193, 2, 110, // Opcode: CNTLZDo
/* 7809 */    MCD::OPC_FilterValue, 11, 16, 0, // Skip to: 7829
/* 7813 */    MCD::OPC_CheckField, 11, 5, 0, 205, 22, // Skip to: 13656
/* 7819 */    MCD::OPC_CheckField, 0, 2, 0, 199, 22, // Skip to: 13656
/* 7825 */    MCD::OPC_Decode, 189, 7, 108, // Opcode: POPCNTW
/* 7829 */    MCD::OPC_FilterValue, 15, 16, 0, // Skip to: 7849
/* 7833 */    MCD::OPC_CheckField, 11, 5, 0, 185, 22, // Skip to: 13656
/* 7839 */    MCD::OPC_CheckField, 0, 2, 0, 179, 22, // Skip to: 13656
/* 7845 */    MCD::OPC_Decode, 188, 7, 110, // Opcode: POPCNTD
/* 7849 */    MCD::OPC_FilterValue, 16, 47, 0, // Skip to: 7900
/* 7853 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 7856 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 7870
/* 7860 */    MCD::OPC_CheckField, 11, 5, 0, 158, 22, // Skip to: 13656
/* 7866 */    MCD::OPC_Decode, 200, 2, 108, // Opcode: CNTTZW
/* 7870 */    MCD::OPC_FilterValue, 1, 10, 0, // Skip to: 7884
/* 7874 */    MCD::OPC_CheckField, 11, 5, 0, 144, 22, // Skip to: 13656
/* 7880 */    MCD::OPC_Decode, 203, 2, 108, // Opcode: CNTTZWo
/* 7884 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 7892
/* 7888 */    MCD::OPC_Decode, 199, 9, 109, // Opcode: SRD
/* 7892 */    MCD::OPC_FilterValue, 3, 128, 22, // Skip to: 13656
/* 7896 */    MCD::OPC_Decode, 202, 9, 109, // Opcode: SRDo
/* 7900 */    MCD::OPC_FilterValue, 17, 31, 0, // Skip to: 7935
/* 7904 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 7907 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 7921
/* 7911 */    MCD::OPC_CheckField, 11, 5, 0, 107, 22, // Skip to: 13656
/* 7917 */    MCD::OPC_Decode, 198, 2, 110, // Opcode: CNTTZD
/* 7921 */    MCD::OPC_FilterValue, 1, 99, 22, // Skip to: 13656
/* 7925 */    MCD::OPC_CheckField, 11, 5, 0, 93, 22, // Skip to: 13656
/* 7931 */    MCD::OPC_Decode, 199, 2, 110, // Opcode: CNTTZDo
/* 7935 */    MCD::OPC_FilterValue, 24, 19, 0, // Skip to: 7958
/* 7939 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 7942 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 7950
/* 7946 */    MCD::OPC_Decode, 191, 9, 109, // Opcode: SRAD
/* 7950 */    MCD::OPC_FilterValue, 1, 70, 22, // Skip to: 13656
/* 7954 */    MCD::OPC_Decode, 194, 9, 109, // Opcode: SRADo
/* 7958 */    MCD::OPC_FilterValue, 25, 19, 0, // Skip to: 7981
/* 7962 */    MCD::OPC_ExtractField, 0, 1,  // Inst{0} ...
/* 7965 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 7973
/* 7969 */    MCD::OPC_Decode, 192, 9, 111, // Opcode: SRADI
/* 7973 */    MCD::OPC_FilterValue, 1, 47, 22, // Skip to: 13656
/* 7977 */    MCD::OPC_Decode, 193, 9, 111, // Opcode: SRADIo
/* 7981 */    MCD::OPC_FilterValue, 28, 31, 0, // Skip to: 8016
/* 7985 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 7988 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 8002
/* 7992 */    MCD::OPC_CheckField, 11, 5, 0, 26, 22, // Skip to: 13656
/* 7998 */    MCD::OPC_Decode, 218, 4, 108, // Opcode: EXTSH
/* 8002 */    MCD::OPC_FilterValue, 1, 18, 22, // Skip to: 13656
/* 8006 */    MCD::OPC_CheckField, 11, 5, 0, 12, 22, // Skip to: 13656
/* 8012 */    MCD::OPC_Decode, 222, 4, 108, // Opcode: EXTSHo
/* 8016 */    MCD::OPC_FilterValue, 29, 31, 0, // Skip to: 8051
/* 8020 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 8023 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 8037
/* 8027 */    MCD::OPC_CheckField, 11, 5, 0, 247, 21, // Skip to: 13656
/* 8033 */    MCD::OPC_Decode, 213, 4, 108, // Opcode: EXTSB
/* 8037 */    MCD::OPC_FilterValue, 1, 239, 21, // Skip to: 13656
/* 8041 */    MCD::OPC_CheckField, 11, 5, 0, 233, 21, // Skip to: 13656
/* 8047 */    MCD::OPC_Decode, 217, 4, 108, // Opcode: EXTSBo
/* 8051 */    MCD::OPC_FilterValue, 30, 225, 21, // Skip to: 13656
/* 8055 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 8058 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 8072
/* 8062 */    MCD::OPC_CheckField, 11, 5, 0, 212, 21, // Skip to: 13656
/* 8068 */    MCD::OPC_Decode, 223, 4, 110, // Opcode: EXTSW
/* 8072 */    MCD::OPC_FilterValue, 1, 204, 21, // Skip to: 13656
/* 8076 */    MCD::OPC_CheckField, 11, 5, 0, 198, 21, // Skip to: 13656
/* 8082 */    MCD::OPC_Decode, 226, 4, 110, // Opcode: EXTSWo
/* 8086 */    MCD::OPC_FilterValue, 14, 215, 0, // Skip to: 8305
/* 8090 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 8093 */    MCD::OPC_FilterValue, 0, 19, 0, // Skip to: 8116
/* 8097 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 8100 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 8108
/* 8104 */    MCD::OPC_Decode, 131, 1, 106, // Opcode: AND
/* 8108 */    MCD::OPC_FilterValue, 1, 168, 21, // Skip to: 13656
/* 8112 */    MCD::OPC_Decode, 146, 1, 106, // Opcode: ANDo
/* 8116 */    MCD::OPC_FilterValue, 1, 19, 0, // Skip to: 8139
/* 8120 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 8123 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 8131
/* 8127 */    MCD::OPC_Decode, 134, 1, 106, // Opcode: ANDC
/* 8131 */    MCD::OPC_FilterValue, 1, 145, 21, // Skip to: 13656
/* 8135 */    MCD::OPC_Decode, 137, 1, 106, // Opcode: ANDCo
/* 8139 */    MCD::OPC_FilterValue, 3, 19, 0, // Skip to: 8162
/* 8143 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 8146 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 8154
/* 8150 */    MCD::OPC_Decode, 172, 7, 106, // Opcode: NOR
/* 8154 */    MCD::OPC_FilterValue, 1, 122, 21, // Skip to: 13656
/* 8158 */    MCD::OPC_Decode, 175, 7, 106, // Opcode: NORo
/* 8162 */    MCD::OPC_FilterValue, 7, 10, 0, // Skip to: 8176
/* 8166 */    MCD::OPC_CheckField, 0, 2, 0, 108, 21, // Skip to: 13656
/* 8172 */    MCD::OPC_Decode, 168, 2, 112, // Opcode: BPERMD
/* 8176 */    MCD::OPC_FilterValue, 8, 19, 0, // Skip to: 8199
/* 8180 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 8183 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 8191
/* 8187 */    MCD::OPC_Decode, 158, 3, 106, // Opcode: EQV
/* 8191 */    MCD::OPC_FilterValue, 1, 85, 21, // Skip to: 13656
/* 8195 */    MCD::OPC_Decode, 161, 3, 106, // Opcode: EQVo
/* 8199 */    MCD::OPC_FilterValue, 9, 19, 0, // Skip to: 8222
/* 8203 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 8206 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 8214
/* 8210 */    MCD::OPC_Decode, 138, 13, 106, // Opcode: XOR
/* 8214 */    MCD::OPC_FilterValue, 1, 62, 21, // Skip to: 13656
/* 8218 */    MCD::OPC_Decode, 145, 13, 106, // Opcode: XORo
/* 8222 */    MCD::OPC_FilterValue, 12, 19, 0, // Skip to: 8245
/* 8226 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 8229 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 8237
/* 8233 */    MCD::OPC_Decode, 179, 7, 106, // Opcode: ORC
/* 8237 */    MCD::OPC_FilterValue, 1, 39, 21, // Skip to: 13656
/* 8241 */    MCD::OPC_Decode, 182, 7, 106, // Opcode: ORCo
/* 8245 */    MCD::OPC_FilterValue, 13, 19, 0, // Skip to: 8268
/* 8249 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 8252 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 8260
/* 8256 */    MCD::OPC_Decode, 176, 7, 106, // Opcode: OR
/* 8260 */    MCD::OPC_FilterValue, 1, 16, 21, // Skip to: 13656
/* 8264 */    MCD::OPC_Decode, 187, 7, 106, // Opcode: ORo
/* 8268 */    MCD::OPC_FilterValue, 14, 19, 0, // Skip to: 8291
/* 8272 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 8275 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 8283
/* 8279 */    MCD::OPC_Decode, 160, 7, 106, // Opcode: NAND
/* 8283 */    MCD::OPC_FilterValue, 1, 249, 20, // Skip to: 13656
/* 8287 */    MCD::OPC_Decode, 163, 7, 106, // Opcode: NANDo
/* 8291 */    MCD::OPC_FilterValue, 15, 241, 20, // Skip to: 13656
/* 8295 */    MCD::OPC_CheckField, 0, 2, 0, 235, 20, // Skip to: 13656
/* 8301 */    MCD::OPC_Decode, 179, 2, 106, // Opcode: CMPB
/* 8305 */    MCD::OPC_FilterValue, 15, 227, 20, // Skip to: 13656
/* 8309 */    MCD::OPC_CheckField, 23, 3, 0, 221, 20, // Skip to: 13656
/* 8315 */    MCD::OPC_CheckField, 6, 15, 1, 215, 20, // Skip to: 13656
/* 8321 */    MCD::OPC_CheckField, 0, 2, 0, 209, 20, // Skip to: 13656
/* 8327 */    MCD::OPC_Decode, 135, 13, 99, // Opcode: WAIT
/* 8331 */    MCD::OPC_FilterValue, 32, 4, 0, // Skip to: 8339
/* 8335 */    MCD::OPC_Decode, 180, 6, 113, // Opcode: LWZ
/* 8339 */    MCD::OPC_FilterValue, 33, 4, 0, // Skip to: 8347
/* 8343 */    MCD::OPC_Decode, 183, 6, 113, // Opcode: LWZU
/* 8347 */    MCD::OPC_FilterValue, 34, 4, 0, // Skip to: 8355
/* 8351 */    MCD::OPC_Decode, 228, 5, 113, // Opcode: LBZ
/* 8355 */    MCD::OPC_FilterValue, 35, 4, 0, // Skip to: 8363
/* 8359 */    MCD::OPC_Decode, 231, 5, 113, // Opcode: LBZU
/* 8363 */    MCD::OPC_FilterValue, 36, 4, 0, // Skip to: 8371
/* 8367 */    MCD::OPC_Decode, 255, 9, 113, // Opcode: STW
/* 8371 */    MCD::OPC_FilterValue, 37, 4, 0, // Skip to: 8379
/* 8375 */    MCD::OPC_Decode, 133, 10, 113, // Opcode: STWU
/* 8379 */    MCD::OPC_FilterValue, 38, 4, 0, // Skip to: 8387
/* 8383 */    MCD::OPC_Decode, 209, 9, 113, // Opcode: STB
/* 8387 */    MCD::OPC_FilterValue, 39, 4, 0, // Skip to: 8395
/* 8391 */    MCD::OPC_Decode, 213, 9, 113, // Opcode: STBU
/* 8395 */    MCD::OPC_FilterValue, 40, 4, 0, // Skip to: 8403
/* 8399 */    MCD::OPC_Decode, 148, 6, 113, // Opcode: LHZ
/* 8403 */    MCD::OPC_FilterValue, 41, 4, 0, // Skip to: 8411
/* 8407 */    MCD::OPC_Decode, 151, 6, 113, // Opcode: LHZU
/* 8411 */    MCD::OPC_FilterValue, 42, 4, 0, // Skip to: 8419
/* 8415 */    MCD::OPC_Decode, 136, 6, 113, // Opcode: LHA
/* 8419 */    MCD::OPC_FilterValue, 43, 4, 0, // Skip to: 8427
/* 8423 */    MCD::OPC_Decode, 140, 6, 113, // Opcode: LHAU
/* 8427 */    MCD::OPC_FilterValue, 44, 4, 0, // Skip to: 8435
/* 8431 */    MCD::OPC_Decode, 236, 9, 113, // Opcode: STH
/* 8435 */    MCD::OPC_FilterValue, 45, 4, 0, // Skip to: 8443
/* 8439 */    MCD::OPC_Decode, 241, 9, 113, // Opcode: STHU
/* 8443 */    MCD::OPC_FilterValue, 46, 4, 0, // Skip to: 8451
/* 8447 */    MCD::OPC_Decode, 161, 6, 113, // Opcode: LMW
/* 8451 */    MCD::OPC_FilterValue, 47, 4, 0, // Skip to: 8459
/* 8455 */    MCD::OPC_Decode, 247, 9, 113, // Opcode: STMW
/* 8459 */    MCD::OPC_FilterValue, 48, 4, 0, // Skip to: 8467
/* 8463 */    MCD::OPC_Decode, 132, 6, 114, // Opcode: LFS
/* 8467 */    MCD::OPC_FilterValue, 49, 4, 0, // Skip to: 8475
/* 8471 */    MCD::OPC_Decode, 133, 6, 114, // Opcode: LFSU
/* 8475 */    MCD::OPC_FilterValue, 50, 4, 0, // Skip to: 8483
/* 8479 */    MCD::OPC_Decode, 254, 5, 115, // Opcode: LFD
/* 8483 */    MCD::OPC_FilterValue, 51, 4, 0, // Skip to: 8491
/* 8487 */    MCD::OPC_Decode, 255, 5, 115, // Opcode: LFDU
/* 8491 */    MCD::OPC_FilterValue, 52, 4, 0, // Skip to: 8499
/* 8495 */    MCD::OPC_Decode, 232, 9, 114, // Opcode: STFS
/* 8499 */    MCD::OPC_FilterValue, 53, 4, 0, // Skip to: 8507
/* 8503 */    MCD::OPC_Decode, 233, 9, 114, // Opcode: STFSU
/* 8507 */    MCD::OPC_FilterValue, 54, 4, 0, // Skip to: 8515
/* 8511 */    MCD::OPC_Decode, 227, 9, 115, // Opcode: STFD
/* 8515 */    MCD::OPC_FilterValue, 55, 4, 0, // Skip to: 8523
/* 8519 */    MCD::OPC_Decode, 228, 9, 115, // Opcode: STFDU
/* 8523 */    MCD::OPC_FilterValue, 57, 19, 0, // Skip to: 8546
/* 8527 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 8530 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 8538
/* 8534 */    MCD::OPC_Decode, 190, 6, 116, // Opcode: LXSD
/* 8538 */    MCD::OPC_FilterValue, 3, 250, 19, // Skip to: 13656
/* 8542 */    MCD::OPC_Decode, 196, 6, 116, // Opcode: LXSSP
/* 8546 */    MCD::OPC_FilterValue, 58, 27, 0, // Skip to: 8577
/* 8550 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 8553 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 8561
/* 8557 */    MCD::OPC_Decode, 237, 5, 117, // Opcode: LD
/* 8561 */    MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 8569
/* 8565 */    MCD::OPC_Decode, 244, 5, 117, // Opcode: LDU
/* 8569 */    MCD::OPC_FilterValue, 2, 219, 19, // Skip to: 13656
/* 8573 */    MCD::OPC_Decode, 170, 6, 117, // Opcode: LWA
/* 8577 */    MCD::OPC_FilterValue, 59, 113, 1, // Skip to: 8950
/* 8581 */    MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 8584 */    MCD::OPC_FilterValue, 28, 31, 0, // Skip to: 8619
/* 8588 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 8591 */    MCD::OPC_FilterValue, 26, 10, 0, // Skip to: 8605
/* 8595 */    MCD::OPC_CheckField, 16, 5, 0, 191, 19, // Skip to: 13656
/* 8601 */    MCD::OPC_Decode, 238, 4, 118, // Opcode: FCFIDS
/* 8605 */    MCD::OPC_FilterValue, 30, 183, 19, // Skip to: 13656
/* 8609 */    MCD::OPC_CheckField, 16, 5, 0, 177, 19, // Skip to: 13656
/* 8615 */    MCD::OPC_Decode, 241, 4, 118, // Opcode: FCFIDUS
/* 8619 */    MCD::OPC_FilterValue, 29, 31, 0, // Skip to: 8654
/* 8623 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 8626 */    MCD::OPC_FilterValue, 26, 10, 0, // Skip to: 8640
/* 8630 */    MCD::OPC_CheckField, 16, 5, 0, 156, 19, // Skip to: 13656
/* 8636 */    MCD::OPC_Decode, 239, 4, 118, // Opcode: FCFIDSo
/* 8640 */    MCD::OPC_FilterValue, 30, 148, 19, // Skip to: 13656
/* 8644 */    MCD::OPC_CheckField, 16, 5, 0, 142, 19, // Skip to: 13656
/* 8650 */    MCD::OPC_Decode, 242, 4, 118, // Opcode: FCFIDUSo
/* 8654 */    MCD::OPC_FilterValue, 36, 10, 0, // Skip to: 8668
/* 8658 */    MCD::OPC_CheckField, 6, 5, 0, 128, 19, // Skip to: 13656
/* 8664 */    MCD::OPC_Decode, 136, 5, 119, // Opcode: FDIVS
/* 8668 */    MCD::OPC_FilterValue, 37, 10, 0, // Skip to: 8682
/* 8672 */    MCD::OPC_CheckField, 6, 5, 0, 114, 19, // Skip to: 13656
/* 8678 */    MCD::OPC_Decode, 137, 5, 119, // Opcode: FDIVSo
/* 8682 */    MCD::OPC_FilterValue, 40, 10, 0, // Skip to: 8696
/* 8686 */    MCD::OPC_CheckField, 6, 5, 0, 100, 19, // Skip to: 13656
/* 8692 */    MCD::OPC_Decode, 204, 5, 119, // Opcode: FSUBS
/* 8696 */    MCD::OPC_FilterValue, 41, 10, 0, // Skip to: 8710
/* 8700 */    MCD::OPC_CheckField, 6, 5, 0, 86, 19, // Skip to: 13656
/* 8706 */    MCD::OPC_Decode, 205, 5, 119, // Opcode: FSUBSo
/* 8710 */    MCD::OPC_FilterValue, 42, 10, 0, // Skip to: 8724
/* 8714 */    MCD::OPC_CheckField, 6, 5, 0, 72, 19, // Skip to: 13656
/* 8720 */    MCD::OPC_Decode, 233, 4, 119, // Opcode: FADDS
/* 8724 */    MCD::OPC_FilterValue, 43, 10, 0, // Skip to: 8738
/* 8728 */    MCD::OPC_CheckField, 6, 5, 0, 58, 19, // Skip to: 13656
/* 8734 */    MCD::OPC_Decode, 234, 4, 119, // Opcode: FADDSo
/* 8738 */    MCD::OPC_FilterValue, 44, 16, 0, // Skip to: 8758
/* 8742 */    MCD::OPC_CheckField, 16, 5, 0, 44, 19, // Skip to: 13656
/* 8748 */    MCD::OPC_CheckField, 6, 5, 0, 38, 19, // Skip to: 13656
/* 8754 */    MCD::OPC_Decode, 200, 5, 120, // Opcode: FSQRTS
/* 8758 */    MCD::OPC_FilterValue, 45, 16, 0, // Skip to: 8778
/* 8762 */    MCD::OPC_CheckField, 16, 5, 0, 24, 19, // Skip to: 13656
/* 8768 */    MCD::OPC_CheckField, 6, 5, 0, 18, 19, // Skip to: 13656
/* 8774 */    MCD::OPC_Decode, 201, 5, 120, // Opcode: FSQRTSo
/* 8778 */    MCD::OPC_FilterValue, 48, 16, 0, // Skip to: 8798
/* 8782 */    MCD::OPC_CheckField, 16, 5, 0, 4, 19, // Skip to: 13656
/* 8788 */    MCD::OPC_CheckField, 6, 5, 0, 254, 18, // Skip to: 13656
/* 8794 */    MCD::OPC_Decode, 170, 5, 120, // Opcode: FRES
/* 8798 */    MCD::OPC_FilterValue, 49, 16, 0, // Skip to: 8818
/* 8802 */    MCD::OPC_CheckField, 16, 5, 0, 240, 18, // Skip to: 13656
/* 8808 */    MCD::OPC_CheckField, 6, 5, 0, 234, 18, // Skip to: 13656
/* 8814 */    MCD::OPC_Decode, 171, 5, 120, // Opcode: FRESo
/* 8818 */    MCD::OPC_FilterValue, 50, 10, 0, // Skip to: 8832
/* 8822 */    MCD::OPC_CheckField, 11, 5, 0, 220, 18, // Skip to: 13656
/* 8828 */    MCD::OPC_Decode, 150, 5, 121, // Opcode: FMULS
/* 8832 */    MCD::OPC_FilterValue, 51, 10, 0, // Skip to: 8846
/* 8836 */    MCD::OPC_CheckField, 11, 5, 0, 206, 18, // Skip to: 13656
/* 8842 */    MCD::OPC_Decode, 151, 5, 121, // Opcode: FMULSo
/* 8846 */    MCD::OPC_FilterValue, 52, 16, 0, // Skip to: 8866
/* 8850 */    MCD::OPC_CheckField, 16, 5, 0, 192, 18, // Skip to: 13656
/* 8856 */    MCD::OPC_CheckField, 6, 5, 0, 186, 18, // Skip to: 13656
/* 8862 */    MCD::OPC_Decode, 192, 5, 120, // Opcode: FRSQRTES
/* 8866 */    MCD::OPC_FilterValue, 53, 16, 0, // Skip to: 8886
/* 8870 */    MCD::OPC_CheckField, 16, 5, 0, 172, 18, // Skip to: 13656
/* 8876 */    MCD::OPC_CheckField, 6, 5, 0, 166, 18, // Skip to: 13656
/* 8882 */    MCD::OPC_Decode, 193, 5, 120, // Opcode: FRSQRTESo
/* 8886 */    MCD::OPC_FilterValue, 56, 4, 0, // Skip to: 8894
/* 8890 */    MCD::OPC_Decode, 146, 5, 122, // Opcode: FMSUBS
/* 8894 */    MCD::OPC_FilterValue, 57, 4, 0, // Skip to: 8902
/* 8898 */    MCD::OPC_Decode, 147, 5, 122, // Opcode: FMSUBSo
/* 8902 */    MCD::OPC_FilterValue, 58, 4, 0, // Skip to: 8910
/* 8906 */    MCD::OPC_Decode, 140, 5, 122, // Opcode: FMADDS
/* 8910 */    MCD::OPC_FilterValue, 59, 4, 0, // Skip to: 8918
/* 8914 */    MCD::OPC_Decode, 141, 5, 122, // Opcode: FMADDSo
/* 8918 */    MCD::OPC_FilterValue, 60, 4, 0, // Skip to: 8926
/* 8922 */    MCD::OPC_Decode, 166, 5, 122, // Opcode: FNMSUBS
/* 8926 */    MCD::OPC_FilterValue, 61, 4, 0, // Skip to: 8934
/* 8930 */    MCD::OPC_Decode, 167, 5, 122, // Opcode: FNMSUBSo
/* 8934 */    MCD::OPC_FilterValue, 62, 4, 0, // Skip to: 8942
/* 8938 */    MCD::OPC_Decode, 162, 5, 122, // Opcode: FNMADDS
/* 8942 */    MCD::OPC_FilterValue, 63, 102, 18, // Skip to: 13656
/* 8946 */    MCD::OPC_Decode, 163, 5, 122, // Opcode: FNMADDSo
/* 8950 */    MCD::OPC_FilterValue, 60, 69, 12, // Skip to: 12095
/* 8954 */    MCD::OPC_ExtractField, 4, 2,  // Inst{5-4} ...
/* 8957 */    MCD::OPC_FilterValue, 0, 238, 2, // Skip to: 9711
/* 8961 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 8964 */    MCD::OPC_FilterValue, 0, 19, 0, // Skip to: 8987
/* 8968 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 8971 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 8979
/* 8975 */    MCD::OPC_Decode, 151, 13, 123, // Opcode: XSADDSP
/* 8979 */    MCD::OPC_FilterValue, 1, 65, 18, // Skip to: 13656
/* 8983 */    MCD::OPC_Decode, 198, 13, 124, // Opcode: XSMADDASP
/* 8987 */    MCD::OPC_FilterValue, 1, 19, 0, // Skip to: 9010
/* 8991 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 8994 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 9002
/* 8998 */    MCD::OPC_Decode, 254, 13, 123, // Opcode: XSSUBSP
/* 9002 */    MCD::OPC_FilterValue, 1, 42, 18, // Skip to: 13656
/* 9006 */    MCD::OPC_Decode, 200, 13, 124, // Opcode: XSMADDMSP
/* 9010 */    MCD::OPC_FilterValue, 2, 19, 0, // Skip to: 9033
/* 9014 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 9017 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 9025
/* 9021 */    MCD::OPC_Decode, 218, 13, 123, // Opcode: XSMULSP
/* 9025 */    MCD::OPC_FilterValue, 1, 19, 18, // Skip to: 13656
/* 9029 */    MCD::OPC_Decode, 210, 13, 124, // Opcode: XSMSUBASP
/* 9033 */    MCD::OPC_FilterValue, 3, 19, 0, // Skip to: 9056
/* 9037 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 9040 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 9048
/* 9044 */    MCD::OPC_Decode, 194, 13, 123, // Opcode: XSDIVSP
/* 9048 */    MCD::OPC_FilterValue, 1, 252, 17, // Skip to: 13656
/* 9052 */    MCD::OPC_Decode, 212, 13, 124, // Opcode: XSMSUBMSP
/* 9056 */    MCD::OPC_FilterValue, 4, 19, 0, // Skip to: 9079
/* 9060 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 9063 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 9071
/* 9067 */    MCD::OPC_Decode, 148, 13, 125, // Opcode: XSADDDP
/* 9071 */    MCD::OPC_FilterValue, 1, 229, 17, // Skip to: 13656
/* 9075 */    MCD::OPC_Decode, 197, 13, 126, // Opcode: XSMADDADP
/* 9079 */    MCD::OPC_FilterValue, 5, 19, 0, // Skip to: 9102
/* 9083 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 9086 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 9094
/* 9090 */    MCD::OPC_Decode, 251, 13, 125, // Opcode: XSSUBDP
/* 9094 */    MCD::OPC_FilterValue, 1, 206, 17, // Skip to: 13656
/* 9098 */    MCD::OPC_Decode, 199, 13, 126, // Opcode: XSMADDMDP
/* 9102 */    MCD::OPC_FilterValue, 6, 19, 0, // Skip to: 9125
/* 9106 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 9109 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 9117
/* 9113 */    MCD::OPC_Decode, 215, 13, 125, // Opcode: XSMULDP
/* 9117 */    MCD::OPC_FilterValue, 1, 183, 17, // Skip to: 13656
/* 9121 */    MCD::OPC_Decode, 209, 13, 126, // Opcode: XSMSUBADP
/* 9125 */    MCD::OPC_FilterValue, 7, 19, 0, // Skip to: 9148
/* 9129 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 9132 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 9140
/* 9136 */    MCD::OPC_Decode, 191, 13, 125, // Opcode: XSDIVDP
/* 9140 */    MCD::OPC_FilterValue, 1, 160, 17, // Skip to: 13656
/* 9144 */    MCD::OPC_Decode, 211, 13, 126, // Opcode: XSMSUBMDP
/* 9148 */    MCD::OPC_FilterValue, 8, 20, 0, // Skip to: 9172
/* 9152 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 9155 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 9163
/* 9159 */    MCD::OPC_Decode, 139, 14, 127, // Opcode: XVADDSP
/* 9163 */    MCD::OPC_FilterValue, 1, 137, 17, // Skip to: 13656
/* 9167 */    MCD::OPC_Decode, 183, 14, 128, 1, // Opcode: XVMADDASP
/* 9172 */    MCD::OPC_FilterValue, 9, 20, 0, // Skip to: 9196
/* 9176 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 9179 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 9187
/* 9183 */    MCD::OPC_Decode, 225, 14, 127, // Opcode: XVSUBSP
/* 9187 */    MCD::OPC_FilterValue, 1, 113, 17, // Skip to: 13656
/* 9191 */    MCD::OPC_Decode, 185, 14, 128, 1, // Opcode: XVMADDMSP
/* 9196 */    MCD::OPC_FilterValue, 10, 20, 0, // Skip to: 9220
/* 9200 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 9203 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 9211
/* 9207 */    MCD::OPC_Decode, 195, 14, 127, // Opcode: XVMULSP
/* 9211 */    MCD::OPC_FilterValue, 1, 89, 17, // Skip to: 13656
/* 9215 */    MCD::OPC_Decode, 191, 14, 128, 1, // Opcode: XVMSUBASP
/* 9220 */    MCD::OPC_FilterValue, 11, 20, 0, // Skip to: 9244
/* 9224 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 9227 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 9235
/* 9231 */    MCD::OPC_Decode, 179, 14, 127, // Opcode: XVDIVSP
/* 9235 */    MCD::OPC_FilterValue, 1, 65, 17, // Skip to: 13656
/* 9239 */    MCD::OPC_Decode, 193, 14, 128, 1, // Opcode: XVMSUBMSP
/* 9244 */    MCD::OPC_FilterValue, 12, 20, 0, // Skip to: 9268
/* 9248 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 9251 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 9259
/* 9255 */    MCD::OPC_Decode, 138, 14, 127, // Opcode: XVADDDP
/* 9259 */    MCD::OPC_FilterValue, 1, 41, 17, // Skip to: 13656
/* 9263 */    MCD::OPC_Decode, 182, 14, 128, 1, // Opcode: XVMADDADP
/* 9268 */    MCD::OPC_FilterValue, 13, 20, 0, // Skip to: 9292
/* 9272 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 9275 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 9283
/* 9279 */    MCD::OPC_Decode, 224, 14, 127, // Opcode: XVSUBDP
/* 9283 */    MCD::OPC_FilterValue, 1, 17, 17, // Skip to: 13656
/* 9287 */    MCD::OPC_Decode, 184, 14, 128, 1, // Opcode: XVMADDMDP
/* 9292 */    MCD::OPC_FilterValue, 14, 20, 0, // Skip to: 9316
/* 9296 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 9299 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 9307
/* 9303 */    MCD::OPC_Decode, 194, 14, 127, // Opcode: XVMULDP
/* 9307 */    MCD::OPC_FilterValue, 1, 249, 16, // Skip to: 13656
/* 9311 */    MCD::OPC_Decode, 190, 14, 128, 1, // Opcode: XVMSUBADP
/* 9316 */    MCD::OPC_FilterValue, 15, 20, 0, // Skip to: 9340
/* 9320 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 9323 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 9331
/* 9327 */    MCD::OPC_Decode, 178, 14, 127, // Opcode: XVDIVDP
/* 9331 */    MCD::OPC_FilterValue, 1, 225, 16, // Skip to: 13656
/* 9335 */    MCD::OPC_Decode, 192, 14, 128, 1, // Opcode: XVMSUBMDP
/* 9340 */    MCD::OPC_FilterValue, 16, 20, 0, // Skip to: 9364
/* 9344 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 9347 */    MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 9356
/* 9351 */    MCD::OPC_Decode, 203, 13, 129, 1, // Opcode: XSMAXCDP
/* 9356 */    MCD::OPC_FilterValue, 1, 200, 16, // Skip to: 13656
/* 9360 */    MCD::OPC_Decode, 224, 13, 124, // Opcode: XSNMADDASP
/* 9364 */    MCD::OPC_FilterValue, 17, 20, 0, // Skip to: 9388
/* 9368 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 9371 */    MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 9380
/* 9375 */    MCD::OPC_Decode, 206, 13, 129, 1, // Opcode: XSMINCDP
/* 9380 */    MCD::OPC_FilterValue, 1, 176, 16, // Skip to: 13656
/* 9384 */    MCD::OPC_Decode, 226, 13, 124, // Opcode: XSNMADDMSP
/* 9388 */    MCD::OPC_FilterValue, 18, 20, 0, // Skip to: 9412
/* 9392 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 9395 */    MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 9404
/* 9399 */    MCD::OPC_Decode, 205, 13, 129, 1, // Opcode: XSMAXJDP
/* 9404 */    MCD::OPC_FilterValue, 1, 152, 16, // Skip to: 13656
/* 9408 */    MCD::OPC_Decode, 230, 13, 124, // Opcode: XSNMSUBASP
/* 9412 */    MCD::OPC_FilterValue, 19, 20, 0, // Skip to: 9436
/* 9416 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 9419 */    MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 9428
/* 9423 */    MCD::OPC_Decode, 208, 13, 129, 1, // Opcode: XSMINJDP
/* 9428 */    MCD::OPC_FilterValue, 1, 128, 16, // Skip to: 13656
/* 9432 */    MCD::OPC_Decode, 232, 13, 124, // Opcode: XSNMSUBMSP
/* 9436 */    MCD::OPC_FilterValue, 20, 19, 0, // Skip to: 9459
/* 9440 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 9443 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 9451
/* 9447 */    MCD::OPC_Decode, 204, 13, 125, // Opcode: XSMAXDP
/* 9451 */    MCD::OPC_FilterValue, 1, 105, 16, // Skip to: 13656
/* 9455 */    MCD::OPC_Decode, 223, 13, 126, // Opcode: XSNMADDADP
/* 9459 */    MCD::OPC_FilterValue, 21, 19, 0, // Skip to: 9482
/* 9463 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 9466 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 9474
/* 9470 */    MCD::OPC_Decode, 207, 13, 125, // Opcode: XSMINDP
/* 9474 */    MCD::OPC_FilterValue, 1, 82, 16, // Skip to: 13656
/* 9478 */    MCD::OPC_Decode, 225, 13, 126, // Opcode: XSNMADDMDP
/* 9482 */    MCD::OPC_FilterValue, 22, 19, 0, // Skip to: 9505
/* 9486 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 9489 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 9497
/* 9493 */    MCD::OPC_Decode, 162, 13, 125, // Opcode: XSCPSGNDP
/* 9497 */    MCD::OPC_FilterValue, 1, 59, 16, // Skip to: 13656
/* 9501 */    MCD::OPC_Decode, 229, 13, 126, // Opcode: XSNMSUBADP
/* 9505 */    MCD::OPC_FilterValue, 23, 10, 0, // Skip to: 9519
/* 9509 */    MCD::OPC_CheckField, 3, 1, 1, 45, 16, // Skip to: 13656
/* 9515 */    MCD::OPC_Decode, 231, 13, 126, // Opcode: XSNMSUBMDP
/* 9519 */    MCD::OPC_FilterValue, 24, 20, 0, // Skip to: 9543
/* 9523 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 9526 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 9534
/* 9530 */    MCD::OPC_Decode, 187, 14, 127, // Opcode: XVMAXSP
/* 9534 */    MCD::OPC_FilterValue, 1, 22, 16, // Skip to: 13656
/* 9538 */    MCD::OPC_Decode, 201, 14, 128, 1, // Opcode: XVNMADDASP
/* 9543 */    MCD::OPC_FilterValue, 25, 20, 0, // Skip to: 9567
/* 9547 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 9550 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 9558
/* 9554 */    MCD::OPC_Decode, 189, 14, 127, // Opcode: XVMINSP
/* 9558 */    MCD::OPC_FilterValue, 1, 254, 15, // Skip to: 13656
/* 9562 */    MCD::OPC_Decode, 203, 14, 128, 1, // Opcode: XVNMADDMSP
/* 9567 */    MCD::OPC_FilterValue, 26, 20, 0, // Skip to: 9591
/* 9571 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 9574 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 9582
/* 9578 */    MCD::OPC_Decode, 157, 14, 127, // Opcode: XVCPSGNSP
/* 9582 */    MCD::OPC_FilterValue, 1, 230, 15, // Skip to: 13656
/* 9586 */    MCD::OPC_Decode, 205, 14, 128, 1, // Opcode: XVNMSUBASP
/* 9591 */    MCD::OPC_FilterValue, 27, 20, 0, // Skip to: 9615
/* 9595 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 9598 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 9606
/* 9602 */    MCD::OPC_Decode, 181, 14, 127, // Opcode: XVIEXPSP
/* 9606 */    MCD::OPC_FilterValue, 1, 206, 15, // Skip to: 13656
/* 9610 */    MCD::OPC_Decode, 207, 14, 128, 1, // Opcode: XVNMSUBMSP
/* 9615 */    MCD::OPC_FilterValue, 28, 20, 0, // Skip to: 9639
/* 9619 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 9622 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 9630
/* 9626 */    MCD::OPC_Decode, 186, 14, 127, // Opcode: XVMAXDP
/* 9630 */    MCD::OPC_FilterValue, 1, 182, 15, // Skip to: 13656
/* 9634 */    MCD::OPC_Decode, 200, 14, 128, 1, // Opcode: XVNMADDADP
/* 9639 */    MCD::OPC_FilterValue, 29, 20, 0, // Skip to: 9663
/* 9643 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 9646 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 9654
/* 9650 */    MCD::OPC_Decode, 188, 14, 127, // Opcode: XVMINDP
/* 9654 */    MCD::OPC_FilterValue, 1, 158, 15, // Skip to: 13656
/* 9658 */    MCD::OPC_Decode, 202, 14, 128, 1, // Opcode: XVNMADDMDP
/* 9663 */    MCD::OPC_FilterValue, 30, 20, 0, // Skip to: 9687
/* 9667 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 9670 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 9678
/* 9674 */    MCD::OPC_Decode, 156, 14, 127, // Opcode: XVCPSGNDP
/* 9678 */    MCD::OPC_FilterValue, 1, 134, 15, // Skip to: 13656
/* 9682 */    MCD::OPC_Decode, 204, 14, 128, 1, // Opcode: XVNMSUBADP
/* 9687 */    MCD::OPC_FilterValue, 31, 125, 15, // Skip to: 13656
/* 9691 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 9694 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 9702
/* 9698 */    MCD::OPC_Decode, 180, 14, 127, // Opcode: XVIEXPDP
/* 9702 */    MCD::OPC_FilterValue, 1, 110, 15, // Skip to: 13656
/* 9706 */    MCD::OPC_Decode, 206, 14, 128, 1, // Opcode: XVNMSUBMDP
/* 9711 */    MCD::OPC_FilterValue, 1, 71, 2, // Skip to: 10298
/* 9715 */    MCD::OPC_ExtractField, 6, 2,  // Inst{7-6} ...
/* 9718 */    MCD::OPC_FilterValue, 0, 111, 0, // Skip to: 9833
/* 9722 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 9725 */    MCD::OPC_FilterValue, 0, 35, 0, // Skip to: 9764
/* 9729 */    MCD::OPC_ExtractField, 10, 1,  // Inst{10} ...
/* 9732 */    MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 9741
/* 9736 */    MCD::OPC_Decode, 133, 15, 130, 1, // Opcode: XXSLDWI
/* 9741 */    MCD::OPC_FilterValue, 1, 71, 15, // Skip to: 13656
/* 9745 */    MCD::OPC_ExtractField, 8, 2,  // Inst{9-8} ...
/* 9748 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 9756
/* 9752 */    MCD::OPC_Decode, 242, 14, 127, // Opcode: XXLAND
/* 9756 */    MCD::OPC_FilterValue, 1, 56, 15, // Skip to: 13656
/* 9760 */    MCD::OPC_Decode, 246, 14, 127, // Opcode: XXLNOR
/* 9764 */    MCD::OPC_FilterValue, 1, 48, 15, // Skip to: 13656
/* 9768 */    MCD::OPC_ExtractField, 8, 3,  // Inst{10-8} ...
/* 9771 */    MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 9780
/* 9775 */    MCD::OPC_Decode, 152, 13, 129, 1, // Opcode: XSCMPEQDP
/* 9780 */    MCD::OPC_FilterValue, 1, 17, 0, // Skip to: 9801
/* 9784 */    MCD::OPC_CheckField, 21, 2, 0, 26, 15, // Skip to: 13656
/* 9790 */    MCD::OPC_CheckField, 0, 1, 0, 20, 15, // Skip to: 13656
/* 9796 */    MCD::OPC_Decode, 160, 13, 131, 1, // Opcode: XSCMPUDP
/* 9801 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 9809
/* 9805 */    MCD::OPC_Decode, 142, 14, 127, // Opcode: XVCMPEQSP
/* 9809 */    MCD::OPC_FilterValue, 3, 4, 0, // Skip to: 9817
/* 9813 */    MCD::OPC_Decode, 140, 14, 127, // Opcode: XVCMPEQDP
/* 9817 */    MCD::OPC_FilterValue, 6, 4, 0, // Skip to: 9825
/* 9821 */    MCD::OPC_Decode, 143, 14, 127, // Opcode: XVCMPEQSPo
/* 9825 */    MCD::OPC_FilterValue, 7, 243, 14, // Skip to: 13656
/* 9829 */    MCD::OPC_Decode, 141, 14, 127, // Opcode: XVCMPEQDPo
/* 9833 */    MCD::OPC_FilterValue, 1, 111, 0, // Skip to: 9948
/* 9837 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 9840 */    MCD::OPC_FilterValue, 0, 35, 0, // Skip to: 9879
/* 9844 */    MCD::OPC_ExtractField, 10, 1,  // Inst{10} ...
/* 9847 */    MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 9856
/* 9851 */    MCD::OPC_Decode, 129, 15, 130, 1, // Opcode: XXPERMDI
/* 9856 */    MCD::OPC_FilterValue, 1, 212, 14, // Skip to: 13656
/* 9860 */    MCD::OPC_ExtractField, 8, 2,  // Inst{9-8} ...
/* 9863 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 9871
/* 9867 */    MCD::OPC_Decode, 243, 14, 127, // Opcode: XXLANDC
/* 9871 */    MCD::OPC_FilterValue, 1, 197, 14, // Skip to: 13656
/* 9875 */    MCD::OPC_Decode, 248, 14, 127, // Opcode: XXLORC
/* 9879 */    MCD::OPC_FilterValue, 1, 189, 14, // Skip to: 13656
/* 9883 */    MCD::OPC_ExtractField, 8, 3,  // Inst{10-8} ...
/* 9886 */    MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 9895
/* 9890 */    MCD::OPC_Decode, 156, 13, 129, 1, // Opcode: XSCMPGTDP
/* 9895 */    MCD::OPC_FilterValue, 1, 17, 0, // Skip to: 9916
/* 9899 */    MCD::OPC_CheckField, 21, 2, 0, 167, 14, // Skip to: 13656
/* 9905 */    MCD::OPC_CheckField, 0, 1, 0, 161, 14, // Skip to: 13656
/* 9911 */    MCD::OPC_Decode, 158, 13, 131, 1, // Opcode: XSCMPODP
/* 9916 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 9924
/* 9920 */    MCD::OPC_Decode, 150, 14, 127, // Opcode: XVCMPGTSP
/* 9924 */    MCD::OPC_FilterValue, 3, 4, 0, // Skip to: 9932
/* 9928 */    MCD::OPC_Decode, 148, 14, 127, // Opcode: XVCMPGTDP
/* 9932 */    MCD::OPC_FilterValue, 6, 4, 0, // Skip to: 9940
/* 9936 */    MCD::OPC_Decode, 151, 14, 127, // Opcode: XVCMPGTSPo
/* 9940 */    MCD::OPC_FilterValue, 7, 128, 14, // Skip to: 13656
/* 9944 */    MCD::OPC_Decode, 149, 14, 127, // Opcode: XVCMPGTDPo
/* 9948 */    MCD::OPC_FilterValue, 2, 157, 0, // Skip to: 10109
/* 9952 */    MCD::OPC_ExtractField, 8, 3,  // Inst{10-8} ...
/* 9955 */    MCD::OPC_FilterValue, 0, 20, 0, // Skip to: 9979
/* 9959 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 9962 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 9970
/* 9966 */    MCD::OPC_Decode, 254, 14, 127, // Opcode: XXMRGHW
/* 9970 */    MCD::OPC_FilterValue, 1, 98, 14, // Skip to: 13656
/* 9974 */    MCD::OPC_Decode, 155, 13, 129, 1, // Opcode: XSCMPGEDP
/* 9979 */    MCD::OPC_FilterValue, 1, 10, 0, // Skip to: 9993
/* 9983 */    MCD::OPC_CheckField, 3, 1, 0, 83, 14, // Skip to: 13656
/* 9989 */    MCD::OPC_Decode, 255, 14, 127, // Opcode: XXMRGLW
/* 9993 */    MCD::OPC_FilterValue, 2, 42, 0, // Skip to: 10039
/* 9997 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 10000 */   MCD::OPC_FilterValue, 0, 27, 0, // Skip to: 10031
/* 10004 */   MCD::OPC_ExtractField, 2, 1,  // Inst{2} ...
/* 10007 */   MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 10022
/* 10011 */   MCD::OPC_CheckField, 18, 3, 0, 55, 14, // Skip to: 13656
/* 10017 */   MCD::OPC_Decode, 135, 15, 132, 1, // Opcode: XXSPLTW
/* 10022 */   MCD::OPC_FilterValue, 1, 46, 14, // Skip to: 13656
/* 10026 */   MCD::OPC_Decode, 240, 14, 133, 1, // Opcode: XXEXTRACTUW
/* 10031 */   MCD::OPC_FilterValue, 1, 37, 14, // Skip to: 13656
/* 10035 */   MCD::OPC_Decode, 146, 14, 127, // Opcode: XVCMPGESP
/* 10039 */   MCD::OPC_FilterValue, 3, 10, 0, // Skip to: 10053
/* 10043 */   MCD::OPC_CheckField, 3, 1, 1, 23, 14, // Skip to: 13656
/* 10049 */   MCD::OPC_Decode, 144, 14, 127, // Opcode: XVCMPGEDP
/* 10053 */   MCD::OPC_FilterValue, 4, 10, 0, // Skip to: 10067
/* 10057 */   MCD::OPC_CheckField, 3, 1, 0, 9, 14, // Skip to: 13656
/* 10063 */   MCD::OPC_Decode, 247, 14, 127, // Opcode: XXLOR
/* 10067 */   MCD::OPC_FilterValue, 5, 10, 0, // Skip to: 10081
/* 10071 */   MCD::OPC_CheckField, 3, 1, 0, 251, 13, // Skip to: 13656
/* 10077 */   MCD::OPC_Decode, 245, 14, 127, // Opcode: XXLNAND
/* 10081 */   MCD::OPC_FilterValue, 6, 10, 0, // Skip to: 10095
/* 10085 */   MCD::OPC_CheckField, 3, 1, 1, 237, 13, // Skip to: 13656
/* 10091 */   MCD::OPC_Decode, 147, 14, 127, // Opcode: XVCMPGESPo
/* 10095 */   MCD::OPC_FilterValue, 7, 229, 13, // Skip to: 13656
/* 10099 */   MCD::OPC_CheckField, 3, 1, 1, 223, 13, // Skip to: 13656
/* 10105 */   MCD::OPC_Decode, 145, 14, 127, // Opcode: XVCMPGEDPo
/* 10109 */   MCD::OPC_FilterValue, 3, 215, 13, // Skip to: 13656
/* 10113 */   MCD::OPC_ExtractField, 8, 3,  // Inst{10-8} ...
/* 10116 */   MCD::OPC_FilterValue, 0, 20, 0, // Skip to: 10140
/* 10120 */   MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 10123 */   MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 10131
/* 10127 */   MCD::OPC_Decode, 128, 15, 127, // Opcode: XXPERM
/* 10131 */   MCD::OPC_FilterValue, 1, 193, 13, // Skip to: 13656
/* 10135 */   MCD::OPC_Decode, 157, 13, 129, 1, // Opcode: XSCMPNEDP
/* 10140 */   MCD::OPC_FilterValue, 1, 32, 0, // Skip to: 10176
/* 10144 */   MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 10147 */   MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 10155
/* 10151 */   MCD::OPC_Decode, 131, 15, 127, // Opcode: XXPERMR
/* 10155 */   MCD::OPC_FilterValue, 1, 169, 13, // Skip to: 13656
/* 10159 */   MCD::OPC_CheckField, 21, 2, 0, 163, 13, // Skip to: 13656
/* 10165 */   MCD::OPC_CheckField, 0, 1, 0, 157, 13, // Skip to: 13656
/* 10171 */   MCD::OPC_Decode, 153, 13, 131, 1, // Opcode: XSCMPEXPDP
/* 10176 */   MCD::OPC_FilterValue, 2, 48, 0, // Skip to: 10228
/* 10180 */   MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 10183 */   MCD::OPC_FilterValue, 0, 33, 0, // Skip to: 10220
/* 10187 */   MCD::OPC_ExtractField, 2, 1,  // Inst{2} ...
/* 10190 */   MCD::OPC_FilterValue, 0, 17, 0, // Skip to: 10211
/* 10194 */   MCD::OPC_CheckField, 19, 2, 0, 128, 13, // Skip to: 13656
/* 10200 */   MCD::OPC_CheckField, 1, 1, 0, 122, 13, // Skip to: 13656
/* 10206 */   MCD::OPC_Decode, 134, 15, 134, 1, // Opcode: XXSPLTIB
/* 10211 */   MCD::OPC_FilterValue, 1, 113, 13, // Skip to: 13656
/* 10215 */   MCD::OPC_Decode, 241, 14, 135, 1, // Opcode: XXINSERTW
/* 10220 */   MCD::OPC_FilterValue, 1, 104, 13, // Skip to: 13656
/* 10224 */   MCD::OPC_Decode, 154, 14, 127, // Opcode: XVCMPNESP
/* 10228 */   MCD::OPC_FilterValue, 3, 10, 0, // Skip to: 10242
/* 10232 */   MCD::OPC_CheckField, 3, 1, 1, 90, 13, // Skip to: 13656
/* 10238 */   MCD::OPC_Decode, 152, 14, 127, // Opcode: XVCMPNEDP
/* 10242 */   MCD::OPC_FilterValue, 4, 10, 0, // Skip to: 10256
/* 10246 */   MCD::OPC_CheckField, 3, 1, 0, 76, 13, // Skip to: 13656
/* 10252 */   MCD::OPC_Decode, 250, 14, 127, // Opcode: XXLXOR
/* 10256 */   MCD::OPC_FilterValue, 5, 10, 0, // Skip to: 10270
/* 10260 */   MCD::OPC_CheckField, 3, 1, 0, 62, 13, // Skip to: 13656
/* 10266 */   MCD::OPC_Decode, 244, 14, 127, // Opcode: XXLEQV
/* 10270 */   MCD::OPC_FilterValue, 6, 10, 0, // Skip to: 10284
/* 10274 */   MCD::OPC_CheckField, 3, 1, 1, 48, 13, // Skip to: 13656
/* 10280 */   MCD::OPC_Decode, 155, 14, 127, // Opcode: XVCMPNESPo
/* 10284 */   MCD::OPC_FilterValue, 7, 40, 13, // Skip to: 13656
/* 10288 */   MCD::OPC_CheckField, 3, 1, 1, 34, 13, // Skip to: 13656
/* 10294 */   MCD::OPC_Decode, 153, 14, 127, // Opcode: XVCMPNEDPo
/* 10298 */   MCD::OPC_FilterValue, 2, 248, 6, // Skip to: 12086
/* 10302 */   MCD::OPC_ExtractField, 7, 4,  // Inst{10-7} ...
/* 10305 */   MCD::OPC_FilterValue, 0, 61, 0, // Skip to: 10370
/* 10309 */   MCD::OPC_ExtractField, 2, 2,  // Inst{3-2} ...
/* 10312 */   MCD::OPC_FilterValue, 2, 33, 0, // Skip to: 10349
/* 10316 */   MCD::OPC_ExtractField, 6, 1,  // Inst{6} ...
/* 10319 */   MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 10334
/* 10323 */   MCD::OPC_CheckField, 16, 5, 0, 255, 12, // Skip to: 13656
/* 10329 */   MCD::OPC_Decode, 246, 13, 136, 1, // Opcode: XSRSQRTESP
/* 10334 */   MCD::OPC_FilterValue, 1, 246, 12, // Skip to: 13656
/* 10338 */   MCD::OPC_CheckField, 16, 5, 0, 240, 12, // Skip to: 13656
/* 10344 */   MCD::OPC_Decode, 241, 13, 136, 1, // Opcode: XSRESP
/* 10349 */   MCD::OPC_FilterValue, 3, 231, 12, // Skip to: 13656
/* 10353 */   MCD::OPC_CheckField, 16, 5, 0, 225, 12, // Skip to: 13656
/* 10359 */   MCD::OPC_CheckField, 6, 1, 0, 219, 12, // Skip to: 13656
/* 10365 */   MCD::OPC_Decode, 250, 13, 136, 1, // Opcode: XSSQRTSP
/* 10370 */   MCD::OPC_FilterValue, 2, 135, 0, // Skip to: 10509
/* 10374 */   MCD::OPC_ExtractField, 2, 2,  // Inst{3-2} ...
/* 10377 */   MCD::OPC_FilterValue, 0, 33, 0, // Skip to: 10414
/* 10381 */   MCD::OPC_ExtractField, 6, 1,  // Inst{6} ...
/* 10384 */   MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 10399
/* 10388 */   MCD::OPC_CheckField, 16, 5, 0, 190, 12, // Skip to: 13656
/* 10394 */   MCD::OPC_Decode, 174, 13, 137, 1, // Opcode: XSCVDPUXWS
/* 10399 */   MCD::OPC_FilterValue, 1, 181, 12, // Skip to: 13656
/* 10403 */   MCD::OPC_CheckField, 16, 5, 0, 175, 12, // Skip to: 13656
/* 10409 */   MCD::OPC_Decode, 170, 13, 137, 1, // Opcode: XSCVDPSXWS
/* 10414 */   MCD::OPC_FilterValue, 1, 33, 0, // Skip to: 10451
/* 10418 */   MCD::OPC_ExtractField, 6, 1,  // Inst{6} ...
/* 10421 */   MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 10436
/* 10425 */   MCD::OPC_CheckField, 16, 5, 0, 153, 12, // Skip to: 13656
/* 10431 */   MCD::OPC_Decode, 235, 13, 137, 1, // Opcode: XSRDPI
/* 10436 */   MCD::OPC_FilterValue, 1, 144, 12, // Skip to: 13656
/* 10440 */   MCD::OPC_CheckField, 16, 5, 0, 138, 12, // Skip to: 13656
/* 10446 */   MCD::OPC_Decode, 239, 13, 137, 1, // Opcode: XSRDPIZ
/* 10451 */   MCD::OPC_FilterValue, 2, 33, 0, // Skip to: 10488
/* 10455 */   MCD::OPC_ExtractField, 6, 1,  // Inst{6} ...
/* 10458 */   MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 10473
/* 10462 */   MCD::OPC_CheckField, 16, 5, 0, 116, 12, // Skip to: 13656
/* 10468 */   MCD::OPC_Decode, 245, 13, 137, 1, // Opcode: XSRSQRTEDP
/* 10473 */   MCD::OPC_FilterValue, 1, 107, 12, // Skip to: 13656
/* 10477 */   MCD::OPC_CheckField, 16, 5, 0, 101, 12, // Skip to: 13656
/* 10483 */   MCD::OPC_Decode, 240, 13, 137, 1, // Opcode: XSREDP
/* 10488 */   MCD::OPC_FilterValue, 3, 92, 12, // Skip to: 13656
/* 10492 */   MCD::OPC_CheckField, 16, 5, 0, 86, 12, // Skip to: 13656
/* 10498 */   MCD::OPC_CheckField, 6, 1, 0, 80, 12, // Skip to: 13656
/* 10504 */   MCD::OPC_Decode, 247, 13, 137, 1, // Opcode: XSSQRTDP
/* 10509 */   MCD::OPC_FilterValue, 3, 123, 0, // Skip to: 10636
/* 10513 */   MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 10516 */   MCD::OPC_FilterValue, 0, 45, 0, // Skip to: 10565
/* 10520 */   MCD::OPC_ExtractField, 6, 1,  // Inst{6} ...
/* 10523 */   MCD::OPC_FilterValue, 0, 17, 0, // Skip to: 10544
/* 10527 */   MCD::OPC_CheckField, 16, 5, 0, 51, 12, // Skip to: 13656
/* 10533 */   MCD::OPC_CheckField, 2, 1, 1, 45, 12, // Skip to: 13656
/* 10539 */   MCD::OPC_Decode, 238, 13, 137, 1, // Opcode: XSRDPIP
/* 10544 */   MCD::OPC_FilterValue, 1, 36, 12, // Skip to: 13656
/* 10548 */   MCD::OPC_CheckField, 16, 5, 0, 30, 12, // Skip to: 13656
/* 10554 */   MCD::OPC_CheckField, 2, 1, 1, 24, 12, // Skip to: 13656
/* 10560 */   MCD::OPC_Decode, 237, 13, 137, 1, // Opcode: XSRDPIM
/* 10565 */   MCD::OPC_FilterValue, 1, 15, 12, // Skip to: 13656
/* 10569 */   MCD::OPC_ExtractField, 6, 1,  // Inst{6} ...
/* 10572 */   MCD::OPC_FilterValue, 0, 39, 0, // Skip to: 10615
/* 10576 */   MCD::OPC_ExtractField, 2, 1,  // Inst{2} ...
/* 10579 */   MCD::OPC_FilterValue, 0, 17, 0, // Skip to: 10600
/* 10583 */   MCD::OPC_CheckField, 16, 7, 0, 251, 11, // Skip to: 13656
/* 10589 */   MCD::OPC_CheckField, 0, 1, 0, 245, 11, // Skip to: 13656
/* 10595 */   MCD::OPC_Decode, 128, 14, 138, 1, // Opcode: XSTSQRTDP
/* 10600 */   MCD::OPC_FilterValue, 1, 236, 11, // Skip to: 13656
/* 10604 */   MCD::OPC_CheckField, 16, 5, 0, 230, 11, // Skip to: 13656
/* 10610 */   MCD::OPC_Decode, 236, 13, 137, 1, // Opcode: XSRDPIC
/* 10615 */   MCD::OPC_FilterValue, 1, 221, 11, // Skip to: 13656
/* 10619 */   MCD::OPC_CheckField, 21, 2, 0, 215, 11, // Skip to: 13656
/* 10625 */   MCD::OPC_CheckField, 0, 1, 0, 209, 11, // Skip to: 13656
/* 10631 */   MCD::OPC_Decode, 255, 13, 131, 1, // Opcode: XSTDIVDP
/* 10636 */   MCD::OPC_FilterValue, 4, 135, 0, // Skip to: 10775
/* 10640 */   MCD::OPC_ExtractField, 2, 2,  // Inst{3-2} ...
/* 10643 */   MCD::OPC_FilterValue, 0, 33, 0, // Skip to: 10680
/* 10647 */   MCD::OPC_ExtractField, 6, 1,  // Inst{6} ...
/* 10650 */   MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 10665
/* 10654 */   MCD::OPC_CheckField, 16, 5, 0, 180, 11, // Skip to: 13656
/* 10660 */   MCD::OPC_Decode, 169, 14, 139, 1, // Opcode: XVCVSPUXWS
/* 10665 */   MCD::OPC_FilterValue, 1, 171, 11, // Skip to: 13656
/* 10669 */   MCD::OPC_CheckField, 16, 5, 0, 165, 11, // Skip to: 13656
/* 10675 */   MCD::OPC_Decode, 167, 14, 139, 1, // Opcode: XVCVSPSXWS
/* 10680 */   MCD::OPC_FilterValue, 1, 33, 0, // Skip to: 10717
/* 10684 */   MCD::OPC_ExtractField, 6, 1,  // Inst{6} ...
/* 10687 */   MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 10702
/* 10691 */   MCD::OPC_CheckField, 16, 5, 0, 143, 11, // Skip to: 13656
/* 10697 */   MCD::OPC_Decode, 215, 14, 139, 1, // Opcode: XVRSPI
/* 10702 */   MCD::OPC_FilterValue, 1, 134, 11, // Skip to: 13656
/* 10706 */   MCD::OPC_CheckField, 16, 5, 0, 128, 11, // Skip to: 13656
/* 10712 */   MCD::OPC_Decode, 219, 14, 139, 1, // Opcode: XVRSPIZ
/* 10717 */   MCD::OPC_FilterValue, 2, 33, 0, // Skip to: 10754
/* 10721 */   MCD::OPC_ExtractField, 6, 1,  // Inst{6} ...
/* 10724 */   MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 10739
/* 10728 */   MCD::OPC_CheckField, 16, 5, 0, 106, 11, // Skip to: 13656
/* 10734 */   MCD::OPC_Decode, 221, 14, 139, 1, // Opcode: XVRSQRTESP
/* 10739 */   MCD::OPC_FilterValue, 1, 97, 11, // Skip to: 13656
/* 10743 */   MCD::OPC_CheckField, 16, 5, 0, 91, 11, // Skip to: 13656
/* 10749 */   MCD::OPC_Decode, 214, 14, 139, 1, // Opcode: XVRESP
/* 10754 */   MCD::OPC_FilterValue, 3, 82, 11, // Skip to: 13656
/* 10758 */   MCD::OPC_CheckField, 16, 5, 0, 76, 11, // Skip to: 13656
/* 10764 */   MCD::OPC_CheckField, 6, 1, 0, 70, 11, // Skip to: 13656
/* 10770 */   MCD::OPC_Decode, 223, 14, 139, 1, // Opcode: XVSQRTSP
/* 10775 */   MCD::OPC_FilterValue, 5, 155, 0, // Skip to: 10934
/* 10779 */   MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 10782 */   MCD::OPC_FilterValue, 0, 77, 0, // Skip to: 10863
/* 10786 */   MCD::OPC_ExtractField, 2, 1,  // Inst{2} ...
/* 10789 */   MCD::OPC_FilterValue, 0, 33, 0, // Skip to: 10826
/* 10793 */   MCD::OPC_ExtractField, 6, 1,  // Inst{6} ...
/* 10796 */   MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 10811
/* 10800 */   MCD::OPC_CheckField, 16, 5, 0, 34, 11, // Skip to: 13656
/* 10806 */   MCD::OPC_Decode, 177, 14, 139, 1, // Opcode: XVCVUXWSP
/* 10811 */   MCD::OPC_FilterValue, 1, 25, 11, // Skip to: 13656
/* 10815 */   MCD::OPC_CheckField, 16, 5, 0, 19, 11, // Skip to: 13656
/* 10821 */   MCD::OPC_Decode, 173, 14, 139, 1, // Opcode: XVCVSXWSP
/* 10826 */   MCD::OPC_FilterValue, 1, 10, 11, // Skip to: 13656
/* 10830 */   MCD::OPC_ExtractField, 6, 1,  // Inst{6} ...
/* 10833 */   MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 10848
/* 10837 */   MCD::OPC_CheckField, 16, 5, 0, 253, 10, // Skip to: 13656
/* 10843 */   MCD::OPC_Decode, 218, 14, 139, 1, // Opcode: XVRSPIP
/* 10848 */   MCD::OPC_FilterValue, 1, 244, 10, // Skip to: 13656
/* 10852 */   MCD::OPC_CheckField, 16, 5, 0, 238, 10, // Skip to: 13656
/* 10858 */   MCD::OPC_Decode, 217, 14, 139, 1, // Opcode: XVRSPIM
/* 10863 */   MCD::OPC_FilterValue, 1, 229, 10, // Skip to: 13656
/* 10867 */   MCD::OPC_ExtractField, 6, 1,  // Inst{6} ...
/* 10870 */   MCD::OPC_FilterValue, 0, 39, 0, // Skip to: 10913
/* 10874 */   MCD::OPC_ExtractField, 2, 1,  // Inst{2} ...
/* 10877 */   MCD::OPC_FilterValue, 0, 17, 0, // Skip to: 10898
/* 10881 */   MCD::OPC_CheckField, 16, 7, 0, 209, 10, // Skip to: 13656
/* 10887 */   MCD::OPC_CheckField, 0, 1, 0, 203, 10, // Skip to: 13656
/* 10893 */   MCD::OPC_Decode, 229, 14, 140, 1, // Opcode: XVTSQRTSP
/* 10898 */   MCD::OPC_FilterValue, 1, 194, 10, // Skip to: 13656
/* 10902 */   MCD::OPC_CheckField, 16, 5, 0, 188, 10, // Skip to: 13656
/* 10908 */   MCD::OPC_Decode, 216, 14, 139, 1, // Opcode: XVRSPIC
/* 10913 */   MCD::OPC_FilterValue, 1, 179, 10, // Skip to: 13656
/* 10917 */   MCD::OPC_CheckField, 21, 2, 0, 173, 10, // Skip to: 13656
/* 10923 */   MCD::OPC_CheckField, 0, 1, 0, 167, 10, // Skip to: 13656
/* 10929 */   MCD::OPC_Decode, 227, 14, 141, 1, // Opcode: XVTDIVSP
/* 10934 */   MCD::OPC_FilterValue, 6, 135, 0, // Skip to: 11073
/* 10938 */   MCD::OPC_ExtractField, 2, 2,  // Inst{3-2} ...
/* 10941 */   MCD::OPC_FilterValue, 0, 33, 0, // Skip to: 10978
/* 10945 */   MCD::OPC_ExtractField, 6, 1,  // Inst{6} ...
/* 10948 */   MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 10963
/* 10952 */   MCD::OPC_CheckField, 16, 5, 0, 138, 10, // Skip to: 13656
/* 10958 */   MCD::OPC_Decode, 162, 14, 139, 1, // Opcode: XVCVDPUXWS
/* 10963 */   MCD::OPC_FilterValue, 1, 129, 10, // Skip to: 13656
/* 10967 */   MCD::OPC_CheckField, 16, 5, 0, 123, 10, // Skip to: 13656
/* 10973 */   MCD::OPC_Decode, 160, 14, 139, 1, // Opcode: XVCVDPSXWS
/* 10978 */   MCD::OPC_FilterValue, 1, 33, 0, // Skip to: 11015
/* 10982 */   MCD::OPC_ExtractField, 6, 1,  // Inst{6} ...
/* 10985 */   MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 11000
/* 10989 */   MCD::OPC_CheckField, 16, 5, 0, 101, 10, // Skip to: 13656
/* 10995 */   MCD::OPC_Decode, 208, 14, 139, 1, // Opcode: XVRDPI
/* 11000 */   MCD::OPC_FilterValue, 1, 92, 10, // Skip to: 13656
/* 11004 */   MCD::OPC_CheckField, 16, 5, 0, 86, 10, // Skip to: 13656
/* 11010 */   MCD::OPC_Decode, 212, 14, 139, 1, // Opcode: XVRDPIZ
/* 11015 */   MCD::OPC_FilterValue, 2, 33, 0, // Skip to: 11052
/* 11019 */   MCD::OPC_ExtractField, 6, 1,  // Inst{6} ...
/* 11022 */   MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 11037
/* 11026 */   MCD::OPC_CheckField, 16, 5, 0, 64, 10, // Skip to: 13656
/* 11032 */   MCD::OPC_Decode, 220, 14, 139, 1, // Opcode: XVRSQRTEDP
/* 11037 */   MCD::OPC_FilterValue, 1, 55, 10, // Skip to: 13656
/* 11041 */   MCD::OPC_CheckField, 16, 5, 0, 49, 10, // Skip to: 13656
/* 11047 */   MCD::OPC_Decode, 213, 14, 139, 1, // Opcode: XVREDP
/* 11052 */   MCD::OPC_FilterValue, 3, 40, 10, // Skip to: 13656
/* 11056 */   MCD::OPC_CheckField, 16, 5, 0, 34, 10, // Skip to: 13656
/* 11062 */   MCD::OPC_CheckField, 6, 1, 0, 28, 10, // Skip to: 13656
/* 11068 */   MCD::OPC_Decode, 222, 14, 139, 1, // Opcode: XVSQRTDP
/* 11073 */   MCD::OPC_FilterValue, 7, 155, 0, // Skip to: 11232
/* 11077 */   MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 11080 */   MCD::OPC_FilterValue, 0, 77, 0, // Skip to: 11161
/* 11084 */   MCD::OPC_ExtractField, 2, 1,  // Inst{2} ...
/* 11087 */   MCD::OPC_FilterValue, 0, 33, 0, // Skip to: 11124
/* 11091 */   MCD::OPC_ExtractField, 6, 1,  // Inst{6} ...
/* 11094 */   MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 11109
/* 11098 */   MCD::OPC_CheckField, 16, 5, 0, 248, 9, // Skip to: 13656
/* 11104 */   MCD::OPC_Decode, 176, 14, 139, 1, // Opcode: XVCVUXWDP
/* 11109 */   MCD::OPC_FilterValue, 1, 239, 9, // Skip to: 13656
/* 11113 */   MCD::OPC_CheckField, 16, 5, 0, 233, 9, // Skip to: 13656
/* 11119 */   MCD::OPC_Decode, 172, 14, 139, 1, // Opcode: XVCVSXWDP
/* 11124 */   MCD::OPC_FilterValue, 1, 224, 9, // Skip to: 13656
/* 11128 */   MCD::OPC_ExtractField, 6, 1,  // Inst{6} ...
/* 11131 */   MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 11146
/* 11135 */   MCD::OPC_CheckField, 16, 5, 0, 211, 9, // Skip to: 13656
/* 11141 */   MCD::OPC_Decode, 211, 14, 139, 1, // Opcode: XVRDPIP
/* 11146 */   MCD::OPC_FilterValue, 1, 202, 9, // Skip to: 13656
/* 11150 */   MCD::OPC_CheckField, 16, 5, 0, 196, 9, // Skip to: 13656
/* 11156 */   MCD::OPC_Decode, 210, 14, 139, 1, // Opcode: XVRDPIM
/* 11161 */   MCD::OPC_FilterValue, 1, 187, 9, // Skip to: 13656
/* 11165 */   MCD::OPC_ExtractField, 6, 1,  // Inst{6} ...
/* 11168 */   MCD::OPC_FilterValue, 0, 39, 0, // Skip to: 11211
/* 11172 */   MCD::OPC_ExtractField, 2, 1,  // Inst{2} ...
/* 11175 */   MCD::OPC_FilterValue, 0, 17, 0, // Skip to: 11196
/* 11179 */   MCD::OPC_CheckField, 16, 7, 0, 167, 9, // Skip to: 13656
/* 11185 */   MCD::OPC_CheckField, 0, 1, 0, 161, 9, // Skip to: 13656
/* 11191 */   MCD::OPC_Decode, 228, 14, 140, 1, // Opcode: XVTSQRTDP
/* 11196 */   MCD::OPC_FilterValue, 1, 152, 9, // Skip to: 13656
/* 11200 */   MCD::OPC_CheckField, 16, 5, 0, 146, 9, // Skip to: 13656
/* 11206 */   MCD::OPC_Decode, 209, 14, 139, 1, // Opcode: XVRDPIC
/* 11211 */   MCD::OPC_FilterValue, 1, 137, 9, // Skip to: 13656
/* 11215 */   MCD::OPC_CheckField, 21, 2, 0, 131, 9, // Skip to: 13656
/* 11221 */   MCD::OPC_CheckField, 0, 1, 0, 125, 9, // Skip to: 13656
/* 11227 */   MCD::OPC_Decode, 226, 14, 141, 1, // Opcode: XVTDIVDP
/* 11232 */   MCD::OPC_FilterValue, 8, 45, 0, // Skip to: 11281
/* 11236 */   MCD::OPC_ExtractField, 2, 2,  // Inst{3-2} ...
/* 11239 */   MCD::OPC_FilterValue, 1, 17, 0, // Skip to: 11260
/* 11243 */   MCD::OPC_CheckField, 16, 5, 0, 103, 9, // Skip to: 13656
/* 11249 */   MCD::OPC_CheckField, 6, 1, 0, 97, 9, // Skip to: 13656
/* 11255 */   MCD::OPC_Decode, 166, 13, 137, 1, // Opcode: XSCVDPSP
/* 11260 */   MCD::OPC_FilterValue, 3, 88, 9, // Skip to: 13656
/* 11264 */   MCD::OPC_CheckField, 16, 5, 0, 82, 9, // Skip to: 13656
/* 11270 */   MCD::OPC_CheckField, 6, 1, 0, 76, 9, // Skip to: 13656
/* 11276 */   MCD::OPC_Decode, 167, 13, 142, 1, // Opcode: XSCVDPSPN
/* 11281 */   MCD::OPC_FilterValue, 9, 61, 0, // Skip to: 11346
/* 11285 */   MCD::OPC_ExtractField, 2, 2,  // Inst{3-2} ...
/* 11288 */   MCD::OPC_FilterValue, 0, 33, 0, // Skip to: 11325
/* 11292 */   MCD::OPC_ExtractField, 6, 1,  // Inst{6} ...
/* 11295 */   MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 11310
/* 11299 */   MCD::OPC_CheckField, 16, 5, 0, 47, 9, // Skip to: 13656
/* 11305 */   MCD::OPC_Decode, 190, 13, 143, 1, // Opcode: XSCVUXDSP
/* 11310 */   MCD::OPC_FilterValue, 1, 38, 9, // Skip to: 13656
/* 11314 */   MCD::OPC_CheckField, 16, 5, 0, 32, 9, // Skip to: 13656
/* 11320 */   MCD::OPC_Decode, 187, 13, 143, 1, // Opcode: XSCVSXDSP
/* 11325 */   MCD::OPC_FilterValue, 2, 23, 9, // Skip to: 13656
/* 11329 */   MCD::OPC_CheckField, 6, 1, 0, 17, 9, // Skip to: 13656
/* 11335 */   MCD::OPC_CheckField, 0, 1, 0, 11, 9, // Skip to: 13656
/* 11341 */   MCD::OPC_Decode, 131, 14, 144, 1, // Opcode: XSTSTDCSP
/* 11346 */   MCD::OPC_FilterValue, 10, 160, 0, // Skip to: 11510
/* 11350 */   MCD::OPC_ExtractField, 16, 5,  // Inst{20-16} ...
/* 11353 */   MCD::OPC_FilterValue, 0, 84, 0, // Skip to: 11441
/* 11357 */   MCD::OPC_ExtractField, 2, 2,  // Inst{3-2} ...
/* 11360 */   MCD::OPC_FilterValue, 0, 21, 0, // Skip to: 11385
/* 11364 */   MCD::OPC_ExtractField, 6, 1,  // Inst{6} ...
/* 11367 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 11376
/* 11371 */   MCD::OPC_Decode, 172, 13, 137, 1, // Opcode: XSCVDPUXDS
/* 11376 */   MCD::OPC_FilterValue, 1, 228, 8, // Skip to: 13656
/* 11380 */   MCD::OPC_Decode, 168, 13, 137, 1, // Opcode: XSCVDPSXDS
/* 11385 */   MCD::OPC_FilterValue, 1, 21, 0, // Skip to: 11410
/* 11389 */   MCD::OPC_ExtractField, 6, 1,  // Inst{6} ...
/* 11392 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 11401
/* 11396 */   MCD::OPC_Decode, 184, 13, 137, 1, // Opcode: XSCVSPDP
/* 11401 */   MCD::OPC_FilterValue, 1, 203, 8, // Skip to: 13656
/* 11405 */   MCD::OPC_Decode, 146, 13, 137, 1, // Opcode: XSABSDP
/* 11410 */   MCD::OPC_FilterValue, 3, 194, 8, // Skip to: 13656
/* 11414 */   MCD::OPC_ExtractField, 6, 1,  // Inst{6} ...
/* 11417 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 11426
/* 11421 */   MCD::OPC_Decode, 185, 13, 145, 1, // Opcode: XSCVSPDPN
/* 11426 */   MCD::OPC_FilterValue, 1, 178, 8, // Skip to: 13656
/* 11430 */   MCD::OPC_CheckField, 0, 1, 0, 172, 8, // Skip to: 13656
/* 11436 */   MCD::OPC_Decode, 132, 14, 146, 1, // Opcode: XSXEXPDP
/* 11441 */   MCD::OPC_FilterValue, 1, 23, 0, // Skip to: 11468
/* 11445 */   MCD::OPC_CheckField, 6, 1, 1, 157, 8, // Skip to: 13656
/* 11451 */   MCD::OPC_CheckField, 2, 2, 3, 151, 8, // Skip to: 13656
/* 11457 */   MCD::OPC_CheckField, 0, 1, 0, 145, 8, // Skip to: 13656
/* 11463 */   MCD::OPC_Decode, 134, 14, 146, 1, // Opcode: XSXSIGDP
/* 11468 */   MCD::OPC_FilterValue, 16, 17, 0, // Skip to: 11489
/* 11472 */   MCD::OPC_CheckField, 6, 1, 1, 130, 8, // Skip to: 13656
/* 11478 */   MCD::OPC_CheckField, 2, 2, 3, 124, 8, // Skip to: 13656
/* 11484 */   MCD::OPC_Decode, 176, 13, 137, 1, // Opcode: XSCVHPDP
/* 11489 */   MCD::OPC_FilterValue, 17, 115, 8, // Skip to: 13656
/* 11493 */   MCD::OPC_CheckField, 6, 1, 1, 109, 8, // Skip to: 13656
/* 11499 */   MCD::OPC_CheckField, 2, 2, 3, 103, 8, // Skip to: 13656
/* 11505 */   MCD::OPC_Decode, 164, 13, 137, 1, // Opcode: XSCVDPHP
/* 11510 */   MCD::OPC_FilterValue, 11, 98, 0, // Skip to: 11612
/* 11514 */   MCD::OPC_ExtractField, 2, 2,  // Inst{3-2} ...
/* 11517 */   MCD::OPC_FilterValue, 0, 33, 0, // Skip to: 11554
/* 11521 */   MCD::OPC_ExtractField, 6, 1,  // Inst{6} ...
/* 11524 */   MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 11539
/* 11528 */   MCD::OPC_CheckField, 16, 5, 0, 74, 8, // Skip to: 13656
/* 11534 */   MCD::OPC_Decode, 189, 13, 137, 1, // Opcode: XSCVUXDDP
/* 11539 */   MCD::OPC_FilterValue, 1, 65, 8, // Skip to: 13656
/* 11543 */   MCD::OPC_CheckField, 16, 5, 0, 59, 8, // Skip to: 13656
/* 11549 */   MCD::OPC_Decode, 186, 13, 137, 1, // Opcode: XSCVSXDDP
/* 11554 */   MCD::OPC_FilterValue, 1, 33, 0, // Skip to: 11591
/* 11558 */   MCD::OPC_ExtractField, 6, 1,  // Inst{6} ...
/* 11561 */   MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 11576
/* 11565 */   MCD::OPC_CheckField, 16, 5, 0, 37, 8, // Skip to: 13656
/* 11571 */   MCD::OPC_Decode, 219, 13, 137, 1, // Opcode: XSNABSDP
/* 11576 */   MCD::OPC_FilterValue, 1, 28, 8, // Skip to: 13656
/* 11580 */   MCD::OPC_CheckField, 16, 5, 0, 22, 8, // Skip to: 13656
/* 11586 */   MCD::OPC_Decode, 221, 13, 137, 1, // Opcode: XSNEGDP
/* 11591 */   MCD::OPC_FilterValue, 2, 13, 8, // Skip to: 13656
/* 11595 */   MCD::OPC_CheckField, 6, 1, 0, 7, 8, // Skip to: 13656
/* 11601 */   MCD::OPC_CheckField, 0, 1, 0, 1, 8, // Skip to: 13656
/* 11607 */   MCD::OPC_Decode, 129, 14, 144, 1, // Opcode: XSTSTDCDP
/* 11612 */   MCD::OPC_FilterValue, 12, 77, 0, // Skip to: 11693
/* 11616 */   MCD::OPC_ExtractField, 2, 2,  // Inst{3-2} ...
/* 11619 */   MCD::OPC_FilterValue, 0, 33, 0, // Skip to: 11656
/* 11623 */   MCD::OPC_ExtractField, 6, 1,  // Inst{6} ...
/* 11626 */   MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 11641
/* 11630 */   MCD::OPC_CheckField, 16, 5, 0, 228, 7, // Skip to: 13656
/* 11636 */   MCD::OPC_Decode, 168, 14, 139, 1, // Opcode: XVCVSPUXDS
/* 11641 */   MCD::OPC_FilterValue, 1, 219, 7, // Skip to: 13656
/* 11645 */   MCD::OPC_CheckField, 16, 5, 0, 213, 7, // Skip to: 13656
/* 11651 */   MCD::OPC_Decode, 166, 14, 139, 1, // Opcode: XVCVSPSXDS
/* 11656 */   MCD::OPC_FilterValue, 1, 204, 7, // Skip to: 13656
/* 11660 */   MCD::OPC_ExtractField, 6, 1,  // Inst{6} ...
/* 11663 */   MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 11678
/* 11667 */   MCD::OPC_CheckField, 16, 5, 0, 191, 7, // Skip to: 13656
/* 11673 */   MCD::OPC_Decode, 158, 14, 139, 1, // Opcode: XVCVDPSP
/* 11678 */   MCD::OPC_FilterValue, 1, 182, 7, // Skip to: 13656
/* 11682 */   MCD::OPC_CheckField, 16, 5, 0, 176, 7, // Skip to: 13656
/* 11688 */   MCD::OPC_Decode, 137, 14, 139, 1, // Opcode: XVABSSP
/* 11693 */   MCD::OPC_FilterValue, 13, 93, 0, // Skip to: 11790
/* 11697 */   MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 11700 */   MCD::OPC_FilterValue, 0, 77, 0, // Skip to: 11781
/* 11704 */   MCD::OPC_ExtractField, 2, 1,  // Inst{2} ...
/* 11707 */   MCD::OPC_FilterValue, 0, 33, 0, // Skip to: 11744
/* 11711 */   MCD::OPC_ExtractField, 6, 1,  // Inst{6} ...
/* 11714 */   MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 11729
/* 11718 */   MCD::OPC_CheckField, 16, 5, 0, 140, 7, // Skip to: 13656
/* 11724 */   MCD::OPC_Decode, 175, 14, 139, 1, // Opcode: XVCVUXDSP
/* 11729 */   MCD::OPC_FilterValue, 1, 131, 7, // Skip to: 13656
/* 11733 */   MCD::OPC_CheckField, 16, 5, 0, 125, 7, // Skip to: 13656
/* 11739 */   MCD::OPC_Decode, 171, 14, 139, 1, // Opcode: XVCVSXDSP
/* 11744 */   MCD::OPC_FilterValue, 1, 116, 7, // Skip to: 13656
/* 11748 */   MCD::OPC_ExtractField, 6, 1,  // Inst{6} ...
/* 11751 */   MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 11766
/* 11755 */   MCD::OPC_CheckField, 16, 5, 0, 103, 7, // Skip to: 13656
/* 11761 */   MCD::OPC_Decode, 197, 14, 139, 1, // Opcode: XVNABSSP
/* 11766 */   MCD::OPC_FilterValue, 1, 94, 7, // Skip to: 13656
/* 11770 */   MCD::OPC_CheckField, 16, 5, 0, 88, 7, // Skip to: 13656
/* 11776 */   MCD::OPC_Decode, 199, 14, 139, 1, // Opcode: XVNEGSP
/* 11781 */   MCD::OPC_FilterValue, 1, 79, 7, // Skip to: 13656
/* 11785 */   MCD::OPC_Decode, 231, 14, 147, 1, // Opcode: XVTSTDCSP
/* 11790 */   MCD::OPC_FilterValue, 14, 195, 0, // Skip to: 11989
/* 11794 */   MCD::OPC_ExtractField, 2, 2,  // Inst{3-2} ...
/* 11797 */   MCD::OPC_FilterValue, 0, 33, 0, // Skip to: 11834
/* 11801 */   MCD::OPC_ExtractField, 6, 1,  // Inst{6} ...
/* 11804 */   MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 11819
/* 11808 */   MCD::OPC_CheckField, 16, 5, 0, 50, 7, // Skip to: 13656
/* 11814 */   MCD::OPC_Decode, 161, 14, 139, 1, // Opcode: XVCVDPUXDS
/* 11819 */   MCD::OPC_FilterValue, 1, 41, 7, // Skip to: 13656
/* 11823 */   MCD::OPC_CheckField, 16, 5, 0, 35, 7, // Skip to: 13656
/* 11829 */   MCD::OPC_Decode, 159, 14, 139, 1, // Opcode: XVCVDPSXDS
/* 11834 */   MCD::OPC_FilterValue, 1, 33, 0, // Skip to: 11871
/* 11838 */   MCD::OPC_ExtractField, 6, 1,  // Inst{6} ...
/* 11841 */   MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 11856
/* 11845 */   MCD::OPC_CheckField, 16, 5, 0, 13, 7, // Skip to: 13656
/* 11851 */   MCD::OPC_Decode, 164, 14, 139, 1, // Opcode: XVCVSPDP
/* 11856 */   MCD::OPC_FilterValue, 1, 4, 7, // Skip to: 13656
/* 11860 */   MCD::OPC_CheckField, 16, 5, 0, 254, 6, // Skip to: 13656
/* 11866 */   MCD::OPC_Decode, 136, 14, 139, 1, // Opcode: XVABSDP
/* 11871 */   MCD::OPC_FilterValue, 3, 245, 6, // Skip to: 13656
/* 11875 */   MCD::OPC_ExtractField, 6, 1,  // Inst{6} ...
/* 11878 */   MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 11892
/* 11882 */   MCD::OPC_CheckField, 1, 1, 0, 232, 6, // Skip to: 13656
/* 11888 */   MCD::OPC_Decode, 195, 13, 84, // Opcode: XSIEXPDP
/* 11892 */   MCD::OPC_FilterValue, 1, 224, 6, // Skip to: 13656
/* 11896 */   MCD::OPC_ExtractField, 16, 5,  // Inst{20-16} ...
/* 11899 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 11908
/* 11903 */   MCD::OPC_Decode, 232, 14, 139, 1, // Opcode: XVXEXPDP
/* 11908 */   MCD::OPC_FilterValue, 1, 5, 0, // Skip to: 11917
/* 11912 */   MCD::OPC_Decode, 234, 14, 139, 1, // Opcode: XVXSIGDP
/* 11917 */   MCD::OPC_FilterValue, 7, 5, 0, // Skip to: 11926
/* 11921 */   MCD::OPC_Decode, 237, 14, 139, 1, // Opcode: XXBRH
/* 11926 */   MCD::OPC_FilterValue, 8, 5, 0, // Skip to: 11935
/* 11930 */   MCD::OPC_Decode, 233, 14, 139, 1, // Opcode: XVXEXPSP
/* 11935 */   MCD::OPC_FilterValue, 9, 5, 0, // Skip to: 11944
/* 11939 */   MCD::OPC_Decode, 235, 14, 139, 1, // Opcode: XVXSIGSP
/* 11944 */   MCD::OPC_FilterValue, 15, 5, 0, // Skip to: 11953
/* 11948 */   MCD::OPC_Decode, 239, 14, 139, 1, // Opcode: XXBRW
/* 11953 */   MCD::OPC_FilterValue, 23, 5, 0, // Skip to: 11962
/* 11957 */   MCD::OPC_Decode, 236, 14, 139, 1, // Opcode: XXBRD
/* 11962 */   MCD::OPC_FilterValue, 24, 5, 0, // Skip to: 11971
/* 11966 */   MCD::OPC_Decode, 163, 14, 139, 1, // Opcode: XVCVHPSP
/* 11971 */   MCD::OPC_FilterValue, 25, 5, 0, // Skip to: 11980
/* 11975 */   MCD::OPC_Decode, 165, 14, 139, 1, // Opcode: XVCVSPHP
/* 11980 */   MCD::OPC_FilterValue, 31, 136, 6, // Skip to: 13656
/* 11984 */   MCD::OPC_Decode, 238, 14, 139, 1, // Opcode: XXBRQ
/* 11989 */   MCD::OPC_FilterValue, 15, 127, 6, // Skip to: 13656
/* 11993 */   MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 11996 */   MCD::OPC_FilterValue, 0, 77, 0, // Skip to: 12077
/* 12000 */   MCD::OPC_ExtractField, 2, 1,  // Inst{2} ...
/* 12003 */   MCD::OPC_FilterValue, 0, 33, 0, // Skip to: 12040
/* 12007 */   MCD::OPC_ExtractField, 6, 1,  // Inst{6} ...
/* 12010 */   MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 12025
/* 12014 */   MCD::OPC_CheckField, 16, 5, 0, 100, 6, // Skip to: 13656
/* 12020 */   MCD::OPC_Decode, 174, 14, 139, 1, // Opcode: XVCVUXDDP
/* 12025 */   MCD::OPC_FilterValue, 1, 91, 6, // Skip to: 13656
/* 12029 */   MCD::OPC_CheckField, 16, 5, 0, 85, 6, // Skip to: 13656
/* 12035 */   MCD::OPC_Decode, 170, 14, 139, 1, // Opcode: XVCVSXDDP
/* 12040 */   MCD::OPC_FilterValue, 1, 76, 6, // Skip to: 13656
/* 12044 */   MCD::OPC_ExtractField, 6, 1,  // Inst{6} ...
/* 12047 */   MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 12062
/* 12051 */   MCD::OPC_CheckField, 16, 5, 0, 63, 6, // Skip to: 13656
/* 12057 */   MCD::OPC_Decode, 196, 14, 139, 1, // Opcode: XVNABSDP
/* 12062 */   MCD::OPC_FilterValue, 1, 54, 6, // Skip to: 13656
/* 12066 */   MCD::OPC_CheckField, 16, 5, 0, 48, 6, // Skip to: 13656
/* 12072 */   MCD::OPC_Decode, 198, 14, 139, 1, // Opcode: XVNEGDP
/* 12077 */   MCD::OPC_FilterValue, 1, 39, 6, // Skip to: 13656
/* 12081 */   MCD::OPC_Decode, 230, 14, 147, 1, // Opcode: XVTSTDCDP
/* 12086 */   MCD::OPC_FilterValue, 3, 30, 6, // Skip to: 13656
/* 12090 */   MCD::OPC_Decode, 132, 15, 148, 1, // Opcode: XXSEL
/* 12095 */   MCD::OPC_FilterValue, 61, 44, 0, // Skip to: 12143
/* 12099 */   MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 12102 */   MCD::OPC_FilterValue, 1, 21, 0, // Skip to: 12127
/* 12106 */   MCD::OPC_ExtractField, 2, 1,  // Inst{2} ...
/* 12109 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 12118
/* 12113 */   MCD::OPC_Decode, 198, 6, 149, 1, // Opcode: LXV
/* 12118 */   MCD::OPC_FilterValue, 1, 254, 5, // Skip to: 13656
/* 12122 */   MCD::OPC_Decode, 148, 10, 149, 1, // Opcode: STXV
/* 12127 */   MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 12135
/* 12131 */   MCD::OPC_Decode, 139, 10, 116, // Opcode: STXSD
/* 12135 */   MCD::OPC_FilterValue, 3, 237, 5, // Skip to: 13656
/* 12139 */   MCD::OPC_Decode, 146, 10, 116, // Opcode: STXSSP
/* 12143 */   MCD::OPC_FilterValue, 62, 19, 0, // Skip to: 12166
/* 12147 */   MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 12150 */   MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 12158
/* 12154 */   MCD::OPC_Decode, 219, 9, 117, // Opcode: STD
/* 12158 */   MCD::OPC_FilterValue, 1, 214, 5, // Skip to: 13656
/* 12162 */   MCD::OPC_Decode, 224, 9, 117, // Opcode: STDU
/* 12166 */   MCD::OPC_FilterValue, 63, 206, 5, // Skip to: 13656
/* 12170 */   MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 12173 */   MCD::OPC_FilterValue, 0, 38, 0, // Skip to: 12215
/* 12177 */   MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 12180 */   MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 12195
/* 12184 */   MCD::OPC_CheckField, 21, 2, 0, 186, 5, // Skip to: 13656
/* 12190 */   MCD::OPC_Decode, 246, 4, 150, 1, // Opcode: FCMPUS
/* 12195 */   MCD::OPC_FilterValue, 2, 177, 5, // Skip to: 13656
/* 12199 */   MCD::OPC_CheckField, 21, 2, 0, 171, 5, // Skip to: 13656
/* 12205 */   MCD::OPC_CheckField, 11, 7, 0, 165, 5, // Skip to: 13656
/* 12211 */   MCD::OPC_Decode, 210, 6, 31, // Opcode: MCRFS
/* 12215 */   MCD::OPC_FilterValue, 8, 11, 1, // Skip to: 12486
/* 12219 */   MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 12222 */   MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 12230
/* 12226 */   MCD::OPC_Decode, 149, 13, 3, // Opcode: XSADDQP
/* 12230 */   MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 12238
/* 12234 */   MCD::OPC_Decode, 216, 13, 3, // Opcode: XSMULQP
/* 12238 */   MCD::OPC_FilterValue, 3, 4, 0, // Skip to: 12246
/* 12242 */   MCD::OPC_Decode, 163, 13, 3, // Opcode: XSCPSGNQP
/* 12246 */   MCD::OPC_FilterValue, 4, 11, 0, // Skip to: 12261
/* 12250 */   MCD::OPC_CheckField, 21, 2, 0, 120, 5, // Skip to: 13656
/* 12256 */   MCD::OPC_Decode, 159, 13, 151, 1, // Opcode: XSCMPOQP
/* 12261 */   MCD::OPC_FilterValue, 5, 11, 0, // Skip to: 12276
/* 12265 */   MCD::OPC_CheckField, 21, 2, 0, 105, 5, // Skip to: 13656
/* 12271 */   MCD::OPC_Decode, 154, 13, 151, 1, // Opcode: XSCMPEXPQP
/* 12276 */   MCD::OPC_FilterValue, 12, 4, 0, // Skip to: 12284
/* 12280 */   MCD::OPC_Decode, 201, 13, 3, // Opcode: XSMADDQP
/* 12284 */   MCD::OPC_FilterValue, 13, 4, 0, // Skip to: 12292
/* 12288 */   MCD::OPC_Decode, 213, 13, 3, // Opcode: XSMSUBQP
/* 12292 */   MCD::OPC_FilterValue, 14, 4, 0, // Skip to: 12300
/* 12296 */   MCD::OPC_Decode, 227, 13, 3, // Opcode: XSNMADDQP
/* 12300 */   MCD::OPC_FilterValue, 15, 4, 0, // Skip to: 12308
/* 12304 */   MCD::OPC_Decode, 233, 13, 3, // Opcode: XSNMSUBQP
/* 12308 */   MCD::OPC_FilterValue, 16, 4, 0, // Skip to: 12316
/* 12312 */   MCD::OPC_Decode, 252, 13, 3, // Opcode: XSSUBQP
/* 12316 */   MCD::OPC_FilterValue, 17, 4, 0, // Skip to: 12324
/* 12320 */   MCD::OPC_Decode, 192, 13, 3, // Opcode: XSDIVQP
/* 12324 */   MCD::OPC_FilterValue, 20, 11, 0, // Skip to: 12339
/* 12328 */   MCD::OPC_CheckField, 21, 2, 0, 42, 5, // Skip to: 13656
/* 12334 */   MCD::OPC_Decode, 161, 13, 151, 1, // Opcode: XSCMPUQP
/* 12339 */   MCD::OPC_FilterValue, 22, 5, 0, // Skip to: 12348
/* 12343 */   MCD::OPC_Decode, 130, 14, 152, 1, // Opcode: XSTSTDCQP
/* 12348 */   MCD::OPC_FilterValue, 25, 51, 0, // Skip to: 12403
/* 12352 */   MCD::OPC_ExtractField, 16, 5,  // Inst{20-16} ...
/* 12355 */   MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 12363
/* 12359 */   MCD::OPC_Decode, 147, 13, 6, // Opcode: XSABSQP
/* 12363 */   MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 12371
/* 12367 */   MCD::OPC_Decode, 133, 14, 6, // Opcode: XSXEXPQP
/* 12371 */   MCD::OPC_FilterValue, 8, 4, 0, // Skip to: 12379
/* 12375 */   MCD::OPC_Decode, 220, 13, 6, // Opcode: XSNABSQP
/* 12379 */   MCD::OPC_FilterValue, 16, 4, 0, // Skip to: 12387
/* 12383 */   MCD::OPC_Decode, 222, 13, 6, // Opcode: XSNEGQP
/* 12387 */   MCD::OPC_FilterValue, 18, 4, 0, // Skip to: 12395
/* 12391 */   MCD::OPC_Decode, 135, 14, 6, // Opcode: XSXSIGQP
/* 12395 */   MCD::OPC_FilterValue, 27, 233, 4, // Skip to: 13656
/* 12399 */   MCD::OPC_Decode, 248, 13, 6, // Opcode: XSSQRTQP
/* 12403 */   MCD::OPC_FilterValue, 26, 70, 0, // Skip to: 12477
/* 12407 */   MCD::OPC_ExtractField, 16, 5,  // Inst{20-16} ...
/* 12410 */   MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 12418
/* 12414 */   MCD::OPC_Decode, 182, 13, 6, // Opcode: XSCVQPUWZ
/* 12418 */   MCD::OPC_FilterValue, 2, 5, 0, // Skip to: 12427
/* 12422 */   MCD::OPC_Decode, 188, 13, 153, 1, // Opcode: XSCVUDQP
/* 12427 */   MCD::OPC_FilterValue, 9, 4, 0, // Skip to: 12435
/* 12431 */   MCD::OPC_Decode, 180, 13, 6, // Opcode: XSCVQPSWZ
/* 12435 */   MCD::OPC_FilterValue, 10, 5, 0, // Skip to: 12444
/* 12439 */   MCD::OPC_Decode, 183, 13, 153, 1, // Opcode: XSCVSDQP
/* 12444 */   MCD::OPC_FilterValue, 17, 4, 0, // Skip to: 12452
/* 12448 */   MCD::OPC_Decode, 181, 13, 6, // Opcode: XSCVQPUDZ
/* 12452 */   MCD::OPC_FilterValue, 20, 4, 0, // Skip to: 12460
/* 12456 */   MCD::OPC_Decode, 177, 13, 6, // Opcode: XSCVQPDP
/* 12460 */   MCD::OPC_FilterValue, 22, 5, 0, // Skip to: 12469
/* 12464 */   MCD::OPC_Decode, 165, 13, 153, 1, // Opcode: XSCVDPQP
/* 12469 */   MCD::OPC_FilterValue, 25, 159, 4, // Skip to: 13656
/* 12473 */   MCD::OPC_Decode, 179, 13, 6, // Opcode: XSCVQPSDZ
/* 12477 */   MCD::OPC_FilterValue, 27, 151, 4, // Skip to: 13656
/* 12481 */   MCD::OPC_Decode, 196, 13, 154, 1, // Opcode: XSIEXPQP
/* 12486 */   MCD::OPC_FilterValue, 9, 95, 0, // Skip to: 12585
/* 12490 */   MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 12493 */   MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 12501
/* 12497 */   MCD::OPC_Decode, 150, 13, 3, // Opcode: XSADDQPO
/* 12501 */   MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 12509
/* 12505 */   MCD::OPC_Decode, 217, 13, 3, // Opcode: XSMULQPO
/* 12509 */   MCD::OPC_FilterValue, 12, 4, 0, // Skip to: 12517
/* 12513 */   MCD::OPC_Decode, 202, 13, 3, // Opcode: XSMADDQPO
/* 12517 */   MCD::OPC_FilterValue, 13, 4, 0, // Skip to: 12525
/* 12521 */   MCD::OPC_Decode, 214, 13, 3, // Opcode: XSMSUBQPO
/* 12525 */   MCD::OPC_FilterValue, 14, 4, 0, // Skip to: 12533
/* 12529 */   MCD::OPC_Decode, 228, 13, 3, // Opcode: XSNMADDQPO
/* 12533 */   MCD::OPC_FilterValue, 15, 4, 0, // Skip to: 12541
/* 12537 */   MCD::OPC_Decode, 234, 13, 3, // Opcode: XSNMSUBQPO
/* 12541 */   MCD::OPC_FilterValue, 16, 4, 0, // Skip to: 12549
/* 12545 */   MCD::OPC_Decode, 253, 13, 3, // Opcode: XSSUBQPO
/* 12549 */   MCD::OPC_FilterValue, 17, 4, 0, // Skip to: 12557
/* 12553 */   MCD::OPC_Decode, 193, 13, 3, // Opcode: XSDIVQPO
/* 12557 */   MCD::OPC_FilterValue, 25, 10, 0, // Skip to: 12571
/* 12561 */   MCD::OPC_CheckField, 16, 5, 27, 65, 4, // Skip to: 13656
/* 12567 */   MCD::OPC_Decode, 249, 13, 6, // Opcode: XSSQRTQPO
/* 12571 */   MCD::OPC_FilterValue, 26, 57, 4, // Skip to: 13656
/* 12575 */   MCD::OPC_CheckField, 16, 5, 20, 51, 4, // Skip to: 13656
/* 12581 */   MCD::OPC_Decode, 178, 13, 6, // Opcode: XSCVQPDPO
/* 12585 */   MCD::OPC_FilterValue, 10, 21, 0, // Skip to: 12610
/* 12589 */   MCD::OPC_ExtractField, 6, 3,  // Inst{8-6} ...
/* 12592 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 12601
/* 12596 */   MCD::OPC_Decode, 242, 13, 155, 1, // Opcode: XSRQPI
/* 12601 */   MCD::OPC_FilterValue, 1, 27, 4, // Skip to: 13656
/* 12605 */   MCD::OPC_Decode, 244, 13, 155, 1, // Opcode: XSRQPXP
/* 12610 */   MCD::OPC_FilterValue, 11, 11, 0, // Skip to: 12625
/* 12614 */   MCD::OPC_CheckField, 6, 3, 0, 12, 4, // Skip to: 13656
/* 12620 */   MCD::OPC_Decode, 243, 13, 155, 1, // Opcode: XSRQPIX
/* 12625 */   MCD::OPC_FilterValue, 12, 46, 0, // Skip to: 12675
/* 12629 */   MCD::OPC_ExtractField, 6, 6,  // Inst{11-6} ...
/* 12632 */   MCD::OPC_FilterValue, 1, 10, 0, // Skip to: 12646
/* 12636 */   MCD::OPC_CheckField, 12, 9, 0, 246, 3, // Skip to: 13656
/* 12642 */   MCD::OPC_Decode, 247, 6, 105, // Opcode: MTFSB1
/* 12646 */   MCD::OPC_FilterValue, 2, 10, 0, // Skip to: 12660
/* 12650 */   MCD::OPC_CheckField, 12, 9, 0, 232, 3, // Skip to: 13656
/* 12656 */   MCD::OPC_Decode, 246, 6, 105, // Opcode: MTFSB0
/* 12660 */   MCD::OPC_FilterValue, 4, 224, 3, // Skip to: 13656
/* 12664 */   MCD::OPC_CheckField, 17, 6, 0, 218, 3, // Skip to: 13656
/* 12670 */   MCD::OPC_Decode, 249, 6, 156, 1, // Opcode: MTFSFI
/* 12675 */   MCD::OPC_FilterValue, 13, 17, 0, // Skip to: 12696
/* 12679 */   MCD::OPC_CheckField, 17, 6, 0, 203, 3, // Skip to: 13656
/* 12685 */   MCD::OPC_CheckField, 6, 6, 4, 197, 3, // Skip to: 13656
/* 12691 */   MCD::OPC_Decode, 250, 6, 156, 1, // Opcode: MTFSFIo
/* 12696 */   MCD::OPC_FilterValue, 14, 27, 0, // Skip to: 12727
/* 12700 */   MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 12703 */   MCD::OPC_FilterValue, 18, 11, 0, // Skip to: 12718
/* 12707 */   MCD::OPC_CheckField, 11, 10, 0, 175, 3, // Skip to: 13656
/* 12713 */   MCD::OPC_Decode, 218, 6, 157, 1, // Opcode: MFFS
/* 12718 */   MCD::OPC_FilterValue, 22, 166, 3, // Skip to: 13656
/* 12722 */   MCD::OPC_Decode, 248, 6, 158, 1, // Opcode: MTFSF
/* 12727 */   MCD::OPC_FilterValue, 15, 27, 0, // Skip to: 12758
/* 12731 */   MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 12734 */   MCD::OPC_FilterValue, 18, 11, 0, // Skip to: 12749
/* 12738 */   MCD::OPC_CheckField, 11, 10, 0, 144, 3, // Skip to: 13656
/* 12744 */   MCD::OPC_Decode, 219, 6, 157, 1, // Opcode: MFFSo
/* 12749 */   MCD::OPC_FilterValue, 22, 135, 3, // Skip to: 13656
/* 12753 */   MCD::OPC_Decode, 252, 6, 158, 1, // Opcode: MTFSFo
/* 12758 */   MCD::OPC_FilterValue, 16, 123, 0, // Skip to: 12885
/* 12762 */   MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 12765 */   MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 12773
/* 12769 */   MCD::OPC_Decode, 249, 4, 119, // Opcode: FCPSGNS
/* 12773 */   MCD::OPC_FilterValue, 1, 10, 0, // Skip to: 12787
/* 12777 */   MCD::OPC_CheckField, 16, 5, 0, 105, 3, // Skip to: 13656
/* 12783 */   MCD::OPC_Decode, 159, 5, 120, // Opcode: FNEGS
/* 12787 */   MCD::OPC_FilterValue, 2, 10, 0, // Skip to: 12801
/* 12791 */   MCD::OPC_CheckField, 16, 5, 0, 91, 3, // Skip to: 13656
/* 12797 */   MCD::OPC_Decode, 143, 5, 120, // Opcode: FMR
/* 12801 */   MCD::OPC_FilterValue, 4, 10, 0, // Skip to: 12815
/* 12805 */   MCD::OPC_CheckField, 16, 5, 0, 77, 3, // Skip to: 13656
/* 12811 */   MCD::OPC_Decode, 155, 5, 120, // Opcode: FNABSS
/* 12815 */   MCD::OPC_FilterValue, 8, 10, 0, // Skip to: 12829
/* 12819 */   MCD::OPC_CheckField, 16, 5, 0, 63, 3, // Skip to: 13656
/* 12825 */   MCD::OPC_Decode, 230, 4, 120, // Opcode: FABSS
/* 12829 */   MCD::OPC_FilterValue, 12, 10, 0, // Skip to: 12843
/* 12833 */   MCD::OPC_CheckField, 16, 5, 0, 49, 3, // Skip to: 13656
/* 12839 */   MCD::OPC_Decode, 179, 5, 120, // Opcode: FRINS
/* 12843 */   MCD::OPC_FilterValue, 13, 10, 0, // Skip to: 12857
/* 12847 */   MCD::OPC_CheckField, 16, 5, 0, 35, 3, // Skip to: 13656
/* 12853 */   MCD::OPC_Decode, 187, 5, 120, // Opcode: FRIZS
/* 12857 */   MCD::OPC_FilterValue, 14, 10, 0, // Skip to: 12871
/* 12861 */   MCD::OPC_CheckField, 16, 5, 0, 21, 3, // Skip to: 13656
/* 12867 */   MCD::OPC_Decode, 183, 5, 120, // Opcode: FRIPS
/* 12871 */   MCD::OPC_FilterValue, 15, 13, 3, // Skip to: 13656
/* 12875 */   MCD::OPC_CheckField, 16, 5, 0, 7, 3, // Skip to: 13656
/* 12881 */   MCD::OPC_Decode, 175, 5, 120, // Opcode: FRIMS
/* 12885 */   MCD::OPC_FilterValue, 17, 123, 0, // Skip to: 13012
/* 12889 */   MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 12892 */   MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 12900
/* 12896 */   MCD::OPC_Decode, 250, 4, 119, // Opcode: FCPSGNSo
/* 12900 */   MCD::OPC_FilterValue, 1, 10, 0, // Skip to: 12914
/* 12904 */   MCD::OPC_CheckField, 16, 5, 0, 234, 2, // Skip to: 13656
/* 12910 */   MCD::OPC_Decode, 160, 5, 120, // Opcode: FNEGSo
/* 12914 */   MCD::OPC_FilterValue, 2, 10, 0, // Skip to: 12928
/* 12918 */   MCD::OPC_CheckField, 16, 5, 0, 220, 2, // Skip to: 13656
/* 12924 */   MCD::OPC_Decode, 144, 5, 120, // Opcode: FMRo
/* 12928 */   MCD::OPC_FilterValue, 4, 10, 0, // Skip to: 12942
/* 12932 */   MCD::OPC_CheckField, 16, 5, 0, 206, 2, // Skip to: 13656
/* 12938 */   MCD::OPC_Decode, 156, 5, 120, // Opcode: FNABSSo
/* 12942 */   MCD::OPC_FilterValue, 8, 10, 0, // Skip to: 12956
/* 12946 */   MCD::OPC_CheckField, 16, 5, 0, 192, 2, // Skip to: 13656
/* 12952 */   MCD::OPC_Decode, 231, 4, 120, // Opcode: FABSSo
/* 12956 */   MCD::OPC_FilterValue, 12, 10, 0, // Skip to: 12970
/* 12960 */   MCD::OPC_CheckField, 16, 5, 0, 178, 2, // Skip to: 13656
/* 12966 */   MCD::OPC_Decode, 180, 5, 120, // Opcode: FRINSo
/* 12970 */   MCD::OPC_FilterValue, 13, 10, 0, // Skip to: 12984
/* 12974 */   MCD::OPC_CheckField, 16, 5, 0, 164, 2, // Skip to: 13656
/* 12980 */   MCD::OPC_Decode, 188, 5, 120, // Opcode: FRIZSo
/* 12984 */   MCD::OPC_FilterValue, 14, 10, 0, // Skip to: 12998
/* 12988 */   MCD::OPC_CheckField, 16, 5, 0, 150, 2, // Skip to: 13656
/* 12994 */   MCD::OPC_Decode, 184, 5, 120, // Opcode: FRIPSo
/* 12998 */   MCD::OPC_FilterValue, 15, 142, 2, // Skip to: 13656
/* 13002 */   MCD::OPC_CheckField, 16, 5, 0, 136, 2, // Skip to: 13656
/* 13008 */   MCD::OPC_Decode, 176, 5, 120, // Opcode: FRIMSo
/* 13012 */   MCD::OPC_FilterValue, 24, 16, 0, // Skip to: 13032
/* 13016 */   MCD::OPC_CheckField, 16, 5, 0, 122, 2, // Skip to: 13656
/* 13022 */   MCD::OPC_CheckField, 6, 5, 0, 116, 2, // Skip to: 13656
/* 13028 */   MCD::OPC_Decode, 189, 5, 118, // Opcode: FRSP
/* 13032 */   MCD::OPC_FilterValue, 25, 16, 0, // Skip to: 13052
/* 13036 */   MCD::OPC_CheckField, 16, 5, 0, 102, 2, // Skip to: 13656
/* 13042 */   MCD::OPC_CheckField, 6, 5, 0, 96, 2, // Skip to: 13656
/* 13048 */   MCD::OPC_Decode, 190, 5, 118, // Opcode: FRSPo
/* 13052 */   MCD::OPC_FilterValue, 28, 63, 0, // Skip to: 13119
/* 13056 */   MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 13059 */   MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 13074
/* 13063 */   MCD::OPC_CheckField, 16, 5, 0, 75, 2, // Skip to: 13656
/* 13069 */   MCD::OPC_Decode, 129, 5, 159, 1, // Opcode: FCTIW
/* 13074 */   MCD::OPC_FilterValue, 25, 11, 0, // Skip to: 13089
/* 13078 */   MCD::OPC_CheckField, 16, 5, 0, 60, 2, // Skip to: 13656
/* 13084 */   MCD::OPC_Decode, 251, 4, 159, 1, // Opcode: FCTID
/* 13089 */   MCD::OPC_FilterValue, 26, 11, 0, // Skip to: 13104
/* 13093 */   MCD::OPC_CheckField, 16, 5, 0, 45, 2, // Skip to: 13656
/* 13099 */   MCD::OPC_Decode, 237, 4, 159, 1, // Opcode: FCFID
/* 13104 */   MCD::OPC_FilterValue, 30, 36, 2, // Skip to: 13656
/* 13108 */   MCD::OPC_CheckField, 16, 5, 0, 30, 2, // Skip to: 13656
/* 13114 */   MCD::OPC_Decode, 240, 4, 159, 1, // Opcode: FCFIDU
/* 13119 */   MCD::OPC_FilterValue, 29, 63, 0, // Skip to: 13186
/* 13123 */   MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 13126 */   MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 13141
/* 13130 */   MCD::OPC_CheckField, 16, 5, 0, 8, 2, // Skip to: 13656
/* 13136 */   MCD::OPC_Decode, 134, 5, 159, 1, // Opcode: FCTIWo
/* 13141 */   MCD::OPC_FilterValue, 25, 11, 0, // Skip to: 13156
/* 13145 */   MCD::OPC_CheckField, 16, 5, 0, 249, 1, // Skip to: 13656
/* 13151 */   MCD::OPC_Decode, 128, 5, 159, 1, // Opcode: FCTIDo
/* 13156 */   MCD::OPC_FilterValue, 26, 11, 0, // Skip to: 13171
/* 13160 */   MCD::OPC_CheckField, 16, 5, 0, 234, 1, // Skip to: 13656
/* 13166 */   MCD::OPC_Decode, 244, 4, 159, 1, // Opcode: FCFIDo
/* 13171 */   MCD::OPC_FilterValue, 30, 225, 1, // Skip to: 13656
/* 13175 */   MCD::OPC_CheckField, 16, 5, 0, 219, 1, // Skip to: 13656
/* 13181 */   MCD::OPC_Decode, 243, 4, 159, 1, // Opcode: FCFIDUo
/* 13186 */   MCD::OPC_FilterValue, 30, 63, 0, // Skip to: 13253
/* 13190 */   MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 13193 */   MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 13208
/* 13197 */   MCD::OPC_CheckField, 16, 5, 0, 197, 1, // Skip to: 13656
/* 13203 */   MCD::OPC_Decode, 132, 5, 159, 1, // Opcode: FCTIWZ
/* 13208 */   MCD::OPC_FilterValue, 4, 11, 0, // Skip to: 13223
/* 13212 */   MCD::OPC_CheckField, 16, 5, 0, 182, 1, // Skip to: 13656
/* 13218 */   MCD::OPC_Decode, 130, 5, 159, 1, // Opcode: FCTIWUZ
/* 13223 */   MCD::OPC_FilterValue, 25, 11, 0, // Skip to: 13238
/* 13227 */   MCD::OPC_CheckField, 16, 5, 0, 167, 1, // Skip to: 13656
/* 13233 */   MCD::OPC_Decode, 254, 4, 159, 1, // Opcode: FCTIDZ
/* 13238 */   MCD::OPC_FilterValue, 29, 158, 1, // Skip to: 13656
/* 13242 */   MCD::OPC_CheckField, 16, 5, 0, 152, 1, // Skip to: 13656
/* 13248 */   MCD::OPC_Decode, 252, 4, 159, 1, // Opcode: FCTIDUZ
/* 13253 */   MCD::OPC_FilterValue, 31, 63, 0, // Skip to: 13320
/* 13257 */   MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 13260 */   MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 13275
/* 13264 */   MCD::OPC_CheckField, 16, 5, 0, 130, 1, // Skip to: 13656
/* 13270 */   MCD::OPC_Decode, 133, 5, 159, 1, // Opcode: FCTIWZo
/* 13275 */   MCD::OPC_FilterValue, 4, 11, 0, // Skip to: 13290
/* 13279 */   MCD::OPC_CheckField, 16, 5, 0, 115, 1, // Skip to: 13656
/* 13285 */   MCD::OPC_Decode, 131, 5, 159, 1, // Opcode: FCTIWUZo
/* 13290 */   MCD::OPC_FilterValue, 25, 11, 0, // Skip to: 13305
/* 13294 */   MCD::OPC_CheckField, 16, 5, 0, 100, 1, // Skip to: 13656
/* 13300 */   MCD::OPC_Decode, 255, 4, 159, 1, // Opcode: FCTIDZo
/* 13305 */   MCD::OPC_FilterValue, 29, 91, 1, // Skip to: 13656
/* 13309 */   MCD::OPC_CheckField, 16, 5, 0, 85, 1, // Skip to: 13656
/* 13315 */   MCD::OPC_Decode, 253, 4, 159, 1, // Opcode: FCTIDUZo
/* 13320 */   MCD::OPC_FilterValue, 36, 11, 0, // Skip to: 13335
/* 13324 */   MCD::OPC_CheckField, 6, 5, 0, 70, 1, // Skip to: 13656
/* 13330 */   MCD::OPC_Decode, 135, 5, 160, 1, // Opcode: FDIV
/* 13335 */   MCD::OPC_FilterValue, 37, 11, 0, // Skip to: 13350
/* 13339 */   MCD::OPC_CheckField, 6, 5, 0, 55, 1, // Skip to: 13656
/* 13345 */   MCD::OPC_Decode, 138, 5, 160, 1, // Opcode: FDIVo
/* 13350 */   MCD::OPC_FilterValue, 40, 11, 0, // Skip to: 13365
/* 13354 */   MCD::OPC_CheckField, 6, 5, 0, 40, 1, // Skip to: 13656
/* 13360 */   MCD::OPC_Decode, 203, 5, 160, 1, // Opcode: FSUB
/* 13365 */   MCD::OPC_FilterValue, 41, 11, 0, // Skip to: 13380
/* 13369 */   MCD::OPC_CheckField, 6, 5, 0, 25, 1, // Skip to: 13656
/* 13375 */   MCD::OPC_Decode, 206, 5, 160, 1, // Opcode: FSUBo
/* 13380 */   MCD::OPC_FilterValue, 42, 11, 0, // Skip to: 13395
/* 13384 */   MCD::OPC_CheckField, 6, 5, 0, 10, 1, // Skip to: 13656
/* 13390 */   MCD::OPC_Decode, 232, 4, 160, 1, // Opcode: FADD
/* 13395 */   MCD::OPC_FilterValue, 43, 11, 0, // Skip to: 13410
/* 13399 */   MCD::OPC_CheckField, 6, 5, 0, 251, 0, // Skip to: 13656
/* 13405 */   MCD::OPC_Decode, 235, 4, 160, 1, // Opcode: FADDo
/* 13410 */   MCD::OPC_FilterValue, 44, 17, 0, // Skip to: 13431
/* 13414 */   MCD::OPC_CheckField, 16, 5, 0, 236, 0, // Skip to: 13656
/* 13420 */   MCD::OPC_CheckField, 6, 5, 0, 230, 0, // Skip to: 13656
/* 13426 */   MCD::OPC_Decode, 199, 5, 159, 1, // Opcode: FSQRT
/* 13431 */   MCD::OPC_FilterValue, 45, 17, 0, // Skip to: 13452
/* 13435 */   MCD::OPC_CheckField, 16, 5, 0, 215, 0, // Skip to: 13656
/* 13441 */   MCD::OPC_CheckField, 6, 5, 0, 209, 0, // Skip to: 13656
/* 13447 */   MCD::OPC_Decode, 202, 5, 159, 1, // Opcode: FSQRTo
/* 13452 */   MCD::OPC_FilterValue, 46, 5, 0, // Skip to: 13461
/* 13456 */   MCD::OPC_Decode, 197, 5, 161, 1, // Opcode: FSELS
/* 13461 */   MCD::OPC_FilterValue, 47, 5, 0, // Skip to: 13470
/* 13465 */   MCD::OPC_Decode, 198, 5, 161, 1, // Opcode: FSELSo
/* 13470 */   MCD::OPC_FilterValue, 48, 17, 0, // Skip to: 13491
/* 13474 */   MCD::OPC_CheckField, 16, 5, 0, 176, 0, // Skip to: 13656
/* 13480 */   MCD::OPC_CheckField, 6, 5, 0, 170, 0, // Skip to: 13656
/* 13486 */   MCD::OPC_Decode, 169, 5, 159, 1, // Opcode: FRE
/* 13491 */   MCD::OPC_FilterValue, 49, 17, 0, // Skip to: 13512
/* 13495 */   MCD::OPC_CheckField, 16, 5, 0, 155, 0, // Skip to: 13656
/* 13501 */   MCD::OPC_CheckField, 6, 5, 0, 149, 0, // Skip to: 13656
/* 13507 */   MCD::OPC_Decode, 172, 5, 159, 1, // Opcode: FREo
/* 13512 */   MCD::OPC_FilterValue, 50, 11, 0, // Skip to: 13527
/* 13516 */   MCD::OPC_CheckField, 11, 5, 0, 134, 0, // Skip to: 13656
/* 13522 */   MCD::OPC_Decode, 149, 5, 162, 1, // Opcode: FMUL
/* 13527 */   MCD::OPC_FilterValue, 51, 11, 0, // Skip to: 13542
/* 13531 */   MCD::OPC_CheckField, 11, 5, 0, 119, 0, // Skip to: 13656
/* 13537 */   MCD::OPC_Decode, 152, 5, 162, 1, // Opcode: FMULo
/* 13542 */   MCD::OPC_FilterValue, 52, 17, 0, // Skip to: 13563
/* 13546 */   MCD::OPC_CheckField, 16, 5, 0, 104, 0, // Skip to: 13656
/* 13552 */   MCD::OPC_CheckField, 6, 5, 0, 98, 0, // Skip to: 13656
/* 13558 */   MCD::OPC_Decode, 191, 5, 159, 1, // Opcode: FRSQRTE
/* 13563 */   MCD::OPC_FilterValue, 53, 17, 0, // Skip to: 13584
/* 13567 */   MCD::OPC_CheckField, 16, 5, 0, 83, 0, // Skip to: 13656
/* 13573 */   MCD::OPC_CheckField, 6, 5, 0, 77, 0, // Skip to: 13656
/* 13579 */   MCD::OPC_Decode, 194, 5, 159, 1, // Opcode: FRSQRTEo
/* 13584 */   MCD::OPC_FilterValue, 56, 5, 0, // Skip to: 13593
/* 13588 */   MCD::OPC_Decode, 145, 5, 163, 1, // Opcode: FMSUB
/* 13593 */   MCD::OPC_FilterValue, 57, 5, 0, // Skip to: 13602
/* 13597 */   MCD::OPC_Decode, 148, 5, 163, 1, // Opcode: FMSUBo
/* 13602 */   MCD::OPC_FilterValue, 58, 5, 0, // Skip to: 13611
/* 13606 */   MCD::OPC_Decode, 139, 5, 163, 1, // Opcode: FMADD
/* 13611 */   MCD::OPC_FilterValue, 59, 5, 0, // Skip to: 13620
/* 13615 */   MCD::OPC_Decode, 142, 5, 163, 1, // Opcode: FMADDo
/* 13620 */   MCD::OPC_FilterValue, 60, 5, 0, // Skip to: 13629
/* 13624 */   MCD::OPC_Decode, 165, 5, 163, 1, // Opcode: FNMSUB
/* 13629 */   MCD::OPC_FilterValue, 61, 5, 0, // Skip to: 13638
/* 13633 */   MCD::OPC_Decode, 168, 5, 163, 1, // Opcode: FNMSUBo
/* 13638 */   MCD::OPC_FilterValue, 62, 5, 0, // Skip to: 13647
/* 13642 */   MCD::OPC_Decode, 161, 5, 163, 1, // Opcode: FNMADD
/* 13647 */   MCD::OPC_FilterValue, 63, 5, 0, // Skip to: 13656
/* 13651 */   MCD::OPC_Decode, 164, 5, 163, 1, // Opcode: FNMADDo
/* 13656 */   MCD::OPC_Fail,
  0
};

static const uint8_t DecoderTableQPX32[] = {
/* 0 */       MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 3 */       MCD::OPC_FilterValue, 0, 63, 0, // Skip to: 70
/* 7 */       MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 10 */      MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 25
/* 14 */      MCD::OPC_CheckField, 26, 6, 4, 178, 7, // Skip to: 1990
/* 20 */      MCD::OPC_Decode, 209, 7, 164, 1, // Opcode: QVFCMPEQb
/* 25 */      MCD::OPC_FilterValue, 1, 11, 0, // Skip to: 40
/* 29 */      MCD::OPC_CheckField, 26, 6, 4, 163, 7, // Skip to: 1990
/* 35 */      MCD::OPC_Decode, 212, 7, 164, 1, // Opcode: QVFCMPGTb
/* 40 */      MCD::OPC_FilterValue, 2, 11, 0, // Skip to: 55
/* 44 */      MCD::OPC_CheckField, 26, 6, 4, 148, 7, // Skip to: 1990
/* 50 */      MCD::OPC_Decode, 151, 8, 164, 1, // Opcode: QVFTSTNANb
/* 55 */      MCD::OPC_FilterValue, 3, 139, 7, // Skip to: 1990
/* 59 */      MCD::OPC_CheckField, 26, 6, 4, 133, 7, // Skip to: 1990
/* 65 */      MCD::OPC_Decode, 215, 7, 164, 1, // Opcode: QVFCMPLTb
/* 70 */      MCD::OPC_FilterValue, 2, 21, 0, // Skip to: 95
/* 74 */      MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 77 */      MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 86
/* 81 */      MCD::OPC_Decode, 160, 8, 165, 1, // Opcode: QVFXXMADDS
/* 86 */      MCD::OPC_FilterValue, 4, 108, 7, // Skip to: 1990
/* 90 */      MCD::OPC_Decode, 159, 8, 165, 1, // Opcode: QVFXXMADD
/* 95 */      MCD::OPC_FilterValue, 6, 21, 0, // Skip to: 120
/* 99 */      MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 102 */     MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 111
/* 106 */     MCD::OPC_Decode, 158, 8, 165, 1, // Opcode: QVFXXCPNMADDS
/* 111 */     MCD::OPC_FilterValue, 4, 83, 7, // Skip to: 1990
/* 115 */     MCD::OPC_Decode, 157, 8, 165, 1, // Opcode: QVFXXCPNMADD
/* 120 */     MCD::OPC_FilterValue, 8, 17, 0, // Skip to: 141
/* 124 */     MCD::OPC_CheckField, 26, 6, 4, 68, 7, // Skip to: 1990
/* 130 */     MCD::OPC_CheckField, 6, 1, 0, 62, 7, // Skip to: 1990
/* 136 */     MCD::OPC_Decode, 229, 7, 166, 1, // Opcode: QVFLOGICALb
/* 141 */     MCD::OPC_FilterValue, 10, 191, 0, // Skip to: 336
/* 145 */     MCD::OPC_ExtractField, 6, 3,  // Inst{8-6} ...
/* 148 */     MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 163
/* 152 */     MCD::OPC_CheckField, 26, 6, 4, 40, 7, // Skip to: 1990
/* 158 */     MCD::OPC_Decode, 192, 7, 167, 1, // Opcode: QVALIGNI
/* 163 */     MCD::OPC_FilterValue, 1, 17, 0, // Skip to: 184
/* 167 */     MCD::OPC_CheckField, 26, 6, 4, 25, 7, // Skip to: 1990
/* 173 */     MCD::OPC_CheckField, 11, 5, 0, 19, 7, // Skip to: 1990
/* 179 */     MCD::OPC_Decode, 195, 7, 168, 1, // Opcode: QVESPLATI
/* 184 */     MCD::OPC_FilterValue, 4, 37, 0, // Skip to: 225
/* 188 */     MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 191 */     MCD::OPC_FilterValue, 4, 5, 0, // Skip to: 200
/* 195 */     MCD::OPC_Decode, 163, 8, 169, 1, // Opcode: QVGPCI
/* 200 */     MCD::OPC_FilterValue, 31, 250, 6, // Skip to: 1990
/* 204 */     MCD::OPC_ExtractField, 9, 2,  // Inst{10-9} ...
/* 207 */     MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 216
/* 211 */     MCD::OPC_Decode, 207, 8, 170, 1, // Opcode: QVSTFCSXI
/* 216 */     MCD::OPC_FilterValue, 2, 234, 6, // Skip to: 1990
/* 220 */     MCD::OPC_Decode, 228, 8, 170, 1, // Opcode: QVSTFSXI
/* 225 */     MCD::OPC_FilterValue, 5, 33, 0, // Skip to: 262
/* 229 */     MCD::OPC_ExtractField, 9, 2,  // Inst{10-9} ...
/* 232 */     MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 247
/* 236 */     MCD::OPC_CheckField, 26, 6, 31, 212, 6, // Skip to: 1990
/* 242 */     MCD::OPC_Decode, 203, 8, 170, 1, // Opcode: QVSTFCSUXI
/* 247 */     MCD::OPC_FilterValue, 2, 203, 6, // Skip to: 1990
/* 251 */     MCD::OPC_CheckField, 26, 6, 31, 197, 6, // Skip to: 1990
/* 257 */     MCD::OPC_Decode, 223, 8, 170, 1, // Opcode: QVSTFSUXI
/* 262 */     MCD::OPC_FilterValue, 6, 33, 0, // Skip to: 299
/* 266 */     MCD::OPC_ExtractField, 9, 2,  // Inst{10-9} ...
/* 269 */     MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 284
/* 273 */     MCD::OPC_CheckField, 26, 6, 31, 175, 6, // Skip to: 1990
/* 279 */     MCD::OPC_Decode, 199, 8, 170, 1, // Opcode: QVSTFCDXI
/* 284 */     MCD::OPC_FilterValue, 2, 166, 6, // Skip to: 1990
/* 288 */     MCD::OPC_CheckField, 26, 6, 31, 160, 6, // Skip to: 1990
/* 294 */     MCD::OPC_Decode, 216, 8, 170, 1, // Opcode: QVSTFDXI
/* 299 */     MCD::OPC_FilterValue, 7, 151, 6, // Skip to: 1990
/* 303 */     MCD::OPC_ExtractField, 9, 2,  // Inst{10-9} ...
/* 306 */     MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 321
/* 310 */     MCD::OPC_CheckField, 26, 6, 31, 138, 6, // Skip to: 1990
/* 316 */     MCD::OPC_Decode, 195, 8, 170, 1, // Opcode: QVSTFCDUXI
/* 321 */     MCD::OPC_FilterValue, 2, 129, 6, // Skip to: 1990
/* 325 */     MCD::OPC_CheckField, 26, 6, 31, 123, 6, // Skip to: 1990
/* 331 */     MCD::OPC_Decode, 212, 8, 170, 1, // Opcode: QVSTFDUXI
/* 336 */     MCD::OPC_FilterValue, 11, 123, 0, // Skip to: 463
/* 340 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 343 */     MCD::OPC_FilterValue, 4, 11, 0, // Skip to: 358
/* 347 */     MCD::OPC_CheckField, 26, 6, 31, 101, 6, // Skip to: 1990
/* 353 */     MCD::OPC_Decode, 208, 8, 170, 1, // Opcode: QVSTFCSXIA
/* 358 */     MCD::OPC_FilterValue, 5, 11, 0, // Skip to: 373
/* 362 */     MCD::OPC_CheckField, 26, 6, 31, 86, 6, // Skip to: 1990
/* 368 */     MCD::OPC_Decode, 204, 8, 170, 1, // Opcode: QVSTFCSUXIA
/* 373 */     MCD::OPC_FilterValue, 6, 11, 0, // Skip to: 388
/* 377 */     MCD::OPC_CheckField, 26, 6, 31, 71, 6, // Skip to: 1990
/* 383 */     MCD::OPC_Decode, 200, 8, 170, 1, // Opcode: QVSTFCDXIA
/* 388 */     MCD::OPC_FilterValue, 7, 11, 0, // Skip to: 403
/* 392 */     MCD::OPC_CheckField, 26, 6, 31, 56, 6, // Skip to: 1990
/* 398 */     MCD::OPC_Decode, 196, 8, 170, 1, // Opcode: QVSTFCDUXIA
/* 403 */     MCD::OPC_FilterValue, 20, 11, 0, // Skip to: 418
/* 407 */     MCD::OPC_CheckField, 26, 6, 31, 41, 6, // Skip to: 1990
/* 413 */     MCD::OPC_Decode, 229, 8, 170, 1, // Opcode: QVSTFSXIA
/* 418 */     MCD::OPC_FilterValue, 21, 11, 0, // Skip to: 433
/* 422 */     MCD::OPC_CheckField, 26, 6, 31, 26, 6, // Skip to: 1990
/* 428 */     MCD::OPC_Decode, 224, 8, 170, 1, // Opcode: QVSTFSUXIA
/* 433 */     MCD::OPC_FilterValue, 22, 11, 0, // Skip to: 448
/* 437 */     MCD::OPC_CheckField, 26, 6, 31, 11, 6, // Skip to: 1990
/* 443 */     MCD::OPC_Decode, 217, 8, 170, 1, // Opcode: QVSTFDXIA
/* 448 */     MCD::OPC_FilterValue, 23, 2, 6, // Skip to: 1990
/* 452 */     MCD::OPC_CheckField, 26, 6, 31, 252, 5, // Skip to: 1990
/* 458 */     MCD::OPC_Decode, 213, 8, 170, 1, // Opcode: QVSTFDUXIA
/* 463 */     MCD::OPC_FilterValue, 12, 55, 0, // Skip to: 522
/* 467 */     MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 470 */     MCD::OPC_FilterValue, 4, 5, 0, // Skip to: 479
/* 474 */     MCD::OPC_Decode, 253, 7, 165, 1, // Opcode: QVFPERM
/* 479 */     MCD::OPC_FilterValue, 31, 227, 5, // Skip to: 1990
/* 483 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 486 */     MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 495
/* 490 */     MCD::OPC_Decode, 192, 8, 170, 1, // Opcode: QVLPCRSX
/* 495 */     MCD::OPC_FilterValue, 2, 5, 0, // Skip to: 504
/* 499 */     MCD::OPC_Decode, 191, 8, 170, 1, // Opcode: QVLPCRDX
/* 504 */     MCD::OPC_FilterValue, 16, 5, 0, // Skip to: 513
/* 508 */     MCD::OPC_Decode, 189, 8, 170, 1, // Opcode: QVLPCLSX
/* 513 */     MCD::OPC_FilterValue, 18, 193, 5, // Skip to: 1990
/* 517 */     MCD::OPC_Decode, 188, 8, 170, 1, // Opcode: QVLPCLDX
/* 522 */     MCD::OPC_FilterValue, 14, 32, 1, // Skip to: 814
/* 526 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 529 */     MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 544
/* 533 */     MCD::OPC_CheckField, 26, 6, 31, 171, 5, // Skip to: 1990
/* 539 */     MCD::OPC_Decode, 170, 8, 170, 1, // Opcode: QVLFCSX
/* 544 */     MCD::OPC_FilterValue, 1, 11, 0, // Skip to: 559
/* 548 */     MCD::OPC_CheckField, 26, 6, 31, 156, 5, // Skip to: 1990
/* 554 */     MCD::OPC_Decode, 168, 8, 170, 1, // Opcode: QVLFCSUX
/* 559 */     MCD::OPC_FilterValue, 2, 11, 0, // Skip to: 574
/* 563 */     MCD::OPC_CheckField, 26, 6, 31, 141, 5, // Skip to: 1990
/* 569 */     MCD::OPC_Decode, 166, 8, 170, 1, // Opcode: QVLFCDX
/* 574 */     MCD::OPC_FilterValue, 3, 11, 0, // Skip to: 589
/* 578 */     MCD::OPC_CheckField, 26, 6, 31, 126, 5, // Skip to: 1990
/* 584 */     MCD::OPC_Decode, 164, 8, 170, 1, // Opcode: QVLFCDUX
/* 589 */     MCD::OPC_FilterValue, 4, 11, 0, // Skip to: 604
/* 593 */     MCD::OPC_CheckField, 26, 6, 31, 111, 5, // Skip to: 1990
/* 599 */     MCD::OPC_Decode, 205, 8, 170, 1, // Opcode: QVSTFCSX
/* 604 */     MCD::OPC_FilterValue, 5, 11, 0, // Skip to: 619
/* 608 */     MCD::OPC_CheckField, 26, 6, 31, 96, 5, // Skip to: 1990
/* 614 */     MCD::OPC_Decode, 201, 8, 170, 1, // Opcode: QVSTFCSUX
/* 619 */     MCD::OPC_FilterValue, 6, 11, 0, // Skip to: 634
/* 623 */     MCD::OPC_CheckField, 26, 6, 31, 81, 5, // Skip to: 1990
/* 629 */     MCD::OPC_Decode, 197, 8, 170, 1, // Opcode: QVSTFCDX
/* 634 */     MCD::OPC_FilterValue, 7, 11, 0, // Skip to: 649
/* 638 */     MCD::OPC_CheckField, 26, 6, 31, 66, 5, // Skip to: 1990
/* 644 */     MCD::OPC_Decode, 193, 8, 170, 1, // Opcode: QVSTFCDUX
/* 649 */     MCD::OPC_FilterValue, 16, 11, 0, // Skip to: 664
/* 653 */     MCD::OPC_CheckField, 26, 6, 31, 51, 5, // Skip to: 1990
/* 659 */     MCD::OPC_Decode, 184, 8, 170, 1, // Opcode: QVLFSX
/* 664 */     MCD::OPC_FilterValue, 17, 11, 0, // Skip to: 679
/* 668 */     MCD::OPC_CheckField, 26, 6, 31, 36, 5, // Skip to: 1990
/* 674 */     MCD::OPC_Decode, 182, 8, 171, 1, // Opcode: QVLFSUX
/* 679 */     MCD::OPC_FilterValue, 18, 11, 0, // Skip to: 694
/* 683 */     MCD::OPC_CheckField, 26, 6, 31, 21, 5, // Skip to: 1990
/* 689 */     MCD::OPC_Decode, 175, 8, 170, 1, // Opcode: QVLFDX
/* 694 */     MCD::OPC_FilterValue, 19, 11, 0, // Skip to: 709
/* 698 */     MCD::OPC_CheckField, 26, 6, 31, 6, 5, // Skip to: 1990
/* 704 */     MCD::OPC_Decode, 173, 8, 172, 1, // Opcode: QVLFDUX
/* 709 */     MCD::OPC_FilterValue, 20, 11, 0, // Skip to: 724
/* 713 */     MCD::OPC_CheckField, 26, 6, 31, 247, 4, // Skip to: 1990
/* 719 */     MCD::OPC_Decode, 226, 8, 170, 1, // Opcode: QVSTFSX
/* 724 */     MCD::OPC_FilterValue, 21, 11, 0, // Skip to: 739
/* 728 */     MCD::OPC_CheckField, 26, 6, 31, 232, 4, // Skip to: 1990
/* 734 */     MCD::OPC_Decode, 221, 8, 173, 1, // Opcode: QVSTFSUX
/* 739 */     MCD::OPC_FilterValue, 22, 11, 0, // Skip to: 754
/* 743 */     MCD::OPC_CheckField, 26, 6, 31, 217, 4, // Skip to: 1990
/* 749 */     MCD::OPC_Decode, 214, 8, 170, 1, // Opcode: QVSTFDX
/* 754 */     MCD::OPC_FilterValue, 23, 11, 0, // Skip to: 769
/* 758 */     MCD::OPC_CheckField, 26, 6, 31, 202, 4, // Skip to: 1990
/* 764 */     MCD::OPC_Decode, 210, 8, 174, 1, // Opcode: QVSTFDUX
/* 769 */     MCD::OPC_FilterValue, 26, 11, 0, // Skip to: 784
/* 773 */     MCD::OPC_CheckField, 26, 6, 31, 187, 4, // Skip to: 1990
/* 779 */     MCD::OPC_Decode, 180, 8, 170, 1, // Opcode: QVLFIWZX
/* 784 */     MCD::OPC_FilterValue, 27, 11, 0, // Skip to: 799
/* 788 */     MCD::OPC_CheckField, 26, 6, 31, 172, 4, // Skip to: 1990
/* 794 */     MCD::OPC_Decode, 178, 8, 170, 1, // Opcode: QVLFIWAX
/* 799 */     MCD::OPC_FilterValue, 30, 163, 4, // Skip to: 1990
/* 803 */     MCD::OPC_CheckField, 26, 6, 31, 157, 4, // Skip to: 1990
/* 809 */     MCD::OPC_Decode, 219, 8, 170, 1, // Opcode: QVSTFIWX
/* 814 */     MCD::OPC_FilterValue, 15, 32, 1, // Skip to: 1106
/* 818 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 821 */     MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 836
/* 825 */     MCD::OPC_CheckField, 26, 6, 31, 135, 4, // Skip to: 1990
/* 831 */     MCD::OPC_Decode, 171, 8, 170, 1, // Opcode: QVLFCSXA
/* 836 */     MCD::OPC_FilterValue, 1, 11, 0, // Skip to: 851
/* 840 */     MCD::OPC_CheckField, 26, 6, 31, 120, 4, // Skip to: 1990
/* 846 */     MCD::OPC_Decode, 169, 8, 170, 1, // Opcode: QVLFCSUXA
/* 851 */     MCD::OPC_FilterValue, 2, 11, 0, // Skip to: 866
/* 855 */     MCD::OPC_CheckField, 26, 6, 31, 105, 4, // Skip to: 1990
/* 861 */     MCD::OPC_Decode, 167, 8, 170, 1, // Opcode: QVLFCDXA
/* 866 */     MCD::OPC_FilterValue, 3, 11, 0, // Skip to: 881
/* 870 */     MCD::OPC_CheckField, 26, 6, 31, 90, 4, // Skip to: 1990
/* 876 */     MCD::OPC_Decode, 165, 8, 170, 1, // Opcode: QVLFCDUXA
/* 881 */     MCD::OPC_FilterValue, 4, 11, 0, // Skip to: 896
/* 885 */     MCD::OPC_CheckField, 26, 6, 31, 75, 4, // Skip to: 1990
/* 891 */     MCD::OPC_Decode, 206, 8, 170, 1, // Opcode: QVSTFCSXA
/* 896 */     MCD::OPC_FilterValue, 5, 11, 0, // Skip to: 911
/* 900 */     MCD::OPC_CheckField, 26, 6, 31, 60, 4, // Skip to: 1990
/* 906 */     MCD::OPC_Decode, 202, 8, 170, 1, // Opcode: QVSTFCSUXA
/* 911 */     MCD::OPC_FilterValue, 6, 11, 0, // Skip to: 926
/* 915 */     MCD::OPC_CheckField, 26, 6, 31, 45, 4, // Skip to: 1990
/* 921 */     MCD::OPC_Decode, 198, 8, 170, 1, // Opcode: QVSTFCDXA
/* 926 */     MCD::OPC_FilterValue, 7, 11, 0, // Skip to: 941
/* 930 */     MCD::OPC_CheckField, 26, 6, 31, 30, 4, // Skip to: 1990
/* 936 */     MCD::OPC_Decode, 194, 8, 170, 1, // Opcode: QVSTFCDUXA
/* 941 */     MCD::OPC_FilterValue, 16, 11, 0, // Skip to: 956
/* 945 */     MCD::OPC_CheckField, 26, 6, 31, 15, 4, // Skip to: 1990
/* 951 */     MCD::OPC_Decode, 185, 8, 170, 1, // Opcode: QVLFSXA
/* 956 */     MCD::OPC_FilterValue, 17, 11, 0, // Skip to: 971
/* 960 */     MCD::OPC_CheckField, 26, 6, 31, 0, 4, // Skip to: 1990
/* 966 */     MCD::OPC_Decode, 183, 8, 170, 1, // Opcode: QVLFSUXA
/* 971 */     MCD::OPC_FilterValue, 18, 11, 0, // Skip to: 986
/* 975 */     MCD::OPC_CheckField, 26, 6, 31, 241, 3, // Skip to: 1990
/* 981 */     MCD::OPC_Decode, 176, 8, 170, 1, // Opcode: QVLFDXA
/* 986 */     MCD::OPC_FilterValue, 19, 11, 0, // Skip to: 1001
/* 990 */     MCD::OPC_CheckField, 26, 6, 31, 226, 3, // Skip to: 1990
/* 996 */     MCD::OPC_Decode, 174, 8, 170, 1, // Opcode: QVLFDUXA
/* 1001 */    MCD::OPC_FilterValue, 20, 11, 0, // Skip to: 1016
/* 1005 */    MCD::OPC_CheckField, 26, 6, 31, 211, 3, // Skip to: 1990
/* 1011 */    MCD::OPC_Decode, 227, 8, 170, 1, // Opcode: QVSTFSXA
/* 1016 */    MCD::OPC_FilterValue, 21, 11, 0, // Skip to: 1031
/* 1020 */    MCD::OPC_CheckField, 26, 6, 31, 196, 3, // Skip to: 1990
/* 1026 */    MCD::OPC_Decode, 222, 8, 170, 1, // Opcode: QVSTFSUXA
/* 1031 */    MCD::OPC_FilterValue, 22, 11, 0, // Skip to: 1046
/* 1035 */    MCD::OPC_CheckField, 26, 6, 31, 181, 3, // Skip to: 1990
/* 1041 */    MCD::OPC_Decode, 215, 8, 170, 1, // Opcode: QVSTFDXA
/* 1046 */    MCD::OPC_FilterValue, 23, 11, 0, // Skip to: 1061
/* 1050 */    MCD::OPC_CheckField, 26, 6, 31, 166, 3, // Skip to: 1990
/* 1056 */    MCD::OPC_Decode, 211, 8, 170, 1, // Opcode: QVSTFDUXA
/* 1061 */    MCD::OPC_FilterValue, 26, 11, 0, // Skip to: 1076
/* 1065 */    MCD::OPC_CheckField, 26, 6, 31, 151, 3, // Skip to: 1990
/* 1071 */    MCD::OPC_Decode, 181, 8, 170, 1, // Opcode: QVLFIWZXA
/* 1076 */    MCD::OPC_FilterValue, 27, 11, 0, // Skip to: 1091
/* 1080 */    MCD::OPC_CheckField, 26, 6, 31, 136, 3, // Skip to: 1990
/* 1086 */    MCD::OPC_Decode, 179, 8, 170, 1, // Opcode: QVLFIWAXA
/* 1091 */    MCD::OPC_FilterValue, 30, 127, 3, // Skip to: 1990
/* 1095 */    MCD::OPC_CheckField, 26, 6, 31, 121, 3, // Skip to: 1990
/* 1101 */    MCD::OPC_Decode, 220, 8, 170, 1, // Opcode: QVSTFIWXA
/* 1106 */    MCD::OPC_FilterValue, 16, 186, 0, // Skip to: 1296
/* 1110 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 1113 */    MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 1128
/* 1117 */    MCD::OPC_CheckField, 26, 6, 4, 99, 3, // Skip to: 1990
/* 1123 */    MCD::OPC_Decode, 217, 7, 175, 1, // Opcode: QVFCPSGN
/* 1128 */    MCD::OPC_FilterValue, 1, 17, 0, // Skip to: 1149
/* 1132 */    MCD::OPC_CheckField, 26, 6, 4, 84, 3, // Skip to: 1990
/* 1138 */    MCD::OPC_CheckField, 16, 5, 0, 78, 3, // Skip to: 1990
/* 1144 */    MCD::OPC_Decode, 245, 7, 176, 1, // Opcode: QVFNEG
/* 1149 */    MCD::OPC_FilterValue, 2, 17, 0, // Skip to: 1170
/* 1153 */    MCD::OPC_CheckField, 26, 6, 4, 63, 3, // Skip to: 1990
/* 1159 */    MCD::OPC_CheckField, 16, 5, 0, 57, 3, // Skip to: 1990
/* 1165 */    MCD::OPC_Decode, 234, 7, 176, 1, // Opcode: QVFMR
/* 1170 */    MCD::OPC_FilterValue, 4, 17, 0, // Skip to: 1191
/* 1174 */    MCD::OPC_CheckField, 26, 6, 4, 42, 3, // Skip to: 1990
/* 1180 */    MCD::OPC_CheckField, 16, 5, 0, 36, 3, // Skip to: 1990
/* 1186 */    MCD::OPC_Decode, 243, 7, 176, 1, // Opcode: QVFNABS
/* 1191 */    MCD::OPC_FilterValue, 8, 17, 0, // Skip to: 1212
/* 1195 */    MCD::OPC_CheckField, 26, 6, 4, 21, 3, // Skip to: 1990
/* 1201 */    MCD::OPC_CheckField, 16, 5, 0, 15, 3, // Skip to: 1990
/* 1207 */    MCD::OPC_Decode, 198, 7, 176, 1, // Opcode: QVFABS
/* 1212 */    MCD::OPC_FilterValue, 12, 17, 0, // Skip to: 1233
/* 1216 */    MCD::OPC_CheckField, 26, 6, 4, 0, 3, // Skip to: 1990
/* 1222 */    MCD::OPC_CheckField, 16, 5, 0, 250, 2, // Skip to: 1990
/* 1228 */    MCD::OPC_Decode, 132, 8, 176, 1, // Opcode: QVFRIN
/* 1233 */    MCD::OPC_FilterValue, 13, 17, 0, // Skip to: 1254
/* 1237 */    MCD::OPC_CheckField, 26, 6, 4, 235, 2, // Skip to: 1990
/* 1243 */    MCD::OPC_CheckField, 16, 5, 0, 229, 2, // Skip to: 1990
/* 1249 */    MCD::OPC_Decode, 136, 8, 176, 1, // Opcode: QVFRIZ
/* 1254 */    MCD::OPC_FilterValue, 14, 17, 0, // Skip to: 1275
/* 1258 */    MCD::OPC_CheckField, 26, 6, 4, 214, 2, // Skip to: 1990
/* 1264 */    MCD::OPC_CheckField, 16, 5, 0, 208, 2, // Skip to: 1990
/* 1270 */    MCD::OPC_Decode, 134, 8, 176, 1, // Opcode: QVFRIP
/* 1275 */    MCD::OPC_FilterValue, 15, 199, 2, // Skip to: 1990
/* 1279 */    MCD::OPC_CheckField, 26, 6, 4, 193, 2, // Skip to: 1990
/* 1285 */    MCD::OPC_CheckField, 16, 5, 0, 187, 2, // Skip to: 1990
/* 1291 */    MCD::OPC_Decode, 130, 8, 176, 1, // Opcode: QVFRIM
/* 1296 */    MCD::OPC_FilterValue, 18, 21, 0, // Skip to: 1321
/* 1300 */    MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 1303 */    MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 1312
/* 1307 */    MCD::OPC_Decode, 154, 8, 165, 1, // Opcode: QVFXMADDS
/* 1312 */    MCD::OPC_FilterValue, 4, 162, 2, // Skip to: 1990
/* 1316 */    MCD::OPC_Decode, 153, 8, 165, 1, // Opcode: QVFXMADD
/* 1321 */    MCD::OPC_FilterValue, 22, 21, 0, // Skip to: 1346
/* 1325 */    MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 1328 */    MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 1337
/* 1332 */    MCD::OPC_Decode, 162, 8, 165, 1, // Opcode: QVFXXNPMADDS
/* 1337 */    MCD::OPC_FilterValue, 4, 137, 2, // Skip to: 1990
/* 1341 */    MCD::OPC_Decode, 161, 8, 165, 1, // Opcode: QVFXXNPMADD
/* 1346 */    MCD::OPC_FilterValue, 24, 23, 0, // Skip to: 1373
/* 1350 */    MCD::OPC_CheckField, 26, 6, 4, 122, 2, // Skip to: 1990
/* 1356 */    MCD::OPC_CheckField, 16, 5, 0, 116, 2, // Skip to: 1990
/* 1362 */    MCD::OPC_CheckField, 6, 5, 0, 110, 2, // Skip to: 1990
/* 1368 */    MCD::OPC_Decode, 139, 8, 177, 1, // Opcode: QVFRSPs
/* 1373 */    MCD::OPC_FilterValue, 28, 161, 0, // Skip to: 1538
/* 1377 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 1380 */    MCD::OPC_FilterValue, 0, 17, 0, // Skip to: 1401
/* 1384 */    MCD::OPC_CheckField, 26, 6, 4, 88, 2, // Skip to: 1990
/* 1390 */    MCD::OPC_CheckField, 16, 5, 0, 82, 2, // Skip to: 1990
/* 1396 */    MCD::OPC_Decode, 224, 7, 176, 1, // Opcode: QVFCTIW
/* 1401 */    MCD::OPC_FilterValue, 4, 17, 0, // Skip to: 1422
/* 1405 */    MCD::OPC_CheckField, 26, 6, 4, 67, 2, // Skip to: 1990
/* 1411 */    MCD::OPC_CheckField, 16, 5, 0, 61, 2, // Skip to: 1990
/* 1417 */    MCD::OPC_Decode, 225, 7, 176, 1, // Opcode: QVFCTIWU
/* 1422 */    MCD::OPC_FilterValue, 25, 17, 0, // Skip to: 1443
/* 1426 */    MCD::OPC_CheckField, 26, 6, 4, 46, 2, // Skip to: 1990
/* 1432 */    MCD::OPC_CheckField, 16, 5, 0, 40, 2, // Skip to: 1990
/* 1438 */    MCD::OPC_Decode, 219, 7, 176, 1, // Opcode: QVFCTID
/* 1443 */    MCD::OPC_FilterValue, 26, 33, 0, // Skip to: 1480
/* 1447 */    MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 1450 */    MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 1465
/* 1454 */    MCD::OPC_CheckField, 16, 5, 0, 18, 2, // Skip to: 1990
/* 1460 */    MCD::OPC_Decode, 204, 7, 176, 1, // Opcode: QVFCFIDS
/* 1465 */    MCD::OPC_FilterValue, 4, 9, 2, // Skip to: 1990
/* 1469 */    MCD::OPC_CheckField, 16, 5, 0, 3, 2, // Skip to: 1990
/* 1475 */    MCD::OPC_Decode, 203, 7, 176, 1, // Opcode: QVFCFID
/* 1480 */    MCD::OPC_FilterValue, 29, 17, 0, // Skip to: 1501
/* 1484 */    MCD::OPC_CheckField, 26, 6, 4, 244, 1, // Skip to: 1990
/* 1490 */    MCD::OPC_CheckField, 16, 5, 0, 238, 1, // Skip to: 1990
/* 1496 */    MCD::OPC_Decode, 220, 7, 176, 1, // Opcode: QVFCTIDU
/* 1501 */    MCD::OPC_FilterValue, 30, 229, 1, // Skip to: 1990
/* 1505 */    MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 1508 */    MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 1523
/* 1512 */    MCD::OPC_CheckField, 16, 5, 0, 216, 1, // Skip to: 1990
/* 1518 */    MCD::OPC_Decode, 206, 7, 176, 1, // Opcode: QVFCFIDUS
/* 1523 */    MCD::OPC_FilterValue, 4, 207, 1, // Skip to: 1990
/* 1527 */    MCD::OPC_CheckField, 16, 5, 0, 201, 1, // Skip to: 1990
/* 1533 */    MCD::OPC_Decode, 205, 7, 176, 1, // Opcode: QVFCFIDU
/* 1538 */    MCD::OPC_FilterValue, 30, 87, 0, // Skip to: 1629
/* 1542 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 1545 */    MCD::OPC_FilterValue, 0, 17, 0, // Skip to: 1566
/* 1549 */    MCD::OPC_CheckField, 26, 6, 4, 179, 1, // Skip to: 1990
/* 1555 */    MCD::OPC_CheckField, 16, 5, 0, 173, 1, // Skip to: 1990
/* 1561 */    MCD::OPC_Decode, 227, 7, 176, 1, // Opcode: QVFCTIWZ
/* 1566 */    MCD::OPC_FilterValue, 4, 17, 0, // Skip to: 1587
/* 1570 */    MCD::OPC_CheckField, 26, 6, 4, 158, 1, // Skip to: 1990
/* 1576 */    MCD::OPC_CheckField, 16, 5, 0, 152, 1, // Skip to: 1990
/* 1582 */    MCD::OPC_Decode, 226, 7, 176, 1, // Opcode: QVFCTIWUZ
/* 1587 */    MCD::OPC_FilterValue, 25, 17, 0, // Skip to: 1608
/* 1591 */    MCD::OPC_CheckField, 26, 6, 4, 137, 1, // Skip to: 1990
/* 1597 */    MCD::OPC_CheckField, 16, 5, 0, 131, 1, // Skip to: 1990
/* 1603 */    MCD::OPC_Decode, 222, 7, 176, 1, // Opcode: QVFCTIDZ
/* 1608 */    MCD::OPC_FilterValue, 29, 122, 1, // Skip to: 1990
/* 1612 */    MCD::OPC_CheckField, 26, 6, 4, 116, 1, // Skip to: 1990
/* 1618 */    MCD::OPC_CheckField, 16, 5, 0, 110, 1, // Skip to: 1990
/* 1624 */    MCD::OPC_Decode, 221, 7, 176, 1, // Opcode: QVFCTIDUZ
/* 1629 */    MCD::OPC_FilterValue, 34, 33, 0, // Skip to: 1666
/* 1633 */    MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 1636 */    MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 1651
/* 1640 */    MCD::OPC_CheckField, 11, 5, 0, 88, 1, // Skip to: 1990
/* 1646 */    MCD::OPC_Decode, 156, 8, 178, 1, // Opcode: QVFXMULS
/* 1651 */    MCD::OPC_FilterValue, 4, 79, 1, // Skip to: 1990
/* 1655 */    MCD::OPC_CheckField, 11, 5, 0, 73, 1, // Skip to: 1990
/* 1661 */    MCD::OPC_Decode, 155, 8, 178, 1, // Opcode: QVFXMUL
/* 1666 */    MCD::OPC_FilterValue, 40, 33, 0, // Skip to: 1703
/* 1670 */    MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 1673 */    MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 1688
/* 1677 */    MCD::OPC_CheckField, 6, 5, 0, 51, 1, // Skip to: 1990
/* 1683 */    MCD::OPC_Decode, 149, 8, 179, 1, // Opcode: QVFSUBSs
/* 1688 */    MCD::OPC_FilterValue, 4, 42, 1, // Skip to: 1990
/* 1692 */    MCD::OPC_CheckField, 6, 5, 0, 36, 1, // Skip to: 1990
/* 1698 */    MCD::OPC_Decode, 147, 8, 175, 1, // Opcode: QVFSUB
/* 1703 */    MCD::OPC_FilterValue, 42, 33, 0, // Skip to: 1740
/* 1707 */    MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 1710 */    MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 1725
/* 1714 */    MCD::OPC_CheckField, 6, 5, 0, 14, 1, // Skip to: 1990
/* 1720 */    MCD::OPC_Decode, 202, 7, 179, 1, // Opcode: QVFADDSs
/* 1725 */    MCD::OPC_FilterValue, 4, 5, 1, // Skip to: 1990
/* 1729 */    MCD::OPC_CheckField, 6, 5, 0, 255, 0, // Skip to: 1990
/* 1735 */    MCD::OPC_Decode, 200, 7, 175, 1, // Opcode: QVFADD
/* 1740 */    MCD::OPC_FilterValue, 46, 11, 0, // Skip to: 1755
/* 1744 */    MCD::OPC_CheckField, 26, 6, 4, 240, 0, // Skip to: 1990
/* 1750 */    MCD::OPC_Decode, 144, 8, 180, 1, // Opcode: QVFSELb
/* 1755 */    MCD::OPC_FilterValue, 48, 45, 0, // Skip to: 1804
/* 1759 */    MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 1762 */    MCD::OPC_FilterValue, 0, 17, 0, // Skip to: 1783
/* 1766 */    MCD::OPC_CheckField, 16, 5, 0, 218, 0, // Skip to: 1990
/* 1772 */    MCD::OPC_CheckField, 6, 5, 0, 212, 0, // Skip to: 1990
/* 1778 */    MCD::OPC_Decode, 128, 8, 176, 1, // Opcode: QVFRES
/* 1783 */    MCD::OPC_FilterValue, 4, 203, 0, // Skip to: 1990
/* 1787 */    MCD::OPC_CheckField, 16, 5, 0, 197, 0, // Skip to: 1990
/* 1793 */    MCD::OPC_CheckField, 6, 5, 0, 191, 0, // Skip to: 1990
/* 1799 */    MCD::OPC_Decode, 255, 7, 176, 1, // Opcode: QVFRE
/* 1804 */    MCD::OPC_FilterValue, 50, 33, 0, // Skip to: 1841
/* 1808 */    MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 1811 */    MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 1826
/* 1815 */    MCD::OPC_CheckField, 11, 5, 0, 169, 0, // Skip to: 1990
/* 1821 */    MCD::OPC_Decode, 242, 7, 181, 1, // Opcode: QVFMULSs
/* 1826 */    MCD::OPC_FilterValue, 4, 160, 0, // Skip to: 1990
/* 1830 */    MCD::OPC_CheckField, 11, 5, 0, 154, 0, // Skip to: 1990
/* 1836 */    MCD::OPC_Decode, 240, 7, 178, 1, // Opcode: QVFMUL
/* 1841 */    MCD::OPC_FilterValue, 52, 45, 0, // Skip to: 1890
/* 1845 */    MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 1848 */    MCD::OPC_FilterValue, 0, 17, 0, // Skip to: 1869
/* 1852 */    MCD::OPC_CheckField, 16, 5, 0, 132, 0, // Skip to: 1990
/* 1858 */    MCD::OPC_CheckField, 6, 5, 0, 126, 0, // Skip to: 1990
/* 1864 */    MCD::OPC_Decode, 141, 8, 176, 1, // Opcode: QVFRSQRTES
/* 1869 */    MCD::OPC_FilterValue, 4, 117, 0, // Skip to: 1990
/* 1873 */    MCD::OPC_CheckField, 16, 5, 0, 111, 0, // Skip to: 1990
/* 1879 */    MCD::OPC_CheckField, 6, 5, 0, 105, 0, // Skip to: 1990
/* 1885 */    MCD::OPC_Decode, 140, 8, 176, 1, // Opcode: QVFRSQRTE
/* 1890 */    MCD::OPC_FilterValue, 56, 21, 0, // Skip to: 1915
/* 1894 */    MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 1897 */    MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 1906
/* 1901 */    MCD::OPC_Decode, 239, 7, 182, 1, // Opcode: QVFMSUBSs
/* 1906 */    MCD::OPC_FilterValue, 4, 80, 0, // Skip to: 1990
/* 1910 */    MCD::OPC_Decode, 237, 7, 165, 1, // Opcode: QVFMSUB
/* 1915 */    MCD::OPC_FilterValue, 58, 21, 0, // Skip to: 1940
/* 1919 */    MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 1922 */    MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 1931
/* 1926 */    MCD::OPC_Decode, 233, 7, 182, 1, // Opcode: QVFMADDSs
/* 1931 */    MCD::OPC_FilterValue, 4, 55, 0, // Skip to: 1990
/* 1935 */    MCD::OPC_Decode, 231, 7, 165, 1, // Opcode: QVFMADD
/* 1940 */    MCD::OPC_FilterValue, 60, 21, 0, // Skip to: 1965
/* 1944 */    MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 1947 */    MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 1956
/* 1951 */    MCD::OPC_Decode, 252, 7, 182, 1, // Opcode: QVFNMSUBSs
/* 1956 */    MCD::OPC_FilterValue, 4, 30, 0, // Skip to: 1990
/* 1960 */    MCD::OPC_Decode, 250, 7, 165, 1, // Opcode: QVFNMSUB
/* 1965 */    MCD::OPC_FilterValue, 62, 21, 0, // Skip to: 1990
/* 1969 */    MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 1972 */    MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 1981
/* 1976 */    MCD::OPC_Decode, 249, 7, 182, 1, // Opcode: QVFNMADDSs
/* 1981 */    MCD::OPC_FilterValue, 4, 5, 0, // Skip to: 1990
/* 1985 */    MCD::OPC_Decode, 247, 7, 165, 1, // Opcode: QVFNMADD
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
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 54:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (decodeUImmOperand<5>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 55:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (decodeUImmOperand<5>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 56:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 1);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 57:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 58:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 59:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 60:
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 1) << 5;
    tmp |= fieldFromInstruction(insn, 21, 5) << 0;
    if (DecodeVSFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePointerLikeRegClass1(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodePointerLikeRegClass0(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 61:
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 1) << 5;
    tmp |= fieldFromInstruction(insn, 21, 5) << 0;
    if (DecodeVSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
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
    if (DecodePointerLikeRegClass0(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 63:
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 1) << 5;
    tmp |= fieldFromInstruction(insn, 21, 5) << 0;
    if (DecodeVSSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePointerLikeRegClass1(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodePointerLikeRegClass0(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 64:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 10);
    if (decodeUImmOperand<10>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 65:
    tmp = fieldFromInstruction(insn, 21, 1);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 66:
    tmp = fieldFromInstruction(insn, 25, 1);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 67:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeCRRC0RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 68:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeCRRC0RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (decodeUImmOperand<5>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 69:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 70:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPRC_NOR0RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeCRBITRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 71:
    tmp = fieldFromInstruction(insn, 12, 8);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 72:
    tmp = fieldFromInstruction(insn, 12, 8);
    if (decodeCRBitMOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 73:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 12, 8);
    if (decodeCRBitMOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 74:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 1) << 5;
    tmp |= fieldFromInstruction(insn, 21, 5) << 0;
    if (DecodeVSFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 75:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 1) << 5;
    tmp |= fieldFromInstruction(insn, 21, 5) << 0;
    if (DecodeVSFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 76:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 1);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 77:
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 1) << 5;
    tmp |= fieldFromInstruction(insn, 21, 5) << 0;
    if (DecodeVSFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 78:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 79:
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 1) << 5;
    tmp |= fieldFromInstruction(insn, 21, 5) << 0;
    if (DecodeVSFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 80:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 81:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 82:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 1) << 5;
    tmp |= fieldFromInstruction(insn, 21, 5) << 0;
    if (DecodeVSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 83:
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 1) << 5;
    tmp |= fieldFromInstruction(insn, 21, 5) << 0;
    if (DecodeVSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 84:
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 1) << 5;
    tmp |= fieldFromInstruction(insn, 21, 5) << 0;
    if (DecodeVSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 85:
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 11, 5) << 5;
    tmp |= fieldFromInstruction(insn, 16, 5) << 0;
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 86:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 1);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 87:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePointerLikeRegClass1(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodePointerLikeRegClass0(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 88:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
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
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePointerLikeRegClass1(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodePointerLikeRegClass0(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 90:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePointerLikeRegClass1(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePointerLikeRegClass1(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodePointerLikeRegClass0(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 91:
    tmp = fieldFromInstruction(insn, 21, 4);
    MI.addOperand(MCOperand::createImm(tmp));
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
    if (DecodeVRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeVRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 152:
    tmp = fieldFromInstruction(insn, 23, 3);
    if (DecodeCRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 7);
    if (decodeUImmOperand<7>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeVRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 153:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeVRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeVFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 154:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeVRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeVRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeVSFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 155:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeVRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeVRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 9, 2);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 156:
    tmp = fieldFromInstruction(insn, 23, 3);
    if (DecodeCRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 12, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 16, 1);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 157:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeF8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 158:
    tmp = fieldFromInstruction(insn, 17, 8);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeF8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 25, 1);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 16, 1);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 159:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeF8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeF8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 160:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeF8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeF8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeF8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 161:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeF4RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeF8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeF4RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeF4RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 162:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeF8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeF8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeF8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 163:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeF8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeF8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeF8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeF8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 164:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeQBRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeQFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeQFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 165:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeQFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeQFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeQFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeQFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 166:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeQBRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeQBRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeQBRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 7, 4);
    if (decodeUImmOperand<12>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 167:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeQFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeQFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeQFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 9, 2);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 168:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeQFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeQFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 9, 2);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 169:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeQFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 9, 12);
    if (decodeUImmOperand<12>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 170:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeQFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePointerLikeRegClass1(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodePointerLikeRegClass0(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 171:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeQSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePointerLikeRegClass1(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePointerLikeRegClass1(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodePointerLikeRegClass0(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 172:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeQFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePointerLikeRegClass1(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePointerLikeRegClass1(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodePointerLikeRegClass0(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 173:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePointerLikeRegClass1(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeQSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePointerLikeRegClass1(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodePointerLikeRegClass0(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 174:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePointerLikeRegClass1(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeQFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePointerLikeRegClass1(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodePointerLikeRegClass0(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 175:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeQFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeQFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeQFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 176:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeQFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeQFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 177:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeQSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeQFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 178:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeQFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeQFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeQFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 179:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeQSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeQSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeQSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 180:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeQFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeQBRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeQFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeQFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 181:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeQSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeQSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeQSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 182:
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
