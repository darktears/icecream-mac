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
/* 3 */       MCD::OPC_FilterValue, 0, 74, 2, // Skip to: 593
/* 7 */       MCD::OPC_ExtractField, 22, 3,  // Inst{24-22} ...
/* 10 */      MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 24
/* 14 */      MCD::OPC_CheckField, 25, 5, 0, 245, 26, // Skip to: 6921
/* 20 */      MCD::OPC_Decode, 209, 4, 0, // Opcode: UNIMP
/* 24 */      MCD::OPC_FilterValue, 1, 111, 0, // Skip to: 139
/* 28 */      MCD::OPC_ExtractField, 19, 3,  // Inst{21-19} ...
/* 31 */      MCD::OPC_FilterValue, 0, 27, 0, // Skip to: 62
/* 35 */      MCD::OPC_ExtractField, 29, 1,  // Inst{29} ...
/* 38 */      MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 50
/* 42 */      MCD::OPC_CheckPredicate, 0, 219, 26, // Skip to: 6921
/* 46 */      MCD::OPC_Decode, 148, 1, 1, // Opcode: BPICCNT
/* 50 */      MCD::OPC_FilterValue, 1, 211, 26, // Skip to: 6921
/* 54 */      MCD::OPC_CheckPredicate, 0, 207, 26, // Skip to: 6921
/* 58 */      MCD::OPC_Decode, 147, 1, 1, // Opcode: BPICCANT
/* 62 */      MCD::OPC_FilterValue, 1, 27, 0, // Skip to: 93
/* 66 */      MCD::OPC_ExtractField, 29, 1,  // Inst{29} ...
/* 69 */      MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 81
/* 73 */      MCD::OPC_CheckPredicate, 0, 188, 26, // Skip to: 6921
/* 77 */      MCD::OPC_Decode, 145, 1, 1, // Opcode: BPICC
/* 81 */      MCD::OPC_FilterValue, 1, 180, 26, // Skip to: 6921
/* 85 */      MCD::OPC_CheckPredicate, 0, 176, 26, // Skip to: 6921
/* 89 */      MCD::OPC_Decode, 146, 1, 1, // Opcode: BPICCA
/* 93 */      MCD::OPC_FilterValue, 4, 19, 0, // Skip to: 116
/* 97 */      MCD::OPC_ExtractField, 29, 1,  // Inst{29} ...
/* 100 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 108
/* 104 */     MCD::OPC_Decode, 164, 1, 1, // Opcode: BPXCCNT
/* 108 */     MCD::OPC_FilterValue, 1, 153, 26, // Skip to: 6921
/* 112 */     MCD::OPC_Decode, 163, 1, 1, // Opcode: BPXCCANT
/* 116 */     MCD::OPC_FilterValue, 5, 145, 26, // Skip to: 6921
/* 120 */     MCD::OPC_ExtractField, 29, 1,  // Inst{29} ...
/* 123 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 131
/* 127 */     MCD::OPC_Decode, 161, 1, 1, // Opcode: BPXCC
/* 131 */     MCD::OPC_FilterValue, 1, 130, 26, // Skip to: 6921
/* 135 */     MCD::OPC_Decode, 162, 1, 1, // Opcode: BPXCCA
/* 139 */     MCD::OPC_FilterValue, 2, 28, 0, // Skip to: 171
/* 143 */     MCD::OPC_ExtractField, 29, 1,  // Inst{29} ...
/* 146 */     MCD::OPC_FilterValue, 0, 13, 0, // Skip to: 163
/* 150 */     MCD::OPC_CheckField, 25, 4, 8, 3, 0, // Skip to: 159
/* 156 */     MCD::OPC_Decode, 127, 0, // Opcode: BA
/* 159 */     MCD::OPC_Decode, 128, 1, 2, // Opcode: BCOND
/* 163 */     MCD::OPC_FilterValue, 1, 98, 26, // Skip to: 6921
/* 167 */     MCD::OPC_Decode, 129, 1, 2, // Opcode: BCONDA
/* 171 */     MCD::OPC_FilterValue, 3, 23, 1, // Skip to: 454
/* 175 */     MCD::OPC_ExtractField, 25, 5,  // Inst{29-25} ...
/* 178 */     MCD::OPC_FilterValue, 1, 19, 0, // Skip to: 201
/* 182 */     MCD::OPC_ExtractField, 19, 1,  // Inst{19} ...
/* 185 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 193
/* 189 */     MCD::OPC_Decode, 167, 1, 3, // Opcode: BPZnapn
/* 193 */     MCD::OPC_FilterValue, 1, 68, 26, // Skip to: 6921
/* 197 */     MCD::OPC_Decode, 168, 1, 3, // Opcode: BPZnapt
/* 201 */     MCD::OPC_FilterValue, 2, 19, 0, // Skip to: 224
/* 205 */     MCD::OPC_ExtractField, 19, 1,  // Inst{19} ...
/* 208 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 216
/* 212 */     MCD::OPC_Decode, 151, 1, 3, // Opcode: BPLEZnapn
/* 216 */     MCD::OPC_FilterValue, 1, 45, 26, // Skip to: 6921
/* 220 */     MCD::OPC_Decode, 152, 1, 3, // Opcode: BPLEZnapt
/* 224 */     MCD::OPC_FilterValue, 3, 19, 0, // Skip to: 247
/* 228 */     MCD::OPC_ExtractField, 19, 1,  // Inst{19} ...
/* 231 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 239
/* 235 */     MCD::OPC_Decode, 155, 1, 3, // Opcode: BPLZnapn
/* 239 */     MCD::OPC_FilterValue, 1, 22, 26, // Skip to: 6921
/* 243 */     MCD::OPC_Decode, 156, 1, 3, // Opcode: BPLZnapt
/* 247 */     MCD::OPC_FilterValue, 5, 19, 0, // Skip to: 270
/* 251 */     MCD::OPC_ExtractField, 19, 1,  // Inst{19} ...
/* 254 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 262
/* 258 */     MCD::OPC_Decode, 159, 1, 3, // Opcode: BPNZnapn
/* 262 */     MCD::OPC_FilterValue, 1, 255, 25, // Skip to: 6921
/* 266 */     MCD::OPC_Decode, 160, 1, 3, // Opcode: BPNZnapt
/* 270 */     MCD::OPC_FilterValue, 6, 19, 0, // Skip to: 293
/* 274 */     MCD::OPC_ExtractField, 19, 1,  // Inst{19} ...
/* 277 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 285
/* 281 */     MCD::OPC_Decode, 143, 1, 3, // Opcode: BPGZnapn
/* 285 */     MCD::OPC_FilterValue, 1, 232, 25, // Skip to: 6921
/* 289 */     MCD::OPC_Decode, 144, 1, 3, // Opcode: BPGZnapt
/* 293 */     MCD::OPC_FilterValue, 7, 19, 0, // Skip to: 316
/* 297 */     MCD::OPC_ExtractField, 19, 1,  // Inst{19} ...
/* 300 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 308
/* 304 */     MCD::OPC_Decode, 139, 1, 3, // Opcode: BPGEZnapn
/* 308 */     MCD::OPC_FilterValue, 1, 209, 25, // Skip to: 6921
/* 312 */     MCD::OPC_Decode, 140, 1, 3, // Opcode: BPGEZnapt
/* 316 */     MCD::OPC_FilterValue, 17, 19, 0, // Skip to: 339
/* 320 */     MCD::OPC_ExtractField, 19, 1,  // Inst{19} ...
/* 323 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 331
/* 327 */     MCD::OPC_Decode, 165, 1, 3, // Opcode: BPZapn
/* 331 */     MCD::OPC_FilterValue, 1, 186, 25, // Skip to: 6921
/* 335 */     MCD::OPC_Decode, 166, 1, 3, // Opcode: BPZapt
/* 339 */     MCD::OPC_FilterValue, 18, 19, 0, // Skip to: 362
/* 343 */     MCD::OPC_ExtractField, 19, 1,  // Inst{19} ...
/* 346 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 354
/* 350 */     MCD::OPC_Decode, 149, 1, 3, // Opcode: BPLEZapn
/* 354 */     MCD::OPC_FilterValue, 1, 163, 25, // Skip to: 6921
/* 358 */     MCD::OPC_Decode, 150, 1, 3, // Opcode: BPLEZapt
/* 362 */     MCD::OPC_FilterValue, 19, 19, 0, // Skip to: 385
/* 366 */     MCD::OPC_ExtractField, 19, 1,  // Inst{19} ...
/* 369 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 377
/* 373 */     MCD::OPC_Decode, 153, 1, 3, // Opcode: BPLZapn
/* 377 */     MCD::OPC_FilterValue, 1, 140, 25, // Skip to: 6921
/* 381 */     MCD::OPC_Decode, 154, 1, 3, // Opcode: BPLZapt
/* 385 */     MCD::OPC_FilterValue, 21, 19, 0, // Skip to: 408
/* 389 */     MCD::OPC_ExtractField, 19, 1,  // Inst{19} ...
/* 392 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 400
/* 396 */     MCD::OPC_Decode, 157, 1, 3, // Opcode: BPNZapn
/* 400 */     MCD::OPC_FilterValue, 1, 117, 25, // Skip to: 6921
/* 404 */     MCD::OPC_Decode, 158, 1, 3, // Opcode: BPNZapt
/* 408 */     MCD::OPC_FilterValue, 22, 19, 0, // Skip to: 431
/* 412 */     MCD::OPC_ExtractField, 19, 1,  // Inst{19} ...
/* 415 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 423
/* 419 */     MCD::OPC_Decode, 141, 1, 3, // Opcode: BPGZapn
/* 423 */     MCD::OPC_FilterValue, 1, 94, 25, // Skip to: 6921
/* 427 */     MCD::OPC_Decode, 142, 1, 3, // Opcode: BPGZapt
/* 431 */     MCD::OPC_FilterValue, 23, 86, 25, // Skip to: 6921
/* 435 */     MCD::OPC_ExtractField, 19, 1,  // Inst{19} ...
/* 438 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 446
/* 442 */     MCD::OPC_Decode, 137, 1, 3, // Opcode: BPGEZapn
/* 446 */     MCD::OPC_FilterValue, 1, 71, 25, // Skip to: 6921
/* 450 */     MCD::OPC_Decode, 138, 1, 3, // Opcode: BPGEZapt
/* 454 */     MCD::OPC_FilterValue, 4, 20, 0, // Skip to: 478
/* 458 */     MCD::OPC_CheckField, 25, 5, 0, 10, 0, // Skip to: 474
/* 464 */     MCD::OPC_CheckField, 0, 22, 0, 4, 0, // Skip to: 474
/* 470 */     MCD::OPC_Decode, 187, 3, 4, // Opcode: NOP
/* 474 */     MCD::OPC_Decode, 231, 3, 5, // Opcode: SETHIi
/* 478 */     MCD::OPC_FilterValue, 5, 65, 0, // Skip to: 547
/* 482 */     MCD::OPC_ExtractField, 19, 1,  // Inst{19} ...
/* 485 */     MCD::OPC_FilterValue, 0, 27, 0, // Skip to: 516
/* 489 */     MCD::OPC_ExtractField, 29, 1,  // Inst{29} ...
/* 492 */     MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 504
/* 496 */     MCD::OPC_CheckPredicate, 0, 21, 25, // Skip to: 6921
/* 500 */     MCD::OPC_Decode, 136, 1, 6, // Opcode: BPFCCNT
/* 504 */     MCD::OPC_FilterValue, 1, 13, 25, // Skip to: 6921
/* 508 */     MCD::OPC_CheckPredicate, 0, 9, 25, // Skip to: 6921
/* 512 */     MCD::OPC_Decode, 135, 1, 6, // Opcode: BPFCCANT
/* 516 */     MCD::OPC_FilterValue, 1, 1, 25, // Skip to: 6921
/* 520 */     MCD::OPC_ExtractField, 29, 1,  // Inst{29} ...
/* 523 */     MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 535
/* 527 */     MCD::OPC_CheckPredicate, 0, 246, 24, // Skip to: 6921
/* 531 */     MCD::OPC_Decode, 133, 1, 6, // Opcode: BPFCC
/* 535 */     MCD::OPC_FilterValue, 1, 238, 24, // Skip to: 6921
/* 539 */     MCD::OPC_CheckPredicate, 0, 234, 24, // Skip to: 6921
/* 543 */     MCD::OPC_Decode, 134, 1, 6, // Opcode: BPFCCA
/* 547 */     MCD::OPC_FilterValue, 6, 19, 0, // Skip to: 570
/* 551 */     MCD::OPC_ExtractField, 29, 1,  // Inst{29} ...
/* 554 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 562
/* 558 */     MCD::OPC_Decode, 213, 1, 2, // Opcode: FBCOND
/* 562 */     MCD::OPC_FilterValue, 1, 211, 24, // Skip to: 6921
/* 566 */     MCD::OPC_Decode, 214, 1, 2, // Opcode: FBCONDA
/* 570 */     MCD::OPC_FilterValue, 7, 203, 24, // Skip to: 6921
/* 574 */     MCD::OPC_ExtractField, 29, 1,  // Inst{29} ...
/* 577 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 585
/* 581 */     MCD::OPC_Decode, 177, 1, 2, // Opcode: CBCOND
/* 585 */     MCD::OPC_FilterValue, 1, 188, 24, // Skip to: 6921
/* 589 */     MCD::OPC_Decode, 178, 1, 2, // Opcode: CBCONDA
/* 593 */     MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 601
/* 597 */     MCD::OPC_Decode, 170, 1, 7, // Opcode: CALL
/* 601 */     MCD::OPC_FilterValue, 2, 134, 19, // Skip to: 5603
/* 605 */     MCD::OPC_ExtractField, 19, 6,  // Inst{24-19} ...
/* 608 */     MCD::OPC_FilterValue, 0, 23, 0, // Skip to: 635
/* 612 */     MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 615 */     MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 628
/* 619 */     MCD::OPC_CheckField, 5, 8, 0, 152, 24, // Skip to: 6921
/* 625 */     MCD::OPC_Decode, 108, 8, // Opcode: ADDrr
/* 628 */     MCD::OPC_FilterValue, 1, 145, 24, // Skip to: 6921
/* 632 */     MCD::OPC_Decode, 107, 9, // Opcode: ADDri
/* 635 */     MCD::OPC_FilterValue, 1, 23, 0, // Skip to: 662
/* 639 */     MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 642 */     MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 655
/* 646 */     MCD::OPC_CheckField, 5, 8, 0, 125, 24, // Skip to: 6921
/* 652 */     MCD::OPC_Decode, 123, 8, // Opcode: ANDrr
/* 655 */     MCD::OPC_FilterValue, 1, 118, 24, // Skip to: 6921
/* 659 */     MCD::OPC_Decode, 122, 9, // Opcode: ANDri
/* 662 */     MCD::OPC_FilterValue, 2, 25, 0, // Skip to: 691
/* 666 */     MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 669 */     MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 683
/* 673 */     MCD::OPC_CheckField, 5, 8, 0, 98, 24, // Skip to: 6921
/* 679 */     MCD::OPC_Decode, 198, 3, 8, // Opcode: ORrr
/* 683 */     MCD::OPC_FilterValue, 1, 90, 24, // Skip to: 6921
/* 687 */     MCD::OPC_Decode, 197, 3, 9, // Opcode: ORri
/* 691 */     MCD::OPC_FilterValue, 3, 25, 0, // Skip to: 720
/* 695 */     MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 698 */     MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 712
/* 702 */     MCD::OPC_CheckField, 5, 8, 0, 69, 24, // Skip to: 6921
/* 708 */     MCD::OPC_Decode, 243, 4, 8, // Opcode: XORrr
/* 712 */     MCD::OPC_FilterValue, 1, 61, 24, // Skip to: 6921
/* 716 */     MCD::OPC_Decode, 242, 4, 9, // Opcode: XORri
/* 720 */     MCD::OPC_FilterValue, 4, 25, 0, // Skip to: 749
/* 724 */     MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 727 */     MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 741
/* 731 */     MCD::OPC_CheckField, 5, 8, 0, 40, 24, // Skip to: 6921
/* 737 */     MCD::OPC_Decode, 171, 4, 8, // Opcode: SUBrr
/* 741 */     MCD::OPC_FilterValue, 1, 32, 24, // Skip to: 6921
/* 745 */     MCD::OPC_Decode, 170, 4, 9, // Opcode: SUBri
/* 749 */     MCD::OPC_FilterValue, 5, 23, 0, // Skip to: 776
/* 753 */     MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 756 */     MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 769
/* 760 */     MCD::OPC_CheckField, 5, 8, 0, 11, 24, // Skip to: 6921
/* 766 */     MCD::OPC_Decode, 118, 8, // Opcode: ANDNrr
/* 769 */     MCD::OPC_FilterValue, 1, 4, 24, // Skip to: 6921
/* 773 */     MCD::OPC_Decode, 117, 9, // Opcode: ANDNri
/* 776 */     MCD::OPC_FilterValue, 6, 25, 0, // Skip to: 805
/* 780 */     MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 783 */     MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 797
/* 787 */     MCD::OPC_CheckField, 5, 8, 0, 240, 23, // Skip to: 6921
/* 793 */     MCD::OPC_Decode, 193, 3, 8, // Opcode: ORNrr
/* 797 */     MCD::OPC_FilterValue, 1, 232, 23, // Skip to: 6921
/* 801 */     MCD::OPC_Decode, 192, 3, 9, // Opcode: ORNri
/* 805 */     MCD::OPC_FilterValue, 7, 25, 0, // Skip to: 834
/* 809 */     MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 812 */     MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 826
/* 816 */     MCD::OPC_CheckField, 5, 8, 0, 211, 23, // Skip to: 6921
/* 822 */     MCD::OPC_Decode, 237, 4, 8, // Opcode: XNORrr
/* 826 */     MCD::OPC_FilterValue, 1, 203, 23, // Skip to: 6921
/* 830 */     MCD::OPC_Decode, 236, 4, 9, // Opcode: XNORri
/* 834 */     MCD::OPC_FilterValue, 8, 23, 0, // Skip to: 861
/* 838 */     MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 841 */     MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 854
/* 845 */     MCD::OPC_CheckField, 5, 8, 0, 182, 23, // Skip to: 6921
/* 851 */     MCD::OPC_Decode, 100, 8, // Opcode: ADDCrr
/* 854 */     MCD::OPC_FilterValue, 1, 175, 23, // Skip to: 6921
/* 858 */     MCD::OPC_Decode, 99, 9, // Opcode: ADDCri
/* 861 */     MCD::OPC_FilterValue, 9, 25, 0, // Skip to: 890
/* 865 */     MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 868 */     MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 882
/* 872 */     MCD::OPC_CheckField, 5, 8, 0, 155, 23, // Skip to: 6921
/* 878 */     MCD::OPC_Decode, 186, 3, 10, // Opcode: MULXrr
/* 882 */     MCD::OPC_FilterValue, 1, 147, 23, // Skip to: 6921
/* 886 */     MCD::OPC_Decode, 185, 3, 11, // Opcode: MULXri
/* 890 */     MCD::OPC_FilterValue, 10, 25, 0, // Skip to: 919
/* 894 */     MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 897 */     MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 911
/* 901 */     MCD::OPC_CheckField, 5, 8, 0, 126, 23, // Skip to: 6921
/* 907 */     MCD::OPC_Decode, 208, 4, 8, // Opcode: UMULrr
/* 911 */     MCD::OPC_FilterValue, 1, 118, 23, // Skip to: 6921
/* 915 */     MCD::OPC_Decode, 207, 4, 9, // Opcode: UMULri
/* 919 */     MCD::OPC_FilterValue, 11, 25, 0, // Skip to: 948
/* 923 */     MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 926 */     MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 940
/* 930 */     MCD::OPC_CheckField, 5, 8, 0, 97, 23, // Skip to: 6921
/* 936 */     MCD::OPC_Decode, 243, 3, 8, // Opcode: SMULrr
/* 940 */     MCD::OPC_FilterValue, 1, 89, 23, // Skip to: 6921
/* 944 */     MCD::OPC_Decode, 242, 3, 9, // Opcode: SMULri
/* 948 */     MCD::OPC_FilterValue, 12, 25, 0, // Skip to: 977
/* 952 */     MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 955 */     MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 969
/* 959 */     MCD::OPC_CheckField, 5, 8, 0, 68, 23, // Skip to: 6921
/* 965 */     MCD::OPC_Decode, 165, 4, 8, // Opcode: SUBCrr
/* 969 */     MCD::OPC_FilterValue, 1, 60, 23, // Skip to: 6921
/* 973 */     MCD::OPC_Decode, 164, 4, 9, // Opcode: SUBCri
/* 977 */     MCD::OPC_FilterValue, 13, 25, 0, // Skip to: 1006
/* 981 */     MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 984 */     MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 998
/* 988 */     MCD::OPC_CheckField, 5, 8, 0, 39, 23, // Skip to: 6921
/* 994 */     MCD::OPC_Decode, 199, 4, 10, // Opcode: UDIVXrr
/* 998 */     MCD::OPC_FilterValue, 1, 31, 23, // Skip to: 6921
/* 1002 */    MCD::OPC_Decode, 198, 4, 11, // Opcode: UDIVXri
/* 1006 */    MCD::OPC_FilterValue, 14, 25, 0, // Skip to: 1035
/* 1010 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1013 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 1027
/* 1017 */    MCD::OPC_CheckField, 5, 8, 0, 10, 23, // Skip to: 6921
/* 1023 */    MCD::OPC_Decode, 201, 4, 8, // Opcode: UDIVrr
/* 1027 */    MCD::OPC_FilterValue, 1, 2, 23, // Skip to: 6921
/* 1031 */    MCD::OPC_Decode, 200, 4, 9, // Opcode: UDIVri
/* 1035 */    MCD::OPC_FilterValue, 15, 25, 0, // Skip to: 1064
/* 1039 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1042 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 1056
/* 1046 */    MCD::OPC_CheckField, 5, 8, 0, 237, 22, // Skip to: 6921
/* 1052 */    MCD::OPC_Decode, 220, 3, 8, // Opcode: SDIVrr
/* 1056 */    MCD::OPC_FilterValue, 1, 229, 22, // Skip to: 6921
/* 1060 */    MCD::OPC_Decode, 219, 3, 9, // Opcode: SDIVri
/* 1064 */    MCD::OPC_FilterValue, 16, 23, 0, // Skip to: 1091
/* 1068 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1071 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 1084
/* 1075 */    MCD::OPC_CheckField, 5, 8, 0, 208, 22, // Skip to: 6921
/* 1081 */    MCD::OPC_Decode, 98, 8, // Opcode: ADDCCrr
/* 1084 */    MCD::OPC_FilterValue, 1, 201, 22, // Skip to: 6921
/* 1088 */    MCD::OPC_Decode, 97, 9, // Opcode: ADDCCri
/* 1091 */    MCD::OPC_FilterValue, 17, 23, 0, // Skip to: 1118
/* 1095 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1098 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 1111
/* 1102 */    MCD::OPC_CheckField, 5, 8, 0, 181, 22, // Skip to: 6921
/* 1108 */    MCD::OPC_Decode, 114, 8, // Opcode: ANDCCrr
/* 1111 */    MCD::OPC_FilterValue, 1, 174, 22, // Skip to: 6921
/* 1115 */    MCD::OPC_Decode, 113, 9, // Opcode: ANDCCri
/* 1118 */    MCD::OPC_FilterValue, 18, 25, 0, // Skip to: 1147
/* 1122 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1125 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 1139
/* 1129 */    MCD::OPC_CheckField, 5, 8, 0, 154, 22, // Skip to: 6921
/* 1135 */    MCD::OPC_Decode, 189, 3, 8, // Opcode: ORCCrr
/* 1139 */    MCD::OPC_FilterValue, 1, 146, 22, // Skip to: 6921
/* 1143 */    MCD::OPC_Decode, 188, 3, 9, // Opcode: ORCCri
/* 1147 */    MCD::OPC_FilterValue, 19, 25, 0, // Skip to: 1176
/* 1151 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1154 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 1168
/* 1158 */    MCD::OPC_CheckField, 5, 8, 0, 125, 22, // Skip to: 6921
/* 1164 */    MCD::OPC_Decode, 239, 4, 8, // Opcode: XORCCrr
/* 1168 */    MCD::OPC_FilterValue, 1, 117, 22, // Skip to: 6921
/* 1172 */    MCD::OPC_Decode, 238, 4, 9, // Opcode: XORCCri
/* 1176 */    MCD::OPC_FilterValue, 20, 46, 0, // Skip to: 1226
/* 1180 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1183 */    MCD::OPC_FilterValue, 0, 21, 0, // Skip to: 1208
/* 1187 */    MCD::OPC_ExtractField, 5, 8,  // Inst{12-5} ...
/* 1190 */    MCD::OPC_FilterValue, 0, 95, 22, // Skip to: 6921
/* 1194 */    MCD::OPC_CheckField, 25, 5, 0, 4, 0, // Skip to: 1204
/* 1200 */    MCD::OPC_Decode, 183, 1, 12, // Opcode: CMPrr
/* 1204 */    MCD::OPC_Decode, 163, 4, 8, // Opcode: SUBCCrr
/* 1208 */    MCD::OPC_FilterValue, 1, 77, 22, // Skip to: 6921
/* 1212 */    MCD::OPC_CheckField, 25, 5, 0, 4, 0, // Skip to: 1222
/* 1218 */    MCD::OPC_Decode, 182, 1, 13, // Opcode: CMPri
/* 1222 */    MCD::OPC_Decode, 162, 4, 9, // Opcode: SUBCCri
/* 1226 */    MCD::OPC_FilterValue, 21, 23, 0, // Skip to: 1253
/* 1230 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1233 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 1246
/* 1237 */    MCD::OPC_CheckField, 5, 8, 0, 46, 22, // Skip to: 6921
/* 1243 */    MCD::OPC_Decode, 116, 8, // Opcode: ANDNCCrr
/* 1246 */    MCD::OPC_FilterValue, 1, 39, 22, // Skip to: 6921
/* 1250 */    MCD::OPC_Decode, 115, 9, // Opcode: ANDNCCri
/* 1253 */    MCD::OPC_FilterValue, 22, 25, 0, // Skip to: 1282
/* 1257 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1260 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 1274
/* 1264 */    MCD::OPC_CheckField, 5, 8, 0, 19, 22, // Skip to: 6921
/* 1270 */    MCD::OPC_Decode, 191, 3, 8, // Opcode: ORNCCrr
/* 1274 */    MCD::OPC_FilterValue, 1, 11, 22, // Skip to: 6921
/* 1278 */    MCD::OPC_Decode, 190, 3, 9, // Opcode: ORNCCri
/* 1282 */    MCD::OPC_FilterValue, 23, 25, 0, // Skip to: 1311
/* 1286 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1289 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 1303
/* 1293 */    MCD::OPC_CheckField, 5, 8, 0, 246, 21, // Skip to: 6921
/* 1299 */    MCD::OPC_Decode, 234, 4, 8, // Opcode: XNORCCrr
/* 1303 */    MCD::OPC_FilterValue, 1, 238, 21, // Skip to: 6921
/* 1307 */    MCD::OPC_Decode, 233, 4, 9, // Opcode: XNORCCri
/* 1311 */    MCD::OPC_FilterValue, 24, 23, 0, // Skip to: 1338
/* 1315 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1318 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 1331
/* 1322 */    MCD::OPC_CheckField, 5, 8, 0, 217, 21, // Skip to: 6921
/* 1328 */    MCD::OPC_Decode, 102, 8, // Opcode: ADDErr
/* 1331 */    MCD::OPC_FilterValue, 1, 210, 21, // Skip to: 6921
/* 1335 */    MCD::OPC_Decode, 101, 9, // Opcode: ADDEri
/* 1338 */    MCD::OPC_FilterValue, 26, 25, 0, // Skip to: 1367
/* 1342 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1345 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 1359
/* 1349 */    MCD::OPC_CheckField, 5, 8, 0, 190, 21, // Skip to: 6921
/* 1355 */    MCD::OPC_Decode, 205, 4, 8, // Opcode: UMULCCrr
/* 1359 */    MCD::OPC_FilterValue, 1, 182, 21, // Skip to: 6921
/* 1363 */    MCD::OPC_Decode, 204, 4, 9, // Opcode: UMULCCri
/* 1367 */    MCD::OPC_FilterValue, 27, 25, 0, // Skip to: 1396
/* 1371 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1374 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 1388
/* 1378 */    MCD::OPC_CheckField, 5, 8, 0, 161, 21, // Skip to: 6921
/* 1384 */    MCD::OPC_Decode, 241, 3, 8, // Opcode: SMULCCrr
/* 1388 */    MCD::OPC_FilterValue, 1, 153, 21, // Skip to: 6921
/* 1392 */    MCD::OPC_Decode, 240, 3, 9, // Opcode: SMULCCri
/* 1396 */    MCD::OPC_FilterValue, 28, 25, 0, // Skip to: 1425
/* 1400 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1403 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 1417
/* 1407 */    MCD::OPC_CheckField, 5, 8, 0, 132, 21, // Skip to: 6921
/* 1413 */    MCD::OPC_Decode, 167, 4, 8, // Opcode: SUBErr
/* 1417 */    MCD::OPC_FilterValue, 1, 124, 21, // Skip to: 6921
/* 1421 */    MCD::OPC_Decode, 166, 4, 9, // Opcode: SUBEri
/* 1425 */    MCD::OPC_FilterValue, 30, 25, 0, // Skip to: 1454
/* 1429 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1432 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 1446
/* 1436 */    MCD::OPC_CheckField, 5, 8, 0, 103, 21, // Skip to: 6921
/* 1442 */    MCD::OPC_Decode, 197, 4, 8, // Opcode: UDIVCCrr
/* 1446 */    MCD::OPC_FilterValue, 1, 95, 21, // Skip to: 6921
/* 1450 */    MCD::OPC_Decode, 196, 4, 9, // Opcode: UDIVCCri
/* 1454 */    MCD::OPC_FilterValue, 31, 25, 0, // Skip to: 1483
/* 1458 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1461 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 1475
/* 1465 */    MCD::OPC_CheckField, 5, 8, 0, 74, 21, // Skip to: 6921
/* 1471 */    MCD::OPC_Decode, 216, 3, 8, // Opcode: SDIVCCrr
/* 1475 */    MCD::OPC_FilterValue, 1, 66, 21, // Skip to: 6921
/* 1479 */    MCD::OPC_Decode, 215, 3, 9, // Opcode: SDIVCCri
/* 1483 */    MCD::OPC_FilterValue, 32, 25, 0, // Skip to: 1512
/* 1487 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1490 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 1504
/* 1494 */    MCD::OPC_CheckField, 5, 8, 0, 45, 21, // Skip to: 6921
/* 1500 */    MCD::OPC_Decode, 180, 4, 8, // Opcode: TADDCCrr
/* 1504 */    MCD::OPC_FilterValue, 1, 37, 21, // Skip to: 6921
/* 1508 */    MCD::OPC_Decode, 179, 4, 9, // Opcode: TADDCCri
/* 1512 */    MCD::OPC_FilterValue, 33, 25, 0, // Skip to: 1541
/* 1516 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1519 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 1533
/* 1523 */    MCD::OPC_CheckField, 5, 8, 0, 16, 21, // Skip to: 6921
/* 1529 */    MCD::OPC_Decode, 193, 4, 8, // Opcode: TSUBCCrr
/* 1533 */    MCD::OPC_FilterValue, 1, 8, 21, // Skip to: 6921
/* 1537 */    MCD::OPC_Decode, 192, 4, 9, // Opcode: TSUBCCri
/* 1541 */    MCD::OPC_FilterValue, 34, 25, 0, // Skip to: 1570
/* 1545 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1548 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 1562
/* 1552 */    MCD::OPC_CheckField, 5, 8, 0, 243, 20, // Skip to: 6921
/* 1558 */    MCD::OPC_Decode, 178, 4, 8, // Opcode: TADDCCTVrr
/* 1562 */    MCD::OPC_FilterValue, 1, 235, 20, // Skip to: 6921
/* 1566 */    MCD::OPC_Decode, 177, 4, 9, // Opcode: TADDCCTVri
/* 1570 */    MCD::OPC_FilterValue, 35, 25, 0, // Skip to: 1599
/* 1574 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1577 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 1591
/* 1581 */    MCD::OPC_CheckField, 5, 8, 0, 214, 20, // Skip to: 6921
/* 1587 */    MCD::OPC_Decode, 191, 4, 8, // Opcode: TSUBCCTVrr
/* 1591 */    MCD::OPC_FilterValue, 1, 206, 20, // Skip to: 6921
/* 1595 */    MCD::OPC_Decode, 190, 4, 9, // Opcode: TSUBCCTVri
/* 1599 */    MCD::OPC_FilterValue, 36, 25, 0, // Skip to: 1628
/* 1603 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1606 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 1620
/* 1610 */    MCD::OPC_CheckField, 5, 8, 0, 185, 20, // Skip to: 6921
/* 1616 */    MCD::OPC_Decode, 184, 3, 8, // Opcode: MULSCCrr
/* 1620 */    MCD::OPC_FilterValue, 1, 177, 20, // Skip to: 6921
/* 1624 */    MCD::OPC_Decode, 183, 3, 9, // Opcode: MULSCCri
/* 1628 */    MCD::OPC_FilterValue, 37, 50, 0, // Skip to: 1682
/* 1632 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1635 */    MCD::OPC_FilterValue, 0, 25, 0, // Skip to: 1664
/* 1639 */    MCD::OPC_ExtractField, 12, 1,  // Inst{12} ...
/* 1642 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 1656
/* 1646 */    MCD::OPC_CheckField, 5, 7, 0, 149, 20, // Skip to: 6921
/* 1652 */    MCD::OPC_Decode, 237, 3, 8, // Opcode: SLLrr
/* 1656 */    MCD::OPC_FilterValue, 1, 141, 20, // Skip to: 6921
/* 1660 */    MCD::OPC_Decode, 235, 3, 14, // Opcode: SLLXrr
/* 1664 */    MCD::OPC_FilterValue, 1, 133, 20, // Skip to: 6921
/* 1668 */    MCD::OPC_CheckField, 12, 1, 1, 4, 0, // Skip to: 1678
/* 1674 */    MCD::OPC_Decode, 234, 3, 15, // Opcode: SLLXri
/* 1678 */    MCD::OPC_Decode, 236, 3, 9, // Opcode: SLLri
/* 1682 */    MCD::OPC_FilterValue, 38, 50, 0, // Skip to: 1736
/* 1686 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1689 */    MCD::OPC_FilterValue, 0, 25, 0, // Skip to: 1718
/* 1693 */    MCD::OPC_ExtractField, 12, 1,  // Inst{12} ...
/* 1696 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 1710
/* 1700 */    MCD::OPC_CheckField, 5, 7, 0, 95, 20, // Skip to: 6921
/* 1706 */    MCD::OPC_Decode, 251, 3, 8, // Opcode: SRLrr
/* 1710 */    MCD::OPC_FilterValue, 1, 87, 20, // Skip to: 6921
/* 1714 */    MCD::OPC_Decode, 249, 3, 14, // Opcode: SRLXrr
/* 1718 */    MCD::OPC_FilterValue, 1, 79, 20, // Skip to: 6921
/* 1722 */    MCD::OPC_CheckField, 12, 1, 1, 4, 0, // Skip to: 1732
/* 1728 */    MCD::OPC_Decode, 248, 3, 15, // Opcode: SRLXri
/* 1732 */    MCD::OPC_Decode, 250, 3, 9, // Opcode: SRLri
/* 1736 */    MCD::OPC_FilterValue, 39, 50, 0, // Skip to: 1790
/* 1740 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1743 */    MCD::OPC_FilterValue, 0, 25, 0, // Skip to: 1772
/* 1747 */    MCD::OPC_ExtractField, 12, 1,  // Inst{12} ...
/* 1750 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 1764
/* 1754 */    MCD::OPC_CheckField, 5, 7, 0, 41, 20, // Skip to: 6921
/* 1760 */    MCD::OPC_Decode, 247, 3, 8, // Opcode: SRArr
/* 1764 */    MCD::OPC_FilterValue, 1, 33, 20, // Skip to: 6921
/* 1768 */    MCD::OPC_Decode, 245, 3, 14, // Opcode: SRAXrr
/* 1772 */    MCD::OPC_FilterValue, 1, 25, 20, // Skip to: 6921
/* 1776 */    MCD::OPC_CheckField, 12, 1, 1, 4, 0, // Skip to: 1786
/* 1782 */    MCD::OPC_Decode, 244, 3, 15, // Opcode: SRAXri
/* 1786 */    MCD::OPC_Decode, 246, 3, 9, // Opcode: SRAri
/* 1790 */    MCD::OPC_FilterValue, 40, 58, 0, // Skip to: 1852
/* 1794 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1797 */    MCD::OPC_FilterValue, 0, 27, 0, // Skip to: 1828
/* 1801 */    MCD::OPC_ExtractField, 0, 13,  // Inst{12-0} ...
/* 1804 */    MCD::OPC_FilterValue, 0, 249, 19, // Skip to: 6921
/* 1808 */    MCD::OPC_CheckField, 25, 5, 0, 10, 0, // Skip to: 1824
/* 1814 */    MCD::OPC_CheckField, 14, 5, 15, 4, 0, // Skip to: 1824
/* 1820 */    MCD::OPC_Decode, 253, 3, 4, // Opcode: STBAR
/* 1824 */    MCD::OPC_Decode, 202, 3, 16, // Opcode: RDASR
/* 1828 */    MCD::OPC_FilterValue, 1, 225, 19, // Skip to: 6921
/* 1832 */    MCD::OPC_CheckPredicate, 0, 221, 19, // Skip to: 6921
/* 1836 */    MCD::OPC_CheckField, 25, 5, 0, 215, 19, // Skip to: 6921
/* 1842 */    MCD::OPC_CheckField, 14, 5, 15, 209, 19, // Skip to: 6921
/* 1848 */    MCD::OPC_Decode, 159, 3, 17, // Opcode: MEMBARi
/* 1852 */    MCD::OPC_FilterValue, 41, 10, 0, // Skip to: 1866
/* 1856 */    MCD::OPC_CheckField, 0, 19, 0, 195, 19, // Skip to: 6921
/* 1862 */    MCD::OPC_Decode, 204, 3, 18, // Opcode: RDPSR
/* 1866 */    MCD::OPC_FilterValue, 42, 25, 0, // Skip to: 1895
/* 1870 */    MCD::OPC_ExtractField, 0, 14,  // Inst{13-0} ...
/* 1873 */    MCD::OPC_FilterValue, 0, 180, 19, // Skip to: 6921
/* 1877 */    MCD::OPC_CheckField, 14, 5, 0, 4, 0, // Skip to: 1887
/* 1883 */    MCD::OPC_Decode, 206, 3, 18, // Opcode: RDWIM
/* 1887 */    MCD::OPC_CheckPredicate, 0, 166, 19, // Skip to: 6921
/* 1891 */    MCD::OPC_Decode, 203, 3, 19, // Opcode: RDPR
/* 1895 */    MCD::OPC_FilterValue, 43, 25, 0, // Skip to: 1924
/* 1899 */    MCD::OPC_ExtractField, 0, 19,  // Inst{18-0} ...
/* 1902 */    MCD::OPC_FilterValue, 0, 151, 19, // Skip to: 6921
/* 1906 */    MCD::OPC_CheckPredicate, 0, 10, 0, // Skip to: 1920
/* 1910 */    MCD::OPC_CheckField, 25, 5, 0, 4, 0, // Skip to: 1920
/* 1916 */    MCD::OPC_Decode, 246, 1, 4, // Opcode: FLUSHW
/* 1920 */    MCD::OPC_Decode, 205, 3, 18, // Opcode: RDTBR
/* 1924 */    MCD::OPC_FilterValue, 44, 123, 0, // Skip to: 2051
/* 1928 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1931 */    MCD::OPC_FilterValue, 0, 56, 0, // Skip to: 1991
/* 1935 */    MCD::OPC_ExtractField, 18, 1,  // Inst{18} ...
/* 1938 */    MCD::OPC_FilterValue, 0, 22, 0, // Skip to: 1964
/* 1942 */    MCD::OPC_CheckPredicate, 0, 10, 0, // Skip to: 1956
/* 1946 */    MCD::OPC_CheckField, 11, 2, 0, 4, 0, // Skip to: 1956
/* 1952 */    MCD::OPC_Decode, 162, 3, 20, // Opcode: MOVFCCrr
/* 1956 */    MCD::OPC_CheckPredicate, 0, 97, 19, // Skip to: 6921
/* 1960 */    MCD::OPC_Decode, 220, 4, 21, // Opcode: V9MOVFCCrr
/* 1964 */    MCD::OPC_FilterValue, 1, 89, 19, // Skip to: 6921
/* 1968 */    MCD::OPC_ExtractField, 11, 2,  // Inst{12-11} ...
/* 1971 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 1983
/* 1975 */    MCD::OPC_CheckPredicate, 0, 78, 19, // Skip to: 6921
/* 1979 */    MCD::OPC_Decode, 164, 3, 20, // Opcode: MOVICCrr
/* 1983 */    MCD::OPC_FilterValue, 2, 70, 19, // Skip to: 6921
/* 1987 */    MCD::OPC_Decode, 181, 3, 20, // Opcode: MOVXCCrr
/* 1991 */    MCD::OPC_FilterValue, 1, 62, 19, // Skip to: 6921
/* 1995 */    MCD::OPC_ExtractField, 18, 1,  // Inst{18} ...
/* 1998 */    MCD::OPC_FilterValue, 0, 22, 0, // Skip to: 2024
/* 2002 */    MCD::OPC_CheckPredicate, 0, 10, 0, // Skip to: 2016
/* 2006 */    MCD::OPC_CheckField, 11, 2, 0, 4, 0, // Skip to: 2016
/* 2012 */    MCD::OPC_Decode, 161, 3, 22, // Opcode: MOVFCCri
/* 2016 */    MCD::OPC_CheckPredicate, 0, 37, 19, // Skip to: 6921
/* 2020 */    MCD::OPC_Decode, 219, 4, 23, // Opcode: V9MOVFCCri
/* 2024 */    MCD::OPC_FilterValue, 1, 29, 19, // Skip to: 6921
/* 2028 */    MCD::OPC_ExtractField, 11, 2,  // Inst{12-11} ...
/* 2031 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 2043
/* 2035 */    MCD::OPC_CheckPredicate, 0, 18, 19, // Skip to: 6921
/* 2039 */    MCD::OPC_Decode, 163, 3, 22, // Opcode: MOVICCri
/* 2043 */    MCD::OPC_FilterValue, 2, 10, 19, // Skip to: 6921
/* 2047 */    MCD::OPC_Decode, 180, 3, 22, // Opcode: MOVXCCri
/* 2051 */    MCD::OPC_FilterValue, 45, 25, 0, // Skip to: 2080
/* 2055 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 2058 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 2072
/* 2062 */    MCD::OPC_CheckField, 5, 8, 0, 245, 18, // Skip to: 6921
/* 2068 */    MCD::OPC_Decode, 218, 3, 10, // Opcode: SDIVXrr
/* 2072 */    MCD::OPC_FilterValue, 1, 237, 18, // Skip to: 6921
/* 2076 */    MCD::OPC_Decode, 217, 3, 11, // Opcode: SDIVXri
/* 2080 */    MCD::OPC_FilterValue, 46, 14, 0, // Skip to: 2098
/* 2084 */    MCD::OPC_CheckPredicate, 0, 225, 18, // Skip to: 6921
/* 2088 */    MCD::OPC_CheckField, 5, 14, 0, 219, 18, // Skip to: 6921
/* 2094 */    MCD::OPC_Decode, 201, 3, 24, // Opcode: POPCrr
/* 2098 */    MCD::OPC_FilterValue, 47, 135, 0, // Skip to: 2237
/* 2102 */    MCD::OPC_ExtractField, 10, 4,  // Inst{13-10} ...
/* 2105 */    MCD::OPC_FilterValue, 1, 10, 0, // Skip to: 2119
/* 2109 */    MCD::OPC_CheckField, 5, 5, 0, 198, 18, // Skip to: 6921
/* 2115 */    MCD::OPC_Decode, 176, 3, 14, // Opcode: MOVRRZrr
/* 2119 */    MCD::OPC_FilterValue, 2, 10, 0, // Skip to: 2133
/* 2123 */    MCD::OPC_CheckField, 5, 5, 0, 184, 18, // Skip to: 6921
/* 2129 */    MCD::OPC_Decode, 170, 3, 14, // Opcode: MOVRLEZrr
/* 2133 */    MCD::OPC_FilterValue, 3, 10, 0, // Skip to: 2147
/* 2137 */    MCD::OPC_CheckField, 5, 5, 0, 170, 18, // Skip to: 6921
/* 2143 */    MCD::OPC_Decode, 172, 3, 14, // Opcode: MOVRLZrr
/* 2147 */    MCD::OPC_FilterValue, 5, 10, 0, // Skip to: 2161
/* 2151 */    MCD::OPC_CheckField, 5, 5, 0, 156, 18, // Skip to: 6921
/* 2157 */    MCD::OPC_Decode, 174, 3, 14, // Opcode: MOVRNZrr
/* 2161 */    MCD::OPC_FilterValue, 6, 10, 0, // Skip to: 2175
/* 2165 */    MCD::OPC_CheckField, 5, 5, 0, 142, 18, // Skip to: 6921
/* 2171 */    MCD::OPC_Decode, 168, 3, 14, // Opcode: MOVRGZrr
/* 2175 */    MCD::OPC_FilterValue, 7, 10, 0, // Skip to: 2189
/* 2179 */    MCD::OPC_CheckField, 5, 5, 0, 128, 18, // Skip to: 6921
/* 2185 */    MCD::OPC_Decode, 166, 3, 14, // Opcode: MOVRGEZrr
/* 2189 */    MCD::OPC_FilterValue, 9, 4, 0, // Skip to: 2197
/* 2193 */    MCD::OPC_Decode, 175, 3, 25, // Opcode: MOVRRZri
/* 2197 */    MCD::OPC_FilterValue, 10, 4, 0, // Skip to: 2205
/* 2201 */    MCD::OPC_Decode, 169, 3, 25, // Opcode: MOVRLEZri
/* 2205 */    MCD::OPC_FilterValue, 11, 4, 0, // Skip to: 2213
/* 2209 */    MCD::OPC_Decode, 171, 3, 25, // Opcode: MOVRLZri
/* 2213 */    MCD::OPC_FilterValue, 13, 4, 0, // Skip to: 2221
/* 2217 */    MCD::OPC_Decode, 173, 3, 25, // Opcode: MOVRNZri
/* 2221 */    MCD::OPC_FilterValue, 14, 4, 0, // Skip to: 2229
/* 2225 */    MCD::OPC_Decode, 167, 3, 25, // Opcode: MOVRGZri
/* 2229 */    MCD::OPC_FilterValue, 15, 80, 18, // Skip to: 6921
/* 2233 */    MCD::OPC_Decode, 165, 3, 25, // Opcode: MOVRGEZri
/* 2237 */    MCD::OPC_FilterValue, 48, 25, 0, // Skip to: 2266
/* 2241 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 2244 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 2258
/* 2248 */    MCD::OPC_CheckField, 5, 8, 0, 59, 18, // Skip to: 6921
/* 2254 */    MCD::OPC_Decode, 222, 4, 26, // Opcode: WRASRrr
/* 2258 */    MCD::OPC_FilterValue, 1, 51, 18, // Skip to: 6921
/* 2262 */    MCD::OPC_Decode, 221, 4, 27, // Opcode: WRASRri
/* 2266 */    MCD::OPC_FilterValue, 49, 37, 0, // Skip to: 2307
/* 2270 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 2273 */    MCD::OPC_FilterValue, 0, 16, 0, // Skip to: 2293
/* 2277 */    MCD::OPC_CheckField, 25, 5, 0, 30, 18, // Skip to: 6921
/* 2283 */    MCD::OPC_CheckField, 5, 8, 0, 24, 18, // Skip to: 6921
/* 2289 */    MCD::OPC_Decode, 226, 4, 12, // Opcode: WRPSRrr
/* 2293 */    MCD::OPC_FilterValue, 1, 16, 18, // Skip to: 6921
/* 2297 */    MCD::OPC_CheckField, 25, 5, 0, 10, 18, // Skip to: 6921
/* 2303 */    MCD::OPC_Decode, 225, 4, 13, // Opcode: WRPSRri
/* 2307 */    MCD::OPC_FilterValue, 50, 54, 0, // Skip to: 2365
/* 2311 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 2314 */    MCD::OPC_FilterValue, 0, 25, 0, // Skip to: 2343
/* 2318 */    MCD::OPC_ExtractField, 5, 8,  // Inst{12-5} ...
/* 2321 */    MCD::OPC_FilterValue, 0, 244, 17, // Skip to: 6921
/* 2325 */    MCD::OPC_CheckField, 25, 5, 0, 4, 0, // Skip to: 2335
/* 2331 */    MCD::OPC_Decode, 230, 4, 12, // Opcode: WRWIMrr
/* 2335 */    MCD::OPC_CheckPredicate, 0, 230, 17, // Skip to: 6921
/* 2339 */    MCD::OPC_Decode, 224, 4, 28, // Opcode: WRPRrr
/* 2343 */    MCD::OPC_FilterValue, 1, 222, 17, // Skip to: 6921
/* 2347 */    MCD::OPC_CheckField, 25, 5, 0, 4, 0, // Skip to: 2357
/* 2353 */    MCD::OPC_Decode, 229, 4, 13, // Opcode: WRWIMri
/* 2357 */    MCD::OPC_CheckPredicate, 0, 208, 17, // Skip to: 6921
/* 2361 */    MCD::OPC_Decode, 223, 4, 29, // Opcode: WRPRri
/* 2365 */    MCD::OPC_FilterValue, 51, 37, 0, // Skip to: 2406
/* 2369 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 2372 */    MCD::OPC_FilterValue, 0, 16, 0, // Skip to: 2392
/* 2376 */    MCD::OPC_CheckField, 25, 5, 0, 187, 17, // Skip to: 6921
/* 2382 */    MCD::OPC_CheckField, 5, 8, 0, 181, 17, // Skip to: 6921
/* 2388 */    MCD::OPC_Decode, 228, 4, 12, // Opcode: WRTBRrr
/* 2392 */    MCD::OPC_FilterValue, 1, 173, 17, // Skip to: 6921
/* 2396 */    MCD::OPC_CheckField, 25, 5, 0, 167, 17, // Skip to: 6921
/* 2402 */    MCD::OPC_Decode, 227, 4, 13, // Opcode: WRTBRri
/* 2406 */    MCD::OPC_FilterValue, 52, 197, 2, // Skip to: 3119
/* 2410 */    MCD::OPC_ExtractField, 5, 9,  // Inst{13-5} ...
/* 2413 */    MCD::OPC_FilterValue, 1, 10, 0, // Skip to: 2427
/* 2417 */    MCD::OPC_CheckField, 14, 5, 0, 146, 17, // Skip to: 6921
/* 2423 */    MCD::OPC_Decode, 148, 2, 30, // Opcode: FMOVS
/* 2427 */    MCD::OPC_FilterValue, 2, 14, 0, // Skip to: 2445
/* 2431 */    MCD::OPC_CheckPredicate, 0, 134, 17, // Skip to: 6921
/* 2435 */    MCD::OPC_CheckField, 14, 5, 0, 128, 17, // Skip to: 6921
/* 2441 */    MCD::OPC_Decode, 250, 1, 31, // Opcode: FMOVD
/* 2445 */    MCD::OPC_FilterValue, 3, 14, 0, // Skip to: 2463
/* 2449 */    MCD::OPC_CheckPredicate, 0, 116, 17, // Skip to: 6921
/* 2453 */    MCD::OPC_CheckField, 14, 5, 0, 110, 17, // Skip to: 6921
/* 2459 */    MCD::OPC_Decode, 254, 1, 32, // Opcode: FMOVQ
/* 2463 */    MCD::OPC_FilterValue, 5, 10, 0, // Skip to: 2477
/* 2467 */    MCD::OPC_CheckField, 14, 5, 0, 96, 17, // Skip to: 6921
/* 2473 */    MCD::OPC_Decode, 168, 2, 30, // Opcode: FNEGS
/* 2477 */    MCD::OPC_FilterValue, 6, 14, 0, // Skip to: 2495
/* 2481 */    MCD::OPC_CheckPredicate, 0, 84, 17, // Skip to: 6921
/* 2485 */    MCD::OPC_CheckField, 14, 5, 0, 78, 17, // Skip to: 6921
/* 2491 */    MCD::OPC_Decode, 166, 2, 31, // Opcode: FNEGD
/* 2495 */    MCD::OPC_FilterValue, 7, 14, 0, // Skip to: 2513
/* 2499 */    MCD::OPC_CheckPredicate, 0, 66, 17, // Skip to: 6921
/* 2503 */    MCD::OPC_CheckField, 14, 5, 0, 60, 17, // Skip to: 6921
/* 2509 */    MCD::OPC_Decode, 167, 2, 32, // Opcode: FNEGQ
/* 2513 */    MCD::OPC_FilterValue, 9, 10, 0, // Skip to: 2527
/* 2517 */    MCD::OPC_CheckField, 14, 5, 0, 46, 17, // Skip to: 6921
/* 2523 */    MCD::OPC_Decode, 202, 1, 30, // Opcode: FABSS
/* 2527 */    MCD::OPC_FilterValue, 10, 14, 0, // Skip to: 2545
/* 2531 */    MCD::OPC_CheckPredicate, 0, 34, 17, // Skip to: 6921
/* 2535 */    MCD::OPC_CheckField, 14, 5, 0, 28, 17, // Skip to: 6921
/* 2541 */    MCD::OPC_Decode, 200, 1, 31, // Opcode: FABSD
/* 2545 */    MCD::OPC_FilterValue, 11, 14, 0, // Skip to: 2563
/* 2549 */    MCD::OPC_CheckPredicate, 0, 16, 17, // Skip to: 6921
/* 2553 */    MCD::OPC_CheckField, 14, 5, 0, 10, 17, // Skip to: 6921
/* 2559 */    MCD::OPC_Decode, 201, 1, 32, // Opcode: FABSQ
/* 2563 */    MCD::OPC_FilterValue, 41, 10, 0, // Skip to: 2577
/* 2567 */    MCD::OPC_CheckField, 14, 5, 0, 252, 16, // Skip to: 6921
/* 2573 */    MCD::OPC_Decode, 212, 2, 30, // Opcode: FSQRTS
/* 2577 */    MCD::OPC_FilterValue, 42, 10, 0, // Skip to: 2591
/* 2581 */    MCD::OPC_CheckField, 14, 5, 0, 238, 16, // Skip to: 6921
/* 2587 */    MCD::OPC_Decode, 210, 2, 31, // Opcode: FSQRTD
/* 2591 */    MCD::OPC_FilterValue, 43, 10, 0, // Skip to: 2605
/* 2595 */    MCD::OPC_CheckField, 14, 5, 0, 224, 16, // Skip to: 6921
/* 2601 */    MCD::OPC_Decode, 211, 2, 32, // Opcode: FSQRTQ
/* 2605 */    MCD::OPC_FilterValue, 65, 4, 0, // Skip to: 2613
/* 2609 */    MCD::OPC_Decode, 205, 1, 33, // Opcode: FADDS
/* 2613 */    MCD::OPC_FilterValue, 66, 4, 0, // Skip to: 2621
/* 2617 */    MCD::OPC_Decode, 203, 1, 34, // Opcode: FADDD
/* 2621 */    MCD::OPC_FilterValue, 67, 4, 0, // Skip to: 2629
/* 2625 */    MCD::OPC_Decode, 204, 1, 35, // Opcode: FADDQ
/* 2629 */    MCD::OPC_FilterValue, 69, 4, 0, // Skip to: 2637
/* 2633 */    MCD::OPC_Decode, 227, 2, 33, // Opcode: FSUBS
/* 2637 */    MCD::OPC_FilterValue, 70, 4, 0, // Skip to: 2645
/* 2641 */    MCD::OPC_Decode, 225, 2, 34, // Opcode: FSUBD
/* 2645 */    MCD::OPC_FilterValue, 71, 4, 0, // Skip to: 2653
/* 2649 */    MCD::OPC_Decode, 226, 2, 35, // Opcode: FSUBQ
/* 2653 */    MCD::OPC_FilterValue, 73, 4, 0, // Skip to: 2661
/* 2657 */    MCD::OPC_Decode, 161, 2, 33, // Opcode: FMULS
/* 2661 */    MCD::OPC_FilterValue, 74, 4, 0, // Skip to: 2669
/* 2665 */    MCD::OPC_Decode, 157, 2, 34, // Opcode: FMULD
/* 2669 */    MCD::OPC_FilterValue, 75, 4, 0, // Skip to: 2677
/* 2673 */    MCD::OPC_Decode, 160, 2, 35, // Opcode: FMULQ
/* 2677 */    MCD::OPC_FilterValue, 77, 4, 0, // Skip to: 2685
/* 2681 */    MCD::OPC_Decode, 229, 1, 33, // Opcode: FDIVS
/* 2685 */    MCD::OPC_FilterValue, 78, 4, 0, // Skip to: 2693
/* 2689 */    MCD::OPC_Decode, 227, 1, 34, // Opcode: FDIVD
/* 2693 */    MCD::OPC_FilterValue, 79, 4, 0, // Skip to: 2701
/* 2697 */    MCD::OPC_Decode, 228, 1, 35, // Opcode: FDIVQ
/* 2701 */    MCD::OPC_FilterValue, 81, 8, 0, // Skip to: 2713
/* 2705 */    MCD::OPC_CheckPredicate, 1, 116, 16, // Skip to: 6921
/* 2709 */    MCD::OPC_Decode, 163, 2, 34, // Opcode: FNADDS
/* 2713 */    MCD::OPC_FilterValue, 82, 8, 0, // Skip to: 2725
/* 2717 */    MCD::OPC_CheckPredicate, 1, 104, 16, // Skip to: 6921
/* 2721 */    MCD::OPC_Decode, 162, 2, 34, // Opcode: FNADDD
/* 2725 */    MCD::OPC_FilterValue, 89, 8, 0, // Skip to: 2737
/* 2729 */    MCD::OPC_CheckPredicate, 1, 92, 16, // Skip to: 6921
/* 2733 */    MCD::OPC_Decode, 172, 2, 34, // Opcode: FNMULS
/* 2737 */    MCD::OPC_FilterValue, 90, 8, 0, // Skip to: 2749
/* 2741 */    MCD::OPC_CheckPredicate, 1, 80, 16, // Skip to: 6921
/* 2745 */    MCD::OPC_Decode, 171, 2, 34, // Opcode: FNMULD
/* 2749 */    MCD::OPC_FilterValue, 97, 8, 0, // Skip to: 2761
/* 2753 */    MCD::OPC_CheckPredicate, 1, 68, 16, // Skip to: 6921
/* 2757 */    MCD::OPC_Decode, 237, 1, 34, // Opcode: FHADDS
/* 2761 */    MCD::OPC_FilterValue, 98, 8, 0, // Skip to: 2773
/* 2765 */    MCD::OPC_CheckPredicate, 1, 56, 16, // Skip to: 6921
/* 2769 */    MCD::OPC_Decode, 236, 1, 34, // Opcode: FHADDD
/* 2773 */    MCD::OPC_FilterValue, 101, 8, 0, // Skip to: 2785
/* 2777 */    MCD::OPC_CheckPredicate, 1, 44, 16, // Skip to: 6921
/* 2781 */    MCD::OPC_Decode, 239, 1, 34, // Opcode: FHSUBS
/* 2785 */    MCD::OPC_FilterValue, 102, 8, 0, // Skip to: 2797
/* 2789 */    MCD::OPC_CheckPredicate, 1, 32, 16, // Skip to: 6921
/* 2793 */    MCD::OPC_Decode, 238, 1, 34, // Opcode: FHSUBD
/* 2797 */    MCD::OPC_FilterValue, 105, 4, 0, // Skip to: 2805
/* 2801 */    MCD::OPC_Decode, 209, 2, 36, // Opcode: FSMULD
/* 2805 */    MCD::OPC_FilterValue, 110, 4, 0, // Skip to: 2813
/* 2809 */    MCD::OPC_Decode, 230, 1, 37, // Opcode: FDMULQ
/* 2813 */    MCD::OPC_FilterValue, 113, 8, 0, // Skip to: 2825
/* 2817 */    MCD::OPC_CheckPredicate, 1, 4, 16, // Skip to: 6921
/* 2821 */    MCD::OPC_Decode, 170, 2, 34, // Opcode: FNHADDS
/* 2825 */    MCD::OPC_FilterValue, 114, 8, 0, // Skip to: 2837
/* 2829 */    MCD::OPC_CheckPredicate, 1, 248, 15, // Skip to: 6921
/* 2833 */    MCD::OPC_Decode, 169, 2, 34, // Opcode: FNHADDD
/* 2837 */    MCD::OPC_FilterValue, 121, 8, 0, // Skip to: 2849
/* 2841 */    MCD::OPC_CheckPredicate, 1, 236, 15, // Skip to: 6921
/* 2845 */    MCD::OPC_Decode, 179, 2, 34, // Opcode: FNSMULD
/* 2849 */    MCD::OPC_FilterValue, 129, 1, 10, 0, // Skip to: 2864
/* 2854 */    MCD::OPC_CheckField, 14, 5, 0, 221, 15, // Skip to: 6921
/* 2860 */    MCD::OPC_Decode, 224, 2, 38, // Opcode: FSTOX
/* 2864 */    MCD::OPC_FilterValue, 130, 1, 10, 0, // Skip to: 2879
/* 2869 */    MCD::OPC_CheckField, 14, 5, 0, 206, 15, // Skip to: 6921
/* 2875 */    MCD::OPC_Decode, 234, 1, 31, // Opcode: FDTOX
/* 2879 */    MCD::OPC_FilterValue, 131, 1, 10, 0, // Skip to: 2894
/* 2884 */    MCD::OPC_CheckField, 14, 5, 0, 191, 15, // Skip to: 6921
/* 2890 */    MCD::OPC_Decode, 204, 2, 39, // Opcode: FQTOX
/* 2894 */    MCD::OPC_FilterValue, 132, 1, 10, 0, // Skip to: 2909
/* 2899 */    MCD::OPC_CheckField, 14, 5, 0, 176, 15, // Skip to: 6921
/* 2905 */    MCD::OPC_Decode, 234, 2, 40, // Opcode: FXTOS
/* 2909 */    MCD::OPC_FilterValue, 136, 1, 10, 0, // Skip to: 2924
/* 2914 */    MCD::OPC_CheckField, 14, 5, 0, 161, 15, // Skip to: 6921
/* 2920 */    MCD::OPC_Decode, 232, 2, 31, // Opcode: FXTOD
/* 2924 */    MCD::OPC_FilterValue, 140, 1, 10, 0, // Skip to: 2939
/* 2929 */    MCD::OPC_CheckField, 14, 5, 0, 146, 15, // Skip to: 6921
/* 2935 */    MCD::OPC_Decode, 233, 2, 41, // Opcode: FXTOQ
/* 2939 */    MCD::OPC_FilterValue, 196, 1, 10, 0, // Skip to: 2954
/* 2944 */    MCD::OPC_CheckField, 14, 5, 0, 131, 15, // Skip to: 6921
/* 2950 */    MCD::OPC_Decode, 242, 1, 30, // Opcode: FITOS
/* 2954 */    MCD::OPC_FilterValue, 198, 1, 10, 0, // Skip to: 2969
/* 2959 */    MCD::OPC_CheckField, 14, 5, 0, 116, 15, // Skip to: 6921
/* 2965 */    MCD::OPC_Decode, 233, 1, 40, // Opcode: FDTOS
/* 2969 */    MCD::OPC_FilterValue, 199, 1, 10, 0, // Skip to: 2984
/* 2974 */    MCD::OPC_CheckField, 14, 5, 0, 101, 15, // Skip to: 6921
/* 2980 */    MCD::OPC_Decode, 203, 2, 42, // Opcode: FQTOS
/* 2984 */    MCD::OPC_FilterValue, 200, 1, 10, 0, // Skip to: 2999
/* 2989 */    MCD::OPC_CheckField, 14, 5, 0, 86, 15, // Skip to: 6921
/* 2995 */    MCD::OPC_Decode, 240, 1, 38, // Opcode: FITOD
/* 2999 */    MCD::OPC_FilterValue, 201, 1, 10, 0, // Skip to: 3014
/* 3004 */    MCD::OPC_CheckField, 14, 5, 0, 71, 15, // Skip to: 6921
/* 3010 */    MCD::OPC_Decode, 221, 2, 38, // Opcode: FSTOD
/* 3014 */    MCD::OPC_FilterValue, 203, 1, 10, 0, // Skip to: 3029
/* 3019 */    MCD::OPC_CheckField, 14, 5, 0, 56, 15, // Skip to: 6921
/* 3025 */    MCD::OPC_Decode, 201, 2, 39, // Opcode: FQTOD
/* 3029 */    MCD::OPC_FilterValue, 204, 1, 10, 0, // Skip to: 3044
/* 3034 */    MCD::OPC_CheckField, 14, 5, 0, 41, 15, // Skip to: 6921
/* 3040 */    MCD::OPC_Decode, 241, 1, 43, // Opcode: FITOQ
/* 3044 */    MCD::OPC_FilterValue, 205, 1, 10, 0, // Skip to: 3059
/* 3049 */    MCD::OPC_CheckField, 14, 5, 0, 26, 15, // Skip to: 6921
/* 3055 */    MCD::OPC_Decode, 223, 2, 43, // Opcode: FSTOQ
/* 3059 */    MCD::OPC_FilterValue, 206, 1, 10, 0, // Skip to: 3074
/* 3064 */    MCD::OPC_CheckField, 14, 5, 0, 11, 15, // Skip to: 6921
/* 3070 */    MCD::OPC_Decode, 232, 1, 41, // Opcode: FDTOQ
/* 3074 */    MCD::OPC_FilterValue, 209, 1, 10, 0, // Skip to: 3089
/* 3079 */    MCD::OPC_CheckField, 14, 5, 0, 252, 14, // Skip to: 6921
/* 3085 */    MCD::OPC_Decode, 222, 2, 30, // Opcode: FSTOI
/* 3089 */    MCD::OPC_FilterValue, 210, 1, 10, 0, // Skip to: 3104
/* 3094 */    MCD::OPC_CheckField, 14, 5, 0, 237, 14, // Skip to: 6921
/* 3100 */    MCD::OPC_Decode, 231, 1, 40, // Opcode: FDTOI
/* 3104 */    MCD::OPC_FilterValue, 211, 1, 228, 14, // Skip to: 6921
/* 3109 */    MCD::OPC_CheckField, 14, 5, 0, 222, 14, // Skip to: 6921
/* 3115 */    MCD::OPC_Decode, 202, 2, 42, // Opcode: FQTOI
/* 3119 */    MCD::OPC_FilterValue, 53, 70, 2, // Skip to: 3705
/* 3123 */    MCD::OPC_ExtractField, 5, 6,  // Inst{10-5} ...
/* 3126 */    MCD::OPC_FilterValue, 1, 75, 0, // Skip to: 3205
/* 3130 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 3133 */    MCD::OPC_FilterValue, 0, 29, 0, // Skip to: 3166
/* 3137 */    MCD::OPC_ExtractField, 18, 1,  // Inst{18} ...
/* 3140 */    MCD::OPC_FilterValue, 0, 193, 14, // Skip to: 6921
/* 3144 */    MCD::OPC_CheckPredicate, 0, 10, 0, // Skip to: 3158
/* 3148 */    MCD::OPC_CheckField, 11, 2, 0, 4, 0, // Skip to: 3158
/* 3154 */    MCD::OPC_Decode, 149, 2, 44, // Opcode: FMOVS_FCC
/* 3158 */    MCD::OPC_CheckPredicate, 0, 175, 14, // Skip to: 6921
/* 3162 */    MCD::OPC_Decode, 218, 4, 45, // Opcode: V9FMOVS_FCC
/* 3166 */    MCD::OPC_FilterValue, 1, 167, 14, // Skip to: 6921
/* 3170 */    MCD::OPC_ExtractField, 11, 2,  // Inst{12-11} ...
/* 3173 */    MCD::OPC_FilterValue, 0, 14, 0, // Skip to: 3191
/* 3177 */    MCD::OPC_CheckPredicate, 0, 156, 14, // Skip to: 6921
/* 3181 */    MCD::OPC_CheckField, 18, 1, 0, 150, 14, // Skip to: 6921
/* 3187 */    MCD::OPC_Decode, 150, 2, 44, // Opcode: FMOVS_ICC
/* 3191 */    MCD::OPC_FilterValue, 2, 142, 14, // Skip to: 6921
/* 3195 */    MCD::OPC_CheckField, 18, 1, 0, 136, 14, // Skip to: 6921
/* 3201 */    MCD::OPC_Decode, 151, 2, 44, // Opcode: FMOVS_XCC
/* 3205 */    MCD::OPC_FilterValue, 2, 75, 0, // Skip to: 3284
/* 3209 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 3212 */    MCD::OPC_FilterValue, 0, 29, 0, // Skip to: 3245
/* 3216 */    MCD::OPC_ExtractField, 18, 1,  // Inst{18} ...
/* 3219 */    MCD::OPC_FilterValue, 0, 114, 14, // Skip to: 6921
/* 3223 */    MCD::OPC_CheckPredicate, 0, 10, 0, // Skip to: 3237
/* 3227 */    MCD::OPC_CheckField, 11, 2, 0, 4, 0, // Skip to: 3237
/* 3233 */    MCD::OPC_Decode, 251, 1, 46, // Opcode: FMOVD_FCC
/* 3237 */    MCD::OPC_CheckPredicate, 0, 96, 14, // Skip to: 6921
/* 3241 */    MCD::OPC_Decode, 216, 4, 47, // Opcode: V9FMOVD_FCC
/* 3245 */    MCD::OPC_FilterValue, 1, 88, 14, // Skip to: 6921
/* 3249 */    MCD::OPC_ExtractField, 11, 2,  // Inst{12-11} ...
/* 3252 */    MCD::OPC_FilterValue, 0, 14, 0, // Skip to: 3270
/* 3256 */    MCD::OPC_CheckPredicate, 0, 77, 14, // Skip to: 6921
/* 3260 */    MCD::OPC_CheckField, 18, 1, 0, 71, 14, // Skip to: 6921
/* 3266 */    MCD::OPC_Decode, 252, 1, 46, // Opcode: FMOVD_ICC
/* 3270 */    MCD::OPC_FilterValue, 2, 63, 14, // Skip to: 6921
/* 3274 */    MCD::OPC_CheckField, 18, 1, 0, 57, 14, // Skip to: 6921
/* 3280 */    MCD::OPC_Decode, 253, 1, 46, // Opcode: FMOVD_XCC
/* 3284 */    MCD::OPC_FilterValue, 3, 75, 0, // Skip to: 3363
/* 3288 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 3291 */    MCD::OPC_FilterValue, 0, 29, 0, // Skip to: 3324
/* 3295 */    MCD::OPC_ExtractField, 18, 1,  // Inst{18} ...
/* 3298 */    MCD::OPC_FilterValue, 0, 35, 14, // Skip to: 6921
/* 3302 */    MCD::OPC_CheckPredicate, 0, 10, 0, // Skip to: 3316
/* 3306 */    MCD::OPC_CheckField, 11, 2, 0, 4, 0, // Skip to: 3316
/* 3312 */    MCD::OPC_Decode, 255, 1, 48, // Opcode: FMOVQ_FCC
/* 3316 */    MCD::OPC_CheckPredicate, 0, 17, 14, // Skip to: 6921
/* 3320 */    MCD::OPC_Decode, 217, 4, 49, // Opcode: V9FMOVQ_FCC
/* 3324 */    MCD::OPC_FilterValue, 1, 9, 14, // Skip to: 6921
/* 3328 */    MCD::OPC_ExtractField, 11, 2,  // Inst{12-11} ...
/* 3331 */    MCD::OPC_FilterValue, 0, 14, 0, // Skip to: 3349
/* 3335 */    MCD::OPC_CheckPredicate, 0, 254, 13, // Skip to: 6921
/* 3339 */    MCD::OPC_CheckField, 18, 1, 0, 248, 13, // Skip to: 6921
/* 3345 */    MCD::OPC_Decode, 128, 2, 48, // Opcode: FMOVQ_ICC
/* 3349 */    MCD::OPC_FilterValue, 2, 240, 13, // Skip to: 6921
/* 3353 */    MCD::OPC_CheckField, 18, 1, 0, 234, 13, // Skip to: 6921
/* 3359 */    MCD::OPC_Decode, 129, 2, 48, // Opcode: FMOVQ_XCC
/* 3363 */    MCD::OPC_FilterValue, 5, 27, 0, // Skip to: 3394
/* 3367 */    MCD::OPC_ExtractField, 11, 3,  // Inst{13-11} ...
/* 3370 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 3382
/* 3374 */    MCD::OPC_CheckPredicate, 0, 215, 13, // Skip to: 6921
/* 3378 */    MCD::OPC_Decode, 138, 2, 50, // Opcode: FMOVRLEZS
/* 3382 */    MCD::OPC_FilterValue, 3, 207, 13, // Skip to: 6921
/* 3386 */    MCD::OPC_CheckPredicate, 0, 203, 13, // Skip to: 6921
/* 3390 */    MCD::OPC_Decode, 135, 2, 50, // Opcode: FMOVRGZS
/* 3394 */    MCD::OPC_FilterValue, 6, 27, 0, // Skip to: 3425
/* 3398 */    MCD::OPC_ExtractField, 11, 3,  // Inst{13-11} ...
/* 3401 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 3413
/* 3405 */    MCD::OPC_CheckPredicate, 0, 184, 13, // Skip to: 6921
/* 3409 */    MCD::OPC_Decode, 136, 2, 50, // Opcode: FMOVRLEZD
/* 3413 */    MCD::OPC_FilterValue, 3, 176, 13, // Skip to: 6921
/* 3417 */    MCD::OPC_CheckPredicate, 0, 172, 13, // Skip to: 6921
/* 3421 */    MCD::OPC_Decode, 133, 2, 50, // Opcode: FMOVRGZD
/* 3425 */    MCD::OPC_FilterValue, 7, 27, 0, // Skip to: 3456
/* 3429 */    MCD::OPC_ExtractField, 11, 3,  // Inst{13-11} ...
/* 3432 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 3444
/* 3436 */    MCD::OPC_CheckPredicate, 0, 153, 13, // Skip to: 6921
/* 3440 */    MCD::OPC_Decode, 137, 2, 50, // Opcode: FMOVRLEZQ
/* 3444 */    MCD::OPC_FilterValue, 3, 145, 13, // Skip to: 6921
/* 3448 */    MCD::OPC_CheckPredicate, 0, 141, 13, // Skip to: 6921
/* 3452 */    MCD::OPC_Decode, 134, 2, 50, // Opcode: FMOVRGZQ
/* 3456 */    MCD::OPC_FilterValue, 17, 10, 0, // Skip to: 3470
/* 3460 */    MCD::OPC_CheckField, 11, 3, 1, 127, 13, // Skip to: 6921
/* 3466 */    MCD::OPC_Decode, 215, 4, 51, // Opcode: V9FCMPS
/* 3470 */    MCD::OPC_FilterValue, 18, 10, 0, // Skip to: 3484
/* 3474 */    MCD::OPC_CheckField, 11, 3, 1, 113, 13, // Skip to: 6921
/* 3480 */    MCD::OPC_Decode, 210, 4, 52, // Opcode: V9FCMPD
/* 3484 */    MCD::OPC_FilterValue, 19, 10, 0, // Skip to: 3498
/* 3488 */    MCD::OPC_CheckField, 11, 3, 1, 99, 13, // Skip to: 6921
/* 3494 */    MCD::OPC_Decode, 214, 4, 53, // Opcode: V9FCMPQ
/* 3498 */    MCD::OPC_FilterValue, 21, 10, 0, // Skip to: 3512
/* 3502 */    MCD::OPC_CheckField, 11, 3, 1, 85, 13, // Skip to: 6921
/* 3508 */    MCD::OPC_Decode, 213, 4, 51, // Opcode: V9FCMPES
/* 3512 */    MCD::OPC_FilterValue, 22, 10, 0, // Skip to: 3526
/* 3516 */    MCD::OPC_CheckField, 11, 3, 1, 71, 13, // Skip to: 6921
/* 3522 */    MCD::OPC_Decode, 211, 4, 52, // Opcode: V9FCMPED
/* 3526 */    MCD::OPC_FilterValue, 23, 10, 0, // Skip to: 3540
/* 3530 */    MCD::OPC_CheckField, 11, 3, 1, 57, 13, // Skip to: 6921
/* 3536 */    MCD::OPC_Decode, 212, 4, 53, // Opcode: V9FCMPEQ
/* 3540 */    MCD::OPC_FilterValue, 37, 51, 0, // Skip to: 3595
/* 3544 */    MCD::OPC_ExtractField, 11, 3,  // Inst{13-11} ...
/* 3547 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 3559
/* 3551 */    MCD::OPC_CheckPredicate, 0, 38, 13, // Skip to: 6921
/* 3555 */    MCD::OPC_Decode, 147, 2, 50, // Opcode: FMOVRZS
/* 3559 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 3571
/* 3563 */    MCD::OPC_CheckPredicate, 0, 26, 13, // Skip to: 6921
/* 3567 */    MCD::OPC_Decode, 141, 2, 50, // Opcode: FMOVRLZS
/* 3571 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 3583
/* 3575 */    MCD::OPC_CheckPredicate, 0, 14, 13, // Skip to: 6921
/* 3579 */    MCD::OPC_Decode, 144, 2, 50, // Opcode: FMOVRNZS
/* 3583 */    MCD::OPC_FilterValue, 3, 6, 13, // Skip to: 6921
/* 3587 */    MCD::OPC_CheckPredicate, 0, 2, 13, // Skip to: 6921
/* 3591 */    MCD::OPC_Decode, 132, 2, 50, // Opcode: FMOVRGEZS
/* 3595 */    MCD::OPC_FilterValue, 38, 51, 0, // Skip to: 3650
/* 3599 */    MCD::OPC_ExtractField, 11, 3,  // Inst{13-11} ...
/* 3602 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 3614
/* 3606 */    MCD::OPC_CheckPredicate, 0, 239, 12, // Skip to: 6921
/* 3610 */    MCD::OPC_Decode, 145, 2, 50, // Opcode: FMOVRZD
/* 3614 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 3626
/* 3618 */    MCD::OPC_CheckPredicate, 0, 227, 12, // Skip to: 6921
/* 3622 */    MCD::OPC_Decode, 139, 2, 50, // Opcode: FMOVRLZD
/* 3626 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 3638
/* 3630 */    MCD::OPC_CheckPredicate, 0, 215, 12, // Skip to: 6921
/* 3634 */    MCD::OPC_Decode, 142, 2, 50, // Opcode: FMOVRNZD
/* 3638 */    MCD::OPC_FilterValue, 3, 207, 12, // Skip to: 6921
/* 3642 */    MCD::OPC_CheckPredicate, 0, 203, 12, // Skip to: 6921
/* 3646 */    MCD::OPC_Decode, 130, 2, 50, // Opcode: FMOVRGEZD
/* 3650 */    MCD::OPC_FilterValue, 39, 195, 12, // Skip to: 6921
/* 3654 */    MCD::OPC_ExtractField, 11, 3,  // Inst{13-11} ...
/* 3657 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 3669
/* 3661 */    MCD::OPC_CheckPredicate, 0, 184, 12, // Skip to: 6921
/* 3665 */    MCD::OPC_Decode, 146, 2, 50, // Opcode: FMOVRZQ
/* 3669 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 3681
/* 3673 */    MCD::OPC_CheckPredicate, 0, 172, 12, // Skip to: 6921
/* 3677 */    MCD::OPC_Decode, 140, 2, 50, // Opcode: FMOVRLZQ
/* 3681 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 3693
/* 3685 */    MCD::OPC_CheckPredicate, 0, 160, 12, // Skip to: 6921
/* 3689 */    MCD::OPC_Decode, 143, 2, 50, // Opcode: FMOVRNZQ
/* 3693 */    MCD::OPC_FilterValue, 3, 152, 12, // Skip to: 6921
/* 3697 */    MCD::OPC_CheckPredicate, 0, 148, 12, // Skip to: 6921
/* 3701 */    MCD::OPC_Decode, 131, 2, 50, // Opcode: FMOVRGEZQ
/* 3705 */    MCD::OPC_FilterValue, 54, 25, 6, // Skip to: 5270
/* 3709 */    MCD::OPC_ExtractField, 5, 9,  // Inst{13-5} ...
/* 3712 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 3724
/* 3716 */    MCD::OPC_CheckPredicate, 2, 129, 12, // Skip to: 6921
/* 3720 */    MCD::OPC_Decode, 192, 1, 10, // Opcode: EDGE8
/* 3724 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 3736
/* 3728 */    MCD::OPC_CheckPredicate, 3, 117, 12, // Skip to: 6921
/* 3732 */    MCD::OPC_Decode, 195, 1, 10, // Opcode: EDGE8N
/* 3736 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 3748
/* 3740 */    MCD::OPC_CheckPredicate, 2, 105, 12, // Skip to: 6921
/* 3744 */    MCD::OPC_Decode, 193, 1, 10, // Opcode: EDGE8L
/* 3748 */    MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 3760
/* 3752 */    MCD::OPC_CheckPredicate, 3, 93, 12, // Skip to: 6921
/* 3756 */    MCD::OPC_Decode, 194, 1, 10, // Opcode: EDGE8LN
/* 3760 */    MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 3772
/* 3764 */    MCD::OPC_CheckPredicate, 2, 81, 12, // Skip to: 6921
/* 3768 */    MCD::OPC_Decode, 184, 1, 10, // Opcode: EDGE16
/* 3772 */    MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 3784
/* 3776 */    MCD::OPC_CheckPredicate, 3, 69, 12, // Skip to: 6921
/* 3780 */    MCD::OPC_Decode, 187, 1, 10, // Opcode: EDGE16N
/* 3784 */    MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 3796
/* 3788 */    MCD::OPC_CheckPredicate, 2, 57, 12, // Skip to: 6921
/* 3792 */    MCD::OPC_Decode, 185, 1, 10, // Opcode: EDGE16L
/* 3796 */    MCD::OPC_FilterValue, 7, 8, 0, // Skip to: 3808
/* 3800 */    MCD::OPC_CheckPredicate, 3, 45, 12, // Skip to: 6921
/* 3804 */    MCD::OPC_Decode, 186, 1, 10, // Opcode: EDGE16LN
/* 3808 */    MCD::OPC_FilterValue, 8, 8, 0, // Skip to: 3820
/* 3812 */    MCD::OPC_CheckPredicate, 2, 33, 12, // Skip to: 6921
/* 3816 */    MCD::OPC_Decode, 188, 1, 10, // Opcode: EDGE32
/* 3820 */    MCD::OPC_FilterValue, 9, 8, 0, // Skip to: 3832
/* 3824 */    MCD::OPC_CheckPredicate, 3, 21, 12, // Skip to: 6921
/* 3828 */    MCD::OPC_Decode, 191, 1, 10, // Opcode: EDGE32N
/* 3832 */    MCD::OPC_FilterValue, 10, 8, 0, // Skip to: 3844
/* 3836 */    MCD::OPC_CheckPredicate, 2, 9, 12, // Skip to: 6921
/* 3840 */    MCD::OPC_Decode, 189, 1, 10, // Opcode: EDGE32L
/* 3844 */    MCD::OPC_FilterValue, 11, 8, 0, // Skip to: 3856
/* 3848 */    MCD::OPC_CheckPredicate, 3, 253, 11, // Skip to: 6921
/* 3852 */    MCD::OPC_Decode, 190, 1, 10, // Opcode: EDGE32LN
/* 3856 */    MCD::OPC_FilterValue, 16, 7, 0, // Skip to: 3867
/* 3860 */    MCD::OPC_CheckPredicate, 2, 241, 11, // Skip to: 6921
/* 3864 */    MCD::OPC_Decode, 126, 10, // Opcode: ARRAY8
/* 3867 */    MCD::OPC_FilterValue, 17, 7, 0, // Skip to: 3878
/* 3871 */    MCD::OPC_CheckPredicate, 1, 230, 11, // Skip to: 6921
/* 3875 */    MCD::OPC_Decode, 103, 10, // Opcode: ADDXC
/* 3878 */    MCD::OPC_FilterValue, 18, 7, 0, // Skip to: 3889
/* 3882 */    MCD::OPC_CheckPredicate, 2, 219, 11, // Skip to: 6921
/* 3886 */    MCD::OPC_Decode, 124, 10, // Opcode: ARRAY16
/* 3889 */    MCD::OPC_FilterValue, 19, 7, 0, // Skip to: 3900
/* 3893 */    MCD::OPC_CheckPredicate, 1, 208, 11, // Skip to: 6921
/* 3897 */    MCD::OPC_Decode, 104, 10, // Opcode: ADDXCCC
/* 3900 */    MCD::OPC_FilterValue, 20, 7, 0, // Skip to: 3911
/* 3904 */    MCD::OPC_CheckPredicate, 2, 197, 11, // Skip to: 6921
/* 3908 */    MCD::OPC_Decode, 125, 10, // Opcode: ARRAY32
/* 3911 */    MCD::OPC_FilterValue, 22, 8, 0, // Skip to: 3923
/* 3915 */    MCD::OPC_CheckPredicate, 1, 186, 11, // Skip to: 6921
/* 3919 */    MCD::OPC_Decode, 206, 4, 10, // Opcode: UMULXHI
/* 3923 */    MCD::OPC_FilterValue, 23, 14, 0, // Skip to: 3941
/* 3927 */    MCD::OPC_CheckPredicate, 1, 174, 11, // Skip to: 6921
/* 3931 */    MCD::OPC_CheckField, 14, 5, 0, 168, 11, // Skip to: 6921
/* 3937 */    MCD::OPC_Decode, 158, 3, 54, // Opcode: LZCNT
/* 3941 */    MCD::OPC_FilterValue, 24, 7, 0, // Skip to: 3952
/* 3945 */    MCD::OPC_CheckPredicate, 2, 156, 11, // Skip to: 6921
/* 3949 */    MCD::OPC_Decode, 111, 10, // Opcode: ALIGNADDR
/* 3952 */    MCD::OPC_FilterValue, 25, 8, 0, // Skip to: 3964
/* 3956 */    MCD::OPC_CheckPredicate, 3, 145, 11, // Skip to: 6921
/* 3960 */    MCD::OPC_Decode, 132, 1, 10, // Opcode: BMASK
/* 3964 */    MCD::OPC_FilterValue, 26, 7, 0, // Skip to: 3975
/* 3968 */    MCD::OPC_CheckPredicate, 2, 133, 11, // Skip to: 6921
/* 3972 */    MCD::OPC_Decode, 112, 10, // Opcode: ALIGNADDRL
/* 3975 */    MCD::OPC_FilterValue, 27, 20, 0, // Skip to: 3999
/* 3979 */    MCD::OPC_CheckPredicate, 1, 122, 11, // Skip to: 6921
/* 3983 */    MCD::OPC_CheckField, 25, 5, 0, 116, 11, // Skip to: 6921
/* 3989 */    MCD::OPC_CheckField, 14, 5, 0, 110, 11, // Skip to: 6921
/* 3995 */    MCD::OPC_Decode, 181, 1, 55, // Opcode: CMASK8
/* 3999 */    MCD::OPC_FilterValue, 28, 8, 0, // Skip to: 4011
/* 4003 */    MCD::OPC_CheckPredicate, 3, 98, 11, // Skip to: 6921
/* 4007 */    MCD::OPC_Decode, 169, 1, 34, // Opcode: BSHUFFLE
/* 4011 */    MCD::OPC_FilterValue, 29, 20, 0, // Skip to: 4035
/* 4015 */    MCD::OPC_CheckPredicate, 1, 86, 11, // Skip to: 6921
/* 4019 */    MCD::OPC_CheckField, 25, 5, 0, 80, 11, // Skip to: 6921
/* 4025 */    MCD::OPC_CheckField, 14, 5, 0, 74, 11, // Skip to: 6921
/* 4031 */    MCD::OPC_Decode, 179, 1, 55, // Opcode: CMASK16
/* 4035 */    MCD::OPC_FilterValue, 31, 20, 0, // Skip to: 4059
/* 4039 */    MCD::OPC_CheckPredicate, 1, 62, 11, // Skip to: 6921
/* 4043 */    MCD::OPC_CheckField, 25, 5, 0, 56, 11, // Skip to: 6921
/* 4049 */    MCD::OPC_CheckField, 14, 5, 0, 50, 11, // Skip to: 6921
/* 4055 */    MCD::OPC_Decode, 180, 1, 55, // Opcode: CMASK32
/* 4059 */    MCD::OPC_FilterValue, 32, 8, 0, // Skip to: 4071
/* 4063 */    MCD::OPC_CheckPredicate, 2, 38, 11, // Skip to: 6921
/* 4067 */    MCD::OPC_Decode, 221, 1, 56, // Opcode: FCMPLE16
/* 4071 */    MCD::OPC_FilterValue, 33, 8, 0, // Skip to: 4083
/* 4075 */    MCD::OPC_CheckPredicate, 1, 26, 11, // Skip to: 6921
/* 4079 */    MCD::OPC_Decode, 207, 2, 34, // Opcode: FSLL16
/* 4083 */    MCD::OPC_FilterValue, 34, 8, 0, // Skip to: 4095
/* 4087 */    MCD::OPC_CheckPredicate, 2, 14, 11, // Skip to: 6921
/* 4091 */    MCD::OPC_Decode, 223, 1, 56, // Opcode: FCMPNE16
/* 4095 */    MCD::OPC_FilterValue, 35, 8, 0, // Skip to: 4107
/* 4099 */    MCD::OPC_CheckPredicate, 1, 2, 11, // Skip to: 6921
/* 4103 */    MCD::OPC_Decode, 219, 2, 34, // Opcode: FSRL16
/* 4107 */    MCD::OPC_FilterValue, 36, 8, 0, // Skip to: 4119
/* 4111 */    MCD::OPC_CheckPredicate, 2, 246, 10, // Skip to: 6921
/* 4115 */    MCD::OPC_Decode, 222, 1, 56, // Opcode: FCMPLE32
/* 4119 */    MCD::OPC_FilterValue, 37, 8, 0, // Skip to: 4131
/* 4123 */    MCD::OPC_CheckPredicate, 1, 234, 10, // Skip to: 6921
/* 4127 */    MCD::OPC_Decode, 208, 2, 34, // Opcode: FSLL32
/* 4131 */    MCD::OPC_FilterValue, 38, 8, 0, // Skip to: 4143
/* 4135 */    MCD::OPC_CheckPredicate, 2, 222, 10, // Skip to: 6921
/* 4139 */    MCD::OPC_Decode, 224, 1, 56, // Opcode: FCMPNE32
/* 4143 */    MCD::OPC_FilterValue, 39, 8, 0, // Skip to: 4155
/* 4147 */    MCD::OPC_CheckPredicate, 1, 210, 10, // Skip to: 6921
/* 4151 */    MCD::OPC_Decode, 220, 2, 34, // Opcode: FSRL32
/* 4155 */    MCD::OPC_FilterValue, 40, 8, 0, // Skip to: 4167
/* 4159 */    MCD::OPC_CheckPredicate, 2, 198, 10, // Skip to: 6921
/* 4163 */    MCD::OPC_Decode, 219, 1, 56, // Opcode: FCMPGT16
/* 4167 */    MCD::OPC_FilterValue, 41, 8, 0, // Skip to: 4179
/* 4171 */    MCD::OPC_CheckPredicate, 1, 186, 10, // Skip to: 6921
/* 4175 */    MCD::OPC_Decode, 205, 2, 34, // Opcode: FSLAS16
/* 4179 */    MCD::OPC_FilterValue, 42, 8, 0, // Skip to: 4191
/* 4183 */    MCD::OPC_CheckPredicate, 2, 174, 10, // Skip to: 6921
/* 4187 */    MCD::OPC_Decode, 217, 1, 56, // Opcode: FCMPEQ16
/* 4191 */    MCD::OPC_FilterValue, 43, 8, 0, // Skip to: 4203
/* 4195 */    MCD::OPC_CheckPredicate, 1, 162, 10, // Skip to: 6921
/* 4199 */    MCD::OPC_Decode, 213, 2, 34, // Opcode: FSRA16
/* 4203 */    MCD::OPC_FilterValue, 44, 8, 0, // Skip to: 4215
/* 4207 */    MCD::OPC_CheckPredicate, 2, 150, 10, // Skip to: 6921
/* 4211 */    MCD::OPC_Decode, 220, 1, 56, // Opcode: FCMPGT32
/* 4215 */    MCD::OPC_FilterValue, 45, 8, 0, // Skip to: 4227
/* 4219 */    MCD::OPC_CheckPredicate, 1, 138, 10, // Skip to: 6921
/* 4223 */    MCD::OPC_Decode, 206, 2, 34, // Opcode: FSLAS32
/* 4227 */    MCD::OPC_FilterValue, 46, 8, 0, // Skip to: 4239
/* 4231 */    MCD::OPC_CheckPredicate, 2, 126, 10, // Skip to: 6921
/* 4235 */    MCD::OPC_Decode, 218, 1, 56, // Opcode: FCMPEQ32
/* 4239 */    MCD::OPC_FilterValue, 47, 8, 0, // Skip to: 4251
/* 4243 */    MCD::OPC_CheckPredicate, 1, 114, 10, // Skip to: 6921
/* 4247 */    MCD::OPC_Decode, 214, 2, 34, // Opcode: FSRA32
/* 4251 */    MCD::OPC_FilterValue, 49, 8, 0, // Skip to: 4263
/* 4255 */    MCD::OPC_CheckPredicate, 2, 102, 10, // Skip to: 6921
/* 4259 */    MCD::OPC_Decode, 154, 2, 34, // Opcode: FMUL8X16
/* 4263 */    MCD::OPC_FilterValue, 51, 8, 0, // Skip to: 4275
/* 4267 */    MCD::OPC_CheckPredicate, 2, 90, 10, // Skip to: 6921
/* 4271 */    MCD::OPC_Decode, 156, 2, 34, // Opcode: FMUL8X16AU
/* 4275 */    MCD::OPC_FilterValue, 53, 8, 0, // Skip to: 4287
/* 4279 */    MCD::OPC_CheckPredicate, 2, 78, 10, // Skip to: 6921
/* 4283 */    MCD::OPC_Decode, 155, 2, 34, // Opcode: FMUL8X16AL
/* 4287 */    MCD::OPC_FilterValue, 54, 8, 0, // Skip to: 4299
/* 4291 */    MCD::OPC_CheckPredicate, 2, 66, 10, // Skip to: 6921
/* 4295 */    MCD::OPC_Decode, 152, 2, 34, // Opcode: FMUL8SUX16
/* 4299 */    MCD::OPC_FilterValue, 55, 8, 0, // Skip to: 4311
/* 4303 */    MCD::OPC_CheckPredicate, 2, 54, 10, // Skip to: 6921
/* 4307 */    MCD::OPC_Decode, 153, 2, 34, // Opcode: FMUL8ULX16
/* 4311 */    MCD::OPC_FilterValue, 56, 8, 0, // Skip to: 4323
/* 4315 */    MCD::OPC_CheckPredicate, 2, 42, 10, // Skip to: 6921
/* 4319 */    MCD::OPC_Decode, 158, 2, 34, // Opcode: FMULD8SUX16
/* 4323 */    MCD::OPC_FilterValue, 57, 8, 0, // Skip to: 4335
/* 4327 */    MCD::OPC_CheckPredicate, 2, 30, 10, // Skip to: 6921
/* 4331 */    MCD::OPC_Decode, 159, 2, 34, // Opcode: FMULD8ULX16
/* 4335 */    MCD::OPC_FilterValue, 58, 8, 0, // Skip to: 4347
/* 4339 */    MCD::OPC_CheckPredicate, 2, 18, 10, // Skip to: 6921
/* 4343 */    MCD::OPC_Decode, 189, 2, 34, // Opcode: FPACK32
/* 4347 */    MCD::OPC_FilterValue, 59, 14, 0, // Skip to: 4365
/* 4351 */    MCD::OPC_CheckPredicate, 2, 6, 10, // Skip to: 6921
/* 4355 */    MCD::OPC_CheckField, 14, 5, 0, 0, 10, // Skip to: 6921
/* 4361 */    MCD::OPC_Decode, 188, 2, 31, // Opcode: FPACK16
/* 4365 */    MCD::OPC_FilterValue, 61, 14, 0, // Skip to: 4383
/* 4369 */    MCD::OPC_CheckPredicate, 2, 244, 9, // Skip to: 6921
/* 4373 */    MCD::OPC_CheckField, 14, 5, 0, 238, 9, // Skip to: 6921
/* 4379 */    MCD::OPC_Decode, 190, 2, 31, // Opcode: FPACKFIX
/* 4383 */    MCD::OPC_FilterValue, 62, 8, 0, // Skip to: 4395
/* 4387 */    MCD::OPC_CheckPredicate, 2, 226, 9, // Skip to: 6921
/* 4391 */    MCD::OPC_Decode, 199, 3, 34, // Opcode: PDIST
/* 4395 */    MCD::OPC_FilterValue, 63, 8, 0, // Skip to: 4407
/* 4399 */    MCD::OPC_CheckPredicate, 1, 214, 9, // Skip to: 6921
/* 4403 */    MCD::OPC_Decode, 200, 3, 34, // Opcode: PDISTN
/* 4407 */    MCD::OPC_FilterValue, 64, 8, 0, // Skip to: 4419
/* 4411 */    MCD::OPC_CheckPredicate, 1, 202, 9, // Skip to: 6921
/* 4415 */    MCD::OPC_Decode, 249, 1, 34, // Opcode: FMEAN16
/* 4419 */    MCD::OPC_FilterValue, 66, 8, 0, // Skip to: 4431
/* 4423 */    MCD::OPC_CheckPredicate, 1, 190, 9, // Skip to: 6921
/* 4427 */    MCD::OPC_Decode, 195, 2, 34, // Opcode: FPADD64
/* 4431 */    MCD::OPC_FilterValue, 68, 8, 0, // Skip to: 4443
/* 4435 */    MCD::OPC_CheckPredicate, 1, 178, 9, // Skip to: 6921
/* 4439 */    MCD::OPC_Decode, 215, 1, 34, // Opcode: FCHKSM16
/* 4443 */    MCD::OPC_FilterValue, 72, 8, 0, // Skip to: 4455
/* 4447 */    MCD::OPC_CheckPredicate, 2, 166, 9, // Skip to: 6921
/* 4451 */    MCD::OPC_Decode, 206, 1, 34, // Opcode: FALIGNADATA
/* 4455 */    MCD::OPC_FilterValue, 75, 8, 0, // Skip to: 4467
/* 4459 */    MCD::OPC_CheckPredicate, 2, 154, 9, // Skip to: 6921
/* 4463 */    MCD::OPC_Decode, 196, 2, 34, // Opcode: FPMERGE
/* 4467 */    MCD::OPC_FilterValue, 77, 14, 0, // Skip to: 4485
/* 4471 */    MCD::OPC_CheckPredicate, 2, 142, 9, // Skip to: 6921
/* 4475 */    MCD::OPC_CheckField, 14, 5, 0, 136, 9, // Skip to: 6921
/* 4481 */    MCD::OPC_Decode, 235, 1, 31, // Opcode: FEXPAND
/* 4485 */    MCD::OPC_FilterValue, 80, 8, 0, // Skip to: 4497
/* 4489 */    MCD::OPC_CheckPredicate, 2, 124, 9, // Skip to: 6921
/* 4493 */    MCD::OPC_Decode, 191, 2, 34, // Opcode: FPADD16
/* 4497 */    MCD::OPC_FilterValue, 81, 8, 0, // Skip to: 4509
/* 4501 */    MCD::OPC_CheckPredicate, 2, 112, 9, // Skip to: 6921
/* 4505 */    MCD::OPC_Decode, 192, 2, 34, // Opcode: FPADD16S
/* 4509 */    MCD::OPC_FilterValue, 82, 8, 0, // Skip to: 4521
/* 4513 */    MCD::OPC_CheckPredicate, 2, 100, 9, // Skip to: 6921
/* 4517 */    MCD::OPC_Decode, 193, 2, 34, // Opcode: FPADD32
/* 4521 */    MCD::OPC_FilterValue, 83, 8, 0, // Skip to: 4533
/* 4525 */    MCD::OPC_CheckPredicate, 2, 88, 9, // Skip to: 6921
/* 4529 */    MCD::OPC_Decode, 194, 2, 34, // Opcode: FPADD32S
/* 4533 */    MCD::OPC_FilterValue, 84, 8, 0, // Skip to: 4545
/* 4537 */    MCD::OPC_CheckPredicate, 2, 76, 9, // Skip to: 6921
/* 4541 */    MCD::OPC_Decode, 197, 2, 34, // Opcode: FPSUB16
/* 4545 */    MCD::OPC_FilterValue, 85, 8, 0, // Skip to: 4557
/* 4549 */    MCD::OPC_CheckPredicate, 2, 64, 9, // Skip to: 6921
/* 4553 */    MCD::OPC_Decode, 198, 2, 34, // Opcode: FPSUB16S
/* 4557 */    MCD::OPC_FilterValue, 86, 8, 0, // Skip to: 4569
/* 4561 */    MCD::OPC_CheckPredicate, 2, 52, 9, // Skip to: 6921
/* 4565 */    MCD::OPC_Decode, 199, 2, 34, // Opcode: FPSUB32
/* 4569 */    MCD::OPC_FilterValue, 87, 8, 0, // Skip to: 4581
/* 4573 */    MCD::OPC_CheckPredicate, 2, 40, 9, // Skip to: 6921
/* 4577 */    MCD::OPC_Decode, 200, 2, 34, // Opcode: FPSUB32S
/* 4581 */    MCD::OPC_FilterValue, 96, 20, 0, // Skip to: 4605
/* 4585 */    MCD::OPC_CheckPredicate, 2, 28, 9, // Skip to: 6921
/* 4589 */    MCD::OPC_CheckField, 14, 5, 0, 22, 9, // Skip to: 6921
/* 4595 */    MCD::OPC_CheckField, 0, 5, 0, 16, 9, // Skip to: 6921
/* 4601 */    MCD::OPC_Decode, 235, 2, 57, // Opcode: FZERO
/* 4605 */    MCD::OPC_FilterValue, 97, 20, 0, // Skip to: 4629
/* 4609 */    MCD::OPC_CheckPredicate, 2, 4, 9, // Skip to: 6921
/* 4613 */    MCD::OPC_CheckField, 14, 5, 0, 254, 8, // Skip to: 6921
/* 4619 */    MCD::OPC_CheckField, 0, 5, 0, 248, 8, // Skip to: 6921
/* 4625 */    MCD::OPC_Decode, 236, 2, 58, // Opcode: FZEROS
/* 4629 */    MCD::OPC_FilterValue, 98, 8, 0, // Skip to: 4641
/* 4633 */    MCD::OPC_CheckPredicate, 2, 236, 8, // Skip to: 6921
/* 4637 */    MCD::OPC_Decode, 173, 2, 34, // Opcode: FNOR
/* 4641 */    MCD::OPC_FilterValue, 99, 8, 0, // Skip to: 4653
/* 4645 */    MCD::OPC_CheckPredicate, 2, 224, 8, // Skip to: 6921
/* 4649 */    MCD::OPC_Decode, 174, 2, 33, // Opcode: FNORS
/* 4653 */    MCD::OPC_FilterValue, 100, 8, 0, // Skip to: 4665
/* 4657 */    MCD::OPC_CheckPredicate, 2, 212, 8, // Skip to: 6921
/* 4661 */    MCD::OPC_Decode, 210, 1, 34, // Opcode: FANDNOT2
/* 4665 */    MCD::OPC_FilterValue, 101, 8, 0, // Skip to: 4677
/* 4669 */    MCD::OPC_CheckPredicate, 2, 200, 8, // Skip to: 6921
/* 4673 */    MCD::OPC_Decode, 211, 1, 33, // Opcode: FANDNOT2S
/* 4677 */    MCD::OPC_FilterValue, 102, 14, 0, // Skip to: 4695
/* 4681 */    MCD::OPC_CheckPredicate, 2, 188, 8, // Skip to: 6921
/* 4685 */    MCD::OPC_CheckField, 14, 5, 0, 182, 8, // Skip to: 6921
/* 4691 */    MCD::OPC_Decode, 177, 2, 31, // Opcode: FNOT2
/* 4695 */    MCD::OPC_FilterValue, 103, 14, 0, // Skip to: 4713
/* 4699 */    MCD::OPC_CheckPredicate, 2, 170, 8, // Skip to: 6921
/* 4703 */    MCD::OPC_CheckField, 14, 5, 0, 164, 8, // Skip to: 6921
/* 4709 */    MCD::OPC_Decode, 178, 2, 30, // Opcode: FNOT2S
/* 4713 */    MCD::OPC_FilterValue, 104, 8, 0, // Skip to: 4725
/* 4717 */    MCD::OPC_CheckPredicate, 2, 152, 8, // Skip to: 6921
/* 4721 */    MCD::OPC_Decode, 208, 1, 34, // Opcode: FANDNOT1
/* 4725 */    MCD::OPC_FilterValue, 105, 8, 0, // Skip to: 4737
/* 4729 */    MCD::OPC_CheckPredicate, 2, 140, 8, // Skip to: 6921
/* 4733 */    MCD::OPC_Decode, 209, 1, 33, // Opcode: FANDNOT1S
/* 4737 */    MCD::OPC_FilterValue, 106, 14, 0, // Skip to: 4755
/* 4741 */    MCD::OPC_CheckPredicate, 2, 128, 8, // Skip to: 6921
/* 4745 */    MCD::OPC_CheckField, 0, 5, 0, 122, 8, // Skip to: 6921
/* 4751 */    MCD::OPC_Decode, 175, 2, 59, // Opcode: FNOT1
/* 4755 */    MCD::OPC_FilterValue, 107, 14, 0, // Skip to: 4773
/* 4759 */    MCD::OPC_CheckPredicate, 2, 110, 8, // Skip to: 6921
/* 4763 */    MCD::OPC_CheckField, 0, 5, 0, 104, 8, // Skip to: 6921
/* 4769 */    MCD::OPC_Decode, 176, 2, 60, // Opcode: FNOT1S
/* 4773 */    MCD::OPC_FilterValue, 108, 8, 0, // Skip to: 4785
/* 4777 */    MCD::OPC_CheckPredicate, 2, 92, 8, // Skip to: 6921
/* 4781 */    MCD::OPC_Decode, 230, 2, 34, // Opcode: FXOR
/* 4785 */    MCD::OPC_FilterValue, 109, 8, 0, // Skip to: 4797
/* 4789 */    MCD::OPC_CheckPredicate, 2, 80, 8, // Skip to: 6921
/* 4793 */    MCD::OPC_Decode, 231, 2, 33, // Opcode: FXORS
/* 4797 */    MCD::OPC_FilterValue, 110, 8, 0, // Skip to: 4809
/* 4801 */    MCD::OPC_CheckPredicate, 2, 68, 8, // Skip to: 6921
/* 4805 */    MCD::OPC_Decode, 164, 2, 34, // Opcode: FNAND
/* 4809 */    MCD::OPC_FilterValue, 111, 8, 0, // Skip to: 4821
/* 4813 */    MCD::OPC_CheckPredicate, 2, 56, 8, // Skip to: 6921
/* 4817 */    MCD::OPC_Decode, 165, 2, 33, // Opcode: FNANDS
/* 4821 */    MCD::OPC_FilterValue, 112, 8, 0, // Skip to: 4833
/* 4825 */    MCD::OPC_CheckPredicate, 2, 44, 8, // Skip to: 6921
/* 4829 */    MCD::OPC_Decode, 207, 1, 34, // Opcode: FAND
/* 4833 */    MCD::OPC_FilterValue, 113, 8, 0, // Skip to: 4845
/* 4837 */    MCD::OPC_CheckPredicate, 2, 32, 8, // Skip to: 6921
/* 4841 */    MCD::OPC_Decode, 212, 1, 33, // Opcode: FANDS
/* 4845 */    MCD::OPC_FilterValue, 114, 8, 0, // Skip to: 4857
/* 4849 */    MCD::OPC_CheckPredicate, 2, 20, 8, // Skip to: 6921
/* 4853 */    MCD::OPC_Decode, 228, 2, 34, // Opcode: FXNOR
/* 4857 */    MCD::OPC_FilterValue, 115, 8, 0, // Skip to: 4869
/* 4861 */    MCD::OPC_CheckPredicate, 2, 8, 8, // Skip to: 6921
/* 4865 */    MCD::OPC_Decode, 229, 2, 33, // Opcode: FXNORS
/* 4869 */    MCD::OPC_FilterValue, 116, 14, 0, // Skip to: 4887
/* 4873 */    MCD::OPC_CheckPredicate, 2, 252, 7, // Skip to: 6921
/* 4877 */    MCD::OPC_CheckField, 0, 5, 0, 246, 7, // Skip to: 6921
/* 4883 */    MCD::OPC_Decode, 215, 2, 59, // Opcode: FSRC1
/* 4887 */    MCD::OPC_FilterValue, 117, 14, 0, // Skip to: 4905
/* 4891 */    MCD::OPC_CheckPredicate, 2, 234, 7, // Skip to: 6921
/* 4895 */    MCD::OPC_CheckField, 0, 5, 0, 228, 7, // Skip to: 6921
/* 4901 */    MCD::OPC_Decode, 216, 2, 60, // Opcode: FSRC1S
/* 4905 */    MCD::OPC_FilterValue, 118, 8, 0, // Skip to: 4917
/* 4909 */    MCD::OPC_CheckPredicate, 2, 216, 7, // Skip to: 6921
/* 4913 */    MCD::OPC_Decode, 185, 2, 34, // Opcode: FORNOT2
/* 4917 */    MCD::OPC_FilterValue, 119, 8, 0, // Skip to: 4929
/* 4921 */    MCD::OPC_CheckPredicate, 2, 204, 7, // Skip to: 6921
/* 4925 */    MCD::OPC_Decode, 186, 2, 33, // Opcode: FORNOT2S
/* 4929 */    MCD::OPC_FilterValue, 120, 14, 0, // Skip to: 4947
/* 4933 */    MCD::OPC_CheckPredicate, 2, 192, 7, // Skip to: 6921
/* 4937 */    MCD::OPC_CheckField, 14, 5, 0, 186, 7, // Skip to: 6921
/* 4943 */    MCD::OPC_Decode, 217, 2, 31, // Opcode: FSRC2
/* 4947 */    MCD::OPC_FilterValue, 121, 14, 0, // Skip to: 4965
/* 4951 */    MCD::OPC_CheckPredicate, 2, 174, 7, // Skip to: 6921
/* 4955 */    MCD::OPC_CheckField, 14, 5, 0, 168, 7, // Skip to: 6921
/* 4961 */    MCD::OPC_Decode, 218, 2, 30, // Opcode: FSRC2S
/* 4965 */    MCD::OPC_FilterValue, 122, 8, 0, // Skip to: 4977
/* 4969 */    MCD::OPC_CheckPredicate, 2, 156, 7, // Skip to: 6921
/* 4973 */    MCD::OPC_Decode, 183, 2, 34, // Opcode: FORNOT1
/* 4977 */    MCD::OPC_FilterValue, 123, 8, 0, // Skip to: 4989
/* 4981 */    MCD::OPC_CheckPredicate, 2, 144, 7, // Skip to: 6921
/* 4985 */    MCD::OPC_Decode, 184, 2, 33, // Opcode: FORNOT1S
/* 4989 */    MCD::OPC_FilterValue, 124, 8, 0, // Skip to: 5001
/* 4993 */    MCD::OPC_CheckPredicate, 2, 132, 7, // Skip to: 6921
/* 4997 */    MCD::OPC_Decode, 182, 2, 34, // Opcode: FOR
/* 5001 */    MCD::OPC_FilterValue, 125, 8, 0, // Skip to: 5013
/* 5005 */    MCD::OPC_CheckPredicate, 2, 120, 7, // Skip to: 6921
/* 5009 */    MCD::OPC_Decode, 187, 2, 33, // Opcode: FORS
/* 5013 */    MCD::OPC_FilterValue, 126, 20, 0, // Skip to: 5037
/* 5017 */    MCD::OPC_CheckPredicate, 2, 108, 7, // Skip to: 6921
/* 5021 */    MCD::OPC_CheckField, 14, 5, 0, 102, 7, // Skip to: 6921
/* 5027 */    MCD::OPC_CheckField, 0, 5, 0, 96, 7, // Skip to: 6921
/* 5033 */    MCD::OPC_Decode, 180, 2, 57, // Opcode: FONE
/* 5037 */    MCD::OPC_FilterValue, 127, 20, 0, // Skip to: 5061
/* 5041 */    MCD::OPC_CheckPredicate, 2, 84, 7, // Skip to: 6921
/* 5045 */    MCD::OPC_CheckField, 14, 5, 0, 78, 7, // Skip to: 6921
/* 5051 */    MCD::OPC_CheckField, 0, 5, 0, 72, 7, // Skip to: 6921
/* 5057 */    MCD::OPC_Decode, 181, 2, 58, // Opcode: FONES
/* 5061 */    MCD::OPC_FilterValue, 128, 1, 26, 0, // Skip to: 5092
/* 5066 */    MCD::OPC_CheckPredicate, 2, 59, 7, // Skip to: 6921
/* 5070 */    MCD::OPC_CheckField, 25, 5, 0, 53, 7, // Skip to: 6921
/* 5076 */    MCD::OPC_CheckField, 14, 5, 0, 47, 7, // Skip to: 6921
/* 5082 */    MCD::OPC_CheckField, 0, 5, 0, 41, 7, // Skip to: 6921
/* 5088 */    MCD::OPC_Decode, 232, 3, 4, // Opcode: SHUTDOWN
/* 5092 */    MCD::OPC_FilterValue, 129, 1, 26, 0, // Skip to: 5123
/* 5097 */    MCD::OPC_CheckPredicate, 3, 28, 7, // Skip to: 6921
/* 5101 */    MCD::OPC_CheckField, 25, 5, 0, 22, 7, // Skip to: 6921
/* 5107 */    MCD::OPC_CheckField, 14, 5, 0, 16, 7, // Skip to: 6921
/* 5113 */    MCD::OPC_CheckField, 0, 5, 0, 10, 7, // Skip to: 6921
/* 5119 */    MCD::OPC_Decode, 233, 3, 4, // Opcode: SIAM
/* 5123 */    MCD::OPC_FilterValue, 144, 2, 14, 0, // Skip to: 5142
/* 5128 */    MCD::OPC_CheckPredicate, 1, 253, 6, // Skip to: 6921
/* 5132 */    MCD::OPC_CheckField, 14, 5, 0, 247, 6, // Skip to: 6921
/* 5138 */    MCD::OPC_Decode, 160, 3, 61, // Opcode: MOVDTOX
/* 5142 */    MCD::OPC_FilterValue, 145, 2, 14, 0, // Skip to: 5161
/* 5147 */    MCD::OPC_CheckPredicate, 1, 234, 6, // Skip to: 6921
/* 5151 */    MCD::OPC_CheckField, 14, 5, 0, 228, 6, // Skip to: 6921
/* 5157 */    MCD::OPC_Decode, 178, 3, 61, // Opcode: MOVSTOUW
/* 5161 */    MCD::OPC_FilterValue, 147, 2, 14, 0, // Skip to: 5180
/* 5166 */    MCD::OPC_CheckPredicate, 1, 215, 6, // Skip to: 6921
/* 5170 */    MCD::OPC_CheckField, 14, 5, 0, 209, 6, // Skip to: 6921
/* 5176 */    MCD::OPC_Decode, 177, 3, 61, // Opcode: MOVSTOSW
/* 5180 */    MCD::OPC_FilterValue, 149, 2, 8, 0, // Skip to: 5193
/* 5185 */    MCD::OPC_CheckPredicate, 1, 196, 6, // Skip to: 6921
/* 5189 */    MCD::OPC_Decode, 231, 4, 10, // Opcode: XMULX
/* 5193 */    MCD::OPC_FilterValue, 151, 2, 8, 0, // Skip to: 5206
/* 5198 */    MCD::OPC_CheckPredicate, 1, 183, 6, // Skip to: 6921
/* 5202 */    MCD::OPC_Decode, 232, 4, 10, // Opcode: XMULXHI
/* 5206 */    MCD::OPC_FilterValue, 152, 2, 14, 0, // Skip to: 5225
/* 5211 */    MCD::OPC_CheckPredicate, 1, 170, 6, // Skip to: 6921
/* 5215 */    MCD::OPC_CheckField, 14, 5, 0, 164, 6, // Skip to: 6921
/* 5221 */    MCD::OPC_Decode, 182, 3, 62, // Opcode: MOVXTOD
/* 5225 */    MCD::OPC_FilterValue, 153, 2, 14, 0, // Skip to: 5244
/* 5230 */    MCD::OPC_CheckPredicate, 1, 151, 6, // Skip to: 6921
/* 5234 */    MCD::OPC_CheckField, 14, 5, 0, 145, 6, // Skip to: 6921
/* 5240 */    MCD::OPC_Decode, 179, 3, 62, // Opcode: MOVWTOS
/* 5244 */    MCD::OPC_FilterValue, 209, 2, 8, 0, // Skip to: 5257
/* 5249 */    MCD::OPC_CheckPredicate, 1, 132, 6, // Skip to: 6921
/* 5253 */    MCD::OPC_Decode, 244, 1, 52, // Opcode: FLCMPS
/* 5257 */    MCD::OPC_FilterValue, 210, 2, 123, 6, // Skip to: 6921
/* 5262 */    MCD::OPC_CheckPredicate, 1, 119, 6, // Skip to: 6921
/* 5266 */    MCD::OPC_Decode, 243, 1, 52, // Opcode: FLCMPD
/* 5270 */    MCD::OPC_FilterValue, 56, 25, 0, // Skip to: 5299
/* 5274 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 5277 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 5291
/* 5281 */    MCD::OPC_CheckField, 5, 8, 0, 98, 6, // Skip to: 6921
/* 5287 */    MCD::OPC_Decode, 239, 2, 63, // Opcode: JMPLrr
/* 5291 */    MCD::OPC_FilterValue, 1, 90, 6, // Skip to: 6921
/* 5295 */    MCD::OPC_Decode, 238, 2, 63, // Opcode: JMPLri
/* 5299 */    MCD::OPC_FilterValue, 57, 37, 0, // Skip to: 5340
/* 5303 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 5306 */    MCD::OPC_FilterValue, 0, 16, 0, // Skip to: 5326
/* 5310 */    MCD::OPC_CheckField, 25, 5, 0, 69, 6, // Skip to: 6921
/* 5316 */    MCD::OPC_CheckField, 5, 8, 0, 63, 6, // Skip to: 6921
/* 5322 */    MCD::OPC_Decode, 212, 3, 64, // Opcode: RETTrr
/* 5326 */    MCD::OPC_FilterValue, 1, 55, 6, // Skip to: 6921
/* 5330 */    MCD::OPC_CheckField, 25, 5, 0, 49, 6, // Skip to: 6921
/* 5336 */    MCD::OPC_Decode, 211, 3, 64, // Opcode: RETTri
/* 5340 */    MCD::OPC_FilterValue, 58, 84, 0, // Skip to: 5428
/* 5344 */    MCD::OPC_ExtractField, 8, 6,  // Inst{13-8} ...
/* 5347 */    MCD::OPC_FilterValue, 16, 16, 0, // Skip to: 5367
/* 5351 */    MCD::OPC_CheckField, 29, 1, 0, 28, 6, // Skip to: 6921
/* 5357 */    MCD::OPC_CheckField, 5, 3, 0, 22, 6, // Skip to: 6921
/* 5363 */    MCD::OPC_Decode, 195, 4, 65, // Opcode: TXCCrr
/* 5367 */    MCD::OPC_FilterValue, 32, 43, 0, // Skip to: 5414
/* 5371 */    MCD::OPC_ExtractField, 0, 8,  // Inst{7-0} ...
/* 5374 */    MCD::OPC_FilterValue, 3, 16, 0, // Skip to: 5394
/* 5378 */    MCD::OPC_CheckField, 25, 5, 0, 1, 6, // Skip to: 6921
/* 5384 */    MCD::OPC_CheckField, 14, 5, 1, 251, 5, // Skip to: 6921
/* 5390 */    MCD::OPC_Decode, 175, 4, 4, // Opcode: TA3
/* 5394 */    MCD::OPC_FilterValue, 5, 243, 5, // Skip to: 6921
/* 5398 */    MCD::OPC_CheckField, 25, 5, 8, 237, 5, // Skip to: 6921
/* 5404 */    MCD::OPC_CheckField, 14, 5, 0, 231, 5, // Skip to: 6921
/* 5410 */    MCD::OPC_Decode, 176, 4, 4, // Opcode: TA5
/* 5414 */    MCD::OPC_FilterValue, 48, 223, 5, // Skip to: 6921
/* 5418 */    MCD::OPC_CheckField, 29, 1, 0, 217, 5, // Skip to: 6921
/* 5424 */    MCD::OPC_Decode, 194, 4, 66, // Opcode: TXCCri
/* 5428 */    MCD::OPC_FilterValue, 59, 55, 0, // Skip to: 5487
/* 5432 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 5435 */    MCD::OPC_FilterValue, 0, 34, 0, // Skip to: 5473
/* 5439 */    MCD::OPC_ExtractField, 5, 8,  // Inst{12-5} ...
/* 5442 */    MCD::OPC_FilterValue, 0, 195, 5, // Skip to: 6921
/* 5446 */    MCD::OPC_ExtractField, 25, 5,  // Inst{29-25} ...
/* 5449 */    MCD::OPC_FilterValue, 0, 188, 5, // Skip to: 6921
/* 5453 */    MCD::OPC_CheckField, 14, 5, 0, 10, 0, // Skip to: 5469
/* 5459 */    MCD::OPC_CheckField, 0, 5, 0, 4, 0, // Skip to: 5469
/* 5465 */    MCD::OPC_Decode, 245, 1, 4, // Opcode: FLUSH
/* 5469 */    MCD::OPC_Decode, 248, 1, 4, // Opcode: FLUSHrr
/* 5473 */    MCD::OPC_FilterValue, 1, 164, 5, // Skip to: 6921
/* 5477 */    MCD::OPC_CheckField, 25, 5, 0, 158, 5, // Skip to: 6921
/* 5483 */    MCD::OPC_Decode, 247, 1, 4, // Opcode: FLUSHri
/* 5487 */    MCD::OPC_FilterValue, 60, 25, 0, // Skip to: 5516
/* 5491 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 5494 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 5508
/* 5498 */    MCD::OPC_CheckField, 5, 8, 0, 137, 5, // Skip to: 6921
/* 5504 */    MCD::OPC_Decode, 214, 3, 8, // Opcode: SAVErr
/* 5508 */    MCD::OPC_FilterValue, 1, 129, 5, // Skip to: 6921
/* 5512 */    MCD::OPC_Decode, 213, 3, 9, // Opcode: SAVEri
/* 5516 */    MCD::OPC_FilterValue, 61, 25, 0, // Skip to: 5545
/* 5520 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 5523 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 5537
/* 5527 */    MCD::OPC_CheckField, 5, 8, 0, 108, 5, // Skip to: 6921
/* 5533 */    MCD::OPC_Decode, 208, 3, 8, // Opcode: RESTORErr
/* 5537 */    MCD::OPC_FilterValue, 1, 100, 5, // Skip to: 6921
/* 5541 */    MCD::OPC_Decode, 207, 3, 9, // Opcode: RESTOREri
/* 5545 */    MCD::OPC_FilterValue, 62, 25, 0, // Skip to: 5574
/* 5549 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 5552 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 5566
/* 5556 */    MCD::OPC_CheckField, 5, 8, 0, 79, 5, // Skip to: 6921
/* 5562 */    MCD::OPC_Decode, 203, 4, 8, // Opcode: UMACrr
/* 5566 */    MCD::OPC_FilterValue, 1, 71, 5, // Skip to: 6921
/* 5570 */    MCD::OPC_Decode, 202, 4, 9, // Opcode: UMACri
/* 5574 */    MCD::OPC_FilterValue, 63, 63, 5, // Skip to: 6921
/* 5578 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 5581 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 5595
/* 5585 */    MCD::OPC_CheckField, 5, 8, 0, 50, 5, // Skip to: 6921
/* 5591 */    MCD::OPC_Decode, 239, 3, 8, // Opcode: SMACrr
/* 5595 */    MCD::OPC_FilterValue, 1, 42, 5, // Skip to: 6921
/* 5599 */    MCD::OPC_Decode, 238, 3, 9, // Opcode: SMACri
/* 5603 */    MCD::OPC_FilterValue, 3, 34, 5, // Skip to: 6921
/* 5607 */    MCD::OPC_ExtractField, 19, 6,  // Inst{24-19} ...
/* 5610 */    MCD::OPC_FilterValue, 0, 25, 0, // Skip to: 5639
/* 5614 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 5617 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 5631
/* 5621 */    MCD::OPC_CheckField, 5, 8, 0, 14, 5, // Skip to: 6921
/* 5627 */    MCD::OPC_Decode, 155, 3, 67, // Opcode: LDrr
/* 5631 */    MCD::OPC_FilterValue, 1, 6, 5, // Skip to: 6921
/* 5635 */    MCD::OPC_Decode, 154, 3, 67, // Opcode: LDri
/* 5639 */    MCD::OPC_FilterValue, 1, 25, 0, // Skip to: 5668
/* 5643 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 5646 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 5660
/* 5650 */    MCD::OPC_CheckField, 5, 8, 0, 241, 4, // Skip to: 6921
/* 5656 */    MCD::OPC_Decode, 146, 3, 67, // Opcode: LDUBrr
/* 5660 */    MCD::OPC_FilterValue, 1, 233, 4, // Skip to: 6921
/* 5664 */    MCD::OPC_Decode, 145, 3, 67, // Opcode: LDUBri
/* 5668 */    MCD::OPC_FilterValue, 2, 25, 0, // Skip to: 5697
/* 5672 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 5675 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 5689
/* 5679 */    MCD::OPC_CheckField, 5, 8, 0, 212, 4, // Skip to: 6921
/* 5685 */    MCD::OPC_Decode, 149, 3, 67, // Opcode: LDUHrr
/* 5689 */    MCD::OPC_FilterValue, 1, 204, 4, // Skip to: 6921
/* 5693 */    MCD::OPC_Decode, 148, 3, 67, // Opcode: LDUHri
/* 5697 */    MCD::OPC_FilterValue, 3, 25, 0, // Skip to: 5726
/* 5701 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 5704 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 5718
/* 5708 */    MCD::OPC_CheckField, 5, 8, 0, 183, 4, // Skip to: 6921
/* 5714 */    MCD::OPC_Decode, 252, 2, 68, // Opcode: LDDrr
/* 5718 */    MCD::OPC_FilterValue, 1, 175, 4, // Skip to: 6921
/* 5722 */    MCD::OPC_Decode, 251, 2, 68, // Opcode: LDDri
/* 5726 */    MCD::OPC_FilterValue, 4, 25, 0, // Skip to: 5755
/* 5730 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 5733 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 5747
/* 5737 */    MCD::OPC_CheckField, 5, 8, 0, 154, 4, // Skip to: 6921
/* 5743 */    MCD::OPC_Decode, 161, 4, 69, // Opcode: STrr
/* 5747 */    MCD::OPC_FilterValue, 1, 146, 4, // Skip to: 6921
/* 5751 */    MCD::OPC_Decode, 160, 4, 69, // Opcode: STri
/* 5755 */    MCD::OPC_FilterValue, 5, 25, 0, // Skip to: 5784
/* 5759 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 5762 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 5776
/* 5766 */    MCD::OPC_CheckField, 5, 8, 0, 125, 4, // Skip to: 6921
/* 5772 */    MCD::OPC_Decode, 128, 4, 69, // Opcode: STBrr
/* 5776 */    MCD::OPC_FilterValue, 1, 117, 4, // Skip to: 6921
/* 5780 */    MCD::OPC_Decode, 255, 3, 69, // Opcode: STBri
/* 5784 */    MCD::OPC_FilterValue, 6, 25, 0, // Skip to: 5813
/* 5788 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 5791 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 5805
/* 5795 */    MCD::OPC_CheckField, 5, 8, 0, 96, 4, // Skip to: 6921
/* 5801 */    MCD::OPC_Decode, 152, 4, 69, // Opcode: STHrr
/* 5805 */    MCD::OPC_FilterValue, 1, 88, 4, // Skip to: 6921
/* 5809 */    MCD::OPC_Decode, 151, 4, 69, // Opcode: STHri
/* 5813 */    MCD::OPC_FilterValue, 7, 25, 0, // Skip to: 5842
/* 5817 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 5820 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 5834
/* 5824 */    MCD::OPC_CheckField, 5, 8, 0, 67, 4, // Skip to: 6921
/* 5830 */    MCD::OPC_Decode, 144, 4, 70, // Opcode: STDrr
/* 5834 */    MCD::OPC_FilterValue, 1, 59, 4, // Skip to: 6921
/* 5838 */    MCD::OPC_Decode, 143, 4, 70, // Opcode: STDri
/* 5842 */    MCD::OPC_FilterValue, 8, 25, 0, // Skip to: 5871
/* 5846 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 5849 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 5863
/* 5853 */    MCD::OPC_CheckField, 5, 8, 0, 38, 4, // Skip to: 6921
/* 5859 */    MCD::OPC_Decode, 143, 3, 67, // Opcode: LDSWrr
/* 5863 */    MCD::OPC_FilterValue, 1, 30, 4, // Skip to: 6921
/* 5867 */    MCD::OPC_Decode, 142, 3, 67, // Opcode: LDSWri
/* 5871 */    MCD::OPC_FilterValue, 9, 25, 0, // Skip to: 5900
/* 5875 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 5878 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 5892
/* 5882 */    MCD::OPC_CheckField, 5, 8, 0, 9, 4, // Skip to: 6921
/* 5888 */    MCD::OPC_Decode, 135, 3, 67, // Opcode: LDSBrr
/* 5892 */    MCD::OPC_FilterValue, 1, 1, 4, // Skip to: 6921
/* 5896 */    MCD::OPC_Decode, 134, 3, 67, // Opcode: LDSBri
/* 5900 */    MCD::OPC_FilterValue, 10, 25, 0, // Skip to: 5929
/* 5904 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 5907 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 5921
/* 5911 */    MCD::OPC_CheckField, 5, 8, 0, 236, 3, // Skip to: 6921
/* 5917 */    MCD::OPC_Decode, 138, 3, 67, // Opcode: LDSHrr
/* 5921 */    MCD::OPC_FilterValue, 1, 228, 3, // Skip to: 6921
/* 5925 */    MCD::OPC_Decode, 137, 3, 67, // Opcode: LDSHri
/* 5929 */    MCD::OPC_FilterValue, 11, 25, 0, // Skip to: 5958
/* 5933 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 5936 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 5950
/* 5940 */    MCD::OPC_CheckField, 5, 8, 0, 207, 3, // Skip to: 6921
/* 5946 */    MCD::OPC_Decode, 153, 3, 67, // Opcode: LDXrr
/* 5950 */    MCD::OPC_FilterValue, 1, 199, 3, // Skip to: 6921
/* 5954 */    MCD::OPC_Decode, 152, 3, 67, // Opcode: LDXri
/* 5958 */    MCD::OPC_FilterValue, 13, 25, 0, // Skip to: 5987
/* 5962 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 5965 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 5979
/* 5969 */    MCD::OPC_CheckField, 5, 8, 0, 178, 3, // Skip to: 6921
/* 5975 */    MCD::OPC_Decode, 141, 3, 4, // Opcode: LDSTUBrr
/* 5979 */    MCD::OPC_FilterValue, 1, 170, 3, // Skip to: 6921
/* 5983 */    MCD::OPC_Decode, 140, 3, 4, // Opcode: LDSTUBri
/* 5987 */    MCD::OPC_FilterValue, 14, 25, 0, // Skip to: 6016
/* 5991 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 5994 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 6008
/* 5998 */    MCD::OPC_CheckField, 5, 8, 0, 149, 3, // Skip to: 6921
/* 6004 */    MCD::OPC_Decode, 159, 4, 69, // Opcode: STXrr
/* 6008 */    MCD::OPC_FilterValue, 1, 141, 3, // Skip to: 6921
/* 6012 */    MCD::OPC_Decode, 158, 4, 69, // Opcode: STXri
/* 6016 */    MCD::OPC_FilterValue, 15, 25, 0, // Skip to: 6045
/* 6020 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 6023 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 6037
/* 6027 */    MCD::OPC_CheckField, 5, 8, 0, 120, 3, // Skip to: 6921
/* 6033 */    MCD::OPC_Decode, 174, 4, 71, // Opcode: SWAPrr
/* 6037 */    MCD::OPC_FilterValue, 1, 112, 3, // Skip to: 6921
/* 6041 */    MCD::OPC_Decode, 173, 4, 71, // Opcode: SWAPri
/* 6045 */    MCD::OPC_FilterValue, 16, 10, 0, // Skip to: 6059
/* 6049 */    MCD::OPC_CheckField, 13, 1, 0, 98, 3, // Skip to: 6921
/* 6055 */    MCD::OPC_Decode, 240, 2, 67, // Opcode: LDArr
/* 6059 */    MCD::OPC_FilterValue, 17, 10, 0, // Skip to: 6073
/* 6063 */    MCD::OPC_CheckField, 13, 1, 0, 84, 3, // Skip to: 6921
/* 6069 */    MCD::OPC_Decode, 144, 3, 67, // Opcode: LDUBArr
/* 6073 */    MCD::OPC_FilterValue, 18, 10, 0, // Skip to: 6087
/* 6077 */    MCD::OPC_CheckField, 13, 1, 0, 70, 3, // Skip to: 6921
/* 6083 */    MCD::OPC_Decode, 147, 3, 67, // Opcode: LDUHArr
/* 6087 */    MCD::OPC_FilterValue, 19, 10, 0, // Skip to: 6101
/* 6091 */    MCD::OPC_CheckField, 13, 1, 0, 56, 3, // Skip to: 6921
/* 6097 */    MCD::OPC_Decode, 245, 2, 68, // Opcode: LDDArr
/* 6101 */    MCD::OPC_FilterValue, 20, 10, 0, // Skip to: 6115
/* 6105 */    MCD::OPC_CheckField, 13, 1, 0, 42, 3, // Skip to: 6921
/* 6111 */    MCD::OPC_Decode, 252, 3, 69, // Opcode: STArr
/* 6115 */    MCD::OPC_FilterValue, 21, 10, 0, // Skip to: 6129
/* 6119 */    MCD::OPC_CheckField, 13, 1, 0, 28, 3, // Skip to: 6921
/* 6125 */    MCD::OPC_Decode, 254, 3, 69, // Opcode: STBArr
/* 6129 */    MCD::OPC_FilterValue, 22, 10, 0, // Skip to: 6143
/* 6133 */    MCD::OPC_CheckField, 13, 1, 0, 14, 3, // Skip to: 6921
/* 6139 */    MCD::OPC_Decode, 150, 4, 69, // Opcode: STHArr
/* 6143 */    MCD::OPC_FilterValue, 23, 10, 0, // Skip to: 6157
/* 6147 */    MCD::OPC_CheckField, 13, 1, 0, 0, 3, // Skip to: 6921
/* 6153 */    MCD::OPC_Decode, 133, 4, 70, // Opcode: STDArr
/* 6157 */    MCD::OPC_FilterValue, 25, 10, 0, // Skip to: 6171
/* 6161 */    MCD::OPC_CheckField, 13, 1, 0, 242, 2, // Skip to: 6921
/* 6167 */    MCD::OPC_Decode, 133, 3, 67, // Opcode: LDSBArr
/* 6171 */    MCD::OPC_FilterValue, 26, 10, 0, // Skip to: 6185
/* 6175 */    MCD::OPC_CheckField, 13, 1, 0, 228, 2, // Skip to: 6921
/* 6181 */    MCD::OPC_Decode, 136, 3, 67, // Opcode: LDSHArr
/* 6185 */    MCD::OPC_FilterValue, 29, 10, 0, // Skip to: 6199
/* 6189 */    MCD::OPC_CheckField, 13, 1, 0, 214, 2, // Skip to: 6921
/* 6195 */    MCD::OPC_Decode, 139, 3, 72, // Opcode: LDSTUBArr
/* 6199 */    MCD::OPC_FilterValue, 31, 10, 0, // Skip to: 6213
/* 6203 */    MCD::OPC_CheckField, 13, 1, 0, 200, 2, // Skip to: 6921
/* 6209 */    MCD::OPC_Decode, 172, 4, 71, // Opcode: SWAPArr
/* 6213 */    MCD::OPC_FilterValue, 32, 25, 0, // Skip to: 6242
/* 6217 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 6220 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 6234
/* 6224 */    MCD::OPC_CheckField, 5, 8, 0, 179, 2, // Skip to: 6921
/* 6230 */    MCD::OPC_Decode, 129, 3, 73, // Opcode: LDFrr
/* 6234 */    MCD::OPC_FilterValue, 1, 171, 2, // Skip to: 6921
/* 6238 */    MCD::OPC_Decode, 128, 3, 73, // Opcode: LDFri
/* 6242 */    MCD::OPC_FilterValue, 33, 69, 0, // Skip to: 6315
/* 6246 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 6249 */    MCD::OPC_FilterValue, 0, 35, 0, // Skip to: 6288
/* 6253 */    MCD::OPC_ExtractField, 25, 5,  // Inst{29-25} ...
/* 6256 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 6270
/* 6260 */    MCD::OPC_CheckField, 5, 8, 0, 143, 2, // Skip to: 6921
/* 6266 */    MCD::OPC_Decode, 255, 2, 73, // Opcode: LDFSRrr
/* 6270 */    MCD::OPC_FilterValue, 1, 135, 2, // Skip to: 6921
/* 6274 */    MCD::OPC_CheckPredicate, 0, 131, 2, // Skip to: 6921
/* 6278 */    MCD::OPC_CheckField, 5, 8, 0, 125, 2, // Skip to: 6921
/* 6284 */    MCD::OPC_Decode, 151, 3, 73, // Opcode: LDXFSRrr
/* 6288 */    MCD::OPC_FilterValue, 1, 117, 2, // Skip to: 6921
/* 6292 */    MCD::OPC_ExtractField, 25, 5,  // Inst{29-25} ...
/* 6295 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 6303
/* 6299 */    MCD::OPC_Decode, 254, 2, 73, // Opcode: LDFSRri
/* 6303 */    MCD::OPC_FilterValue, 1, 102, 2, // Skip to: 6921
/* 6307 */    MCD::OPC_CheckPredicate, 0, 98, 2, // Skip to: 6921
/* 6311 */    MCD::OPC_Decode, 150, 3, 73, // Opcode: LDXFSRri
/* 6315 */    MCD::OPC_FilterValue, 34, 33, 0, // Skip to: 6352
/* 6319 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 6322 */    MCD::OPC_FilterValue, 0, 14, 0, // Skip to: 6340
/* 6326 */    MCD::OPC_CheckPredicate, 0, 79, 2, // Skip to: 6921
/* 6330 */    MCD::OPC_CheckField, 5, 8, 0, 73, 2, // Skip to: 6921
/* 6336 */    MCD::OPC_Decode, 132, 3, 74, // Opcode: LDQFrr
/* 6340 */    MCD::OPC_FilterValue, 1, 65, 2, // Skip to: 6921
/* 6344 */    MCD::OPC_CheckPredicate, 0, 61, 2, // Skip to: 6921
/* 6348 */    MCD::OPC_Decode, 131, 3, 74, // Opcode: LDQFri
/* 6352 */    MCD::OPC_FilterValue, 35, 25, 0, // Skip to: 6381
/* 6356 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 6359 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 6373
/* 6363 */    MCD::OPC_CheckField, 5, 8, 0, 40, 2, // Skip to: 6921
/* 6369 */    MCD::OPC_Decode, 250, 2, 75, // Opcode: LDDFrr
/* 6373 */    MCD::OPC_FilterValue, 1, 32, 2, // Skip to: 6921
/* 6377 */    MCD::OPC_Decode, 249, 2, 75, // Opcode: LDDFri
/* 6381 */    MCD::OPC_FilterValue, 36, 25, 0, // Skip to: 6410
/* 6385 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 6388 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 6402
/* 6392 */    MCD::OPC_CheckField, 5, 8, 0, 11, 2, // Skip to: 6921
/* 6398 */    MCD::OPC_Decode, 149, 4, 76, // Opcode: STFrr
/* 6402 */    MCD::OPC_FilterValue, 1, 3, 2, // Skip to: 6921
/* 6406 */    MCD::OPC_Decode, 148, 4, 76, // Opcode: STFri
/* 6410 */    MCD::OPC_FilterValue, 37, 69, 0, // Skip to: 6483
/* 6414 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 6417 */    MCD::OPC_FilterValue, 0, 35, 0, // Skip to: 6456
/* 6421 */    MCD::OPC_ExtractField, 25, 5,  // Inst{29-25} ...
/* 6424 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 6438
/* 6428 */    MCD::OPC_CheckField, 5, 8, 0, 231, 1, // Skip to: 6921
/* 6434 */    MCD::OPC_Decode, 147, 4, 76, // Opcode: STFSRrr
/* 6438 */    MCD::OPC_FilterValue, 1, 223, 1, // Skip to: 6921
/* 6442 */    MCD::OPC_CheckPredicate, 0, 219, 1, // Skip to: 6921
/* 6446 */    MCD::OPC_CheckField, 5, 8, 0, 213, 1, // Skip to: 6921
/* 6452 */    MCD::OPC_Decode, 157, 4, 76, // Opcode: STXFSRrr
/* 6456 */    MCD::OPC_FilterValue, 1, 205, 1, // Skip to: 6921
/* 6460 */    MCD::OPC_ExtractField, 25, 5,  // Inst{29-25} ...
/* 6463 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 6471
/* 6467 */    MCD::OPC_Decode, 146, 4, 76, // Opcode: STFSRri
/* 6471 */    MCD::OPC_FilterValue, 1, 190, 1, // Skip to: 6921
/* 6475 */    MCD::OPC_CheckPredicate, 0, 186, 1, // Skip to: 6921
/* 6479 */    MCD::OPC_Decode, 156, 4, 76, // Opcode: STXFSRri
/* 6483 */    MCD::OPC_FilterValue, 38, 54, 0, // Skip to: 6541
/* 6487 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 6490 */    MCD::OPC_FilterValue, 0, 25, 0, // Skip to: 6519
/* 6494 */    MCD::OPC_ExtractField, 5, 8,  // Inst{12-5} ...
/* 6497 */    MCD::OPC_FilterValue, 0, 164, 1, // Skip to: 6921
/* 6501 */    MCD::OPC_CheckField, 25, 5, 0, 4, 0, // Skip to: 6511
/* 6507 */    MCD::OPC_Decode, 140, 4, 76, // Opcode: STDFQrr
/* 6511 */    MCD::OPC_CheckPredicate, 0, 150, 1, // Skip to: 6921
/* 6515 */    MCD::OPC_Decode, 155, 4, 77, // Opcode: STQFrr
/* 6519 */    MCD::OPC_FilterValue, 1, 142, 1, // Skip to: 6921
/* 6523 */    MCD::OPC_CheckField, 25, 5, 0, 4, 0, // Skip to: 6533
/* 6529 */    MCD::OPC_Decode, 139, 4, 76, // Opcode: STDFQri
/* 6533 */    MCD::OPC_CheckPredicate, 0, 128, 1, // Skip to: 6921
/* 6537 */    MCD::OPC_Decode, 154, 4, 77, // Opcode: STQFri
/* 6541 */    MCD::OPC_FilterValue, 39, 25, 0, // Skip to: 6570
/* 6545 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 6548 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 6562
/* 6552 */    MCD::OPC_CheckField, 5, 8, 0, 107, 1, // Skip to: 6921
/* 6558 */    MCD::OPC_Decode, 142, 4, 78, // Opcode: STDFrr
/* 6562 */    MCD::OPC_FilterValue, 1, 99, 1, // Skip to: 6921
/* 6566 */    MCD::OPC_Decode, 141, 4, 78, // Opcode: STDFri
/* 6570 */    MCD::OPC_FilterValue, 48, 33, 0, // Skip to: 6607
/* 6574 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 6577 */    MCD::OPC_FilterValue, 0, 18, 0, // Skip to: 6599
/* 6581 */    MCD::OPC_CheckField, 5, 8, 0, 4, 0, // Skip to: 6591
/* 6587 */    MCD::OPC_Decode, 244, 2, 79, // Opcode: LDCrr
/* 6591 */    MCD::OPC_CheckPredicate, 0, 70, 1, // Skip to: 6921
/* 6595 */    MCD::OPC_Decode, 253, 2, 73, // Opcode: LDFArr
/* 6599 */    MCD::OPC_FilterValue, 1, 62, 1, // Skip to: 6921
/* 6603 */    MCD::OPC_Decode, 243, 2, 79, // Opcode: LDCri
/* 6607 */    MCD::OPC_FilterValue, 49, 37, 0, // Skip to: 6648
/* 6611 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 6614 */    MCD::OPC_FilterValue, 0, 16, 0, // Skip to: 6634
/* 6618 */    MCD::OPC_CheckField, 25, 5, 0, 41, 1, // Skip to: 6921
/* 6624 */    MCD::OPC_CheckField, 5, 8, 0, 35, 1, // Skip to: 6921
/* 6630 */    MCD::OPC_Decode, 242, 2, 79, // Opcode: LDCSRrr
/* 6634 */    MCD::OPC_FilterValue, 1, 27, 1, // Skip to: 6921
/* 6638 */    MCD::OPC_CheckField, 25, 5, 0, 21, 1, // Skip to: 6921
/* 6644 */    MCD::OPC_Decode, 241, 2, 79, // Opcode: LDCSRri
/* 6648 */    MCD::OPC_FilterValue, 50, 14, 0, // Skip to: 6666
/* 6652 */    MCD::OPC_CheckPredicate, 0, 9, 1, // Skip to: 6921
/* 6656 */    MCD::OPC_CheckField, 13, 1, 0, 3, 1, // Skip to: 6921
/* 6662 */    MCD::OPC_Decode, 130, 3, 74, // Opcode: LDQFArr
/* 6666 */    MCD::OPC_FilterValue, 51, 33, 0, // Skip to: 6703
/* 6670 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 6673 */    MCD::OPC_FilterValue, 0, 18, 0, // Skip to: 6695
/* 6677 */    MCD::OPC_CheckField, 5, 8, 0, 4, 0, // Skip to: 6687
/* 6683 */    MCD::OPC_Decode, 247, 2, 80, // Opcode: LDDCrr
/* 6687 */    MCD::OPC_CheckPredicate, 0, 230, 0, // Skip to: 6921
/* 6691 */    MCD::OPC_Decode, 248, 2, 75, // Opcode: LDDFArr
/* 6695 */    MCD::OPC_FilterValue, 1, 222, 0, // Skip to: 6921
/* 6699 */    MCD::OPC_Decode, 246, 2, 80, // Opcode: LDDCri
/* 6703 */    MCD::OPC_FilterValue, 52, 33, 0, // Skip to: 6740
/* 6707 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 6710 */    MCD::OPC_FilterValue, 0, 18, 0, // Skip to: 6732
/* 6714 */    MCD::OPC_CheckField, 5, 8, 0, 4, 0, // Skip to: 6724
/* 6720 */    MCD::OPC_Decode, 132, 4, 81, // Opcode: STCrr
/* 6724 */    MCD::OPC_CheckPredicate, 0, 193, 0, // Skip to: 6921
/* 6728 */    MCD::OPC_Decode, 145, 4, 76, // Opcode: STFArr
/* 6732 */    MCD::OPC_FilterValue, 1, 185, 0, // Skip to: 6921
/* 6736 */    MCD::OPC_Decode, 131, 4, 81, // Opcode: STCri
/* 6740 */    MCD::OPC_FilterValue, 53, 37, 0, // Skip to: 6781
/* 6744 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 6747 */    MCD::OPC_FilterValue, 0, 16, 0, // Skip to: 6767
/* 6751 */    MCD::OPC_CheckField, 25, 5, 0, 164, 0, // Skip to: 6921
/* 6757 */    MCD::OPC_CheckField, 5, 8, 0, 158, 0, // Skip to: 6921
/* 6763 */    MCD::OPC_Decode, 130, 4, 81, // Opcode: STCSRrr
/* 6767 */    MCD::OPC_FilterValue, 1, 150, 0, // Skip to: 6921
/* 6771 */    MCD::OPC_CheckField, 25, 5, 0, 144, 0, // Skip to: 6921
/* 6777 */    MCD::OPC_Decode, 129, 4, 81, // Opcode: STCSRri
/* 6781 */    MCD::OPC_FilterValue, 54, 45, 0, // Skip to: 6830
/* 6785 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 6788 */    MCD::OPC_FilterValue, 0, 24, 0, // Skip to: 6816
/* 6792 */    MCD::OPC_CheckField, 25, 5, 0, 10, 0, // Skip to: 6808
/* 6798 */    MCD::OPC_CheckField, 5, 8, 0, 4, 0, // Skip to: 6808
/* 6804 */    MCD::OPC_Decode, 135, 4, 81, // Opcode: STDCQrr
/* 6808 */    MCD::OPC_CheckPredicate, 0, 109, 0, // Skip to: 6921
/* 6812 */    MCD::OPC_Decode, 153, 4, 77, // Opcode: STQFArr
/* 6816 */    MCD::OPC_FilterValue, 1, 101, 0, // Skip to: 6921
/* 6820 */    MCD::OPC_CheckField, 25, 5, 0, 95, 0, // Skip to: 6921
/* 6826 */    MCD::OPC_Decode, 134, 4, 81, // Opcode: STDCQri
/* 6830 */    MCD::OPC_FilterValue, 55, 33, 0, // Skip to: 6867
/* 6834 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 6837 */    MCD::OPC_FilterValue, 0, 18, 0, // Skip to: 6859
/* 6841 */    MCD::OPC_CheckField, 5, 8, 0, 4, 0, // Skip to: 6851
/* 6847 */    MCD::OPC_Decode, 137, 4, 82, // Opcode: STDCrr
/* 6851 */    MCD::OPC_CheckPredicate, 0, 66, 0, // Skip to: 6921
/* 6855 */    MCD::OPC_Decode, 138, 4, 78, // Opcode: STDFArr
/* 6859 */    MCD::OPC_FilterValue, 1, 58, 0, // Skip to: 6921
/* 6863 */    MCD::OPC_Decode, 136, 4, 82, // Opcode: STDCri
/* 6867 */    MCD::OPC_FilterValue, 60, 35, 0, // Skip to: 6906
/* 6871 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 6874 */    MCD::OPC_FilterValue, 0, 43, 0, // Skip to: 6921
/* 6878 */    MCD::OPC_ExtractField, 5, 8,  // Inst{12-5} ...
/* 6881 */    MCD::OPC_FilterValue, 10, 4, 0, // Skip to: 6889
/* 6885 */    MCD::OPC_Decode, 173, 1, 83, // Opcode: CASAasi10
/* 6889 */    MCD::OPC_FilterValue, 128, 1, 8, 0, // Skip to: 6902
/* 6894 */    MCD::OPC_CheckPredicate, 0, 4, 0, // Skip to: 6902
/* 6898 */    MCD::OPC_Decode, 176, 1, 83, // Opcode: CASrr
/* 6902 */    MCD::OPC_Decode, 174, 1, 84, // Opcode: CASArr
/* 6906 */    MCD::OPC_FilterValue, 62, 11, 0, // Skip to: 6921
/* 6910 */    MCD::OPC_CheckField, 5, 9, 128, 1, 4, 0, // Skip to: 6921
/* 6917 */    MCD::OPC_Decode, 175, 1, 85, // Opcode: CASXrr
/* 6921 */    MCD::OPC_Fail,
  0
};

static const uint8_t DecoderTableSparcV832[] = {
/* 0 */       MCD::OPC_ExtractField, 8, 6,  // Inst{13-8} ...
/* 3 */       MCD::OPC_FilterValue, 0, 22, 0, // Skip to: 29
/* 7 */       MCD::OPC_CheckField, 29, 3, 4, 36, 0, // Skip to: 49
/* 13 */      MCD::OPC_CheckField, 19, 6, 58, 30, 0, // Skip to: 49
/* 19 */      MCD::OPC_CheckField, 5, 3, 0, 24, 0, // Skip to: 49
/* 25 */      MCD::OPC_Decode, 189, 4, 86, // Opcode: TRAPrr
/* 29 */      MCD::OPC_FilterValue, 32, 16, 0, // Skip to: 49
/* 33 */      MCD::OPC_CheckField, 29, 3, 4, 10, 0, // Skip to: 49
/* 39 */      MCD::OPC_CheckField, 19, 6, 58, 4, 0, // Skip to: 49
/* 45 */      MCD::OPC_Decode, 188, 4, 86, // Opcode: TRAPri
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
/* 29 */      MCD::OPC_Decode, 182, 4, 86, // Opcode: TICCrr
/* 33 */      MCD::OPC_FilterValue, 32, 20, 0, // Skip to: 57
/* 37 */      MCD::OPC_CheckPredicate, 0, 16, 0, // Skip to: 57
/* 41 */      MCD::OPC_CheckField, 29, 3, 4, 10, 0, // Skip to: 57
/* 47 */      MCD::OPC_CheckField, 19, 6, 58, 4, 0, // Skip to: 57
/* 53 */      MCD::OPC_Decode, 181, 4, 86, // Opcode: TICCri
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
