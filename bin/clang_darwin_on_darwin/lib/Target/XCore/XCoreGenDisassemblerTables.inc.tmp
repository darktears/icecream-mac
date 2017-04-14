/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|*  * XCore Disassembler                                                      *|
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

static const uint8_t DecoderTable16[] = {
/* 0 */       MCD::OPC_ExtractField, 11, 5,  // Inst{15-11} ...
/* 3 */       MCD::OPC_FilterValue, 0, 117, 0, // Skip to: 124
/* 7 */       MCD::OPC_ExtractField, 0, 11,  // Inst{10-0} ...
/* 10 */      MCD::OPC_FilterValue, 236, 15, 4, 0, // Skip to: 19
/* 15 */      MCD::OPC_Decode, 189, 2, 0, // Opcode: WAITEU_0R
/* 19 */      MCD::OPC_FilterValue, 237, 15, 4, 0, // Skip to: 28
/* 24 */      MCD::OPC_Decode, 133, 1, 0, // Opcode: CLRE_0R
/* 28 */      MCD::OPC_FilterValue, 238, 15, 4, 0, // Skip to: 37
/* 33 */      MCD::OPC_Decode, 164, 2, 0, // Opcode: SSYNC_0r
/* 37 */      MCD::OPC_FilterValue, 239, 15, 4, 0, // Skip to: 46
/* 42 */      MCD::OPC_Decode, 167, 1, 0, // Opcode: FREET_0R
/* 46 */      MCD::OPC_FilterValue, 252, 15, 4, 0, // Skip to: 55
/* 51 */      MCD::OPC_Decode, 142, 1, 0, // Opcode: DCALL_0R
/* 55 */      MCD::OPC_FilterValue, 253, 15, 4, 0, // Skip to: 64
/* 60 */      MCD::OPC_Decode, 199, 1, 0, // Opcode: KRET_0R
/* 64 */      MCD::OPC_FilterValue, 254, 15, 4, 0, // Skip to: 73
/* 69 */      MCD::OPC_Decode, 148, 1, 0, // Opcode: DRET_0R
/* 73 */      MCD::OPC_FilterValue, 255, 15, 4, 0, // Skip to: 82
/* 78 */      MCD::OPC_Decode, 145, 2, 0, // Opcode: SETKEP_0R
/* 82 */      MCD::OPC_ExtractField, 4, 7,  // Inst{10-4} ...
/* 85 */      MCD::OPC_FilterValue, 126, 4, 0, // Skip to: 93
/* 89 */      MCD::OPC_Decode, 151, 1, 1, // Opcode: EDU_1r
/* 93 */      MCD::OPC_FilterValue, 127, 4, 0, // Skip to: 101
/* 97 */      MCD::OPC_Decode, 154, 1, 1, // Opcode: EEU_1r
/* 101 */     MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 104 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 112
/* 108 */     MCD::OPC_Decode, 185, 1, 2, // Opcode: INITPC_2r
/* 112 */     MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 120
/* 116 */     MCD::OPC_Decode, 179, 1, 2, // Opcode: GETST_2r
/* 120 */     MCD::OPC_Decode, 176, 2, 3, // Opcode: STW_2rus
/* 124 */     MCD::OPC_FilterValue, 1, 117, 0, // Skip to: 245
/* 128 */     MCD::OPC_ExtractField, 0, 11,  // Inst{10-0} ...
/* 131 */     MCD::OPC_FilterValue, 236, 15, 4, 0, // Skip to: 140
/* 136 */     MCD::OPC_Decode, 226, 1, 0, // Opcode: LDSPC_0R
/* 140 */     MCD::OPC_FilterValue, 237, 15, 4, 0, // Skip to: 149
/* 145 */     MCD::OPC_Decode, 169, 2, 0, // Opcode: STSPC_0R
/* 149 */     MCD::OPC_FilterValue, 238, 15, 4, 0, // Skip to: 158
/* 154 */     MCD::OPC_Decode, 227, 1, 0, // Opcode: LDSSR_0R
/* 158 */     MCD::OPC_FilterValue, 239, 15, 4, 0, // Skip to: 167
/* 163 */     MCD::OPC_Decode, 170, 2, 0, // Opcode: STSSR_0R
/* 167 */     MCD::OPC_FilterValue, 252, 15, 4, 0, // Skip to: 176
/* 172 */     MCD::OPC_Decode, 168, 2, 0, // Opcode: STSED_0R
/* 176 */     MCD::OPC_FilterValue, 253, 15, 4, 0, // Skip to: 185
/* 181 */     MCD::OPC_Decode, 167, 2, 0, // Opcode: STET_0R
/* 185 */     MCD::OPC_FilterValue, 254, 15, 4, 0, // Skip to: 194
/* 190 */     MCD::OPC_Decode, 169, 1, 0, // Opcode: GETED_0R
/* 194 */     MCD::OPC_FilterValue, 255, 15, 4, 0, // Skip to: 203
/* 199 */     MCD::OPC_Decode, 170, 1, 0, // Opcode: GETET_0R
/* 203 */     MCD::OPC_ExtractField, 4, 7,  // Inst{10-4} ...
/* 206 */     MCD::OPC_FilterValue, 126, 4, 0, // Skip to: 214
/* 210 */     MCD::OPC_Decode, 188, 2, 1, // Opcode: WAITET_1R
/* 214 */     MCD::OPC_FilterValue, 127, 4, 0, // Skip to: 222
/* 218 */     MCD::OPC_Decode, 187, 2, 1, // Opcode: WAITEF_1R
/* 222 */     MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 225 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 233
/* 229 */     MCD::OPC_Decode, 183, 1, 2, // Opcode: INITDP_2r
/* 233 */     MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 241
/* 237 */     MCD::OPC_Decode, 129, 2, 4, // Opcode: OUTT_2r
/* 241 */     MCD::OPC_Decode, 237, 1, 3, // Opcode: LDW_2rus
/* 245 */     MCD::OPC_FilterValue, 2, 107, 0, // Skip to: 356
/* 249 */     MCD::OPC_ExtractField, 0, 11,  // Inst{10-0} ...
/* 252 */     MCD::OPC_FilterValue, 236, 15, 4, 0, // Skip to: 261
/* 257 */     MCD::OPC_Decode, 143, 1, 0, // Opcode: DENTSP_0R
/* 261 */     MCD::OPC_FilterValue, 237, 15, 4, 0, // Skip to: 270
/* 266 */     MCD::OPC_Decode, 147, 1, 0, // Opcode: DRESTSP_0R
/* 270 */     MCD::OPC_FilterValue, 238, 15, 4, 0, // Skip to: 279
/* 275 */     MCD::OPC_Decode, 171, 1, 0, // Opcode: GETID_0R
/* 279 */     MCD::OPC_FilterValue, 239, 15, 4, 0, // Skip to: 288
/* 284 */     MCD::OPC_Decode, 172, 1, 0, // Opcode: GETKEP_0R
/* 288 */     MCD::OPC_FilterValue, 252, 15, 4, 0, // Skip to: 297
/* 293 */     MCD::OPC_Decode, 173, 1, 0, // Opcode: GETKSP_0R
/* 297 */     MCD::OPC_FilterValue, 253, 15, 4, 0, // Skip to: 306
/* 302 */     MCD::OPC_Decode, 225, 1, 0, // Opcode: LDSED_0R
/* 306 */     MCD::OPC_FilterValue, 254, 15, 4, 0, // Skip to: 315
/* 311 */     MCD::OPC_Decode, 223, 1, 0, // Opcode: LDET_0R
/* 315 */     MCD::OPC_ExtractField, 4, 7,  // Inst{10-4} ...
/* 318 */     MCD::OPC_FilterValue, 126, 4, 0, // Skip to: 326
/* 322 */     MCD::OPC_Decode, 166, 1, 1, // Opcode: FREER_1r
/* 326 */     MCD::OPC_FilterValue, 127, 4, 0, // Skip to: 334
/* 330 */     MCD::OPC_Decode, 245, 1, 1, // Opcode: MJOIN_1r
/* 334 */     MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 337 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 345
/* 341 */     MCD::OPC_Decode, 186, 1, 2, // Opcode: INITSP_2r
/* 345 */     MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 353
/* 349 */     MCD::OPC_Decode, 143, 2, 4, // Opcode: SETD_2r
/* 353 */     MCD::OPC_Decode, 97, 5, // Opcode: ADD_3r
/* 356 */     MCD::OPC_FilterValue, 3, 42, 0, // Skip to: 402
/* 360 */     MCD::OPC_ExtractField, 4, 7,  // Inst{10-4} ...
/* 363 */     MCD::OPC_FilterValue, 126, 4, 0, // Skip to: 371
/* 367 */     MCD::OPC_Decode, 186, 2, 1, // Opcode: TSTART_1R
/* 371 */     MCD::OPC_FilterValue, 127, 4, 0, // Skip to: 379
/* 375 */     MCD::OPC_Decode, 248, 1, 1, // Opcode: MSYNC_1r
/* 379 */     MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 382 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 390
/* 386 */     MCD::OPC_Decode, 182, 1, 2, // Opcode: INITCP_2r
/* 390 */     MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 398
/* 394 */     MCD::OPC_Decode, 184, 2, 6, // Opcode: TSETMR_2r
/* 398 */     MCD::OPC_Decode, 179, 2, 5, // Opcode: SUB_3r
/* 402 */     MCD::OPC_FilterValue, 4, 31, 0, // Skip to: 437
/* 406 */     MCD::OPC_ExtractField, 4, 7,  // Inst{10-4} ...
/* 409 */     MCD::OPC_FilterValue, 126, 3, 0, // Skip to: 416
/* 413 */     MCD::OPC_Decode, 110, 1, // Opcode: BLA_1r
/* 416 */     MCD::OPC_FilterValue, 127, 3, 0, // Skip to: 423
/* 420 */     MCD::OPC_Decode, 104, 1, // Opcode: BAU_1r
/* 423 */     MCD::OPC_CheckField, 4, 1, 1, 4, 0, // Skip to: 433
/* 429 */     MCD::OPC_Decode, 153, 1, 2, // Opcode: EET_2r
/* 433 */     MCD::OPC_Decode, 161, 2, 5, // Opcode: SHL_3r
/* 437 */     MCD::OPC_FilterValue, 5, 40, 0, // Skip to: 481
/* 441 */     MCD::OPC_ExtractField, 4, 7,  // Inst{10-4} ...
/* 444 */     MCD::OPC_FilterValue, 126, 3, 0, // Skip to: 451
/* 448 */     MCD::OPC_Decode, 127, 1, // Opcode: BRU_1r
/* 451 */     MCD::OPC_FilterValue, 127, 4, 0, // Skip to: 459
/* 455 */     MCD::OPC_Decode, 151, 2, 1, // Opcode: SETSP_1r
/* 459 */     MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 462 */     MCD::OPC_FilterValue, 0, 3, 0, // Skip to: 469
/* 466 */     MCD::OPC_Decode, 100, 7, // Opcode: ANDNOT_2r
/* 469 */     MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 477
/* 473 */     MCD::OPC_Decode, 152, 1, 2, // Opcode: EEF_2r
/* 477 */     MCD::OPC_Decode, 163, 2, 5, // Opcode: SHR_3r
/* 481 */     MCD::OPC_FilterValue, 6, 42, 0, // Skip to: 527
/* 485 */     MCD::OPC_ExtractField, 4, 7,  // Inst{10-4} ...
/* 488 */     MCD::OPC_FilterValue, 126, 4, 0, // Skip to: 496
/* 492 */     MCD::OPC_Decode, 142, 2, 1, // Opcode: SETDP_1r
/* 496 */     MCD::OPC_FilterValue, 127, 4, 0, // Skip to: 504
/* 500 */     MCD::OPC_Decode, 138, 2, 1, // Opcode: SETCP_1r
/* 504 */     MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 507 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 515
/* 511 */     MCD::OPC_Decode, 158, 2, 7, // Opcode: SEXT_2r
/* 515 */     MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 523
/* 519 */     MCD::OPC_Decode, 159, 2, 8, // Opcode: SEXT_rus
/* 523 */     MCD::OPC_Decode, 160, 1, 5, // Opcode: EQ_3r
/* 527 */     MCD::OPC_FilterValue, 7, 41, 0, // Skip to: 572
/* 531 */     MCD::OPC_ExtractField, 4, 7,  // Inst{10-4} ...
/* 534 */     MCD::OPC_FilterValue, 126, 4, 0, // Skip to: 542
/* 538 */     MCD::OPC_Decode, 144, 1, 1, // Opcode: DGETREG_1r
/* 542 */     MCD::OPC_FilterValue, 127, 4, 0, // Skip to: 550
/* 546 */     MCD::OPC_Decode, 144, 2, 1, // Opcode: SETEV_1r
/* 550 */     MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 553 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 561
/* 557 */     MCD::OPC_Decode, 180, 1, 2, // Opcode: GETTS_2r
/* 561 */     MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 569
/* 565 */     MCD::OPC_Decode, 149, 2, 4, // Opcode: SETPT_2r
/* 569 */     MCD::OPC_Decode, 101, 5, // Opcode: AND_3r
/* 572 */     MCD::OPC_FilterValue, 8, 42, 0, // Skip to: 618
/* 576 */     MCD::OPC_ExtractField, 4, 7,  // Inst{10-4} ...
/* 579 */     MCD::OPC_FilterValue, 126, 4, 0, // Skip to: 587
/* 583 */     MCD::OPC_Decode, 192, 1, 1, // Opcode: KCALL_1r
/* 587 */     MCD::OPC_FilterValue, 127, 4, 0, // Skip to: 595
/* 591 */     MCD::OPC_Decode, 157, 2, 1, // Opcode: SETV_1r
/* 595 */     MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 598 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 606
/* 602 */     MCD::OPC_Decode, 191, 2, 7, // Opcode: ZEXT_2r
/* 606 */     MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 614
/* 610 */     MCD::OPC_Decode, 192, 2, 8, // Opcode: ZEXT_rus
/* 614 */     MCD::OPC_Decode, 252, 1, 5, // Opcode: OR_3r
/* 618 */     MCD::OPC_FilterValue, 9, 42, 0, // Skip to: 664
/* 622 */     MCD::OPC_ExtractField, 4, 7,  // Inst{10-4} ...
/* 625 */     MCD::OPC_FilterValue, 126, 4, 0, // Skip to: 633
/* 629 */     MCD::OPC_Decode, 149, 1, 1, // Opcode: ECALLF_1r
/* 633 */     MCD::OPC_FilterValue, 127, 4, 0, // Skip to: 641
/* 637 */     MCD::OPC_Decode, 150, 1, 1, // Opcode: ECALLT_1r
/* 641 */     MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 644 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 652
/* 648 */     MCD::OPC_Decode, 253, 1, 2, // Opcode: OUTCT_2r
/* 652 */     MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 660
/* 656 */     MCD::OPC_Decode, 254, 1, 9, // Opcode: OUTCT_rus
/* 660 */     MCD::OPC_Decode, 238, 1, 5, // Opcode: LDW_3r
/* 664 */     MCD::OPC_FilterValue, 10, 19, 0, // Skip to: 687
/* 668 */     MCD::OPC_ExtractField, 10, 1,  // Inst{10} ...
/* 671 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 679
/* 675 */     MCD::OPC_Decode, 172, 2, 10, // Opcode: STWDP_ru6
/* 679 */     MCD::OPC_FilterValue, 1, 73, 2, // Skip to: 1268
/* 683 */     MCD::OPC_Decode, 175, 2, 10, // Opcode: STWSP_ru6
/* 687 */     MCD::OPC_FilterValue, 11, 19, 0, // Skip to: 710
/* 691 */     MCD::OPC_ExtractField, 10, 1,  // Inst{10} ...
/* 694 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 702
/* 698 */     MCD::OPC_Decode, 233, 1, 10, // Opcode: LDWDP_ru6
/* 702 */     MCD::OPC_FilterValue, 1, 50, 2, // Skip to: 1268
/* 706 */     MCD::OPC_Decode, 236, 1, 10, // Opcode: LDWSP_ru6
/* 710 */     MCD::OPC_FilterValue, 12, 19, 0, // Skip to: 733
/* 714 */     MCD::OPC_ExtractField, 10, 1,  // Inst{10} ...
/* 717 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 725
/* 721 */     MCD::OPC_Decode, 215, 1, 10, // Opcode: LDAWDP_ru6
/* 725 */     MCD::OPC_FilterValue, 1, 27, 2, // Skip to: 1268
/* 729 */     MCD::OPC_Decode, 220, 1, 10, // Opcode: LDAWSP_ru6
/* 733 */     MCD::OPC_FilterValue, 13, 19, 0, // Skip to: 756
/* 737 */     MCD::OPC_ExtractField, 10, 1,  // Inst{10} ...
/* 740 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 748
/* 744 */     MCD::OPC_Decode, 222, 1, 10, // Opcode: LDC_ru6
/* 748 */     MCD::OPC_FilterValue, 1, 4, 2, // Skip to: 1268
/* 752 */     MCD::OPC_Decode, 230, 1, 10, // Opcode: LDWCP_ru6
/* 756 */     MCD::OPC_FilterValue, 14, 84, 0, // Skip to: 844
/* 760 */     MCD::OPC_ExtractField, 10, 1,  // Inst{10} ...
/* 763 */     MCD::OPC_FilterValue, 0, 36, 0, // Skip to: 803
/* 767 */     MCD::OPC_ExtractField, 6, 4,  // Inst{9-6} ...
/* 770 */     MCD::OPC_FilterValue, 12, 3, 0, // Skip to: 777
/* 774 */     MCD::OPC_Decode, 126, 11, // Opcode: BRFU_u6
/* 777 */     MCD::OPC_FilterValue, 13, 3, 0, // Skip to: 784
/* 781 */     MCD::OPC_Decode, 109, 11, // Opcode: BLAT_u6
/* 784 */     MCD::OPC_FilterValue, 14, 4, 0, // Skip to: 792
/* 788 */     MCD::OPC_Decode, 162, 1, 11, // Opcode: EXTDP_u6
/* 792 */     MCD::OPC_FilterValue, 15, 4, 0, // Skip to: 800
/* 796 */     MCD::OPC_Decode, 194, 1, 11, // Opcode: KCALL_u6
/* 800 */     MCD::OPC_Decode, 124, 12, // Opcode: BRFT_ru6
/* 803 */     MCD::OPC_FilterValue, 1, 205, 1, // Skip to: 1268
/* 807 */     MCD::OPC_ExtractField, 6, 4,  // Inst{9-6} ...
/* 810 */     MCD::OPC_FilterValue, 12, 3, 0, // Skip to: 817
/* 814 */     MCD::OPC_Decode, 120, 13, // Opcode: BRBU_u6
/* 817 */     MCD::OPC_FilterValue, 13, 4, 0, // Skip to: 825
/* 821 */     MCD::OPC_Decode, 158, 1, 11, // Opcode: ENTSP_u6
/* 825 */     MCD::OPC_FilterValue, 14, 4, 0, // Skip to: 833
/* 829 */     MCD::OPC_Decode, 164, 1, 11, // Opcode: EXTSP_u6
/* 833 */     MCD::OPC_FilterValue, 15, 4, 0, // Skip to: 841
/* 837 */     MCD::OPC_Decode, 135, 2, 11, // Opcode: RETSP_u6
/* 841 */     MCD::OPC_Decode, 118, 14, // Opcode: BRBT_ru6
/* 844 */     MCD::OPC_FilterValue, 15, 71, 0, // Skip to: 919
/* 848 */     MCD::OPC_ExtractField, 10, 1,  // Inst{10} ...
/* 851 */     MCD::OPC_FilterValue, 0, 38, 0, // Skip to: 893
/* 855 */     MCD::OPC_ExtractField, 6, 4,  // Inst{9-6} ...
/* 858 */     MCD::OPC_FilterValue, 12, 4, 0, // Skip to: 866
/* 862 */     MCD::OPC_Decode, 138, 1, 11, // Opcode: CLRSR_u6
/* 866 */     MCD::OPC_FilterValue, 13, 4, 0, // Skip to: 874
/* 870 */     MCD::OPC_Decode, 155, 2, 11, // Opcode: SETSR_u6
/* 874 */     MCD::OPC_FilterValue, 14, 4, 0, // Skip to: 882
/* 878 */     MCD::OPC_Decode, 196, 1, 11, // Opcode: KENTSP_u6
/* 882 */     MCD::OPC_FilterValue, 15, 4, 0, // Skip to: 890
/* 886 */     MCD::OPC_Decode, 198, 1, 11, // Opcode: KRESTSP_u6
/* 890 */     MCD::OPC_Decode, 122, 12, // Opcode: BRFF_ru6
/* 893 */     MCD::OPC_FilterValue, 1, 115, 1, // Skip to: 1268
/* 897 */     MCD::OPC_ExtractField, 6, 4,  // Inst{9-6} ...
/* 900 */     MCD::OPC_FilterValue, 12, 4, 0, // Skip to: 908
/* 904 */     MCD::OPC_Decode, 178, 1, 11, // Opcode: GETSR_u6
/* 908 */     MCD::OPC_FilterValue, 13, 4, 0, // Skip to: 916
/* 912 */     MCD::OPC_Decode, 213, 1, 11, // Opcode: LDAWCP_u6
/* 916 */     MCD::OPC_Decode, 116, 14, // Opcode: BRBF_ru6
/* 919 */     MCD::OPC_FilterValue, 16, 42, 0, // Skip to: 965
/* 923 */     MCD::OPC_ExtractField, 4, 7,  // Inst{10-4} ...
/* 926 */     MCD::OPC_FilterValue, 126, 4, 0, // Skip to: 934
/* 930 */     MCD::OPC_Decode, 134, 1, 1, // Opcode: CLRPT_1R
/* 934 */     MCD::OPC_FilterValue, 127, 4, 0, // Skip to: 942
/* 938 */     MCD::OPC_Decode, 180, 2, 1, // Opcode: SYNCR_1r
/* 942 */     MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 945 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 953
/* 949 */     MCD::OPC_Decode, 176, 1, 9, // Opcode: GETR_rus
/* 953 */     MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 961
/* 957 */     MCD::OPC_Decode, 181, 1, 2, // Opcode: INCT_2r
/* 961 */     MCD::OPC_Decode, 201, 1, 5, // Opcode: LD16S_3r
/* 965 */     MCD::OPC_FilterValue, 17, 23, 0, // Skip to: 992
/* 969 */     MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 972 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 980
/* 976 */     MCD::OPC_Decode, 251, 1, 2, // Opcode: NOT
/* 980 */     MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 988
/* 984 */     MCD::OPC_Decode, 189, 1, 2, // Opcode: INT_2r
/* 988 */     MCD::OPC_Decode, 202, 1, 5, // Opcode: LD8U_3r
/* 992 */     MCD::OPC_FilterValue, 18, 22, 0, // Skip to: 1018
/* 996 */     MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 999 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 1007
/* 1003 */    MCD::OPC_Decode, 250, 1, 2, // Opcode: NEG
/* 1007 */    MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 1015
/* 1011 */    MCD::OPC_Decode, 156, 1, 2, // Opcode: ENDIN_2r
/* 1015 */    MCD::OPC_Decode, 96, 3, // Opcode: ADD_2rus
/* 1018 */    MCD::OPC_FilterValue, 19, 4, 0, // Skip to: 1026
/* 1022 */    MCD::OPC_Decode, 178, 2, 3, // Opcode: SUB_2rus
/* 1026 */    MCD::OPC_FilterValue, 20, 23, 0, // Skip to: 1053
/* 1030 */    MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 1033 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 1041
/* 1037 */    MCD::OPC_Decode, 246, 1, 2, // Opcode: MKMSK_2r
/* 1041 */    MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 1049
/* 1045 */    MCD::OPC_Decode, 247, 1, 15, // Opcode: MKMSK_rus
/* 1049 */    MCD::OPC_Decode, 160, 2, 16, // Opcode: SHL_2rus
/* 1053 */    MCD::OPC_FilterValue, 21, 23, 0, // Skip to: 1080
/* 1057 */    MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 1060 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 1068
/* 1064 */    MCD::OPC_Decode, 130, 2, 4, // Opcode: OUT_2r
/* 1068 */    MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 1076
/* 1072 */    MCD::OPC_Decode, 128, 2, 7, // Opcode: OUTSHR_2r
/* 1076 */    MCD::OPC_Decode, 162, 2, 16, // Opcode: SHR_2rus
/* 1080 */    MCD::OPC_FilterValue, 22, 23, 0, // Skip to: 1107
/* 1084 */    MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 1087 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 1095
/* 1091 */    MCD::OPC_Decode, 190, 1, 2, // Opcode: IN_2r
/* 1095 */    MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 1103
/* 1099 */    MCD::OPC_Decode, 188, 1, 7, // Opcode: INSHR_2r
/* 1103 */    MCD::OPC_Decode, 159, 1, 3, // Opcode: EQ_2rus
/* 1107 */    MCD::OPC_FilterValue, 23, 23, 0, // Skip to: 1134
/* 1111 */    MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 1114 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 1122
/* 1118 */    MCD::OPC_Decode, 131, 2, 2, // Opcode: PEEK_2r
/* 1122 */    MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 1130
/* 1126 */    MCD::OPC_Decode, 181, 2, 2, // Opcode: TESTCT_2r
/* 1130 */    MCD::OPC_Decode, 185, 2, 17, // Opcode: TSETR_3r
/* 1134 */    MCD::OPC_FilterValue, 24, 23, 0, // Skip to: 1161
/* 1138 */    MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 1141 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 1149
/* 1145 */    MCD::OPC_Decode, 147, 2, 4, // Opcode: SETPSC_2r
/* 1149 */    MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 1157
/* 1153 */    MCD::OPC_Decode, 183, 2, 2, // Opcode: TESTWCT_2r
/* 1157 */    MCD::OPC_Decode, 240, 1, 5, // Opcode: LSS_3r
/* 1161 */    MCD::OPC_FilterValue, 25, 23, 0, // Skip to: 1188
/* 1165 */    MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 1168 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 1176
/* 1172 */    MCD::OPC_Decode, 131, 1, 2, // Opcode: CHKCT_2r
/* 1176 */    MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 1184
/* 1180 */    MCD::OPC_Decode, 132, 1, 15, // Opcode: CHKCT_rus
/* 1184 */    MCD::OPC_Decode, 242, 1, 5, // Opcode: LSU_3r
/* 1188 */    MCD::OPC_FilterValue, 26, 17, 0, // Skip to: 1209
/* 1192 */    MCD::OPC_ExtractField, 10, 1,  // Inst{10} ...
/* 1195 */    MCD::OPC_FilterValue, 0, 3, 0, // Skip to: 1202
/* 1199 */    MCD::OPC_Decode, 114, 18, // Opcode: BLRF_u10
/* 1202 */    MCD::OPC_FilterValue, 1, 62, 0, // Skip to: 1268
/* 1206 */    MCD::OPC_Decode, 112, 19, // Opcode: BLRB_u10
/* 1209 */    MCD::OPC_FilterValue, 27, 19, 0, // Skip to: 1232
/* 1213 */    MCD::OPC_ExtractField, 10, 1,  // Inst{10} ...
/* 1216 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 1224
/* 1220 */    MCD::OPC_Decode, 209, 1, 18, // Opcode: LDAPF_u10
/* 1224 */    MCD::OPC_FilterValue, 1, 40, 0, // Skip to: 1268
/* 1228 */    MCD::OPC_Decode, 206, 1, 19, // Opcode: LDAPB_u10
/* 1232 */    MCD::OPC_FilterValue, 28, 18, 0, // Skip to: 1254
/* 1236 */    MCD::OPC_ExtractField, 10, 1,  // Inst{10} ...
/* 1239 */    MCD::OPC_FilterValue, 0, 3, 0, // Skip to: 1246
/* 1243 */    MCD::OPC_Decode, 107, 18, // Opcode: BLACP_u10
/* 1246 */    MCD::OPC_FilterValue, 1, 18, 0, // Skip to: 1268
/* 1250 */    MCD::OPC_Decode, 231, 1, 18, // Opcode: LDWCP_u10
/* 1254 */    MCD::OPC_FilterValue, 29, 10, 0, // Skip to: 1268
/* 1258 */    MCD::OPC_CheckField, 10, 1, 0, 4, 0, // Skip to: 1268
/* 1264 */    MCD::OPC_Decode, 141, 2, 12, // Opcode: SETC_ru6
/* 1268 */    MCD::OPC_Fail,
  0
};

static const uint8_t DecoderTable32[] = {
/* 0 */       MCD::OPC_ExtractField, 27, 5,  // Inst{31-27} ...
/* 3 */       MCD::OPC_FilterValue, 0, 92, 0, // Skip to: 99
/* 7 */       MCD::OPC_ExtractField, 11, 5,  // Inst{15-11} ...
/* 10 */      MCD::OPC_FilterValue, 31, 236, 3, // Skip to: 1018
/* 14 */      MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 17 */      MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 31
/* 21 */      MCD::OPC_CheckField, 16, 11, 236, 15, 18, 0, // Skip to: 46
/* 28 */      MCD::OPC_Decode, 105, 20, // Opcode: BITREV_l2r
/* 31 */      MCD::OPC_FilterValue, 1, 11, 0, // Skip to: 46
/* 35 */      MCD::OPC_CheckField, 16, 11, 236, 15, 4, 0, // Skip to: 46
/* 42 */      MCD::OPC_Decode, 130, 1, 20, // Opcode: BYTEREV_l2r
/* 46 */      MCD::OPC_CheckField, 16, 11, 236, 15, 4, 0, // Skip to: 57
/* 53 */      MCD::OPC_Decode, 177, 2, 21, // Opcode: STW_l3r
/* 57 */      MCD::OPC_ExtractField, 20, 7,  // Inst{26-20} ...
/* 60 */      MCD::OPC_FilterValue, 126, 4, 0, // Skip to: 68
/* 64 */      MCD::OPC_Decode, 140, 1, 22, // Opcode: CRC8_l4r
/* 68 */      MCD::OPC_FilterValue, 127, 4, 0, // Skip to: 76
/* 72 */      MCD::OPC_Decode, 244, 1, 23, // Opcode: MACCU_l4r
/* 76 */      MCD::OPC_ExtractField, 20, 1,  // Inst{20} ...
/* 79 */      MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 87
/* 83 */      MCD::OPC_Decode, 224, 1, 24, // Opcode: LDIVU_l5r
/* 87 */      MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 95
/* 91 */      MCD::OPC_Decode, 200, 1, 24, // Opcode: LADD_l5r
/* 95 */      MCD::OPC_Decode, 239, 1, 25, // Opcode: LMUL_l6r
/* 99 */      MCD::OPC_FilterValue, 1, 87, 0, // Skip to: 190
/* 103 */     MCD::OPC_ExtractField, 11, 5,  // Inst{15-11} ...
/* 106 */     MCD::OPC_FilterValue, 31, 140, 3, // Skip to: 1018
/* 110 */     MCD::OPC_ExtractField, 20, 1,  // Inst{20} ...
/* 113 */     MCD::OPC_FilterValue, 0, 133, 3, // Skip to: 1018
/* 117 */     MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 120 */     MCD::OPC_FilterValue, 0, 16, 0, // Skip to: 140
/* 124 */     MCD::OPC_CheckField, 21, 6, 63, 30, 0, // Skip to: 160
/* 130 */     MCD::OPC_CheckField, 16, 4, 12, 24, 0, // Skip to: 160
/* 136 */     MCD::OPC_Decode, 139, 1, 20, // Opcode: CLZ_l2r
/* 140 */     MCD::OPC_FilterValue, 1, 16, 0, // Skip to: 160
/* 144 */     MCD::OPC_CheckField, 21, 6, 63, 10, 0, // Skip to: 160
/* 150 */     MCD::OPC_CheckField, 16, 4, 12, 4, 0, // Skip to: 160
/* 156 */     MCD::OPC_Decode, 137, 2, 26, // Opcode: SETCLK_l2r
/* 160 */     MCD::OPC_CheckField, 21, 6, 63, 10, 0, // Skip to: 176
/* 166 */     MCD::OPC_CheckField, 16, 4, 12, 4, 0, // Skip to: 176
/* 172 */     MCD::OPC_Decode, 190, 2, 21, // Opcode: XOR_l3r
/* 176 */     MCD::OPC_CheckField, 21, 6, 63, 4, 0, // Skip to: 186
/* 182 */     MCD::OPC_Decode, 243, 1, 23, // Opcode: MACCS_l4r
/* 186 */     MCD::OPC_Decode, 241, 1, 24, // Opcode: LSUB_l5r
/* 190 */     MCD::OPC_FilterValue, 2, 31, 0, // Skip to: 225
/* 194 */     MCD::OPC_ExtractField, 11, 16,  // Inst{26-11} ...
/* 197 */     MCD::OPC_FilterValue, 159, 251, 3, 47, 3, // Skip to: 1018
/* 203 */     MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 206 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 214
/* 210 */     MCD::OPC_Decode, 184, 1, 20, // Opcode: INITLR_l2r
/* 214 */     MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 222
/* 218 */     MCD::OPC_Decode, 175, 1, 20, // Opcode: GETPS_l2r
/* 222 */     MCD::OPC_Decode, 103, 21, // Opcode: ASHR_l3r
/* 225 */     MCD::OPC_FilterValue, 3, 32, 0, // Skip to: 261
/* 229 */     MCD::OPC_ExtractField, 11, 16,  // Inst{26-11} ...
/* 232 */     MCD::OPC_FilterValue, 159, 251, 3, 12, 3, // Skip to: 1018
/* 238 */     MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 241 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 249
/* 245 */     MCD::OPC_Decode, 148, 2, 26, // Opcode: SETPS_l2r
/* 249 */     MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 257
/* 253 */     MCD::OPC_Decode, 168, 1, 20, // Opcode: GETD_l2r
/* 257 */     MCD::OPC_Decode, 218, 1, 21, // Opcode: LDAWF_l3r
/* 261 */     MCD::OPC_FilterValue, 4, 32, 0, // Skip to: 297
/* 265 */     MCD::OPC_ExtractField, 11, 16,  // Inst{26-11} ...
/* 268 */     MCD::OPC_FilterValue, 159, 251, 3, 232, 2, // Skip to: 1018
/* 274 */     MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 277 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 285
/* 281 */     MCD::OPC_Decode, 182, 2, 20, // Opcode: TESTLCL_l2r
/* 285 */     MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 293
/* 289 */     MCD::OPC_Decode, 156, 2, 26, // Opcode: SETTW_l2r
/* 293 */     MCD::OPC_Decode, 211, 1, 21, // Opcode: LDAWB_l3r
/* 297 */     MCD::OPC_FilterValue, 5, 32, 0, // Skip to: 333
/* 301 */     MCD::OPC_ExtractField, 11, 16,  // Inst{26-11} ...
/* 304 */     MCD::OPC_FilterValue, 159, 251, 3, 196, 2, // Skip to: 1018
/* 310 */     MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 313 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 321
/* 317 */     MCD::OPC_Decode, 150, 2, 26, // Opcode: SETRDY_l2r
/* 321 */     MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 329
/* 325 */     MCD::OPC_Decode, 139, 2, 20, // Opcode: SETC_l2r
/* 329 */     MCD::OPC_Decode, 204, 1, 21, // Opcode: LDA16F_l3r
/* 333 */     MCD::OPC_FilterValue, 6, 32, 0, // Skip to: 369
/* 337 */     MCD::OPC_ExtractField, 11, 16,  // Inst{26-11} ...
/* 340 */     MCD::OPC_FilterValue, 159, 251, 3, 160, 2, // Skip to: 1018
/* 346 */     MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 349 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 357
/* 353 */     MCD::OPC_Decode, 146, 2, 26, // Opcode: SETN_l2r
/* 357 */     MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 365
/* 361 */     MCD::OPC_Decode, 174, 1, 20, // Opcode: GETN_l2r
/* 365 */     MCD::OPC_Decode, 203, 1, 21, // Opcode: LDA16B_l3r
/* 369 */     MCD::OPC_FilterValue, 7, 12, 0, // Skip to: 385
/* 373 */     MCD::OPC_CheckField, 11, 16, 159, 251, 3, 125, 2, // Skip to: 1018
/* 381 */     MCD::OPC_Decode, 249, 1, 21, // Opcode: MUL_l3r
/* 385 */     MCD::OPC_FilterValue, 8, 12, 0, // Skip to: 401
/* 389 */     MCD::OPC_CheckField, 11, 16, 159, 251, 3, 109, 2, // Skip to: 1018
/* 397 */     MCD::OPC_Decode, 145, 1, 21, // Opcode: DIVS_l3r
/* 401 */     MCD::OPC_FilterValue, 9, 12, 0, // Skip to: 417
/* 405 */     MCD::OPC_CheckField, 11, 16, 159, 251, 3, 93, 2, // Skip to: 1018
/* 413 */     MCD::OPC_Decode, 146, 1, 21, // Opcode: DIVU_l3r
/* 417 */     MCD::OPC_FilterValue, 10, 31, 0, // Skip to: 452
/* 421 */     MCD::OPC_ExtractField, 26, 1,  // Inst{26} ...
/* 424 */     MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 438
/* 428 */     MCD::OPC_CheckField, 10, 6, 60, 72, 2, // Skip to: 1018
/* 434 */     MCD::OPC_Decode, 171, 2, 27, // Opcode: STWDP_lru6
/* 438 */     MCD::OPC_FilterValue, 1, 64, 2, // Skip to: 1018
/* 442 */     MCD::OPC_CheckField, 10, 6, 60, 58, 2, // Skip to: 1018
/* 448 */     MCD::OPC_Decode, 174, 2, 27, // Opcode: STWSP_lru6
/* 452 */     MCD::OPC_FilterValue, 11, 31, 0, // Skip to: 487
/* 456 */     MCD::OPC_ExtractField, 26, 1,  // Inst{26} ...
/* 459 */     MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 473
/* 463 */     MCD::OPC_CheckField, 10, 6, 60, 37, 2, // Skip to: 1018
/* 469 */     MCD::OPC_Decode, 232, 1, 27, // Opcode: LDWDP_lru6
/* 473 */     MCD::OPC_FilterValue, 1, 29, 2, // Skip to: 1018
/* 477 */     MCD::OPC_CheckField, 10, 6, 60, 23, 2, // Skip to: 1018
/* 483 */     MCD::OPC_Decode, 235, 1, 27, // Opcode: LDWSP_lru6
/* 487 */     MCD::OPC_FilterValue, 12, 31, 0, // Skip to: 522
/* 491 */     MCD::OPC_ExtractField, 26, 1,  // Inst{26} ...
/* 494 */     MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 508
/* 498 */     MCD::OPC_CheckField, 10, 6, 60, 2, 2, // Skip to: 1018
/* 504 */     MCD::OPC_Decode, 214, 1, 27, // Opcode: LDAWDP_lru6
/* 508 */     MCD::OPC_FilterValue, 1, 250, 1, // Skip to: 1018
/* 512 */     MCD::OPC_CheckField, 10, 6, 60, 244, 1, // Skip to: 1018
/* 518 */     MCD::OPC_Decode, 219, 1, 27, // Opcode: LDAWSP_lru6
/* 522 */     MCD::OPC_FilterValue, 13, 31, 0, // Skip to: 557
/* 526 */     MCD::OPC_ExtractField, 26, 1,  // Inst{26} ...
/* 529 */     MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 543
/* 533 */     MCD::OPC_CheckField, 10, 6, 60, 223, 1, // Skip to: 1018
/* 539 */     MCD::OPC_Decode, 221, 1, 27, // Opcode: LDC_lru6
/* 543 */     MCD::OPC_FilterValue, 1, 215, 1, // Skip to: 1018
/* 547 */     MCD::OPC_CheckField, 10, 6, 60, 209, 1, // Skip to: 1018
/* 553 */     MCD::OPC_Decode, 228, 1, 27, // Opcode: LDWCP_lru6
/* 557 */     MCD::OPC_FilterValue, 14, 98, 0, // Skip to: 659
/* 561 */     MCD::OPC_ExtractField, 26, 1,  // Inst{26} ...
/* 564 */     MCD::OPC_FilterValue, 0, 43, 0, // Skip to: 611
/* 568 */     MCD::OPC_ExtractField, 10, 6,  // Inst{15-10} ...
/* 571 */     MCD::OPC_FilterValue, 60, 187, 1, // Skip to: 1018
/* 575 */     MCD::OPC_ExtractField, 22, 4,  // Inst{25-22} ...
/* 578 */     MCD::OPC_FilterValue, 12, 3, 0, // Skip to: 585
/* 582 */     MCD::OPC_Decode, 125, 28, // Opcode: BRFU_lu6
/* 585 */     MCD::OPC_FilterValue, 13, 3, 0, // Skip to: 592
/* 589 */     MCD::OPC_Decode, 108, 28, // Opcode: BLAT_lu6
/* 592 */     MCD::OPC_FilterValue, 14, 4, 0, // Skip to: 600
/* 596 */     MCD::OPC_Decode, 161, 1, 28, // Opcode: EXTDP_lu6
/* 600 */     MCD::OPC_FilterValue, 15, 4, 0, // Skip to: 608
/* 604 */     MCD::OPC_Decode, 193, 1, 28, // Opcode: KCALL_lu6
/* 608 */     MCD::OPC_Decode, 123, 29, // Opcode: BRFT_lru6
/* 611 */     MCD::OPC_FilterValue, 1, 147, 1, // Skip to: 1018
/* 615 */     MCD::OPC_ExtractField, 10, 6,  // Inst{15-10} ...
/* 618 */     MCD::OPC_FilterValue, 60, 140, 1, // Skip to: 1018
/* 622 */     MCD::OPC_ExtractField, 22, 4,  // Inst{25-22} ...
/* 625 */     MCD::OPC_FilterValue, 12, 3, 0, // Skip to: 632
/* 629 */     MCD::OPC_Decode, 119, 30, // Opcode: BRBU_lu6
/* 632 */     MCD::OPC_FilterValue, 13, 4, 0, // Skip to: 640
/* 636 */     MCD::OPC_Decode, 157, 1, 28, // Opcode: ENTSP_lu6
/* 640 */     MCD::OPC_FilterValue, 14, 4, 0, // Skip to: 648
/* 644 */     MCD::OPC_Decode, 163, 1, 28, // Opcode: EXTSP_lu6
/* 648 */     MCD::OPC_FilterValue, 15, 4, 0, // Skip to: 656
/* 652 */     MCD::OPC_Decode, 134, 2, 28, // Opcode: RETSP_lu6
/* 656 */     MCD::OPC_Decode, 117, 31, // Opcode: BRBT_lru6
/* 659 */     MCD::OPC_FilterValue, 15, 85, 0, // Skip to: 748
/* 663 */     MCD::OPC_ExtractField, 26, 1,  // Inst{26} ...
/* 666 */     MCD::OPC_FilterValue, 0, 45, 0, // Skip to: 715
/* 670 */     MCD::OPC_ExtractField, 10, 6,  // Inst{15-10} ...
/* 673 */     MCD::OPC_FilterValue, 60, 85, 1, // Skip to: 1018
/* 677 */     MCD::OPC_ExtractField, 22, 4,  // Inst{25-22} ...
/* 680 */     MCD::OPC_FilterValue, 12, 4, 0, // Skip to: 688
/* 684 */     MCD::OPC_Decode, 137, 1, 28, // Opcode: CLRSR_lu6
/* 688 */     MCD::OPC_FilterValue, 13, 4, 0, // Skip to: 696
/* 692 */     MCD::OPC_Decode, 154, 2, 28, // Opcode: SETSR_lu6
/* 696 */     MCD::OPC_FilterValue, 14, 4, 0, // Skip to: 704
/* 700 */     MCD::OPC_Decode, 195, 1, 28, // Opcode: KENTSP_lu6
/* 704 */     MCD::OPC_FilterValue, 15, 4, 0, // Skip to: 712
/* 708 */     MCD::OPC_Decode, 197, 1, 28, // Opcode: KRESTSP_lu6
/* 712 */     MCD::OPC_Decode, 121, 29, // Opcode: BRFF_lru6
/* 715 */     MCD::OPC_FilterValue, 1, 43, 1, // Skip to: 1018
/* 719 */     MCD::OPC_ExtractField, 10, 6,  // Inst{15-10} ...
/* 722 */     MCD::OPC_FilterValue, 60, 36, 1, // Skip to: 1018
/* 726 */     MCD::OPC_ExtractField, 22, 4,  // Inst{25-22} ...
/* 729 */     MCD::OPC_FilterValue, 12, 4, 0, // Skip to: 737
/* 733 */     MCD::OPC_Decode, 177, 1, 28, // Opcode: GETSR_lu6
/* 737 */     MCD::OPC_FilterValue, 13, 4, 0, // Skip to: 745
/* 741 */     MCD::OPC_Decode, 212, 1, 28, // Opcode: LDAWCP_lu6
/* 745 */     MCD::OPC_Decode, 115, 31, // Opcode: BRBF_lru6
/* 748 */     MCD::OPC_FilterValue, 16, 12, 0, // Skip to: 764
/* 752 */     MCD::OPC_CheckField, 11, 16, 159, 251, 3, 2, 1, // Skip to: 1018
/* 760 */     MCD::OPC_Decode, 165, 2, 21, // Opcode: ST16_l3r
/* 764 */     MCD::OPC_FilterValue, 17, 12, 0, // Skip to: 780
/* 768 */     MCD::OPC_CheckField, 11, 16, 159, 251, 3, 242, 0, // Skip to: 1018
/* 776 */     MCD::OPC_Decode, 166, 2, 21, // Opcode: ST8_l3r
/* 780 */     MCD::OPC_FilterValue, 18, 32, 0, // Skip to: 816
/* 784 */     MCD::OPC_ExtractField, 11, 16,  // Inst{26-11} ...
/* 787 */     MCD::OPC_FilterValue, 159, 251, 3, 3, 0, // Skip to: 796
/* 793 */     MCD::OPC_Decode, 102, 32, // Opcode: ASHR_l2rus
/* 796 */     MCD::OPC_FilterValue, 191, 251, 3, 4, 0, // Skip to: 806
/* 802 */     MCD::OPC_Decode, 255, 1, 32, // Opcode: OUTPW_l2rus
/* 806 */     MCD::OPC_FilterValue, 223, 251, 3, 206, 0, // Skip to: 1018
/* 812 */     MCD::OPC_Decode, 187, 1, 32, // Opcode: INPW_l2rus
/* 816 */     MCD::OPC_FilterValue, 19, 12, 0, // Skip to: 832
/* 820 */     MCD::OPC_CheckField, 11, 16, 159, 251, 3, 190, 0, // Skip to: 1018
/* 828 */     MCD::OPC_Decode, 217, 1, 33, // Opcode: LDAWF_l2rus
/* 832 */     MCD::OPC_FilterValue, 20, 12, 0, // Skip to: 848
/* 836 */     MCD::OPC_CheckField, 11, 16, 159, 251, 3, 174, 0, // Skip to: 1018
/* 844 */     MCD::OPC_Decode, 210, 1, 33, // Opcode: LDAWB_l2rus
/* 848 */     MCD::OPC_FilterValue, 21, 12, 0, // Skip to: 864
/* 852 */     MCD::OPC_CheckField, 11, 16, 159, 251, 3, 158, 0, // Skip to: 1018
/* 860 */     MCD::OPC_Decode, 141, 1, 34, // Opcode: CRC_l3r
/* 864 */     MCD::OPC_FilterValue, 24, 12, 0, // Skip to: 880
/* 868 */     MCD::OPC_CheckField, 11, 16, 159, 251, 3, 142, 0, // Skip to: 1018
/* 876 */     MCD::OPC_Decode, 132, 2, 21, // Opcode: REMS_l3r
/* 880 */     MCD::OPC_FilterValue, 25, 12, 0, // Skip to: 896
/* 884 */     MCD::OPC_CheckField, 11, 16, 159, 251, 3, 126, 0, // Skip to: 1018
/* 892 */     MCD::OPC_Decode, 133, 2, 21, // Opcode: REMU_l3r
/* 896 */     MCD::OPC_FilterValue, 26, 29, 0, // Skip to: 929
/* 900 */     MCD::OPC_ExtractField, 26, 1,  // Inst{26} ...
/* 903 */     MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 916
/* 907 */     MCD::OPC_CheckField, 10, 6, 60, 105, 0, // Skip to: 1018
/* 913 */     MCD::OPC_Decode, 113, 35, // Opcode: BLRF_lu10
/* 916 */     MCD::OPC_FilterValue, 1, 98, 0, // Skip to: 1018
/* 920 */     MCD::OPC_CheckField, 10, 6, 60, 92, 0, // Skip to: 1018
/* 926 */     MCD::OPC_Decode, 111, 36, // Opcode: BLRB_lu10
/* 929 */     MCD::OPC_FilterValue, 27, 31, 0, // Skip to: 964
/* 933 */     MCD::OPC_ExtractField, 26, 1,  // Inst{26} ...
/* 936 */     MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 950
/* 940 */     MCD::OPC_CheckField, 10, 6, 60, 72, 0, // Skip to: 1018
/* 946 */     MCD::OPC_Decode, 207, 1, 35, // Opcode: LDAPF_lu10
/* 950 */     MCD::OPC_FilterValue, 1, 64, 0, // Skip to: 1018
/* 954 */     MCD::OPC_CheckField, 10, 6, 60, 58, 0, // Skip to: 1018
/* 960 */     MCD::OPC_Decode, 205, 1, 36, // Opcode: LDAPB_lu10
/* 964 */     MCD::OPC_FilterValue, 28, 30, 0, // Skip to: 998
/* 968 */     MCD::OPC_ExtractField, 26, 1,  // Inst{26} ...
/* 971 */     MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 984
/* 975 */     MCD::OPC_CheckField, 10, 6, 60, 37, 0, // Skip to: 1018
/* 981 */     MCD::OPC_Decode, 106, 35, // Opcode: BLACP_lu10
/* 984 */     MCD::OPC_FilterValue, 1, 30, 0, // Skip to: 1018
/* 988 */     MCD::OPC_CheckField, 10, 6, 60, 24, 0, // Skip to: 1018
/* 994 */     MCD::OPC_Decode, 229, 1, 35, // Opcode: LDWCP_lu10
/* 998 */     MCD::OPC_FilterValue, 29, 16, 0, // Skip to: 1018
/* 1002 */    MCD::OPC_CheckField, 26, 1, 0, 10, 0, // Skip to: 1018
/* 1008 */    MCD::OPC_CheckField, 10, 6, 60, 4, 0, // Skip to: 1018
/* 1014 */    MCD::OPC_Decode, 140, 2, 29, // Opcode: SETC_lru6
/* 1018 */    MCD::OPC_Fail,
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
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeGRRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 2:
    if (Decode2RInstruction(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 3:
    if (Decode2RUSInstruction(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 4:
    if (DecodeR2RInstruction(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 5:
    if (Decode3RInstruction(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 6:
    if (Decode2RImmInstruction(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 7:
    if (Decode2RSrcDstInstruction(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 8:
    if (DecodeRUSSrcDstBitpInstruction(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 9:
    if (DecodeRUSInstruction(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 10:
    tmp = fieldFromInstruction(insn, 6, 4);
    if (DecodeRRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 6);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 11:
    tmp = fieldFromInstruction(insn, 0, 6);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 12:
    tmp = fieldFromInstruction(insn, 6, 4);
    if (DecodeGRRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 6);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 13:
    tmp = fieldFromInstruction(insn, 0, 6);
    if (DecodeNegImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 14:
    tmp = fieldFromInstruction(insn, 6, 4);
    if (DecodeGRRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 6);
    if (DecodeNegImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 15:
    if (DecodeRUSBitpInstruction(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 16:
    if (Decode2RUSBitpInstruction(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 17:
    if (Decode3RImmInstruction(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 18:
    tmp = fieldFromInstruction(insn, 0, 10);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 19:
    tmp = fieldFromInstruction(insn, 0, 10);
    if (DecodeNegImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 20:
    if (DecodeL2RInstruction(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 21:
    if (DecodeL3RInstruction(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 22:
    if (DecodeL4RSrcDstInstruction(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 23:
    if (DecodeL4RSrcDstSrcDstInstruction(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 24:
    if (DecodeL5RInstruction(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 25:
    if (DecodeL6RInstruction(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 26:
    if (DecodeLR2RInstruction(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 27:
    tmp = fieldFromInstruction(insn, 22, 4);
    if (DecodeRRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 10) << 6;
    tmp |= fieldFromInstruction(insn, 16, 6) << 0;
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 28:
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 10) << 6;
    tmp |= fieldFromInstruction(insn, 16, 6) << 0;
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 29:
    tmp = fieldFromInstruction(insn, 22, 4);
    if (DecodeGRRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 10) << 6;
    tmp |= fieldFromInstruction(insn, 16, 6) << 0;
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 30:
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 10) << 6;
    tmp |= fieldFromInstruction(insn, 16, 6) << 0;
    if (DecodeNegImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 31:
    tmp = fieldFromInstruction(insn, 22, 4);
    if (DecodeGRRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 10) << 6;
    tmp |= fieldFromInstruction(insn, 16, 6) << 0;
    if (DecodeNegImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 32:
    if (DecodeL2RUSBitpInstruction(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 33:
    if (DecodeL2RUSInstruction(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 34:
    if (DecodeL3RSrcDstInstruction(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 35:
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 10) << 10;
    tmp |= fieldFromInstruction(insn, 16, 10) << 0;
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 36:
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 10) << 10;
    tmp |= fieldFromInstruction(insn, 16, 10) << 0;
    if (DecodeNegImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
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
