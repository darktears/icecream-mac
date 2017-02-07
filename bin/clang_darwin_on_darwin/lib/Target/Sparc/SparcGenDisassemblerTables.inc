/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|*  * Sparc Disassembler                                                      *|
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

static const uint8_t DecoderTableSparc32[] = {
/* 0 */       MCD::OPC_ExtractField, 30, 2,  // Inst{31-30} ...
/* 3 */       MCD::OPC_FilterValue, 0, 62, 2, // Skip to: 581
/* 7 */       MCD::OPC_ExtractField, 22, 3,  // Inst{24-22} ...
/* 10 */      MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 24
/* 14 */      MCD::OPC_CheckField, 25, 5, 0, 232, 26, // Skip to: 6908
/* 20 */      MCD::OPC_Decode, 194, 4, 0, // Opcode: UNIMP
/* 24 */      MCD::OPC_FilterValue, 1, 111, 0, // Skip to: 139
/* 28 */      MCD::OPC_ExtractField, 19, 3,  // Inst{21-19} ...
/* 31 */      MCD::OPC_FilterValue, 0, 27, 0, // Skip to: 62
/* 35 */      MCD::OPC_ExtractField, 29, 1,  // Inst{29} ...
/* 38 */      MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 50
/* 42 */      MCD::OPC_CheckPredicate, 0, 206, 26, // Skip to: 6908
/* 46 */      MCD::OPC_Decode, 133, 1, 1, // Opcode: BPICCNT
/* 50 */      MCD::OPC_FilterValue, 1, 198, 26, // Skip to: 6908
/* 54 */      MCD::OPC_CheckPredicate, 0, 194, 26, // Skip to: 6908
/* 58 */      MCD::OPC_Decode, 132, 1, 1, // Opcode: BPICCANT
/* 62 */      MCD::OPC_FilterValue, 1, 27, 0, // Skip to: 93
/* 66 */      MCD::OPC_ExtractField, 29, 1,  // Inst{29} ...
/* 69 */      MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 81
/* 73 */      MCD::OPC_CheckPredicate, 0, 175, 26, // Skip to: 6908
/* 77 */      MCD::OPC_Decode, 130, 1, 1, // Opcode: BPICC
/* 81 */      MCD::OPC_FilterValue, 1, 167, 26, // Skip to: 6908
/* 85 */      MCD::OPC_CheckPredicate, 0, 163, 26, // Skip to: 6908
/* 89 */      MCD::OPC_Decode, 131, 1, 1, // Opcode: BPICCA
/* 93 */      MCD::OPC_FilterValue, 4, 19, 0, // Skip to: 116
/* 97 */      MCD::OPC_ExtractField, 29, 1,  // Inst{29} ...
/* 100 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 108
/* 104 */     MCD::OPC_Decode, 149, 1, 1, // Opcode: BPXCCNT
/* 108 */     MCD::OPC_FilterValue, 1, 140, 26, // Skip to: 6908
/* 112 */     MCD::OPC_Decode, 148, 1, 1, // Opcode: BPXCCANT
/* 116 */     MCD::OPC_FilterValue, 5, 132, 26, // Skip to: 6908
/* 120 */     MCD::OPC_ExtractField, 29, 1,  // Inst{29} ...
/* 123 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 131
/* 127 */     MCD::OPC_Decode, 146, 1, 1, // Opcode: BPXCC
/* 131 */     MCD::OPC_FilterValue, 1, 117, 26, // Skip to: 6908
/* 135 */     MCD::OPC_Decode, 147, 1, 1, // Opcode: BPXCCA
/* 139 */     MCD::OPC_FilterValue, 2, 26, 0, // Skip to: 169
/* 143 */     MCD::OPC_ExtractField, 29, 1,  // Inst{29} ...
/* 146 */     MCD::OPC_FilterValue, 0, 12, 0, // Skip to: 162
/* 150 */     MCD::OPC_CheckField, 25, 4, 8, 3, 0, // Skip to: 159
/* 156 */     MCD::OPC_Decode, 112, 0, // Opcode: BA
/* 159 */     MCD::OPC_Decode, 113, 2, // Opcode: BCOND
/* 162 */     MCD::OPC_FilterValue, 1, 86, 26, // Skip to: 6908
/* 166 */     MCD::OPC_Decode, 114, 2, // Opcode: BCONDA
/* 169 */     MCD::OPC_FilterValue, 3, 17, 1, // Skip to: 446
/* 173 */     MCD::OPC_ExtractField, 25, 5,  // Inst{29-25} ...
/* 176 */     MCD::OPC_FilterValue, 1, 19, 0, // Skip to: 199
/* 180 */     MCD::OPC_ExtractField, 19, 1,  // Inst{19} ...
/* 183 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 191
/* 187 */     MCD::OPC_Decode, 152, 1, 3, // Opcode: BPZnapn
/* 191 */     MCD::OPC_FilterValue, 1, 57, 26, // Skip to: 6908
/* 195 */     MCD::OPC_Decode, 153, 1, 3, // Opcode: BPZnapt
/* 199 */     MCD::OPC_FilterValue, 2, 19, 0, // Skip to: 222
/* 203 */     MCD::OPC_ExtractField, 19, 1,  // Inst{19} ...
/* 206 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 214
/* 210 */     MCD::OPC_Decode, 136, 1, 3, // Opcode: BPLEZnapn
/* 214 */     MCD::OPC_FilterValue, 1, 34, 26, // Skip to: 6908
/* 218 */     MCD::OPC_Decode, 137, 1, 3, // Opcode: BPLEZnapt
/* 222 */     MCD::OPC_FilterValue, 3, 19, 0, // Skip to: 245
/* 226 */     MCD::OPC_ExtractField, 19, 1,  // Inst{19} ...
/* 229 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 237
/* 233 */     MCD::OPC_Decode, 140, 1, 3, // Opcode: BPLZnapn
/* 237 */     MCD::OPC_FilterValue, 1, 11, 26, // Skip to: 6908
/* 241 */     MCD::OPC_Decode, 141, 1, 3, // Opcode: BPLZnapt
/* 245 */     MCD::OPC_FilterValue, 5, 19, 0, // Skip to: 268
/* 249 */     MCD::OPC_ExtractField, 19, 1,  // Inst{19} ...
/* 252 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 260
/* 256 */     MCD::OPC_Decode, 144, 1, 3, // Opcode: BPNZnapn
/* 260 */     MCD::OPC_FilterValue, 1, 244, 25, // Skip to: 6908
/* 264 */     MCD::OPC_Decode, 145, 1, 3, // Opcode: BPNZnapt
/* 268 */     MCD::OPC_FilterValue, 6, 19, 0, // Skip to: 291
/* 272 */     MCD::OPC_ExtractField, 19, 1,  // Inst{19} ...
/* 275 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 283
/* 279 */     MCD::OPC_Decode, 128, 1, 3, // Opcode: BPGZnapn
/* 283 */     MCD::OPC_FilterValue, 1, 221, 25, // Skip to: 6908
/* 287 */     MCD::OPC_Decode, 129, 1, 3, // Opcode: BPGZnapt
/* 291 */     MCD::OPC_FilterValue, 7, 17, 0, // Skip to: 312
/* 295 */     MCD::OPC_ExtractField, 19, 1,  // Inst{19} ...
/* 298 */     MCD::OPC_FilterValue, 0, 3, 0, // Skip to: 305
/* 302 */     MCD::OPC_Decode, 124, 3, // Opcode: BPGEZnapn
/* 305 */     MCD::OPC_FilterValue, 1, 199, 25, // Skip to: 6908
/* 309 */     MCD::OPC_Decode, 125, 3, // Opcode: BPGEZnapt
/* 312 */     MCD::OPC_FilterValue, 17, 19, 0, // Skip to: 335
/* 316 */     MCD::OPC_ExtractField, 19, 1,  // Inst{19} ...
/* 319 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 327
/* 323 */     MCD::OPC_Decode, 150, 1, 3, // Opcode: BPZapn
/* 327 */     MCD::OPC_FilterValue, 1, 177, 25, // Skip to: 6908
/* 331 */     MCD::OPC_Decode, 151, 1, 3, // Opcode: BPZapt
/* 335 */     MCD::OPC_FilterValue, 18, 19, 0, // Skip to: 358
/* 339 */     MCD::OPC_ExtractField, 19, 1,  // Inst{19} ...
/* 342 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 350
/* 346 */     MCD::OPC_Decode, 134, 1, 3, // Opcode: BPLEZapn
/* 350 */     MCD::OPC_FilterValue, 1, 154, 25, // Skip to: 6908
/* 354 */     MCD::OPC_Decode, 135, 1, 3, // Opcode: BPLEZapt
/* 358 */     MCD::OPC_FilterValue, 19, 19, 0, // Skip to: 381
/* 362 */     MCD::OPC_ExtractField, 19, 1,  // Inst{19} ...
/* 365 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 373
/* 369 */     MCD::OPC_Decode, 138, 1, 3, // Opcode: BPLZapn
/* 373 */     MCD::OPC_FilterValue, 1, 131, 25, // Skip to: 6908
/* 377 */     MCD::OPC_Decode, 139, 1, 3, // Opcode: BPLZapt
/* 381 */     MCD::OPC_FilterValue, 21, 19, 0, // Skip to: 404
/* 385 */     MCD::OPC_ExtractField, 19, 1,  // Inst{19} ...
/* 388 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 396
/* 392 */     MCD::OPC_Decode, 142, 1, 3, // Opcode: BPNZapn
/* 396 */     MCD::OPC_FilterValue, 1, 108, 25, // Skip to: 6908
/* 400 */     MCD::OPC_Decode, 143, 1, 3, // Opcode: BPNZapt
/* 404 */     MCD::OPC_FilterValue, 22, 17, 0, // Skip to: 425
/* 408 */     MCD::OPC_ExtractField, 19, 1,  // Inst{19} ...
/* 411 */     MCD::OPC_FilterValue, 0, 3, 0, // Skip to: 418
/* 415 */     MCD::OPC_Decode, 126, 3, // Opcode: BPGZapn
/* 418 */     MCD::OPC_FilterValue, 1, 86, 25, // Skip to: 6908
/* 422 */     MCD::OPC_Decode, 127, 3, // Opcode: BPGZapt
/* 425 */     MCD::OPC_FilterValue, 23, 79, 25, // Skip to: 6908
/* 429 */     MCD::OPC_ExtractField, 19, 1,  // Inst{19} ...
/* 432 */     MCD::OPC_FilterValue, 0, 3, 0, // Skip to: 439
/* 436 */     MCD::OPC_Decode, 122, 3, // Opcode: BPGEZapn
/* 439 */     MCD::OPC_FilterValue, 1, 65, 25, // Skip to: 6908
/* 443 */     MCD::OPC_Decode, 123, 3, // Opcode: BPGEZapt
/* 446 */     MCD::OPC_FilterValue, 4, 20, 0, // Skip to: 470
/* 450 */     MCD::OPC_CheckField, 25, 5, 0, 10, 0, // Skip to: 466
/* 456 */     MCD::OPC_CheckField, 0, 22, 0, 4, 0, // Skip to: 466
/* 462 */     MCD::OPC_Decode, 172, 3, 4, // Opcode: NOP
/* 466 */     MCD::OPC_Decode, 216, 3, 5, // Opcode: SETHIi
/* 470 */     MCD::OPC_FilterValue, 5, 61, 0, // Skip to: 535
/* 474 */     MCD::OPC_ExtractField, 19, 1,  // Inst{19} ...
/* 477 */     MCD::OPC_FilterValue, 0, 25, 0, // Skip to: 506
/* 481 */     MCD::OPC_ExtractField, 29, 1,  // Inst{29} ...
/* 484 */     MCD::OPC_FilterValue, 0, 7, 0, // Skip to: 495
/* 488 */     MCD::OPC_CheckPredicate, 0, 16, 25, // Skip to: 6908
/* 492 */     MCD::OPC_Decode, 121, 6, // Opcode: BPFCCNT
/* 495 */     MCD::OPC_FilterValue, 1, 9, 25, // Skip to: 6908
/* 499 */     MCD::OPC_CheckPredicate, 0, 5, 25, // Skip to: 6908
/* 503 */     MCD::OPC_Decode, 120, 6, // Opcode: BPFCCANT
/* 506 */     MCD::OPC_FilterValue, 1, 254, 24, // Skip to: 6908
/* 510 */     MCD::OPC_ExtractField, 29, 1,  // Inst{29} ...
/* 513 */     MCD::OPC_FilterValue, 0, 7, 0, // Skip to: 524
/* 517 */     MCD::OPC_CheckPredicate, 0, 243, 24, // Skip to: 6908
/* 521 */     MCD::OPC_Decode, 118, 6, // Opcode: BPFCC
/* 524 */     MCD::OPC_FilterValue, 1, 236, 24, // Skip to: 6908
/* 528 */     MCD::OPC_CheckPredicate, 0, 232, 24, // Skip to: 6908
/* 532 */     MCD::OPC_Decode, 119, 6, // Opcode: BPFCCA
/* 535 */     MCD::OPC_FilterValue, 6, 19, 0, // Skip to: 558
/* 539 */     MCD::OPC_ExtractField, 29, 1,  // Inst{29} ...
/* 542 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 550
/* 546 */     MCD::OPC_Decode, 198, 1, 2, // Opcode: FBCOND
/* 550 */     MCD::OPC_FilterValue, 1, 210, 24, // Skip to: 6908
/* 554 */     MCD::OPC_Decode, 199, 1, 2, // Opcode: FBCONDA
/* 558 */     MCD::OPC_FilterValue, 7, 202, 24, // Skip to: 6908
/* 562 */     MCD::OPC_ExtractField, 29, 1,  // Inst{29} ...
/* 565 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 573
/* 569 */     MCD::OPC_Decode, 162, 1, 2, // Opcode: CBCOND
/* 573 */     MCD::OPC_FilterValue, 1, 187, 24, // Skip to: 6908
/* 577 */     MCD::OPC_Decode, 163, 1, 2, // Opcode: CBCONDA
/* 581 */     MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 589
/* 585 */     MCD::OPC_Decode, 155, 1, 7, // Opcode: CALL
/* 589 */     MCD::OPC_FilterValue, 2, 133, 19, // Skip to: 5590
/* 593 */     MCD::OPC_ExtractField, 19, 6,  // Inst{24-19} ...
/* 596 */     MCD::OPC_FilterValue, 0, 23, 0, // Skip to: 623
/* 600 */     MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 603 */     MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 616
/* 607 */     MCD::OPC_CheckField, 5, 8, 0, 151, 24, // Skip to: 6908
/* 613 */     MCD::OPC_Decode, 93, 8, // Opcode: ADDrr
/* 616 */     MCD::OPC_FilterValue, 1, 144, 24, // Skip to: 6908
/* 620 */     MCD::OPC_Decode, 92, 9, // Opcode: ADDri
/* 623 */     MCD::OPC_FilterValue, 1, 23, 0, // Skip to: 650
/* 627 */     MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 630 */     MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 643
/* 634 */     MCD::OPC_CheckField, 5, 8, 0, 124, 24, // Skip to: 6908
/* 640 */     MCD::OPC_Decode, 108, 8, // Opcode: ANDrr
/* 643 */     MCD::OPC_FilterValue, 1, 117, 24, // Skip to: 6908
/* 647 */     MCD::OPC_Decode, 107, 9, // Opcode: ANDri
/* 650 */     MCD::OPC_FilterValue, 2, 25, 0, // Skip to: 679
/* 654 */     MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 657 */     MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 671
/* 661 */     MCD::OPC_CheckField, 5, 8, 0, 97, 24, // Skip to: 6908
/* 667 */     MCD::OPC_Decode, 183, 3, 8, // Opcode: ORrr
/* 671 */     MCD::OPC_FilterValue, 1, 89, 24, // Skip to: 6908
/* 675 */     MCD::OPC_Decode, 182, 3, 9, // Opcode: ORri
/* 679 */     MCD::OPC_FilterValue, 3, 25, 0, // Skip to: 708
/* 683 */     MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 686 */     MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 700
/* 690 */     MCD::OPC_CheckField, 5, 8, 0, 68, 24, // Skip to: 6908
/* 696 */     MCD::OPC_Decode, 228, 4, 8, // Opcode: XORrr
/* 700 */     MCD::OPC_FilterValue, 1, 60, 24, // Skip to: 6908
/* 704 */     MCD::OPC_Decode, 227, 4, 9, // Opcode: XORri
/* 708 */     MCD::OPC_FilterValue, 4, 25, 0, // Skip to: 737
/* 712 */     MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 715 */     MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 729
/* 719 */     MCD::OPC_CheckField, 5, 8, 0, 39, 24, // Skip to: 6908
/* 725 */     MCD::OPC_Decode, 156, 4, 8, // Opcode: SUBrr
/* 729 */     MCD::OPC_FilterValue, 1, 31, 24, // Skip to: 6908
/* 733 */     MCD::OPC_Decode, 155, 4, 9, // Opcode: SUBri
/* 737 */     MCD::OPC_FilterValue, 5, 23, 0, // Skip to: 764
/* 741 */     MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 744 */     MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 757
/* 748 */     MCD::OPC_CheckField, 5, 8, 0, 10, 24, // Skip to: 6908
/* 754 */     MCD::OPC_Decode, 103, 8, // Opcode: ANDNrr
/* 757 */     MCD::OPC_FilterValue, 1, 3, 24, // Skip to: 6908
/* 761 */     MCD::OPC_Decode, 102, 9, // Opcode: ANDNri
/* 764 */     MCD::OPC_FilterValue, 6, 25, 0, // Skip to: 793
/* 768 */     MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 771 */     MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 785
/* 775 */     MCD::OPC_CheckField, 5, 8, 0, 239, 23, // Skip to: 6908
/* 781 */     MCD::OPC_Decode, 178, 3, 8, // Opcode: ORNrr
/* 785 */     MCD::OPC_FilterValue, 1, 231, 23, // Skip to: 6908
/* 789 */     MCD::OPC_Decode, 177, 3, 9, // Opcode: ORNri
/* 793 */     MCD::OPC_FilterValue, 7, 25, 0, // Skip to: 822
/* 797 */     MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 800 */     MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 814
/* 804 */     MCD::OPC_CheckField, 5, 8, 0, 210, 23, // Skip to: 6908
/* 810 */     MCD::OPC_Decode, 222, 4, 8, // Opcode: XNORrr
/* 814 */     MCD::OPC_FilterValue, 1, 202, 23, // Skip to: 6908
/* 818 */     MCD::OPC_Decode, 221, 4, 9, // Opcode: XNORri
/* 822 */     MCD::OPC_FilterValue, 8, 23, 0, // Skip to: 849
/* 826 */     MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 829 */     MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 842
/* 833 */     MCD::OPC_CheckField, 5, 8, 0, 181, 23, // Skip to: 6908
/* 839 */     MCD::OPC_Decode, 85, 8, // Opcode: ADDCrr
/* 842 */     MCD::OPC_FilterValue, 1, 174, 23, // Skip to: 6908
/* 846 */     MCD::OPC_Decode, 84, 9, // Opcode: ADDCri
/* 849 */     MCD::OPC_FilterValue, 9, 25, 0, // Skip to: 878
/* 853 */     MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 856 */     MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 870
/* 860 */     MCD::OPC_CheckField, 5, 8, 0, 154, 23, // Skip to: 6908
/* 866 */     MCD::OPC_Decode, 171, 3, 10, // Opcode: MULXrr
/* 870 */     MCD::OPC_FilterValue, 1, 146, 23, // Skip to: 6908
/* 874 */     MCD::OPC_Decode, 170, 3, 11, // Opcode: MULXri
/* 878 */     MCD::OPC_FilterValue, 10, 25, 0, // Skip to: 907
/* 882 */     MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 885 */     MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 899
/* 889 */     MCD::OPC_CheckField, 5, 8, 0, 125, 23, // Skip to: 6908
/* 895 */     MCD::OPC_Decode, 193, 4, 8, // Opcode: UMULrr
/* 899 */     MCD::OPC_FilterValue, 1, 117, 23, // Skip to: 6908
/* 903 */     MCD::OPC_Decode, 192, 4, 9, // Opcode: UMULri
/* 907 */     MCD::OPC_FilterValue, 11, 25, 0, // Skip to: 936
/* 911 */     MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 914 */     MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 928
/* 918 */     MCD::OPC_CheckField, 5, 8, 0, 96, 23, // Skip to: 6908
/* 924 */     MCD::OPC_Decode, 228, 3, 8, // Opcode: SMULrr
/* 928 */     MCD::OPC_FilterValue, 1, 88, 23, // Skip to: 6908
/* 932 */     MCD::OPC_Decode, 227, 3, 9, // Opcode: SMULri
/* 936 */     MCD::OPC_FilterValue, 12, 25, 0, // Skip to: 965
/* 940 */     MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 943 */     MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 957
/* 947 */     MCD::OPC_CheckField, 5, 8, 0, 67, 23, // Skip to: 6908
/* 953 */     MCD::OPC_Decode, 150, 4, 8, // Opcode: SUBCrr
/* 957 */     MCD::OPC_FilterValue, 1, 59, 23, // Skip to: 6908
/* 961 */     MCD::OPC_Decode, 149, 4, 9, // Opcode: SUBCri
/* 965 */     MCD::OPC_FilterValue, 13, 25, 0, // Skip to: 994
/* 969 */     MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 972 */     MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 986
/* 976 */     MCD::OPC_CheckField, 5, 8, 0, 38, 23, // Skip to: 6908
/* 982 */     MCD::OPC_Decode, 184, 4, 10, // Opcode: UDIVXrr
/* 986 */     MCD::OPC_FilterValue, 1, 30, 23, // Skip to: 6908
/* 990 */     MCD::OPC_Decode, 183, 4, 11, // Opcode: UDIVXri
/* 994 */     MCD::OPC_FilterValue, 14, 25, 0, // Skip to: 1023
/* 998 */     MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1001 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 1015
/* 1005 */    MCD::OPC_CheckField, 5, 8, 0, 9, 23, // Skip to: 6908
/* 1011 */    MCD::OPC_Decode, 186, 4, 8, // Opcode: UDIVrr
/* 1015 */    MCD::OPC_FilterValue, 1, 1, 23, // Skip to: 6908
/* 1019 */    MCD::OPC_Decode, 185, 4, 9, // Opcode: UDIVri
/* 1023 */    MCD::OPC_FilterValue, 15, 25, 0, // Skip to: 1052
/* 1027 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1030 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 1044
/* 1034 */    MCD::OPC_CheckField, 5, 8, 0, 236, 22, // Skip to: 6908
/* 1040 */    MCD::OPC_Decode, 205, 3, 8, // Opcode: SDIVrr
/* 1044 */    MCD::OPC_FilterValue, 1, 228, 22, // Skip to: 6908
/* 1048 */    MCD::OPC_Decode, 204, 3, 9, // Opcode: SDIVri
/* 1052 */    MCD::OPC_FilterValue, 16, 23, 0, // Skip to: 1079
/* 1056 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1059 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 1072
/* 1063 */    MCD::OPC_CheckField, 5, 8, 0, 207, 22, // Skip to: 6908
/* 1069 */    MCD::OPC_Decode, 83, 8, // Opcode: ADDCCrr
/* 1072 */    MCD::OPC_FilterValue, 1, 200, 22, // Skip to: 6908
/* 1076 */    MCD::OPC_Decode, 82, 9, // Opcode: ADDCCri
/* 1079 */    MCD::OPC_FilterValue, 17, 23, 0, // Skip to: 1106
/* 1083 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1086 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 1099
/* 1090 */    MCD::OPC_CheckField, 5, 8, 0, 180, 22, // Skip to: 6908
/* 1096 */    MCD::OPC_Decode, 99, 8, // Opcode: ANDCCrr
/* 1099 */    MCD::OPC_FilterValue, 1, 173, 22, // Skip to: 6908
/* 1103 */    MCD::OPC_Decode, 98, 9, // Opcode: ANDCCri
/* 1106 */    MCD::OPC_FilterValue, 18, 25, 0, // Skip to: 1135
/* 1110 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1113 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 1127
/* 1117 */    MCD::OPC_CheckField, 5, 8, 0, 153, 22, // Skip to: 6908
/* 1123 */    MCD::OPC_Decode, 174, 3, 8, // Opcode: ORCCrr
/* 1127 */    MCD::OPC_FilterValue, 1, 145, 22, // Skip to: 6908
/* 1131 */    MCD::OPC_Decode, 173, 3, 9, // Opcode: ORCCri
/* 1135 */    MCD::OPC_FilterValue, 19, 25, 0, // Skip to: 1164
/* 1139 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1142 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 1156
/* 1146 */    MCD::OPC_CheckField, 5, 8, 0, 124, 22, // Skip to: 6908
/* 1152 */    MCD::OPC_Decode, 224, 4, 8, // Opcode: XORCCrr
/* 1156 */    MCD::OPC_FilterValue, 1, 116, 22, // Skip to: 6908
/* 1160 */    MCD::OPC_Decode, 223, 4, 9, // Opcode: XORCCri
/* 1164 */    MCD::OPC_FilterValue, 20, 46, 0, // Skip to: 1214
/* 1168 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1171 */    MCD::OPC_FilterValue, 0, 21, 0, // Skip to: 1196
/* 1175 */    MCD::OPC_ExtractField, 5, 8,  // Inst{12-5} ...
/* 1178 */    MCD::OPC_FilterValue, 0, 94, 22, // Skip to: 6908
/* 1182 */    MCD::OPC_CheckField, 25, 5, 0, 4, 0, // Skip to: 1192
/* 1188 */    MCD::OPC_Decode, 168, 1, 12, // Opcode: CMPrr
/* 1192 */    MCD::OPC_Decode, 148, 4, 8, // Opcode: SUBCCrr
/* 1196 */    MCD::OPC_FilterValue, 1, 76, 22, // Skip to: 6908
/* 1200 */    MCD::OPC_CheckField, 25, 5, 0, 4, 0, // Skip to: 1210
/* 1206 */    MCD::OPC_Decode, 167, 1, 13, // Opcode: CMPri
/* 1210 */    MCD::OPC_Decode, 147, 4, 9, // Opcode: SUBCCri
/* 1214 */    MCD::OPC_FilterValue, 21, 23, 0, // Skip to: 1241
/* 1218 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1221 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 1234
/* 1225 */    MCD::OPC_CheckField, 5, 8, 0, 45, 22, // Skip to: 6908
/* 1231 */    MCD::OPC_Decode, 101, 8, // Opcode: ANDNCCrr
/* 1234 */    MCD::OPC_FilterValue, 1, 38, 22, // Skip to: 6908
/* 1238 */    MCD::OPC_Decode, 100, 9, // Opcode: ANDNCCri
/* 1241 */    MCD::OPC_FilterValue, 22, 25, 0, // Skip to: 1270
/* 1245 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1248 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 1262
/* 1252 */    MCD::OPC_CheckField, 5, 8, 0, 18, 22, // Skip to: 6908
/* 1258 */    MCD::OPC_Decode, 176, 3, 8, // Opcode: ORNCCrr
/* 1262 */    MCD::OPC_FilterValue, 1, 10, 22, // Skip to: 6908
/* 1266 */    MCD::OPC_Decode, 175, 3, 9, // Opcode: ORNCCri
/* 1270 */    MCD::OPC_FilterValue, 23, 25, 0, // Skip to: 1299
/* 1274 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1277 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 1291
/* 1281 */    MCD::OPC_CheckField, 5, 8, 0, 245, 21, // Skip to: 6908
/* 1287 */    MCD::OPC_Decode, 219, 4, 8, // Opcode: XNORCCrr
/* 1291 */    MCD::OPC_FilterValue, 1, 237, 21, // Skip to: 6908
/* 1295 */    MCD::OPC_Decode, 218, 4, 9, // Opcode: XNORCCri
/* 1299 */    MCD::OPC_FilterValue, 24, 23, 0, // Skip to: 1326
/* 1303 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1306 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 1319
/* 1310 */    MCD::OPC_CheckField, 5, 8, 0, 216, 21, // Skip to: 6908
/* 1316 */    MCD::OPC_Decode, 87, 8, // Opcode: ADDErr
/* 1319 */    MCD::OPC_FilterValue, 1, 209, 21, // Skip to: 6908
/* 1323 */    MCD::OPC_Decode, 86, 9, // Opcode: ADDEri
/* 1326 */    MCD::OPC_FilterValue, 26, 25, 0, // Skip to: 1355
/* 1330 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1333 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 1347
/* 1337 */    MCD::OPC_CheckField, 5, 8, 0, 189, 21, // Skip to: 6908
/* 1343 */    MCD::OPC_Decode, 190, 4, 8, // Opcode: UMULCCrr
/* 1347 */    MCD::OPC_FilterValue, 1, 181, 21, // Skip to: 6908
/* 1351 */    MCD::OPC_Decode, 189, 4, 9, // Opcode: UMULCCri
/* 1355 */    MCD::OPC_FilterValue, 27, 25, 0, // Skip to: 1384
/* 1359 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1362 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 1376
/* 1366 */    MCD::OPC_CheckField, 5, 8, 0, 160, 21, // Skip to: 6908
/* 1372 */    MCD::OPC_Decode, 226, 3, 8, // Opcode: SMULCCrr
/* 1376 */    MCD::OPC_FilterValue, 1, 152, 21, // Skip to: 6908
/* 1380 */    MCD::OPC_Decode, 225, 3, 9, // Opcode: SMULCCri
/* 1384 */    MCD::OPC_FilterValue, 28, 25, 0, // Skip to: 1413
/* 1388 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1391 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 1405
/* 1395 */    MCD::OPC_CheckField, 5, 8, 0, 131, 21, // Skip to: 6908
/* 1401 */    MCD::OPC_Decode, 152, 4, 8, // Opcode: SUBErr
/* 1405 */    MCD::OPC_FilterValue, 1, 123, 21, // Skip to: 6908
/* 1409 */    MCD::OPC_Decode, 151, 4, 9, // Opcode: SUBEri
/* 1413 */    MCD::OPC_FilterValue, 30, 25, 0, // Skip to: 1442
/* 1417 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1420 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 1434
/* 1424 */    MCD::OPC_CheckField, 5, 8, 0, 102, 21, // Skip to: 6908
/* 1430 */    MCD::OPC_Decode, 182, 4, 8, // Opcode: UDIVCCrr
/* 1434 */    MCD::OPC_FilterValue, 1, 94, 21, // Skip to: 6908
/* 1438 */    MCD::OPC_Decode, 181, 4, 9, // Opcode: UDIVCCri
/* 1442 */    MCD::OPC_FilterValue, 31, 25, 0, // Skip to: 1471
/* 1446 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1449 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 1463
/* 1453 */    MCD::OPC_CheckField, 5, 8, 0, 73, 21, // Skip to: 6908
/* 1459 */    MCD::OPC_Decode, 201, 3, 8, // Opcode: SDIVCCrr
/* 1463 */    MCD::OPC_FilterValue, 1, 65, 21, // Skip to: 6908
/* 1467 */    MCD::OPC_Decode, 200, 3, 9, // Opcode: SDIVCCri
/* 1471 */    MCD::OPC_FilterValue, 32, 25, 0, // Skip to: 1500
/* 1475 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1478 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 1492
/* 1482 */    MCD::OPC_CheckField, 5, 8, 0, 44, 21, // Skip to: 6908
/* 1488 */    MCD::OPC_Decode, 165, 4, 8, // Opcode: TADDCCrr
/* 1492 */    MCD::OPC_FilterValue, 1, 36, 21, // Skip to: 6908
/* 1496 */    MCD::OPC_Decode, 164, 4, 9, // Opcode: TADDCCri
/* 1500 */    MCD::OPC_FilterValue, 33, 25, 0, // Skip to: 1529
/* 1504 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1507 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 1521
/* 1511 */    MCD::OPC_CheckField, 5, 8, 0, 15, 21, // Skip to: 6908
/* 1517 */    MCD::OPC_Decode, 178, 4, 8, // Opcode: TSUBCCrr
/* 1521 */    MCD::OPC_FilterValue, 1, 7, 21, // Skip to: 6908
/* 1525 */    MCD::OPC_Decode, 177, 4, 9, // Opcode: TSUBCCri
/* 1529 */    MCD::OPC_FilterValue, 34, 25, 0, // Skip to: 1558
/* 1533 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1536 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 1550
/* 1540 */    MCD::OPC_CheckField, 5, 8, 0, 242, 20, // Skip to: 6908
/* 1546 */    MCD::OPC_Decode, 163, 4, 8, // Opcode: TADDCCTVrr
/* 1550 */    MCD::OPC_FilterValue, 1, 234, 20, // Skip to: 6908
/* 1554 */    MCD::OPC_Decode, 162, 4, 9, // Opcode: TADDCCTVri
/* 1558 */    MCD::OPC_FilterValue, 35, 25, 0, // Skip to: 1587
/* 1562 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1565 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 1579
/* 1569 */    MCD::OPC_CheckField, 5, 8, 0, 213, 20, // Skip to: 6908
/* 1575 */    MCD::OPC_Decode, 176, 4, 8, // Opcode: TSUBCCTVrr
/* 1579 */    MCD::OPC_FilterValue, 1, 205, 20, // Skip to: 6908
/* 1583 */    MCD::OPC_Decode, 175, 4, 9, // Opcode: TSUBCCTVri
/* 1587 */    MCD::OPC_FilterValue, 36, 25, 0, // Skip to: 1616
/* 1591 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1594 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 1608
/* 1598 */    MCD::OPC_CheckField, 5, 8, 0, 184, 20, // Skip to: 6908
/* 1604 */    MCD::OPC_Decode, 169, 3, 8, // Opcode: MULSCCrr
/* 1608 */    MCD::OPC_FilterValue, 1, 176, 20, // Skip to: 6908
/* 1612 */    MCD::OPC_Decode, 168, 3, 9, // Opcode: MULSCCri
/* 1616 */    MCD::OPC_FilterValue, 37, 50, 0, // Skip to: 1670
/* 1620 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1623 */    MCD::OPC_FilterValue, 0, 25, 0, // Skip to: 1652
/* 1627 */    MCD::OPC_ExtractField, 12, 1,  // Inst{12} ...
/* 1630 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 1644
/* 1634 */    MCD::OPC_CheckField, 5, 7, 0, 148, 20, // Skip to: 6908
/* 1640 */    MCD::OPC_Decode, 222, 3, 8, // Opcode: SLLrr
/* 1644 */    MCD::OPC_FilterValue, 1, 140, 20, // Skip to: 6908
/* 1648 */    MCD::OPC_Decode, 220, 3, 14, // Opcode: SLLXrr
/* 1652 */    MCD::OPC_FilterValue, 1, 132, 20, // Skip to: 6908
/* 1656 */    MCD::OPC_CheckField, 12, 1, 1, 4, 0, // Skip to: 1666
/* 1662 */    MCD::OPC_Decode, 219, 3, 15, // Opcode: SLLXri
/* 1666 */    MCD::OPC_Decode, 221, 3, 9, // Opcode: SLLri
/* 1670 */    MCD::OPC_FilterValue, 38, 50, 0, // Skip to: 1724
/* 1674 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1677 */    MCD::OPC_FilterValue, 0, 25, 0, // Skip to: 1706
/* 1681 */    MCD::OPC_ExtractField, 12, 1,  // Inst{12} ...
/* 1684 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 1698
/* 1688 */    MCD::OPC_CheckField, 5, 7, 0, 94, 20, // Skip to: 6908
/* 1694 */    MCD::OPC_Decode, 236, 3, 8, // Opcode: SRLrr
/* 1698 */    MCD::OPC_FilterValue, 1, 86, 20, // Skip to: 6908
/* 1702 */    MCD::OPC_Decode, 234, 3, 14, // Opcode: SRLXrr
/* 1706 */    MCD::OPC_FilterValue, 1, 78, 20, // Skip to: 6908
/* 1710 */    MCD::OPC_CheckField, 12, 1, 1, 4, 0, // Skip to: 1720
/* 1716 */    MCD::OPC_Decode, 233, 3, 15, // Opcode: SRLXri
/* 1720 */    MCD::OPC_Decode, 235, 3, 9, // Opcode: SRLri
/* 1724 */    MCD::OPC_FilterValue, 39, 50, 0, // Skip to: 1778
/* 1728 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1731 */    MCD::OPC_FilterValue, 0, 25, 0, // Skip to: 1760
/* 1735 */    MCD::OPC_ExtractField, 12, 1,  // Inst{12} ...
/* 1738 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 1752
/* 1742 */    MCD::OPC_CheckField, 5, 7, 0, 40, 20, // Skip to: 6908
/* 1748 */    MCD::OPC_Decode, 232, 3, 8, // Opcode: SRArr
/* 1752 */    MCD::OPC_FilterValue, 1, 32, 20, // Skip to: 6908
/* 1756 */    MCD::OPC_Decode, 230, 3, 14, // Opcode: SRAXrr
/* 1760 */    MCD::OPC_FilterValue, 1, 24, 20, // Skip to: 6908
/* 1764 */    MCD::OPC_CheckField, 12, 1, 1, 4, 0, // Skip to: 1774
/* 1770 */    MCD::OPC_Decode, 229, 3, 15, // Opcode: SRAXri
/* 1774 */    MCD::OPC_Decode, 231, 3, 9, // Opcode: SRAri
/* 1778 */    MCD::OPC_FilterValue, 40, 58, 0, // Skip to: 1840
/* 1782 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1785 */    MCD::OPC_FilterValue, 0, 27, 0, // Skip to: 1816
/* 1789 */    MCD::OPC_ExtractField, 0, 13,  // Inst{12-0} ...
/* 1792 */    MCD::OPC_FilterValue, 0, 248, 19, // Skip to: 6908
/* 1796 */    MCD::OPC_CheckField, 25, 5, 0, 10, 0, // Skip to: 1812
/* 1802 */    MCD::OPC_CheckField, 14, 5, 15, 4, 0, // Skip to: 1812
/* 1808 */    MCD::OPC_Decode, 238, 3, 4, // Opcode: STBAR
/* 1812 */    MCD::OPC_Decode, 187, 3, 16, // Opcode: RDASR
/* 1816 */    MCD::OPC_FilterValue, 1, 224, 19, // Skip to: 6908
/* 1820 */    MCD::OPC_CheckPredicate, 0, 220, 19, // Skip to: 6908
/* 1824 */    MCD::OPC_CheckField, 25, 5, 0, 214, 19, // Skip to: 6908
/* 1830 */    MCD::OPC_CheckField, 14, 5, 15, 208, 19, // Skip to: 6908
/* 1836 */    MCD::OPC_Decode, 144, 3, 17, // Opcode: MEMBARi
/* 1840 */    MCD::OPC_FilterValue, 41, 10, 0, // Skip to: 1854
/* 1844 */    MCD::OPC_CheckField, 0, 19, 0, 194, 19, // Skip to: 6908
/* 1850 */    MCD::OPC_Decode, 189, 3, 18, // Opcode: RDPSR
/* 1854 */    MCD::OPC_FilterValue, 42, 25, 0, // Skip to: 1883
/* 1858 */    MCD::OPC_ExtractField, 0, 14,  // Inst{13-0} ...
/* 1861 */    MCD::OPC_FilterValue, 0, 179, 19, // Skip to: 6908
/* 1865 */    MCD::OPC_CheckField, 14, 5, 0, 4, 0, // Skip to: 1875
/* 1871 */    MCD::OPC_Decode, 191, 3, 18, // Opcode: RDWIM
/* 1875 */    MCD::OPC_CheckPredicate, 0, 165, 19, // Skip to: 6908
/* 1879 */    MCD::OPC_Decode, 188, 3, 19, // Opcode: RDPR
/* 1883 */    MCD::OPC_FilterValue, 43, 25, 0, // Skip to: 1912
/* 1887 */    MCD::OPC_ExtractField, 0, 19,  // Inst{18-0} ...
/* 1890 */    MCD::OPC_FilterValue, 0, 150, 19, // Skip to: 6908
/* 1894 */    MCD::OPC_CheckPredicate, 0, 10, 0, // Skip to: 1908
/* 1898 */    MCD::OPC_CheckField, 25, 5, 0, 4, 0, // Skip to: 1908
/* 1904 */    MCD::OPC_Decode, 231, 1, 4, // Opcode: FLUSHW
/* 1908 */    MCD::OPC_Decode, 190, 3, 18, // Opcode: RDTBR
/* 1912 */    MCD::OPC_FilterValue, 44, 123, 0, // Skip to: 2039
/* 1916 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1919 */    MCD::OPC_FilterValue, 0, 56, 0, // Skip to: 1979
/* 1923 */    MCD::OPC_ExtractField, 18, 1,  // Inst{18} ...
/* 1926 */    MCD::OPC_FilterValue, 0, 22, 0, // Skip to: 1952
/* 1930 */    MCD::OPC_CheckPredicate, 0, 10, 0, // Skip to: 1944
/* 1934 */    MCD::OPC_CheckField, 11, 2, 0, 4, 0, // Skip to: 1944
/* 1940 */    MCD::OPC_Decode, 147, 3, 20, // Opcode: MOVFCCrr
/* 1944 */    MCD::OPC_CheckPredicate, 0, 96, 19, // Skip to: 6908
/* 1948 */    MCD::OPC_Decode, 205, 4, 21, // Opcode: V9MOVFCCrr
/* 1952 */    MCD::OPC_FilterValue, 1, 88, 19, // Skip to: 6908
/* 1956 */    MCD::OPC_ExtractField, 11, 2,  // Inst{12-11} ...
/* 1959 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 1971
/* 1963 */    MCD::OPC_CheckPredicate, 0, 77, 19, // Skip to: 6908
/* 1967 */    MCD::OPC_Decode, 149, 3, 20, // Opcode: MOVICCrr
/* 1971 */    MCD::OPC_FilterValue, 2, 69, 19, // Skip to: 6908
/* 1975 */    MCD::OPC_Decode, 166, 3, 20, // Opcode: MOVXCCrr
/* 1979 */    MCD::OPC_FilterValue, 1, 61, 19, // Skip to: 6908
/* 1983 */    MCD::OPC_ExtractField, 18, 1,  // Inst{18} ...
/* 1986 */    MCD::OPC_FilterValue, 0, 22, 0, // Skip to: 2012
/* 1990 */    MCD::OPC_CheckPredicate, 0, 10, 0, // Skip to: 2004
/* 1994 */    MCD::OPC_CheckField, 11, 2, 0, 4, 0, // Skip to: 2004
/* 2000 */    MCD::OPC_Decode, 146, 3, 22, // Opcode: MOVFCCri
/* 2004 */    MCD::OPC_CheckPredicate, 0, 36, 19, // Skip to: 6908
/* 2008 */    MCD::OPC_Decode, 204, 4, 23, // Opcode: V9MOVFCCri
/* 2012 */    MCD::OPC_FilterValue, 1, 28, 19, // Skip to: 6908
/* 2016 */    MCD::OPC_ExtractField, 11, 2,  // Inst{12-11} ...
/* 2019 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 2031
/* 2023 */    MCD::OPC_CheckPredicate, 0, 17, 19, // Skip to: 6908
/* 2027 */    MCD::OPC_Decode, 148, 3, 22, // Opcode: MOVICCri
/* 2031 */    MCD::OPC_FilterValue, 2, 9, 19, // Skip to: 6908
/* 2035 */    MCD::OPC_Decode, 165, 3, 22, // Opcode: MOVXCCri
/* 2039 */    MCD::OPC_FilterValue, 45, 25, 0, // Skip to: 2068
/* 2043 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 2046 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 2060
/* 2050 */    MCD::OPC_CheckField, 5, 8, 0, 244, 18, // Skip to: 6908
/* 2056 */    MCD::OPC_Decode, 203, 3, 10, // Opcode: SDIVXrr
/* 2060 */    MCD::OPC_FilterValue, 1, 236, 18, // Skip to: 6908
/* 2064 */    MCD::OPC_Decode, 202, 3, 11, // Opcode: SDIVXri
/* 2068 */    MCD::OPC_FilterValue, 46, 14, 0, // Skip to: 2086
/* 2072 */    MCD::OPC_CheckPredicate, 0, 224, 18, // Skip to: 6908
/* 2076 */    MCD::OPC_CheckField, 5, 14, 0, 218, 18, // Skip to: 6908
/* 2082 */    MCD::OPC_Decode, 186, 3, 24, // Opcode: POPCrr
/* 2086 */    MCD::OPC_FilterValue, 47, 135, 0, // Skip to: 2225
/* 2090 */    MCD::OPC_ExtractField, 10, 4,  // Inst{13-10} ...
/* 2093 */    MCD::OPC_FilterValue, 1, 10, 0, // Skip to: 2107
/* 2097 */    MCD::OPC_CheckField, 5, 5, 0, 197, 18, // Skip to: 6908
/* 2103 */    MCD::OPC_Decode, 161, 3, 14, // Opcode: MOVRRZrr
/* 2107 */    MCD::OPC_FilterValue, 2, 10, 0, // Skip to: 2121
/* 2111 */    MCD::OPC_CheckField, 5, 5, 0, 183, 18, // Skip to: 6908
/* 2117 */    MCD::OPC_Decode, 155, 3, 14, // Opcode: MOVRLEZrr
/* 2121 */    MCD::OPC_FilterValue, 3, 10, 0, // Skip to: 2135
/* 2125 */    MCD::OPC_CheckField, 5, 5, 0, 169, 18, // Skip to: 6908
/* 2131 */    MCD::OPC_Decode, 157, 3, 14, // Opcode: MOVRLZrr
/* 2135 */    MCD::OPC_FilterValue, 5, 10, 0, // Skip to: 2149
/* 2139 */    MCD::OPC_CheckField, 5, 5, 0, 155, 18, // Skip to: 6908
/* 2145 */    MCD::OPC_Decode, 159, 3, 14, // Opcode: MOVRNZrr
/* 2149 */    MCD::OPC_FilterValue, 6, 10, 0, // Skip to: 2163
/* 2153 */    MCD::OPC_CheckField, 5, 5, 0, 141, 18, // Skip to: 6908
/* 2159 */    MCD::OPC_Decode, 153, 3, 14, // Opcode: MOVRGZrr
/* 2163 */    MCD::OPC_FilterValue, 7, 10, 0, // Skip to: 2177
/* 2167 */    MCD::OPC_CheckField, 5, 5, 0, 127, 18, // Skip to: 6908
/* 2173 */    MCD::OPC_Decode, 151, 3, 14, // Opcode: MOVRGEZrr
/* 2177 */    MCD::OPC_FilterValue, 9, 4, 0, // Skip to: 2185
/* 2181 */    MCD::OPC_Decode, 160, 3, 25, // Opcode: MOVRRZri
/* 2185 */    MCD::OPC_FilterValue, 10, 4, 0, // Skip to: 2193
/* 2189 */    MCD::OPC_Decode, 154, 3, 25, // Opcode: MOVRLEZri
/* 2193 */    MCD::OPC_FilterValue, 11, 4, 0, // Skip to: 2201
/* 2197 */    MCD::OPC_Decode, 156, 3, 25, // Opcode: MOVRLZri
/* 2201 */    MCD::OPC_FilterValue, 13, 4, 0, // Skip to: 2209
/* 2205 */    MCD::OPC_Decode, 158, 3, 25, // Opcode: MOVRNZri
/* 2209 */    MCD::OPC_FilterValue, 14, 4, 0, // Skip to: 2217
/* 2213 */    MCD::OPC_Decode, 152, 3, 25, // Opcode: MOVRGZri
/* 2217 */    MCD::OPC_FilterValue, 15, 79, 18, // Skip to: 6908
/* 2221 */    MCD::OPC_Decode, 150, 3, 25, // Opcode: MOVRGEZri
/* 2225 */    MCD::OPC_FilterValue, 48, 25, 0, // Skip to: 2254
/* 2229 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 2232 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 2246
/* 2236 */    MCD::OPC_CheckField, 5, 8, 0, 58, 18, // Skip to: 6908
/* 2242 */    MCD::OPC_Decode, 207, 4, 26, // Opcode: WRASRrr
/* 2246 */    MCD::OPC_FilterValue, 1, 50, 18, // Skip to: 6908
/* 2250 */    MCD::OPC_Decode, 206, 4, 27, // Opcode: WRASRri
/* 2254 */    MCD::OPC_FilterValue, 49, 37, 0, // Skip to: 2295
/* 2258 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 2261 */    MCD::OPC_FilterValue, 0, 16, 0, // Skip to: 2281
/* 2265 */    MCD::OPC_CheckField, 25, 5, 0, 29, 18, // Skip to: 6908
/* 2271 */    MCD::OPC_CheckField, 5, 8, 0, 23, 18, // Skip to: 6908
/* 2277 */    MCD::OPC_Decode, 211, 4, 12, // Opcode: WRPSRrr
/* 2281 */    MCD::OPC_FilterValue, 1, 15, 18, // Skip to: 6908
/* 2285 */    MCD::OPC_CheckField, 25, 5, 0, 9, 18, // Skip to: 6908
/* 2291 */    MCD::OPC_Decode, 210, 4, 13, // Opcode: WRPSRri
/* 2295 */    MCD::OPC_FilterValue, 50, 54, 0, // Skip to: 2353
/* 2299 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 2302 */    MCD::OPC_FilterValue, 0, 25, 0, // Skip to: 2331
/* 2306 */    MCD::OPC_ExtractField, 5, 8,  // Inst{12-5} ...
/* 2309 */    MCD::OPC_FilterValue, 0, 243, 17, // Skip to: 6908
/* 2313 */    MCD::OPC_CheckField, 25, 5, 0, 4, 0, // Skip to: 2323
/* 2319 */    MCD::OPC_Decode, 215, 4, 12, // Opcode: WRWIMrr
/* 2323 */    MCD::OPC_CheckPredicate, 0, 229, 17, // Skip to: 6908
/* 2327 */    MCD::OPC_Decode, 209, 4, 28, // Opcode: WRPRrr
/* 2331 */    MCD::OPC_FilterValue, 1, 221, 17, // Skip to: 6908
/* 2335 */    MCD::OPC_CheckField, 25, 5, 0, 4, 0, // Skip to: 2345
/* 2341 */    MCD::OPC_Decode, 214, 4, 13, // Opcode: WRWIMri
/* 2345 */    MCD::OPC_CheckPredicate, 0, 207, 17, // Skip to: 6908
/* 2349 */    MCD::OPC_Decode, 208, 4, 29, // Opcode: WRPRri
/* 2353 */    MCD::OPC_FilterValue, 51, 37, 0, // Skip to: 2394
/* 2357 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 2360 */    MCD::OPC_FilterValue, 0, 16, 0, // Skip to: 2380
/* 2364 */    MCD::OPC_CheckField, 25, 5, 0, 186, 17, // Skip to: 6908
/* 2370 */    MCD::OPC_CheckField, 5, 8, 0, 180, 17, // Skip to: 6908
/* 2376 */    MCD::OPC_Decode, 213, 4, 12, // Opcode: WRTBRrr
/* 2380 */    MCD::OPC_FilterValue, 1, 172, 17, // Skip to: 6908
/* 2384 */    MCD::OPC_CheckField, 25, 5, 0, 166, 17, // Skip to: 6908
/* 2390 */    MCD::OPC_Decode, 212, 4, 13, // Opcode: WRTBRri
/* 2394 */    MCD::OPC_FilterValue, 52, 197, 2, // Skip to: 3107
/* 2398 */    MCD::OPC_ExtractField, 5, 9,  // Inst{13-5} ...
/* 2401 */    MCD::OPC_FilterValue, 1, 10, 0, // Skip to: 2415
/* 2405 */    MCD::OPC_CheckField, 14, 5, 0, 145, 17, // Skip to: 6908
/* 2411 */    MCD::OPC_Decode, 133, 2, 30, // Opcode: FMOVS
/* 2415 */    MCD::OPC_FilterValue, 2, 14, 0, // Skip to: 2433
/* 2419 */    MCD::OPC_CheckPredicate, 0, 133, 17, // Skip to: 6908
/* 2423 */    MCD::OPC_CheckField, 14, 5, 0, 127, 17, // Skip to: 6908
/* 2429 */    MCD::OPC_Decode, 235, 1, 31, // Opcode: FMOVD
/* 2433 */    MCD::OPC_FilterValue, 3, 14, 0, // Skip to: 2451
/* 2437 */    MCD::OPC_CheckPredicate, 0, 115, 17, // Skip to: 6908
/* 2441 */    MCD::OPC_CheckField, 14, 5, 0, 109, 17, // Skip to: 6908
/* 2447 */    MCD::OPC_Decode, 239, 1, 32, // Opcode: FMOVQ
/* 2451 */    MCD::OPC_FilterValue, 5, 10, 0, // Skip to: 2465
/* 2455 */    MCD::OPC_CheckField, 14, 5, 0, 95, 17, // Skip to: 6908
/* 2461 */    MCD::OPC_Decode, 153, 2, 30, // Opcode: FNEGS
/* 2465 */    MCD::OPC_FilterValue, 6, 14, 0, // Skip to: 2483
/* 2469 */    MCD::OPC_CheckPredicate, 0, 83, 17, // Skip to: 6908
/* 2473 */    MCD::OPC_CheckField, 14, 5, 0, 77, 17, // Skip to: 6908
/* 2479 */    MCD::OPC_Decode, 151, 2, 31, // Opcode: FNEGD
/* 2483 */    MCD::OPC_FilterValue, 7, 14, 0, // Skip to: 2501
/* 2487 */    MCD::OPC_CheckPredicate, 0, 65, 17, // Skip to: 6908
/* 2491 */    MCD::OPC_CheckField, 14, 5, 0, 59, 17, // Skip to: 6908
/* 2497 */    MCD::OPC_Decode, 152, 2, 32, // Opcode: FNEGQ
/* 2501 */    MCD::OPC_FilterValue, 9, 10, 0, // Skip to: 2515
/* 2505 */    MCD::OPC_CheckField, 14, 5, 0, 45, 17, // Skip to: 6908
/* 2511 */    MCD::OPC_Decode, 187, 1, 30, // Opcode: FABSS
/* 2515 */    MCD::OPC_FilterValue, 10, 14, 0, // Skip to: 2533
/* 2519 */    MCD::OPC_CheckPredicate, 0, 33, 17, // Skip to: 6908
/* 2523 */    MCD::OPC_CheckField, 14, 5, 0, 27, 17, // Skip to: 6908
/* 2529 */    MCD::OPC_Decode, 185, 1, 31, // Opcode: FABSD
/* 2533 */    MCD::OPC_FilterValue, 11, 14, 0, // Skip to: 2551
/* 2537 */    MCD::OPC_CheckPredicate, 0, 15, 17, // Skip to: 6908
/* 2541 */    MCD::OPC_CheckField, 14, 5, 0, 9, 17, // Skip to: 6908
/* 2547 */    MCD::OPC_Decode, 186, 1, 32, // Opcode: FABSQ
/* 2551 */    MCD::OPC_FilterValue, 41, 10, 0, // Skip to: 2565
/* 2555 */    MCD::OPC_CheckField, 14, 5, 0, 251, 16, // Skip to: 6908
/* 2561 */    MCD::OPC_Decode, 197, 2, 30, // Opcode: FSQRTS
/* 2565 */    MCD::OPC_FilterValue, 42, 10, 0, // Skip to: 2579
/* 2569 */    MCD::OPC_CheckField, 14, 5, 0, 237, 16, // Skip to: 6908
/* 2575 */    MCD::OPC_Decode, 195, 2, 31, // Opcode: FSQRTD
/* 2579 */    MCD::OPC_FilterValue, 43, 10, 0, // Skip to: 2593
/* 2583 */    MCD::OPC_CheckField, 14, 5, 0, 223, 16, // Skip to: 6908
/* 2589 */    MCD::OPC_Decode, 196, 2, 32, // Opcode: FSQRTQ
/* 2593 */    MCD::OPC_FilterValue, 65, 4, 0, // Skip to: 2601
/* 2597 */    MCD::OPC_Decode, 190, 1, 33, // Opcode: FADDS
/* 2601 */    MCD::OPC_FilterValue, 66, 4, 0, // Skip to: 2609
/* 2605 */    MCD::OPC_Decode, 188, 1, 34, // Opcode: FADDD
/* 2609 */    MCD::OPC_FilterValue, 67, 4, 0, // Skip to: 2617
/* 2613 */    MCD::OPC_Decode, 189, 1, 35, // Opcode: FADDQ
/* 2617 */    MCD::OPC_FilterValue, 69, 4, 0, // Skip to: 2625
/* 2621 */    MCD::OPC_Decode, 212, 2, 33, // Opcode: FSUBS
/* 2625 */    MCD::OPC_FilterValue, 70, 4, 0, // Skip to: 2633
/* 2629 */    MCD::OPC_Decode, 210, 2, 34, // Opcode: FSUBD
/* 2633 */    MCD::OPC_FilterValue, 71, 4, 0, // Skip to: 2641
/* 2637 */    MCD::OPC_Decode, 211, 2, 35, // Opcode: FSUBQ
/* 2641 */    MCD::OPC_FilterValue, 73, 4, 0, // Skip to: 2649
/* 2645 */    MCD::OPC_Decode, 146, 2, 33, // Opcode: FMULS
/* 2649 */    MCD::OPC_FilterValue, 74, 4, 0, // Skip to: 2657
/* 2653 */    MCD::OPC_Decode, 142, 2, 34, // Opcode: FMULD
/* 2657 */    MCD::OPC_FilterValue, 75, 4, 0, // Skip to: 2665
/* 2661 */    MCD::OPC_Decode, 145, 2, 35, // Opcode: FMULQ
/* 2665 */    MCD::OPC_FilterValue, 77, 4, 0, // Skip to: 2673
/* 2669 */    MCD::OPC_Decode, 214, 1, 33, // Opcode: FDIVS
/* 2673 */    MCD::OPC_FilterValue, 78, 4, 0, // Skip to: 2681
/* 2677 */    MCD::OPC_Decode, 212, 1, 34, // Opcode: FDIVD
/* 2681 */    MCD::OPC_FilterValue, 79, 4, 0, // Skip to: 2689
/* 2685 */    MCD::OPC_Decode, 213, 1, 35, // Opcode: FDIVQ
/* 2689 */    MCD::OPC_FilterValue, 81, 8, 0, // Skip to: 2701
/* 2693 */    MCD::OPC_CheckPredicate, 1, 115, 16, // Skip to: 6908
/* 2697 */    MCD::OPC_Decode, 148, 2, 34, // Opcode: FNADDS
/* 2701 */    MCD::OPC_FilterValue, 82, 8, 0, // Skip to: 2713
/* 2705 */    MCD::OPC_CheckPredicate, 1, 103, 16, // Skip to: 6908
/* 2709 */    MCD::OPC_Decode, 147, 2, 34, // Opcode: FNADDD
/* 2713 */    MCD::OPC_FilterValue, 89, 8, 0, // Skip to: 2725
/* 2717 */    MCD::OPC_CheckPredicate, 1, 91, 16, // Skip to: 6908
/* 2721 */    MCD::OPC_Decode, 157, 2, 34, // Opcode: FNMULS
/* 2725 */    MCD::OPC_FilterValue, 90, 8, 0, // Skip to: 2737
/* 2729 */    MCD::OPC_CheckPredicate, 1, 79, 16, // Skip to: 6908
/* 2733 */    MCD::OPC_Decode, 156, 2, 34, // Opcode: FNMULD
/* 2737 */    MCD::OPC_FilterValue, 97, 8, 0, // Skip to: 2749
/* 2741 */    MCD::OPC_CheckPredicate, 1, 67, 16, // Skip to: 6908
/* 2745 */    MCD::OPC_Decode, 222, 1, 34, // Opcode: FHADDS
/* 2749 */    MCD::OPC_FilterValue, 98, 8, 0, // Skip to: 2761
/* 2753 */    MCD::OPC_CheckPredicate, 1, 55, 16, // Skip to: 6908
/* 2757 */    MCD::OPC_Decode, 221, 1, 34, // Opcode: FHADDD
/* 2761 */    MCD::OPC_FilterValue, 101, 8, 0, // Skip to: 2773
/* 2765 */    MCD::OPC_CheckPredicate, 1, 43, 16, // Skip to: 6908
/* 2769 */    MCD::OPC_Decode, 224, 1, 34, // Opcode: FHSUBS
/* 2773 */    MCD::OPC_FilterValue, 102, 8, 0, // Skip to: 2785
/* 2777 */    MCD::OPC_CheckPredicate, 1, 31, 16, // Skip to: 6908
/* 2781 */    MCD::OPC_Decode, 223, 1, 34, // Opcode: FHSUBD
/* 2785 */    MCD::OPC_FilterValue, 105, 4, 0, // Skip to: 2793
/* 2789 */    MCD::OPC_Decode, 194, 2, 36, // Opcode: FSMULD
/* 2793 */    MCD::OPC_FilterValue, 110, 4, 0, // Skip to: 2801
/* 2797 */    MCD::OPC_Decode, 215, 1, 37, // Opcode: FDMULQ
/* 2801 */    MCD::OPC_FilterValue, 113, 8, 0, // Skip to: 2813
/* 2805 */    MCD::OPC_CheckPredicate, 1, 3, 16, // Skip to: 6908
/* 2809 */    MCD::OPC_Decode, 155, 2, 34, // Opcode: FNHADDS
/* 2813 */    MCD::OPC_FilterValue, 114, 8, 0, // Skip to: 2825
/* 2817 */    MCD::OPC_CheckPredicate, 1, 247, 15, // Skip to: 6908
/* 2821 */    MCD::OPC_Decode, 154, 2, 34, // Opcode: FNHADDD
/* 2825 */    MCD::OPC_FilterValue, 121, 8, 0, // Skip to: 2837
/* 2829 */    MCD::OPC_CheckPredicate, 1, 235, 15, // Skip to: 6908
/* 2833 */    MCD::OPC_Decode, 164, 2, 34, // Opcode: FNSMULD
/* 2837 */    MCD::OPC_FilterValue, 129, 1, 10, 0, // Skip to: 2852
/* 2842 */    MCD::OPC_CheckField, 14, 5, 0, 220, 15, // Skip to: 6908
/* 2848 */    MCD::OPC_Decode, 209, 2, 38, // Opcode: FSTOX
/* 2852 */    MCD::OPC_FilterValue, 130, 1, 10, 0, // Skip to: 2867
/* 2857 */    MCD::OPC_CheckField, 14, 5, 0, 205, 15, // Skip to: 6908
/* 2863 */    MCD::OPC_Decode, 219, 1, 31, // Opcode: FDTOX
/* 2867 */    MCD::OPC_FilterValue, 131, 1, 10, 0, // Skip to: 2882
/* 2872 */    MCD::OPC_CheckField, 14, 5, 0, 190, 15, // Skip to: 6908
/* 2878 */    MCD::OPC_Decode, 189, 2, 39, // Opcode: FQTOX
/* 2882 */    MCD::OPC_FilterValue, 132, 1, 10, 0, // Skip to: 2897
/* 2887 */    MCD::OPC_CheckField, 14, 5, 0, 175, 15, // Skip to: 6908
/* 2893 */    MCD::OPC_Decode, 219, 2, 40, // Opcode: FXTOS
/* 2897 */    MCD::OPC_FilterValue, 136, 1, 10, 0, // Skip to: 2912
/* 2902 */    MCD::OPC_CheckField, 14, 5, 0, 160, 15, // Skip to: 6908
/* 2908 */    MCD::OPC_Decode, 217, 2, 31, // Opcode: FXTOD
/* 2912 */    MCD::OPC_FilterValue, 140, 1, 10, 0, // Skip to: 2927
/* 2917 */    MCD::OPC_CheckField, 14, 5, 0, 145, 15, // Skip to: 6908
/* 2923 */    MCD::OPC_Decode, 218, 2, 41, // Opcode: FXTOQ
/* 2927 */    MCD::OPC_FilterValue, 196, 1, 10, 0, // Skip to: 2942
/* 2932 */    MCD::OPC_CheckField, 14, 5, 0, 130, 15, // Skip to: 6908
/* 2938 */    MCD::OPC_Decode, 227, 1, 30, // Opcode: FITOS
/* 2942 */    MCD::OPC_FilterValue, 198, 1, 10, 0, // Skip to: 2957
/* 2947 */    MCD::OPC_CheckField, 14, 5, 0, 115, 15, // Skip to: 6908
/* 2953 */    MCD::OPC_Decode, 218, 1, 40, // Opcode: FDTOS
/* 2957 */    MCD::OPC_FilterValue, 199, 1, 10, 0, // Skip to: 2972
/* 2962 */    MCD::OPC_CheckField, 14, 5, 0, 100, 15, // Skip to: 6908
/* 2968 */    MCD::OPC_Decode, 188, 2, 42, // Opcode: FQTOS
/* 2972 */    MCD::OPC_FilterValue, 200, 1, 10, 0, // Skip to: 2987
/* 2977 */    MCD::OPC_CheckField, 14, 5, 0, 85, 15, // Skip to: 6908
/* 2983 */    MCD::OPC_Decode, 225, 1, 38, // Opcode: FITOD
/* 2987 */    MCD::OPC_FilterValue, 201, 1, 10, 0, // Skip to: 3002
/* 2992 */    MCD::OPC_CheckField, 14, 5, 0, 70, 15, // Skip to: 6908
/* 2998 */    MCD::OPC_Decode, 206, 2, 38, // Opcode: FSTOD
/* 3002 */    MCD::OPC_FilterValue, 203, 1, 10, 0, // Skip to: 3017
/* 3007 */    MCD::OPC_CheckField, 14, 5, 0, 55, 15, // Skip to: 6908
/* 3013 */    MCD::OPC_Decode, 186, 2, 39, // Opcode: FQTOD
/* 3017 */    MCD::OPC_FilterValue, 204, 1, 10, 0, // Skip to: 3032
/* 3022 */    MCD::OPC_CheckField, 14, 5, 0, 40, 15, // Skip to: 6908
/* 3028 */    MCD::OPC_Decode, 226, 1, 43, // Opcode: FITOQ
/* 3032 */    MCD::OPC_FilterValue, 205, 1, 10, 0, // Skip to: 3047
/* 3037 */    MCD::OPC_CheckField, 14, 5, 0, 25, 15, // Skip to: 6908
/* 3043 */    MCD::OPC_Decode, 208, 2, 43, // Opcode: FSTOQ
/* 3047 */    MCD::OPC_FilterValue, 206, 1, 10, 0, // Skip to: 3062
/* 3052 */    MCD::OPC_CheckField, 14, 5, 0, 10, 15, // Skip to: 6908
/* 3058 */    MCD::OPC_Decode, 217, 1, 41, // Opcode: FDTOQ
/* 3062 */    MCD::OPC_FilterValue, 209, 1, 10, 0, // Skip to: 3077
/* 3067 */    MCD::OPC_CheckField, 14, 5, 0, 251, 14, // Skip to: 6908
/* 3073 */    MCD::OPC_Decode, 207, 2, 30, // Opcode: FSTOI
/* 3077 */    MCD::OPC_FilterValue, 210, 1, 10, 0, // Skip to: 3092
/* 3082 */    MCD::OPC_CheckField, 14, 5, 0, 236, 14, // Skip to: 6908
/* 3088 */    MCD::OPC_Decode, 216, 1, 40, // Opcode: FDTOI
/* 3092 */    MCD::OPC_FilterValue, 211, 1, 227, 14, // Skip to: 6908
/* 3097 */    MCD::OPC_CheckField, 14, 5, 0, 221, 14, // Skip to: 6908
/* 3103 */    MCD::OPC_Decode, 187, 2, 42, // Opcode: FQTOI
/* 3107 */    MCD::OPC_FilterValue, 53, 70, 2, // Skip to: 3693
/* 3111 */    MCD::OPC_ExtractField, 5, 6,  // Inst{10-5} ...
/* 3114 */    MCD::OPC_FilterValue, 1, 75, 0, // Skip to: 3193
/* 3118 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 3121 */    MCD::OPC_FilterValue, 0, 29, 0, // Skip to: 3154
/* 3125 */    MCD::OPC_ExtractField, 18, 1,  // Inst{18} ...
/* 3128 */    MCD::OPC_FilterValue, 0, 192, 14, // Skip to: 6908
/* 3132 */    MCD::OPC_CheckPredicate, 0, 10, 0, // Skip to: 3146
/* 3136 */    MCD::OPC_CheckField, 11, 2, 0, 4, 0, // Skip to: 3146
/* 3142 */    MCD::OPC_Decode, 134, 2, 44, // Opcode: FMOVS_FCC
/* 3146 */    MCD::OPC_CheckPredicate, 0, 174, 14, // Skip to: 6908
/* 3150 */    MCD::OPC_Decode, 203, 4, 45, // Opcode: V9FMOVS_FCC
/* 3154 */    MCD::OPC_FilterValue, 1, 166, 14, // Skip to: 6908
/* 3158 */    MCD::OPC_ExtractField, 11, 2,  // Inst{12-11} ...
/* 3161 */    MCD::OPC_FilterValue, 0, 14, 0, // Skip to: 3179
/* 3165 */    MCD::OPC_CheckPredicate, 0, 155, 14, // Skip to: 6908
/* 3169 */    MCD::OPC_CheckField, 18, 1, 0, 149, 14, // Skip to: 6908
/* 3175 */    MCD::OPC_Decode, 135, 2, 44, // Opcode: FMOVS_ICC
/* 3179 */    MCD::OPC_FilterValue, 2, 141, 14, // Skip to: 6908
/* 3183 */    MCD::OPC_CheckField, 18, 1, 0, 135, 14, // Skip to: 6908
/* 3189 */    MCD::OPC_Decode, 136, 2, 44, // Opcode: FMOVS_XCC
/* 3193 */    MCD::OPC_FilterValue, 2, 75, 0, // Skip to: 3272
/* 3197 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 3200 */    MCD::OPC_FilterValue, 0, 29, 0, // Skip to: 3233
/* 3204 */    MCD::OPC_ExtractField, 18, 1,  // Inst{18} ...
/* 3207 */    MCD::OPC_FilterValue, 0, 113, 14, // Skip to: 6908
/* 3211 */    MCD::OPC_CheckPredicate, 0, 10, 0, // Skip to: 3225
/* 3215 */    MCD::OPC_CheckField, 11, 2, 0, 4, 0, // Skip to: 3225
/* 3221 */    MCD::OPC_Decode, 236, 1, 46, // Opcode: FMOVD_FCC
/* 3225 */    MCD::OPC_CheckPredicate, 0, 95, 14, // Skip to: 6908
/* 3229 */    MCD::OPC_Decode, 201, 4, 47, // Opcode: V9FMOVD_FCC
/* 3233 */    MCD::OPC_FilterValue, 1, 87, 14, // Skip to: 6908
/* 3237 */    MCD::OPC_ExtractField, 11, 2,  // Inst{12-11} ...
/* 3240 */    MCD::OPC_FilterValue, 0, 14, 0, // Skip to: 3258
/* 3244 */    MCD::OPC_CheckPredicate, 0, 76, 14, // Skip to: 6908
/* 3248 */    MCD::OPC_CheckField, 18, 1, 0, 70, 14, // Skip to: 6908
/* 3254 */    MCD::OPC_Decode, 237, 1, 46, // Opcode: FMOVD_ICC
/* 3258 */    MCD::OPC_FilterValue, 2, 62, 14, // Skip to: 6908
/* 3262 */    MCD::OPC_CheckField, 18, 1, 0, 56, 14, // Skip to: 6908
/* 3268 */    MCD::OPC_Decode, 238, 1, 46, // Opcode: FMOVD_XCC
/* 3272 */    MCD::OPC_FilterValue, 3, 75, 0, // Skip to: 3351
/* 3276 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 3279 */    MCD::OPC_FilterValue, 0, 29, 0, // Skip to: 3312
/* 3283 */    MCD::OPC_ExtractField, 18, 1,  // Inst{18} ...
/* 3286 */    MCD::OPC_FilterValue, 0, 34, 14, // Skip to: 6908
/* 3290 */    MCD::OPC_CheckPredicate, 0, 10, 0, // Skip to: 3304
/* 3294 */    MCD::OPC_CheckField, 11, 2, 0, 4, 0, // Skip to: 3304
/* 3300 */    MCD::OPC_Decode, 240, 1, 48, // Opcode: FMOVQ_FCC
/* 3304 */    MCD::OPC_CheckPredicate, 0, 16, 14, // Skip to: 6908
/* 3308 */    MCD::OPC_Decode, 202, 4, 49, // Opcode: V9FMOVQ_FCC
/* 3312 */    MCD::OPC_FilterValue, 1, 8, 14, // Skip to: 6908
/* 3316 */    MCD::OPC_ExtractField, 11, 2,  // Inst{12-11} ...
/* 3319 */    MCD::OPC_FilterValue, 0, 14, 0, // Skip to: 3337
/* 3323 */    MCD::OPC_CheckPredicate, 0, 253, 13, // Skip to: 6908
/* 3327 */    MCD::OPC_CheckField, 18, 1, 0, 247, 13, // Skip to: 6908
/* 3333 */    MCD::OPC_Decode, 241, 1, 48, // Opcode: FMOVQ_ICC
/* 3337 */    MCD::OPC_FilterValue, 2, 239, 13, // Skip to: 6908
/* 3341 */    MCD::OPC_CheckField, 18, 1, 0, 233, 13, // Skip to: 6908
/* 3347 */    MCD::OPC_Decode, 242, 1, 48, // Opcode: FMOVQ_XCC
/* 3351 */    MCD::OPC_FilterValue, 5, 27, 0, // Skip to: 3382
/* 3355 */    MCD::OPC_ExtractField, 11, 3,  // Inst{13-11} ...
/* 3358 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 3370
/* 3362 */    MCD::OPC_CheckPredicate, 0, 214, 13, // Skip to: 6908
/* 3366 */    MCD::OPC_Decode, 251, 1, 50, // Opcode: FMOVRLEZS
/* 3370 */    MCD::OPC_FilterValue, 3, 206, 13, // Skip to: 6908
/* 3374 */    MCD::OPC_CheckPredicate, 0, 202, 13, // Skip to: 6908
/* 3378 */    MCD::OPC_Decode, 248, 1, 50, // Opcode: FMOVRGZS
/* 3382 */    MCD::OPC_FilterValue, 6, 27, 0, // Skip to: 3413
/* 3386 */    MCD::OPC_ExtractField, 11, 3,  // Inst{13-11} ...
/* 3389 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 3401
/* 3393 */    MCD::OPC_CheckPredicate, 0, 183, 13, // Skip to: 6908
/* 3397 */    MCD::OPC_Decode, 249, 1, 50, // Opcode: FMOVRLEZD
/* 3401 */    MCD::OPC_FilterValue, 3, 175, 13, // Skip to: 6908
/* 3405 */    MCD::OPC_CheckPredicate, 0, 171, 13, // Skip to: 6908
/* 3409 */    MCD::OPC_Decode, 246, 1, 50, // Opcode: FMOVRGZD
/* 3413 */    MCD::OPC_FilterValue, 7, 27, 0, // Skip to: 3444
/* 3417 */    MCD::OPC_ExtractField, 11, 3,  // Inst{13-11} ...
/* 3420 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 3432
/* 3424 */    MCD::OPC_CheckPredicate, 0, 152, 13, // Skip to: 6908
/* 3428 */    MCD::OPC_Decode, 250, 1, 50, // Opcode: FMOVRLEZQ
/* 3432 */    MCD::OPC_FilterValue, 3, 144, 13, // Skip to: 6908
/* 3436 */    MCD::OPC_CheckPredicate, 0, 140, 13, // Skip to: 6908
/* 3440 */    MCD::OPC_Decode, 247, 1, 50, // Opcode: FMOVRGZQ
/* 3444 */    MCD::OPC_FilterValue, 17, 10, 0, // Skip to: 3458
/* 3448 */    MCD::OPC_CheckField, 11, 3, 1, 126, 13, // Skip to: 6908
/* 3454 */    MCD::OPC_Decode, 200, 4, 51, // Opcode: V9FCMPS
/* 3458 */    MCD::OPC_FilterValue, 18, 10, 0, // Skip to: 3472
/* 3462 */    MCD::OPC_CheckField, 11, 3, 1, 112, 13, // Skip to: 6908
/* 3468 */    MCD::OPC_Decode, 195, 4, 52, // Opcode: V9FCMPD
/* 3472 */    MCD::OPC_FilterValue, 19, 10, 0, // Skip to: 3486
/* 3476 */    MCD::OPC_CheckField, 11, 3, 1, 98, 13, // Skip to: 6908
/* 3482 */    MCD::OPC_Decode, 199, 4, 53, // Opcode: V9FCMPQ
/* 3486 */    MCD::OPC_FilterValue, 21, 10, 0, // Skip to: 3500
/* 3490 */    MCD::OPC_CheckField, 11, 3, 1, 84, 13, // Skip to: 6908
/* 3496 */    MCD::OPC_Decode, 198, 4, 51, // Opcode: V9FCMPES
/* 3500 */    MCD::OPC_FilterValue, 22, 10, 0, // Skip to: 3514
/* 3504 */    MCD::OPC_CheckField, 11, 3, 1, 70, 13, // Skip to: 6908
/* 3510 */    MCD::OPC_Decode, 196, 4, 52, // Opcode: V9FCMPED
/* 3514 */    MCD::OPC_FilterValue, 23, 10, 0, // Skip to: 3528
/* 3518 */    MCD::OPC_CheckField, 11, 3, 1, 56, 13, // Skip to: 6908
/* 3524 */    MCD::OPC_Decode, 197, 4, 53, // Opcode: V9FCMPEQ
/* 3528 */    MCD::OPC_FilterValue, 37, 51, 0, // Skip to: 3583
/* 3532 */    MCD::OPC_ExtractField, 11, 3,  // Inst{13-11} ...
/* 3535 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 3547
/* 3539 */    MCD::OPC_CheckPredicate, 0, 37, 13, // Skip to: 6908
/* 3543 */    MCD::OPC_Decode, 132, 2, 50, // Opcode: FMOVRZS
/* 3547 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 3559
/* 3551 */    MCD::OPC_CheckPredicate, 0, 25, 13, // Skip to: 6908
/* 3555 */    MCD::OPC_Decode, 254, 1, 50, // Opcode: FMOVRLZS
/* 3559 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 3571
/* 3563 */    MCD::OPC_CheckPredicate, 0, 13, 13, // Skip to: 6908
/* 3567 */    MCD::OPC_Decode, 129, 2, 50, // Opcode: FMOVRNZS
/* 3571 */    MCD::OPC_FilterValue, 3, 5, 13, // Skip to: 6908
/* 3575 */    MCD::OPC_CheckPredicate, 0, 1, 13, // Skip to: 6908
/* 3579 */    MCD::OPC_Decode, 245, 1, 50, // Opcode: FMOVRGEZS
/* 3583 */    MCD::OPC_FilterValue, 38, 51, 0, // Skip to: 3638
/* 3587 */    MCD::OPC_ExtractField, 11, 3,  // Inst{13-11} ...
/* 3590 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 3602
/* 3594 */    MCD::OPC_CheckPredicate, 0, 238, 12, // Skip to: 6908
/* 3598 */    MCD::OPC_Decode, 130, 2, 50, // Opcode: FMOVRZD
/* 3602 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 3614
/* 3606 */    MCD::OPC_CheckPredicate, 0, 226, 12, // Skip to: 6908
/* 3610 */    MCD::OPC_Decode, 252, 1, 50, // Opcode: FMOVRLZD
/* 3614 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 3626
/* 3618 */    MCD::OPC_CheckPredicate, 0, 214, 12, // Skip to: 6908
/* 3622 */    MCD::OPC_Decode, 255, 1, 50, // Opcode: FMOVRNZD
/* 3626 */    MCD::OPC_FilterValue, 3, 206, 12, // Skip to: 6908
/* 3630 */    MCD::OPC_CheckPredicate, 0, 202, 12, // Skip to: 6908
/* 3634 */    MCD::OPC_Decode, 243, 1, 50, // Opcode: FMOVRGEZD
/* 3638 */    MCD::OPC_FilterValue, 39, 194, 12, // Skip to: 6908
/* 3642 */    MCD::OPC_ExtractField, 11, 3,  // Inst{13-11} ...
/* 3645 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 3657
/* 3649 */    MCD::OPC_CheckPredicate, 0, 183, 12, // Skip to: 6908
/* 3653 */    MCD::OPC_Decode, 131, 2, 50, // Opcode: FMOVRZQ
/* 3657 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 3669
/* 3661 */    MCD::OPC_CheckPredicate, 0, 171, 12, // Skip to: 6908
/* 3665 */    MCD::OPC_Decode, 253, 1, 50, // Opcode: FMOVRLZQ
/* 3669 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 3681
/* 3673 */    MCD::OPC_CheckPredicate, 0, 159, 12, // Skip to: 6908
/* 3677 */    MCD::OPC_Decode, 128, 2, 50, // Opcode: FMOVRNZQ
/* 3681 */    MCD::OPC_FilterValue, 3, 151, 12, // Skip to: 6908
/* 3685 */    MCD::OPC_CheckPredicate, 0, 147, 12, // Skip to: 6908
/* 3689 */    MCD::OPC_Decode, 244, 1, 50, // Opcode: FMOVRGEZQ
/* 3693 */    MCD::OPC_FilterValue, 54, 24, 6, // Skip to: 5257
/* 3697 */    MCD::OPC_ExtractField, 5, 9,  // Inst{13-5} ...
/* 3700 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 3712
/* 3704 */    MCD::OPC_CheckPredicate, 2, 128, 12, // Skip to: 6908
/* 3708 */    MCD::OPC_Decode, 177, 1, 10, // Opcode: EDGE8
/* 3712 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 3724
/* 3716 */    MCD::OPC_CheckPredicate, 3, 116, 12, // Skip to: 6908
/* 3720 */    MCD::OPC_Decode, 180, 1, 10, // Opcode: EDGE8N
/* 3724 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 3736
/* 3728 */    MCD::OPC_CheckPredicate, 2, 104, 12, // Skip to: 6908
/* 3732 */    MCD::OPC_Decode, 178, 1, 10, // Opcode: EDGE8L
/* 3736 */    MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 3748
/* 3740 */    MCD::OPC_CheckPredicate, 3, 92, 12, // Skip to: 6908
/* 3744 */    MCD::OPC_Decode, 179, 1, 10, // Opcode: EDGE8LN
/* 3748 */    MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 3760
/* 3752 */    MCD::OPC_CheckPredicate, 2, 80, 12, // Skip to: 6908
/* 3756 */    MCD::OPC_Decode, 169, 1, 10, // Opcode: EDGE16
/* 3760 */    MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 3772
/* 3764 */    MCD::OPC_CheckPredicate, 3, 68, 12, // Skip to: 6908
/* 3768 */    MCD::OPC_Decode, 172, 1, 10, // Opcode: EDGE16N
/* 3772 */    MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 3784
/* 3776 */    MCD::OPC_CheckPredicate, 2, 56, 12, // Skip to: 6908
/* 3780 */    MCD::OPC_Decode, 170, 1, 10, // Opcode: EDGE16L
/* 3784 */    MCD::OPC_FilterValue, 7, 8, 0, // Skip to: 3796
/* 3788 */    MCD::OPC_CheckPredicate, 3, 44, 12, // Skip to: 6908
/* 3792 */    MCD::OPC_Decode, 171, 1, 10, // Opcode: EDGE16LN
/* 3796 */    MCD::OPC_FilterValue, 8, 8, 0, // Skip to: 3808
/* 3800 */    MCD::OPC_CheckPredicate, 2, 32, 12, // Skip to: 6908
/* 3804 */    MCD::OPC_Decode, 173, 1, 10, // Opcode: EDGE32
/* 3808 */    MCD::OPC_FilterValue, 9, 8, 0, // Skip to: 3820
/* 3812 */    MCD::OPC_CheckPredicate, 3, 20, 12, // Skip to: 6908
/* 3816 */    MCD::OPC_Decode, 176, 1, 10, // Opcode: EDGE32N
/* 3820 */    MCD::OPC_FilterValue, 10, 8, 0, // Skip to: 3832
/* 3824 */    MCD::OPC_CheckPredicate, 2, 8, 12, // Skip to: 6908
/* 3828 */    MCD::OPC_Decode, 174, 1, 10, // Opcode: EDGE32L
/* 3832 */    MCD::OPC_FilterValue, 11, 8, 0, // Skip to: 3844
/* 3836 */    MCD::OPC_CheckPredicate, 3, 252, 11, // Skip to: 6908
/* 3840 */    MCD::OPC_Decode, 175, 1, 10, // Opcode: EDGE32LN
/* 3844 */    MCD::OPC_FilterValue, 16, 7, 0, // Skip to: 3855
/* 3848 */    MCD::OPC_CheckPredicate, 2, 240, 11, // Skip to: 6908
/* 3852 */    MCD::OPC_Decode, 111, 10, // Opcode: ARRAY8
/* 3855 */    MCD::OPC_FilterValue, 17, 7, 0, // Skip to: 3866
/* 3859 */    MCD::OPC_CheckPredicate, 1, 229, 11, // Skip to: 6908
/* 3863 */    MCD::OPC_Decode, 88, 10, // Opcode: ADDXC
/* 3866 */    MCD::OPC_FilterValue, 18, 7, 0, // Skip to: 3877
/* 3870 */    MCD::OPC_CheckPredicate, 2, 218, 11, // Skip to: 6908
/* 3874 */    MCD::OPC_Decode, 109, 10, // Opcode: ARRAY16
/* 3877 */    MCD::OPC_FilterValue, 19, 7, 0, // Skip to: 3888
/* 3881 */    MCD::OPC_CheckPredicate, 1, 207, 11, // Skip to: 6908
/* 3885 */    MCD::OPC_Decode, 89, 10, // Opcode: ADDXCCC
/* 3888 */    MCD::OPC_FilterValue, 20, 7, 0, // Skip to: 3899
/* 3892 */    MCD::OPC_CheckPredicate, 2, 196, 11, // Skip to: 6908
/* 3896 */    MCD::OPC_Decode, 110, 10, // Opcode: ARRAY32
/* 3899 */    MCD::OPC_FilterValue, 22, 8, 0, // Skip to: 3911
/* 3903 */    MCD::OPC_CheckPredicate, 1, 185, 11, // Skip to: 6908
/* 3907 */    MCD::OPC_Decode, 191, 4, 10, // Opcode: UMULXHI
/* 3911 */    MCD::OPC_FilterValue, 23, 14, 0, // Skip to: 3929
/* 3915 */    MCD::OPC_CheckPredicate, 1, 173, 11, // Skip to: 6908
/* 3919 */    MCD::OPC_CheckField, 14, 5, 0, 167, 11, // Skip to: 6908
/* 3925 */    MCD::OPC_Decode, 143, 3, 54, // Opcode: LZCNT
/* 3929 */    MCD::OPC_FilterValue, 24, 7, 0, // Skip to: 3940
/* 3933 */    MCD::OPC_CheckPredicate, 2, 155, 11, // Skip to: 6908
/* 3937 */    MCD::OPC_Decode, 96, 10, // Opcode: ALIGNADDR
/* 3940 */    MCD::OPC_FilterValue, 25, 7, 0, // Skip to: 3951
/* 3944 */    MCD::OPC_CheckPredicate, 3, 144, 11, // Skip to: 6908
/* 3948 */    MCD::OPC_Decode, 117, 10, // Opcode: BMASK
/* 3951 */    MCD::OPC_FilterValue, 26, 7, 0, // Skip to: 3962
/* 3955 */    MCD::OPC_CheckPredicate, 2, 133, 11, // Skip to: 6908
/* 3959 */    MCD::OPC_Decode, 97, 10, // Opcode: ALIGNADDRL
/* 3962 */    MCD::OPC_FilterValue, 27, 20, 0, // Skip to: 3986
/* 3966 */    MCD::OPC_CheckPredicate, 1, 122, 11, // Skip to: 6908
/* 3970 */    MCD::OPC_CheckField, 25, 5, 0, 116, 11, // Skip to: 6908
/* 3976 */    MCD::OPC_CheckField, 14, 5, 0, 110, 11, // Skip to: 6908
/* 3982 */    MCD::OPC_Decode, 166, 1, 55, // Opcode: CMASK8
/* 3986 */    MCD::OPC_FilterValue, 28, 8, 0, // Skip to: 3998
/* 3990 */    MCD::OPC_CheckPredicate, 3, 98, 11, // Skip to: 6908
/* 3994 */    MCD::OPC_Decode, 154, 1, 34, // Opcode: BSHUFFLE
/* 3998 */    MCD::OPC_FilterValue, 29, 20, 0, // Skip to: 4022
/* 4002 */    MCD::OPC_CheckPredicate, 1, 86, 11, // Skip to: 6908
/* 4006 */    MCD::OPC_CheckField, 25, 5, 0, 80, 11, // Skip to: 6908
/* 4012 */    MCD::OPC_CheckField, 14, 5, 0, 74, 11, // Skip to: 6908
/* 4018 */    MCD::OPC_Decode, 164, 1, 55, // Opcode: CMASK16
/* 4022 */    MCD::OPC_FilterValue, 31, 20, 0, // Skip to: 4046
/* 4026 */    MCD::OPC_CheckPredicate, 1, 62, 11, // Skip to: 6908
/* 4030 */    MCD::OPC_CheckField, 25, 5, 0, 56, 11, // Skip to: 6908
/* 4036 */    MCD::OPC_CheckField, 14, 5, 0, 50, 11, // Skip to: 6908
/* 4042 */    MCD::OPC_Decode, 165, 1, 55, // Opcode: CMASK32
/* 4046 */    MCD::OPC_FilterValue, 32, 8, 0, // Skip to: 4058
/* 4050 */    MCD::OPC_CheckPredicate, 2, 38, 11, // Skip to: 6908
/* 4054 */    MCD::OPC_Decode, 206, 1, 56, // Opcode: FCMPLE16
/* 4058 */    MCD::OPC_FilterValue, 33, 8, 0, // Skip to: 4070
/* 4062 */    MCD::OPC_CheckPredicate, 1, 26, 11, // Skip to: 6908
/* 4066 */    MCD::OPC_Decode, 192, 2, 34, // Opcode: FSLL16
/* 4070 */    MCD::OPC_FilterValue, 34, 8, 0, // Skip to: 4082
/* 4074 */    MCD::OPC_CheckPredicate, 2, 14, 11, // Skip to: 6908
/* 4078 */    MCD::OPC_Decode, 208, 1, 56, // Opcode: FCMPNE16
/* 4082 */    MCD::OPC_FilterValue, 35, 8, 0, // Skip to: 4094
/* 4086 */    MCD::OPC_CheckPredicate, 1, 2, 11, // Skip to: 6908
/* 4090 */    MCD::OPC_Decode, 204, 2, 34, // Opcode: FSRL16
/* 4094 */    MCD::OPC_FilterValue, 36, 8, 0, // Skip to: 4106
/* 4098 */    MCD::OPC_CheckPredicate, 2, 246, 10, // Skip to: 6908
/* 4102 */    MCD::OPC_Decode, 207, 1, 56, // Opcode: FCMPLE32
/* 4106 */    MCD::OPC_FilterValue, 37, 8, 0, // Skip to: 4118
/* 4110 */    MCD::OPC_CheckPredicate, 1, 234, 10, // Skip to: 6908
/* 4114 */    MCD::OPC_Decode, 193, 2, 34, // Opcode: FSLL32
/* 4118 */    MCD::OPC_FilterValue, 38, 8, 0, // Skip to: 4130
/* 4122 */    MCD::OPC_CheckPredicate, 2, 222, 10, // Skip to: 6908
/* 4126 */    MCD::OPC_Decode, 209, 1, 56, // Opcode: FCMPNE32
/* 4130 */    MCD::OPC_FilterValue, 39, 8, 0, // Skip to: 4142
/* 4134 */    MCD::OPC_CheckPredicate, 1, 210, 10, // Skip to: 6908
/* 4138 */    MCD::OPC_Decode, 205, 2, 34, // Opcode: FSRL32
/* 4142 */    MCD::OPC_FilterValue, 40, 8, 0, // Skip to: 4154
/* 4146 */    MCD::OPC_CheckPredicate, 2, 198, 10, // Skip to: 6908
/* 4150 */    MCD::OPC_Decode, 204, 1, 56, // Opcode: FCMPGT16
/* 4154 */    MCD::OPC_FilterValue, 41, 8, 0, // Skip to: 4166
/* 4158 */    MCD::OPC_CheckPredicate, 1, 186, 10, // Skip to: 6908
/* 4162 */    MCD::OPC_Decode, 190, 2, 34, // Opcode: FSLAS16
/* 4166 */    MCD::OPC_FilterValue, 42, 8, 0, // Skip to: 4178
/* 4170 */    MCD::OPC_CheckPredicate, 2, 174, 10, // Skip to: 6908
/* 4174 */    MCD::OPC_Decode, 202, 1, 56, // Opcode: FCMPEQ16
/* 4178 */    MCD::OPC_FilterValue, 43, 8, 0, // Skip to: 4190
/* 4182 */    MCD::OPC_CheckPredicate, 1, 162, 10, // Skip to: 6908
/* 4186 */    MCD::OPC_Decode, 198, 2, 34, // Opcode: FSRA16
/* 4190 */    MCD::OPC_FilterValue, 44, 8, 0, // Skip to: 4202
/* 4194 */    MCD::OPC_CheckPredicate, 2, 150, 10, // Skip to: 6908
/* 4198 */    MCD::OPC_Decode, 205, 1, 56, // Opcode: FCMPGT32
/* 4202 */    MCD::OPC_FilterValue, 45, 8, 0, // Skip to: 4214
/* 4206 */    MCD::OPC_CheckPredicate, 1, 138, 10, // Skip to: 6908
/* 4210 */    MCD::OPC_Decode, 191, 2, 34, // Opcode: FSLAS32
/* 4214 */    MCD::OPC_FilterValue, 46, 8, 0, // Skip to: 4226
/* 4218 */    MCD::OPC_CheckPredicate, 2, 126, 10, // Skip to: 6908
/* 4222 */    MCD::OPC_Decode, 203, 1, 56, // Opcode: FCMPEQ32
/* 4226 */    MCD::OPC_FilterValue, 47, 8, 0, // Skip to: 4238
/* 4230 */    MCD::OPC_CheckPredicate, 1, 114, 10, // Skip to: 6908
/* 4234 */    MCD::OPC_Decode, 199, 2, 34, // Opcode: FSRA32
/* 4238 */    MCD::OPC_FilterValue, 49, 8, 0, // Skip to: 4250
/* 4242 */    MCD::OPC_CheckPredicate, 2, 102, 10, // Skip to: 6908
/* 4246 */    MCD::OPC_Decode, 139, 2, 34, // Opcode: FMUL8X16
/* 4250 */    MCD::OPC_FilterValue, 51, 8, 0, // Skip to: 4262
/* 4254 */    MCD::OPC_CheckPredicate, 2, 90, 10, // Skip to: 6908
/* 4258 */    MCD::OPC_Decode, 141, 2, 34, // Opcode: FMUL8X16AU
/* 4262 */    MCD::OPC_FilterValue, 53, 8, 0, // Skip to: 4274
/* 4266 */    MCD::OPC_CheckPredicate, 2, 78, 10, // Skip to: 6908
/* 4270 */    MCD::OPC_Decode, 140, 2, 34, // Opcode: FMUL8X16AL
/* 4274 */    MCD::OPC_FilterValue, 54, 8, 0, // Skip to: 4286
/* 4278 */    MCD::OPC_CheckPredicate, 2, 66, 10, // Skip to: 6908
/* 4282 */    MCD::OPC_Decode, 137, 2, 34, // Opcode: FMUL8SUX16
/* 4286 */    MCD::OPC_FilterValue, 55, 8, 0, // Skip to: 4298
/* 4290 */    MCD::OPC_CheckPredicate, 2, 54, 10, // Skip to: 6908
/* 4294 */    MCD::OPC_Decode, 138, 2, 34, // Opcode: FMUL8ULX16
/* 4298 */    MCD::OPC_FilterValue, 56, 8, 0, // Skip to: 4310
/* 4302 */    MCD::OPC_CheckPredicate, 2, 42, 10, // Skip to: 6908
/* 4306 */    MCD::OPC_Decode, 143, 2, 34, // Opcode: FMULD8SUX16
/* 4310 */    MCD::OPC_FilterValue, 57, 8, 0, // Skip to: 4322
/* 4314 */    MCD::OPC_CheckPredicate, 2, 30, 10, // Skip to: 6908
/* 4318 */    MCD::OPC_Decode, 144, 2, 34, // Opcode: FMULD8ULX16
/* 4322 */    MCD::OPC_FilterValue, 58, 8, 0, // Skip to: 4334
/* 4326 */    MCD::OPC_CheckPredicate, 2, 18, 10, // Skip to: 6908
/* 4330 */    MCD::OPC_Decode, 174, 2, 34, // Opcode: FPACK32
/* 4334 */    MCD::OPC_FilterValue, 59, 14, 0, // Skip to: 4352
/* 4338 */    MCD::OPC_CheckPredicate, 2, 6, 10, // Skip to: 6908
/* 4342 */    MCD::OPC_CheckField, 14, 5, 0, 0, 10, // Skip to: 6908
/* 4348 */    MCD::OPC_Decode, 173, 2, 31, // Opcode: FPACK16
/* 4352 */    MCD::OPC_FilterValue, 61, 14, 0, // Skip to: 4370
/* 4356 */    MCD::OPC_CheckPredicate, 2, 244, 9, // Skip to: 6908
/* 4360 */    MCD::OPC_CheckField, 14, 5, 0, 238, 9, // Skip to: 6908
/* 4366 */    MCD::OPC_Decode, 175, 2, 31, // Opcode: FPACKFIX
/* 4370 */    MCD::OPC_FilterValue, 62, 8, 0, // Skip to: 4382
/* 4374 */    MCD::OPC_CheckPredicate, 2, 226, 9, // Skip to: 6908
/* 4378 */    MCD::OPC_Decode, 184, 3, 34, // Opcode: PDIST
/* 4382 */    MCD::OPC_FilterValue, 63, 8, 0, // Skip to: 4394
/* 4386 */    MCD::OPC_CheckPredicate, 1, 214, 9, // Skip to: 6908
/* 4390 */    MCD::OPC_Decode, 185, 3, 34, // Opcode: PDISTN
/* 4394 */    MCD::OPC_FilterValue, 64, 8, 0, // Skip to: 4406
/* 4398 */    MCD::OPC_CheckPredicate, 1, 202, 9, // Skip to: 6908
/* 4402 */    MCD::OPC_Decode, 234, 1, 34, // Opcode: FMEAN16
/* 4406 */    MCD::OPC_FilterValue, 66, 8, 0, // Skip to: 4418
/* 4410 */    MCD::OPC_CheckPredicate, 1, 190, 9, // Skip to: 6908
/* 4414 */    MCD::OPC_Decode, 180, 2, 34, // Opcode: FPADD64
/* 4418 */    MCD::OPC_FilterValue, 68, 8, 0, // Skip to: 4430
/* 4422 */    MCD::OPC_CheckPredicate, 1, 178, 9, // Skip to: 6908
/* 4426 */    MCD::OPC_Decode, 200, 1, 34, // Opcode: FCHKSM16
/* 4430 */    MCD::OPC_FilterValue, 72, 8, 0, // Skip to: 4442
/* 4434 */    MCD::OPC_CheckPredicate, 2, 166, 9, // Skip to: 6908
/* 4438 */    MCD::OPC_Decode, 191, 1, 34, // Opcode: FALIGNADATA
/* 4442 */    MCD::OPC_FilterValue, 75, 8, 0, // Skip to: 4454
/* 4446 */    MCD::OPC_CheckPredicate, 2, 154, 9, // Skip to: 6908
/* 4450 */    MCD::OPC_Decode, 181, 2, 34, // Opcode: FPMERGE
/* 4454 */    MCD::OPC_FilterValue, 77, 14, 0, // Skip to: 4472
/* 4458 */    MCD::OPC_CheckPredicate, 2, 142, 9, // Skip to: 6908
/* 4462 */    MCD::OPC_CheckField, 14, 5, 0, 136, 9, // Skip to: 6908
/* 4468 */    MCD::OPC_Decode, 220, 1, 31, // Opcode: FEXPAND
/* 4472 */    MCD::OPC_FilterValue, 80, 8, 0, // Skip to: 4484
/* 4476 */    MCD::OPC_CheckPredicate, 2, 124, 9, // Skip to: 6908
/* 4480 */    MCD::OPC_Decode, 176, 2, 34, // Opcode: FPADD16
/* 4484 */    MCD::OPC_FilterValue, 81, 8, 0, // Skip to: 4496
/* 4488 */    MCD::OPC_CheckPredicate, 2, 112, 9, // Skip to: 6908
/* 4492 */    MCD::OPC_Decode, 177, 2, 34, // Opcode: FPADD16S
/* 4496 */    MCD::OPC_FilterValue, 82, 8, 0, // Skip to: 4508
/* 4500 */    MCD::OPC_CheckPredicate, 2, 100, 9, // Skip to: 6908
/* 4504 */    MCD::OPC_Decode, 178, 2, 34, // Opcode: FPADD32
/* 4508 */    MCD::OPC_FilterValue, 83, 8, 0, // Skip to: 4520
/* 4512 */    MCD::OPC_CheckPredicate, 2, 88, 9, // Skip to: 6908
/* 4516 */    MCD::OPC_Decode, 179, 2, 34, // Opcode: FPADD32S
/* 4520 */    MCD::OPC_FilterValue, 84, 8, 0, // Skip to: 4532
/* 4524 */    MCD::OPC_CheckPredicate, 2, 76, 9, // Skip to: 6908
/* 4528 */    MCD::OPC_Decode, 182, 2, 34, // Opcode: FPSUB16
/* 4532 */    MCD::OPC_FilterValue, 85, 8, 0, // Skip to: 4544
/* 4536 */    MCD::OPC_CheckPredicate, 2, 64, 9, // Skip to: 6908
/* 4540 */    MCD::OPC_Decode, 183, 2, 34, // Opcode: FPSUB16S
/* 4544 */    MCD::OPC_FilterValue, 86, 8, 0, // Skip to: 4556
/* 4548 */    MCD::OPC_CheckPredicate, 2, 52, 9, // Skip to: 6908
/* 4552 */    MCD::OPC_Decode, 184, 2, 34, // Opcode: FPSUB32
/* 4556 */    MCD::OPC_FilterValue, 87, 8, 0, // Skip to: 4568
/* 4560 */    MCD::OPC_CheckPredicate, 2, 40, 9, // Skip to: 6908
/* 4564 */    MCD::OPC_Decode, 185, 2, 34, // Opcode: FPSUB32S
/* 4568 */    MCD::OPC_FilterValue, 96, 20, 0, // Skip to: 4592
/* 4572 */    MCD::OPC_CheckPredicate, 2, 28, 9, // Skip to: 6908
/* 4576 */    MCD::OPC_CheckField, 14, 5, 0, 22, 9, // Skip to: 6908
/* 4582 */    MCD::OPC_CheckField, 0, 5, 0, 16, 9, // Skip to: 6908
/* 4588 */    MCD::OPC_Decode, 220, 2, 57, // Opcode: FZERO
/* 4592 */    MCD::OPC_FilterValue, 97, 20, 0, // Skip to: 4616
/* 4596 */    MCD::OPC_CheckPredicate, 2, 4, 9, // Skip to: 6908
/* 4600 */    MCD::OPC_CheckField, 14, 5, 0, 254, 8, // Skip to: 6908
/* 4606 */    MCD::OPC_CheckField, 0, 5, 0, 248, 8, // Skip to: 6908
/* 4612 */    MCD::OPC_Decode, 221, 2, 58, // Opcode: FZEROS
/* 4616 */    MCD::OPC_FilterValue, 98, 8, 0, // Skip to: 4628
/* 4620 */    MCD::OPC_CheckPredicate, 2, 236, 8, // Skip to: 6908
/* 4624 */    MCD::OPC_Decode, 158, 2, 34, // Opcode: FNOR
/* 4628 */    MCD::OPC_FilterValue, 99, 8, 0, // Skip to: 4640
/* 4632 */    MCD::OPC_CheckPredicate, 2, 224, 8, // Skip to: 6908
/* 4636 */    MCD::OPC_Decode, 159, 2, 33, // Opcode: FNORS
/* 4640 */    MCD::OPC_FilterValue, 100, 8, 0, // Skip to: 4652
/* 4644 */    MCD::OPC_CheckPredicate, 2, 212, 8, // Skip to: 6908
/* 4648 */    MCD::OPC_Decode, 195, 1, 34, // Opcode: FANDNOT2
/* 4652 */    MCD::OPC_FilterValue, 101, 8, 0, // Skip to: 4664
/* 4656 */    MCD::OPC_CheckPredicate, 2, 200, 8, // Skip to: 6908
/* 4660 */    MCD::OPC_Decode, 196, 1, 33, // Opcode: FANDNOT2S
/* 4664 */    MCD::OPC_FilterValue, 102, 14, 0, // Skip to: 4682
/* 4668 */    MCD::OPC_CheckPredicate, 2, 188, 8, // Skip to: 6908
/* 4672 */    MCD::OPC_CheckField, 14, 5, 0, 182, 8, // Skip to: 6908
/* 4678 */    MCD::OPC_Decode, 162, 2, 31, // Opcode: FNOT2
/* 4682 */    MCD::OPC_FilterValue, 103, 14, 0, // Skip to: 4700
/* 4686 */    MCD::OPC_CheckPredicate, 2, 170, 8, // Skip to: 6908
/* 4690 */    MCD::OPC_CheckField, 14, 5, 0, 164, 8, // Skip to: 6908
/* 4696 */    MCD::OPC_Decode, 163, 2, 30, // Opcode: FNOT2S
/* 4700 */    MCD::OPC_FilterValue, 104, 8, 0, // Skip to: 4712
/* 4704 */    MCD::OPC_CheckPredicate, 2, 152, 8, // Skip to: 6908
/* 4708 */    MCD::OPC_Decode, 193, 1, 34, // Opcode: FANDNOT1
/* 4712 */    MCD::OPC_FilterValue, 105, 8, 0, // Skip to: 4724
/* 4716 */    MCD::OPC_CheckPredicate, 2, 140, 8, // Skip to: 6908
/* 4720 */    MCD::OPC_Decode, 194, 1, 33, // Opcode: FANDNOT1S
/* 4724 */    MCD::OPC_FilterValue, 106, 14, 0, // Skip to: 4742
/* 4728 */    MCD::OPC_CheckPredicate, 2, 128, 8, // Skip to: 6908
/* 4732 */    MCD::OPC_CheckField, 0, 5, 0, 122, 8, // Skip to: 6908
/* 4738 */    MCD::OPC_Decode, 160, 2, 59, // Opcode: FNOT1
/* 4742 */    MCD::OPC_FilterValue, 107, 14, 0, // Skip to: 4760
/* 4746 */    MCD::OPC_CheckPredicate, 2, 110, 8, // Skip to: 6908
/* 4750 */    MCD::OPC_CheckField, 0, 5, 0, 104, 8, // Skip to: 6908
/* 4756 */    MCD::OPC_Decode, 161, 2, 60, // Opcode: FNOT1S
/* 4760 */    MCD::OPC_FilterValue, 108, 8, 0, // Skip to: 4772
/* 4764 */    MCD::OPC_CheckPredicate, 2, 92, 8, // Skip to: 6908
/* 4768 */    MCD::OPC_Decode, 215, 2, 34, // Opcode: FXOR
/* 4772 */    MCD::OPC_FilterValue, 109, 8, 0, // Skip to: 4784
/* 4776 */    MCD::OPC_CheckPredicate, 2, 80, 8, // Skip to: 6908
/* 4780 */    MCD::OPC_Decode, 216, 2, 33, // Opcode: FXORS
/* 4784 */    MCD::OPC_FilterValue, 110, 8, 0, // Skip to: 4796
/* 4788 */    MCD::OPC_CheckPredicate, 2, 68, 8, // Skip to: 6908
/* 4792 */    MCD::OPC_Decode, 149, 2, 34, // Opcode: FNAND
/* 4796 */    MCD::OPC_FilterValue, 111, 8, 0, // Skip to: 4808
/* 4800 */    MCD::OPC_CheckPredicate, 2, 56, 8, // Skip to: 6908
/* 4804 */    MCD::OPC_Decode, 150, 2, 33, // Opcode: FNANDS
/* 4808 */    MCD::OPC_FilterValue, 112, 8, 0, // Skip to: 4820
/* 4812 */    MCD::OPC_CheckPredicate, 2, 44, 8, // Skip to: 6908
/* 4816 */    MCD::OPC_Decode, 192, 1, 34, // Opcode: FAND
/* 4820 */    MCD::OPC_FilterValue, 113, 8, 0, // Skip to: 4832
/* 4824 */    MCD::OPC_CheckPredicate, 2, 32, 8, // Skip to: 6908
/* 4828 */    MCD::OPC_Decode, 197, 1, 33, // Opcode: FANDS
/* 4832 */    MCD::OPC_FilterValue, 114, 8, 0, // Skip to: 4844
/* 4836 */    MCD::OPC_CheckPredicate, 2, 20, 8, // Skip to: 6908
/* 4840 */    MCD::OPC_Decode, 213, 2, 34, // Opcode: FXNOR
/* 4844 */    MCD::OPC_FilterValue, 115, 8, 0, // Skip to: 4856
/* 4848 */    MCD::OPC_CheckPredicate, 2, 8, 8, // Skip to: 6908
/* 4852 */    MCD::OPC_Decode, 214, 2, 33, // Opcode: FXNORS
/* 4856 */    MCD::OPC_FilterValue, 116, 14, 0, // Skip to: 4874
/* 4860 */    MCD::OPC_CheckPredicate, 2, 252, 7, // Skip to: 6908
/* 4864 */    MCD::OPC_CheckField, 0, 5, 0, 246, 7, // Skip to: 6908
/* 4870 */    MCD::OPC_Decode, 200, 2, 59, // Opcode: FSRC1
/* 4874 */    MCD::OPC_FilterValue, 117, 14, 0, // Skip to: 4892
/* 4878 */    MCD::OPC_CheckPredicate, 2, 234, 7, // Skip to: 6908
/* 4882 */    MCD::OPC_CheckField, 0, 5, 0, 228, 7, // Skip to: 6908
/* 4888 */    MCD::OPC_Decode, 201, 2, 60, // Opcode: FSRC1S
/* 4892 */    MCD::OPC_FilterValue, 118, 8, 0, // Skip to: 4904
/* 4896 */    MCD::OPC_CheckPredicate, 2, 216, 7, // Skip to: 6908
/* 4900 */    MCD::OPC_Decode, 170, 2, 34, // Opcode: FORNOT2
/* 4904 */    MCD::OPC_FilterValue, 119, 8, 0, // Skip to: 4916
/* 4908 */    MCD::OPC_CheckPredicate, 2, 204, 7, // Skip to: 6908
/* 4912 */    MCD::OPC_Decode, 171, 2, 33, // Opcode: FORNOT2S
/* 4916 */    MCD::OPC_FilterValue, 120, 14, 0, // Skip to: 4934
/* 4920 */    MCD::OPC_CheckPredicate, 2, 192, 7, // Skip to: 6908
/* 4924 */    MCD::OPC_CheckField, 14, 5, 0, 186, 7, // Skip to: 6908
/* 4930 */    MCD::OPC_Decode, 202, 2, 31, // Opcode: FSRC2
/* 4934 */    MCD::OPC_FilterValue, 121, 14, 0, // Skip to: 4952
/* 4938 */    MCD::OPC_CheckPredicate, 2, 174, 7, // Skip to: 6908
/* 4942 */    MCD::OPC_CheckField, 14, 5, 0, 168, 7, // Skip to: 6908
/* 4948 */    MCD::OPC_Decode, 203, 2, 30, // Opcode: FSRC2S
/* 4952 */    MCD::OPC_FilterValue, 122, 8, 0, // Skip to: 4964
/* 4956 */    MCD::OPC_CheckPredicate, 2, 156, 7, // Skip to: 6908
/* 4960 */    MCD::OPC_Decode, 168, 2, 34, // Opcode: FORNOT1
/* 4964 */    MCD::OPC_FilterValue, 123, 8, 0, // Skip to: 4976
/* 4968 */    MCD::OPC_CheckPredicate, 2, 144, 7, // Skip to: 6908
/* 4972 */    MCD::OPC_Decode, 169, 2, 33, // Opcode: FORNOT1S
/* 4976 */    MCD::OPC_FilterValue, 124, 8, 0, // Skip to: 4988
/* 4980 */    MCD::OPC_CheckPredicate, 2, 132, 7, // Skip to: 6908
/* 4984 */    MCD::OPC_Decode, 167, 2, 34, // Opcode: FOR
/* 4988 */    MCD::OPC_FilterValue, 125, 8, 0, // Skip to: 5000
/* 4992 */    MCD::OPC_CheckPredicate, 2, 120, 7, // Skip to: 6908
/* 4996 */    MCD::OPC_Decode, 172, 2, 33, // Opcode: FORS
/* 5000 */    MCD::OPC_FilterValue, 126, 20, 0, // Skip to: 5024
/* 5004 */    MCD::OPC_CheckPredicate, 2, 108, 7, // Skip to: 6908
/* 5008 */    MCD::OPC_CheckField, 14, 5, 0, 102, 7, // Skip to: 6908
/* 5014 */    MCD::OPC_CheckField, 0, 5, 0, 96, 7, // Skip to: 6908
/* 5020 */    MCD::OPC_Decode, 165, 2, 57, // Opcode: FONE
/* 5024 */    MCD::OPC_FilterValue, 127, 20, 0, // Skip to: 5048
/* 5028 */    MCD::OPC_CheckPredicate, 2, 84, 7, // Skip to: 6908
/* 5032 */    MCD::OPC_CheckField, 14, 5, 0, 78, 7, // Skip to: 6908
/* 5038 */    MCD::OPC_CheckField, 0, 5, 0, 72, 7, // Skip to: 6908
/* 5044 */    MCD::OPC_Decode, 166, 2, 58, // Opcode: FONES
/* 5048 */    MCD::OPC_FilterValue, 128, 1, 26, 0, // Skip to: 5079
/* 5053 */    MCD::OPC_CheckPredicate, 2, 59, 7, // Skip to: 6908
/* 5057 */    MCD::OPC_CheckField, 25, 5, 0, 53, 7, // Skip to: 6908
/* 5063 */    MCD::OPC_CheckField, 14, 5, 0, 47, 7, // Skip to: 6908
/* 5069 */    MCD::OPC_CheckField, 0, 5, 0, 41, 7, // Skip to: 6908
/* 5075 */    MCD::OPC_Decode, 217, 3, 4, // Opcode: SHUTDOWN
/* 5079 */    MCD::OPC_FilterValue, 129, 1, 26, 0, // Skip to: 5110
/* 5084 */    MCD::OPC_CheckPredicate, 3, 28, 7, // Skip to: 6908
/* 5088 */    MCD::OPC_CheckField, 25, 5, 0, 22, 7, // Skip to: 6908
/* 5094 */    MCD::OPC_CheckField, 14, 5, 0, 16, 7, // Skip to: 6908
/* 5100 */    MCD::OPC_CheckField, 0, 5, 0, 10, 7, // Skip to: 6908
/* 5106 */    MCD::OPC_Decode, 218, 3, 4, // Opcode: SIAM
/* 5110 */    MCD::OPC_FilterValue, 144, 2, 14, 0, // Skip to: 5129
/* 5115 */    MCD::OPC_CheckPredicate, 1, 253, 6, // Skip to: 6908
/* 5119 */    MCD::OPC_CheckField, 14, 5, 0, 247, 6, // Skip to: 6908
/* 5125 */    MCD::OPC_Decode, 145, 3, 61, // Opcode: MOVDTOX
/* 5129 */    MCD::OPC_FilterValue, 145, 2, 14, 0, // Skip to: 5148
/* 5134 */    MCD::OPC_CheckPredicate, 1, 234, 6, // Skip to: 6908
/* 5138 */    MCD::OPC_CheckField, 14, 5, 0, 228, 6, // Skip to: 6908
/* 5144 */    MCD::OPC_Decode, 163, 3, 61, // Opcode: MOVSTOUW
/* 5148 */    MCD::OPC_FilterValue, 147, 2, 14, 0, // Skip to: 5167
/* 5153 */    MCD::OPC_CheckPredicate, 1, 215, 6, // Skip to: 6908
/* 5157 */    MCD::OPC_CheckField, 14, 5, 0, 209, 6, // Skip to: 6908
/* 5163 */    MCD::OPC_Decode, 162, 3, 61, // Opcode: MOVSTOSW
/* 5167 */    MCD::OPC_FilterValue, 149, 2, 8, 0, // Skip to: 5180
/* 5172 */    MCD::OPC_CheckPredicate, 1, 196, 6, // Skip to: 6908
/* 5176 */    MCD::OPC_Decode, 216, 4, 10, // Opcode: XMULX
/* 5180 */    MCD::OPC_FilterValue, 151, 2, 8, 0, // Skip to: 5193
/* 5185 */    MCD::OPC_CheckPredicate, 1, 183, 6, // Skip to: 6908
/* 5189 */    MCD::OPC_Decode, 217, 4, 10, // Opcode: XMULXHI
/* 5193 */    MCD::OPC_FilterValue, 152, 2, 14, 0, // Skip to: 5212
/* 5198 */    MCD::OPC_CheckPredicate, 1, 170, 6, // Skip to: 6908
/* 5202 */    MCD::OPC_CheckField, 14, 5, 0, 164, 6, // Skip to: 6908
/* 5208 */    MCD::OPC_Decode, 167, 3, 62, // Opcode: MOVXTOD
/* 5212 */    MCD::OPC_FilterValue, 153, 2, 14, 0, // Skip to: 5231
/* 5217 */    MCD::OPC_CheckPredicate, 1, 151, 6, // Skip to: 6908
/* 5221 */    MCD::OPC_CheckField, 14, 5, 0, 145, 6, // Skip to: 6908
/* 5227 */    MCD::OPC_Decode, 164, 3, 62, // Opcode: MOVWTOS
/* 5231 */    MCD::OPC_FilterValue, 209, 2, 8, 0, // Skip to: 5244
/* 5236 */    MCD::OPC_CheckPredicate, 1, 132, 6, // Skip to: 6908
/* 5240 */    MCD::OPC_Decode, 229, 1, 52, // Opcode: FLCMPS
/* 5244 */    MCD::OPC_FilterValue, 210, 2, 123, 6, // Skip to: 6908
/* 5249 */    MCD::OPC_CheckPredicate, 1, 119, 6, // Skip to: 6908
/* 5253 */    MCD::OPC_Decode, 228, 1, 52, // Opcode: FLCMPD
/* 5257 */    MCD::OPC_FilterValue, 56, 25, 0, // Skip to: 5286
/* 5261 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 5264 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 5278
/* 5268 */    MCD::OPC_CheckField, 5, 8, 0, 98, 6, // Skip to: 6908
/* 5274 */    MCD::OPC_Decode, 224, 2, 63, // Opcode: JMPLrr
/* 5278 */    MCD::OPC_FilterValue, 1, 90, 6, // Skip to: 6908
/* 5282 */    MCD::OPC_Decode, 223, 2, 63, // Opcode: JMPLri
/* 5286 */    MCD::OPC_FilterValue, 57, 37, 0, // Skip to: 5327
/* 5290 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 5293 */    MCD::OPC_FilterValue, 0, 16, 0, // Skip to: 5313
/* 5297 */    MCD::OPC_CheckField, 25, 5, 0, 69, 6, // Skip to: 6908
/* 5303 */    MCD::OPC_CheckField, 5, 8, 0, 63, 6, // Skip to: 6908
/* 5309 */    MCD::OPC_Decode, 197, 3, 64, // Opcode: RETTrr
/* 5313 */    MCD::OPC_FilterValue, 1, 55, 6, // Skip to: 6908
/* 5317 */    MCD::OPC_CheckField, 25, 5, 0, 49, 6, // Skip to: 6908
/* 5323 */    MCD::OPC_Decode, 196, 3, 64, // Opcode: RETTri
/* 5327 */    MCD::OPC_FilterValue, 58, 84, 0, // Skip to: 5415
/* 5331 */    MCD::OPC_ExtractField, 8, 6,  // Inst{13-8} ...
/* 5334 */    MCD::OPC_FilterValue, 16, 16, 0, // Skip to: 5354
/* 5338 */    MCD::OPC_CheckField, 29, 1, 0, 28, 6, // Skip to: 6908
/* 5344 */    MCD::OPC_CheckField, 5, 3, 0, 22, 6, // Skip to: 6908
/* 5350 */    MCD::OPC_Decode, 180, 4, 65, // Opcode: TXCCrr
/* 5354 */    MCD::OPC_FilterValue, 32, 43, 0, // Skip to: 5401
/* 5358 */    MCD::OPC_ExtractField, 0, 8,  // Inst{7-0} ...
/* 5361 */    MCD::OPC_FilterValue, 3, 16, 0, // Skip to: 5381
/* 5365 */    MCD::OPC_CheckField, 25, 5, 0, 1, 6, // Skip to: 6908
/* 5371 */    MCD::OPC_CheckField, 14, 5, 1, 251, 5, // Skip to: 6908
/* 5377 */    MCD::OPC_Decode, 160, 4, 4, // Opcode: TA3
/* 5381 */    MCD::OPC_FilterValue, 5, 243, 5, // Skip to: 6908
/* 5385 */    MCD::OPC_CheckField, 25, 5, 8, 237, 5, // Skip to: 6908
/* 5391 */    MCD::OPC_CheckField, 14, 5, 0, 231, 5, // Skip to: 6908
/* 5397 */    MCD::OPC_Decode, 161, 4, 4, // Opcode: TA5
/* 5401 */    MCD::OPC_FilterValue, 48, 223, 5, // Skip to: 6908
/* 5405 */    MCD::OPC_CheckField, 29, 1, 0, 217, 5, // Skip to: 6908
/* 5411 */    MCD::OPC_Decode, 179, 4, 66, // Opcode: TXCCri
/* 5415 */    MCD::OPC_FilterValue, 59, 55, 0, // Skip to: 5474
/* 5419 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 5422 */    MCD::OPC_FilterValue, 0, 34, 0, // Skip to: 5460
/* 5426 */    MCD::OPC_ExtractField, 5, 8,  // Inst{12-5} ...
/* 5429 */    MCD::OPC_FilterValue, 0, 195, 5, // Skip to: 6908
/* 5433 */    MCD::OPC_ExtractField, 25, 5,  // Inst{29-25} ...
/* 5436 */    MCD::OPC_FilterValue, 0, 188, 5, // Skip to: 6908
/* 5440 */    MCD::OPC_CheckField, 14, 5, 0, 10, 0, // Skip to: 5456
/* 5446 */    MCD::OPC_CheckField, 0, 5, 0, 4, 0, // Skip to: 5456
/* 5452 */    MCD::OPC_Decode, 230, 1, 4, // Opcode: FLUSH
/* 5456 */    MCD::OPC_Decode, 233, 1, 4, // Opcode: FLUSHrr
/* 5460 */    MCD::OPC_FilterValue, 1, 164, 5, // Skip to: 6908
/* 5464 */    MCD::OPC_CheckField, 25, 5, 0, 158, 5, // Skip to: 6908
/* 5470 */    MCD::OPC_Decode, 232, 1, 4, // Opcode: FLUSHri
/* 5474 */    MCD::OPC_FilterValue, 60, 25, 0, // Skip to: 5503
/* 5478 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 5481 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 5495
/* 5485 */    MCD::OPC_CheckField, 5, 8, 0, 137, 5, // Skip to: 6908
/* 5491 */    MCD::OPC_Decode, 199, 3, 8, // Opcode: SAVErr
/* 5495 */    MCD::OPC_FilterValue, 1, 129, 5, // Skip to: 6908
/* 5499 */    MCD::OPC_Decode, 198, 3, 9, // Opcode: SAVEri
/* 5503 */    MCD::OPC_FilterValue, 61, 25, 0, // Skip to: 5532
/* 5507 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 5510 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 5524
/* 5514 */    MCD::OPC_CheckField, 5, 8, 0, 108, 5, // Skip to: 6908
/* 5520 */    MCD::OPC_Decode, 193, 3, 8, // Opcode: RESTORErr
/* 5524 */    MCD::OPC_FilterValue, 1, 100, 5, // Skip to: 6908
/* 5528 */    MCD::OPC_Decode, 192, 3, 9, // Opcode: RESTOREri
/* 5532 */    MCD::OPC_FilterValue, 62, 25, 0, // Skip to: 5561
/* 5536 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 5539 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 5553
/* 5543 */    MCD::OPC_CheckField, 5, 8, 0, 79, 5, // Skip to: 6908
/* 5549 */    MCD::OPC_Decode, 188, 4, 8, // Opcode: UMACrr
/* 5553 */    MCD::OPC_FilterValue, 1, 71, 5, // Skip to: 6908
/* 5557 */    MCD::OPC_Decode, 187, 4, 9, // Opcode: UMACri
/* 5561 */    MCD::OPC_FilterValue, 63, 63, 5, // Skip to: 6908
/* 5565 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 5568 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 5582
/* 5572 */    MCD::OPC_CheckField, 5, 8, 0, 50, 5, // Skip to: 6908
/* 5578 */    MCD::OPC_Decode, 224, 3, 8, // Opcode: SMACrr
/* 5582 */    MCD::OPC_FilterValue, 1, 42, 5, // Skip to: 6908
/* 5586 */    MCD::OPC_Decode, 223, 3, 9, // Opcode: SMACri
/* 5590 */    MCD::OPC_FilterValue, 3, 34, 5, // Skip to: 6908
/* 5594 */    MCD::OPC_ExtractField, 19, 6,  // Inst{24-19} ...
/* 5597 */    MCD::OPC_FilterValue, 0, 25, 0, // Skip to: 5626
/* 5601 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 5604 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 5618
/* 5608 */    MCD::OPC_CheckField, 5, 8, 0, 14, 5, // Skip to: 6908
/* 5614 */    MCD::OPC_Decode, 140, 3, 67, // Opcode: LDrr
/* 5618 */    MCD::OPC_FilterValue, 1, 6, 5, // Skip to: 6908
/* 5622 */    MCD::OPC_Decode, 139, 3, 67, // Opcode: LDri
/* 5626 */    MCD::OPC_FilterValue, 1, 25, 0, // Skip to: 5655
/* 5630 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 5633 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 5647
/* 5637 */    MCD::OPC_CheckField, 5, 8, 0, 241, 4, // Skip to: 6908
/* 5643 */    MCD::OPC_Decode, 131, 3, 67, // Opcode: LDUBrr
/* 5647 */    MCD::OPC_FilterValue, 1, 233, 4, // Skip to: 6908
/* 5651 */    MCD::OPC_Decode, 130, 3, 67, // Opcode: LDUBri
/* 5655 */    MCD::OPC_FilterValue, 2, 25, 0, // Skip to: 5684
/* 5659 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 5662 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 5676
/* 5666 */    MCD::OPC_CheckField, 5, 8, 0, 212, 4, // Skip to: 6908
/* 5672 */    MCD::OPC_Decode, 134, 3, 67, // Opcode: LDUHrr
/* 5676 */    MCD::OPC_FilterValue, 1, 204, 4, // Skip to: 6908
/* 5680 */    MCD::OPC_Decode, 133, 3, 67, // Opcode: LDUHri
/* 5684 */    MCD::OPC_FilterValue, 3, 25, 0, // Skip to: 5713
/* 5688 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 5691 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 5705
/* 5695 */    MCD::OPC_CheckField, 5, 8, 0, 183, 4, // Skip to: 6908
/* 5701 */    MCD::OPC_Decode, 237, 2, 68, // Opcode: LDDrr
/* 5705 */    MCD::OPC_FilterValue, 1, 175, 4, // Skip to: 6908
/* 5709 */    MCD::OPC_Decode, 236, 2, 68, // Opcode: LDDri
/* 5713 */    MCD::OPC_FilterValue, 4, 25, 0, // Skip to: 5742
/* 5717 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 5720 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 5734
/* 5724 */    MCD::OPC_CheckField, 5, 8, 0, 154, 4, // Skip to: 6908
/* 5730 */    MCD::OPC_Decode, 146, 4, 69, // Opcode: STrr
/* 5734 */    MCD::OPC_FilterValue, 1, 146, 4, // Skip to: 6908
/* 5738 */    MCD::OPC_Decode, 145, 4, 69, // Opcode: STri
/* 5742 */    MCD::OPC_FilterValue, 5, 25, 0, // Skip to: 5771
/* 5746 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 5749 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 5763
/* 5753 */    MCD::OPC_CheckField, 5, 8, 0, 125, 4, // Skip to: 6908
/* 5759 */    MCD::OPC_Decode, 241, 3, 69, // Opcode: STBrr
/* 5763 */    MCD::OPC_FilterValue, 1, 117, 4, // Skip to: 6908
/* 5767 */    MCD::OPC_Decode, 240, 3, 69, // Opcode: STBri
/* 5771 */    MCD::OPC_FilterValue, 6, 25, 0, // Skip to: 5800
/* 5775 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 5778 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 5792
/* 5782 */    MCD::OPC_CheckField, 5, 8, 0, 96, 4, // Skip to: 6908
/* 5788 */    MCD::OPC_Decode, 137, 4, 69, // Opcode: STHrr
/* 5792 */    MCD::OPC_FilterValue, 1, 88, 4, // Skip to: 6908
/* 5796 */    MCD::OPC_Decode, 136, 4, 69, // Opcode: STHri
/* 5800 */    MCD::OPC_FilterValue, 7, 25, 0, // Skip to: 5829
/* 5804 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 5807 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 5821
/* 5811 */    MCD::OPC_CheckField, 5, 8, 0, 67, 4, // Skip to: 6908
/* 5817 */    MCD::OPC_Decode, 129, 4, 70, // Opcode: STDrr
/* 5821 */    MCD::OPC_FilterValue, 1, 59, 4, // Skip to: 6908
/* 5825 */    MCD::OPC_Decode, 128, 4, 70, // Opcode: STDri
/* 5829 */    MCD::OPC_FilterValue, 8, 25, 0, // Skip to: 5858
/* 5833 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 5836 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 5850
/* 5840 */    MCD::OPC_CheckField, 5, 8, 0, 38, 4, // Skip to: 6908
/* 5846 */    MCD::OPC_Decode, 128, 3, 67, // Opcode: LDSWrr
/* 5850 */    MCD::OPC_FilterValue, 1, 30, 4, // Skip to: 6908
/* 5854 */    MCD::OPC_Decode, 255, 2, 67, // Opcode: LDSWri
/* 5858 */    MCD::OPC_FilterValue, 9, 25, 0, // Skip to: 5887
/* 5862 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 5865 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 5879
/* 5869 */    MCD::OPC_CheckField, 5, 8, 0, 9, 4, // Skip to: 6908
/* 5875 */    MCD::OPC_Decode, 248, 2, 67, // Opcode: LDSBrr
/* 5879 */    MCD::OPC_FilterValue, 1, 1, 4, // Skip to: 6908
/* 5883 */    MCD::OPC_Decode, 247, 2, 67, // Opcode: LDSBri
/* 5887 */    MCD::OPC_FilterValue, 10, 25, 0, // Skip to: 5916
/* 5891 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 5894 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 5908
/* 5898 */    MCD::OPC_CheckField, 5, 8, 0, 236, 3, // Skip to: 6908
/* 5904 */    MCD::OPC_Decode, 251, 2, 67, // Opcode: LDSHrr
/* 5908 */    MCD::OPC_FilterValue, 1, 228, 3, // Skip to: 6908
/* 5912 */    MCD::OPC_Decode, 250, 2, 67, // Opcode: LDSHri
/* 5916 */    MCD::OPC_FilterValue, 11, 25, 0, // Skip to: 5945
/* 5920 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 5923 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 5937
/* 5927 */    MCD::OPC_CheckField, 5, 8, 0, 207, 3, // Skip to: 6908
/* 5933 */    MCD::OPC_Decode, 138, 3, 67, // Opcode: LDXrr
/* 5937 */    MCD::OPC_FilterValue, 1, 199, 3, // Skip to: 6908
/* 5941 */    MCD::OPC_Decode, 137, 3, 67, // Opcode: LDXri
/* 5945 */    MCD::OPC_FilterValue, 13, 25, 0, // Skip to: 5974
/* 5949 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 5952 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 5966
/* 5956 */    MCD::OPC_CheckField, 5, 8, 0, 178, 3, // Skip to: 6908
/* 5962 */    MCD::OPC_Decode, 254, 2, 4, // Opcode: LDSTUBrr
/* 5966 */    MCD::OPC_FilterValue, 1, 170, 3, // Skip to: 6908
/* 5970 */    MCD::OPC_Decode, 253, 2, 4, // Opcode: LDSTUBri
/* 5974 */    MCD::OPC_FilterValue, 14, 25, 0, // Skip to: 6003
/* 5978 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 5981 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 5995
/* 5985 */    MCD::OPC_CheckField, 5, 8, 0, 149, 3, // Skip to: 6908
/* 5991 */    MCD::OPC_Decode, 144, 4, 69, // Opcode: STXrr
/* 5995 */    MCD::OPC_FilterValue, 1, 141, 3, // Skip to: 6908
/* 5999 */    MCD::OPC_Decode, 143, 4, 69, // Opcode: STXri
/* 6003 */    MCD::OPC_FilterValue, 15, 25, 0, // Skip to: 6032
/* 6007 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 6010 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 6024
/* 6014 */    MCD::OPC_CheckField, 5, 8, 0, 120, 3, // Skip to: 6908
/* 6020 */    MCD::OPC_Decode, 159, 4, 71, // Opcode: SWAPrr
/* 6024 */    MCD::OPC_FilterValue, 1, 112, 3, // Skip to: 6908
/* 6028 */    MCD::OPC_Decode, 158, 4, 71, // Opcode: SWAPri
/* 6032 */    MCD::OPC_FilterValue, 16, 10, 0, // Skip to: 6046
/* 6036 */    MCD::OPC_CheckField, 13, 1, 0, 98, 3, // Skip to: 6908
/* 6042 */    MCD::OPC_Decode, 225, 2, 67, // Opcode: LDArr
/* 6046 */    MCD::OPC_FilterValue, 17, 10, 0, // Skip to: 6060
/* 6050 */    MCD::OPC_CheckField, 13, 1, 0, 84, 3, // Skip to: 6908
/* 6056 */    MCD::OPC_Decode, 129, 3, 67, // Opcode: LDUBArr
/* 6060 */    MCD::OPC_FilterValue, 18, 10, 0, // Skip to: 6074
/* 6064 */    MCD::OPC_CheckField, 13, 1, 0, 70, 3, // Skip to: 6908
/* 6070 */    MCD::OPC_Decode, 132, 3, 67, // Opcode: LDUHArr
/* 6074 */    MCD::OPC_FilterValue, 19, 10, 0, // Skip to: 6088
/* 6078 */    MCD::OPC_CheckField, 13, 1, 0, 56, 3, // Skip to: 6908
/* 6084 */    MCD::OPC_Decode, 230, 2, 68, // Opcode: LDDArr
/* 6088 */    MCD::OPC_FilterValue, 20, 10, 0, // Skip to: 6102
/* 6092 */    MCD::OPC_CheckField, 13, 1, 0, 42, 3, // Skip to: 6908
/* 6098 */    MCD::OPC_Decode, 237, 3, 69, // Opcode: STArr
/* 6102 */    MCD::OPC_FilterValue, 21, 10, 0, // Skip to: 6116
/* 6106 */    MCD::OPC_CheckField, 13, 1, 0, 28, 3, // Skip to: 6908
/* 6112 */    MCD::OPC_Decode, 239, 3, 69, // Opcode: STBArr
/* 6116 */    MCD::OPC_FilterValue, 22, 10, 0, // Skip to: 6130
/* 6120 */    MCD::OPC_CheckField, 13, 1, 0, 14, 3, // Skip to: 6908
/* 6126 */    MCD::OPC_Decode, 135, 4, 69, // Opcode: STHArr
/* 6130 */    MCD::OPC_FilterValue, 23, 10, 0, // Skip to: 6144
/* 6134 */    MCD::OPC_CheckField, 13, 1, 0, 0, 3, // Skip to: 6908
/* 6140 */    MCD::OPC_Decode, 246, 3, 70, // Opcode: STDArr
/* 6144 */    MCD::OPC_FilterValue, 25, 10, 0, // Skip to: 6158
/* 6148 */    MCD::OPC_CheckField, 13, 1, 0, 242, 2, // Skip to: 6908
/* 6154 */    MCD::OPC_Decode, 246, 2, 67, // Opcode: LDSBArr
/* 6158 */    MCD::OPC_FilterValue, 26, 10, 0, // Skip to: 6172
/* 6162 */    MCD::OPC_CheckField, 13, 1, 0, 228, 2, // Skip to: 6908
/* 6168 */    MCD::OPC_Decode, 249, 2, 67, // Opcode: LDSHArr
/* 6172 */    MCD::OPC_FilterValue, 29, 10, 0, // Skip to: 6186
/* 6176 */    MCD::OPC_CheckField, 13, 1, 0, 214, 2, // Skip to: 6908
/* 6182 */    MCD::OPC_Decode, 252, 2, 72, // Opcode: LDSTUBArr
/* 6186 */    MCD::OPC_FilterValue, 31, 10, 0, // Skip to: 6200
/* 6190 */    MCD::OPC_CheckField, 13, 1, 0, 200, 2, // Skip to: 6908
/* 6196 */    MCD::OPC_Decode, 157, 4, 71, // Opcode: SWAPArr
/* 6200 */    MCD::OPC_FilterValue, 32, 25, 0, // Skip to: 6229
/* 6204 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 6207 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 6221
/* 6211 */    MCD::OPC_CheckField, 5, 8, 0, 179, 2, // Skip to: 6908
/* 6217 */    MCD::OPC_Decode, 242, 2, 73, // Opcode: LDFrr
/* 6221 */    MCD::OPC_FilterValue, 1, 171, 2, // Skip to: 6908
/* 6225 */    MCD::OPC_Decode, 241, 2, 73, // Opcode: LDFri
/* 6229 */    MCD::OPC_FilterValue, 33, 69, 0, // Skip to: 6302
/* 6233 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 6236 */    MCD::OPC_FilterValue, 0, 35, 0, // Skip to: 6275
/* 6240 */    MCD::OPC_ExtractField, 25, 5,  // Inst{29-25} ...
/* 6243 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 6257
/* 6247 */    MCD::OPC_CheckField, 5, 8, 0, 143, 2, // Skip to: 6908
/* 6253 */    MCD::OPC_Decode, 240, 2, 73, // Opcode: LDFSRrr
/* 6257 */    MCD::OPC_FilterValue, 1, 135, 2, // Skip to: 6908
/* 6261 */    MCD::OPC_CheckPredicate, 0, 131, 2, // Skip to: 6908
/* 6265 */    MCD::OPC_CheckField, 5, 8, 0, 125, 2, // Skip to: 6908
/* 6271 */    MCD::OPC_Decode, 136, 3, 73, // Opcode: LDXFSRrr
/* 6275 */    MCD::OPC_FilterValue, 1, 117, 2, // Skip to: 6908
/* 6279 */    MCD::OPC_ExtractField, 25, 5,  // Inst{29-25} ...
/* 6282 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 6290
/* 6286 */    MCD::OPC_Decode, 239, 2, 73, // Opcode: LDFSRri
/* 6290 */    MCD::OPC_FilterValue, 1, 102, 2, // Skip to: 6908
/* 6294 */    MCD::OPC_CheckPredicate, 0, 98, 2, // Skip to: 6908
/* 6298 */    MCD::OPC_Decode, 135, 3, 73, // Opcode: LDXFSRri
/* 6302 */    MCD::OPC_FilterValue, 34, 33, 0, // Skip to: 6339
/* 6306 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 6309 */    MCD::OPC_FilterValue, 0, 14, 0, // Skip to: 6327
/* 6313 */    MCD::OPC_CheckPredicate, 0, 79, 2, // Skip to: 6908
/* 6317 */    MCD::OPC_CheckField, 5, 8, 0, 73, 2, // Skip to: 6908
/* 6323 */    MCD::OPC_Decode, 245, 2, 74, // Opcode: LDQFrr
/* 6327 */    MCD::OPC_FilterValue, 1, 65, 2, // Skip to: 6908
/* 6331 */    MCD::OPC_CheckPredicate, 0, 61, 2, // Skip to: 6908
/* 6335 */    MCD::OPC_Decode, 244, 2, 74, // Opcode: LDQFri
/* 6339 */    MCD::OPC_FilterValue, 35, 25, 0, // Skip to: 6368
/* 6343 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 6346 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 6360
/* 6350 */    MCD::OPC_CheckField, 5, 8, 0, 40, 2, // Skip to: 6908
/* 6356 */    MCD::OPC_Decode, 235, 2, 75, // Opcode: LDDFrr
/* 6360 */    MCD::OPC_FilterValue, 1, 32, 2, // Skip to: 6908
/* 6364 */    MCD::OPC_Decode, 234, 2, 75, // Opcode: LDDFri
/* 6368 */    MCD::OPC_FilterValue, 36, 25, 0, // Skip to: 6397
/* 6372 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 6375 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 6389
/* 6379 */    MCD::OPC_CheckField, 5, 8, 0, 11, 2, // Skip to: 6908
/* 6385 */    MCD::OPC_Decode, 134, 4, 76, // Opcode: STFrr
/* 6389 */    MCD::OPC_FilterValue, 1, 3, 2, // Skip to: 6908
/* 6393 */    MCD::OPC_Decode, 133, 4, 76, // Opcode: STFri
/* 6397 */    MCD::OPC_FilterValue, 37, 69, 0, // Skip to: 6470
/* 6401 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 6404 */    MCD::OPC_FilterValue, 0, 35, 0, // Skip to: 6443
/* 6408 */    MCD::OPC_ExtractField, 25, 5,  // Inst{29-25} ...
/* 6411 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 6425
/* 6415 */    MCD::OPC_CheckField, 5, 8, 0, 231, 1, // Skip to: 6908
/* 6421 */    MCD::OPC_Decode, 132, 4, 76, // Opcode: STFSRrr
/* 6425 */    MCD::OPC_FilterValue, 1, 223, 1, // Skip to: 6908
/* 6429 */    MCD::OPC_CheckPredicate, 0, 219, 1, // Skip to: 6908
/* 6433 */    MCD::OPC_CheckField, 5, 8, 0, 213, 1, // Skip to: 6908
/* 6439 */    MCD::OPC_Decode, 142, 4, 76, // Opcode: STXFSRrr
/* 6443 */    MCD::OPC_FilterValue, 1, 205, 1, // Skip to: 6908
/* 6447 */    MCD::OPC_ExtractField, 25, 5,  // Inst{29-25} ...
/* 6450 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 6458
/* 6454 */    MCD::OPC_Decode, 131, 4, 76, // Opcode: STFSRri
/* 6458 */    MCD::OPC_FilterValue, 1, 190, 1, // Skip to: 6908
/* 6462 */    MCD::OPC_CheckPredicate, 0, 186, 1, // Skip to: 6908
/* 6466 */    MCD::OPC_Decode, 141, 4, 76, // Opcode: STXFSRri
/* 6470 */    MCD::OPC_FilterValue, 38, 54, 0, // Skip to: 6528
/* 6474 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 6477 */    MCD::OPC_FilterValue, 0, 25, 0, // Skip to: 6506
/* 6481 */    MCD::OPC_ExtractField, 5, 8,  // Inst{12-5} ...
/* 6484 */    MCD::OPC_FilterValue, 0, 164, 1, // Skip to: 6908
/* 6488 */    MCD::OPC_CheckField, 25, 5, 0, 4, 0, // Skip to: 6498
/* 6494 */    MCD::OPC_Decode, 253, 3, 76, // Opcode: STDFQrr
/* 6498 */    MCD::OPC_CheckPredicate, 0, 150, 1, // Skip to: 6908
/* 6502 */    MCD::OPC_Decode, 140, 4, 77, // Opcode: STQFrr
/* 6506 */    MCD::OPC_FilterValue, 1, 142, 1, // Skip to: 6908
/* 6510 */    MCD::OPC_CheckField, 25, 5, 0, 4, 0, // Skip to: 6520
/* 6516 */    MCD::OPC_Decode, 252, 3, 76, // Opcode: STDFQri
/* 6520 */    MCD::OPC_CheckPredicate, 0, 128, 1, // Skip to: 6908
/* 6524 */    MCD::OPC_Decode, 139, 4, 77, // Opcode: STQFri
/* 6528 */    MCD::OPC_FilterValue, 39, 25, 0, // Skip to: 6557
/* 6532 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 6535 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 6549
/* 6539 */    MCD::OPC_CheckField, 5, 8, 0, 107, 1, // Skip to: 6908
/* 6545 */    MCD::OPC_Decode, 255, 3, 78, // Opcode: STDFrr
/* 6549 */    MCD::OPC_FilterValue, 1, 99, 1, // Skip to: 6908
/* 6553 */    MCD::OPC_Decode, 254, 3, 78, // Opcode: STDFri
/* 6557 */    MCD::OPC_FilterValue, 48, 33, 0, // Skip to: 6594
/* 6561 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 6564 */    MCD::OPC_FilterValue, 0, 18, 0, // Skip to: 6586
/* 6568 */    MCD::OPC_CheckField, 5, 8, 0, 4, 0, // Skip to: 6578
/* 6574 */    MCD::OPC_Decode, 229, 2, 79, // Opcode: LDCrr
/* 6578 */    MCD::OPC_CheckPredicate, 0, 70, 1, // Skip to: 6908
/* 6582 */    MCD::OPC_Decode, 238, 2, 73, // Opcode: LDFArr
/* 6586 */    MCD::OPC_FilterValue, 1, 62, 1, // Skip to: 6908
/* 6590 */    MCD::OPC_Decode, 228, 2, 79, // Opcode: LDCri
/* 6594 */    MCD::OPC_FilterValue, 49, 37, 0, // Skip to: 6635
/* 6598 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 6601 */    MCD::OPC_FilterValue, 0, 16, 0, // Skip to: 6621
/* 6605 */    MCD::OPC_CheckField, 25, 5, 0, 41, 1, // Skip to: 6908
/* 6611 */    MCD::OPC_CheckField, 5, 8, 0, 35, 1, // Skip to: 6908
/* 6617 */    MCD::OPC_Decode, 227, 2, 79, // Opcode: LDCSRrr
/* 6621 */    MCD::OPC_FilterValue, 1, 27, 1, // Skip to: 6908
/* 6625 */    MCD::OPC_CheckField, 25, 5, 0, 21, 1, // Skip to: 6908
/* 6631 */    MCD::OPC_Decode, 226, 2, 79, // Opcode: LDCSRri
/* 6635 */    MCD::OPC_FilterValue, 50, 14, 0, // Skip to: 6653
/* 6639 */    MCD::OPC_CheckPredicate, 0, 9, 1, // Skip to: 6908
/* 6643 */    MCD::OPC_CheckField, 13, 1, 0, 3, 1, // Skip to: 6908
/* 6649 */    MCD::OPC_Decode, 243, 2, 74, // Opcode: LDQFArr
/* 6653 */    MCD::OPC_FilterValue, 51, 33, 0, // Skip to: 6690
/* 6657 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 6660 */    MCD::OPC_FilterValue, 0, 18, 0, // Skip to: 6682
/* 6664 */    MCD::OPC_CheckField, 5, 8, 0, 4, 0, // Skip to: 6674
/* 6670 */    MCD::OPC_Decode, 232, 2, 80, // Opcode: LDDCrr
/* 6674 */    MCD::OPC_CheckPredicate, 0, 230, 0, // Skip to: 6908
/* 6678 */    MCD::OPC_Decode, 233, 2, 75, // Opcode: LDDFArr
/* 6682 */    MCD::OPC_FilterValue, 1, 222, 0, // Skip to: 6908
/* 6686 */    MCD::OPC_Decode, 231, 2, 80, // Opcode: LDDCri
/* 6690 */    MCD::OPC_FilterValue, 52, 33, 0, // Skip to: 6727
/* 6694 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 6697 */    MCD::OPC_FilterValue, 0, 18, 0, // Skip to: 6719
/* 6701 */    MCD::OPC_CheckField, 5, 8, 0, 4, 0, // Skip to: 6711
/* 6707 */    MCD::OPC_Decode, 245, 3, 81, // Opcode: STCrr
/* 6711 */    MCD::OPC_CheckPredicate, 0, 193, 0, // Skip to: 6908
/* 6715 */    MCD::OPC_Decode, 130, 4, 76, // Opcode: STFArr
/* 6719 */    MCD::OPC_FilterValue, 1, 185, 0, // Skip to: 6908
/* 6723 */    MCD::OPC_Decode, 244, 3, 81, // Opcode: STCri
/* 6727 */    MCD::OPC_FilterValue, 53, 37, 0, // Skip to: 6768
/* 6731 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 6734 */    MCD::OPC_FilterValue, 0, 16, 0, // Skip to: 6754
/* 6738 */    MCD::OPC_CheckField, 25, 5, 0, 164, 0, // Skip to: 6908
/* 6744 */    MCD::OPC_CheckField, 5, 8, 0, 158, 0, // Skip to: 6908
/* 6750 */    MCD::OPC_Decode, 243, 3, 81, // Opcode: STCSRrr
/* 6754 */    MCD::OPC_FilterValue, 1, 150, 0, // Skip to: 6908
/* 6758 */    MCD::OPC_CheckField, 25, 5, 0, 144, 0, // Skip to: 6908
/* 6764 */    MCD::OPC_Decode, 242, 3, 81, // Opcode: STCSRri
/* 6768 */    MCD::OPC_FilterValue, 54, 45, 0, // Skip to: 6817
/* 6772 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 6775 */    MCD::OPC_FilterValue, 0, 24, 0, // Skip to: 6803
/* 6779 */    MCD::OPC_CheckField, 25, 5, 0, 10, 0, // Skip to: 6795
/* 6785 */    MCD::OPC_CheckField, 5, 8, 0, 4, 0, // Skip to: 6795
/* 6791 */    MCD::OPC_Decode, 248, 3, 81, // Opcode: STDCQrr
/* 6795 */    MCD::OPC_CheckPredicate, 0, 109, 0, // Skip to: 6908
/* 6799 */    MCD::OPC_Decode, 138, 4, 77, // Opcode: STQFArr
/* 6803 */    MCD::OPC_FilterValue, 1, 101, 0, // Skip to: 6908
/* 6807 */    MCD::OPC_CheckField, 25, 5, 0, 95, 0, // Skip to: 6908
/* 6813 */    MCD::OPC_Decode, 247, 3, 81, // Opcode: STDCQri
/* 6817 */    MCD::OPC_FilterValue, 55, 33, 0, // Skip to: 6854
/* 6821 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 6824 */    MCD::OPC_FilterValue, 0, 18, 0, // Skip to: 6846
/* 6828 */    MCD::OPC_CheckField, 5, 8, 0, 4, 0, // Skip to: 6838
/* 6834 */    MCD::OPC_Decode, 250, 3, 82, // Opcode: STDCrr
/* 6838 */    MCD::OPC_CheckPredicate, 0, 66, 0, // Skip to: 6908
/* 6842 */    MCD::OPC_Decode, 251, 3, 78, // Opcode: STDFArr
/* 6846 */    MCD::OPC_FilterValue, 1, 58, 0, // Skip to: 6908
/* 6850 */    MCD::OPC_Decode, 249, 3, 82, // Opcode: STDCri
/* 6854 */    MCD::OPC_FilterValue, 60, 35, 0, // Skip to: 6893
/* 6858 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 6861 */    MCD::OPC_FilterValue, 0, 43, 0, // Skip to: 6908
/* 6865 */    MCD::OPC_ExtractField, 5, 8,  // Inst{12-5} ...
/* 6868 */    MCD::OPC_FilterValue, 10, 4, 0, // Skip to: 6876
/* 6872 */    MCD::OPC_Decode, 158, 1, 83, // Opcode: CASAasi10
/* 6876 */    MCD::OPC_FilterValue, 128, 1, 8, 0, // Skip to: 6889
/* 6881 */    MCD::OPC_CheckPredicate, 0, 4, 0, // Skip to: 6889
/* 6885 */    MCD::OPC_Decode, 161, 1, 83, // Opcode: CASrr
/* 6889 */    MCD::OPC_Decode, 159, 1, 84, // Opcode: CASArr
/* 6893 */    MCD::OPC_FilterValue, 62, 11, 0, // Skip to: 6908
/* 6897 */    MCD::OPC_CheckField, 5, 9, 128, 1, 4, 0, // Skip to: 6908
/* 6904 */    MCD::OPC_Decode, 160, 1, 85, // Opcode: CASXrr
/* 6908 */    MCD::OPC_Fail,
  0
};

static const uint8_t DecoderTableSparcV832[] = {
/* 0 */       MCD::OPC_ExtractField, 8, 6,  // Inst{13-8} ...
/* 3 */       MCD::OPC_FilterValue, 0, 22, 0, // Skip to: 29
/* 7 */       MCD::OPC_CheckField, 29, 3, 4, 36, 0, // Skip to: 49
/* 13 */      MCD::OPC_CheckField, 19, 6, 58, 30, 0, // Skip to: 49
/* 19 */      MCD::OPC_CheckField, 5, 3, 0, 24, 0, // Skip to: 49
/* 25 */      MCD::OPC_Decode, 174, 4, 86, // Opcode: TRAPrr
/* 29 */      MCD::OPC_FilterValue, 32, 16, 0, // Skip to: 49
/* 33 */      MCD::OPC_CheckField, 29, 3, 4, 10, 0, // Skip to: 49
/* 39 */      MCD::OPC_CheckField, 19, 6, 58, 4, 0, // Skip to: 49
/* 45 */      MCD::OPC_Decode, 173, 4, 86, // Opcode: TRAPri
/* 49 */      MCD::OPC_Fail,
  0
};

static const uint8_t DecoderTableSparcV932[] = {
/* 0 */       MCD::OPC_ExtractField, 8, 6,  // Inst{13-8} ...
/* 3 */       MCD::OPC_FilterValue, 0, 26, 0, // Skip to: 33
/* 7 */       MCD::OPC_CheckPredicate, 0, 46, 0, // Skip to: 57
/* 11 */      MCD::OPC_CheckField, 29, 3, 4, 40, 0, // Skip to: 57
/* 17 */      MCD::OPC_CheckField, 19, 6, 58, 34, 0, // Skip to: 57
/* 23 */      MCD::OPC_CheckField, 5, 3, 0, 28, 0, // Skip to: 57
/* 29 */      MCD::OPC_Decode, 167, 4, 86, // Opcode: TICCrr
/* 33 */      MCD::OPC_FilterValue, 32, 20, 0, // Skip to: 57
/* 37 */      MCD::OPC_CheckPredicate, 0, 16, 0, // Skip to: 57
/* 41 */      MCD::OPC_CheckField, 29, 3, 4, 10, 0, // Skip to: 57
/* 47 */      MCD::OPC_CheckField, 19, 6, 58, 4, 0, // Skip to: 57
/* 53 */      MCD::OPC_Decode, 166, 4, 86, // Opcode: TICCri
/* 57 */      MCD::OPC_Fail,
  0
};

static bool checkDecoderPredicate(unsigned Idx, const FeatureBitset& Bits) {
  switch (Idx) {
  default: llvm_unreachable("Invalid index!");
  case 0:
    return (Bits[Sparc::FeatureV9]);
  case 1:
    return (Bits[Sparc::FeatureVIS3]);
  case 2:
    return (Bits[Sparc::FeatureVIS]);
  case 3:
    return (Bits[Sparc::FeatureVIS2]);
  }
}

template<typename InsnType>
static DecodeStatus decodeToMCInst(DecodeStatus S, unsigned Idx, InsnType insn, MCInst &MI,
                                   uint64_t Address, const void *Decoder, bool &DecodeComplete) {
  DecodeComplete = true;
  InsnType tmp;
  switch (Idx) {
  default: llvm_unreachable("Invalid index!");
  case 0:
    tmp = fieldFromInstruction(insn, 0, 22);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 1:
    tmp = fieldFromInstruction(insn, 0, 19);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 25, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 2:
    tmp = fieldFromInstruction(insn, 0, 22);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 25, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 3:
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 14) << 0;
    tmp |= fieldFromInstruction(insn, 20, 2) << 14;
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 4:
    return S;
  case 5:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 22);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 6:
    tmp = fieldFromInstruction(insn, 0, 19);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 25, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 20, 2);
    if (DecodeFCCRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 7:
    tmp = fieldFromInstruction(insn, 0, 30);
    if (DecodeCall(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 8:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 9:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 13);
    if (DecodeSIMM13(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 10:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 11:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 13);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 12:
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 13:
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 13);
    if (DecodeSIMM13(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 14:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 15:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 6);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 16:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeASRRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 17:
    tmp = fieldFromInstruction(insn, 0, 13);
    if (DecodeSIMM13(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 18:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 19:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodePRRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 20:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 21:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 2);
    if (DecodeFCCRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 22:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 11);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 23:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 2);
    if (DecodeFCCRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 11);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 24:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 25:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 10);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 26:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeASRRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 27:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeASRRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 13);
    if (DecodeSIMM13(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 28:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodePRRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 29:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodePRRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 13);
    if (DecodeSIMM13(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 30:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 31:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 32:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeQFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeQFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 33:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 34:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 35:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeQFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeQFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeQFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 36:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 37:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeQFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 38:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 39:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeQFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 40:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 41:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeQFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 42:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeQFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 43:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeQFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 44:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 45:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 2);
    if (DecodeFCCRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 46:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 47:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 2);
    if (DecodeFCCRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 48:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeQFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeQFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeQFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 49:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeQFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 2);
    if (DecodeFCCRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeQFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeQFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 50:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 51:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeFCCRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 52:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeFCCRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 53:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeFCCRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeQFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeQFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 54:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 55:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 56:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 57:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 58:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 59:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 60:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 61:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 62:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 63:
    if (DecodeJMPL(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 64:
    if (DecodeReturn(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 65:
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 25, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 66:
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 8);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 25, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 67:
    if (DecodeLoadInt(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 68:
    if (DecodeLoadIntPair(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 69:
    if (DecodeStoreInt(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 70:
    if (DecodeStoreIntPair(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 71:
    if (DecodeSWAP(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 72:
    tmp = fieldFromInstruction(insn, 5, 8);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 73:
    if (DecodeLoadFP(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 74:
    if (DecodeLoadQFP(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 75:
    if (DecodeLoadDFP(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 76:
    if (DecodeStoreFP(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 77:
    if (DecodeStoreQFP(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 78:
    if (DecodeStoreDFP(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 79:
    if (DecodeLoadCP(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 80:
    if (DecodeLoadCPPair(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 81:
    if (DecodeStoreCP(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 82:
    if (DecodeStoreCPPair(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 83:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 84:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 5, 8);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 85:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 86:
    if (DecodeTRAP(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
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
