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
/* 3 */       MCD::OPC_FilterValue, 0, 73, 2, // Skip to: 592
/* 7 */       MCD::OPC_ExtractField, 22, 3,  // Inst{24-22} ...
/* 10 */      MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 24
/* 14 */      MCD::OPC_CheckField, 25, 5, 0, 244, 26, // Skip to: 6920
/* 20 */      MCD::OPC_Decode, 208, 4, 0, // Opcode: UNIMP
/* 24 */      MCD::OPC_FilterValue, 1, 111, 0, // Skip to: 139
/* 28 */      MCD::OPC_ExtractField, 19, 3,  // Inst{21-19} ...
/* 31 */      MCD::OPC_FilterValue, 0, 27, 0, // Skip to: 62
/* 35 */      MCD::OPC_ExtractField, 29, 1,  // Inst{29} ...
/* 38 */      MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 50
/* 42 */      MCD::OPC_CheckPredicate, 0, 218, 26, // Skip to: 6920
/* 46 */      MCD::OPC_Decode, 147, 1, 1, // Opcode: BPICCNT
/* 50 */      MCD::OPC_FilterValue, 1, 210, 26, // Skip to: 6920
/* 54 */      MCD::OPC_CheckPredicate, 0, 206, 26, // Skip to: 6920
/* 58 */      MCD::OPC_Decode, 146, 1, 1, // Opcode: BPICCANT
/* 62 */      MCD::OPC_FilterValue, 1, 27, 0, // Skip to: 93
/* 66 */      MCD::OPC_ExtractField, 29, 1,  // Inst{29} ...
/* 69 */      MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 81
/* 73 */      MCD::OPC_CheckPredicate, 0, 187, 26, // Skip to: 6920
/* 77 */      MCD::OPC_Decode, 144, 1, 1, // Opcode: BPICC
/* 81 */      MCD::OPC_FilterValue, 1, 179, 26, // Skip to: 6920
/* 85 */      MCD::OPC_CheckPredicate, 0, 175, 26, // Skip to: 6920
/* 89 */      MCD::OPC_Decode, 145, 1, 1, // Opcode: BPICCA
/* 93 */      MCD::OPC_FilterValue, 4, 19, 0, // Skip to: 116
/* 97 */      MCD::OPC_ExtractField, 29, 1,  // Inst{29} ...
/* 100 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 108
/* 104 */     MCD::OPC_Decode, 163, 1, 1, // Opcode: BPXCCNT
/* 108 */     MCD::OPC_FilterValue, 1, 152, 26, // Skip to: 6920
/* 112 */     MCD::OPC_Decode, 162, 1, 1, // Opcode: BPXCCANT
/* 116 */     MCD::OPC_FilterValue, 5, 144, 26, // Skip to: 6920
/* 120 */     MCD::OPC_ExtractField, 29, 1,  // Inst{29} ...
/* 123 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 131
/* 127 */     MCD::OPC_Decode, 160, 1, 1, // Opcode: BPXCC
/* 131 */     MCD::OPC_FilterValue, 1, 129, 26, // Skip to: 6920
/* 135 */     MCD::OPC_Decode, 161, 1, 1, // Opcode: BPXCCA
/* 139 */     MCD::OPC_FilterValue, 2, 27, 0, // Skip to: 170
/* 143 */     MCD::OPC_ExtractField, 29, 1,  // Inst{29} ...
/* 146 */     MCD::OPC_FilterValue, 0, 12, 0, // Skip to: 162
/* 150 */     MCD::OPC_CheckField, 25, 4, 8, 3, 0, // Skip to: 159
/* 156 */     MCD::OPC_Decode, 126, 0, // Opcode: BA
/* 159 */     MCD::OPC_Decode, 127, 2, // Opcode: BCOND
/* 162 */     MCD::OPC_FilterValue, 1, 98, 26, // Skip to: 6920
/* 166 */     MCD::OPC_Decode, 128, 1, 2, // Opcode: BCONDA
/* 170 */     MCD::OPC_FilterValue, 3, 23, 1, // Skip to: 453
/* 174 */     MCD::OPC_ExtractField, 25, 5,  // Inst{29-25} ...
/* 177 */     MCD::OPC_FilterValue, 1, 19, 0, // Skip to: 200
/* 181 */     MCD::OPC_ExtractField, 19, 1,  // Inst{19} ...
/* 184 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 192
/* 188 */     MCD::OPC_Decode, 166, 1, 3, // Opcode: BPZnapn
/* 192 */     MCD::OPC_FilterValue, 1, 68, 26, // Skip to: 6920
/* 196 */     MCD::OPC_Decode, 167, 1, 3, // Opcode: BPZnapt
/* 200 */     MCD::OPC_FilterValue, 2, 19, 0, // Skip to: 223
/* 204 */     MCD::OPC_ExtractField, 19, 1,  // Inst{19} ...
/* 207 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 215
/* 211 */     MCD::OPC_Decode, 150, 1, 3, // Opcode: BPLEZnapn
/* 215 */     MCD::OPC_FilterValue, 1, 45, 26, // Skip to: 6920
/* 219 */     MCD::OPC_Decode, 151, 1, 3, // Opcode: BPLEZnapt
/* 223 */     MCD::OPC_FilterValue, 3, 19, 0, // Skip to: 246
/* 227 */     MCD::OPC_ExtractField, 19, 1,  // Inst{19} ...
/* 230 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 238
/* 234 */     MCD::OPC_Decode, 154, 1, 3, // Opcode: BPLZnapn
/* 238 */     MCD::OPC_FilterValue, 1, 22, 26, // Skip to: 6920
/* 242 */     MCD::OPC_Decode, 155, 1, 3, // Opcode: BPLZnapt
/* 246 */     MCD::OPC_FilterValue, 5, 19, 0, // Skip to: 269
/* 250 */     MCD::OPC_ExtractField, 19, 1,  // Inst{19} ...
/* 253 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 261
/* 257 */     MCD::OPC_Decode, 158, 1, 3, // Opcode: BPNZnapn
/* 261 */     MCD::OPC_FilterValue, 1, 255, 25, // Skip to: 6920
/* 265 */     MCD::OPC_Decode, 159, 1, 3, // Opcode: BPNZnapt
/* 269 */     MCD::OPC_FilterValue, 6, 19, 0, // Skip to: 292
/* 273 */     MCD::OPC_ExtractField, 19, 1,  // Inst{19} ...
/* 276 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 284
/* 280 */     MCD::OPC_Decode, 142, 1, 3, // Opcode: BPGZnapn
/* 284 */     MCD::OPC_FilterValue, 1, 232, 25, // Skip to: 6920
/* 288 */     MCD::OPC_Decode, 143, 1, 3, // Opcode: BPGZnapt
/* 292 */     MCD::OPC_FilterValue, 7, 19, 0, // Skip to: 315
/* 296 */     MCD::OPC_ExtractField, 19, 1,  // Inst{19} ...
/* 299 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 307
/* 303 */     MCD::OPC_Decode, 138, 1, 3, // Opcode: BPGEZnapn
/* 307 */     MCD::OPC_FilterValue, 1, 209, 25, // Skip to: 6920
/* 311 */     MCD::OPC_Decode, 139, 1, 3, // Opcode: BPGEZnapt
/* 315 */     MCD::OPC_FilterValue, 17, 19, 0, // Skip to: 338
/* 319 */     MCD::OPC_ExtractField, 19, 1,  // Inst{19} ...
/* 322 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 330
/* 326 */     MCD::OPC_Decode, 164, 1, 3, // Opcode: BPZapn
/* 330 */     MCD::OPC_FilterValue, 1, 186, 25, // Skip to: 6920
/* 334 */     MCD::OPC_Decode, 165, 1, 3, // Opcode: BPZapt
/* 338 */     MCD::OPC_FilterValue, 18, 19, 0, // Skip to: 361
/* 342 */     MCD::OPC_ExtractField, 19, 1,  // Inst{19} ...
/* 345 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 353
/* 349 */     MCD::OPC_Decode, 148, 1, 3, // Opcode: BPLEZapn
/* 353 */     MCD::OPC_FilterValue, 1, 163, 25, // Skip to: 6920
/* 357 */     MCD::OPC_Decode, 149, 1, 3, // Opcode: BPLEZapt
/* 361 */     MCD::OPC_FilterValue, 19, 19, 0, // Skip to: 384
/* 365 */     MCD::OPC_ExtractField, 19, 1,  // Inst{19} ...
/* 368 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 376
/* 372 */     MCD::OPC_Decode, 152, 1, 3, // Opcode: BPLZapn
/* 376 */     MCD::OPC_FilterValue, 1, 140, 25, // Skip to: 6920
/* 380 */     MCD::OPC_Decode, 153, 1, 3, // Opcode: BPLZapt
/* 384 */     MCD::OPC_FilterValue, 21, 19, 0, // Skip to: 407
/* 388 */     MCD::OPC_ExtractField, 19, 1,  // Inst{19} ...
/* 391 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 399
/* 395 */     MCD::OPC_Decode, 156, 1, 3, // Opcode: BPNZapn
/* 399 */     MCD::OPC_FilterValue, 1, 117, 25, // Skip to: 6920
/* 403 */     MCD::OPC_Decode, 157, 1, 3, // Opcode: BPNZapt
/* 407 */     MCD::OPC_FilterValue, 22, 19, 0, // Skip to: 430
/* 411 */     MCD::OPC_ExtractField, 19, 1,  // Inst{19} ...
/* 414 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 422
/* 418 */     MCD::OPC_Decode, 140, 1, 3, // Opcode: BPGZapn
/* 422 */     MCD::OPC_FilterValue, 1, 94, 25, // Skip to: 6920
/* 426 */     MCD::OPC_Decode, 141, 1, 3, // Opcode: BPGZapt
/* 430 */     MCD::OPC_FilterValue, 23, 86, 25, // Skip to: 6920
/* 434 */     MCD::OPC_ExtractField, 19, 1,  // Inst{19} ...
/* 437 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 445
/* 441 */     MCD::OPC_Decode, 136, 1, 3, // Opcode: BPGEZapn
/* 445 */     MCD::OPC_FilterValue, 1, 71, 25, // Skip to: 6920
/* 449 */     MCD::OPC_Decode, 137, 1, 3, // Opcode: BPGEZapt
/* 453 */     MCD::OPC_FilterValue, 4, 20, 0, // Skip to: 477
/* 457 */     MCD::OPC_CheckField, 25, 5, 0, 10, 0, // Skip to: 473
/* 463 */     MCD::OPC_CheckField, 0, 22, 0, 4, 0, // Skip to: 473
/* 469 */     MCD::OPC_Decode, 186, 3, 4, // Opcode: NOP
/* 473 */     MCD::OPC_Decode, 230, 3, 5, // Opcode: SETHIi
/* 477 */     MCD::OPC_FilterValue, 5, 65, 0, // Skip to: 546
/* 481 */     MCD::OPC_ExtractField, 19, 1,  // Inst{19} ...
/* 484 */     MCD::OPC_FilterValue, 0, 27, 0, // Skip to: 515
/* 488 */     MCD::OPC_ExtractField, 29, 1,  // Inst{29} ...
/* 491 */     MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 503
/* 495 */     MCD::OPC_CheckPredicate, 0, 21, 25, // Skip to: 6920
/* 499 */     MCD::OPC_Decode, 135, 1, 6, // Opcode: BPFCCNT
/* 503 */     MCD::OPC_FilterValue, 1, 13, 25, // Skip to: 6920
/* 507 */     MCD::OPC_CheckPredicate, 0, 9, 25, // Skip to: 6920
/* 511 */     MCD::OPC_Decode, 134, 1, 6, // Opcode: BPFCCANT
/* 515 */     MCD::OPC_FilterValue, 1, 1, 25, // Skip to: 6920
/* 519 */     MCD::OPC_ExtractField, 29, 1,  // Inst{29} ...
/* 522 */     MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 534
/* 526 */     MCD::OPC_CheckPredicate, 0, 246, 24, // Skip to: 6920
/* 530 */     MCD::OPC_Decode, 132, 1, 6, // Opcode: BPFCC
/* 534 */     MCD::OPC_FilterValue, 1, 238, 24, // Skip to: 6920
/* 538 */     MCD::OPC_CheckPredicate, 0, 234, 24, // Skip to: 6920
/* 542 */     MCD::OPC_Decode, 133, 1, 6, // Opcode: BPFCCA
/* 546 */     MCD::OPC_FilterValue, 6, 19, 0, // Skip to: 569
/* 550 */     MCD::OPC_ExtractField, 29, 1,  // Inst{29} ...
/* 553 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 561
/* 557 */     MCD::OPC_Decode, 212, 1, 2, // Opcode: FBCOND
/* 561 */     MCD::OPC_FilterValue, 1, 211, 24, // Skip to: 6920
/* 565 */     MCD::OPC_Decode, 213, 1, 2, // Opcode: FBCONDA
/* 569 */     MCD::OPC_FilterValue, 7, 203, 24, // Skip to: 6920
/* 573 */     MCD::OPC_ExtractField, 29, 1,  // Inst{29} ...
/* 576 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 584
/* 580 */     MCD::OPC_Decode, 176, 1, 2, // Opcode: CBCOND
/* 584 */     MCD::OPC_FilterValue, 1, 188, 24, // Skip to: 6920
/* 588 */     MCD::OPC_Decode, 177, 1, 2, // Opcode: CBCONDA
/* 592 */     MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 600
/* 596 */     MCD::OPC_Decode, 169, 1, 7, // Opcode: CALL
/* 600 */     MCD::OPC_FilterValue, 2, 134, 19, // Skip to: 5602
/* 604 */     MCD::OPC_ExtractField, 19, 6,  // Inst{24-19} ...
/* 607 */     MCD::OPC_FilterValue, 0, 23, 0, // Skip to: 634
/* 611 */     MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 614 */     MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 627
/* 618 */     MCD::OPC_CheckField, 5, 8, 0, 152, 24, // Skip to: 6920
/* 624 */     MCD::OPC_Decode, 107, 8, // Opcode: ADDrr
/* 627 */     MCD::OPC_FilterValue, 1, 145, 24, // Skip to: 6920
/* 631 */     MCD::OPC_Decode, 106, 9, // Opcode: ADDri
/* 634 */     MCD::OPC_FilterValue, 1, 23, 0, // Skip to: 661
/* 638 */     MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 641 */     MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 654
/* 645 */     MCD::OPC_CheckField, 5, 8, 0, 125, 24, // Skip to: 6920
/* 651 */     MCD::OPC_Decode, 122, 8, // Opcode: ANDrr
/* 654 */     MCD::OPC_FilterValue, 1, 118, 24, // Skip to: 6920
/* 658 */     MCD::OPC_Decode, 121, 9, // Opcode: ANDri
/* 661 */     MCD::OPC_FilterValue, 2, 25, 0, // Skip to: 690
/* 665 */     MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 668 */     MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 682
/* 672 */     MCD::OPC_CheckField, 5, 8, 0, 98, 24, // Skip to: 6920
/* 678 */     MCD::OPC_Decode, 197, 3, 8, // Opcode: ORrr
/* 682 */     MCD::OPC_FilterValue, 1, 90, 24, // Skip to: 6920
/* 686 */     MCD::OPC_Decode, 196, 3, 9, // Opcode: ORri
/* 690 */     MCD::OPC_FilterValue, 3, 25, 0, // Skip to: 719
/* 694 */     MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 697 */     MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 711
/* 701 */     MCD::OPC_CheckField, 5, 8, 0, 69, 24, // Skip to: 6920
/* 707 */     MCD::OPC_Decode, 242, 4, 8, // Opcode: XORrr
/* 711 */     MCD::OPC_FilterValue, 1, 61, 24, // Skip to: 6920
/* 715 */     MCD::OPC_Decode, 241, 4, 9, // Opcode: XORri
/* 719 */     MCD::OPC_FilterValue, 4, 25, 0, // Skip to: 748
/* 723 */     MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 726 */     MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 740
/* 730 */     MCD::OPC_CheckField, 5, 8, 0, 40, 24, // Skip to: 6920
/* 736 */     MCD::OPC_Decode, 170, 4, 8, // Opcode: SUBrr
/* 740 */     MCD::OPC_FilterValue, 1, 32, 24, // Skip to: 6920
/* 744 */     MCD::OPC_Decode, 169, 4, 9, // Opcode: SUBri
/* 748 */     MCD::OPC_FilterValue, 5, 23, 0, // Skip to: 775
/* 752 */     MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 755 */     MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 768
/* 759 */     MCD::OPC_CheckField, 5, 8, 0, 11, 24, // Skip to: 6920
/* 765 */     MCD::OPC_Decode, 117, 8, // Opcode: ANDNrr
/* 768 */     MCD::OPC_FilterValue, 1, 4, 24, // Skip to: 6920
/* 772 */     MCD::OPC_Decode, 116, 9, // Opcode: ANDNri
/* 775 */     MCD::OPC_FilterValue, 6, 25, 0, // Skip to: 804
/* 779 */     MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 782 */     MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 796
/* 786 */     MCD::OPC_CheckField, 5, 8, 0, 240, 23, // Skip to: 6920
/* 792 */     MCD::OPC_Decode, 192, 3, 8, // Opcode: ORNrr
/* 796 */     MCD::OPC_FilterValue, 1, 232, 23, // Skip to: 6920
/* 800 */     MCD::OPC_Decode, 191, 3, 9, // Opcode: ORNri
/* 804 */     MCD::OPC_FilterValue, 7, 25, 0, // Skip to: 833
/* 808 */     MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 811 */     MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 825
/* 815 */     MCD::OPC_CheckField, 5, 8, 0, 211, 23, // Skip to: 6920
/* 821 */     MCD::OPC_Decode, 236, 4, 8, // Opcode: XNORrr
/* 825 */     MCD::OPC_FilterValue, 1, 203, 23, // Skip to: 6920
/* 829 */     MCD::OPC_Decode, 235, 4, 9, // Opcode: XNORri
/* 833 */     MCD::OPC_FilterValue, 8, 23, 0, // Skip to: 860
/* 837 */     MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 840 */     MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 853
/* 844 */     MCD::OPC_CheckField, 5, 8, 0, 182, 23, // Skip to: 6920
/* 850 */     MCD::OPC_Decode, 99, 8, // Opcode: ADDCrr
/* 853 */     MCD::OPC_FilterValue, 1, 175, 23, // Skip to: 6920
/* 857 */     MCD::OPC_Decode, 98, 9, // Opcode: ADDCri
/* 860 */     MCD::OPC_FilterValue, 9, 25, 0, // Skip to: 889
/* 864 */     MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 867 */     MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 881
/* 871 */     MCD::OPC_CheckField, 5, 8, 0, 155, 23, // Skip to: 6920
/* 877 */     MCD::OPC_Decode, 185, 3, 10, // Opcode: MULXrr
/* 881 */     MCD::OPC_FilterValue, 1, 147, 23, // Skip to: 6920
/* 885 */     MCD::OPC_Decode, 184, 3, 11, // Opcode: MULXri
/* 889 */     MCD::OPC_FilterValue, 10, 25, 0, // Skip to: 918
/* 893 */     MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 896 */     MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 910
/* 900 */     MCD::OPC_CheckField, 5, 8, 0, 126, 23, // Skip to: 6920
/* 906 */     MCD::OPC_Decode, 207, 4, 8, // Opcode: UMULrr
/* 910 */     MCD::OPC_FilterValue, 1, 118, 23, // Skip to: 6920
/* 914 */     MCD::OPC_Decode, 206, 4, 9, // Opcode: UMULri
/* 918 */     MCD::OPC_FilterValue, 11, 25, 0, // Skip to: 947
/* 922 */     MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 925 */     MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 939
/* 929 */     MCD::OPC_CheckField, 5, 8, 0, 97, 23, // Skip to: 6920
/* 935 */     MCD::OPC_Decode, 242, 3, 8, // Opcode: SMULrr
/* 939 */     MCD::OPC_FilterValue, 1, 89, 23, // Skip to: 6920
/* 943 */     MCD::OPC_Decode, 241, 3, 9, // Opcode: SMULri
/* 947 */     MCD::OPC_FilterValue, 12, 25, 0, // Skip to: 976
/* 951 */     MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 954 */     MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 968
/* 958 */     MCD::OPC_CheckField, 5, 8, 0, 68, 23, // Skip to: 6920
/* 964 */     MCD::OPC_Decode, 164, 4, 8, // Opcode: SUBCrr
/* 968 */     MCD::OPC_FilterValue, 1, 60, 23, // Skip to: 6920
/* 972 */     MCD::OPC_Decode, 163, 4, 9, // Opcode: SUBCri
/* 976 */     MCD::OPC_FilterValue, 13, 25, 0, // Skip to: 1005
/* 980 */     MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 983 */     MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 997
/* 987 */     MCD::OPC_CheckField, 5, 8, 0, 39, 23, // Skip to: 6920
/* 993 */     MCD::OPC_Decode, 198, 4, 10, // Opcode: UDIVXrr
/* 997 */     MCD::OPC_FilterValue, 1, 31, 23, // Skip to: 6920
/* 1001 */    MCD::OPC_Decode, 197, 4, 11, // Opcode: UDIVXri
/* 1005 */    MCD::OPC_FilterValue, 14, 25, 0, // Skip to: 1034
/* 1009 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1012 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 1026
/* 1016 */    MCD::OPC_CheckField, 5, 8, 0, 10, 23, // Skip to: 6920
/* 1022 */    MCD::OPC_Decode, 200, 4, 8, // Opcode: UDIVrr
/* 1026 */    MCD::OPC_FilterValue, 1, 2, 23, // Skip to: 6920
/* 1030 */    MCD::OPC_Decode, 199, 4, 9, // Opcode: UDIVri
/* 1034 */    MCD::OPC_FilterValue, 15, 25, 0, // Skip to: 1063
/* 1038 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1041 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 1055
/* 1045 */    MCD::OPC_CheckField, 5, 8, 0, 237, 22, // Skip to: 6920
/* 1051 */    MCD::OPC_Decode, 219, 3, 8, // Opcode: SDIVrr
/* 1055 */    MCD::OPC_FilterValue, 1, 229, 22, // Skip to: 6920
/* 1059 */    MCD::OPC_Decode, 218, 3, 9, // Opcode: SDIVri
/* 1063 */    MCD::OPC_FilterValue, 16, 23, 0, // Skip to: 1090
/* 1067 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1070 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 1083
/* 1074 */    MCD::OPC_CheckField, 5, 8, 0, 208, 22, // Skip to: 6920
/* 1080 */    MCD::OPC_Decode, 97, 8, // Opcode: ADDCCrr
/* 1083 */    MCD::OPC_FilterValue, 1, 201, 22, // Skip to: 6920
/* 1087 */    MCD::OPC_Decode, 96, 9, // Opcode: ADDCCri
/* 1090 */    MCD::OPC_FilterValue, 17, 23, 0, // Skip to: 1117
/* 1094 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1097 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 1110
/* 1101 */    MCD::OPC_CheckField, 5, 8, 0, 181, 22, // Skip to: 6920
/* 1107 */    MCD::OPC_Decode, 113, 8, // Opcode: ANDCCrr
/* 1110 */    MCD::OPC_FilterValue, 1, 174, 22, // Skip to: 6920
/* 1114 */    MCD::OPC_Decode, 112, 9, // Opcode: ANDCCri
/* 1117 */    MCD::OPC_FilterValue, 18, 25, 0, // Skip to: 1146
/* 1121 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1124 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 1138
/* 1128 */    MCD::OPC_CheckField, 5, 8, 0, 154, 22, // Skip to: 6920
/* 1134 */    MCD::OPC_Decode, 188, 3, 8, // Opcode: ORCCrr
/* 1138 */    MCD::OPC_FilterValue, 1, 146, 22, // Skip to: 6920
/* 1142 */    MCD::OPC_Decode, 187, 3, 9, // Opcode: ORCCri
/* 1146 */    MCD::OPC_FilterValue, 19, 25, 0, // Skip to: 1175
/* 1150 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1153 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 1167
/* 1157 */    MCD::OPC_CheckField, 5, 8, 0, 125, 22, // Skip to: 6920
/* 1163 */    MCD::OPC_Decode, 238, 4, 8, // Opcode: XORCCrr
/* 1167 */    MCD::OPC_FilterValue, 1, 117, 22, // Skip to: 6920
/* 1171 */    MCD::OPC_Decode, 237, 4, 9, // Opcode: XORCCri
/* 1175 */    MCD::OPC_FilterValue, 20, 46, 0, // Skip to: 1225
/* 1179 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1182 */    MCD::OPC_FilterValue, 0, 21, 0, // Skip to: 1207
/* 1186 */    MCD::OPC_ExtractField, 5, 8,  // Inst{12-5} ...
/* 1189 */    MCD::OPC_FilterValue, 0, 95, 22, // Skip to: 6920
/* 1193 */    MCD::OPC_CheckField, 25, 5, 0, 4, 0, // Skip to: 1203
/* 1199 */    MCD::OPC_Decode, 182, 1, 12, // Opcode: CMPrr
/* 1203 */    MCD::OPC_Decode, 162, 4, 8, // Opcode: SUBCCrr
/* 1207 */    MCD::OPC_FilterValue, 1, 77, 22, // Skip to: 6920
/* 1211 */    MCD::OPC_CheckField, 25, 5, 0, 4, 0, // Skip to: 1221
/* 1217 */    MCD::OPC_Decode, 181, 1, 13, // Opcode: CMPri
/* 1221 */    MCD::OPC_Decode, 161, 4, 9, // Opcode: SUBCCri
/* 1225 */    MCD::OPC_FilterValue, 21, 23, 0, // Skip to: 1252
/* 1229 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1232 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 1245
/* 1236 */    MCD::OPC_CheckField, 5, 8, 0, 46, 22, // Skip to: 6920
/* 1242 */    MCD::OPC_Decode, 115, 8, // Opcode: ANDNCCrr
/* 1245 */    MCD::OPC_FilterValue, 1, 39, 22, // Skip to: 6920
/* 1249 */    MCD::OPC_Decode, 114, 9, // Opcode: ANDNCCri
/* 1252 */    MCD::OPC_FilterValue, 22, 25, 0, // Skip to: 1281
/* 1256 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1259 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 1273
/* 1263 */    MCD::OPC_CheckField, 5, 8, 0, 19, 22, // Skip to: 6920
/* 1269 */    MCD::OPC_Decode, 190, 3, 8, // Opcode: ORNCCrr
/* 1273 */    MCD::OPC_FilterValue, 1, 11, 22, // Skip to: 6920
/* 1277 */    MCD::OPC_Decode, 189, 3, 9, // Opcode: ORNCCri
/* 1281 */    MCD::OPC_FilterValue, 23, 25, 0, // Skip to: 1310
/* 1285 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1288 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 1302
/* 1292 */    MCD::OPC_CheckField, 5, 8, 0, 246, 21, // Skip to: 6920
/* 1298 */    MCD::OPC_Decode, 233, 4, 8, // Opcode: XNORCCrr
/* 1302 */    MCD::OPC_FilterValue, 1, 238, 21, // Skip to: 6920
/* 1306 */    MCD::OPC_Decode, 232, 4, 9, // Opcode: XNORCCri
/* 1310 */    MCD::OPC_FilterValue, 24, 23, 0, // Skip to: 1337
/* 1314 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1317 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 1330
/* 1321 */    MCD::OPC_CheckField, 5, 8, 0, 217, 21, // Skip to: 6920
/* 1327 */    MCD::OPC_Decode, 101, 8, // Opcode: ADDErr
/* 1330 */    MCD::OPC_FilterValue, 1, 210, 21, // Skip to: 6920
/* 1334 */    MCD::OPC_Decode, 100, 9, // Opcode: ADDEri
/* 1337 */    MCD::OPC_FilterValue, 26, 25, 0, // Skip to: 1366
/* 1341 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1344 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 1358
/* 1348 */    MCD::OPC_CheckField, 5, 8, 0, 190, 21, // Skip to: 6920
/* 1354 */    MCD::OPC_Decode, 204, 4, 8, // Opcode: UMULCCrr
/* 1358 */    MCD::OPC_FilterValue, 1, 182, 21, // Skip to: 6920
/* 1362 */    MCD::OPC_Decode, 203, 4, 9, // Opcode: UMULCCri
/* 1366 */    MCD::OPC_FilterValue, 27, 25, 0, // Skip to: 1395
/* 1370 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1373 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 1387
/* 1377 */    MCD::OPC_CheckField, 5, 8, 0, 161, 21, // Skip to: 6920
/* 1383 */    MCD::OPC_Decode, 240, 3, 8, // Opcode: SMULCCrr
/* 1387 */    MCD::OPC_FilterValue, 1, 153, 21, // Skip to: 6920
/* 1391 */    MCD::OPC_Decode, 239, 3, 9, // Opcode: SMULCCri
/* 1395 */    MCD::OPC_FilterValue, 28, 25, 0, // Skip to: 1424
/* 1399 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1402 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 1416
/* 1406 */    MCD::OPC_CheckField, 5, 8, 0, 132, 21, // Skip to: 6920
/* 1412 */    MCD::OPC_Decode, 166, 4, 8, // Opcode: SUBErr
/* 1416 */    MCD::OPC_FilterValue, 1, 124, 21, // Skip to: 6920
/* 1420 */    MCD::OPC_Decode, 165, 4, 9, // Opcode: SUBEri
/* 1424 */    MCD::OPC_FilterValue, 30, 25, 0, // Skip to: 1453
/* 1428 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1431 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 1445
/* 1435 */    MCD::OPC_CheckField, 5, 8, 0, 103, 21, // Skip to: 6920
/* 1441 */    MCD::OPC_Decode, 196, 4, 8, // Opcode: UDIVCCrr
/* 1445 */    MCD::OPC_FilterValue, 1, 95, 21, // Skip to: 6920
/* 1449 */    MCD::OPC_Decode, 195, 4, 9, // Opcode: UDIVCCri
/* 1453 */    MCD::OPC_FilterValue, 31, 25, 0, // Skip to: 1482
/* 1457 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1460 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 1474
/* 1464 */    MCD::OPC_CheckField, 5, 8, 0, 74, 21, // Skip to: 6920
/* 1470 */    MCD::OPC_Decode, 215, 3, 8, // Opcode: SDIVCCrr
/* 1474 */    MCD::OPC_FilterValue, 1, 66, 21, // Skip to: 6920
/* 1478 */    MCD::OPC_Decode, 214, 3, 9, // Opcode: SDIVCCri
/* 1482 */    MCD::OPC_FilterValue, 32, 25, 0, // Skip to: 1511
/* 1486 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1489 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 1503
/* 1493 */    MCD::OPC_CheckField, 5, 8, 0, 45, 21, // Skip to: 6920
/* 1499 */    MCD::OPC_Decode, 179, 4, 8, // Opcode: TADDCCrr
/* 1503 */    MCD::OPC_FilterValue, 1, 37, 21, // Skip to: 6920
/* 1507 */    MCD::OPC_Decode, 178, 4, 9, // Opcode: TADDCCri
/* 1511 */    MCD::OPC_FilterValue, 33, 25, 0, // Skip to: 1540
/* 1515 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1518 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 1532
/* 1522 */    MCD::OPC_CheckField, 5, 8, 0, 16, 21, // Skip to: 6920
/* 1528 */    MCD::OPC_Decode, 192, 4, 8, // Opcode: TSUBCCrr
/* 1532 */    MCD::OPC_FilterValue, 1, 8, 21, // Skip to: 6920
/* 1536 */    MCD::OPC_Decode, 191, 4, 9, // Opcode: TSUBCCri
/* 1540 */    MCD::OPC_FilterValue, 34, 25, 0, // Skip to: 1569
/* 1544 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1547 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 1561
/* 1551 */    MCD::OPC_CheckField, 5, 8, 0, 243, 20, // Skip to: 6920
/* 1557 */    MCD::OPC_Decode, 177, 4, 8, // Opcode: TADDCCTVrr
/* 1561 */    MCD::OPC_FilterValue, 1, 235, 20, // Skip to: 6920
/* 1565 */    MCD::OPC_Decode, 176, 4, 9, // Opcode: TADDCCTVri
/* 1569 */    MCD::OPC_FilterValue, 35, 25, 0, // Skip to: 1598
/* 1573 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1576 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 1590
/* 1580 */    MCD::OPC_CheckField, 5, 8, 0, 214, 20, // Skip to: 6920
/* 1586 */    MCD::OPC_Decode, 190, 4, 8, // Opcode: TSUBCCTVrr
/* 1590 */    MCD::OPC_FilterValue, 1, 206, 20, // Skip to: 6920
/* 1594 */    MCD::OPC_Decode, 189, 4, 9, // Opcode: TSUBCCTVri
/* 1598 */    MCD::OPC_FilterValue, 36, 25, 0, // Skip to: 1627
/* 1602 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1605 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 1619
/* 1609 */    MCD::OPC_CheckField, 5, 8, 0, 185, 20, // Skip to: 6920
/* 1615 */    MCD::OPC_Decode, 183, 3, 8, // Opcode: MULSCCrr
/* 1619 */    MCD::OPC_FilterValue, 1, 177, 20, // Skip to: 6920
/* 1623 */    MCD::OPC_Decode, 182, 3, 9, // Opcode: MULSCCri
/* 1627 */    MCD::OPC_FilterValue, 37, 50, 0, // Skip to: 1681
/* 1631 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1634 */    MCD::OPC_FilterValue, 0, 25, 0, // Skip to: 1663
/* 1638 */    MCD::OPC_ExtractField, 12, 1,  // Inst{12} ...
/* 1641 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 1655
/* 1645 */    MCD::OPC_CheckField, 5, 7, 0, 149, 20, // Skip to: 6920
/* 1651 */    MCD::OPC_Decode, 236, 3, 8, // Opcode: SLLrr
/* 1655 */    MCD::OPC_FilterValue, 1, 141, 20, // Skip to: 6920
/* 1659 */    MCD::OPC_Decode, 234, 3, 14, // Opcode: SLLXrr
/* 1663 */    MCD::OPC_FilterValue, 1, 133, 20, // Skip to: 6920
/* 1667 */    MCD::OPC_CheckField, 12, 1, 1, 4, 0, // Skip to: 1677
/* 1673 */    MCD::OPC_Decode, 233, 3, 15, // Opcode: SLLXri
/* 1677 */    MCD::OPC_Decode, 235, 3, 9, // Opcode: SLLri
/* 1681 */    MCD::OPC_FilterValue, 38, 50, 0, // Skip to: 1735
/* 1685 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1688 */    MCD::OPC_FilterValue, 0, 25, 0, // Skip to: 1717
/* 1692 */    MCD::OPC_ExtractField, 12, 1,  // Inst{12} ...
/* 1695 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 1709
/* 1699 */    MCD::OPC_CheckField, 5, 7, 0, 95, 20, // Skip to: 6920
/* 1705 */    MCD::OPC_Decode, 250, 3, 8, // Opcode: SRLrr
/* 1709 */    MCD::OPC_FilterValue, 1, 87, 20, // Skip to: 6920
/* 1713 */    MCD::OPC_Decode, 248, 3, 14, // Opcode: SRLXrr
/* 1717 */    MCD::OPC_FilterValue, 1, 79, 20, // Skip to: 6920
/* 1721 */    MCD::OPC_CheckField, 12, 1, 1, 4, 0, // Skip to: 1731
/* 1727 */    MCD::OPC_Decode, 247, 3, 15, // Opcode: SRLXri
/* 1731 */    MCD::OPC_Decode, 249, 3, 9, // Opcode: SRLri
/* 1735 */    MCD::OPC_FilterValue, 39, 50, 0, // Skip to: 1789
/* 1739 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1742 */    MCD::OPC_FilterValue, 0, 25, 0, // Skip to: 1771
/* 1746 */    MCD::OPC_ExtractField, 12, 1,  // Inst{12} ...
/* 1749 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 1763
/* 1753 */    MCD::OPC_CheckField, 5, 7, 0, 41, 20, // Skip to: 6920
/* 1759 */    MCD::OPC_Decode, 246, 3, 8, // Opcode: SRArr
/* 1763 */    MCD::OPC_FilterValue, 1, 33, 20, // Skip to: 6920
/* 1767 */    MCD::OPC_Decode, 244, 3, 14, // Opcode: SRAXrr
/* 1771 */    MCD::OPC_FilterValue, 1, 25, 20, // Skip to: 6920
/* 1775 */    MCD::OPC_CheckField, 12, 1, 1, 4, 0, // Skip to: 1785
/* 1781 */    MCD::OPC_Decode, 243, 3, 15, // Opcode: SRAXri
/* 1785 */    MCD::OPC_Decode, 245, 3, 9, // Opcode: SRAri
/* 1789 */    MCD::OPC_FilterValue, 40, 58, 0, // Skip to: 1851
/* 1793 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1796 */    MCD::OPC_FilterValue, 0, 27, 0, // Skip to: 1827
/* 1800 */    MCD::OPC_ExtractField, 0, 13,  // Inst{12-0} ...
/* 1803 */    MCD::OPC_FilterValue, 0, 249, 19, // Skip to: 6920
/* 1807 */    MCD::OPC_CheckField, 25, 5, 0, 10, 0, // Skip to: 1823
/* 1813 */    MCD::OPC_CheckField, 14, 5, 15, 4, 0, // Skip to: 1823
/* 1819 */    MCD::OPC_Decode, 252, 3, 4, // Opcode: STBAR
/* 1823 */    MCD::OPC_Decode, 201, 3, 16, // Opcode: RDASR
/* 1827 */    MCD::OPC_FilterValue, 1, 225, 19, // Skip to: 6920
/* 1831 */    MCD::OPC_CheckPredicate, 0, 221, 19, // Skip to: 6920
/* 1835 */    MCD::OPC_CheckField, 25, 5, 0, 215, 19, // Skip to: 6920
/* 1841 */    MCD::OPC_CheckField, 14, 5, 15, 209, 19, // Skip to: 6920
/* 1847 */    MCD::OPC_Decode, 158, 3, 17, // Opcode: MEMBARi
/* 1851 */    MCD::OPC_FilterValue, 41, 10, 0, // Skip to: 1865
/* 1855 */    MCD::OPC_CheckField, 0, 19, 0, 195, 19, // Skip to: 6920
/* 1861 */    MCD::OPC_Decode, 203, 3, 18, // Opcode: RDPSR
/* 1865 */    MCD::OPC_FilterValue, 42, 25, 0, // Skip to: 1894
/* 1869 */    MCD::OPC_ExtractField, 0, 14,  // Inst{13-0} ...
/* 1872 */    MCD::OPC_FilterValue, 0, 180, 19, // Skip to: 6920
/* 1876 */    MCD::OPC_CheckField, 14, 5, 0, 4, 0, // Skip to: 1886
/* 1882 */    MCD::OPC_Decode, 205, 3, 18, // Opcode: RDWIM
/* 1886 */    MCD::OPC_CheckPredicate, 0, 166, 19, // Skip to: 6920
/* 1890 */    MCD::OPC_Decode, 202, 3, 19, // Opcode: RDPR
/* 1894 */    MCD::OPC_FilterValue, 43, 25, 0, // Skip to: 1923
/* 1898 */    MCD::OPC_ExtractField, 0, 19,  // Inst{18-0} ...
/* 1901 */    MCD::OPC_FilterValue, 0, 151, 19, // Skip to: 6920
/* 1905 */    MCD::OPC_CheckPredicate, 0, 10, 0, // Skip to: 1919
/* 1909 */    MCD::OPC_CheckField, 25, 5, 0, 4, 0, // Skip to: 1919
/* 1915 */    MCD::OPC_Decode, 245, 1, 4, // Opcode: FLUSHW
/* 1919 */    MCD::OPC_Decode, 204, 3, 18, // Opcode: RDTBR
/* 1923 */    MCD::OPC_FilterValue, 44, 123, 0, // Skip to: 2050
/* 1927 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1930 */    MCD::OPC_FilterValue, 0, 56, 0, // Skip to: 1990
/* 1934 */    MCD::OPC_ExtractField, 18, 1,  // Inst{18} ...
/* 1937 */    MCD::OPC_FilterValue, 0, 22, 0, // Skip to: 1963
/* 1941 */    MCD::OPC_CheckPredicate, 0, 10, 0, // Skip to: 1955
/* 1945 */    MCD::OPC_CheckField, 11, 2, 0, 4, 0, // Skip to: 1955
/* 1951 */    MCD::OPC_Decode, 161, 3, 20, // Opcode: MOVFCCrr
/* 1955 */    MCD::OPC_CheckPredicate, 0, 97, 19, // Skip to: 6920
/* 1959 */    MCD::OPC_Decode, 219, 4, 21, // Opcode: V9MOVFCCrr
/* 1963 */    MCD::OPC_FilterValue, 1, 89, 19, // Skip to: 6920
/* 1967 */    MCD::OPC_ExtractField, 11, 2,  // Inst{12-11} ...
/* 1970 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 1982
/* 1974 */    MCD::OPC_CheckPredicate, 0, 78, 19, // Skip to: 6920
/* 1978 */    MCD::OPC_Decode, 163, 3, 20, // Opcode: MOVICCrr
/* 1982 */    MCD::OPC_FilterValue, 2, 70, 19, // Skip to: 6920
/* 1986 */    MCD::OPC_Decode, 180, 3, 20, // Opcode: MOVXCCrr
/* 1990 */    MCD::OPC_FilterValue, 1, 62, 19, // Skip to: 6920
/* 1994 */    MCD::OPC_ExtractField, 18, 1,  // Inst{18} ...
/* 1997 */    MCD::OPC_FilterValue, 0, 22, 0, // Skip to: 2023
/* 2001 */    MCD::OPC_CheckPredicate, 0, 10, 0, // Skip to: 2015
/* 2005 */    MCD::OPC_CheckField, 11, 2, 0, 4, 0, // Skip to: 2015
/* 2011 */    MCD::OPC_Decode, 160, 3, 22, // Opcode: MOVFCCri
/* 2015 */    MCD::OPC_CheckPredicate, 0, 37, 19, // Skip to: 6920
/* 2019 */    MCD::OPC_Decode, 218, 4, 23, // Opcode: V9MOVFCCri
/* 2023 */    MCD::OPC_FilterValue, 1, 29, 19, // Skip to: 6920
/* 2027 */    MCD::OPC_ExtractField, 11, 2,  // Inst{12-11} ...
/* 2030 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 2042
/* 2034 */    MCD::OPC_CheckPredicate, 0, 18, 19, // Skip to: 6920
/* 2038 */    MCD::OPC_Decode, 162, 3, 22, // Opcode: MOVICCri
/* 2042 */    MCD::OPC_FilterValue, 2, 10, 19, // Skip to: 6920
/* 2046 */    MCD::OPC_Decode, 179, 3, 22, // Opcode: MOVXCCri
/* 2050 */    MCD::OPC_FilterValue, 45, 25, 0, // Skip to: 2079
/* 2054 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 2057 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 2071
/* 2061 */    MCD::OPC_CheckField, 5, 8, 0, 245, 18, // Skip to: 6920
/* 2067 */    MCD::OPC_Decode, 217, 3, 10, // Opcode: SDIVXrr
/* 2071 */    MCD::OPC_FilterValue, 1, 237, 18, // Skip to: 6920
/* 2075 */    MCD::OPC_Decode, 216, 3, 11, // Opcode: SDIVXri
/* 2079 */    MCD::OPC_FilterValue, 46, 14, 0, // Skip to: 2097
/* 2083 */    MCD::OPC_CheckPredicate, 0, 225, 18, // Skip to: 6920
/* 2087 */    MCD::OPC_CheckField, 5, 14, 0, 219, 18, // Skip to: 6920
/* 2093 */    MCD::OPC_Decode, 200, 3, 24, // Opcode: POPCrr
/* 2097 */    MCD::OPC_FilterValue, 47, 135, 0, // Skip to: 2236
/* 2101 */    MCD::OPC_ExtractField, 10, 4,  // Inst{13-10} ...
/* 2104 */    MCD::OPC_FilterValue, 1, 10, 0, // Skip to: 2118
/* 2108 */    MCD::OPC_CheckField, 5, 5, 0, 198, 18, // Skip to: 6920
/* 2114 */    MCD::OPC_Decode, 175, 3, 14, // Opcode: MOVRRZrr
/* 2118 */    MCD::OPC_FilterValue, 2, 10, 0, // Skip to: 2132
/* 2122 */    MCD::OPC_CheckField, 5, 5, 0, 184, 18, // Skip to: 6920
/* 2128 */    MCD::OPC_Decode, 169, 3, 14, // Opcode: MOVRLEZrr
/* 2132 */    MCD::OPC_FilterValue, 3, 10, 0, // Skip to: 2146
/* 2136 */    MCD::OPC_CheckField, 5, 5, 0, 170, 18, // Skip to: 6920
/* 2142 */    MCD::OPC_Decode, 171, 3, 14, // Opcode: MOVRLZrr
/* 2146 */    MCD::OPC_FilterValue, 5, 10, 0, // Skip to: 2160
/* 2150 */    MCD::OPC_CheckField, 5, 5, 0, 156, 18, // Skip to: 6920
/* 2156 */    MCD::OPC_Decode, 173, 3, 14, // Opcode: MOVRNZrr
/* 2160 */    MCD::OPC_FilterValue, 6, 10, 0, // Skip to: 2174
/* 2164 */    MCD::OPC_CheckField, 5, 5, 0, 142, 18, // Skip to: 6920
/* 2170 */    MCD::OPC_Decode, 167, 3, 14, // Opcode: MOVRGZrr
/* 2174 */    MCD::OPC_FilterValue, 7, 10, 0, // Skip to: 2188
/* 2178 */    MCD::OPC_CheckField, 5, 5, 0, 128, 18, // Skip to: 6920
/* 2184 */    MCD::OPC_Decode, 165, 3, 14, // Opcode: MOVRGEZrr
/* 2188 */    MCD::OPC_FilterValue, 9, 4, 0, // Skip to: 2196
/* 2192 */    MCD::OPC_Decode, 174, 3, 25, // Opcode: MOVRRZri
/* 2196 */    MCD::OPC_FilterValue, 10, 4, 0, // Skip to: 2204
/* 2200 */    MCD::OPC_Decode, 168, 3, 25, // Opcode: MOVRLEZri
/* 2204 */    MCD::OPC_FilterValue, 11, 4, 0, // Skip to: 2212
/* 2208 */    MCD::OPC_Decode, 170, 3, 25, // Opcode: MOVRLZri
/* 2212 */    MCD::OPC_FilterValue, 13, 4, 0, // Skip to: 2220
/* 2216 */    MCD::OPC_Decode, 172, 3, 25, // Opcode: MOVRNZri
/* 2220 */    MCD::OPC_FilterValue, 14, 4, 0, // Skip to: 2228
/* 2224 */    MCD::OPC_Decode, 166, 3, 25, // Opcode: MOVRGZri
/* 2228 */    MCD::OPC_FilterValue, 15, 80, 18, // Skip to: 6920
/* 2232 */    MCD::OPC_Decode, 164, 3, 25, // Opcode: MOVRGEZri
/* 2236 */    MCD::OPC_FilterValue, 48, 25, 0, // Skip to: 2265
/* 2240 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 2243 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 2257
/* 2247 */    MCD::OPC_CheckField, 5, 8, 0, 59, 18, // Skip to: 6920
/* 2253 */    MCD::OPC_Decode, 221, 4, 26, // Opcode: WRASRrr
/* 2257 */    MCD::OPC_FilterValue, 1, 51, 18, // Skip to: 6920
/* 2261 */    MCD::OPC_Decode, 220, 4, 27, // Opcode: WRASRri
/* 2265 */    MCD::OPC_FilterValue, 49, 37, 0, // Skip to: 2306
/* 2269 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 2272 */    MCD::OPC_FilterValue, 0, 16, 0, // Skip to: 2292
/* 2276 */    MCD::OPC_CheckField, 25, 5, 0, 30, 18, // Skip to: 6920
/* 2282 */    MCD::OPC_CheckField, 5, 8, 0, 24, 18, // Skip to: 6920
/* 2288 */    MCD::OPC_Decode, 225, 4, 12, // Opcode: WRPSRrr
/* 2292 */    MCD::OPC_FilterValue, 1, 16, 18, // Skip to: 6920
/* 2296 */    MCD::OPC_CheckField, 25, 5, 0, 10, 18, // Skip to: 6920
/* 2302 */    MCD::OPC_Decode, 224, 4, 13, // Opcode: WRPSRri
/* 2306 */    MCD::OPC_FilterValue, 50, 54, 0, // Skip to: 2364
/* 2310 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 2313 */    MCD::OPC_FilterValue, 0, 25, 0, // Skip to: 2342
/* 2317 */    MCD::OPC_ExtractField, 5, 8,  // Inst{12-5} ...
/* 2320 */    MCD::OPC_FilterValue, 0, 244, 17, // Skip to: 6920
/* 2324 */    MCD::OPC_CheckField, 25, 5, 0, 4, 0, // Skip to: 2334
/* 2330 */    MCD::OPC_Decode, 229, 4, 12, // Opcode: WRWIMrr
/* 2334 */    MCD::OPC_CheckPredicate, 0, 230, 17, // Skip to: 6920
/* 2338 */    MCD::OPC_Decode, 223, 4, 28, // Opcode: WRPRrr
/* 2342 */    MCD::OPC_FilterValue, 1, 222, 17, // Skip to: 6920
/* 2346 */    MCD::OPC_CheckField, 25, 5, 0, 4, 0, // Skip to: 2356
/* 2352 */    MCD::OPC_Decode, 228, 4, 13, // Opcode: WRWIMri
/* 2356 */    MCD::OPC_CheckPredicate, 0, 208, 17, // Skip to: 6920
/* 2360 */    MCD::OPC_Decode, 222, 4, 29, // Opcode: WRPRri
/* 2364 */    MCD::OPC_FilterValue, 51, 37, 0, // Skip to: 2405
/* 2368 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 2371 */    MCD::OPC_FilterValue, 0, 16, 0, // Skip to: 2391
/* 2375 */    MCD::OPC_CheckField, 25, 5, 0, 187, 17, // Skip to: 6920
/* 2381 */    MCD::OPC_CheckField, 5, 8, 0, 181, 17, // Skip to: 6920
/* 2387 */    MCD::OPC_Decode, 227, 4, 12, // Opcode: WRTBRrr
/* 2391 */    MCD::OPC_FilterValue, 1, 173, 17, // Skip to: 6920
/* 2395 */    MCD::OPC_CheckField, 25, 5, 0, 167, 17, // Skip to: 6920
/* 2401 */    MCD::OPC_Decode, 226, 4, 13, // Opcode: WRTBRri
/* 2405 */    MCD::OPC_FilterValue, 52, 197, 2, // Skip to: 3118
/* 2409 */    MCD::OPC_ExtractField, 5, 9,  // Inst{13-5} ...
/* 2412 */    MCD::OPC_FilterValue, 1, 10, 0, // Skip to: 2426
/* 2416 */    MCD::OPC_CheckField, 14, 5, 0, 146, 17, // Skip to: 6920
/* 2422 */    MCD::OPC_Decode, 147, 2, 30, // Opcode: FMOVS
/* 2426 */    MCD::OPC_FilterValue, 2, 14, 0, // Skip to: 2444
/* 2430 */    MCD::OPC_CheckPredicate, 0, 134, 17, // Skip to: 6920
/* 2434 */    MCD::OPC_CheckField, 14, 5, 0, 128, 17, // Skip to: 6920
/* 2440 */    MCD::OPC_Decode, 249, 1, 31, // Opcode: FMOVD
/* 2444 */    MCD::OPC_FilterValue, 3, 14, 0, // Skip to: 2462
/* 2448 */    MCD::OPC_CheckPredicate, 0, 116, 17, // Skip to: 6920
/* 2452 */    MCD::OPC_CheckField, 14, 5, 0, 110, 17, // Skip to: 6920
/* 2458 */    MCD::OPC_Decode, 253, 1, 32, // Opcode: FMOVQ
/* 2462 */    MCD::OPC_FilterValue, 5, 10, 0, // Skip to: 2476
/* 2466 */    MCD::OPC_CheckField, 14, 5, 0, 96, 17, // Skip to: 6920
/* 2472 */    MCD::OPC_Decode, 167, 2, 30, // Opcode: FNEGS
/* 2476 */    MCD::OPC_FilterValue, 6, 14, 0, // Skip to: 2494
/* 2480 */    MCD::OPC_CheckPredicate, 0, 84, 17, // Skip to: 6920
/* 2484 */    MCD::OPC_CheckField, 14, 5, 0, 78, 17, // Skip to: 6920
/* 2490 */    MCD::OPC_Decode, 165, 2, 31, // Opcode: FNEGD
/* 2494 */    MCD::OPC_FilterValue, 7, 14, 0, // Skip to: 2512
/* 2498 */    MCD::OPC_CheckPredicate, 0, 66, 17, // Skip to: 6920
/* 2502 */    MCD::OPC_CheckField, 14, 5, 0, 60, 17, // Skip to: 6920
/* 2508 */    MCD::OPC_Decode, 166, 2, 32, // Opcode: FNEGQ
/* 2512 */    MCD::OPC_FilterValue, 9, 10, 0, // Skip to: 2526
/* 2516 */    MCD::OPC_CheckField, 14, 5, 0, 46, 17, // Skip to: 6920
/* 2522 */    MCD::OPC_Decode, 201, 1, 30, // Opcode: FABSS
/* 2526 */    MCD::OPC_FilterValue, 10, 14, 0, // Skip to: 2544
/* 2530 */    MCD::OPC_CheckPredicate, 0, 34, 17, // Skip to: 6920
/* 2534 */    MCD::OPC_CheckField, 14, 5, 0, 28, 17, // Skip to: 6920
/* 2540 */    MCD::OPC_Decode, 199, 1, 31, // Opcode: FABSD
/* 2544 */    MCD::OPC_FilterValue, 11, 14, 0, // Skip to: 2562
/* 2548 */    MCD::OPC_CheckPredicate, 0, 16, 17, // Skip to: 6920
/* 2552 */    MCD::OPC_CheckField, 14, 5, 0, 10, 17, // Skip to: 6920
/* 2558 */    MCD::OPC_Decode, 200, 1, 32, // Opcode: FABSQ
/* 2562 */    MCD::OPC_FilterValue, 41, 10, 0, // Skip to: 2576
/* 2566 */    MCD::OPC_CheckField, 14, 5, 0, 252, 16, // Skip to: 6920
/* 2572 */    MCD::OPC_Decode, 211, 2, 30, // Opcode: FSQRTS
/* 2576 */    MCD::OPC_FilterValue, 42, 10, 0, // Skip to: 2590
/* 2580 */    MCD::OPC_CheckField, 14, 5, 0, 238, 16, // Skip to: 6920
/* 2586 */    MCD::OPC_Decode, 209, 2, 31, // Opcode: FSQRTD
/* 2590 */    MCD::OPC_FilterValue, 43, 10, 0, // Skip to: 2604
/* 2594 */    MCD::OPC_CheckField, 14, 5, 0, 224, 16, // Skip to: 6920
/* 2600 */    MCD::OPC_Decode, 210, 2, 32, // Opcode: FSQRTQ
/* 2604 */    MCD::OPC_FilterValue, 65, 4, 0, // Skip to: 2612
/* 2608 */    MCD::OPC_Decode, 204, 1, 33, // Opcode: FADDS
/* 2612 */    MCD::OPC_FilterValue, 66, 4, 0, // Skip to: 2620
/* 2616 */    MCD::OPC_Decode, 202, 1, 34, // Opcode: FADDD
/* 2620 */    MCD::OPC_FilterValue, 67, 4, 0, // Skip to: 2628
/* 2624 */    MCD::OPC_Decode, 203, 1, 35, // Opcode: FADDQ
/* 2628 */    MCD::OPC_FilterValue, 69, 4, 0, // Skip to: 2636
/* 2632 */    MCD::OPC_Decode, 226, 2, 33, // Opcode: FSUBS
/* 2636 */    MCD::OPC_FilterValue, 70, 4, 0, // Skip to: 2644
/* 2640 */    MCD::OPC_Decode, 224, 2, 34, // Opcode: FSUBD
/* 2644 */    MCD::OPC_FilterValue, 71, 4, 0, // Skip to: 2652
/* 2648 */    MCD::OPC_Decode, 225, 2, 35, // Opcode: FSUBQ
/* 2652 */    MCD::OPC_FilterValue, 73, 4, 0, // Skip to: 2660
/* 2656 */    MCD::OPC_Decode, 160, 2, 33, // Opcode: FMULS
/* 2660 */    MCD::OPC_FilterValue, 74, 4, 0, // Skip to: 2668
/* 2664 */    MCD::OPC_Decode, 156, 2, 34, // Opcode: FMULD
/* 2668 */    MCD::OPC_FilterValue, 75, 4, 0, // Skip to: 2676
/* 2672 */    MCD::OPC_Decode, 159, 2, 35, // Opcode: FMULQ
/* 2676 */    MCD::OPC_FilterValue, 77, 4, 0, // Skip to: 2684
/* 2680 */    MCD::OPC_Decode, 228, 1, 33, // Opcode: FDIVS
/* 2684 */    MCD::OPC_FilterValue, 78, 4, 0, // Skip to: 2692
/* 2688 */    MCD::OPC_Decode, 226, 1, 34, // Opcode: FDIVD
/* 2692 */    MCD::OPC_FilterValue, 79, 4, 0, // Skip to: 2700
/* 2696 */    MCD::OPC_Decode, 227, 1, 35, // Opcode: FDIVQ
/* 2700 */    MCD::OPC_FilterValue, 81, 8, 0, // Skip to: 2712
/* 2704 */    MCD::OPC_CheckPredicate, 1, 116, 16, // Skip to: 6920
/* 2708 */    MCD::OPC_Decode, 162, 2, 34, // Opcode: FNADDS
/* 2712 */    MCD::OPC_FilterValue, 82, 8, 0, // Skip to: 2724
/* 2716 */    MCD::OPC_CheckPredicate, 1, 104, 16, // Skip to: 6920
/* 2720 */    MCD::OPC_Decode, 161, 2, 34, // Opcode: FNADDD
/* 2724 */    MCD::OPC_FilterValue, 89, 8, 0, // Skip to: 2736
/* 2728 */    MCD::OPC_CheckPredicate, 1, 92, 16, // Skip to: 6920
/* 2732 */    MCD::OPC_Decode, 171, 2, 34, // Opcode: FNMULS
/* 2736 */    MCD::OPC_FilterValue, 90, 8, 0, // Skip to: 2748
/* 2740 */    MCD::OPC_CheckPredicate, 1, 80, 16, // Skip to: 6920
/* 2744 */    MCD::OPC_Decode, 170, 2, 34, // Opcode: FNMULD
/* 2748 */    MCD::OPC_FilterValue, 97, 8, 0, // Skip to: 2760
/* 2752 */    MCD::OPC_CheckPredicate, 1, 68, 16, // Skip to: 6920
/* 2756 */    MCD::OPC_Decode, 236, 1, 34, // Opcode: FHADDS
/* 2760 */    MCD::OPC_FilterValue, 98, 8, 0, // Skip to: 2772
/* 2764 */    MCD::OPC_CheckPredicate, 1, 56, 16, // Skip to: 6920
/* 2768 */    MCD::OPC_Decode, 235, 1, 34, // Opcode: FHADDD
/* 2772 */    MCD::OPC_FilterValue, 101, 8, 0, // Skip to: 2784
/* 2776 */    MCD::OPC_CheckPredicate, 1, 44, 16, // Skip to: 6920
/* 2780 */    MCD::OPC_Decode, 238, 1, 34, // Opcode: FHSUBS
/* 2784 */    MCD::OPC_FilterValue, 102, 8, 0, // Skip to: 2796
/* 2788 */    MCD::OPC_CheckPredicate, 1, 32, 16, // Skip to: 6920
/* 2792 */    MCD::OPC_Decode, 237, 1, 34, // Opcode: FHSUBD
/* 2796 */    MCD::OPC_FilterValue, 105, 4, 0, // Skip to: 2804
/* 2800 */    MCD::OPC_Decode, 208, 2, 36, // Opcode: FSMULD
/* 2804 */    MCD::OPC_FilterValue, 110, 4, 0, // Skip to: 2812
/* 2808 */    MCD::OPC_Decode, 229, 1, 37, // Opcode: FDMULQ
/* 2812 */    MCD::OPC_FilterValue, 113, 8, 0, // Skip to: 2824
/* 2816 */    MCD::OPC_CheckPredicate, 1, 4, 16, // Skip to: 6920
/* 2820 */    MCD::OPC_Decode, 169, 2, 34, // Opcode: FNHADDS
/* 2824 */    MCD::OPC_FilterValue, 114, 8, 0, // Skip to: 2836
/* 2828 */    MCD::OPC_CheckPredicate, 1, 248, 15, // Skip to: 6920
/* 2832 */    MCD::OPC_Decode, 168, 2, 34, // Opcode: FNHADDD
/* 2836 */    MCD::OPC_FilterValue, 121, 8, 0, // Skip to: 2848
/* 2840 */    MCD::OPC_CheckPredicate, 1, 236, 15, // Skip to: 6920
/* 2844 */    MCD::OPC_Decode, 178, 2, 34, // Opcode: FNSMULD
/* 2848 */    MCD::OPC_FilterValue, 129, 1, 10, 0, // Skip to: 2863
/* 2853 */    MCD::OPC_CheckField, 14, 5, 0, 221, 15, // Skip to: 6920
/* 2859 */    MCD::OPC_Decode, 223, 2, 38, // Opcode: FSTOX
/* 2863 */    MCD::OPC_FilterValue, 130, 1, 10, 0, // Skip to: 2878
/* 2868 */    MCD::OPC_CheckField, 14, 5, 0, 206, 15, // Skip to: 6920
/* 2874 */    MCD::OPC_Decode, 233, 1, 31, // Opcode: FDTOX
/* 2878 */    MCD::OPC_FilterValue, 131, 1, 10, 0, // Skip to: 2893
/* 2883 */    MCD::OPC_CheckField, 14, 5, 0, 191, 15, // Skip to: 6920
/* 2889 */    MCD::OPC_Decode, 203, 2, 39, // Opcode: FQTOX
/* 2893 */    MCD::OPC_FilterValue, 132, 1, 10, 0, // Skip to: 2908
/* 2898 */    MCD::OPC_CheckField, 14, 5, 0, 176, 15, // Skip to: 6920
/* 2904 */    MCD::OPC_Decode, 233, 2, 40, // Opcode: FXTOS
/* 2908 */    MCD::OPC_FilterValue, 136, 1, 10, 0, // Skip to: 2923
/* 2913 */    MCD::OPC_CheckField, 14, 5, 0, 161, 15, // Skip to: 6920
/* 2919 */    MCD::OPC_Decode, 231, 2, 31, // Opcode: FXTOD
/* 2923 */    MCD::OPC_FilterValue, 140, 1, 10, 0, // Skip to: 2938
/* 2928 */    MCD::OPC_CheckField, 14, 5, 0, 146, 15, // Skip to: 6920
/* 2934 */    MCD::OPC_Decode, 232, 2, 41, // Opcode: FXTOQ
/* 2938 */    MCD::OPC_FilterValue, 196, 1, 10, 0, // Skip to: 2953
/* 2943 */    MCD::OPC_CheckField, 14, 5, 0, 131, 15, // Skip to: 6920
/* 2949 */    MCD::OPC_Decode, 241, 1, 30, // Opcode: FITOS
/* 2953 */    MCD::OPC_FilterValue, 198, 1, 10, 0, // Skip to: 2968
/* 2958 */    MCD::OPC_CheckField, 14, 5, 0, 116, 15, // Skip to: 6920
/* 2964 */    MCD::OPC_Decode, 232, 1, 40, // Opcode: FDTOS
/* 2968 */    MCD::OPC_FilterValue, 199, 1, 10, 0, // Skip to: 2983
/* 2973 */    MCD::OPC_CheckField, 14, 5, 0, 101, 15, // Skip to: 6920
/* 2979 */    MCD::OPC_Decode, 202, 2, 42, // Opcode: FQTOS
/* 2983 */    MCD::OPC_FilterValue, 200, 1, 10, 0, // Skip to: 2998
/* 2988 */    MCD::OPC_CheckField, 14, 5, 0, 86, 15, // Skip to: 6920
/* 2994 */    MCD::OPC_Decode, 239, 1, 38, // Opcode: FITOD
/* 2998 */    MCD::OPC_FilterValue, 201, 1, 10, 0, // Skip to: 3013
/* 3003 */    MCD::OPC_CheckField, 14, 5, 0, 71, 15, // Skip to: 6920
/* 3009 */    MCD::OPC_Decode, 220, 2, 38, // Opcode: FSTOD
/* 3013 */    MCD::OPC_FilterValue, 203, 1, 10, 0, // Skip to: 3028
/* 3018 */    MCD::OPC_CheckField, 14, 5, 0, 56, 15, // Skip to: 6920
/* 3024 */    MCD::OPC_Decode, 200, 2, 39, // Opcode: FQTOD
/* 3028 */    MCD::OPC_FilterValue, 204, 1, 10, 0, // Skip to: 3043
/* 3033 */    MCD::OPC_CheckField, 14, 5, 0, 41, 15, // Skip to: 6920
/* 3039 */    MCD::OPC_Decode, 240, 1, 43, // Opcode: FITOQ
/* 3043 */    MCD::OPC_FilterValue, 205, 1, 10, 0, // Skip to: 3058
/* 3048 */    MCD::OPC_CheckField, 14, 5, 0, 26, 15, // Skip to: 6920
/* 3054 */    MCD::OPC_Decode, 222, 2, 43, // Opcode: FSTOQ
/* 3058 */    MCD::OPC_FilterValue, 206, 1, 10, 0, // Skip to: 3073
/* 3063 */    MCD::OPC_CheckField, 14, 5, 0, 11, 15, // Skip to: 6920
/* 3069 */    MCD::OPC_Decode, 231, 1, 41, // Opcode: FDTOQ
/* 3073 */    MCD::OPC_FilterValue, 209, 1, 10, 0, // Skip to: 3088
/* 3078 */    MCD::OPC_CheckField, 14, 5, 0, 252, 14, // Skip to: 6920
/* 3084 */    MCD::OPC_Decode, 221, 2, 30, // Opcode: FSTOI
/* 3088 */    MCD::OPC_FilterValue, 210, 1, 10, 0, // Skip to: 3103
/* 3093 */    MCD::OPC_CheckField, 14, 5, 0, 237, 14, // Skip to: 6920
/* 3099 */    MCD::OPC_Decode, 230, 1, 40, // Opcode: FDTOI
/* 3103 */    MCD::OPC_FilterValue, 211, 1, 228, 14, // Skip to: 6920
/* 3108 */    MCD::OPC_CheckField, 14, 5, 0, 222, 14, // Skip to: 6920
/* 3114 */    MCD::OPC_Decode, 201, 2, 42, // Opcode: FQTOI
/* 3118 */    MCD::OPC_FilterValue, 53, 70, 2, // Skip to: 3704
/* 3122 */    MCD::OPC_ExtractField, 5, 6,  // Inst{10-5} ...
/* 3125 */    MCD::OPC_FilterValue, 1, 75, 0, // Skip to: 3204
/* 3129 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 3132 */    MCD::OPC_FilterValue, 0, 29, 0, // Skip to: 3165
/* 3136 */    MCD::OPC_ExtractField, 18, 1,  // Inst{18} ...
/* 3139 */    MCD::OPC_FilterValue, 0, 193, 14, // Skip to: 6920
/* 3143 */    MCD::OPC_CheckPredicate, 0, 10, 0, // Skip to: 3157
/* 3147 */    MCD::OPC_CheckField, 11, 2, 0, 4, 0, // Skip to: 3157
/* 3153 */    MCD::OPC_Decode, 148, 2, 44, // Opcode: FMOVS_FCC
/* 3157 */    MCD::OPC_CheckPredicate, 0, 175, 14, // Skip to: 6920
/* 3161 */    MCD::OPC_Decode, 217, 4, 45, // Opcode: V9FMOVS_FCC
/* 3165 */    MCD::OPC_FilterValue, 1, 167, 14, // Skip to: 6920
/* 3169 */    MCD::OPC_ExtractField, 11, 2,  // Inst{12-11} ...
/* 3172 */    MCD::OPC_FilterValue, 0, 14, 0, // Skip to: 3190
/* 3176 */    MCD::OPC_CheckPredicate, 0, 156, 14, // Skip to: 6920
/* 3180 */    MCD::OPC_CheckField, 18, 1, 0, 150, 14, // Skip to: 6920
/* 3186 */    MCD::OPC_Decode, 149, 2, 44, // Opcode: FMOVS_ICC
/* 3190 */    MCD::OPC_FilterValue, 2, 142, 14, // Skip to: 6920
/* 3194 */    MCD::OPC_CheckField, 18, 1, 0, 136, 14, // Skip to: 6920
/* 3200 */    MCD::OPC_Decode, 150, 2, 44, // Opcode: FMOVS_XCC
/* 3204 */    MCD::OPC_FilterValue, 2, 75, 0, // Skip to: 3283
/* 3208 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 3211 */    MCD::OPC_FilterValue, 0, 29, 0, // Skip to: 3244
/* 3215 */    MCD::OPC_ExtractField, 18, 1,  // Inst{18} ...
/* 3218 */    MCD::OPC_FilterValue, 0, 114, 14, // Skip to: 6920
/* 3222 */    MCD::OPC_CheckPredicate, 0, 10, 0, // Skip to: 3236
/* 3226 */    MCD::OPC_CheckField, 11, 2, 0, 4, 0, // Skip to: 3236
/* 3232 */    MCD::OPC_Decode, 250, 1, 46, // Opcode: FMOVD_FCC
/* 3236 */    MCD::OPC_CheckPredicate, 0, 96, 14, // Skip to: 6920
/* 3240 */    MCD::OPC_Decode, 215, 4, 47, // Opcode: V9FMOVD_FCC
/* 3244 */    MCD::OPC_FilterValue, 1, 88, 14, // Skip to: 6920
/* 3248 */    MCD::OPC_ExtractField, 11, 2,  // Inst{12-11} ...
/* 3251 */    MCD::OPC_FilterValue, 0, 14, 0, // Skip to: 3269
/* 3255 */    MCD::OPC_CheckPredicate, 0, 77, 14, // Skip to: 6920
/* 3259 */    MCD::OPC_CheckField, 18, 1, 0, 71, 14, // Skip to: 6920
/* 3265 */    MCD::OPC_Decode, 251, 1, 46, // Opcode: FMOVD_ICC
/* 3269 */    MCD::OPC_FilterValue, 2, 63, 14, // Skip to: 6920
/* 3273 */    MCD::OPC_CheckField, 18, 1, 0, 57, 14, // Skip to: 6920
/* 3279 */    MCD::OPC_Decode, 252, 1, 46, // Opcode: FMOVD_XCC
/* 3283 */    MCD::OPC_FilterValue, 3, 75, 0, // Skip to: 3362
/* 3287 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 3290 */    MCD::OPC_FilterValue, 0, 29, 0, // Skip to: 3323
/* 3294 */    MCD::OPC_ExtractField, 18, 1,  // Inst{18} ...
/* 3297 */    MCD::OPC_FilterValue, 0, 35, 14, // Skip to: 6920
/* 3301 */    MCD::OPC_CheckPredicate, 0, 10, 0, // Skip to: 3315
/* 3305 */    MCD::OPC_CheckField, 11, 2, 0, 4, 0, // Skip to: 3315
/* 3311 */    MCD::OPC_Decode, 254, 1, 48, // Opcode: FMOVQ_FCC
/* 3315 */    MCD::OPC_CheckPredicate, 0, 17, 14, // Skip to: 6920
/* 3319 */    MCD::OPC_Decode, 216, 4, 49, // Opcode: V9FMOVQ_FCC
/* 3323 */    MCD::OPC_FilterValue, 1, 9, 14, // Skip to: 6920
/* 3327 */    MCD::OPC_ExtractField, 11, 2,  // Inst{12-11} ...
/* 3330 */    MCD::OPC_FilterValue, 0, 14, 0, // Skip to: 3348
/* 3334 */    MCD::OPC_CheckPredicate, 0, 254, 13, // Skip to: 6920
/* 3338 */    MCD::OPC_CheckField, 18, 1, 0, 248, 13, // Skip to: 6920
/* 3344 */    MCD::OPC_Decode, 255, 1, 48, // Opcode: FMOVQ_ICC
/* 3348 */    MCD::OPC_FilterValue, 2, 240, 13, // Skip to: 6920
/* 3352 */    MCD::OPC_CheckField, 18, 1, 0, 234, 13, // Skip to: 6920
/* 3358 */    MCD::OPC_Decode, 128, 2, 48, // Opcode: FMOVQ_XCC
/* 3362 */    MCD::OPC_FilterValue, 5, 27, 0, // Skip to: 3393
/* 3366 */    MCD::OPC_ExtractField, 11, 3,  // Inst{13-11} ...
/* 3369 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 3381
/* 3373 */    MCD::OPC_CheckPredicate, 0, 215, 13, // Skip to: 6920
/* 3377 */    MCD::OPC_Decode, 137, 2, 50, // Opcode: FMOVRLEZS
/* 3381 */    MCD::OPC_FilterValue, 3, 207, 13, // Skip to: 6920
/* 3385 */    MCD::OPC_CheckPredicate, 0, 203, 13, // Skip to: 6920
/* 3389 */    MCD::OPC_Decode, 134, 2, 50, // Opcode: FMOVRGZS
/* 3393 */    MCD::OPC_FilterValue, 6, 27, 0, // Skip to: 3424
/* 3397 */    MCD::OPC_ExtractField, 11, 3,  // Inst{13-11} ...
/* 3400 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 3412
/* 3404 */    MCD::OPC_CheckPredicate, 0, 184, 13, // Skip to: 6920
/* 3408 */    MCD::OPC_Decode, 135, 2, 50, // Opcode: FMOVRLEZD
/* 3412 */    MCD::OPC_FilterValue, 3, 176, 13, // Skip to: 6920
/* 3416 */    MCD::OPC_CheckPredicate, 0, 172, 13, // Skip to: 6920
/* 3420 */    MCD::OPC_Decode, 132, 2, 50, // Opcode: FMOVRGZD
/* 3424 */    MCD::OPC_FilterValue, 7, 27, 0, // Skip to: 3455
/* 3428 */    MCD::OPC_ExtractField, 11, 3,  // Inst{13-11} ...
/* 3431 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 3443
/* 3435 */    MCD::OPC_CheckPredicate, 0, 153, 13, // Skip to: 6920
/* 3439 */    MCD::OPC_Decode, 136, 2, 50, // Opcode: FMOVRLEZQ
/* 3443 */    MCD::OPC_FilterValue, 3, 145, 13, // Skip to: 6920
/* 3447 */    MCD::OPC_CheckPredicate, 0, 141, 13, // Skip to: 6920
/* 3451 */    MCD::OPC_Decode, 133, 2, 50, // Opcode: FMOVRGZQ
/* 3455 */    MCD::OPC_FilterValue, 17, 10, 0, // Skip to: 3469
/* 3459 */    MCD::OPC_CheckField, 11, 3, 1, 127, 13, // Skip to: 6920
/* 3465 */    MCD::OPC_Decode, 214, 4, 51, // Opcode: V9FCMPS
/* 3469 */    MCD::OPC_FilterValue, 18, 10, 0, // Skip to: 3483
/* 3473 */    MCD::OPC_CheckField, 11, 3, 1, 113, 13, // Skip to: 6920
/* 3479 */    MCD::OPC_Decode, 209, 4, 52, // Opcode: V9FCMPD
/* 3483 */    MCD::OPC_FilterValue, 19, 10, 0, // Skip to: 3497
/* 3487 */    MCD::OPC_CheckField, 11, 3, 1, 99, 13, // Skip to: 6920
/* 3493 */    MCD::OPC_Decode, 213, 4, 53, // Opcode: V9FCMPQ
/* 3497 */    MCD::OPC_FilterValue, 21, 10, 0, // Skip to: 3511
/* 3501 */    MCD::OPC_CheckField, 11, 3, 1, 85, 13, // Skip to: 6920
/* 3507 */    MCD::OPC_Decode, 212, 4, 51, // Opcode: V9FCMPES
/* 3511 */    MCD::OPC_FilterValue, 22, 10, 0, // Skip to: 3525
/* 3515 */    MCD::OPC_CheckField, 11, 3, 1, 71, 13, // Skip to: 6920
/* 3521 */    MCD::OPC_Decode, 210, 4, 52, // Opcode: V9FCMPED
/* 3525 */    MCD::OPC_FilterValue, 23, 10, 0, // Skip to: 3539
/* 3529 */    MCD::OPC_CheckField, 11, 3, 1, 57, 13, // Skip to: 6920
/* 3535 */    MCD::OPC_Decode, 211, 4, 53, // Opcode: V9FCMPEQ
/* 3539 */    MCD::OPC_FilterValue, 37, 51, 0, // Skip to: 3594
/* 3543 */    MCD::OPC_ExtractField, 11, 3,  // Inst{13-11} ...
/* 3546 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 3558
/* 3550 */    MCD::OPC_CheckPredicate, 0, 38, 13, // Skip to: 6920
/* 3554 */    MCD::OPC_Decode, 146, 2, 50, // Opcode: FMOVRZS
/* 3558 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 3570
/* 3562 */    MCD::OPC_CheckPredicate, 0, 26, 13, // Skip to: 6920
/* 3566 */    MCD::OPC_Decode, 140, 2, 50, // Opcode: FMOVRLZS
/* 3570 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 3582
/* 3574 */    MCD::OPC_CheckPredicate, 0, 14, 13, // Skip to: 6920
/* 3578 */    MCD::OPC_Decode, 143, 2, 50, // Opcode: FMOVRNZS
/* 3582 */    MCD::OPC_FilterValue, 3, 6, 13, // Skip to: 6920
/* 3586 */    MCD::OPC_CheckPredicate, 0, 2, 13, // Skip to: 6920
/* 3590 */    MCD::OPC_Decode, 131, 2, 50, // Opcode: FMOVRGEZS
/* 3594 */    MCD::OPC_FilterValue, 38, 51, 0, // Skip to: 3649
/* 3598 */    MCD::OPC_ExtractField, 11, 3,  // Inst{13-11} ...
/* 3601 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 3613
/* 3605 */    MCD::OPC_CheckPredicate, 0, 239, 12, // Skip to: 6920
/* 3609 */    MCD::OPC_Decode, 144, 2, 50, // Opcode: FMOVRZD
/* 3613 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 3625
/* 3617 */    MCD::OPC_CheckPredicate, 0, 227, 12, // Skip to: 6920
/* 3621 */    MCD::OPC_Decode, 138, 2, 50, // Opcode: FMOVRLZD
/* 3625 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 3637
/* 3629 */    MCD::OPC_CheckPredicate, 0, 215, 12, // Skip to: 6920
/* 3633 */    MCD::OPC_Decode, 141, 2, 50, // Opcode: FMOVRNZD
/* 3637 */    MCD::OPC_FilterValue, 3, 207, 12, // Skip to: 6920
/* 3641 */    MCD::OPC_CheckPredicate, 0, 203, 12, // Skip to: 6920
/* 3645 */    MCD::OPC_Decode, 129, 2, 50, // Opcode: FMOVRGEZD
/* 3649 */    MCD::OPC_FilterValue, 39, 195, 12, // Skip to: 6920
/* 3653 */    MCD::OPC_ExtractField, 11, 3,  // Inst{13-11} ...
/* 3656 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 3668
/* 3660 */    MCD::OPC_CheckPredicate, 0, 184, 12, // Skip to: 6920
/* 3664 */    MCD::OPC_Decode, 145, 2, 50, // Opcode: FMOVRZQ
/* 3668 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 3680
/* 3672 */    MCD::OPC_CheckPredicate, 0, 172, 12, // Skip to: 6920
/* 3676 */    MCD::OPC_Decode, 139, 2, 50, // Opcode: FMOVRLZQ
/* 3680 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 3692
/* 3684 */    MCD::OPC_CheckPredicate, 0, 160, 12, // Skip to: 6920
/* 3688 */    MCD::OPC_Decode, 142, 2, 50, // Opcode: FMOVRNZQ
/* 3692 */    MCD::OPC_FilterValue, 3, 152, 12, // Skip to: 6920
/* 3696 */    MCD::OPC_CheckPredicate, 0, 148, 12, // Skip to: 6920
/* 3700 */    MCD::OPC_Decode, 130, 2, 50, // Opcode: FMOVRGEZQ
/* 3704 */    MCD::OPC_FilterValue, 54, 25, 6, // Skip to: 5269
/* 3708 */    MCD::OPC_ExtractField, 5, 9,  // Inst{13-5} ...
/* 3711 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 3723
/* 3715 */    MCD::OPC_CheckPredicate, 2, 129, 12, // Skip to: 6920
/* 3719 */    MCD::OPC_Decode, 191, 1, 10, // Opcode: EDGE8
/* 3723 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 3735
/* 3727 */    MCD::OPC_CheckPredicate, 3, 117, 12, // Skip to: 6920
/* 3731 */    MCD::OPC_Decode, 194, 1, 10, // Opcode: EDGE8N
/* 3735 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 3747
/* 3739 */    MCD::OPC_CheckPredicate, 2, 105, 12, // Skip to: 6920
/* 3743 */    MCD::OPC_Decode, 192, 1, 10, // Opcode: EDGE8L
/* 3747 */    MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 3759
/* 3751 */    MCD::OPC_CheckPredicate, 3, 93, 12, // Skip to: 6920
/* 3755 */    MCD::OPC_Decode, 193, 1, 10, // Opcode: EDGE8LN
/* 3759 */    MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 3771
/* 3763 */    MCD::OPC_CheckPredicate, 2, 81, 12, // Skip to: 6920
/* 3767 */    MCD::OPC_Decode, 183, 1, 10, // Opcode: EDGE16
/* 3771 */    MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 3783
/* 3775 */    MCD::OPC_CheckPredicate, 3, 69, 12, // Skip to: 6920
/* 3779 */    MCD::OPC_Decode, 186, 1, 10, // Opcode: EDGE16N
/* 3783 */    MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 3795
/* 3787 */    MCD::OPC_CheckPredicate, 2, 57, 12, // Skip to: 6920
/* 3791 */    MCD::OPC_Decode, 184, 1, 10, // Opcode: EDGE16L
/* 3795 */    MCD::OPC_FilterValue, 7, 8, 0, // Skip to: 3807
/* 3799 */    MCD::OPC_CheckPredicate, 3, 45, 12, // Skip to: 6920
/* 3803 */    MCD::OPC_Decode, 185, 1, 10, // Opcode: EDGE16LN
/* 3807 */    MCD::OPC_FilterValue, 8, 8, 0, // Skip to: 3819
/* 3811 */    MCD::OPC_CheckPredicate, 2, 33, 12, // Skip to: 6920
/* 3815 */    MCD::OPC_Decode, 187, 1, 10, // Opcode: EDGE32
/* 3819 */    MCD::OPC_FilterValue, 9, 8, 0, // Skip to: 3831
/* 3823 */    MCD::OPC_CheckPredicate, 3, 21, 12, // Skip to: 6920
/* 3827 */    MCD::OPC_Decode, 190, 1, 10, // Opcode: EDGE32N
/* 3831 */    MCD::OPC_FilterValue, 10, 8, 0, // Skip to: 3843
/* 3835 */    MCD::OPC_CheckPredicate, 2, 9, 12, // Skip to: 6920
/* 3839 */    MCD::OPC_Decode, 188, 1, 10, // Opcode: EDGE32L
/* 3843 */    MCD::OPC_FilterValue, 11, 8, 0, // Skip to: 3855
/* 3847 */    MCD::OPC_CheckPredicate, 3, 253, 11, // Skip to: 6920
/* 3851 */    MCD::OPC_Decode, 189, 1, 10, // Opcode: EDGE32LN
/* 3855 */    MCD::OPC_FilterValue, 16, 7, 0, // Skip to: 3866
/* 3859 */    MCD::OPC_CheckPredicate, 2, 241, 11, // Skip to: 6920
/* 3863 */    MCD::OPC_Decode, 125, 10, // Opcode: ARRAY8
/* 3866 */    MCD::OPC_FilterValue, 17, 7, 0, // Skip to: 3877
/* 3870 */    MCD::OPC_CheckPredicate, 1, 230, 11, // Skip to: 6920
/* 3874 */    MCD::OPC_Decode, 102, 10, // Opcode: ADDXC
/* 3877 */    MCD::OPC_FilterValue, 18, 7, 0, // Skip to: 3888
/* 3881 */    MCD::OPC_CheckPredicate, 2, 219, 11, // Skip to: 6920
/* 3885 */    MCD::OPC_Decode, 123, 10, // Opcode: ARRAY16
/* 3888 */    MCD::OPC_FilterValue, 19, 7, 0, // Skip to: 3899
/* 3892 */    MCD::OPC_CheckPredicate, 1, 208, 11, // Skip to: 6920
/* 3896 */    MCD::OPC_Decode, 103, 10, // Opcode: ADDXCCC
/* 3899 */    MCD::OPC_FilterValue, 20, 7, 0, // Skip to: 3910
/* 3903 */    MCD::OPC_CheckPredicate, 2, 197, 11, // Skip to: 6920
/* 3907 */    MCD::OPC_Decode, 124, 10, // Opcode: ARRAY32
/* 3910 */    MCD::OPC_FilterValue, 22, 8, 0, // Skip to: 3922
/* 3914 */    MCD::OPC_CheckPredicate, 1, 186, 11, // Skip to: 6920
/* 3918 */    MCD::OPC_Decode, 205, 4, 10, // Opcode: UMULXHI
/* 3922 */    MCD::OPC_FilterValue, 23, 14, 0, // Skip to: 3940
/* 3926 */    MCD::OPC_CheckPredicate, 1, 174, 11, // Skip to: 6920
/* 3930 */    MCD::OPC_CheckField, 14, 5, 0, 168, 11, // Skip to: 6920
/* 3936 */    MCD::OPC_Decode, 157, 3, 54, // Opcode: LZCNT
/* 3940 */    MCD::OPC_FilterValue, 24, 7, 0, // Skip to: 3951
/* 3944 */    MCD::OPC_CheckPredicate, 2, 156, 11, // Skip to: 6920
/* 3948 */    MCD::OPC_Decode, 110, 10, // Opcode: ALIGNADDR
/* 3951 */    MCD::OPC_FilterValue, 25, 8, 0, // Skip to: 3963
/* 3955 */    MCD::OPC_CheckPredicate, 3, 145, 11, // Skip to: 6920
/* 3959 */    MCD::OPC_Decode, 131, 1, 10, // Opcode: BMASK
/* 3963 */    MCD::OPC_FilterValue, 26, 7, 0, // Skip to: 3974
/* 3967 */    MCD::OPC_CheckPredicate, 2, 133, 11, // Skip to: 6920
/* 3971 */    MCD::OPC_Decode, 111, 10, // Opcode: ALIGNADDRL
/* 3974 */    MCD::OPC_FilterValue, 27, 20, 0, // Skip to: 3998
/* 3978 */    MCD::OPC_CheckPredicate, 1, 122, 11, // Skip to: 6920
/* 3982 */    MCD::OPC_CheckField, 25, 5, 0, 116, 11, // Skip to: 6920
/* 3988 */    MCD::OPC_CheckField, 14, 5, 0, 110, 11, // Skip to: 6920
/* 3994 */    MCD::OPC_Decode, 180, 1, 55, // Opcode: CMASK8
/* 3998 */    MCD::OPC_FilterValue, 28, 8, 0, // Skip to: 4010
/* 4002 */    MCD::OPC_CheckPredicate, 3, 98, 11, // Skip to: 6920
/* 4006 */    MCD::OPC_Decode, 168, 1, 34, // Opcode: BSHUFFLE
/* 4010 */    MCD::OPC_FilterValue, 29, 20, 0, // Skip to: 4034
/* 4014 */    MCD::OPC_CheckPredicate, 1, 86, 11, // Skip to: 6920
/* 4018 */    MCD::OPC_CheckField, 25, 5, 0, 80, 11, // Skip to: 6920
/* 4024 */    MCD::OPC_CheckField, 14, 5, 0, 74, 11, // Skip to: 6920
/* 4030 */    MCD::OPC_Decode, 178, 1, 55, // Opcode: CMASK16
/* 4034 */    MCD::OPC_FilterValue, 31, 20, 0, // Skip to: 4058
/* 4038 */    MCD::OPC_CheckPredicate, 1, 62, 11, // Skip to: 6920
/* 4042 */    MCD::OPC_CheckField, 25, 5, 0, 56, 11, // Skip to: 6920
/* 4048 */    MCD::OPC_CheckField, 14, 5, 0, 50, 11, // Skip to: 6920
/* 4054 */    MCD::OPC_Decode, 179, 1, 55, // Opcode: CMASK32
/* 4058 */    MCD::OPC_FilterValue, 32, 8, 0, // Skip to: 4070
/* 4062 */    MCD::OPC_CheckPredicate, 2, 38, 11, // Skip to: 6920
/* 4066 */    MCD::OPC_Decode, 220, 1, 56, // Opcode: FCMPLE16
/* 4070 */    MCD::OPC_FilterValue, 33, 8, 0, // Skip to: 4082
/* 4074 */    MCD::OPC_CheckPredicate, 1, 26, 11, // Skip to: 6920
/* 4078 */    MCD::OPC_Decode, 206, 2, 34, // Opcode: FSLL16
/* 4082 */    MCD::OPC_FilterValue, 34, 8, 0, // Skip to: 4094
/* 4086 */    MCD::OPC_CheckPredicate, 2, 14, 11, // Skip to: 6920
/* 4090 */    MCD::OPC_Decode, 222, 1, 56, // Opcode: FCMPNE16
/* 4094 */    MCD::OPC_FilterValue, 35, 8, 0, // Skip to: 4106
/* 4098 */    MCD::OPC_CheckPredicate, 1, 2, 11, // Skip to: 6920
/* 4102 */    MCD::OPC_Decode, 218, 2, 34, // Opcode: FSRL16
/* 4106 */    MCD::OPC_FilterValue, 36, 8, 0, // Skip to: 4118
/* 4110 */    MCD::OPC_CheckPredicate, 2, 246, 10, // Skip to: 6920
/* 4114 */    MCD::OPC_Decode, 221, 1, 56, // Opcode: FCMPLE32
/* 4118 */    MCD::OPC_FilterValue, 37, 8, 0, // Skip to: 4130
/* 4122 */    MCD::OPC_CheckPredicate, 1, 234, 10, // Skip to: 6920
/* 4126 */    MCD::OPC_Decode, 207, 2, 34, // Opcode: FSLL32
/* 4130 */    MCD::OPC_FilterValue, 38, 8, 0, // Skip to: 4142
/* 4134 */    MCD::OPC_CheckPredicate, 2, 222, 10, // Skip to: 6920
/* 4138 */    MCD::OPC_Decode, 223, 1, 56, // Opcode: FCMPNE32
/* 4142 */    MCD::OPC_FilterValue, 39, 8, 0, // Skip to: 4154
/* 4146 */    MCD::OPC_CheckPredicate, 1, 210, 10, // Skip to: 6920
/* 4150 */    MCD::OPC_Decode, 219, 2, 34, // Opcode: FSRL32
/* 4154 */    MCD::OPC_FilterValue, 40, 8, 0, // Skip to: 4166
/* 4158 */    MCD::OPC_CheckPredicate, 2, 198, 10, // Skip to: 6920
/* 4162 */    MCD::OPC_Decode, 218, 1, 56, // Opcode: FCMPGT16
/* 4166 */    MCD::OPC_FilterValue, 41, 8, 0, // Skip to: 4178
/* 4170 */    MCD::OPC_CheckPredicate, 1, 186, 10, // Skip to: 6920
/* 4174 */    MCD::OPC_Decode, 204, 2, 34, // Opcode: FSLAS16
/* 4178 */    MCD::OPC_FilterValue, 42, 8, 0, // Skip to: 4190
/* 4182 */    MCD::OPC_CheckPredicate, 2, 174, 10, // Skip to: 6920
/* 4186 */    MCD::OPC_Decode, 216, 1, 56, // Opcode: FCMPEQ16
/* 4190 */    MCD::OPC_FilterValue, 43, 8, 0, // Skip to: 4202
/* 4194 */    MCD::OPC_CheckPredicate, 1, 162, 10, // Skip to: 6920
/* 4198 */    MCD::OPC_Decode, 212, 2, 34, // Opcode: FSRA16
/* 4202 */    MCD::OPC_FilterValue, 44, 8, 0, // Skip to: 4214
/* 4206 */    MCD::OPC_CheckPredicate, 2, 150, 10, // Skip to: 6920
/* 4210 */    MCD::OPC_Decode, 219, 1, 56, // Opcode: FCMPGT32
/* 4214 */    MCD::OPC_FilterValue, 45, 8, 0, // Skip to: 4226
/* 4218 */    MCD::OPC_CheckPredicate, 1, 138, 10, // Skip to: 6920
/* 4222 */    MCD::OPC_Decode, 205, 2, 34, // Opcode: FSLAS32
/* 4226 */    MCD::OPC_FilterValue, 46, 8, 0, // Skip to: 4238
/* 4230 */    MCD::OPC_CheckPredicate, 2, 126, 10, // Skip to: 6920
/* 4234 */    MCD::OPC_Decode, 217, 1, 56, // Opcode: FCMPEQ32
/* 4238 */    MCD::OPC_FilterValue, 47, 8, 0, // Skip to: 4250
/* 4242 */    MCD::OPC_CheckPredicate, 1, 114, 10, // Skip to: 6920
/* 4246 */    MCD::OPC_Decode, 213, 2, 34, // Opcode: FSRA32
/* 4250 */    MCD::OPC_FilterValue, 49, 8, 0, // Skip to: 4262
/* 4254 */    MCD::OPC_CheckPredicate, 2, 102, 10, // Skip to: 6920
/* 4258 */    MCD::OPC_Decode, 153, 2, 34, // Opcode: FMUL8X16
/* 4262 */    MCD::OPC_FilterValue, 51, 8, 0, // Skip to: 4274
/* 4266 */    MCD::OPC_CheckPredicate, 2, 90, 10, // Skip to: 6920
/* 4270 */    MCD::OPC_Decode, 155, 2, 34, // Opcode: FMUL8X16AU
/* 4274 */    MCD::OPC_FilterValue, 53, 8, 0, // Skip to: 4286
/* 4278 */    MCD::OPC_CheckPredicate, 2, 78, 10, // Skip to: 6920
/* 4282 */    MCD::OPC_Decode, 154, 2, 34, // Opcode: FMUL8X16AL
/* 4286 */    MCD::OPC_FilterValue, 54, 8, 0, // Skip to: 4298
/* 4290 */    MCD::OPC_CheckPredicate, 2, 66, 10, // Skip to: 6920
/* 4294 */    MCD::OPC_Decode, 151, 2, 34, // Opcode: FMUL8SUX16
/* 4298 */    MCD::OPC_FilterValue, 55, 8, 0, // Skip to: 4310
/* 4302 */    MCD::OPC_CheckPredicate, 2, 54, 10, // Skip to: 6920
/* 4306 */    MCD::OPC_Decode, 152, 2, 34, // Opcode: FMUL8ULX16
/* 4310 */    MCD::OPC_FilterValue, 56, 8, 0, // Skip to: 4322
/* 4314 */    MCD::OPC_CheckPredicate, 2, 42, 10, // Skip to: 6920
/* 4318 */    MCD::OPC_Decode, 157, 2, 34, // Opcode: FMULD8SUX16
/* 4322 */    MCD::OPC_FilterValue, 57, 8, 0, // Skip to: 4334
/* 4326 */    MCD::OPC_CheckPredicate, 2, 30, 10, // Skip to: 6920
/* 4330 */    MCD::OPC_Decode, 158, 2, 34, // Opcode: FMULD8ULX16
/* 4334 */    MCD::OPC_FilterValue, 58, 8, 0, // Skip to: 4346
/* 4338 */    MCD::OPC_CheckPredicate, 2, 18, 10, // Skip to: 6920
/* 4342 */    MCD::OPC_Decode, 188, 2, 34, // Opcode: FPACK32
/* 4346 */    MCD::OPC_FilterValue, 59, 14, 0, // Skip to: 4364
/* 4350 */    MCD::OPC_CheckPredicate, 2, 6, 10, // Skip to: 6920
/* 4354 */    MCD::OPC_CheckField, 14, 5, 0, 0, 10, // Skip to: 6920
/* 4360 */    MCD::OPC_Decode, 187, 2, 31, // Opcode: FPACK16
/* 4364 */    MCD::OPC_FilterValue, 61, 14, 0, // Skip to: 4382
/* 4368 */    MCD::OPC_CheckPredicate, 2, 244, 9, // Skip to: 6920
/* 4372 */    MCD::OPC_CheckField, 14, 5, 0, 238, 9, // Skip to: 6920
/* 4378 */    MCD::OPC_Decode, 189, 2, 31, // Opcode: FPACKFIX
/* 4382 */    MCD::OPC_FilterValue, 62, 8, 0, // Skip to: 4394
/* 4386 */    MCD::OPC_CheckPredicate, 2, 226, 9, // Skip to: 6920
/* 4390 */    MCD::OPC_Decode, 198, 3, 34, // Opcode: PDIST
/* 4394 */    MCD::OPC_FilterValue, 63, 8, 0, // Skip to: 4406
/* 4398 */    MCD::OPC_CheckPredicate, 1, 214, 9, // Skip to: 6920
/* 4402 */    MCD::OPC_Decode, 199, 3, 34, // Opcode: PDISTN
/* 4406 */    MCD::OPC_FilterValue, 64, 8, 0, // Skip to: 4418
/* 4410 */    MCD::OPC_CheckPredicate, 1, 202, 9, // Skip to: 6920
/* 4414 */    MCD::OPC_Decode, 248, 1, 34, // Opcode: FMEAN16
/* 4418 */    MCD::OPC_FilterValue, 66, 8, 0, // Skip to: 4430
/* 4422 */    MCD::OPC_CheckPredicate, 1, 190, 9, // Skip to: 6920
/* 4426 */    MCD::OPC_Decode, 194, 2, 34, // Opcode: FPADD64
/* 4430 */    MCD::OPC_FilterValue, 68, 8, 0, // Skip to: 4442
/* 4434 */    MCD::OPC_CheckPredicate, 1, 178, 9, // Skip to: 6920
/* 4438 */    MCD::OPC_Decode, 214, 1, 34, // Opcode: FCHKSM16
/* 4442 */    MCD::OPC_FilterValue, 72, 8, 0, // Skip to: 4454
/* 4446 */    MCD::OPC_CheckPredicate, 2, 166, 9, // Skip to: 6920
/* 4450 */    MCD::OPC_Decode, 205, 1, 34, // Opcode: FALIGNADATA
/* 4454 */    MCD::OPC_FilterValue, 75, 8, 0, // Skip to: 4466
/* 4458 */    MCD::OPC_CheckPredicate, 2, 154, 9, // Skip to: 6920
/* 4462 */    MCD::OPC_Decode, 195, 2, 34, // Opcode: FPMERGE
/* 4466 */    MCD::OPC_FilterValue, 77, 14, 0, // Skip to: 4484
/* 4470 */    MCD::OPC_CheckPredicate, 2, 142, 9, // Skip to: 6920
/* 4474 */    MCD::OPC_CheckField, 14, 5, 0, 136, 9, // Skip to: 6920
/* 4480 */    MCD::OPC_Decode, 234, 1, 31, // Opcode: FEXPAND
/* 4484 */    MCD::OPC_FilterValue, 80, 8, 0, // Skip to: 4496
/* 4488 */    MCD::OPC_CheckPredicate, 2, 124, 9, // Skip to: 6920
/* 4492 */    MCD::OPC_Decode, 190, 2, 34, // Opcode: FPADD16
/* 4496 */    MCD::OPC_FilterValue, 81, 8, 0, // Skip to: 4508
/* 4500 */    MCD::OPC_CheckPredicate, 2, 112, 9, // Skip to: 6920
/* 4504 */    MCD::OPC_Decode, 191, 2, 34, // Opcode: FPADD16S
/* 4508 */    MCD::OPC_FilterValue, 82, 8, 0, // Skip to: 4520
/* 4512 */    MCD::OPC_CheckPredicate, 2, 100, 9, // Skip to: 6920
/* 4516 */    MCD::OPC_Decode, 192, 2, 34, // Opcode: FPADD32
/* 4520 */    MCD::OPC_FilterValue, 83, 8, 0, // Skip to: 4532
/* 4524 */    MCD::OPC_CheckPredicate, 2, 88, 9, // Skip to: 6920
/* 4528 */    MCD::OPC_Decode, 193, 2, 34, // Opcode: FPADD32S
/* 4532 */    MCD::OPC_FilterValue, 84, 8, 0, // Skip to: 4544
/* 4536 */    MCD::OPC_CheckPredicate, 2, 76, 9, // Skip to: 6920
/* 4540 */    MCD::OPC_Decode, 196, 2, 34, // Opcode: FPSUB16
/* 4544 */    MCD::OPC_FilterValue, 85, 8, 0, // Skip to: 4556
/* 4548 */    MCD::OPC_CheckPredicate, 2, 64, 9, // Skip to: 6920
/* 4552 */    MCD::OPC_Decode, 197, 2, 34, // Opcode: FPSUB16S
/* 4556 */    MCD::OPC_FilterValue, 86, 8, 0, // Skip to: 4568
/* 4560 */    MCD::OPC_CheckPredicate, 2, 52, 9, // Skip to: 6920
/* 4564 */    MCD::OPC_Decode, 198, 2, 34, // Opcode: FPSUB32
/* 4568 */    MCD::OPC_FilterValue, 87, 8, 0, // Skip to: 4580
/* 4572 */    MCD::OPC_CheckPredicate, 2, 40, 9, // Skip to: 6920
/* 4576 */    MCD::OPC_Decode, 199, 2, 34, // Opcode: FPSUB32S
/* 4580 */    MCD::OPC_FilterValue, 96, 20, 0, // Skip to: 4604
/* 4584 */    MCD::OPC_CheckPredicate, 2, 28, 9, // Skip to: 6920
/* 4588 */    MCD::OPC_CheckField, 14, 5, 0, 22, 9, // Skip to: 6920
/* 4594 */    MCD::OPC_CheckField, 0, 5, 0, 16, 9, // Skip to: 6920
/* 4600 */    MCD::OPC_Decode, 234, 2, 57, // Opcode: FZERO
/* 4604 */    MCD::OPC_FilterValue, 97, 20, 0, // Skip to: 4628
/* 4608 */    MCD::OPC_CheckPredicate, 2, 4, 9, // Skip to: 6920
/* 4612 */    MCD::OPC_CheckField, 14, 5, 0, 254, 8, // Skip to: 6920
/* 4618 */    MCD::OPC_CheckField, 0, 5, 0, 248, 8, // Skip to: 6920
/* 4624 */    MCD::OPC_Decode, 235, 2, 58, // Opcode: FZEROS
/* 4628 */    MCD::OPC_FilterValue, 98, 8, 0, // Skip to: 4640
/* 4632 */    MCD::OPC_CheckPredicate, 2, 236, 8, // Skip to: 6920
/* 4636 */    MCD::OPC_Decode, 172, 2, 34, // Opcode: FNOR
/* 4640 */    MCD::OPC_FilterValue, 99, 8, 0, // Skip to: 4652
/* 4644 */    MCD::OPC_CheckPredicate, 2, 224, 8, // Skip to: 6920
/* 4648 */    MCD::OPC_Decode, 173, 2, 33, // Opcode: FNORS
/* 4652 */    MCD::OPC_FilterValue, 100, 8, 0, // Skip to: 4664
/* 4656 */    MCD::OPC_CheckPredicate, 2, 212, 8, // Skip to: 6920
/* 4660 */    MCD::OPC_Decode, 209, 1, 34, // Opcode: FANDNOT2
/* 4664 */    MCD::OPC_FilterValue, 101, 8, 0, // Skip to: 4676
/* 4668 */    MCD::OPC_CheckPredicate, 2, 200, 8, // Skip to: 6920
/* 4672 */    MCD::OPC_Decode, 210, 1, 33, // Opcode: FANDNOT2S
/* 4676 */    MCD::OPC_FilterValue, 102, 14, 0, // Skip to: 4694
/* 4680 */    MCD::OPC_CheckPredicate, 2, 188, 8, // Skip to: 6920
/* 4684 */    MCD::OPC_CheckField, 14, 5, 0, 182, 8, // Skip to: 6920
/* 4690 */    MCD::OPC_Decode, 176, 2, 31, // Opcode: FNOT2
/* 4694 */    MCD::OPC_FilterValue, 103, 14, 0, // Skip to: 4712
/* 4698 */    MCD::OPC_CheckPredicate, 2, 170, 8, // Skip to: 6920
/* 4702 */    MCD::OPC_CheckField, 14, 5, 0, 164, 8, // Skip to: 6920
/* 4708 */    MCD::OPC_Decode, 177, 2, 30, // Opcode: FNOT2S
/* 4712 */    MCD::OPC_FilterValue, 104, 8, 0, // Skip to: 4724
/* 4716 */    MCD::OPC_CheckPredicate, 2, 152, 8, // Skip to: 6920
/* 4720 */    MCD::OPC_Decode, 207, 1, 34, // Opcode: FANDNOT1
/* 4724 */    MCD::OPC_FilterValue, 105, 8, 0, // Skip to: 4736
/* 4728 */    MCD::OPC_CheckPredicate, 2, 140, 8, // Skip to: 6920
/* 4732 */    MCD::OPC_Decode, 208, 1, 33, // Opcode: FANDNOT1S
/* 4736 */    MCD::OPC_FilterValue, 106, 14, 0, // Skip to: 4754
/* 4740 */    MCD::OPC_CheckPredicate, 2, 128, 8, // Skip to: 6920
/* 4744 */    MCD::OPC_CheckField, 0, 5, 0, 122, 8, // Skip to: 6920
/* 4750 */    MCD::OPC_Decode, 174, 2, 59, // Opcode: FNOT1
/* 4754 */    MCD::OPC_FilterValue, 107, 14, 0, // Skip to: 4772
/* 4758 */    MCD::OPC_CheckPredicate, 2, 110, 8, // Skip to: 6920
/* 4762 */    MCD::OPC_CheckField, 0, 5, 0, 104, 8, // Skip to: 6920
/* 4768 */    MCD::OPC_Decode, 175, 2, 60, // Opcode: FNOT1S
/* 4772 */    MCD::OPC_FilterValue, 108, 8, 0, // Skip to: 4784
/* 4776 */    MCD::OPC_CheckPredicate, 2, 92, 8, // Skip to: 6920
/* 4780 */    MCD::OPC_Decode, 229, 2, 34, // Opcode: FXOR
/* 4784 */    MCD::OPC_FilterValue, 109, 8, 0, // Skip to: 4796
/* 4788 */    MCD::OPC_CheckPredicate, 2, 80, 8, // Skip to: 6920
/* 4792 */    MCD::OPC_Decode, 230, 2, 33, // Opcode: FXORS
/* 4796 */    MCD::OPC_FilterValue, 110, 8, 0, // Skip to: 4808
/* 4800 */    MCD::OPC_CheckPredicate, 2, 68, 8, // Skip to: 6920
/* 4804 */    MCD::OPC_Decode, 163, 2, 34, // Opcode: FNAND
/* 4808 */    MCD::OPC_FilterValue, 111, 8, 0, // Skip to: 4820
/* 4812 */    MCD::OPC_CheckPredicate, 2, 56, 8, // Skip to: 6920
/* 4816 */    MCD::OPC_Decode, 164, 2, 33, // Opcode: FNANDS
/* 4820 */    MCD::OPC_FilterValue, 112, 8, 0, // Skip to: 4832
/* 4824 */    MCD::OPC_CheckPredicate, 2, 44, 8, // Skip to: 6920
/* 4828 */    MCD::OPC_Decode, 206, 1, 34, // Opcode: FAND
/* 4832 */    MCD::OPC_FilterValue, 113, 8, 0, // Skip to: 4844
/* 4836 */    MCD::OPC_CheckPredicate, 2, 32, 8, // Skip to: 6920
/* 4840 */    MCD::OPC_Decode, 211, 1, 33, // Opcode: FANDS
/* 4844 */    MCD::OPC_FilterValue, 114, 8, 0, // Skip to: 4856
/* 4848 */    MCD::OPC_CheckPredicate, 2, 20, 8, // Skip to: 6920
/* 4852 */    MCD::OPC_Decode, 227, 2, 34, // Opcode: FXNOR
/* 4856 */    MCD::OPC_FilterValue, 115, 8, 0, // Skip to: 4868
/* 4860 */    MCD::OPC_CheckPredicate, 2, 8, 8, // Skip to: 6920
/* 4864 */    MCD::OPC_Decode, 228, 2, 33, // Opcode: FXNORS
/* 4868 */    MCD::OPC_FilterValue, 116, 14, 0, // Skip to: 4886
/* 4872 */    MCD::OPC_CheckPredicate, 2, 252, 7, // Skip to: 6920
/* 4876 */    MCD::OPC_CheckField, 0, 5, 0, 246, 7, // Skip to: 6920
/* 4882 */    MCD::OPC_Decode, 214, 2, 59, // Opcode: FSRC1
/* 4886 */    MCD::OPC_FilterValue, 117, 14, 0, // Skip to: 4904
/* 4890 */    MCD::OPC_CheckPredicate, 2, 234, 7, // Skip to: 6920
/* 4894 */    MCD::OPC_CheckField, 0, 5, 0, 228, 7, // Skip to: 6920
/* 4900 */    MCD::OPC_Decode, 215, 2, 60, // Opcode: FSRC1S
/* 4904 */    MCD::OPC_FilterValue, 118, 8, 0, // Skip to: 4916
/* 4908 */    MCD::OPC_CheckPredicate, 2, 216, 7, // Skip to: 6920
/* 4912 */    MCD::OPC_Decode, 184, 2, 34, // Opcode: FORNOT2
/* 4916 */    MCD::OPC_FilterValue, 119, 8, 0, // Skip to: 4928
/* 4920 */    MCD::OPC_CheckPredicate, 2, 204, 7, // Skip to: 6920
/* 4924 */    MCD::OPC_Decode, 185, 2, 33, // Opcode: FORNOT2S
/* 4928 */    MCD::OPC_FilterValue, 120, 14, 0, // Skip to: 4946
/* 4932 */    MCD::OPC_CheckPredicate, 2, 192, 7, // Skip to: 6920
/* 4936 */    MCD::OPC_CheckField, 14, 5, 0, 186, 7, // Skip to: 6920
/* 4942 */    MCD::OPC_Decode, 216, 2, 31, // Opcode: FSRC2
/* 4946 */    MCD::OPC_FilterValue, 121, 14, 0, // Skip to: 4964
/* 4950 */    MCD::OPC_CheckPredicate, 2, 174, 7, // Skip to: 6920
/* 4954 */    MCD::OPC_CheckField, 14, 5, 0, 168, 7, // Skip to: 6920
/* 4960 */    MCD::OPC_Decode, 217, 2, 30, // Opcode: FSRC2S
/* 4964 */    MCD::OPC_FilterValue, 122, 8, 0, // Skip to: 4976
/* 4968 */    MCD::OPC_CheckPredicate, 2, 156, 7, // Skip to: 6920
/* 4972 */    MCD::OPC_Decode, 182, 2, 34, // Opcode: FORNOT1
/* 4976 */    MCD::OPC_FilterValue, 123, 8, 0, // Skip to: 4988
/* 4980 */    MCD::OPC_CheckPredicate, 2, 144, 7, // Skip to: 6920
/* 4984 */    MCD::OPC_Decode, 183, 2, 33, // Opcode: FORNOT1S
/* 4988 */    MCD::OPC_FilterValue, 124, 8, 0, // Skip to: 5000
/* 4992 */    MCD::OPC_CheckPredicate, 2, 132, 7, // Skip to: 6920
/* 4996 */    MCD::OPC_Decode, 181, 2, 34, // Opcode: FOR
/* 5000 */    MCD::OPC_FilterValue, 125, 8, 0, // Skip to: 5012
/* 5004 */    MCD::OPC_CheckPredicate, 2, 120, 7, // Skip to: 6920
/* 5008 */    MCD::OPC_Decode, 186, 2, 33, // Opcode: FORS
/* 5012 */    MCD::OPC_FilterValue, 126, 20, 0, // Skip to: 5036
/* 5016 */    MCD::OPC_CheckPredicate, 2, 108, 7, // Skip to: 6920
/* 5020 */    MCD::OPC_CheckField, 14, 5, 0, 102, 7, // Skip to: 6920
/* 5026 */    MCD::OPC_CheckField, 0, 5, 0, 96, 7, // Skip to: 6920
/* 5032 */    MCD::OPC_Decode, 179, 2, 57, // Opcode: FONE
/* 5036 */    MCD::OPC_FilterValue, 127, 20, 0, // Skip to: 5060
/* 5040 */    MCD::OPC_CheckPredicate, 2, 84, 7, // Skip to: 6920
/* 5044 */    MCD::OPC_CheckField, 14, 5, 0, 78, 7, // Skip to: 6920
/* 5050 */    MCD::OPC_CheckField, 0, 5, 0, 72, 7, // Skip to: 6920
/* 5056 */    MCD::OPC_Decode, 180, 2, 58, // Opcode: FONES
/* 5060 */    MCD::OPC_FilterValue, 128, 1, 26, 0, // Skip to: 5091
/* 5065 */    MCD::OPC_CheckPredicate, 2, 59, 7, // Skip to: 6920
/* 5069 */    MCD::OPC_CheckField, 25, 5, 0, 53, 7, // Skip to: 6920
/* 5075 */    MCD::OPC_CheckField, 14, 5, 0, 47, 7, // Skip to: 6920
/* 5081 */    MCD::OPC_CheckField, 0, 5, 0, 41, 7, // Skip to: 6920
/* 5087 */    MCD::OPC_Decode, 231, 3, 4, // Opcode: SHUTDOWN
/* 5091 */    MCD::OPC_FilterValue, 129, 1, 26, 0, // Skip to: 5122
/* 5096 */    MCD::OPC_CheckPredicate, 3, 28, 7, // Skip to: 6920
/* 5100 */    MCD::OPC_CheckField, 25, 5, 0, 22, 7, // Skip to: 6920
/* 5106 */    MCD::OPC_CheckField, 14, 5, 0, 16, 7, // Skip to: 6920
/* 5112 */    MCD::OPC_CheckField, 0, 5, 0, 10, 7, // Skip to: 6920
/* 5118 */    MCD::OPC_Decode, 232, 3, 4, // Opcode: SIAM
/* 5122 */    MCD::OPC_FilterValue, 144, 2, 14, 0, // Skip to: 5141
/* 5127 */    MCD::OPC_CheckPredicate, 1, 253, 6, // Skip to: 6920
/* 5131 */    MCD::OPC_CheckField, 14, 5, 0, 247, 6, // Skip to: 6920
/* 5137 */    MCD::OPC_Decode, 159, 3, 61, // Opcode: MOVDTOX
/* 5141 */    MCD::OPC_FilterValue, 145, 2, 14, 0, // Skip to: 5160
/* 5146 */    MCD::OPC_CheckPredicate, 1, 234, 6, // Skip to: 6920
/* 5150 */    MCD::OPC_CheckField, 14, 5, 0, 228, 6, // Skip to: 6920
/* 5156 */    MCD::OPC_Decode, 177, 3, 61, // Opcode: MOVSTOUW
/* 5160 */    MCD::OPC_FilterValue, 147, 2, 14, 0, // Skip to: 5179
/* 5165 */    MCD::OPC_CheckPredicate, 1, 215, 6, // Skip to: 6920
/* 5169 */    MCD::OPC_CheckField, 14, 5, 0, 209, 6, // Skip to: 6920
/* 5175 */    MCD::OPC_Decode, 176, 3, 61, // Opcode: MOVSTOSW
/* 5179 */    MCD::OPC_FilterValue, 149, 2, 8, 0, // Skip to: 5192
/* 5184 */    MCD::OPC_CheckPredicate, 1, 196, 6, // Skip to: 6920
/* 5188 */    MCD::OPC_Decode, 230, 4, 10, // Opcode: XMULX
/* 5192 */    MCD::OPC_FilterValue, 151, 2, 8, 0, // Skip to: 5205
/* 5197 */    MCD::OPC_CheckPredicate, 1, 183, 6, // Skip to: 6920
/* 5201 */    MCD::OPC_Decode, 231, 4, 10, // Opcode: XMULXHI
/* 5205 */    MCD::OPC_FilterValue, 152, 2, 14, 0, // Skip to: 5224
/* 5210 */    MCD::OPC_CheckPredicate, 1, 170, 6, // Skip to: 6920
/* 5214 */    MCD::OPC_CheckField, 14, 5, 0, 164, 6, // Skip to: 6920
/* 5220 */    MCD::OPC_Decode, 181, 3, 62, // Opcode: MOVXTOD
/* 5224 */    MCD::OPC_FilterValue, 153, 2, 14, 0, // Skip to: 5243
/* 5229 */    MCD::OPC_CheckPredicate, 1, 151, 6, // Skip to: 6920
/* 5233 */    MCD::OPC_CheckField, 14, 5, 0, 145, 6, // Skip to: 6920
/* 5239 */    MCD::OPC_Decode, 178, 3, 62, // Opcode: MOVWTOS
/* 5243 */    MCD::OPC_FilterValue, 209, 2, 8, 0, // Skip to: 5256
/* 5248 */    MCD::OPC_CheckPredicate, 1, 132, 6, // Skip to: 6920
/* 5252 */    MCD::OPC_Decode, 243, 1, 52, // Opcode: FLCMPS
/* 5256 */    MCD::OPC_FilterValue, 210, 2, 123, 6, // Skip to: 6920
/* 5261 */    MCD::OPC_CheckPredicate, 1, 119, 6, // Skip to: 6920
/* 5265 */    MCD::OPC_Decode, 242, 1, 52, // Opcode: FLCMPD
/* 5269 */    MCD::OPC_FilterValue, 56, 25, 0, // Skip to: 5298
/* 5273 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 5276 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 5290
/* 5280 */    MCD::OPC_CheckField, 5, 8, 0, 98, 6, // Skip to: 6920
/* 5286 */    MCD::OPC_Decode, 238, 2, 63, // Opcode: JMPLrr
/* 5290 */    MCD::OPC_FilterValue, 1, 90, 6, // Skip to: 6920
/* 5294 */    MCD::OPC_Decode, 237, 2, 63, // Opcode: JMPLri
/* 5298 */    MCD::OPC_FilterValue, 57, 37, 0, // Skip to: 5339
/* 5302 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 5305 */    MCD::OPC_FilterValue, 0, 16, 0, // Skip to: 5325
/* 5309 */    MCD::OPC_CheckField, 25, 5, 0, 69, 6, // Skip to: 6920
/* 5315 */    MCD::OPC_CheckField, 5, 8, 0, 63, 6, // Skip to: 6920
/* 5321 */    MCD::OPC_Decode, 211, 3, 64, // Opcode: RETTrr
/* 5325 */    MCD::OPC_FilterValue, 1, 55, 6, // Skip to: 6920
/* 5329 */    MCD::OPC_CheckField, 25, 5, 0, 49, 6, // Skip to: 6920
/* 5335 */    MCD::OPC_Decode, 210, 3, 64, // Opcode: RETTri
/* 5339 */    MCD::OPC_FilterValue, 58, 84, 0, // Skip to: 5427
/* 5343 */    MCD::OPC_ExtractField, 8, 6,  // Inst{13-8} ...
/* 5346 */    MCD::OPC_FilterValue, 16, 16, 0, // Skip to: 5366
/* 5350 */    MCD::OPC_CheckField, 29, 1, 0, 28, 6, // Skip to: 6920
/* 5356 */    MCD::OPC_CheckField, 5, 3, 0, 22, 6, // Skip to: 6920
/* 5362 */    MCD::OPC_Decode, 194, 4, 65, // Opcode: TXCCrr
/* 5366 */    MCD::OPC_FilterValue, 32, 43, 0, // Skip to: 5413
/* 5370 */    MCD::OPC_ExtractField, 0, 8,  // Inst{7-0} ...
/* 5373 */    MCD::OPC_FilterValue, 3, 16, 0, // Skip to: 5393
/* 5377 */    MCD::OPC_CheckField, 25, 5, 0, 1, 6, // Skip to: 6920
/* 5383 */    MCD::OPC_CheckField, 14, 5, 1, 251, 5, // Skip to: 6920
/* 5389 */    MCD::OPC_Decode, 174, 4, 4, // Opcode: TA3
/* 5393 */    MCD::OPC_FilterValue, 5, 243, 5, // Skip to: 6920
/* 5397 */    MCD::OPC_CheckField, 25, 5, 8, 237, 5, // Skip to: 6920
/* 5403 */    MCD::OPC_CheckField, 14, 5, 0, 231, 5, // Skip to: 6920
/* 5409 */    MCD::OPC_Decode, 175, 4, 4, // Opcode: TA5
/* 5413 */    MCD::OPC_FilterValue, 48, 223, 5, // Skip to: 6920
/* 5417 */    MCD::OPC_CheckField, 29, 1, 0, 217, 5, // Skip to: 6920
/* 5423 */    MCD::OPC_Decode, 193, 4, 66, // Opcode: TXCCri
/* 5427 */    MCD::OPC_FilterValue, 59, 55, 0, // Skip to: 5486
/* 5431 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 5434 */    MCD::OPC_FilterValue, 0, 34, 0, // Skip to: 5472
/* 5438 */    MCD::OPC_ExtractField, 5, 8,  // Inst{12-5} ...
/* 5441 */    MCD::OPC_FilterValue, 0, 195, 5, // Skip to: 6920
/* 5445 */    MCD::OPC_ExtractField, 25, 5,  // Inst{29-25} ...
/* 5448 */    MCD::OPC_FilterValue, 0, 188, 5, // Skip to: 6920
/* 5452 */    MCD::OPC_CheckField, 14, 5, 0, 10, 0, // Skip to: 5468
/* 5458 */    MCD::OPC_CheckField, 0, 5, 0, 4, 0, // Skip to: 5468
/* 5464 */    MCD::OPC_Decode, 244, 1, 4, // Opcode: FLUSH
/* 5468 */    MCD::OPC_Decode, 247, 1, 4, // Opcode: FLUSHrr
/* 5472 */    MCD::OPC_FilterValue, 1, 164, 5, // Skip to: 6920
/* 5476 */    MCD::OPC_CheckField, 25, 5, 0, 158, 5, // Skip to: 6920
/* 5482 */    MCD::OPC_Decode, 246, 1, 4, // Opcode: FLUSHri
/* 5486 */    MCD::OPC_FilterValue, 60, 25, 0, // Skip to: 5515
/* 5490 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 5493 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 5507
/* 5497 */    MCD::OPC_CheckField, 5, 8, 0, 137, 5, // Skip to: 6920
/* 5503 */    MCD::OPC_Decode, 213, 3, 8, // Opcode: SAVErr
/* 5507 */    MCD::OPC_FilterValue, 1, 129, 5, // Skip to: 6920
/* 5511 */    MCD::OPC_Decode, 212, 3, 9, // Opcode: SAVEri
/* 5515 */    MCD::OPC_FilterValue, 61, 25, 0, // Skip to: 5544
/* 5519 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 5522 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 5536
/* 5526 */    MCD::OPC_CheckField, 5, 8, 0, 108, 5, // Skip to: 6920
/* 5532 */    MCD::OPC_Decode, 207, 3, 8, // Opcode: RESTORErr
/* 5536 */    MCD::OPC_FilterValue, 1, 100, 5, // Skip to: 6920
/* 5540 */    MCD::OPC_Decode, 206, 3, 9, // Opcode: RESTOREri
/* 5544 */    MCD::OPC_FilterValue, 62, 25, 0, // Skip to: 5573
/* 5548 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 5551 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 5565
/* 5555 */    MCD::OPC_CheckField, 5, 8, 0, 79, 5, // Skip to: 6920
/* 5561 */    MCD::OPC_Decode, 202, 4, 8, // Opcode: UMACrr
/* 5565 */    MCD::OPC_FilterValue, 1, 71, 5, // Skip to: 6920
/* 5569 */    MCD::OPC_Decode, 201, 4, 9, // Opcode: UMACri
/* 5573 */    MCD::OPC_FilterValue, 63, 63, 5, // Skip to: 6920
/* 5577 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 5580 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 5594
/* 5584 */    MCD::OPC_CheckField, 5, 8, 0, 50, 5, // Skip to: 6920
/* 5590 */    MCD::OPC_Decode, 238, 3, 8, // Opcode: SMACrr
/* 5594 */    MCD::OPC_FilterValue, 1, 42, 5, // Skip to: 6920
/* 5598 */    MCD::OPC_Decode, 237, 3, 9, // Opcode: SMACri
/* 5602 */    MCD::OPC_FilterValue, 3, 34, 5, // Skip to: 6920
/* 5606 */    MCD::OPC_ExtractField, 19, 6,  // Inst{24-19} ...
/* 5609 */    MCD::OPC_FilterValue, 0, 25, 0, // Skip to: 5638
/* 5613 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 5616 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 5630
/* 5620 */    MCD::OPC_CheckField, 5, 8, 0, 14, 5, // Skip to: 6920
/* 5626 */    MCD::OPC_Decode, 154, 3, 67, // Opcode: LDrr
/* 5630 */    MCD::OPC_FilterValue, 1, 6, 5, // Skip to: 6920
/* 5634 */    MCD::OPC_Decode, 153, 3, 67, // Opcode: LDri
/* 5638 */    MCD::OPC_FilterValue, 1, 25, 0, // Skip to: 5667
/* 5642 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 5645 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 5659
/* 5649 */    MCD::OPC_CheckField, 5, 8, 0, 241, 4, // Skip to: 6920
/* 5655 */    MCD::OPC_Decode, 145, 3, 67, // Opcode: LDUBrr
/* 5659 */    MCD::OPC_FilterValue, 1, 233, 4, // Skip to: 6920
/* 5663 */    MCD::OPC_Decode, 144, 3, 67, // Opcode: LDUBri
/* 5667 */    MCD::OPC_FilterValue, 2, 25, 0, // Skip to: 5696
/* 5671 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 5674 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 5688
/* 5678 */    MCD::OPC_CheckField, 5, 8, 0, 212, 4, // Skip to: 6920
/* 5684 */    MCD::OPC_Decode, 148, 3, 67, // Opcode: LDUHrr
/* 5688 */    MCD::OPC_FilterValue, 1, 204, 4, // Skip to: 6920
/* 5692 */    MCD::OPC_Decode, 147, 3, 67, // Opcode: LDUHri
/* 5696 */    MCD::OPC_FilterValue, 3, 25, 0, // Skip to: 5725
/* 5700 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 5703 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 5717
/* 5707 */    MCD::OPC_CheckField, 5, 8, 0, 183, 4, // Skip to: 6920
/* 5713 */    MCD::OPC_Decode, 251, 2, 68, // Opcode: LDDrr
/* 5717 */    MCD::OPC_FilterValue, 1, 175, 4, // Skip to: 6920
/* 5721 */    MCD::OPC_Decode, 250, 2, 68, // Opcode: LDDri
/* 5725 */    MCD::OPC_FilterValue, 4, 25, 0, // Skip to: 5754
/* 5729 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 5732 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 5746
/* 5736 */    MCD::OPC_CheckField, 5, 8, 0, 154, 4, // Skip to: 6920
/* 5742 */    MCD::OPC_Decode, 160, 4, 69, // Opcode: STrr
/* 5746 */    MCD::OPC_FilterValue, 1, 146, 4, // Skip to: 6920
/* 5750 */    MCD::OPC_Decode, 159, 4, 69, // Opcode: STri
/* 5754 */    MCD::OPC_FilterValue, 5, 25, 0, // Skip to: 5783
/* 5758 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 5761 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 5775
/* 5765 */    MCD::OPC_CheckField, 5, 8, 0, 125, 4, // Skip to: 6920
/* 5771 */    MCD::OPC_Decode, 255, 3, 69, // Opcode: STBrr
/* 5775 */    MCD::OPC_FilterValue, 1, 117, 4, // Skip to: 6920
/* 5779 */    MCD::OPC_Decode, 254, 3, 69, // Opcode: STBri
/* 5783 */    MCD::OPC_FilterValue, 6, 25, 0, // Skip to: 5812
/* 5787 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 5790 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 5804
/* 5794 */    MCD::OPC_CheckField, 5, 8, 0, 96, 4, // Skip to: 6920
/* 5800 */    MCD::OPC_Decode, 151, 4, 69, // Opcode: STHrr
/* 5804 */    MCD::OPC_FilterValue, 1, 88, 4, // Skip to: 6920
/* 5808 */    MCD::OPC_Decode, 150, 4, 69, // Opcode: STHri
/* 5812 */    MCD::OPC_FilterValue, 7, 25, 0, // Skip to: 5841
/* 5816 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 5819 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 5833
/* 5823 */    MCD::OPC_CheckField, 5, 8, 0, 67, 4, // Skip to: 6920
/* 5829 */    MCD::OPC_Decode, 143, 4, 70, // Opcode: STDrr
/* 5833 */    MCD::OPC_FilterValue, 1, 59, 4, // Skip to: 6920
/* 5837 */    MCD::OPC_Decode, 142, 4, 70, // Opcode: STDri
/* 5841 */    MCD::OPC_FilterValue, 8, 25, 0, // Skip to: 5870
/* 5845 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 5848 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 5862
/* 5852 */    MCD::OPC_CheckField, 5, 8, 0, 38, 4, // Skip to: 6920
/* 5858 */    MCD::OPC_Decode, 142, 3, 67, // Opcode: LDSWrr
/* 5862 */    MCD::OPC_FilterValue, 1, 30, 4, // Skip to: 6920
/* 5866 */    MCD::OPC_Decode, 141, 3, 67, // Opcode: LDSWri
/* 5870 */    MCD::OPC_FilterValue, 9, 25, 0, // Skip to: 5899
/* 5874 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 5877 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 5891
/* 5881 */    MCD::OPC_CheckField, 5, 8, 0, 9, 4, // Skip to: 6920
/* 5887 */    MCD::OPC_Decode, 134, 3, 67, // Opcode: LDSBrr
/* 5891 */    MCD::OPC_FilterValue, 1, 1, 4, // Skip to: 6920
/* 5895 */    MCD::OPC_Decode, 133, 3, 67, // Opcode: LDSBri
/* 5899 */    MCD::OPC_FilterValue, 10, 25, 0, // Skip to: 5928
/* 5903 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 5906 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 5920
/* 5910 */    MCD::OPC_CheckField, 5, 8, 0, 236, 3, // Skip to: 6920
/* 5916 */    MCD::OPC_Decode, 137, 3, 67, // Opcode: LDSHrr
/* 5920 */    MCD::OPC_FilterValue, 1, 228, 3, // Skip to: 6920
/* 5924 */    MCD::OPC_Decode, 136, 3, 67, // Opcode: LDSHri
/* 5928 */    MCD::OPC_FilterValue, 11, 25, 0, // Skip to: 5957
/* 5932 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 5935 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 5949
/* 5939 */    MCD::OPC_CheckField, 5, 8, 0, 207, 3, // Skip to: 6920
/* 5945 */    MCD::OPC_Decode, 152, 3, 67, // Opcode: LDXrr
/* 5949 */    MCD::OPC_FilterValue, 1, 199, 3, // Skip to: 6920
/* 5953 */    MCD::OPC_Decode, 151, 3, 67, // Opcode: LDXri
/* 5957 */    MCD::OPC_FilterValue, 13, 25, 0, // Skip to: 5986
/* 5961 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 5964 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 5978
/* 5968 */    MCD::OPC_CheckField, 5, 8, 0, 178, 3, // Skip to: 6920
/* 5974 */    MCD::OPC_Decode, 140, 3, 4, // Opcode: LDSTUBrr
/* 5978 */    MCD::OPC_FilterValue, 1, 170, 3, // Skip to: 6920
/* 5982 */    MCD::OPC_Decode, 139, 3, 4, // Opcode: LDSTUBri
/* 5986 */    MCD::OPC_FilterValue, 14, 25, 0, // Skip to: 6015
/* 5990 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 5993 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 6007
/* 5997 */    MCD::OPC_CheckField, 5, 8, 0, 149, 3, // Skip to: 6920
/* 6003 */    MCD::OPC_Decode, 158, 4, 69, // Opcode: STXrr
/* 6007 */    MCD::OPC_FilterValue, 1, 141, 3, // Skip to: 6920
/* 6011 */    MCD::OPC_Decode, 157, 4, 69, // Opcode: STXri
/* 6015 */    MCD::OPC_FilterValue, 15, 25, 0, // Skip to: 6044
/* 6019 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 6022 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 6036
/* 6026 */    MCD::OPC_CheckField, 5, 8, 0, 120, 3, // Skip to: 6920
/* 6032 */    MCD::OPC_Decode, 173, 4, 71, // Opcode: SWAPrr
/* 6036 */    MCD::OPC_FilterValue, 1, 112, 3, // Skip to: 6920
/* 6040 */    MCD::OPC_Decode, 172, 4, 71, // Opcode: SWAPri
/* 6044 */    MCD::OPC_FilterValue, 16, 10, 0, // Skip to: 6058
/* 6048 */    MCD::OPC_CheckField, 13, 1, 0, 98, 3, // Skip to: 6920
/* 6054 */    MCD::OPC_Decode, 239, 2, 67, // Opcode: LDArr
/* 6058 */    MCD::OPC_FilterValue, 17, 10, 0, // Skip to: 6072
/* 6062 */    MCD::OPC_CheckField, 13, 1, 0, 84, 3, // Skip to: 6920
/* 6068 */    MCD::OPC_Decode, 143, 3, 67, // Opcode: LDUBArr
/* 6072 */    MCD::OPC_FilterValue, 18, 10, 0, // Skip to: 6086
/* 6076 */    MCD::OPC_CheckField, 13, 1, 0, 70, 3, // Skip to: 6920
/* 6082 */    MCD::OPC_Decode, 146, 3, 67, // Opcode: LDUHArr
/* 6086 */    MCD::OPC_FilterValue, 19, 10, 0, // Skip to: 6100
/* 6090 */    MCD::OPC_CheckField, 13, 1, 0, 56, 3, // Skip to: 6920
/* 6096 */    MCD::OPC_Decode, 244, 2, 68, // Opcode: LDDArr
/* 6100 */    MCD::OPC_FilterValue, 20, 10, 0, // Skip to: 6114
/* 6104 */    MCD::OPC_CheckField, 13, 1, 0, 42, 3, // Skip to: 6920
/* 6110 */    MCD::OPC_Decode, 251, 3, 69, // Opcode: STArr
/* 6114 */    MCD::OPC_FilterValue, 21, 10, 0, // Skip to: 6128
/* 6118 */    MCD::OPC_CheckField, 13, 1, 0, 28, 3, // Skip to: 6920
/* 6124 */    MCD::OPC_Decode, 253, 3, 69, // Opcode: STBArr
/* 6128 */    MCD::OPC_FilterValue, 22, 10, 0, // Skip to: 6142
/* 6132 */    MCD::OPC_CheckField, 13, 1, 0, 14, 3, // Skip to: 6920
/* 6138 */    MCD::OPC_Decode, 149, 4, 69, // Opcode: STHArr
/* 6142 */    MCD::OPC_FilterValue, 23, 10, 0, // Skip to: 6156
/* 6146 */    MCD::OPC_CheckField, 13, 1, 0, 0, 3, // Skip to: 6920
/* 6152 */    MCD::OPC_Decode, 132, 4, 70, // Opcode: STDArr
/* 6156 */    MCD::OPC_FilterValue, 25, 10, 0, // Skip to: 6170
/* 6160 */    MCD::OPC_CheckField, 13, 1, 0, 242, 2, // Skip to: 6920
/* 6166 */    MCD::OPC_Decode, 132, 3, 67, // Opcode: LDSBArr
/* 6170 */    MCD::OPC_FilterValue, 26, 10, 0, // Skip to: 6184
/* 6174 */    MCD::OPC_CheckField, 13, 1, 0, 228, 2, // Skip to: 6920
/* 6180 */    MCD::OPC_Decode, 135, 3, 67, // Opcode: LDSHArr
/* 6184 */    MCD::OPC_FilterValue, 29, 10, 0, // Skip to: 6198
/* 6188 */    MCD::OPC_CheckField, 13, 1, 0, 214, 2, // Skip to: 6920
/* 6194 */    MCD::OPC_Decode, 138, 3, 72, // Opcode: LDSTUBArr
/* 6198 */    MCD::OPC_FilterValue, 31, 10, 0, // Skip to: 6212
/* 6202 */    MCD::OPC_CheckField, 13, 1, 0, 200, 2, // Skip to: 6920
/* 6208 */    MCD::OPC_Decode, 171, 4, 71, // Opcode: SWAPArr
/* 6212 */    MCD::OPC_FilterValue, 32, 25, 0, // Skip to: 6241
/* 6216 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 6219 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 6233
/* 6223 */    MCD::OPC_CheckField, 5, 8, 0, 179, 2, // Skip to: 6920
/* 6229 */    MCD::OPC_Decode, 128, 3, 73, // Opcode: LDFrr
/* 6233 */    MCD::OPC_FilterValue, 1, 171, 2, // Skip to: 6920
/* 6237 */    MCD::OPC_Decode, 255, 2, 73, // Opcode: LDFri
/* 6241 */    MCD::OPC_FilterValue, 33, 69, 0, // Skip to: 6314
/* 6245 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 6248 */    MCD::OPC_FilterValue, 0, 35, 0, // Skip to: 6287
/* 6252 */    MCD::OPC_ExtractField, 25, 5,  // Inst{29-25} ...
/* 6255 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 6269
/* 6259 */    MCD::OPC_CheckField, 5, 8, 0, 143, 2, // Skip to: 6920
/* 6265 */    MCD::OPC_Decode, 254, 2, 73, // Opcode: LDFSRrr
/* 6269 */    MCD::OPC_FilterValue, 1, 135, 2, // Skip to: 6920
/* 6273 */    MCD::OPC_CheckPredicate, 0, 131, 2, // Skip to: 6920
/* 6277 */    MCD::OPC_CheckField, 5, 8, 0, 125, 2, // Skip to: 6920
/* 6283 */    MCD::OPC_Decode, 150, 3, 73, // Opcode: LDXFSRrr
/* 6287 */    MCD::OPC_FilterValue, 1, 117, 2, // Skip to: 6920
/* 6291 */    MCD::OPC_ExtractField, 25, 5,  // Inst{29-25} ...
/* 6294 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 6302
/* 6298 */    MCD::OPC_Decode, 253, 2, 73, // Opcode: LDFSRri
/* 6302 */    MCD::OPC_FilterValue, 1, 102, 2, // Skip to: 6920
/* 6306 */    MCD::OPC_CheckPredicate, 0, 98, 2, // Skip to: 6920
/* 6310 */    MCD::OPC_Decode, 149, 3, 73, // Opcode: LDXFSRri
/* 6314 */    MCD::OPC_FilterValue, 34, 33, 0, // Skip to: 6351
/* 6318 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 6321 */    MCD::OPC_FilterValue, 0, 14, 0, // Skip to: 6339
/* 6325 */    MCD::OPC_CheckPredicate, 0, 79, 2, // Skip to: 6920
/* 6329 */    MCD::OPC_CheckField, 5, 8, 0, 73, 2, // Skip to: 6920
/* 6335 */    MCD::OPC_Decode, 131, 3, 74, // Opcode: LDQFrr
/* 6339 */    MCD::OPC_FilterValue, 1, 65, 2, // Skip to: 6920
/* 6343 */    MCD::OPC_CheckPredicate, 0, 61, 2, // Skip to: 6920
/* 6347 */    MCD::OPC_Decode, 130, 3, 74, // Opcode: LDQFri
/* 6351 */    MCD::OPC_FilterValue, 35, 25, 0, // Skip to: 6380
/* 6355 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 6358 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 6372
/* 6362 */    MCD::OPC_CheckField, 5, 8, 0, 40, 2, // Skip to: 6920
/* 6368 */    MCD::OPC_Decode, 249, 2, 75, // Opcode: LDDFrr
/* 6372 */    MCD::OPC_FilterValue, 1, 32, 2, // Skip to: 6920
/* 6376 */    MCD::OPC_Decode, 248, 2, 75, // Opcode: LDDFri
/* 6380 */    MCD::OPC_FilterValue, 36, 25, 0, // Skip to: 6409
/* 6384 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 6387 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 6401
/* 6391 */    MCD::OPC_CheckField, 5, 8, 0, 11, 2, // Skip to: 6920
/* 6397 */    MCD::OPC_Decode, 148, 4, 76, // Opcode: STFrr
/* 6401 */    MCD::OPC_FilterValue, 1, 3, 2, // Skip to: 6920
/* 6405 */    MCD::OPC_Decode, 147, 4, 76, // Opcode: STFri
/* 6409 */    MCD::OPC_FilterValue, 37, 69, 0, // Skip to: 6482
/* 6413 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 6416 */    MCD::OPC_FilterValue, 0, 35, 0, // Skip to: 6455
/* 6420 */    MCD::OPC_ExtractField, 25, 5,  // Inst{29-25} ...
/* 6423 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 6437
/* 6427 */    MCD::OPC_CheckField, 5, 8, 0, 231, 1, // Skip to: 6920
/* 6433 */    MCD::OPC_Decode, 146, 4, 76, // Opcode: STFSRrr
/* 6437 */    MCD::OPC_FilterValue, 1, 223, 1, // Skip to: 6920
/* 6441 */    MCD::OPC_CheckPredicate, 0, 219, 1, // Skip to: 6920
/* 6445 */    MCD::OPC_CheckField, 5, 8, 0, 213, 1, // Skip to: 6920
/* 6451 */    MCD::OPC_Decode, 156, 4, 76, // Opcode: STXFSRrr
/* 6455 */    MCD::OPC_FilterValue, 1, 205, 1, // Skip to: 6920
/* 6459 */    MCD::OPC_ExtractField, 25, 5,  // Inst{29-25} ...
/* 6462 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 6470
/* 6466 */    MCD::OPC_Decode, 145, 4, 76, // Opcode: STFSRri
/* 6470 */    MCD::OPC_FilterValue, 1, 190, 1, // Skip to: 6920
/* 6474 */    MCD::OPC_CheckPredicate, 0, 186, 1, // Skip to: 6920
/* 6478 */    MCD::OPC_Decode, 155, 4, 76, // Opcode: STXFSRri
/* 6482 */    MCD::OPC_FilterValue, 38, 54, 0, // Skip to: 6540
/* 6486 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 6489 */    MCD::OPC_FilterValue, 0, 25, 0, // Skip to: 6518
/* 6493 */    MCD::OPC_ExtractField, 5, 8,  // Inst{12-5} ...
/* 6496 */    MCD::OPC_FilterValue, 0, 164, 1, // Skip to: 6920
/* 6500 */    MCD::OPC_CheckField, 25, 5, 0, 4, 0, // Skip to: 6510
/* 6506 */    MCD::OPC_Decode, 139, 4, 76, // Opcode: STDFQrr
/* 6510 */    MCD::OPC_CheckPredicate, 0, 150, 1, // Skip to: 6920
/* 6514 */    MCD::OPC_Decode, 154, 4, 77, // Opcode: STQFrr
/* 6518 */    MCD::OPC_FilterValue, 1, 142, 1, // Skip to: 6920
/* 6522 */    MCD::OPC_CheckField, 25, 5, 0, 4, 0, // Skip to: 6532
/* 6528 */    MCD::OPC_Decode, 138, 4, 76, // Opcode: STDFQri
/* 6532 */    MCD::OPC_CheckPredicate, 0, 128, 1, // Skip to: 6920
/* 6536 */    MCD::OPC_Decode, 153, 4, 77, // Opcode: STQFri
/* 6540 */    MCD::OPC_FilterValue, 39, 25, 0, // Skip to: 6569
/* 6544 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 6547 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 6561
/* 6551 */    MCD::OPC_CheckField, 5, 8, 0, 107, 1, // Skip to: 6920
/* 6557 */    MCD::OPC_Decode, 141, 4, 78, // Opcode: STDFrr
/* 6561 */    MCD::OPC_FilterValue, 1, 99, 1, // Skip to: 6920
/* 6565 */    MCD::OPC_Decode, 140, 4, 78, // Opcode: STDFri
/* 6569 */    MCD::OPC_FilterValue, 48, 33, 0, // Skip to: 6606
/* 6573 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 6576 */    MCD::OPC_FilterValue, 0, 18, 0, // Skip to: 6598
/* 6580 */    MCD::OPC_CheckField, 5, 8, 0, 4, 0, // Skip to: 6590
/* 6586 */    MCD::OPC_Decode, 243, 2, 79, // Opcode: LDCrr
/* 6590 */    MCD::OPC_CheckPredicate, 0, 70, 1, // Skip to: 6920
/* 6594 */    MCD::OPC_Decode, 252, 2, 73, // Opcode: LDFArr
/* 6598 */    MCD::OPC_FilterValue, 1, 62, 1, // Skip to: 6920
/* 6602 */    MCD::OPC_Decode, 242, 2, 79, // Opcode: LDCri
/* 6606 */    MCD::OPC_FilterValue, 49, 37, 0, // Skip to: 6647
/* 6610 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 6613 */    MCD::OPC_FilterValue, 0, 16, 0, // Skip to: 6633
/* 6617 */    MCD::OPC_CheckField, 25, 5, 0, 41, 1, // Skip to: 6920
/* 6623 */    MCD::OPC_CheckField, 5, 8, 0, 35, 1, // Skip to: 6920
/* 6629 */    MCD::OPC_Decode, 241, 2, 79, // Opcode: LDCSRrr
/* 6633 */    MCD::OPC_FilterValue, 1, 27, 1, // Skip to: 6920
/* 6637 */    MCD::OPC_CheckField, 25, 5, 0, 21, 1, // Skip to: 6920
/* 6643 */    MCD::OPC_Decode, 240, 2, 79, // Opcode: LDCSRri
/* 6647 */    MCD::OPC_FilterValue, 50, 14, 0, // Skip to: 6665
/* 6651 */    MCD::OPC_CheckPredicate, 0, 9, 1, // Skip to: 6920
/* 6655 */    MCD::OPC_CheckField, 13, 1, 0, 3, 1, // Skip to: 6920
/* 6661 */    MCD::OPC_Decode, 129, 3, 74, // Opcode: LDQFArr
/* 6665 */    MCD::OPC_FilterValue, 51, 33, 0, // Skip to: 6702
/* 6669 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 6672 */    MCD::OPC_FilterValue, 0, 18, 0, // Skip to: 6694
/* 6676 */    MCD::OPC_CheckField, 5, 8, 0, 4, 0, // Skip to: 6686
/* 6682 */    MCD::OPC_Decode, 246, 2, 80, // Opcode: LDDCrr
/* 6686 */    MCD::OPC_CheckPredicate, 0, 230, 0, // Skip to: 6920
/* 6690 */    MCD::OPC_Decode, 247, 2, 75, // Opcode: LDDFArr
/* 6694 */    MCD::OPC_FilterValue, 1, 222, 0, // Skip to: 6920
/* 6698 */    MCD::OPC_Decode, 245, 2, 80, // Opcode: LDDCri
/* 6702 */    MCD::OPC_FilterValue, 52, 33, 0, // Skip to: 6739
/* 6706 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 6709 */    MCD::OPC_FilterValue, 0, 18, 0, // Skip to: 6731
/* 6713 */    MCD::OPC_CheckField, 5, 8, 0, 4, 0, // Skip to: 6723
/* 6719 */    MCD::OPC_Decode, 131, 4, 81, // Opcode: STCrr
/* 6723 */    MCD::OPC_CheckPredicate, 0, 193, 0, // Skip to: 6920
/* 6727 */    MCD::OPC_Decode, 144, 4, 76, // Opcode: STFArr
/* 6731 */    MCD::OPC_FilterValue, 1, 185, 0, // Skip to: 6920
/* 6735 */    MCD::OPC_Decode, 130, 4, 81, // Opcode: STCri
/* 6739 */    MCD::OPC_FilterValue, 53, 37, 0, // Skip to: 6780
/* 6743 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 6746 */    MCD::OPC_FilterValue, 0, 16, 0, // Skip to: 6766
/* 6750 */    MCD::OPC_CheckField, 25, 5, 0, 164, 0, // Skip to: 6920
/* 6756 */    MCD::OPC_CheckField, 5, 8, 0, 158, 0, // Skip to: 6920
/* 6762 */    MCD::OPC_Decode, 129, 4, 81, // Opcode: STCSRrr
/* 6766 */    MCD::OPC_FilterValue, 1, 150, 0, // Skip to: 6920
/* 6770 */    MCD::OPC_CheckField, 25, 5, 0, 144, 0, // Skip to: 6920
/* 6776 */    MCD::OPC_Decode, 128, 4, 81, // Opcode: STCSRri
/* 6780 */    MCD::OPC_FilterValue, 54, 45, 0, // Skip to: 6829
/* 6784 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 6787 */    MCD::OPC_FilterValue, 0, 24, 0, // Skip to: 6815
/* 6791 */    MCD::OPC_CheckField, 25, 5, 0, 10, 0, // Skip to: 6807
/* 6797 */    MCD::OPC_CheckField, 5, 8, 0, 4, 0, // Skip to: 6807
/* 6803 */    MCD::OPC_Decode, 134, 4, 81, // Opcode: STDCQrr
/* 6807 */    MCD::OPC_CheckPredicate, 0, 109, 0, // Skip to: 6920
/* 6811 */    MCD::OPC_Decode, 152, 4, 77, // Opcode: STQFArr
/* 6815 */    MCD::OPC_FilterValue, 1, 101, 0, // Skip to: 6920
/* 6819 */    MCD::OPC_CheckField, 25, 5, 0, 95, 0, // Skip to: 6920
/* 6825 */    MCD::OPC_Decode, 133, 4, 81, // Opcode: STDCQri
/* 6829 */    MCD::OPC_FilterValue, 55, 33, 0, // Skip to: 6866
/* 6833 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 6836 */    MCD::OPC_FilterValue, 0, 18, 0, // Skip to: 6858
/* 6840 */    MCD::OPC_CheckField, 5, 8, 0, 4, 0, // Skip to: 6850
/* 6846 */    MCD::OPC_Decode, 136, 4, 82, // Opcode: STDCrr
/* 6850 */    MCD::OPC_CheckPredicate, 0, 66, 0, // Skip to: 6920
/* 6854 */    MCD::OPC_Decode, 137, 4, 78, // Opcode: STDFArr
/* 6858 */    MCD::OPC_FilterValue, 1, 58, 0, // Skip to: 6920
/* 6862 */    MCD::OPC_Decode, 135, 4, 82, // Opcode: STDCri
/* 6866 */    MCD::OPC_FilterValue, 60, 35, 0, // Skip to: 6905
/* 6870 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 6873 */    MCD::OPC_FilterValue, 0, 43, 0, // Skip to: 6920
/* 6877 */    MCD::OPC_ExtractField, 5, 8,  // Inst{12-5} ...
/* 6880 */    MCD::OPC_FilterValue, 10, 4, 0, // Skip to: 6888
/* 6884 */    MCD::OPC_Decode, 172, 1, 83, // Opcode: CASAasi10
/* 6888 */    MCD::OPC_FilterValue, 128, 1, 8, 0, // Skip to: 6901
/* 6893 */    MCD::OPC_CheckPredicate, 0, 4, 0, // Skip to: 6901
/* 6897 */    MCD::OPC_Decode, 175, 1, 83, // Opcode: CASrr
/* 6901 */    MCD::OPC_Decode, 173, 1, 84, // Opcode: CASArr
/* 6905 */    MCD::OPC_FilterValue, 62, 11, 0, // Skip to: 6920
/* 6909 */    MCD::OPC_CheckField, 5, 9, 128, 1, 4, 0, // Skip to: 6920
/* 6916 */    MCD::OPC_Decode, 174, 1, 85, // Opcode: CASXrr
/* 6920 */    MCD::OPC_Fail,
  0
};

static const uint8_t DecoderTableSparcV832[] = {
/* 0 */       MCD::OPC_ExtractField, 8, 6,  // Inst{13-8} ...
/* 3 */       MCD::OPC_FilterValue, 0, 22, 0, // Skip to: 29
/* 7 */       MCD::OPC_CheckField, 29, 3, 4, 36, 0, // Skip to: 49
/* 13 */      MCD::OPC_CheckField, 19, 6, 58, 30, 0, // Skip to: 49
/* 19 */      MCD::OPC_CheckField, 5, 3, 0, 24, 0, // Skip to: 49
/* 25 */      MCD::OPC_Decode, 188, 4, 86, // Opcode: TRAPrr
/* 29 */      MCD::OPC_FilterValue, 32, 16, 0, // Skip to: 49
/* 33 */      MCD::OPC_CheckField, 29, 3, 4, 10, 0, // Skip to: 49
/* 39 */      MCD::OPC_CheckField, 19, 6, 58, 4, 0, // Skip to: 49
/* 45 */      MCD::OPC_Decode, 187, 4, 86, // Opcode: TRAPri
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
/* 29 */      MCD::OPC_Decode, 181, 4, 86, // Opcode: TICCrr
/* 33 */      MCD::OPC_FilterValue, 32, 20, 0, // Skip to: 57
/* 37 */      MCD::OPC_CheckPredicate, 0, 16, 0, // Skip to: 57
/* 41 */      MCD::OPC_CheckField, 29, 3, 4, 10, 0, // Skip to: 57
/* 47 */      MCD::OPC_CheckField, 19, 6, 58, 4, 0, // Skip to: 57
/* 53 */      MCD::OPC_Decode, 180, 4, 86, // Opcode: TICCri
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
