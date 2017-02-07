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
/* 3 */       MCD::OPC_FilterValue, 0, 116, 0, // Skip to: 123
/* 7 */       MCD::OPC_ExtractField, 0, 11,  // Inst{10-0} ...
/* 10 */      MCD::OPC_FilterValue, 236, 15, 4, 0, // Skip to: 19
/* 15 */      MCD::OPC_Decode, 175, 2, 0, // Opcode: WAITEU_0R
/* 19 */      MCD::OPC_FilterValue, 237, 15, 3, 0, // Skip to: 27
/* 24 */      MCD::OPC_Decode, 119, 0, // Opcode: CLRE_0R
/* 27 */      MCD::OPC_FilterValue, 238, 15, 4, 0, // Skip to: 36
/* 32 */      MCD::OPC_Decode, 150, 2, 0, // Opcode: SSYNC_0r
/* 36 */      MCD::OPC_FilterValue, 239, 15, 4, 0, // Skip to: 45
/* 41 */      MCD::OPC_Decode, 153, 1, 0, // Opcode: FREET_0R
/* 45 */      MCD::OPC_FilterValue, 252, 15, 4, 0, // Skip to: 54
/* 50 */      MCD::OPC_Decode, 128, 1, 0, // Opcode: DCALL_0R
/* 54 */      MCD::OPC_FilterValue, 253, 15, 4, 0, // Skip to: 63
/* 59 */      MCD::OPC_Decode, 185, 1, 0, // Opcode: KRET_0R
/* 63 */      MCD::OPC_FilterValue, 254, 15, 4, 0, // Skip to: 72
/* 68 */      MCD::OPC_Decode, 134, 1, 0, // Opcode: DRET_0R
/* 72 */      MCD::OPC_FilterValue, 255, 15, 4, 0, // Skip to: 81
/* 77 */      MCD::OPC_Decode, 131, 2, 0, // Opcode: SETKEP_0R
/* 81 */      MCD::OPC_ExtractField, 4, 7,  // Inst{10-4} ...
/* 84 */      MCD::OPC_FilterValue, 126, 4, 0, // Skip to: 92
/* 88 */      MCD::OPC_Decode, 137, 1, 1, // Opcode: EDU_1r
/* 92 */      MCD::OPC_FilterValue, 127, 4, 0, // Skip to: 100
/* 96 */      MCD::OPC_Decode, 140, 1, 1, // Opcode: EEU_1r
/* 100 */     MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 103 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 111
/* 107 */     MCD::OPC_Decode, 171, 1, 2, // Opcode: INITPC_2r
/* 111 */     MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 119
/* 115 */     MCD::OPC_Decode, 165, 1, 2, // Opcode: GETST_2r
/* 119 */     MCD::OPC_Decode, 162, 2, 3, // Opcode: STW_2rus
/* 123 */     MCD::OPC_FilterValue, 1, 117, 0, // Skip to: 244
/* 127 */     MCD::OPC_ExtractField, 0, 11,  // Inst{10-0} ...
/* 130 */     MCD::OPC_FilterValue, 236, 15, 4, 0, // Skip to: 139
/* 135 */     MCD::OPC_Decode, 212, 1, 0, // Opcode: LDSPC_0R
/* 139 */     MCD::OPC_FilterValue, 237, 15, 4, 0, // Skip to: 148
/* 144 */     MCD::OPC_Decode, 155, 2, 0, // Opcode: STSPC_0R
/* 148 */     MCD::OPC_FilterValue, 238, 15, 4, 0, // Skip to: 157
/* 153 */     MCD::OPC_Decode, 213, 1, 0, // Opcode: LDSSR_0R
/* 157 */     MCD::OPC_FilterValue, 239, 15, 4, 0, // Skip to: 166
/* 162 */     MCD::OPC_Decode, 156, 2, 0, // Opcode: STSSR_0R
/* 166 */     MCD::OPC_FilterValue, 252, 15, 4, 0, // Skip to: 175
/* 171 */     MCD::OPC_Decode, 154, 2, 0, // Opcode: STSED_0R
/* 175 */     MCD::OPC_FilterValue, 253, 15, 4, 0, // Skip to: 184
/* 180 */     MCD::OPC_Decode, 153, 2, 0, // Opcode: STET_0R
/* 184 */     MCD::OPC_FilterValue, 254, 15, 4, 0, // Skip to: 193
/* 189 */     MCD::OPC_Decode, 155, 1, 0, // Opcode: GETED_0R
/* 193 */     MCD::OPC_FilterValue, 255, 15, 4, 0, // Skip to: 202
/* 198 */     MCD::OPC_Decode, 156, 1, 0, // Opcode: GETET_0R
/* 202 */     MCD::OPC_ExtractField, 4, 7,  // Inst{10-4} ...
/* 205 */     MCD::OPC_FilterValue, 126, 4, 0, // Skip to: 213
/* 209 */     MCD::OPC_Decode, 174, 2, 1, // Opcode: WAITET_1R
/* 213 */     MCD::OPC_FilterValue, 127, 4, 0, // Skip to: 221
/* 217 */     MCD::OPC_Decode, 173, 2, 1, // Opcode: WAITEF_1R
/* 221 */     MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 224 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 232
/* 228 */     MCD::OPC_Decode, 169, 1, 2, // Opcode: INITDP_2r
/* 232 */     MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 240
/* 236 */     MCD::OPC_Decode, 243, 1, 4, // Opcode: OUTT_2r
/* 240 */     MCD::OPC_Decode, 223, 1, 3, // Opcode: LDW_2rus
/* 244 */     MCD::OPC_FilterValue, 2, 107, 0, // Skip to: 355
/* 248 */     MCD::OPC_ExtractField, 0, 11,  // Inst{10-0} ...
/* 251 */     MCD::OPC_FilterValue, 236, 15, 4, 0, // Skip to: 260
/* 256 */     MCD::OPC_Decode, 129, 1, 0, // Opcode: DENTSP_0R
/* 260 */     MCD::OPC_FilterValue, 237, 15, 4, 0, // Skip to: 269
/* 265 */     MCD::OPC_Decode, 133, 1, 0, // Opcode: DRESTSP_0R
/* 269 */     MCD::OPC_FilterValue, 238, 15, 4, 0, // Skip to: 278
/* 274 */     MCD::OPC_Decode, 157, 1, 0, // Opcode: GETID_0R
/* 278 */     MCD::OPC_FilterValue, 239, 15, 4, 0, // Skip to: 287
/* 283 */     MCD::OPC_Decode, 158, 1, 0, // Opcode: GETKEP_0R
/* 287 */     MCD::OPC_FilterValue, 252, 15, 4, 0, // Skip to: 296
/* 292 */     MCD::OPC_Decode, 159, 1, 0, // Opcode: GETKSP_0R
/* 296 */     MCD::OPC_FilterValue, 253, 15, 4, 0, // Skip to: 305
/* 301 */     MCD::OPC_Decode, 211, 1, 0, // Opcode: LDSED_0R
/* 305 */     MCD::OPC_FilterValue, 254, 15, 4, 0, // Skip to: 314
/* 310 */     MCD::OPC_Decode, 209, 1, 0, // Opcode: LDET_0R
/* 314 */     MCD::OPC_ExtractField, 4, 7,  // Inst{10-4} ...
/* 317 */     MCD::OPC_FilterValue, 126, 4, 0, // Skip to: 325
/* 321 */     MCD::OPC_Decode, 152, 1, 1, // Opcode: FREER_1r
/* 325 */     MCD::OPC_FilterValue, 127, 4, 0, // Skip to: 333
/* 329 */     MCD::OPC_Decode, 231, 1, 1, // Opcode: MJOIN_1r
/* 333 */     MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 336 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 344
/* 340 */     MCD::OPC_Decode, 172, 1, 2, // Opcode: INITSP_2r
/* 344 */     MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 352
/* 348 */     MCD::OPC_Decode, 129, 2, 4, // Opcode: SETD_2r
/* 352 */     MCD::OPC_Decode, 83, 5, // Opcode: ADD_3r
/* 355 */     MCD::OPC_FilterValue, 3, 42, 0, // Skip to: 401
/* 359 */     MCD::OPC_ExtractField, 4, 7,  // Inst{10-4} ...
/* 362 */     MCD::OPC_FilterValue, 126, 4, 0, // Skip to: 370
/* 366 */     MCD::OPC_Decode, 172, 2, 1, // Opcode: TSTART_1R
/* 370 */     MCD::OPC_FilterValue, 127, 4, 0, // Skip to: 378
/* 374 */     MCD::OPC_Decode, 234, 1, 1, // Opcode: MSYNC_1r
/* 378 */     MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 381 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 389
/* 385 */     MCD::OPC_Decode, 168, 1, 2, // Opcode: INITCP_2r
/* 389 */     MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 397
/* 393 */     MCD::OPC_Decode, 170, 2, 6, // Opcode: TSETMR_2r
/* 397 */     MCD::OPC_Decode, 165, 2, 5, // Opcode: SUB_3r
/* 401 */     MCD::OPC_FilterValue, 4, 31, 0, // Skip to: 436
/* 405 */     MCD::OPC_ExtractField, 4, 7,  // Inst{10-4} ...
/* 408 */     MCD::OPC_FilterValue, 126, 3, 0, // Skip to: 415
/* 412 */     MCD::OPC_Decode, 96, 1, // Opcode: BLA_1r
/* 415 */     MCD::OPC_FilterValue, 127, 3, 0, // Skip to: 422
/* 419 */     MCD::OPC_Decode, 90, 1, // Opcode: BAU_1r
/* 422 */     MCD::OPC_CheckField, 4, 1, 1, 4, 0, // Skip to: 432
/* 428 */     MCD::OPC_Decode, 139, 1, 2, // Opcode: EET_2r
/* 432 */     MCD::OPC_Decode, 147, 2, 5, // Opcode: SHL_3r
/* 436 */     MCD::OPC_FilterValue, 5, 40, 0, // Skip to: 480
/* 440 */     MCD::OPC_ExtractField, 4, 7,  // Inst{10-4} ...
/* 443 */     MCD::OPC_FilterValue, 126, 3, 0, // Skip to: 450
/* 447 */     MCD::OPC_Decode, 113, 1, // Opcode: BRU_1r
/* 450 */     MCD::OPC_FilterValue, 127, 4, 0, // Skip to: 458
/* 454 */     MCD::OPC_Decode, 137, 2, 1, // Opcode: SETSP_1r
/* 458 */     MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 461 */     MCD::OPC_FilterValue, 0, 3, 0, // Skip to: 468
/* 465 */     MCD::OPC_Decode, 86, 7, // Opcode: ANDNOT_2r
/* 468 */     MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 476
/* 472 */     MCD::OPC_Decode, 138, 1, 2, // Opcode: EEF_2r
/* 476 */     MCD::OPC_Decode, 149, 2, 5, // Opcode: SHR_3r
/* 480 */     MCD::OPC_FilterValue, 6, 42, 0, // Skip to: 526
/* 484 */     MCD::OPC_ExtractField, 4, 7,  // Inst{10-4} ...
/* 487 */     MCD::OPC_FilterValue, 126, 4, 0, // Skip to: 495
/* 491 */     MCD::OPC_Decode, 128, 2, 1, // Opcode: SETDP_1r
/* 495 */     MCD::OPC_FilterValue, 127, 4, 0, // Skip to: 503
/* 499 */     MCD::OPC_Decode, 252, 1, 1, // Opcode: SETCP_1r
/* 503 */     MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 506 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 514
/* 510 */     MCD::OPC_Decode, 144, 2, 7, // Opcode: SEXT_2r
/* 514 */     MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 522
/* 518 */     MCD::OPC_Decode, 145, 2, 8, // Opcode: SEXT_rus
/* 522 */     MCD::OPC_Decode, 146, 1, 5, // Opcode: EQ_3r
/* 526 */     MCD::OPC_FilterValue, 7, 41, 0, // Skip to: 571
/* 530 */     MCD::OPC_ExtractField, 4, 7,  // Inst{10-4} ...
/* 533 */     MCD::OPC_FilterValue, 126, 4, 0, // Skip to: 541
/* 537 */     MCD::OPC_Decode, 130, 1, 1, // Opcode: DGETREG_1r
/* 541 */     MCD::OPC_FilterValue, 127, 4, 0, // Skip to: 549
/* 545 */     MCD::OPC_Decode, 130, 2, 1, // Opcode: SETEV_1r
/* 549 */     MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 552 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 560
/* 556 */     MCD::OPC_Decode, 166, 1, 2, // Opcode: GETTS_2r
/* 560 */     MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 568
/* 564 */     MCD::OPC_Decode, 135, 2, 4, // Opcode: SETPT_2r
/* 568 */     MCD::OPC_Decode, 87, 5, // Opcode: AND_3r
/* 571 */     MCD::OPC_FilterValue, 8, 42, 0, // Skip to: 617
/* 575 */     MCD::OPC_ExtractField, 4, 7,  // Inst{10-4} ...
/* 578 */     MCD::OPC_FilterValue, 126, 4, 0, // Skip to: 586
/* 582 */     MCD::OPC_Decode, 178, 1, 1, // Opcode: KCALL_1r
/* 586 */     MCD::OPC_FilterValue, 127, 4, 0, // Skip to: 594
/* 590 */     MCD::OPC_Decode, 143, 2, 1, // Opcode: SETV_1r
/* 594 */     MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 597 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 605
/* 601 */     MCD::OPC_Decode, 177, 2, 7, // Opcode: ZEXT_2r
/* 605 */     MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 613
/* 609 */     MCD::OPC_Decode, 178, 2, 8, // Opcode: ZEXT_rus
/* 613 */     MCD::OPC_Decode, 238, 1, 5, // Opcode: OR_3r
/* 617 */     MCD::OPC_FilterValue, 9, 42, 0, // Skip to: 663
/* 621 */     MCD::OPC_ExtractField, 4, 7,  // Inst{10-4} ...
/* 624 */     MCD::OPC_FilterValue, 126, 4, 0, // Skip to: 632
/* 628 */     MCD::OPC_Decode, 135, 1, 1, // Opcode: ECALLF_1r
/* 632 */     MCD::OPC_FilterValue, 127, 4, 0, // Skip to: 640
/* 636 */     MCD::OPC_Decode, 136, 1, 1, // Opcode: ECALLT_1r
/* 640 */     MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 643 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 651
/* 647 */     MCD::OPC_Decode, 239, 1, 2, // Opcode: OUTCT_2r
/* 651 */     MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 659
/* 655 */     MCD::OPC_Decode, 240, 1, 9, // Opcode: OUTCT_rus
/* 659 */     MCD::OPC_Decode, 224, 1, 5, // Opcode: LDW_3r
/* 663 */     MCD::OPC_FilterValue, 10, 19, 0, // Skip to: 686
/* 667 */     MCD::OPC_ExtractField, 10, 1,  // Inst{10} ...
/* 670 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 678
/* 674 */     MCD::OPC_Decode, 158, 2, 10, // Opcode: STWDP_ru6
/* 678 */     MCD::OPC_FilterValue, 1, 69, 2, // Skip to: 1263
/* 682 */     MCD::OPC_Decode, 161, 2, 10, // Opcode: STWSP_ru6
/* 686 */     MCD::OPC_FilterValue, 11, 19, 0, // Skip to: 709
/* 690 */     MCD::OPC_ExtractField, 10, 1,  // Inst{10} ...
/* 693 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 701
/* 697 */     MCD::OPC_Decode, 219, 1, 10, // Opcode: LDWDP_ru6
/* 701 */     MCD::OPC_FilterValue, 1, 46, 2, // Skip to: 1263
/* 705 */     MCD::OPC_Decode, 222, 1, 10, // Opcode: LDWSP_ru6
/* 709 */     MCD::OPC_FilterValue, 12, 19, 0, // Skip to: 732
/* 713 */     MCD::OPC_ExtractField, 10, 1,  // Inst{10} ...
/* 716 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 724
/* 720 */     MCD::OPC_Decode, 201, 1, 10, // Opcode: LDAWDP_ru6
/* 724 */     MCD::OPC_FilterValue, 1, 23, 2, // Skip to: 1263
/* 728 */     MCD::OPC_Decode, 206, 1, 10, // Opcode: LDAWSP_ru6
/* 732 */     MCD::OPC_FilterValue, 13, 19, 0, // Skip to: 755
/* 736 */     MCD::OPC_ExtractField, 10, 1,  // Inst{10} ...
/* 739 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 747
/* 743 */     MCD::OPC_Decode, 208, 1, 10, // Opcode: LDC_ru6
/* 747 */     MCD::OPC_FilterValue, 1, 0, 2, // Skip to: 1263
/* 751 */     MCD::OPC_Decode, 216, 1, 10, // Opcode: LDWCP_ru6
/* 755 */     MCD::OPC_FilterValue, 14, 84, 0, // Skip to: 843
/* 759 */     MCD::OPC_ExtractField, 10, 1,  // Inst{10} ...
/* 762 */     MCD::OPC_FilterValue, 0, 36, 0, // Skip to: 802
/* 766 */     MCD::OPC_ExtractField, 6, 4,  // Inst{9-6} ...
/* 769 */     MCD::OPC_FilterValue, 12, 3, 0, // Skip to: 776
/* 773 */     MCD::OPC_Decode, 112, 11, // Opcode: BRFU_u6
/* 776 */     MCD::OPC_FilterValue, 13, 3, 0, // Skip to: 783
/* 780 */     MCD::OPC_Decode, 95, 11, // Opcode: BLAT_u6
/* 783 */     MCD::OPC_FilterValue, 14, 4, 0, // Skip to: 791
/* 787 */     MCD::OPC_Decode, 148, 1, 11, // Opcode: EXTDP_u6
/* 791 */     MCD::OPC_FilterValue, 15, 4, 0, // Skip to: 799
/* 795 */     MCD::OPC_Decode, 180, 1, 11, // Opcode: KCALL_u6
/* 799 */     MCD::OPC_Decode, 110, 12, // Opcode: BRFT_ru6
/* 802 */     MCD::OPC_FilterValue, 1, 201, 1, // Skip to: 1263
/* 806 */     MCD::OPC_ExtractField, 6, 4,  // Inst{9-6} ...
/* 809 */     MCD::OPC_FilterValue, 12, 3, 0, // Skip to: 816
/* 813 */     MCD::OPC_Decode, 106, 13, // Opcode: BRBU_u6
/* 816 */     MCD::OPC_FilterValue, 13, 4, 0, // Skip to: 824
/* 820 */     MCD::OPC_Decode, 144, 1, 11, // Opcode: ENTSP_u6
/* 824 */     MCD::OPC_FilterValue, 14, 4, 0, // Skip to: 832
/* 828 */     MCD::OPC_Decode, 150, 1, 11, // Opcode: EXTSP_u6
/* 832 */     MCD::OPC_FilterValue, 15, 4, 0, // Skip to: 840
/* 836 */     MCD::OPC_Decode, 249, 1, 11, // Opcode: RETSP_u6
/* 840 */     MCD::OPC_Decode, 104, 14, // Opcode: BRBT_ru6
/* 843 */     MCD::OPC_FilterValue, 15, 70, 0, // Skip to: 917
/* 847 */     MCD::OPC_ExtractField, 10, 1,  // Inst{10} ...
/* 850 */     MCD::OPC_FilterValue, 0, 37, 0, // Skip to: 891
/* 854 */     MCD::OPC_ExtractField, 6, 4,  // Inst{9-6} ...
/* 857 */     MCD::OPC_FilterValue, 12, 3, 0, // Skip to: 864
/* 861 */     MCD::OPC_Decode, 124, 11, // Opcode: CLRSR_u6
/* 864 */     MCD::OPC_FilterValue, 13, 4, 0, // Skip to: 872
/* 868 */     MCD::OPC_Decode, 141, 2, 11, // Opcode: SETSR_u6
/* 872 */     MCD::OPC_FilterValue, 14, 4, 0, // Skip to: 880
/* 876 */     MCD::OPC_Decode, 182, 1, 11, // Opcode: KENTSP_u6
/* 880 */     MCD::OPC_FilterValue, 15, 4, 0, // Skip to: 888
/* 884 */     MCD::OPC_Decode, 184, 1, 11, // Opcode: KRESTSP_u6
/* 888 */     MCD::OPC_Decode, 108, 12, // Opcode: BRFF_ru6
/* 891 */     MCD::OPC_FilterValue, 1, 112, 1, // Skip to: 1263
/* 895 */     MCD::OPC_ExtractField, 6, 4,  // Inst{9-6} ...
/* 898 */     MCD::OPC_FilterValue, 12, 4, 0, // Skip to: 906
/* 902 */     MCD::OPC_Decode, 164, 1, 11, // Opcode: GETSR_u6
/* 906 */     MCD::OPC_FilterValue, 13, 4, 0, // Skip to: 914
/* 910 */     MCD::OPC_Decode, 199, 1, 11, // Opcode: LDAWCP_u6
/* 914 */     MCD::OPC_Decode, 102, 14, // Opcode: BRBF_ru6
/* 917 */     MCD::OPC_FilterValue, 16, 41, 0, // Skip to: 962
/* 921 */     MCD::OPC_ExtractField, 4, 7,  // Inst{10-4} ...
/* 924 */     MCD::OPC_FilterValue, 126, 3, 0, // Skip to: 931
/* 928 */     MCD::OPC_Decode, 120, 1, // Opcode: CLRPT_1R
/* 931 */     MCD::OPC_FilterValue, 127, 4, 0, // Skip to: 939
/* 935 */     MCD::OPC_Decode, 166, 2, 1, // Opcode: SYNCR_1r
/* 939 */     MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 942 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 950
/* 946 */     MCD::OPC_Decode, 162, 1, 9, // Opcode: GETR_rus
/* 950 */     MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 958
/* 954 */     MCD::OPC_Decode, 167, 1, 2, // Opcode: INCT_2r
/* 958 */     MCD::OPC_Decode, 187, 1, 5, // Opcode: LD16S_3r
/* 962 */     MCD::OPC_FilterValue, 17, 23, 0, // Skip to: 989
/* 966 */     MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 969 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 977
/* 973 */     MCD::OPC_Decode, 237, 1, 2, // Opcode: NOT
/* 977 */     MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 985
/* 981 */     MCD::OPC_Decode, 175, 1, 2, // Opcode: INT_2r
/* 985 */     MCD::OPC_Decode, 188, 1, 5, // Opcode: LD8U_3r
/* 989 */     MCD::OPC_FilterValue, 18, 22, 0, // Skip to: 1015
/* 993 */     MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 996 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 1004
/* 1000 */    MCD::OPC_Decode, 236, 1, 2, // Opcode: NEG
/* 1004 */    MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 1012
/* 1008 */    MCD::OPC_Decode, 142, 1, 2, // Opcode: ENDIN_2r
/* 1012 */    MCD::OPC_Decode, 82, 3, // Opcode: ADD_2rus
/* 1015 */    MCD::OPC_FilterValue, 19, 4, 0, // Skip to: 1023
/* 1019 */    MCD::OPC_Decode, 164, 2, 3, // Opcode: SUB_2rus
/* 1023 */    MCD::OPC_FilterValue, 20, 23, 0, // Skip to: 1050
/* 1027 */    MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 1030 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 1038
/* 1034 */    MCD::OPC_Decode, 232, 1, 2, // Opcode: MKMSK_2r
/* 1038 */    MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 1046
/* 1042 */    MCD::OPC_Decode, 233, 1, 15, // Opcode: MKMSK_rus
/* 1046 */    MCD::OPC_Decode, 146, 2, 16, // Opcode: SHL_2rus
/* 1050 */    MCD::OPC_FilterValue, 21, 23, 0, // Skip to: 1077
/* 1054 */    MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 1057 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 1065
/* 1061 */    MCD::OPC_Decode, 244, 1, 4, // Opcode: OUT_2r
/* 1065 */    MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 1073
/* 1069 */    MCD::OPC_Decode, 242, 1, 7, // Opcode: OUTSHR_2r
/* 1073 */    MCD::OPC_Decode, 148, 2, 16, // Opcode: SHR_2rus
/* 1077 */    MCD::OPC_FilterValue, 22, 23, 0, // Skip to: 1104
/* 1081 */    MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 1084 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 1092
/* 1088 */    MCD::OPC_Decode, 176, 1, 2, // Opcode: IN_2r
/* 1092 */    MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 1100
/* 1096 */    MCD::OPC_Decode, 174, 1, 7, // Opcode: INSHR_2r
/* 1100 */    MCD::OPC_Decode, 145, 1, 3, // Opcode: EQ_2rus
/* 1104 */    MCD::OPC_FilterValue, 23, 23, 0, // Skip to: 1131
/* 1108 */    MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 1111 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 1119
/* 1115 */    MCD::OPC_Decode, 245, 1, 2, // Opcode: PEEK_2r
/* 1119 */    MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 1127
/* 1123 */    MCD::OPC_Decode, 167, 2, 2, // Opcode: TESTCT_2r
/* 1127 */    MCD::OPC_Decode, 171, 2, 17, // Opcode: TSETR_3r
/* 1131 */    MCD::OPC_FilterValue, 24, 23, 0, // Skip to: 1158
/* 1135 */    MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 1138 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 1146
/* 1142 */    MCD::OPC_Decode, 133, 2, 4, // Opcode: SETPSC_2r
/* 1146 */    MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 1154
/* 1150 */    MCD::OPC_Decode, 169, 2, 2, // Opcode: TESTWCT_2r
/* 1154 */    MCD::OPC_Decode, 226, 1, 5, // Opcode: LSS_3r
/* 1158 */    MCD::OPC_FilterValue, 25, 21, 0, // Skip to: 1183
/* 1162 */    MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 1165 */    MCD::OPC_FilterValue, 0, 3, 0, // Skip to: 1172
/* 1169 */    MCD::OPC_Decode, 117, 2, // Opcode: CHKCT_2r
/* 1172 */    MCD::OPC_FilterValue, 1, 3, 0, // Skip to: 1179
/* 1176 */    MCD::OPC_Decode, 118, 15, // Opcode: CHKCT_rus
/* 1179 */    MCD::OPC_Decode, 228, 1, 5, // Opcode: LSU_3r
/* 1183 */    MCD::OPC_FilterValue, 26, 17, 0, // Skip to: 1204
/* 1187 */    MCD::OPC_ExtractField, 10, 1,  // Inst{10} ...
/* 1190 */    MCD::OPC_FilterValue, 0, 3, 0, // Skip to: 1197
/* 1194 */    MCD::OPC_Decode, 100, 18, // Opcode: BLRF_u10
/* 1197 */    MCD::OPC_FilterValue, 1, 62, 0, // Skip to: 1263
/* 1201 */    MCD::OPC_Decode, 98, 19, // Opcode: BLRB_u10
/* 1204 */    MCD::OPC_FilterValue, 27, 19, 0, // Skip to: 1227
/* 1208 */    MCD::OPC_ExtractField, 10, 1,  // Inst{10} ...
/* 1211 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 1219
/* 1215 */    MCD::OPC_Decode, 195, 1, 18, // Opcode: LDAPF_u10
/* 1219 */    MCD::OPC_FilterValue, 1, 40, 0, // Skip to: 1263
/* 1223 */    MCD::OPC_Decode, 192, 1, 19, // Opcode: LDAPB_u10
/* 1227 */    MCD::OPC_FilterValue, 28, 18, 0, // Skip to: 1249
/* 1231 */    MCD::OPC_ExtractField, 10, 1,  // Inst{10} ...
/* 1234 */    MCD::OPC_FilterValue, 0, 3, 0, // Skip to: 1241
/* 1238 */    MCD::OPC_Decode, 93, 18, // Opcode: BLACP_u10
/* 1241 */    MCD::OPC_FilterValue, 1, 18, 0, // Skip to: 1263
/* 1245 */    MCD::OPC_Decode, 217, 1, 18, // Opcode: LDWCP_u10
/* 1249 */    MCD::OPC_FilterValue, 29, 10, 0, // Skip to: 1263
/* 1253 */    MCD::OPC_CheckField, 10, 1, 0, 4, 0, // Skip to: 1263
/* 1259 */    MCD::OPC_Decode, 255, 1, 12, // Opcode: SETC_ru6
/* 1263 */    MCD::OPC_Fail,
  0
};

static const uint8_t DecoderTable32[] = {
/* 0 */       MCD::OPC_ExtractField, 27, 5,  // Inst{31-27} ...
/* 3 */       MCD::OPC_FilterValue, 0, 90, 0, // Skip to: 97
/* 7 */       MCD::OPC_ExtractField, 11, 5,  // Inst{15-11} ...
/* 10 */      MCD::OPC_FilterValue, 31, 231, 3, // Skip to: 1013
/* 14 */      MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 17 */      MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 31
/* 21 */      MCD::OPC_CheckField, 16, 11, 236, 15, 17, 0, // Skip to: 45
/* 28 */      MCD::OPC_Decode, 91, 20, // Opcode: BITREV_l2r
/* 31 */      MCD::OPC_FilterValue, 1, 10, 0, // Skip to: 45
/* 35 */      MCD::OPC_CheckField, 16, 11, 236, 15, 3, 0, // Skip to: 45
/* 42 */      MCD::OPC_Decode, 116, 20, // Opcode: BYTEREV_l2r
/* 45 */      MCD::OPC_CheckField, 16, 11, 236, 15, 4, 0, // Skip to: 56
/* 52 */      MCD::OPC_Decode, 163, 2, 21, // Opcode: STW_l3r
/* 56 */      MCD::OPC_ExtractField, 20, 7,  // Inst{26-20} ...
/* 59 */      MCD::OPC_FilterValue, 126, 3, 0, // Skip to: 66
/* 63 */      MCD::OPC_Decode, 126, 22, // Opcode: CRC8_l4r
/* 66 */      MCD::OPC_FilterValue, 127, 4, 0, // Skip to: 74
/* 70 */      MCD::OPC_Decode, 230, 1, 23, // Opcode: MACCU_l4r
/* 74 */      MCD::OPC_ExtractField, 20, 1,  // Inst{20} ...
/* 77 */      MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 85
/* 81 */      MCD::OPC_Decode, 210, 1, 24, // Opcode: LDIVU_l5r
/* 85 */      MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 93
/* 89 */      MCD::OPC_Decode, 186, 1, 24, // Opcode: LADD_l5r
/* 93 */      MCD::OPC_Decode, 225, 1, 25, // Opcode: LMUL_l6r
/* 97 */      MCD::OPC_FilterValue, 1, 86, 0, // Skip to: 187
/* 101 */     MCD::OPC_ExtractField, 11, 5,  // Inst{15-11} ...
/* 104 */     MCD::OPC_FilterValue, 31, 137, 3, // Skip to: 1013
/* 108 */     MCD::OPC_ExtractField, 20, 1,  // Inst{20} ...
/* 111 */     MCD::OPC_FilterValue, 0, 130, 3, // Skip to: 1013
/* 115 */     MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 118 */     MCD::OPC_FilterValue, 0, 15, 0, // Skip to: 137
/* 122 */     MCD::OPC_CheckField, 21, 6, 63, 29, 0, // Skip to: 157
/* 128 */     MCD::OPC_CheckField, 16, 4, 12, 23, 0, // Skip to: 157
/* 134 */     MCD::OPC_Decode, 125, 20, // Opcode: CLZ_l2r
/* 137 */     MCD::OPC_FilterValue, 1, 16, 0, // Skip to: 157
/* 141 */     MCD::OPC_CheckField, 21, 6, 63, 10, 0, // Skip to: 157
/* 147 */     MCD::OPC_CheckField, 16, 4, 12, 4, 0, // Skip to: 157
/* 153 */     MCD::OPC_Decode, 251, 1, 26, // Opcode: SETCLK_l2r
/* 157 */     MCD::OPC_CheckField, 21, 6, 63, 10, 0, // Skip to: 173
/* 163 */     MCD::OPC_CheckField, 16, 4, 12, 4, 0, // Skip to: 173
/* 169 */     MCD::OPC_Decode, 176, 2, 21, // Opcode: XOR_l3r
/* 173 */     MCD::OPC_CheckField, 21, 6, 63, 4, 0, // Skip to: 183
/* 179 */     MCD::OPC_Decode, 229, 1, 23, // Opcode: MACCS_l4r
/* 183 */     MCD::OPC_Decode, 227, 1, 24, // Opcode: LSUB_l5r
/* 187 */     MCD::OPC_FilterValue, 2, 31, 0, // Skip to: 222
/* 191 */     MCD::OPC_ExtractField, 11, 16,  // Inst{26-11} ...
/* 194 */     MCD::OPC_FilterValue, 159, 251, 3, 45, 3, // Skip to: 1013
/* 200 */     MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 203 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 211
/* 207 */     MCD::OPC_Decode, 170, 1, 20, // Opcode: INITLR_l2r
/* 211 */     MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 219
/* 215 */     MCD::OPC_Decode, 161, 1, 20, // Opcode: GETPS_l2r
/* 219 */     MCD::OPC_Decode, 89, 21, // Opcode: ASHR_l3r
/* 222 */     MCD::OPC_FilterValue, 3, 32, 0, // Skip to: 258
/* 226 */     MCD::OPC_ExtractField, 11, 16,  // Inst{26-11} ...
/* 229 */     MCD::OPC_FilterValue, 159, 251, 3, 10, 3, // Skip to: 1013
/* 235 */     MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 238 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 246
/* 242 */     MCD::OPC_Decode, 134, 2, 26, // Opcode: SETPS_l2r
/* 246 */     MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 254
/* 250 */     MCD::OPC_Decode, 154, 1, 20, // Opcode: GETD_l2r
/* 254 */     MCD::OPC_Decode, 204, 1, 21, // Opcode: LDAWF_l3r
/* 258 */     MCD::OPC_FilterValue, 4, 32, 0, // Skip to: 294
/* 262 */     MCD::OPC_ExtractField, 11, 16,  // Inst{26-11} ...
/* 265 */     MCD::OPC_FilterValue, 159, 251, 3, 230, 2, // Skip to: 1013
/* 271 */     MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 274 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 282
/* 278 */     MCD::OPC_Decode, 168, 2, 20, // Opcode: TESTLCL_l2r
/* 282 */     MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 290
/* 286 */     MCD::OPC_Decode, 142, 2, 26, // Opcode: SETTW_l2r
/* 290 */     MCD::OPC_Decode, 197, 1, 21, // Opcode: LDAWB_l3r
/* 294 */     MCD::OPC_FilterValue, 5, 32, 0, // Skip to: 330
/* 298 */     MCD::OPC_ExtractField, 11, 16,  // Inst{26-11} ...
/* 301 */     MCD::OPC_FilterValue, 159, 251, 3, 194, 2, // Skip to: 1013
/* 307 */     MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 310 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 318
/* 314 */     MCD::OPC_Decode, 136, 2, 26, // Opcode: SETRDY_l2r
/* 318 */     MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 326
/* 322 */     MCD::OPC_Decode, 253, 1, 20, // Opcode: SETC_l2r
/* 326 */     MCD::OPC_Decode, 190, 1, 21, // Opcode: LDA16F_l3r
/* 330 */     MCD::OPC_FilterValue, 6, 32, 0, // Skip to: 366
/* 334 */     MCD::OPC_ExtractField, 11, 16,  // Inst{26-11} ...
/* 337 */     MCD::OPC_FilterValue, 159, 251, 3, 158, 2, // Skip to: 1013
/* 343 */     MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 346 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 354
/* 350 */     MCD::OPC_Decode, 132, 2, 26, // Opcode: SETN_l2r
/* 354 */     MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 362
/* 358 */     MCD::OPC_Decode, 160, 1, 20, // Opcode: GETN_l2r
/* 362 */     MCD::OPC_Decode, 189, 1, 21, // Opcode: LDA16B_l3r
/* 366 */     MCD::OPC_FilterValue, 7, 12, 0, // Skip to: 382
/* 370 */     MCD::OPC_CheckField, 11, 16, 159, 251, 3, 123, 2, // Skip to: 1013
/* 378 */     MCD::OPC_Decode, 235, 1, 21, // Opcode: MUL_l3r
/* 382 */     MCD::OPC_FilterValue, 8, 12, 0, // Skip to: 398
/* 386 */     MCD::OPC_CheckField, 11, 16, 159, 251, 3, 107, 2, // Skip to: 1013
/* 394 */     MCD::OPC_Decode, 131, 1, 21, // Opcode: DIVS_l3r
/* 398 */     MCD::OPC_FilterValue, 9, 12, 0, // Skip to: 414
/* 402 */     MCD::OPC_CheckField, 11, 16, 159, 251, 3, 91, 2, // Skip to: 1013
/* 410 */     MCD::OPC_Decode, 132, 1, 21, // Opcode: DIVU_l3r
/* 414 */     MCD::OPC_FilterValue, 10, 31, 0, // Skip to: 449
/* 418 */     MCD::OPC_ExtractField, 26, 1,  // Inst{26} ...
/* 421 */     MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 435
/* 425 */     MCD::OPC_CheckField, 10, 6, 60, 70, 2, // Skip to: 1013
/* 431 */     MCD::OPC_Decode, 157, 2, 27, // Opcode: STWDP_lru6
/* 435 */     MCD::OPC_FilterValue, 1, 62, 2, // Skip to: 1013
/* 439 */     MCD::OPC_CheckField, 10, 6, 60, 56, 2, // Skip to: 1013
/* 445 */     MCD::OPC_Decode, 160, 2, 27, // Opcode: STWSP_lru6
/* 449 */     MCD::OPC_FilterValue, 11, 31, 0, // Skip to: 484
/* 453 */     MCD::OPC_ExtractField, 26, 1,  // Inst{26} ...
/* 456 */     MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 470
/* 460 */     MCD::OPC_CheckField, 10, 6, 60, 35, 2, // Skip to: 1013
/* 466 */     MCD::OPC_Decode, 218, 1, 27, // Opcode: LDWDP_lru6
/* 470 */     MCD::OPC_FilterValue, 1, 27, 2, // Skip to: 1013
/* 474 */     MCD::OPC_CheckField, 10, 6, 60, 21, 2, // Skip to: 1013
/* 480 */     MCD::OPC_Decode, 221, 1, 27, // Opcode: LDWSP_lru6
/* 484 */     MCD::OPC_FilterValue, 12, 31, 0, // Skip to: 519
/* 488 */     MCD::OPC_ExtractField, 26, 1,  // Inst{26} ...
/* 491 */     MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 505
/* 495 */     MCD::OPC_CheckField, 10, 6, 60, 0, 2, // Skip to: 1013
/* 501 */     MCD::OPC_Decode, 200, 1, 27, // Opcode: LDAWDP_lru6
/* 505 */     MCD::OPC_FilterValue, 1, 248, 1, // Skip to: 1013
/* 509 */     MCD::OPC_CheckField, 10, 6, 60, 242, 1, // Skip to: 1013
/* 515 */     MCD::OPC_Decode, 205, 1, 27, // Opcode: LDAWSP_lru6
/* 519 */     MCD::OPC_FilterValue, 13, 31, 0, // Skip to: 554
/* 523 */     MCD::OPC_ExtractField, 26, 1,  // Inst{26} ...
/* 526 */     MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 540
/* 530 */     MCD::OPC_CheckField, 10, 6, 60, 221, 1, // Skip to: 1013
/* 536 */     MCD::OPC_Decode, 207, 1, 27, // Opcode: LDC_lru6
/* 540 */     MCD::OPC_FilterValue, 1, 213, 1, // Skip to: 1013
/* 544 */     MCD::OPC_CheckField, 10, 6, 60, 207, 1, // Skip to: 1013
/* 550 */     MCD::OPC_Decode, 214, 1, 27, // Opcode: LDWCP_lru6
/* 554 */     MCD::OPC_FilterValue, 14, 98, 0, // Skip to: 656
/* 558 */     MCD::OPC_ExtractField, 26, 1,  // Inst{26} ...
/* 561 */     MCD::OPC_FilterValue, 0, 43, 0, // Skip to: 608
/* 565 */     MCD::OPC_ExtractField, 10, 6,  // Inst{15-10} ...
/* 568 */     MCD::OPC_FilterValue, 60, 185, 1, // Skip to: 1013
/* 572 */     MCD::OPC_ExtractField, 22, 4,  // Inst{25-22} ...
/* 575 */     MCD::OPC_FilterValue, 12, 3, 0, // Skip to: 582
/* 579 */     MCD::OPC_Decode, 111, 28, // Opcode: BRFU_lu6
/* 582 */     MCD::OPC_FilterValue, 13, 3, 0, // Skip to: 589
/* 586 */     MCD::OPC_Decode, 94, 28, // Opcode: BLAT_lu6
/* 589 */     MCD::OPC_FilterValue, 14, 4, 0, // Skip to: 597
/* 593 */     MCD::OPC_Decode, 147, 1, 28, // Opcode: EXTDP_lu6
/* 597 */     MCD::OPC_FilterValue, 15, 4, 0, // Skip to: 605
/* 601 */     MCD::OPC_Decode, 179, 1, 28, // Opcode: KCALL_lu6
/* 605 */     MCD::OPC_Decode, 109, 29, // Opcode: BRFT_lru6
/* 608 */     MCD::OPC_FilterValue, 1, 145, 1, // Skip to: 1013
/* 612 */     MCD::OPC_ExtractField, 10, 6,  // Inst{15-10} ...
/* 615 */     MCD::OPC_FilterValue, 60, 138, 1, // Skip to: 1013
/* 619 */     MCD::OPC_ExtractField, 22, 4,  // Inst{25-22} ...
/* 622 */     MCD::OPC_FilterValue, 12, 3, 0, // Skip to: 629
/* 626 */     MCD::OPC_Decode, 105, 30, // Opcode: BRBU_lu6
/* 629 */     MCD::OPC_FilterValue, 13, 4, 0, // Skip to: 637
/* 633 */     MCD::OPC_Decode, 143, 1, 28, // Opcode: ENTSP_lu6
/* 637 */     MCD::OPC_FilterValue, 14, 4, 0, // Skip to: 645
/* 641 */     MCD::OPC_Decode, 149, 1, 28, // Opcode: EXTSP_lu6
/* 645 */     MCD::OPC_FilterValue, 15, 4, 0, // Skip to: 653
/* 649 */     MCD::OPC_Decode, 248, 1, 28, // Opcode: RETSP_lu6
/* 653 */     MCD::OPC_Decode, 103, 31, // Opcode: BRBT_lru6
/* 656 */     MCD::OPC_FilterValue, 15, 84, 0, // Skip to: 744
/* 660 */     MCD::OPC_ExtractField, 26, 1,  // Inst{26} ...
/* 663 */     MCD::OPC_FilterValue, 0, 44, 0, // Skip to: 711
/* 667 */     MCD::OPC_ExtractField, 10, 6,  // Inst{15-10} ...
/* 670 */     MCD::OPC_FilterValue, 60, 83, 1, // Skip to: 1013
/* 674 */     MCD::OPC_ExtractField, 22, 4,  // Inst{25-22} ...
/* 677 */     MCD::OPC_FilterValue, 12, 3, 0, // Skip to: 684
/* 681 */     MCD::OPC_Decode, 123, 28, // Opcode: CLRSR_lu6
/* 684 */     MCD::OPC_FilterValue, 13, 4, 0, // Skip to: 692
/* 688 */     MCD::OPC_Decode, 140, 2, 28, // Opcode: SETSR_lu6
/* 692 */     MCD::OPC_FilterValue, 14, 4, 0, // Skip to: 700
/* 696 */     MCD::OPC_Decode, 181, 1, 28, // Opcode: KENTSP_lu6
/* 700 */     MCD::OPC_FilterValue, 15, 4, 0, // Skip to: 708
/* 704 */     MCD::OPC_Decode, 183, 1, 28, // Opcode: KRESTSP_lu6
/* 708 */     MCD::OPC_Decode, 107, 29, // Opcode: BRFF_lru6
/* 711 */     MCD::OPC_FilterValue, 1, 42, 1, // Skip to: 1013
/* 715 */     MCD::OPC_ExtractField, 10, 6,  // Inst{15-10} ...
/* 718 */     MCD::OPC_FilterValue, 60, 35, 1, // Skip to: 1013
/* 722 */     MCD::OPC_ExtractField, 22, 4,  // Inst{25-22} ...
/* 725 */     MCD::OPC_FilterValue, 12, 4, 0, // Skip to: 733
/* 729 */     MCD::OPC_Decode, 163, 1, 28, // Opcode: GETSR_lu6
/* 733 */     MCD::OPC_FilterValue, 13, 4, 0, // Skip to: 741
/* 737 */     MCD::OPC_Decode, 198, 1, 28, // Opcode: LDAWCP_lu6
/* 741 */     MCD::OPC_Decode, 101, 31, // Opcode: BRBF_lru6
/* 744 */     MCD::OPC_FilterValue, 16, 12, 0, // Skip to: 760
/* 748 */     MCD::OPC_CheckField, 11, 16, 159, 251, 3, 1, 1, // Skip to: 1013
/* 756 */     MCD::OPC_Decode, 151, 2, 21, // Opcode: ST16_l3r
/* 760 */     MCD::OPC_FilterValue, 17, 12, 0, // Skip to: 776
/* 764 */     MCD::OPC_CheckField, 11, 16, 159, 251, 3, 241, 0, // Skip to: 1013
/* 772 */     MCD::OPC_Decode, 152, 2, 21, // Opcode: ST8_l3r
/* 776 */     MCD::OPC_FilterValue, 18, 32, 0, // Skip to: 812
/* 780 */     MCD::OPC_ExtractField, 11, 16,  // Inst{26-11} ...
/* 783 */     MCD::OPC_FilterValue, 159, 251, 3, 3, 0, // Skip to: 792
/* 789 */     MCD::OPC_Decode, 88, 32, // Opcode: ASHR_l2rus
/* 792 */     MCD::OPC_FilterValue, 191, 251, 3, 4, 0, // Skip to: 802
/* 798 */     MCD::OPC_Decode, 241, 1, 32, // Opcode: OUTPW_l2rus
/* 802 */     MCD::OPC_FilterValue, 223, 251, 3, 205, 0, // Skip to: 1013
/* 808 */     MCD::OPC_Decode, 173, 1, 32, // Opcode: INPW_l2rus
/* 812 */     MCD::OPC_FilterValue, 19, 12, 0, // Skip to: 828
/* 816 */     MCD::OPC_CheckField, 11, 16, 159, 251, 3, 189, 0, // Skip to: 1013
/* 824 */     MCD::OPC_Decode, 203, 1, 33, // Opcode: LDAWF_l2rus
/* 828 */     MCD::OPC_FilterValue, 20, 12, 0, // Skip to: 844
/* 832 */     MCD::OPC_CheckField, 11, 16, 159, 251, 3, 173, 0, // Skip to: 1013
/* 840 */     MCD::OPC_Decode, 196, 1, 33, // Opcode: LDAWB_l2rus
/* 844 */     MCD::OPC_FilterValue, 21, 11, 0, // Skip to: 859
/* 848 */     MCD::OPC_CheckField, 11, 16, 159, 251, 3, 157, 0, // Skip to: 1013
/* 856 */     MCD::OPC_Decode, 127, 34, // Opcode: CRC_l3r
/* 859 */     MCD::OPC_FilterValue, 24, 12, 0, // Skip to: 875
/* 863 */     MCD::OPC_CheckField, 11, 16, 159, 251, 3, 142, 0, // Skip to: 1013
/* 871 */     MCD::OPC_Decode, 246, 1, 21, // Opcode: REMS_l3r
/* 875 */     MCD::OPC_FilterValue, 25, 12, 0, // Skip to: 891
/* 879 */     MCD::OPC_CheckField, 11, 16, 159, 251, 3, 126, 0, // Skip to: 1013
/* 887 */     MCD::OPC_Decode, 247, 1, 21, // Opcode: REMU_l3r
/* 891 */     MCD::OPC_FilterValue, 26, 29, 0, // Skip to: 924
/* 895 */     MCD::OPC_ExtractField, 26, 1,  // Inst{26} ...
/* 898 */     MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 911
/* 902 */     MCD::OPC_CheckField, 10, 6, 60, 105, 0, // Skip to: 1013
/* 908 */     MCD::OPC_Decode, 99, 35, // Opcode: BLRF_lu10
/* 911 */     MCD::OPC_FilterValue, 1, 98, 0, // Skip to: 1013
/* 915 */     MCD::OPC_CheckField, 10, 6, 60, 92, 0, // Skip to: 1013
/* 921 */     MCD::OPC_Decode, 97, 36, // Opcode: BLRB_lu10
/* 924 */     MCD::OPC_FilterValue, 27, 31, 0, // Skip to: 959
/* 928 */     MCD::OPC_ExtractField, 26, 1,  // Inst{26} ...
/* 931 */     MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 945
/* 935 */     MCD::OPC_CheckField, 10, 6, 60, 72, 0, // Skip to: 1013
/* 941 */     MCD::OPC_Decode, 193, 1, 35, // Opcode: LDAPF_lu10
/* 945 */     MCD::OPC_FilterValue, 1, 64, 0, // Skip to: 1013
/* 949 */     MCD::OPC_CheckField, 10, 6, 60, 58, 0, // Skip to: 1013
/* 955 */     MCD::OPC_Decode, 191, 1, 36, // Opcode: LDAPB_lu10
/* 959 */     MCD::OPC_FilterValue, 28, 30, 0, // Skip to: 993
/* 963 */     MCD::OPC_ExtractField, 26, 1,  // Inst{26} ...
/* 966 */     MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 979
/* 970 */     MCD::OPC_CheckField, 10, 6, 60, 37, 0, // Skip to: 1013
/* 976 */     MCD::OPC_Decode, 92, 35, // Opcode: BLACP_lu10
/* 979 */     MCD::OPC_FilterValue, 1, 30, 0, // Skip to: 1013
/* 983 */     MCD::OPC_CheckField, 10, 6, 60, 24, 0, // Skip to: 1013
/* 989 */     MCD::OPC_Decode, 215, 1, 35, // Opcode: LDWCP_lu10
/* 993 */     MCD::OPC_FilterValue, 29, 16, 0, // Skip to: 1013
/* 997 */     MCD::OPC_CheckField, 26, 1, 0, 10, 0, // Skip to: 1013
/* 1003 */    MCD::OPC_CheckField, 10, 6, 60, 4, 0, // Skip to: 1013
/* 1009 */    MCD::OPC_Decode, 254, 1, 29, // Opcode: SETC_lru6
/* 1013 */    MCD::OPC_Fail,
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
