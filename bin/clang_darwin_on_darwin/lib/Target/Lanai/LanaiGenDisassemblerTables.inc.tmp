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
/* 3 */       MCD::OPC_FilterValue, 0, 118, 0, // Skip to: 125
/* 7 */       MCD::OPC_ExtractField, 16, 2,  // Inst{17-16} ...
/* 10 */      MCD::OPC_FilterValue, 0, 90, 0, // Skip to: 104
/* 14 */      MCD::OPC_ExtractField, 0, 16,  // Inst{15-0} ...
/* 17 */      MCD::OPC_FilterValue, 1, 10, 0, // Skip to: 31
/* 21 */      MCD::OPC_CheckField, 18, 10, 0, 74, 0, // Skip to: 101
/* 27 */      MCD::OPC_Decode, 144, 1, 0, // Opcode: NOP
/* 31 */      MCD::OPC_FilterValue, 2, 10, 0, // Skip to: 45
/* 35 */      MCD::OPC_CheckField, 18, 10, 0, 60, 0, // Skip to: 101
/* 41 */      MCD::OPC_Decode, 138, 1, 0, // Opcode: LOG0
/* 45 */      MCD::OPC_FilterValue, 3, 10, 0, // Skip to: 59
/* 49 */      MCD::OPC_CheckField, 18, 10, 0, 46, 0, // Skip to: 101
/* 55 */      MCD::OPC_Decode, 139, 1, 0, // Opcode: LOG1
/* 59 */      MCD::OPC_FilterValue, 4, 10, 0, // Skip to: 73
/* 63 */      MCD::OPC_CheckField, 18, 10, 0, 32, 0, // Skip to: 101
/* 69 */      MCD::OPC_Decode, 140, 1, 0, // Opcode: LOG2
/* 73 */      MCD::OPC_FilterValue, 5, 10, 0, // Skip to: 87
/* 77 */      MCD::OPC_CheckField, 18, 10, 0, 18, 0, // Skip to: 101
/* 83 */      MCD::OPC_Decode, 141, 1, 0, // Opcode: LOG3
/* 87 */      MCD::OPC_FilterValue, 6, 10, 0, // Skip to: 101
/* 91 */      MCD::OPC_CheckField, 18, 10, 0, 4, 0, // Skip to: 101
/* 97 */      MCD::OPC_Decode, 142, 1, 0, // Opcode: LOG4
/* 101 */     MCD::OPC_Decode, 106, 1, // Opcode: ADD_I_LO
/* 104 */     MCD::OPC_FilterValue, 1, 3, 0, // Skip to: 111
/* 108 */     MCD::OPC_Decode, 105, 1, // Opcode: ADD_I_HI
/* 111 */     MCD::OPC_FilterValue, 2, 3, 0, // Skip to: 118
/* 115 */     MCD::OPC_Decode, 103, 1, // Opcode: ADD_F_I_LO
/* 118 */     MCD::OPC_FilterValue, 3, 65, 3, // Skip to: 955
/* 122 */     MCD::OPC_Decode, 102, 1, // Opcode: ADD_F_I_HI
/* 125 */     MCD::OPC_FilterValue, 1, 31, 0, // Skip to: 160
/* 129 */     MCD::OPC_ExtractField, 16, 2,  // Inst{17-16} ...
/* 132 */     MCD::OPC_FilterValue, 0, 3, 0, // Skip to: 139
/* 136 */     MCD::OPC_Decode, 100, 1, // Opcode: ADDC_I_LO
/* 139 */     MCD::OPC_FilterValue, 1, 3, 0, // Skip to: 146
/* 143 */     MCD::OPC_Decode, 99, 1, // Opcode: ADDC_I_HI
/* 146 */     MCD::OPC_FilterValue, 2, 3, 0, // Skip to: 153
/* 150 */     MCD::OPC_Decode, 97, 1, // Opcode: ADDC_F_I_LO
/* 153 */     MCD::OPC_FilterValue, 3, 30, 3, // Skip to: 955
/* 157 */     MCD::OPC_Decode, 96, 1, // Opcode: ADDC_F_I_HI
/* 160 */     MCD::OPC_FilterValue, 2, 35, 0, // Skip to: 199
/* 164 */     MCD::OPC_ExtractField, 16, 2,  // Inst{17-16} ...
/* 167 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 175
/* 171 */     MCD::OPC_Decode, 184, 1, 1, // Opcode: SUB_I_LO
/* 175 */     MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 183
/* 179 */     MCD::OPC_Decode, 183, 1, 1, // Opcode: SUB_I_HI
/* 183 */     MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 191
/* 187 */     MCD::OPC_Decode, 181, 1, 1, // Opcode: SUB_F_I_LO
/* 191 */     MCD::OPC_FilterValue, 3, 248, 2, // Skip to: 955
/* 195 */     MCD::OPC_Decode, 180, 1, 1, // Opcode: SUB_F_I_HI
/* 199 */     MCD::OPC_FilterValue, 3, 35, 0, // Skip to: 238
/* 203 */     MCD::OPC_ExtractField, 16, 2,  // Inst{17-16} ...
/* 206 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 214
/* 210 */     MCD::OPC_Decode, 178, 1, 1, // Opcode: SUBB_I_LO
/* 214 */     MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 222
/* 218 */     MCD::OPC_Decode, 177, 1, 1, // Opcode: SUBB_I_HI
/* 222 */     MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 230
/* 226 */     MCD::OPC_Decode, 175, 1, 1, // Opcode: SUBB_F_I_LO
/* 230 */     MCD::OPC_FilterValue, 3, 209, 2, // Skip to: 955
/* 234 */     MCD::OPC_Decode, 174, 1, 1, // Opcode: SUBB_F_I_HI
/* 238 */     MCD::OPC_FilterValue, 4, 31, 0, // Skip to: 273
/* 242 */     MCD::OPC_ExtractField, 16, 2,  // Inst{17-16} ...
/* 245 */     MCD::OPC_FilterValue, 0, 3, 0, // Skip to: 252
/* 249 */     MCD::OPC_Decode, 115, 1, // Opcode: AND_I_LO
/* 252 */     MCD::OPC_FilterValue, 1, 3, 0, // Skip to: 259
/* 256 */     MCD::OPC_Decode, 114, 1, // Opcode: AND_I_HI
/* 259 */     MCD::OPC_FilterValue, 2, 3, 0, // Skip to: 266
/* 263 */     MCD::OPC_Decode, 112, 1, // Opcode: AND_F_I_LO
/* 266 */     MCD::OPC_FilterValue, 3, 173, 2, // Skip to: 955
/* 270 */     MCD::OPC_Decode, 111, 1, // Opcode: AND_F_I_HI
/* 273 */     MCD::OPC_FilterValue, 5, 35, 0, // Skip to: 312
/* 277 */     MCD::OPC_ExtractField, 16, 2,  // Inst{17-16} ...
/* 280 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 288
/* 284 */     MCD::OPC_Decode, 149, 1, 1, // Opcode: OR_I_LO
/* 288 */     MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 296
/* 292 */     MCD::OPC_Decode, 148, 1, 1, // Opcode: OR_I_HI
/* 296 */     MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 304
/* 300 */     MCD::OPC_Decode, 146, 1, 1, // Opcode: OR_F_I_LO
/* 304 */     MCD::OPC_FilterValue, 3, 135, 2, // Skip to: 955
/* 308 */     MCD::OPC_Decode, 145, 1, 1, // Opcode: OR_F_I_HI
/* 312 */     MCD::OPC_FilterValue, 6, 35, 0, // Skip to: 351
/* 316 */     MCD::OPC_ExtractField, 16, 2,  // Inst{17-16} ...
/* 319 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 327
/* 323 */     MCD::OPC_Decode, 193, 1, 1, // Opcode: XOR_I_LO
/* 327 */     MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 335
/* 331 */     MCD::OPC_Decode, 192, 1, 1, // Opcode: XOR_I_HI
/* 335 */     MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 343
/* 339 */     MCD::OPC_Decode, 190, 1, 1, // Opcode: XOR_F_I_LO
/* 343 */     MCD::OPC_FilterValue, 3, 96, 2, // Skip to: 955
/* 347 */     MCD::OPC_Decode, 189, 1, 1, // Opcode: XOR_F_I_HI
/* 351 */     MCD::OPC_FilterValue, 7, 35, 0, // Skip to: 390
/* 355 */     MCD::OPC_ExtractField, 16, 2,  // Inst{17-16} ...
/* 358 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 366
/* 362 */     MCD::OPC_Decode, 164, 1, 2, // Opcode: SL_I
/* 366 */     MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 374
/* 370 */     MCD::OPC_Decode, 154, 1, 2, // Opcode: SA_I
/* 374 */     MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 382
/* 378 */     MCD::OPC_Decode, 163, 1, 2, // Opcode: SL_F_I
/* 382 */     MCD::OPC_FilterValue, 3, 57, 2, // Skip to: 955
/* 386 */     MCD::OPC_Decode, 153, 1, 2, // Opcode: SA_F_I
/* 390 */     MCD::OPC_FilterValue, 8, 17, 0, // Skip to: 411
/* 394 */     MCD::OPC_CheckField, 0, 28, 252, 255, 219, 8, 4, 0, // Skip to: 407
/* 403 */     MCD::OPC_Decode, 152, 1, 0, // Opcode: RET
/* 407 */     MCD::OPC_Decode, 134, 1, 3, // Opcode: LDW_RI
/* 411 */     MCD::OPC_FilterValue, 9, 4, 0, // Skip to: 419
/* 415 */     MCD::OPC_Decode, 186, 1, 3, // Opcode: SW_RI
/* 419 */     MCD::OPC_FilterValue, 10, 50, 0, // Skip to: 473
/* 423 */     MCD::OPC_ExtractField, 0, 3,  // Inst{2-0} ...
/* 426 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 434
/* 430 */     MCD::OPC_Decode, 131, 1, 4, // Opcode: LDHs_RR
/* 434 */     MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 442
/* 438 */     MCD::OPC_Decode, 133, 1, 4, // Opcode: LDHz_RR
/* 442 */     MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 450
/* 446 */     MCD::OPC_Decode, 135, 1, 4, // Opcode: LDW_RR
/* 450 */     MCD::OPC_FilterValue, 3, 4, 0, // Skip to: 458
/* 454 */     MCD::OPC_Decode, 136, 1, 4, // Opcode: LDWz_RR
/* 458 */     MCD::OPC_FilterValue, 4, 3, 0, // Skip to: 465
/* 462 */     MCD::OPC_Decode, 127, 4, // Opcode: LDBs_RR
/* 465 */     MCD::OPC_FilterValue, 5, 230, 1, // Skip to: 955
/* 469 */     MCD::OPC_Decode, 129, 1, 4, // Opcode: LDBz_RR
/* 473 */     MCD::OPC_FilterValue, 11, 27, 0, // Skip to: 504
/* 477 */     MCD::OPC_ExtractField, 0, 3,  // Inst{2-0} ...
/* 480 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 488
/* 484 */     MCD::OPC_Decode, 173, 1, 4, // Opcode: STH_RR
/* 488 */     MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 496
/* 492 */     MCD::OPC_Decode, 187, 1, 4, // Opcode: SW_RR
/* 496 */     MCD::OPC_FilterValue, 4, 199, 1, // Skip to: 955
/* 500 */     MCD::OPC_Decode, 171, 1, 4, // Opcode: STB_RR
/* 504 */     MCD::OPC_FilterValue, 12, 13, 1, // Skip to: 777
/* 508 */     MCD::OPC_ExtractField, 3, 8,  // Inst{10-3} ...
/* 511 */     MCD::OPC_FilterValue, 0, 17, 0, // Skip to: 532
/* 515 */     MCD::OPC_ExtractField, 17, 1,  // Inst{17} ...
/* 518 */     MCD::OPC_FilterValue, 0, 3, 0, // Skip to: 525
/* 522 */     MCD::OPC_Decode, 107, 5, // Opcode: ADD_R
/* 525 */     MCD::OPC_FilterValue, 1, 170, 1, // Skip to: 955
/* 529 */     MCD::OPC_Decode, 104, 5, // Opcode: ADD_F_R
/* 532 */     MCD::OPC_FilterValue, 32, 17, 0, // Skip to: 553
/* 536 */     MCD::OPC_ExtractField, 17, 1,  // Inst{17} ...
/* 539 */     MCD::OPC_FilterValue, 0, 3, 0, // Skip to: 546
/* 543 */     MCD::OPC_Decode, 101, 5, // Opcode: ADDC_R
/* 546 */     MCD::OPC_FilterValue, 1, 149, 1, // Skip to: 955
/* 550 */     MCD::OPC_Decode, 98, 5, // Opcode: ADDC_F_R
/* 553 */     MCD::OPC_FilterValue, 64, 19, 0, // Skip to: 576
/* 557 */     MCD::OPC_ExtractField, 17, 1,  // Inst{17} ...
/* 560 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 568
/* 564 */     MCD::OPC_Decode, 185, 1, 5, // Opcode: SUB_R
/* 568 */     MCD::OPC_FilterValue, 1, 127, 1, // Skip to: 955
/* 572 */     MCD::OPC_Decode, 182, 1, 5, // Opcode: SUB_F_R
/* 576 */     MCD::OPC_FilterValue, 96, 19, 0, // Skip to: 599
/* 580 */     MCD::OPC_ExtractField, 17, 1,  // Inst{17} ...
/* 583 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 591
/* 587 */     MCD::OPC_Decode, 179, 1, 5, // Opcode: SUBB_R
/* 591 */     MCD::OPC_FilterValue, 1, 104, 1, // Skip to: 955
/* 595 */     MCD::OPC_Decode, 176, 1, 5, // Opcode: SUBB_F_R
/* 599 */     MCD::OPC_FilterValue, 128, 1, 17, 0, // Skip to: 621
/* 604 */     MCD::OPC_ExtractField, 17, 1,  // Inst{17} ...
/* 607 */     MCD::OPC_FilterValue, 0, 3, 0, // Skip to: 614
/* 611 */     MCD::OPC_Decode, 116, 5, // Opcode: AND_R
/* 614 */     MCD::OPC_FilterValue, 1, 81, 1, // Skip to: 955
/* 618 */     MCD::OPC_Decode, 113, 5, // Opcode: AND_F_R
/* 621 */     MCD::OPC_FilterValue, 160, 1, 64, 0, // Skip to: 690
/* 626 */     MCD::OPC_ExtractField, 17, 1,  // Inst{17} ...
/* 629 */     MCD::OPC_FilterValue, 0, 49, 0, // Skip to: 682
/* 633 */     MCD::OPC_CheckField, 18, 10, 64, 15, 0, // Skip to: 654
/* 639 */     MCD::OPC_CheckField, 16, 1, 0, 9, 0, // Skip to: 654
/* 645 */     MCD::OPC_CheckField, 0, 3, 0, 3, 0, // Skip to: 654
/* 651 */     MCD::OPC_Decode, 124, 6, // Opcode: JR
/* 654 */     MCD::OPC_CheckField, 23, 5, 2, 9, 0, // Skip to: 669
/* 660 */     MCD::OPC_CheckField, 11, 5, 0, 3, 0, // Skip to: 669
/* 666 */     MCD::OPC_Decode, 118, 7, // Opcode: BRIND_CC
/* 669 */     MCD::OPC_CheckField, 23, 5, 2, 3, 0, // Skip to: 678
/* 675 */     MCD::OPC_Decode, 119, 8, // Opcode: BRIND_CCA
/* 678 */     MCD::OPC_Decode, 150, 1, 5, // Opcode: OR_R
/* 682 */     MCD::OPC_FilterValue, 1, 13, 1, // Skip to: 955
/* 686 */     MCD::OPC_Decode, 147, 1, 5, // Opcode: OR_F_R
/* 690 */     MCD::OPC_FilterValue, 192, 1, 19, 0, // Skip to: 714
/* 695 */     MCD::OPC_ExtractField, 17, 1,  // Inst{17} ...
/* 698 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 706
/* 702 */     MCD::OPC_Decode, 194, 1, 5, // Opcode: XOR_R
/* 706 */     MCD::OPC_FilterValue, 1, 245, 0, // Skip to: 955
/* 710 */     MCD::OPC_Decode, 191, 1, 5, // Opcode: XOR_F_R
/* 714 */     MCD::OPC_FilterValue, 224, 1, 10, 0, // Skip to: 729
/* 719 */     MCD::OPC_CheckField, 17, 1, 0, 230, 0, // Skip to: 955
/* 725 */     MCD::OPC_Decode, 156, 1, 9, // Opcode: SELECT
/* 729 */     MCD::OPC_FilterValue, 240, 1, 19, 0, // Skip to: 753
/* 734 */     MCD::OPC_ExtractField, 17, 1,  // Inst{17} ...
/* 737 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 745
/* 741 */     MCD::OPC_Decode, 161, 1, 5, // Opcode: SHL_R
/* 745 */     MCD::OPC_FilterValue, 1, 206, 0, // Skip to: 955
/* 749 */     MCD::OPC_Decode, 160, 1, 5, // Opcode: SHL_F_R
/* 753 */     MCD::OPC_FilterValue, 248, 1, 197, 0, // Skip to: 955
/* 758 */     MCD::OPC_ExtractField, 17, 1,  // Inst{17} ...
/* 761 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 769
/* 765 */     MCD::OPC_Decode, 166, 1, 5, // Opcode: SRA_R
/* 769 */     MCD::OPC_FilterValue, 1, 182, 0, // Skip to: 955
/* 773 */     MCD::OPC_Decode, 165, 1, 5, // Opcode: SRA_F_R
/* 777 */     MCD::OPC_FilterValue, 13, 27, 0, // Skip to: 808
/* 781 */     MCD::OPC_ExtractField, 0, 18,  // Inst{17-0} ...
/* 784 */     MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 792
/* 788 */     MCD::OPC_Decode, 151, 1, 10, // Opcode: POPC
/* 792 */     MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 800
/* 796 */     MCD::OPC_Decode, 137, 1, 10, // Opcode: LEADZ
/* 800 */     MCD::OPC_FilterValue, 3, 151, 0, // Skip to: 955
/* 804 */     MCD::OPC_Decode, 188, 1, 10, // Opcode: TRAILZ
/* 808 */     MCD::OPC_FilterValue, 14, 59, 0, // Skip to: 871
/* 812 */     MCD::OPC_ExtractField, 1, 1,  // Inst{1} ...
/* 815 */     MCD::OPC_FilterValue, 0, 18, 0, // Skip to: 837
/* 819 */     MCD::OPC_CheckField, 25, 3, 0, 9, 0, // Skip to: 834
/* 825 */     MCD::OPC_CheckField, 0, 1, 0, 3, 0, // Skip to: 834
/* 831 */     MCD::OPC_Decode, 121, 11, // Opcode: BT
/* 834 */     MCD::OPC_Decode, 117, 12, // Opcode: BRCC
/* 837 */     MCD::OPC_FilterValue, 1, 114, 0, // Skip to: 955
/* 841 */     MCD::OPC_ExtractField, 23, 2,  // Inst{24-23} ...
/* 844 */     MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 858
/* 848 */     MCD::OPC_CheckField, 2, 16, 0, 101, 0, // Skip to: 955
/* 854 */     MCD::OPC_Decode, 155, 1, 13, // Opcode: SCC
/* 858 */     MCD::OPC_FilterValue, 2, 93, 0, // Skip to: 955
/* 862 */     MCD::OPC_CheckField, 16, 7, 0, 87, 0, // Skip to: 955
/* 868 */     MCD::OPC_Decode, 120, 14, // Opcode: BRR
/* 871 */     MCD::OPC_FilterValue, 15, 80, 0, // Skip to: 955
/* 875 */     MCD::OPC_ExtractField, 16, 2,  // Inst{17-16} ...
/* 878 */     MCD::OPC_FilterValue, 0, 3, 0, // Skip to: 885
/* 882 */     MCD::OPC_Decode, 125, 15, // Opcode: LDADDR
/* 885 */     MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 893
/* 889 */     MCD::OPC_Decode, 169, 1, 15, // Opcode: STADDR
/* 893 */     MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 901
/* 897 */     MCD::OPC_Decode, 162, 1, 15, // Opcode: SLI
/* 901 */     MCD::OPC_FilterValue, 3, 50, 0, // Skip to: 955
/* 905 */     MCD::OPC_ExtractField, 12, 4,  // Inst{15-12} ...
/* 908 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 916
/* 912 */     MCD::OPC_Decode, 130, 1, 16, // Opcode: LDHs_RI
/* 916 */     MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 924
/* 920 */     MCD::OPC_Decode, 132, 1, 16, // Opcode: LDHz_RI
/* 924 */     MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 932
/* 928 */     MCD::OPC_Decode, 172, 1, 16, // Opcode: STH_RI
/* 932 */     MCD::OPC_FilterValue, 4, 3, 0, // Skip to: 939
/* 936 */     MCD::OPC_Decode, 126, 16, // Opcode: LDBs_RI
/* 939 */     MCD::OPC_FilterValue, 5, 4, 0, // Skip to: 947
/* 943 */     MCD::OPC_Decode, 128, 1, 16, // Opcode: LDBz_RI
/* 947 */     MCD::OPC_FilterValue, 6, 4, 0, // Skip to: 955
/* 951 */     MCD::OPC_Decode, 170, 1, 16, // Opcode: STB_RI
/* 955 */     MCD::OPC_Fail,
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
