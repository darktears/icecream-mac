/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|*  * Lanai Disassembler                                                      *|
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

static const uint8_t DecoderTableLanai32[] = {
/* 0 */       MCD::OPC_ExtractField, 28, 4,  // Inst{31-28} ...
/* 3 */       MCD::OPC_FilterValue, 0, 114, 0, // Skip to: 121
/* 7 */       MCD::OPC_ExtractField, 16, 2,  // Inst{17-16} ...
/* 10 */      MCD::OPC_FilterValue, 0, 86, 0, // Skip to: 100
/* 14 */      MCD::OPC_ExtractField, 0, 16,  // Inst{15-0} ...
/* 17 */      MCD::OPC_FilterValue, 1, 10, 0, // Skip to: 31
/* 21 */      MCD::OPC_CheckField, 18, 10, 0, 70, 0, // Skip to: 97
/* 27 */      MCD::OPC_Decode, 130, 1, 0, // Opcode: NOP
/* 31 */      MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 44
/* 35 */      MCD::OPC_CheckField, 18, 10, 0, 56, 0, // Skip to: 97
/* 41 */      MCD::OPC_Decode, 124, 0, // Opcode: LOG0
/* 44 */      MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 57
/* 48 */      MCD::OPC_CheckField, 18, 10, 0, 43, 0, // Skip to: 97
/* 54 */      MCD::OPC_Decode, 125, 0, // Opcode: LOG1
/* 57 */      MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 70
/* 61 */      MCD::OPC_CheckField, 18, 10, 0, 30, 0, // Skip to: 97
/* 67 */      MCD::OPC_Decode, 126, 0, // Opcode: LOG2
/* 70 */      MCD::OPC_FilterValue, 5, 9, 0, // Skip to: 83
/* 74 */      MCD::OPC_CheckField, 18, 10, 0, 17, 0, // Skip to: 97
/* 80 */      MCD::OPC_Decode, 127, 0, // Opcode: LOG3
/* 83 */      MCD::OPC_FilterValue, 6, 10, 0, // Skip to: 97
/* 87 */      MCD::OPC_CheckField, 18, 10, 0, 4, 0, // Skip to: 97
/* 93 */      MCD::OPC_Decode, 128, 1, 0, // Opcode: LOG4
/* 97 */      MCD::OPC_Decode, 92, 1, // Opcode: ADD_I_LO
/* 100 */     MCD::OPC_FilterValue, 1, 3, 0, // Skip to: 107
/* 104 */     MCD::OPC_Decode, 91, 1, // Opcode: ADD_I_HI
/* 107 */     MCD::OPC_FilterValue, 2, 3, 0, // Skip to: 114
/* 111 */     MCD::OPC_Decode, 89, 1, // Opcode: ADD_F_I_LO
/* 114 */     MCD::OPC_FilterValue, 3, 55, 3, // Skip to: 941
/* 118 */     MCD::OPC_Decode, 88, 1, // Opcode: ADD_F_I_HI
/* 121 */     MCD::OPC_FilterValue, 1, 31, 0, // Skip to: 156
/* 125 */     MCD::OPC_ExtractField, 16, 2,  // Inst{17-16} ...
/* 128 */     MCD::OPC_FilterValue, 0, 3, 0, // Skip to: 135
/* 132 */     MCD::OPC_Decode, 86, 1, // Opcode: ADDC_I_LO
/* 135 */     MCD::OPC_FilterValue, 1, 3, 0, // Skip to: 142
/* 139 */     MCD::OPC_Decode, 85, 1, // Opcode: ADDC_I_HI
/* 142 */     MCD::OPC_FilterValue, 2, 3, 0, // Skip to: 149
/* 146 */     MCD::OPC_Decode, 83, 1, // Opcode: ADDC_F_I_LO
/* 149 */     MCD::OPC_FilterValue, 3, 20, 3, // Skip to: 941
/* 153 */     MCD::OPC_Decode, 82, 1, // Opcode: ADDC_F_I_HI
/* 156 */     MCD::OPC_FilterValue, 2, 35, 0, // Skip to: 195
/* 160 */     MCD::OPC_ExtractField, 16, 2,  // Inst{17-16} ...
/* 163 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 171
/* 167 */     MCD::OPC_Decode, 170, 1, 1, // Opcode: SUB_I_LO
/* 171 */     MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 179
/* 175 */     MCD::OPC_Decode, 169, 1, 1, // Opcode: SUB_I_HI
/* 179 */     MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 187
/* 183 */     MCD::OPC_Decode, 167, 1, 1, // Opcode: SUB_F_I_LO
/* 187 */     MCD::OPC_FilterValue, 3, 238, 2, // Skip to: 941
/* 191 */     MCD::OPC_Decode, 166, 1, 1, // Opcode: SUB_F_I_HI
/* 195 */     MCD::OPC_FilterValue, 3, 35, 0, // Skip to: 234
/* 199 */     MCD::OPC_ExtractField, 16, 2,  // Inst{17-16} ...
/* 202 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 210
/* 206 */     MCD::OPC_Decode, 164, 1, 1, // Opcode: SUBB_I_LO
/* 210 */     MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 218
/* 214 */     MCD::OPC_Decode, 163, 1, 1, // Opcode: SUBB_I_HI
/* 218 */     MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 226
/* 222 */     MCD::OPC_Decode, 161, 1, 1, // Opcode: SUBB_F_I_LO
/* 226 */     MCD::OPC_FilterValue, 3, 199, 2, // Skip to: 941
/* 230 */     MCD::OPC_Decode, 160, 1, 1, // Opcode: SUBB_F_I_HI
/* 234 */     MCD::OPC_FilterValue, 4, 31, 0, // Skip to: 269
/* 238 */     MCD::OPC_ExtractField, 16, 2,  // Inst{17-16} ...
/* 241 */     MCD::OPC_FilterValue, 0, 3, 0, // Skip to: 248
/* 245 */     MCD::OPC_Decode, 101, 1, // Opcode: AND_I_LO
/* 248 */     MCD::OPC_FilterValue, 1, 3, 0, // Skip to: 255
/* 252 */     MCD::OPC_Decode, 100, 1, // Opcode: AND_I_HI
/* 255 */     MCD::OPC_FilterValue, 2, 3, 0, // Skip to: 262
/* 259 */     MCD::OPC_Decode, 98, 1, // Opcode: AND_F_I_LO
/* 262 */     MCD::OPC_FilterValue, 3, 163, 2, // Skip to: 941
/* 266 */     MCD::OPC_Decode, 97, 1, // Opcode: AND_F_I_HI
/* 269 */     MCD::OPC_FilterValue, 5, 35, 0, // Skip to: 308
/* 273 */     MCD::OPC_ExtractField, 16, 2,  // Inst{17-16} ...
/* 276 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 284
/* 280 */     MCD::OPC_Decode, 135, 1, 1, // Opcode: OR_I_LO
/* 284 */     MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 292
/* 288 */     MCD::OPC_Decode, 134, 1, 1, // Opcode: OR_I_HI
/* 292 */     MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 300
/* 296 */     MCD::OPC_Decode, 132, 1, 1, // Opcode: OR_F_I_LO
/* 300 */     MCD::OPC_FilterValue, 3, 125, 2, // Skip to: 941
/* 304 */     MCD::OPC_Decode, 131, 1, 1, // Opcode: OR_F_I_HI
/* 308 */     MCD::OPC_FilterValue, 6, 35, 0, // Skip to: 347
/* 312 */     MCD::OPC_ExtractField, 16, 2,  // Inst{17-16} ...
/* 315 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 323
/* 319 */     MCD::OPC_Decode, 179, 1, 1, // Opcode: XOR_I_LO
/* 323 */     MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 331
/* 327 */     MCD::OPC_Decode, 178, 1, 1, // Opcode: XOR_I_HI
/* 331 */     MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 339
/* 335 */     MCD::OPC_Decode, 176, 1, 1, // Opcode: XOR_F_I_LO
/* 339 */     MCD::OPC_FilterValue, 3, 86, 2, // Skip to: 941
/* 343 */     MCD::OPC_Decode, 175, 1, 1, // Opcode: XOR_F_I_HI
/* 347 */     MCD::OPC_FilterValue, 7, 35, 0, // Skip to: 386
/* 351 */     MCD::OPC_ExtractField, 16, 2,  // Inst{17-16} ...
/* 354 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 362
/* 358 */     MCD::OPC_Decode, 150, 1, 2, // Opcode: SL_I
/* 362 */     MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 370
/* 366 */     MCD::OPC_Decode, 140, 1, 2, // Opcode: SA_I
/* 370 */     MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 378
/* 374 */     MCD::OPC_Decode, 149, 1, 2, // Opcode: SL_F_I
/* 378 */     MCD::OPC_FilterValue, 3, 47, 2, // Skip to: 941
/* 382 */     MCD::OPC_Decode, 139, 1, 2, // Opcode: SA_F_I
/* 386 */     MCD::OPC_FilterValue, 8, 16, 0, // Skip to: 406
/* 390 */     MCD::OPC_CheckField, 0, 28, 252, 255, 219, 8, 4, 0, // Skip to: 403
/* 399 */     MCD::OPC_Decode, 138, 1, 0, // Opcode: RET
/* 403 */     MCD::OPC_Decode, 120, 3, // Opcode: LDW_RI
/* 406 */     MCD::OPC_FilterValue, 9, 4, 0, // Skip to: 414
/* 410 */     MCD::OPC_Decode, 172, 1, 3, // Opcode: SW_RI
/* 414 */     MCD::OPC_FilterValue, 10, 45, 0, // Skip to: 463
/* 418 */     MCD::OPC_ExtractField, 0, 3,  // Inst{2-0} ...
/* 421 */     MCD::OPC_FilterValue, 0, 3, 0, // Skip to: 428
/* 425 */     MCD::OPC_Decode, 117, 4, // Opcode: LDHs_RR
/* 428 */     MCD::OPC_FilterValue, 1, 3, 0, // Skip to: 435
/* 432 */     MCD::OPC_Decode, 119, 4, // Opcode: LDHz_RR
/* 435 */     MCD::OPC_FilterValue, 2, 3, 0, // Skip to: 442
/* 439 */     MCD::OPC_Decode, 121, 4, // Opcode: LDW_RR
/* 442 */     MCD::OPC_FilterValue, 3, 3, 0, // Skip to: 449
/* 446 */     MCD::OPC_Decode, 122, 4, // Opcode: LDWz_RR
/* 449 */     MCD::OPC_FilterValue, 4, 3, 0, // Skip to: 456
/* 453 */     MCD::OPC_Decode, 113, 4, // Opcode: LDBs_RR
/* 456 */     MCD::OPC_FilterValue, 5, 225, 1, // Skip to: 941
/* 460 */     MCD::OPC_Decode, 115, 4, // Opcode: LDBz_RR
/* 463 */     MCD::OPC_FilterValue, 11, 27, 0, // Skip to: 494
/* 467 */     MCD::OPC_ExtractField, 0, 3,  // Inst{2-0} ...
/* 470 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 478
/* 474 */     MCD::OPC_Decode, 159, 1, 4, // Opcode: STH_RR
/* 478 */     MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 486
/* 482 */     MCD::OPC_Decode, 173, 1, 4, // Opcode: SW_RR
/* 486 */     MCD::OPC_FilterValue, 4, 195, 1, // Skip to: 941
/* 490 */     MCD::OPC_Decode, 157, 1, 4, // Opcode: STB_RR
/* 494 */     MCD::OPC_FilterValue, 12, 13, 1, // Skip to: 767
/* 498 */     MCD::OPC_ExtractField, 3, 8,  // Inst{10-3} ...
/* 501 */     MCD::OPC_FilterValue, 0, 17, 0, // Skip to: 522
/* 505 */     MCD::OPC_ExtractField, 17, 1,  // Inst{17} ...
/* 508 */     MCD::OPC_FilterValue, 0, 3, 0, // Skip to: 515
/* 512 */     MCD::OPC_Decode, 93, 5, // Opcode: ADD_R
/* 515 */     MCD::OPC_FilterValue, 1, 166, 1, // Skip to: 941
/* 519 */     MCD::OPC_Decode, 90, 5, // Opcode: ADD_F_R
/* 522 */     MCD::OPC_FilterValue, 32, 17, 0, // Skip to: 543
/* 526 */     MCD::OPC_ExtractField, 17, 1,  // Inst{17} ...
/* 529 */     MCD::OPC_FilterValue, 0, 3, 0, // Skip to: 536
/* 533 */     MCD::OPC_Decode, 87, 5, // Opcode: ADDC_R
/* 536 */     MCD::OPC_FilterValue, 1, 145, 1, // Skip to: 941
/* 540 */     MCD::OPC_Decode, 84, 5, // Opcode: ADDC_F_R
/* 543 */     MCD::OPC_FilterValue, 64, 19, 0, // Skip to: 566
/* 547 */     MCD::OPC_ExtractField, 17, 1,  // Inst{17} ...
/* 550 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 558
/* 554 */     MCD::OPC_Decode, 171, 1, 5, // Opcode: SUB_R
/* 558 */     MCD::OPC_FilterValue, 1, 123, 1, // Skip to: 941
/* 562 */     MCD::OPC_Decode, 168, 1, 5, // Opcode: SUB_F_R
/* 566 */     MCD::OPC_FilterValue, 96, 19, 0, // Skip to: 589
/* 570 */     MCD::OPC_ExtractField, 17, 1,  // Inst{17} ...
/* 573 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 581
/* 577 */     MCD::OPC_Decode, 165, 1, 5, // Opcode: SUBB_R
/* 581 */     MCD::OPC_FilterValue, 1, 100, 1, // Skip to: 941
/* 585 */     MCD::OPC_Decode, 162, 1, 5, // Opcode: SUBB_F_R
/* 589 */     MCD::OPC_FilterValue, 128, 1, 17, 0, // Skip to: 611
/* 594 */     MCD::OPC_ExtractField, 17, 1,  // Inst{17} ...
/* 597 */     MCD::OPC_FilterValue, 0, 3, 0, // Skip to: 604
/* 601 */     MCD::OPC_Decode, 102, 5, // Opcode: AND_R
/* 604 */     MCD::OPC_FilterValue, 1, 77, 1, // Skip to: 941
/* 608 */     MCD::OPC_Decode, 99, 5, // Opcode: AND_F_R
/* 611 */     MCD::OPC_FilterValue, 160, 1, 64, 0, // Skip to: 680
/* 616 */     MCD::OPC_ExtractField, 17, 1,  // Inst{17} ...
/* 619 */     MCD::OPC_FilterValue, 0, 49, 0, // Skip to: 672
/* 623 */     MCD::OPC_CheckField, 18, 10, 64, 15, 0, // Skip to: 644
/* 629 */     MCD::OPC_CheckField, 16, 1, 0, 9, 0, // Skip to: 644
/* 635 */     MCD::OPC_CheckField, 0, 3, 0, 3, 0, // Skip to: 644
/* 641 */     MCD::OPC_Decode, 110, 6, // Opcode: JR
/* 644 */     MCD::OPC_CheckField, 23, 5, 2, 9, 0, // Skip to: 659
/* 650 */     MCD::OPC_CheckField, 11, 5, 0, 3, 0, // Skip to: 659
/* 656 */     MCD::OPC_Decode, 104, 7, // Opcode: BRIND_CC
/* 659 */     MCD::OPC_CheckField, 23, 5, 2, 3, 0, // Skip to: 668
/* 665 */     MCD::OPC_Decode, 105, 8, // Opcode: BRIND_CCA
/* 668 */     MCD::OPC_Decode, 136, 1, 5, // Opcode: OR_R
/* 672 */     MCD::OPC_FilterValue, 1, 9, 1, // Skip to: 941
/* 676 */     MCD::OPC_Decode, 133, 1, 5, // Opcode: OR_F_R
/* 680 */     MCD::OPC_FilterValue, 192, 1, 19, 0, // Skip to: 704
/* 685 */     MCD::OPC_ExtractField, 17, 1,  // Inst{17} ...
/* 688 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 696
/* 692 */     MCD::OPC_Decode, 180, 1, 5, // Opcode: XOR_R
/* 696 */     MCD::OPC_FilterValue, 1, 241, 0, // Skip to: 941
/* 700 */     MCD::OPC_Decode, 177, 1, 5, // Opcode: XOR_F_R
/* 704 */     MCD::OPC_FilterValue, 224, 1, 10, 0, // Skip to: 719
/* 709 */     MCD::OPC_CheckField, 17, 1, 0, 226, 0, // Skip to: 941
/* 715 */     MCD::OPC_Decode, 142, 1, 9, // Opcode: SELECT
/* 719 */     MCD::OPC_FilterValue, 240, 1, 19, 0, // Skip to: 743
/* 724 */     MCD::OPC_ExtractField, 17, 1,  // Inst{17} ...
/* 727 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 735
/* 731 */     MCD::OPC_Decode, 147, 1, 5, // Opcode: SHL_R
/* 735 */     MCD::OPC_FilterValue, 1, 202, 0, // Skip to: 941
/* 739 */     MCD::OPC_Decode, 146, 1, 5, // Opcode: SHL_F_R
/* 743 */     MCD::OPC_FilterValue, 248, 1, 193, 0, // Skip to: 941
/* 748 */     MCD::OPC_ExtractField, 17, 1,  // Inst{17} ...
/* 751 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 759
/* 755 */     MCD::OPC_Decode, 152, 1, 5, // Opcode: SRA_R
/* 759 */     MCD::OPC_FilterValue, 1, 178, 0, // Skip to: 941
/* 763 */     MCD::OPC_Decode, 151, 1, 5, // Opcode: SRA_F_R
/* 767 */     MCD::OPC_FilterValue, 13, 26, 0, // Skip to: 797
/* 771 */     MCD::OPC_ExtractField, 0, 18,  // Inst{17-0} ...
/* 774 */     MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 782
/* 778 */     MCD::OPC_Decode, 137, 1, 10, // Opcode: POPC
/* 782 */     MCD::OPC_FilterValue, 2, 3, 0, // Skip to: 789
/* 786 */     MCD::OPC_Decode, 123, 10, // Opcode: LEADZ
/* 789 */     MCD::OPC_FilterValue, 3, 148, 0, // Skip to: 941
/* 793 */     MCD::OPC_Decode, 174, 1, 10, // Opcode: TRAILZ
/* 797 */     MCD::OPC_FilterValue, 14, 59, 0, // Skip to: 860
/* 801 */     MCD::OPC_ExtractField, 1, 1,  // Inst{1} ...
/* 804 */     MCD::OPC_FilterValue, 0, 18, 0, // Skip to: 826
/* 808 */     MCD::OPC_CheckField, 25, 3, 0, 9, 0, // Skip to: 823
/* 814 */     MCD::OPC_CheckField, 0, 1, 0, 3, 0, // Skip to: 823
/* 820 */     MCD::OPC_Decode, 107, 11, // Opcode: BT
/* 823 */     MCD::OPC_Decode, 103, 12, // Opcode: BRCC
/* 826 */     MCD::OPC_FilterValue, 1, 111, 0, // Skip to: 941
/* 830 */     MCD::OPC_ExtractField, 23, 2,  // Inst{24-23} ...
/* 833 */     MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 847
/* 837 */     MCD::OPC_CheckField, 2, 16, 0, 98, 0, // Skip to: 941
/* 843 */     MCD::OPC_Decode, 141, 1, 13, // Opcode: SCC
/* 847 */     MCD::OPC_FilterValue, 2, 90, 0, // Skip to: 941
/* 851 */     MCD::OPC_CheckField, 16, 7, 0, 84, 0, // Skip to: 941
/* 857 */     MCD::OPC_Decode, 106, 14, // Opcode: BRR
/* 860 */     MCD::OPC_FilterValue, 15, 77, 0, // Skip to: 941
/* 864 */     MCD::OPC_ExtractField, 16, 2,  // Inst{17-16} ...
/* 867 */     MCD::OPC_FilterValue, 0, 3, 0, // Skip to: 874
/* 871 */     MCD::OPC_Decode, 111, 15, // Opcode: LDADDR
/* 874 */     MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 882
/* 878 */     MCD::OPC_Decode, 155, 1, 15, // Opcode: STADDR
/* 882 */     MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 890
/* 886 */     MCD::OPC_Decode, 148, 1, 15, // Opcode: SLI
/* 890 */     MCD::OPC_FilterValue, 3, 47, 0, // Skip to: 941
/* 894 */     MCD::OPC_ExtractField, 12, 4,  // Inst{15-12} ...
/* 897 */     MCD::OPC_FilterValue, 0, 3, 0, // Skip to: 904
/* 901 */     MCD::OPC_Decode, 116, 16, // Opcode: LDHs_RI
/* 904 */     MCD::OPC_FilterValue, 1, 3, 0, // Skip to: 911
/* 908 */     MCD::OPC_Decode, 118, 16, // Opcode: LDHz_RI
/* 911 */     MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 919
/* 915 */     MCD::OPC_Decode, 158, 1, 16, // Opcode: STH_RI
/* 919 */     MCD::OPC_FilterValue, 4, 3, 0, // Skip to: 926
/* 923 */     MCD::OPC_Decode, 112, 16, // Opcode: LDBs_RI
/* 926 */     MCD::OPC_FilterValue, 5, 3, 0, // Skip to: 933
/* 930 */     MCD::OPC_Decode, 114, 16, // Opcode: LDBz_RI
/* 933 */     MCD::OPC_FilterValue, 6, 4, 0, // Skip to: 941
/* 937 */     MCD::OPC_Decode, 156, 1, 16, // Opcode: STB_RI
/* 941 */     MCD::OPC_Fail,
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
    tmp = fieldFromInstruction(insn, 23, 5);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 18, 5);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 16);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 2:
    tmp = fieldFromInstruction(insn, 23, 5);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 18, 5);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 16);
    if (decodeShiftImm(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 3:
    tmp = fieldFromInstruction(insn, 23, 5);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 16) << 0;
    tmp |= fieldFromInstruction(insn, 18, 5) << 18;
    if (decodeRiMemoryValue(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 4:
    tmp = fieldFromInstruction(insn, 23, 5);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 3, 8) << 0;
    tmp |= fieldFromInstruction(insn, 11, 5) << 10;
    tmp |= fieldFromInstruction(insn, 18, 5) << 15;
    if (decodeRrMemoryValue(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 5:
    tmp = fieldFromInstruction(insn, 23, 5);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 18, 5);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 3) << 1;
    tmp |= fieldFromInstruction(insn, 16, 1) << 0;
    if (decodePredicateOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 6:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 7:
    tmp = fieldFromInstruction(insn, 18, 5);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 3) << 1;
    tmp |= fieldFromInstruction(insn, 16, 1) << 0;
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 8:
    tmp = fieldFromInstruction(insn, 18, 5);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 3) << 1;
    tmp |= fieldFromInstruction(insn, 16, 1) << 0;
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 9:
    tmp = fieldFromInstruction(insn, 23, 5);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 18, 5);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 3) << 1;
    tmp |= fieldFromInstruction(insn, 16, 1) << 0;
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 10:
    tmp = fieldFromInstruction(insn, 23, 5);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 18, 5);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 11:
    tmp = fieldFromInstruction(insn, 2, 23) << 2;
    if (decodeBranch(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 12:
    tmp = fieldFromInstruction(insn, 2, 23) << 2;
    if (decodeBranch(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 1) << 0;
    tmp |= fieldFromInstruction(insn, 25, 3) << 1;
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 13:
    tmp = fieldFromInstruction(insn, 18, 5);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 1) << 0;
    tmp |= fieldFromInstruction(insn, 25, 3) << 1;
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 14:
    tmp = fieldFromInstruction(insn, 2, 14) << 2;
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 1) << 0;
    tmp |= fieldFromInstruction(insn, 25, 3) << 1;
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 15:
    tmp = fieldFromInstruction(insn, 23, 5);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 16) << 0;
    tmp |= fieldFromInstruction(insn, 18, 5) << 16;
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 16:
    tmp = fieldFromInstruction(insn, 23, 5);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 10) << 0;
    tmp |= fieldFromInstruction(insn, 18, 5) << 12;
    if (decodeSplsValue(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
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
