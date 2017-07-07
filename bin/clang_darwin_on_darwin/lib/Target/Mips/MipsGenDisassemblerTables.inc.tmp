/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|*  * Mips Disassembler                                                       *|
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
/* 3 */       MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 15
/* 7 */       MCD::OPC_CheckPredicate, 0, 245, 1, // Skip to: 512
/* 11 */      MCD::OPC_Decode, 251, 3, 0, // Opcode: Bimm16
/* 15 */      MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 27
/* 19 */      MCD::OPC_CheckPredicate, 0, 233, 1, // Skip to: 512
/* 23 */      MCD::OPC_Decode, 249, 3, 1, // Opcode: BeqzRxImm16
/* 27 */      MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 39
/* 31 */      MCD::OPC_CheckPredicate, 0, 221, 1, // Skip to: 512
/* 35 */      MCD::OPC_Decode, 254, 3, 1, // Opcode: BnezRxImm16
/* 39 */      MCD::OPC_FilterValue, 9, 8, 0, // Skip to: 51
/* 43 */      MCD::OPC_CheckPredicate, 0, 209, 1, // Skip to: 512
/* 47 */      MCD::OPC_Decode, 139, 2, 2, // Opcode: AddiuRxRxImm16
/* 51 */      MCD::OPC_FilterValue, 10, 8, 0, // Skip to: 63
/* 55 */      MCD::OPC_CheckPredicate, 0, 197, 1, // Skip to: 512
/* 59 */      MCD::OPC_Decode, 245, 18, 1, // Opcode: SltiRxImm16
/* 63 */      MCD::OPC_FilterValue, 11, 8, 0, // Skip to: 75
/* 67 */      MCD::OPC_CheckPredicate, 0, 185, 1, // Skip to: 512
/* 71 */      MCD::OPC_Decode, 248, 18, 1, // Opcode: SltiuRxImm16
/* 75 */      MCD::OPC_FilterValue, 12, 63, 0, // Skip to: 142
/* 79 */      MCD::OPC_ExtractField, 8, 3,  // Inst{10-8} ...
/* 82 */      MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 94
/* 86 */      MCD::OPC_CheckPredicate, 0, 166, 1, // Skip to: 512
/* 90 */      MCD::OPC_Decode, 129, 4, 0, // Opcode: Bteqz16
/* 94 */      MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 106
/* 98 */      MCD::OPC_CheckPredicate, 0, 154, 1, // Skip to: 512
/* 102 */     MCD::OPC_Decode, 137, 4, 0, // Opcode: Btnez16
/* 106 */     MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 118
/* 110 */     MCD::OPC_CheckPredicate, 0, 142, 1, // Skip to: 512
/* 114 */     MCD::OPC_Decode, 142, 2, 0, // Opcode: AddiuSpImm16
/* 118 */     MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 130
/* 122 */     MCD::OPC_CheckPredicate, 0, 130, 1, // Skip to: 512
/* 126 */     MCD::OPC_Decode, 142, 14, 3, // Opcode: Move32R16
/* 130 */     MCD::OPC_FilterValue, 7, 122, 1, // Skip to: 512
/* 134 */     MCD::OPC_CheckPredicate, 0, 118, 1, // Skip to: 512
/* 138 */     MCD::OPC_Decode, 143, 14, 4, // Opcode: MoveR3216
/* 142 */     MCD::OPC_FilterValue, 13, 8, 0, // Skip to: 154
/* 146 */     MCD::OPC_CheckPredicate, 0, 106, 1, // Skip to: 512
/* 150 */     MCD::OPC_Decode, 216, 11, 1, // Opcode: LiRxImm16
/* 154 */     MCD::OPC_FilterValue, 14, 8, 0, // Skip to: 166
/* 158 */     MCD::OPC_CheckPredicate, 0, 94, 1, // Skip to: 512
/* 162 */     MCD::OPC_Decode, 200, 6, 1, // Opcode: CmpiRxImm16
/* 166 */     MCD::OPC_FilterValue, 22, 8, 0, // Skip to: 178
/* 170 */     MCD::OPC_CheckPredicate, 0, 82, 1, // Skip to: 512
/* 174 */     MCD::OPC_Decode, 231, 11, 1, // Opcode: LwRxPcTcp16
/* 178 */     MCD::OPC_FilterValue, 28, 27, 0, // Skip to: 209
/* 182 */     MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 185 */     MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 197
/* 189 */     MCD::OPC_CheckPredicate, 0, 63, 1, // Skip to: 512
/* 193 */     MCD::OPC_Decode, 144, 2, 5, // Opcode: AdduRxRyRz16
/* 197 */     MCD::OPC_FilterValue, 3, 55, 1, // Skip to: 512
/* 201 */     MCD::OPC_CheckPredicate, 0, 51, 1, // Skip to: 512
/* 205 */     MCD::OPC_Decode, 129, 19, 5, // Opcode: SubuRxRyRz16
/* 209 */     MCD::OPC_FilterValue, 29, 43, 1, // Skip to: 512
/* 213 */     MCD::OPC_ExtractField, 0, 5,  // Inst{4-0} ...
/* 216 */     MCD::OPC_FilterValue, 0, 63, 0, // Skip to: 283
/* 220 */     MCD::OPC_ExtractField, 5, 3,  // Inst{7-5} ...
/* 223 */     MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 235
/* 227 */     MCD::OPC_CheckPredicate, 0, 25, 1, // Skip to: 512
/* 231 */     MCD::OPC_Decode, 206, 10, 0, // Opcode: JumpLinkReg16
/* 235 */     MCD::OPC_FilterValue, 1, 14, 0, // Skip to: 253
/* 239 */     MCD::OPC_CheckPredicate, 0, 13, 1, // Skip to: 512
/* 243 */     MCD::OPC_CheckField, 8, 3, 0, 7, 1, // Skip to: 512
/* 249 */     MCD::OPC_Decode, 203, 10, 0, // Opcode: JrRa16
/* 253 */     MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 265
/* 257 */     MCD::OPC_CheckPredicate, 0, 251, 0, // Skip to: 512
/* 261 */     MCD::OPC_Decode, 205, 10, 1, // Opcode: JrcRx16
/* 265 */     MCD::OPC_FilterValue, 7, 243, 0, // Skip to: 512
/* 269 */     MCD::OPC_CheckPredicate, 0, 239, 0, // Skip to: 512
/* 273 */     MCD::OPC_CheckField, 8, 3, 0, 233, 0, // Skip to: 512
/* 279 */     MCD::OPC_Decode, 204, 10, 0, // Opcode: JrcRa16
/* 283 */     MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 295
/* 287 */     MCD::OPC_CheckPredicate, 0, 221, 0, // Skip to: 512
/* 291 */     MCD::OPC_Decode, 243, 18, 6, // Opcode: SltRxRy16
/* 295 */     MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 307
/* 299 */     MCD::OPC_CheckPredicate, 0, 209, 0, // Skip to: 512
/* 303 */     MCD::OPC_Decode, 251, 18, 6, // Opcode: SltuRxRy16
/* 307 */     MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 319
/* 311 */     MCD::OPC_CheckPredicate, 0, 197, 0, // Skip to: 512
/* 315 */     MCD::OPC_Decode, 241, 18, 7, // Opcode: SllvRxRy16
/* 319 */     MCD::OPC_FilterValue, 5, 14, 0, // Skip to: 337
/* 323 */     MCD::OPC_CheckPredicate, 0, 185, 0, // Skip to: 512
/* 327 */     MCD::OPC_CheckField, 5, 6, 0, 179, 0, // Skip to: 512
/* 333 */     MCD::OPC_Decode, 128, 4, 0, // Opcode: Break16
/* 337 */     MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 349
/* 341 */     MCD::OPC_CheckPredicate, 0, 167, 0, // Skip to: 512
/* 345 */     MCD::OPC_Decode, 128, 19, 7, // Opcode: SrlvRxRy16
/* 349 */     MCD::OPC_FilterValue, 7, 8, 0, // Skip to: 361
/* 353 */     MCD::OPC_CheckPredicate, 0, 155, 0, // Skip to: 512
/* 357 */     MCD::OPC_Decode, 254, 18, 7, // Opcode: SravRxRy16
/* 361 */     MCD::OPC_FilterValue, 10, 8, 0, // Skip to: 373
/* 365 */     MCD::OPC_CheckPredicate, 0, 143, 0, // Skip to: 512
/* 369 */     MCD::OPC_Decode, 199, 6, 6, // Opcode: CmpRxRy16
/* 373 */     MCD::OPC_FilterValue, 12, 8, 0, // Skip to: 385
/* 377 */     MCD::OPC_CheckPredicate, 0, 131, 0, // Skip to: 512
/* 381 */     MCD::OPC_Decode, 145, 2, 7, // Opcode: AndRxRxRy16
/* 385 */     MCD::OPC_FilterValue, 13, 8, 0, // Skip to: 397
/* 389 */     MCD::OPC_CheckPredicate, 0, 119, 0, // Skip to: 512
/* 393 */     MCD::OPC_Decode, 197, 14, 7, // Opcode: OrRxRxRy16
/* 397 */     MCD::OPC_FilterValue, 14, 8, 0, // Skip to: 409
/* 401 */     MCD::OPC_CheckPredicate, 0, 107, 0, // Skip to: 512
/* 405 */     MCD::OPC_Decode, 226, 19, 7, // Opcode: XorRxRxRy16
/* 409 */     MCD::OPC_FilterValue, 15, 8, 0, // Skip to: 421
/* 413 */     MCD::OPC_CheckPredicate, 0, 95, 0, // Skip to: 512
/* 417 */     MCD::OPC_Decode, 181, 14, 6, // Opcode: NotRxRy16
/* 421 */     MCD::OPC_FilterValue, 16, 8, 0, // Skip to: 433
/* 425 */     MCD::OPC_CheckPredicate, 0, 83, 0, // Skip to: 512
/* 429 */     MCD::OPC_Decode, 140, 14, 1, // Opcode: Mfhi16
/* 433 */     MCD::OPC_FilterValue, 17, 27, 0, // Skip to: 464
/* 437 */     MCD::OPC_ExtractField, 5, 3,  // Inst{7-5} ...
/* 440 */     MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 452
/* 444 */     MCD::OPC_CheckPredicate, 0, 64, 0, // Skip to: 512
/* 448 */     MCD::OPC_Decode, 223, 18, 2, // Opcode: SebRx16
/* 452 */     MCD::OPC_FilterValue, 5, 56, 0, // Skip to: 512
/* 456 */     MCD::OPC_CheckPredicate, 0, 52, 0, // Skip to: 512
/* 460 */     MCD::OPC_Decode, 224, 18, 2, // Opcode: SehRx16
/* 464 */     MCD::OPC_FilterValue, 18, 8, 0, // Skip to: 476
/* 468 */     MCD::OPC_CheckPredicate, 0, 40, 0, // Skip to: 512
/* 472 */     MCD::OPC_Decode, 141, 14, 1, // Opcode: Mflo16
/* 476 */     MCD::OPC_FilterValue, 26, 8, 0, // Skip to: 488
/* 480 */     MCD::OPC_CheckPredicate, 0, 28, 0, // Skip to: 512
/* 484 */     MCD::OPC_Decode, 137, 8, 6, // Opcode: DivRxRy16
/* 488 */     MCD::OPC_FilterValue, 27, 8, 0, // Skip to: 500
/* 492 */     MCD::OPC_CheckPredicate, 0, 16, 0, // Skip to: 512
/* 496 */     MCD::OPC_Decode, 138, 8, 6, // Opcode: DivuRxRy16
/* 500 */     MCD::OPC_FilterValue, 29, 8, 0, // Skip to: 512
/* 504 */     MCD::OPC_CheckPredicate, 0, 4, 0, // Skip to: 512
/* 508 */     MCD::OPC_Decode, 180, 14, 6, // Opcode: NegRxRy16
/* 512 */     MCD::OPC_Fail,
  0
};

static const uint8_t DecoderTable32[] = {
/* 0 */       MCD::OPC_ExtractField, 11, 5,  // Inst{15-11} ...
/* 3 */       MCD::OPC_FilterValue, 1, 20, 0, // Skip to: 27
/* 7 */       MCD::OPC_CheckPredicate, 0, 186, 1, // Skip to: 453
/* 11 */      MCD::OPC_CheckField, 27, 5, 30, 180, 1, // Skip to: 453
/* 17 */      MCD::OPC_CheckField, 5, 3, 0, 174, 1, // Skip to: 453
/* 23 */      MCD::OPC_Decode, 138, 2, 1, // Opcode: AddiuRxPcImmX16
/* 27 */      MCD::OPC_FilterValue, 2, 20, 0, // Skip to: 51
/* 31 */      MCD::OPC_CheckPredicate, 0, 162, 1, // Skip to: 453
/* 35 */      MCD::OPC_CheckField, 27, 5, 30, 156, 1, // Skip to: 453
/* 41 */      MCD::OPC_CheckField, 5, 6, 0, 150, 1, // Skip to: 453
/* 47 */      MCD::OPC_Decode, 252, 3, 8, // Opcode: BimmX16
/* 51 */      MCD::OPC_FilterValue, 4, 20, 0, // Skip to: 75
/* 55 */      MCD::OPC_CheckPredicate, 0, 138, 1, // Skip to: 453
/* 59 */      MCD::OPC_CheckField, 27, 5, 30, 132, 1, // Skip to: 453
/* 65 */      MCD::OPC_CheckField, 5, 3, 0, 126, 1, // Skip to: 453
/* 71 */      MCD::OPC_Decode, 250, 3, 1, // Opcode: BeqzRxImmX16
/* 75 */      MCD::OPC_FilterValue, 5, 20, 0, // Skip to: 99
/* 79 */      MCD::OPC_CheckPredicate, 0, 114, 1, // Skip to: 453
/* 83 */      MCD::OPC_CheckField, 27, 5, 30, 108, 1, // Skip to: 453
/* 89 */      MCD::OPC_CheckField, 5, 3, 0, 102, 1, // Skip to: 453
/* 95 */      MCD::OPC_Decode, 255, 3, 1, // Opcode: BnezRxImmX16
/* 99 */      MCD::OPC_FilterValue, 6, 92, 0, // Skip to: 195
/* 103 */     MCD::OPC_ExtractField, 27, 5,  // Inst{31-27} ...
/* 106 */     MCD::OPC_FilterValue, 30, 87, 1, // Skip to: 453
/* 110 */     MCD::OPC_ExtractField, 16, 5,  // Inst{20-16} ...
/* 113 */     MCD::OPC_FilterValue, 0, 39, 0, // Skip to: 156
/* 117 */     MCD::OPC_ExtractField, 0, 5,  // Inst{4-0} ...
/* 120 */     MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 132
/* 124 */     MCD::OPC_CheckPredicate, 0, 28, 0, // Skip to: 156
/* 128 */     MCD::OPC_Decode, 240, 18, 6, // Opcode: SllX16
/* 132 */     MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 144
/* 136 */     MCD::OPC_CheckPredicate, 0, 16, 0, // Skip to: 156
/* 140 */     MCD::OPC_Decode, 255, 18, 6, // Opcode: SrlX16
/* 144 */     MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 156
/* 148 */     MCD::OPC_CheckPredicate, 0, 4, 0, // Skip to: 156
/* 152 */     MCD::OPC_Decode, 253, 18, 6, // Opcode: SraX16
/* 156 */     MCD::OPC_ExtractField, 5, 6,  // Inst{10-5} ...
/* 159 */     MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 171
/* 163 */     MCD::OPC_CheckPredicate, 0, 30, 1, // Skip to: 453
/* 167 */     MCD::OPC_Decode, 136, 4, 0, // Opcode: BteqzX16
/* 171 */     MCD::OPC_FilterValue, 8, 8, 0, // Skip to: 183
/* 175 */     MCD::OPC_CheckPredicate, 0, 18, 1, // Skip to: 453
/* 179 */     MCD::OPC_Decode, 144, 4, 0, // Opcode: BtnezX16
/* 183 */     MCD::OPC_FilterValue, 24, 10, 1, // Skip to: 453
/* 187 */     MCD::OPC_CheckPredicate, 0, 6, 1, // Skip to: 453
/* 191 */     MCD::OPC_Decode, 143, 2, 0, // Opcode: AddiuSpImmX16
/* 195 */     MCD::OPC_FilterValue, 8, 20, 0, // Skip to: 219
/* 199 */     MCD::OPC_CheckPredicate, 0, 250, 0, // Skip to: 453
/* 203 */     MCD::OPC_CheckField, 27, 5, 30, 244, 0, // Skip to: 453
/* 209 */     MCD::OPC_CheckField, 4, 1, 0, 238, 0, // Skip to: 453
/* 215 */     MCD::OPC_Decode, 141, 2, 9, // Opcode: AddiuRxRyOffMemX16
/* 219 */     MCD::OPC_FilterValue, 9, 20, 0, // Skip to: 243
/* 223 */     MCD::OPC_CheckPredicate, 0, 226, 0, // Skip to: 453
/* 227 */     MCD::OPC_CheckField, 27, 5, 30, 220, 0, // Skip to: 453
/* 233 */     MCD::OPC_CheckField, 5, 3, 0, 214, 0, // Skip to: 453
/* 239 */     MCD::OPC_Decode, 137, 2, 1, // Opcode: AddiuRxImmX16
/* 243 */     MCD::OPC_FilterValue, 10, 20, 0, // Skip to: 267
/* 247 */     MCD::OPC_CheckPredicate, 0, 202, 0, // Skip to: 453
/* 251 */     MCD::OPC_CheckField, 27, 5, 30, 196, 0, // Skip to: 453
/* 257 */     MCD::OPC_CheckField, 5, 3, 0, 190, 0, // Skip to: 453
/* 263 */     MCD::OPC_Decode, 246, 18, 1, // Opcode: SltiRxImmX16
/* 267 */     MCD::OPC_FilterValue, 11, 20, 0, // Skip to: 291
/* 271 */     MCD::OPC_CheckPredicate, 0, 178, 0, // Skip to: 453
/* 275 */     MCD::OPC_CheckField, 27, 5, 30, 172, 0, // Skip to: 453
/* 281 */     MCD::OPC_CheckField, 5, 3, 0, 166, 0, // Skip to: 453
/* 287 */     MCD::OPC_Decode, 249, 18, 1, // Opcode: SltiuRxImmX16
/* 291 */     MCD::OPC_FilterValue, 13, 20, 0, // Skip to: 315
/* 295 */     MCD::OPC_CheckPredicate, 0, 154, 0, // Skip to: 453
/* 299 */     MCD::OPC_CheckField, 27, 5, 30, 148, 0, // Skip to: 453
/* 305 */     MCD::OPC_CheckField, 5, 3, 0, 142, 0, // Skip to: 453
/* 311 */     MCD::OPC_Decode, 218, 11, 1, // Opcode: LiRxImmX16
/* 315 */     MCD::OPC_FilterValue, 14, 20, 0, // Skip to: 339
/* 319 */     MCD::OPC_CheckPredicate, 0, 130, 0, // Skip to: 453
/* 323 */     MCD::OPC_CheckField, 27, 5, 30, 124, 0, // Skip to: 453
/* 329 */     MCD::OPC_CheckField, 5, 3, 0, 118, 0, // Skip to: 453
/* 335 */     MCD::OPC_Decode, 201, 6, 1, // Opcode: CmpiRxImmX16
/* 339 */     MCD::OPC_FilterValue, 18, 14, 0, // Skip to: 357
/* 343 */     MCD::OPC_CheckPredicate, 0, 106, 0, // Skip to: 453
/* 347 */     MCD::OPC_CheckField, 27, 5, 30, 100, 0, // Skip to: 453
/* 353 */     MCD::OPC_Decode, 234, 11, 9, // Opcode: LwRxSpImmX16
/* 357 */     MCD::OPC_FilterValue, 22, 20, 0, // Skip to: 381
/* 361 */     MCD::OPC_CheckPredicate, 0, 88, 0, // Skip to: 453
/* 365 */     MCD::OPC_CheckField, 27, 5, 30, 82, 0, // Skip to: 453
/* 371 */     MCD::OPC_CheckField, 5, 3, 0, 76, 0, // Skip to: 453
/* 377 */     MCD::OPC_Decode, 232, 11, 1, // Opcode: LwRxPcTcpX16
/* 381 */     MCD::OPC_FilterValue, 24, 14, 0, // Skip to: 399
/* 385 */     MCD::OPC_CheckPredicate, 0, 64, 0, // Skip to: 453
/* 389 */     MCD::OPC_CheckField, 27, 5, 30, 58, 0, // Skip to: 453
/* 395 */     MCD::OPC_Decode, 222, 18, 9, // Opcode: SbRxRyOffMemX16
/* 399 */     MCD::OPC_FilterValue, 25, 14, 0, // Skip to: 417
/* 403 */     MCD::OPC_CheckPredicate, 0, 46, 0, // Skip to: 453
/* 407 */     MCD::OPC_CheckField, 27, 5, 30, 40, 0, // Skip to: 453
/* 413 */     MCD::OPC_Decode, 239, 18, 9, // Opcode: ShRxRyOffMemX16
/* 417 */     MCD::OPC_FilterValue, 26, 14, 0, // Skip to: 435
/* 421 */     MCD::OPC_CheckPredicate, 0, 28, 0, // Skip to: 453
/* 425 */     MCD::OPC_CheckField, 27, 5, 30, 22, 0, // Skip to: 453
/* 431 */     MCD::OPC_Decode, 131, 19, 9, // Opcode: SwRxSpImmX16
/* 435 */     MCD::OPC_FilterValue, 27, 14, 0, // Skip to: 453
/* 439 */     MCD::OPC_CheckPredicate, 0, 10, 0, // Skip to: 453
/* 443 */     MCD::OPC_CheckField, 27, 5, 30, 4, 0, // Skip to: 453
/* 449 */     MCD::OPC_Decode, 130, 19, 9, // Opcode: SwRxRyOffMemX16
/* 453 */     MCD::OPC_Fail,
  0
};

static const uint8_t DecoderTableCOP3_32[] = {
/* 0 */       MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 3 */       MCD::OPC_FilterValue, 51, 8, 0, // Skip to: 15
/* 7 */       MCD::OPC_CheckPredicate, 1, 40, 0, // Skip to: 51
/* 11 */      MCD::OPC_Decode, 176, 11, 10, // Opcode: LWC3
/* 15 */      MCD::OPC_FilterValue, 55, 8, 0, // Skip to: 27
/* 19 */      MCD::OPC_CheckPredicate, 2, 28, 0, // Skip to: 51
/* 23 */      MCD::OPC_Decode, 232, 10, 10, // Opcode: LDC3
/* 27 */      MCD::OPC_FilterValue, 59, 8, 0, // Skip to: 39
/* 31 */      MCD::OPC_CheckPredicate, 1, 16, 0, // Skip to: 51
/* 35 */      MCD::OPC_Decode, 181, 18, 10, // Opcode: SWC3
/* 39 */      MCD::OPC_FilterValue, 63, 8, 0, // Skip to: 51
/* 43 */      MCD::OPC_CheckPredicate, 2, 4, 0, // Skip to: 51
/* 47 */      MCD::OPC_Decode, 155, 16, 10, // Opcode: SDC3
/* 51 */      MCD::OPC_Fail,
  0
};

static const uint8_t DecoderTableCnMips32[] = {
/* 0 */       MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 3 */       MCD::OPC_FilterValue, 18, 27, 0, // Skip to: 34
/* 7 */       MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 10 */      MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 22
/* 14 */      MCD::OPC_CheckPredicate, 3, 169, 1, // Skip to: 443
/* 18 */      MCD::OPC_Decode, 142, 7, 11, // Opcode: DMFC2_OCTEON
/* 22 */      MCD::OPC_FilterValue, 5, 161, 1, // Skip to: 443
/* 26 */      MCD::OPC_CheckPredicate, 3, 157, 1, // Skip to: 443
/* 30 */      MCD::OPC_Decode, 153, 7, 11, // Opcode: DMTC2_OCTEON
/* 34 */      MCD::OPC_FilterValue, 28, 101, 1, // Skip to: 395
/* 38 */      MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 41 */      MCD::OPC_FilterValue, 3, 14, 0, // Skip to: 59
/* 45 */      MCD::OPC_CheckPredicate, 3, 138, 1, // Skip to: 443
/* 49 */      MCD::OPC_CheckField, 6, 5, 0, 132, 1, // Skip to: 443
/* 55 */      MCD::OPC_Decode, 158, 7, 12, // Opcode: DMUL
/* 59 */      MCD::OPC_FilterValue, 8, 14, 0, // Skip to: 77
/* 63 */      MCD::OPC_CheckPredicate, 3, 120, 1, // Skip to: 443
/* 67 */      MCD::OPC_CheckField, 6, 15, 0, 114, 1, // Skip to: 443
/* 73 */      MCD::OPC_Decode, 209, 13, 13, // Opcode: MTM0
/* 77 */      MCD::OPC_FilterValue, 9, 14, 0, // Skip to: 95
/* 81 */      MCD::OPC_CheckPredicate, 3, 102, 1, // Skip to: 443
/* 85 */      MCD::OPC_CheckField, 6, 15, 0, 96, 1, // Skip to: 443
/* 91 */      MCD::OPC_Decode, 212, 13, 13, // Opcode: MTP0
/* 95 */      MCD::OPC_FilterValue, 10, 14, 0, // Skip to: 113
/* 99 */      MCD::OPC_CheckPredicate, 3, 84, 1, // Skip to: 443
/* 103 */     MCD::OPC_CheckField, 6, 15, 0, 78, 1, // Skip to: 443
/* 109 */     MCD::OPC_Decode, 213, 13, 13, // Opcode: MTP1
/* 113 */     MCD::OPC_FilterValue, 11, 14, 0, // Skip to: 131
/* 117 */     MCD::OPC_CheckPredicate, 3, 66, 1, // Skip to: 443
/* 121 */     MCD::OPC_CheckField, 6, 15, 0, 60, 1, // Skip to: 443
/* 127 */     MCD::OPC_Decode, 214, 13, 13, // Opcode: MTP2
/* 131 */     MCD::OPC_FilterValue, 12, 14, 0, // Skip to: 149
/* 135 */     MCD::OPC_CheckPredicate, 3, 48, 1, // Skip to: 443
/* 139 */     MCD::OPC_CheckField, 6, 15, 0, 42, 1, // Skip to: 443
/* 145 */     MCD::OPC_Decode, 210, 13, 13, // Opcode: MTM1
/* 149 */     MCD::OPC_FilterValue, 13, 14, 0, // Skip to: 167
/* 153 */     MCD::OPC_CheckPredicate, 3, 30, 1, // Skip to: 443
/* 157 */     MCD::OPC_CheckField, 6, 15, 0, 24, 1, // Skip to: 443
/* 163 */     MCD::OPC_Decode, 211, 13, 13, // Opcode: MTM2
/* 167 */     MCD::OPC_FilterValue, 15, 14, 0, // Skip to: 185
/* 171 */     MCD::OPC_CheckPredicate, 3, 12, 1, // Skip to: 443
/* 175 */     MCD::OPC_CheckField, 6, 5, 0, 6, 1, // Skip to: 443
/* 181 */     MCD::OPC_Decode, 197, 19, 12, // Opcode: VMULU
/* 185 */     MCD::OPC_FilterValue, 16, 14, 0, // Skip to: 203
/* 189 */     MCD::OPC_CheckPredicate, 3, 250, 0, // Skip to: 443
/* 193 */     MCD::OPC_CheckField, 6, 5, 0, 244, 0, // Skip to: 443
/* 199 */     MCD::OPC_Decode, 196, 19, 12, // Opcode: VMM0
/* 203 */     MCD::OPC_FilterValue, 17, 14, 0, // Skip to: 221
/* 207 */     MCD::OPC_CheckPredicate, 3, 232, 0, // Skip to: 443
/* 211 */     MCD::OPC_CheckField, 6, 5, 0, 226, 0, // Skip to: 443
/* 217 */     MCD::OPC_Decode, 195, 19, 12, // Opcode: V3MULU
/* 221 */     MCD::OPC_FilterValue, 40, 14, 0, // Skip to: 239
/* 225 */     MCD::OPC_CheckPredicate, 3, 214, 0, // Skip to: 443
/* 229 */     MCD::OPC_CheckField, 6, 5, 0, 208, 0, // Skip to: 443
/* 235 */     MCD::OPC_Decode, 148, 2, 12, // Opcode: BADDu
/* 239 */     MCD::OPC_FilterValue, 42, 14, 0, // Skip to: 257
/* 243 */     MCD::OPC_CheckPredicate, 3, 196, 0, // Skip to: 443
/* 247 */     MCD::OPC_CheckField, 6, 5, 0, 190, 0, // Skip to: 443
/* 253 */     MCD::OPC_Decode, 193, 16, 12, // Opcode: SEQ
/* 257 */     MCD::OPC_FilterValue, 43, 14, 0, // Skip to: 275
/* 261 */     MCD::OPC_CheckPredicate, 3, 178, 0, // Skip to: 443
/* 265 */     MCD::OPC_CheckField, 6, 5, 0, 172, 0, // Skip to: 443
/* 271 */     MCD::OPC_Decode, 168, 17, 12, // Opcode: SNE
/* 275 */     MCD::OPC_FilterValue, 44, 20, 0, // Skip to: 299
/* 279 */     MCD::OPC_CheckPredicate, 3, 160, 0, // Skip to: 443
/* 283 */     MCD::OPC_CheckField, 16, 5, 0, 154, 0, // Skip to: 443
/* 289 */     MCD::OPC_CheckField, 6, 5, 0, 148, 0, // Skip to: 443
/* 295 */     MCD::OPC_Decode, 219, 14, 14, // Opcode: POP
/* 299 */     MCD::OPC_FilterValue, 45, 20, 0, // Skip to: 323
/* 303 */     MCD::OPC_CheckPredicate, 3, 136, 0, // Skip to: 443
/* 307 */     MCD::OPC_CheckField, 16, 5, 0, 130, 0, // Skip to: 443
/* 313 */     MCD::OPC_CheckField, 6, 5, 0, 124, 0, // Skip to: 443
/* 319 */     MCD::OPC_Decode, 197, 7, 15, // Opcode: DPOP
/* 323 */     MCD::OPC_FilterValue, 46, 8, 0, // Skip to: 335
/* 327 */     MCD::OPC_CheckPredicate, 3, 112, 0, // Skip to: 443
/* 331 */     MCD::OPC_Decode, 196, 16, 16, // Opcode: SEQi
/* 335 */     MCD::OPC_FilterValue, 47, 8, 0, // Skip to: 347
/* 339 */     MCD::OPC_CheckPredicate, 3, 100, 0, // Skip to: 443
/* 343 */     MCD::OPC_Decode, 169, 17, 16, // Opcode: SNEi
/* 347 */     MCD::OPC_FilterValue, 50, 8, 0, // Skip to: 359
/* 351 */     MCD::OPC_CheckPredicate, 4, 88, 0, // Skip to: 443
/* 355 */     MCD::OPC_Decode, 177, 4, 17, // Opcode: CINS
/* 359 */     MCD::OPC_FilterValue, 51, 8, 0, // Skip to: 371
/* 363 */     MCD::OPC_CheckPredicate, 4, 76, 0, // Skip to: 443
/* 367 */     MCD::OPC_Decode, 178, 4, 17, // Opcode: CINS32
/* 371 */     MCD::OPC_FilterValue, 58, 8, 0, // Skip to: 383
/* 375 */     MCD::OPC_CheckPredicate, 4, 64, 0, // Skip to: 443
/* 379 */     MCD::OPC_Decode, 178, 8, 17, // Opcode: EXTS
/* 383 */     MCD::OPC_FilterValue, 59, 56, 0, // Skip to: 443
/* 387 */     MCD::OPC_CheckPredicate, 4, 52, 0, // Skip to: 443
/* 391 */     MCD::OPC_Decode, 179, 8, 17, // Opcode: EXTS32
/* 395 */     MCD::OPC_FilterValue, 50, 8, 0, // Skip to: 407
/* 399 */     MCD::OPC_CheckPredicate, 3, 40, 0, // Skip to: 443
/* 403 */     MCD::OPC_Decode, 155, 2, 18, // Opcode: BBIT0
/* 407 */     MCD::OPC_FilterValue, 54, 8, 0, // Skip to: 419
/* 411 */     MCD::OPC_CheckPredicate, 3, 28, 0, // Skip to: 443
/* 415 */     MCD::OPC_Decode, 156, 2, 18, // Opcode: BBIT032
/* 419 */     MCD::OPC_FilterValue, 58, 8, 0, // Skip to: 431
/* 423 */     MCD::OPC_CheckPredicate, 3, 16, 0, // Skip to: 443
/* 427 */     MCD::OPC_Decode, 157, 2, 18, // Opcode: BBIT1
/* 431 */     MCD::OPC_FilterValue, 62, 8, 0, // Skip to: 443
/* 435 */     MCD::OPC_CheckPredicate, 3, 4, 0, // Skip to: 443
/* 439 */     MCD::OPC_Decode, 158, 2, 18, // Opcode: BBIT132
/* 443 */     MCD::OPC_Fail,
  0
};

static const uint8_t DecoderTableMicroMips16[] = {
/* 0 */       MCD::OPC_ExtractField, 10, 6,  // Inst{15-10} ...
/* 3 */       MCD::OPC_FilterValue, 1, 27, 0, // Skip to: 34
/* 7 */       MCD::OPC_ExtractField, 0, 1,  // Inst{0} ...
/* 10 */      MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 22
/* 14 */      MCD::OPC_CheckPredicate, 5, 22, 2, // Skip to: 552
/* 18 */      MCD::OPC_Decode, 143, 1, 19, // Opcode: ADDU16_MM
/* 22 */      MCD::OPC_FilterValue, 1, 14, 2, // Skip to: 552
/* 26 */      MCD::OPC_CheckPredicate, 5, 10, 2, // Skip to: 552
/* 30 */      MCD::OPC_Decode, 142, 18, 19, // Opcode: SUBU16_MM
/* 34 */      MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 46
/* 38 */      MCD::OPC_CheckPredicate, 6, 254, 1, // Skip to: 552
/* 42 */      MCD::OPC_Decode, 212, 10, 20, // Opcode: LBU16_MM
/* 46 */      MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 58
/* 50 */      MCD::OPC_CheckPredicate, 6, 242, 1, // Skip to: 552
/* 54 */      MCD::OPC_Decode, 238, 12, 21, // Opcode: MOVE16_MM
/* 58 */      MCD::OPC_FilterValue, 9, 27, 0, // Skip to: 89
/* 62 */      MCD::OPC_ExtractField, 0, 1,  // Inst{0} ...
/* 65 */      MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 77
/* 69 */      MCD::OPC_CheckPredicate, 5, 223, 1, // Skip to: 552
/* 73 */      MCD::OPC_Decode, 138, 17, 22, // Opcode: SLL16_MM
/* 77 */      MCD::OPC_FilterValue, 1, 215, 1, // Skip to: 552
/* 81 */      MCD::OPC_CheckPredicate, 5, 211, 1, // Skip to: 552
/* 85 */      MCD::OPC_Decode, 206, 17, 22, // Opcode: SRL16_MM
/* 89 */      MCD::OPC_FilterValue, 10, 8, 0, // Skip to: 101
/* 93 */      MCD::OPC_CheckPredicate, 6, 199, 1, // Skip to: 552
/* 97 */      MCD::OPC_Decode, 129, 11, 20, // Opcode: LHU16_MM
/* 101 */     MCD::OPC_FilterValue, 11, 8, 0, // Skip to: 113
/* 105 */     MCD::OPC_CheckPredicate, 5, 187, 1, // Skip to: 552
/* 109 */     MCD::OPC_Decode, 190, 1, 23, // Opcode: ANDI16_MM
/* 113 */     MCD::OPC_FilterValue, 17, 227, 0, // Skip to: 344
/* 117 */     MCD::OPC_ExtractField, 6, 4,  // Inst{9-6} ...
/* 120 */     MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 132
/* 124 */     MCD::OPC_CheckPredicate, 5, 168, 1, // Skip to: 552
/* 128 */     MCD::OPC_Decode, 178, 14, 24, // Opcode: NOT16_MM
/* 132 */     MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 144
/* 136 */     MCD::OPC_CheckPredicate, 5, 156, 1, // Skip to: 552
/* 140 */     MCD::OPC_Decode, 212, 19, 25, // Opcode: XOR16_MM
/* 144 */     MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 156
/* 148 */     MCD::OPC_CheckPredicate, 5, 144, 1, // Skip to: 552
/* 152 */     MCD::OPC_Decode, 187, 1, 25, // Opcode: AND16_MM
/* 156 */     MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 168
/* 160 */     MCD::OPC_CheckPredicate, 5, 132, 1, // Skip to: 552
/* 164 */     MCD::OPC_Decode, 183, 14, 25, // Opcode: OR16_MM
/* 168 */     MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 180
/* 172 */     MCD::OPC_CheckPredicate, 7, 120, 1, // Skip to: 552
/* 176 */     MCD::OPC_Decode, 186, 11, 26, // Opcode: LWM16_MM
/* 180 */     MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 192
/* 184 */     MCD::OPC_CheckPredicate, 7, 108, 1, // Skip to: 552
/* 188 */     MCD::OPC_Decode, 190, 18, 26, // Opcode: SWM16_MM
/* 192 */     MCD::OPC_FilterValue, 6, 27, 0, // Skip to: 223
/* 196 */     MCD::OPC_ExtractField, 5, 1,  // Inst{5} ...
/* 199 */     MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 211
/* 203 */     MCD::OPC_CheckPredicate, 6, 89, 1, // Skip to: 552
/* 207 */     MCD::OPC_Decode, 189, 10, 27, // Opcode: JR16_MM
/* 211 */     MCD::OPC_FilterValue, 1, 81, 1, // Skip to: 552
/* 215 */     MCD::OPC_CheckPredicate, 6, 77, 1, // Skip to: 552
/* 219 */     MCD::OPC_Decode, 192, 10, 27, // Opcode: JRC16_MM
/* 223 */     MCD::OPC_FilterValue, 7, 27, 0, // Skip to: 254
/* 227 */     MCD::OPC_ExtractField, 5, 1,  // Inst{5} ...
/* 230 */     MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 242
/* 234 */     MCD::OPC_CheckPredicate, 7, 58, 1, // Skip to: 552
/* 238 */     MCD::OPC_Decode, 167, 10, 27, // Opcode: JALR16_MM
/* 242 */     MCD::OPC_FilterValue, 1, 50, 1, // Skip to: 552
/* 246 */     MCD::OPC_CheckPredicate, 6, 46, 1, // Skip to: 552
/* 250 */     MCD::OPC_Decode, 174, 10, 27, // Opcode: JALRS16_MM
/* 254 */     MCD::OPC_FilterValue, 8, 14, 0, // Skip to: 272
/* 258 */     MCD::OPC_CheckPredicate, 6, 34, 1, // Skip to: 552
/* 262 */     MCD::OPC_CheckField, 5, 1, 0, 28, 1, // Skip to: 552
/* 268 */     MCD::OPC_Decode, 183, 12, 27, // Opcode: MFHI16_MM
/* 272 */     MCD::OPC_FilterValue, 9, 14, 0, // Skip to: 290
/* 276 */     MCD::OPC_CheckPredicate, 6, 16, 1, // Skip to: 552
/* 280 */     MCD::OPC_CheckField, 5, 1, 0, 10, 1, // Skip to: 552
/* 286 */     MCD::OPC_Decode, 189, 12, 27, // Opcode: MFLO16_MM
/* 290 */     MCD::OPC_FilterValue, 10, 14, 0, // Skip to: 308
/* 294 */     MCD::OPC_CheckPredicate, 5, 254, 0, // Skip to: 552
/* 298 */     MCD::OPC_CheckField, 4, 2, 0, 248, 0, // Skip to: 552
/* 304 */     MCD::OPC_Decode, 222, 3, 28, // Opcode: BREAK16_MM
/* 308 */     MCD::OPC_FilterValue, 11, 14, 0, // Skip to: 326
/* 312 */     MCD::OPC_CheckPredicate, 5, 236, 0, // Skip to: 552
/* 316 */     MCD::OPC_CheckField, 4, 2, 0, 230, 0, // Skip to: 552
/* 322 */     MCD::OPC_Decode, 143, 16, 28, // Opcode: SDBBP16_MM
/* 326 */     MCD::OPC_FilterValue, 12, 222, 0, // Skip to: 552
/* 330 */     MCD::OPC_CheckPredicate, 6, 218, 0, // Skip to: 552
/* 334 */     MCD::OPC_CheckField, 5, 1, 0, 212, 0, // Skip to: 552
/* 340 */     MCD::OPC_Decode, 191, 10, 29, // Opcode: JRADDIUSP
/* 344 */     MCD::OPC_FilterValue, 18, 8, 0, // Skip to: 356
/* 348 */     MCD::OPC_CheckPredicate, 6, 200, 0, // Skip to: 552
/* 352 */     MCD::OPC_Decode, 199, 11, 30, // Opcode: LWSP_MM
/* 356 */     MCD::OPC_FilterValue, 19, 25, 0, // Skip to: 385
/* 360 */     MCD::OPC_ExtractField, 0, 1,  // Inst{0} ...
/* 363 */     MCD::OPC_FilterValue, 0, 7, 0, // Skip to: 374
/* 367 */     MCD::OPC_CheckPredicate, 6, 181, 0, // Skip to: 552
/* 371 */     MCD::OPC_Decode, 112, 31, // Opcode: ADDIUS5_MM
/* 374 */     MCD::OPC_FilterValue, 1, 174, 0, // Skip to: 552
/* 378 */     MCD::OPC_CheckPredicate, 6, 170, 0, // Skip to: 552
/* 382 */     MCD::OPC_Decode, 113, 32, // Opcode: ADDIUSP_MM
/* 385 */     MCD::OPC_FilterValue, 25, 8, 0, // Skip to: 397
/* 389 */     MCD::OPC_CheckPredicate, 6, 159, 0, // Skip to: 552
/* 393 */     MCD::OPC_Decode, 180, 11, 33, // Opcode: LWGP_MM
/* 397 */     MCD::OPC_FilterValue, 26, 8, 0, // Skip to: 409
/* 401 */     MCD::OPC_CheckPredicate, 6, 147, 0, // Skip to: 552
/* 405 */     MCD::OPC_Decode, 169, 11, 20, // Opcode: LW16_MM
/* 409 */     MCD::OPC_FilterValue, 27, 25, 0, // Skip to: 438
/* 413 */     MCD::OPC_ExtractField, 0, 1,  // Inst{0} ...
/* 416 */     MCD::OPC_FilterValue, 0, 7, 0, // Skip to: 427
/* 420 */     MCD::OPC_CheckPredicate, 6, 128, 0, // Skip to: 552
/* 424 */     MCD::OPC_Decode, 111, 34, // Opcode: ADDIUR2_MM
/* 427 */     MCD::OPC_FilterValue, 1, 121, 0, // Skip to: 552
/* 431 */     MCD::OPC_CheckPredicate, 6, 117, 0, // Skip to: 552
/* 435 */     MCD::OPC_Decode, 110, 35, // Opcode: ADDIUR1SP_MM
/* 438 */     MCD::OPC_FilterValue, 33, 14, 0, // Skip to: 456
/* 442 */     MCD::OPC_CheckPredicate, 6, 106, 0, // Skip to: 552
/* 446 */     MCD::OPC_CheckField, 0, 1, 0, 100, 0, // Skip to: 552
/* 452 */     MCD::OPC_Decode, 240, 12, 36, // Opcode: MOVEP_MM
/* 456 */     MCD::OPC_FilterValue, 34, 8, 0, // Skip to: 468
/* 460 */     MCD::OPC_CheckPredicate, 6, 88, 0, // Skip to: 552
/* 464 */     MCD::OPC_Decode, 251, 15, 20, // Opcode: SB16_MM
/* 468 */     MCD::OPC_FilterValue, 35, 8, 0, // Skip to: 480
/* 472 */     MCD::OPC_CheckPredicate, 6, 76, 0, // Skip to: 552
/* 476 */     MCD::OPC_Decode, 191, 2, 37, // Opcode: BEQZ16_MM
/* 480 */     MCD::OPC_FilterValue, 42, 8, 0, // Skip to: 492
/* 484 */     MCD::OPC_CheckPredicate, 6, 64, 0, // Skip to: 552
/* 488 */     MCD::OPC_Decode, 198, 16, 20, // Opcode: SH16_MM
/* 492 */     MCD::OPC_FilterValue, 43, 8, 0, // Skip to: 504
/* 496 */     MCD::OPC_CheckPredicate, 6, 52, 0, // Skip to: 552
/* 500 */     MCD::OPC_Decode, 199, 3, 37, // Opcode: BNEZ16_MM
/* 504 */     MCD::OPC_FilterValue, 50, 8, 0, // Skip to: 516
/* 508 */     MCD::OPC_CheckPredicate, 6, 40, 0, // Skip to: 552
/* 512 */     MCD::OPC_Decode, 201, 18, 30, // Opcode: SWSP_MM
/* 516 */     MCD::OPC_FilterValue, 51, 8, 0, // Skip to: 528
/* 520 */     MCD::OPC_CheckPredicate, 6, 28, 0, // Skip to: 552
/* 524 */     MCD::OPC_Decode, 147, 2, 38, // Opcode: B16_MM
/* 528 */     MCD::OPC_FilterValue, 58, 8, 0, // Skip to: 540
/* 532 */     MCD::OPC_CheckPredicate, 6, 16, 0, // Skip to: 552
/* 536 */     MCD::OPC_Decode, 173, 18, 20, // Opcode: SW16_MM
/* 540 */     MCD::OPC_FilterValue, 59, 8, 0, // Skip to: 552
/* 544 */     MCD::OPC_CheckPredicate, 6, 4, 0, // Skip to: 552
/* 548 */     MCD::OPC_Decode, 138, 11, 39, // Opcode: LI16_MM
/* 552 */     MCD::OPC_Fail,
  0
};

static const uint8_t DecoderTableMicroMips32[] = {
/* 0 */       MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 3 */       MCD::OPC_FilterValue, 0, 53, 12, // Skip to: 3132
/* 7 */       MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 10 */      MCD::OPC_FilterValue, 0, 90, 0, // Skip to: 104
/* 14 */      MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 17 */      MCD::OPC_FilterValue, 0, 47, 0, // Skip to: 68
/* 21 */      MCD::OPC_ExtractField, 11, 15,  // Inst{25-11} ...
/* 24 */      MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 36
/* 28 */      MCD::OPC_CheckPredicate, 6, 28, 0, // Skip to: 60
/* 32 */      MCD::OPC_Decode, 228, 17, 0, // Opcode: SSNOP_MM
/* 36 */      MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 48
/* 40 */      MCD::OPC_CheckPredicate, 6, 16, 0, // Skip to: 60
/* 44 */      MCD::OPC_Decode, 140, 8, 0, // Opcode: EHB_MM
/* 48 */      MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 60
/* 52 */      MCD::OPC_CheckPredicate, 6, 4, 0, // Skip to: 60
/* 56 */      MCD::OPC_Decode, 201, 14, 0, // Opcode: PAUSE_MM
/* 60 */      MCD::OPC_CheckPredicate, 6, 103, 16, // Skip to: 4263
/* 64 */      MCD::OPC_Decode, 151, 17, 40, // Opcode: SLL_MM
/* 68 */      MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 80
/* 72 */      MCD::OPC_CheckPredicate, 6, 91, 16, // Skip to: 4263
/* 76 */      MCD::OPC_Decode, 225, 17, 40, // Opcode: SRL_MM
/* 80 */      MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 92
/* 84 */      MCD::OPC_CheckPredicate, 6, 79, 16, // Skip to: 4263
/* 88 */      MCD::OPC_Decode, 203, 17, 40, // Opcode: SRA_MM
/* 92 */      MCD::OPC_FilterValue, 3, 71, 16, // Skip to: 4263
/* 96 */      MCD::OPC_CheckPredicate, 6, 67, 16, // Skip to: 4263
/* 100 */     MCD::OPC_Decode, 222, 15, 40, // Opcode: ROTR_MM
/* 104 */     MCD::OPC_FilterValue, 5, 195, 0, // Skip to: 303
/* 108 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 111 */     MCD::OPC_FilterValue, 0, 14, 0, // Skip to: 129
/* 115 */     MCD::OPC_CheckPredicate, 8, 48, 16, // Skip to: 4263
/* 119 */     MCD::OPC_CheckField, 11, 5, 0, 42, 16, // Skip to: 4263
/* 125 */     MCD::OPC_Decode, 248, 4, 41, // Opcode: CMP_EQ_PH_MM
/* 129 */     MCD::OPC_FilterValue, 1, 14, 0, // Skip to: 147
/* 133 */     MCD::OPC_CheckPredicate, 8, 30, 16, // Skip to: 4263
/* 137 */     MCD::OPC_CheckField, 11, 5, 0, 24, 16, // Skip to: 4263
/* 143 */     MCD::OPC_Decode, 134, 5, 41, // Opcode: CMP_LT_PH_MM
/* 147 */     MCD::OPC_FilterValue, 2, 14, 0, // Skip to: 165
/* 151 */     MCD::OPC_CheckPredicate, 8, 12, 16, // Skip to: 4263
/* 155 */     MCD::OPC_CheckField, 11, 5, 0, 6, 16, // Skip to: 4263
/* 161 */     MCD::OPC_Decode, 128, 5, 41, // Opcode: CMP_LE_PH_MM
/* 165 */     MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 177
/* 169 */     MCD::OPC_CheckPredicate, 9, 250, 15, // Skip to: 4263
/* 173 */     MCD::OPC_Decode, 226, 4, 42, // Opcode: CMPGDU_EQ_QB_MMR2
/* 177 */     MCD::OPC_FilterValue, 7, 8, 0, // Skip to: 189
/* 181 */     MCD::OPC_CheckPredicate, 9, 238, 15, // Skip to: 4263
/* 185 */     MCD::OPC_Decode, 230, 4, 42, // Opcode: CMPGDU_LT_QB_MMR2
/* 189 */     MCD::OPC_FilterValue, 8, 8, 0, // Skip to: 201
/* 193 */     MCD::OPC_CheckPredicate, 9, 226, 15, // Skip to: 4263
/* 197 */     MCD::OPC_Decode, 228, 4, 42, // Opcode: CMPGDU_LE_QB_MMR2
/* 201 */     MCD::OPC_FilterValue, 9, 14, 0, // Skip to: 219
/* 205 */     MCD::OPC_CheckPredicate, 8, 214, 15, // Skip to: 4263
/* 209 */     MCD::OPC_CheckField, 11, 5, 0, 208, 15, // Skip to: 4263
/* 215 */     MCD::OPC_Decode, 238, 4, 41, // Opcode: CMPU_EQ_QB_MM
/* 219 */     MCD::OPC_FilterValue, 10, 14, 0, // Skip to: 237
/* 223 */     MCD::OPC_CheckPredicate, 8, 196, 15, // Skip to: 4263
/* 227 */     MCD::OPC_CheckField, 11, 5, 0, 190, 15, // Skip to: 4263
/* 233 */     MCD::OPC_Decode, 242, 4, 41, // Opcode: CMPU_LT_QB_MM
/* 237 */     MCD::OPC_FilterValue, 11, 14, 0, // Skip to: 255
/* 241 */     MCD::OPC_CheckPredicate, 8, 178, 15, // Skip to: 4263
/* 245 */     MCD::OPC_CheckField, 11, 5, 0, 172, 15, // Skip to: 4263
/* 251 */     MCD::OPC_Decode, 240, 4, 41, // Opcode: CMPU_LE_QB_MM
/* 255 */     MCD::OPC_FilterValue, 12, 8, 0, // Skip to: 267
/* 259 */     MCD::OPC_CheckPredicate, 8, 160, 15, // Skip to: 4263
/* 263 */     MCD::OPC_Decode, 128, 1, 43, // Opcode: ADDQ_S_W_MM
/* 267 */     MCD::OPC_FilterValue, 13, 8, 0, // Skip to: 279
/* 271 */     MCD::OPC_CheckPredicate, 8, 148, 15, // Skip to: 4263
/* 275 */     MCD::OPC_Decode, 253, 17, 43, // Opcode: SUBQ_S_W_MM
/* 279 */     MCD::OPC_FilterValue, 14, 8, 0, // Skip to: 291
/* 283 */     MCD::OPC_CheckPredicate, 8, 136, 15, // Skip to: 4263
/* 287 */     MCD::OPC_Decode, 130, 1, 43, // Opcode: ADDSC_MM
/* 291 */     MCD::OPC_FilterValue, 15, 128, 15, // Skip to: 4263
/* 295 */     MCD::OPC_CheckPredicate, 8, 124, 15, // Skip to: 4263
/* 299 */     MCD::OPC_Decode, 167, 1, 43, // Opcode: ADDWC_MM
/* 303 */     MCD::OPC_FilterValue, 7, 8, 0, // Skip to: 315
/* 307 */     MCD::OPC_CheckPredicate, 6, 112, 15, // Skip to: 4263
/* 311 */     MCD::OPC_Decode, 224, 3, 44, // Opcode: BREAK_MM
/* 315 */     MCD::OPC_FilterValue, 12, 8, 0, // Skip to: 327
/* 319 */     MCD::OPC_CheckPredicate, 6, 100, 15, // Skip to: 4263
/* 323 */     MCD::OPC_Decode, 162, 10, 45, // Opcode: INS_MM
/* 327 */     MCD::OPC_FilterValue, 13, 101, 1, // Skip to: 688
/* 331 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 334 */     MCD::OPC_FilterValue, 0, 7, 0, // Skip to: 345
/* 338 */     MCD::OPC_CheckPredicate, 8, 81, 15, // Skip to: 4263
/* 342 */     MCD::OPC_Decode, 124, 46, // Opcode: ADDQ_PH_MM
/* 345 */     MCD::OPC_FilterValue, 1, 7, 0, // Skip to: 356
/* 349 */     MCD::OPC_CheckPredicate, 9, 70, 15, // Skip to: 4263
/* 353 */     MCD::OPC_Decode, 116, 46, // Opcode: ADDQH_PH_MMR2
/* 356 */     MCD::OPC_FilterValue, 2, 7, 0, // Skip to: 367
/* 360 */     MCD::OPC_CheckPredicate, 9, 59, 15, // Skip to: 4263
/* 364 */     MCD::OPC_Decode, 122, 43, // Opcode: ADDQH_W_MMR2
/* 367 */     MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 379
/* 371 */     MCD::OPC_CheckPredicate, 8, 48, 15, // Skip to: 4263
/* 375 */     MCD::OPC_Decode, 153, 1, 46, // Opcode: ADDU_QB_MM
/* 379 */     MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 391
/* 383 */     MCD::OPC_CheckPredicate, 9, 36, 15, // Skip to: 4263
/* 387 */     MCD::OPC_Decode, 151, 1, 46, // Opcode: ADDU_PH_MMR2
/* 391 */     MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 403
/* 395 */     MCD::OPC_CheckPredicate, 9, 24, 15, // Skip to: 4263
/* 399 */     MCD::OPC_Decode, 146, 1, 46, // Opcode: ADDUH_QB_MMR2
/* 403 */     MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 415
/* 407 */     MCD::OPC_CheckPredicate, 8, 12, 15, // Skip to: 4263
/* 411 */     MCD::OPC_Decode, 228, 16, 47, // Opcode: SHRAV_PH_MM
/* 415 */     MCD::OPC_FilterValue, 7, 8, 0, // Skip to: 427
/* 419 */     MCD::OPC_CheckPredicate, 9, 0, 15, // Skip to: 4263
/* 423 */     MCD::OPC_Decode, 230, 16, 47, // Opcode: SHRAV_QB_MMR2
/* 427 */     MCD::OPC_FilterValue, 8, 8, 0, // Skip to: 439
/* 431 */     MCD::OPC_CheckPredicate, 8, 244, 14, // Skip to: 4263
/* 435 */     MCD::OPC_Decode, 249, 17, 46, // Opcode: SUBQ_PH_MM
/* 439 */     MCD::OPC_FilterValue, 9, 8, 0, // Skip to: 451
/* 443 */     MCD::OPC_CheckPredicate, 9, 232, 14, // Skip to: 4263
/* 447 */     MCD::OPC_Decode, 241, 17, 46, // Opcode: SUBQH_PH_MMR2
/* 451 */     MCD::OPC_FilterValue, 10, 8, 0, // Skip to: 463
/* 455 */     MCD::OPC_CheckPredicate, 9, 220, 14, // Skip to: 4263
/* 459 */     MCD::OPC_Decode, 247, 17, 43, // Opcode: SUBQH_W_MMR2
/* 463 */     MCD::OPC_FilterValue, 11, 8, 0, // Skip to: 475
/* 467 */     MCD::OPC_CheckPredicate, 8, 208, 14, // Skip to: 4263
/* 471 */     MCD::OPC_Decode, 152, 18, 46, // Opcode: SUBU_QB_MM
/* 475 */     MCD::OPC_FilterValue, 12, 8, 0, // Skip to: 487
/* 479 */     MCD::OPC_CheckPredicate, 9, 196, 14, // Skip to: 4263
/* 483 */     MCD::OPC_Decode, 150, 18, 46, // Opcode: SUBU_PH_MMR2
/* 487 */     MCD::OPC_FilterValue, 13, 8, 0, // Skip to: 499
/* 491 */     MCD::OPC_CheckPredicate, 9, 184, 14, // Skip to: 4263
/* 495 */     MCD::OPC_Decode, 145, 18, 46, // Opcode: SUBUH_QB_MMR2
/* 499 */     MCD::OPC_FilterValue, 15, 8, 0, // Skip to: 511
/* 503 */     MCD::OPC_CheckPredicate, 9, 172, 14, // Skip to: 4263
/* 507 */     MCD::OPC_Decode, 251, 14, 48, // Opcode: PRECR_SRA_PH_W_MMR2
/* 511 */     MCD::OPC_FilterValue, 16, 7, 0, // Skip to: 522
/* 515 */     MCD::OPC_CheckPredicate, 8, 160, 14, // Skip to: 4263
/* 519 */     MCD::OPC_Decode, 126, 46, // Opcode: ADDQ_S_PH_MM
/* 522 */     MCD::OPC_FilterValue, 17, 7, 0, // Skip to: 533
/* 526 */     MCD::OPC_CheckPredicate, 9, 149, 14, // Skip to: 4263
/* 530 */     MCD::OPC_Decode, 118, 46, // Opcode: ADDQH_R_PH_MMR2
/* 533 */     MCD::OPC_FilterValue, 18, 7, 0, // Skip to: 544
/* 537 */     MCD::OPC_CheckPredicate, 9, 138, 14, // Skip to: 4263
/* 541 */     MCD::OPC_Decode, 120, 43, // Opcode: ADDQH_R_W_MMR2
/* 544 */     MCD::OPC_FilterValue, 19, 8, 0, // Skip to: 556
/* 548 */     MCD::OPC_CheckPredicate, 8, 127, 14, // Skip to: 4263
/* 552 */     MCD::OPC_Decode, 157, 1, 46, // Opcode: ADDU_S_QB_MM
/* 556 */     MCD::OPC_FilterValue, 20, 8, 0, // Skip to: 568
/* 560 */     MCD::OPC_CheckPredicate, 9, 115, 14, // Skip to: 4263
/* 564 */     MCD::OPC_Decode, 155, 1, 46, // Opcode: ADDU_S_PH_MMR2
/* 568 */     MCD::OPC_FilterValue, 21, 8, 0, // Skip to: 580
/* 572 */     MCD::OPC_CheckPredicate, 9, 103, 14, // Skip to: 4263
/* 576 */     MCD::OPC_Decode, 148, 1, 46, // Opcode: ADDUH_R_QB_MMR2
/* 580 */     MCD::OPC_FilterValue, 22, 8, 0, // Skip to: 592
/* 584 */     MCD::OPC_CheckPredicate, 8, 91, 14, // Skip to: 4263
/* 588 */     MCD::OPC_Decode, 232, 16, 47, // Opcode: SHRAV_R_PH_MM
/* 592 */     MCD::OPC_FilterValue, 23, 8, 0, // Skip to: 604
/* 596 */     MCD::OPC_CheckPredicate, 9, 79, 14, // Skip to: 4263
/* 600 */     MCD::OPC_Decode, 234, 16, 47, // Opcode: SHRAV_R_QB_MMR2
/* 604 */     MCD::OPC_FilterValue, 24, 8, 0, // Skip to: 616
/* 608 */     MCD::OPC_CheckPredicate, 8, 67, 14, // Skip to: 4263
/* 612 */     MCD::OPC_Decode, 251, 17, 46, // Opcode: SUBQ_S_PH_MM
/* 616 */     MCD::OPC_FilterValue, 25, 8, 0, // Skip to: 628
/* 620 */     MCD::OPC_CheckPredicate, 9, 55, 14, // Skip to: 4263
/* 624 */     MCD::OPC_Decode, 243, 17, 46, // Opcode: SUBQH_R_PH_MMR2
/* 628 */     MCD::OPC_FilterValue, 26, 8, 0, // Skip to: 640
/* 632 */     MCD::OPC_CheckPredicate, 9, 43, 14, // Skip to: 4263
/* 636 */     MCD::OPC_Decode, 245, 17, 43, // Opcode: SUBQH_R_W_MMR2
/* 640 */     MCD::OPC_FilterValue, 27, 8, 0, // Skip to: 652
/* 644 */     MCD::OPC_CheckPredicate, 8, 31, 14, // Skip to: 4263
/* 648 */     MCD::OPC_Decode, 156, 18, 46, // Opcode: SUBU_S_QB_MM
/* 652 */     MCD::OPC_FilterValue, 28, 8, 0, // Skip to: 664
/* 656 */     MCD::OPC_CheckPredicate, 9, 19, 14, // Skip to: 4263
/* 660 */     MCD::OPC_Decode, 154, 18, 46, // Opcode: SUBU_S_PH_MMR2
/* 664 */     MCD::OPC_FilterValue, 29, 8, 0, // Skip to: 676
/* 668 */     MCD::OPC_CheckPredicate, 9, 7, 14, // Skip to: 4263
/* 672 */     MCD::OPC_Decode, 147, 18, 46, // Opcode: SUBUH_R_QB_MMR2
/* 676 */     MCD::OPC_FilterValue, 31, 255, 13, // Skip to: 4263
/* 680 */     MCD::OPC_CheckPredicate, 9, 251, 13, // Skip to: 4263
/* 684 */     MCD::OPC_Decode, 253, 14, 48, // Opcode: PRECR_SRA_R_PH_W_MMR2
/* 688 */     MCD::OPC_FilterValue, 14, 27, 0, // Skip to: 719
/* 692 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 695 */     MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 707
/* 699 */     MCD::OPC_CheckPredicate, 8, 232, 13, // Skip to: 4263
/* 703 */     MCD::OPC_Decode, 212, 16, 47, // Opcode: SHLLV_PH_MM
/* 707 */     MCD::OPC_FilterValue, 16, 224, 13, // Skip to: 4263
/* 711 */     MCD::OPC_CheckPredicate, 8, 220, 13, // Skip to: 4263
/* 715 */     MCD::OPC_Decode, 216, 16, 47, // Opcode: SHLLV_S_PH_MM
/* 719 */     MCD::OPC_FilterValue, 16, 183, 0, // Skip to: 906
/* 723 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 726 */     MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 738
/* 730 */     MCD::OPC_CheckPredicate, 6, 201, 13, // Skip to: 4263
/* 734 */     MCD::OPC_Decode, 147, 17, 49, // Opcode: SLLV_MM
/* 738 */     MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 750
/* 742 */     MCD::OPC_CheckPredicate, 6, 189, 13, // Skip to: 4263
/* 746 */     MCD::OPC_Decode, 221, 17, 49, // Opcode: SRLV_MM
/* 750 */     MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 762
/* 754 */     MCD::OPC_CheckPredicate, 6, 177, 13, // Skip to: 4263
/* 758 */     MCD::OPC_Decode, 199, 17, 49, // Opcode: SRAV_MM
/* 762 */     MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 774
/* 766 */     MCD::OPC_CheckPredicate, 6, 165, 13, // Skip to: 4263
/* 770 */     MCD::OPC_Decode, 221, 15, 49, // Opcode: ROTRV_MM
/* 774 */     MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 786
/* 778 */     MCD::OPC_CheckPredicate, 6, 153, 13, // Skip to: 4263
/* 782 */     MCD::OPC_Decode, 172, 1, 43, // Opcode: ADD_MM
/* 786 */     MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 798
/* 790 */     MCD::OPC_CheckPredicate, 6, 141, 13, // Skip to: 4263
/* 794 */     MCD::OPC_Decode, 179, 1, 43, // Opcode: ADDu_MM
/* 798 */     MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 810
/* 802 */     MCD::OPC_CheckPredicate, 6, 129, 13, // Skip to: 4263
/* 806 */     MCD::OPC_Decode, 165, 18, 43, // Opcode: SUB_MM
/* 810 */     MCD::OPC_FilterValue, 7, 8, 0, // Skip to: 822
/* 814 */     MCD::OPC_CheckPredicate, 6, 117, 13, // Skip to: 4263
/* 818 */     MCD::OPC_Decode, 168, 18, 43, // Opcode: SUBu_MM
/* 822 */     MCD::OPC_FilterValue, 8, 8, 0, // Skip to: 834
/* 826 */     MCD::OPC_CheckPredicate, 6, 105, 13, // Skip to: 4263
/* 830 */     MCD::OPC_Decode, 131, 14, 43, // Opcode: MUL_MM
/* 834 */     MCD::OPC_FilterValue, 9, 8, 0, // Skip to: 846
/* 838 */     MCD::OPC_CheckPredicate, 6, 93, 13, // Skip to: 4263
/* 842 */     MCD::OPC_Decode, 194, 1, 43, // Opcode: AND_MM
/* 846 */     MCD::OPC_FilterValue, 10, 8, 0, // Skip to: 858
/* 850 */     MCD::OPC_CheckPredicate, 6, 81, 13, // Skip to: 4263
/* 854 */     MCD::OPC_Decode, 188, 14, 43, // Opcode: OR_MM
/* 858 */     MCD::OPC_FilterValue, 11, 8, 0, // Skip to: 870
/* 862 */     MCD::OPC_CheckPredicate, 6, 69, 13, // Skip to: 4263
/* 866 */     MCD::OPC_Decode, 172, 14, 43, // Opcode: NOR_MM
/* 870 */     MCD::OPC_FilterValue, 12, 8, 0, // Skip to: 882
/* 874 */     MCD::OPC_CheckPredicate, 6, 57, 13, // Skip to: 4263
/* 878 */     MCD::OPC_Decode, 217, 19, 43, // Opcode: XOR_MM
/* 882 */     MCD::OPC_FilterValue, 13, 8, 0, // Skip to: 894
/* 886 */     MCD::OPC_CheckPredicate, 6, 45, 13, // Skip to: 4263
/* 890 */     MCD::OPC_Decode, 158, 17, 43, // Opcode: SLT_MM
/* 894 */     MCD::OPC_FilterValue, 14, 37, 13, // Skip to: 4263
/* 898 */     MCD::OPC_CheckPredicate, 6, 33, 13, // Skip to: 4263
/* 902 */     MCD::OPC_Decode, 167, 17, 43, // Opcode: SLTu_MM
/* 906 */     MCD::OPC_FilterValue, 21, 171, 0, // Skip to: 1081
/* 910 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 913 */     MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 925
/* 917 */     MCD::OPC_CheckPredicate, 8, 14, 13, // Skip to: 4263
/* 921 */     MCD::OPC_Decode, 225, 13, 46, // Opcode: MULEU_S_PH_QBL_MM
/* 925 */     MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 937
/* 929 */     MCD::OPC_CheckPredicate, 8, 2, 13, // Skip to: 4263
/* 933 */     MCD::OPC_Decode, 227, 13, 46, // Opcode: MULEU_S_PH_QBR_MM
/* 937 */     MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 949
/* 941 */     MCD::OPC_CheckPredicate, 8, 246, 12, // Skip to: 4263
/* 945 */     MCD::OPC_Decode, 232, 13, 46, // Opcode: MULQ_RS_PH_MM
/* 949 */     MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 961
/* 953 */     MCD::OPC_CheckPredicate, 9, 234, 12, // Skip to: 4263
/* 957 */     MCD::OPC_Decode, 236, 13, 46, // Opcode: MULQ_S_PH_MMR2
/* 961 */     MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 973
/* 965 */     MCD::OPC_CheckPredicate, 9, 222, 12, // Skip to: 4263
/* 969 */     MCD::OPC_Decode, 234, 13, 43, // Opcode: MULQ_RS_W_MMR2
/* 973 */     MCD::OPC_FilterValue, 7, 8, 0, // Skip to: 985
/* 977 */     MCD::OPC_CheckPredicate, 9, 210, 12, // Skip to: 4263
/* 981 */     MCD::OPC_Decode, 238, 13, 43, // Opcode: MULQ_S_W_MMR2
/* 985 */     MCD::OPC_FilterValue, 8, 8, 0, // Skip to: 997
/* 989 */     MCD::OPC_CheckPredicate, 9, 198, 12, // Skip to: 4263
/* 993 */     MCD::OPC_Decode, 204, 1, 50, // Opcode: APPEND_MMR2
/* 997 */     MCD::OPC_FilterValue, 9, 8, 0, // Skip to: 1009
/* 1001 */    MCD::OPC_CheckPredicate, 9, 186, 12, // Skip to: 4263
/* 1005 */    MCD::OPC_Decode, 135, 15, 50, // Opcode: PREPEND_MMR2
/* 1009 */    MCD::OPC_FilterValue, 10, 8, 0, // Skip to: 1021
/* 1013 */    MCD::OPC_CheckPredicate, 8, 174, 12, // Skip to: 4263
/* 1017 */    MCD::OPC_Decode, 226, 12, 43, // Opcode: MODSUB_MM
/* 1021 */    MCD::OPC_FilterValue, 11, 8, 0, // Skip to: 1033
/* 1025 */    MCD::OPC_CheckPredicate, 8, 162, 12, // Skip to: 4263
/* 1029 */    MCD::OPC_Decode, 236, 16, 49, // Opcode: SHRAV_R_W_MM
/* 1033 */    MCD::OPC_FilterValue, 12, 8, 0, // Skip to: 1045
/* 1037 */    MCD::OPC_CheckPredicate, 9, 150, 12, // Skip to: 4263
/* 1041 */    MCD::OPC_Decode, 248, 16, 47, // Opcode: SHRLV_PH_MMR2
/* 1045 */    MCD::OPC_FilterValue, 13, 8, 0, // Skip to: 1057
/* 1049 */    MCD::OPC_CheckPredicate, 8, 138, 12, // Skip to: 4263
/* 1053 */    MCD::OPC_Decode, 250, 16, 47, // Opcode: SHRLV_QB_MM
/* 1057 */    MCD::OPC_FilterValue, 14, 8, 0, // Skip to: 1069
/* 1061 */    MCD::OPC_CheckPredicate, 8, 126, 12, // Skip to: 4263
/* 1065 */    MCD::OPC_Decode, 214, 16, 47, // Opcode: SHLLV_QB_MM
/* 1069 */    MCD::OPC_FilterValue, 15, 118, 12, // Skip to: 4263
/* 1073 */    MCD::OPC_CheckPredicate, 8, 114, 12, // Skip to: 4263
/* 1077 */    MCD::OPC_Decode, 218, 16, 49, // Opcode: SHLLV_S_W_MM
/* 1081 */    MCD::OPC_FilterValue, 24, 39, 0, // Skip to: 1124
/* 1085 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 1088 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 1100
/* 1092 */    MCD::OPC_CheckPredicate, 6, 95, 12, // Skip to: 4263
/* 1096 */    MCD::OPC_Decode, 131, 13, 51, // Opcode: MOVN_I_MM
/* 1100 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 1112
/* 1104 */    MCD::OPC_CheckPredicate, 6, 83, 12, // Skip to: 4263
/* 1108 */    MCD::OPC_Decode, 151, 13, 51, // Opcode: MOVZ_I_MM
/* 1112 */    MCD::OPC_FilterValue, 4, 75, 12, // Skip to: 4263
/* 1116 */    MCD::OPC_CheckPredicate, 6, 71, 12, // Skip to: 4263
/* 1120 */    MCD::OPC_Decode, 207, 11, 52, // Opcode: LWXS_MM
/* 1124 */    MCD::OPC_FilterValue, 29, 20, 0, // Skip to: 1148
/* 1128 */    MCD::OPC_CheckPredicate, 8, 59, 12, // Skip to: 4263
/* 1132 */    MCD::OPC_CheckField, 22, 4, 0, 53, 12, // Skip to: 4263
/* 1138 */    MCD::OPC_CheckField, 6, 8, 0, 47, 12, // Skip to: 4263
/* 1144 */    MCD::OPC_Decode, 210, 16, 53, // Opcode: SHILO_MM
/* 1148 */    MCD::OPC_FilterValue, 37, 63, 0, // Skip to: 1215
/* 1152 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 1155 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 1167
/* 1159 */    MCD::OPC_CheckPredicate, 8, 28, 12, // Skip to: 4263
/* 1163 */    MCD::OPC_Decode, 221, 13, 42, // Opcode: MULEQ_S_W_PHL_MM
/* 1167 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 1179
/* 1171 */    MCD::OPC_CheckPredicate, 8, 16, 12, // Skip to: 4263
/* 1175 */    MCD::OPC_Decode, 223, 13, 42, // Opcode: MULEQ_S_W_PHR_MM
/* 1179 */    MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 1191
/* 1183 */    MCD::OPC_CheckPredicate, 8, 4, 12, // Skip to: 4263
/* 1187 */    MCD::OPC_Decode, 131, 11, 52, // Opcode: LHX_MM
/* 1191 */    MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 1203
/* 1195 */    MCD::OPC_CheckPredicate, 8, 248, 11, // Skip to: 4263
/* 1199 */    MCD::OPC_Decode, 208, 11, 52, // Opcode: LWX_MM
/* 1203 */    MCD::OPC_FilterValue, 8, 240, 11, // Skip to: 4263
/* 1207 */    MCD::OPC_CheckPredicate, 8, 236, 11, // Skip to: 4263
/* 1211 */    MCD::OPC_Decode, 215, 10, 52, // Opcode: LBUX_MM
/* 1215 */    MCD::OPC_FilterValue, 44, 8, 0, // Skip to: 1227
/* 1219 */    MCD::OPC_CheckPredicate, 6, 224, 11, // Skip to: 4263
/* 1223 */    MCD::OPC_Decode, 180, 8, 54, // Opcode: EXT_MM
/* 1227 */    MCD::OPC_FilterValue, 45, 123, 0, // Skip to: 1354
/* 1231 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 1234 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 1246
/* 1238 */    MCD::OPC_CheckPredicate, 9, 205, 11, // Skip to: 4263
/* 1242 */    MCD::OPC_Decode, 134, 14, 46, // Opcode: MUL_PH_MMR2
/* 1246 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 1258
/* 1250 */    MCD::OPC_CheckPredicate, 9, 193, 11, // Skip to: 4263
/* 1254 */    MCD::OPC_Decode, 249, 14, 46, // Opcode: PRECR_QB_PH_MMR2
/* 1258 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 1270
/* 1262 */    MCD::OPC_CheckPredicate, 8, 181, 11, // Skip to: 4263
/* 1266 */    MCD::OPC_Decode, 245, 14, 46, // Opcode: PRECRQ_QB_PH_MM
/* 1270 */    MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 1282
/* 1274 */    MCD::OPC_CheckPredicate, 8, 169, 11, // Skip to: 4263
/* 1278 */    MCD::OPC_Decode, 243, 14, 55, // Opcode: PRECRQ_PH_W_MM
/* 1282 */    MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 1294
/* 1286 */    MCD::OPC_CheckPredicate, 8, 157, 11, // Skip to: 4263
/* 1290 */    MCD::OPC_Decode, 247, 14, 55, // Opcode: PRECRQ_RS_PH_W_MM
/* 1294 */    MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 1306
/* 1298 */    MCD::OPC_CheckPredicate, 8, 145, 11, // Skip to: 4263
/* 1302 */    MCD::OPC_Decode, 241, 14, 46, // Opcode: PRECRQU_S_QB_PH_MM
/* 1306 */    MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 1318
/* 1310 */    MCD::OPC_CheckPredicate, 8, 133, 11, // Skip to: 4263
/* 1314 */    MCD::OPC_Decode, 199, 14, 46, // Opcode: PACKRL_PH_MM
/* 1318 */    MCD::OPC_FilterValue, 7, 8, 0, // Skip to: 1330
/* 1322 */    MCD::OPC_CheckPredicate, 8, 121, 11, // Skip to: 4263
/* 1326 */    MCD::OPC_Decode, 218, 14, 46, // Opcode: PICK_QB_MM
/* 1330 */    MCD::OPC_FilterValue, 8, 8, 0, // Skip to: 1342
/* 1334 */    MCD::OPC_CheckPredicate, 8, 109, 11, // Skip to: 4263
/* 1338 */    MCD::OPC_Decode, 216, 14, 46, // Opcode: PICK_PH_MM
/* 1342 */    MCD::OPC_FilterValue, 16, 101, 11, // Skip to: 4263
/* 1346 */    MCD::OPC_CheckPredicate, 9, 97, 11, // Skip to: 4263
/* 1350 */    MCD::OPC_Decode, 139, 14, 46, // Opcode: MUL_S_PH_MMR2
/* 1354 */    MCD::OPC_FilterValue, 53, 94, 0, // Skip to: 1452
/* 1358 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 1361 */    MCD::OPC_FilterValue, 11, 8, 0, // Skip to: 1373
/* 1365 */    MCD::OPC_CheckPredicate, 8, 78, 11, // Skip to: 4263
/* 1369 */    MCD::OPC_Decode, 246, 16, 40, // Opcode: SHRA_R_W_MM
/* 1373 */    MCD::OPC_FilterValue, 12, 14, 0, // Skip to: 1391
/* 1377 */    MCD::OPC_CheckPredicate, 8, 66, 11, // Skip to: 4263
/* 1381 */    MCD::OPC_CheckField, 11, 1, 0, 60, 11, // Skip to: 4263
/* 1387 */    MCD::OPC_Decode, 238, 16, 56, // Opcode: SHRA_PH_MM
/* 1391 */    MCD::OPC_FilterValue, 14, 27, 0, // Skip to: 1422
/* 1395 */    MCD::OPC_ExtractField, 11, 1,  // Inst{11} ...
/* 1398 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 1410
/* 1402 */    MCD::OPC_CheckPredicate, 8, 41, 11, // Skip to: 4263
/* 1406 */    MCD::OPC_Decode, 220, 16, 56, // Opcode: SHLL_PH_MM
/* 1410 */    MCD::OPC_FilterValue, 1, 33, 11, // Skip to: 4263
/* 1414 */    MCD::OPC_CheckPredicate, 8, 29, 11, // Skip to: 4263
/* 1418 */    MCD::OPC_Decode, 224, 16, 56, // Opcode: SHLL_S_PH_MM
/* 1422 */    MCD::OPC_FilterValue, 15, 8, 0, // Skip to: 1434
/* 1426 */    MCD::OPC_CheckPredicate, 8, 17, 11, // Skip to: 4263
/* 1430 */    MCD::OPC_Decode, 226, 16, 40, // Opcode: SHLL_S_W_MM
/* 1434 */    MCD::OPC_FilterValue, 28, 9, 11, // Skip to: 4263
/* 1438 */    MCD::OPC_CheckPredicate, 8, 5, 11, // Skip to: 4263
/* 1442 */    MCD::OPC_CheckField, 11, 1, 0, 255, 10, // Skip to: 4263
/* 1448 */    MCD::OPC_Decode, 242, 16, 56, // Opcode: SHRA_R_PH_MM
/* 1452 */    MCD::OPC_FilterValue, 60, 122, 6, // Skip to: 3114
/* 1456 */    MCD::OPC_ExtractField, 6, 6,  // Inst{11-6} ...
/* 1459 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 1471
/* 1463 */    MCD::OPC_CheckPredicate, 6, 236, 10, // Skip to: 4263
/* 1467 */    MCD::OPC_Decode, 140, 19, 57, // Opcode: TEQ_MM
/* 1471 */    MCD::OPC_FilterValue, 1, 75, 0, // Skip to: 1550
/* 1475 */    MCD::OPC_ExtractField, 12, 2,  // Inst{13-12} ...
/* 1478 */    MCD::OPC_FilterValue, 0, 14, 0, // Skip to: 1496
/* 1482 */    MCD::OPC_CheckPredicate, 8, 217, 10, // Skip to: 4263
/* 1486 */    MCD::OPC_CheckField, 21, 5, 0, 211, 10, // Skip to: 4263
/* 1492 */    MCD::OPC_Decode, 186, 12, 58, // Opcode: MFHI_DSP_MM
/* 1496 */    MCD::OPC_FilterValue, 1, 14, 0, // Skip to: 1514
/* 1500 */    MCD::OPC_CheckPredicate, 8, 199, 10, // Skip to: 4263
/* 1504 */    MCD::OPC_CheckField, 21, 5, 0, 193, 10, // Skip to: 4263
/* 1510 */    MCD::OPC_Decode, 192, 12, 58, // Opcode: MFLO_DSP_MM
/* 1514 */    MCD::OPC_FilterValue, 2, 14, 0, // Skip to: 1532
/* 1518 */    MCD::OPC_CheckPredicate, 8, 181, 10, // Skip to: 4263
/* 1522 */    MCD::OPC_CheckField, 21, 5, 0, 175, 10, // Skip to: 4263
/* 1528 */    MCD::OPC_Decode, 200, 13, 59, // Opcode: MTHI_DSP_MM
/* 1532 */    MCD::OPC_FilterValue, 3, 167, 10, // Skip to: 4263
/* 1536 */    MCD::OPC_CheckPredicate, 8, 163, 10, // Skip to: 4263
/* 1540 */    MCD::OPC_CheckField, 21, 5, 0, 157, 10, // Skip to: 4263
/* 1546 */    MCD::OPC_Decode, 207, 13, 60, // Opcode: MTLO_DSP_MM
/* 1550 */    MCD::OPC_FilterValue, 2, 51, 0, // Skip to: 1605
/* 1554 */    MCD::OPC_ExtractField, 12, 2,  // Inst{13-12} ...
/* 1557 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 1569
/* 1561 */    MCD::OPC_CheckPredicate, 9, 138, 10, // Skip to: 4263
/* 1565 */    MCD::OPC_Decode, 196, 7, 61, // Opcode: DPA_W_PH_MMR2
/* 1569 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 1581
/* 1573 */    MCD::OPC_CheckPredicate, 9, 126, 10, // Skip to: 4263
/* 1577 */    MCD::OPC_Decode, 194, 7, 61, // Opcode: DPAX_W_PH_MMR2
/* 1581 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 1593
/* 1585 */    MCD::OPC_CheckPredicate, 8, 114, 10, // Skip to: 4263
/* 1589 */    MCD::OPC_Decode, 190, 7, 61, // Opcode: DPAU_H_QBL_MM
/* 1593 */    MCD::OPC_FilterValue, 3, 106, 10, // Skip to: 4263
/* 1597 */    MCD::OPC_CheckPredicate, 8, 102, 10, // Skip to: 4263
/* 1601 */    MCD::OPC_Decode, 192, 7, 61, // Opcode: DPAU_H_QBR_MM
/* 1605 */    MCD::OPC_FilterValue, 4, 144, 0, // Skip to: 1753
/* 1609 */    MCD::OPC_ExtractField, 12, 4,  // Inst{15-12} ...
/* 1612 */    MCD::OPC_FilterValue, 0, 7, 0, // Skip to: 1623
/* 1616 */    MCD::OPC_CheckPredicate, 9, 83, 10, // Skip to: 4263
/* 1620 */    MCD::OPC_Decode, 101, 62, // Opcode: ABSQ_S_QB_MMR2
/* 1623 */    MCD::OPC_FilterValue, 1, 7, 0, // Skip to: 1634
/* 1627 */    MCD::OPC_CheckPredicate, 8, 72, 10, // Skip to: 4263
/* 1631 */    MCD::OPC_Decode, 99, 62, // Opcode: ABSQ_S_PH_MM
/* 1634 */    MCD::OPC_FilterValue, 2, 7, 0, // Skip to: 1645
/* 1638 */    MCD::OPC_CheckPredicate, 8, 61, 10, // Skip to: 4263
/* 1642 */    MCD::OPC_Decode, 103, 63, // Opcode: ABSQ_S_W_MM
/* 1645 */    MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 1657
/* 1649 */    MCD::OPC_CheckPredicate, 8, 50, 10, // Skip to: 4263
/* 1653 */    MCD::OPC_Decode, 133, 3, 63, // Opcode: BITREV_MM
/* 1657 */    MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 1669
/* 1661 */    MCD::OPC_CheckPredicate, 8, 38, 10, // Skip to: 4263
/* 1665 */    MCD::OPC_Decode, 161, 10, 64, // Opcode: INSV_MM
/* 1669 */    MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 1681
/* 1673 */    MCD::OPC_CheckPredicate, 8, 26, 10, // Skip to: 4263
/* 1677 */    MCD::OPC_Decode, 229, 14, 65, // Opcode: PRECEQ_W_PHL_MM
/* 1681 */    MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 1693
/* 1685 */    MCD::OPC_CheckPredicate, 8, 14, 10, // Skip to: 4263
/* 1689 */    MCD::OPC_Decode, 231, 14, 65, // Opcode: PRECEQ_W_PHR_MM
/* 1693 */    MCD::OPC_FilterValue, 7, 8, 0, // Skip to: 1705
/* 1697 */    MCD::OPC_CheckPredicate, 8, 2, 10, // Skip to: 4263
/* 1701 */    MCD::OPC_Decode, 223, 14, 62, // Opcode: PRECEQU_PH_QBL_MM
/* 1705 */    MCD::OPC_FilterValue, 9, 8, 0, // Skip to: 1717
/* 1709 */    MCD::OPC_CheckPredicate, 8, 246, 9, // Skip to: 4263
/* 1713 */    MCD::OPC_Decode, 227, 14, 62, // Opcode: PRECEQU_PH_QBR_MM
/* 1717 */    MCD::OPC_FilterValue, 11, 8, 0, // Skip to: 1729
/* 1721 */    MCD::OPC_CheckPredicate, 8, 234, 9, // Skip to: 4263
/* 1725 */    MCD::OPC_Decode, 235, 14, 62, // Opcode: PRECEU_PH_QBL_MM
/* 1729 */    MCD::OPC_FilterValue, 13, 8, 0, // Skip to: 1741
/* 1733 */    MCD::OPC_CheckPredicate, 8, 222, 9, // Skip to: 4263
/* 1737 */    MCD::OPC_Decode, 239, 14, 62, // Opcode: PRECEU_PH_QBR_MM
/* 1741 */    MCD::OPC_FilterValue, 15, 214, 9, // Skip to: 4263
/* 1745 */    MCD::OPC_CheckPredicate, 8, 210, 9, // Skip to: 4263
/* 1749 */    MCD::OPC_Decode, 191, 15, 65, // Opcode: RADDU_W_QB_MM
/* 1753 */    MCD::OPC_FilterValue, 7, 27, 0, // Skip to: 1784
/* 1757 */    MCD::OPC_ExtractField, 12, 1,  // Inst{12} ...
/* 1760 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 1772
/* 1764 */    MCD::OPC_CheckPredicate, 9, 191, 9, // Skip to: 4263
/* 1768 */    MCD::OPC_Decode, 240, 16, 66, // Opcode: SHRA_QB_MMR2
/* 1772 */    MCD::OPC_FilterValue, 1, 183, 9, // Skip to: 4263
/* 1776 */    MCD::OPC_CheckPredicate, 9, 179, 9, // Skip to: 4263
/* 1780 */    MCD::OPC_Decode, 244, 16, 66, // Opcode: SHRA_R_QB_MMR2
/* 1784 */    MCD::OPC_FilterValue, 8, 8, 0, // Skip to: 1796
/* 1788 */    MCD::OPC_CheckPredicate, 6, 167, 9, // Skip to: 4263
/* 1792 */    MCD::OPC_Decode, 148, 19, 57, // Opcode: TGE_MM
/* 1796 */    MCD::OPC_FilterValue, 9, 39, 0, // Skip to: 1839
/* 1800 */    MCD::OPC_ExtractField, 12, 2,  // Inst{13-12} ...
/* 1803 */    MCD::OPC_FilterValue, 0, 14, 0, // Skip to: 1821
/* 1807 */    MCD::OPC_CheckPredicate, 8, 148, 9, // Skip to: 4263
/* 1811 */    MCD::OPC_CheckField, 21, 5, 0, 142, 9, // Skip to: 4263
/* 1817 */    MCD::OPC_Decode, 203, 13, 67, // Opcode: MTHLIP_MM
/* 1821 */    MCD::OPC_FilterValue, 1, 134, 9, // Skip to: 4263
/* 1825 */    MCD::OPC_CheckPredicate, 8, 130, 9, // Skip to: 4263
/* 1829 */    MCD::OPC_CheckField, 21, 5, 0, 124, 9, // Skip to: 4263
/* 1835 */    MCD::OPC_Decode, 209, 16, 67, // Opcode: SHILOV_MM
/* 1839 */    MCD::OPC_FilterValue, 10, 51, 0, // Skip to: 1894
/* 1843 */    MCD::OPC_ExtractField, 12, 2,  // Inst{13-12} ...
/* 1846 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 1858
/* 1850 */    MCD::OPC_CheckPredicate, 8, 105, 9, // Skip to: 4263
/* 1854 */    MCD::OPC_Decode, 188, 7, 61, // Opcode: DPAQ_S_W_PH_MM
/* 1858 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 1870
/* 1862 */    MCD::OPC_CheckPredicate, 8, 93, 9, // Skip to: 4263
/* 1866 */    MCD::OPC_Decode, 186, 7, 61, // Opcode: DPAQ_SA_L_W_MM
/* 1870 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 1882
/* 1874 */    MCD::OPC_CheckPredicate, 9, 81, 9, // Skip to: 4263
/* 1878 */    MCD::OPC_Decode, 184, 7, 61, // Opcode: DPAQX_S_W_PH_MMR2
/* 1882 */    MCD::OPC_FilterValue, 3, 73, 9, // Skip to: 4263
/* 1886 */    MCD::OPC_CheckPredicate, 9, 69, 9, // Skip to: 4263
/* 1890 */    MCD::OPC_Decode, 182, 7, 61, // Opcode: DPAQX_SA_W_PH_MMR2
/* 1894 */    MCD::OPC_FilterValue, 12, 75, 0, // Skip to: 1973
/* 1898 */    MCD::OPC_ExtractField, 12, 4,  // Inst{15-12} ...
/* 1901 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 1913
/* 1905 */    MCD::OPC_CheckPredicate, 8, 50, 9, // Skip to: 4263
/* 1909 */    MCD::OPC_Decode, 204, 15, 68, // Opcode: REPLV_PH_MM
/* 1913 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 1925
/* 1917 */    MCD::OPC_CheckPredicate, 8, 38, 9, // Skip to: 4263
/* 1921 */    MCD::OPC_Decode, 206, 15, 68, // Opcode: REPLV_QB_MM
/* 1925 */    MCD::OPC_FilterValue, 7, 8, 0, // Skip to: 1937
/* 1929 */    MCD::OPC_CheckPredicate, 8, 26, 9, // Skip to: 4263
/* 1933 */    MCD::OPC_Decode, 222, 14, 62, // Opcode: PRECEQU_PH_QBLA_MM
/* 1937 */    MCD::OPC_FilterValue, 9, 8, 0, // Skip to: 1949
/* 1941 */    MCD::OPC_CheckPredicate, 8, 14, 9, // Skip to: 4263
/* 1945 */    MCD::OPC_Decode, 226, 14, 62, // Opcode: PRECEQU_PH_QBRA_MM
/* 1949 */    MCD::OPC_FilterValue, 11, 8, 0, // Skip to: 1961
/* 1953 */    MCD::OPC_CheckPredicate, 8, 2, 9, // Skip to: 4263
/* 1957 */    MCD::OPC_Decode, 234, 14, 62, // Opcode: PRECEU_PH_QBLA_MM
/* 1961 */    MCD::OPC_FilterValue, 13, 250, 8, // Skip to: 4263
/* 1965 */    MCD::OPC_CheckPredicate, 8, 246, 8, // Skip to: 4263
/* 1969 */    MCD::OPC_Decode, 238, 14, 62, // Opcode: PRECEU_PH_QBRA_MM
/* 1973 */    MCD::OPC_FilterValue, 13, 123, 0, // Skip to: 2100
/* 1977 */    MCD::OPC_ExtractField, 12, 4,  // Inst{15-12} ...
/* 1980 */    MCD::OPC_FilterValue, 0, 14, 0, // Skip to: 1998
/* 1984 */    MCD::OPC_CheckPredicate, 6, 227, 8, // Skip to: 4263
/* 1988 */    MCD::OPC_CheckField, 16, 10, 0, 221, 8, // Skip to: 4263
/* 1994 */    MCD::OPC_Decode, 154, 19, 0, // Opcode: TLBP_MM
/* 1998 */    MCD::OPC_FilterValue, 1, 14, 0, // Skip to: 2016
/* 2002 */    MCD::OPC_CheckPredicate, 6, 209, 8, // Skip to: 4263
/* 2006 */    MCD::OPC_CheckField, 16, 10, 0, 203, 8, // Skip to: 4263
/* 2012 */    MCD::OPC_Decode, 156, 19, 0, // Opcode: TLBR_MM
/* 2016 */    MCD::OPC_FilterValue, 2, 14, 0, // Skip to: 2034
/* 2020 */    MCD::OPC_CheckPredicate, 6, 191, 8, // Skip to: 4263
/* 2024 */    MCD::OPC_CheckField, 16, 10, 0, 185, 8, // Skip to: 4263
/* 2030 */    MCD::OPC_Decode, 158, 19, 0, // Opcode: TLBWI_MM
/* 2034 */    MCD::OPC_FilterValue, 3, 14, 0, // Skip to: 2052
/* 2038 */    MCD::OPC_CheckPredicate, 6, 173, 8, // Skip to: 4263
/* 2042 */    MCD::OPC_CheckField, 16, 10, 0, 167, 8, // Skip to: 4263
/* 2048 */    MCD::OPC_Decode, 160, 19, 0, // Opcode: TLBWR_MM
/* 2052 */    MCD::OPC_FilterValue, 9, 8, 0, // Skip to: 2064
/* 2056 */    MCD::OPC_CheckPredicate, 6, 155, 8, // Skip to: 4263
/* 2060 */    MCD::OPC_Decode, 203, 19, 69, // Opcode: WAIT_MM
/* 2064 */    MCD::OPC_FilterValue, 14, 14, 0, // Skip to: 2082
/* 2068 */    MCD::OPC_CheckPredicate, 6, 143, 8, // Skip to: 4263
/* 2072 */    MCD::OPC_CheckField, 16, 10, 0, 137, 8, // Skip to: 4263
/* 2078 */    MCD::OPC_Decode, 231, 6, 0, // Opcode: DERET_MM
/* 2082 */    MCD::OPC_FilterValue, 15, 129, 8, // Skip to: 4263
/* 2086 */    MCD::OPC_CheckPredicate, 6, 125, 8, // Skip to: 4263
/* 2090 */    MCD::OPC_CheckField, 16, 10, 0, 119, 8, // Skip to: 4263
/* 2096 */    MCD::OPC_Decode, 148, 8, 0, // Opcode: ERET_MM
/* 2100 */    MCD::OPC_FilterValue, 15, 8, 0, // Skip to: 2112
/* 2104 */    MCD::OPC_CheckPredicate, 9, 107, 8, // Skip to: 4263
/* 2108 */    MCD::OPC_Decode, 252, 16, 56, // Opcode: SHRL_PH_MMR2
/* 2112 */    MCD::OPC_FilterValue, 16, 8, 0, // Skip to: 2124
/* 2116 */    MCD::OPC_CheckPredicate, 6, 95, 8, // Skip to: 4263
/* 2120 */    MCD::OPC_Decode, 147, 19, 57, // Opcode: TGEU_MM
/* 2124 */    MCD::OPC_FilterValue, 18, 51, 0, // Skip to: 2179
/* 2128 */    MCD::OPC_ExtractField, 12, 2,  // Inst{13-12} ...
/* 2131 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 2143
/* 2135 */    MCD::OPC_CheckPredicate, 9, 76, 8, // Skip to: 4263
/* 2139 */    MCD::OPC_Decode, 219, 7, 61, // Opcode: DPS_W_PH_MMR2
/* 2143 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 2155
/* 2147 */    MCD::OPC_CheckPredicate, 9, 64, 8, // Skip to: 4263
/* 2151 */    MCD::OPC_Decode, 217, 7, 61, // Opcode: DPSX_W_PH_MMR2
/* 2155 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 2167
/* 2159 */    MCD::OPC_CheckPredicate, 8, 52, 8, // Skip to: 4263
/* 2163 */    MCD::OPC_Decode, 213, 7, 61, // Opcode: DPSU_H_QBL_MM
/* 2167 */    MCD::OPC_FilterValue, 3, 44, 8, // Skip to: 4263
/* 2171 */    MCD::OPC_CheckPredicate, 8, 40, 8, // Skip to: 4263
/* 2175 */    MCD::OPC_Decode, 215, 7, 61, // Opcode: DPSU_H_QBR_MM
/* 2179 */    MCD::OPC_FilterValue, 23, 14, 0, // Skip to: 2197
/* 2183 */    MCD::OPC_CheckPredicate, 8, 28, 8, // Skip to: 4263
/* 2187 */    MCD::OPC_CheckField, 12, 1, 0, 22, 8, // Skip to: 4263
/* 2193 */    MCD::OPC_Decode, 210, 15, 70, // Opcode: REPL_QB_MM
/* 2197 */    MCD::OPC_FilterValue, 25, 51, 0, // Skip to: 2252
/* 2201 */    MCD::OPC_ExtractField, 12, 2,  // Inst{13-12} ...
/* 2204 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 2216
/* 2208 */    MCD::OPC_CheckPredicate, 8, 3, 8, // Skip to: 4263
/* 2212 */    MCD::OPC_Decode, 193, 15, 71, // Opcode: RDDSP_MM
/* 2216 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 2228
/* 2220 */    MCD::OPC_CheckPredicate, 8, 247, 7, // Skip to: 4263
/* 2224 */    MCD::OPC_Decode, 206, 19, 71, // Opcode: WRDSP_MM
/* 2228 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 2240
/* 2232 */    MCD::OPC_CheckPredicate, 8, 235, 7, // Skip to: 4263
/* 2236 */    MCD::OPC_Decode, 161, 8, 72, // Opcode: EXTP_MM
/* 2240 */    MCD::OPC_FilterValue, 3, 227, 7, // Skip to: 4263
/* 2244 */    MCD::OPC_CheckPredicate, 8, 223, 7, // Skip to: 4263
/* 2248 */    MCD::OPC_Decode, 158, 8, 72, // Opcode: EXTPDP_MM
/* 2252 */    MCD::OPC_FilterValue, 26, 51, 0, // Skip to: 2307
/* 2256 */    MCD::OPC_ExtractField, 12, 2,  // Inst{13-12} ...
/* 2259 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 2271
/* 2263 */    MCD::OPC_CheckPredicate, 8, 204, 7, // Skip to: 4263
/* 2267 */    MCD::OPC_Decode, 205, 7, 61, // Opcode: DPSQ_S_W_PH_MM
/* 2271 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 2283
/* 2275 */    MCD::OPC_CheckPredicate, 8, 192, 7, // Skip to: 4263
/* 2279 */    MCD::OPC_Decode, 203, 7, 61, // Opcode: DPSQ_SA_L_W_MM
/* 2283 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 2295
/* 2287 */    MCD::OPC_CheckPredicate, 9, 180, 7, // Skip to: 4263
/* 2291 */    MCD::OPC_Decode, 201, 7, 61, // Opcode: DPSQX_S_W_PH_MMR2
/* 2295 */    MCD::OPC_FilterValue, 3, 172, 7, // Skip to: 4263
/* 2299 */    MCD::OPC_CheckPredicate, 9, 168, 7, // Skip to: 4263
/* 2303 */    MCD::OPC_Decode, 199, 7, 61, // Opcode: DPSQX_SA_W_PH_MMR2
/* 2307 */    MCD::OPC_FilterValue, 29, 39, 0, // Skip to: 2350
/* 2311 */    MCD::OPC_ExtractField, 12, 4,  // Inst{15-12} ...
/* 2314 */    MCD::OPC_FilterValue, 4, 14, 0, // Skip to: 2332
/* 2318 */    MCD::OPC_CheckPredicate, 6, 149, 7, // Skip to: 4263
/* 2322 */    MCD::OPC_CheckField, 21, 5, 0, 143, 7, // Skip to: 4263
/* 2328 */    MCD::OPC_Decode, 131, 7, 73, // Opcode: DI_MM
/* 2332 */    MCD::OPC_FilterValue, 5, 135, 7, // Skip to: 4263
/* 2336 */    MCD::OPC_CheckPredicate, 6, 131, 7, // Skip to: 4263
/* 2340 */    MCD::OPC_CheckField, 21, 5, 0, 125, 7, // Skip to: 4263
/* 2346 */    MCD::OPC_Decode, 143, 8, 73, // Opcode: EI_MM
/* 2350 */    MCD::OPC_FilterValue, 32, 8, 0, // Skip to: 2362
/* 2354 */    MCD::OPC_CheckPredicate, 6, 113, 7, // Skip to: 4263
/* 2358 */    MCD::OPC_Decode, 167, 19, 57, // Opcode: TLT_MM
/* 2362 */    MCD::OPC_FilterValue, 33, 27, 0, // Skip to: 2393
/* 2366 */    MCD::OPC_ExtractField, 12, 1,  // Inst{12} ...
/* 2369 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 2381
/* 2373 */    MCD::OPC_CheckPredicate, 8, 94, 7, // Skip to: 4263
/* 2377 */    MCD::OPC_Decode, 222, 16, 66, // Opcode: SHLL_QB_MM
/* 2381 */    MCD::OPC_FilterValue, 1, 86, 7, // Skip to: 4263
/* 2385 */    MCD::OPC_CheckPredicate, 8, 82, 7, // Skip to: 4263
/* 2389 */    MCD::OPC_Decode, 254, 16, 66, // Opcode: SHRL_QB_MM
/* 2393 */    MCD::OPC_FilterValue, 34, 39, 0, // Skip to: 2436
/* 2397 */    MCD::OPC_ExtractField, 12, 2,  // Inst{13-12} ...
/* 2400 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 2412
/* 2404 */    MCD::OPC_CheckPredicate, 9, 63, 7, // Skip to: 4263
/* 2408 */    MCD::OPC_Decode, 153, 2, 74, // Opcode: BALIGN_MMR2
/* 2412 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 2424
/* 2416 */    MCD::OPC_CheckPredicate, 8, 51, 7, // Skip to: 4263
/* 2420 */    MCD::OPC_Decode, 160, 8, 75, // Opcode: EXTPV_MM
/* 2424 */    MCD::OPC_FilterValue, 3, 43, 7, // Skip to: 4263
/* 2428 */    MCD::OPC_CheckPredicate, 8, 39, 7, // Skip to: 4263
/* 2432 */    MCD::OPC_Decode, 157, 8, 75, // Opcode: EXTPDPV_MM
/* 2436 */    MCD::OPC_FilterValue, 40, 8, 0, // Skip to: 2448
/* 2440 */    MCD::OPC_CheckPredicate, 6, 27, 7, // Skip to: 4263
/* 2444 */    MCD::OPC_Decode, 166, 19, 57, // Opcode: TLTU_MM
/* 2448 */    MCD::OPC_FilterValue, 41, 51, 0, // Skip to: 2503
/* 2452 */    MCD::OPC_ExtractField, 12, 2,  // Inst{13-12} ...
/* 2455 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 2467
/* 2459 */    MCD::OPC_CheckPredicate, 8, 8, 7, // Skip to: 4263
/* 2463 */    MCD::OPC_Decode, 139, 12, 61, // Opcode: MAQ_S_W_PHR_MM
/* 2467 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 2479
/* 2471 */    MCD::OPC_CheckPredicate, 8, 252, 6, // Skip to: 4263
/* 2475 */    MCD::OPC_Decode, 137, 12, 61, // Opcode: MAQ_S_W_PHL_MM
/* 2479 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 2491
/* 2483 */    MCD::OPC_CheckPredicate, 8, 240, 6, // Skip to: 4263
/* 2487 */    MCD::OPC_Decode, 135, 12, 61, // Opcode: MAQ_SA_W_PHR_MM
/* 2491 */    MCD::OPC_FilterValue, 3, 232, 6, // Skip to: 4263
/* 2495 */    MCD::OPC_CheckPredicate, 8, 228, 6, // Skip to: 4263
/* 2499 */    MCD::OPC_Decode, 133, 12, 61, // Opcode: MAQ_SA_W_PHL_MM
/* 2503 */    MCD::OPC_FilterValue, 42, 51, 0, // Skip to: 2558
/* 2507 */    MCD::OPC_ExtractField, 12, 2,  // Inst{13-12} ...
/* 2510 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 2522
/* 2514 */    MCD::OPC_CheckPredicate, 8, 209, 6, // Skip to: 4263
/* 2518 */    MCD::OPC_Decode, 254, 11, 61, // Opcode: MADD_DSP_MM
/* 2522 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 2534
/* 2526 */    MCD::OPC_CheckPredicate, 8, 197, 6, // Skip to: 4263
/* 2530 */    MCD::OPC_Decode, 244, 11, 61, // Opcode: MADDU_DSP_MM
/* 2534 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 2546
/* 2538 */    MCD::OPC_CheckPredicate, 8, 185, 6, // Skip to: 4263
/* 2542 */    MCD::OPC_Decode, 177, 13, 61, // Opcode: MSUB_DSP_MM
/* 2546 */    MCD::OPC_FilterValue, 3, 177, 6, // Skip to: 4263
/* 2550 */    MCD::OPC_CheckPredicate, 8, 173, 6, // Skip to: 4263
/* 2554 */    MCD::OPC_Decode, 167, 13, 61, // Opcode: MSUBU_DSP_MM
/* 2558 */    MCD::OPC_FilterValue, 44, 171, 0, // Skip to: 2733
/* 2562 */    MCD::OPC_ExtractField, 12, 4,  // Inst{15-12} ...
/* 2565 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 2577
/* 2569 */    MCD::OPC_CheckPredicate, 6, 154, 6, // Skip to: 4263
/* 2573 */    MCD::OPC_Decode, 169, 16, 63, // Opcode: SEB_MM
/* 2577 */    MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 2589
/* 2581 */    MCD::OPC_CheckPredicate, 6, 142, 6, // Skip to: 4263
/* 2585 */    MCD::OPC_Decode, 173, 16, 63, // Opcode: SEH_MM
/* 2589 */    MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 2601
/* 2593 */    MCD::OPC_CheckPredicate, 6, 130, 6, // Skip to: 4263
/* 2597 */    MCD::OPC_Decode, 202, 4, 63, // Opcode: CLO_MM
/* 2601 */    MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 2613
/* 2605 */    MCD::OPC_CheckPredicate, 6, 118, 6, // Skip to: 4263
/* 2609 */    MCD::OPC_Decode, 222, 4, 63, // Opcode: CLZ_MM
/* 2613 */    MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 2625
/* 2617 */    MCD::OPC_CheckPredicate, 10, 106, 6, // Skip to: 4263
/* 2621 */    MCD::OPC_Decode, 196, 15, 76, // Opcode: RDHWR_MM
/* 2625 */    MCD::OPC_FilterValue, 7, 8, 0, // Skip to: 2637
/* 2629 */    MCD::OPC_CheckPredicate, 6, 94, 6, // Skip to: 4263
/* 2633 */    MCD::OPC_Decode, 209, 19, 63, // Opcode: WSBH_MM
/* 2637 */    MCD::OPC_FilterValue, 8, 8, 0, // Skip to: 2649
/* 2641 */    MCD::OPC_CheckPredicate, 6, 82, 6, // Skip to: 4263
/* 2645 */    MCD::OPC_Decode, 250, 13, 77, // Opcode: MULT_MM
/* 2649 */    MCD::OPC_FilterValue, 9, 8, 0, // Skip to: 2661
/* 2653 */    MCD::OPC_CheckPredicate, 6, 70, 6, // Skip to: 4263
/* 2657 */    MCD::OPC_Decode, 252, 13, 77, // Opcode: MULTu_MM
/* 2661 */    MCD::OPC_FilterValue, 10, 8, 0, // Skip to: 2673
/* 2665 */    MCD::OPC_CheckPredicate, 6, 58, 6, // Skip to: 4263
/* 2669 */    MCD::OPC_Decode, 157, 16, 77, // Opcode: SDIV_MM
/* 2673 */    MCD::OPC_FilterValue, 11, 8, 0, // Skip to: 2685
/* 2677 */    MCD::OPC_CheckPredicate, 6, 46, 6, // Skip to: 4263
/* 2681 */    MCD::OPC_Decode, 186, 19, 77, // Opcode: UDIV_MM
/* 2685 */    MCD::OPC_FilterValue, 12, 8, 0, // Skip to: 2697
/* 2689 */    MCD::OPC_CheckPredicate, 6, 34, 6, // Skip to: 4263
/* 2693 */    MCD::OPC_Decode, 255, 11, 77, // Opcode: MADD_MM
/* 2697 */    MCD::OPC_FilterValue, 13, 8, 0, // Skip to: 2709
/* 2701 */    MCD::OPC_CheckPredicate, 6, 22, 6, // Skip to: 4263
/* 2705 */    MCD::OPC_Decode, 245, 11, 77, // Opcode: MADDU_MM
/* 2709 */    MCD::OPC_FilterValue, 14, 8, 0, // Skip to: 2721
/* 2713 */    MCD::OPC_CheckPredicate, 6, 10, 6, // Skip to: 4263
/* 2717 */    MCD::OPC_Decode, 178, 13, 77, // Opcode: MSUB_MM
/* 2721 */    MCD::OPC_FilterValue, 15, 2, 6, // Skip to: 4263
/* 2725 */    MCD::OPC_CheckPredicate, 6, 254, 5, // Skip to: 4263
/* 2729 */    MCD::OPC_Decode, 168, 13, 77, // Opcode: MSUBU_MM
/* 2733 */    MCD::OPC_FilterValue, 45, 45, 0, // Skip to: 2782
/* 2737 */    MCD::OPC_ExtractField, 12, 4,  // Inst{15-12} ...
/* 2740 */    MCD::OPC_FilterValue, 6, 14, 0, // Skip to: 2758
/* 2744 */    MCD::OPC_CheckPredicate, 6, 235, 5, // Skip to: 4263
/* 2748 */    MCD::OPC_CheckField, 21, 5, 0, 229, 5, // Skip to: 4263
/* 2754 */    MCD::OPC_Decode, 211, 18, 78, // Opcode: SYNC_MM
/* 2758 */    MCD::OPC_FilterValue, 8, 8, 0, // Skip to: 2770
/* 2762 */    MCD::OPC_CheckPredicate, 6, 217, 5, // Skip to: 4263
/* 2766 */    MCD::OPC_Decode, 214, 18, 69, // Opcode: SYSCALL_MM
/* 2770 */    MCD::OPC_FilterValue, 13, 209, 5, // Skip to: 4263
/* 2774 */    MCD::OPC_CheckPredicate, 6, 205, 5, // Skip to: 4263
/* 2778 */    MCD::OPC_Decode, 145, 16, 69, // Opcode: SDBBP_MM
/* 2782 */    MCD::OPC_FilterValue, 48, 8, 0, // Skip to: 2794
/* 2786 */    MCD::OPC_CheckPredicate, 6, 193, 5, // Skip to: 4263
/* 2790 */    MCD::OPC_Decode, 171, 19, 57, // Opcode: TNE_MM
/* 2794 */    MCD::OPC_FilterValue, 50, 51, 0, // Skip to: 2849
/* 2798 */    MCD::OPC_ExtractField, 12, 2,  // Inst{13-12} ...
/* 2801 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 2813
/* 2805 */    MCD::OPC_CheckPredicate, 8, 174, 5, // Skip to: 4263
/* 2809 */    MCD::OPC_Decode, 249, 13, 79, // Opcode: MULT_DSP_MM
/* 2813 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 2825
/* 2817 */    MCD::OPC_CheckPredicate, 8, 162, 5, // Skip to: 4263
/* 2821 */    MCD::OPC_Decode, 247, 13, 79, // Opcode: MULTU_DSP_MM
/* 2825 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 2837
/* 2829 */    MCD::OPC_CheckPredicate, 9, 150, 5, // Skip to: 4263
/* 2833 */    MCD::OPC_Decode, 244, 13, 61, // Opcode: MULSA_W_PH_MMR2
/* 2837 */    MCD::OPC_FilterValue, 3, 142, 5, // Skip to: 4263
/* 2841 */    MCD::OPC_CheckPredicate, 8, 138, 5, // Skip to: 4263
/* 2845 */    MCD::OPC_Decode, 242, 13, 61, // Opcode: MULSAQ_S_W_PH_MM
/* 2849 */    MCD::OPC_FilterValue, 52, 27, 0, // Skip to: 2880
/* 2853 */    MCD::OPC_ExtractField, 12, 4,  // Inst{15-12} ...
/* 2856 */    MCD::OPC_FilterValue, 12, 8, 0, // Skip to: 2868
/* 2860 */    MCD::OPC_CheckPredicate, 11, 119, 5, // Skip to: 4263
/* 2864 */    MCD::OPC_Decode, 175, 4, 80, // Opcode: CFC2_MM
/* 2868 */    MCD::OPC_FilterValue, 13, 111, 5, // Skip to: 4263
/* 2872 */    MCD::OPC_CheckPredicate, 11, 107, 5, // Skip to: 4263
/* 2876 */    MCD::OPC_Decode, 197, 5, 81, // Opcode: CTC2_MM
/* 2880 */    MCD::OPC_FilterValue, 53, 75, 0, // Skip to: 2959
/* 2884 */    MCD::OPC_ExtractField, 12, 4,  // Inst{15-12} ...
/* 2887 */    MCD::OPC_FilterValue, 0, 14, 0, // Skip to: 2905
/* 2891 */    MCD::OPC_CheckPredicate, 6, 88, 5, // Skip to: 4263
/* 2895 */    MCD::OPC_CheckField, 21, 5, 0, 82, 5, // Skip to: 4263
/* 2901 */    MCD::OPC_Decode, 187, 12, 73, // Opcode: MFHI_MM
/* 2905 */    MCD::OPC_FilterValue, 1, 14, 0, // Skip to: 2923
/* 2909 */    MCD::OPC_CheckPredicate, 6, 70, 5, // Skip to: 4263
/* 2913 */    MCD::OPC_CheckField, 21, 5, 0, 64, 5, // Skip to: 4263
/* 2919 */    MCD::OPC_Decode, 193, 12, 73, // Opcode: MFLO_MM
/* 2923 */    MCD::OPC_FilterValue, 2, 14, 0, // Skip to: 2941
/* 2927 */    MCD::OPC_CheckPredicate, 6, 52, 5, // Skip to: 4263
/* 2931 */    MCD::OPC_CheckField, 21, 5, 0, 46, 5, // Skip to: 4263
/* 2937 */    MCD::OPC_Decode, 201, 13, 73, // Opcode: MTHI_MM
/* 2941 */    MCD::OPC_FilterValue, 3, 38, 5, // Skip to: 4263
/* 2945 */    MCD::OPC_CheckPredicate, 6, 34, 5, // Skip to: 4263
/* 2949 */    MCD::OPC_CheckField, 21, 5, 0, 28, 5, // Skip to: 4263
/* 2955 */    MCD::OPC_Decode, 208, 13, 73, // Opcode: MTLO_MM
/* 2959 */    MCD::OPC_FilterValue, 57, 51, 0, // Skip to: 3014
/* 2963 */    MCD::OPC_ExtractField, 12, 2,  // Inst{13-12} ...
/* 2966 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 2978
/* 2970 */    MCD::OPC_CheckPredicate, 8, 9, 5, // Skip to: 4263
/* 2974 */    MCD::OPC_Decode, 177, 8, 72, // Opcode: EXTR_W_MM
/* 2978 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 2990
/* 2982 */    MCD::OPC_CheckPredicate, 8, 253, 4, // Skip to: 4263
/* 2986 */    MCD::OPC_Decode, 173, 8, 72, // Opcode: EXTR_R_W_MM
/* 2990 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 3002
/* 2994 */    MCD::OPC_CheckPredicate, 8, 241, 4, // Skip to: 4263
/* 2998 */    MCD::OPC_Decode, 171, 8, 72, // Opcode: EXTR_RS_W_MM
/* 3002 */    MCD::OPC_FilterValue, 3, 233, 4, // Skip to: 4263
/* 3006 */    MCD::OPC_CheckPredicate, 8, 229, 4, // Skip to: 4263
/* 3010 */    MCD::OPC_Decode, 175, 8, 72, // Opcode: EXTR_S_H_MM
/* 3014 */    MCD::OPC_FilterValue, 58, 51, 0, // Skip to: 3069
/* 3018 */    MCD::OPC_ExtractField, 12, 2,  // Inst{13-12} ...
/* 3021 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 3033
/* 3025 */    MCD::OPC_CheckPredicate, 8, 210, 4, // Skip to: 4263
/* 3029 */    MCD::OPC_Decode, 169, 8, 75, // Opcode: EXTRV_W_MM
/* 3033 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 3045
/* 3037 */    MCD::OPC_CheckPredicate, 8, 198, 4, // Skip to: 4263
/* 3041 */    MCD::OPC_Decode, 165, 8, 75, // Opcode: EXTRV_R_W_MM
/* 3045 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 3057
/* 3049 */    MCD::OPC_CheckPredicate, 8, 186, 4, // Skip to: 4263
/* 3053 */    MCD::OPC_Decode, 163, 8, 75, // Opcode: EXTRV_RS_W_MM
/* 3057 */    MCD::OPC_FilterValue, 3, 178, 4, // Skip to: 4263
/* 3061 */    MCD::OPC_CheckPredicate, 8, 174, 4, // Skip to: 4263
/* 3065 */    MCD::OPC_Decode, 167, 8, 75, // Opcode: EXTRV_S_H_MM
/* 3069 */    MCD::OPC_FilterValue, 60, 166, 4, // Skip to: 4263
/* 3073 */    MCD::OPC_ExtractField, 12, 4,  // Inst{15-12} ...
/* 3076 */    MCD::OPC_FilterValue, 0, 22, 0, // Skip to: 3102
/* 3080 */    MCD::OPC_CheckPredicate, 6, 10, 0, // Skip to: 3094
/* 3084 */    MCD::OPC_CheckField, 21, 5, 0, 4, 0, // Skip to: 3094
/* 3090 */    MCD::OPC_Decode, 197, 10, 73, // Opcode: JR_MM
/* 3094 */    MCD::OPC_CheckPredicate, 6, 141, 4, // Skip to: 4263
/* 3098 */    MCD::OPC_Decode, 177, 10, 63, // Opcode: JALR_MM
/* 3102 */    MCD::OPC_FilterValue, 4, 133, 4, // Skip to: 4263
/* 3106 */    MCD::OPC_CheckPredicate, 6, 129, 4, // Skip to: 4263
/* 3110 */    MCD::OPC_Decode, 175, 10, 63, // Opcode: JALRS_MM
/* 3114 */    MCD::OPC_FilterValue, 61, 121, 4, // Skip to: 4263
/* 3118 */    MCD::OPC_CheckPredicate, 8, 117, 4, // Skip to: 4263
/* 3122 */    MCD::OPC_CheckField, 6, 5, 0, 111, 4, // Skip to: 4263
/* 3128 */    MCD::OPC_Decode, 208, 15, 82, // Opcode: REPL_PH_MM
/* 3132 */    MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 3144
/* 3136 */    MCD::OPC_CheckPredicate, 6, 99, 4, // Skip to: 4263
/* 3140 */    MCD::OPC_Decode, 175, 1, 83, // Opcode: ADDi_MM
/* 3144 */    MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 3156
/* 3148 */    MCD::OPC_CheckPredicate, 6, 87, 4, // Skip to: 4263
/* 3152 */    MCD::OPC_Decode, 223, 10, 84, // Opcode: LBu_MM
/* 3156 */    MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 3168
/* 3160 */    MCD::OPC_CheckPredicate, 6, 75, 4, // Skip to: 4263
/* 3164 */    MCD::OPC_Decode, 129, 16, 84, // Opcode: SB_MM
/* 3168 */    MCD::OPC_FilterValue, 7, 8, 0, // Skip to: 3180
/* 3172 */    MCD::OPC_CheckPredicate, 6, 63, 4, // Skip to: 4263
/* 3176 */    MCD::OPC_Decode, 217, 10, 84, // Opcode: LB_MM
/* 3180 */    MCD::OPC_FilterValue, 8, 63, 0, // Skip to: 3247
/* 3184 */    MCD::OPC_ExtractField, 12, 4,  // Inst{15-12} ...
/* 3187 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 3199
/* 3191 */    MCD::OPC_CheckPredicate, 6, 44, 4, // Skip to: 4263
/* 3195 */    MCD::OPC_Decode, 192, 11, 85, // Opcode: LWP_MM
/* 3199 */    MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 3211
/* 3203 */    MCD::OPC_CheckPredicate, 6, 32, 4, // Skip to: 4263
/* 3207 */    MCD::OPC_Decode, 188, 11, 85, // Opcode: LWM32_MM
/* 3211 */    MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 3223
/* 3215 */    MCD::OPC_CheckPredicate, 6, 20, 4, // Skip to: 4263
/* 3219 */    MCD::OPC_Decode, 151, 4, 86, // Opcode: CACHE_MM
/* 3223 */    MCD::OPC_FilterValue, 9, 8, 0, // Skip to: 3235
/* 3227 */    MCD::OPC_CheckPredicate, 6, 8, 4, // Skip to: 4263
/* 3231 */    MCD::OPC_Decode, 194, 18, 85, // Opcode: SWP_MM
/* 3235 */    MCD::OPC_FilterValue, 13, 0, 4, // Skip to: 4263
/* 3239 */    MCD::OPC_CheckPredicate, 6, 252, 3, // Skip to: 4263
/* 3243 */    MCD::OPC_Decode, 192, 18, 85, // Opcode: SWM32_MM
/* 3247 */    MCD::OPC_FilterValue, 12, 8, 0, // Skip to: 3259
/* 3251 */    MCD::OPC_CheckPredicate, 6, 240, 3, // Skip to: 4263
/* 3255 */    MCD::OPC_Decode, 177, 1, 83, // Opcode: ADDiu_MM
/* 3259 */    MCD::OPC_FilterValue, 13, 8, 0, // Skip to: 3271
/* 3263 */    MCD::OPC_CheckPredicate, 6, 228, 3, // Skip to: 4263
/* 3267 */    MCD::OPC_Decode, 137, 11, 84, // Opcode: LHu_MM
/* 3271 */    MCD::OPC_FilterValue, 14, 8, 0, // Skip to: 3283
/* 3275 */    MCD::OPC_CheckPredicate, 6, 216, 3, // Skip to: 4263
/* 3279 */    MCD::OPC_Decode, 255, 16, 84, // Opcode: SH_MM
/* 3283 */    MCD::OPC_FilterValue, 15, 8, 0, // Skip to: 3295
/* 3287 */    MCD::OPC_CheckPredicate, 6, 204, 3, // Skip to: 4263
/* 3291 */    MCD::OPC_Decode, 132, 11, 84, // Opcode: LH_MM
/* 3295 */    MCD::OPC_FilterValue, 16, 255, 0, // Skip to: 3554
/* 3299 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 3302 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 3314
/* 3306 */    MCD::OPC_CheckPredicate, 6, 185, 3, // Skip to: 4263
/* 3310 */    MCD::OPC_Decode, 179, 3, 87, // Opcode: BLTZ_MM
/* 3314 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 3326
/* 3318 */    MCD::OPC_CheckPredicate, 6, 173, 3, // Skip to: 4263
/* 3322 */    MCD::OPC_Decode, 174, 3, 87, // Opcode: BLTZAL_MM
/* 3326 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 3338
/* 3330 */    MCD::OPC_CheckPredicate, 6, 161, 3, // Skip to: 4263
/* 3334 */    MCD::OPC_Decode, 226, 2, 87, // Opcode: BGEZ_MM
/* 3338 */    MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 3350
/* 3342 */    MCD::OPC_CheckPredicate, 6, 149, 3, // Skip to: 4263
/* 3346 */    MCD::OPC_Decode, 221, 2, 87, // Opcode: BGEZAL_MM
/* 3350 */    MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 3362
/* 3354 */    MCD::OPC_CheckPredicate, 6, 137, 3, // Skip to: 4263
/* 3358 */    MCD::OPC_Decode, 152, 3, 87, // Opcode: BLEZ_MM
/* 3362 */    MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 3374
/* 3366 */    MCD::OPC_CheckPredicate, 5, 125, 3, // Skip to: 4263
/* 3370 */    MCD::OPC_Decode, 205, 3, 87, // Opcode: BNEZC_MM
/* 3374 */    MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 3386
/* 3378 */    MCD::OPC_CheckPredicate, 6, 113, 3, // Skip to: 4263
/* 3382 */    MCD::OPC_Decode, 243, 2, 87, // Opcode: BGTZ_MM
/* 3386 */    MCD::OPC_FilterValue, 7, 8, 0, // Skip to: 3398
/* 3390 */    MCD::OPC_CheckPredicate, 5, 101, 3, // Skip to: 4263
/* 3394 */    MCD::OPC_Decode, 197, 2, 87, // Opcode: BEQZC_MM
/* 3398 */    MCD::OPC_FilterValue, 8, 8, 0, // Skip to: 3410
/* 3402 */    MCD::OPC_CheckPredicate, 6, 89, 3, // Skip to: 4263
/* 3406 */    MCD::OPC_Decode, 164, 19, 88, // Opcode: TLTI_MM
/* 3410 */    MCD::OPC_FilterValue, 9, 8, 0, // Skip to: 3422
/* 3414 */    MCD::OPC_CheckPredicate, 6, 77, 3, // Skip to: 4263
/* 3418 */    MCD::OPC_Decode, 145, 19, 88, // Opcode: TGEI_MM
/* 3422 */    MCD::OPC_FilterValue, 10, 8, 0, // Skip to: 3434
/* 3426 */    MCD::OPC_CheckPredicate, 6, 65, 3, // Skip to: 4263
/* 3430 */    MCD::OPC_Decode, 163, 19, 88, // Opcode: TLTIU_MM
/* 3434 */    MCD::OPC_FilterValue, 11, 8, 0, // Skip to: 3446
/* 3438 */    MCD::OPC_CheckPredicate, 6, 53, 3, // Skip to: 4263
/* 3442 */    MCD::OPC_Decode, 144, 19, 88, // Opcode: TGEIU_MM
/* 3446 */    MCD::OPC_FilterValue, 12, 8, 0, // Skip to: 3458
/* 3450 */    MCD::OPC_CheckPredicate, 6, 41, 3, // Skip to: 4263
/* 3454 */    MCD::OPC_Decode, 170, 19, 88, // Opcode: TNEI_MM
/* 3458 */    MCD::OPC_FilterValue, 13, 8, 0, // Skip to: 3470
/* 3462 */    MCD::OPC_CheckPredicate, 6, 29, 3, // Skip to: 4263
/* 3466 */    MCD::OPC_Decode, 167, 11, 89, // Opcode: LUi_MM
/* 3470 */    MCD::OPC_FilterValue, 14, 8, 0, // Skip to: 3482
/* 3474 */    MCD::OPC_CheckPredicate, 6, 17, 3, // Skip to: 4263
/* 3478 */    MCD::OPC_Decode, 139, 19, 88, // Opcode: TEQI_MM
/* 3482 */    MCD::OPC_FilterValue, 16, 8, 0, // Skip to: 3494
/* 3486 */    MCD::OPC_CheckPredicate, 6, 5, 3, // Skip to: 4263
/* 3490 */    MCD::OPC_Decode, 209, 18, 90, // Opcode: SYNCI_MM
/* 3494 */    MCD::OPC_FilterValue, 17, 8, 0, // Skip to: 3506
/* 3498 */    MCD::OPC_CheckPredicate, 6, 249, 2, // Skip to: 4263
/* 3502 */    MCD::OPC_Decode, 173, 3, 87, // Opcode: BLTZALS_MM
/* 3506 */    MCD::OPC_FilterValue, 19, 8, 0, // Skip to: 3518
/* 3510 */    MCD::OPC_CheckPredicate, 6, 237, 2, // Skip to: 4263
/* 3514 */    MCD::OPC_Decode, 220, 2, 87, // Opcode: BGEZALS_MM
/* 3518 */    MCD::OPC_FilterValue, 25, 14, 0, // Skip to: 3536
/* 3522 */    MCD::OPC_CheckPredicate, 12, 225, 2, // Skip to: 4263
/* 3526 */    MCD::OPC_CheckField, 16, 5, 0, 219, 2, // Skip to: 4263
/* 3532 */    MCD::OPC_Decode, 218, 3, 91, // Opcode: BPOSGE32C_MMR3
/* 3536 */    MCD::OPC_FilterValue, 27, 211, 2, // Skip to: 4263
/* 3540 */    MCD::OPC_CheckPredicate, 13, 207, 2, // Skip to: 4263
/* 3544 */    MCD::OPC_CheckField, 16, 5, 0, 201, 2, // Skip to: 4263
/* 3550 */    MCD::OPC_Decode, 219, 3, 92, // Opcode: BPOSGE32_MM
/* 3554 */    MCD::OPC_FilterValue, 20, 8, 0, // Skip to: 3566
/* 3558 */    MCD::OPC_CheckPredicate, 6, 189, 2, // Skip to: 4263
/* 3562 */    MCD::OPC_Decode, 196, 14, 93, // Opcode: ORi_MM
/* 3566 */    MCD::OPC_FilterValue, 21, 135, 0, // Skip to: 3705
/* 3570 */    MCD::OPC_ExtractField, 0, 11,  // Inst{10-0} ...
/* 3573 */    MCD::OPC_FilterValue, 59, 27, 0, // Skip to: 3604
/* 3577 */    MCD::OPC_ExtractField, 11, 5,  // Inst{15-11} ...
/* 3580 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 3592
/* 3584 */    MCD::OPC_CheckPredicate, 14, 163, 2, // Skip to: 4263
/* 3588 */    MCD::OPC_Decode, 174, 4, 94, // Opcode: CFC1_MM
/* 3592 */    MCD::OPC_FilterValue, 3, 155, 2, // Skip to: 4263
/* 3596 */    MCD::OPC_CheckPredicate, 14, 151, 2, // Skip to: 4263
/* 3600 */    MCD::OPC_Decode, 196, 5, 95, // Opcode: CTC1_MM
/* 3604 */    MCD::OPC_FilterValue, 251, 2, 27, 0, // Skip to: 3636
/* 3609 */    MCD::OPC_ExtractField, 11, 2,  // Inst{12-11} ...
/* 3612 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 3624
/* 3616 */    MCD::OPC_CheckPredicate, 6, 131, 2, // Skip to: 4263
/* 3620 */    MCD::OPC_Decode, 247, 12, 96, // Opcode: MOVF_I_MM
/* 3624 */    MCD::OPC_FilterValue, 1, 123, 2, // Skip to: 4263
/* 3628 */    MCD::OPC_CheckPredicate, 6, 119, 2, // Skip to: 4263
/* 3632 */    MCD::OPC_Decode, 139, 13, 96, // Opcode: MOVT_I_MM
/* 3636 */    MCD::OPC_FilterValue, 160, 3, 8, 0, // Skip to: 3649
/* 3641 */    MCD::OPC_CheckPredicate, 6, 106, 2, // Skip to: 4263
/* 3645 */    MCD::OPC_Decode, 130, 15, 97, // Opcode: PREFX_MM
/* 3649 */    MCD::OPC_FilterValue, 187, 4, 97, 2, // Skip to: 4263
/* 3654 */    MCD::OPC_ExtractField, 11, 5,  // Inst{15-11} ...
/* 3657 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 3669
/* 3661 */    MCD::OPC_CheckPredicate, 14, 86, 2, // Skip to: 4263
/* 3665 */    MCD::OPC_Decode, 237, 15, 98, // Opcode: RSQRT_S_MM
/* 3669 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 3681
/* 3673 */    MCD::OPC_CheckPredicate, 14, 74, 2, // Skip to: 4263
/* 3677 */    MCD::OPC_Decode, 202, 15, 98, // Opcode: RECIP_S_MM
/* 3681 */    MCD::OPC_FilterValue, 8, 8, 0, // Skip to: 3693
/* 3685 */    MCD::OPC_CheckPredicate, 14, 62, 2, // Skip to: 4263
/* 3689 */    MCD::OPC_Decode, 235, 15, 99, // Opcode: RSQRT_D_MM
/* 3693 */    MCD::OPC_FilterValue, 10, 54, 2, // Skip to: 4263
/* 3697 */    MCD::OPC_CheckPredicate, 14, 50, 2, // Skip to: 4263
/* 3701 */    MCD::OPC_Decode, 200, 15, 99, // Opcode: RECIP_D_MM
/* 3705 */    MCD::OPC_FilterValue, 22, 42, 0, // Skip to: 3751
/* 3709 */    MCD::OPC_ExtractField, 0, 11,  // Inst{10-0} ...
/* 3712 */    MCD::OPC_FilterValue, 197, 1, 8, 0, // Skip to: 3725
/* 3717 */    MCD::OPC_CheckPredicate, 8, 30, 2, // Skip to: 4263
/* 3721 */    MCD::OPC_Decode, 232, 4, 42, // Opcode: CMPGU_EQ_QB_MM
/* 3725 */    MCD::OPC_FilterValue, 133, 2, 8, 0, // Skip to: 3738
/* 3730 */    MCD::OPC_CheckPredicate, 8, 17, 2, // Skip to: 4263
/* 3734 */    MCD::OPC_Decode, 236, 4, 42, // Opcode: CMPGU_LT_QB_MM
/* 3738 */    MCD::OPC_FilterValue, 197, 2, 8, 2, // Skip to: 4263
/* 3743 */    MCD::OPC_CheckPredicate, 8, 4, 2, // Skip to: 4263
/* 3747 */    MCD::OPC_Decode, 234, 4, 42, // Opcode: CMPGU_LE_QB_MM
/* 3751 */    MCD::OPC_FilterValue, 24, 49, 1, // Skip to: 4060
/* 3755 */    MCD::OPC_ExtractField, 12, 4,  // Inst{15-12} ...
/* 3758 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 3770
/* 3762 */    MCD::OPC_CheckPredicate, 6, 241, 1, // Skip to: 4263
/* 3766 */    MCD::OPC_Decode, 185, 11, 85, // Opcode: LWL_MM
/* 3770 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 3782
/* 3774 */    MCD::OPC_CheckPredicate, 6, 229, 1, // Skip to: 4263
/* 3778 */    MCD::OPC_Decode, 198, 11, 85, // Opcode: LWR_MM
/* 3782 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 3794
/* 3786 */    MCD::OPC_CheckPredicate, 6, 217, 1, // Skip to: 4263
/* 3790 */    MCD::OPC_Decode, 131, 15, 86, // Opcode: PREF_MM
/* 3794 */    MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 3806
/* 3798 */    MCD::OPC_CheckPredicate, 6, 205, 1, // Skip to: 4263
/* 3802 */    MCD::OPC_Decode, 149, 11, 85, // Opcode: LL_MM
/* 3806 */    MCD::OPC_FilterValue, 6, 99, 0, // Skip to: 3909
/* 3810 */    MCD::OPC_ExtractField, 9, 3,  // Inst{11-9} ...
/* 3813 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 3825
/* 3817 */    MCD::OPC_CheckPredicate, 6, 186, 1, // Skip to: 4263
/* 3821 */    MCD::OPC_Decode, 222, 10, 100, // Opcode: LBuE_MM
/* 3825 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 3837
/* 3829 */    MCD::OPC_CheckPredicate, 6, 174, 1, // Skip to: 4263
/* 3833 */    MCD::OPC_Decode, 136, 11, 100, // Opcode: LHuE_MM
/* 3837 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 3849
/* 3841 */    MCD::OPC_CheckPredicate, 6, 162, 1, // Skip to: 4263
/* 3845 */    MCD::OPC_Decode, 184, 11, 100, // Opcode: LWLE_MM
/* 3849 */    MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 3861
/* 3853 */    MCD::OPC_CheckPredicate, 6, 150, 1, // Skip to: 4263
/* 3857 */    MCD::OPC_Decode, 197, 11, 100, // Opcode: LWRE_MM
/* 3861 */    MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 3873
/* 3865 */    MCD::OPC_CheckPredicate, 6, 138, 1, // Skip to: 4263
/* 3869 */    MCD::OPC_Decode, 210, 10, 100, // Opcode: LBE_MM
/* 3873 */    MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 3885
/* 3877 */    MCD::OPC_CheckPredicate, 6, 126, 1, // Skip to: 4263
/* 3881 */    MCD::OPC_Decode, 128, 11, 100, // Opcode: LHE_MM
/* 3885 */    MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 3897
/* 3889 */    MCD::OPC_CheckPredicate, 6, 114, 1, // Skip to: 4263
/* 3893 */    MCD::OPC_Decode, 147, 11, 100, // Opcode: LLE_MM
/* 3897 */    MCD::OPC_FilterValue, 7, 106, 1, // Skip to: 4263
/* 3901 */    MCD::OPC_CheckPredicate, 6, 102, 1, // Skip to: 4263
/* 3905 */    MCD::OPC_Decode, 178, 11, 100, // Opcode: LWE_MM
/* 3909 */    MCD::OPC_FilterValue, 8, 8, 0, // Skip to: 3921
/* 3913 */    MCD::OPC_CheckPredicate, 6, 90, 1, // Skip to: 4263
/* 3917 */    MCD::OPC_Decode, 189, 18, 85, // Opcode: SWL_MM
/* 3921 */    MCD::OPC_FilterValue, 9, 8, 0, // Skip to: 3933
/* 3925 */    MCD::OPC_CheckPredicate, 6, 78, 1, // Skip to: 4263
/* 3929 */    MCD::OPC_Decode, 200, 18, 85, // Opcode: SWR_MM
/* 3933 */    MCD::OPC_FilterValue, 10, 99, 0, // Skip to: 4036
/* 3937 */    MCD::OPC_ExtractField, 9, 3,  // Inst{11-9} ...
/* 3940 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 3952
/* 3944 */    MCD::OPC_CheckPredicate, 6, 59, 1, // Skip to: 4263
/* 3948 */    MCD::OPC_Decode, 188, 18, 100, // Opcode: SWLE_MM
/* 3952 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 3964
/* 3956 */    MCD::OPC_CheckPredicate, 6, 47, 1, // Skip to: 4263
/* 3960 */    MCD::OPC_Decode, 199, 18, 100, // Opcode: SWRE_MM
/* 3964 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 3976
/* 3968 */    MCD::OPC_CheckPredicate, 6, 35, 1, // Skip to: 4263
/* 3972 */    MCD::OPC_Decode, 128, 15, 101, // Opcode: PREFE_MM
/* 3976 */    MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 3988
/* 3980 */    MCD::OPC_CheckPredicate, 6, 23, 1, // Skip to: 4263
/* 3984 */    MCD::OPC_Decode, 149, 4, 101, // Opcode: CACHEE_MM
/* 3988 */    MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 4000
/* 3992 */    MCD::OPC_CheckPredicate, 6, 11, 1, // Skip to: 4263
/* 3996 */    MCD::OPC_Decode, 255, 15, 100, // Opcode: SBE_MM
/* 4000 */    MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 4012
/* 4004 */    MCD::OPC_CheckPredicate, 6, 255, 0, // Skip to: 4263
/* 4008 */    MCD::OPC_Decode, 202, 16, 100, // Opcode: SHE_MM
/* 4012 */    MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 4024
/* 4016 */    MCD::OPC_CheckPredicate, 6, 243, 0, // Skip to: 4263
/* 4020 */    MCD::OPC_Decode, 137, 16, 100, // Opcode: SCE_MM
/* 4024 */    MCD::OPC_FilterValue, 7, 235, 0, // Skip to: 4263
/* 4028 */    MCD::OPC_CheckPredicate, 6, 231, 0, // Skip to: 4263
/* 4032 */    MCD::OPC_Decode, 183, 18, 100, // Opcode: SWE_MM
/* 4036 */    MCD::OPC_FilterValue, 11, 8, 0, // Skip to: 4048
/* 4040 */    MCD::OPC_CheckPredicate, 6, 219, 0, // Skip to: 4263
/* 4044 */    MCD::OPC_Decode, 139, 16, 85, // Opcode: SC_MM
/* 4048 */    MCD::OPC_FilterValue, 14, 211, 0, // Skip to: 4263
/* 4052 */    MCD::OPC_CheckPredicate, 10, 207, 0, // Skip to: 4263
/* 4056 */    MCD::OPC_Decode, 202, 11, 85, // Opcode: LWU_MM
/* 4060 */    MCD::OPC_FilterValue, 28, 8, 0, // Skip to: 4072
/* 4064 */    MCD::OPC_CheckPredicate, 6, 195, 0, // Skip to: 4263
/* 4068 */    MCD::OPC_Decode, 225, 19, 93, // Opcode: XORi_MM
/* 4072 */    MCD::OPC_FilterValue, 29, 8, 0, // Skip to: 4084
/* 4076 */    MCD::OPC_CheckPredicate, 6, 183, 0, // Skip to: 4263
/* 4080 */    MCD::OPC_Decode, 178, 10, 102, // Opcode: JALS_MM
/* 4084 */    MCD::OPC_FilterValue, 30, 7, 0, // Skip to: 4095
/* 4088 */    MCD::OPC_CheckPredicate, 6, 171, 0, // Skip to: 4263
/* 4092 */    MCD::OPC_Decode, 108, 103, // Opcode: ADDIUPC_MM
/* 4095 */    MCD::OPC_FilterValue, 36, 8, 0, // Skip to: 4107
/* 4099 */    MCD::OPC_CheckPredicate, 6, 160, 0, // Skip to: 4263
/* 4103 */    MCD::OPC_Decode, 161, 17, 83, // Opcode: SLTi_MM
/* 4107 */    MCD::OPC_FilterValue, 37, 8, 0, // Skip to: 4119
/* 4111 */    MCD::OPC_CheckPredicate, 6, 148, 0, // Skip to: 4263
/* 4115 */    MCD::OPC_Decode, 199, 2, 104, // Opcode: BEQ_MM
/* 4119 */    MCD::OPC_FilterValue, 38, 8, 0, // Skip to: 4131
/* 4123 */    MCD::OPC_CheckPredicate, 14, 136, 0, // Skip to: 4263
/* 4127 */    MCD::OPC_Decode, 177, 18, 105, // Opcode: SWC1_MM
/* 4131 */    MCD::OPC_FilterValue, 39, 8, 0, // Skip to: 4143
/* 4135 */    MCD::OPC_CheckPredicate, 14, 124, 0, // Skip to: 4263
/* 4139 */    MCD::OPC_Decode, 172, 11, 105, // Opcode: LWC1_MM
/* 4143 */    MCD::OPC_FilterValue, 44, 8, 0, // Skip to: 4155
/* 4147 */    MCD::OPC_CheckPredicate, 6, 112, 0, // Skip to: 4263
/* 4151 */    MCD::OPC_Decode, 164, 17, 83, // Opcode: SLTiu_MM
/* 4155 */    MCD::OPC_FilterValue, 45, 8, 0, // Skip to: 4167
/* 4159 */    MCD::OPC_CheckPredicate, 6, 100, 0, // Skip to: 4263
/* 4163 */    MCD::OPC_Decode, 207, 3, 104, // Opcode: BNE_MM
/* 4167 */    MCD::OPC_FilterValue, 46, 8, 0, // Skip to: 4179
/* 4171 */    MCD::OPC_CheckPredicate, 15, 88, 0, // Skip to: 4263
/* 4175 */    MCD::OPC_Decode, 151, 16, 105, // Opcode: SDC1_MM
/* 4179 */    MCD::OPC_FilterValue, 47, 8, 0, // Skip to: 4191
/* 4183 */    MCD::OPC_CheckPredicate, 15, 76, 0, // Skip to: 4263
/* 4187 */    MCD::OPC_Decode, 228, 10, 105, // Opcode: LDC1_MM
/* 4191 */    MCD::OPC_FilterValue, 52, 8, 0, // Skip to: 4203
/* 4195 */    MCD::OPC_CheckPredicate, 6, 64, 0, // Skip to: 4263
/* 4199 */    MCD::OPC_Decode, 202, 1, 93, // Opcode: ANDi_MM
/* 4203 */    MCD::OPC_FilterValue, 53, 8, 0, // Skip to: 4215
/* 4207 */    MCD::OPC_CheckPredicate, 6, 52, 0, // Skip to: 4263
/* 4211 */    MCD::OPC_Decode, 198, 10, 102, // Opcode: J_MM
/* 4215 */    MCD::OPC_FilterValue, 60, 8, 0, // Skip to: 4227
/* 4219 */    MCD::OPC_CheckPredicate, 6, 40, 0, // Skip to: 4263
/* 4223 */    MCD::OPC_Decode, 180, 10, 102, // Opcode: JALX_MM
/* 4227 */    MCD::OPC_FilterValue, 61, 8, 0, // Skip to: 4239
/* 4231 */    MCD::OPC_CheckPredicate, 6, 28, 0, // Skip to: 4263
/* 4235 */    MCD::OPC_Decode, 181, 10, 102, // Opcode: JAL_MM
/* 4239 */    MCD::OPC_FilterValue, 62, 8, 0, // Skip to: 4251
/* 4243 */    MCD::OPC_CheckPredicate, 6, 16, 0, // Skip to: 4263
/* 4247 */    MCD::OPC_Decode, 205, 18, 84, // Opcode: SW_MM
/* 4251 */    MCD::OPC_FilterValue, 63, 8, 0, // Skip to: 4263
/* 4255 */    MCD::OPC_CheckPredicate, 6, 4, 0, // Skip to: 4263
/* 4259 */    MCD::OPC_Decode, 209, 11, 84, // Opcode: LW_MM
/* 4263 */    MCD::OPC_Fail,
  0
};

static const uint8_t DecoderTableMicroMips32r6FP6432[] = {
/* 0 */       MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 3 */       MCD::OPC_FilterValue, 21, 29, 0, // Skip to: 36
/* 7 */       MCD::OPC_ExtractField, 0, 16,  // Inst{15-0} ...
/* 10 */      MCD::OPC_FilterValue, 187, 96, 8, 0, // Skip to: 23
/* 15 */      MCD::OPC_CheckPredicate, 16, 41, 0, // Skip to: 60
/* 19 */      MCD::OPC_Decode, 179, 12, 106, // Opcode: MFHC1_D64_MMR6
/* 23 */      MCD::OPC_FilterValue, 187, 112, 32, 0, // Skip to: 60
/* 28 */      MCD::OPC_CheckPredicate, 16, 28, 0, // Skip to: 60
/* 32 */      MCD::OPC_Decode, 194, 13, 107, // Opcode: MTHC1_D64_MMR6
/* 36 */      MCD::OPC_FilterValue, 46, 8, 0, // Skip to: 48
/* 40 */      MCD::OPC_CheckPredicate, 16, 16, 0, // Skip to: 60
/* 44 */      MCD::OPC_Decode, 150, 16, 105, // Opcode: SDC1_D64_MMR6
/* 48 */      MCD::OPC_FilterValue, 47, 8, 0, // Skip to: 60
/* 52 */      MCD::OPC_CheckPredicate, 16, 4, 0, // Skip to: 60
/* 56 */      MCD::OPC_Decode, 227, 10, 105, // Opcode: LDC1_D64_MMR6
/* 60 */      MCD::OPC_Fail,
  0
};

static const uint8_t DecoderTableMicroMipsR616[] = {
/* 0 */       MCD::OPC_ExtractField, 10, 6,  // Inst{15-10} ...
/* 3 */       MCD::OPC_FilterValue, 1, 27, 0, // Skip to: 34
/* 7 */       MCD::OPC_ExtractField, 0, 1,  // Inst{0} ...
/* 10 */      MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 22
/* 14 */      MCD::OPC_CheckPredicate, 17, 71, 1, // Skip to: 345
/* 18 */      MCD::OPC_Decode, 144, 1, 108, // Opcode: ADDU16_MMR6
/* 22 */      MCD::OPC_FilterValue, 1, 63, 1, // Skip to: 345
/* 26 */      MCD::OPC_CheckPredicate, 17, 59, 1, // Skip to: 345
/* 30 */      MCD::OPC_Decode, 143, 18, 108, // Opcode: SUBU16_MMR6
/* 34 */      MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 46
/* 38 */      MCD::OPC_CheckPredicate, 17, 47, 1, // Skip to: 345
/* 42 */      MCD::OPC_Decode, 239, 12, 21, // Opcode: MOVE16_MMR6
/* 46 */      MCD::OPC_FilterValue, 9, 27, 0, // Skip to: 77
/* 50 */      MCD::OPC_ExtractField, 0, 1,  // Inst{0} ...
/* 53 */      MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 65
/* 57 */      MCD::OPC_CheckPredicate, 17, 28, 1, // Skip to: 345
/* 61 */      MCD::OPC_Decode, 139, 17, 22, // Opcode: SLL16_MMR6
/* 65 */      MCD::OPC_FilterValue, 1, 20, 1, // Skip to: 345
/* 69 */      MCD::OPC_CheckPredicate, 17, 16, 1, // Skip to: 345
/* 73 */      MCD::OPC_Decode, 207, 17, 22, // Opcode: SRL16_MMR6
/* 77 */      MCD::OPC_FilterValue, 11, 8, 0, // Skip to: 89
/* 81 */      MCD::OPC_CheckPredicate, 17, 4, 1, // Skip to: 345
/* 85 */      MCD::OPC_Decode, 191, 1, 23, // Opcode: ANDI16_MMR6
/* 89 */      MCD::OPC_FilterValue, 17, 156, 0, // Skip to: 249
/* 93 */      MCD::OPC_ExtractField, 0, 4,  // Inst{3-0} ...
/* 96 */      MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 108
/* 100 */     MCD::OPC_CheckPredicate, 17, 241, 0, // Skip to: 345
/* 104 */     MCD::OPC_Decode, 179, 14, 109, // Opcode: NOT16_MMR6
/* 108 */     MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 120
/* 112 */     MCD::OPC_CheckPredicate, 17, 229, 0, // Skip to: 345
/* 116 */     MCD::OPC_Decode, 188, 1, 110, // Opcode: AND16_MMR6
/* 120 */     MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 132
/* 124 */     MCD::OPC_CheckPredicate, 17, 217, 0, // Skip to: 345
/* 128 */     MCD::OPC_Decode, 187, 11, 26, // Opcode: LWM16_MMR6
/* 132 */     MCD::OPC_FilterValue, 3, 27, 0, // Skip to: 163
/* 136 */     MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 139 */     MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 151
/* 143 */     MCD::OPC_CheckPredicate, 17, 198, 0, // Skip to: 345
/* 147 */     MCD::OPC_Decode, 193, 10, 111, // Opcode: JRC16_MMR6
/* 151 */     MCD::OPC_FilterValue, 1, 190, 0, // Skip to: 345
/* 155 */     MCD::OPC_CheckPredicate, 17, 186, 0, // Skip to: 345
/* 159 */     MCD::OPC_Decode, 194, 10, 112, // Opcode: JRCADDIUSP_MMR6
/* 163 */     MCD::OPC_FilterValue, 8, 8, 0, // Skip to: 175
/* 167 */     MCD::OPC_CheckPredicate, 17, 174, 0, // Skip to: 345
/* 171 */     MCD::OPC_Decode, 213, 19, 110, // Opcode: XOR16_MMR6
/* 175 */     MCD::OPC_FilterValue, 9, 8, 0, // Skip to: 187
/* 179 */     MCD::OPC_CheckPredicate, 17, 162, 0, // Skip to: 345
/* 183 */     MCD::OPC_Decode, 184, 14, 110, // Opcode: OR16_MMR6
/* 187 */     MCD::OPC_FilterValue, 10, 8, 0, // Skip to: 199
/* 191 */     MCD::OPC_CheckPredicate, 17, 150, 0, // Skip to: 345
/* 195 */     MCD::OPC_Decode, 191, 18, 26, // Opcode: SWM16_MMR6
/* 199 */     MCD::OPC_FilterValue, 11, 142, 0, // Skip to: 345
/* 203 */     MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 206 */     MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 218
/* 210 */     MCD::OPC_CheckPredicate, 17, 131, 0, // Skip to: 345
/* 214 */     MCD::OPC_Decode, 170, 10, 111, // Opcode: JALRC16_MMR6
/* 218 */     MCD::OPC_FilterValue, 1, 123, 0, // Skip to: 345
/* 222 */     MCD::OPC_ExtractField, 5, 1,  // Inst{5} ...
/* 225 */     MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 237
/* 229 */     MCD::OPC_CheckPredicate, 17, 112, 0, // Skip to: 345
/* 233 */     MCD::OPC_Decode, 223, 3, 113, // Opcode: BREAK16_MMR6
/* 237 */     MCD::OPC_FilterValue, 1, 104, 0, // Skip to: 345
/* 241 */     MCD::OPC_CheckPredicate, 17, 100, 0, // Skip to: 345
/* 245 */     MCD::OPC_Decode, 144, 16, 113, // Opcode: SDBBP16_MMR6
/* 249 */     MCD::OPC_FilterValue, 34, 8, 0, // Skip to: 261
/* 253 */     MCD::OPC_CheckPredicate, 17, 88, 0, // Skip to: 345
/* 257 */     MCD::OPC_Decode, 252, 15, 20, // Opcode: SB16_MMR6
/* 261 */     MCD::OPC_FilterValue, 35, 8, 0, // Skip to: 273
/* 265 */     MCD::OPC_CheckPredicate, 17, 76, 0, // Skip to: 345
/* 269 */     MCD::OPC_Decode, 195, 2, 37, // Opcode: BEQZC16_MMR6
/* 273 */     MCD::OPC_FilterValue, 42, 8, 0, // Skip to: 285
/* 277 */     MCD::OPC_CheckPredicate, 17, 64, 0, // Skip to: 345
/* 281 */     MCD::OPC_Decode, 199, 16, 20, // Opcode: SH16_MMR6
/* 285 */     MCD::OPC_FilterValue, 43, 8, 0, // Skip to: 297
/* 289 */     MCD::OPC_CheckPredicate, 17, 52, 0, // Skip to: 345
/* 293 */     MCD::OPC_Decode, 203, 3, 37, // Opcode: BNEZC16_MMR6
/* 297 */     MCD::OPC_FilterValue, 50, 8, 0, // Skip to: 309
/* 301 */     MCD::OPC_CheckPredicate, 17, 40, 0, // Skip to: 345
/* 305 */     MCD::OPC_Decode, 202, 18, 30, // Opcode: SWSP_MMR6
/* 309 */     MCD::OPC_FilterValue, 51, 8, 0, // Skip to: 321
/* 313 */     MCD::OPC_CheckPredicate, 17, 28, 0, // Skip to: 345
/* 317 */     MCD::OPC_Decode, 160, 2, 38, // Opcode: BC16_MMR6
/* 321 */     MCD::OPC_FilterValue, 58, 8, 0, // Skip to: 333
/* 325 */     MCD::OPC_CheckPredicate, 17, 16, 0, // Skip to: 345
/* 329 */     MCD::OPC_Decode, 174, 18, 20, // Opcode: SW16_MMR6
/* 333 */     MCD::OPC_FilterValue, 59, 8, 0, // Skip to: 345
/* 337 */     MCD::OPC_CheckPredicate, 17, 4, 0, // Skip to: 345
/* 341 */     MCD::OPC_Decode, 139, 11, 39, // Opcode: LI16_MMR6
/* 345 */     MCD::OPC_Fail,
  0
};

static const uint8_t DecoderTableMicroMipsR632[] = {
/* 0 */       MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 3 */       MCD::OPC_FilterValue, 0, 138, 3, // Skip to: 913
/* 7 */       MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 10 */      MCD::OPC_FilterValue, 0, 96, 0, // Skip to: 110
/* 14 */      MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 17 */      MCD::OPC_FilterValue, 0, 47, 0, // Skip to: 68
/* 21 */      MCD::OPC_ExtractField, 11, 15,  // Inst{25-11} ...
/* 24 */      MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 36
/* 28 */      MCD::OPC_CheckPredicate, 18, 28, 0, // Skip to: 60
/* 32 */      MCD::OPC_Decode, 229, 17, 0, // Opcode: SSNOP_MMR6
/* 36 */      MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 48
/* 40 */      MCD::OPC_CheckPredicate, 18, 16, 0, // Skip to: 60
/* 44 */      MCD::OPC_Decode, 141, 8, 0, // Opcode: EHB_MMR6
/* 48 */      MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 60
/* 52 */      MCD::OPC_CheckPredicate, 18, 4, 0, // Skip to: 60
/* 56 */      MCD::OPC_Decode, 202, 14, 0, // Opcode: PAUSE_MMR6
/* 60 */      MCD::OPC_CheckPredicate, 18, 155, 14, // Skip to: 3803
/* 64 */      MCD::OPC_Decode, 152, 17, 40, // Opcode: SLL_MMR6
/* 68 */      MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 80
/* 72 */      MCD::OPC_CheckPredicate, 18, 143, 14, // Skip to: 3803
/* 76 */      MCD::OPC_Decode, 179, 16, 43, // Opcode: SELEQZ_MMR6
/* 80 */      MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 92
/* 84 */      MCD::OPC_CheckPredicate, 18, 131, 14, // Skip to: 3803
/* 88 */      MCD::OPC_Decode, 186, 16, 43, // Opcode: SELNEZ_MMR6
/* 92 */      MCD::OPC_FilterValue, 7, 123, 14, // Skip to: 3803
/* 96 */      MCD::OPC_CheckPredicate, 18, 119, 14, // Skip to: 3803
/* 100 */     MCD::OPC_CheckField, 14, 2, 0, 113, 14, // Skip to: 3803
/* 106 */     MCD::OPC_Decode, 197, 15, 114, // Opcode: RDHWR_MMR6
/* 110 */     MCD::OPC_FilterValue, 7, 8, 0, // Skip to: 122
/* 114 */     MCD::OPC_CheckPredicate, 18, 101, 14, // Skip to: 3803
/* 118 */     MCD::OPC_Decode, 225, 3, 44, // Opcode: BREAK_MMR6
/* 122 */     MCD::OPC_FilterValue, 12, 8, 0, // Skip to: 134
/* 126 */     MCD::OPC_CheckPredicate, 18, 89, 14, // Skip to: 3803
/* 130 */     MCD::OPC_Decode, 163, 10, 45, // Opcode: INS_MMR6
/* 134 */     MCD::OPC_FilterValue, 15, 14, 0, // Skip to: 152
/* 138 */     MCD::OPC_CheckPredicate, 18, 77, 14, // Skip to: 3803
/* 142 */     MCD::OPC_CheckField, 6, 3, 0, 71, 14, // Skip to: 3803
/* 148 */     MCD::OPC_Decode, 159, 11, 115, // Opcode: LSA_MMR6
/* 152 */     MCD::OPC_FilterValue, 16, 117, 0, // Skip to: 273
/* 156 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 159 */     MCD::OPC_FilterValue, 1, 14, 0, // Skip to: 177
/* 163 */     MCD::OPC_CheckPredicate, 18, 52, 14, // Skip to: 3803
/* 167 */     MCD::OPC_CheckField, 16, 5, 0, 46, 14, // Skip to: 3803
/* 173 */     MCD::OPC_Decode, 223, 4, 14, // Opcode: CLZ_MMR6
/* 177 */     MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 189
/* 181 */     MCD::OPC_CheckPredicate, 18, 34, 14, // Skip to: 3803
/* 185 */     MCD::OPC_Decode, 173, 1, 43, // Opcode: ADD_MMR6
/* 189 */     MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 201
/* 193 */     MCD::OPC_CheckPredicate, 18, 22, 14, // Skip to: 3803
/* 197 */     MCD::OPC_Decode, 149, 1, 43, // Opcode: ADDU_MMR6
/* 201 */     MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 213
/* 205 */     MCD::OPC_CheckPredicate, 18, 10, 14, // Skip to: 3803
/* 209 */     MCD::OPC_Decode, 166, 18, 43, // Opcode: SUB_MMR6
/* 213 */     MCD::OPC_FilterValue, 7, 8, 0, // Skip to: 225
/* 217 */     MCD::OPC_CheckPredicate, 18, 254, 13, // Skip to: 3803
/* 221 */     MCD::OPC_Decode, 148, 18, 43, // Opcode: SUBU_MMR6
/* 225 */     MCD::OPC_FilterValue, 9, 8, 0, // Skip to: 237
/* 229 */     MCD::OPC_CheckPredicate, 18, 242, 13, // Skip to: 3803
/* 233 */     MCD::OPC_Decode, 195, 1, 43, // Opcode: AND_MMR6
/* 237 */     MCD::OPC_FilterValue, 10, 8, 0, // Skip to: 249
/* 241 */     MCD::OPC_CheckPredicate, 18, 230, 13, // Skip to: 3803
/* 245 */     MCD::OPC_Decode, 189, 14, 43, // Opcode: OR_MMR6
/* 249 */     MCD::OPC_FilterValue, 11, 8, 0, // Skip to: 261
/* 253 */     MCD::OPC_CheckPredicate, 18, 218, 13, // Skip to: 3803
/* 257 */     MCD::OPC_Decode, 173, 14, 43, // Opcode: NOR_MMR6
/* 261 */     MCD::OPC_FilterValue, 12, 210, 13, // Skip to: 3803
/* 265 */     MCD::OPC_CheckPredicate, 18, 206, 13, // Skip to: 3803
/* 269 */     MCD::OPC_Decode, 218, 19, 43, // Opcode: XOR_MMR6
/* 273 */     MCD::OPC_FilterValue, 24, 99, 0, // Skip to: 376
/* 277 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 280 */     MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 292
/* 284 */     MCD::OPC_CheckPredicate, 18, 187, 13, // Skip to: 3803
/* 288 */     MCD::OPC_Decode, 132, 14, 43, // Opcode: MUL_MMR6
/* 292 */     MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 304
/* 296 */     MCD::OPC_CheckPredicate, 18, 175, 13, // Skip to: 3803
/* 300 */     MCD::OPC_Decode, 218, 13, 43, // Opcode: MUH_MMR6
/* 304 */     MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 316
/* 308 */     MCD::OPC_CheckPredicate, 18, 163, 13, // Skip to: 3803
/* 312 */     MCD::OPC_Decode, 254, 13, 43, // Opcode: MULU_MMR6
/* 316 */     MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 328
/* 320 */     MCD::OPC_CheckPredicate, 18, 151, 13, // Skip to: 3803
/* 324 */     MCD::OPC_Decode, 217, 13, 43, // Opcode: MUHU_MMR6
/* 328 */     MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 340
/* 332 */     MCD::OPC_CheckPredicate, 18, 139, 13, // Skip to: 3803
/* 336 */     MCD::OPC_Decode, 250, 6, 43, // Opcode: DIV_MMR6
/* 340 */     MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 352
/* 344 */     MCD::OPC_CheckPredicate, 18, 127, 13, // Skip to: 3803
/* 348 */     MCD::OPC_Decode, 229, 12, 43, // Opcode: MOD_MMR6
/* 352 */     MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 364
/* 356 */     MCD::OPC_CheckPredicate, 18, 115, 13, // Skip to: 3803
/* 360 */     MCD::OPC_Decode, 249, 6, 43, // Opcode: DIVU_MMR6
/* 364 */     MCD::OPC_FilterValue, 7, 107, 13, // Skip to: 3803
/* 368 */     MCD::OPC_CheckPredicate, 18, 103, 13, // Skip to: 3803
/* 372 */     MCD::OPC_Decode, 228, 12, 43, // Opcode: MODU_MMR6
/* 376 */     MCD::OPC_FilterValue, 31, 14, 0, // Skip to: 394
/* 380 */     MCD::OPC_CheckPredicate, 18, 91, 13, // Skip to: 3803
/* 384 */     MCD::OPC_CheckField, 6, 3, 0, 85, 13, // Skip to: 3803
/* 390 */     MCD::OPC_Decode, 183, 1, 116, // Opcode: ALIGN_MMR6
/* 394 */     MCD::OPC_FilterValue, 44, 8, 0, // Skip to: 406
/* 398 */     MCD::OPC_CheckPredicate, 18, 73, 13, // Skip to: 3803
/* 402 */     MCD::OPC_Decode, 181, 8, 54, // Opcode: EXT_MMR6
/* 406 */     MCD::OPC_FilterValue, 52, 39, 0, // Skip to: 449
/* 410 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 413 */     MCD::OPC_FilterValue, 3, 14, 0, // Skip to: 431
/* 417 */     MCD::OPC_CheckPredicate, 18, 54, 13, // Skip to: 3803
/* 421 */     MCD::OPC_CheckField, 14, 2, 0, 48, 13, // Skip to: 3803
/* 427 */     MCD::OPC_Decode, 175, 12, 117, // Opcode: MFHC0_MMR6
/* 431 */     MCD::OPC_FilterValue, 11, 40, 13, // Skip to: 3803
/* 435 */     MCD::OPC_CheckPredicate, 18, 36, 13, // Skip to: 3803
/* 439 */     MCD::OPC_CheckField, 14, 2, 0, 30, 13, // Skip to: 3803
/* 445 */     MCD::OPC_Decode, 190, 13, 118, // Opcode: MTHC0_MMR6
/* 449 */     MCD::OPC_FilterValue, 60, 22, 13, // Skip to: 3803
/* 453 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 456 */     MCD::OPC_FilterValue, 3, 14, 0, // Skip to: 474
/* 460 */     MCD::OPC_CheckPredicate, 18, 11, 13, // Skip to: 3803
/* 464 */     MCD::OPC_CheckField, 14, 2, 0, 5, 13, // Skip to: 3803
/* 470 */     MCD::OPC_Decode, 169, 12, 117, // Opcode: MFC0_MMR6
/* 474 */     MCD::OPC_FilterValue, 5, 63, 0, // Skip to: 541
/* 478 */     MCD::OPC_ExtractField, 11, 5,  // Inst{15-11} ...
/* 481 */     MCD::OPC_FilterValue, 3, 14, 0, // Skip to: 499
/* 485 */     MCD::OPC_CheckPredicate, 18, 242, 12, // Skip to: 3803
/* 489 */     MCD::OPC_CheckField, 21, 5, 0, 236, 12, // Skip to: 3803
/* 495 */     MCD::OPC_Decode, 136, 8, 73, // Opcode: DVP_MMR6
/* 499 */     MCD::OPC_FilterValue, 7, 14, 0, // Skip to: 517
/* 503 */     MCD::OPC_CheckPredicate, 18, 224, 12, // Skip to: 3803
/* 507 */     MCD::OPC_CheckField, 21, 5, 0, 218, 12, // Skip to: 3803
/* 513 */     MCD::OPC_Decode, 152, 8, 73, // Opcode: EVP_MMR6
/* 517 */     MCD::OPC_FilterValue, 28, 8, 0, // Skip to: 529
/* 521 */     MCD::OPC_CheckPredicate, 18, 206, 12, // Skip to: 3803
/* 525 */     MCD::OPC_Decode, 198, 15, 63, // Opcode: RDPGPR_MMR6
/* 529 */     MCD::OPC_FilterValue, 30, 198, 12, // Skip to: 3803
/* 533 */     MCD::OPC_CheckPredicate, 18, 194, 12, // Skip to: 3803
/* 537 */     MCD::OPC_Decode, 207, 19, 63, // Opcode: WRPGPR_MMR6
/* 541 */     MCD::OPC_FilterValue, 11, 14, 0, // Skip to: 559
/* 545 */     MCD::OPC_CheckPredicate, 18, 182, 12, // Skip to: 3803
/* 549 */     MCD::OPC_CheckField, 14, 2, 0, 176, 12, // Skip to: 3803
/* 555 */     MCD::OPC_Decode, 184, 13, 118, // Opcode: MTC0_MMR6
/* 559 */     MCD::OPC_FilterValue, 12, 63, 0, // Skip to: 626
/* 563 */     MCD::OPC_ExtractField, 11, 5,  // Inst{15-11} ...
/* 566 */     MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 578
/* 570 */     MCD::OPC_CheckPredicate, 18, 157, 12, // Skip to: 3803
/* 574 */     MCD::OPC_Decode, 135, 3, 77, // Opcode: BITSWAP_MMR6
/* 578 */     MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 590
/* 582 */     MCD::OPC_CheckPredicate, 18, 145, 12, // Skip to: 3803
/* 586 */     MCD::OPC_Decode, 170, 16, 63, // Opcode: SEB_MMR6
/* 590 */     MCD::OPC_FilterValue, 7, 8, 0, // Skip to: 602
/* 594 */     MCD::OPC_CheckPredicate, 18, 133, 12, // Skip to: 3803
/* 598 */     MCD::OPC_Decode, 174, 16, 63, // Opcode: SEH_MMR6
/* 602 */     MCD::OPC_FilterValue, 9, 8, 0, // Skip to: 614
/* 606 */     MCD::OPC_CheckPredicate, 18, 121, 12, // Skip to: 3803
/* 610 */     MCD::OPC_Decode, 203, 4, 63, // Opcode: CLO_MMR6
/* 614 */     MCD::OPC_FilterValue, 15, 113, 12, // Skip to: 3803
/* 618 */     MCD::OPC_CheckPredicate, 18, 109, 12, // Skip to: 3803
/* 622 */     MCD::OPC_Decode, 210, 19, 63, // Opcode: WSBH_MMR6
/* 626 */     MCD::OPC_FilterValue, 13, 130, 0, // Skip to: 760
/* 630 */     MCD::OPC_ExtractField, 11, 5,  // Inst{15-11} ...
/* 633 */     MCD::OPC_FilterValue, 8, 14, 0, // Skip to: 651
/* 637 */     MCD::OPC_CheckPredicate, 18, 90, 12, // Skip to: 3803
/* 641 */     MCD::OPC_CheckField, 16, 10, 0, 84, 12, // Skip to: 3803
/* 647 */     MCD::OPC_Decode, 152, 19, 0, // Opcode: TLBINV_MMR6
/* 651 */     MCD::OPC_FilterValue, 10, 14, 0, // Skip to: 669
/* 655 */     MCD::OPC_CheckPredicate, 18, 72, 12, // Skip to: 3803
/* 659 */     MCD::OPC_CheckField, 16, 10, 0, 66, 12, // Skip to: 3803
/* 665 */     MCD::OPC_Decode, 151, 19, 0, // Opcode: TLBINVF_MMR6
/* 669 */     MCD::OPC_FilterValue, 13, 14, 0, // Skip to: 687
/* 673 */     MCD::OPC_CheckPredicate, 18, 54, 12, // Skip to: 3803
/* 677 */     MCD::OPC_CheckField, 21, 5, 0, 48, 12, // Skip to: 3803
/* 683 */     MCD::OPC_Decode, 212, 18, 78, // Opcode: SYNC_MMR6
/* 687 */     MCD::OPC_FilterValue, 18, 8, 0, // Skip to: 699
/* 691 */     MCD::OPC_CheckPredicate, 18, 36, 12, // Skip to: 3803
/* 695 */     MCD::OPC_Decode, 204, 19, 69, // Opcode: WAIT_MMR6
/* 699 */     MCD::OPC_FilterValue, 27, 8, 0, // Skip to: 711
/* 703 */     MCD::OPC_CheckPredicate, 18, 24, 12, // Skip to: 3803
/* 707 */     MCD::OPC_Decode, 146, 16, 69, // Opcode: SDBBP_MMR6
/* 711 */     MCD::OPC_FilterValue, 28, 14, 0, // Skip to: 729
/* 715 */     MCD::OPC_CheckPredicate, 18, 12, 12, // Skip to: 3803
/* 719 */     MCD::OPC_CheckField, 16, 10, 0, 6, 12, // Skip to: 3803
/* 725 */     MCD::OPC_Decode, 232, 6, 0, // Opcode: DERET_MMR6
/* 729 */     MCD::OPC_FilterValue, 30, 254, 11, // Skip to: 3803
/* 733 */     MCD::OPC_ExtractField, 16, 10,  // Inst{25-16} ...
/* 736 */     MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 748
/* 740 */     MCD::OPC_CheckPredicate, 18, 243, 11, // Skip to: 3803
/* 744 */     MCD::OPC_Decode, 149, 8, 0, // Opcode: ERET_MMR6
/* 748 */     MCD::OPC_FilterValue, 1, 235, 11, // Skip to: 3803
/* 752 */     MCD::OPC_CheckPredicate, 18, 231, 11, // Skip to: 3803
/* 756 */     MCD::OPC_Decode, 147, 8, 0, // Opcode: ERETNC_MMR6
/* 760 */     MCD::OPC_FilterValue, 20, 75, 0, // Skip to: 839
/* 764 */     MCD::OPC_ExtractField, 11, 5,  // Inst{15-11} ...
/* 767 */     MCD::OPC_FilterValue, 9, 8, 0, // Skip to: 779
/* 771 */     MCD::OPC_CheckPredicate, 18, 212, 11, // Skip to: 3803
/* 775 */     MCD::OPC_Decode, 174, 12, 80, // Opcode: MFC2_MMR6
/* 779 */     MCD::OPC_FilterValue, 11, 8, 0, // Skip to: 791
/* 783 */     MCD::OPC_CheckPredicate, 18, 200, 11, // Skip to: 3803
/* 787 */     MCD::OPC_Decode, 189, 13, 81, // Opcode: MTC2_MMR6
/* 791 */     MCD::OPC_FilterValue, 13, 8, 0, // Skip to: 803
/* 795 */     MCD::OPC_CheckPredicate, 19, 188, 11, // Skip to: 3803
/* 799 */     MCD::OPC_Decode, 141, 7, 119, // Opcode: DMFC2_MM64R6
/* 803 */     MCD::OPC_FilterValue, 15, 8, 0, // Skip to: 815
/* 807 */     MCD::OPC_CheckPredicate, 19, 176, 11, // Skip to: 3803
/* 811 */     MCD::OPC_Decode, 152, 7, 120, // Opcode: DMTC2_MM64R6
/* 815 */     MCD::OPC_FilterValue, 17, 8, 0, // Skip to: 827
/* 819 */     MCD::OPC_CheckPredicate, 18, 164, 11, // Skip to: 3803
/* 823 */     MCD::OPC_Decode, 181, 12, 80, // Opcode: MFHC2_MMR6
/* 827 */     MCD::OPC_FilterValue, 19, 156, 11, // Skip to: 3803
/* 831 */     MCD::OPC_CheckPredicate, 18, 152, 11, // Skip to: 3803
/* 835 */     MCD::OPC_Decode, 196, 13, 81, // Opcode: MTHC2_MMR6
/* 839 */     MCD::OPC_FilterValue, 28, 27, 0, // Skip to: 870
/* 843 */     MCD::OPC_ExtractField, 11, 5,  // Inst{15-11} ...
/* 846 */     MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 858
/* 850 */     MCD::OPC_CheckPredicate, 18, 133, 11, // Skip to: 3803
/* 854 */     MCD::OPC_Decode, 172, 10, 63, // Opcode: JALRC_MMR6
/* 858 */     MCD::OPC_FilterValue, 3, 125, 11, // Skip to: 3803
/* 862 */     MCD::OPC_CheckPredicate, 18, 121, 11, // Skip to: 3803
/* 866 */     MCD::OPC_Decode, 171, 10, 63, // Opcode: JALRC_HB_MMR6
/* 870 */     MCD::OPC_FilterValue, 29, 113, 11, // Skip to: 3803
/* 874 */     MCD::OPC_ExtractField, 11, 5,  // Inst{15-11} ...
/* 877 */     MCD::OPC_FilterValue, 8, 14, 0, // Skip to: 895
/* 881 */     MCD::OPC_CheckPredicate, 18, 102, 11, // Skip to: 3803
/* 885 */     MCD::OPC_CheckField, 21, 5, 0, 96, 11, // Skip to: 3803
/* 891 */     MCD::OPC_Decode, 132, 7, 73, // Opcode: DI_MMR6
/* 895 */     MCD::OPC_FilterValue, 10, 88, 11, // Skip to: 3803
/* 899 */     MCD::OPC_CheckPredicate, 18, 84, 11, // Skip to: 3803
/* 903 */     MCD::OPC_CheckField, 21, 5, 0, 78, 11, // Skip to: 3803
/* 909 */     MCD::OPC_Decode, 144, 8, 73, // Opcode: EI_MMR6
/* 913 */     MCD::OPC_FilterValue, 4, 22, 0, // Skip to: 939
/* 917 */     MCD::OPC_CheckPredicate, 18, 10, 0, // Skip to: 931
/* 921 */     MCD::OPC_CheckField, 16, 5, 0, 4, 0, // Skip to: 931
/* 927 */     MCD::OPC_Decode, 161, 11, 121, // Opcode: LUI_MMR6
/* 931 */     MCD::OPC_CheckPredicate, 18, 52, 11, // Skip to: 3803
/* 935 */     MCD::OPC_Decode, 248, 1, 93, // Opcode: AUI_MMR6
/* 939 */     MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 951
/* 943 */     MCD::OPC_CheckPredicate, 18, 40, 11, // Skip to: 3803
/* 947 */     MCD::OPC_Decode, 216, 10, 122, // Opcode: LBU_MMR6
/* 951 */     MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 963
/* 955 */     MCD::OPC_CheckPredicate, 18, 28, 11, // Skip to: 3803
/* 959 */     MCD::OPC_Decode, 130, 16, 84, // Opcode: SB_MMR6
/* 963 */     MCD::OPC_FilterValue, 7, 8, 0, // Skip to: 975
/* 967 */     MCD::OPC_CheckPredicate, 18, 16, 11, // Skip to: 3803
/* 971 */     MCD::OPC_Decode, 218, 10, 122, // Opcode: LB_MMR6
/* 975 */     MCD::OPC_FilterValue, 8, 111, 0, // Skip to: 1090
/* 979 */     MCD::OPC_ExtractField, 12, 4,  // Inst{15-12} ...
/* 982 */     MCD::OPC_FilterValue, 0, 14, 0, // Skip to: 1000
/* 986 */     MCD::OPC_CheckPredicate, 18, 253, 10, // Skip to: 3803
/* 990 */     MCD::OPC_CheckField, 11, 1, 0, 247, 10, // Skip to: 3803
/* 996 */     MCD::OPC_Decode, 174, 11, 123, // Opcode: LWC2_MMR6
/* 1000 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 1012
/* 1004 */    MCD::OPC_CheckPredicate, 18, 235, 10, // Skip to: 3803
/* 1008 */    MCD::OPC_Decode, 193, 11, 85, // Opcode: LWP_MMR6
/* 1012 */    MCD::OPC_FilterValue, 2, 14, 0, // Skip to: 1030
/* 1016 */    MCD::OPC_CheckPredicate, 18, 223, 10, // Skip to: 3803
/* 1020 */    MCD::OPC_CheckField, 11, 1, 0, 217, 10, // Skip to: 3803
/* 1026 */    MCD::OPC_Decode, 230, 10, 123, // Opcode: LDC2_MMR6
/* 1030 */    MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 1042
/* 1034 */    MCD::OPC_CheckPredicate, 18, 205, 10, // Skip to: 3803
/* 1038 */    MCD::OPC_Decode, 152, 4, 86, // Opcode: CACHE_MMR6
/* 1042 */    MCD::OPC_FilterValue, 8, 14, 0, // Skip to: 1060
/* 1046 */    MCD::OPC_CheckPredicate, 18, 193, 10, // Skip to: 3803
/* 1050 */    MCD::OPC_CheckField, 11, 1, 0, 187, 10, // Skip to: 3803
/* 1056 */    MCD::OPC_Decode, 179, 18, 123, // Opcode: SWC2_MMR6
/* 1060 */    MCD::OPC_FilterValue, 9, 8, 0, // Skip to: 1072
/* 1064 */    MCD::OPC_CheckPredicate, 18, 175, 10, // Skip to: 3803
/* 1068 */    MCD::OPC_Decode, 195, 18, 85, // Opcode: SWP_MMR6
/* 1072 */    MCD::OPC_FilterValue, 10, 167, 10, // Skip to: 3803
/* 1076 */    MCD::OPC_CheckPredicate, 18, 163, 10, // Skip to: 3803
/* 1080 */    MCD::OPC_CheckField, 11, 1, 0, 157, 10, // Skip to: 3803
/* 1086 */    MCD::OPC_Decode, 153, 16, 123, // Opcode: SDC2_MMR6
/* 1090 */    MCD::OPC_FilterValue, 12, 7, 0, // Skip to: 1101
/* 1094 */    MCD::OPC_CheckPredicate, 18, 145, 10, // Skip to: 3803
/* 1098 */    MCD::OPC_Decode, 114, 83, // Opcode: ADDIU_MMR6
/* 1101 */    MCD::OPC_FilterValue, 14, 8, 0, // Skip to: 1113
/* 1105 */    MCD::OPC_CheckPredicate, 18, 134, 10, // Skip to: 3803
/* 1109 */    MCD::OPC_Decode, 128, 17, 84, // Opcode: SH_MMR6
/* 1113 */    MCD::OPC_FilterValue, 16, 87, 0, // Skip to: 1204
/* 1117 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 1120 */    MCD::OPC_FilterValue, 8, 8, 0, // Skip to: 1132
/* 1124 */    MCD::OPC_CheckPredicate, 20, 115, 10, // Skip to: 3803
/* 1128 */    MCD::OPC_Decode, 162, 2, 124, // Opcode: BC1EQZC_MMR6
/* 1132 */    MCD::OPC_FilterValue, 9, 8, 0, // Skip to: 1144
/* 1136 */    MCD::OPC_CheckPredicate, 20, 103, 10, // Skip to: 3803
/* 1140 */    MCD::OPC_Decode, 167, 2, 124, // Opcode: BC1NEZC_MMR6
/* 1144 */    MCD::OPC_FilterValue, 10, 8, 0, // Skip to: 1156
/* 1148 */    MCD::OPC_CheckPredicate, 18, 91, 10, // Skip to: 3803
/* 1152 */    MCD::OPC_Decode, 172, 2, 125, // Opcode: BC2EQZC_MMR6
/* 1156 */    MCD::OPC_FilterValue, 11, 8, 0, // Skip to: 1168
/* 1160 */    MCD::OPC_CheckPredicate, 18, 79, 10, // Skip to: 3803
/* 1164 */    MCD::OPC_Decode, 174, 2, 125, // Opcode: BC2NEZC_MMR6
/* 1168 */    MCD::OPC_FilterValue, 12, 8, 0, // Skip to: 1180
/* 1172 */    MCD::OPC_CheckPredicate, 18, 67, 10, // Skip to: 3803
/* 1176 */    MCD::OPC_Decode, 210, 18, 126, // Opcode: SYNCI_MMR6
/* 1180 */    MCD::OPC_FilterValue, 16, 8, 0, // Skip to: 1192
/* 1184 */    MCD::OPC_CheckPredicate, 19, 55, 10, // Skip to: 3803
/* 1188 */    MCD::OPC_Decode, 215, 6, 127, // Opcode: DATI_MM64R6
/* 1192 */    MCD::OPC_FilterValue, 17, 47, 10, // Skip to: 3803
/* 1196 */    MCD::OPC_CheckPredicate, 19, 43, 10, // Skip to: 3803
/* 1200 */    MCD::OPC_Decode, 211, 6, 127, // Opcode: DAHI_MM64R6
/* 1204 */    MCD::OPC_FilterValue, 20, 8, 0, // Skip to: 1216
/* 1208 */    MCD::OPC_CheckPredicate, 18, 31, 10, // Skip to: 3803
/* 1212 */    MCD::OPC_Decode, 187, 14, 93, // Opcode: ORI_MMR6
/* 1216 */    MCD::OPC_FilterValue, 21, 159, 5, // Skip to: 2659
/* 1220 */    MCD::OPC_ExtractField, 0, 11,  // Inst{10-0} ...
/* 1223 */    MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 1236
/* 1227 */    MCD::OPC_CheckPredicate, 20, 12, 10, // Skip to: 3803
/* 1231 */    MCD::OPC_Decode, 216, 12, 128, 1, // Opcode: MIN_S_MMR6
/* 1236 */    MCD::OPC_FilterValue, 5, 9, 0, // Skip to: 1249
/* 1240 */    MCD::OPC_CheckPredicate, 20, 255, 9, // Skip to: 3803
/* 1244 */    MCD::OPC_Decode, 244, 4, 129, 1, // Opcode: CMP_AF_S_MMR6
/* 1249 */    MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 1262
/* 1253 */    MCD::OPC_CheckPredicate, 20, 242, 9, // Skip to: 3803
/* 1257 */    MCD::OPC_Decode, 162, 12, 128, 1, // Opcode: MAX_S_MMR6
/* 1262 */    MCD::OPC_FilterValue, 21, 9, 0, // Skip to: 1275
/* 1266 */    MCD::OPC_CheckPredicate, 20, 229, 9, // Skip to: 3803
/* 1270 */    MCD::OPC_Decode, 243, 4, 130, 1, // Opcode: CMP_AF_D_MMR6
/* 1275 */    MCD::OPC_FilterValue, 32, 15, 0, // Skip to: 1294
/* 1279 */    MCD::OPC_CheckPredicate, 18, 216, 9, // Skip to: 3803
/* 1283 */    MCD::OPC_CheckField, 11, 5, 0, 210, 9, // Skip to: 3803
/* 1289 */    MCD::OPC_Decode, 214, 15, 131, 1, // Opcode: RINT_S_MMR6
/* 1294 */    MCD::OPC_FilterValue, 35, 9, 0, // Skip to: 1307
/* 1298 */    MCD::OPC_CheckPredicate, 20, 197, 9, // Skip to: 3803
/* 1302 */    MCD::OPC_Decode, 197, 12, 128, 1, // Opcode: MINA_S_MMR6
/* 1307 */    MCD::OPC_FilterValue, 43, 9, 0, // Skip to: 1320
/* 1311 */    MCD::OPC_CheckPredicate, 20, 184, 9, // Skip to: 3803
/* 1315 */    MCD::OPC_Decode, 143, 12, 128, 1, // Opcode: MAXA_S_MMR6
/* 1320 */    MCD::OPC_FilterValue, 48, 9, 0, // Skip to: 1333
/* 1324 */    MCD::OPC_CheckPredicate, 20, 171, 9, // Skip to: 3803
/* 1328 */    MCD::OPC_Decode, 198, 8, 132, 1, // Opcode: FADD_S_MMR6
/* 1333 */    MCD::OPC_FilterValue, 56, 9, 0, // Skip to: 1346
/* 1337 */    MCD::OPC_CheckPredicate, 18, 158, 9, // Skip to: 3803
/* 1341 */    MCD::OPC_Decode, 181, 16, 128, 1, // Opcode: SELEQZ_S_MMR6
/* 1346 */    MCD::OPC_FilterValue, 59, 55, 0, // Skip to: 1405
/* 1350 */    MCD::OPC_ExtractField, 11, 5,  // Inst{15-11} ...
/* 1353 */    MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 1366
/* 1357 */    MCD::OPC_CheckPredicate, 20, 138, 9, // Skip to: 3803
/* 1361 */    MCD::OPC_Decode, 172, 12, 133, 1, // Opcode: MFC1_MMR6
/* 1366 */    MCD::OPC_FilterValue, 5, 9, 0, // Skip to: 1379
/* 1370 */    MCD::OPC_CheckPredicate, 20, 125, 9, // Skip to: 3803
/* 1374 */    MCD::OPC_Decode, 187, 13, 134, 1, // Opcode: MTC1_MMR6
/* 1379 */    MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 1392
/* 1383 */    MCD::OPC_CheckPredicate, 21, 112, 9, // Skip to: 3803
/* 1387 */    MCD::OPC_Decode, 177, 12, 135, 1, // Opcode: MFHC1_D32_MMR6
/* 1392 */    MCD::OPC_FilterValue, 7, 103, 9, // Skip to: 3803
/* 1396 */    MCD::OPC_CheckPredicate, 21, 99, 9, // Skip to: 3803
/* 1400 */    MCD::OPC_Decode, 192, 13, 136, 1, // Opcode: MTHC1_D32_MMR6
/* 1405 */    MCD::OPC_FilterValue, 69, 9, 0, // Skip to: 1418
/* 1409 */    MCD::OPC_CheckPredicate, 20, 86, 9, // Skip to: 3803
/* 1413 */    MCD::OPC_Decode, 184, 5, 129, 1, // Opcode: CMP_UN_S_MMR6
/* 1418 */    MCD::OPC_FilterValue, 85, 9, 0, // Skip to: 1431
/* 1422 */    MCD::OPC_CheckPredicate, 20, 73, 9, // Skip to: 3803
/* 1426 */    MCD::OPC_Decode, 182, 5, 130, 1, // Opcode: CMP_UN_D_MMR6
/* 1431 */    MCD::OPC_FilterValue, 96, 15, 0, // Skip to: 1450
/* 1435 */    MCD::OPC_CheckPredicate, 18, 60, 9, // Skip to: 3803
/* 1439 */    MCD::OPC_CheckField, 11, 5, 0, 54, 9, // Skip to: 3803
/* 1445 */    MCD::OPC_Decode, 184, 4, 131, 1, // Opcode: CLASS_S_MMR6
/* 1450 */    MCD::OPC_FilterValue, 112, 9, 0, // Skip to: 1463
/* 1454 */    MCD::OPC_CheckPredicate, 20, 41, 9, // Skip to: 3803
/* 1458 */    MCD::OPC_Decode, 214, 9, 132, 1, // Opcode: FSUB_S_MMR6
/* 1463 */    MCD::OPC_FilterValue, 120, 9, 0, // Skip to: 1476
/* 1467 */    MCD::OPC_CheckPredicate, 18, 28, 9, // Skip to: 3803
/* 1471 */    MCD::OPC_Decode, 188, 16, 128, 1, // Opcode: SELNEZ_S_MMR6
/* 1476 */    MCD::OPC_FilterValue, 123, 27, 0, // Skip to: 1507
/* 1480 */    MCD::OPC_ExtractField, 11, 5,  // Inst{15-11} ...
/* 1483 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 1495
/* 1487 */    MCD::OPC_CheckPredicate, 20, 8, 9, // Skip to: 3803
/* 1491 */    MCD::OPC_Decode, 163, 9, 98, // Opcode: FMOV_S_MMR6
/* 1495 */    MCD::OPC_FilterValue, 4, 0, 9, // Skip to: 3803
/* 1499 */    MCD::OPC_CheckPredicate, 20, 252, 8, // Skip to: 3803
/* 1503 */    MCD::OPC_Decode, 160, 9, 99, // Opcode: FMOV_D_MMR6
/* 1507 */    MCD::OPC_FilterValue, 133, 1, 9, 0, // Skip to: 1521
/* 1512 */    MCD::OPC_CheckPredicate, 20, 239, 8, // Skip to: 3803
/* 1516 */    MCD::OPC_Decode, 250, 4, 129, 1, // Opcode: CMP_EQ_S_MMR6
/* 1521 */    MCD::OPC_FilterValue, 149, 1, 9, 0, // Skip to: 1535
/* 1526 */    MCD::OPC_CheckPredicate, 20, 225, 8, // Skip to: 3803
/* 1530 */    MCD::OPC_Decode, 246, 4, 130, 1, // Opcode: CMP_EQ_D_MMR6
/* 1535 */    MCD::OPC_FilterValue, 176, 1, 9, 0, // Skip to: 1549
/* 1540 */    MCD::OPC_CheckPredicate, 20, 211, 8, // Skip to: 3803
/* 1544 */    MCD::OPC_Decode, 173, 9, 132, 1, // Opcode: FMUL_S_MMR6
/* 1549 */    MCD::OPC_FilterValue, 184, 1, 9, 0, // Skip to: 1563
/* 1554 */    MCD::OPC_CheckPredicate, 18, 197, 8, // Skip to: 3803
/* 1558 */    MCD::OPC_Decode, 192, 16, 137, 1, // Opcode: SEL_S_MMR6
/* 1563 */    MCD::OPC_FilterValue, 197, 1, 9, 0, // Skip to: 1577
/* 1568 */    MCD::OPC_CheckPredicate, 20, 183, 8, // Skip to: 3803
/* 1572 */    MCD::OPC_Decode, 172, 5, 129, 1, // Opcode: CMP_UEQ_S_MMR6
/* 1577 */    MCD::OPC_FilterValue, 213, 1, 9, 0, // Skip to: 1591
/* 1582 */    MCD::OPC_CheckPredicate, 20, 169, 8, // Skip to: 3803
/* 1586 */    MCD::OPC_Decode, 170, 5, 130, 1, // Opcode: CMP_UEQ_D_MMR6
/* 1591 */    MCD::OPC_FilterValue, 240, 1, 9, 0, // Skip to: 1605
/* 1596 */    MCD::OPC_CheckPredicate, 20, 155, 8, // Skip to: 3803
/* 1600 */    MCD::OPC_Decode, 236, 8, 132, 1, // Opcode: FDIV_S_MMR6
/* 1605 */    MCD::OPC_FilterValue, 133, 2, 9, 0, // Skip to: 1619
/* 1610 */    MCD::OPC_CheckPredicate, 20, 141, 8, // Skip to: 3803
/* 1614 */    MCD::OPC_Decode, 136, 5, 129, 1, // Opcode: CMP_LT_S_MMR6
/* 1619 */    MCD::OPC_FilterValue, 149, 2, 9, 0, // Skip to: 1633
/* 1624 */    MCD::OPC_CheckPredicate, 20, 127, 8, // Skip to: 3803
/* 1628 */    MCD::OPC_Decode, 132, 5, 130, 1, // Opcode: CMP_LT_D_MMR6
/* 1633 */    MCD::OPC_FilterValue, 176, 2, 9, 0, // Skip to: 1647
/* 1638 */    MCD::OPC_CheckPredicate, 20, 113, 8, // Skip to: 3803
/* 1642 */    MCD::OPC_Decode, 194, 8, 138, 1, // Opcode: FADD_D_MMR6
/* 1647 */    MCD::OPC_FilterValue, 187, 2, 54, 0, // Skip to: 1706
/* 1652 */    MCD::OPC_ExtractField, 11, 5,  // Inst{15-11} ...
/* 1655 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 1668
/* 1659 */    MCD::OPC_CheckPredicate, 20, 92, 8, // Skip to: 3803
/* 1663 */    MCD::OPC_Decode, 214, 5, 139, 1, // Opcode: CVT_L_S_MMR6
/* 1668 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 1680
/* 1672 */    MCD::OPC_CheckPredicate, 20, 79, 8, // Skip to: 3803
/* 1676 */    MCD::OPC_Decode, 230, 5, 98, // Opcode: CVT_W_S_MMR6
/* 1680 */    MCD::OPC_FilterValue, 8, 9, 0, // Skip to: 1693
/* 1684 */    MCD::OPC_CheckPredicate, 20, 67, 8, // Skip to: 3803
/* 1688 */    MCD::OPC_Decode, 211, 5, 140, 1, // Opcode: CVT_L_D_MMR6
/* 1693 */    MCD::OPC_FilterValue, 9, 58, 8, // Skip to: 3803
/* 1697 */    MCD::OPC_CheckPredicate, 20, 54, 8, // Skip to: 3803
/* 1701 */    MCD::OPC_Decode, 226, 5, 141, 1, // Opcode: CVT_W_D_MMR6
/* 1706 */    MCD::OPC_FilterValue, 197, 2, 9, 0, // Skip to: 1720
/* 1711 */    MCD::OPC_CheckPredicate, 20, 40, 8, // Skip to: 3803
/* 1715 */    MCD::OPC_Decode, 180, 5, 129, 1, // Opcode: CMP_ULT_S_MMR6
/* 1720 */    MCD::OPC_FilterValue, 213, 2, 9, 0, // Skip to: 1734
/* 1725 */    MCD::OPC_CheckPredicate, 20, 26, 8, // Skip to: 3803
/* 1729 */    MCD::OPC_Decode, 178, 5, 130, 1, // Opcode: CMP_ULT_D_MMR6
/* 1734 */    MCD::OPC_FilterValue, 240, 2, 9, 0, // Skip to: 1748
/* 1739 */    MCD::OPC_CheckPredicate, 20, 12, 8, // Skip to: 3803
/* 1743 */    MCD::OPC_Decode, 210, 9, 138, 1, // Opcode: FSUB_D_MMR6
/* 1748 */    MCD::OPC_FilterValue, 133, 3, 9, 0, // Skip to: 1762
/* 1753 */    MCD::OPC_CheckPredicate, 20, 254, 7, // Skip to: 3803
/* 1757 */    MCD::OPC_Decode, 130, 5, 129, 1, // Opcode: CMP_LE_S_MMR6
/* 1762 */    MCD::OPC_FilterValue, 149, 3, 9, 0, // Skip to: 1776
/* 1767 */    MCD::OPC_CheckPredicate, 20, 240, 7, // Skip to: 3803
/* 1771 */    MCD::OPC_Decode, 254, 4, 130, 1, // Opcode: CMP_LE_D_MMR6
/* 1776 */    MCD::OPC_FilterValue, 176, 3, 9, 0, // Skip to: 1790
/* 1781 */    MCD::OPC_CheckPredicate, 20, 226, 7, // Skip to: 3803
/* 1785 */    MCD::OPC_Decode, 169, 9, 138, 1, // Opcode: FMUL_D_MMR6
/* 1790 */    MCD::OPC_FilterValue, 184, 3, 9, 0, // Skip to: 1804
/* 1795 */    MCD::OPC_CheckPredicate, 20, 212, 7, // Skip to: 3803
/* 1799 */    MCD::OPC_Decode, 239, 11, 142, 1, // Opcode: MADDF_S_MMR6
/* 1804 */    MCD::OPC_FilterValue, 197, 3, 9, 0, // Skip to: 1818
/* 1809 */    MCD::OPC_CheckPredicate, 20, 198, 7, // Skip to: 3803
/* 1813 */    MCD::OPC_Decode, 176, 5, 129, 1, // Opcode: CMP_ULE_S_MMR6
/* 1818 */    MCD::OPC_FilterValue, 213, 3, 9, 0, // Skip to: 1832
/* 1823 */    MCD::OPC_CheckPredicate, 20, 184, 7, // Skip to: 3803
/* 1827 */    MCD::OPC_Decode, 174, 5, 130, 1, // Opcode: CMP_ULE_D_MMR6
/* 1832 */    MCD::OPC_FilterValue, 240, 3, 9, 0, // Skip to: 1846
/* 1837 */    MCD::OPC_CheckPredicate, 20, 170, 7, // Skip to: 3803
/* 1841 */    MCD::OPC_Decode, 232, 8, 138, 1, // Opcode: FDIV_D_MMR6
/* 1846 */    MCD::OPC_FilterValue, 248, 3, 9, 0, // Skip to: 1860
/* 1851 */    MCD::OPC_CheckPredicate, 20, 156, 7, // Skip to: 3803
/* 1855 */    MCD::OPC_Decode, 162, 13, 142, 1, // Opcode: MSUBF_S_MMR6
/* 1860 */    MCD::OPC_FilterValue, 131, 4, 9, 0, // Skip to: 1874
/* 1865 */    MCD::OPC_CheckPredicate, 20, 142, 7, // Skip to: 3803
/* 1869 */    MCD::OPC_Decode, 211, 12, 143, 1, // Opcode: MIN_D_MMR6
/* 1874 */    MCD::OPC_FilterValue, 133, 4, 9, 0, // Skip to: 1888
/* 1879 */    MCD::OPC_CheckPredicate, 20, 128, 7, // Skip to: 3803
/* 1883 */    MCD::OPC_Decode, 140, 5, 129, 1, // Opcode: CMP_SAF_S_MMR6
/* 1888 */    MCD::OPC_FilterValue, 139, 4, 9, 0, // Skip to: 1902
/* 1893 */    MCD::OPC_CheckPredicate, 20, 114, 7, // Skip to: 3803
/* 1897 */    MCD::OPC_Decode, 157, 12, 143, 1, // Opcode: MAX_D_MMR6
/* 1902 */    MCD::OPC_FilterValue, 149, 4, 9, 0, // Skip to: 1916
/* 1907 */    MCD::OPC_CheckPredicate, 20, 100, 7, // Skip to: 3803
/* 1911 */    MCD::OPC_Decode, 138, 5, 130, 1, // Opcode: CMP_SAF_D_MMR6
/* 1916 */    MCD::OPC_FilterValue, 160, 4, 15, 0, // Skip to: 1936
/* 1921 */    MCD::OPC_CheckPredicate, 18, 86, 7, // Skip to: 3803
/* 1925 */    MCD::OPC_CheckField, 11, 5, 0, 80, 7, // Skip to: 3803
/* 1931 */    MCD::OPC_Decode, 212, 15, 144, 1, // Opcode: RINT_D_MMR6
/* 1936 */    MCD::OPC_FilterValue, 163, 4, 9, 0, // Skip to: 1950
/* 1941 */    MCD::OPC_CheckPredicate, 20, 66, 7, // Skip to: 3803
/* 1945 */    MCD::OPC_Decode, 195, 12, 143, 1, // Opcode: MINA_D_MMR6
/* 1950 */    MCD::OPC_FilterValue, 171, 4, 9, 0, // Skip to: 1964
/* 1955 */    MCD::OPC_CheckPredicate, 20, 52, 7, // Skip to: 3803
/* 1959 */    MCD::OPC_Decode, 141, 12, 143, 1, // Opcode: MAXA_D_MMR6
/* 1964 */    MCD::OPC_FilterValue, 184, 4, 9, 0, // Skip to: 1978
/* 1969 */    MCD::OPC_CheckPredicate, 18, 38, 7, // Skip to: 3803
/* 1973 */    MCD::OPC_Decode, 178, 16, 143, 1, // Opcode: SELEQZ_D_MMR6
/* 1978 */    MCD::OPC_FilterValue, 187, 4, 27, 0, // Skip to: 2010
/* 1983 */    MCD::OPC_ExtractField, 11, 5,  // Inst{15-11} ...
/* 1986 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 1998
/* 1990 */    MCD::OPC_CheckPredicate, 20, 17, 7, // Skip to: 3803
/* 1994 */    MCD::OPC_Decode, 184, 17, 98, // Opcode: SQRT_S_MMR6
/* 1998 */    MCD::OPC_FilterValue, 9, 9, 7, // Skip to: 3803
/* 2002 */    MCD::OPC_CheckPredicate, 20, 5, 7, // Skip to: 3803
/* 2006 */    MCD::OPC_Decode, 183, 17, 99, // Opcode: SQRT_D_MMR6
/* 2010 */    MCD::OPC_FilterValue, 197, 4, 9, 0, // Skip to: 2024
/* 2015 */    MCD::OPC_CheckPredicate, 20, 248, 6, // Skip to: 3803
/* 2019 */    MCD::OPC_Decode, 168, 5, 129, 1, // Opcode: CMP_SUN_S_MMR6
/* 2024 */    MCD::OPC_FilterValue, 213, 4, 9, 0, // Skip to: 2038
/* 2029 */    MCD::OPC_CheckPredicate, 20, 234, 6, // Skip to: 3803
/* 2033 */    MCD::OPC_Decode, 166, 5, 130, 1, // Opcode: CMP_SUN_D_MMR6
/* 2038 */    MCD::OPC_FilterValue, 224, 4, 15, 0, // Skip to: 2058
/* 2043 */    MCD::OPC_CheckPredicate, 18, 220, 6, // Skip to: 3803
/* 2047 */    MCD::OPC_CheckField, 11, 5, 0, 214, 6, // Skip to: 3803
/* 2053 */    MCD::OPC_Decode, 182, 4, 144, 1, // Opcode: CLASS_D_MMR6
/* 2058 */    MCD::OPC_FilterValue, 248, 4, 9, 0, // Skip to: 2072
/* 2063 */    MCD::OPC_CheckPredicate, 18, 200, 6, // Skip to: 3803
/* 2067 */    MCD::OPC_Decode, 185, 16, 143, 1, // Opcode: SELNEZ_D_MMR6
/* 2072 */    MCD::OPC_FilterValue, 133, 5, 9, 0, // Skip to: 2086
/* 2077 */    MCD::OPC_CheckPredicate, 20, 186, 6, // Skip to: 3803
/* 2081 */    MCD::OPC_Decode, 144, 5, 129, 1, // Opcode: CMP_SEQ_S_MMR6
/* 2086 */    MCD::OPC_FilterValue, 149, 5, 9, 0, // Skip to: 2100
/* 2091 */    MCD::OPC_CheckPredicate, 20, 172, 6, // Skip to: 3803
/* 2095 */    MCD::OPC_Decode, 142, 5, 130, 1, // Opcode: CMP_SEQ_D_MMR6
/* 2100 */    MCD::OPC_FilterValue, 184, 5, 9, 0, // Skip to: 2114
/* 2105 */    MCD::OPC_CheckPredicate, 18, 158, 6, // Skip to: 3803
/* 2109 */    MCD::OPC_Decode, 190, 16, 145, 1, // Opcode: SEL_D_MMR6
/* 2114 */    MCD::OPC_FilterValue, 197, 5, 9, 0, // Skip to: 2128
/* 2119 */    MCD::OPC_CheckPredicate, 20, 144, 6, // Skip to: 3803
/* 2123 */    MCD::OPC_Decode, 156, 5, 129, 1, // Opcode: CMP_SUEQ_S_MMR6
/* 2128 */    MCD::OPC_FilterValue, 213, 5, 9, 0, // Skip to: 2142
/* 2133 */    MCD::OPC_CheckPredicate, 20, 130, 6, // Skip to: 3803
/* 2137 */    MCD::OPC_Decode, 154, 5, 130, 1, // Opcode: CMP_SUEQ_D_MMR6
/* 2142 */    MCD::OPC_FilterValue, 133, 6, 9, 0, // Skip to: 2156
/* 2147 */    MCD::OPC_CheckPredicate, 20, 116, 6, // Skip to: 3803
/* 2151 */    MCD::OPC_Decode, 152, 5, 129, 1, // Opcode: CMP_SLT_S_MMR6
/* 2156 */    MCD::OPC_FilterValue, 149, 6, 9, 0, // Skip to: 2170
/* 2161 */    MCD::OPC_CheckPredicate, 20, 102, 6, // Skip to: 3803
/* 2165 */    MCD::OPC_Decode, 150, 5, 130, 1, // Opcode: CMP_SLT_D_MMR6
/* 2170 */    MCD::OPC_FilterValue, 187, 6, 207, 0, // Skip to: 2382
/* 2175 */    MCD::OPC_ExtractField, 11, 5,  // Inst{15-11} ...
/* 2178 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 2191
/* 2182 */    MCD::OPC_CheckPredicate, 20, 81, 6, // Skip to: 3803
/* 2186 */    MCD::OPC_Decode, 139, 9, 139, 1, // Opcode: FLOOR_L_S_MMR6
/* 2191 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 2203
/* 2195 */    MCD::OPC_CheckPredicate, 20, 68, 6, // Skip to: 3803
/* 2199 */    MCD::OPC_Decode, 146, 9, 98, // Opcode: FLOOR_W_S_MMR6
/* 2203 */    MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 2216
/* 2207 */    MCD::OPC_CheckPredicate, 20, 56, 6, // Skip to: 3803
/* 2211 */    MCD::OPC_Decode, 157, 4, 139, 1, // Opcode: CEIL_L_S_MMR6
/* 2216 */    MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 2228
/* 2220 */    MCD::OPC_CheckPredicate, 20, 43, 6, // Skip to: 3803
/* 2224 */    MCD::OPC_Decode, 164, 4, 98, // Opcode: CEIL_W_S_MMR6
/* 2228 */    MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 2241
/* 2232 */    MCD::OPC_CheckPredicate, 20, 31, 6, // Skip to: 3803
/* 2236 */    MCD::OPC_Decode, 176, 19, 139, 1, // Opcode: TRUNC_L_S_MMR6
/* 2241 */    MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 2253
/* 2245 */    MCD::OPC_CheckPredicate, 20, 18, 6, // Skip to: 3803
/* 2249 */    MCD::OPC_Decode, 183, 19, 98, // Opcode: TRUNC_W_S_MMR6
/* 2253 */    MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 2266
/* 2257 */    MCD::OPC_CheckPredicate, 20, 6, 6, // Skip to: 3803
/* 2261 */    MCD::OPC_Decode, 226, 15, 139, 1, // Opcode: ROUND_L_S_MMR6
/* 2266 */    MCD::OPC_FilterValue, 7, 8, 0, // Skip to: 2278
/* 2270 */    MCD::OPC_CheckPredicate, 20, 249, 5, // Skip to: 3803
/* 2274 */    MCD::OPC_Decode, 233, 15, 98, // Opcode: ROUND_W_S_MMR6
/* 2278 */    MCD::OPC_FilterValue, 8, 9, 0, // Skip to: 2291
/* 2282 */    MCD::OPC_CheckPredicate, 20, 237, 5, // Skip to: 3803
/* 2286 */    MCD::OPC_Decode, 137, 9, 140, 1, // Opcode: FLOOR_L_D_MMR6
/* 2291 */    MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 2304
/* 2295 */    MCD::OPC_CheckPredicate, 20, 224, 5, // Skip to: 3803
/* 2299 */    MCD::OPC_Decode, 142, 9, 141, 1, // Opcode: FLOOR_W_D_MMR6
/* 2304 */    MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 2317
/* 2308 */    MCD::OPC_CheckPredicate, 20, 211, 5, // Skip to: 3803
/* 2312 */    MCD::OPC_Decode, 155, 4, 140, 1, // Opcode: CEIL_L_D_MMR6
/* 2317 */    MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 2330
/* 2321 */    MCD::OPC_CheckPredicate, 20, 198, 5, // Skip to: 3803
/* 2325 */    MCD::OPC_Decode, 160, 4, 141, 1, // Opcode: CEIL_W_D_MMR6
/* 2330 */    MCD::OPC_FilterValue, 12, 9, 0, // Skip to: 2343
/* 2334 */    MCD::OPC_CheckPredicate, 20, 185, 5, // Skip to: 3803
/* 2338 */    MCD::OPC_Decode, 174, 19, 140, 1, // Opcode: TRUNC_L_D_MMR6
/* 2343 */    MCD::OPC_FilterValue, 13, 9, 0, // Skip to: 2356
/* 2347 */    MCD::OPC_CheckPredicate, 20, 172, 5, // Skip to: 3803
/* 2351 */    MCD::OPC_Decode, 179, 19, 141, 1, // Opcode: TRUNC_W_D_MMR6
/* 2356 */    MCD::OPC_FilterValue, 14, 9, 0, // Skip to: 2369
/* 2360 */    MCD::OPC_CheckPredicate, 20, 159, 5, // Skip to: 3803
/* 2364 */    MCD::OPC_Decode, 224, 15, 140, 1, // Opcode: ROUND_L_D_MMR6
/* 2369 */    MCD::OPC_FilterValue, 15, 150, 5, // Skip to: 3803
/* 2373 */    MCD::OPC_CheckPredicate, 20, 146, 5, // Skip to: 3803
/* 2377 */    MCD::OPC_Decode, 229, 15, 140, 1, // Opcode: ROUND_W_D_MMR6
/* 2382 */    MCD::OPC_FilterValue, 197, 6, 9, 0, // Skip to: 2396
/* 2387 */    MCD::OPC_CheckPredicate, 20, 132, 5, // Skip to: 3803
/* 2391 */    MCD::OPC_Decode, 164, 5, 129, 1, // Opcode: CMP_SULT_S_MMR6
/* 2396 */    MCD::OPC_FilterValue, 213, 6, 9, 0, // Skip to: 2410
/* 2401 */    MCD::OPC_CheckPredicate, 20, 118, 5, // Skip to: 3803
/* 2405 */    MCD::OPC_Decode, 162, 5, 130, 1, // Opcode: CMP_SULT_D_MMR6
/* 2410 */    MCD::OPC_FilterValue, 251, 6, 126, 0, // Skip to: 2541
/* 2415 */    MCD::OPC_ExtractField, 11, 5,  // Inst{15-11} ...
/* 2418 */    MCD::OPC_FilterValue, 0, 7, 0, // Skip to: 2429
/* 2422 */    MCD::OPC_CheckPredicate, 20, 97, 5, // Skip to: 3803
/* 2426 */    MCD::OPC_Decode, 105, 98, // Opcode: ABS_S_MMR6
/* 2429 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 2441
/* 2433 */    MCD::OPC_CheckPredicate, 20, 86, 5, // Skip to: 3803
/* 2437 */    MCD::OPC_Decode, 181, 9, 98, // Opcode: FNEG_S_MMR6
/* 2441 */    MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 2454
/* 2445 */    MCD::OPC_CheckPredicate, 20, 74, 5, // Skip to: 3803
/* 2449 */    MCD::OPC_Decode, 207, 5, 141, 1, // Opcode: CVT_D_S_MMR6
/* 2454 */    MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 2467
/* 2458 */    MCD::OPC_CheckPredicate, 20, 61, 5, // Skip to: 3803
/* 2462 */    MCD::OPC_Decode, 218, 5, 146, 1, // Opcode: CVT_S_D_MMR6
/* 2467 */    MCD::OPC_FilterValue, 4, 7, 0, // Skip to: 2478
/* 2471 */    MCD::OPC_CheckPredicate, 20, 48, 5, // Skip to: 3803
/* 2475 */    MCD::OPC_Decode, 104, 99, // Opcode: ABS_D_MMR6
/* 2478 */    MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 2490
/* 2482 */    MCD::OPC_CheckPredicate, 20, 37, 5, // Skip to: 3803
/* 2486 */    MCD::OPC_Decode, 177, 9, 99, // Opcode: FNEG_D_MMR6
/* 2490 */    MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 2503
/* 2494 */    MCD::OPC_CheckPredicate, 20, 25, 5, // Skip to: 3803
/* 2498 */    MCD::OPC_Decode, 208, 5, 141, 1, // Opcode: CVT_D_W_MMR6
/* 2503 */    MCD::OPC_FilterValue, 7, 8, 0, // Skip to: 2515
/* 2507 */    MCD::OPC_CheckPredicate, 20, 12, 5, // Skip to: 3803
/* 2511 */    MCD::OPC_Decode, 223, 5, 98, // Opcode: CVT_S_W_MMR6
/* 2515 */    MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 2528
/* 2519 */    MCD::OPC_CheckPredicate, 16, 0, 5, // Skip to: 3803
/* 2523 */    MCD::OPC_Decode, 205, 5, 140, 1, // Opcode: CVT_D_L_MMR6
/* 2528 */    MCD::OPC_FilterValue, 11, 247, 4, // Skip to: 3803
/* 2532 */    MCD::OPC_CheckPredicate, 16, 243, 4, // Skip to: 3803
/* 2536 */    MCD::OPC_Decode, 220, 5, 139, 1, // Opcode: CVT_S_L_MMR6
/* 2541 */    MCD::OPC_FilterValue, 133, 7, 9, 0, // Skip to: 2555
/* 2546 */    MCD::OPC_CheckPredicate, 20, 229, 4, // Skip to: 3803
/* 2550 */    MCD::OPC_Decode, 148, 5, 129, 1, // Opcode: CMP_SLE_S_MMR6
/* 2555 */    MCD::OPC_FilterValue, 149, 7, 9, 0, // Skip to: 2569
/* 2560 */    MCD::OPC_CheckPredicate, 20, 215, 4, // Skip to: 3803
/* 2564 */    MCD::OPC_Decode, 146, 5, 130, 1, // Opcode: CMP_SLE_D_MMR6
/* 2569 */    MCD::OPC_FilterValue, 184, 7, 9, 0, // Skip to: 2583
/* 2574 */    MCD::OPC_CheckPredicate, 20, 201, 4, // Skip to: 3803
/* 2578 */    MCD::OPC_Decode, 237, 11, 147, 1, // Opcode: MADDF_D_MMR6
/* 2583 */    MCD::OPC_FilterValue, 197, 7, 9, 0, // Skip to: 2597
/* 2588 */    MCD::OPC_CheckPredicate, 20, 187, 4, // Skip to: 3803
/* 2592 */    MCD::OPC_Decode, 160, 5, 129, 1, // Opcode: CMP_SULE_S_MMR6
/* 2597 */    MCD::OPC_FilterValue, 213, 7, 9, 0, // Skip to: 2611
/* 2602 */    MCD::OPC_CheckPredicate, 20, 173, 4, // Skip to: 3803
/* 2606 */    MCD::OPC_Decode, 158, 5, 130, 1, // Opcode: CMP_SULE_D_MMR6
/* 2611 */    MCD::OPC_FilterValue, 248, 7, 9, 0, // Skip to: 2625
/* 2616 */    MCD::OPC_CheckPredicate, 20, 159, 4, // Skip to: 3803
/* 2620 */    MCD::OPC_Decode, 160, 13, 147, 1, // Opcode: MSUBF_D_MMR6
/* 2625 */    MCD::OPC_FilterValue, 187, 8, 149, 4, // Skip to: 3803
/* 2630 */    MCD::OPC_ExtractField, 11, 5,  // Inst{15-11} ...
/* 2633 */    MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 2646
/* 2637 */    MCD::OPC_CheckPredicate, 19, 138, 4, // Skip to: 3803
/* 2641 */    MCD::OPC_Decode, 139, 7, 148, 1, // Opcode: DMFC1_MM64R6
/* 2646 */    MCD::OPC_FilterValue, 5, 129, 4, // Skip to: 3803
/* 2650 */    MCD::OPC_CheckPredicate, 19, 125, 4, // Skip to: 3803
/* 2654 */    MCD::OPC_Decode, 150, 7, 149, 1, // Opcode: DMTC1_MM64R6
/* 2659 */    MCD::OPC_FilterValue, 22, 62, 2, // Skip to: 3237
/* 2663 */    MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 2666 */    MCD::OPC_FilterValue, 0, 55, 0, // Skip to: 2725
/* 2670 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 2673 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 2686
/* 2677 */    MCD::OPC_CheckPredicate, 19, 98, 4, // Skip to: 3803
/* 2681 */    MCD::OPC_Decode, 243, 7, 150, 1, // Opcode: DSLL_MM64R6
/* 2686 */    MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 2699
/* 2690 */    MCD::OPC_CheckPredicate, 19, 85, 4, // Skip to: 3803
/* 2694 */    MCD::OPC_Decode, 255, 7, 150, 1, // Opcode: DSRL_MM64R6
/* 2699 */    MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 2712
/* 2703 */    MCD::OPC_CheckPredicate, 19, 72, 4, // Skip to: 3803
/* 2707 */    MCD::OPC_Decode, 249, 7, 150, 1, // Opcode: DSRA_MM64R6
/* 2712 */    MCD::OPC_FilterValue, 3, 63, 4, // Skip to: 3803
/* 2716 */    MCD::OPC_CheckPredicate, 19, 59, 4, // Skip to: 3803
/* 2720 */    MCD::OPC_Decode, 229, 7, 150, 1, // Opcode: DROTR_MM64R6
/* 2725 */    MCD::OPC_FilterValue, 4, 39, 0, // Skip to: 2768
/* 2729 */    MCD::OPC_CheckPredicate, 19, 11, 0, // Skip to: 2744
/* 2733 */    MCD::OPC_CheckField, 6, 5, 2, 5, 0, // Skip to: 2744
/* 2739 */    MCD::OPC_Decode, 246, 7, 150, 1, // Opcode: DSRA32_MM64R6
/* 2744 */    MCD::OPC_CheckPredicate, 19, 11, 0, // Skip to: 2759
/* 2748 */    MCD::OPC_CheckField, 6, 3, 4, 5, 0, // Skip to: 2759
/* 2754 */    MCD::OPC_Decode, 134, 7, 151, 1, // Opcode: DLSA_MM64R6
/* 2759 */    MCD::OPC_CheckPredicate, 19, 16, 4, // Skip to: 3803
/* 2763 */    MCD::OPC_Decode, 243, 6, 152, 1, // Opcode: DINSM_MM64R6
/* 2768 */    MCD::OPC_FilterValue, 8, 42, 0, // Skip to: 2814
/* 2772 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 2775 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 2788
/* 2779 */    MCD::OPC_CheckPredicate, 19, 252, 3, // Skip to: 3803
/* 2783 */    MCD::OPC_Decode, 239, 7, 150, 1, // Opcode: DSLL32_MM64R6
/* 2788 */    MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 2801
/* 2792 */    MCD::OPC_CheckPredicate, 19, 239, 3, // Skip to: 3803
/* 2796 */    MCD::OPC_Decode, 252, 7, 150, 1, // Opcode: DSRL32_MM64R6
/* 2801 */    MCD::OPC_FilterValue, 3, 230, 3, // Skip to: 3803
/* 2805 */    MCD::OPC_CheckPredicate, 19, 226, 3, // Skip to: 3803
/* 2809 */    MCD::OPC_Decode, 226, 7, 150, 1, // Opcode: DROTR32_MM64R6
/* 2814 */    MCD::OPC_FilterValue, 12, 9, 0, // Skip to: 2827
/* 2818 */    MCD::OPC_CheckPredicate, 19, 213, 3, // Skip to: 3803
/* 2822 */    MCD::OPC_Decode, 246, 6, 152, 1, // Opcode: DINS_MM64R6
/* 2827 */    MCD::OPC_FilterValue, 16, 107, 0, // Skip to: 2938
/* 2831 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 2834 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 2847
/* 2838 */    MCD::OPC_CheckPredicate, 19, 193, 3, // Skip to: 3803
/* 2842 */    MCD::OPC_Decode, 242, 7, 153, 1, // Opcode: DSLLV_MM64R6
/* 2847 */    MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 2860
/* 2851 */    MCD::OPC_CheckPredicate, 19, 180, 3, // Skip to: 3803
/* 2855 */    MCD::OPC_Decode, 254, 7, 153, 1, // Opcode: DSRLV_MM64R6
/* 2860 */    MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 2873
/* 2864 */    MCD::OPC_CheckPredicate, 19, 167, 3, // Skip to: 3803
/* 2868 */    MCD::OPC_Decode, 248, 7, 153, 1, // Opcode: DSRAV_MM64R6
/* 2873 */    MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 2886
/* 2877 */    MCD::OPC_CheckPredicate, 19, 154, 3, // Skip to: 3803
/* 2881 */    MCD::OPC_Decode, 228, 7, 153, 1, // Opcode: DROTRV_MM64R6
/* 2886 */    MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 2899
/* 2890 */    MCD::OPC_CheckPredicate, 19, 141, 3, // Skip to: 3803
/* 2894 */    MCD::OPC_Decode, 206, 6, 154, 1, // Opcode: DADD_MM64R6
/* 2899 */    MCD::OPC_FilterValue, 5, 9, 0, // Skip to: 2912
/* 2903 */    MCD::OPC_CheckPredicate, 19, 128, 3, // Skip to: 3803
/* 2907 */    MCD::OPC_Decode, 205, 6, 154, 1, // Opcode: DADDU_MM64R6
/* 2912 */    MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 2925
/* 2916 */    MCD::OPC_CheckPredicate, 19, 115, 3, // Skip to: 3803
/* 2920 */    MCD::OPC_Decode, 130, 8, 154, 1, // Opcode: DSUB_MM64R6
/* 2925 */    MCD::OPC_FilterValue, 7, 106, 3, // Skip to: 3803
/* 2929 */    MCD::OPC_CheckPredicate, 19, 102, 3, // Skip to: 3803
/* 2933 */    MCD::OPC_Decode, 129, 8, 154, 1, // Opcode: DSUBU_MM64R6
/* 2938 */    MCD::OPC_FilterValue, 20, 9, 0, // Skip to: 2951
/* 2942 */    MCD::OPC_CheckPredicate, 19, 89, 3, // Skip to: 3803
/* 2946 */    MCD::OPC_Decode, 238, 6, 155, 1, // Opcode: DEXTU_MM64R6
/* 2951 */    MCD::OPC_FilterValue, 24, 107, 0, // Skip to: 3062
/* 2955 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 2958 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 2971
/* 2962 */    MCD::OPC_CheckPredicate, 19, 69, 3, // Skip to: 3803
/* 2966 */    MCD::OPC_Decode, 167, 7, 154, 1, // Opcode: DMUL_MM64R6
/* 2971 */    MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 2984
/* 2975 */    MCD::OPC_CheckPredicate, 19, 56, 3, // Skip to: 3803
/* 2979 */    MCD::OPC_Decode, 157, 7, 154, 1, // Opcode: DMUH_MM64R6
/* 2984 */    MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 2997
/* 2988 */    MCD::OPC_CheckPredicate, 19, 43, 3, // Skip to: 3803
/* 2992 */    MCD::OPC_Decode, 166, 7, 154, 1, // Opcode: DMULU_MM64R6
/* 2997 */    MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 3010
/* 3001 */    MCD::OPC_CheckPredicate, 19, 30, 3, // Skip to: 3803
/* 3005 */    MCD::OPC_Decode, 156, 7, 154, 1, // Opcode: DMUHU_MM64R6
/* 3010 */    MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 3023
/* 3014 */    MCD::OPC_CheckPredicate, 19, 17, 3, // Skip to: 3803
/* 3018 */    MCD::OPC_Decode, 229, 6, 154, 1, // Opcode: DDIV_MM64R6
/* 3023 */    MCD::OPC_FilterValue, 5, 9, 0, // Skip to: 3036
/* 3027 */    MCD::OPC_CheckPredicate, 19, 4, 3, // Skip to: 3803
/* 3031 */    MCD::OPC_Decode, 146, 7, 154, 1, // Opcode: DMOD_MM64R6
/* 3036 */    MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 3049
/* 3040 */    MCD::OPC_CheckPredicate, 19, 247, 2, // Skip to: 3803
/* 3044 */    MCD::OPC_Decode, 228, 6, 154, 1, // Opcode: DDIVU_MM64R6
/* 3049 */    MCD::OPC_FilterValue, 7, 238, 2, // Skip to: 3803
/* 3053 */    MCD::OPC_CheckPredicate, 19, 234, 2, // Skip to: 3803
/* 3057 */    MCD::OPC_Decode, 145, 7, 154, 1, // Opcode: DMODU_MM64R6
/* 3062 */    MCD::OPC_FilterValue, 28, 15, 0, // Skip to: 3081
/* 3066 */    MCD::OPC_CheckPredicate, 19, 221, 2, // Skip to: 3803
/* 3070 */    MCD::OPC_CheckField, 6, 2, 0, 215, 2, // Skip to: 3803
/* 3076 */    MCD::OPC_Decode, 213, 6, 156, 1, // Opcode: DALIGN_MM64R6
/* 3081 */    MCD::OPC_FilterValue, 36, 9, 0, // Skip to: 3094
/* 3085 */    MCD::OPC_CheckPredicate, 19, 202, 2, // Skip to: 3803
/* 3089 */    MCD::OPC_Decode, 236, 6, 155, 1, // Opcode: DEXTM_MM64R6
/* 3094 */    MCD::OPC_FilterValue, 44, 9, 0, // Skip to: 3107
/* 3098 */    MCD::OPC_CheckPredicate, 19, 189, 2, // Skip to: 3803
/* 3102 */    MCD::OPC_Decode, 239, 6, 155, 1, // Opcode: DEXT_MM64R6
/* 3107 */    MCD::OPC_FilterValue, 52, 9, 0, // Skip to: 3120
/* 3111 */    MCD::OPC_CheckPredicate, 19, 176, 2, // Skip to: 3803
/* 3115 */    MCD::OPC_Decode, 245, 6, 152, 1, // Opcode: DINSU_MM64R6
/* 3120 */    MCD::OPC_FilterValue, 60, 167, 2, // Skip to: 3803
/* 3124 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 3127 */    MCD::OPC_FilterValue, 3, 15, 0, // Skip to: 3146
/* 3131 */    MCD::OPC_CheckPredicate, 19, 156, 2, // Skip to: 3803
/* 3135 */    MCD::OPC_CheckField, 14, 2, 0, 150, 2, // Skip to: 3803
/* 3141 */    MCD::OPC_Decode, 137, 7, 157, 1, // Opcode: DMFC0_MM64R6
/* 3146 */    MCD::OPC_FilterValue, 11, 15, 0, // Skip to: 3165
/* 3150 */    MCD::OPC_CheckPredicate, 19, 137, 2, // Skip to: 3803
/* 3154 */    MCD::OPC_CheckField, 14, 2, 0, 131, 2, // Skip to: 3803
/* 3160 */    MCD::OPC_Decode, 148, 7, 158, 1, // Opcode: DMTC0_MM64R6
/* 3165 */    MCD::OPC_FilterValue, 12, 122, 2, // Skip to: 3803
/* 3169 */    MCD::OPC_ExtractField, 11, 5,  // Inst{15-11} ...
/* 3172 */    MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 3185
/* 3176 */    MCD::OPC_CheckPredicate, 19, 111, 2, // Skip to: 3803
/* 3180 */    MCD::OPC_Decode, 219, 6, 159, 1, // Opcode: DBITSWAP_MM64R6
/* 3185 */    MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 3198
/* 3189 */    MCD::OPC_CheckPredicate, 19, 98, 2, // Skip to: 3803
/* 3193 */    MCD::OPC_Decode, 221, 6, 160, 1, // Opcode: DCLO_MM64R6
/* 3198 */    MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 3211
/* 3202 */    MCD::OPC_CheckPredicate, 19, 85, 2, // Skip to: 3803
/* 3206 */    MCD::OPC_Decode, 224, 6, 160, 1, // Opcode: DCLZ_MM64R6
/* 3211 */    MCD::OPC_FilterValue, 15, 9, 0, // Skip to: 3224
/* 3215 */    MCD::OPC_CheckPredicate, 19, 72, 2, // Skip to: 3803
/* 3219 */    MCD::OPC_Decode, 231, 7, 160, 1, // Opcode: DSBH_MM64R6
/* 3224 */    MCD::OPC_FilterValue, 31, 63, 2, // Skip to: 3803
/* 3228 */    MCD::OPC_CheckPredicate, 19, 59, 2, // Skip to: 3803
/* 3232 */    MCD::OPC_Decode, 236, 7, 160, 1, // Opcode: DSHD_MM64R6
/* 3237 */    MCD::OPC_FilterValue, 23, 9, 0, // Skip to: 3250
/* 3241 */    MCD::OPC_CheckPredicate, 19, 46, 2, // Skip to: 3803
/* 3245 */    MCD::OPC_Decode, 204, 6, 161, 1, // Opcode: DADDIU_MM64R6
/* 3250 */    MCD::OPC_FilterValue, 24, 178, 0, // Skip to: 3432
/* 3254 */    MCD::OPC_ExtractField, 12, 4,  // Inst{15-12} ...
/* 3257 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 3269
/* 3261 */    MCD::OPC_CheckPredicate, 18, 26, 2, // Skip to: 3803
/* 3265 */    MCD::OPC_Decode, 132, 15, 86, // Opcode: PREF_MMR6
/* 3269 */    MCD::OPC_FilterValue, 6, 53, 0, // Skip to: 3326
/* 3273 */    MCD::OPC_ExtractField, 9, 3,  // Inst{11-9} ...
/* 3276 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 3289
/* 3280 */    MCD::OPC_CheckPredicate, 18, 7, 2, // Skip to: 3803
/* 3284 */    MCD::OPC_Decode, 213, 10, 162, 1, // Opcode: LBUE_MMR6
/* 3289 */    MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 3302
/* 3293 */    MCD::OPC_CheckPredicate, 18, 250, 1, // Skip to: 3803
/* 3297 */    MCD::OPC_Decode, 211, 10, 162, 1, // Opcode: LBE_MMR6
/* 3302 */    MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 3314
/* 3306 */    MCD::OPC_CheckPredicate, 18, 237, 1, // Skip to: 3803
/* 3310 */    MCD::OPC_Decode, 148, 11, 100, // Opcode: LLE_MMR6
/* 3314 */    MCD::OPC_FilterValue, 7, 229, 1, // Skip to: 3803
/* 3318 */    MCD::OPC_CheckPredicate, 18, 225, 1, // Skip to: 3803
/* 3322 */    MCD::OPC_Decode, 179, 11, 100, // Opcode: LWE_MMR6
/* 3326 */    MCD::OPC_FilterValue, 7, 8, 0, // Skip to: 3338
/* 3330 */    MCD::OPC_CheckPredicate, 19, 213, 1, // Skip to: 3803
/* 3334 */    MCD::OPC_Decode, 144, 11, 85, // Opcode: LLD_MM64R6
/* 3338 */    MCD::OPC_FilterValue, 10, 78, 0, // Skip to: 3420
/* 3342 */    MCD::OPC_ExtractField, 9, 3,  // Inst{11-9} ...
/* 3345 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 3357
/* 3349 */    MCD::OPC_CheckPredicate, 18, 194, 1, // Skip to: 3803
/* 3353 */    MCD::OPC_Decode, 129, 15, 101, // Opcode: PREFE_MMR6
/* 3357 */    MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 3369
/* 3361 */    MCD::OPC_CheckPredicate, 18, 182, 1, // Skip to: 3803
/* 3365 */    MCD::OPC_Decode, 150, 4, 101, // Opcode: CACHEE_MMR6
/* 3369 */    MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 3382
/* 3373 */    MCD::OPC_CheckPredicate, 18, 170, 1, // Skip to: 3803
/* 3377 */    MCD::OPC_Decode, 128, 16, 163, 1, // Opcode: SBE_MMR6
/* 3382 */    MCD::OPC_FilterValue, 5, 9, 0, // Skip to: 3395
/* 3386 */    MCD::OPC_CheckPredicate, 18, 157, 1, // Skip to: 3803
/* 3390 */    MCD::OPC_Decode, 203, 16, 163, 1, // Opcode: SHE_MMR6
/* 3395 */    MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 3408
/* 3399 */    MCD::OPC_CheckPredicate, 18, 144, 1, // Skip to: 3803
/* 3403 */    MCD::OPC_Decode, 138, 16, 163, 1, // Opcode: SCE_MMR6
/* 3408 */    MCD::OPC_FilterValue, 7, 135, 1, // Skip to: 3803
/* 3412 */    MCD::OPC_CheckPredicate, 18, 131, 1, // Skip to: 3803
/* 3416 */    MCD::OPC_Decode, 184, 18, 100, // Opcode: SWE_MMR6
/* 3420 */    MCD::OPC_FilterValue, 14, 123, 1, // Skip to: 3803
/* 3424 */    MCD::OPC_CheckPredicate, 19, 119, 1, // Skip to: 3803
/* 3428 */    MCD::OPC_Decode, 203, 11, 85, // Opcode: LWU_MM64R6
/* 3432 */    MCD::OPC_FilterValue, 28, 8, 0, // Skip to: 3444
/* 3436 */    MCD::OPC_CheckPredicate, 18, 107, 1, // Skip to: 3803
/* 3440 */    MCD::OPC_Decode, 216, 19, 93, // Opcode: XORI_MMR6
/* 3444 */    MCD::OPC_FilterValue, 29, 24, 0, // Skip to: 3472
/* 3448 */    MCD::OPC_CheckPredicate, 18, 11, 0, // Skip to: 3463
/* 3452 */    MCD::OPC_CheckField, 16, 5, 0, 5, 0, // Skip to: 3463
/* 3458 */    MCD::OPC_Decode, 193, 2, 164, 1, // Opcode: BEQZALC_MMR6
/* 3463 */    MCD::OPC_CheckPredicate, 18, 80, 1, // Skip to: 3803
/* 3467 */    MCD::OPC_Decode, 188, 2, 164, 1, // Opcode: BEQC_MMR6
/* 3472 */    MCD::OPC_FilterValue, 30, 94, 0, // Skip to: 3570
/* 3476 */    MCD::OPC_ExtractField, 19, 2,  // Inst{20-19} ...
/* 3479 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 3491
/* 3483 */    MCD::OPC_CheckPredicate, 18, 60, 1, // Skip to: 3803
/* 3487 */    MCD::OPC_Decode, 109, 165, 1, // Opcode: ADDIUPC_MMR6
/* 3491 */    MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 3504
/* 3495 */    MCD::OPC_CheckPredicate, 18, 48, 1, // Skip to: 3803
/* 3499 */    MCD::OPC_Decode, 191, 11, 165, 1, // Opcode: LWPC_MMR6
/* 3504 */    MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 3517
/* 3508 */    MCD::OPC_CheckPredicate, 19, 35, 1, // Skip to: 3803
/* 3512 */    MCD::OPC_Decode, 201, 11, 166, 1, // Opcode: LWUPC_MM64R6
/* 3517 */    MCD::OPC_FilterValue, 3, 26, 1, // Skip to: 3803
/* 3521 */    MCD::OPC_ExtractField, 18, 1,  // Inst{18} ...
/* 3524 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 3537
/* 3528 */    MCD::OPC_CheckPredicate, 19, 15, 1, // Skip to: 3803
/* 3532 */    MCD::OPC_Decode, 240, 10, 167, 1, // Opcode: LDPC_MM64R6
/* 3537 */    MCD::OPC_FilterValue, 1, 6, 1, // Skip to: 3803
/* 3541 */    MCD::OPC_ExtractField, 16, 2,  // Inst{17-16} ...
/* 3544 */    MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 3557
/* 3548 */    MCD::OPC_CheckPredicate, 18, 251, 0, // Skip to: 3803
/* 3552 */    MCD::OPC_Decode, 247, 1, 168, 1, // Opcode: AUIPC_MMR6
/* 3557 */    MCD::OPC_FilterValue, 3, 242, 0, // Skip to: 3803
/* 3561 */    MCD::OPC_CheckPredicate, 18, 238, 0, // Skip to: 3803
/* 3565 */    MCD::OPC_Decode, 185, 1, 168, 1, // Opcode: ALUIPC_MMR6
/* 3570 */    MCD::OPC_FilterValue, 31, 24, 0, // Skip to: 3598
/* 3574 */    MCD::OPC_CheckPredicate, 18, 11, 0, // Skip to: 3589
/* 3578 */    MCD::OPC_CheckField, 16, 5, 0, 5, 0, // Skip to: 3589
/* 3584 */    MCD::OPC_Decode, 201, 3, 169, 1, // Opcode: BNEZALC_MMR6
/* 3589 */    MCD::OPC_CheckPredicate, 18, 210, 0, // Skip to: 3803
/* 3593 */    MCD::OPC_Decode, 188, 3, 169, 1, // Opcode: BNEC_MMR6
/* 3598 */    MCD::OPC_FilterValue, 32, 23, 0, // Skip to: 3625
/* 3602 */    MCD::OPC_CheckPredicate, 18, 10, 0, // Skip to: 3616
/* 3606 */    MCD::OPC_CheckField, 21, 5, 0, 4, 0, // Skip to: 3616
/* 3612 */    MCD::OPC_Decode, 184, 10, 89, // Opcode: JIALC_MMR6
/* 3616 */    MCD::OPC_CheckPredicate, 18, 183, 0, // Skip to: 3803
/* 3620 */    MCD::OPC_Decode, 198, 2, 170, 1, // Opcode: BEQZC_MMR6
/* 3625 */    MCD::OPC_FilterValue, 37, 9, 0, // Skip to: 3638
/* 3629 */    MCD::OPC_CheckPredicate, 18, 170, 0, // Skip to: 3803
/* 3633 */    MCD::OPC_Decode, 183, 2, 171, 1, // Opcode: BC_MMR6
/* 3638 */    MCD::OPC_FilterValue, 40, 23, 0, // Skip to: 3665
/* 3642 */    MCD::OPC_CheckPredicate, 18, 10, 0, // Skip to: 3656
/* 3646 */    MCD::OPC_CheckField, 21, 5, 0, 4, 0, // Skip to: 3656
/* 3652 */    MCD::OPC_Decode, 187, 10, 89, // Opcode: JIC_MMR6
/* 3656 */    MCD::OPC_CheckPredicate, 18, 143, 0, // Skip to: 3803
/* 3660 */    MCD::OPC_Decode, 206, 3, 170, 1, // Opcode: BNEZC_MMR6
/* 3665 */    MCD::OPC_FilterValue, 45, 9, 0, // Skip to: 3678
/* 3669 */    MCD::OPC_CheckPredicate, 18, 130, 0, // Skip to: 3803
/* 3673 */    MCD::OPC_Decode, 151, 2, 171, 1, // Opcode: BALC_MMR6
/* 3678 */    MCD::OPC_FilterValue, 48, 9, 0, // Skip to: 3691
/* 3682 */    MCD::OPC_CheckPredicate, 18, 117, 0, // Skip to: 3803
/* 3686 */    MCD::OPC_Decode, 210, 2, 172, 1, // Opcode: BGEUC_MMR6
/* 3691 */    MCD::OPC_FilterValue, 52, 8, 0, // Skip to: 3703
/* 3695 */    MCD::OPC_CheckPredicate, 18, 104, 0, // Skip to: 3803
/* 3699 */    MCD::OPC_Decode, 193, 1, 93, // Opcode: ANDI_MMR6
/* 3703 */    MCD::OPC_FilterValue, 53, 9, 0, // Skip to: 3716
/* 3707 */    MCD::OPC_CheckPredicate, 18, 92, 0, // Skip to: 3803
/* 3711 */    MCD::OPC_Decode, 156, 3, 173, 1, // Opcode: BLTC_MMR6
/* 3716 */    MCD::OPC_FilterValue, 54, 8, 0, // Skip to: 3728
/* 3720 */    MCD::OPC_CheckPredicate, 19, 79, 0, // Skip to: 3803
/* 3724 */    MCD::OPC_Decode, 164, 16, 84, // Opcode: SD_MM64R6
/* 3728 */    MCD::OPC_FilterValue, 55, 8, 0, // Skip to: 3740
/* 3732 */    MCD::OPC_CheckPredicate, 19, 67, 0, // Skip to: 3803
/* 3736 */    MCD::OPC_Decode, 248, 10, 84, // Opcode: LD_MM64R6
/* 3740 */    MCD::OPC_FilterValue, 56, 9, 0, // Skip to: 3753
/* 3744 */    MCD::OPC_CheckPredicate, 18, 55, 0, // Skip to: 3803
/* 3748 */    MCD::OPC_Decode, 163, 3, 174, 1, // Opcode: BLTUC_MMR6
/* 3753 */    MCD::OPC_FilterValue, 60, 9, 0, // Skip to: 3766
/* 3757 */    MCD::OPC_CheckPredicate, 19, 42, 0, // Skip to: 3803
/* 3761 */    MCD::OPC_Decode, 217, 6, 175, 1, // Opcode: DAUI_MM64R6
/* 3766 */    MCD::OPC_FilterValue, 61, 9, 0, // Skip to: 3779
/* 3770 */    MCD::OPC_CheckPredicate, 18, 29, 0, // Skip to: 3803
/* 3774 */    MCD::OPC_Decode, 203, 2, 176, 1, // Opcode: BGEC_MMR6
/* 3779 */    MCD::OPC_FilterValue, 62, 8, 0, // Skip to: 3791
/* 3783 */    MCD::OPC_CheckPredicate, 18, 16, 0, // Skip to: 3803
/* 3787 */    MCD::OPC_Decode, 206, 18, 84, // Opcode: SW_MMR6
/* 3791 */    MCD::OPC_FilterValue, 63, 8, 0, // Skip to: 3803
/* 3795 */    MCD::OPC_CheckPredicate, 18, 4, 0, // Skip to: 3803
/* 3799 */    MCD::OPC_Decode, 210, 11, 84, // Opcode: LW_MMR6
/* 3803 */    MCD::OPC_Fail,
  0
};

static const uint8_t DecoderTableMicroMipsR6_Ambiguous32[] = {
/* 0 */       MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 3 */       MCD::OPC_FilterValue, 29, 9, 0, // Skip to: 16
/* 7 */       MCD::OPC_CheckPredicate, 18, 74, 0, // Skip to: 85
/* 11 */      MCD::OPC_Decode, 216, 3, 164, 1, // Opcode: BOVC_MMR6
/* 16 */      MCD::OPC_FilterValue, 31, 9, 0, // Skip to: 29
/* 20 */      MCD::OPC_CheckPredicate, 18, 61, 0, // Skip to: 85
/* 24 */      MCD::OPC_Decode, 209, 3, 169, 1, // Opcode: BNVC_MMR6
/* 29 */      MCD::OPC_FilterValue, 48, 24, 0, // Skip to: 57
/* 33 */      MCD::OPC_CheckPredicate, 18, 11, 0, // Skip to: 48
/* 37 */      MCD::OPC_CheckField, 16, 5, 0, 5, 0, // Skip to: 48
/* 43 */      MCD::OPC_Decode, 147, 3, 172, 1, // Opcode: BLEZALC_MMR6
/* 48 */      MCD::OPC_CheckPredicate, 18, 33, 0, // Skip to: 85
/* 52 */      MCD::OPC_Decode, 218, 2, 172, 1, // Opcode: BGEZALC_MMR6
/* 57 */      MCD::OPC_FilterValue, 56, 24, 0, // Skip to: 85
/* 61 */      MCD::OPC_CheckPredicate, 18, 11, 0, // Skip to: 76
/* 65 */      MCD::OPC_CheckField, 16, 5, 0, 5, 0, // Skip to: 76
/* 71 */      MCD::OPC_Decode, 238, 2, 174, 1, // Opcode: BGTZALC_MMR6
/* 76 */      MCD::OPC_CheckPredicate, 18, 5, 0, // Skip to: 85
/* 80 */      MCD::OPC_Decode, 171, 3, 174, 1, // Opcode: BLTZALC_MMR6
/* 85 */      MCD::OPC_Fail,
  0
};

static const uint8_t DecoderTableMips32[] = {
/* 0 */       MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 3 */       MCD::OPC_FilterValue, 0, 205, 3, // Skip to: 980
/* 7 */       MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 10 */      MCD::OPC_FilterValue, 0, 55, 0, // Skip to: 69
/* 14 */      MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 17 */      MCD::OPC_FilterValue, 0, 37, 58, // Skip to: 14906
/* 21 */      MCD::OPC_ExtractField, 6, 15,  // Inst{20-6} ...
/* 24 */      MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 36
/* 28 */      MCD::OPC_CheckPredicate, 22, 28, 0, // Skip to: 60
/* 32 */      MCD::OPC_Decode, 227, 17, 0, // Opcode: SSNOP
/* 36 */      MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 48
/* 40 */      MCD::OPC_CheckPredicate, 22, 16, 0, // Skip to: 60
/* 44 */      MCD::OPC_Decode, 139, 8, 0, // Opcode: EHB
/* 48 */      MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 60
/* 52 */      MCD::OPC_CheckPredicate, 23, 4, 0, // Skip to: 60
/* 56 */      MCD::OPC_Decode, 200, 14, 0, // Opcode: PAUSE
/* 60 */      MCD::OPC_CheckPredicate, 1, 250, 57, // Skip to: 14906
/* 64 */      MCD::OPC_Decode, 137, 17, 177, 1, // Opcode: SLL
/* 69 */      MCD::OPC_FilterValue, 1, 41, 0, // Skip to: 114
/* 73 */      MCD::OPC_ExtractField, 16, 2,  // Inst{17-16} ...
/* 76 */      MCD::OPC_FilterValue, 0, 15, 0, // Skip to: 95
/* 80 */      MCD::OPC_CheckPredicate, 24, 230, 57, // Skip to: 14906
/* 84 */      MCD::OPC_CheckField, 6, 5, 0, 224, 57, // Skip to: 14906
/* 90 */      MCD::OPC_Decode, 245, 12, 178, 1, // Opcode: MOVF_I
/* 95 */      MCD::OPC_FilterValue, 1, 215, 57, // Skip to: 14906
/* 99 */      MCD::OPC_CheckPredicate, 24, 211, 57, // Skip to: 14906
/* 103 */     MCD::OPC_CheckField, 6, 5, 0, 205, 57, // Skip to: 14906
/* 109 */     MCD::OPC_Decode, 137, 13, 178, 1, // Opcode: MOVT_I
/* 114 */     MCD::OPC_FilterValue, 2, 29, 0, // Skip to: 147
/* 118 */     MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 121 */     MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 134
/* 125 */     MCD::OPC_CheckPredicate, 1, 185, 57, // Skip to: 14906
/* 129 */     MCD::OPC_Decode, 205, 17, 177, 1, // Opcode: SRL
/* 134 */     MCD::OPC_FilterValue, 1, 176, 57, // Skip to: 14906
/* 138 */     MCD::OPC_CheckPredicate, 25, 172, 57, // Skip to: 14906
/* 142 */     MCD::OPC_Decode, 219, 15, 177, 1, // Opcode: ROTR
/* 147 */     MCD::OPC_FilterValue, 3, 15, 0, // Skip to: 166
/* 151 */     MCD::OPC_CheckPredicate, 1, 159, 57, // Skip to: 14906
/* 155 */     MCD::OPC_CheckField, 21, 5, 0, 153, 57, // Skip to: 14906
/* 161 */     MCD::OPC_Decode, 185, 17, 177, 1, // Opcode: SRA
/* 166 */     MCD::OPC_FilterValue, 4, 14, 0, // Skip to: 184
/* 170 */     MCD::OPC_CheckPredicate, 1, 140, 57, // Skip to: 14906
/* 174 */     MCD::OPC_CheckField, 6, 5, 0, 134, 57, // Skip to: 14906
/* 180 */     MCD::OPC_Decode, 146, 17, 43, // Opcode: SLLV
/* 184 */     MCD::OPC_FilterValue, 5, 15, 0, // Skip to: 203
/* 188 */     MCD::OPC_CheckPredicate, 26, 122, 57, // Skip to: 14906
/* 192 */     MCD::OPC_CheckField, 8, 3, 0, 116, 57, // Skip to: 14906
/* 198 */     MCD::OPC_Decode, 158, 11, 179, 1, // Opcode: LSA
/* 203 */     MCD::OPC_FilterValue, 6, 27, 0, // Skip to: 234
/* 207 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 210 */     MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 222
/* 214 */     MCD::OPC_CheckPredicate, 1, 96, 57, // Skip to: 14906
/* 218 */     MCD::OPC_Decode, 220, 17, 43, // Opcode: SRLV
/* 222 */     MCD::OPC_FilterValue, 1, 88, 57, // Skip to: 14906
/* 226 */     MCD::OPC_CheckPredicate, 25, 84, 57, // Skip to: 14906
/* 230 */     MCD::OPC_Decode, 220, 15, 43, // Opcode: ROTRV
/* 234 */     MCD::OPC_FilterValue, 7, 14, 0, // Skip to: 252
/* 238 */     MCD::OPC_CheckPredicate, 1, 72, 57, // Skip to: 14906
/* 242 */     MCD::OPC_CheckField, 6, 5, 0, 66, 57, // Skip to: 14906
/* 248 */     MCD::OPC_Decode, 198, 17, 43, // Opcode: SRAV
/* 252 */     MCD::OPC_FilterValue, 8, 29, 0, // Skip to: 285
/* 256 */     MCD::OPC_ExtractField, 6, 15,  // Inst{20-6} ...
/* 259 */     MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 272
/* 263 */     MCD::OPC_CheckPredicate, 27, 47, 57, // Skip to: 14906
/* 267 */     MCD::OPC_Decode, 188, 10, 180, 1, // Opcode: JR
/* 272 */     MCD::OPC_FilterValue, 16, 38, 57, // Skip to: 14906
/* 276 */     MCD::OPC_CheckPredicate, 28, 34, 57, // Skip to: 14906
/* 280 */     MCD::OPC_Decode, 195, 10, 180, 1, // Opcode: JR_HB
/* 285 */     MCD::OPC_FilterValue, 9, 39, 0, // Skip to: 328
/* 289 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 292 */     MCD::OPC_FilterValue, 0, 14, 0, // Skip to: 310
/* 296 */     MCD::OPC_CheckPredicate, 1, 14, 57, // Skip to: 14906
/* 300 */     MCD::OPC_CheckField, 16, 5, 0, 8, 57, // Skip to: 14906
/* 306 */     MCD::OPC_Decode, 166, 10, 14, // Opcode: JALR
/* 310 */     MCD::OPC_FilterValue, 16, 0, 57, // Skip to: 14906
/* 314 */     MCD::OPC_CheckPredicate, 29, 252, 56, // Skip to: 14906
/* 318 */     MCD::OPC_CheckField, 16, 5, 0, 246, 56, // Skip to: 14906
/* 324 */     MCD::OPC_Decode, 176, 10, 14, // Opcode: JALR_HB
/* 328 */     MCD::OPC_FilterValue, 10, 15, 0, // Skip to: 347
/* 332 */     MCD::OPC_CheckPredicate, 30, 234, 56, // Skip to: 14906
/* 336 */     MCD::OPC_CheckField, 6, 5, 0, 228, 56, // Skip to: 14906
/* 342 */     MCD::OPC_Decode, 149, 13, 181, 1, // Opcode: MOVZ_I_I
/* 347 */     MCD::OPC_FilterValue, 11, 15, 0, // Skip to: 366
/* 351 */     MCD::OPC_CheckPredicate, 30, 215, 56, // Skip to: 14906
/* 355 */     MCD::OPC_CheckField, 6, 5, 0, 209, 56, // Skip to: 14906
/* 361 */     MCD::OPC_Decode, 129, 13, 181, 1, // Opcode: MOVN_I_I
/* 366 */     MCD::OPC_FilterValue, 12, 9, 0, // Skip to: 379
/* 370 */     MCD::OPC_CheckPredicate, 1, 196, 56, // Skip to: 14906
/* 374 */     MCD::OPC_Decode, 213, 18, 182, 1, // Opcode: SYSCALL
/* 379 */     MCD::OPC_FilterValue, 13, 8, 0, // Skip to: 391
/* 383 */     MCD::OPC_CheckPredicate, 1, 183, 56, // Skip to: 14906
/* 387 */     MCD::OPC_Decode, 221, 3, 44, // Opcode: BREAK
/* 391 */     MCD::OPC_FilterValue, 15, 9, 0, // Skip to: 404
/* 395 */     MCD::OPC_CheckPredicate, 2, 171, 56, // Skip to: 14906
/* 399 */     MCD::OPC_Decode, 207, 18, 183, 1, // Opcode: SYNC
/* 404 */     MCD::OPC_FilterValue, 16, 45, 0, // Skip to: 453
/* 408 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 411 */     MCD::OPC_FilterValue, 0, 155, 56, // Skip to: 14906
/* 415 */     MCD::OPC_ExtractField, 16, 5,  // Inst{20-16} ...
/* 418 */     MCD::OPC_FilterValue, 0, 148, 56, // Skip to: 14906
/* 422 */     MCD::OPC_ExtractField, 23, 3,  // Inst{25-23} ...
/* 425 */     MCD::OPC_FilterValue, 0, 141, 56, // Skip to: 14906
/* 429 */     MCD::OPC_CheckPredicate, 31, 11, 0, // Skip to: 444
/* 433 */     MCD::OPC_CheckField, 21, 2, 0, 5, 0, // Skip to: 444
/* 439 */     MCD::OPC_Decode, 182, 12, 184, 1, // Opcode: MFHI
/* 444 */     MCD::OPC_CheckPredicate, 32, 122, 56, // Skip to: 14906
/* 448 */     MCD::OPC_Decode, 185, 12, 185, 1, // Opcode: MFHI_DSP
/* 453 */     MCD::OPC_FilterValue, 17, 38, 0, // Skip to: 495
/* 457 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 460 */     MCD::OPC_FilterValue, 0, 106, 56, // Skip to: 14906
/* 464 */     MCD::OPC_ExtractField, 13, 8,  // Inst{20-13} ...
/* 467 */     MCD::OPC_FilterValue, 0, 99, 56, // Skip to: 14906
/* 471 */     MCD::OPC_CheckPredicate, 27, 11, 0, // Skip to: 486
/* 475 */     MCD::OPC_CheckField, 11, 2, 0, 5, 0, // Skip to: 486
/* 481 */     MCD::OPC_Decode, 197, 13, 180, 1, // Opcode: MTHI
/* 486 */     MCD::OPC_CheckPredicate, 32, 80, 56, // Skip to: 14906
/* 490 */     MCD::OPC_Decode, 199, 13, 186, 1, // Opcode: MTHI_DSP
/* 495 */     MCD::OPC_FilterValue, 18, 45, 0, // Skip to: 544
/* 499 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 502 */     MCD::OPC_FilterValue, 0, 64, 56, // Skip to: 14906
/* 506 */     MCD::OPC_ExtractField, 16, 5,  // Inst{20-16} ...
/* 509 */     MCD::OPC_FilterValue, 0, 57, 56, // Skip to: 14906
/* 513 */     MCD::OPC_ExtractField, 23, 3,  // Inst{25-23} ...
/* 516 */     MCD::OPC_FilterValue, 0, 50, 56, // Skip to: 14906
/* 520 */     MCD::OPC_CheckPredicate, 31, 11, 0, // Skip to: 535
/* 524 */     MCD::OPC_CheckField, 21, 2, 0, 5, 0, // Skip to: 535
/* 530 */     MCD::OPC_Decode, 188, 12, 184, 1, // Opcode: MFLO
/* 535 */     MCD::OPC_CheckPredicate, 32, 31, 56, // Skip to: 14906
/* 539 */     MCD::OPC_Decode, 191, 12, 185, 1, // Opcode: MFLO_DSP
/* 544 */     MCD::OPC_FilterValue, 19, 38, 0, // Skip to: 586
/* 548 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 551 */     MCD::OPC_FilterValue, 0, 15, 56, // Skip to: 14906
/* 555 */     MCD::OPC_ExtractField, 13, 8,  // Inst{20-13} ...
/* 558 */     MCD::OPC_FilterValue, 0, 8, 56, // Skip to: 14906
/* 562 */     MCD::OPC_CheckPredicate, 27, 11, 0, // Skip to: 577
/* 566 */     MCD::OPC_CheckField, 11, 2, 0, 5, 0, // Skip to: 577
/* 572 */     MCD::OPC_Decode, 204, 13, 180, 1, // Opcode: MTLO
/* 577 */     MCD::OPC_CheckPredicate, 32, 245, 55, // Skip to: 14906
/* 581 */     MCD::OPC_Decode, 206, 13, 187, 1, // Opcode: MTLO_DSP
/* 586 */     MCD::OPC_FilterValue, 21, 15, 0, // Skip to: 605
/* 590 */     MCD::OPC_CheckPredicate, 33, 232, 55, // Skip to: 14906
/* 594 */     MCD::OPC_CheckField, 8, 3, 0, 226, 55, // Skip to: 14906
/* 600 */     MCD::OPC_Decode, 133, 7, 188, 1, // Opcode: DLSA
/* 605 */     MCD::OPC_FilterValue, 24, 37, 0, // Skip to: 646
/* 609 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 612 */     MCD::OPC_FilterValue, 0, 210, 55, // Skip to: 14906
/* 616 */     MCD::OPC_ExtractField, 13, 3,  // Inst{15-13} ...
/* 619 */     MCD::OPC_FilterValue, 0, 203, 55, // Skip to: 14906
/* 623 */     MCD::OPC_CheckPredicate, 27, 10, 0, // Skip to: 637
/* 627 */     MCD::OPC_CheckField, 11, 2, 0, 4, 0, // Skip to: 637
/* 633 */     MCD::OPC_Decode, 245, 13, 63, // Opcode: MULT
/* 637 */     MCD::OPC_CheckPredicate, 32, 185, 55, // Skip to: 14906
/* 641 */     MCD::OPC_Decode, 248, 13, 189, 1, // Opcode: MULT_DSP
/* 646 */     MCD::OPC_FilterValue, 25, 37, 0, // Skip to: 687
/* 650 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 653 */     MCD::OPC_FilterValue, 0, 169, 55, // Skip to: 14906
/* 657 */     MCD::OPC_ExtractField, 13, 3,  // Inst{15-13} ...
/* 660 */     MCD::OPC_FilterValue, 0, 162, 55, // Skip to: 14906
/* 664 */     MCD::OPC_CheckPredicate, 27, 10, 0, // Skip to: 678
/* 668 */     MCD::OPC_CheckField, 11, 2, 0, 4, 0, // Skip to: 678
/* 674 */     MCD::OPC_Decode, 251, 13, 63, // Opcode: MULTu
/* 678 */     MCD::OPC_CheckPredicate, 32, 144, 55, // Skip to: 14906
/* 682 */     MCD::OPC_Decode, 246, 13, 189, 1, // Opcode: MULTU_DSP
/* 687 */     MCD::OPC_FilterValue, 26, 14, 0, // Skip to: 705
/* 691 */     MCD::OPC_CheckPredicate, 34, 131, 55, // Skip to: 14906
/* 695 */     MCD::OPC_CheckField, 6, 10, 0, 125, 55, // Skip to: 14906
/* 701 */     MCD::OPC_Decode, 156, 16, 63, // Opcode: SDIV
/* 705 */     MCD::OPC_FilterValue, 27, 14, 0, // Skip to: 723
/* 709 */     MCD::OPC_CheckPredicate, 34, 113, 55, // Skip to: 14906
/* 713 */     MCD::OPC_CheckField, 6, 10, 0, 107, 55, // Skip to: 14906
/* 719 */     MCD::OPC_Decode, 185, 19, 63, // Opcode: UDIV
/* 723 */     MCD::OPC_FilterValue, 32, 13, 0, // Skip to: 740
/* 727 */     MCD::OPC_CheckPredicate, 22, 95, 55, // Skip to: 14906
/* 731 */     MCD::OPC_CheckField, 6, 5, 0, 89, 55, // Skip to: 14906
/* 737 */     MCD::OPC_Decode, 106, 49, // Opcode: ADD
/* 740 */     MCD::OPC_FilterValue, 33, 14, 0, // Skip to: 758
/* 744 */     MCD::OPC_CheckPredicate, 1, 78, 55, // Skip to: 14906
/* 748 */     MCD::OPC_CheckField, 6, 5, 0, 72, 55, // Skip to: 14906
/* 754 */     MCD::OPC_Decode, 178, 1, 49, // Opcode: ADDu
/* 758 */     MCD::OPC_FilterValue, 34, 14, 0, // Skip to: 776
/* 762 */     MCD::OPC_CheckPredicate, 22, 60, 55, // Skip to: 14906
/* 766 */     MCD::OPC_CheckField, 6, 5, 0, 54, 55, // Skip to: 14906
/* 772 */     MCD::OPC_Decode, 239, 17, 49, // Opcode: SUB
/* 776 */     MCD::OPC_FilterValue, 35, 14, 0, // Skip to: 794
/* 780 */     MCD::OPC_CheckPredicate, 1, 42, 55, // Skip to: 14906
/* 784 */     MCD::OPC_CheckField, 6, 5, 0, 36, 55, // Skip to: 14906
/* 790 */     MCD::OPC_Decode, 167, 18, 49, // Opcode: SUBu
/* 794 */     MCD::OPC_FilterValue, 36, 14, 0, // Skip to: 812
/* 798 */     MCD::OPC_CheckPredicate, 1, 24, 55, // Skip to: 14906
/* 802 */     MCD::OPC_CheckField, 6, 5, 0, 18, 55, // Skip to: 14906
/* 808 */     MCD::OPC_Decode, 186, 1, 49, // Opcode: AND
/* 812 */     MCD::OPC_FilterValue, 37, 14, 0, // Skip to: 830
/* 816 */     MCD::OPC_CheckPredicate, 1, 6, 55, // Skip to: 14906
/* 820 */     MCD::OPC_CheckField, 6, 5, 0, 0, 55, // Skip to: 14906
/* 826 */     MCD::OPC_Decode, 182, 14, 49, // Opcode: OR
/* 830 */     MCD::OPC_FilterValue, 38, 14, 0, // Skip to: 848
/* 834 */     MCD::OPC_CheckPredicate, 1, 244, 54, // Skip to: 14906
/* 838 */     MCD::OPC_CheckField, 6, 5, 0, 238, 54, // Skip to: 14906
/* 844 */     MCD::OPC_Decode, 211, 19, 49, // Opcode: XOR
/* 848 */     MCD::OPC_FilterValue, 39, 14, 0, // Skip to: 866
/* 852 */     MCD::OPC_CheckPredicate, 1, 226, 54, // Skip to: 14906
/* 856 */     MCD::OPC_CheckField, 6, 5, 0, 220, 54, // Skip to: 14906
/* 862 */     MCD::OPC_Decode, 167, 14, 49, // Opcode: NOR
/* 866 */     MCD::OPC_FilterValue, 42, 14, 0, // Skip to: 884
/* 870 */     MCD::OPC_CheckPredicate, 1, 208, 54, // Skip to: 14906
/* 874 */     MCD::OPC_CheckField, 6, 5, 0, 202, 54, // Skip to: 14906
/* 880 */     MCD::OPC_Decode, 154, 17, 49, // Opcode: SLT
/* 884 */     MCD::OPC_FilterValue, 43, 14, 0, // Skip to: 902
/* 888 */     MCD::OPC_CheckPredicate, 1, 190, 54, // Skip to: 14906
/* 892 */     MCD::OPC_CheckField, 6, 5, 0, 184, 54, // Skip to: 14906
/* 898 */     MCD::OPC_Decode, 165, 17, 49, // Opcode: SLTu
/* 902 */     MCD::OPC_FilterValue, 48, 9, 0, // Skip to: 915
/* 906 */     MCD::OPC_CheckPredicate, 2, 172, 54, // Skip to: 14906
/* 910 */     MCD::OPC_Decode, 141, 19, 190, 1, // Opcode: TGE
/* 915 */     MCD::OPC_FilterValue, 49, 9, 0, // Skip to: 928
/* 919 */     MCD::OPC_CheckPredicate, 2, 159, 54, // Skip to: 14906
/* 923 */     MCD::OPC_Decode, 146, 19, 190, 1, // Opcode: TGEU
/* 928 */     MCD::OPC_FilterValue, 50, 9, 0, // Skip to: 941
/* 932 */     MCD::OPC_CheckPredicate, 2, 146, 54, // Skip to: 14906
/* 936 */     MCD::OPC_Decode, 161, 19, 190, 1, // Opcode: TLT
/* 941 */     MCD::OPC_FilterValue, 51, 9, 0, // Skip to: 954
/* 945 */     MCD::OPC_CheckPredicate, 2, 133, 54, // Skip to: 14906
/* 949 */     MCD::OPC_Decode, 165, 19, 190, 1, // Opcode: TLTU
/* 954 */     MCD::OPC_FilterValue, 52, 9, 0, // Skip to: 967
/* 958 */     MCD::OPC_CheckPredicate, 2, 120, 54, // Skip to: 14906
/* 962 */     MCD::OPC_Decode, 137, 19, 190, 1, // Opcode: TEQ
/* 967 */     MCD::OPC_FilterValue, 54, 111, 54, // Skip to: 14906
/* 971 */     MCD::OPC_CheckPredicate, 2, 107, 54, // Skip to: 14906
/* 975 */     MCD::OPC_Decode, 168, 19, 190, 1, // Opcode: TNE
/* 980 */     MCD::OPC_FilterValue, 1, 216, 0, // Skip to: 1200
/* 984 */     MCD::OPC_ExtractField, 16, 5,  // Inst{20-16} ...
/* 987 */     MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 1000
/* 991 */     MCD::OPC_CheckPredicate, 22, 87, 54, // Skip to: 14906
/* 995 */     MCD::OPC_Decode, 167, 3, 191, 1, // Opcode: BLTZ
/* 1000 */    MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 1013
/* 1004 */    MCD::OPC_CheckPredicate, 22, 74, 54, // Skip to: 14906
/* 1008 */    MCD::OPC_Decode, 214, 2, 191, 1, // Opcode: BGEZ
/* 1013 */    MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 1026
/* 1017 */    MCD::OPC_CheckPredicate, 35, 61, 54, // Skip to: 14906
/* 1021 */    MCD::OPC_Decode, 178, 3, 191, 1, // Opcode: BLTZL
/* 1026 */    MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 1039
/* 1030 */    MCD::OPC_CheckPredicate, 35, 48, 54, // Skip to: 14906
/* 1034 */    MCD::OPC_Decode, 225, 2, 191, 1, // Opcode: BGEZL
/* 1039 */    MCD::OPC_FilterValue, 8, 9, 0, // Skip to: 1052
/* 1043 */    MCD::OPC_CheckPredicate, 35, 35, 54, // Skip to: 14906
/* 1047 */    MCD::OPC_Decode, 142, 19, 168, 1, // Opcode: TGEI
/* 1052 */    MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 1065
/* 1056 */    MCD::OPC_CheckPredicate, 35, 22, 54, // Skip to: 14906
/* 1060 */    MCD::OPC_Decode, 143, 19, 168, 1, // Opcode: TGEIU
/* 1065 */    MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 1078
/* 1069 */    MCD::OPC_CheckPredicate, 35, 9, 54, // Skip to: 14906
/* 1073 */    MCD::OPC_Decode, 162, 19, 168, 1, // Opcode: TLTI
/* 1078 */    MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 1091
/* 1082 */    MCD::OPC_CheckPredicate, 35, 252, 53, // Skip to: 14906
/* 1086 */    MCD::OPC_Decode, 184, 19, 168, 1, // Opcode: TTLTIU
/* 1091 */    MCD::OPC_FilterValue, 12, 9, 0, // Skip to: 1104
/* 1095 */    MCD::OPC_CheckPredicate, 35, 239, 53, // Skip to: 14906
/* 1099 */    MCD::OPC_Decode, 138, 19, 168, 1, // Opcode: TEQI
/* 1104 */    MCD::OPC_FilterValue, 14, 9, 0, // Skip to: 1117
/* 1108 */    MCD::OPC_CheckPredicate, 35, 226, 53, // Skip to: 14906
/* 1112 */    MCD::OPC_Decode, 169, 19, 168, 1, // Opcode: TNEI
/* 1117 */    MCD::OPC_FilterValue, 16, 9, 0, // Skip to: 1130
/* 1121 */    MCD::OPC_CheckPredicate, 27, 213, 53, // Skip to: 14906
/* 1125 */    MCD::OPC_Decode, 169, 3, 191, 1, // Opcode: BLTZAL
/* 1130 */    MCD::OPC_FilterValue, 17, 9, 0, // Skip to: 1143
/* 1134 */    MCD::OPC_CheckPredicate, 27, 200, 53, // Skip to: 14906
/* 1138 */    MCD::OPC_Decode, 216, 2, 191, 1, // Opcode: BGEZAL
/* 1143 */    MCD::OPC_FilterValue, 18, 9, 0, // Skip to: 1156
/* 1147 */    MCD::OPC_CheckPredicate, 35, 187, 53, // Skip to: 14906
/* 1151 */    MCD::OPC_Decode, 172, 3, 191, 1, // Opcode: BLTZALL
/* 1156 */    MCD::OPC_FilterValue, 19, 9, 0, // Skip to: 1169
/* 1160 */    MCD::OPC_CheckPredicate, 35, 174, 53, // Skip to: 14906
/* 1164 */    MCD::OPC_Decode, 219, 2, 191, 1, // Opcode: BGEZALL
/* 1169 */    MCD::OPC_FilterValue, 28, 15, 0, // Skip to: 1188
/* 1173 */    MCD::OPC_CheckPredicate, 36, 161, 53, // Skip to: 14906
/* 1177 */    MCD::OPC_CheckField, 21, 5, 0, 155, 53, // Skip to: 14906
/* 1183 */    MCD::OPC_Decode, 217, 3, 192, 1, // Opcode: BPOSGE32
/* 1188 */    MCD::OPC_FilterValue, 31, 146, 53, // Skip to: 14906
/* 1192 */    MCD::OPC_CheckPredicate, 25, 142, 53, // Skip to: 14906
/* 1196 */    MCD::OPC_Decode, 208, 18, 90, // Opcode: SYNCI
/* 1200 */    MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 1213
/* 1204 */    MCD::OPC_CheckPredicate, 22, 130, 53, // Skip to: 14906
/* 1208 */    MCD::OPC_Decode, 164, 10, 193, 1, // Opcode: J
/* 1213 */    MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 1226
/* 1217 */    MCD::OPC_CheckPredicate, 22, 117, 53, // Skip to: 14906
/* 1221 */    MCD::OPC_Decode, 165, 10, 193, 1, // Opcode: JAL
/* 1226 */    MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 1239
/* 1230 */    MCD::OPC_CheckPredicate, 22, 104, 53, // Skip to: 14906
/* 1234 */    MCD::OPC_Decode, 184, 2, 194, 1, // Opcode: BEQ
/* 1239 */    MCD::OPC_FilterValue, 5, 9, 0, // Skip to: 1252
/* 1243 */    MCD::OPC_CheckPredicate, 22, 91, 53, // Skip to: 14906
/* 1247 */    MCD::OPC_Decode, 184, 3, 194, 1, // Opcode: BNE
/* 1252 */    MCD::OPC_FilterValue, 6, 15, 0, // Skip to: 1271
/* 1256 */    MCD::OPC_CheckPredicate, 22, 78, 53, // Skip to: 14906
/* 1260 */    MCD::OPC_CheckField, 16, 5, 0, 72, 53, // Skip to: 14906
/* 1266 */    MCD::OPC_Decode, 144, 3, 191, 1, // Opcode: BLEZ
/* 1271 */    MCD::OPC_FilterValue, 7, 15, 0, // Skip to: 1290
/* 1275 */    MCD::OPC_CheckPredicate, 22, 59, 53, // Skip to: 14906
/* 1279 */    MCD::OPC_CheckField, 16, 5, 0, 53, 53, // Skip to: 14906
/* 1285 */    MCD::OPC_Decode, 235, 2, 191, 1, // Opcode: BGTZ
/* 1290 */    MCD::OPC_FilterValue, 8, 9, 0, // Skip to: 1303
/* 1294 */    MCD::OPC_CheckPredicate, 27, 40, 53, // Skip to: 14906
/* 1298 */    MCD::OPC_Decode, 174, 1, 195, 1, // Opcode: ADDi
/* 1303 */    MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 1316
/* 1307 */    MCD::OPC_CheckPredicate, 1, 27, 53, // Skip to: 14906
/* 1311 */    MCD::OPC_Decode, 176, 1, 195, 1, // Opcode: ADDiu
/* 1316 */    MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 1329
/* 1320 */    MCD::OPC_CheckPredicate, 1, 14, 53, // Skip to: 14906
/* 1324 */    MCD::OPC_Decode, 159, 17, 195, 1, // Opcode: SLTi
/* 1329 */    MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 1342
/* 1333 */    MCD::OPC_CheckPredicate, 1, 1, 53, // Skip to: 14906
/* 1337 */    MCD::OPC_Decode, 162, 17, 195, 1, // Opcode: SLTiu
/* 1342 */    MCD::OPC_FilterValue, 12, 9, 0, // Skip to: 1355
/* 1346 */    MCD::OPC_CheckPredicate, 1, 244, 52, // Skip to: 14906
/* 1350 */    MCD::OPC_Decode, 200, 1, 196, 1, // Opcode: ANDi
/* 1355 */    MCD::OPC_FilterValue, 13, 9, 0, // Skip to: 1368
/* 1359 */    MCD::OPC_CheckPredicate, 1, 231, 52, // Skip to: 14906
/* 1363 */    MCD::OPC_Decode, 194, 14, 196, 1, // Opcode: ORi
/* 1368 */    MCD::OPC_FilterValue, 14, 9, 0, // Skip to: 1381
/* 1372 */    MCD::OPC_CheckPredicate, 1, 218, 52, // Skip to: 14906
/* 1376 */    MCD::OPC_Decode, 223, 19, 196, 1, // Opcode: XORi
/* 1381 */    MCD::OPC_FilterValue, 15, 14, 0, // Skip to: 1399
/* 1385 */    MCD::OPC_CheckPredicate, 22, 205, 52, // Skip to: 14906
/* 1389 */    MCD::OPC_CheckField, 21, 5, 0, 199, 52, // Skip to: 14906
/* 1395 */    MCD::OPC_Decode, 165, 11, 89, // Opcode: LUi
/* 1399 */    MCD::OPC_FilterValue, 16, 56, 1, // Skip to: 1715
/* 1403 */    MCD::OPC_ExtractField, 3, 8,  // Inst{10-3} ...
/* 1406 */    MCD::OPC_FilterValue, 0, 150, 0, // Skip to: 1560
/* 1410 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 1413 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 1426
/* 1417 */    MCD::OPC_CheckPredicate, 37, 173, 52, // Skip to: 14906
/* 1421 */    MCD::OPC_Decode, 168, 12, 197, 1, // Opcode: MFC0
/* 1426 */    MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 1439
/* 1430 */    MCD::OPC_CheckPredicate, 37, 160, 52, // Skip to: 14906
/* 1434 */    MCD::OPC_Decode, 183, 13, 198, 1, // Opcode: MTC0
/* 1439 */    MCD::OPC_FilterValue, 11, 20, 0, // Skip to: 1463
/* 1443 */    MCD::OPC_CheckPredicate, 25, 147, 52, // Skip to: 14906
/* 1447 */    MCD::OPC_CheckField, 11, 5, 12, 141, 52, // Skip to: 14906
/* 1453 */    MCD::OPC_CheckField, 0, 3, 0, 135, 52, // Skip to: 14906
/* 1459 */    MCD::OPC_Decode, 240, 6, 73, // Opcode: DI
/* 1463 */    MCD::OPC_FilterValue, 16, 127, 52, // Skip to: 14906
/* 1467 */    MCD::OPC_ExtractField, 0, 3,  // Inst{2-0} ...
/* 1470 */    MCD::OPC_FilterValue, 1, 14, 0, // Skip to: 1488
/* 1474 */    MCD::OPC_CheckPredicate, 1, 116, 52, // Skip to: 14906
/* 1478 */    MCD::OPC_CheckField, 11, 10, 0, 110, 52, // Skip to: 14906
/* 1484 */    MCD::OPC_Decode, 155, 19, 0, // Opcode: TLBR
/* 1488 */    MCD::OPC_FilterValue, 2, 14, 0, // Skip to: 1506
/* 1492 */    MCD::OPC_CheckPredicate, 1, 98, 52, // Skip to: 14906
/* 1496 */    MCD::OPC_CheckField, 11, 10, 0, 92, 52, // Skip to: 14906
/* 1502 */    MCD::OPC_Decode, 157, 19, 0, // Opcode: TLBWI
/* 1506 */    MCD::OPC_FilterValue, 3, 14, 0, // Skip to: 1524
/* 1510 */    MCD::OPC_CheckPredicate, 38, 80, 52, // Skip to: 14906
/* 1514 */    MCD::OPC_CheckField, 11, 10, 0, 74, 52, // Skip to: 14906
/* 1520 */    MCD::OPC_Decode, 149, 19, 0, // Opcode: TLBINV
/* 1524 */    MCD::OPC_FilterValue, 4, 14, 0, // Skip to: 1542
/* 1528 */    MCD::OPC_CheckPredicate, 38, 62, 52, // Skip to: 14906
/* 1532 */    MCD::OPC_CheckField, 11, 10, 0, 56, 52, // Skip to: 14906
/* 1538 */    MCD::OPC_Decode, 150, 19, 0, // Opcode: TLBINVF
/* 1542 */    MCD::OPC_FilterValue, 6, 48, 52, // Skip to: 14906
/* 1546 */    MCD::OPC_CheckPredicate, 1, 44, 52, // Skip to: 14906
/* 1550 */    MCD::OPC_CheckField, 11, 10, 0, 38, 52, // Skip to: 14906
/* 1556 */    MCD::OPC_Decode, 159, 19, 0, // Opcode: TLBWR
/* 1560 */    MCD::OPC_FilterValue, 1, 22, 0, // Skip to: 1586
/* 1564 */    MCD::OPC_CheckPredicate, 1, 26, 52, // Skip to: 14906
/* 1568 */    MCD::OPC_CheckField, 11, 15, 128, 128, 1, 18, 52, // Skip to: 14906
/* 1576 */    MCD::OPC_CheckField, 0, 3, 0, 12, 52, // Skip to: 14906
/* 1582 */    MCD::OPC_Decode, 153, 19, 0, // Opcode: TLBP
/* 1586 */    MCD::OPC_FilterValue, 3, 43, 0, // Skip to: 1633
/* 1590 */    MCD::OPC_ExtractField, 0, 3,  // Inst{2-0} ...
/* 1593 */    MCD::OPC_FilterValue, 0, 16, 0, // Skip to: 1613
/* 1597 */    MCD::OPC_CheckPredicate, 39, 249, 51, // Skip to: 14906
/* 1601 */    MCD::OPC_CheckField, 11, 15, 128, 128, 1, 241, 51, // Skip to: 14906
/* 1609 */    MCD::OPC_Decode, 145, 8, 0, // Opcode: ERET
/* 1613 */    MCD::OPC_FilterValue, 7, 233, 51, // Skip to: 14906
/* 1617 */    MCD::OPC_CheckPredicate, 37, 229, 51, // Skip to: 14906
/* 1621 */    MCD::OPC_CheckField, 11, 15, 128, 128, 1, 221, 51, // Skip to: 14906
/* 1629 */    MCD::OPC_Decode, 230, 6, 0, // Opcode: DERET
/* 1633 */    MCD::OPC_FilterValue, 4, 52, 0, // Skip to: 1689
/* 1637 */    MCD::OPC_ExtractField, 11, 5,  // Inst{15-11} ...
/* 1640 */    MCD::OPC_FilterValue, 0, 21, 0, // Skip to: 1665
/* 1644 */    MCD::OPC_CheckPredicate, 40, 202, 51, // Skip to: 14906
/* 1648 */    MCD::OPC_CheckField, 16, 10, 128, 4, 195, 51, // Skip to: 14906
/* 1655 */    MCD::OPC_CheckField, 0, 3, 0, 189, 51, // Skip to: 14906
/* 1661 */    MCD::OPC_Decode, 202, 19, 0, // Opcode: WAIT
/* 1665 */    MCD::OPC_FilterValue, 12, 181, 51, // Skip to: 14906
/* 1669 */    MCD::OPC_CheckPredicate, 25, 177, 51, // Skip to: 14906
/* 1673 */    MCD::OPC_CheckField, 21, 5, 11, 171, 51, // Skip to: 14906
/* 1679 */    MCD::OPC_CheckField, 0, 3, 0, 165, 51, // Skip to: 14906
/* 1685 */    MCD::OPC_Decode, 142, 8, 73, // Opcode: EI
/* 1689 */    MCD::OPC_FilterValue, 11, 157, 51, // Skip to: 14906
/* 1693 */    MCD::OPC_CheckPredicate, 41, 153, 51, // Skip to: 14906
/* 1697 */    MCD::OPC_CheckField, 11, 15, 128, 128, 1, 145, 51, // Skip to: 14906
/* 1705 */    MCD::OPC_CheckField, 0, 3, 0, 139, 51, // Skip to: 14906
/* 1711 */    MCD::OPC_Decode, 146, 8, 0, // Opcode: ERETNC
/* 1715 */    MCD::OPC_FilterValue, 17, 191, 6, // Skip to: 3446
/* 1719 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 1722 */    MCD::OPC_FilterValue, 0, 15, 0, // Skip to: 1741
/* 1726 */    MCD::OPC_CheckPredicate, 42, 120, 51, // Skip to: 14906
/* 1730 */    MCD::OPC_CheckField, 0, 11, 0, 114, 51, // Skip to: 14906
/* 1736 */    MCD::OPC_Decode, 170, 12, 199, 1, // Opcode: MFC1
/* 1741 */    MCD::OPC_FilterValue, 1, 15, 0, // Skip to: 1760
/* 1745 */    MCD::OPC_CheckPredicate, 43, 101, 51, // Skip to: 14906
/* 1749 */    MCD::OPC_CheckField, 0, 11, 0, 95, 51, // Skip to: 14906
/* 1755 */    MCD::OPC_Decode, 138, 7, 200, 1, // Opcode: DMFC1
/* 1760 */    MCD::OPC_FilterValue, 2, 15, 0, // Skip to: 1779
/* 1764 */    MCD::OPC_CheckPredicate, 44, 82, 51, // Skip to: 14906
/* 1768 */    MCD::OPC_CheckField, 0, 11, 0, 76, 51, // Skip to: 14906
/* 1774 */    MCD::OPC_Decode, 173, 4, 201, 1, // Opcode: CFC1
/* 1779 */    MCD::OPC_FilterValue, 3, 15, 0, // Skip to: 1798
/* 1783 */    MCD::OPC_CheckPredicate, 45, 63, 51, // Skip to: 14906
/* 1787 */    MCD::OPC_CheckField, 0, 11, 0, 57, 51, // Skip to: 14906
/* 1793 */    MCD::OPC_Decode, 176, 12, 202, 1, // Opcode: MFHC1_D32
/* 1798 */    MCD::OPC_FilterValue, 4, 15, 0, // Skip to: 1817
/* 1802 */    MCD::OPC_CheckPredicate, 42, 44, 51, // Skip to: 14906
/* 1806 */    MCD::OPC_CheckField, 0, 11, 0, 38, 51, // Skip to: 14906
/* 1812 */    MCD::OPC_Decode, 185, 13, 203, 1, // Opcode: MTC1
/* 1817 */    MCD::OPC_FilterValue, 5, 15, 0, // Skip to: 1836
/* 1821 */    MCD::OPC_CheckPredicate, 43, 25, 51, // Skip to: 14906
/* 1825 */    MCD::OPC_CheckField, 0, 11, 0, 19, 51, // Skip to: 14906
/* 1831 */    MCD::OPC_Decode, 149, 7, 204, 1, // Opcode: DMTC1
/* 1836 */    MCD::OPC_FilterValue, 6, 15, 0, // Skip to: 1855
/* 1840 */    MCD::OPC_CheckPredicate, 44, 6, 51, // Skip to: 14906
/* 1844 */    MCD::OPC_CheckField, 0, 11, 0, 0, 51, // Skip to: 14906
/* 1850 */    MCD::OPC_Decode, 195, 5, 205, 1, // Opcode: CTC1
/* 1855 */    MCD::OPC_FilterValue, 7, 15, 0, // Skip to: 1874
/* 1859 */    MCD::OPC_CheckPredicate, 45, 243, 50, // Skip to: 14906
/* 1863 */    MCD::OPC_CheckField, 0, 11, 0, 237, 50, // Skip to: 14906
/* 1869 */    MCD::OPC_Decode, 191, 13, 206, 1, // Opcode: MTHC1_D32
/* 1874 */    MCD::OPC_FilterValue, 8, 55, 0, // Skip to: 1933
/* 1878 */    MCD::OPC_ExtractField, 16, 2,  // Inst{17-16} ...
/* 1881 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 1894
/* 1885 */    MCD::OPC_CheckPredicate, 46, 217, 50, // Skip to: 14906
/* 1889 */    MCD::OPC_Decode, 163, 2, 207, 1, // Opcode: BC1F
/* 1894 */    MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 1907
/* 1898 */    MCD::OPC_CheckPredicate, 46, 204, 50, // Skip to: 14906
/* 1902 */    MCD::OPC_Decode, 168, 2, 207, 1, // Opcode: BC1T
/* 1907 */    MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 1920
/* 1911 */    MCD::OPC_CheckPredicate, 47, 191, 50, // Skip to: 14906
/* 1915 */    MCD::OPC_Decode, 164, 2, 207, 1, // Opcode: BC1FL
/* 1920 */    MCD::OPC_FilterValue, 3, 182, 50, // Skip to: 14906
/* 1924 */    MCD::OPC_CheckPredicate, 47, 178, 50, // Skip to: 14906
/* 1928 */    MCD::OPC_Decode, 169, 2, 207, 1, // Opcode: BC1TL
/* 1933 */    MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 1946
/* 1937 */    MCD::OPC_CheckPredicate, 26, 165, 50, // Skip to: 14906
/* 1941 */    MCD::OPC_Decode, 244, 3, 208, 1, // Opcode: BZ_V
/* 1946 */    MCD::OPC_FilterValue, 15, 9, 0, // Skip to: 1959
/* 1950 */    MCD::OPC_CheckPredicate, 26, 152, 50, // Skip to: 14906
/* 1954 */    MCD::OPC_Decode, 213, 3, 208, 1, // Opcode: BNZ_V
/* 1959 */    MCD::OPC_FilterValue, 16, 153, 2, // Skip to: 2628
/* 1963 */    MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 1966 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 1979
/* 1970 */    MCD::OPC_CheckPredicate, 42, 132, 50, // Skip to: 14906
/* 1974 */    MCD::OPC_Decode, 196, 8, 209, 1, // Opcode: FADD_S
/* 1979 */    MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 1992
/* 1983 */    MCD::OPC_CheckPredicate, 42, 119, 50, // Skip to: 14906
/* 1987 */    MCD::OPC_Decode, 212, 9, 209, 1, // Opcode: FSUB_S
/* 1992 */    MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 2005
/* 1996 */    MCD::OPC_CheckPredicate, 42, 106, 50, // Skip to: 14906
/* 2000 */    MCD::OPC_Decode, 171, 9, 209, 1, // Opcode: FMUL_S
/* 2005 */    MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 2018
/* 2009 */    MCD::OPC_CheckPredicate, 42, 93, 50, // Skip to: 14906
/* 2013 */    MCD::OPC_Decode, 234, 8, 209, 1, // Opcode: FDIV_S
/* 2018 */    MCD::OPC_FilterValue, 4, 15, 0, // Skip to: 2037
/* 2022 */    MCD::OPC_CheckPredicate, 48, 80, 50, // Skip to: 14906
/* 2026 */    MCD::OPC_CheckField, 16, 5, 0, 74, 50, // Skip to: 14906
/* 2032 */    MCD::OPC_Decode, 204, 9, 210, 1, // Opcode: FSQRT_S
/* 2037 */    MCD::OPC_FilterValue, 5, 15, 0, // Skip to: 2056
/* 2041 */    MCD::OPC_CheckPredicate, 42, 61, 50, // Skip to: 14906
/* 2045 */    MCD::OPC_CheckField, 16, 5, 0, 55, 50, // Skip to: 14906
/* 2051 */    MCD::OPC_Decode, 188, 8, 210, 1, // Opcode: FABS_S
/* 2056 */    MCD::OPC_FilterValue, 6, 15, 0, // Skip to: 2075
/* 2060 */    MCD::OPC_CheckPredicate, 42, 42, 50, // Skip to: 14906
/* 2064 */    MCD::OPC_CheckField, 16, 5, 0, 36, 50, // Skip to: 14906
/* 2070 */    MCD::OPC_Decode, 161, 9, 210, 1, // Opcode: FMOV_S
/* 2075 */    MCD::OPC_FilterValue, 7, 15, 0, // Skip to: 2094
/* 2079 */    MCD::OPC_CheckPredicate, 42, 23, 50, // Skip to: 14906
/* 2083 */    MCD::OPC_CheckField, 16, 5, 0, 17, 50, // Skip to: 14906
/* 2089 */    MCD::OPC_Decode, 179, 9, 210, 1, // Opcode: FNEG_S
/* 2094 */    MCD::OPC_FilterValue, 12, 15, 0, // Skip to: 2113
/* 2098 */    MCD::OPC_CheckPredicate, 48, 4, 50, // Skip to: 14906
/* 2102 */    MCD::OPC_CheckField, 16, 5, 0, 254, 49, // Skip to: 14906
/* 2108 */    MCD::OPC_Decode, 231, 15, 210, 1, // Opcode: ROUND_W_S
/* 2113 */    MCD::OPC_FilterValue, 13, 15, 0, // Skip to: 2132
/* 2117 */    MCD::OPC_CheckPredicate, 48, 241, 49, // Skip to: 14906
/* 2121 */    MCD::OPC_CheckField, 16, 5, 0, 235, 49, // Skip to: 14906
/* 2127 */    MCD::OPC_Decode, 181, 19, 210, 1, // Opcode: TRUNC_W_S
/* 2132 */    MCD::OPC_FilterValue, 14, 15, 0, // Skip to: 2151
/* 2136 */    MCD::OPC_CheckPredicate, 48, 222, 49, // Skip to: 14906
/* 2140 */    MCD::OPC_CheckField, 16, 5, 0, 216, 49, // Skip to: 14906
/* 2146 */    MCD::OPC_Decode, 162, 4, 210, 1, // Opcode: CEIL_W_S
/* 2151 */    MCD::OPC_FilterValue, 15, 15, 0, // Skip to: 2170
/* 2155 */    MCD::OPC_CheckPredicate, 48, 203, 49, // Skip to: 14906
/* 2159 */    MCD::OPC_CheckField, 16, 5, 0, 197, 49, // Skip to: 14906
/* 2165 */    MCD::OPC_Decode, 144, 9, 210, 1, // Opcode: FLOOR_W_S
/* 2170 */    MCD::OPC_FilterValue, 17, 29, 0, // Skip to: 2203
/* 2174 */    MCD::OPC_ExtractField, 16, 2,  // Inst{17-16} ...
/* 2177 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 2190
/* 2181 */    MCD::OPC_CheckPredicate, 24, 177, 49, // Skip to: 14906
/* 2185 */    MCD::OPC_Decode, 248, 12, 211, 1, // Opcode: MOVF_S
/* 2190 */    MCD::OPC_FilterValue, 1, 168, 49, // Skip to: 14906
/* 2194 */    MCD::OPC_CheckPredicate, 24, 164, 49, // Skip to: 14906
/* 2198 */    MCD::OPC_Decode, 140, 13, 211, 1, // Opcode: MOVT_S
/* 2203 */    MCD::OPC_FilterValue, 18, 9, 0, // Skip to: 2216
/* 2207 */    MCD::OPC_CheckPredicate, 24, 151, 49, // Skip to: 14906
/* 2211 */    MCD::OPC_Decode, 152, 13, 212, 1, // Opcode: MOVZ_I_S
/* 2216 */    MCD::OPC_FilterValue, 19, 9, 0, // Skip to: 2229
/* 2220 */    MCD::OPC_CheckPredicate, 24, 138, 49, // Skip to: 14906
/* 2224 */    MCD::OPC_Decode, 132, 13, 212, 1, // Opcode: MOVN_I_S
/* 2229 */    MCD::OPC_FilterValue, 21, 15, 0, // Skip to: 2248
/* 2233 */    MCD::OPC_CheckPredicate, 49, 125, 49, // Skip to: 14906
/* 2237 */    MCD::OPC_CheckField, 16, 5, 0, 119, 49, // Skip to: 14906
/* 2243 */    MCD::OPC_Decode, 201, 15, 210, 1, // Opcode: RECIP_S
/* 2248 */    MCD::OPC_FilterValue, 22, 15, 0, // Skip to: 2267
/* 2252 */    MCD::OPC_CheckPredicate, 49, 106, 49, // Skip to: 14906
/* 2256 */    MCD::OPC_CheckField, 16, 5, 0, 100, 49, // Skip to: 14906
/* 2262 */    MCD::OPC_Decode, 236, 15, 210, 1, // Opcode: RSQRT_S
/* 2267 */    MCD::OPC_FilterValue, 33, 15, 0, // Skip to: 2286
/* 2271 */    MCD::OPC_CheckPredicate, 50, 87, 49, // Skip to: 14906
/* 2275 */    MCD::OPC_CheckField, 16, 5, 0, 81, 49, // Skip to: 14906
/* 2281 */    MCD::OPC_Decode, 199, 5, 213, 1, // Opcode: CVT_D32_S
/* 2286 */    MCD::OPC_FilterValue, 36, 15, 0, // Skip to: 2305
/* 2290 */    MCD::OPC_CheckPredicate, 42, 68, 49, // Skip to: 14906
/* 2294 */    MCD::OPC_CheckField, 16, 5, 0, 62, 49, // Skip to: 14906
/* 2300 */    MCD::OPC_Decode, 228, 5, 210, 1, // Opcode: CVT_W_S
/* 2305 */    MCD::OPC_FilterValue, 37, 15, 0, // Skip to: 2324
/* 2309 */    MCD::OPC_CheckPredicate, 51, 49, 49, // Skip to: 14906
/* 2313 */    MCD::OPC_CheckField, 16, 5, 0, 43, 49, // Skip to: 14906
/* 2319 */    MCD::OPC_Decode, 212, 5, 214, 1, // Opcode: CVT_L_S
/* 2324 */    MCD::OPC_FilterValue, 48, 15, 0, // Skip to: 2343
/* 2328 */    MCD::OPC_CheckPredicate, 52, 30, 49, // Skip to: 14906
/* 2332 */    MCD::OPC_CheckField, 6, 2, 0, 24, 49, // Skip to: 14906
/* 2338 */    MCD::OPC_Decode, 241, 5, 215, 1, // Opcode: C_F_S
/* 2343 */    MCD::OPC_FilterValue, 49, 15, 0, // Skip to: 2362
/* 2347 */    MCD::OPC_CheckPredicate, 52, 11, 49, // Skip to: 14906
/* 2351 */    MCD::OPC_CheckField, 6, 2, 0, 5, 49, // Skip to: 14906
/* 2357 */    MCD::OPC_Decode, 197, 6, 215, 1, // Opcode: C_UN_S
/* 2362 */    MCD::OPC_FilterValue, 50, 15, 0, // Skip to: 2381
/* 2366 */    MCD::OPC_CheckPredicate, 52, 248, 48, // Skip to: 14906
/* 2370 */    MCD::OPC_CheckField, 6, 2, 0, 242, 48, // Skip to: 14906
/* 2376 */    MCD::OPC_Decode, 235, 5, 215, 1, // Opcode: C_EQ_S
/* 2381 */    MCD::OPC_FilterValue, 51, 15, 0, // Skip to: 2400
/* 2385 */    MCD::OPC_CheckPredicate, 52, 229, 48, // Skip to: 14906
/* 2389 */    MCD::OPC_CheckField, 6, 2, 0, 223, 48, // Skip to: 14906
/* 2395 */    MCD::OPC_Decode, 179, 6, 215, 1, // Opcode: C_UEQ_S
/* 2400 */    MCD::OPC_FilterValue, 52, 15, 0, // Skip to: 2419
/* 2404 */    MCD::OPC_CheckPredicate, 52, 210, 48, // Skip to: 14906
/* 2408 */    MCD::OPC_CheckField, 6, 2, 0, 204, 48, // Skip to: 14906
/* 2414 */    MCD::OPC_Decode, 161, 6, 215, 1, // Opcode: C_OLT_S
/* 2419 */    MCD::OPC_FilterValue, 53, 15, 0, // Skip to: 2438
/* 2423 */    MCD::OPC_CheckPredicate, 52, 191, 48, // Skip to: 14906
/* 2427 */    MCD::OPC_CheckField, 6, 2, 0, 185, 48, // Skip to: 14906
/* 2433 */    MCD::OPC_Decode, 191, 6, 215, 1, // Opcode: C_ULT_S
/* 2438 */    MCD::OPC_FilterValue, 54, 15, 0, // Skip to: 2457
/* 2442 */    MCD::OPC_CheckPredicate, 52, 172, 48, // Skip to: 14906
/* 2446 */    MCD::OPC_CheckField, 6, 2, 0, 166, 48, // Skip to: 14906
/* 2452 */    MCD::OPC_Decode, 155, 6, 215, 1, // Opcode: C_OLE_S
/* 2457 */    MCD::OPC_FilterValue, 55, 15, 0, // Skip to: 2476
/* 2461 */    MCD::OPC_CheckPredicate, 52, 153, 48, // Skip to: 14906
/* 2465 */    MCD::OPC_CheckField, 6, 2, 0, 147, 48, // Skip to: 14906
/* 2471 */    MCD::OPC_Decode, 185, 6, 215, 1, // Opcode: C_ULE_S
/* 2476 */    MCD::OPC_FilterValue, 56, 15, 0, // Skip to: 2495
/* 2480 */    MCD::OPC_CheckPredicate, 52, 134, 48, // Skip to: 14906
/* 2484 */    MCD::OPC_CheckField, 6, 2, 0, 128, 48, // Skip to: 14906
/* 2490 */    MCD::OPC_Decode, 173, 6, 215, 1, // Opcode: C_SF_S
/* 2495 */    MCD::OPC_FilterValue, 57, 15, 0, // Skip to: 2514
/* 2499 */    MCD::OPC_CheckPredicate, 52, 115, 48, // Skip to: 14906
/* 2503 */    MCD::OPC_CheckField, 6, 2, 0, 109, 48, // Skip to: 14906
/* 2509 */    MCD::OPC_Decode, 137, 6, 215, 1, // Opcode: C_NGLE_S
/* 2514 */    MCD::OPC_FilterValue, 58, 15, 0, // Skip to: 2533
/* 2518 */    MCD::OPC_CheckPredicate, 52, 96, 48, // Skip to: 14906
/* 2522 */    MCD::OPC_CheckField, 6, 2, 0, 90, 48, // Skip to: 14906
/* 2528 */    MCD::OPC_Decode, 167, 6, 215, 1, // Opcode: C_SEQ_S
/* 2533 */    MCD::OPC_FilterValue, 59, 15, 0, // Skip to: 2552
/* 2537 */    MCD::OPC_CheckPredicate, 52, 77, 48, // Skip to: 14906
/* 2541 */    MCD::OPC_CheckField, 6, 2, 0, 71, 48, // Skip to: 14906
/* 2547 */    MCD::OPC_Decode, 143, 6, 215, 1, // Opcode: C_NGL_S
/* 2552 */    MCD::OPC_FilterValue, 60, 15, 0, // Skip to: 2571
/* 2556 */    MCD::OPC_CheckPredicate, 52, 58, 48, // Skip to: 14906
/* 2560 */    MCD::OPC_CheckField, 6, 2, 0, 52, 48, // Skip to: 14906
/* 2566 */    MCD::OPC_Decode, 253, 5, 215, 1, // Opcode: C_LT_S
/* 2571 */    MCD::OPC_FilterValue, 61, 15, 0, // Skip to: 2590
/* 2575 */    MCD::OPC_CheckPredicate, 52, 39, 48, // Skip to: 14906
/* 2579 */    MCD::OPC_CheckField, 6, 2, 0, 33, 48, // Skip to: 14906
/* 2585 */    MCD::OPC_Decode, 131, 6, 215, 1, // Opcode: C_NGE_S
/* 2590 */    MCD::OPC_FilterValue, 62, 15, 0, // Skip to: 2609
/* 2594 */    MCD::OPC_CheckPredicate, 52, 20, 48, // Skip to: 14906
/* 2598 */    MCD::OPC_CheckField, 6, 2, 0, 14, 48, // Skip to: 14906
/* 2604 */    MCD::OPC_Decode, 247, 5, 215, 1, // Opcode: C_LE_S
/* 2609 */    MCD::OPC_FilterValue, 63, 5, 48, // Skip to: 14906
/* 2613 */    MCD::OPC_CheckPredicate, 52, 1, 48, // Skip to: 14906
/* 2617 */    MCD::OPC_CheckField, 6, 2, 0, 251, 47, // Skip to: 14906
/* 2623 */    MCD::OPC_Decode, 149, 6, 215, 1, // Opcode: C_NGT_S
/* 2628 */    MCD::OPC_FilterValue, 17, 153, 2, // Skip to: 3297
/* 2632 */    MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 2635 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 2648
/* 2639 */    MCD::OPC_CheckPredicate, 50, 231, 47, // Skip to: 14906
/* 2643 */    MCD::OPC_Decode, 192, 8, 216, 1, // Opcode: FADD_D32
/* 2648 */    MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 2661
/* 2652 */    MCD::OPC_CheckPredicate, 50, 218, 47, // Skip to: 14906
/* 2656 */    MCD::OPC_Decode, 208, 9, 216, 1, // Opcode: FSUB_D32
/* 2661 */    MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 2674
/* 2665 */    MCD::OPC_CheckPredicate, 50, 205, 47, // Skip to: 14906
/* 2669 */    MCD::OPC_Decode, 167, 9, 216, 1, // Opcode: FMUL_D32
/* 2674 */    MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 2687
/* 2678 */    MCD::OPC_CheckPredicate, 50, 192, 47, // Skip to: 14906
/* 2682 */    MCD::OPC_Decode, 230, 8, 216, 1, // Opcode: FDIV_D32
/* 2687 */    MCD::OPC_FilterValue, 4, 15, 0, // Skip to: 2706
/* 2691 */    MCD::OPC_CheckPredicate, 53, 179, 47, // Skip to: 14906
/* 2695 */    MCD::OPC_CheckField, 16, 5, 0, 173, 47, // Skip to: 14906
/* 2701 */    MCD::OPC_Decode, 201, 9, 217, 1, // Opcode: FSQRT_D32
/* 2706 */    MCD::OPC_FilterValue, 5, 15, 0, // Skip to: 2725
/* 2710 */    MCD::OPC_CheckPredicate, 50, 160, 47, // Skip to: 14906
/* 2714 */    MCD::OPC_CheckField, 16, 5, 0, 154, 47, // Skip to: 14906
/* 2720 */    MCD::OPC_Decode, 185, 8, 217, 1, // Opcode: FABS_D32
/* 2725 */    MCD::OPC_FilterValue, 6, 15, 0, // Skip to: 2744
/* 2729 */    MCD::OPC_CheckPredicate, 50, 141, 47, // Skip to: 14906
/* 2733 */    MCD::OPC_CheckField, 16, 5, 0, 135, 47, // Skip to: 14906
/* 2739 */    MCD::OPC_Decode, 157, 9, 217, 1, // Opcode: FMOV_D32
/* 2744 */    MCD::OPC_FilterValue, 7, 15, 0, // Skip to: 2763
/* 2748 */    MCD::OPC_CheckPredicate, 50, 122, 47, // Skip to: 14906
/* 2752 */    MCD::OPC_CheckField, 16, 5, 0, 116, 47, // Skip to: 14906
/* 2758 */    MCD::OPC_Decode, 175, 9, 217, 1, // Opcode: FNEG_D32
/* 2763 */    MCD::OPC_FilterValue, 12, 15, 0, // Skip to: 2782
/* 2767 */    MCD::OPC_CheckPredicate, 53, 103, 47, // Skip to: 14906
/* 2771 */    MCD::OPC_CheckField, 16, 5, 0, 97, 47, // Skip to: 14906
/* 2777 */    MCD::OPC_Decode, 227, 15, 218, 1, // Opcode: ROUND_W_D32
/* 2782 */    MCD::OPC_FilterValue, 13, 15, 0, // Skip to: 2801
/* 2786 */    MCD::OPC_CheckPredicate, 53, 84, 47, // Skip to: 14906
/* 2790 */    MCD::OPC_CheckField, 16, 5, 0, 78, 47, // Skip to: 14906
/* 2796 */    MCD::OPC_Decode, 177, 19, 218, 1, // Opcode: TRUNC_W_D32
/* 2801 */    MCD::OPC_FilterValue, 14, 15, 0, // Skip to: 2820
/* 2805 */    MCD::OPC_CheckPredicate, 53, 65, 47, // Skip to: 14906
/* 2809 */    MCD::OPC_CheckField, 16, 5, 0, 59, 47, // Skip to: 14906
/* 2815 */    MCD::OPC_Decode, 158, 4, 218, 1, // Opcode: CEIL_W_D32
/* 2820 */    MCD::OPC_FilterValue, 15, 15, 0, // Skip to: 2839
/* 2824 */    MCD::OPC_CheckPredicate, 53, 46, 47, // Skip to: 14906
/* 2828 */    MCD::OPC_CheckField, 16, 5, 0, 40, 47, // Skip to: 14906
/* 2834 */    MCD::OPC_Decode, 140, 9, 218, 1, // Opcode: FLOOR_W_D32
/* 2839 */    MCD::OPC_FilterValue, 17, 29, 0, // Skip to: 2872
/* 2843 */    MCD::OPC_ExtractField, 16, 2,  // Inst{17-16} ...
/* 2846 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 2859
/* 2850 */    MCD::OPC_CheckPredicate, 54, 20, 47, // Skip to: 14906
/* 2854 */    MCD::OPC_Decode, 242, 12, 219, 1, // Opcode: MOVF_D32
/* 2859 */    MCD::OPC_FilterValue, 1, 11, 47, // Skip to: 14906
/* 2863 */    MCD::OPC_CheckPredicate, 54, 7, 47, // Skip to: 14906
/* 2867 */    MCD::OPC_Decode, 134, 13, 219, 1, // Opcode: MOVT_D32
/* 2872 */    MCD::OPC_FilterValue, 18, 9, 0, // Skip to: 2885
/* 2876 */    MCD::OPC_CheckPredicate, 54, 250, 46, // Skip to: 14906
/* 2880 */    MCD::OPC_Decode, 146, 13, 220, 1, // Opcode: MOVZ_I_D32
/* 2885 */    MCD::OPC_FilterValue, 19, 9, 0, // Skip to: 2898
/* 2889 */    MCD::OPC_CheckPredicate, 54, 237, 46, // Skip to: 14906
/* 2893 */    MCD::OPC_Decode, 254, 12, 220, 1, // Opcode: MOVN_I_D32
/* 2898 */    MCD::OPC_FilterValue, 21, 15, 0, // Skip to: 2917
/* 2902 */    MCD::OPC_CheckPredicate, 49, 224, 46, // Skip to: 14906
/* 2906 */    MCD::OPC_CheckField, 16, 5, 0, 218, 46, // Skip to: 14906
/* 2912 */    MCD::OPC_Decode, 199, 15, 221, 1, // Opcode: RECIP_D
/* 2917 */    MCD::OPC_FilterValue, 22, 15, 0, // Skip to: 2936
/* 2921 */    MCD::OPC_CheckPredicate, 49, 205, 46, // Skip to: 14906
/* 2925 */    MCD::OPC_CheckField, 16, 5, 0, 199, 46, // Skip to: 14906
/* 2931 */    MCD::OPC_Decode, 234, 15, 221, 1, // Opcode: RSQRT_D
/* 2936 */    MCD::OPC_FilterValue, 32, 15, 0, // Skip to: 2955
/* 2940 */    MCD::OPC_CheckPredicate, 50, 186, 46, // Skip to: 14906
/* 2944 */    MCD::OPC_CheckField, 16, 5, 0, 180, 46, // Skip to: 14906
/* 2950 */    MCD::OPC_Decode, 215, 5, 218, 1, // Opcode: CVT_S_D32
/* 2955 */    MCD::OPC_FilterValue, 36, 15, 0, // Skip to: 2974
/* 2959 */    MCD::OPC_CheckPredicate, 50, 167, 46, // Skip to: 14906
/* 2963 */    MCD::OPC_CheckField, 16, 5, 0, 161, 46, // Skip to: 14906
/* 2969 */    MCD::OPC_Decode, 224, 5, 218, 1, // Opcode: CVT_W_D32
/* 2974 */    MCD::OPC_FilterValue, 37, 15, 0, // Skip to: 2993
/* 2978 */    MCD::OPC_CheckPredicate, 51, 148, 46, // Skip to: 14906
/* 2982 */    MCD::OPC_CheckField, 16, 5, 0, 142, 46, // Skip to: 14906
/* 2988 */    MCD::OPC_Decode, 209, 5, 221, 1, // Opcode: CVT_L_D64
/* 2993 */    MCD::OPC_FilterValue, 48, 15, 0, // Skip to: 3012
/* 2997 */    MCD::OPC_CheckPredicate, 55, 129, 46, // Skip to: 14906
/* 3001 */    MCD::OPC_CheckField, 6, 2, 0, 123, 46, // Skip to: 14906
/* 3007 */    MCD::OPC_Decode, 237, 5, 222, 1, // Opcode: C_F_D32
/* 3012 */    MCD::OPC_FilterValue, 49, 15, 0, // Skip to: 3031
/* 3016 */    MCD::OPC_CheckPredicate, 55, 110, 46, // Skip to: 14906
/* 3020 */    MCD::OPC_CheckField, 6, 2, 0, 104, 46, // Skip to: 14906
/* 3026 */    MCD::OPC_Decode, 193, 6, 222, 1, // Opcode: C_UN_D32
/* 3031 */    MCD::OPC_FilterValue, 50, 15, 0, // Skip to: 3050
/* 3035 */    MCD::OPC_CheckPredicate, 55, 91, 46, // Skip to: 14906
/* 3039 */    MCD::OPC_CheckField, 6, 2, 0, 85, 46, // Skip to: 14906
/* 3045 */    MCD::OPC_Decode, 231, 5, 222, 1, // Opcode: C_EQ_D32
/* 3050 */    MCD::OPC_FilterValue, 51, 15, 0, // Skip to: 3069
/* 3054 */    MCD::OPC_CheckPredicate, 55, 72, 46, // Skip to: 14906
/* 3058 */    MCD::OPC_CheckField, 6, 2, 0, 66, 46, // Skip to: 14906
/* 3064 */    MCD::OPC_Decode, 175, 6, 222, 1, // Opcode: C_UEQ_D32
/* 3069 */    MCD::OPC_FilterValue, 52, 15, 0, // Skip to: 3088
/* 3073 */    MCD::OPC_CheckPredicate, 55, 53, 46, // Skip to: 14906
/* 3077 */    MCD::OPC_CheckField, 6, 2, 0, 47, 46, // Skip to: 14906
/* 3083 */    MCD::OPC_Decode, 157, 6, 222, 1, // Opcode: C_OLT_D32
/* 3088 */    MCD::OPC_FilterValue, 53, 15, 0, // Skip to: 3107
/* 3092 */    MCD::OPC_CheckPredicate, 55, 34, 46, // Skip to: 14906
/* 3096 */    MCD::OPC_CheckField, 6, 2, 0, 28, 46, // Skip to: 14906
/* 3102 */    MCD::OPC_Decode, 187, 6, 222, 1, // Opcode: C_ULT_D32
/* 3107 */    MCD::OPC_FilterValue, 54, 15, 0, // Skip to: 3126
/* 3111 */    MCD::OPC_CheckPredicate, 55, 15, 46, // Skip to: 14906
/* 3115 */    MCD::OPC_CheckField, 6, 2, 0, 9, 46, // Skip to: 14906
/* 3121 */    MCD::OPC_Decode, 151, 6, 222, 1, // Opcode: C_OLE_D32
/* 3126 */    MCD::OPC_FilterValue, 55, 15, 0, // Skip to: 3145
/* 3130 */    MCD::OPC_CheckPredicate, 55, 252, 45, // Skip to: 14906
/* 3134 */    MCD::OPC_CheckField, 6, 2, 0, 246, 45, // Skip to: 14906
/* 3140 */    MCD::OPC_Decode, 181, 6, 222, 1, // Opcode: C_ULE_D32
/* 3145 */    MCD::OPC_FilterValue, 56, 15, 0, // Skip to: 3164
/* 3149 */    MCD::OPC_CheckPredicate, 55, 233, 45, // Skip to: 14906
/* 3153 */    MCD::OPC_CheckField, 6, 2, 0, 227, 45, // Skip to: 14906
/* 3159 */    MCD::OPC_Decode, 169, 6, 222, 1, // Opcode: C_SF_D32
/* 3164 */    MCD::OPC_FilterValue, 57, 15, 0, // Skip to: 3183
/* 3168 */    MCD::OPC_CheckPredicate, 55, 214, 45, // Skip to: 14906
/* 3172 */    MCD::OPC_CheckField, 6, 2, 0, 208, 45, // Skip to: 14906
/* 3178 */    MCD::OPC_Decode, 133, 6, 222, 1, // Opcode: C_NGLE_D32
/* 3183 */    MCD::OPC_FilterValue, 58, 15, 0, // Skip to: 3202
/* 3187 */    MCD::OPC_CheckPredicate, 55, 195, 45, // Skip to: 14906
/* 3191 */    MCD::OPC_CheckField, 6, 2, 0, 189, 45, // Skip to: 14906
/* 3197 */    MCD::OPC_Decode, 163, 6, 222, 1, // Opcode: C_SEQ_D32
/* 3202 */    MCD::OPC_FilterValue, 59, 15, 0, // Skip to: 3221
/* 3206 */    MCD::OPC_CheckPredicate, 55, 176, 45, // Skip to: 14906
/* 3210 */    MCD::OPC_CheckField, 6, 2, 0, 170, 45, // Skip to: 14906
/* 3216 */    MCD::OPC_Decode, 139, 6, 222, 1, // Opcode: C_NGL_D32
/* 3221 */    MCD::OPC_FilterValue, 60, 15, 0, // Skip to: 3240
/* 3225 */    MCD::OPC_CheckPredicate, 55, 157, 45, // Skip to: 14906
/* 3229 */    MCD::OPC_CheckField, 6, 2, 0, 151, 45, // Skip to: 14906
/* 3235 */    MCD::OPC_Decode, 249, 5, 222, 1, // Opcode: C_LT_D32
/* 3240 */    MCD::OPC_FilterValue, 61, 15, 0, // Skip to: 3259
/* 3244 */    MCD::OPC_CheckPredicate, 55, 138, 45, // Skip to: 14906
/* 3248 */    MCD::OPC_CheckField, 6, 2, 0, 132, 45, // Skip to: 14906
/* 3254 */    MCD::OPC_Decode, 255, 5, 222, 1, // Opcode: C_NGE_D32
/* 3259 */    MCD::OPC_FilterValue, 62, 15, 0, // Skip to: 3278
/* 3263 */    MCD::OPC_CheckPredicate, 55, 119, 45, // Skip to: 14906
/* 3267 */    MCD::OPC_CheckField, 6, 2, 0, 113, 45, // Skip to: 14906
/* 3273 */    MCD::OPC_Decode, 243, 5, 222, 1, // Opcode: C_LE_D32
/* 3278 */    MCD::OPC_FilterValue, 63, 104, 45, // Skip to: 14906
/* 3282 */    MCD::OPC_CheckPredicate, 55, 100, 45, // Skip to: 14906
/* 3286 */    MCD::OPC_CheckField, 6, 2, 0, 94, 45, // Skip to: 14906
/* 3292 */    MCD::OPC_Decode, 145, 6, 222, 1, // Opcode: C_NGT_D32
/* 3297 */    MCD::OPC_FilterValue, 20, 41, 0, // Skip to: 3342
/* 3301 */    MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 3304 */    MCD::OPC_FilterValue, 32, 15, 0, // Skip to: 3323
/* 3308 */    MCD::OPC_CheckPredicate, 42, 74, 45, // Skip to: 14906
/* 3312 */    MCD::OPC_CheckField, 16, 5, 0, 68, 45, // Skip to: 14906
/* 3318 */    MCD::OPC_Decode, 221, 5, 210, 1, // Opcode: CVT_S_W
/* 3323 */    MCD::OPC_FilterValue, 33, 59, 45, // Skip to: 14906
/* 3327 */    MCD::OPC_CheckPredicate, 50, 55, 45, // Skip to: 14906
/* 3331 */    MCD::OPC_CheckField, 16, 5, 0, 49, 45, // Skip to: 14906
/* 3337 */    MCD::OPC_Decode, 200, 5, 213, 1, // Opcode: CVT_D32_W
/* 3342 */    MCD::OPC_FilterValue, 24, 9, 0, // Skip to: 3355
/* 3346 */    MCD::OPC_CheckPredicate, 26, 36, 45, // Skip to: 14906
/* 3350 */    MCD::OPC_Decode, 241, 3, 208, 1, // Opcode: BZ_B
/* 3355 */    MCD::OPC_FilterValue, 25, 9, 0, // Skip to: 3368
/* 3359 */    MCD::OPC_CheckPredicate, 26, 23, 45, // Skip to: 14906
/* 3363 */    MCD::OPC_Decode, 243, 3, 223, 1, // Opcode: BZ_H
/* 3368 */    MCD::OPC_FilterValue, 26, 9, 0, // Skip to: 3381
/* 3372 */    MCD::OPC_CheckPredicate, 26, 10, 45, // Skip to: 14906
/* 3376 */    MCD::OPC_Decode, 245, 3, 224, 1, // Opcode: BZ_W
/* 3381 */    MCD::OPC_FilterValue, 27, 9, 0, // Skip to: 3394
/* 3385 */    MCD::OPC_CheckPredicate, 26, 253, 44, // Skip to: 14906
/* 3389 */    MCD::OPC_Decode, 242, 3, 225, 1, // Opcode: BZ_D
/* 3394 */    MCD::OPC_FilterValue, 28, 9, 0, // Skip to: 3407
/* 3398 */    MCD::OPC_CheckPredicate, 26, 240, 44, // Skip to: 14906
/* 3402 */    MCD::OPC_Decode, 210, 3, 208, 1, // Opcode: BNZ_B
/* 3407 */    MCD::OPC_FilterValue, 29, 9, 0, // Skip to: 3420
/* 3411 */    MCD::OPC_CheckPredicate, 26, 227, 44, // Skip to: 14906
/* 3415 */    MCD::OPC_Decode, 212, 3, 223, 1, // Opcode: BNZ_H
/* 3420 */    MCD::OPC_FilterValue, 30, 9, 0, // Skip to: 3433
/* 3424 */    MCD::OPC_CheckPredicate, 26, 214, 44, // Skip to: 14906
/* 3428 */    MCD::OPC_Decode, 214, 3, 224, 1, // Opcode: BNZ_W
/* 3433 */    MCD::OPC_FilterValue, 31, 205, 44, // Skip to: 14906
/* 3437 */    MCD::OPC_CheckPredicate, 26, 201, 44, // Skip to: 14906
/* 3441 */    MCD::OPC_Decode, 211, 3, 225, 1, // Opcode: BNZ_D
/* 3446 */    MCD::OPC_FilterValue, 18, 41, 0, // Skip to: 3491
/* 3450 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 3453 */    MCD::OPC_FilterValue, 0, 15, 0, // Skip to: 3472
/* 3457 */    MCD::OPC_CheckPredicate, 22, 181, 44, // Skip to: 14906
/* 3461 */    MCD::OPC_CheckField, 3, 8, 0, 175, 44, // Skip to: 14906
/* 3467 */    MCD::OPC_Decode, 173, 12, 226, 1, // Opcode: MFC2
/* 3472 */    MCD::OPC_FilterValue, 4, 166, 44, // Skip to: 14906
/* 3476 */    MCD::OPC_CheckPredicate, 22, 162, 44, // Skip to: 14906
/* 3480 */    MCD::OPC_CheckField, 3, 8, 0, 156, 44, // Skip to: 14906
/* 3486 */    MCD::OPC_Decode, 188, 13, 227, 1, // Opcode: MTC2
/* 3491 */    MCD::OPC_FilterValue, 19, 221, 0, // Skip to: 3716
/* 3495 */    MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 3498 */    MCD::OPC_FilterValue, 0, 15, 0, // Skip to: 3517
/* 3502 */    MCD::OPC_CheckPredicate, 56, 136, 44, // Skip to: 14906
/* 3506 */    MCD::OPC_CheckField, 11, 5, 0, 130, 44, // Skip to: 14906
/* 3512 */    MCD::OPC_Decode, 205, 11, 228, 1, // Opcode: LWXC1
/* 3517 */    MCD::OPC_FilterValue, 1, 15, 0, // Skip to: 3536
/* 3521 */    MCD::OPC_CheckPredicate, 57, 117, 44, // Skip to: 14906
/* 3525 */    MCD::OPC_CheckField, 11, 5, 0, 111, 44, // Skip to: 14906
/* 3531 */    MCD::OPC_Decode, 242, 10, 229, 1, // Opcode: LDXC1
/* 3536 */    MCD::OPC_FilterValue, 5, 15, 0, // Skip to: 3555
/* 3540 */    MCD::OPC_CheckPredicate, 58, 98, 44, // Skip to: 14906
/* 3544 */    MCD::OPC_CheckField, 11, 5, 0, 92, 44, // Skip to: 14906
/* 3550 */    MCD::OPC_Decode, 162, 11, 229, 1, // Opcode: LUXC1
/* 3555 */    MCD::OPC_FilterValue, 8, 15, 0, // Skip to: 3574
/* 3559 */    MCD::OPC_CheckPredicate, 56, 79, 44, // Skip to: 14906
/* 3563 */    MCD::OPC_CheckField, 6, 5, 0, 73, 44, // Skip to: 14906
/* 3569 */    MCD::OPC_Decode, 203, 18, 230, 1, // Opcode: SWXC1
/* 3574 */    MCD::OPC_FilterValue, 9, 15, 0, // Skip to: 3593
/* 3578 */    MCD::OPC_CheckPredicate, 57, 60, 44, // Skip to: 14906
/* 3582 */    MCD::OPC_CheckField, 6, 5, 0, 54, 44, // Skip to: 14906
/* 3588 */    MCD::OPC_Decode, 162, 16, 231, 1, // Opcode: SDXC1
/* 3593 */    MCD::OPC_FilterValue, 13, 15, 0, // Skip to: 3612
/* 3597 */    MCD::OPC_CheckPredicate, 58, 41, 44, // Skip to: 14906
/* 3601 */    MCD::OPC_CheckField, 6, 5, 0, 35, 44, // Skip to: 14906
/* 3607 */    MCD::OPC_Decode, 169, 18, 231, 1, // Opcode: SUXC1
/* 3612 */    MCD::OPC_FilterValue, 32, 9, 0, // Skip to: 3625
/* 3616 */    MCD::OPC_CheckPredicate, 59, 22, 44, // Skip to: 14906
/* 3620 */    MCD::OPC_Decode, 130, 12, 232, 1, // Opcode: MADD_S
/* 3625 */    MCD::OPC_FilterValue, 33, 9, 0, // Skip to: 3638
/* 3629 */    MCD::OPC_CheckPredicate, 60, 9, 44, // Skip to: 14906
/* 3633 */    MCD::OPC_Decode, 250, 11, 233, 1, // Opcode: MADD_D32
/* 3638 */    MCD::OPC_FilterValue, 40, 9, 0, // Skip to: 3651
/* 3642 */    MCD::OPC_CheckPredicate, 59, 252, 43, // Skip to: 14906
/* 3646 */    MCD::OPC_Decode, 181, 13, 232, 1, // Opcode: MSUB_S
/* 3651 */    MCD::OPC_FilterValue, 41, 9, 0, // Skip to: 3664
/* 3655 */    MCD::OPC_CheckPredicate, 60, 239, 43, // Skip to: 14906
/* 3659 */    MCD::OPC_Decode, 173, 13, 233, 1, // Opcode: MSUB_D32
/* 3664 */    MCD::OPC_FilterValue, 48, 9, 0, // Skip to: 3677
/* 3668 */    MCD::OPC_CheckPredicate, 59, 226, 43, // Skip to: 14906
/* 3672 */    MCD::OPC_Decode, 159, 14, 232, 1, // Opcode: NMADD_S
/* 3677 */    MCD::OPC_FilterValue, 49, 9, 0, // Skip to: 3690
/* 3681 */    MCD::OPC_CheckPredicate, 60, 213, 43, // Skip to: 14906
/* 3685 */    MCD::OPC_Decode, 156, 14, 233, 1, // Opcode: NMADD_D32
/* 3690 */    MCD::OPC_FilterValue, 56, 9, 0, // Skip to: 3703
/* 3694 */    MCD::OPC_CheckPredicate, 59, 200, 43, // Skip to: 14906
/* 3698 */    MCD::OPC_Decode, 164, 14, 232, 1, // Opcode: NMSUB_S
/* 3703 */    MCD::OPC_FilterValue, 57, 191, 43, // Skip to: 14906
/* 3707 */    MCD::OPC_CheckPredicate, 60, 187, 43, // Skip to: 14906
/* 3711 */    MCD::OPC_Decode, 161, 14, 233, 1, // Opcode: NMSUB_D32
/* 3716 */    MCD::OPC_FilterValue, 20, 9, 0, // Skip to: 3729
/* 3720 */    MCD::OPC_CheckPredicate, 35, 174, 43, // Skip to: 14906
/* 3724 */    MCD::OPC_Decode, 189, 2, 194, 1, // Opcode: BEQL
/* 3729 */    MCD::OPC_FilterValue, 21, 29, 2, // Skip to: 4274
/* 3733 */    MCD::OPC_ExtractField, 0, 16,  // Inst{15-0} ...
/* 3736 */    MCD::OPC_FilterValue, 187, 20, 8, 0, // Skip to: 3749
/* 3741 */    MCD::OPC_CheckPredicate, 14, 71, 0, // Skip to: 3816
/* 3745 */    MCD::OPC_Decode, 205, 9, 98, // Opcode: FSQRT_S_MM
/* 3749 */    MCD::OPC_FilterValue, 187, 22, 8, 0, // Skip to: 3762
/* 3754 */    MCD::OPC_CheckPredicate, 14, 58, 0, // Skip to: 3816
/* 3758 */    MCD::OPC_Decode, 145, 9, 98, // Opcode: FLOOR_W_S_MM
/* 3762 */    MCD::OPC_FilterValue, 187, 54, 8, 0, // Skip to: 3775
/* 3767 */    MCD::OPC_CheckPredicate, 14, 45, 0, // Skip to: 3816
/* 3771 */    MCD::OPC_Decode, 163, 4, 98, // Opcode: CEIL_W_S_MM
/* 3775 */    MCD::OPC_FilterValue, 187, 86, 8, 0, // Skip to: 3788
/* 3780 */    MCD::OPC_CheckPredicate, 14, 32, 0, // Skip to: 3816
/* 3784 */    MCD::OPC_Decode, 182, 19, 98, // Opcode: TRUNC_W_S_MM
/* 3788 */    MCD::OPC_FilterValue, 187, 96, 9, 0, // Skip to: 3802
/* 3793 */    MCD::OPC_CheckPredicate, 61, 19, 0, // Skip to: 3816
/* 3797 */    MCD::OPC_Decode, 180, 12, 135, 1, // Opcode: MFHC1_MM
/* 3802 */    MCD::OPC_FilterValue, 187, 112, 9, 0, // Skip to: 3816
/* 3807 */    MCD::OPC_CheckPredicate, 61, 5, 0, // Skip to: 3816
/* 3811 */    MCD::OPC_Decode, 195, 13, 136, 1, // Opcode: MTHC1_MM
/* 3816 */    MCD::OPC_ExtractField, 0, 13,  // Inst{12-0} ...
/* 3819 */    MCD::OPC_FilterValue, 60, 9, 0, // Skip to: 3832
/* 3823 */    MCD::OPC_CheckPredicate, 62, 182, 1, // Skip to: 4265
/* 3827 */    MCD::OPC_Decode, 242, 5, 234, 1, // Opcode: C_F_S_MM
/* 3832 */    MCD::OPC_FilterValue, 124, 9, 0, // Skip to: 3845
/* 3836 */    MCD::OPC_CheckPredicate, 62, 169, 1, // Skip to: 4265
/* 3840 */    MCD::OPC_Decode, 198, 6, 234, 1, // Opcode: C_UN_S_MM
/* 3845 */    MCD::OPC_FilterValue, 188, 1, 9, 0, // Skip to: 3859
/* 3850 */    MCD::OPC_CheckPredicate, 62, 155, 1, // Skip to: 4265
/* 3854 */    MCD::OPC_Decode, 236, 5, 234, 1, // Opcode: C_EQ_S_MM
/* 3859 */    MCD::OPC_FilterValue, 252, 1, 9, 0, // Skip to: 3873
/* 3864 */    MCD::OPC_CheckPredicate, 62, 141, 1, // Skip to: 4265
/* 3868 */    MCD::OPC_Decode, 180, 6, 234, 1, // Opcode: C_UEQ_S_MM
/* 3873 */    MCD::OPC_FilterValue, 188, 2, 9, 0, // Skip to: 3887
/* 3878 */    MCD::OPC_CheckPredicate, 62, 127, 1, // Skip to: 4265
/* 3882 */    MCD::OPC_Decode, 162, 6, 234, 1, // Opcode: C_OLT_S_MM
/* 3887 */    MCD::OPC_FilterValue, 252, 2, 9, 0, // Skip to: 3901
/* 3892 */    MCD::OPC_CheckPredicate, 62, 113, 1, // Skip to: 4265
/* 3896 */    MCD::OPC_Decode, 192, 6, 234, 1, // Opcode: C_ULT_S_MM
/* 3901 */    MCD::OPC_FilterValue, 188, 3, 9, 0, // Skip to: 3915
/* 3906 */    MCD::OPC_CheckPredicate, 62, 99, 1, // Skip to: 4265
/* 3910 */    MCD::OPC_Decode, 156, 6, 234, 1, // Opcode: C_OLE_S_MM
/* 3915 */    MCD::OPC_FilterValue, 252, 3, 9, 0, // Skip to: 3929
/* 3920 */    MCD::OPC_CheckPredicate, 62, 85, 1, // Skip to: 4265
/* 3924 */    MCD::OPC_Decode, 186, 6, 234, 1, // Opcode: C_ULE_S_MM
/* 3929 */    MCD::OPC_FilterValue, 188, 4, 9, 0, // Skip to: 3943
/* 3934 */    MCD::OPC_CheckPredicate, 62, 71, 1, // Skip to: 4265
/* 3938 */    MCD::OPC_Decode, 174, 6, 234, 1, // Opcode: C_SF_S_MM
/* 3943 */    MCD::OPC_FilterValue, 252, 4, 9, 0, // Skip to: 3957
/* 3948 */    MCD::OPC_CheckPredicate, 62, 57, 1, // Skip to: 4265
/* 3952 */    MCD::OPC_Decode, 138, 6, 234, 1, // Opcode: C_NGLE_S_MM
/* 3957 */    MCD::OPC_FilterValue, 188, 5, 9, 0, // Skip to: 3971
/* 3962 */    MCD::OPC_CheckPredicate, 62, 43, 1, // Skip to: 4265
/* 3966 */    MCD::OPC_Decode, 168, 6, 234, 1, // Opcode: C_SEQ_S_MM
/* 3971 */    MCD::OPC_FilterValue, 252, 5, 9, 0, // Skip to: 3985
/* 3976 */    MCD::OPC_CheckPredicate, 62, 29, 1, // Skip to: 4265
/* 3980 */    MCD::OPC_Decode, 144, 6, 234, 1, // Opcode: C_NGL_S_MM
/* 3985 */    MCD::OPC_FilterValue, 188, 6, 9, 0, // Skip to: 3999
/* 3990 */    MCD::OPC_CheckPredicate, 62, 15, 1, // Skip to: 4265
/* 3994 */    MCD::OPC_Decode, 254, 5, 234, 1, // Opcode: C_LT_S_MM
/* 3999 */    MCD::OPC_FilterValue, 252, 6, 9, 0, // Skip to: 4013
/* 4004 */    MCD::OPC_CheckPredicate, 62, 1, 1, // Skip to: 4265
/* 4008 */    MCD::OPC_Decode, 132, 6, 234, 1, // Opcode: C_NGE_S_MM
/* 4013 */    MCD::OPC_FilterValue, 188, 7, 9, 0, // Skip to: 4027
/* 4018 */    MCD::OPC_CheckPredicate, 62, 243, 0, // Skip to: 4265
/* 4022 */    MCD::OPC_Decode, 248, 5, 234, 1, // Opcode: C_LE_S_MM
/* 4027 */    MCD::OPC_FilterValue, 252, 7, 9, 0, // Skip to: 4041
/* 4032 */    MCD::OPC_CheckPredicate, 62, 229, 0, // Skip to: 4265
/* 4036 */    MCD::OPC_Decode, 150, 6, 234, 1, // Opcode: C_NGT_S_MM
/* 4041 */    MCD::OPC_FilterValue, 188, 8, 9, 0, // Skip to: 4055
/* 4046 */    MCD::OPC_CheckPredicate, 63, 215, 0, // Skip to: 4265
/* 4050 */    MCD::OPC_Decode, 238, 5, 235, 1, // Opcode: C_F_D32_MM
/* 4055 */    MCD::OPC_FilterValue, 252, 8, 9, 0, // Skip to: 4069
/* 4060 */    MCD::OPC_CheckPredicate, 63, 201, 0, // Skip to: 4265
/* 4064 */    MCD::OPC_Decode, 194, 6, 235, 1, // Opcode: C_UN_D32_MM
/* 4069 */    MCD::OPC_FilterValue, 188, 9, 9, 0, // Skip to: 4083
/* 4074 */    MCD::OPC_CheckPredicate, 63, 187, 0, // Skip to: 4265
/* 4078 */    MCD::OPC_Decode, 232, 5, 235, 1, // Opcode: C_EQ_D32_MM
/* 4083 */    MCD::OPC_FilterValue, 252, 9, 9, 0, // Skip to: 4097
/* 4088 */    MCD::OPC_CheckPredicate, 63, 173, 0, // Skip to: 4265
/* 4092 */    MCD::OPC_Decode, 176, 6, 235, 1, // Opcode: C_UEQ_D32_MM
/* 4097 */    MCD::OPC_FilterValue, 188, 10, 9, 0, // Skip to: 4111
/* 4102 */    MCD::OPC_CheckPredicate, 63, 159, 0, // Skip to: 4265
/* 4106 */    MCD::OPC_Decode, 158, 6, 235, 1, // Opcode: C_OLT_D32_MM
/* 4111 */    MCD::OPC_FilterValue, 252, 10, 9, 0, // Skip to: 4125
/* 4116 */    MCD::OPC_CheckPredicate, 63, 145, 0, // Skip to: 4265
/* 4120 */    MCD::OPC_Decode, 188, 6, 235, 1, // Opcode: C_ULT_D32_MM
/* 4125 */    MCD::OPC_FilterValue, 188, 11, 9, 0, // Skip to: 4139
/* 4130 */    MCD::OPC_CheckPredicate, 63, 131, 0, // Skip to: 4265
/* 4134 */    MCD::OPC_Decode, 152, 6, 235, 1, // Opcode: C_OLE_D32_MM
/* 4139 */    MCD::OPC_FilterValue, 252, 11, 9, 0, // Skip to: 4153
/* 4144 */    MCD::OPC_CheckPredicate, 63, 117, 0, // Skip to: 4265
/* 4148 */    MCD::OPC_Decode, 182, 6, 235, 1, // Opcode: C_ULE_D32_MM
/* 4153 */    MCD::OPC_FilterValue, 188, 12, 9, 0, // Skip to: 4167
/* 4158 */    MCD::OPC_CheckPredicate, 63, 103, 0, // Skip to: 4265
/* 4162 */    MCD::OPC_Decode, 170, 6, 235, 1, // Opcode: C_SF_D32_MM
/* 4167 */    MCD::OPC_FilterValue, 252, 12, 9, 0, // Skip to: 4181
/* 4172 */    MCD::OPC_CheckPredicate, 63, 89, 0, // Skip to: 4265
/* 4176 */    MCD::OPC_Decode, 134, 6, 235, 1, // Opcode: C_NGLE_D32_MM
/* 4181 */    MCD::OPC_FilterValue, 188, 13, 9, 0, // Skip to: 4195
/* 4186 */    MCD::OPC_CheckPredicate, 63, 75, 0, // Skip to: 4265
/* 4190 */    MCD::OPC_Decode, 164, 6, 235, 1, // Opcode: C_SEQ_D32_MM
/* 4195 */    MCD::OPC_FilterValue, 252, 13, 9, 0, // Skip to: 4209
/* 4200 */    MCD::OPC_CheckPredicate, 63, 61, 0, // Skip to: 4265
/* 4204 */    MCD::OPC_Decode, 140, 6, 235, 1, // Opcode: C_NGL_D32_MM
/* 4209 */    MCD::OPC_FilterValue, 188, 14, 9, 0, // Skip to: 4223
/* 4214 */    MCD::OPC_CheckPredicate, 63, 47, 0, // Skip to: 4265
/* 4218 */    MCD::OPC_Decode, 250, 5, 235, 1, // Opcode: C_LT_D32_MM
/* 4223 */    MCD::OPC_FilterValue, 252, 14, 9, 0, // Skip to: 4237
/* 4228 */    MCD::OPC_CheckPredicate, 63, 33, 0, // Skip to: 4265
/* 4232 */    MCD::OPC_Decode, 128, 6, 235, 1, // Opcode: C_NGE_D32_MM
/* 4237 */    MCD::OPC_FilterValue, 188, 15, 9, 0, // Skip to: 4251
/* 4242 */    MCD::OPC_CheckPredicate, 63, 19, 0, // Skip to: 4265
/* 4246 */    MCD::OPC_Decode, 244, 5, 235, 1, // Opcode: C_LE_D32_MM
/* 4251 */    MCD::OPC_FilterValue, 252, 15, 9, 0, // Skip to: 4265
/* 4256 */    MCD::OPC_CheckPredicate, 63, 5, 0, // Skip to: 4265
/* 4260 */    MCD::OPC_Decode, 146, 6, 235, 1, // Opcode: C_NGT_D32_MM
/* 4265 */    MCD::OPC_CheckPredicate, 35, 141, 41, // Skip to: 14906
/* 4269 */    MCD::OPC_Decode, 197, 3, 194, 1, // Opcode: BNEL
/* 4274 */    MCD::OPC_FilterValue, 22, 15, 0, // Skip to: 4293
/* 4278 */    MCD::OPC_CheckPredicate, 35, 128, 41, // Skip to: 14906
/* 4282 */    MCD::OPC_CheckField, 16, 5, 0, 122, 41, // Skip to: 14906
/* 4288 */    MCD::OPC_Decode, 151, 3, 191, 1, // Opcode: BLEZL
/* 4293 */    MCD::OPC_FilterValue, 23, 15, 0, // Skip to: 4312
/* 4297 */    MCD::OPC_CheckPredicate, 35, 109, 41, // Skip to: 14906
/* 4301 */    MCD::OPC_CheckField, 16, 5, 0, 103, 41, // Skip to: 14906
/* 4307 */    MCD::OPC_Decode, 242, 2, 191, 1, // Opcode: BGTZL
/* 4312 */    MCD::OPC_FilterValue, 28, 236, 0, // Skip to: 4552
/* 4316 */    MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 4319 */    MCD::OPC_FilterValue, 0, 37, 0, // Skip to: 4360
/* 4323 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 4326 */    MCD::OPC_FilterValue, 0, 80, 41, // Skip to: 14906
/* 4330 */    MCD::OPC_ExtractField, 13, 3,  // Inst{15-13} ...
/* 4333 */    MCD::OPC_FilterValue, 0, 73, 41, // Skip to: 14906
/* 4337 */    MCD::OPC_CheckPredicate, 28, 10, 0, // Skip to: 4351
/* 4341 */    MCD::OPC_CheckField, 11, 2, 0, 4, 0, // Skip to: 4351
/* 4347 */    MCD::OPC_Decode, 235, 11, 63, // Opcode: MADD
/* 4351 */    MCD::OPC_CheckPredicate, 32, 55, 41, // Skip to: 14906
/* 4355 */    MCD::OPC_Decode, 253, 11, 236, 1, // Opcode: MADD_DSP
/* 4360 */    MCD::OPC_FilterValue, 1, 37, 0, // Skip to: 4401
/* 4364 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 4367 */    MCD::OPC_FilterValue, 0, 39, 41, // Skip to: 14906
/* 4371 */    MCD::OPC_ExtractField, 13, 3,  // Inst{15-13} ...
/* 4374 */    MCD::OPC_FilterValue, 0, 32, 41, // Skip to: 14906
/* 4378 */    MCD::OPC_CheckPredicate, 28, 10, 0, // Skip to: 4392
/* 4382 */    MCD::OPC_CheckField, 11, 2, 0, 4, 0, // Skip to: 4392
/* 4388 */    MCD::OPC_Decode, 242, 11, 63, // Opcode: MADDU
/* 4392 */    MCD::OPC_CheckPredicate, 32, 14, 41, // Skip to: 14906
/* 4396 */    MCD::OPC_Decode, 243, 11, 236, 1, // Opcode: MADDU_DSP
/* 4401 */    MCD::OPC_FilterValue, 2, 14, 0, // Skip to: 4419
/* 4405 */    MCD::OPC_CheckPredicate, 28, 1, 41, // Skip to: 14906
/* 4409 */    MCD::OPC_CheckField, 6, 5, 0, 251, 40, // Skip to: 14906
/* 4415 */    MCD::OPC_Decode, 219, 13, 49, // Opcode: MUL
/* 4419 */    MCD::OPC_FilterValue, 4, 37, 0, // Skip to: 4460
/* 4423 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 4426 */    MCD::OPC_FilterValue, 0, 236, 40, // Skip to: 14906
/* 4430 */    MCD::OPC_ExtractField, 13, 3,  // Inst{15-13} ...
/* 4433 */    MCD::OPC_FilterValue, 0, 229, 40, // Skip to: 14906
/* 4437 */    MCD::OPC_CheckPredicate, 28, 10, 0, // Skip to: 4451
/* 4441 */    MCD::OPC_CheckField, 11, 2, 0, 4, 0, // Skip to: 4451
/* 4447 */    MCD::OPC_Decode, 158, 13, 63, // Opcode: MSUB
/* 4451 */    MCD::OPC_CheckPredicate, 32, 211, 40, // Skip to: 14906
/* 4455 */    MCD::OPC_Decode, 176, 13, 236, 1, // Opcode: MSUB_DSP
/* 4460 */    MCD::OPC_FilterValue, 5, 37, 0, // Skip to: 4501
/* 4464 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 4467 */    MCD::OPC_FilterValue, 0, 195, 40, // Skip to: 14906
/* 4471 */    MCD::OPC_ExtractField, 13, 3,  // Inst{15-13} ...
/* 4474 */    MCD::OPC_FilterValue, 0, 188, 40, // Skip to: 14906
/* 4478 */    MCD::OPC_CheckPredicate, 28, 10, 0, // Skip to: 4492
/* 4482 */    MCD::OPC_CheckField, 11, 2, 0, 4, 0, // Skip to: 4492
/* 4488 */    MCD::OPC_Decode, 165, 13, 63, // Opcode: MSUBU
/* 4492 */    MCD::OPC_CheckPredicate, 32, 170, 40, // Skip to: 14906
/* 4496 */    MCD::OPC_Decode, 166, 13, 236, 1, // Opcode: MSUBU_DSP
/* 4501 */    MCD::OPC_FilterValue, 32, 15, 0, // Skip to: 4520
/* 4505 */    MCD::OPC_CheckPredicate, 28, 157, 40, // Skip to: 14906
/* 4509 */    MCD::OPC_CheckField, 6, 5, 0, 151, 40, // Skip to: 14906
/* 4515 */    MCD::OPC_Decode, 221, 4, 237, 1, // Opcode: CLZ
/* 4520 */    MCD::OPC_FilterValue, 33, 15, 0, // Skip to: 4539
/* 4524 */    MCD::OPC_CheckPredicate, 28, 138, 40, // Skip to: 14906
/* 4528 */    MCD::OPC_CheckField, 6, 5, 0, 132, 40, // Skip to: 14906
/* 4534 */    MCD::OPC_Decode, 201, 4, 237, 1, // Opcode: CLO
/* 4539 */    MCD::OPC_FilterValue, 63, 123, 40, // Skip to: 14906
/* 4543 */    MCD::OPC_CheckPredicate, 64, 119, 40, // Skip to: 14906
/* 4547 */    MCD::OPC_Decode, 142, 16, 182, 1, // Opcode: SDBBP
/* 4552 */    MCD::OPC_FilterValue, 29, 9, 0, // Skip to: 4565
/* 4556 */    MCD::OPC_CheckPredicate, 28, 106, 40, // Skip to: 14906
/* 4560 */    MCD::OPC_Decode, 179, 10, 193, 1, // Opcode: JALX
/* 4565 */    MCD::OPC_FilterValue, 30, 108, 28, // Skip to: 11845
/* 4569 */    MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 4572 */    MCD::OPC_FilterValue, 0, 55, 0, // Skip to: 4631
/* 4576 */    MCD::OPC_ExtractField, 24, 2,  // Inst{25-24} ...
/* 4579 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 4592
/* 4583 */    MCD::OPC_CheckPredicate, 26, 79, 40, // Skip to: 14906
/* 4587 */    MCD::OPC_Decode, 192, 1, 238, 1, // Opcode: ANDI_B
/* 4592 */    MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 4605
/* 4596 */    MCD::OPC_CheckPredicate, 26, 66, 40, // Skip to: 14906
/* 4600 */    MCD::OPC_Decode, 186, 14, 238, 1, // Opcode: ORI_B
/* 4605 */    MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 4618
/* 4609 */    MCD::OPC_CheckPredicate, 26, 53, 40, // Skip to: 14906
/* 4613 */    MCD::OPC_Decode, 169, 14, 238, 1, // Opcode: NORI_B
/* 4618 */    MCD::OPC_FilterValue, 3, 44, 40, // Skip to: 14906
/* 4622 */    MCD::OPC_CheckPredicate, 26, 40, 40, // Skip to: 14906
/* 4626 */    MCD::OPC_Decode, 215, 19, 238, 1, // Opcode: XORI_B
/* 4631 */    MCD::OPC_FilterValue, 1, 42, 0, // Skip to: 4677
/* 4635 */    MCD::OPC_ExtractField, 24, 2,  // Inst{25-24} ...
/* 4638 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 4651
/* 4642 */    MCD::OPC_CheckPredicate, 26, 20, 40, // Skip to: 14906
/* 4646 */    MCD::OPC_Decode, 180, 3, 239, 1, // Opcode: BMNZI_B
/* 4651 */    MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 4664
/* 4655 */    MCD::OPC_CheckPredicate, 26, 7, 40, // Skip to: 14906
/* 4659 */    MCD::OPC_Decode, 182, 3, 239, 1, // Opcode: BMZI_B
/* 4664 */    MCD::OPC_FilterValue, 2, 254, 39, // Skip to: 14906
/* 4668 */    MCD::OPC_CheckPredicate, 26, 250, 39, // Skip to: 14906
/* 4672 */    MCD::OPC_Decode, 226, 3, 239, 1, // Opcode: BSELI_B
/* 4677 */    MCD::OPC_FilterValue, 2, 42, 0, // Skip to: 4723
/* 4681 */    MCD::OPC_ExtractField, 24, 2,  // Inst{25-24} ...
/* 4684 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 4697
/* 4688 */    MCD::OPC_CheckPredicate, 26, 230, 39, // Skip to: 14906
/* 4692 */    MCD::OPC_Decode, 204, 16, 238, 1, // Opcode: SHF_B
/* 4697 */    MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 4710
/* 4701 */    MCD::OPC_CheckPredicate, 26, 217, 39, // Skip to: 14906
/* 4705 */    MCD::OPC_Decode, 205, 16, 240, 1, // Opcode: SHF_H
/* 4710 */    MCD::OPC_FilterValue, 2, 208, 39, // Skip to: 14906
/* 4714 */    MCD::OPC_CheckPredicate, 26, 204, 39, // Skip to: 14906
/* 4718 */    MCD::OPC_Decode, 206, 16, 241, 1, // Opcode: SHF_W
/* 4723 */    MCD::OPC_FilterValue, 6, 59, 1, // Skip to: 5042
/* 4727 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 4730 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 4743
/* 4734 */    MCD::OPC_CheckPredicate, 26, 184, 39, // Skip to: 14906
/* 4738 */    MCD::OPC_Decode, 158, 1, 242, 1, // Opcode: ADDVI_B
/* 4743 */    MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 4756
/* 4747 */    MCD::OPC_CheckPredicate, 26, 171, 39, // Skip to: 14906
/* 4751 */    MCD::OPC_Decode, 160, 1, 243, 1, // Opcode: ADDVI_H
/* 4756 */    MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 4769
/* 4760 */    MCD::OPC_CheckPredicate, 26, 158, 39, // Skip to: 14906
/* 4764 */    MCD::OPC_Decode, 161, 1, 244, 1, // Opcode: ADDVI_W
/* 4769 */    MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 4782
/* 4773 */    MCD::OPC_CheckPredicate, 26, 145, 39, // Skip to: 14906
/* 4777 */    MCD::OPC_Decode, 159, 1, 245, 1, // Opcode: ADDVI_D
/* 4782 */    MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 4795
/* 4786 */    MCD::OPC_CheckPredicate, 26, 132, 39, // Skip to: 14906
/* 4790 */    MCD::OPC_Decode, 157, 18, 242, 1, // Opcode: SUBVI_B
/* 4795 */    MCD::OPC_FilterValue, 5, 9, 0, // Skip to: 4808
/* 4799 */    MCD::OPC_CheckPredicate, 26, 119, 39, // Skip to: 14906
/* 4803 */    MCD::OPC_Decode, 159, 18, 243, 1, // Opcode: SUBVI_H
/* 4808 */    MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 4821
/* 4812 */    MCD::OPC_CheckPredicate, 26, 106, 39, // Skip to: 14906
/* 4816 */    MCD::OPC_Decode, 160, 18, 244, 1, // Opcode: SUBVI_W
/* 4821 */    MCD::OPC_FilterValue, 7, 9, 0, // Skip to: 4834
/* 4825 */    MCD::OPC_CheckPredicate, 26, 93, 39, // Skip to: 14906
/* 4829 */    MCD::OPC_Decode, 158, 18, 245, 1, // Opcode: SUBVI_D
/* 4834 */    MCD::OPC_FilterValue, 8, 9, 0, // Skip to: 4847
/* 4838 */    MCD::OPC_CheckPredicate, 26, 80, 39, // Skip to: 14906
/* 4842 */    MCD::OPC_Decode, 144, 12, 242, 1, // Opcode: MAXI_S_B
/* 4847 */    MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 4860
/* 4851 */    MCD::OPC_CheckPredicate, 26, 67, 39, // Skip to: 14906
/* 4855 */    MCD::OPC_Decode, 146, 12, 243, 1, // Opcode: MAXI_S_H
/* 4860 */    MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 4873
/* 4864 */    MCD::OPC_CheckPredicate, 26, 54, 39, // Skip to: 14906
/* 4868 */    MCD::OPC_Decode, 147, 12, 244, 1, // Opcode: MAXI_S_W
/* 4873 */    MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 4886
/* 4877 */    MCD::OPC_CheckPredicate, 26, 41, 39, // Skip to: 14906
/* 4881 */    MCD::OPC_Decode, 145, 12, 245, 1, // Opcode: MAXI_S_D
/* 4886 */    MCD::OPC_FilterValue, 12, 9, 0, // Skip to: 4899
/* 4890 */    MCD::OPC_CheckPredicate, 26, 28, 39, // Skip to: 14906
/* 4894 */    MCD::OPC_Decode, 148, 12, 242, 1, // Opcode: MAXI_U_B
/* 4899 */    MCD::OPC_FilterValue, 13, 9, 0, // Skip to: 4912
/* 4903 */    MCD::OPC_CheckPredicate, 26, 15, 39, // Skip to: 14906
/* 4907 */    MCD::OPC_Decode, 150, 12, 243, 1, // Opcode: MAXI_U_H
/* 4912 */    MCD::OPC_FilterValue, 14, 9, 0, // Skip to: 4925
/* 4916 */    MCD::OPC_CheckPredicate, 26, 2, 39, // Skip to: 14906
/* 4920 */    MCD::OPC_Decode, 151, 12, 244, 1, // Opcode: MAXI_U_W
/* 4925 */    MCD::OPC_FilterValue, 15, 9, 0, // Skip to: 4938
/* 4929 */    MCD::OPC_CheckPredicate, 26, 245, 38, // Skip to: 14906
/* 4933 */    MCD::OPC_Decode, 149, 12, 245, 1, // Opcode: MAXI_U_D
/* 4938 */    MCD::OPC_FilterValue, 16, 9, 0, // Skip to: 4951
/* 4942 */    MCD::OPC_CheckPredicate, 26, 232, 38, // Skip to: 14906
/* 4946 */    MCD::OPC_Decode, 198, 12, 242, 1, // Opcode: MINI_S_B
/* 4951 */    MCD::OPC_FilterValue, 17, 9, 0, // Skip to: 4964
/* 4955 */    MCD::OPC_CheckPredicate, 26, 219, 38, // Skip to: 14906
/* 4959 */    MCD::OPC_Decode, 200, 12, 243, 1, // Opcode: MINI_S_H
/* 4964 */    MCD::OPC_FilterValue, 18, 9, 0, // Skip to: 4977
/* 4968 */    MCD::OPC_CheckPredicate, 26, 206, 38, // Skip to: 14906
/* 4972 */    MCD::OPC_Decode, 201, 12, 244, 1, // Opcode: MINI_S_W
/* 4977 */    MCD::OPC_FilterValue, 19, 9, 0, // Skip to: 4990
/* 4981 */    MCD::OPC_CheckPredicate, 26, 193, 38, // Skip to: 14906
/* 4985 */    MCD::OPC_Decode, 199, 12, 245, 1, // Opcode: MINI_S_D
/* 4990 */    MCD::OPC_FilterValue, 20, 9, 0, // Skip to: 5003
/* 4994 */    MCD::OPC_CheckPredicate, 26, 180, 38, // Skip to: 14906
/* 4998 */    MCD::OPC_Decode, 202, 12, 242, 1, // Opcode: MINI_U_B
/* 5003 */    MCD::OPC_FilterValue, 21, 9, 0, // Skip to: 5016
/* 5007 */    MCD::OPC_CheckPredicate, 26, 167, 38, // Skip to: 14906
/* 5011 */    MCD::OPC_Decode, 204, 12, 243, 1, // Opcode: MINI_U_H
/* 5016 */    MCD::OPC_FilterValue, 22, 9, 0, // Skip to: 5029
/* 5020 */    MCD::OPC_CheckPredicate, 26, 154, 38, // Skip to: 14906
/* 5024 */    MCD::OPC_Decode, 205, 12, 244, 1, // Opcode: MINI_U_W
/* 5029 */    MCD::OPC_FilterValue, 23, 145, 38, // Skip to: 14906
/* 5033 */    MCD::OPC_CheckPredicate, 26, 141, 38, // Skip to: 14906
/* 5037 */    MCD::OPC_Decode, 203, 12, 245, 1, // Opcode: MINI_U_D
/* 5042 */    MCD::OPC_FilterValue, 7, 59, 1, // Skip to: 5361
/* 5046 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 5049 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 5062
/* 5053 */    MCD::OPC_CheckPredicate, 26, 121, 38, // Skip to: 14906
/* 5057 */    MCD::OPC_Decode, 165, 4, 242, 1, // Opcode: CEQI_B
/* 5062 */    MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 5075
/* 5066 */    MCD::OPC_CheckPredicate, 26, 108, 38, // Skip to: 14906
/* 5070 */    MCD::OPC_Decode, 167, 4, 243, 1, // Opcode: CEQI_H
/* 5075 */    MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 5088
/* 5079 */    MCD::OPC_CheckPredicate, 26, 95, 38, // Skip to: 14906
/* 5083 */    MCD::OPC_Decode, 168, 4, 244, 1, // Opcode: CEQI_W
/* 5088 */    MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 5101
/* 5092 */    MCD::OPC_CheckPredicate, 26, 82, 38, // Skip to: 14906
/* 5096 */    MCD::OPC_Decode, 166, 4, 245, 1, // Opcode: CEQI_D
/* 5101 */    MCD::OPC_FilterValue, 8, 9, 0, // Skip to: 5114
/* 5105 */    MCD::OPC_CheckPredicate, 26, 69, 38, // Skip to: 14906
/* 5109 */    MCD::OPC_Decode, 205, 4, 242, 1, // Opcode: CLTI_S_B
/* 5114 */    MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 5127
/* 5118 */    MCD::OPC_CheckPredicate, 26, 56, 38, // Skip to: 14906
/* 5122 */    MCD::OPC_Decode, 207, 4, 243, 1, // Opcode: CLTI_S_H
/* 5127 */    MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 5140
/* 5131 */    MCD::OPC_CheckPredicate, 26, 43, 38, // Skip to: 14906
/* 5135 */    MCD::OPC_Decode, 208, 4, 244, 1, // Opcode: CLTI_S_W
/* 5140 */    MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 5153
/* 5144 */    MCD::OPC_CheckPredicate, 26, 30, 38, // Skip to: 14906
/* 5148 */    MCD::OPC_Decode, 206, 4, 245, 1, // Opcode: CLTI_S_D
/* 5153 */    MCD::OPC_FilterValue, 12, 9, 0, // Skip to: 5166
/* 5157 */    MCD::OPC_CheckPredicate, 26, 17, 38, // Skip to: 14906
/* 5161 */    MCD::OPC_Decode, 209, 4, 242, 1, // Opcode: CLTI_U_B
/* 5166 */    MCD::OPC_FilterValue, 13, 9, 0, // Skip to: 5179
/* 5170 */    MCD::OPC_CheckPredicate, 26, 4, 38, // Skip to: 14906
/* 5174 */    MCD::OPC_Decode, 211, 4, 243, 1, // Opcode: CLTI_U_H
/* 5179 */    MCD::OPC_FilterValue, 14, 9, 0, // Skip to: 5192
/* 5183 */    MCD::OPC_CheckPredicate, 26, 247, 37, // Skip to: 14906
/* 5187 */    MCD::OPC_Decode, 212, 4, 244, 1, // Opcode: CLTI_U_W
/* 5192 */    MCD::OPC_FilterValue, 15, 9, 0, // Skip to: 5205
/* 5196 */    MCD::OPC_CheckPredicate, 26, 234, 37, // Skip to: 14906
/* 5200 */    MCD::OPC_Decode, 210, 4, 245, 1, // Opcode: CLTI_U_D
/* 5205 */    MCD::OPC_FilterValue, 16, 9, 0, // Skip to: 5218
/* 5209 */    MCD::OPC_CheckPredicate, 26, 221, 37, // Skip to: 14906
/* 5213 */    MCD::OPC_Decode, 185, 4, 242, 1, // Opcode: CLEI_S_B
/* 5218 */    MCD::OPC_FilterValue, 17, 9, 0, // Skip to: 5231
/* 5222 */    MCD::OPC_CheckPredicate, 26, 208, 37, // Skip to: 14906
/* 5226 */    MCD::OPC_Decode, 187, 4, 243, 1, // Opcode: CLEI_S_H
/* 5231 */    MCD::OPC_FilterValue, 18, 9, 0, // Skip to: 5244
/* 5235 */    MCD::OPC_CheckPredicate, 26, 195, 37, // Skip to: 14906
/* 5239 */    MCD::OPC_Decode, 188, 4, 244, 1, // Opcode: CLEI_S_W
/* 5244 */    MCD::OPC_FilterValue, 19, 9, 0, // Skip to: 5257
/* 5248 */    MCD::OPC_CheckPredicate, 26, 182, 37, // Skip to: 14906
/* 5252 */    MCD::OPC_Decode, 186, 4, 245, 1, // Opcode: CLEI_S_D
/* 5257 */    MCD::OPC_FilterValue, 20, 9, 0, // Skip to: 5270
/* 5261 */    MCD::OPC_CheckPredicate, 26, 169, 37, // Skip to: 14906
/* 5265 */    MCD::OPC_Decode, 189, 4, 242, 1, // Opcode: CLEI_U_B
/* 5270 */    MCD::OPC_FilterValue, 21, 9, 0, // Skip to: 5283
/* 5274 */    MCD::OPC_CheckPredicate, 26, 156, 37, // Skip to: 14906
/* 5278 */    MCD::OPC_Decode, 191, 4, 243, 1, // Opcode: CLEI_U_H
/* 5283 */    MCD::OPC_FilterValue, 22, 9, 0, // Skip to: 5296
/* 5287 */    MCD::OPC_CheckPredicate, 26, 143, 37, // Skip to: 14906
/* 5291 */    MCD::OPC_Decode, 192, 4, 244, 1, // Opcode: CLEI_U_W
/* 5296 */    MCD::OPC_FilterValue, 23, 9, 0, // Skip to: 5309
/* 5300 */    MCD::OPC_CheckPredicate, 26, 130, 37, // Skip to: 14906
/* 5304 */    MCD::OPC_Decode, 190, 4, 245, 1, // Opcode: CLEI_U_D
/* 5309 */    MCD::OPC_FilterValue, 24, 9, 0, // Skip to: 5322
/* 5313 */    MCD::OPC_CheckPredicate, 26, 117, 37, // Skip to: 14906
/* 5317 */    MCD::OPC_Decode, 233, 10, 246, 1, // Opcode: LDI_B
/* 5322 */    MCD::OPC_FilterValue, 25, 9, 0, // Skip to: 5335
/* 5326 */    MCD::OPC_CheckPredicate, 26, 104, 37, // Skip to: 14906
/* 5330 */    MCD::OPC_Decode, 235, 10, 247, 1, // Opcode: LDI_H
/* 5335 */    MCD::OPC_FilterValue, 26, 9, 0, // Skip to: 5348
/* 5339 */    MCD::OPC_CheckPredicate, 26, 91, 37, // Skip to: 14906
/* 5343 */    MCD::OPC_Decode, 236, 10, 248, 1, // Opcode: LDI_W
/* 5348 */    MCD::OPC_FilterValue, 27, 82, 37, // Skip to: 14906
/* 5352 */    MCD::OPC_CheckPredicate, 26, 78, 37, // Skip to: 14906
/* 5356 */    MCD::OPC_Decode, 234, 10, 249, 1, // Opcode: LDI_D
/* 5361 */    MCD::OPC_FilterValue, 9, 67, 2, // Skip to: 5944
/* 5365 */    MCD::OPC_ExtractField, 22, 4,  // Inst{25-22} ...
/* 5368 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 5381
/* 5372 */    MCD::OPC_CheckPredicate, 26, 58, 37, // Skip to: 14906
/* 5376 */    MCD::OPC_Decode, 143, 17, 250, 1, // Opcode: SLLI_D
/* 5381 */    MCD::OPC_FilterValue, 1, 55, 0, // Skip to: 5440
/* 5385 */    MCD::OPC_ExtractField, 21, 1,  // Inst{21} ...
/* 5388 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 5401
/* 5392 */    MCD::OPC_CheckPredicate, 26, 38, 37, // Skip to: 14906
/* 5396 */    MCD::OPC_Decode, 145, 17, 244, 1, // Opcode: SLLI_W
/* 5401 */    MCD::OPC_FilterValue, 1, 29, 37, // Skip to: 14906
/* 5405 */    MCD::OPC_ExtractField, 20, 1,  // Inst{20} ...
/* 5408 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 5421
/* 5412 */    MCD::OPC_CheckPredicate, 26, 18, 37, // Skip to: 14906
/* 5416 */    MCD::OPC_Decode, 144, 17, 251, 1, // Opcode: SLLI_H
/* 5421 */    MCD::OPC_FilterValue, 1, 9, 37, // Skip to: 14906
/* 5425 */    MCD::OPC_CheckPredicate, 26, 5, 37, // Skip to: 14906
/* 5429 */    MCD::OPC_CheckField, 19, 1, 0, 255, 36, // Skip to: 14906
/* 5435 */    MCD::OPC_Decode, 142, 17, 252, 1, // Opcode: SLLI_B
/* 5440 */    MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 5453
/* 5444 */    MCD::OPC_CheckPredicate, 26, 242, 36, // Skip to: 14906
/* 5448 */    MCD::OPC_Decode, 187, 17, 250, 1, // Opcode: SRAI_D
/* 5453 */    MCD::OPC_FilterValue, 3, 55, 0, // Skip to: 5512
/* 5457 */    MCD::OPC_ExtractField, 21, 1,  // Inst{21} ...
/* 5460 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 5473
/* 5464 */    MCD::OPC_CheckPredicate, 26, 222, 36, // Skip to: 14906
/* 5468 */    MCD::OPC_Decode, 189, 17, 244, 1, // Opcode: SRAI_W
/* 5473 */    MCD::OPC_FilterValue, 1, 213, 36, // Skip to: 14906
/* 5477 */    MCD::OPC_ExtractField, 20, 1,  // Inst{20} ...
/* 5480 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 5493
/* 5484 */    MCD::OPC_CheckPredicate, 26, 202, 36, // Skip to: 14906
/* 5488 */    MCD::OPC_Decode, 188, 17, 251, 1, // Opcode: SRAI_H
/* 5493 */    MCD::OPC_FilterValue, 1, 193, 36, // Skip to: 14906
/* 5497 */    MCD::OPC_CheckPredicate, 26, 189, 36, // Skip to: 14906
/* 5501 */    MCD::OPC_CheckField, 19, 1, 0, 183, 36, // Skip to: 14906
/* 5507 */    MCD::OPC_Decode, 186, 17, 252, 1, // Opcode: SRAI_B
/* 5512 */    MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 5525
/* 5516 */    MCD::OPC_CheckPredicate, 26, 170, 36, // Skip to: 14906
/* 5520 */    MCD::OPC_Decode, 209, 17, 250, 1, // Opcode: SRLI_D
/* 5525 */    MCD::OPC_FilterValue, 5, 55, 0, // Skip to: 5584
/* 5529 */    MCD::OPC_ExtractField, 21, 1,  // Inst{21} ...
/* 5532 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 5545
/* 5536 */    MCD::OPC_CheckPredicate, 26, 150, 36, // Skip to: 14906
/* 5540 */    MCD::OPC_Decode, 211, 17, 244, 1, // Opcode: SRLI_W
/* 5545 */    MCD::OPC_FilterValue, 1, 141, 36, // Skip to: 14906
/* 5549 */    MCD::OPC_ExtractField, 20, 1,  // Inst{20} ...
/* 5552 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 5565
/* 5556 */    MCD::OPC_CheckPredicate, 26, 130, 36, // Skip to: 14906
/* 5560 */    MCD::OPC_Decode, 210, 17, 251, 1, // Opcode: SRLI_H
/* 5565 */    MCD::OPC_FilterValue, 1, 121, 36, // Skip to: 14906
/* 5569 */    MCD::OPC_CheckPredicate, 26, 117, 36, // Skip to: 14906
/* 5573 */    MCD::OPC_CheckField, 19, 1, 0, 111, 36, // Skip to: 14906
/* 5579 */    MCD::OPC_Decode, 208, 17, 252, 1, // Opcode: SRLI_B
/* 5584 */    MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 5597
/* 5588 */    MCD::OPC_CheckPredicate, 26, 98, 36, // Skip to: 14906
/* 5592 */    MCD::OPC_Decode, 176, 2, 250, 1, // Opcode: BCLRI_D
/* 5597 */    MCD::OPC_FilterValue, 7, 55, 0, // Skip to: 5656
/* 5601 */    MCD::OPC_ExtractField, 21, 1,  // Inst{21} ...
/* 5604 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 5617
/* 5608 */    MCD::OPC_CheckPredicate, 26, 78, 36, // Skip to: 14906
/* 5612 */    MCD::OPC_Decode, 178, 2, 244, 1, // Opcode: BCLRI_W
/* 5617 */    MCD::OPC_FilterValue, 1, 69, 36, // Skip to: 14906
/* 5621 */    MCD::OPC_ExtractField, 20, 1,  // Inst{20} ...
/* 5624 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 5637
/* 5628 */    MCD::OPC_CheckPredicate, 26, 58, 36, // Skip to: 14906
/* 5632 */    MCD::OPC_Decode, 177, 2, 251, 1, // Opcode: BCLRI_H
/* 5637 */    MCD::OPC_FilterValue, 1, 49, 36, // Skip to: 14906
/* 5641 */    MCD::OPC_CheckPredicate, 26, 45, 36, // Skip to: 14906
/* 5645 */    MCD::OPC_CheckField, 19, 1, 0, 39, 36, // Skip to: 14906
/* 5651 */    MCD::OPC_Decode, 175, 2, 252, 1, // Opcode: BCLRI_B
/* 5656 */    MCD::OPC_FilterValue, 8, 9, 0, // Skip to: 5669
/* 5660 */    MCD::OPC_CheckPredicate, 26, 26, 36, // Skip to: 14906
/* 5664 */    MCD::OPC_Decode, 234, 3, 250, 1, // Opcode: BSETI_D
/* 5669 */    MCD::OPC_FilterValue, 9, 55, 0, // Skip to: 5728
/* 5673 */    MCD::OPC_ExtractField, 21, 1,  // Inst{21} ...
/* 5676 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 5689
/* 5680 */    MCD::OPC_CheckPredicate, 26, 6, 36, // Skip to: 14906
/* 5684 */    MCD::OPC_Decode, 236, 3, 244, 1, // Opcode: BSETI_W
/* 5689 */    MCD::OPC_FilterValue, 1, 253, 35, // Skip to: 14906
/* 5693 */    MCD::OPC_ExtractField, 20, 1,  // Inst{20} ...
/* 5696 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 5709
/* 5700 */    MCD::OPC_CheckPredicate, 26, 242, 35, // Skip to: 14906
/* 5704 */    MCD::OPC_Decode, 235, 3, 251, 1, // Opcode: BSETI_H
/* 5709 */    MCD::OPC_FilterValue, 1, 233, 35, // Skip to: 14906
/* 5713 */    MCD::OPC_CheckPredicate, 26, 229, 35, // Skip to: 14906
/* 5717 */    MCD::OPC_CheckField, 19, 1, 0, 223, 35, // Skip to: 14906
/* 5723 */    MCD::OPC_Decode, 233, 3, 252, 1, // Opcode: BSETI_B
/* 5728 */    MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 5741
/* 5732 */    MCD::OPC_CheckPredicate, 26, 210, 35, // Skip to: 14906
/* 5736 */    MCD::OPC_Decode, 190, 3, 250, 1, // Opcode: BNEGI_D
/* 5741 */    MCD::OPC_FilterValue, 11, 55, 0, // Skip to: 5800
/* 5745 */    MCD::OPC_ExtractField, 21, 1,  // Inst{21} ...
/* 5748 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 5761
/* 5752 */    MCD::OPC_CheckPredicate, 26, 190, 35, // Skip to: 14906
/* 5756 */    MCD::OPC_Decode, 192, 3, 244, 1, // Opcode: BNEGI_W
/* 5761 */    MCD::OPC_FilterValue, 1, 181, 35, // Skip to: 14906
/* 5765 */    MCD::OPC_ExtractField, 20, 1,  // Inst{20} ...
/* 5768 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 5781
/* 5772 */    MCD::OPC_CheckPredicate, 26, 170, 35, // Skip to: 14906
/* 5776 */    MCD::OPC_Decode, 191, 3, 251, 1, // Opcode: BNEGI_H
/* 5781 */    MCD::OPC_FilterValue, 1, 161, 35, // Skip to: 14906
/* 5785 */    MCD::OPC_CheckPredicate, 26, 157, 35, // Skip to: 14906
/* 5789 */    MCD::OPC_CheckField, 19, 1, 0, 151, 35, // Skip to: 14906
/* 5795 */    MCD::OPC_Decode, 189, 3, 252, 1, // Opcode: BNEGI_B
/* 5800 */    MCD::OPC_FilterValue, 12, 9, 0, // Skip to: 5813
/* 5804 */    MCD::OPC_CheckPredicate, 26, 138, 35, // Skip to: 14906
/* 5808 */    MCD::OPC_Decode, 245, 2, 253, 1, // Opcode: BINSLI_D
/* 5813 */    MCD::OPC_FilterValue, 13, 55, 0, // Skip to: 5872
/* 5817 */    MCD::OPC_ExtractField, 21, 1,  // Inst{21} ...
/* 5820 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 5833
/* 5824 */    MCD::OPC_CheckPredicate, 26, 118, 35, // Skip to: 14906
/* 5828 */    MCD::OPC_Decode, 247, 2, 254, 1, // Opcode: BINSLI_W
/* 5833 */    MCD::OPC_FilterValue, 1, 109, 35, // Skip to: 14906
/* 5837 */    MCD::OPC_ExtractField, 20, 1,  // Inst{20} ...
/* 5840 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 5853
/* 5844 */    MCD::OPC_CheckPredicate, 26, 98, 35, // Skip to: 14906
/* 5848 */    MCD::OPC_Decode, 246, 2, 255, 1, // Opcode: BINSLI_H
/* 5853 */    MCD::OPC_FilterValue, 1, 89, 35, // Skip to: 14906
/* 5857 */    MCD::OPC_CheckPredicate, 26, 85, 35, // Skip to: 14906
/* 5861 */    MCD::OPC_CheckField, 19, 1, 0, 79, 35, // Skip to: 14906
/* 5867 */    MCD::OPC_Decode, 244, 2, 128, 2, // Opcode: BINSLI_B
/* 5872 */    MCD::OPC_FilterValue, 14, 9, 0, // Skip to: 5885
/* 5876 */    MCD::OPC_CheckPredicate, 26, 66, 35, // Skip to: 14906
/* 5880 */    MCD::OPC_Decode, 253, 2, 253, 1, // Opcode: BINSRI_D
/* 5885 */    MCD::OPC_FilterValue, 15, 57, 35, // Skip to: 14906
/* 5889 */    MCD::OPC_ExtractField, 21, 1,  // Inst{21} ...
/* 5892 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 5905
/* 5896 */    MCD::OPC_CheckPredicate, 26, 46, 35, // Skip to: 14906
/* 5900 */    MCD::OPC_Decode, 255, 2, 254, 1, // Opcode: BINSRI_W
/* 5905 */    MCD::OPC_FilterValue, 1, 37, 35, // Skip to: 14906
/* 5909 */    MCD::OPC_ExtractField, 20, 1,  // Inst{20} ...
/* 5912 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 5925
/* 5916 */    MCD::OPC_CheckPredicate, 26, 26, 35, // Skip to: 14906
/* 5920 */    MCD::OPC_Decode, 254, 2, 255, 1, // Opcode: BINSRI_H
/* 5925 */    MCD::OPC_FilterValue, 1, 17, 35, // Skip to: 14906
/* 5929 */    MCD::OPC_CheckPredicate, 26, 13, 35, // Skip to: 14906
/* 5933 */    MCD::OPC_CheckField, 19, 1, 0, 7, 35, // Skip to: 14906
/* 5939 */    MCD::OPC_Decode, 252, 2, 128, 2, // Opcode: BINSRI_B
/* 5944 */    MCD::OPC_FilterValue, 10, 35, 1, // Skip to: 6239
/* 5948 */    MCD::OPC_ExtractField, 22, 4,  // Inst{25-22} ...
/* 5951 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 5964
/* 5955 */    MCD::OPC_CheckPredicate, 26, 243, 34, // Skip to: 14906
/* 5959 */    MCD::OPC_Decode, 243, 15, 250, 1, // Opcode: SAT_S_D
/* 5964 */    MCD::OPC_FilterValue, 1, 55, 0, // Skip to: 6023
/* 5968 */    MCD::OPC_ExtractField, 21, 1,  // Inst{21} ...
/* 5971 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 5984
/* 5975 */    MCD::OPC_CheckPredicate, 26, 223, 34, // Skip to: 14906
/* 5979 */    MCD::OPC_Decode, 245, 15, 244, 1, // Opcode: SAT_S_W
/* 5984 */    MCD::OPC_FilterValue, 1, 214, 34, // Skip to: 14906
/* 5988 */    MCD::OPC_ExtractField, 20, 1,  // Inst{20} ...
/* 5991 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 6004
/* 5995 */    MCD::OPC_CheckPredicate, 26, 203, 34, // Skip to: 14906
/* 5999 */    MCD::OPC_Decode, 244, 15, 251, 1, // Opcode: SAT_S_H
/* 6004 */    MCD::OPC_FilterValue, 1, 194, 34, // Skip to: 14906
/* 6008 */    MCD::OPC_CheckPredicate, 26, 190, 34, // Skip to: 14906
/* 6012 */    MCD::OPC_CheckField, 19, 1, 0, 184, 34, // Skip to: 14906
/* 6018 */    MCD::OPC_Decode, 242, 15, 252, 1, // Opcode: SAT_S_B
/* 6023 */    MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 6036
/* 6027 */    MCD::OPC_CheckPredicate, 26, 171, 34, // Skip to: 14906
/* 6031 */    MCD::OPC_Decode, 247, 15, 250, 1, // Opcode: SAT_U_D
/* 6036 */    MCD::OPC_FilterValue, 3, 55, 0, // Skip to: 6095
/* 6040 */    MCD::OPC_ExtractField, 21, 1,  // Inst{21} ...
/* 6043 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 6056
/* 6047 */    MCD::OPC_CheckPredicate, 26, 151, 34, // Skip to: 14906
/* 6051 */    MCD::OPC_Decode, 249, 15, 244, 1, // Opcode: SAT_U_W
/* 6056 */    MCD::OPC_FilterValue, 1, 142, 34, // Skip to: 14906
/* 6060 */    MCD::OPC_ExtractField, 20, 1,  // Inst{20} ...
/* 6063 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 6076
/* 6067 */    MCD::OPC_CheckPredicate, 26, 131, 34, // Skip to: 14906
/* 6071 */    MCD::OPC_Decode, 248, 15, 251, 1, // Opcode: SAT_U_H
/* 6076 */    MCD::OPC_FilterValue, 1, 122, 34, // Skip to: 14906
/* 6080 */    MCD::OPC_CheckPredicate, 26, 118, 34, // Skip to: 14906
/* 6084 */    MCD::OPC_CheckField, 19, 1, 0, 112, 34, // Skip to: 14906
/* 6090 */    MCD::OPC_Decode, 246, 15, 252, 1, // Opcode: SAT_U_B
/* 6095 */    MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 6108
/* 6099 */    MCD::OPC_CheckPredicate, 26, 99, 34, // Skip to: 14906
/* 6103 */    MCD::OPC_Decode, 191, 17, 250, 1, // Opcode: SRARI_D
/* 6108 */    MCD::OPC_FilterValue, 5, 55, 0, // Skip to: 6167
/* 6112 */    MCD::OPC_ExtractField, 21, 1,  // Inst{21} ...
/* 6115 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 6128
/* 6119 */    MCD::OPC_CheckPredicate, 26, 79, 34, // Skip to: 14906
/* 6123 */    MCD::OPC_Decode, 193, 17, 244, 1, // Opcode: SRARI_W
/* 6128 */    MCD::OPC_FilterValue, 1, 70, 34, // Skip to: 14906
/* 6132 */    MCD::OPC_ExtractField, 20, 1,  // Inst{20} ...
/* 6135 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 6148
/* 6139 */    MCD::OPC_CheckPredicate, 26, 59, 34, // Skip to: 14906
/* 6143 */    MCD::OPC_Decode, 192, 17, 251, 1, // Opcode: SRARI_H
/* 6148 */    MCD::OPC_FilterValue, 1, 50, 34, // Skip to: 14906
/* 6152 */    MCD::OPC_CheckPredicate, 26, 46, 34, // Skip to: 14906
/* 6156 */    MCD::OPC_CheckField, 19, 1, 0, 40, 34, // Skip to: 14906
/* 6162 */    MCD::OPC_Decode, 190, 17, 252, 1, // Opcode: SRARI_B
/* 6167 */    MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 6180
/* 6171 */    MCD::OPC_CheckPredicate, 26, 27, 34, // Skip to: 14906
/* 6175 */    MCD::OPC_Decode, 213, 17, 250, 1, // Opcode: SRLRI_D
/* 6180 */    MCD::OPC_FilterValue, 7, 18, 34, // Skip to: 14906
/* 6184 */    MCD::OPC_ExtractField, 21, 1,  // Inst{21} ...
/* 6187 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 6200
/* 6191 */    MCD::OPC_CheckPredicate, 26, 7, 34, // Skip to: 14906
/* 6195 */    MCD::OPC_Decode, 215, 17, 244, 1, // Opcode: SRLRI_W
/* 6200 */    MCD::OPC_FilterValue, 1, 254, 33, // Skip to: 14906
/* 6204 */    MCD::OPC_ExtractField, 20, 1,  // Inst{20} ...
/* 6207 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 6220
/* 6211 */    MCD::OPC_CheckPredicate, 26, 243, 33, // Skip to: 14906
/* 6215 */    MCD::OPC_Decode, 214, 17, 251, 1, // Opcode: SRLRI_H
/* 6220 */    MCD::OPC_FilterValue, 1, 234, 33, // Skip to: 14906
/* 6224 */    MCD::OPC_CheckPredicate, 26, 230, 33, // Skip to: 14906
/* 6228 */    MCD::OPC_CheckField, 19, 1, 0, 224, 33, // Skip to: 14906
/* 6234 */    MCD::OPC_Decode, 212, 17, 252, 1, // Opcode: SRLRI_B
/* 6239 */    MCD::OPC_FilterValue, 13, 163, 1, // Skip to: 6662
/* 6243 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 6246 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 6259
/* 6250 */    MCD::OPC_CheckPredicate, 26, 204, 33, // Skip to: 14906
/* 6254 */    MCD::OPC_Decode, 148, 17, 129, 2, // Opcode: SLL_B
/* 6259 */    MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 6272
/* 6263 */    MCD::OPC_CheckPredicate, 26, 191, 33, // Skip to: 14906
/* 6267 */    MCD::OPC_Decode, 150, 17, 130, 2, // Opcode: SLL_H
/* 6272 */    MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 6285
/* 6276 */    MCD::OPC_CheckPredicate, 26, 178, 33, // Skip to: 14906
/* 6280 */    MCD::OPC_Decode, 153, 17, 131, 2, // Opcode: SLL_W
/* 6285 */    MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 6298
/* 6289 */    MCD::OPC_CheckPredicate, 26, 165, 33, // Skip to: 14906
/* 6293 */    MCD::OPC_Decode, 149, 17, 132, 2, // Opcode: SLL_D
/* 6298 */    MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 6311
/* 6302 */    MCD::OPC_CheckPredicate, 26, 152, 33, // Skip to: 14906
/* 6306 */    MCD::OPC_Decode, 200, 17, 129, 2, // Opcode: SRA_B
/* 6311 */    MCD::OPC_FilterValue, 5, 9, 0, // Skip to: 6324
/* 6315 */    MCD::OPC_CheckPredicate, 26, 139, 33, // Skip to: 14906
/* 6319 */    MCD::OPC_Decode, 202, 17, 130, 2, // Opcode: SRA_H
/* 6324 */    MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 6337
/* 6328 */    MCD::OPC_CheckPredicate, 26, 126, 33, // Skip to: 14906
/* 6332 */    MCD::OPC_Decode, 204, 17, 131, 2, // Opcode: SRA_W
/* 6337 */    MCD::OPC_FilterValue, 7, 9, 0, // Skip to: 6350
/* 6341 */    MCD::OPC_CheckPredicate, 26, 113, 33, // Skip to: 14906
/* 6345 */    MCD::OPC_Decode, 201, 17, 132, 2, // Opcode: SRA_D
/* 6350 */    MCD::OPC_FilterValue, 8, 9, 0, // Skip to: 6363
/* 6354 */    MCD::OPC_CheckPredicate, 26, 100, 33, // Skip to: 14906
/* 6358 */    MCD::OPC_Decode, 222, 17, 129, 2, // Opcode: SRL_B
/* 6363 */    MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 6376
/* 6367 */    MCD::OPC_CheckPredicate, 26, 87, 33, // Skip to: 14906
/* 6371 */    MCD::OPC_Decode, 224, 17, 130, 2, // Opcode: SRL_H
/* 6376 */    MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 6389
/* 6380 */    MCD::OPC_CheckPredicate, 26, 74, 33, // Skip to: 14906
/* 6384 */    MCD::OPC_Decode, 226, 17, 131, 2, // Opcode: SRL_W
/* 6389 */    MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 6402
/* 6393 */    MCD::OPC_CheckPredicate, 26, 61, 33, // Skip to: 14906
/* 6397 */    MCD::OPC_Decode, 223, 17, 132, 2, // Opcode: SRL_D
/* 6402 */    MCD::OPC_FilterValue, 12, 9, 0, // Skip to: 6415
/* 6406 */    MCD::OPC_CheckPredicate, 26, 48, 33, // Skip to: 14906
/* 6410 */    MCD::OPC_Decode, 179, 2, 129, 2, // Opcode: BCLR_B
/* 6415 */    MCD::OPC_FilterValue, 13, 9, 0, // Skip to: 6428
/* 6419 */    MCD::OPC_CheckPredicate, 26, 35, 33, // Skip to: 14906
/* 6423 */    MCD::OPC_Decode, 181, 2, 130, 2, // Opcode: BCLR_H
/* 6428 */    MCD::OPC_FilterValue, 14, 9, 0, // Skip to: 6441
/* 6432 */    MCD::OPC_CheckPredicate, 26, 22, 33, // Skip to: 14906
/* 6436 */    MCD::OPC_Decode, 182, 2, 131, 2, // Opcode: BCLR_W
/* 6441 */    MCD::OPC_FilterValue, 15, 9, 0, // Skip to: 6454
/* 6445 */    MCD::OPC_CheckPredicate, 26, 9, 33, // Skip to: 14906
/* 6449 */    MCD::OPC_Decode, 180, 2, 132, 2, // Opcode: BCLR_D
/* 6454 */    MCD::OPC_FilterValue, 16, 9, 0, // Skip to: 6467
/* 6458 */    MCD::OPC_CheckPredicate, 26, 252, 32, // Skip to: 14906
/* 6462 */    MCD::OPC_Decode, 237, 3, 129, 2, // Opcode: BSET_B
/* 6467 */    MCD::OPC_FilterValue, 17, 9, 0, // Skip to: 6480
/* 6471 */    MCD::OPC_CheckPredicate, 26, 239, 32, // Skip to: 14906
/* 6475 */    MCD::OPC_Decode, 239, 3, 130, 2, // Opcode: BSET_H
/* 6480 */    MCD::OPC_FilterValue, 18, 9, 0, // Skip to: 6493
/* 6484 */    MCD::OPC_CheckPredicate, 26, 226, 32, // Skip to: 14906
/* 6488 */    MCD::OPC_Decode, 240, 3, 131, 2, // Opcode: BSET_W
/* 6493 */    MCD::OPC_FilterValue, 19, 9, 0, // Skip to: 6506
/* 6497 */    MCD::OPC_CheckPredicate, 26, 213, 32, // Skip to: 14906
/* 6501 */    MCD::OPC_Decode, 238, 3, 132, 2, // Opcode: BSET_D
/* 6506 */    MCD::OPC_FilterValue, 20, 9, 0, // Skip to: 6519
/* 6510 */    MCD::OPC_CheckPredicate, 26, 200, 32, // Skip to: 14906
/* 6514 */    MCD::OPC_Decode, 193, 3, 129, 2, // Opcode: BNEG_B
/* 6519 */    MCD::OPC_FilterValue, 21, 9, 0, // Skip to: 6532
/* 6523 */    MCD::OPC_CheckPredicate, 26, 187, 32, // Skip to: 14906
/* 6527 */    MCD::OPC_Decode, 195, 3, 130, 2, // Opcode: BNEG_H
/* 6532 */    MCD::OPC_FilterValue, 22, 9, 0, // Skip to: 6545
/* 6536 */    MCD::OPC_CheckPredicate, 26, 174, 32, // Skip to: 14906
/* 6540 */    MCD::OPC_Decode, 196, 3, 131, 2, // Opcode: BNEG_W
/* 6545 */    MCD::OPC_FilterValue, 23, 9, 0, // Skip to: 6558
/* 6549 */    MCD::OPC_CheckPredicate, 26, 161, 32, // Skip to: 14906
/* 6553 */    MCD::OPC_Decode, 194, 3, 132, 2, // Opcode: BNEG_D
/* 6558 */    MCD::OPC_FilterValue, 24, 9, 0, // Skip to: 6571
/* 6562 */    MCD::OPC_CheckPredicate, 26, 148, 32, // Skip to: 14906
/* 6566 */    MCD::OPC_Decode, 248, 2, 133, 2, // Opcode: BINSL_B
/* 6571 */    MCD::OPC_FilterValue, 25, 9, 0, // Skip to: 6584
/* 6575 */    MCD::OPC_CheckPredicate, 26, 135, 32, // Skip to: 14906
/* 6579 */    MCD::OPC_Decode, 250, 2, 134, 2, // Opcode: BINSL_H
/* 6584 */    MCD::OPC_FilterValue, 26, 9, 0, // Skip to: 6597
/* 6588 */    MCD::OPC_CheckPredicate, 26, 122, 32, // Skip to: 14906
/* 6592 */    MCD::OPC_Decode, 251, 2, 135, 2, // Opcode: BINSL_W
/* 6597 */    MCD::OPC_FilterValue, 27, 9, 0, // Skip to: 6610
/* 6601 */    MCD::OPC_CheckPredicate, 26, 109, 32, // Skip to: 14906
/* 6605 */    MCD::OPC_Decode, 249, 2, 136, 2, // Opcode: BINSL_D
/* 6610 */    MCD::OPC_FilterValue, 28, 9, 0, // Skip to: 6623
/* 6614 */    MCD::OPC_CheckPredicate, 26, 96, 32, // Skip to: 14906
/* 6618 */    MCD::OPC_Decode, 128, 3, 133, 2, // Opcode: BINSR_B
/* 6623 */    MCD::OPC_FilterValue, 29, 9, 0, // Skip to: 6636
/* 6627 */    MCD::OPC_CheckPredicate, 26, 83, 32, // Skip to: 14906
/* 6631 */    MCD::OPC_Decode, 130, 3, 134, 2, // Opcode: BINSR_H
/* 6636 */    MCD::OPC_FilterValue, 30, 9, 0, // Skip to: 6649
/* 6640 */    MCD::OPC_CheckPredicate, 26, 70, 32, // Skip to: 14906
/* 6644 */    MCD::OPC_Decode, 131, 3, 135, 2, // Opcode: BINSR_W
/* 6649 */    MCD::OPC_FilterValue, 31, 61, 32, // Skip to: 14906
/* 6653 */    MCD::OPC_CheckPredicate, 26, 57, 32, // Skip to: 14906
/* 6657 */    MCD::OPC_Decode, 129, 3, 136, 2, // Opcode: BINSR_D
/* 6662 */    MCD::OPC_FilterValue, 14, 163, 1, // Skip to: 7085
/* 6666 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 6669 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 6682
/* 6673 */    MCD::OPC_CheckPredicate, 26, 37, 32, // Skip to: 14906
/* 6677 */    MCD::OPC_Decode, 162, 1, 129, 2, // Opcode: ADDV_B
/* 6682 */    MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 6695
/* 6686 */    MCD::OPC_CheckPredicate, 26, 24, 32, // Skip to: 14906
/* 6690 */    MCD::OPC_Decode, 164, 1, 130, 2, // Opcode: ADDV_H
/* 6695 */    MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 6708
/* 6699 */    MCD::OPC_CheckPredicate, 26, 11, 32, // Skip to: 14906
/* 6703 */    MCD::OPC_Decode, 165, 1, 131, 2, // Opcode: ADDV_W
/* 6708 */    MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 6721
/* 6712 */    MCD::OPC_CheckPredicate, 26, 254, 31, // Skip to: 14906
/* 6716 */    MCD::OPC_Decode, 163, 1, 132, 2, // Opcode: ADDV_D
/* 6721 */    MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 6734
/* 6725 */    MCD::OPC_CheckPredicate, 26, 241, 31, // Skip to: 14906
/* 6729 */    MCD::OPC_Decode, 161, 18, 129, 2, // Opcode: SUBV_B
/* 6734 */    MCD::OPC_FilterValue, 5, 9, 0, // Skip to: 6747
/* 6738 */    MCD::OPC_CheckPredicate, 26, 228, 31, // Skip to: 14906
/* 6742 */    MCD::OPC_Decode, 163, 18, 130, 2, // Opcode: SUBV_H
/* 6747 */    MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 6760
/* 6751 */    MCD::OPC_CheckPredicate, 26, 215, 31, // Skip to: 14906
/* 6755 */    MCD::OPC_Decode, 164, 18, 131, 2, // Opcode: SUBV_W
/* 6760 */    MCD::OPC_FilterValue, 7, 9, 0, // Skip to: 6773
/* 6764 */    MCD::OPC_CheckPredicate, 26, 202, 31, // Skip to: 14906
/* 6768 */    MCD::OPC_Decode, 162, 18, 132, 2, // Opcode: SUBV_D
/* 6773 */    MCD::OPC_FilterValue, 8, 9, 0, // Skip to: 6786
/* 6777 */    MCD::OPC_CheckPredicate, 26, 189, 31, // Skip to: 14906
/* 6781 */    MCD::OPC_Decode, 159, 12, 129, 2, // Opcode: MAX_S_B
/* 6786 */    MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 6799
/* 6790 */    MCD::OPC_CheckPredicate, 26, 176, 31, // Skip to: 14906
/* 6794 */    MCD::OPC_Decode, 161, 12, 130, 2, // Opcode: MAX_S_H
/* 6799 */    MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 6812
/* 6803 */    MCD::OPC_CheckPredicate, 26, 163, 31, // Skip to: 14906
/* 6807 */    MCD::OPC_Decode, 163, 12, 131, 2, // Opcode: MAX_S_W
/* 6812 */    MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 6825
/* 6816 */    MCD::OPC_CheckPredicate, 26, 150, 31, // Skip to: 14906
/* 6820 */    MCD::OPC_Decode, 160, 12, 132, 2, // Opcode: MAX_S_D
/* 6825 */    MCD::OPC_FilterValue, 12, 9, 0, // Skip to: 6838
/* 6829 */    MCD::OPC_CheckPredicate, 26, 137, 31, // Skip to: 14906
/* 6833 */    MCD::OPC_Decode, 164, 12, 129, 2, // Opcode: MAX_U_B
/* 6838 */    MCD::OPC_FilterValue, 13, 9, 0, // Skip to: 6851
/* 6842 */    MCD::OPC_CheckPredicate, 26, 124, 31, // Skip to: 14906
/* 6846 */    MCD::OPC_Decode, 166, 12, 130, 2, // Opcode: MAX_U_H
/* 6851 */    MCD::OPC_FilterValue, 14, 9, 0, // Skip to: 6864
/* 6855 */    MCD::OPC_CheckPredicate, 26, 111, 31, // Skip to: 14906
/* 6859 */    MCD::OPC_Decode, 167, 12, 131, 2, // Opcode: MAX_U_W
/* 6864 */    MCD::OPC_FilterValue, 15, 9, 0, // Skip to: 6877
/* 6868 */    MCD::OPC_CheckPredicate, 26, 98, 31, // Skip to: 14906
/* 6872 */    MCD::OPC_Decode, 165, 12, 132, 2, // Opcode: MAX_U_D
/* 6877 */    MCD::OPC_FilterValue, 16, 9, 0, // Skip to: 6890
/* 6881 */    MCD::OPC_CheckPredicate, 26, 85, 31, // Skip to: 14906
/* 6885 */    MCD::OPC_Decode, 213, 12, 129, 2, // Opcode: MIN_S_B
/* 6890 */    MCD::OPC_FilterValue, 17, 9, 0, // Skip to: 6903
/* 6894 */    MCD::OPC_CheckPredicate, 26, 72, 31, // Skip to: 14906
/* 6898 */    MCD::OPC_Decode, 215, 12, 130, 2, // Opcode: MIN_S_H
/* 6903 */    MCD::OPC_FilterValue, 18, 9, 0, // Skip to: 6916
/* 6907 */    MCD::OPC_CheckPredicate, 26, 59, 31, // Skip to: 14906
/* 6911 */    MCD::OPC_Decode, 217, 12, 131, 2, // Opcode: MIN_S_W
/* 6916 */    MCD::OPC_FilterValue, 19, 9, 0, // Skip to: 6929
/* 6920 */    MCD::OPC_CheckPredicate, 26, 46, 31, // Skip to: 14906
/* 6924 */    MCD::OPC_Decode, 214, 12, 132, 2, // Opcode: MIN_S_D
/* 6929 */    MCD::OPC_FilterValue, 20, 9, 0, // Skip to: 6942
/* 6933 */    MCD::OPC_CheckPredicate, 26, 33, 31, // Skip to: 14906
/* 6937 */    MCD::OPC_Decode, 218, 12, 129, 2, // Opcode: MIN_U_B
/* 6942 */    MCD::OPC_FilterValue, 21, 9, 0, // Skip to: 6955
/* 6946 */    MCD::OPC_CheckPredicate, 26, 20, 31, // Skip to: 14906
/* 6950 */    MCD::OPC_Decode, 220, 12, 130, 2, // Opcode: MIN_U_H
/* 6955 */    MCD::OPC_FilterValue, 22, 9, 0, // Skip to: 6968
/* 6959 */    MCD::OPC_CheckPredicate, 26, 7, 31, // Skip to: 14906
/* 6963 */    MCD::OPC_Decode, 221, 12, 131, 2, // Opcode: MIN_U_W
/* 6968 */    MCD::OPC_FilterValue, 23, 9, 0, // Skip to: 6981
/* 6972 */    MCD::OPC_CheckPredicate, 26, 250, 30, // Skip to: 14906
/* 6976 */    MCD::OPC_Decode, 219, 12, 132, 2, // Opcode: MIN_U_D
/* 6981 */    MCD::OPC_FilterValue, 24, 9, 0, // Skip to: 6994
/* 6985 */    MCD::OPC_CheckPredicate, 26, 237, 30, // Skip to: 14906
/* 6989 */    MCD::OPC_Decode, 152, 12, 129, 2, // Opcode: MAX_A_B
/* 6994 */    MCD::OPC_FilterValue, 25, 9, 0, // Skip to: 7007
/* 6998 */    MCD::OPC_CheckPredicate, 26, 224, 30, // Skip to: 14906
/* 7002 */    MCD::OPC_Decode, 154, 12, 130, 2, // Opcode: MAX_A_H
/* 7007 */    MCD::OPC_FilterValue, 26, 9, 0, // Skip to: 7020
/* 7011 */    MCD::OPC_CheckPredicate, 26, 211, 30, // Skip to: 14906
/* 7015 */    MCD::OPC_Decode, 155, 12, 131, 2, // Opcode: MAX_A_W
/* 7020 */    MCD::OPC_FilterValue, 27, 9, 0, // Skip to: 7033
/* 7024 */    MCD::OPC_CheckPredicate, 26, 198, 30, // Skip to: 14906
/* 7028 */    MCD::OPC_Decode, 153, 12, 132, 2, // Opcode: MAX_A_D
/* 7033 */    MCD::OPC_FilterValue, 28, 9, 0, // Skip to: 7046
/* 7037 */    MCD::OPC_CheckPredicate, 26, 185, 30, // Skip to: 14906
/* 7041 */    MCD::OPC_Decode, 206, 12, 129, 2, // Opcode: MIN_A_B
/* 7046 */    MCD::OPC_FilterValue, 29, 9, 0, // Skip to: 7059
/* 7050 */    MCD::OPC_CheckPredicate, 26, 172, 30, // Skip to: 14906
/* 7054 */    MCD::OPC_Decode, 208, 12, 130, 2, // Opcode: MIN_A_H
/* 7059 */    MCD::OPC_FilterValue, 30, 9, 0, // Skip to: 7072
/* 7063 */    MCD::OPC_CheckPredicate, 26, 159, 30, // Skip to: 14906
/* 7067 */    MCD::OPC_Decode, 209, 12, 131, 2, // Opcode: MIN_A_W
/* 7072 */    MCD::OPC_FilterValue, 31, 150, 30, // Skip to: 14906
/* 7076 */    MCD::OPC_CheckPredicate, 26, 146, 30, // Skip to: 14906
/* 7080 */    MCD::OPC_Decode, 207, 12, 132, 2, // Opcode: MIN_A_D
/* 7085 */    MCD::OPC_FilterValue, 15, 7, 1, // Skip to: 7352
/* 7089 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 7092 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 7105
/* 7096 */    MCD::OPC_CheckPredicate, 26, 126, 30, // Skip to: 14906
/* 7100 */    MCD::OPC_Decode, 169, 4, 129, 2, // Opcode: CEQ_B
/* 7105 */    MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 7118
/* 7109 */    MCD::OPC_CheckPredicate, 26, 113, 30, // Skip to: 14906
/* 7113 */    MCD::OPC_Decode, 171, 4, 130, 2, // Opcode: CEQ_H
/* 7118 */    MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 7131
/* 7122 */    MCD::OPC_CheckPredicate, 26, 100, 30, // Skip to: 14906
/* 7126 */    MCD::OPC_Decode, 172, 4, 131, 2, // Opcode: CEQ_W
/* 7131 */    MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 7144
/* 7135 */    MCD::OPC_CheckPredicate, 26, 87, 30, // Skip to: 14906
/* 7139 */    MCD::OPC_Decode, 170, 4, 132, 2, // Opcode: CEQ_D
/* 7144 */    MCD::OPC_FilterValue, 8, 9, 0, // Skip to: 7157
/* 7148 */    MCD::OPC_CheckPredicate, 26, 74, 30, // Skip to: 14906
/* 7152 */    MCD::OPC_Decode, 213, 4, 129, 2, // Opcode: CLT_S_B
/* 7157 */    MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 7170
/* 7161 */    MCD::OPC_CheckPredicate, 26, 61, 30, // Skip to: 14906
/* 7165 */    MCD::OPC_Decode, 215, 4, 130, 2, // Opcode: CLT_S_H
/* 7170 */    MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 7183
/* 7174 */    MCD::OPC_CheckPredicate, 26, 48, 30, // Skip to: 14906
/* 7178 */    MCD::OPC_Decode, 216, 4, 131, 2, // Opcode: CLT_S_W
/* 7183 */    MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 7196
/* 7187 */    MCD::OPC_CheckPredicate, 26, 35, 30, // Skip to: 14906
/* 7191 */    MCD::OPC_Decode, 214, 4, 132, 2, // Opcode: CLT_S_D
/* 7196 */    MCD::OPC_FilterValue, 12, 9, 0, // Skip to: 7209
/* 7200 */    MCD::OPC_CheckPredicate, 26, 22, 30, // Skip to: 14906
/* 7204 */    MCD::OPC_Decode, 217, 4, 129, 2, // Opcode: CLT_U_B
/* 7209 */    MCD::OPC_FilterValue, 13, 9, 0, // Skip to: 7222
/* 7213 */    MCD::OPC_CheckPredicate, 26, 9, 30, // Skip to: 14906
/* 7217 */    MCD::OPC_Decode, 219, 4, 130, 2, // Opcode: CLT_U_H
/* 7222 */    MCD::OPC_FilterValue, 14, 9, 0, // Skip to: 7235
/* 7226 */    MCD::OPC_CheckPredicate, 26, 252, 29, // Skip to: 14906
/* 7230 */    MCD::OPC_Decode, 220, 4, 131, 2, // Opcode: CLT_U_W
/* 7235 */    MCD::OPC_FilterValue, 15, 9, 0, // Skip to: 7248
/* 7239 */    MCD::OPC_CheckPredicate, 26, 239, 29, // Skip to: 14906
/* 7243 */    MCD::OPC_Decode, 218, 4, 132, 2, // Opcode: CLT_U_D
/* 7248 */    MCD::OPC_FilterValue, 16, 9, 0, // Skip to: 7261
/* 7252 */    MCD::OPC_CheckPredicate, 26, 226, 29, // Skip to: 14906
/* 7256 */    MCD::OPC_Decode, 193, 4, 129, 2, // Opcode: CLE_S_B
/* 7261 */    MCD::OPC_FilterValue, 17, 9, 0, // Skip to: 7274
/* 7265 */    MCD::OPC_CheckPredicate, 26, 213, 29, // Skip to: 14906
/* 7269 */    MCD::OPC_Decode, 195, 4, 130, 2, // Opcode: CLE_S_H
/* 7274 */    MCD::OPC_FilterValue, 18, 9, 0, // Skip to: 7287
/* 7278 */    MCD::OPC_CheckPredicate, 26, 200, 29, // Skip to: 14906
/* 7282 */    MCD::OPC_Decode, 196, 4, 131, 2, // Opcode: CLE_S_W
/* 7287 */    MCD::OPC_FilterValue, 19, 9, 0, // Skip to: 7300
/* 7291 */    MCD::OPC_CheckPredicate, 26, 187, 29, // Skip to: 14906
/* 7295 */    MCD::OPC_Decode, 194, 4, 132, 2, // Opcode: CLE_S_D
/* 7300 */    MCD::OPC_FilterValue, 20, 9, 0, // Skip to: 7313
/* 7304 */    MCD::OPC_CheckPredicate, 26, 174, 29, // Skip to: 14906
/* 7308 */    MCD::OPC_Decode, 197, 4, 129, 2, // Opcode: CLE_U_B
/* 7313 */    MCD::OPC_FilterValue, 21, 9, 0, // Skip to: 7326
/* 7317 */    MCD::OPC_CheckPredicate, 26, 161, 29, // Skip to: 14906
/* 7321 */    MCD::OPC_Decode, 199, 4, 130, 2, // Opcode: CLE_U_H
/* 7326 */    MCD::OPC_FilterValue, 22, 9, 0, // Skip to: 7339
/* 7330 */    MCD::OPC_CheckPredicate, 26, 148, 29, // Skip to: 14906
/* 7334 */    MCD::OPC_Decode, 200, 4, 131, 2, // Opcode: CLE_U_W
/* 7339 */    MCD::OPC_FilterValue, 23, 139, 29, // Skip to: 14906
/* 7343 */    MCD::OPC_CheckPredicate, 26, 135, 29, // Skip to: 14906
/* 7347 */    MCD::OPC_Decode, 198, 4, 132, 2, // Opcode: CLE_U_D
/* 7352 */    MCD::OPC_FilterValue, 16, 163, 1, // Skip to: 7775
/* 7356 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 7359 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 7372
/* 7363 */    MCD::OPC_CheckPredicate, 26, 115, 29, // Skip to: 14906
/* 7367 */    MCD::OPC_Decode, 168, 1, 129, 2, // Opcode: ADD_A_B
/* 7372 */    MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 7385
/* 7376 */    MCD::OPC_CheckPredicate, 26, 102, 29, // Skip to: 14906
/* 7380 */    MCD::OPC_Decode, 170, 1, 130, 2, // Opcode: ADD_A_H
/* 7385 */    MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 7398
/* 7389 */    MCD::OPC_CheckPredicate, 26, 89, 29, // Skip to: 14906
/* 7393 */    MCD::OPC_Decode, 171, 1, 131, 2, // Opcode: ADD_A_W
/* 7398 */    MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 7411
/* 7402 */    MCD::OPC_CheckPredicate, 26, 76, 29, // Skip to: 14906
/* 7406 */    MCD::OPC_Decode, 169, 1, 132, 2, // Opcode: ADD_A_D
/* 7411 */    MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 7424
/* 7415 */    MCD::OPC_CheckPredicate, 26, 63, 29, // Skip to: 14906
/* 7419 */    MCD::OPC_Decode, 131, 1, 129, 2, // Opcode: ADDS_A_B
/* 7424 */    MCD::OPC_FilterValue, 5, 9, 0, // Skip to: 7437
/* 7428 */    MCD::OPC_CheckPredicate, 26, 50, 29, // Skip to: 14906
/* 7432 */    MCD::OPC_Decode, 133, 1, 130, 2, // Opcode: ADDS_A_H
/* 7437 */    MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 7450
/* 7441 */    MCD::OPC_CheckPredicate, 26, 37, 29, // Skip to: 14906
/* 7445 */    MCD::OPC_Decode, 134, 1, 131, 2, // Opcode: ADDS_A_W
/* 7450 */    MCD::OPC_FilterValue, 7, 9, 0, // Skip to: 7463
/* 7454 */    MCD::OPC_CheckPredicate, 26, 24, 29, // Skip to: 14906
/* 7458 */    MCD::OPC_Decode, 132, 1, 132, 2, // Opcode: ADDS_A_D
/* 7463 */    MCD::OPC_FilterValue, 8, 9, 0, // Skip to: 7476
/* 7467 */    MCD::OPC_CheckPredicate, 26, 11, 29, // Skip to: 14906
/* 7471 */    MCD::OPC_Decode, 135, 1, 129, 2, // Opcode: ADDS_S_B
/* 7476 */    MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 7489
/* 7480 */    MCD::OPC_CheckPredicate, 26, 254, 28, // Skip to: 14906
/* 7484 */    MCD::OPC_Decode, 137, 1, 130, 2, // Opcode: ADDS_S_H
/* 7489 */    MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 7502
/* 7493 */    MCD::OPC_CheckPredicate, 26, 241, 28, // Skip to: 14906
/* 7497 */    MCD::OPC_Decode, 138, 1, 131, 2, // Opcode: ADDS_S_W
/* 7502 */    MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 7515
/* 7506 */    MCD::OPC_CheckPredicate, 26, 228, 28, // Skip to: 14906
/* 7510 */    MCD::OPC_Decode, 136, 1, 132, 2, // Opcode: ADDS_S_D
/* 7515 */    MCD::OPC_FilterValue, 12, 9, 0, // Skip to: 7528
/* 7519 */    MCD::OPC_CheckPredicate, 26, 215, 28, // Skip to: 14906
/* 7523 */    MCD::OPC_Decode, 139, 1, 129, 2, // Opcode: ADDS_U_B
/* 7528 */    MCD::OPC_FilterValue, 13, 9, 0, // Skip to: 7541
/* 7532 */    MCD::OPC_CheckPredicate, 26, 202, 28, // Skip to: 14906
/* 7536 */    MCD::OPC_Decode, 141, 1, 130, 2, // Opcode: ADDS_U_H
/* 7541 */    MCD::OPC_FilterValue, 14, 9, 0, // Skip to: 7554
/* 7545 */    MCD::OPC_CheckPredicate, 26, 189, 28, // Skip to: 14906
/* 7549 */    MCD::OPC_Decode, 142, 1, 131, 2, // Opcode: ADDS_U_W
/* 7554 */    MCD::OPC_FilterValue, 15, 9, 0, // Skip to: 7567
/* 7558 */    MCD::OPC_CheckPredicate, 26, 176, 28, // Skip to: 14906
/* 7562 */    MCD::OPC_Decode, 140, 1, 132, 2, // Opcode: ADDS_U_D
/* 7567 */    MCD::OPC_FilterValue, 16, 9, 0, // Skip to: 7580
/* 7571 */    MCD::OPC_CheckPredicate, 26, 163, 28, // Skip to: 14906
/* 7575 */    MCD::OPC_Decode, 129, 2, 129, 2, // Opcode: AVE_S_B
/* 7580 */    MCD::OPC_FilterValue, 17, 9, 0, // Skip to: 7593
/* 7584 */    MCD::OPC_CheckPredicate, 26, 150, 28, // Skip to: 14906
/* 7588 */    MCD::OPC_Decode, 131, 2, 130, 2, // Opcode: AVE_S_H
/* 7593 */    MCD::OPC_FilterValue, 18, 9, 0, // Skip to: 7606
/* 7597 */    MCD::OPC_CheckPredicate, 26, 137, 28, // Skip to: 14906
/* 7601 */    MCD::OPC_Decode, 132, 2, 131, 2, // Opcode: AVE_S_W
/* 7606 */    MCD::OPC_FilterValue, 19, 9, 0, // Skip to: 7619
/* 7610 */    MCD::OPC_CheckPredicate, 26, 124, 28, // Skip to: 14906
/* 7614 */    MCD::OPC_Decode, 130, 2, 132, 2, // Opcode: AVE_S_D
/* 7619 */    MCD::OPC_FilterValue, 20, 9, 0, // Skip to: 7632
/* 7623 */    MCD::OPC_CheckPredicate, 26, 111, 28, // Skip to: 14906
/* 7627 */    MCD::OPC_Decode, 133, 2, 129, 2, // Opcode: AVE_U_B
/* 7632 */    MCD::OPC_FilterValue, 21, 9, 0, // Skip to: 7645
/* 7636 */    MCD::OPC_CheckPredicate, 26, 98, 28, // Skip to: 14906
/* 7640 */    MCD::OPC_Decode, 135, 2, 130, 2, // Opcode: AVE_U_H
/* 7645 */    MCD::OPC_FilterValue, 22, 9, 0, // Skip to: 7658
/* 7649 */    MCD::OPC_CheckPredicate, 26, 85, 28, // Skip to: 14906
/* 7653 */    MCD::OPC_Decode, 136, 2, 131, 2, // Opcode: AVE_U_W
/* 7658 */    MCD::OPC_FilterValue, 23, 9, 0, // Skip to: 7671
/* 7662 */    MCD::OPC_CheckPredicate, 26, 72, 28, // Skip to: 14906
/* 7666 */    MCD::OPC_Decode, 134, 2, 132, 2, // Opcode: AVE_U_D
/* 7671 */    MCD::OPC_FilterValue, 24, 9, 0, // Skip to: 7684
/* 7675 */    MCD::OPC_CheckPredicate, 26, 59, 28, // Skip to: 14906
/* 7679 */    MCD::OPC_Decode, 249, 1, 129, 2, // Opcode: AVER_S_B
/* 7684 */    MCD::OPC_FilterValue, 25, 9, 0, // Skip to: 7697
/* 7688 */    MCD::OPC_CheckPredicate, 26, 46, 28, // Skip to: 14906
/* 7692 */    MCD::OPC_Decode, 251, 1, 130, 2, // Opcode: AVER_S_H
/* 7697 */    MCD::OPC_FilterValue, 26, 9, 0, // Skip to: 7710
/* 7701 */    MCD::OPC_CheckPredicate, 26, 33, 28, // Skip to: 14906
/* 7705 */    MCD::OPC_Decode, 252, 1, 131, 2, // Opcode: AVER_S_W
/* 7710 */    MCD::OPC_FilterValue, 27, 9, 0, // Skip to: 7723
/* 7714 */    MCD::OPC_CheckPredicate, 26, 20, 28, // Skip to: 14906
/* 7718 */    MCD::OPC_Decode, 250, 1, 132, 2, // Opcode: AVER_S_D
/* 7723 */    MCD::OPC_FilterValue, 28, 9, 0, // Skip to: 7736
/* 7727 */    MCD::OPC_CheckPredicate, 26, 7, 28, // Skip to: 14906
/* 7731 */    MCD::OPC_Decode, 253, 1, 129, 2, // Opcode: AVER_U_B
/* 7736 */    MCD::OPC_FilterValue, 29, 9, 0, // Skip to: 7749
/* 7740 */    MCD::OPC_CheckPredicate, 26, 250, 27, // Skip to: 14906
/* 7744 */    MCD::OPC_Decode, 255, 1, 130, 2, // Opcode: AVER_U_H
/* 7749 */    MCD::OPC_FilterValue, 30, 9, 0, // Skip to: 7762
/* 7753 */    MCD::OPC_CheckPredicate, 26, 237, 27, // Skip to: 14906
/* 7757 */    MCD::OPC_Decode, 128, 2, 131, 2, // Opcode: AVER_U_W
/* 7762 */    MCD::OPC_FilterValue, 31, 228, 27, // Skip to: 14906
/* 7766 */    MCD::OPC_CheckPredicate, 26, 224, 27, // Skip to: 14906
/* 7770 */    MCD::OPC_Decode, 254, 1, 132, 2, // Opcode: AVER_U_D
/* 7775 */    MCD::OPC_FilterValue, 17, 59, 1, // Skip to: 8094
/* 7779 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 7782 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 7795
/* 7786 */    MCD::OPC_CheckPredicate, 26, 204, 27, // Skip to: 14906
/* 7790 */    MCD::OPC_Decode, 134, 18, 129, 2, // Opcode: SUBS_S_B
/* 7795 */    MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 7808
/* 7799 */    MCD::OPC_CheckPredicate, 26, 191, 27, // Skip to: 14906
/* 7803 */    MCD::OPC_Decode, 136, 18, 130, 2, // Opcode: SUBS_S_H
/* 7808 */    MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 7821
/* 7812 */    MCD::OPC_CheckPredicate, 26, 178, 27, // Skip to: 14906
/* 7816 */    MCD::OPC_Decode, 137, 18, 131, 2, // Opcode: SUBS_S_W
/* 7821 */    MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 7834
/* 7825 */    MCD::OPC_CheckPredicate, 26, 165, 27, // Skip to: 14906
/* 7829 */    MCD::OPC_Decode, 135, 18, 132, 2, // Opcode: SUBS_S_D
/* 7834 */    MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 7847
/* 7838 */    MCD::OPC_CheckPredicate, 26, 152, 27, // Skip to: 14906
/* 7842 */    MCD::OPC_Decode, 138, 18, 129, 2, // Opcode: SUBS_U_B
/* 7847 */    MCD::OPC_FilterValue, 5, 9, 0, // Skip to: 7860
/* 7851 */    MCD::OPC_CheckPredicate, 26, 139, 27, // Skip to: 14906
/* 7855 */    MCD::OPC_Decode, 140, 18, 130, 2, // Opcode: SUBS_U_H
/* 7860 */    MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 7873
/* 7864 */    MCD::OPC_CheckPredicate, 26, 126, 27, // Skip to: 14906
/* 7868 */    MCD::OPC_Decode, 141, 18, 131, 2, // Opcode: SUBS_U_W
/* 7873 */    MCD::OPC_FilterValue, 7, 9, 0, // Skip to: 7886
/* 7877 */    MCD::OPC_CheckPredicate, 26, 113, 27, // Skip to: 14906
/* 7881 */    MCD::OPC_Decode, 139, 18, 132, 2, // Opcode: SUBS_U_D
/* 7886 */    MCD::OPC_FilterValue, 8, 9, 0, // Skip to: 7899
/* 7890 */    MCD::OPC_CheckPredicate, 26, 100, 27, // Skip to: 14906
/* 7894 */    MCD::OPC_Decode, 254, 17, 129, 2, // Opcode: SUBSUS_U_B
/* 7899 */    MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 7912
/* 7903 */    MCD::OPC_CheckPredicate, 26, 87, 27, // Skip to: 14906
/* 7907 */    MCD::OPC_Decode, 128, 18, 130, 2, // Opcode: SUBSUS_U_H
/* 7912 */    MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 7925
/* 7916 */    MCD::OPC_CheckPredicate, 26, 74, 27, // Skip to: 14906
/* 7920 */    MCD::OPC_Decode, 129, 18, 131, 2, // Opcode: SUBSUS_U_W
/* 7925 */    MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 7938
/* 7929 */    MCD::OPC_CheckPredicate, 26, 61, 27, // Skip to: 14906
/* 7933 */    MCD::OPC_Decode, 255, 17, 132, 2, // Opcode: SUBSUS_U_D
/* 7938 */    MCD::OPC_FilterValue, 12, 9, 0, // Skip to: 7951
/* 7942 */    MCD::OPC_CheckPredicate, 26, 48, 27, // Skip to: 14906
/* 7946 */    MCD::OPC_Decode, 130, 18, 129, 2, // Opcode: SUBSUU_S_B
/* 7951 */    MCD::OPC_FilterValue, 13, 9, 0, // Skip to: 7964
/* 7955 */    MCD::OPC_CheckPredicate, 26, 35, 27, // Skip to: 14906
/* 7959 */    MCD::OPC_Decode, 132, 18, 130, 2, // Opcode: SUBSUU_S_H
/* 7964 */    MCD::OPC_FilterValue, 14, 9, 0, // Skip to: 7977
/* 7968 */    MCD::OPC_CheckPredicate, 26, 22, 27, // Skip to: 14906
/* 7972 */    MCD::OPC_Decode, 133, 18, 131, 2, // Opcode: SUBSUU_S_W
/* 7977 */    MCD::OPC_FilterValue, 15, 9, 0, // Skip to: 7990
/* 7981 */    MCD::OPC_CheckPredicate, 26, 9, 27, // Skip to: 14906
/* 7985 */    MCD::OPC_Decode, 131, 18, 132, 2, // Opcode: SUBSUU_S_D
/* 7990 */    MCD::OPC_FilterValue, 16, 9, 0, // Skip to: 8003
/* 7994 */    MCD::OPC_CheckPredicate, 26, 252, 26, // Skip to: 14906
/* 7998 */    MCD::OPC_Decode, 205, 1, 129, 2, // Opcode: ASUB_S_B
/* 8003 */    MCD::OPC_FilterValue, 17, 9, 0, // Skip to: 8016
/* 8007 */    MCD::OPC_CheckPredicate, 26, 239, 26, // Skip to: 14906
/* 8011 */    MCD::OPC_Decode, 207, 1, 130, 2, // Opcode: ASUB_S_H
/* 8016 */    MCD::OPC_FilterValue, 18, 9, 0, // Skip to: 8029
/* 8020 */    MCD::OPC_CheckPredicate, 26, 226, 26, // Skip to: 14906
/* 8024 */    MCD::OPC_Decode, 208, 1, 131, 2, // Opcode: ASUB_S_W
/* 8029 */    MCD::OPC_FilterValue, 19, 9, 0, // Skip to: 8042
/* 8033 */    MCD::OPC_CheckPredicate, 26, 213, 26, // Skip to: 14906
/* 8037 */    MCD::OPC_Decode, 206, 1, 132, 2, // Opcode: ASUB_S_D
/* 8042 */    MCD::OPC_FilterValue, 20, 9, 0, // Skip to: 8055
/* 8046 */    MCD::OPC_CheckPredicate, 26, 200, 26, // Skip to: 14906
/* 8050 */    MCD::OPC_Decode, 209, 1, 129, 2, // Opcode: ASUB_U_B
/* 8055 */    MCD::OPC_FilterValue, 21, 9, 0, // Skip to: 8068
/* 8059 */    MCD::OPC_CheckPredicate, 26, 187, 26, // Skip to: 14906
/* 8063 */    MCD::OPC_Decode, 211, 1, 130, 2, // Opcode: ASUB_U_H
/* 8068 */    MCD::OPC_FilterValue, 22, 9, 0, // Skip to: 8081
/* 8072 */    MCD::OPC_CheckPredicate, 26, 174, 26, // Skip to: 14906
/* 8076 */    MCD::OPC_Decode, 212, 1, 131, 2, // Opcode: ASUB_U_W
/* 8081 */    MCD::OPC_FilterValue, 23, 165, 26, // Skip to: 14906
/* 8085 */    MCD::OPC_CheckPredicate, 26, 161, 26, // Skip to: 14906
/* 8089 */    MCD::OPC_Decode, 210, 1, 132, 2, // Opcode: ASUB_U_D
/* 8094 */    MCD::OPC_FilterValue, 18, 111, 1, // Skip to: 8465
/* 8098 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 8101 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 8114
/* 8105 */    MCD::OPC_CheckPredicate, 26, 141, 26, // Skip to: 14906
/* 8109 */    MCD::OPC_Decode, 255, 13, 129, 2, // Opcode: MULV_B
/* 8114 */    MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 8127
/* 8118 */    MCD::OPC_CheckPredicate, 26, 128, 26, // Skip to: 14906
/* 8122 */    MCD::OPC_Decode, 129, 14, 130, 2, // Opcode: MULV_H
/* 8127 */    MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 8140
/* 8131 */    MCD::OPC_CheckPredicate, 26, 115, 26, // Skip to: 14906
/* 8135 */    MCD::OPC_Decode, 130, 14, 131, 2, // Opcode: MULV_W
/* 8140 */    MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 8153
/* 8144 */    MCD::OPC_CheckPredicate, 26, 102, 26, // Skip to: 14906
/* 8148 */    MCD::OPC_Decode, 128, 14, 132, 2, // Opcode: MULV_D
/* 8153 */    MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 8166
/* 8157 */    MCD::OPC_CheckPredicate, 26, 89, 26, // Skip to: 14906
/* 8161 */    MCD::OPC_Decode, 246, 11, 133, 2, // Opcode: MADDV_B
/* 8166 */    MCD::OPC_FilterValue, 5, 9, 0, // Skip to: 8179
/* 8170 */    MCD::OPC_CheckPredicate, 26, 76, 26, // Skip to: 14906
/* 8174 */    MCD::OPC_Decode, 248, 11, 134, 2, // Opcode: MADDV_H
/* 8179 */    MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 8192
/* 8183 */    MCD::OPC_CheckPredicate, 26, 63, 26, // Skip to: 14906
/* 8187 */    MCD::OPC_Decode, 249, 11, 135, 2, // Opcode: MADDV_W
/* 8192 */    MCD::OPC_FilterValue, 7, 9, 0, // Skip to: 8205
/* 8196 */    MCD::OPC_CheckPredicate, 26, 50, 26, // Skip to: 14906
/* 8200 */    MCD::OPC_Decode, 247, 11, 136, 2, // Opcode: MADDV_D
/* 8205 */    MCD::OPC_FilterValue, 8, 9, 0, // Skip to: 8218
/* 8209 */    MCD::OPC_CheckPredicate, 26, 37, 26, // Skip to: 14906
/* 8213 */    MCD::OPC_Decode, 169, 13, 133, 2, // Opcode: MSUBV_B
/* 8218 */    MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 8231
/* 8222 */    MCD::OPC_CheckPredicate, 26, 24, 26, // Skip to: 14906
/* 8226 */    MCD::OPC_Decode, 171, 13, 134, 2, // Opcode: MSUBV_H
/* 8231 */    MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 8244
/* 8235 */    MCD::OPC_CheckPredicate, 26, 11, 26, // Skip to: 14906
/* 8239 */    MCD::OPC_Decode, 172, 13, 135, 2, // Opcode: MSUBV_W
/* 8244 */    MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 8257
/* 8248 */    MCD::OPC_CheckPredicate, 26, 254, 25, // Skip to: 14906
/* 8252 */    MCD::OPC_Decode, 170, 13, 136, 2, // Opcode: MSUBV_D
/* 8257 */    MCD::OPC_FilterValue, 16, 9, 0, // Skip to: 8270
/* 8261 */    MCD::OPC_CheckPredicate, 26, 241, 25, // Skip to: 14906
/* 8265 */    MCD::OPC_Decode, 251, 6, 129, 2, // Opcode: DIV_S_B
/* 8270 */    MCD::OPC_FilterValue, 17, 9, 0, // Skip to: 8283
/* 8274 */    MCD::OPC_CheckPredicate, 26, 228, 25, // Skip to: 14906
/* 8278 */    MCD::OPC_Decode, 253, 6, 130, 2, // Opcode: DIV_S_H
/* 8283 */    MCD::OPC_FilterValue, 18, 9, 0, // Skip to: 8296
/* 8287 */    MCD::OPC_CheckPredicate, 26, 215, 25, // Skip to: 14906
/* 8291 */    MCD::OPC_Decode, 254, 6, 131, 2, // Opcode: DIV_S_W
/* 8296 */    MCD::OPC_FilterValue, 19, 9, 0, // Skip to: 8309
/* 8300 */    MCD::OPC_CheckPredicate, 26, 202, 25, // Skip to: 14906
/* 8304 */    MCD::OPC_Decode, 252, 6, 132, 2, // Opcode: DIV_S_D
/* 8309 */    MCD::OPC_FilterValue, 20, 9, 0, // Skip to: 8322
/* 8313 */    MCD::OPC_CheckPredicate, 26, 189, 25, // Skip to: 14906
/* 8317 */    MCD::OPC_Decode, 255, 6, 129, 2, // Opcode: DIV_U_B
/* 8322 */    MCD::OPC_FilterValue, 21, 9, 0, // Skip to: 8335
/* 8326 */    MCD::OPC_CheckPredicate, 26, 176, 25, // Skip to: 14906
/* 8330 */    MCD::OPC_Decode, 129, 7, 130, 2, // Opcode: DIV_U_H
/* 8335 */    MCD::OPC_FilterValue, 22, 9, 0, // Skip to: 8348
/* 8339 */    MCD::OPC_CheckPredicate, 26, 163, 25, // Skip to: 14906
/* 8343 */    MCD::OPC_Decode, 130, 7, 131, 2, // Opcode: DIV_U_W
/* 8348 */    MCD::OPC_FilterValue, 23, 9, 0, // Skip to: 8361
/* 8352 */    MCD::OPC_CheckPredicate, 26, 150, 25, // Skip to: 14906
/* 8356 */    MCD::OPC_Decode, 128, 7, 132, 2, // Opcode: DIV_U_D
/* 8361 */    MCD::OPC_FilterValue, 24, 9, 0, // Skip to: 8374
/* 8365 */    MCD::OPC_CheckPredicate, 26, 137, 25, // Skip to: 14906
/* 8369 */    MCD::OPC_Decode, 230, 12, 129, 2, // Opcode: MOD_S_B
/* 8374 */    MCD::OPC_FilterValue, 25, 9, 0, // Skip to: 8387
/* 8378 */    MCD::OPC_CheckPredicate, 26, 124, 25, // Skip to: 14906
/* 8382 */    MCD::OPC_Decode, 232, 12, 130, 2, // Opcode: MOD_S_H
/* 8387 */    MCD::OPC_FilterValue, 26, 9, 0, // Skip to: 8400
/* 8391 */    MCD::OPC_CheckPredicate, 26, 111, 25, // Skip to: 14906
/* 8395 */    MCD::OPC_Decode, 233, 12, 131, 2, // Opcode: MOD_S_W
/* 8400 */    MCD::OPC_FilterValue, 27, 9, 0, // Skip to: 8413
/* 8404 */    MCD::OPC_CheckPredicate, 26, 98, 25, // Skip to: 14906
/* 8408 */    MCD::OPC_Decode, 231, 12, 132, 2, // Opcode: MOD_S_D
/* 8413 */    MCD::OPC_FilterValue, 28, 9, 0, // Skip to: 8426
/* 8417 */    MCD::OPC_CheckPredicate, 26, 85, 25, // Skip to: 14906
/* 8421 */    MCD::OPC_Decode, 234, 12, 129, 2, // Opcode: MOD_U_B
/* 8426 */    MCD::OPC_FilterValue, 29, 9, 0, // Skip to: 8439
/* 8430 */    MCD::OPC_CheckPredicate, 26, 72, 25, // Skip to: 14906
/* 8434 */    MCD::OPC_Decode, 236, 12, 130, 2, // Opcode: MOD_U_H
/* 8439 */    MCD::OPC_FilterValue, 30, 9, 0, // Skip to: 8452
/* 8443 */    MCD::OPC_CheckPredicate, 26, 59, 25, // Skip to: 14906
/* 8447 */    MCD::OPC_Decode, 237, 12, 131, 2, // Opcode: MOD_U_W
/* 8452 */    MCD::OPC_FilterValue, 31, 50, 25, // Skip to: 14906
/* 8456 */    MCD::OPC_CheckPredicate, 26, 46, 25, // Skip to: 14906
/* 8460 */    MCD::OPC_Decode, 235, 12, 132, 2, // Opcode: MOD_U_D
/* 8465 */    MCD::OPC_FilterValue, 19, 237, 0, // Skip to: 8706
/* 8469 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 8472 */    MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 8485
/* 8476 */    MCD::OPC_CheckPredicate, 26, 26, 25, // Skip to: 14906
/* 8480 */    MCD::OPC_Decode, 170, 7, 137, 2, // Opcode: DOTP_S_H
/* 8485 */    MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 8498
/* 8489 */    MCD::OPC_CheckPredicate, 26, 13, 25, // Skip to: 14906
/* 8493 */    MCD::OPC_Decode, 171, 7, 138, 2, // Opcode: DOTP_S_W
/* 8498 */    MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 8511
/* 8502 */    MCD::OPC_CheckPredicate, 26, 0, 25, // Skip to: 14906
/* 8506 */    MCD::OPC_Decode, 169, 7, 139, 2, // Opcode: DOTP_S_D
/* 8511 */    MCD::OPC_FilterValue, 5, 9, 0, // Skip to: 8524
/* 8515 */    MCD::OPC_CheckPredicate, 26, 243, 24, // Skip to: 14906
/* 8519 */    MCD::OPC_Decode, 173, 7, 137, 2, // Opcode: DOTP_U_H
/* 8524 */    MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 8537
/* 8528 */    MCD::OPC_CheckPredicate, 26, 230, 24, // Skip to: 14906
/* 8532 */    MCD::OPC_Decode, 174, 7, 138, 2, // Opcode: DOTP_U_W
/* 8537 */    MCD::OPC_FilterValue, 7, 9, 0, // Skip to: 8550
/* 8541 */    MCD::OPC_CheckPredicate, 26, 217, 24, // Skip to: 14906
/* 8545 */    MCD::OPC_Decode, 172, 7, 139, 2, // Opcode: DOTP_U_D
/* 8550 */    MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 8563
/* 8554 */    MCD::OPC_CheckPredicate, 26, 204, 24, // Skip to: 14906
/* 8558 */    MCD::OPC_Decode, 176, 7, 140, 2, // Opcode: DPADD_S_H
/* 8563 */    MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 8576
/* 8567 */    MCD::OPC_CheckPredicate, 26, 191, 24, // Skip to: 14906
/* 8571 */    MCD::OPC_Decode, 177, 7, 141, 2, // Opcode: DPADD_S_W
/* 8576 */    MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 8589
/* 8580 */    MCD::OPC_CheckPredicate, 26, 178, 24, // Skip to: 14906
/* 8584 */    MCD::OPC_Decode, 175, 7, 142, 2, // Opcode: DPADD_S_D
/* 8589 */    MCD::OPC_FilterValue, 13, 9, 0, // Skip to: 8602
/* 8593 */    MCD::OPC_CheckPredicate, 26, 165, 24, // Skip to: 14906
/* 8597 */    MCD::OPC_Decode, 179, 7, 140, 2, // Opcode: DPADD_U_H
/* 8602 */    MCD::OPC_FilterValue, 14, 9, 0, // Skip to: 8615
/* 8606 */    MCD::OPC_CheckPredicate, 26, 152, 24, // Skip to: 14906
/* 8610 */    MCD::OPC_Decode, 180, 7, 141, 2, // Opcode: DPADD_U_W
/* 8615 */    MCD::OPC_FilterValue, 15, 9, 0, // Skip to: 8628
/* 8619 */    MCD::OPC_CheckPredicate, 26, 139, 24, // Skip to: 14906
/* 8623 */    MCD::OPC_Decode, 178, 7, 142, 2, // Opcode: DPADD_U_D
/* 8628 */    MCD::OPC_FilterValue, 17, 9, 0, // Skip to: 8641
/* 8632 */    MCD::OPC_CheckPredicate, 26, 126, 24, // Skip to: 14906
/* 8636 */    MCD::OPC_Decode, 207, 7, 140, 2, // Opcode: DPSUB_S_H
/* 8641 */    MCD::OPC_FilterValue, 18, 9, 0, // Skip to: 8654
/* 8645 */    MCD::OPC_CheckPredicate, 26, 113, 24, // Skip to: 14906
/* 8649 */    MCD::OPC_Decode, 208, 7, 141, 2, // Opcode: DPSUB_S_W
/* 8654 */    MCD::OPC_FilterValue, 19, 9, 0, // Skip to: 8667
/* 8658 */    MCD::OPC_CheckPredicate, 26, 100, 24, // Skip to: 14906
/* 8662 */    MCD::OPC_Decode, 206, 7, 142, 2, // Opcode: DPSUB_S_D
/* 8667 */    MCD::OPC_FilterValue, 21, 9, 0, // Skip to: 8680
/* 8671 */    MCD::OPC_CheckPredicate, 26, 87, 24, // Skip to: 14906
/* 8675 */    MCD::OPC_Decode, 210, 7, 140, 2, // Opcode: DPSUB_U_H
/* 8680 */    MCD::OPC_FilterValue, 22, 9, 0, // Skip to: 8693
/* 8684 */    MCD::OPC_CheckPredicate, 26, 74, 24, // Skip to: 14906
/* 8688 */    MCD::OPC_Decode, 211, 7, 141, 2, // Opcode: DPSUB_U_W
/* 8693 */    MCD::OPC_FilterValue, 23, 65, 24, // Skip to: 14906
/* 8697 */    MCD::OPC_CheckPredicate, 26, 61, 24, // Skip to: 14906
/* 8701 */    MCD::OPC_Decode, 209, 7, 142, 2, // Opcode: DPSUB_U_D
/* 8706 */    MCD::OPC_FilterValue, 20, 163, 1, // Skip to: 9129
/* 8710 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 8713 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 8726
/* 8717 */    MCD::OPC_CheckPredicate, 26, 41, 24, // Skip to: 14906
/* 8721 */    MCD::OPC_Decode, 133, 17, 143, 2, // Opcode: SLD_B
/* 8726 */    MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 8739
/* 8730 */    MCD::OPC_CheckPredicate, 26, 28, 24, // Skip to: 14906
/* 8734 */    MCD::OPC_Decode, 135, 17, 144, 2, // Opcode: SLD_H
/* 8739 */    MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 8752
/* 8743 */    MCD::OPC_CheckPredicate, 26, 15, 24, // Skip to: 14906
/* 8747 */    MCD::OPC_Decode, 136, 17, 145, 2, // Opcode: SLD_W
/* 8752 */    MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 8765
/* 8756 */    MCD::OPC_CheckPredicate, 26, 2, 24, // Skip to: 14906
/* 8760 */    MCD::OPC_Decode, 134, 17, 146, 2, // Opcode: SLD_D
/* 8765 */    MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 8778
/* 8769 */    MCD::OPC_CheckPredicate, 26, 245, 23, // Skip to: 14906
/* 8773 */    MCD::OPC_Decode, 179, 17, 147, 2, // Opcode: SPLAT_B
/* 8778 */    MCD::OPC_FilterValue, 5, 9, 0, // Skip to: 8791
/* 8782 */    MCD::OPC_CheckPredicate, 26, 232, 23, // Skip to: 14906
/* 8786 */    MCD::OPC_Decode, 181, 17, 148, 2, // Opcode: SPLAT_H
/* 8791 */    MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 8804
/* 8795 */    MCD::OPC_CheckPredicate, 26, 219, 23, // Skip to: 14906
/* 8799 */    MCD::OPC_Decode, 182, 17, 149, 2, // Opcode: SPLAT_W
/* 8804 */    MCD::OPC_FilterValue, 7, 9, 0, // Skip to: 8817
/* 8808 */    MCD::OPC_CheckPredicate, 26, 206, 23, // Skip to: 14906
/* 8812 */    MCD::OPC_Decode, 180, 17, 150, 2, // Opcode: SPLAT_D
/* 8817 */    MCD::OPC_FilterValue, 8, 9, 0, // Skip to: 8830
/* 8821 */    MCD::OPC_CheckPredicate, 26, 193, 23, // Skip to: 14906
/* 8825 */    MCD::OPC_Decode, 203, 14, 129, 2, // Opcode: PCKEV_B
/* 8830 */    MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 8843
/* 8834 */    MCD::OPC_CheckPredicate, 26, 180, 23, // Skip to: 14906
/* 8838 */    MCD::OPC_Decode, 205, 14, 130, 2, // Opcode: PCKEV_H
/* 8843 */    MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 8856
/* 8847 */    MCD::OPC_CheckPredicate, 26, 167, 23, // Skip to: 14906
/* 8851 */    MCD::OPC_Decode, 206, 14, 131, 2, // Opcode: PCKEV_W
/* 8856 */    MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 8869
/* 8860 */    MCD::OPC_CheckPredicate, 26, 154, 23, // Skip to: 14906
/* 8864 */    MCD::OPC_Decode, 204, 14, 132, 2, // Opcode: PCKEV_D
/* 8869 */    MCD::OPC_FilterValue, 12, 9, 0, // Skip to: 8882
/* 8873 */    MCD::OPC_CheckPredicate, 26, 141, 23, // Skip to: 14906
/* 8877 */    MCD::OPC_Decode, 207, 14, 129, 2, // Opcode: PCKOD_B
/* 8882 */    MCD::OPC_FilterValue, 13, 9, 0, // Skip to: 8895
/* 8886 */    MCD::OPC_CheckPredicate, 26, 128, 23, // Skip to: 14906
/* 8890 */    MCD::OPC_Decode, 209, 14, 130, 2, // Opcode: PCKOD_H
/* 8895 */    MCD::OPC_FilterValue, 14, 9, 0, // Skip to: 8908
/* 8899 */    MCD::OPC_CheckPredicate, 26, 115, 23, // Skip to: 14906
/* 8903 */    MCD::OPC_Decode, 210, 14, 131, 2, // Opcode: PCKOD_W
/* 8908 */    MCD::OPC_FilterValue, 15, 9, 0, // Skip to: 8921
/* 8912 */    MCD::OPC_CheckPredicate, 26, 102, 23, // Skip to: 14906
/* 8916 */    MCD::OPC_Decode, 208, 14, 132, 2, // Opcode: PCKOD_D
/* 8921 */    MCD::OPC_FilterValue, 16, 9, 0, // Skip to: 8934
/* 8925 */    MCD::OPC_CheckPredicate, 26, 89, 23, // Skip to: 14906
/* 8929 */    MCD::OPC_Decode, 253, 9, 129, 2, // Opcode: ILVL_B
/* 8934 */    MCD::OPC_FilterValue, 17, 9, 0, // Skip to: 8947
/* 8938 */    MCD::OPC_CheckPredicate, 26, 76, 23, // Skip to: 14906
/* 8942 */    MCD::OPC_Decode, 255, 9, 130, 2, // Opcode: ILVL_H
/* 8947 */    MCD::OPC_FilterValue, 18, 9, 0, // Skip to: 8960
/* 8951 */    MCD::OPC_CheckPredicate, 26, 63, 23, // Skip to: 14906
/* 8955 */    MCD::OPC_Decode, 128, 10, 131, 2, // Opcode: ILVL_W
/* 8960 */    MCD::OPC_FilterValue, 19, 9, 0, // Skip to: 8973
/* 8964 */    MCD::OPC_CheckPredicate, 26, 50, 23, // Skip to: 14906
/* 8968 */    MCD::OPC_Decode, 254, 9, 132, 2, // Opcode: ILVL_D
/* 8973 */    MCD::OPC_FilterValue, 20, 9, 0, // Skip to: 8986
/* 8977 */    MCD::OPC_CheckPredicate, 26, 37, 23, // Skip to: 14906
/* 8981 */    MCD::OPC_Decode, 133, 10, 129, 2, // Opcode: ILVR_B
/* 8986 */    MCD::OPC_FilterValue, 21, 9, 0, // Skip to: 8999
/* 8990 */    MCD::OPC_CheckPredicate, 26, 24, 23, // Skip to: 14906
/* 8994 */    MCD::OPC_Decode, 135, 10, 130, 2, // Opcode: ILVR_H
/* 8999 */    MCD::OPC_FilterValue, 22, 9, 0, // Skip to: 9012
/* 9003 */    MCD::OPC_CheckPredicate, 26, 11, 23, // Skip to: 14906
/* 9007 */    MCD::OPC_Decode, 136, 10, 131, 2, // Opcode: ILVR_W
/* 9012 */    MCD::OPC_FilterValue, 23, 9, 0, // Skip to: 9025
/* 9016 */    MCD::OPC_CheckPredicate, 26, 254, 22, // Skip to: 14906
/* 9020 */    MCD::OPC_Decode, 134, 10, 132, 2, // Opcode: ILVR_D
/* 9025 */    MCD::OPC_FilterValue, 24, 9, 0, // Skip to: 9038
/* 9029 */    MCD::OPC_CheckPredicate, 26, 241, 22, // Skip to: 14906
/* 9033 */    MCD::OPC_Decode, 249, 9, 129, 2, // Opcode: ILVEV_B
/* 9038 */    MCD::OPC_FilterValue, 25, 9, 0, // Skip to: 9051
/* 9042 */    MCD::OPC_CheckPredicate, 26, 228, 22, // Skip to: 14906
/* 9046 */    MCD::OPC_Decode, 251, 9, 130, 2, // Opcode: ILVEV_H
/* 9051 */    MCD::OPC_FilterValue, 26, 9, 0, // Skip to: 9064
/* 9055 */    MCD::OPC_CheckPredicate, 26, 215, 22, // Skip to: 14906
/* 9059 */    MCD::OPC_Decode, 252, 9, 131, 2, // Opcode: ILVEV_W
/* 9064 */    MCD::OPC_FilterValue, 27, 9, 0, // Skip to: 9077
/* 9068 */    MCD::OPC_CheckPredicate, 26, 202, 22, // Skip to: 14906
/* 9072 */    MCD::OPC_Decode, 250, 9, 132, 2, // Opcode: ILVEV_D
/* 9077 */    MCD::OPC_FilterValue, 28, 9, 0, // Skip to: 9090
/* 9081 */    MCD::OPC_CheckPredicate, 26, 189, 22, // Skip to: 14906
/* 9085 */    MCD::OPC_Decode, 129, 10, 129, 2, // Opcode: ILVOD_B
/* 9090 */    MCD::OPC_FilterValue, 29, 9, 0, // Skip to: 9103
/* 9094 */    MCD::OPC_CheckPredicate, 26, 176, 22, // Skip to: 14906
/* 9098 */    MCD::OPC_Decode, 131, 10, 130, 2, // Opcode: ILVOD_H
/* 9103 */    MCD::OPC_FilterValue, 30, 9, 0, // Skip to: 9116
/* 9107 */    MCD::OPC_CheckPredicate, 26, 163, 22, // Skip to: 14906
/* 9111 */    MCD::OPC_Decode, 132, 10, 131, 2, // Opcode: ILVOD_W
/* 9116 */    MCD::OPC_FilterValue, 31, 154, 22, // Skip to: 14906
/* 9120 */    MCD::OPC_CheckPredicate, 26, 150, 22, // Skip to: 14906
/* 9124 */    MCD::OPC_Decode, 130, 10, 132, 2, // Opcode: ILVOD_D
/* 9129 */    MCD::OPC_FilterValue, 21, 59, 1, // Skip to: 9448
/* 9133 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 9136 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 9149
/* 9140 */    MCD::OPC_CheckPredicate, 26, 130, 22, // Skip to: 14906
/* 9144 */    MCD::OPC_Decode, 198, 19, 133, 2, // Opcode: VSHF_B
/* 9149 */    MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 9162
/* 9153 */    MCD::OPC_CheckPredicate, 26, 117, 22, // Skip to: 14906
/* 9157 */    MCD::OPC_Decode, 200, 19, 134, 2, // Opcode: VSHF_H
/* 9162 */    MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 9175
/* 9166 */    MCD::OPC_CheckPredicate, 26, 104, 22, // Skip to: 14906
/* 9170 */    MCD::OPC_Decode, 201, 19, 135, 2, // Opcode: VSHF_W
/* 9175 */    MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 9188
/* 9179 */    MCD::OPC_CheckPredicate, 26, 91, 22, // Skip to: 14906
/* 9183 */    MCD::OPC_Decode, 199, 19, 136, 2, // Opcode: VSHF_D
/* 9188 */    MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 9201
/* 9192 */    MCD::OPC_CheckPredicate, 26, 78, 22, // Skip to: 14906
/* 9196 */    MCD::OPC_Decode, 194, 17, 129, 2, // Opcode: SRAR_B
/* 9201 */    MCD::OPC_FilterValue, 5, 9, 0, // Skip to: 9214
/* 9205 */    MCD::OPC_CheckPredicate, 26, 65, 22, // Skip to: 14906
/* 9209 */    MCD::OPC_Decode, 196, 17, 130, 2, // Opcode: SRAR_H
/* 9214 */    MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 9227
/* 9218 */    MCD::OPC_CheckPredicate, 26, 52, 22, // Skip to: 14906
/* 9222 */    MCD::OPC_Decode, 197, 17, 131, 2, // Opcode: SRAR_W
/* 9227 */    MCD::OPC_FilterValue, 7, 9, 0, // Skip to: 9240
/* 9231 */    MCD::OPC_CheckPredicate, 26, 39, 22, // Skip to: 14906
/* 9235 */    MCD::OPC_Decode, 195, 17, 132, 2, // Opcode: SRAR_D
/* 9240 */    MCD::OPC_FilterValue, 8, 9, 0, // Skip to: 9253
/* 9244 */    MCD::OPC_CheckPredicate, 26, 26, 22, // Skip to: 14906
/* 9248 */    MCD::OPC_Decode, 216, 17, 129, 2, // Opcode: SRLR_B
/* 9253 */    MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 9266
/* 9257 */    MCD::OPC_CheckPredicate, 26, 13, 22, // Skip to: 14906
/* 9261 */    MCD::OPC_Decode, 218, 17, 130, 2, // Opcode: SRLR_H
/* 9266 */    MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 9279
/* 9270 */    MCD::OPC_CheckPredicate, 26, 0, 22, // Skip to: 14906
/* 9274 */    MCD::OPC_Decode, 219, 17, 131, 2, // Opcode: SRLR_W
/* 9279 */    MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 9292
/* 9283 */    MCD::OPC_CheckPredicate, 26, 243, 21, // Skip to: 14906
/* 9287 */    MCD::OPC_Decode, 217, 17, 132, 2, // Opcode: SRLR_D
/* 9292 */    MCD::OPC_FilterValue, 17, 9, 0, // Skip to: 9305
/* 9296 */    MCD::OPC_CheckPredicate, 26, 230, 21, // Skip to: 14906
/* 9300 */    MCD::OPC_Decode, 238, 9, 137, 2, // Opcode: HADD_S_H
/* 9305 */    MCD::OPC_FilterValue, 18, 9, 0, // Skip to: 9318
/* 9309 */    MCD::OPC_CheckPredicate, 26, 217, 21, // Skip to: 14906
/* 9313 */    MCD::OPC_Decode, 239, 9, 138, 2, // Opcode: HADD_S_W
/* 9318 */    MCD::OPC_FilterValue, 19, 9, 0, // Skip to: 9331
/* 9322 */    MCD::OPC_CheckPredicate, 26, 204, 21, // Skip to: 14906
/* 9326 */    MCD::OPC_Decode, 237, 9, 139, 2, // Opcode: HADD_S_D
/* 9331 */    MCD::OPC_FilterValue, 21, 9, 0, // Skip to: 9344
/* 9335 */    MCD::OPC_CheckPredicate, 26, 191, 21, // Skip to: 14906
/* 9339 */    MCD::OPC_Decode, 241, 9, 137, 2, // Opcode: HADD_U_H
/* 9344 */    MCD::OPC_FilterValue, 22, 9, 0, // Skip to: 9357
/* 9348 */    MCD::OPC_CheckPredicate, 26, 178, 21, // Skip to: 14906
/* 9352 */    MCD::OPC_Decode, 242, 9, 138, 2, // Opcode: HADD_U_W
/* 9357 */    MCD::OPC_FilterValue, 23, 9, 0, // Skip to: 9370
/* 9361 */    MCD::OPC_CheckPredicate, 26, 165, 21, // Skip to: 14906
/* 9365 */    MCD::OPC_Decode, 240, 9, 139, 2, // Opcode: HADD_U_D
/* 9370 */    MCD::OPC_FilterValue, 25, 9, 0, // Skip to: 9383
/* 9374 */    MCD::OPC_CheckPredicate, 26, 152, 21, // Skip to: 14906
/* 9378 */    MCD::OPC_Decode, 244, 9, 137, 2, // Opcode: HSUB_S_H
/* 9383 */    MCD::OPC_FilterValue, 26, 9, 0, // Skip to: 9396
/* 9387 */    MCD::OPC_CheckPredicate, 26, 139, 21, // Skip to: 14906
/* 9391 */    MCD::OPC_Decode, 245, 9, 138, 2, // Opcode: HSUB_S_W
/* 9396 */    MCD::OPC_FilterValue, 27, 9, 0, // Skip to: 9409
/* 9400 */    MCD::OPC_CheckPredicate, 26, 126, 21, // Skip to: 14906
/* 9404 */    MCD::OPC_Decode, 243, 9, 139, 2, // Opcode: HSUB_S_D
/* 9409 */    MCD::OPC_FilterValue, 29, 9, 0, // Skip to: 9422
/* 9413 */    MCD::OPC_CheckPredicate, 26, 113, 21, // Skip to: 14906
/* 9417 */    MCD::OPC_Decode, 247, 9, 137, 2, // Opcode: HSUB_U_H
/* 9422 */    MCD::OPC_FilterValue, 30, 9, 0, // Skip to: 9435
/* 9426 */    MCD::OPC_CheckPredicate, 26, 100, 21, // Skip to: 14906
/* 9430 */    MCD::OPC_Decode, 248, 9, 138, 2, // Opcode: HSUB_U_W
/* 9435 */    MCD::OPC_FilterValue, 31, 91, 21, // Skip to: 14906
/* 9439 */    MCD::OPC_CheckPredicate, 26, 87, 21, // Skip to: 14906
/* 9443 */    MCD::OPC_Decode, 246, 9, 139, 2, // Opcode: HSUB_U_D
/* 9448 */    MCD::OPC_FilterValue, 25, 210, 1, // Skip to: 9918
/* 9452 */    MCD::OPC_ExtractField, 20, 6,  // Inst{25-20} ...
/* 9455 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 9468
/* 9459 */    MCD::OPC_CheckPredicate, 26, 67, 21, // Skip to: 14906
/* 9463 */    MCD::OPC_Decode, 129, 17, 151, 2, // Opcode: SLDI_B
/* 9468 */    MCD::OPC_FilterValue, 2, 15, 0, // Skip to: 9487
/* 9472 */    MCD::OPC_CheckPredicate, 26, 54, 21, // Skip to: 14906
/* 9476 */    MCD::OPC_CheckField, 19, 1, 0, 48, 21, // Skip to: 14906
/* 9482 */    MCD::OPC_Decode, 131, 17, 152, 2, // Opcode: SLDI_H
/* 9487 */    MCD::OPC_FilterValue, 3, 54, 0, // Skip to: 9545
/* 9491 */    MCD::OPC_ExtractField, 18, 2,  // Inst{19-18} ...
/* 9494 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 9507
/* 9498 */    MCD::OPC_CheckPredicate, 26, 28, 21, // Skip to: 14906
/* 9502 */    MCD::OPC_Decode, 132, 17, 153, 2, // Opcode: SLDI_W
/* 9507 */    MCD::OPC_FilterValue, 2, 15, 0, // Skip to: 9526
/* 9511 */    MCD::OPC_CheckPredicate, 26, 15, 21, // Skip to: 14906
/* 9515 */    MCD::OPC_CheckField, 17, 1, 0, 9, 21, // Skip to: 14906
/* 9521 */    MCD::OPC_Decode, 130, 17, 154, 2, // Opcode: SLDI_D
/* 9526 */    MCD::OPC_FilterValue, 3, 0, 21, // Skip to: 14906
/* 9530 */    MCD::OPC_CheckPredicate, 26, 252, 20, // Skip to: 14906
/* 9534 */    MCD::OPC_CheckField, 16, 2, 2, 246, 20, // Skip to: 14906
/* 9540 */    MCD::OPC_Decode, 198, 5, 155, 2, // Opcode: CTCMSA
/* 9545 */    MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 9558
/* 9549 */    MCD::OPC_CheckPredicate, 26, 233, 20, // Skip to: 14906
/* 9553 */    MCD::OPC_Decode, 175, 17, 156, 2, // Opcode: SPLATI_B
/* 9558 */    MCD::OPC_FilterValue, 6, 15, 0, // Skip to: 9577
/* 9562 */    MCD::OPC_CheckPredicate, 26, 220, 20, // Skip to: 14906
/* 9566 */    MCD::OPC_CheckField, 19, 1, 0, 214, 20, // Skip to: 14906
/* 9572 */    MCD::OPC_Decode, 177, 17, 157, 2, // Opcode: SPLATI_H
/* 9577 */    MCD::OPC_FilterValue, 7, 54, 0, // Skip to: 9635
/* 9581 */    MCD::OPC_ExtractField, 18, 2,  // Inst{19-18} ...
/* 9584 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 9597
/* 9588 */    MCD::OPC_CheckPredicate, 26, 194, 20, // Skip to: 14906
/* 9592 */    MCD::OPC_Decode, 178, 17, 158, 2, // Opcode: SPLATI_W
/* 9597 */    MCD::OPC_FilterValue, 2, 15, 0, // Skip to: 9616
/* 9601 */    MCD::OPC_CheckPredicate, 26, 181, 20, // Skip to: 14906
/* 9605 */    MCD::OPC_CheckField, 17, 1, 0, 175, 20, // Skip to: 14906
/* 9611 */    MCD::OPC_Decode, 176, 17, 159, 2, // Opcode: SPLATI_D
/* 9616 */    MCD::OPC_FilterValue, 3, 166, 20, // Skip to: 14906
/* 9620 */    MCD::OPC_CheckPredicate, 26, 162, 20, // Skip to: 14906
/* 9624 */    MCD::OPC_CheckField, 16, 2, 2, 156, 20, // Skip to: 14906
/* 9630 */    MCD::OPC_Decode, 176, 4, 160, 2, // Opcode: CFCMSA
/* 9635 */    MCD::OPC_FilterValue, 8, 9, 0, // Skip to: 9648
/* 9639 */    MCD::OPC_CheckPredicate, 26, 143, 20, // Skip to: 14906
/* 9643 */    MCD::OPC_Decode, 188, 5, 161, 2, // Opcode: COPY_S_B
/* 9648 */    MCD::OPC_FilterValue, 10, 15, 0, // Skip to: 9667
/* 9652 */    MCD::OPC_CheckPredicate, 26, 130, 20, // Skip to: 14906
/* 9656 */    MCD::OPC_CheckField, 19, 1, 0, 124, 20, // Skip to: 14906
/* 9662 */    MCD::OPC_Decode, 190, 5, 162, 2, // Opcode: COPY_S_H
/* 9667 */    MCD::OPC_FilterValue, 11, 54, 0, // Skip to: 9725
/* 9671 */    MCD::OPC_ExtractField, 18, 2,  // Inst{19-18} ...
/* 9674 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 9687
/* 9678 */    MCD::OPC_CheckPredicate, 26, 104, 20, // Skip to: 14906
/* 9682 */    MCD::OPC_Decode, 191, 5, 163, 2, // Opcode: COPY_S_W
/* 9687 */    MCD::OPC_FilterValue, 2, 15, 0, // Skip to: 9706
/* 9691 */    MCD::OPC_CheckPredicate, 33, 91, 20, // Skip to: 14906
/* 9695 */    MCD::OPC_CheckField, 17, 1, 0, 85, 20, // Skip to: 14906
/* 9701 */    MCD::OPC_Decode, 189, 5, 164, 2, // Opcode: COPY_S_D
/* 9706 */    MCD::OPC_FilterValue, 3, 76, 20, // Skip to: 14906
/* 9710 */    MCD::OPC_CheckPredicate, 26, 72, 20, // Skip to: 14906
/* 9714 */    MCD::OPC_CheckField, 16, 2, 2, 66, 20, // Skip to: 14906
/* 9720 */    MCD::OPC_Decode, 241, 12, 165, 2, // Opcode: MOVE_V
/* 9725 */    MCD::OPC_FilterValue, 12, 9, 0, // Skip to: 9738
/* 9729 */    MCD::OPC_CheckPredicate, 26, 53, 20, // Skip to: 14906
/* 9733 */    MCD::OPC_Decode, 192, 5, 161, 2, // Opcode: COPY_U_B
/* 9738 */    MCD::OPC_FilterValue, 14, 15, 0, // Skip to: 9757
/* 9742 */    MCD::OPC_CheckPredicate, 26, 40, 20, // Skip to: 14906
/* 9746 */    MCD::OPC_CheckField, 19, 1, 0, 34, 20, // Skip to: 14906
/* 9752 */    MCD::OPC_Decode, 193, 5, 162, 2, // Opcode: COPY_U_H
/* 9757 */    MCD::OPC_FilterValue, 15, 15, 0, // Skip to: 9776
/* 9761 */    MCD::OPC_CheckPredicate, 33, 21, 20, // Skip to: 14906
/* 9765 */    MCD::OPC_CheckField, 18, 2, 0, 15, 20, // Skip to: 14906
/* 9771 */    MCD::OPC_Decode, 194, 5, 163, 2, // Opcode: COPY_U_W
/* 9776 */    MCD::OPC_FilterValue, 16, 9, 0, // Skip to: 9789
/* 9780 */    MCD::OPC_CheckPredicate, 26, 2, 20, // Skip to: 14906
/* 9784 */    MCD::OPC_Decode, 138, 10, 166, 2, // Opcode: INSERT_B
/* 9789 */    MCD::OPC_FilterValue, 18, 15, 0, // Skip to: 9808
/* 9793 */    MCD::OPC_CheckPredicate, 26, 245, 19, // Skip to: 14906
/* 9797 */    MCD::OPC_CheckField, 19, 1, 0, 239, 19, // Skip to: 14906
/* 9803 */    MCD::OPC_Decode, 150, 10, 167, 2, // Opcode: INSERT_H
/* 9808 */    MCD::OPC_FilterValue, 19, 35, 0, // Skip to: 9847
/* 9812 */    MCD::OPC_ExtractField, 18, 2,  // Inst{19-18} ...
/* 9815 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 9828
/* 9819 */    MCD::OPC_CheckPredicate, 26, 219, 19, // Skip to: 14906
/* 9823 */    MCD::OPC_Decode, 153, 10, 168, 2, // Opcode: INSERT_W
/* 9828 */    MCD::OPC_FilterValue, 2, 210, 19, // Skip to: 14906
/* 9832 */    MCD::OPC_CheckPredicate, 33, 206, 19, // Skip to: 14906
/* 9836 */    MCD::OPC_CheckField, 17, 1, 0, 200, 19, // Skip to: 14906
/* 9842 */    MCD::OPC_Decode, 141, 10, 169, 2, // Opcode: INSERT_D
/* 9847 */    MCD::OPC_FilterValue, 20, 9, 0, // Skip to: 9860
/* 9851 */    MCD::OPC_CheckPredicate, 26, 187, 19, // Skip to: 14906
/* 9855 */    MCD::OPC_Decode, 157, 10, 170, 2, // Opcode: INSVE_B
/* 9860 */    MCD::OPC_FilterValue, 22, 15, 0, // Skip to: 9879
/* 9864 */    MCD::OPC_CheckPredicate, 26, 174, 19, // Skip to: 14906
/* 9868 */    MCD::OPC_CheckField, 19, 1, 0, 168, 19, // Skip to: 14906
/* 9874 */    MCD::OPC_Decode, 159, 10, 170, 2, // Opcode: INSVE_H
/* 9879 */    MCD::OPC_FilterValue, 23, 159, 19, // Skip to: 14906
/* 9883 */    MCD::OPC_ExtractField, 18, 2,  // Inst{19-18} ...
/* 9886 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 9899
/* 9890 */    MCD::OPC_CheckPredicate, 26, 148, 19, // Skip to: 14906
/* 9894 */    MCD::OPC_Decode, 160, 10, 170, 2, // Opcode: INSVE_W
/* 9899 */    MCD::OPC_FilterValue, 2, 139, 19, // Skip to: 14906
/* 9903 */    MCD::OPC_CheckPredicate, 26, 135, 19, // Skip to: 14906
/* 9907 */    MCD::OPC_CheckField, 17, 1, 0, 129, 19, // Skip to: 14906
/* 9913 */    MCD::OPC_Decode, 158, 10, 170, 2, // Opcode: INSVE_D
/* 9918 */    MCD::OPC_FilterValue, 26, 163, 1, // Skip to: 10341
/* 9922 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 9925 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 9938
/* 9929 */    MCD::OPC_CheckPredicate, 26, 109, 19, // Skip to: 14906
/* 9933 */    MCD::OPC_Decode, 201, 8, 131, 2, // Opcode: FCAF_W
/* 9938 */    MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 9951
/* 9942 */    MCD::OPC_CheckPredicate, 26, 96, 19, // Skip to: 14906
/* 9946 */    MCD::OPC_Decode, 200, 8, 132, 2, // Opcode: FCAF_D
/* 9951 */    MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 9964
/* 9955 */    MCD::OPC_CheckPredicate, 26, 83, 19, // Skip to: 14906
/* 9959 */    MCD::OPC_Decode, 228, 8, 131, 2, // Opcode: FCUN_W
/* 9964 */    MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 9977
/* 9968 */    MCD::OPC_CheckPredicate, 26, 70, 19, // Skip to: 14906
/* 9972 */    MCD::OPC_Decode, 227, 8, 132, 2, // Opcode: FCUN_D
/* 9977 */    MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 9990
/* 9981 */    MCD::OPC_CheckPredicate, 26, 57, 19, // Skip to: 14906
/* 9985 */    MCD::OPC_Decode, 203, 8, 131, 2, // Opcode: FCEQ_W
/* 9990 */    MCD::OPC_FilterValue, 5, 9, 0, // Skip to: 10003
/* 9994 */    MCD::OPC_CheckPredicate, 26, 44, 19, // Skip to: 14906
/* 9998 */    MCD::OPC_Decode, 202, 8, 132, 2, // Opcode: FCEQ_D
/* 10003 */   MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 10016
/* 10007 */   MCD::OPC_CheckPredicate, 26, 31, 19, // Skip to: 14906
/* 10011 */   MCD::OPC_Decode, 220, 8, 131, 2, // Opcode: FCUEQ_W
/* 10016 */   MCD::OPC_FilterValue, 7, 9, 0, // Skip to: 10029
/* 10020 */   MCD::OPC_CheckPredicate, 26, 18, 19, // Skip to: 14906
/* 10024 */   MCD::OPC_Decode, 219, 8, 132, 2, // Opcode: FCUEQ_D
/* 10029 */   MCD::OPC_FilterValue, 8, 9, 0, // Skip to: 10042
/* 10033 */   MCD::OPC_CheckPredicate, 26, 5, 19, // Skip to: 14906
/* 10037 */   MCD::OPC_Decode, 209, 8, 131, 2, // Opcode: FCLT_W
/* 10042 */   MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 10055
/* 10046 */   MCD::OPC_CheckPredicate, 26, 248, 18, // Skip to: 14906
/* 10050 */   MCD::OPC_Decode, 208, 8, 132, 2, // Opcode: FCLT_D
/* 10055 */   MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 10068
/* 10059 */   MCD::OPC_CheckPredicate, 26, 235, 18, // Skip to: 14906
/* 10063 */   MCD::OPC_Decode, 224, 8, 131, 2, // Opcode: FCULT_W
/* 10068 */   MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 10081
/* 10072 */   MCD::OPC_CheckPredicate, 26, 222, 18, // Skip to: 14906
/* 10076 */   MCD::OPC_Decode, 223, 8, 132, 2, // Opcode: FCULT_D
/* 10081 */   MCD::OPC_FilterValue, 12, 9, 0, // Skip to: 10094
/* 10085 */   MCD::OPC_CheckPredicate, 26, 209, 18, // Skip to: 14906
/* 10089 */   MCD::OPC_Decode, 207, 8, 131, 2, // Opcode: FCLE_W
/* 10094 */   MCD::OPC_FilterValue, 13, 9, 0, // Skip to: 10107
/* 10098 */   MCD::OPC_CheckPredicate, 26, 196, 18, // Skip to: 14906
/* 10102 */   MCD::OPC_Decode, 206, 8, 132, 2, // Opcode: FCLE_D
/* 10107 */   MCD::OPC_FilterValue, 14, 9, 0, // Skip to: 10120
/* 10111 */   MCD::OPC_CheckPredicate, 26, 183, 18, // Skip to: 14906
/* 10115 */   MCD::OPC_Decode, 222, 8, 131, 2, // Opcode: FCULE_W
/* 10120 */   MCD::OPC_FilterValue, 15, 9, 0, // Skip to: 10133
/* 10124 */   MCD::OPC_CheckPredicate, 26, 170, 18, // Skip to: 14906
/* 10128 */   MCD::OPC_Decode, 221, 8, 132, 2, // Opcode: FCULE_D
/* 10133 */   MCD::OPC_FilterValue, 16, 9, 0, // Skip to: 10146
/* 10137 */   MCD::OPC_CheckPredicate, 26, 157, 18, // Skip to: 14906
/* 10141 */   MCD::OPC_Decode, 189, 9, 131, 2, // Opcode: FSAF_W
/* 10146 */   MCD::OPC_FilterValue, 17, 9, 0, // Skip to: 10159
/* 10150 */   MCD::OPC_CheckPredicate, 26, 144, 18, // Skip to: 14906
/* 10154 */   MCD::OPC_Decode, 188, 9, 132, 2, // Opcode: FSAF_D
/* 10159 */   MCD::OPC_FilterValue, 18, 9, 0, // Skip to: 10172
/* 10163 */   MCD::OPC_CheckPredicate, 26, 131, 18, // Skip to: 14906
/* 10167 */   MCD::OPC_Decode, 225, 9, 131, 2, // Opcode: FSUN_W
/* 10172 */   MCD::OPC_FilterValue, 19, 9, 0, // Skip to: 10185
/* 10176 */   MCD::OPC_CheckPredicate, 26, 118, 18, // Skip to: 14906
/* 10180 */   MCD::OPC_Decode, 224, 9, 132, 2, // Opcode: FSUN_D
/* 10185 */   MCD::OPC_FilterValue, 20, 9, 0, // Skip to: 10198
/* 10189 */   MCD::OPC_CheckPredicate, 26, 105, 18, // Skip to: 14906
/* 10193 */   MCD::OPC_Decode, 191, 9, 131, 2, // Opcode: FSEQ_W
/* 10198 */   MCD::OPC_FilterValue, 21, 9, 0, // Skip to: 10211
/* 10202 */   MCD::OPC_CheckPredicate, 26, 92, 18, // Skip to: 14906
/* 10206 */   MCD::OPC_Decode, 190, 9, 132, 2, // Opcode: FSEQ_D
/* 10211 */   MCD::OPC_FilterValue, 22, 9, 0, // Skip to: 10224
/* 10215 */   MCD::OPC_CheckPredicate, 26, 79, 18, // Skip to: 14906
/* 10219 */   MCD::OPC_Decode, 217, 9, 131, 2, // Opcode: FSUEQ_W
/* 10224 */   MCD::OPC_FilterValue, 23, 9, 0, // Skip to: 10237
/* 10228 */   MCD::OPC_CheckPredicate, 26, 66, 18, // Skip to: 14906
/* 10232 */   MCD::OPC_Decode, 216, 9, 132, 2, // Opcode: FSUEQ_D
/* 10237 */   MCD::OPC_FilterValue, 24, 9, 0, // Skip to: 10250
/* 10241 */   MCD::OPC_CheckPredicate, 26, 53, 18, // Skip to: 14906
/* 10245 */   MCD::OPC_Decode, 195, 9, 131, 2, // Opcode: FSLT_W
/* 10250 */   MCD::OPC_FilterValue, 25, 9, 0, // Skip to: 10263
/* 10254 */   MCD::OPC_CheckPredicate, 26, 40, 18, // Skip to: 14906
/* 10258 */   MCD::OPC_Decode, 194, 9, 132, 2, // Opcode: FSLT_D
/* 10263 */   MCD::OPC_FilterValue, 26, 9, 0, // Skip to: 10276
/* 10267 */   MCD::OPC_CheckPredicate, 26, 27, 18, // Skip to: 14906
/* 10271 */   MCD::OPC_Decode, 221, 9, 131, 2, // Opcode: FSULT_W
/* 10276 */   MCD::OPC_FilterValue, 27, 9, 0, // Skip to: 10289
/* 10280 */   MCD::OPC_CheckPredicate, 26, 14, 18, // Skip to: 14906
/* 10284 */   MCD::OPC_Decode, 220, 9, 132, 2, // Opcode: FSULT_D
/* 10289 */   MCD::OPC_FilterValue, 28, 9, 0, // Skip to: 10302
/* 10293 */   MCD::OPC_CheckPredicate, 26, 1, 18, // Skip to: 14906
/* 10297 */   MCD::OPC_Decode, 193, 9, 131, 2, // Opcode: FSLE_W
/* 10302 */   MCD::OPC_FilterValue, 29, 9, 0, // Skip to: 10315
/* 10306 */   MCD::OPC_CheckPredicate, 26, 244, 17, // Skip to: 14906
/* 10310 */   MCD::OPC_Decode, 192, 9, 132, 2, // Opcode: FSLE_D
/* 10315 */   MCD::OPC_FilterValue, 30, 9, 0, // Skip to: 10328
/* 10319 */   MCD::OPC_CheckPredicate, 26, 231, 17, // Skip to: 14906
/* 10323 */   MCD::OPC_Decode, 219, 9, 131, 2, // Opcode: FSULE_W
/* 10328 */   MCD::OPC_FilterValue, 31, 222, 17, // Skip to: 14906
/* 10332 */   MCD::OPC_CheckPredicate, 26, 218, 17, // Skip to: 14906
/* 10336 */   MCD::OPC_Decode, 218, 9, 132, 2, // Opcode: FSULE_D
/* 10341 */   MCD::OPC_FilterValue, 27, 85, 1, // Skip to: 10686
/* 10345 */   MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 10348 */   MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 10361
/* 10352 */   MCD::OPC_CheckPredicate, 26, 198, 17, // Skip to: 14906
/* 10356 */   MCD::OPC_Decode, 199, 8, 131, 2, // Opcode: FADD_W
/* 10361 */   MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 10374
/* 10365 */   MCD::OPC_CheckPredicate, 26, 185, 17, // Skip to: 14906
/* 10369 */   MCD::OPC_Decode, 191, 8, 132, 2, // Opcode: FADD_D
/* 10374 */   MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 10387
/* 10378 */   MCD::OPC_CheckPredicate, 26, 172, 17, // Skip to: 14906
/* 10382 */   MCD::OPC_Decode, 215, 9, 131, 2, // Opcode: FSUB_W
/* 10387 */   MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 10400
/* 10391 */   MCD::OPC_CheckPredicate, 26, 159, 17, // Skip to: 14906
/* 10395 */   MCD::OPC_Decode, 207, 9, 132, 2, // Opcode: FSUB_D
/* 10400 */   MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 10413
/* 10404 */   MCD::OPC_CheckPredicate, 26, 146, 17, // Skip to: 14906
/* 10408 */   MCD::OPC_Decode, 174, 9, 131, 2, // Opcode: FMUL_W
/* 10413 */   MCD::OPC_FilterValue, 5, 9, 0, // Skip to: 10426
/* 10417 */   MCD::OPC_CheckPredicate, 26, 133, 17, // Skip to: 14906
/* 10421 */   MCD::OPC_Decode, 166, 9, 132, 2, // Opcode: FMUL_D
/* 10426 */   MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 10439
/* 10430 */   MCD::OPC_CheckPredicate, 26, 120, 17, // Skip to: 14906
/* 10434 */   MCD::OPC_Decode, 237, 8, 131, 2, // Opcode: FDIV_W
/* 10439 */   MCD::OPC_FilterValue, 7, 9, 0, // Skip to: 10452
/* 10443 */   MCD::OPC_CheckPredicate, 26, 107, 17, // Skip to: 14906
/* 10447 */   MCD::OPC_Decode, 229, 8, 132, 2, // Opcode: FDIV_D
/* 10452 */   MCD::OPC_FilterValue, 8, 9, 0, // Skip to: 10465
/* 10456 */   MCD::OPC_CheckPredicate, 26, 94, 17, // Skip to: 14906
/* 10460 */   MCD::OPC_Decode, 148, 9, 135, 2, // Opcode: FMADD_W
/* 10465 */   MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 10478
/* 10469 */   MCD::OPC_CheckPredicate, 26, 81, 17, // Skip to: 14906
/* 10473 */   MCD::OPC_Decode, 147, 9, 136, 2, // Opcode: FMADD_D
/* 10478 */   MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 10491
/* 10482 */   MCD::OPC_CheckPredicate, 26, 68, 17, // Skip to: 14906
/* 10486 */   MCD::OPC_Decode, 165, 9, 135, 2, // Opcode: FMSUB_W
/* 10491 */   MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 10504
/* 10495 */   MCD::OPC_CheckPredicate, 26, 55, 17, // Skip to: 14906
/* 10499 */   MCD::OPC_Decode, 164, 9, 136, 2, // Opcode: FMSUB_D
/* 10504 */   MCD::OPC_FilterValue, 14, 9, 0, // Skip to: 10517
/* 10508 */   MCD::OPC_CheckPredicate, 26, 42, 17, // Skip to: 14906
/* 10512 */   MCD::OPC_Decode, 242, 8, 131, 2, // Opcode: FEXP2_W
/* 10517 */   MCD::OPC_FilterValue, 15, 9, 0, // Skip to: 10530
/* 10521 */   MCD::OPC_CheckPredicate, 26, 29, 17, // Skip to: 14906
/* 10525 */   MCD::OPC_Decode, 240, 8, 132, 2, // Opcode: FEXP2_D
/* 10530 */   MCD::OPC_FilterValue, 16, 9, 0, // Skip to: 10543
/* 10534 */   MCD::OPC_CheckPredicate, 26, 16, 17, // Skip to: 14906
/* 10538 */   MCD::OPC_Decode, 238, 8, 171, 2, // Opcode: FEXDO_H
/* 10543 */   MCD::OPC_FilterValue, 17, 9, 0, // Skip to: 10556
/* 10547 */   MCD::OPC_CheckPredicate, 26, 3, 17, // Skip to: 14906
/* 10551 */   MCD::OPC_Decode, 239, 8, 172, 2, // Opcode: FEXDO_W
/* 10556 */   MCD::OPC_FilterValue, 20, 9, 0, // Skip to: 10569
/* 10560 */   MCD::OPC_CheckPredicate, 26, 246, 16, // Skip to: 14906
/* 10564 */   MCD::OPC_Decode, 230, 9, 171, 2, // Opcode: FTQ_H
/* 10569 */   MCD::OPC_FilterValue, 21, 9, 0, // Skip to: 10582
/* 10573 */   MCD::OPC_CheckPredicate, 26, 233, 16, // Skip to: 14906
/* 10577 */   MCD::OPC_Decode, 231, 9, 172, 2, // Opcode: FTQ_W
/* 10582 */   MCD::OPC_FilterValue, 24, 9, 0, // Skip to: 10595
/* 10586 */   MCD::OPC_CheckPredicate, 26, 220, 16, // Skip to: 14906
/* 10590 */   MCD::OPC_Decode, 156, 9, 131, 2, // Opcode: FMIN_W
/* 10595 */   MCD::OPC_FilterValue, 25, 9, 0, // Skip to: 10608
/* 10599 */   MCD::OPC_CheckPredicate, 26, 207, 16, // Skip to: 14906
/* 10603 */   MCD::OPC_Decode, 155, 9, 132, 2, // Opcode: FMIN_D
/* 10608 */   MCD::OPC_FilterValue, 26, 9, 0, // Skip to: 10621
/* 10612 */   MCD::OPC_CheckPredicate, 26, 194, 16, // Skip to: 14906
/* 10616 */   MCD::OPC_Decode, 154, 9, 131, 2, // Opcode: FMIN_A_W
/* 10621 */   MCD::OPC_FilterValue, 27, 9, 0, // Skip to: 10634
/* 10625 */   MCD::OPC_CheckPredicate, 26, 181, 16, // Skip to: 14906
/* 10629 */   MCD::OPC_Decode, 153, 9, 132, 2, // Opcode: FMIN_A_D
/* 10634 */   MCD::OPC_FilterValue, 28, 9, 0, // Skip to: 10647
/* 10638 */   MCD::OPC_CheckPredicate, 26, 168, 16, // Skip to: 14906
/* 10642 */   MCD::OPC_Decode, 152, 9, 131, 2, // Opcode: FMAX_W
/* 10647 */   MCD::OPC_FilterValue, 29, 9, 0, // Skip to: 10660
/* 10651 */   MCD::OPC_CheckPredicate, 26, 155, 16, // Skip to: 14906
/* 10655 */   MCD::OPC_Decode, 151, 9, 132, 2, // Opcode: FMAX_D
/* 10660 */   MCD::OPC_FilterValue, 30, 9, 0, // Skip to: 10673
/* 10664 */   MCD::OPC_CheckPredicate, 26, 142, 16, // Skip to: 14906
/* 10668 */   MCD::OPC_Decode, 150, 9, 131, 2, // Opcode: FMAX_A_W
/* 10673 */   MCD::OPC_FilterValue, 31, 133, 16, // Skip to: 14906
/* 10677 */   MCD::OPC_CheckPredicate, 26, 129, 16, // Skip to: 14906
/* 10681 */   MCD::OPC_Decode, 149, 9, 132, 2, // Opcode: FMAX_A_D
/* 10686 */   MCD::OPC_FilterValue, 28, 59, 1, // Skip to: 11005
/* 10690 */   MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 10693 */   MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 10706
/* 10697 */   MCD::OPC_CheckPredicate, 26, 109, 16, // Skip to: 14906
/* 10701 */   MCD::OPC_Decode, 218, 8, 131, 2, // Opcode: FCOR_W
/* 10706 */   MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 10719
/* 10710 */   MCD::OPC_CheckPredicate, 26, 96, 16, // Skip to: 14906
/* 10714 */   MCD::OPC_Decode, 217, 8, 132, 2, // Opcode: FCOR_D
/* 10719 */   MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 10732
/* 10723 */   MCD::OPC_CheckPredicate, 26, 83, 16, // Skip to: 14906
/* 10727 */   MCD::OPC_Decode, 226, 8, 131, 2, // Opcode: FCUNE_W
/* 10732 */   MCD::OPC_FilterValue, 5, 9, 0, // Skip to: 10745
/* 10736 */   MCD::OPC_CheckPredicate, 26, 70, 16, // Skip to: 14906
/* 10740 */   MCD::OPC_Decode, 225, 8, 132, 2, // Opcode: FCUNE_D
/* 10745 */   MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 10758
/* 10749 */   MCD::OPC_CheckPredicate, 26, 57, 16, // Skip to: 14906
/* 10753 */   MCD::OPC_Decode, 216, 8, 131, 2, // Opcode: FCNE_W
/* 10758 */   MCD::OPC_FilterValue, 7, 9, 0, // Skip to: 10771
/* 10762 */   MCD::OPC_CheckPredicate, 26, 44, 16, // Skip to: 14906
/* 10766 */   MCD::OPC_Decode, 215, 8, 132, 2, // Opcode: FCNE_D
/* 10771 */   MCD::OPC_FilterValue, 8, 9, 0, // Skip to: 10784
/* 10775 */   MCD::OPC_CheckPredicate, 26, 31, 16, // Skip to: 14906
/* 10779 */   MCD::OPC_Decode, 135, 14, 130, 2, // Opcode: MUL_Q_H
/* 10784 */   MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 10797
/* 10788 */   MCD::OPC_CheckPredicate, 26, 18, 16, // Skip to: 14906
/* 10792 */   MCD::OPC_Decode, 136, 14, 131, 2, // Opcode: MUL_Q_W
/* 10797 */   MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 10810
/* 10801 */   MCD::OPC_CheckPredicate, 26, 5, 16, // Skip to: 14906
/* 10805 */   MCD::OPC_Decode, 128, 12, 134, 2, // Opcode: MADD_Q_H
/* 10810 */   MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 10823
/* 10814 */   MCD::OPC_CheckPredicate, 26, 248, 15, // Skip to: 14906
/* 10818 */   MCD::OPC_Decode, 129, 12, 135, 2, // Opcode: MADD_Q_W
/* 10823 */   MCD::OPC_FilterValue, 12, 9, 0, // Skip to: 10836
/* 10827 */   MCD::OPC_CheckPredicate, 26, 235, 15, // Skip to: 14906
/* 10831 */   MCD::OPC_Decode, 179, 13, 134, 2, // Opcode: MSUB_Q_H
/* 10836 */   MCD::OPC_FilterValue, 13, 9, 0, // Skip to: 10849
/* 10840 */   MCD::OPC_CheckPredicate, 26, 222, 15, // Skip to: 14906
/* 10844 */   MCD::OPC_Decode, 180, 13, 135, 2, // Opcode: MSUB_Q_W
/* 10849 */   MCD::OPC_FilterValue, 18, 9, 0, // Skip to: 10862
/* 10853 */   MCD::OPC_CheckPredicate, 26, 209, 15, // Skip to: 14906
/* 10857 */   MCD::OPC_Decode, 199, 9, 131, 2, // Opcode: FSOR_W
/* 10862 */   MCD::OPC_FilterValue, 19, 9, 0, // Skip to: 10875
/* 10866 */   MCD::OPC_CheckPredicate, 26, 196, 15, // Skip to: 14906
/* 10870 */   MCD::OPC_Decode, 198, 9, 132, 2, // Opcode: FSOR_D
/* 10875 */   MCD::OPC_FilterValue, 20, 9, 0, // Skip to: 10888
/* 10879 */   MCD::OPC_CheckPredicate, 26, 183, 15, // Skip to: 14906
/* 10883 */   MCD::OPC_Decode, 223, 9, 131, 2, // Opcode: FSUNE_W
/* 10888 */   MCD::OPC_FilterValue, 21, 9, 0, // Skip to: 10901
/* 10892 */   MCD::OPC_CheckPredicate, 26, 170, 15, // Skip to: 14906
/* 10896 */   MCD::OPC_Decode, 222, 9, 132, 2, // Opcode: FSUNE_D
/* 10901 */   MCD::OPC_FilterValue, 22, 9, 0, // Skip to: 10914
/* 10905 */   MCD::OPC_CheckPredicate, 26, 157, 15, // Skip to: 14906
/* 10909 */   MCD::OPC_Decode, 197, 9, 131, 2, // Opcode: FSNE_W
/* 10914 */   MCD::OPC_FilterValue, 23, 9, 0, // Skip to: 10927
/* 10918 */   MCD::OPC_CheckPredicate, 26, 144, 15, // Skip to: 14906
/* 10922 */   MCD::OPC_Decode, 196, 9, 132, 2, // Opcode: FSNE_D
/* 10927 */   MCD::OPC_FilterValue, 24, 9, 0, // Skip to: 10940
/* 10931 */   MCD::OPC_CheckPredicate, 26, 131, 15, // Skip to: 14906
/* 10935 */   MCD::OPC_Decode, 239, 13, 130, 2, // Opcode: MULR_Q_H
/* 10940 */   MCD::OPC_FilterValue, 25, 9, 0, // Skip to: 10953
/* 10944 */   MCD::OPC_CheckPredicate, 26, 118, 15, // Skip to: 14906
/* 10948 */   MCD::OPC_Decode, 240, 13, 131, 2, // Opcode: MULR_Q_W
/* 10953 */   MCD::OPC_FilterValue, 26, 9, 0, // Skip to: 10966
/* 10957 */   MCD::OPC_CheckPredicate, 26, 105, 15, // Skip to: 14906
/* 10961 */   MCD::OPC_Decode, 240, 11, 134, 2, // Opcode: MADDR_Q_H
/* 10966 */   MCD::OPC_FilterValue, 27, 9, 0, // Skip to: 10979
/* 10970 */   MCD::OPC_CheckPredicate, 26, 92, 15, // Skip to: 14906
/* 10974 */   MCD::OPC_Decode, 241, 11, 135, 2, // Opcode: MADDR_Q_W
/* 10979 */   MCD::OPC_FilterValue, 28, 9, 0, // Skip to: 10992
/* 10983 */   MCD::OPC_CheckPredicate, 26, 79, 15, // Skip to: 14906
/* 10987 */   MCD::OPC_Decode, 163, 13, 134, 2, // Opcode: MSUBR_Q_H
/* 10992 */   MCD::OPC_FilterValue, 29, 70, 15, // Skip to: 14906
/* 10996 */   MCD::OPC_CheckPredicate, 26, 66, 15, // Skip to: 14906
/* 11000 */   MCD::OPC_Decode, 164, 13, 135, 2, // Opcode: MSUBR_Q_W
/* 11005 */   MCD::OPC_FilterValue, 30, 220, 2, // Skip to: 11741
/* 11009 */   MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 11012 */   MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 11025
/* 11016 */   MCD::OPC_CheckPredicate, 26, 46, 15, // Skip to: 14906
/* 11020 */   MCD::OPC_Decode, 196, 1, 129, 2, // Opcode: AND_V
/* 11025 */   MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 11038
/* 11029 */   MCD::OPC_CheckPredicate, 26, 33, 15, // Skip to: 14906
/* 11033 */   MCD::OPC_Decode, 190, 14, 129, 2, // Opcode: OR_V
/* 11038 */   MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 11051
/* 11042 */   MCD::OPC_CheckPredicate, 26, 20, 15, // Skip to: 14906
/* 11046 */   MCD::OPC_Decode, 174, 14, 129, 2, // Opcode: NOR_V
/* 11051 */   MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 11064
/* 11055 */   MCD::OPC_CheckPredicate, 26, 7, 15, // Skip to: 14906
/* 11059 */   MCD::OPC_Decode, 219, 19, 129, 2, // Opcode: XOR_V
/* 11064 */   MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 11077
/* 11068 */   MCD::OPC_CheckPredicate, 26, 250, 14, // Skip to: 14906
/* 11072 */   MCD::OPC_Decode, 181, 3, 133, 2, // Opcode: BMNZ_V
/* 11077 */   MCD::OPC_FilterValue, 5, 9, 0, // Skip to: 11090
/* 11081 */   MCD::OPC_CheckPredicate, 26, 237, 14, // Skip to: 14906
/* 11085 */   MCD::OPC_Decode, 183, 3, 133, 2, // Opcode: BMZ_V
/* 11090 */   MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 11103
/* 11094 */   MCD::OPC_CheckPredicate, 26, 224, 14, // Skip to: 14906
/* 11098 */   MCD::OPC_Decode, 231, 3, 133, 2, // Opcode: BSEL_V
/* 11103 */   MCD::OPC_FilterValue, 24, 211, 0, // Skip to: 11318
/* 11107 */   MCD::OPC_ExtractField, 16, 5,  // Inst{20-16} ...
/* 11110 */   MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 11123
/* 11114 */   MCD::OPC_CheckPredicate, 26, 204, 14, // Skip to: 14906
/* 11118 */   MCD::OPC_Decode, 128, 9, 173, 2, // Opcode: FILL_B
/* 11123 */   MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 11136
/* 11127 */   MCD::OPC_CheckPredicate, 26, 191, 14, // Skip to: 14906
/* 11131 */   MCD::OPC_Decode, 132, 9, 174, 2, // Opcode: FILL_H
/* 11136 */   MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 11149
/* 11140 */   MCD::OPC_CheckPredicate, 26, 178, 14, // Skip to: 14906
/* 11144 */   MCD::OPC_Decode, 133, 9, 175, 2, // Opcode: FILL_W
/* 11149 */   MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 11162
/* 11153 */   MCD::OPC_CheckPredicate, 33, 165, 14, // Skip to: 14906
/* 11157 */   MCD::OPC_Decode, 129, 9, 176, 2, // Opcode: FILL_D
/* 11162 */   MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 11175
/* 11166 */   MCD::OPC_CheckPredicate, 26, 152, 14, // Skip to: 14906
/* 11170 */   MCD::OPC_Decode, 211, 14, 165, 2, // Opcode: PCNT_B
/* 11175 */   MCD::OPC_FilterValue, 5, 9, 0, // Skip to: 11188
/* 11179 */   MCD::OPC_CheckPredicate, 26, 139, 14, // Skip to: 14906
/* 11183 */   MCD::OPC_Decode, 213, 14, 177, 2, // Opcode: PCNT_H
/* 11188 */   MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 11201
/* 11192 */   MCD::OPC_CheckPredicate, 26, 126, 14, // Skip to: 14906
/* 11196 */   MCD::OPC_Decode, 214, 14, 178, 2, // Opcode: PCNT_W
/* 11201 */   MCD::OPC_FilterValue, 7, 9, 0, // Skip to: 11214
/* 11205 */   MCD::OPC_CheckPredicate, 26, 113, 14, // Skip to: 14906
/* 11209 */   MCD::OPC_Decode, 212, 14, 179, 2, // Opcode: PCNT_D
/* 11214 */   MCD::OPC_FilterValue, 8, 9, 0, // Skip to: 11227
/* 11218 */   MCD::OPC_CheckPredicate, 26, 100, 14, // Skip to: 14906
/* 11222 */   MCD::OPC_Decode, 148, 14, 165, 2, // Opcode: NLOC_B
/* 11227 */   MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 11240
/* 11231 */   MCD::OPC_CheckPredicate, 26, 87, 14, // Skip to: 14906
/* 11235 */   MCD::OPC_Decode, 150, 14, 177, 2, // Opcode: NLOC_H
/* 11240 */   MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 11253
/* 11244 */   MCD::OPC_CheckPredicate, 26, 74, 14, // Skip to: 14906
/* 11248 */   MCD::OPC_Decode, 151, 14, 178, 2, // Opcode: NLOC_W
/* 11253 */   MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 11266
/* 11257 */   MCD::OPC_CheckPredicate, 26, 61, 14, // Skip to: 14906
/* 11261 */   MCD::OPC_Decode, 149, 14, 179, 2, // Opcode: NLOC_D
/* 11266 */   MCD::OPC_FilterValue, 12, 9, 0, // Skip to: 11279
/* 11270 */   MCD::OPC_CheckPredicate, 26, 48, 14, // Skip to: 14906
/* 11274 */   MCD::OPC_Decode, 152, 14, 165, 2, // Opcode: NLZC_B
/* 11279 */   MCD::OPC_FilterValue, 13, 9, 0, // Skip to: 11292
/* 11283 */   MCD::OPC_CheckPredicate, 26, 35, 14, // Skip to: 14906
/* 11287 */   MCD::OPC_Decode, 154, 14, 177, 2, // Opcode: NLZC_H
/* 11292 */   MCD::OPC_FilterValue, 14, 9, 0, // Skip to: 11305
/* 11296 */   MCD::OPC_CheckPredicate, 26, 22, 14, // Skip to: 14906
/* 11300 */   MCD::OPC_Decode, 155, 14, 178, 2, // Opcode: NLZC_W
/* 11305 */   MCD::OPC_FilterValue, 15, 13, 14, // Skip to: 14906
/* 11309 */   MCD::OPC_CheckPredicate, 26, 9, 14, // Skip to: 14906
/* 11313 */   MCD::OPC_Decode, 153, 14, 179, 2, // Opcode: NLZC_D
/* 11318 */   MCD::OPC_FilterValue, 25, 0, 14, // Skip to: 14906
/* 11322 */   MCD::OPC_ExtractField, 16, 5,  // Inst{20-16} ...
/* 11325 */   MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 11338
/* 11329 */   MCD::OPC_CheckPredicate, 26, 245, 13, // Skip to: 14906
/* 11333 */   MCD::OPC_Decode, 205, 8, 178, 2, // Opcode: FCLASS_W
/* 11338 */   MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 11351
/* 11342 */   MCD::OPC_CheckPredicate, 26, 232, 13, // Skip to: 14906
/* 11346 */   MCD::OPC_Decode, 204, 8, 179, 2, // Opcode: FCLASS_D
/* 11351 */   MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 11364
/* 11355 */   MCD::OPC_CheckPredicate, 26, 219, 13, // Skip to: 14906
/* 11359 */   MCD::OPC_Decode, 233, 9, 178, 2, // Opcode: FTRUNC_S_W
/* 11364 */   MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 11377
/* 11368 */   MCD::OPC_CheckPredicate, 26, 206, 13, // Skip to: 14906
/* 11372 */   MCD::OPC_Decode, 232, 9, 179, 2, // Opcode: FTRUNC_S_D
/* 11377 */   MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 11390
/* 11381 */   MCD::OPC_CheckPredicate, 26, 193, 13, // Skip to: 14906
/* 11385 */   MCD::OPC_Decode, 235, 9, 178, 2, // Opcode: FTRUNC_U_W
/* 11390 */   MCD::OPC_FilterValue, 5, 9, 0, // Skip to: 11403
/* 11394 */   MCD::OPC_CheckPredicate, 26, 180, 13, // Skip to: 14906
/* 11398 */   MCD::OPC_Decode, 234, 9, 179, 2, // Opcode: FTRUNC_U_D
/* 11403 */   MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 11416
/* 11407 */   MCD::OPC_CheckPredicate, 26, 167, 13, // Skip to: 14906
/* 11411 */   MCD::OPC_Decode, 206, 9, 178, 2, // Opcode: FSQRT_W
/* 11416 */   MCD::OPC_FilterValue, 7, 9, 0, // Skip to: 11429
/* 11420 */   MCD::OPC_CheckPredicate, 26, 154, 13, // Skip to: 14906
/* 11424 */   MCD::OPC_Decode, 200, 9, 179, 2, // Opcode: FSQRT_D
/* 11429 */   MCD::OPC_FilterValue, 8, 9, 0, // Skip to: 11442
/* 11433 */   MCD::OPC_CheckPredicate, 26, 141, 13, // Skip to: 14906
/* 11437 */   MCD::OPC_Decode, 187, 9, 178, 2, // Opcode: FRSQRT_W
/* 11442 */   MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 11455
/* 11446 */   MCD::OPC_CheckPredicate, 26, 128, 13, // Skip to: 14906
/* 11450 */   MCD::OPC_Decode, 186, 9, 179, 2, // Opcode: FRSQRT_D
/* 11455 */   MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 11468
/* 11459 */   MCD::OPC_CheckPredicate, 26, 115, 13, // Skip to: 14906
/* 11463 */   MCD::OPC_Decode, 183, 9, 178, 2, // Opcode: FRCP_W
/* 11468 */   MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 11481
/* 11472 */   MCD::OPC_CheckPredicate, 26, 102, 13, // Skip to: 14906
/* 11476 */   MCD::OPC_Decode, 182, 9, 179, 2, // Opcode: FRCP_D
/* 11481 */   MCD::OPC_FilterValue, 12, 9, 0, // Skip to: 11494
/* 11485 */   MCD::OPC_CheckPredicate, 26, 89, 13, // Skip to: 14906
/* 11489 */   MCD::OPC_Decode, 185, 9, 178, 2, // Opcode: FRINT_W
/* 11494 */   MCD::OPC_FilterValue, 13, 9, 0, // Skip to: 11507
/* 11498 */   MCD::OPC_CheckPredicate, 26, 76, 13, // Skip to: 14906
/* 11502 */   MCD::OPC_Decode, 184, 9, 179, 2, // Opcode: FRINT_D
/* 11507 */   MCD::OPC_FilterValue, 14, 9, 0, // Skip to: 11520
/* 11511 */   MCD::OPC_CheckPredicate, 26, 63, 13, // Skip to: 14906
/* 11515 */   MCD::OPC_Decode, 135, 9, 178, 2, // Opcode: FLOG2_W
/* 11520 */   MCD::OPC_FilterValue, 15, 9, 0, // Skip to: 11533
/* 11524 */   MCD::OPC_CheckPredicate, 26, 50, 13, // Skip to: 14906
/* 11528 */   MCD::OPC_Decode, 134, 9, 179, 2, // Opcode: FLOG2_D
/* 11533 */   MCD::OPC_FilterValue, 16, 9, 0, // Skip to: 11546
/* 11537 */   MCD::OPC_CheckPredicate, 26, 37, 13, // Skip to: 14906
/* 11541 */   MCD::OPC_Decode, 245, 8, 180, 2, // Opcode: FEXUPL_W
/* 11546 */   MCD::OPC_FilterValue, 17, 9, 0, // Skip to: 11559
/* 11550 */   MCD::OPC_CheckPredicate, 26, 24, 13, // Skip to: 14906
/* 11554 */   MCD::OPC_Decode, 244, 8, 181, 2, // Opcode: FEXUPL_D
/* 11559 */   MCD::OPC_FilterValue, 18, 9, 0, // Skip to: 11572
/* 11563 */   MCD::OPC_CheckPredicate, 26, 11, 13, // Skip to: 14906
/* 11567 */   MCD::OPC_Decode, 247, 8, 180, 2, // Opcode: FEXUPR_W
/* 11572 */   MCD::OPC_FilterValue, 19, 9, 0, // Skip to: 11585
/* 11576 */   MCD::OPC_CheckPredicate, 26, 254, 12, // Skip to: 14906
/* 11580 */   MCD::OPC_Decode, 246, 8, 181, 2, // Opcode: FEXUPR_D
/* 11585 */   MCD::OPC_FilterValue, 20, 9, 0, // Skip to: 11598
/* 11589 */   MCD::OPC_CheckPredicate, 26, 241, 12, // Skip to: 14906
/* 11593 */   MCD::OPC_Decode, 253, 8, 180, 2, // Opcode: FFQL_W
/* 11598 */   MCD::OPC_FilterValue, 21, 9, 0, // Skip to: 11611
/* 11602 */   MCD::OPC_CheckPredicate, 26, 228, 12, // Skip to: 14906
/* 11606 */   MCD::OPC_Decode, 252, 8, 181, 2, // Opcode: FFQL_D
/* 11611 */   MCD::OPC_FilterValue, 22, 9, 0, // Skip to: 11624
/* 11615 */   MCD::OPC_CheckPredicate, 26, 215, 12, // Skip to: 14906
/* 11619 */   MCD::OPC_Decode, 255, 8, 180, 2, // Opcode: FFQR_W
/* 11624 */   MCD::OPC_FilterValue, 23, 9, 0, // Skip to: 11637
/* 11628 */   MCD::OPC_CheckPredicate, 26, 202, 12, // Skip to: 14906
/* 11632 */   MCD::OPC_Decode, 254, 8, 181, 2, // Opcode: FFQR_D
/* 11637 */   MCD::OPC_FilterValue, 24, 9, 0, // Skip to: 11650
/* 11641 */   MCD::OPC_CheckPredicate, 26, 189, 12, // Skip to: 14906
/* 11645 */   MCD::OPC_Decode, 227, 9, 178, 2, // Opcode: FTINT_S_W
/* 11650 */   MCD::OPC_FilterValue, 25, 9, 0, // Skip to: 11663
/* 11654 */   MCD::OPC_CheckPredicate, 26, 176, 12, // Skip to: 14906
/* 11658 */   MCD::OPC_Decode, 226, 9, 179, 2, // Opcode: FTINT_S_D
/* 11663 */   MCD::OPC_FilterValue, 26, 9, 0, // Skip to: 11676
/* 11667 */   MCD::OPC_CheckPredicate, 26, 163, 12, // Skip to: 14906
/* 11671 */   MCD::OPC_Decode, 229, 9, 178, 2, // Opcode: FTINT_U_W
/* 11676 */   MCD::OPC_FilterValue, 27, 9, 0, // Skip to: 11689
/* 11680 */   MCD::OPC_CheckPredicate, 26, 150, 12, // Skip to: 14906
/* 11684 */   MCD::OPC_Decode, 228, 9, 179, 2, // Opcode: FTINT_U_D
/* 11689 */   MCD::OPC_FilterValue, 28, 9, 0, // Skip to: 11702
/* 11693 */   MCD::OPC_CheckPredicate, 26, 137, 12, // Skip to: 14906
/* 11697 */   MCD::OPC_Decode, 249, 8, 178, 2, // Opcode: FFINT_S_W
/* 11702 */   MCD::OPC_FilterValue, 29, 9, 0, // Skip to: 11715
/* 11706 */   MCD::OPC_CheckPredicate, 26, 124, 12, // Skip to: 14906
/* 11710 */   MCD::OPC_Decode, 248, 8, 179, 2, // Opcode: FFINT_S_D
/* 11715 */   MCD::OPC_FilterValue, 30, 9, 0, // Skip to: 11728
/* 11719 */   MCD::OPC_CheckPredicate, 26, 111, 12, // Skip to: 14906
/* 11723 */   MCD::OPC_Decode, 251, 8, 178, 2, // Opcode: FFINT_U_W
/* 11728 */   MCD::OPC_FilterValue, 31, 102, 12, // Skip to: 14906
/* 11732 */   MCD::OPC_CheckPredicate, 26, 98, 12, // Skip to: 14906
/* 11736 */   MCD::OPC_Decode, 250, 8, 179, 2, // Opcode: FFINT_U_D
/* 11741 */   MCD::OPC_FilterValue, 32, 9, 0, // Skip to: 11754
/* 11745 */   MCD::OPC_CheckPredicate, 26, 85, 12, // Skip to: 14906
/* 11749 */   MCD::OPC_Decode, 244, 10, 182, 2, // Opcode: LD_B
/* 11754 */   MCD::OPC_FilterValue, 33, 9, 0, // Skip to: 11767
/* 11758 */   MCD::OPC_CheckPredicate, 26, 72, 12, // Skip to: 14906
/* 11762 */   MCD::OPC_Decode, 247, 10, 182, 2, // Opcode: LD_H
/* 11767 */   MCD::OPC_FilterValue, 34, 9, 0, // Skip to: 11780
/* 11771 */   MCD::OPC_CheckPredicate, 26, 59, 12, // Skip to: 14906
/* 11775 */   MCD::OPC_Decode, 249, 10, 182, 2, // Opcode: LD_W
/* 11780 */   MCD::OPC_FilterValue, 35, 9, 0, // Skip to: 11793
/* 11784 */   MCD::OPC_CheckPredicate, 26, 46, 12, // Skip to: 14906
/* 11788 */   MCD::OPC_Decode, 245, 10, 182, 2, // Opcode: LD_D
/* 11793 */   MCD::OPC_FilterValue, 36, 9, 0, // Skip to: 11806
/* 11797 */   MCD::OPC_CheckPredicate, 26, 33, 12, // Skip to: 14906
/* 11801 */   MCD::OPC_Decode, 234, 17, 182, 2, // Opcode: ST_B
/* 11806 */   MCD::OPC_FilterValue, 37, 9, 0, // Skip to: 11819
/* 11810 */   MCD::OPC_CheckPredicate, 26, 20, 12, // Skip to: 14906
/* 11814 */   MCD::OPC_Decode, 237, 17, 182, 2, // Opcode: ST_H
/* 11819 */   MCD::OPC_FilterValue, 38, 9, 0, // Skip to: 11832
/* 11823 */   MCD::OPC_CheckPredicate, 26, 7, 12, // Skip to: 14906
/* 11827 */   MCD::OPC_Decode, 238, 17, 182, 2, // Opcode: ST_W
/* 11832 */   MCD::OPC_FilterValue, 39, 254, 11, // Skip to: 14906
/* 11836 */   MCD::OPC_CheckPredicate, 26, 250, 11, // Skip to: 14906
/* 11840 */   MCD::OPC_Decode, 235, 17, 182, 2, // Opcode: ST_D
/* 11845 */   MCD::OPC_FilterValue, 31, 185, 10, // Skip to: 14594
/* 11849 */   MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 11852 */   MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 11865
/* 11856 */   MCD::OPC_CheckPredicate, 25, 230, 11, // Skip to: 14906
/* 11860 */   MCD::OPC_Decode, 153, 8, 183, 2, // Opcode: EXT
/* 11865 */   MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 11878
/* 11869 */   MCD::OPC_CheckPredicate, 25, 217, 11, // Skip to: 14906
/* 11873 */   MCD::OPC_Decode, 137, 10, 184, 2, // Opcode: INS
/* 11878 */   MCD::OPC_FilterValue, 10, 42, 0, // Skip to: 11924
/* 11882 */   MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 11885 */   MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 11898
/* 11889 */   MCD::OPC_CheckPredicate, 32, 197, 11, // Skip to: 14906
/* 11893 */   MCD::OPC_Decode, 204, 11, 185, 2, // Opcode: LWX
/* 11898 */   MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 11911
/* 11902 */   MCD::OPC_CheckPredicate, 32, 184, 11, // Skip to: 14906
/* 11906 */   MCD::OPC_Decode, 130, 11, 185, 2, // Opcode: LHX
/* 11911 */   MCD::OPC_FilterValue, 6, 175, 11, // Skip to: 14906
/* 11915 */   MCD::OPC_CheckPredicate, 32, 171, 11, // Skip to: 14906
/* 11919 */   MCD::OPC_Decode, 214, 10, 185, 2, // Opcode: LBUX
/* 11924 */   MCD::OPC_FilterValue, 12, 15, 0, // Skip to: 11943
/* 11928 */   MCD::OPC_CheckPredicate, 32, 158, 11, // Skip to: 14906
/* 11932 */   MCD::OPC_CheckField, 6, 10, 0, 152, 11, // Skip to: 14906
/* 11938 */   MCD::OPC_Decode, 156, 10, 186, 2, // Opcode: INSV
/* 11943 */   MCD::OPC_FilterValue, 16, 57, 1, // Skip to: 12260
/* 11947 */   MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 11950 */   MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 11963
/* 11954 */   MCD::OPC_CheckPredicate, 32, 132, 11, // Skip to: 14906
/* 11958 */   MCD::OPC_Decode, 152, 1, 187, 2, // Opcode: ADDU_QB
/* 11963 */   MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 11976
/* 11967 */   MCD::OPC_CheckPredicate, 32, 119, 11, // Skip to: 14906
/* 11971 */   MCD::OPC_Decode, 151, 18, 187, 2, // Opcode: SUBU_QB
/* 11976 */   MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 11989
/* 11980 */   MCD::OPC_CheckPredicate, 32, 106, 11, // Skip to: 14906
/* 11984 */   MCD::OPC_Decode, 156, 1, 187, 2, // Opcode: ADDU_S_QB
/* 11989 */   MCD::OPC_FilterValue, 5, 9, 0, // Skip to: 12002
/* 11993 */   MCD::OPC_CheckPredicate, 32, 93, 11, // Skip to: 14906
/* 11997 */   MCD::OPC_Decode, 155, 18, 187, 2, // Opcode: SUBU_S_QB
/* 12002 */   MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 12015
/* 12006 */   MCD::OPC_CheckPredicate, 32, 80, 11, // Skip to: 14906
/* 12010 */   MCD::OPC_Decode, 224, 13, 187, 2, // Opcode: MULEU_S_PH_QBL
/* 12015 */   MCD::OPC_FilterValue, 7, 9, 0, // Skip to: 12028
/* 12019 */   MCD::OPC_CheckPredicate, 32, 67, 11, // Skip to: 14906
/* 12023 */   MCD::OPC_Decode, 226, 13, 187, 2, // Opcode: MULEU_S_PH_QBR
/* 12028 */   MCD::OPC_FilterValue, 8, 9, 0, // Skip to: 12041
/* 12032 */   MCD::OPC_CheckPredicate, 65, 54, 11, // Skip to: 14906
/* 12036 */   MCD::OPC_Decode, 150, 1, 187, 2, // Opcode: ADDU_PH
/* 12041 */   MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 12054
/* 12045 */   MCD::OPC_CheckPredicate, 65, 41, 11, // Skip to: 14906
/* 12049 */   MCD::OPC_Decode, 149, 18, 187, 2, // Opcode: SUBU_PH
/* 12054 */   MCD::OPC_FilterValue, 10, 8, 0, // Skip to: 12066
/* 12058 */   MCD::OPC_CheckPredicate, 32, 28, 11, // Skip to: 14906
/* 12062 */   MCD::OPC_Decode, 123, 187, 2, // Opcode: ADDQ_PH
/* 12066 */   MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 12079
/* 12070 */   MCD::OPC_CheckPredicate, 32, 16, 11, // Skip to: 14906
/* 12074 */   MCD::OPC_Decode, 248, 17, 187, 2, // Opcode: SUBQ_PH
/* 12079 */   MCD::OPC_FilterValue, 12, 9, 0, // Skip to: 12092
/* 12083 */   MCD::OPC_CheckPredicate, 65, 3, 11, // Skip to: 14906
/* 12087 */   MCD::OPC_Decode, 154, 1, 187, 2, // Opcode: ADDU_S_PH
/* 12092 */   MCD::OPC_FilterValue, 13, 9, 0, // Skip to: 12105
/* 12096 */   MCD::OPC_CheckPredicate, 65, 246, 10, // Skip to: 14906
/* 12100 */   MCD::OPC_Decode, 153, 18, 187, 2, // Opcode: SUBU_S_PH
/* 12105 */   MCD::OPC_FilterValue, 14, 8, 0, // Skip to: 12117
/* 12109 */   MCD::OPC_CheckPredicate, 32, 233, 10, // Skip to: 14906
/* 12113 */   MCD::OPC_Decode, 125, 187, 2, // Opcode: ADDQ_S_PH
/* 12117 */   MCD::OPC_FilterValue, 15, 9, 0, // Skip to: 12130
/* 12121 */   MCD::OPC_CheckPredicate, 32, 221, 10, // Skip to: 14906
/* 12125 */   MCD::OPC_Decode, 250, 17, 187, 2, // Opcode: SUBQ_S_PH
/* 12130 */   MCD::OPC_FilterValue, 16, 8, 0, // Skip to: 12142
/* 12134 */   MCD::OPC_CheckPredicate, 32, 208, 10, // Skip to: 14906
/* 12138 */   MCD::OPC_Decode, 129, 1, 49, // Opcode: ADDSC
/* 12142 */   MCD::OPC_FilterValue, 17, 8, 0, // Skip to: 12154
/* 12146 */   MCD::OPC_CheckPredicate, 32, 196, 10, // Skip to: 14906
/* 12150 */   MCD::OPC_Decode, 166, 1, 49, // Opcode: ADDWC
/* 12154 */   MCD::OPC_FilterValue, 18, 8, 0, // Skip to: 12166
/* 12158 */   MCD::OPC_CheckPredicate, 32, 184, 10, // Skip to: 14906
/* 12162 */   MCD::OPC_Decode, 225, 12, 49, // Opcode: MODSUB
/* 12166 */   MCD::OPC_FilterValue, 20, 15, 0, // Skip to: 12185
/* 12170 */   MCD::OPC_CheckPredicate, 32, 172, 10, // Skip to: 14906
/* 12174 */   MCD::OPC_CheckField, 16, 5, 0, 166, 10, // Skip to: 14906
/* 12180 */   MCD::OPC_Decode, 190, 15, 188, 2, // Opcode: RADDU_W_QB
/* 12185 */   MCD::OPC_FilterValue, 22, 7, 0, // Skip to: 12196
/* 12189 */   MCD::OPC_CheckPredicate, 32, 153, 10, // Skip to: 14906
/* 12193 */   MCD::OPC_Decode, 127, 49, // Opcode: ADDQ_S_W
/* 12196 */   MCD::OPC_FilterValue, 23, 8, 0, // Skip to: 12208
/* 12200 */   MCD::OPC_CheckPredicate, 32, 142, 10, // Skip to: 14906
/* 12204 */   MCD::OPC_Decode, 252, 17, 49, // Opcode: SUBQ_S_W
/* 12208 */   MCD::OPC_FilterValue, 28, 9, 0, // Skip to: 12221
/* 12212 */   MCD::OPC_CheckPredicate, 32, 130, 10, // Skip to: 14906
/* 12216 */   MCD::OPC_Decode, 220, 13, 189, 2, // Opcode: MULEQ_S_W_PHL
/* 12221 */   MCD::OPC_FilterValue, 29, 9, 0, // Skip to: 12234
/* 12225 */   MCD::OPC_CheckPredicate, 32, 117, 10, // Skip to: 14906
/* 12229 */   MCD::OPC_Decode, 222, 13, 189, 2, // Opcode: MULEQ_S_W_PHR
/* 12234 */   MCD::OPC_FilterValue, 30, 9, 0, // Skip to: 12247
/* 12238 */   MCD::OPC_CheckPredicate, 65, 104, 10, // Skip to: 14906
/* 12242 */   MCD::OPC_Decode, 235, 13, 187, 2, // Opcode: MULQ_S_PH
/* 12247 */   MCD::OPC_FilterValue, 31, 95, 10, // Skip to: 14906
/* 12251 */   MCD::OPC_CheckPredicate, 32, 91, 10, // Skip to: 14906
/* 12255 */   MCD::OPC_Decode, 231, 13, 187, 2, // Opcode: MULQ_RS_PH
/* 12260 */   MCD::OPC_FilterValue, 17, 63, 1, // Skip to: 12583
/* 12264 */   MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 12267 */   MCD::OPC_FilterValue, 0, 14, 0, // Skip to: 12285
/* 12271 */   MCD::OPC_CheckPredicate, 32, 71, 10, // Skip to: 14906
/* 12275 */   MCD::OPC_CheckField, 11, 5, 0, 65, 10, // Skip to: 14906
/* 12281 */   MCD::OPC_Decode, 237, 4, 62, // Opcode: CMPU_EQ_QB
/* 12285 */   MCD::OPC_FilterValue, 1, 14, 0, // Skip to: 12303
/* 12289 */   MCD::OPC_CheckPredicate, 32, 53, 10, // Skip to: 14906
/* 12293 */   MCD::OPC_CheckField, 11, 5, 0, 47, 10, // Skip to: 14906
/* 12299 */   MCD::OPC_Decode, 241, 4, 62, // Opcode: CMPU_LT_QB
/* 12303 */   MCD::OPC_FilterValue, 2, 14, 0, // Skip to: 12321
/* 12307 */   MCD::OPC_CheckPredicate, 32, 35, 10, // Skip to: 14906
/* 12311 */   MCD::OPC_CheckField, 11, 5, 0, 29, 10, // Skip to: 14906
/* 12317 */   MCD::OPC_Decode, 239, 4, 62, // Opcode: CMPU_LE_QB
/* 12321 */   MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 12334
/* 12325 */   MCD::OPC_CheckPredicate, 32, 17, 10, // Skip to: 14906
/* 12329 */   MCD::OPC_Decode, 217, 14, 187, 2, // Opcode: PICK_QB
/* 12334 */   MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 12347
/* 12338 */   MCD::OPC_CheckPredicate, 32, 4, 10, // Skip to: 14906
/* 12342 */   MCD::OPC_Decode, 231, 4, 189, 2, // Opcode: CMPGU_EQ_QB
/* 12347 */   MCD::OPC_FilterValue, 5, 9, 0, // Skip to: 12360
/* 12351 */   MCD::OPC_CheckPredicate, 32, 247, 9, // Skip to: 14906
/* 12355 */   MCD::OPC_Decode, 235, 4, 189, 2, // Opcode: CMPGU_LT_QB
/* 12360 */   MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 12373
/* 12364 */   MCD::OPC_CheckPredicate, 32, 234, 9, // Skip to: 14906
/* 12368 */   MCD::OPC_Decode, 233, 4, 189, 2, // Opcode: CMPGU_LE_QB
/* 12373 */   MCD::OPC_FilterValue, 8, 14, 0, // Skip to: 12391
/* 12377 */   MCD::OPC_CheckPredicate, 32, 221, 9, // Skip to: 14906
/* 12381 */   MCD::OPC_CheckField, 11, 5, 0, 215, 9, // Skip to: 14906
/* 12387 */   MCD::OPC_Decode, 247, 4, 62, // Opcode: CMP_EQ_PH
/* 12391 */   MCD::OPC_FilterValue, 9, 14, 0, // Skip to: 12409
/* 12395 */   MCD::OPC_CheckPredicate, 32, 203, 9, // Skip to: 14906
/* 12399 */   MCD::OPC_CheckField, 11, 5, 0, 197, 9, // Skip to: 14906
/* 12405 */   MCD::OPC_Decode, 133, 5, 62, // Opcode: CMP_LT_PH
/* 12409 */   MCD::OPC_FilterValue, 10, 14, 0, // Skip to: 12427
/* 12413 */   MCD::OPC_CheckPredicate, 32, 185, 9, // Skip to: 14906
/* 12417 */   MCD::OPC_CheckField, 11, 5, 0, 179, 9, // Skip to: 14906
/* 12423 */   MCD::OPC_Decode, 255, 4, 62, // Opcode: CMP_LE_PH
/* 12427 */   MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 12440
/* 12431 */   MCD::OPC_CheckPredicate, 32, 167, 9, // Skip to: 14906
/* 12435 */   MCD::OPC_Decode, 215, 14, 187, 2, // Opcode: PICK_PH
/* 12440 */   MCD::OPC_FilterValue, 12, 9, 0, // Skip to: 12453
/* 12444 */   MCD::OPC_CheckPredicate, 32, 154, 9, // Skip to: 14906
/* 12448 */   MCD::OPC_Decode, 244, 14, 187, 2, // Opcode: PRECRQ_QB_PH
/* 12453 */   MCD::OPC_FilterValue, 13, 9, 0, // Skip to: 12466
/* 12457 */   MCD::OPC_CheckPredicate, 65, 141, 9, // Skip to: 14906
/* 12461 */   MCD::OPC_Decode, 248, 14, 187, 2, // Opcode: PRECR_QB_PH
/* 12466 */   MCD::OPC_FilterValue, 14, 9, 0, // Skip to: 12479
/* 12470 */   MCD::OPC_CheckPredicate, 32, 128, 9, // Skip to: 14906
/* 12474 */   MCD::OPC_Decode, 198, 14, 187, 2, // Opcode: PACKRL_PH
/* 12479 */   MCD::OPC_FilterValue, 15, 9, 0, // Skip to: 12492
/* 12483 */   MCD::OPC_CheckPredicate, 32, 115, 9, // Skip to: 14906
/* 12487 */   MCD::OPC_Decode, 240, 14, 187, 2, // Opcode: PRECRQU_S_QB_PH
/* 12492 */   MCD::OPC_FilterValue, 20, 9, 0, // Skip to: 12505
/* 12496 */   MCD::OPC_CheckPredicate, 32, 102, 9, // Skip to: 14906
/* 12500 */   MCD::OPC_Decode, 242, 14, 190, 2, // Opcode: PRECRQ_PH_W
/* 12505 */   MCD::OPC_FilterValue, 21, 9, 0, // Skip to: 12518
/* 12509 */   MCD::OPC_CheckPredicate, 32, 89, 9, // Skip to: 14906
/* 12513 */   MCD::OPC_Decode, 246, 14, 190, 2, // Opcode: PRECRQ_RS_PH_W
/* 12518 */   MCD::OPC_FilterValue, 24, 9, 0, // Skip to: 12531
/* 12522 */   MCD::OPC_CheckPredicate, 65, 76, 9, // Skip to: 14906
/* 12526 */   MCD::OPC_Decode, 225, 4, 189, 2, // Opcode: CMPGDU_EQ_QB
/* 12531 */   MCD::OPC_FilterValue, 25, 9, 0, // Skip to: 12544
/* 12535 */   MCD::OPC_CheckPredicate, 65, 63, 9, // Skip to: 14906
/* 12539 */   MCD::OPC_Decode, 229, 4, 189, 2, // Opcode: CMPGDU_LT_QB
/* 12544 */   MCD::OPC_FilterValue, 26, 9, 0, // Skip to: 12557
/* 12548 */   MCD::OPC_CheckPredicate, 65, 50, 9, // Skip to: 14906
/* 12552 */   MCD::OPC_Decode, 227, 4, 189, 2, // Opcode: CMPGDU_LE_QB
/* 12557 */   MCD::OPC_FilterValue, 30, 9, 0, // Skip to: 12570
/* 12561 */   MCD::OPC_CheckPredicate, 65, 37, 9, // Skip to: 14906
/* 12565 */   MCD::OPC_Decode, 250, 14, 191, 2, // Opcode: PRECR_SRA_PH_W
/* 12570 */   MCD::OPC_FilterValue, 31, 28, 9, // Skip to: 14906
/* 12574 */   MCD::OPC_CheckPredicate, 65, 24, 9, // Skip to: 14906
/* 12578 */   MCD::OPC_Decode, 252, 14, 191, 2, // Opcode: PRECR_SRA_R_PH_W
/* 12583 */   MCD::OPC_FilterValue, 18, 73, 1, // Skip to: 12916
/* 12587 */   MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 12590 */   MCD::OPC_FilterValue, 1, 14, 0, // Skip to: 12608
/* 12594 */   MCD::OPC_CheckPredicate, 65, 4, 9, // Skip to: 14906
/* 12598 */   MCD::OPC_CheckField, 21, 5, 0, 254, 8, // Skip to: 14906
/* 12604 */   MCD::OPC_Decode, 100, 192, 2, // Opcode: ABSQ_S_QB
/* 12608 */   MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 12621
/* 12612 */   MCD::OPC_CheckPredicate, 32, 242, 8, // Skip to: 14906
/* 12616 */   MCD::OPC_Decode, 209, 15, 193, 2, // Opcode: REPL_QB
/* 12621 */   MCD::OPC_FilterValue, 3, 15, 0, // Skip to: 12640
/* 12625 */   MCD::OPC_CheckPredicate, 32, 229, 8, // Skip to: 14906
/* 12629 */   MCD::OPC_CheckField, 21, 5, 0, 223, 8, // Skip to: 14906
/* 12635 */   MCD::OPC_Decode, 205, 15, 194, 2, // Opcode: REPLV_QB
/* 12640 */   MCD::OPC_FilterValue, 4, 15, 0, // Skip to: 12659
/* 12644 */   MCD::OPC_CheckPredicate, 32, 210, 8, // Skip to: 14906
/* 12648 */   MCD::OPC_CheckField, 21, 5, 0, 204, 8, // Skip to: 14906
/* 12654 */   MCD::OPC_Decode, 220, 14, 192, 2, // Opcode: PRECEQU_PH_QBL
/* 12659 */   MCD::OPC_FilterValue, 5, 15, 0, // Skip to: 12678
/* 12663 */   MCD::OPC_CheckPredicate, 32, 191, 8, // Skip to: 14906
/* 12667 */   MCD::OPC_CheckField, 21, 5, 0, 185, 8, // Skip to: 14906
/* 12673 */   MCD::OPC_Decode, 224, 14, 192, 2, // Opcode: PRECEQU_PH_QBR
/* 12678 */   MCD::OPC_FilterValue, 6, 15, 0, // Skip to: 12697
/* 12682 */   MCD::OPC_CheckPredicate, 32, 172, 8, // Skip to: 14906
/* 12686 */   MCD::OPC_CheckField, 21, 5, 0, 166, 8, // Skip to: 14906
/* 12692 */   MCD::OPC_Decode, 221, 14, 192, 2, // Opcode: PRECEQU_PH_QBLA
/* 12697 */   MCD::OPC_FilterValue, 7, 15, 0, // Skip to: 12716
/* 12701 */   MCD::OPC_CheckPredicate, 32, 153, 8, // Skip to: 14906
/* 12705 */   MCD::OPC_CheckField, 21, 5, 0, 147, 8, // Skip to: 14906
/* 12711 */   MCD::OPC_Decode, 225, 14, 192, 2, // Opcode: PRECEQU_PH_QBRA
/* 12716 */   MCD::OPC_FilterValue, 9, 14, 0, // Skip to: 12734
/* 12720 */   MCD::OPC_CheckPredicate, 32, 134, 8, // Skip to: 14906
/* 12724 */   MCD::OPC_CheckField, 21, 5, 0, 128, 8, // Skip to: 14906
/* 12730 */   MCD::OPC_Decode, 98, 192, 2, // Opcode: ABSQ_S_PH
/* 12734 */   MCD::OPC_FilterValue, 10, 8, 0, // Skip to: 12746
/* 12738 */   MCD::OPC_CheckPredicate, 32, 116, 8, // Skip to: 14906
/* 12742 */   MCD::OPC_Decode, 207, 15, 82, // Opcode: REPL_PH
/* 12746 */   MCD::OPC_FilterValue, 11, 15, 0, // Skip to: 12765
/* 12750 */   MCD::OPC_CheckPredicate, 32, 104, 8, // Skip to: 14906
/* 12754 */   MCD::OPC_CheckField, 21, 5, 0, 98, 8, // Skip to: 14906
/* 12760 */   MCD::OPC_Decode, 203, 15, 194, 2, // Opcode: REPLV_PH
/* 12765 */   MCD::OPC_FilterValue, 12, 15, 0, // Skip to: 12784
/* 12769 */   MCD::OPC_CheckPredicate, 32, 85, 8, // Skip to: 14906
/* 12773 */   MCD::OPC_CheckField, 21, 5, 0, 79, 8, // Skip to: 14906
/* 12779 */   MCD::OPC_Decode, 228, 14, 195, 2, // Opcode: PRECEQ_W_PHL
/* 12784 */   MCD::OPC_FilterValue, 13, 15, 0, // Skip to: 12803
/* 12788 */   MCD::OPC_CheckPredicate, 32, 66, 8, // Skip to: 14906
/* 12792 */   MCD::OPC_CheckField, 21, 5, 0, 60, 8, // Skip to: 14906
/* 12798 */   MCD::OPC_Decode, 230, 14, 195, 2, // Opcode: PRECEQ_W_PHR
/* 12803 */   MCD::OPC_FilterValue, 17, 14, 0, // Skip to: 12821
/* 12807 */   MCD::OPC_CheckPredicate, 32, 47, 8, // Skip to: 14906
/* 12811 */   MCD::OPC_CheckField, 21, 5, 0, 41, 8, // Skip to: 14906
/* 12817 */   MCD::OPC_Decode, 102, 196, 2, // Opcode: ABSQ_S_W
/* 12821 */   MCD::OPC_FilterValue, 27, 15, 0, // Skip to: 12840
/* 12825 */   MCD::OPC_CheckPredicate, 32, 29, 8, // Skip to: 14906
/* 12829 */   MCD::OPC_CheckField, 21, 5, 0, 23, 8, // Skip to: 14906
/* 12835 */   MCD::OPC_Decode, 132, 3, 196, 2, // Opcode: BITREV
/* 12840 */   MCD::OPC_FilterValue, 28, 15, 0, // Skip to: 12859
/* 12844 */   MCD::OPC_CheckPredicate, 32, 10, 8, // Skip to: 14906
/* 12848 */   MCD::OPC_CheckField, 21, 5, 0, 4, 8, // Skip to: 14906
/* 12854 */   MCD::OPC_Decode, 232, 14, 192, 2, // Opcode: PRECEU_PH_QBL
/* 12859 */   MCD::OPC_FilterValue, 29, 15, 0, // Skip to: 12878
/* 12863 */   MCD::OPC_CheckPredicate, 32, 247, 7, // Skip to: 14906
/* 12867 */   MCD::OPC_CheckField, 21, 5, 0, 241, 7, // Skip to: 14906
/* 12873 */   MCD::OPC_Decode, 236, 14, 192, 2, // Opcode: PRECEU_PH_QBR
/* 12878 */   MCD::OPC_FilterValue, 30, 15, 0, // Skip to: 12897
/* 12882 */   MCD::OPC_CheckPredicate, 32, 228, 7, // Skip to: 14906
/* 12886 */   MCD::OPC_CheckField, 21, 5, 0, 222, 7, // Skip to: 14906
/* 12892 */   MCD::OPC_Decode, 233, 14, 192, 2, // Opcode: PRECEU_PH_QBLA
/* 12897 */   MCD::OPC_FilterValue, 31, 213, 7, // Skip to: 14906
/* 12901 */   MCD::OPC_CheckPredicate, 32, 209, 7, // Skip to: 14906
/* 12905 */   MCD::OPC_CheckField, 21, 5, 0, 203, 7, // Skip to: 14906
/* 12911 */   MCD::OPC_Decode, 237, 14, 192, 2, // Opcode: PRECEU_PH_QBRA
/* 12916 */   MCD::OPC_FilterValue, 19, 31, 1, // Skip to: 13207
/* 12920 */   MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 12923 */   MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 12936
/* 12927 */   MCD::OPC_CheckPredicate, 32, 183, 7, // Skip to: 14906
/* 12931 */   MCD::OPC_Decode, 221, 16, 197, 2, // Opcode: SHLL_QB
/* 12936 */   MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 12949
/* 12940 */   MCD::OPC_CheckPredicate, 32, 170, 7, // Skip to: 14906
/* 12944 */   MCD::OPC_Decode, 253, 16, 197, 2, // Opcode: SHRL_QB
/* 12949 */   MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 12962
/* 12953 */   MCD::OPC_CheckPredicate, 32, 157, 7, // Skip to: 14906
/* 12957 */   MCD::OPC_Decode, 213, 16, 198, 2, // Opcode: SHLLV_QB
/* 12962 */   MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 12975
/* 12966 */   MCD::OPC_CheckPredicate, 32, 144, 7, // Skip to: 14906
/* 12970 */   MCD::OPC_Decode, 249, 16, 198, 2, // Opcode: SHRLV_QB
/* 12975 */   MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 12988
/* 12979 */   MCD::OPC_CheckPredicate, 65, 131, 7, // Skip to: 14906
/* 12983 */   MCD::OPC_Decode, 239, 16, 197, 2, // Opcode: SHRA_QB
/* 12988 */   MCD::OPC_FilterValue, 5, 9, 0, // Skip to: 13001
/* 12992 */   MCD::OPC_CheckPredicate, 65, 118, 7, // Skip to: 14906
/* 12996 */   MCD::OPC_Decode, 243, 16, 197, 2, // Opcode: SHRA_R_QB
/* 13001 */   MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 13014
/* 13005 */   MCD::OPC_CheckPredicate, 65, 105, 7, // Skip to: 14906
/* 13009 */   MCD::OPC_Decode, 229, 16, 198, 2, // Opcode: SHRAV_QB
/* 13014 */   MCD::OPC_FilterValue, 7, 9, 0, // Skip to: 13027
/* 13018 */   MCD::OPC_CheckPredicate, 65, 92, 7, // Skip to: 14906
/* 13022 */   MCD::OPC_Decode, 233, 16, 198, 2, // Opcode: SHRAV_R_QB
/* 13027 */   MCD::OPC_FilterValue, 8, 9, 0, // Skip to: 13040
/* 13031 */   MCD::OPC_CheckPredicate, 32, 79, 7, // Skip to: 14906
/* 13035 */   MCD::OPC_Decode, 219, 16, 197, 2, // Opcode: SHLL_PH
/* 13040 */   MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 13053
/* 13044 */   MCD::OPC_CheckPredicate, 32, 66, 7, // Skip to: 14906
/* 13048 */   MCD::OPC_Decode, 237, 16, 197, 2, // Opcode: SHRA_PH
/* 13053 */   MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 13066
/* 13057 */   MCD::OPC_CheckPredicate, 32, 53, 7, // Skip to: 14906
/* 13061 */   MCD::OPC_Decode, 211, 16, 198, 2, // Opcode: SHLLV_PH
/* 13066 */   MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 13079
/* 13070 */   MCD::OPC_CheckPredicate, 32, 40, 7, // Skip to: 14906
/* 13074 */   MCD::OPC_Decode, 227, 16, 198, 2, // Opcode: SHRAV_PH
/* 13079 */   MCD::OPC_FilterValue, 12, 9, 0, // Skip to: 13092
/* 13083 */   MCD::OPC_CheckPredicate, 32, 27, 7, // Skip to: 14906
/* 13087 */   MCD::OPC_Decode, 223, 16, 197, 2, // Opcode: SHLL_S_PH
/* 13092 */   MCD::OPC_FilterValue, 13, 9, 0, // Skip to: 13105
/* 13096 */   MCD::OPC_CheckPredicate, 32, 14, 7, // Skip to: 14906
/* 13100 */   MCD::OPC_Decode, 241, 16, 197, 2, // Opcode: SHRA_R_PH
/* 13105 */   MCD::OPC_FilterValue, 14, 9, 0, // Skip to: 13118
/* 13109 */   MCD::OPC_CheckPredicate, 32, 1, 7, // Skip to: 14906
/* 13113 */   MCD::OPC_Decode, 215, 16, 198, 2, // Opcode: SHLLV_S_PH
/* 13118 */   MCD::OPC_FilterValue, 15, 9, 0, // Skip to: 13131
/* 13122 */   MCD::OPC_CheckPredicate, 32, 244, 6, // Skip to: 14906
/* 13126 */   MCD::OPC_Decode, 231, 16, 198, 2, // Opcode: SHRAV_R_PH
/* 13131 */   MCD::OPC_FilterValue, 20, 9, 0, // Skip to: 13144
/* 13135 */   MCD::OPC_CheckPredicate, 32, 231, 6, // Skip to: 14906
/* 13139 */   MCD::OPC_Decode, 225, 16, 199, 2, // Opcode: SHLL_S_W
/* 13144 */   MCD::OPC_FilterValue, 21, 9, 0, // Skip to: 13157
/* 13148 */   MCD::OPC_CheckPredicate, 32, 218, 6, // Skip to: 14906
/* 13152 */   MCD::OPC_Decode, 245, 16, 199, 2, // Opcode: SHRA_R_W
/* 13157 */   MCD::OPC_FilterValue, 22, 8, 0, // Skip to: 13169
/* 13161 */   MCD::OPC_CheckPredicate, 32, 205, 6, // Skip to: 14906
/* 13165 */   MCD::OPC_Decode, 217, 16, 43, // Opcode: SHLLV_S_W
/* 13169 */   MCD::OPC_FilterValue, 23, 8, 0, // Skip to: 13181
/* 13173 */   MCD::OPC_CheckPredicate, 32, 193, 6, // Skip to: 14906
/* 13177 */   MCD::OPC_Decode, 235, 16, 43, // Opcode: SHRAV_R_W
/* 13181 */   MCD::OPC_FilterValue, 25, 9, 0, // Skip to: 13194
/* 13185 */   MCD::OPC_CheckPredicate, 65, 181, 6, // Skip to: 14906
/* 13189 */   MCD::OPC_Decode, 251, 16, 197, 2, // Opcode: SHRL_PH
/* 13194 */   MCD::OPC_FilterValue, 27, 172, 6, // Skip to: 14906
/* 13198 */   MCD::OPC_CheckPredicate, 65, 168, 6, // Skip to: 14906
/* 13202 */   MCD::OPC_Decode, 247, 16, 198, 2, // Opcode: SHRLV_PH
/* 13207 */   MCD::OPC_FilterValue, 24, 201, 0, // Skip to: 13412
/* 13211 */   MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 13214 */   MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 13227
/* 13218 */   MCD::OPC_CheckPredicate, 65, 148, 6, // Skip to: 14906
/* 13222 */   MCD::OPC_Decode, 145, 1, 187, 2, // Opcode: ADDUH_QB
/* 13227 */   MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 13240
/* 13231 */   MCD::OPC_CheckPredicate, 65, 135, 6, // Skip to: 14906
/* 13235 */   MCD::OPC_Decode, 144, 18, 187, 2, // Opcode: SUBUH_QB
/* 13240 */   MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 13253
/* 13244 */   MCD::OPC_CheckPredicate, 65, 122, 6, // Skip to: 14906
/* 13248 */   MCD::OPC_Decode, 147, 1, 187, 2, // Opcode: ADDUH_R_QB
/* 13253 */   MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 13266
/* 13257 */   MCD::OPC_CheckPredicate, 65, 109, 6, // Skip to: 14906
/* 13261 */   MCD::OPC_Decode, 146, 18, 187, 2, // Opcode: SUBUH_R_QB
/* 13266 */   MCD::OPC_FilterValue, 8, 8, 0, // Skip to: 13278
/* 13270 */   MCD::OPC_CheckPredicate, 65, 96, 6, // Skip to: 14906
/* 13274 */   MCD::OPC_Decode, 115, 187, 2, // Opcode: ADDQH_PH
/* 13278 */   MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 13291
/* 13282 */   MCD::OPC_CheckPredicate, 65, 84, 6, // Skip to: 14906
/* 13286 */   MCD::OPC_Decode, 240, 17, 187, 2, // Opcode: SUBQH_PH
/* 13291 */   MCD::OPC_FilterValue, 10, 8, 0, // Skip to: 13303
/* 13295 */   MCD::OPC_CheckPredicate, 65, 71, 6, // Skip to: 14906
/* 13299 */   MCD::OPC_Decode, 117, 187, 2, // Opcode: ADDQH_R_PH
/* 13303 */   MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 13316
/* 13307 */   MCD::OPC_CheckPredicate, 65, 59, 6, // Skip to: 14906
/* 13311 */   MCD::OPC_Decode, 242, 17, 187, 2, // Opcode: SUBQH_R_PH
/* 13316 */   MCD::OPC_FilterValue, 12, 9, 0, // Skip to: 13329
/* 13320 */   MCD::OPC_CheckPredicate, 65, 46, 6, // Skip to: 14906
/* 13324 */   MCD::OPC_Decode, 133, 14, 187, 2, // Opcode: MUL_PH
/* 13329 */   MCD::OPC_FilterValue, 14, 9, 0, // Skip to: 13342
/* 13333 */   MCD::OPC_CheckPredicate, 65, 33, 6, // Skip to: 14906
/* 13337 */   MCD::OPC_Decode, 138, 14, 187, 2, // Opcode: MUL_S_PH
/* 13342 */   MCD::OPC_FilterValue, 16, 7, 0, // Skip to: 13353
/* 13346 */   MCD::OPC_CheckPredicate, 65, 20, 6, // Skip to: 14906
/* 13350 */   MCD::OPC_Decode, 121, 49, // Opcode: ADDQH_W
/* 13353 */   MCD::OPC_FilterValue, 17, 8, 0, // Skip to: 13365
/* 13357 */   MCD::OPC_CheckPredicate, 65, 9, 6, // Skip to: 14906
/* 13361 */   MCD::OPC_Decode, 246, 17, 49, // Opcode: SUBQH_W
/* 13365 */   MCD::OPC_FilterValue, 18, 7, 0, // Skip to: 13376
/* 13369 */   MCD::OPC_CheckPredicate, 65, 253, 5, // Skip to: 14906
/* 13373 */   MCD::OPC_Decode, 119, 49, // Opcode: ADDQH_R_W
/* 13376 */   MCD::OPC_FilterValue, 19, 8, 0, // Skip to: 13388
/* 13380 */   MCD::OPC_CheckPredicate, 65, 242, 5, // Skip to: 14906
/* 13384 */   MCD::OPC_Decode, 244, 17, 49, // Opcode: SUBQH_R_W
/* 13388 */   MCD::OPC_FilterValue, 22, 8, 0, // Skip to: 13400
/* 13392 */   MCD::OPC_CheckPredicate, 65, 230, 5, // Skip to: 14906
/* 13396 */   MCD::OPC_Decode, 237, 13, 49, // Opcode: MULQ_S_W
/* 13400 */   MCD::OPC_FilterValue, 23, 222, 5, // Skip to: 14906
/* 13404 */   MCD::OPC_CheckPredicate, 65, 218, 5, // Skip to: 14906
/* 13408 */   MCD::OPC_Decode, 233, 13, 49, // Opcode: MULQ_RS_W
/* 13412 */   MCD::OPC_FilterValue, 25, 15, 0, // Skip to: 13431
/* 13416 */   MCD::OPC_CheckPredicate, 66, 206, 5, // Skip to: 14906
/* 13420 */   MCD::OPC_CheckField, 6, 1, 0, 200, 5, // Skip to: 14906
/* 13426 */   MCD::OPC_Decode, 183, 11, 200, 2, // Opcode: LWLE
/* 13431 */   MCD::OPC_FilterValue, 26, 15, 0, // Skip to: 13450
/* 13435 */   MCD::OPC_CheckPredicate, 66, 187, 5, // Skip to: 14906
/* 13439 */   MCD::OPC_CheckField, 6, 1, 0, 181, 5, // Skip to: 14906
/* 13445 */   MCD::OPC_Decode, 196, 11, 200, 2, // Opcode: LWRE
/* 13450 */   MCD::OPC_FilterValue, 27, 15, 0, // Skip to: 13469
/* 13454 */   MCD::OPC_CheckPredicate, 67, 168, 5, // Skip to: 14906
/* 13458 */   MCD::OPC_CheckField, 6, 1, 0, 162, 5, // Skip to: 14906
/* 13464 */   MCD::OPC_Decode, 148, 4, 201, 2, // Opcode: CACHEE
/* 13469 */   MCD::OPC_FilterValue, 28, 15, 0, // Skip to: 13488
/* 13473 */   MCD::OPC_CheckPredicate, 67, 149, 5, // Skip to: 14906
/* 13477 */   MCD::OPC_CheckField, 6, 1, 0, 143, 5, // Skip to: 14906
/* 13483 */   MCD::OPC_Decode, 254, 15, 200, 2, // Opcode: SBE
/* 13488 */   MCD::OPC_FilterValue, 29, 15, 0, // Skip to: 13507
/* 13492 */   MCD::OPC_CheckPredicate, 67, 130, 5, // Skip to: 14906
/* 13496 */   MCD::OPC_CheckField, 6, 1, 0, 124, 5, // Skip to: 14906
/* 13502 */   MCD::OPC_Decode, 201, 16, 200, 2, // Opcode: SHE
/* 13507 */   MCD::OPC_FilterValue, 30, 15, 0, // Skip to: 13526
/* 13511 */   MCD::OPC_CheckPredicate, 38, 111, 5, // Skip to: 14906
/* 13515 */   MCD::OPC_CheckField, 6, 1, 0, 105, 5, // Skip to: 14906
/* 13521 */   MCD::OPC_Decode, 136, 16, 200, 2, // Opcode: SCE
/* 13526 */   MCD::OPC_FilterValue, 31, 15, 0, // Skip to: 13545
/* 13530 */   MCD::OPC_CheckPredicate, 38, 92, 5, // Skip to: 14906
/* 13534 */   MCD::OPC_CheckField, 6, 1, 0, 86, 5, // Skip to: 14906
/* 13540 */   MCD::OPC_Decode, 182, 18, 200, 2, // Opcode: SWE
/* 13545 */   MCD::OPC_FilterValue, 32, 60, 0, // Skip to: 13609
/* 13549 */   MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 13552 */   MCD::OPC_FilterValue, 2, 15, 0, // Skip to: 13571
/* 13556 */   MCD::OPC_CheckPredicate, 25, 66, 5, // Skip to: 14906
/* 13560 */   MCD::OPC_CheckField, 21, 5, 0, 60, 5, // Skip to: 14906
/* 13566 */   MCD::OPC_Decode, 208, 19, 196, 2, // Opcode: WSBH
/* 13571 */   MCD::OPC_FilterValue, 16, 15, 0, // Skip to: 13590
/* 13575 */   MCD::OPC_CheckPredicate, 23, 47, 5, // Skip to: 14906
/* 13579 */   MCD::OPC_CheckField, 21, 5, 0, 41, 5, // Skip to: 14906
/* 13585 */   MCD::OPC_Decode, 167, 16, 196, 2, // Opcode: SEB
/* 13590 */   MCD::OPC_FilterValue, 24, 32, 5, // Skip to: 14906
/* 13594 */   MCD::OPC_CheckPredicate, 23, 28, 5, // Skip to: 14906
/* 13598 */   MCD::OPC_CheckField, 21, 5, 0, 22, 5, // Skip to: 14906
/* 13604 */   MCD::OPC_Decode, 171, 16, 196, 2, // Opcode: SEH
/* 13609 */   MCD::OPC_FilterValue, 33, 15, 0, // Skip to: 13628
/* 13613 */   MCD::OPC_CheckPredicate, 66, 9, 5, // Skip to: 14906
/* 13617 */   MCD::OPC_CheckField, 6, 1, 0, 3, 5, // Skip to: 14906
/* 13623 */   MCD::OPC_Decode, 187, 18, 200, 2, // Opcode: SWLE
/* 13628 */   MCD::OPC_FilterValue, 34, 15, 0, // Skip to: 13647
/* 13632 */   MCD::OPC_CheckPredicate, 66, 246, 4, // Skip to: 14906
/* 13636 */   MCD::OPC_CheckField, 6, 1, 0, 240, 4, // Skip to: 14906
/* 13642 */   MCD::OPC_Decode, 198, 18, 200, 2, // Opcode: SWRE
/* 13647 */   MCD::OPC_FilterValue, 35, 15, 0, // Skip to: 13666
/* 13651 */   MCD::OPC_CheckPredicate, 67, 227, 4, // Skip to: 14906
/* 13655 */   MCD::OPC_CheckField, 6, 1, 0, 221, 4, // Skip to: 14906
/* 13661 */   MCD::OPC_Decode, 255, 14, 201, 2, // Opcode: PREFE
/* 13666 */   MCD::OPC_FilterValue, 40, 15, 0, // Skip to: 13685
/* 13670 */   MCD::OPC_CheckPredicate, 67, 208, 4, // Skip to: 14906
/* 13674 */   MCD::OPC_CheckField, 6, 1, 0, 202, 4, // Skip to: 14906
/* 13680 */   MCD::OPC_Decode, 221, 10, 200, 2, // Opcode: LBuE
/* 13685 */   MCD::OPC_FilterValue, 41, 15, 0, // Skip to: 13704
/* 13689 */   MCD::OPC_CheckPredicate, 67, 189, 4, // Skip to: 14906
/* 13693 */   MCD::OPC_CheckField, 6, 1, 0, 183, 4, // Skip to: 14906
/* 13699 */   MCD::OPC_Decode, 135, 11, 200, 2, // Opcode: LHuE
/* 13704 */   MCD::OPC_FilterValue, 44, 15, 0, // Skip to: 13723
/* 13708 */   MCD::OPC_CheckPredicate, 67, 170, 4, // Skip to: 14906
/* 13712 */   MCD::OPC_CheckField, 6, 1, 0, 164, 4, // Skip to: 14906
/* 13718 */   MCD::OPC_Decode, 209, 10, 200, 2, // Opcode: LBE
/* 13723 */   MCD::OPC_FilterValue, 45, 15, 0, // Skip to: 13742
/* 13727 */   MCD::OPC_CheckPredicate, 67, 151, 4, // Skip to: 14906
/* 13731 */   MCD::OPC_CheckField, 6, 1, 0, 145, 4, // Skip to: 14906
/* 13737 */   MCD::OPC_Decode, 255, 10, 200, 2, // Opcode: LHE
/* 13742 */   MCD::OPC_FilterValue, 46, 15, 0, // Skip to: 13761
/* 13746 */   MCD::OPC_CheckPredicate, 38, 132, 4, // Skip to: 14906
/* 13750 */   MCD::OPC_CheckField, 6, 1, 0, 126, 4, // Skip to: 14906
/* 13756 */   MCD::OPC_Decode, 146, 11, 200, 2, // Opcode: LLE
/* 13761 */   MCD::OPC_FilterValue, 47, 15, 0, // Skip to: 13780
/* 13765 */   MCD::OPC_CheckPredicate, 38, 113, 4, // Skip to: 14906
/* 13769 */   MCD::OPC_CheckField, 6, 1, 0, 107, 4, // Skip to: 14906
/* 13775 */   MCD::OPC_Decode, 177, 11, 200, 2, // Opcode: LWE
/* 13780 */   MCD::OPC_FilterValue, 48, 165, 1, // Skip to: 14205
/* 13784 */   MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 13787 */   MCD::OPC_FilterValue, 0, 15, 0, // Skip to: 13806
/* 13791 */   MCD::OPC_CheckPredicate, 65, 87, 4, // Skip to: 14906
/* 13795 */   MCD::OPC_CheckField, 13, 3, 0, 81, 4, // Skip to: 14906
/* 13801 */   MCD::OPC_Decode, 195, 7, 236, 1, // Opcode: DPA_W_PH
/* 13806 */   MCD::OPC_FilterValue, 1, 15, 0, // Skip to: 13825
/* 13810 */   MCD::OPC_CheckPredicate, 65, 68, 4, // Skip to: 14906
/* 13814 */   MCD::OPC_CheckField, 13, 3, 0, 62, 4, // Skip to: 14906
/* 13820 */   MCD::OPC_Decode, 218, 7, 236, 1, // Opcode: DPS_W_PH
/* 13825 */   MCD::OPC_FilterValue, 2, 15, 0, // Skip to: 13844
/* 13829 */   MCD::OPC_CheckPredicate, 65, 49, 4, // Skip to: 14906
/* 13833 */   MCD::OPC_CheckField, 13, 3, 0, 43, 4, // Skip to: 14906
/* 13839 */   MCD::OPC_Decode, 243, 13, 236, 1, // Opcode: MULSA_W_PH
/* 13844 */   MCD::OPC_FilterValue, 3, 15, 0, // Skip to: 13863
/* 13848 */   MCD::OPC_CheckPredicate, 32, 30, 4, // Skip to: 14906
/* 13852 */   MCD::OPC_CheckField, 13, 3, 0, 24, 4, // Skip to: 14906
/* 13858 */   MCD::OPC_Decode, 189, 7, 236, 1, // Opcode: DPAU_H_QBL
/* 13863 */   MCD::OPC_FilterValue, 4, 15, 0, // Skip to: 13882
/* 13867 */   MCD::OPC_CheckPredicate, 32, 11, 4, // Skip to: 14906
/* 13871 */   MCD::OPC_CheckField, 13, 3, 0, 5, 4, // Skip to: 14906
/* 13877 */   MCD::OPC_Decode, 187, 7, 236, 1, // Opcode: DPAQ_S_W_PH
/* 13882 */   MCD::OPC_FilterValue, 5, 15, 0, // Skip to: 13901
/* 13886 */   MCD::OPC_CheckPredicate, 32, 248, 3, // Skip to: 14906
/* 13890 */   MCD::OPC_CheckField, 13, 3, 0, 242, 3, // Skip to: 14906
/* 13896 */   MCD::OPC_Decode, 204, 7, 236, 1, // Opcode: DPSQ_S_W_PH
/* 13901 */   MCD::OPC_FilterValue, 6, 15, 0, // Skip to: 13920
/* 13905 */   MCD::OPC_CheckPredicate, 32, 229, 3, // Skip to: 14906
/* 13909 */   MCD::OPC_CheckField, 13, 3, 0, 223, 3, // Skip to: 14906
/* 13915 */   MCD::OPC_Decode, 241, 13, 236, 1, // Opcode: MULSAQ_S_W_PH
/* 13920 */   MCD::OPC_FilterValue, 7, 15, 0, // Skip to: 13939
/* 13924 */   MCD::OPC_CheckPredicate, 32, 210, 3, // Skip to: 14906
/* 13928 */   MCD::OPC_CheckField, 13, 3, 0, 204, 3, // Skip to: 14906
/* 13934 */   MCD::OPC_Decode, 191, 7, 236, 1, // Opcode: DPAU_H_QBR
/* 13939 */   MCD::OPC_FilterValue, 8, 15, 0, // Skip to: 13958
/* 13943 */   MCD::OPC_CheckPredicate, 65, 191, 3, // Skip to: 14906
/* 13947 */   MCD::OPC_CheckField, 13, 3, 0, 185, 3, // Skip to: 14906
/* 13953 */   MCD::OPC_Decode, 193, 7, 236, 1, // Opcode: DPAX_W_PH
/* 13958 */   MCD::OPC_FilterValue, 9, 15, 0, // Skip to: 13977
/* 13962 */   MCD::OPC_CheckPredicate, 65, 172, 3, // Skip to: 14906
/* 13966 */   MCD::OPC_CheckField, 13, 3, 0, 166, 3, // Skip to: 14906
/* 13972 */   MCD::OPC_Decode, 216, 7, 236, 1, // Opcode: DPSX_W_PH
/* 13977 */   MCD::OPC_FilterValue, 11, 15, 0, // Skip to: 13996
/* 13981 */   MCD::OPC_CheckPredicate, 32, 153, 3, // Skip to: 14906
/* 13985 */   MCD::OPC_CheckField, 13, 3, 0, 147, 3, // Skip to: 14906
/* 13991 */   MCD::OPC_Decode, 212, 7, 236, 1, // Opcode: DPSU_H_QBL
/* 13996 */   MCD::OPC_FilterValue, 12, 15, 0, // Skip to: 14015
/* 14000 */   MCD::OPC_CheckPredicate, 32, 134, 3, // Skip to: 14906
/* 14004 */   MCD::OPC_CheckField, 13, 3, 0, 128, 3, // Skip to: 14906
/* 14010 */   MCD::OPC_Decode, 185, 7, 236, 1, // Opcode: DPAQ_SA_L_W
/* 14015 */   MCD::OPC_FilterValue, 13, 15, 0, // Skip to: 14034
/* 14019 */   MCD::OPC_CheckPredicate, 32, 115, 3, // Skip to: 14906
/* 14023 */   MCD::OPC_CheckField, 13, 3, 0, 109, 3, // Skip to: 14906
/* 14029 */   MCD::OPC_Decode, 202, 7, 236, 1, // Opcode: DPSQ_SA_L_W
/* 14034 */   MCD::OPC_FilterValue, 15, 15, 0, // Skip to: 14053
/* 14038 */   MCD::OPC_CheckPredicate, 32, 96, 3, // Skip to: 14906
/* 14042 */   MCD::OPC_CheckField, 13, 3, 0, 90, 3, // Skip to: 14906
/* 14048 */   MCD::OPC_Decode, 214, 7, 236, 1, // Opcode: DPSU_H_QBR
/* 14053 */   MCD::OPC_FilterValue, 16, 15, 0, // Skip to: 14072
/* 14057 */   MCD::OPC_CheckPredicate, 32, 77, 3, // Skip to: 14906
/* 14061 */   MCD::OPC_CheckField, 13, 3, 0, 71, 3, // Skip to: 14906
/* 14067 */   MCD::OPC_Decode, 132, 12, 236, 1, // Opcode: MAQ_SA_W_PHL
/* 14072 */   MCD::OPC_FilterValue, 18, 15, 0, // Skip to: 14091
/* 14076 */   MCD::OPC_CheckPredicate, 32, 58, 3, // Skip to: 14906
/* 14080 */   MCD::OPC_CheckField, 13, 3, 0, 52, 3, // Skip to: 14906
/* 14086 */   MCD::OPC_Decode, 134, 12, 236, 1, // Opcode: MAQ_SA_W_PHR
/* 14091 */   MCD::OPC_FilterValue, 20, 15, 0, // Skip to: 14110
/* 14095 */   MCD::OPC_CheckPredicate, 32, 39, 3, // Skip to: 14906
/* 14099 */   MCD::OPC_CheckField, 13, 3, 0, 33, 3, // Skip to: 14906
/* 14105 */   MCD::OPC_Decode, 136, 12, 236, 1, // Opcode: MAQ_S_W_PHL
/* 14110 */   MCD::OPC_FilterValue, 22, 15, 0, // Skip to: 14129
/* 14114 */   MCD::OPC_CheckPredicate, 32, 20, 3, // Skip to: 14906
/* 14118 */   MCD::OPC_CheckField, 13, 3, 0, 14, 3, // Skip to: 14906
/* 14124 */   MCD::OPC_Decode, 138, 12, 236, 1, // Opcode: MAQ_S_W_PHR
/* 14129 */   MCD::OPC_FilterValue, 24, 15, 0, // Skip to: 14148
/* 14133 */   MCD::OPC_CheckPredicate, 65, 1, 3, // Skip to: 14906
/* 14137 */   MCD::OPC_CheckField, 13, 3, 0, 251, 2, // Skip to: 14906
/* 14143 */   MCD::OPC_Decode, 183, 7, 236, 1, // Opcode: DPAQX_S_W_PH
/* 14148 */   MCD::OPC_FilterValue, 25, 15, 0, // Skip to: 14167
/* 14152 */   MCD::OPC_CheckPredicate, 65, 238, 2, // Skip to: 14906
/* 14156 */   MCD::OPC_CheckField, 13, 3, 0, 232, 2, // Skip to: 14906
/* 14162 */   MCD::OPC_Decode, 200, 7, 236, 1, // Opcode: DPSQX_S_W_PH
/* 14167 */   MCD::OPC_FilterValue, 26, 15, 0, // Skip to: 14186
/* 14171 */   MCD::OPC_CheckPredicate, 65, 219, 2, // Skip to: 14906
/* 14175 */   MCD::OPC_CheckField, 13, 3, 0, 213, 2, // Skip to: 14906
/* 14181 */   MCD::OPC_Decode, 181, 7, 236, 1, // Opcode: DPAQX_SA_W_PH
/* 14186 */   MCD::OPC_FilterValue, 27, 204, 2, // Skip to: 14906
/* 14190 */   MCD::OPC_CheckPredicate, 65, 200, 2, // Skip to: 14906
/* 14194 */   MCD::OPC_CheckField, 13, 3, 0, 194, 2, // Skip to: 14906
/* 14200 */   MCD::OPC_Decode, 198, 7, 236, 1, // Opcode: DPSQX_SA_W_PH
/* 14205 */   MCD::OPC_FilterValue, 49, 42, 0, // Skip to: 14251
/* 14209 */   MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 14212 */   MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 14225
/* 14216 */   MCD::OPC_CheckPredicate, 65, 174, 2, // Skip to: 14906
/* 14220 */   MCD::OPC_Decode, 203, 1, 202, 2, // Opcode: APPEND
/* 14225 */   MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 14238
/* 14229 */   MCD::OPC_CheckPredicate, 65, 161, 2, // Skip to: 14906
/* 14233 */   MCD::OPC_Decode, 134, 15, 202, 2, // Opcode: PREPEND
/* 14238 */   MCD::OPC_FilterValue, 16, 152, 2, // Skip to: 14906
/* 14242 */   MCD::OPC_CheckPredicate, 65, 148, 2, // Skip to: 14906
/* 14246 */   MCD::OPC_Decode, 152, 2, 202, 2, // Opcode: BALIGN
/* 14251 */   MCD::OPC_FilterValue, 56, 58, 1, // Skip to: 14569
/* 14255 */   MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 14258 */   MCD::OPC_FilterValue, 0, 15, 0, // Skip to: 14277
/* 14262 */   MCD::OPC_CheckPredicate, 32, 128, 2, // Skip to: 14906
/* 14266 */   MCD::OPC_CheckField, 13, 3, 0, 122, 2, // Skip to: 14906
/* 14272 */   MCD::OPC_Decode, 176, 8, 203, 2, // Opcode: EXTR_W
/* 14277 */   MCD::OPC_FilterValue, 1, 15, 0, // Skip to: 14296
/* 14281 */   MCD::OPC_CheckPredicate, 32, 109, 2, // Skip to: 14906
/* 14285 */   MCD::OPC_CheckField, 13, 3, 0, 103, 2, // Skip to: 14906
/* 14291 */   MCD::OPC_Decode, 168, 8, 204, 2, // Opcode: EXTRV_W
/* 14296 */   MCD::OPC_FilterValue, 2, 15, 0, // Skip to: 14315
/* 14300 */   MCD::OPC_CheckPredicate, 32, 90, 2, // Skip to: 14906
/* 14304 */   MCD::OPC_CheckField, 13, 3, 0, 84, 2, // Skip to: 14906
/* 14310 */   MCD::OPC_Decode, 154, 8, 203, 2, // Opcode: EXTP
/* 14315 */   MCD::OPC_FilterValue, 3, 15, 0, // Skip to: 14334
/* 14319 */   MCD::OPC_CheckPredicate, 32, 71, 2, // Skip to: 14906
/* 14323 */   MCD::OPC_CheckField, 13, 3, 0, 65, 2, // Skip to: 14906
/* 14329 */   MCD::OPC_Decode, 159, 8, 204, 2, // Opcode: EXTPV
/* 14334 */   MCD::OPC_FilterValue, 4, 15, 0, // Skip to: 14353
/* 14338 */   MCD::OPC_CheckPredicate, 32, 52, 2, // Skip to: 14906
/* 14342 */   MCD::OPC_CheckField, 13, 3, 0, 46, 2, // Skip to: 14906
/* 14348 */   MCD::OPC_Decode, 172, 8, 203, 2, // Opcode: EXTR_R_W
/* 14353 */   MCD::OPC_FilterValue, 5, 15, 0, // Skip to: 14372
/* 14357 */   MCD::OPC_CheckPredicate, 32, 33, 2, // Skip to: 14906
/* 14361 */   MCD::OPC_CheckField, 13, 3, 0, 27, 2, // Skip to: 14906
/* 14367 */   MCD::OPC_Decode, 164, 8, 204, 2, // Opcode: EXTRV_R_W
/* 14372 */   MCD::OPC_FilterValue, 6, 15, 0, // Skip to: 14391
/* 14376 */   MCD::OPC_CheckPredicate, 32, 14, 2, // Skip to: 14906
/* 14380 */   MCD::OPC_CheckField, 13, 3, 0, 8, 2, // Skip to: 14906
/* 14386 */   MCD::OPC_Decode, 170, 8, 203, 2, // Opcode: EXTR_RS_W
/* 14391 */   MCD::OPC_FilterValue, 7, 15, 0, // Skip to: 14410
/* 14395 */   MCD::OPC_CheckPredicate, 32, 251, 1, // Skip to: 14906
/* 14399 */   MCD::OPC_CheckField, 13, 3, 0, 245, 1, // Skip to: 14906
/* 14405 */   MCD::OPC_Decode, 162, 8, 204, 2, // Opcode: EXTRV_RS_W
/* 14410 */   MCD::OPC_FilterValue, 10, 15, 0, // Skip to: 14429
/* 14414 */   MCD::OPC_CheckPredicate, 32, 232, 1, // Skip to: 14906
/* 14418 */   MCD::OPC_CheckField, 13, 3, 0, 226, 1, // Skip to: 14906
/* 14424 */   MCD::OPC_Decode, 155, 8, 203, 2, // Opcode: EXTPDP
/* 14429 */   MCD::OPC_FilterValue, 11, 15, 0, // Skip to: 14448
/* 14433 */   MCD::OPC_CheckPredicate, 32, 213, 1, // Skip to: 14906
/* 14437 */   MCD::OPC_CheckField, 13, 3, 0, 207, 1, // Skip to: 14906
/* 14443 */   MCD::OPC_Decode, 156, 8, 204, 2, // Opcode: EXTPDPV
/* 14448 */   MCD::OPC_FilterValue, 14, 15, 0, // Skip to: 14467
/* 14452 */   MCD::OPC_CheckPredicate, 32, 194, 1, // Skip to: 14906
/* 14456 */   MCD::OPC_CheckField, 13, 3, 0, 188, 1, // Skip to: 14906
/* 14462 */   MCD::OPC_Decode, 174, 8, 203, 2, // Opcode: EXTR_S_H
/* 14467 */   MCD::OPC_FilterValue, 15, 15, 0, // Skip to: 14486
/* 14471 */   MCD::OPC_CheckPredicate, 32, 175, 1, // Skip to: 14906
/* 14475 */   MCD::OPC_CheckField, 13, 3, 0, 169, 1, // Skip to: 14906
/* 14481 */   MCD::OPC_Decode, 166, 8, 204, 2, // Opcode: EXTRV_S_H
/* 14486 */   MCD::OPC_FilterValue, 18, 9, 0, // Skip to: 14499
/* 14490 */   MCD::OPC_CheckPredicate, 32, 156, 1, // Skip to: 14906
/* 14494 */   MCD::OPC_Decode, 192, 15, 205, 2, // Opcode: RDDSP
/* 14499 */   MCD::OPC_FilterValue, 19, 9, 0, // Skip to: 14512
/* 14503 */   MCD::OPC_CheckPredicate, 36, 143, 1, // Skip to: 14906
/* 14507 */   MCD::OPC_Decode, 205, 19, 206, 2, // Opcode: WRDSP
/* 14512 */   MCD::OPC_FilterValue, 26, 15, 0, // Skip to: 14531
/* 14516 */   MCD::OPC_CheckPredicate, 32, 130, 1, // Skip to: 14906
/* 14520 */   MCD::OPC_CheckField, 13, 7, 0, 124, 1, // Skip to: 14906
/* 14526 */   MCD::OPC_Decode, 207, 16, 207, 2, // Opcode: SHILO
/* 14531 */   MCD::OPC_FilterValue, 27, 15, 0, // Skip to: 14550
/* 14535 */   MCD::OPC_CheckPredicate, 32, 111, 1, // Skip to: 14906
/* 14539 */   MCD::OPC_CheckField, 13, 8, 0, 105, 1, // Skip to: 14906
/* 14545 */   MCD::OPC_Decode, 208, 16, 208, 2, // Opcode: SHILOV
/* 14550 */   MCD::OPC_FilterValue, 31, 96, 1, // Skip to: 14906
/* 14554 */   MCD::OPC_CheckPredicate, 32, 92, 1, // Skip to: 14906
/* 14558 */   MCD::OPC_CheckField, 13, 8, 0, 86, 1, // Skip to: 14906
/* 14564 */   MCD::OPC_Decode, 202, 13, 208, 2, // Opcode: MTHLIP
/* 14569 */   MCD::OPC_FilterValue, 59, 77, 1, // Skip to: 14906
/* 14573 */   MCD::OPC_CheckPredicate, 1, 73, 1, // Skip to: 14906
/* 14577 */   MCD::OPC_CheckField, 21, 5, 0, 67, 1, // Skip to: 14906
/* 14583 */   MCD::OPC_CheckField, 6, 5, 0, 61, 1, // Skip to: 14906
/* 14589 */   MCD::OPC_Decode, 194, 15, 209, 2, // Opcode: RDHWR
/* 14594 */   MCD::OPC_FilterValue, 32, 9, 0, // Skip to: 14607
/* 14598 */   MCD::OPC_CheckPredicate, 22, 48, 1, // Skip to: 14906
/* 14602 */   MCD::OPC_Decode, 207, 10, 210, 2, // Opcode: LB
/* 14607 */   MCD::OPC_FilterValue, 33, 9, 0, // Skip to: 14620
/* 14611 */   MCD::OPC_CheckPredicate, 1, 35, 1, // Skip to: 14906
/* 14615 */   MCD::OPC_Decode, 253, 10, 210, 2, // Opcode: LH
/* 14620 */   MCD::OPC_FilterValue, 34, 9, 0, // Skip to: 14633
/* 14624 */   MCD::OPC_CheckPredicate, 31, 22, 1, // Skip to: 14906
/* 14628 */   MCD::OPC_Decode, 181, 11, 210, 2, // Opcode: LWL
/* 14633 */   MCD::OPC_FilterValue, 35, 9, 0, // Skip to: 14646
/* 14637 */   MCD::OPC_CheckPredicate, 1, 9, 1, // Skip to: 14906
/* 14641 */   MCD::OPC_Decode, 168, 11, 210, 2, // Opcode: LW
/* 14646 */   MCD::OPC_FilterValue, 36, 9, 0, // Skip to: 14659
/* 14650 */   MCD::OPC_CheckPredicate, 22, 252, 0, // Skip to: 14906
/* 14654 */   MCD::OPC_Decode, 219, 10, 210, 2, // Opcode: LBu
/* 14659 */   MCD::OPC_FilterValue, 37, 9, 0, // Skip to: 14672
/* 14663 */   MCD::OPC_CheckPredicate, 1, 239, 0, // Skip to: 14906
/* 14667 */   MCD::OPC_Decode, 133, 11, 210, 2, // Opcode: LHu
/* 14672 */   MCD::OPC_FilterValue, 38, 9, 0, // Skip to: 14685
/* 14676 */   MCD::OPC_CheckPredicate, 31, 226, 0, // Skip to: 14906
/* 14680 */   MCD::OPC_Decode, 194, 11, 210, 2, // Opcode: LWR
/* 14685 */   MCD::OPC_FilterValue, 40, 9, 0, // Skip to: 14698
/* 14689 */   MCD::OPC_CheckPredicate, 22, 213, 0, // Skip to: 14906
/* 14693 */   MCD::OPC_Decode, 250, 15, 210, 2, // Opcode: SB
/* 14698 */   MCD::OPC_FilterValue, 41, 9, 0, // Skip to: 14711
/* 14702 */   MCD::OPC_CheckPredicate, 22, 200, 0, // Skip to: 14906
/* 14706 */   MCD::OPC_Decode, 197, 16, 210, 2, // Opcode: SH
/* 14711 */   MCD::OPC_FilterValue, 42, 9, 0, // Skip to: 14724
/* 14715 */   MCD::OPC_CheckPredicate, 31, 187, 0, // Skip to: 14906
/* 14719 */   MCD::OPC_Decode, 185, 18, 210, 2, // Opcode: SWL
/* 14724 */   MCD::OPC_FilterValue, 43, 9, 0, // Skip to: 14737
/* 14728 */   MCD::OPC_CheckPredicate, 1, 174, 0, // Skip to: 14906
/* 14732 */   MCD::OPC_Decode, 172, 18, 210, 2, // Opcode: SW
/* 14737 */   MCD::OPC_FilterValue, 46, 9, 0, // Skip to: 14750
/* 14741 */   MCD::OPC_CheckPredicate, 31, 161, 0, // Skip to: 14906
/* 14745 */   MCD::OPC_Decode, 196, 18, 210, 2, // Opcode: SWR
/* 14750 */   MCD::OPC_FilterValue, 47, 9, 0, // Skip to: 14763
/* 14754 */   MCD::OPC_CheckPredicate, 68, 148, 0, // Skip to: 14906
/* 14758 */   MCD::OPC_Decode, 147, 4, 211, 2, // Opcode: CACHE
/* 14763 */   MCD::OPC_FilterValue, 48, 9, 0, // Skip to: 14776
/* 14767 */   MCD::OPC_CheckPredicate, 69, 135, 0, // Skip to: 14906
/* 14771 */   MCD::OPC_Decode, 140, 11, 210, 2, // Opcode: LL
/* 14776 */   MCD::OPC_FilterValue, 49, 9, 0, // Skip to: 14789
/* 14780 */   MCD::OPC_CheckPredicate, 44, 122, 0, // Skip to: 14906
/* 14784 */   MCD::OPC_Decode, 171, 11, 212, 2, // Opcode: LWC1
/* 14789 */   MCD::OPC_FilterValue, 50, 9, 0, // Skip to: 14802
/* 14793 */   MCD::OPC_CheckPredicate, 34, 109, 0, // Skip to: 14906
/* 14797 */   MCD::OPC_Decode, 173, 11, 213, 2, // Opcode: LWC2
/* 14802 */   MCD::OPC_FilterValue, 51, 9, 0, // Skip to: 14815
/* 14806 */   MCD::OPC_CheckPredicate, 68, 96, 0, // Skip to: 14906
/* 14810 */   MCD::OPC_Decode, 254, 14, 211, 2, // Opcode: PREF
/* 14815 */   MCD::OPC_FilterValue, 53, 9, 0, // Skip to: 14828
/* 14819 */   MCD::OPC_CheckPredicate, 70, 83, 0, // Skip to: 14906
/* 14823 */   MCD::OPC_Decode, 225, 10, 212, 2, // Opcode: LDC1
/* 14828 */   MCD::OPC_FilterValue, 54, 9, 0, // Skip to: 14841
/* 14832 */   MCD::OPC_CheckPredicate, 71, 70, 0, // Skip to: 14906
/* 14836 */   MCD::OPC_Decode, 229, 10, 213, 2, // Opcode: LDC2
/* 14841 */   MCD::OPC_FilterValue, 56, 9, 0, // Skip to: 14854
/* 14845 */   MCD::OPC_CheckPredicate, 69, 57, 0, // Skip to: 14906
/* 14849 */   MCD::OPC_Decode, 131, 16, 210, 2, // Opcode: SC
/* 14854 */   MCD::OPC_FilterValue, 57, 9, 0, // Skip to: 14867
/* 14858 */   MCD::OPC_CheckPredicate, 44, 44, 0, // Skip to: 14906
/* 14862 */   MCD::OPC_Decode, 176, 18, 212, 2, // Opcode: SWC1
/* 14867 */   MCD::OPC_FilterValue, 58, 9, 0, // Skip to: 14880
/* 14871 */   MCD::OPC_CheckPredicate, 34, 31, 0, // Skip to: 14906
/* 14875 */   MCD::OPC_Decode, 178, 18, 213, 2, // Opcode: SWC2
/* 14880 */   MCD::OPC_FilterValue, 61, 9, 0, // Skip to: 14893
/* 14884 */   MCD::OPC_CheckPredicate, 70, 18, 0, // Skip to: 14906
/* 14888 */   MCD::OPC_Decode, 148, 16, 212, 2, // Opcode: SDC1
/* 14893 */   MCD::OPC_FilterValue, 62, 9, 0, // Skip to: 14906
/* 14897 */   MCD::OPC_CheckPredicate, 71, 5, 0, // Skip to: 14906
/* 14901 */   MCD::OPC_Decode, 152, 16, 213, 2, // Opcode: SDC2
/* 14906 */   MCD::OPC_Fail,
  0
};

static const uint8_t DecoderTableMips32_64_PTR6432[] = {
/* 0 */       MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 3 */       MCD::OPC_FilterValue, 0, 14, 0, // Skip to: 21
/* 7 */       MCD::OPC_CheckPredicate, 72, 36, 0, // Skip to: 47
/* 11 */      MCD::OPC_CheckField, 0, 21, 8, 30, 0, // Skip to: 47
/* 17 */      MCD::OPC_Decode, 190, 10, 13, // Opcode: JR64
/* 21 */      MCD::OPC_FilterValue, 48, 9, 0, // Skip to: 34
/* 25 */      MCD::OPC_CheckPredicate, 73, 18, 0, // Skip to: 47
/* 29 */      MCD::OPC_Decode, 141, 11, 210, 2, // Opcode: LL64
/* 34 */      MCD::OPC_FilterValue, 56, 9, 0, // Skip to: 47
/* 38 */      MCD::OPC_CheckPredicate, 73, 5, 0, // Skip to: 47
/* 42 */      MCD::OPC_Decode, 132, 16, 210, 2, // Opcode: SC64
/* 47 */      MCD::OPC_Fail,
  0
};

static const uint8_t DecoderTableMips32r6_64r632[] = {
/* 0 */       MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 3 */       MCD::OPC_FilterValue, 0, 197, 1, // Skip to: 460
/* 7 */       MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 10 */      MCD::OPC_FilterValue, 5, 15, 0, // Skip to: 29
/* 14 */      MCD::OPC_CheckPredicate, 74, 141, 7, // Skip to: 1951
/* 18 */      MCD::OPC_CheckField, 8, 3, 0, 135, 7, // Skip to: 1951
/* 24 */      MCD::OPC_Decode, 160, 11, 179, 1, // Opcode: LSA_R6
/* 29 */      MCD::OPC_FilterValue, 9, 15, 0, // Skip to: 48
/* 33 */      MCD::OPC_CheckPredicate, 74, 122, 7, // Skip to: 1951
/* 37 */      MCD::OPC_CheckField, 6, 15, 16, 116, 7, // Skip to: 1951
/* 43 */      MCD::OPC_Decode, 196, 10, 180, 1, // Opcode: JR_HB_R6
/* 48 */      MCD::OPC_FilterValue, 14, 9, 0, // Skip to: 61
/* 52 */      MCD::OPC_CheckPredicate, 75, 103, 7, // Skip to: 1951
/* 56 */      MCD::OPC_Decode, 147, 16, 182, 1, // Opcode: SDBBP_R6
/* 61 */      MCD::OPC_FilterValue, 16, 20, 0, // Skip to: 85
/* 65 */      MCD::OPC_CheckPredicate, 74, 90, 7, // Skip to: 1951
/* 69 */      MCD::OPC_CheckField, 16, 5, 0, 84, 7, // Skip to: 1951
/* 75 */      MCD::OPC_CheckField, 6, 5, 1, 78, 7, // Skip to: 1951
/* 81 */      MCD::OPC_Decode, 224, 4, 14, // Opcode: CLZ_R6
/* 85 */      MCD::OPC_FilterValue, 17, 20, 0, // Skip to: 109
/* 89 */      MCD::OPC_CheckPredicate, 74, 66, 7, // Skip to: 1951
/* 93 */      MCD::OPC_CheckField, 16, 5, 0, 60, 7, // Skip to: 1951
/* 99 */      MCD::OPC_CheckField, 6, 5, 1, 54, 7, // Skip to: 1951
/* 105 */     MCD::OPC_Decode, 204, 4, 14, // Opcode: CLO_R6
/* 109 */     MCD::OPC_FilterValue, 18, 20, 0, // Skip to: 133
/* 113 */     MCD::OPC_CheckPredicate, 76, 42, 7, // Skip to: 1951
/* 117 */     MCD::OPC_CheckField, 16, 5, 0, 36, 7, // Skip to: 1951
/* 123 */     MCD::OPC_CheckField, 6, 5, 1, 30, 7, // Skip to: 1951
/* 129 */     MCD::OPC_Decode, 225, 6, 15, // Opcode: DCLZ_R6
/* 133 */     MCD::OPC_FilterValue, 19, 20, 0, // Skip to: 157
/* 137 */     MCD::OPC_CheckPredicate, 76, 18, 7, // Skip to: 1951
/* 141 */     MCD::OPC_CheckField, 16, 5, 0, 12, 7, // Skip to: 1951
/* 147 */     MCD::OPC_CheckField, 6, 5, 1, 6, 7, // Skip to: 1951
/* 153 */     MCD::OPC_Decode, 222, 6, 15, // Opcode: DCLO_R6
/* 157 */     MCD::OPC_FilterValue, 21, 15, 0, // Skip to: 176
/* 161 */     MCD::OPC_CheckPredicate, 76, 250, 6, // Skip to: 1951
/* 165 */     MCD::OPC_CheckField, 8, 3, 0, 244, 6, // Skip to: 1951
/* 171 */     MCD::OPC_Decode, 135, 7, 188, 1, // Opcode: DLSA_R6
/* 176 */     MCD::OPC_FilterValue, 24, 27, 0, // Skip to: 207
/* 180 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 183 */     MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 195
/* 187 */     MCD::OPC_CheckPredicate, 75, 224, 6, // Skip to: 1951
/* 191 */     MCD::OPC_Decode, 137, 14, 49, // Opcode: MUL_R6
/* 195 */     MCD::OPC_FilterValue, 3, 216, 6, // Skip to: 1951
/* 199 */     MCD::OPC_CheckPredicate, 75, 212, 6, // Skip to: 1951
/* 203 */     MCD::OPC_Decode, 215, 13, 49, // Opcode: MUH
/* 207 */     MCD::OPC_FilterValue, 25, 27, 0, // Skip to: 238
/* 211 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 214 */     MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 226
/* 218 */     MCD::OPC_CheckPredicate, 75, 193, 6, // Skip to: 1951
/* 222 */     MCD::OPC_Decode, 253, 13, 49, // Opcode: MULU
/* 226 */     MCD::OPC_FilterValue, 3, 185, 6, // Skip to: 1951
/* 230 */     MCD::OPC_CheckPredicate, 75, 181, 6, // Skip to: 1951
/* 234 */     MCD::OPC_Decode, 216, 13, 49, // Opcode: MUHU
/* 238 */     MCD::OPC_FilterValue, 26, 27, 0, // Skip to: 269
/* 242 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 245 */     MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 257
/* 249 */     MCD::OPC_CheckPredicate, 75, 162, 6, // Skip to: 1951
/* 253 */     MCD::OPC_Decode, 247, 6, 49, // Opcode: DIV
/* 257 */     MCD::OPC_FilterValue, 3, 154, 6, // Skip to: 1951
/* 261 */     MCD::OPC_CheckPredicate, 75, 150, 6, // Skip to: 1951
/* 265 */     MCD::OPC_Decode, 224, 12, 49, // Opcode: MOD
/* 269 */     MCD::OPC_FilterValue, 27, 27, 0, // Skip to: 300
/* 273 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 276 */     MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 288
/* 280 */     MCD::OPC_CheckPredicate, 75, 131, 6, // Skip to: 1951
/* 284 */     MCD::OPC_Decode, 248, 6, 49, // Opcode: DIVU
/* 288 */     MCD::OPC_FilterValue, 3, 123, 6, // Skip to: 1951
/* 292 */     MCD::OPC_CheckPredicate, 75, 119, 6, // Skip to: 1951
/* 296 */     MCD::OPC_Decode, 227, 12, 49, // Opcode: MODU
/* 300 */     MCD::OPC_FilterValue, 28, 27, 0, // Skip to: 331
/* 304 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 307 */     MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 319
/* 311 */     MCD::OPC_CheckPredicate, 76, 100, 6, // Skip to: 1951
/* 315 */     MCD::OPC_Decode, 168, 7, 12, // Opcode: DMUL_R6
/* 319 */     MCD::OPC_FilterValue, 3, 92, 6, // Skip to: 1951
/* 323 */     MCD::OPC_CheckPredicate, 76, 88, 6, // Skip to: 1951
/* 327 */     MCD::OPC_Decode, 154, 7, 12, // Opcode: DMUH
/* 331 */     MCD::OPC_FilterValue, 29, 27, 0, // Skip to: 362
/* 335 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 338 */     MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 350
/* 342 */     MCD::OPC_CheckPredicate, 76, 69, 6, // Skip to: 1951
/* 346 */     MCD::OPC_Decode, 165, 7, 12, // Opcode: DMULU
/* 350 */     MCD::OPC_FilterValue, 3, 61, 6, // Skip to: 1951
/* 354 */     MCD::OPC_CheckPredicate, 76, 57, 6, // Skip to: 1951
/* 358 */     MCD::OPC_Decode, 155, 7, 12, // Opcode: DMUHU
/* 362 */     MCD::OPC_FilterValue, 30, 27, 0, // Skip to: 393
/* 366 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 369 */     MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 381
/* 373 */     MCD::OPC_CheckPredicate, 76, 38, 6, // Skip to: 1951
/* 377 */     MCD::OPC_Decode, 226, 6, 12, // Opcode: DDIV
/* 381 */     MCD::OPC_FilterValue, 3, 30, 6, // Skip to: 1951
/* 385 */     MCD::OPC_CheckPredicate, 76, 26, 6, // Skip to: 1951
/* 389 */     MCD::OPC_Decode, 143, 7, 12, // Opcode: DMOD
/* 393 */     MCD::OPC_FilterValue, 31, 27, 0, // Skip to: 424
/* 397 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 400 */     MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 412
/* 404 */     MCD::OPC_CheckPredicate, 76, 7, 6, // Skip to: 1951
/* 408 */     MCD::OPC_Decode, 227, 6, 12, // Opcode: DDIVU
/* 412 */     MCD::OPC_FilterValue, 3, 255, 5, // Skip to: 1951
/* 416 */     MCD::OPC_CheckPredicate, 76, 251, 5, // Skip to: 1951
/* 420 */     MCD::OPC_Decode, 144, 7, 12, // Opcode: DMODU
/* 424 */     MCD::OPC_FilterValue, 53, 14, 0, // Skip to: 442
/* 428 */     MCD::OPC_CheckPredicate, 77, 239, 5, // Skip to: 1951
/* 432 */     MCD::OPC_CheckField, 6, 5, 0, 233, 5, // Skip to: 1951
/* 438 */     MCD::OPC_Decode, 175, 16, 49, // Opcode: SELEQZ
/* 442 */     MCD::OPC_FilterValue, 55, 225, 5, // Skip to: 1951
/* 446 */     MCD::OPC_CheckPredicate, 77, 221, 5, // Skip to: 1951
/* 450 */     MCD::OPC_CheckField, 6, 5, 0, 215, 5, // Skip to: 1951
/* 456 */     MCD::OPC_Decode, 182, 16, 49, // Opcode: SELNEZ
/* 460 */     MCD::OPC_FilterValue, 1, 48, 0, // Skip to: 512
/* 464 */     MCD::OPC_ExtractField, 16, 5,  // Inst{20-16} ...
/* 467 */     MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 480
/* 471 */     MCD::OPC_CheckPredicate, 76, 196, 5, // Skip to: 1951
/* 475 */     MCD::OPC_Decode, 210, 6, 214, 2, // Opcode: DAHI
/* 480 */     MCD::OPC_FilterValue, 17, 15, 0, // Skip to: 499
/* 484 */     MCD::OPC_CheckPredicate, 74, 183, 5, // Skip to: 1951
/* 488 */     MCD::OPC_CheckField, 21, 5, 0, 177, 5, // Skip to: 1951
/* 494 */     MCD::OPC_Decode, 149, 2, 192, 1, // Opcode: BAL
/* 499 */     MCD::OPC_FilterValue, 30, 168, 5, // Skip to: 1951
/* 503 */     MCD::OPC_CheckPredicate, 76, 164, 5, // Skip to: 1951
/* 507 */     MCD::OPC_Decode, 214, 6, 214, 2, // Opcode: DATI
/* 512 */     MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 525
/* 516 */     MCD::OPC_CheckPredicate, 75, 151, 5, // Skip to: 1951
/* 520 */     MCD::OPC_Decode, 217, 2, 215, 2, // Opcode: BGEZALC
/* 525 */     MCD::OPC_FilterValue, 7, 9, 0, // Skip to: 538
/* 529 */     MCD::OPC_CheckPredicate, 75, 138, 5, // Skip to: 1951
/* 533 */     MCD::OPC_Decode, 170, 3, 216, 2, // Opcode: BLTZALC
/* 538 */     MCD::OPC_FilterValue, 8, 9, 0, // Skip to: 551
/* 542 */     MCD::OPC_CheckPredicate, 75, 125, 5, // Skip to: 1951
/* 546 */     MCD::OPC_Decode, 186, 2, 217, 2, // Opcode: BEQC
/* 551 */     MCD::OPC_FilterValue, 15, 8, 0, // Skip to: 563
/* 555 */     MCD::OPC_CheckPredicate, 74, 112, 5, // Skip to: 1951
/* 559 */     MCD::OPC_Decode, 245, 1, 93, // Opcode: AUI
/* 563 */     MCD::OPC_FilterValue, 16, 39, 0, // Skip to: 606
/* 567 */     MCD::OPC_ExtractField, 0, 16,  // Inst{15-0} ...
/* 570 */     MCD::OPC_FilterValue, 4, 14, 0, // Skip to: 588
/* 574 */     MCD::OPC_CheckPredicate, 74, 93, 5, // Skip to: 1951
/* 578 */     MCD::OPC_CheckField, 21, 5, 11, 87, 5, // Skip to: 1951
/* 584 */     MCD::OPC_Decode, 151, 8, 73, // Opcode: EVP
/* 588 */     MCD::OPC_FilterValue, 36, 79, 5, // Skip to: 1951
/* 592 */     MCD::OPC_CheckPredicate, 74, 75, 5, // Skip to: 1951
/* 596 */     MCD::OPC_CheckField, 21, 5, 11, 69, 5, // Skip to: 1951
/* 602 */     MCD::OPC_Decode, 135, 8, 73, // Opcode: DVP
/* 606 */     MCD::OPC_FilterValue, 17, 15, 3, // Skip to: 1393
/* 610 */     MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 613 */     MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 626
/* 617 */     MCD::OPC_CheckPredicate, 78, 50, 5, // Skip to: 1951
/* 621 */     MCD::OPC_Decode, 161, 2, 218, 2, // Opcode: BC1EQZ
/* 626 */     MCD::OPC_FilterValue, 13, 9, 0, // Skip to: 639
/* 630 */     MCD::OPC_CheckPredicate, 78, 37, 5, // Skip to: 1951
/* 634 */     MCD::OPC_Decode, 166, 2, 218, 2, // Opcode: BC1NEZ
/* 639 */     MCD::OPC_FilterValue, 16, 158, 0, // Skip to: 801
/* 643 */     MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 646 */     MCD::OPC_FilterValue, 16, 9, 0, // Skip to: 659
/* 650 */     MCD::OPC_CheckPredicate, 78, 17, 5, // Skip to: 1951
/* 654 */     MCD::OPC_Decode, 191, 16, 219, 2, // Opcode: SEL_S
/* 659 */     MCD::OPC_FilterValue, 20, 9, 0, // Skip to: 672
/* 663 */     MCD::OPC_CheckPredicate, 78, 4, 5, // Skip to: 1951
/* 667 */     MCD::OPC_Decode, 180, 16, 209, 1, // Opcode: SELEQZ_S
/* 672 */     MCD::OPC_FilterValue, 23, 9, 0, // Skip to: 685
/* 676 */     MCD::OPC_CheckPredicate, 78, 247, 4, // Skip to: 1951
/* 680 */     MCD::OPC_Decode, 187, 16, 209, 1, // Opcode: SELNEZ_S
/* 685 */     MCD::OPC_FilterValue, 24, 9, 0, // Skip to: 698
/* 689 */     MCD::OPC_CheckPredicate, 78, 234, 4, // Skip to: 1951
/* 693 */     MCD::OPC_Decode, 238, 11, 220, 2, // Opcode: MADDF_S
/* 698 */     MCD::OPC_FilterValue, 25, 9, 0, // Skip to: 711
/* 702 */     MCD::OPC_CheckPredicate, 78, 221, 4, // Skip to: 1951
/* 706 */     MCD::OPC_Decode, 161, 13, 220, 2, // Opcode: MSUBF_S
/* 711 */     MCD::OPC_FilterValue, 26, 15, 0, // Skip to: 730
/* 715 */     MCD::OPC_CheckPredicate, 78, 208, 4, // Skip to: 1951
/* 719 */     MCD::OPC_CheckField, 16, 5, 0, 202, 4, // Skip to: 1951
/* 725 */     MCD::OPC_Decode, 213, 15, 210, 1, // Opcode: RINT_S
/* 730 */     MCD::OPC_FilterValue, 27, 15, 0, // Skip to: 749
/* 734 */     MCD::OPC_CheckPredicate, 78, 189, 4, // Skip to: 1951
/* 738 */     MCD::OPC_CheckField, 16, 5, 0, 183, 4, // Skip to: 1951
/* 744 */     MCD::OPC_Decode, 183, 4, 210, 1, // Opcode: CLASS_S
/* 749 */     MCD::OPC_FilterValue, 28, 9, 0, // Skip to: 762
/* 753 */     MCD::OPC_CheckPredicate, 78, 170, 4, // Skip to: 1951
/* 757 */     MCD::OPC_Decode, 212, 12, 209, 1, // Opcode: MIN_S
/* 762 */     MCD::OPC_FilterValue, 29, 9, 0, // Skip to: 775
/* 766 */     MCD::OPC_CheckPredicate, 78, 157, 4, // Skip to: 1951
/* 770 */     MCD::OPC_Decode, 158, 12, 209, 1, // Opcode: MAX_S
/* 775 */     MCD::OPC_FilterValue, 30, 9, 0, // Skip to: 788
/* 779 */     MCD::OPC_CheckPredicate, 78, 144, 4, // Skip to: 1951
/* 783 */     MCD::OPC_Decode, 196, 12, 209, 1, // Opcode: MINA_S
/* 788 */     MCD::OPC_FilterValue, 31, 135, 4, // Skip to: 1951
/* 792 */     MCD::OPC_CheckPredicate, 78, 131, 4, // Skip to: 1951
/* 796 */     MCD::OPC_Decode, 142, 12, 209, 1, // Opcode: MAXA_S
/* 801 */     MCD::OPC_FilterValue, 17, 158, 0, // Skip to: 963
/* 805 */     MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 808 */     MCD::OPC_FilterValue, 16, 9, 0, // Skip to: 821
/* 812 */     MCD::OPC_CheckPredicate, 78, 111, 4, // Skip to: 1951
/* 816 */     MCD::OPC_Decode, 189, 16, 221, 2, // Opcode: SEL_D
/* 821 */     MCD::OPC_FilterValue, 20, 9, 0, // Skip to: 834
/* 825 */     MCD::OPC_CheckPredicate, 78, 98, 4, // Skip to: 1951
/* 829 */     MCD::OPC_Decode, 177, 16, 222, 2, // Opcode: SELEQZ_D
/* 834 */     MCD::OPC_FilterValue, 23, 9, 0, // Skip to: 847
/* 838 */     MCD::OPC_CheckPredicate, 78, 85, 4, // Skip to: 1951
/* 842 */     MCD::OPC_Decode, 184, 16, 222, 2, // Opcode: SELNEZ_D
/* 847 */     MCD::OPC_FilterValue, 24, 9, 0, // Skip to: 860
/* 851 */     MCD::OPC_CheckPredicate, 78, 72, 4, // Skip to: 1951
/* 855 */     MCD::OPC_Decode, 236, 11, 223, 2, // Opcode: MADDF_D
/* 860 */     MCD::OPC_FilterValue, 25, 9, 0, // Skip to: 873
/* 864 */     MCD::OPC_CheckPredicate, 78, 59, 4, // Skip to: 1951
/* 868 */     MCD::OPC_Decode, 159, 13, 223, 2, // Opcode: MSUBF_D
/* 873 */     MCD::OPC_FilterValue, 26, 15, 0, // Skip to: 892
/* 877 */     MCD::OPC_CheckPredicate, 78, 46, 4, // Skip to: 1951
/* 881 */     MCD::OPC_CheckField, 16, 5, 0, 40, 4, // Skip to: 1951
/* 887 */     MCD::OPC_Decode, 211, 15, 221, 1, // Opcode: RINT_D
/* 892 */     MCD::OPC_FilterValue, 27, 15, 0, // Skip to: 911
/* 896 */     MCD::OPC_CheckPredicate, 78, 27, 4, // Skip to: 1951
/* 900 */     MCD::OPC_CheckField, 16, 5, 0, 21, 4, // Skip to: 1951
/* 906 */     MCD::OPC_Decode, 181, 4, 221, 1, // Opcode: CLASS_D
/* 911 */     MCD::OPC_FilterValue, 28, 9, 0, // Skip to: 924
/* 915 */     MCD::OPC_CheckPredicate, 78, 8, 4, // Skip to: 1951
/* 919 */     MCD::OPC_Decode, 210, 12, 222, 2, // Opcode: MIN_D
/* 924 */     MCD::OPC_FilterValue, 29, 9, 0, // Skip to: 937
/* 928 */     MCD::OPC_CheckPredicate, 78, 251, 3, // Skip to: 1951
/* 932 */     MCD::OPC_Decode, 156, 12, 222, 2, // Opcode: MAX_D
/* 937 */     MCD::OPC_FilterValue, 30, 9, 0, // Skip to: 950
/* 941 */     MCD::OPC_CheckPredicate, 78, 238, 3, // Skip to: 1951
/* 945 */     MCD::OPC_Decode, 194, 12, 222, 2, // Opcode: MINA_D
/* 950 */     MCD::OPC_FilterValue, 31, 229, 3, // Skip to: 1951
/* 954 */     MCD::OPC_CheckPredicate, 78, 225, 3, // Skip to: 1951
/* 958 */     MCD::OPC_Decode, 140, 12, 222, 2, // Opcode: MAXA_D
/* 963 */     MCD::OPC_FilterValue, 20, 211, 0, // Skip to: 1178
/* 967 */     MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 970 */     MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 983
/* 974 */     MCD::OPC_CheckPredicate, 78, 205, 3, // Skip to: 1951
/* 978 */     MCD::OPC_Decode, 252, 4, 224, 2, // Opcode: CMP_F_S
/* 983 */     MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 996
/* 987 */     MCD::OPC_CheckPredicate, 78, 192, 3, // Skip to: 1951
/* 991 */     MCD::OPC_Decode, 183, 5, 224, 2, // Opcode: CMP_UN_S
/* 996 */     MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 1009
/* 1000 */    MCD::OPC_CheckPredicate, 78, 179, 3, // Skip to: 1951
/* 1004 */    MCD::OPC_Decode, 249, 4, 224, 2, // Opcode: CMP_EQ_S
/* 1009 */    MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 1022
/* 1013 */    MCD::OPC_CheckPredicate, 78, 166, 3, // Skip to: 1951
/* 1017 */    MCD::OPC_Decode, 171, 5, 224, 2, // Opcode: CMP_UEQ_S
/* 1022 */    MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 1035
/* 1026 */    MCD::OPC_CheckPredicate, 78, 153, 3, // Skip to: 1951
/* 1030 */    MCD::OPC_Decode, 135, 5, 224, 2, // Opcode: CMP_LT_S
/* 1035 */    MCD::OPC_FilterValue, 5, 9, 0, // Skip to: 1048
/* 1039 */    MCD::OPC_CheckPredicate, 78, 140, 3, // Skip to: 1951
/* 1043 */    MCD::OPC_Decode, 179, 5, 224, 2, // Opcode: CMP_ULT_S
/* 1048 */    MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 1061
/* 1052 */    MCD::OPC_CheckPredicate, 78, 127, 3, // Skip to: 1951
/* 1056 */    MCD::OPC_Decode, 129, 5, 224, 2, // Opcode: CMP_LE_S
/* 1061 */    MCD::OPC_FilterValue, 7, 9, 0, // Skip to: 1074
/* 1065 */    MCD::OPC_CheckPredicate, 78, 114, 3, // Skip to: 1951
/* 1069 */    MCD::OPC_Decode, 175, 5, 224, 2, // Opcode: CMP_ULE_S
/* 1074 */    MCD::OPC_FilterValue, 8, 9, 0, // Skip to: 1087
/* 1078 */    MCD::OPC_CheckPredicate, 78, 101, 3, // Skip to: 1951
/* 1082 */    MCD::OPC_Decode, 139, 5, 224, 2, // Opcode: CMP_SAF_S
/* 1087 */    MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 1100
/* 1091 */    MCD::OPC_CheckPredicate, 78, 88, 3, // Skip to: 1951
/* 1095 */    MCD::OPC_Decode, 167, 5, 224, 2, // Opcode: CMP_SUN_S
/* 1100 */    MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 1113
/* 1104 */    MCD::OPC_CheckPredicate, 78, 75, 3, // Skip to: 1951
/* 1108 */    MCD::OPC_Decode, 143, 5, 224, 2, // Opcode: CMP_SEQ_S
/* 1113 */    MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 1126
/* 1117 */    MCD::OPC_CheckPredicate, 78, 62, 3, // Skip to: 1951
/* 1121 */    MCD::OPC_Decode, 155, 5, 224, 2, // Opcode: CMP_SUEQ_S
/* 1126 */    MCD::OPC_FilterValue, 12, 9, 0, // Skip to: 1139
/* 1130 */    MCD::OPC_CheckPredicate, 78, 49, 3, // Skip to: 1951
/* 1134 */    MCD::OPC_Decode, 151, 5, 224, 2, // Opcode: CMP_SLT_S
/* 1139 */    MCD::OPC_FilterValue, 13, 9, 0, // Skip to: 1152
/* 1143 */    MCD::OPC_CheckPredicate, 78, 36, 3, // Skip to: 1951
/* 1147 */    MCD::OPC_Decode, 163, 5, 224, 2, // Opcode: CMP_SULT_S
/* 1152 */    MCD::OPC_FilterValue, 14, 9, 0, // Skip to: 1165
/* 1156 */    MCD::OPC_CheckPredicate, 78, 23, 3, // Skip to: 1951
/* 1160 */    MCD::OPC_Decode, 147, 5, 224, 2, // Opcode: CMP_SLE_S
/* 1165 */    MCD::OPC_FilterValue, 15, 14, 3, // Skip to: 1951
/* 1169 */    MCD::OPC_CheckPredicate, 78, 10, 3, // Skip to: 1951
/* 1173 */    MCD::OPC_Decode, 159, 5, 224, 2, // Opcode: CMP_SULE_S
/* 1178 */    MCD::OPC_FilterValue, 21, 1, 3, // Skip to: 1951
/* 1182 */    MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 1185 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 1198
/* 1189 */    MCD::OPC_CheckPredicate, 78, 246, 2, // Skip to: 1951
/* 1193 */    MCD::OPC_Decode, 251, 4, 225, 2, // Opcode: CMP_F_D
/* 1198 */    MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 1211
/* 1202 */    MCD::OPC_CheckPredicate, 78, 233, 2, // Skip to: 1951
/* 1206 */    MCD::OPC_Decode, 181, 5, 225, 2, // Opcode: CMP_UN_D
/* 1211 */    MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 1224
/* 1215 */    MCD::OPC_CheckPredicate, 78, 220, 2, // Skip to: 1951
/* 1219 */    MCD::OPC_Decode, 245, 4, 225, 2, // Opcode: CMP_EQ_D
/* 1224 */    MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 1237
/* 1228 */    MCD::OPC_CheckPredicate, 78, 207, 2, // Skip to: 1951
/* 1232 */    MCD::OPC_Decode, 169, 5, 225, 2, // Opcode: CMP_UEQ_D
/* 1237 */    MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 1250
/* 1241 */    MCD::OPC_CheckPredicate, 78, 194, 2, // Skip to: 1951
/* 1245 */    MCD::OPC_Decode, 131, 5, 225, 2, // Opcode: CMP_LT_D
/* 1250 */    MCD::OPC_FilterValue, 5, 9, 0, // Skip to: 1263
/* 1254 */    MCD::OPC_CheckPredicate, 78, 181, 2, // Skip to: 1951
/* 1258 */    MCD::OPC_Decode, 177, 5, 225, 2, // Opcode: CMP_ULT_D
/* 1263 */    MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 1276
/* 1267 */    MCD::OPC_CheckPredicate, 78, 168, 2, // Skip to: 1951
/* 1271 */    MCD::OPC_Decode, 253, 4, 225, 2, // Opcode: CMP_LE_D
/* 1276 */    MCD::OPC_FilterValue, 7, 9, 0, // Skip to: 1289
/* 1280 */    MCD::OPC_CheckPredicate, 78, 155, 2, // Skip to: 1951
/* 1284 */    MCD::OPC_Decode, 173, 5, 225, 2, // Opcode: CMP_ULE_D
/* 1289 */    MCD::OPC_FilterValue, 8, 9, 0, // Skip to: 1302
/* 1293 */    MCD::OPC_CheckPredicate, 78, 142, 2, // Skip to: 1951
/* 1297 */    MCD::OPC_Decode, 137, 5, 225, 2, // Opcode: CMP_SAF_D
/* 1302 */    MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 1315
/* 1306 */    MCD::OPC_CheckPredicate, 78, 129, 2, // Skip to: 1951
/* 1310 */    MCD::OPC_Decode, 165, 5, 225, 2, // Opcode: CMP_SUN_D
/* 1315 */    MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 1328
/* 1319 */    MCD::OPC_CheckPredicate, 78, 116, 2, // Skip to: 1951
/* 1323 */    MCD::OPC_Decode, 141, 5, 225, 2, // Opcode: CMP_SEQ_D
/* 1328 */    MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 1341
/* 1332 */    MCD::OPC_CheckPredicate, 78, 103, 2, // Skip to: 1951
/* 1336 */    MCD::OPC_Decode, 153, 5, 225, 2, // Opcode: CMP_SUEQ_D
/* 1341 */    MCD::OPC_FilterValue, 12, 9, 0, // Skip to: 1354
/* 1345 */    MCD::OPC_CheckPredicate, 78, 90, 2, // Skip to: 1951
/* 1349 */    MCD::OPC_Decode, 149, 5, 225, 2, // Opcode: CMP_SLT_D
/* 1354 */    MCD::OPC_FilterValue, 13, 9, 0, // Skip to: 1367
/* 1358 */    MCD::OPC_CheckPredicate, 78, 77, 2, // Skip to: 1951
/* 1362 */    MCD::OPC_Decode, 161, 5, 225, 2, // Opcode: CMP_SULT_D
/* 1367 */    MCD::OPC_FilterValue, 14, 9, 0, // Skip to: 1380
/* 1371 */    MCD::OPC_CheckPredicate, 78, 64, 2, // Skip to: 1951
/* 1375 */    MCD::OPC_Decode, 145, 5, 225, 2, // Opcode: CMP_SLE_D
/* 1380 */    MCD::OPC_FilterValue, 15, 55, 2, // Skip to: 1951
/* 1384 */    MCD::OPC_CheckPredicate, 78, 51, 2, // Skip to: 1951
/* 1388 */    MCD::OPC_Decode, 157, 5, 225, 2, // Opcode: CMP_SULE_D
/* 1393 */    MCD::OPC_FilterValue, 18, 81, 0, // Skip to: 1478
/* 1397 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 1400 */    MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 1413
/* 1404 */    MCD::OPC_CheckPredicate, 75, 31, 2, // Skip to: 1951
/* 1408 */    MCD::OPC_Decode, 171, 2, 226, 2, // Opcode: BC2EQZ
/* 1413 */    MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 1426
/* 1417 */    MCD::OPC_CheckPredicate, 75, 18, 2, // Skip to: 1951
/* 1421 */    MCD::OPC_Decode, 175, 11, 227, 2, // Opcode: LWC2_R6
/* 1426 */    MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 1439
/* 1430 */    MCD::OPC_CheckPredicate, 75, 5, 2, // Skip to: 1951
/* 1434 */    MCD::OPC_Decode, 180, 18, 227, 2, // Opcode: SWC2_R6
/* 1439 */    MCD::OPC_FilterValue, 13, 9, 0, // Skip to: 1452
/* 1443 */    MCD::OPC_CheckPredicate, 75, 248, 1, // Skip to: 1951
/* 1447 */    MCD::OPC_Decode, 173, 2, 226, 2, // Opcode: BC2NEZ
/* 1452 */    MCD::OPC_FilterValue, 14, 9, 0, // Skip to: 1465
/* 1456 */    MCD::OPC_CheckPredicate, 75, 235, 1, // Skip to: 1951
/* 1460 */    MCD::OPC_Decode, 231, 10, 227, 2, // Opcode: LDC2_R6
/* 1465 */    MCD::OPC_FilterValue, 15, 226, 1, // Skip to: 1951
/* 1469 */    MCD::OPC_CheckPredicate, 75, 222, 1, // Skip to: 1951
/* 1473 */    MCD::OPC_Decode, 154, 16, 227, 2, // Opcode: SDC2_R6
/* 1478 */    MCD::OPC_FilterValue, 22, 9, 0, // Skip to: 1491
/* 1482 */    MCD::OPC_CheckPredicate, 75, 209, 1, // Skip to: 1951
/* 1486 */    MCD::OPC_Decode, 222, 2, 228, 2, // Opcode: BGEZC
/* 1491 */    MCD::OPC_FilterValue, 23, 9, 0, // Skip to: 1504
/* 1495 */    MCD::OPC_CheckPredicate, 75, 196, 1, // Skip to: 1951
/* 1499 */    MCD::OPC_Decode, 175, 3, 229, 2, // Opcode: BLTZC
/* 1504 */    MCD::OPC_FilterValue, 24, 9, 0, // Skip to: 1517
/* 1508 */    MCD::OPC_CheckPredicate, 75, 183, 1, // Skip to: 1951
/* 1512 */    MCD::OPC_Decode, 186, 3, 230, 2, // Opcode: BNEC
/* 1517 */    MCD::OPC_FilterValue, 29, 9, 0, // Skip to: 1530
/* 1521 */    MCD::OPC_CheckPredicate, 76, 170, 1, // Skip to: 1951
/* 1525 */    MCD::OPC_Decode, 216, 6, 175, 1, // Opcode: DAUI
/* 1530 */    MCD::OPC_FilterValue, 31, 183, 0, // Skip to: 1717
/* 1534 */    MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 1537 */    MCD::OPC_FilterValue, 32, 41, 0, // Skip to: 1582
/* 1541 */    MCD::OPC_ExtractField, 8, 3,  // Inst{10-8} ...
/* 1544 */    MCD::OPC_FilterValue, 0, 21, 0, // Skip to: 1569
/* 1548 */    MCD::OPC_CheckPredicate, 74, 143, 1, // Skip to: 1951
/* 1552 */    MCD::OPC_CheckField, 21, 5, 0, 137, 1, // Skip to: 1951
/* 1558 */    MCD::OPC_CheckField, 6, 2, 0, 131, 1, // Skip to: 1951
/* 1564 */    MCD::OPC_Decode, 134, 3, 196, 2, // Opcode: BITSWAP
/* 1569 */    MCD::OPC_FilterValue, 2, 122, 1, // Skip to: 1951
/* 1573 */    MCD::OPC_CheckPredicate, 74, 118, 1, // Skip to: 1951
/* 1577 */    MCD::OPC_Decode, 182, 1, 231, 2, // Opcode: ALIGN
/* 1582 */    MCD::OPC_FilterValue, 36, 41, 0, // Skip to: 1627
/* 1586 */    MCD::OPC_ExtractField, 9, 2,  // Inst{10-9} ...
/* 1589 */    MCD::OPC_FilterValue, 0, 21, 0, // Skip to: 1614
/* 1593 */    MCD::OPC_CheckPredicate, 76, 98, 1, // Skip to: 1951
/* 1597 */    MCD::OPC_CheckField, 21, 5, 0, 92, 1, // Skip to: 1951
/* 1603 */    MCD::OPC_CheckField, 6, 3, 0, 86, 1, // Skip to: 1951
/* 1609 */    MCD::OPC_Decode, 218, 6, 232, 2, // Opcode: DBITSWAP
/* 1614 */    MCD::OPC_FilterValue, 1, 77, 1, // Skip to: 1951
/* 1618 */    MCD::OPC_CheckPredicate, 76, 73, 1, // Skip to: 1951
/* 1622 */    MCD::OPC_Decode, 212, 6, 233, 2, // Opcode: DALIGN
/* 1627 */    MCD::OPC_FilterValue, 37, 15, 0, // Skip to: 1646
/* 1631 */    MCD::OPC_CheckPredicate, 74, 60, 1, // Skip to: 1951
/* 1635 */    MCD::OPC_CheckField, 6, 1, 0, 54, 1, // Skip to: 1951
/* 1641 */    MCD::OPC_Decode, 153, 4, 201, 2, // Opcode: CACHE_R6
/* 1646 */    MCD::OPC_FilterValue, 38, 9, 0, // Skip to: 1659
/* 1650 */    MCD::OPC_CheckPredicate, 79, 41, 1, // Skip to: 1951
/* 1654 */    MCD::OPC_Decode, 140, 16, 234, 2, // Opcode: SC_R6
/* 1659 */    MCD::OPC_FilterValue, 39, 9, 0, // Skip to: 1672
/* 1663 */    MCD::OPC_CheckPredicate, 74, 28, 1, // Skip to: 1951
/* 1667 */    MCD::OPC_Decode, 135, 16, 234, 2, // Opcode: SCD_R6
/* 1672 */    MCD::OPC_FilterValue, 53, 15, 0, // Skip to: 1691
/* 1676 */    MCD::OPC_CheckPredicate, 74, 15, 1, // Skip to: 1951
/* 1680 */    MCD::OPC_CheckField, 6, 1, 0, 9, 1, // Skip to: 1951
/* 1686 */    MCD::OPC_Decode, 133, 15, 201, 2, // Opcode: PREF_R6
/* 1691 */    MCD::OPC_FilterValue, 54, 9, 0, // Skip to: 1704
/* 1695 */    MCD::OPC_CheckPredicate, 79, 252, 0, // Skip to: 1951
/* 1699 */    MCD::OPC_Decode, 150, 11, 234, 2, // Opcode: LL_R6
/* 1704 */    MCD::OPC_FilterValue, 55, 243, 0, // Skip to: 1951
/* 1708 */    MCD::OPC_CheckPredicate, 76, 239, 0, // Skip to: 1951
/* 1712 */    MCD::OPC_Decode, 145, 11, 234, 2, // Opcode: LLD_R6
/* 1717 */    MCD::OPC_FilterValue, 50, 9, 0, // Skip to: 1730
/* 1721 */    MCD::OPC_CheckPredicate, 74, 226, 0, // Skip to: 1951
/* 1725 */    MCD::OPC_Decode, 159, 2, 235, 2, // Opcode: BC
/* 1730 */    MCD::OPC_FilterValue, 53, 24, 0, // Skip to: 1758
/* 1734 */    MCD::OPC_CheckPredicate, 18, 11, 0, // Skip to: 1749
/* 1738 */    MCD::OPC_CheckField, 16, 5, 0, 5, 0, // Skip to: 1749
/* 1744 */    MCD::OPC_Decode, 241, 2, 173, 1, // Opcode: BGTZC_MMR6
/* 1749 */    MCD::OPC_CheckPredicate, 18, 198, 0, // Skip to: 1951
/* 1753 */    MCD::OPC_Decode, 177, 3, 173, 1, // Opcode: BLTZC_MMR6
/* 1758 */    MCD::OPC_FilterValue, 54, 23, 0, // Skip to: 1785
/* 1762 */    MCD::OPC_CheckPredicate, 74, 10, 0, // Skip to: 1776
/* 1766 */    MCD::OPC_CheckField, 21, 5, 0, 4, 0, // Skip to: 1776
/* 1772 */    MCD::OPC_Decode, 185, 10, 89, // Opcode: JIC
/* 1776 */    MCD::OPC_CheckPredicate, 75, 171, 0, // Skip to: 1951
/* 1780 */    MCD::OPC_Decode, 194, 2, 236, 2, // Opcode: BEQZC
/* 1785 */    MCD::OPC_FilterValue, 58, 9, 0, // Skip to: 1798
/* 1789 */    MCD::OPC_CheckPredicate, 74, 158, 0, // Skip to: 1951
/* 1793 */    MCD::OPC_Decode, 150, 2, 235, 2, // Opcode: BALC
/* 1798 */    MCD::OPC_FilterValue, 59, 94, 0, // Skip to: 1896
/* 1802 */    MCD::OPC_ExtractField, 19, 2,  // Inst{20-19} ...
/* 1805 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 1817
/* 1809 */    MCD::OPC_CheckPredicate, 74, 138, 0, // Skip to: 1951
/* 1813 */    MCD::OPC_Decode, 107, 165, 1, // Opcode: ADDIUPC
/* 1817 */    MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 1830
/* 1821 */    MCD::OPC_CheckPredicate, 74, 126, 0, // Skip to: 1951
/* 1825 */    MCD::OPC_Decode, 190, 11, 165, 1, // Opcode: LWPC
/* 1830 */    MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 1843
/* 1834 */    MCD::OPC_CheckPredicate, 75, 113, 0, // Skip to: 1951
/* 1838 */    MCD::OPC_Decode, 200, 11, 165, 1, // Opcode: LWUPC
/* 1843 */    MCD::OPC_FilterValue, 3, 104, 0, // Skip to: 1951
/* 1847 */    MCD::OPC_ExtractField, 18, 1,  // Inst{18} ...
/* 1850 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 1863
/* 1854 */    MCD::OPC_CheckPredicate, 80, 93, 0, // Skip to: 1951
/* 1858 */    MCD::OPC_Decode, 239, 10, 167, 1, // Opcode: LDPC
/* 1863 */    MCD::OPC_FilterValue, 1, 84, 0, // Skip to: 1951
/* 1867 */    MCD::OPC_ExtractField, 16, 2,  // Inst{17-16} ...
/* 1870 */    MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 1883
/* 1874 */    MCD::OPC_CheckPredicate, 74, 73, 0, // Skip to: 1951
/* 1878 */    MCD::OPC_Decode, 246, 1, 168, 1, // Opcode: AUIPC
/* 1883 */    MCD::OPC_FilterValue, 3, 64, 0, // Skip to: 1951
/* 1887 */    MCD::OPC_CheckPredicate, 74, 60, 0, // Skip to: 1951
/* 1891 */    MCD::OPC_Decode, 184, 1, 168, 1, // Opcode: ALUIPC
/* 1896 */    MCD::OPC_FilterValue, 61, 24, 0, // Skip to: 1924
/* 1900 */    MCD::OPC_CheckPredicate, 18, 11, 0, // Skip to: 1915
/* 1904 */    MCD::OPC_CheckField, 16, 5, 0, 5, 0, // Skip to: 1915
/* 1910 */    MCD::OPC_Decode, 150, 3, 176, 1, // Opcode: BLEZC_MMR6
/* 1915 */    MCD::OPC_CheckPredicate, 18, 32, 0, // Skip to: 1951
/* 1919 */    MCD::OPC_Decode, 224, 2, 176, 1, // Opcode: BGEZC_MMR6
/* 1924 */    MCD::OPC_FilterValue, 62, 23, 0, // Skip to: 1951
/* 1928 */    MCD::OPC_CheckPredicate, 74, 10, 0, // Skip to: 1942
/* 1932 */    MCD::OPC_CheckField, 21, 5, 0, 4, 0, // Skip to: 1942
/* 1938 */    MCD::OPC_Decode, 182, 10, 89, // Opcode: JIALC
/* 1942 */    MCD::OPC_CheckPredicate, 75, 5, 0, // Skip to: 1951
/* 1946 */    MCD::OPC_Decode, 202, 3, 236, 2, // Opcode: BNEZC
/* 1951 */    MCD::OPC_Fail,
  0
};

static const uint8_t DecoderTableMips32r6_64r6_Ambiguous32[] = {
/* 0 */       MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 3 */       MCD::OPC_FilterValue, 6, 24, 0, // Skip to: 31
/* 7 */       MCD::OPC_CheckPredicate, 75, 11, 0, // Skip to: 22
/* 11 */      MCD::OPC_CheckField, 21, 5, 0, 5, 0, // Skip to: 22
/* 17 */      MCD::OPC_Decode, 146, 3, 215, 2, // Opcode: BLEZALC
/* 22 */      MCD::OPC_CheckPredicate, 75, 145, 0, // Skip to: 171
/* 26 */      MCD::OPC_Decode, 208, 2, 215, 2, // Opcode: BGEUC
/* 31 */      MCD::OPC_FilterValue, 7, 24, 0, // Skip to: 59
/* 35 */      MCD::OPC_CheckPredicate, 75, 11, 0, // Skip to: 50
/* 39 */      MCD::OPC_CheckField, 21, 5, 0, 5, 0, // Skip to: 50
/* 45 */      MCD::OPC_Decode, 237, 2, 216, 2, // Opcode: BGTZALC
/* 50 */      MCD::OPC_CheckPredicate, 75, 117, 0, // Skip to: 171
/* 54 */      MCD::OPC_Decode, 161, 3, 216, 2, // Opcode: BLTUC
/* 59 */      MCD::OPC_FilterValue, 8, 24, 0, // Skip to: 87
/* 63 */      MCD::OPC_CheckPredicate, 75, 11, 0, // Skip to: 78
/* 67 */      MCD::OPC_CheckField, 21, 5, 0, 5, 0, // Skip to: 78
/* 73 */      MCD::OPC_Decode, 192, 2, 230, 2, // Opcode: BEQZALC
/* 78 */      MCD::OPC_CheckPredicate, 75, 89, 0, // Skip to: 171
/* 82 */      MCD::OPC_Decode, 215, 3, 217, 2, // Opcode: BOVC
/* 87 */      MCD::OPC_FilterValue, 22, 24, 0, // Skip to: 115
/* 91 */      MCD::OPC_CheckPredicate, 75, 11, 0, // Skip to: 106
/* 95 */      MCD::OPC_CheckField, 21, 5, 0, 5, 0, // Skip to: 106
/* 101 */     MCD::OPC_Decode, 148, 3, 228, 2, // Opcode: BLEZC
/* 106 */     MCD::OPC_CheckPredicate, 75, 61, 0, // Skip to: 171
/* 110 */     MCD::OPC_Decode, 201, 2, 228, 2, // Opcode: BGEC
/* 115 */     MCD::OPC_FilterValue, 23, 24, 0, // Skip to: 143
/* 119 */     MCD::OPC_CheckPredicate, 75, 11, 0, // Skip to: 134
/* 123 */     MCD::OPC_CheckField, 21, 5, 0, 5, 0, // Skip to: 134
/* 129 */     MCD::OPC_Decode, 239, 2, 229, 2, // Opcode: BGTZC
/* 134 */     MCD::OPC_CheckPredicate, 75, 33, 0, // Skip to: 171
/* 138 */     MCD::OPC_Decode, 154, 3, 229, 2, // Opcode: BLTC
/* 143 */     MCD::OPC_FilterValue, 24, 24, 0, // Skip to: 171
/* 147 */     MCD::OPC_CheckPredicate, 75, 11, 0, // Skip to: 162
/* 151 */     MCD::OPC_CheckField, 21, 5, 0, 5, 0, // Skip to: 162
/* 157 */     MCD::OPC_Decode, 200, 3, 230, 2, // Opcode: BNEZALC
/* 162 */     MCD::OPC_CheckPredicate, 75, 5, 0, // Skip to: 171
/* 166 */     MCD::OPC_Decode, 208, 3, 230, 2, // Opcode: BNVC
/* 171 */     MCD::OPC_Fail,
  0
};

static const uint8_t DecoderTableMips32r6_64r6_BranchZero32[] = {
/* 0 */       MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 3 */       MCD::OPC_FilterValue, 22, 9, 0, // Skip to: 16
/* 7 */       MCD::OPC_CheckPredicate, 81, 18, 0, // Skip to: 29
/* 11 */      MCD::OPC_Decode, 223, 2, 228, 2, // Opcode: BGEZC64
/* 16 */      MCD::OPC_FilterValue, 23, 9, 0, // Skip to: 29
/* 20 */      MCD::OPC_CheckPredicate, 81, 5, 0, // Skip to: 29
/* 24 */      MCD::OPC_Decode, 176, 3, 229, 2, // Opcode: BLTZC64
/* 29 */      MCD::OPC_Fail,
  0
};

static const uint8_t DecoderTableMips32r6_64r6_GP6432[] = {
/* 0 */       MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 3 */       MCD::OPC_FilterValue, 0, 27, 0, // Skip to: 34
/* 7 */       MCD::OPC_ExtractField, 0, 11,  // Inst{10-0} ...
/* 10 */      MCD::OPC_FilterValue, 53, 8, 0, // Skip to: 22
/* 14 */      MCD::OPC_CheckPredicate, 82, 178, 0, // Skip to: 196
/* 18 */      MCD::OPC_Decode, 176, 16, 12, // Opcode: SELEQZ64
/* 22 */      MCD::OPC_FilterValue, 55, 170, 0, // Skip to: 196
/* 26 */      MCD::OPC_CheckPredicate, 82, 166, 0, // Skip to: 196
/* 30 */      MCD::OPC_Decode, 183, 16, 12, // Opcode: SELNEZ64
/* 34 */      MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 47
/* 38 */      MCD::OPC_CheckPredicate, 81, 154, 0, // Skip to: 196
/* 42 */      MCD::OPC_Decode, 209, 2, 215, 2, // Opcode: BGEUC64
/* 47 */      MCD::OPC_FilterValue, 7, 9, 0, // Skip to: 60
/* 51 */      MCD::OPC_CheckPredicate, 81, 141, 0, // Skip to: 196
/* 55 */      MCD::OPC_Decode, 162, 3, 216, 2, // Opcode: BLTUC64
/* 60 */      MCD::OPC_FilterValue, 8, 9, 0, // Skip to: 73
/* 64 */      MCD::OPC_CheckPredicate, 81, 128, 0, // Skip to: 196
/* 68 */      MCD::OPC_Decode, 187, 2, 217, 2, // Opcode: BEQC64
/* 73 */      MCD::OPC_FilterValue, 22, 24, 0, // Skip to: 101
/* 77 */      MCD::OPC_CheckPredicate, 81, 11, 0, // Skip to: 92
/* 81 */      MCD::OPC_CheckField, 21, 5, 0, 5, 0, // Skip to: 92
/* 87 */      MCD::OPC_Decode, 149, 3, 228, 2, // Opcode: BLEZC64
/* 92 */      MCD::OPC_CheckPredicate, 81, 100, 0, // Skip to: 196
/* 96 */      MCD::OPC_Decode, 202, 2, 228, 2, // Opcode: BGEC64
/* 101 */     MCD::OPC_FilterValue, 23, 24, 0, // Skip to: 129
/* 105 */     MCD::OPC_CheckPredicate, 81, 11, 0, // Skip to: 120
/* 109 */     MCD::OPC_CheckField, 21, 5, 0, 5, 0, // Skip to: 120
/* 115 */     MCD::OPC_Decode, 240, 2, 229, 2, // Opcode: BGTZC64
/* 120 */     MCD::OPC_CheckPredicate, 81, 72, 0, // Skip to: 196
/* 124 */     MCD::OPC_Decode, 155, 3, 229, 2, // Opcode: BLTC64
/* 129 */     MCD::OPC_FilterValue, 24, 9, 0, // Skip to: 142
/* 133 */     MCD::OPC_CheckPredicate, 81, 59, 0, // Skip to: 196
/* 137 */     MCD::OPC_Decode, 187, 3, 230, 2, // Opcode: BNEC64
/* 142 */     MCD::OPC_FilterValue, 54, 23, 0, // Skip to: 169
/* 146 */     MCD::OPC_CheckPredicate, 81, 10, 0, // Skip to: 160
/* 150 */     MCD::OPC_CheckField, 21, 5, 0, 4, 0, // Skip to: 160
/* 156 */     MCD::OPC_Decode, 186, 10, 11, // Opcode: JIC64
/* 160 */     MCD::OPC_CheckPredicate, 81, 32, 0, // Skip to: 196
/* 164 */     MCD::OPC_Decode, 196, 2, 237, 2, // Opcode: BEQZC64
/* 169 */     MCD::OPC_FilterValue, 62, 23, 0, // Skip to: 196
/* 173 */     MCD::OPC_CheckPredicate, 81, 10, 0, // Skip to: 187
/* 177 */     MCD::OPC_CheckField, 21, 5, 0, 4, 0, // Skip to: 187
/* 183 */     MCD::OPC_Decode, 183, 10, 11, // Opcode: JIALC64
/* 187 */     MCD::OPC_CheckPredicate, 81, 5, 0, // Skip to: 196
/* 191 */     MCD::OPC_Decode, 204, 3, 237, 2, // Opcode: BNEZC64
/* 196 */     MCD::OPC_Fail,
  0
};

static const uint8_t DecoderTableMips32r6_64r6_PTR6432[] = {
/* 0 */       MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 3 */       MCD::OPC_FilterValue, 38, 15, 0, // Skip to: 22
/* 7 */       MCD::OPC_CheckPredicate, 83, 30, 0, // Skip to: 41
/* 11 */      MCD::OPC_CheckField, 26, 6, 31, 24, 0, // Skip to: 41
/* 17 */      MCD::OPC_Decode, 133, 16, 234, 2, // Opcode: SC64_R6
/* 22 */      MCD::OPC_FilterValue, 54, 15, 0, // Skip to: 41
/* 26 */      MCD::OPC_CheckPredicate, 83, 11, 0, // Skip to: 41
/* 30 */      MCD::OPC_CheckField, 26, 6, 31, 5, 0, // Skip to: 41
/* 36 */      MCD::OPC_Decode, 142, 11, 234, 2, // Opcode: LL64_R6
/* 41 */      MCD::OPC_Fail,
  0
};

static const uint8_t DecoderTableMips6432[] = {
/* 0 */       MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 3 */       MCD::OPC_FilterValue, 0, 132, 1, // Skip to: 395
/* 7 */       MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 10 */      MCD::OPC_FilterValue, 9, 20, 0, // Skip to: 34
/* 14 */      MCD::OPC_CheckPredicate, 22, 126, 8, // Skip to: 2192
/* 18 */      MCD::OPC_CheckField, 16, 5, 0, 120, 8, // Skip to: 2192
/* 24 */      MCD::OPC_CheckField, 6, 5, 0, 114, 8, // Skip to: 2192
/* 30 */      MCD::OPC_Decode, 168, 10, 15, // Opcode: JALR64
/* 34 */      MCD::OPC_FilterValue, 20, 15, 0, // Skip to: 53
/* 38 */      MCD::OPC_CheckPredicate, 84, 102, 8, // Skip to: 2192
/* 42 */      MCD::OPC_CheckField, 6, 5, 0, 96, 8, // Skip to: 2192
/* 48 */      MCD::OPC_Decode, 241, 7, 238, 2, // Opcode: DSLLV
/* 53 */      MCD::OPC_FilterValue, 22, 29, 0, // Skip to: 86
/* 57 */      MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 60 */      MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 73
/* 64 */      MCD::OPC_CheckPredicate, 84, 76, 8, // Skip to: 2192
/* 68 */      MCD::OPC_Decode, 253, 7, 238, 2, // Opcode: DSRLV
/* 73 */      MCD::OPC_FilterValue, 1, 67, 8, // Skip to: 2192
/* 77 */      MCD::OPC_CheckPredicate, 85, 63, 8, // Skip to: 2192
/* 81 */      MCD::OPC_Decode, 227, 7, 238, 2, // Opcode: DROTRV
/* 86 */      MCD::OPC_FilterValue, 23, 15, 0, // Skip to: 105
/* 90 */      MCD::OPC_CheckPredicate, 84, 50, 8, // Skip to: 2192
/* 94 */      MCD::OPC_CheckField, 6, 5, 0, 44, 8, // Skip to: 2192
/* 100 */     MCD::OPC_Decode, 247, 7, 238, 2, // Opcode: DSRAV
/* 105 */     MCD::OPC_FilterValue, 28, 15, 0, // Skip to: 124
/* 109 */     MCD::OPC_CheckPredicate, 86, 31, 8, // Skip to: 2192
/* 113 */     MCD::OPC_CheckField, 6, 10, 0, 25, 8, // Skip to: 2192
/* 119 */     MCD::OPC_Decode, 163, 7, 160, 1, // Opcode: DMULT
/* 124 */     MCD::OPC_FilterValue, 29, 15, 0, // Skip to: 143
/* 128 */     MCD::OPC_CheckPredicate, 86, 12, 8, // Skip to: 2192
/* 132 */     MCD::OPC_CheckField, 6, 10, 0, 6, 8, // Skip to: 2192
/* 138 */     MCD::OPC_Decode, 164, 7, 160, 1, // Opcode: DMULTu
/* 143 */     MCD::OPC_FilterValue, 30, 15, 0, // Skip to: 162
/* 147 */     MCD::OPC_CheckPredicate, 86, 249, 7, // Skip to: 2192
/* 151 */     MCD::OPC_CheckField, 6, 10, 0, 243, 7, // Skip to: 2192
/* 157 */     MCD::OPC_Decode, 232, 7, 160, 1, // Opcode: DSDIV
/* 162 */     MCD::OPC_FilterValue, 31, 15, 0, // Skip to: 181
/* 166 */     MCD::OPC_CheckPredicate, 86, 230, 7, // Skip to: 2192
/* 170 */     MCD::OPC_CheckField, 6, 10, 0, 224, 7, // Skip to: 2192
/* 176 */     MCD::OPC_Decode, 132, 8, 160, 1, // Opcode: DUDIV
/* 181 */     MCD::OPC_FilterValue, 44, 14, 0, // Skip to: 199
/* 185 */     MCD::OPC_CheckPredicate, 84, 211, 7, // Skip to: 2192
/* 189 */     MCD::OPC_CheckField, 6, 5, 0, 205, 7, // Skip to: 2192
/* 195 */     MCD::OPC_Decode, 203, 6, 12, // Opcode: DADD
/* 199 */     MCD::OPC_FilterValue, 45, 14, 0, // Skip to: 217
/* 203 */     MCD::OPC_CheckPredicate, 84, 193, 7, // Skip to: 2192
/* 207 */     MCD::OPC_CheckField, 6, 5, 0, 187, 7, // Skip to: 2192
/* 213 */     MCD::OPC_Decode, 209, 6, 12, // Opcode: DADDu
/* 217 */     MCD::OPC_FilterValue, 46, 14, 0, // Skip to: 235
/* 221 */     MCD::OPC_CheckPredicate, 84, 175, 7, // Skip to: 2192
/* 225 */     MCD::OPC_CheckField, 6, 5, 0, 169, 7, // Skip to: 2192
/* 231 */     MCD::OPC_Decode, 128, 8, 12, // Opcode: DSUB
/* 235 */     MCD::OPC_FilterValue, 47, 14, 0, // Skip to: 253
/* 239 */     MCD::OPC_CheckPredicate, 84, 157, 7, // Skip to: 2192
/* 243 */     MCD::OPC_CheckField, 6, 5, 0, 151, 7, // Skip to: 2192
/* 249 */     MCD::OPC_Decode, 131, 8, 12, // Opcode: DSUBu
/* 253 */     MCD::OPC_FilterValue, 56, 15, 0, // Skip to: 272
/* 257 */     MCD::OPC_CheckPredicate, 84, 139, 7, // Skip to: 2192
/* 261 */     MCD::OPC_CheckField, 21, 5, 0, 133, 7, // Skip to: 2192
/* 267 */     MCD::OPC_Decode, 237, 7, 239, 2, // Opcode: DSLL
/* 272 */     MCD::OPC_FilterValue, 58, 29, 0, // Skip to: 305
/* 276 */     MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 279 */     MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 292
/* 283 */     MCD::OPC_CheckPredicate, 84, 113, 7, // Skip to: 2192
/* 287 */     MCD::OPC_Decode, 250, 7, 239, 2, // Opcode: DSRL
/* 292 */     MCD::OPC_FilterValue, 1, 104, 7, // Skip to: 2192
/* 296 */     MCD::OPC_CheckPredicate, 85, 100, 7, // Skip to: 2192
/* 300 */     MCD::OPC_Decode, 224, 7, 239, 2, // Opcode: DROTR
/* 305 */     MCD::OPC_FilterValue, 59, 15, 0, // Skip to: 324
/* 309 */     MCD::OPC_CheckPredicate, 84, 87, 7, // Skip to: 2192
/* 313 */     MCD::OPC_CheckField, 21, 5, 0, 81, 7, // Skip to: 2192
/* 319 */     MCD::OPC_Decode, 244, 7, 239, 2, // Opcode: DSRA
/* 324 */     MCD::OPC_FilterValue, 60, 15, 0, // Skip to: 343
/* 328 */     MCD::OPC_CheckPredicate, 84, 68, 7, // Skip to: 2192
/* 332 */     MCD::OPC_CheckField, 21, 5, 0, 62, 7, // Skip to: 2192
/* 338 */     MCD::OPC_Decode, 238, 7, 239, 2, // Opcode: DSLL32
/* 343 */     MCD::OPC_FilterValue, 62, 29, 0, // Skip to: 376
/* 347 */     MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 350 */     MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 363
/* 354 */     MCD::OPC_CheckPredicate, 84, 42, 7, // Skip to: 2192
/* 358 */     MCD::OPC_Decode, 251, 7, 239, 2, // Opcode: DSRL32
/* 363 */     MCD::OPC_FilterValue, 1, 33, 7, // Skip to: 2192
/* 367 */     MCD::OPC_CheckPredicate, 85, 29, 7, // Skip to: 2192
/* 371 */     MCD::OPC_Decode, 225, 7, 239, 2, // Opcode: DROTR32
/* 376 */     MCD::OPC_FilterValue, 63, 20, 7, // Skip to: 2192
/* 380 */     MCD::OPC_CheckPredicate, 84, 16, 7, // Skip to: 2192
/* 384 */     MCD::OPC_CheckField, 21, 5, 0, 10, 7, // Skip to: 2192
/* 390 */     MCD::OPC_Decode, 245, 7, 239, 2, // Opcode: DSRA32
/* 395 */     MCD::OPC_FilterValue, 16, 41, 0, // Skip to: 440
/* 399 */     MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 402 */     MCD::OPC_FilterValue, 1, 15, 0, // Skip to: 421
/* 406 */     MCD::OPC_CheckPredicate, 87, 246, 6, // Skip to: 2192
/* 410 */     MCD::OPC_CheckField, 3, 8, 0, 240, 6, // Skip to: 2192
/* 416 */     MCD::OPC_Decode, 136, 7, 240, 2, // Opcode: DMFC0
/* 421 */     MCD::OPC_FilterValue, 5, 231, 6, // Skip to: 2192
/* 425 */     MCD::OPC_CheckPredicate, 87, 227, 6, // Skip to: 2192
/* 429 */     MCD::OPC_CheckField, 3, 8, 0, 221, 6, // Skip to: 2192
/* 435 */     MCD::OPC_Decode, 147, 7, 241, 2, // Opcode: DMTC0
/* 440 */     MCD::OPC_FilterValue, 17, 237, 3, // Skip to: 1449
/* 444 */     MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 447 */     MCD::OPC_FilterValue, 0, 54, 0, // Skip to: 505
/* 451 */     MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 454 */     MCD::OPC_FilterValue, 3, 15, 0, // Skip to: 473
/* 458 */     MCD::OPC_CheckPredicate, 88, 194, 6, // Skip to: 2192
/* 462 */     MCD::OPC_CheckField, 6, 5, 0, 188, 6, // Skip to: 2192
/* 468 */     MCD::OPC_Decode, 178, 12, 242, 2, // Opcode: MFHC1_D64
/* 473 */     MCD::OPC_FilterValue, 7, 15, 0, // Skip to: 492
/* 477 */     MCD::OPC_CheckPredicate, 88, 175, 6, // Skip to: 2192
/* 481 */     MCD::OPC_CheckField, 6, 5, 0, 169, 6, // Skip to: 2192
/* 487 */     MCD::OPC_Decode, 193, 13, 243, 2, // Opcode: MTHC1_D64
/* 492 */     MCD::OPC_FilterValue, 17, 160, 6, // Skip to: 2192
/* 496 */     MCD::OPC_CheckPredicate, 89, 156, 6, // Skip to: 2192
/* 500 */     MCD::OPC_Decode, 193, 8, 222, 2, // Opcode: FADD_D64
/* 505 */     MCD::OPC_FilterValue, 1, 15, 0, // Skip to: 524
/* 509 */     MCD::OPC_CheckPredicate, 89, 143, 6, // Skip to: 2192
/* 513 */     MCD::OPC_CheckField, 21, 5, 17, 137, 6, // Skip to: 2192
/* 519 */     MCD::OPC_Decode, 209, 9, 222, 2, // Opcode: FSUB_D64
/* 524 */     MCD::OPC_FilterValue, 2, 15, 0, // Skip to: 543
/* 528 */     MCD::OPC_CheckPredicate, 89, 124, 6, // Skip to: 2192
/* 532 */     MCD::OPC_CheckField, 21, 5, 17, 118, 6, // Skip to: 2192
/* 538 */     MCD::OPC_Decode, 168, 9, 222, 2, // Opcode: FMUL_D64
/* 543 */     MCD::OPC_FilterValue, 3, 15, 0, // Skip to: 562
/* 547 */     MCD::OPC_CheckPredicate, 89, 105, 6, // Skip to: 2192
/* 551 */     MCD::OPC_CheckField, 21, 5, 17, 99, 6, // Skip to: 2192
/* 557 */     MCD::OPC_Decode, 231, 8, 222, 2, // Opcode: FDIV_D64
/* 562 */     MCD::OPC_FilterValue, 4, 16, 0, // Skip to: 582
/* 566 */     MCD::OPC_CheckPredicate, 90, 86, 6, // Skip to: 2192
/* 570 */     MCD::OPC_CheckField, 16, 10, 160, 4, 79, 6, // Skip to: 2192
/* 577 */     MCD::OPC_Decode, 202, 9, 221, 1, // Opcode: FSQRT_D64
/* 582 */     MCD::OPC_FilterValue, 5, 16, 0, // Skip to: 602
/* 586 */     MCD::OPC_CheckPredicate, 89, 66, 6, // Skip to: 2192
/* 590 */     MCD::OPC_CheckField, 16, 10, 160, 4, 59, 6, // Skip to: 2192
/* 597 */     MCD::OPC_Decode, 186, 8, 221, 1, // Opcode: FABS_D64
/* 602 */     MCD::OPC_FilterValue, 6, 16, 0, // Skip to: 622
/* 606 */     MCD::OPC_CheckPredicate, 89, 46, 6, // Skip to: 2192
/* 610 */     MCD::OPC_CheckField, 16, 10, 160, 4, 39, 6, // Skip to: 2192
/* 617 */     MCD::OPC_Decode, 159, 9, 221, 1, // Opcode: FMOV_D64
/* 622 */     MCD::OPC_FilterValue, 7, 16, 0, // Skip to: 642
/* 626 */     MCD::OPC_CheckPredicate, 89, 26, 6, // Skip to: 2192
/* 630 */     MCD::OPC_CheckField, 16, 10, 160, 4, 19, 6, // Skip to: 2192
/* 637 */     MCD::OPC_Decode, 176, 9, 221, 1, // Opcode: FNEG_D64
/* 642 */     MCD::OPC_FilterValue, 8, 31, 0, // Skip to: 677
/* 646 */     MCD::OPC_ExtractField, 16, 10,  // Inst{25-16} ...
/* 649 */     MCD::OPC_FilterValue, 128, 4, 9, 0, // Skip to: 663
/* 654 */     MCD::OPC_CheckPredicate, 91, 254, 5, // Skip to: 2192
/* 658 */     MCD::OPC_Decode, 225, 15, 214, 1, // Opcode: ROUND_L_S
/* 663 */     MCD::OPC_FilterValue, 160, 4, 244, 5, // Skip to: 2192
/* 668 */     MCD::OPC_CheckPredicate, 91, 240, 5, // Skip to: 2192
/* 672 */     MCD::OPC_Decode, 223, 15, 221, 1, // Opcode: ROUND_L_D64
/* 677 */     MCD::OPC_FilterValue, 9, 31, 0, // Skip to: 712
/* 681 */     MCD::OPC_ExtractField, 16, 10,  // Inst{25-16} ...
/* 684 */     MCD::OPC_FilterValue, 128, 4, 9, 0, // Skip to: 698
/* 689 */     MCD::OPC_CheckPredicate, 91, 219, 5, // Skip to: 2192
/* 693 */     MCD::OPC_Decode, 175, 19, 214, 1, // Opcode: TRUNC_L_S
/* 698 */     MCD::OPC_FilterValue, 160, 4, 209, 5, // Skip to: 2192
/* 703 */     MCD::OPC_CheckPredicate, 91, 205, 5, // Skip to: 2192
/* 707 */     MCD::OPC_Decode, 173, 19, 221, 1, // Opcode: TRUNC_L_D64
/* 712 */     MCD::OPC_FilterValue, 10, 31, 0, // Skip to: 747
/* 716 */     MCD::OPC_ExtractField, 16, 10,  // Inst{25-16} ...
/* 719 */     MCD::OPC_FilterValue, 128, 4, 9, 0, // Skip to: 733
/* 724 */     MCD::OPC_CheckPredicate, 91, 184, 5, // Skip to: 2192
/* 728 */     MCD::OPC_Decode, 156, 4, 214, 1, // Opcode: CEIL_L_S
/* 733 */     MCD::OPC_FilterValue, 160, 4, 174, 5, // Skip to: 2192
/* 738 */     MCD::OPC_CheckPredicate, 91, 170, 5, // Skip to: 2192
/* 742 */     MCD::OPC_Decode, 154, 4, 221, 1, // Opcode: CEIL_L_D64
/* 747 */     MCD::OPC_FilterValue, 11, 31, 0, // Skip to: 782
/* 751 */     MCD::OPC_ExtractField, 16, 10,  // Inst{25-16} ...
/* 754 */     MCD::OPC_FilterValue, 128, 4, 9, 0, // Skip to: 768
/* 759 */     MCD::OPC_CheckPredicate, 91, 149, 5, // Skip to: 2192
/* 763 */     MCD::OPC_Decode, 138, 9, 214, 1, // Opcode: FLOOR_L_S
/* 768 */     MCD::OPC_FilterValue, 160, 4, 139, 5, // Skip to: 2192
/* 773 */     MCD::OPC_CheckPredicate, 91, 135, 5, // Skip to: 2192
/* 777 */     MCD::OPC_Decode, 136, 9, 221, 1, // Opcode: FLOOR_L_D64
/* 782 */     MCD::OPC_FilterValue, 12, 16, 0, // Skip to: 802
/* 786 */     MCD::OPC_CheckPredicate, 90, 122, 5, // Skip to: 2192
/* 790 */     MCD::OPC_CheckField, 16, 10, 160, 4, 115, 5, // Skip to: 2192
/* 797 */     MCD::OPC_Decode, 228, 15, 244, 2, // Opcode: ROUND_W_D64
/* 802 */     MCD::OPC_FilterValue, 13, 16, 0, // Skip to: 822
/* 806 */     MCD::OPC_CheckPredicate, 90, 102, 5, // Skip to: 2192
/* 810 */     MCD::OPC_CheckField, 16, 10, 160, 4, 95, 5, // Skip to: 2192
/* 817 */     MCD::OPC_Decode, 178, 19, 244, 2, // Opcode: TRUNC_W_D64
/* 822 */     MCD::OPC_FilterValue, 14, 16, 0, // Skip to: 842
/* 826 */     MCD::OPC_CheckPredicate, 90, 82, 5, // Skip to: 2192
/* 830 */     MCD::OPC_CheckField, 16, 10, 160, 4, 75, 5, // Skip to: 2192
/* 837 */     MCD::OPC_Decode, 159, 4, 244, 2, // Opcode: CEIL_W_D64
/* 842 */     MCD::OPC_FilterValue, 15, 16, 0, // Skip to: 862
/* 846 */     MCD::OPC_CheckPredicate, 90, 62, 5, // Skip to: 2192
/* 850 */     MCD::OPC_CheckField, 16, 10, 160, 4, 55, 5, // Skip to: 2192
/* 857 */     MCD::OPC_Decode, 141, 9, 244, 2, // Opcode: FLOOR_W_D64
/* 862 */     MCD::OPC_FilterValue, 17, 41, 0, // Skip to: 907
/* 866 */     MCD::OPC_ExtractField, 16, 2,  // Inst{17-16} ...
/* 869 */     MCD::OPC_FilterValue, 0, 15, 0, // Skip to: 888
/* 873 */     MCD::OPC_CheckPredicate, 92, 35, 5, // Skip to: 2192
/* 877 */     MCD::OPC_CheckField, 21, 5, 17, 29, 5, // Skip to: 2192
/* 883 */     MCD::OPC_Decode, 244, 12, 245, 2, // Opcode: MOVF_D64
/* 888 */     MCD::OPC_FilterValue, 1, 20, 5, // Skip to: 2192
/* 892 */     MCD::OPC_CheckPredicate, 92, 16, 5, // Skip to: 2192
/* 896 */     MCD::OPC_CheckField, 21, 5, 17, 10, 5, // Skip to: 2192
/* 902 */     MCD::OPC_Decode, 136, 13, 245, 2, // Opcode: MOVT_D64
/* 907 */     MCD::OPC_FilterValue, 18, 15, 0, // Skip to: 926
/* 911 */     MCD::OPC_CheckPredicate, 92, 253, 4, // Skip to: 2192
/* 915 */     MCD::OPC_CheckField, 21, 5, 17, 247, 4, // Skip to: 2192
/* 921 */     MCD::OPC_Decode, 148, 13, 246, 2, // Opcode: MOVZ_I_D64
/* 926 */     MCD::OPC_FilterValue, 19, 15, 0, // Skip to: 945
/* 930 */     MCD::OPC_CheckPredicate, 92, 234, 4, // Skip to: 2192
/* 934 */     MCD::OPC_CheckField, 21, 5, 17, 228, 4, // Skip to: 2192
/* 940 */     MCD::OPC_Decode, 128, 13, 246, 2, // Opcode: MOVN_I_D64
/* 945 */     MCD::OPC_FilterValue, 32, 31, 0, // Skip to: 980
/* 949 */     MCD::OPC_ExtractField, 16, 10,  // Inst{25-16} ...
/* 952 */     MCD::OPC_FilterValue, 160, 4, 9, 0, // Skip to: 966
/* 957 */     MCD::OPC_CheckPredicate, 89, 207, 4, // Skip to: 2192
/* 961 */     MCD::OPC_Decode, 217, 5, 244, 2, // Opcode: CVT_S_D64
/* 966 */     MCD::OPC_FilterValue, 160, 5, 197, 4, // Skip to: 2192
/* 971 */     MCD::OPC_CheckPredicate, 91, 193, 4, // Skip to: 2192
/* 975 */     MCD::OPC_Decode, 219, 5, 244, 2, // Opcode: CVT_S_L
/* 980 */     MCD::OPC_FilterValue, 33, 45, 0, // Skip to: 1029
/* 984 */     MCD::OPC_ExtractField, 16, 10,  // Inst{25-16} ...
/* 987 */     MCD::OPC_FilterValue, 128, 4, 9, 0, // Skip to: 1001
/* 992 */     MCD::OPC_CheckPredicate, 89, 172, 4, // Skip to: 2192
/* 996 */     MCD::OPC_Decode, 203, 5, 214, 1, // Opcode: CVT_D64_S
/* 1001 */    MCD::OPC_FilterValue, 128, 5, 9, 0, // Skip to: 1015
/* 1006 */    MCD::OPC_CheckPredicate, 89, 158, 4, // Skip to: 2192
/* 1010 */    MCD::OPC_Decode, 204, 5, 214, 1, // Opcode: CVT_D64_W
/* 1015 */    MCD::OPC_FilterValue, 160, 5, 148, 4, // Skip to: 2192
/* 1020 */    MCD::OPC_CheckPredicate, 89, 144, 4, // Skip to: 2192
/* 1024 */    MCD::OPC_Decode, 202, 5, 221, 1, // Opcode: CVT_D64_L
/* 1029 */    MCD::OPC_FilterValue, 36, 16, 0, // Skip to: 1049
/* 1033 */    MCD::OPC_CheckPredicate, 89, 131, 4, // Skip to: 2192
/* 1037 */    MCD::OPC_CheckField, 16, 10, 160, 4, 124, 4, // Skip to: 2192
/* 1044 */    MCD::OPC_Decode, 225, 5, 244, 2, // Opcode: CVT_W_D64
/* 1049 */    MCD::OPC_FilterValue, 48, 21, 0, // Skip to: 1074
/* 1053 */    MCD::OPC_CheckPredicate, 93, 111, 4, // Skip to: 2192
/* 1057 */    MCD::OPC_CheckField, 21, 5, 17, 105, 4, // Skip to: 2192
/* 1063 */    MCD::OPC_CheckField, 6, 2, 0, 99, 4, // Skip to: 2192
/* 1069 */    MCD::OPC_Decode, 239, 5, 247, 2, // Opcode: C_F_D64
/* 1074 */    MCD::OPC_FilterValue, 49, 21, 0, // Skip to: 1099
/* 1078 */    MCD::OPC_CheckPredicate, 93, 86, 4, // Skip to: 2192
/* 1082 */    MCD::OPC_CheckField, 21, 5, 17, 80, 4, // Skip to: 2192
/* 1088 */    MCD::OPC_CheckField, 6, 2, 0, 74, 4, // Skip to: 2192
/* 1094 */    MCD::OPC_Decode, 195, 6, 247, 2, // Opcode: C_UN_D64
/* 1099 */    MCD::OPC_FilterValue, 50, 21, 0, // Skip to: 1124
/* 1103 */    MCD::OPC_CheckPredicate, 93, 61, 4, // Skip to: 2192
/* 1107 */    MCD::OPC_CheckField, 21, 5, 17, 55, 4, // Skip to: 2192
/* 1113 */    MCD::OPC_CheckField, 6, 2, 0, 49, 4, // Skip to: 2192
/* 1119 */    MCD::OPC_Decode, 233, 5, 247, 2, // Opcode: C_EQ_D64
/* 1124 */    MCD::OPC_FilterValue, 51, 21, 0, // Skip to: 1149
/* 1128 */    MCD::OPC_CheckPredicate, 93, 36, 4, // Skip to: 2192
/* 1132 */    MCD::OPC_CheckField, 21, 5, 17, 30, 4, // Skip to: 2192
/* 1138 */    MCD::OPC_CheckField, 6, 2, 0, 24, 4, // Skip to: 2192
/* 1144 */    MCD::OPC_Decode, 177, 6, 247, 2, // Opcode: C_UEQ_D64
/* 1149 */    MCD::OPC_FilterValue, 52, 21, 0, // Skip to: 1174
/* 1153 */    MCD::OPC_CheckPredicate, 93, 11, 4, // Skip to: 2192
/* 1157 */    MCD::OPC_CheckField, 21, 5, 17, 5, 4, // Skip to: 2192
/* 1163 */    MCD::OPC_CheckField, 6, 2, 0, 255, 3, // Skip to: 2192
/* 1169 */    MCD::OPC_Decode, 159, 6, 247, 2, // Opcode: C_OLT_D64
/* 1174 */    MCD::OPC_FilterValue, 53, 21, 0, // Skip to: 1199
/* 1178 */    MCD::OPC_CheckPredicate, 93, 242, 3, // Skip to: 2192
/* 1182 */    MCD::OPC_CheckField, 21, 5, 17, 236, 3, // Skip to: 2192
/* 1188 */    MCD::OPC_CheckField, 6, 2, 0, 230, 3, // Skip to: 2192
/* 1194 */    MCD::OPC_Decode, 189, 6, 247, 2, // Opcode: C_ULT_D64
/* 1199 */    MCD::OPC_FilterValue, 54, 21, 0, // Skip to: 1224
/* 1203 */    MCD::OPC_CheckPredicate, 93, 217, 3, // Skip to: 2192
/* 1207 */    MCD::OPC_CheckField, 21, 5, 17, 211, 3, // Skip to: 2192
/* 1213 */    MCD::OPC_CheckField, 6, 2, 0, 205, 3, // Skip to: 2192
/* 1219 */    MCD::OPC_Decode, 153, 6, 247, 2, // Opcode: C_OLE_D64
/* 1224 */    MCD::OPC_FilterValue, 55, 21, 0, // Skip to: 1249
/* 1228 */    MCD::OPC_CheckPredicate, 93, 192, 3, // Skip to: 2192
/* 1232 */    MCD::OPC_CheckField, 21, 5, 17, 186, 3, // Skip to: 2192
/* 1238 */    MCD::OPC_CheckField, 6, 2, 0, 180, 3, // Skip to: 2192
/* 1244 */    MCD::OPC_Decode, 183, 6, 247, 2, // Opcode: C_ULE_D64
/* 1249 */    MCD::OPC_FilterValue, 56, 21, 0, // Skip to: 1274
/* 1253 */    MCD::OPC_CheckPredicate, 93, 167, 3, // Skip to: 2192
/* 1257 */    MCD::OPC_CheckField, 21, 5, 17, 161, 3, // Skip to: 2192
/* 1263 */    MCD::OPC_CheckField, 6, 2, 0, 155, 3, // Skip to: 2192
/* 1269 */    MCD::OPC_Decode, 171, 6, 247, 2, // Opcode: C_SF_D64
/* 1274 */    MCD::OPC_FilterValue, 57, 21, 0, // Skip to: 1299
/* 1278 */    MCD::OPC_CheckPredicate, 93, 142, 3, // Skip to: 2192
/* 1282 */    MCD::OPC_CheckField, 21, 5, 17, 136, 3, // Skip to: 2192
/* 1288 */    MCD::OPC_CheckField, 6, 2, 0, 130, 3, // Skip to: 2192
/* 1294 */    MCD::OPC_Decode, 135, 6, 247, 2, // Opcode: C_NGLE_D64
/* 1299 */    MCD::OPC_FilterValue, 58, 21, 0, // Skip to: 1324
/* 1303 */    MCD::OPC_CheckPredicate, 93, 117, 3, // Skip to: 2192
/* 1307 */    MCD::OPC_CheckField, 21, 5, 17, 111, 3, // Skip to: 2192
/* 1313 */    MCD::OPC_CheckField, 6, 2, 0, 105, 3, // Skip to: 2192
/* 1319 */    MCD::OPC_Decode, 165, 6, 247, 2, // Opcode: C_SEQ_D64
/* 1324 */    MCD::OPC_FilterValue, 59, 21, 0, // Skip to: 1349
/* 1328 */    MCD::OPC_CheckPredicate, 93, 92, 3, // Skip to: 2192
/* 1332 */    MCD::OPC_CheckField, 21, 5, 17, 86, 3, // Skip to: 2192
/* 1338 */    MCD::OPC_CheckField, 6, 2, 0, 80, 3, // Skip to: 2192
/* 1344 */    MCD::OPC_Decode, 141, 6, 247, 2, // Opcode: C_NGL_D64
/* 1349 */    MCD::OPC_FilterValue, 60, 21, 0, // Skip to: 1374
/* 1353 */    MCD::OPC_CheckPredicate, 93, 67, 3, // Skip to: 2192
/* 1357 */    MCD::OPC_CheckField, 21, 5, 17, 61, 3, // Skip to: 2192
/* 1363 */    MCD::OPC_CheckField, 6, 2, 0, 55, 3, // Skip to: 2192
/* 1369 */    MCD::OPC_Decode, 251, 5, 247, 2, // Opcode: C_LT_D64
/* 1374 */    MCD::OPC_FilterValue, 61, 21, 0, // Skip to: 1399
/* 1378 */    MCD::OPC_CheckPredicate, 93, 42, 3, // Skip to: 2192
/* 1382 */    MCD::OPC_CheckField, 21, 5, 17, 36, 3, // Skip to: 2192
/* 1388 */    MCD::OPC_CheckField, 6, 2, 0, 30, 3, // Skip to: 2192
/* 1394 */    MCD::OPC_Decode, 129, 6, 247, 2, // Opcode: C_NGE_D64
/* 1399 */    MCD::OPC_FilterValue, 62, 21, 0, // Skip to: 1424
/* 1403 */    MCD::OPC_CheckPredicate, 93, 17, 3, // Skip to: 2192
/* 1407 */    MCD::OPC_CheckField, 21, 5, 17, 11, 3, // Skip to: 2192
/* 1413 */    MCD::OPC_CheckField, 6, 2, 0, 5, 3, // Skip to: 2192
/* 1419 */    MCD::OPC_Decode, 245, 5, 247, 2, // Opcode: C_LE_D64
/* 1424 */    MCD::OPC_FilterValue, 63, 252, 2, // Skip to: 2192
/* 1428 */    MCD::OPC_CheckPredicate, 93, 248, 2, // Skip to: 2192
/* 1432 */    MCD::OPC_CheckField, 21, 5, 17, 242, 2, // Skip to: 2192
/* 1438 */    MCD::OPC_CheckField, 6, 2, 0, 236, 2, // Skip to: 2192
/* 1444 */    MCD::OPC_Decode, 147, 6, 247, 2, // Opcode: C_NGT_D64
/* 1449 */    MCD::OPC_FilterValue, 18, 41, 0, // Skip to: 1494
/* 1453 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 1456 */    MCD::OPC_FilterValue, 1, 15, 0, // Skip to: 1475
/* 1460 */    MCD::OPC_CheckPredicate, 87, 216, 2, // Skip to: 2192
/* 1464 */    MCD::OPC_CheckField, 3, 8, 0, 210, 2, // Skip to: 2192
/* 1470 */    MCD::OPC_Decode, 140, 7, 248, 2, // Opcode: DMFC2
/* 1475 */    MCD::OPC_FilterValue, 5, 201, 2, // Skip to: 2192
/* 1479 */    MCD::OPC_CheckPredicate, 87, 197, 2, // Skip to: 2192
/* 1483 */    MCD::OPC_CheckField, 3, 8, 0, 191, 2, // Skip to: 2192
/* 1489 */    MCD::OPC_Decode, 151, 7, 249, 2, // Opcode: DMTC2
/* 1494 */    MCD::OPC_FilterValue, 19, 131, 0, // Skip to: 1629
/* 1498 */    MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 1501 */    MCD::OPC_FilterValue, 1, 15, 0, // Skip to: 1520
/* 1505 */    MCD::OPC_CheckPredicate, 94, 171, 2, // Skip to: 2192
/* 1509 */    MCD::OPC_CheckField, 11, 5, 0, 165, 2, // Skip to: 2192
/* 1515 */    MCD::OPC_Decode, 243, 10, 250, 2, // Opcode: LDXC164
/* 1520 */    MCD::OPC_FilterValue, 5, 15, 0, // Skip to: 1539
/* 1524 */    MCD::OPC_CheckPredicate, 95, 152, 2, // Skip to: 2192
/* 1528 */    MCD::OPC_CheckField, 11, 5, 0, 146, 2, // Skip to: 2192
/* 1534 */    MCD::OPC_Decode, 163, 11, 250, 2, // Opcode: LUXC164
/* 1539 */    MCD::OPC_FilterValue, 9, 15, 0, // Skip to: 1558
/* 1543 */    MCD::OPC_CheckPredicate, 94, 133, 2, // Skip to: 2192
/* 1547 */    MCD::OPC_CheckField, 6, 5, 0, 127, 2, // Skip to: 2192
/* 1553 */    MCD::OPC_Decode, 163, 16, 251, 2, // Opcode: SDXC164
/* 1558 */    MCD::OPC_FilterValue, 13, 15, 0, // Skip to: 1577
/* 1562 */    MCD::OPC_CheckPredicate, 95, 114, 2, // Skip to: 2192
/* 1566 */    MCD::OPC_CheckField, 6, 5, 0, 108, 2, // Skip to: 2192
/* 1572 */    MCD::OPC_Decode, 170, 18, 251, 2, // Opcode: SUXC164
/* 1577 */    MCD::OPC_FilterValue, 33, 9, 0, // Skip to: 1590
/* 1581 */    MCD::OPC_CheckPredicate, 96, 95, 2, // Skip to: 2192
/* 1585 */    MCD::OPC_Decode, 252, 11, 252, 2, // Opcode: MADD_D64
/* 1590 */    MCD::OPC_FilterValue, 41, 9, 0, // Skip to: 1603
/* 1594 */    MCD::OPC_CheckPredicate, 96, 82, 2, // Skip to: 2192
/* 1598 */    MCD::OPC_Decode, 175, 13, 252, 2, // Opcode: MSUB_D64
/* 1603 */    MCD::OPC_FilterValue, 49, 9, 0, // Skip to: 1616
/* 1607 */    MCD::OPC_CheckPredicate, 96, 69, 2, // Skip to: 2192
/* 1611 */    MCD::OPC_Decode, 158, 14, 252, 2, // Opcode: NMADD_D64
/* 1616 */    MCD::OPC_FilterValue, 57, 60, 2, // Skip to: 2192
/* 1620 */    MCD::OPC_CheckPredicate, 96, 56, 2, // Skip to: 2192
/* 1624 */    MCD::OPC_Decode, 163, 14, 252, 2, // Opcode: NMSUB_D64
/* 1629 */    MCD::OPC_FilterValue, 21, 227, 0, // Skip to: 1860
/* 1633 */    MCD::OPC_ExtractField, 0, 13,  // Inst{12-0} ...
/* 1636 */    MCD::OPC_FilterValue, 188, 8, 9, 0, // Skip to: 1650
/* 1641 */    MCD::OPC_CheckPredicate, 97, 35, 2, // Skip to: 2192
/* 1645 */    MCD::OPC_Decode, 240, 5, 253, 2, // Opcode: C_F_D64_MM
/* 1650 */    MCD::OPC_FilterValue, 252, 8, 9, 0, // Skip to: 1664
/* 1655 */    MCD::OPC_CheckPredicate, 97, 21, 2, // Skip to: 2192
/* 1659 */    MCD::OPC_Decode, 196, 6, 253, 2, // Opcode: C_UN_D64_MM
/* 1664 */    MCD::OPC_FilterValue, 188, 9, 9, 0, // Skip to: 1678
/* 1669 */    MCD::OPC_CheckPredicate, 97, 7, 2, // Skip to: 2192
/* 1673 */    MCD::OPC_Decode, 234, 5, 253, 2, // Opcode: C_EQ_D64_MM
/* 1678 */    MCD::OPC_FilterValue, 252, 9, 9, 0, // Skip to: 1692
/* 1683 */    MCD::OPC_CheckPredicate, 97, 249, 1, // Skip to: 2192
/* 1687 */    MCD::OPC_Decode, 178, 6, 253, 2, // Opcode: C_UEQ_D64_MM
/* 1692 */    MCD::OPC_FilterValue, 188, 10, 9, 0, // Skip to: 1706
/* 1697 */    MCD::OPC_CheckPredicate, 97, 235, 1, // Skip to: 2192
/* 1701 */    MCD::OPC_Decode, 160, 6, 253, 2, // Opcode: C_OLT_D64_MM
/* 1706 */    MCD::OPC_FilterValue, 252, 10, 9, 0, // Skip to: 1720
/* 1711 */    MCD::OPC_CheckPredicate, 97, 221, 1, // Skip to: 2192
/* 1715 */    MCD::OPC_Decode, 190, 6, 253, 2, // Opcode: C_ULT_D64_MM
/* 1720 */    MCD::OPC_FilterValue, 188, 11, 9, 0, // Skip to: 1734
/* 1725 */    MCD::OPC_CheckPredicate, 97, 207, 1, // Skip to: 2192
/* 1729 */    MCD::OPC_Decode, 154, 6, 253, 2, // Opcode: C_OLE_D64_MM
/* 1734 */    MCD::OPC_FilterValue, 252, 11, 9, 0, // Skip to: 1748
/* 1739 */    MCD::OPC_CheckPredicate, 97, 193, 1, // Skip to: 2192
/* 1743 */    MCD::OPC_Decode, 184, 6, 253, 2, // Opcode: C_ULE_D64_MM
/* 1748 */    MCD::OPC_FilterValue, 188, 12, 9, 0, // Skip to: 1762
/* 1753 */    MCD::OPC_CheckPredicate, 97, 179, 1, // Skip to: 2192
/* 1757 */    MCD::OPC_Decode, 172, 6, 253, 2, // Opcode: C_SF_D64_MM
/* 1762 */    MCD::OPC_FilterValue, 252, 12, 9, 0, // Skip to: 1776
/* 1767 */    MCD::OPC_CheckPredicate, 97, 165, 1, // Skip to: 2192
/* 1771 */    MCD::OPC_Decode, 136, 6, 253, 2, // Opcode: C_NGLE_D64_MM
/* 1776 */    MCD::OPC_FilterValue, 188, 13, 9, 0, // Skip to: 1790
/* 1781 */    MCD::OPC_CheckPredicate, 97, 151, 1, // Skip to: 2192
/* 1785 */    MCD::OPC_Decode, 166, 6, 253, 2, // Opcode: C_SEQ_D64_MM
/* 1790 */    MCD::OPC_FilterValue, 252, 13, 9, 0, // Skip to: 1804
/* 1795 */    MCD::OPC_CheckPredicate, 97, 137, 1, // Skip to: 2192
/* 1799 */    MCD::OPC_Decode, 142, 6, 253, 2, // Opcode: C_NGL_D64_MM
/* 1804 */    MCD::OPC_FilterValue, 188, 14, 9, 0, // Skip to: 1818
/* 1809 */    MCD::OPC_CheckPredicate, 97, 123, 1, // Skip to: 2192
/* 1813 */    MCD::OPC_Decode, 252, 5, 253, 2, // Opcode: C_LT_D64_MM
/* 1818 */    MCD::OPC_FilterValue, 252, 14, 9, 0, // Skip to: 1832
/* 1823 */    MCD::OPC_CheckPredicate, 97, 109, 1, // Skip to: 2192
/* 1827 */    MCD::OPC_Decode, 130, 6, 253, 2, // Opcode: C_NGE_D64_MM
/* 1832 */    MCD::OPC_FilterValue, 188, 15, 9, 0, // Skip to: 1846
/* 1837 */    MCD::OPC_CheckPredicate, 97, 95, 1, // Skip to: 2192
/* 1841 */    MCD::OPC_Decode, 246, 5, 253, 2, // Opcode: C_LE_D64_MM
/* 1846 */    MCD::OPC_FilterValue, 252, 15, 85, 1, // Skip to: 2192
/* 1851 */    MCD::OPC_CheckPredicate, 97, 81, 1, // Skip to: 2192
/* 1855 */    MCD::OPC_Decode, 148, 6, 253, 2, // Opcode: C_NGT_D64_MM
/* 1860 */    MCD::OPC_FilterValue, 24, 9, 0, // Skip to: 1873
/* 1864 */    MCD::OPC_CheckPredicate, 98, 68, 1, // Skip to: 2192
/* 1868 */    MCD::OPC_Decode, 207, 6, 254, 2, // Opcode: DADDi
/* 1873 */    MCD::OPC_FilterValue, 25, 9, 0, // Skip to: 1886
/* 1877 */    MCD::OPC_CheckPredicate, 84, 55, 1, // Skip to: 2192
/* 1881 */    MCD::OPC_Decode, 208, 6, 254, 2, // Opcode: DADDiu
/* 1886 */    MCD::OPC_FilterValue, 26, 9, 0, // Skip to: 1899
/* 1890 */    MCD::OPC_CheckPredicate, 98, 42, 1, // Skip to: 2192
/* 1894 */    MCD::OPC_Decode, 237, 10, 210, 2, // Opcode: LDL
/* 1899 */    MCD::OPC_FilterValue, 27, 9, 0, // Skip to: 1912
/* 1903 */    MCD::OPC_CheckPredicate, 98, 29, 1, // Skip to: 2192
/* 1907 */    MCD::OPC_Decode, 241, 10, 210, 2, // Opcode: LDR
/* 1912 */    MCD::OPC_FilterValue, 28, 29, 0, // Skip to: 1945
/* 1916 */    MCD::OPC_ExtractField, 0, 11,  // Inst{10-0} ...
/* 1919 */    MCD::OPC_FilterValue, 36, 9, 0, // Skip to: 1932
/* 1923 */    MCD::OPC_CheckPredicate, 99, 9, 1, // Skip to: 2192
/* 1927 */    MCD::OPC_Decode, 223, 6, 255, 2, // Opcode: DCLZ
/* 1932 */    MCD::OPC_FilterValue, 37, 0, 1, // Skip to: 2192
/* 1936 */    MCD::OPC_CheckPredicate, 99, 252, 0, // Skip to: 2192
/* 1940 */    MCD::OPC_Decode, 220, 6, 255, 2, // Opcode: DCLO
/* 1945 */    MCD::OPC_FilterValue, 31, 126, 0, // Skip to: 2075
/* 1949 */    MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 1952 */    MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 1965
/* 1956 */    MCD::OPC_CheckPredicate, 85, 232, 0, // Skip to: 2192
/* 1960 */    MCD::OPC_Decode, 235, 6, 128, 3, // Opcode: DEXTM
/* 1965 */    MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 1978
/* 1969 */    MCD::OPC_CheckPredicate, 85, 219, 0, // Skip to: 2192
/* 1973 */    MCD::OPC_Decode, 237, 6, 128, 3, // Opcode: DEXTU
/* 1978 */    MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 1991
/* 1982 */    MCD::OPC_CheckPredicate, 85, 206, 0, // Skip to: 2192
/* 1986 */    MCD::OPC_Decode, 233, 6, 128, 3, // Opcode: DEXT
/* 1991 */    MCD::OPC_FilterValue, 5, 9, 0, // Skip to: 2004
/* 1995 */    MCD::OPC_CheckPredicate, 85, 193, 0, // Skip to: 2192
/* 1999 */    MCD::OPC_Decode, 242, 6, 129, 3, // Opcode: DINSM
/* 2004 */    MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 2017
/* 2008 */    MCD::OPC_CheckPredicate, 85, 180, 0, // Skip to: 2192
/* 2012 */    MCD::OPC_Decode, 244, 6, 129, 3, // Opcode: DINSU
/* 2017 */    MCD::OPC_FilterValue, 7, 9, 0, // Skip to: 2030
/* 2021 */    MCD::OPC_CheckPredicate, 85, 167, 0, // Skip to: 2192
/* 2025 */    MCD::OPC_Decode, 241, 6, 129, 3, // Opcode: DINS
/* 2030 */    MCD::OPC_FilterValue, 36, 158, 0, // Skip to: 2192
/* 2034 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 2037 */    MCD::OPC_FilterValue, 2, 15, 0, // Skip to: 2056
/* 2041 */    MCD::OPC_CheckPredicate, 85, 147, 0, // Skip to: 2192
/* 2045 */    MCD::OPC_CheckField, 21, 5, 0, 141, 0, // Skip to: 2192
/* 2051 */    MCD::OPC_Decode, 230, 7, 232, 2, // Opcode: DSBH
/* 2056 */    MCD::OPC_FilterValue, 5, 132, 0, // Skip to: 2192
/* 2060 */    MCD::OPC_CheckPredicate, 85, 128, 0, // Skip to: 2192
/* 2064 */    MCD::OPC_CheckField, 21, 5, 0, 122, 0, // Skip to: 2192
/* 2070 */    MCD::OPC_Decode, 235, 7, 232, 2, // Opcode: DSHD
/* 2075 */    MCD::OPC_FilterValue, 39, 9, 0, // Skip to: 2088
/* 2079 */    MCD::OPC_CheckPredicate, 84, 109, 0, // Skip to: 2192
/* 2083 */    MCD::OPC_Decode, 211, 11, 210, 2, // Opcode: LWu
/* 2088 */    MCD::OPC_FilterValue, 44, 9, 0, // Skip to: 2101
/* 2092 */    MCD::OPC_CheckPredicate, 98, 96, 0, // Skip to: 2192
/* 2096 */    MCD::OPC_Decode, 159, 16, 210, 2, // Opcode: SDL
/* 2101 */    MCD::OPC_FilterValue, 45, 9, 0, // Skip to: 2114
/* 2105 */    MCD::OPC_CheckPredicate, 98, 83, 0, // Skip to: 2192
/* 2109 */    MCD::OPC_Decode, 161, 16, 210, 2, // Opcode: SDR
/* 2114 */    MCD::OPC_FilterValue, 52, 9, 0, // Skip to: 2127
/* 2118 */    MCD::OPC_CheckPredicate, 86, 70, 0, // Skip to: 2192
/* 2122 */    MCD::OPC_Decode, 143, 11, 210, 2, // Opcode: LLD
/* 2127 */    MCD::OPC_FilterValue, 53, 9, 0, // Skip to: 2140
/* 2131 */    MCD::OPC_CheckPredicate, 100, 57, 0, // Skip to: 2192
/* 2135 */    MCD::OPC_Decode, 226, 10, 212, 2, // Opcode: LDC164
/* 2140 */    MCD::OPC_FilterValue, 55, 9, 0, // Skip to: 2153
/* 2144 */    MCD::OPC_CheckPredicate, 84, 44, 0, // Skip to: 2192
/* 2148 */    MCD::OPC_Decode, 224, 10, 210, 2, // Opcode: LD
/* 2153 */    MCD::OPC_FilterValue, 60, 9, 0, // Skip to: 2166
/* 2157 */    MCD::OPC_CheckPredicate, 98, 31, 0, // Skip to: 2192
/* 2161 */    MCD::OPC_Decode, 134, 16, 210, 2, // Opcode: SCD
/* 2166 */    MCD::OPC_FilterValue, 61, 9, 0, // Skip to: 2179
/* 2170 */    MCD::OPC_CheckPredicate, 100, 18, 0, // Skip to: 2192
/* 2174 */    MCD::OPC_Decode, 149, 16, 212, 2, // Opcode: SDC164
/* 2179 */    MCD::OPC_FilterValue, 63, 9, 0, // Skip to: 2192
/* 2183 */    MCD::OPC_CheckPredicate, 84, 5, 0, // Skip to: 2192
/* 2187 */    MCD::OPC_Decode, 141, 16, 210, 2, // Opcode: SD
/* 2192 */    MCD::OPC_Fail,
  0
};

static bool checkDecoderPredicate(unsigned Idx, const FeatureBitset& Bits) {
  switch (Idx) {
  default: llvm_unreachable("Invalid index!");
  case 0:
    return (Bits[Mips::FeatureMips16]);
  case 1:
    return (!Bits[Mips::FeatureMips16] && !Bits[Mips::FeatureMicroMips]);
  case 2:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMips2] && !Bits[Mips::FeatureMicroMips]);
  case 3:
    return (Bits[Mips::FeatureCnMips]);
  case 4:
    return (Bits[Mips::FeatureMips64] && Bits[Mips::FeatureCnMips] && !Bits[Mips::FeatureMicroMips]);
  case 5:
    return (Bits[Mips::FeatureMicroMips] && !Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMips64r6]);
  case 6:
    return (Bits[Mips::FeatureMicroMips]);
  case 7:
    return (Bits[Mips::FeatureMicroMips] && !Bits[Mips::FeatureMips32r6]);
  case 8:
    return (Bits[Mips::FeatureDSP] && Bits[Mips::FeatureMicroMips]);
  case 9:
    return (Bits[Mips::FeatureDSPR2] && Bits[Mips::FeatureMicroMips]);
  case 10:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMicroMips] && !Bits[Mips::FeatureMips32r6]);
  case 11:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMicroMips]);
  case 12:
    return (Bits[Mips::FeatureDSPR3] && Bits[Mips::FeatureMicroMips]);
  case 13:
    return (!Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMips64r6] && Bits[Mips::FeatureMicroMips]);
  case 14:
    return (!Bits[Mips::FeatureMips16] && !Bits[Mips::FeatureSoftFloat] && Bits[Mips::FeatureMicroMips]);
  case 15:
    return (!Bits[Mips::FeatureMips16] && !Bits[Mips::FeatureFP64Bit] && !Bits[Mips::FeatureSoftFloat] && Bits[Mips::FeatureMicroMips]);
  case 16:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureFP64Bit] && Bits[Mips::FeatureMicroMips] && Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureSoftFloat]);
  case 17:
    return (Bits[Mips::FeatureMicroMips] && Bits[Mips::FeatureMips32r6]);
  case 18:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMicroMips] && Bits[Mips::FeatureMips32r6]);
  case 19:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMicroMips] && Bits[Mips::FeatureMips64r6]);
  case 20:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMicroMips] && Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureSoftFloat]);
  case 21:
    return (!Bits[Mips::FeatureMips16] && !Bits[Mips::FeatureFP64Bit] && Bits[Mips::FeatureMicroMips] && Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureSoftFloat]);
  case 22:
    return (!Bits[Mips::FeatureMips16]);
  case 23:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMips32r2]);
  case 24:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMips4_32] && !Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMips64r6] && !Bits[Mips::FeatureSoftFloat]);
  case 25:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMips32r2] && !Bits[Mips::FeatureMicroMips]);
  case 26:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMSA]);
  case 27:
    return (!Bits[Mips::FeatureMips16] && !Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMips64r6]);
  case 28:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMips32] && !Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMips64r6]);
  case 29:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMips32]);
  case 30:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMips4_32] && !Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMips64r6]);
  case 31:
    return (!Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMips64r6] && !Bits[Mips::FeatureMicroMips]);
  case 32:
    return (Bits[Mips::FeatureDSP]);
  case 33:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMSA] && Bits[Mips::FeatureMips64]);
  case 34:
    return (!Bits[Mips::FeatureMips16] && !Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMips64r6] && !Bits[Mips::FeatureMicroMips]);
  case 35:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMips2] && !Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMips64r6]);
  case 36:
    return (Bits[Mips::FeatureDSP] && !Bits[Mips::FeatureMicroMips]);
  case 37:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMips32] && !Bits[Mips::FeatureMicroMips]);
  case 38:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureEVA] && Bits[Mips::FeatureMips32r2] && !Bits[Mips::FeatureMicroMips]);
  case 39:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMips3_32] && !Bits[Mips::FeatureMicroMips]);
  case 40:
    return (!Bits[Mips::FeatureMicroMips]);
  case 41:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMips32r5] && !Bits[Mips::FeatureMicroMips]);
  case 42:
    return (!Bits[Mips::FeatureMips16] && !Bits[Mips::FeatureSoftFloat]);
  case 43:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMips3] && !Bits[Mips::FeatureSoftFloat] && !Bits[Mips::FeatureMicroMips]);
  case 44:
    return (!Bits[Mips::FeatureMips16] && !Bits[Mips::FeatureSoftFloat] && !Bits[Mips::FeatureMicroMips]);
  case 45:
    return (!Bits[Mips::FeatureMips16] && !Bits[Mips::FeatureFP64Bit] && Bits[Mips::FeatureMips32r2] && !Bits[Mips::FeatureSoftFloat] && !Bits[Mips::FeatureMicroMips]);
  case 46:
    return (!Bits[Mips::FeatureMips16] && !Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMips64r6] && !Bits[Mips::FeatureSoftFloat]);
  case 47:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMips2] && !Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMips64r6] && !Bits[Mips::FeatureSoftFloat]);
  case 48:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMips2] && !Bits[Mips::FeatureSoftFloat]);
  case 49:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMips4_32r2] && !Bits[Mips::FeatureSoftFloat] && !Bits[Mips::FeatureMicroMips]);
  case 50:
    return (!Bits[Mips::FeatureMips16] && !Bits[Mips::FeatureFP64Bit] && !Bits[Mips::FeatureSoftFloat]);
  case 51:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMips3_32r2] && !Bits[Mips::FeatureSoftFloat] && !Bits[Mips::FeatureMicroMips]);
  case 52:
    return (!Bits[Mips::FeatureMips16] && !Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMips64r6] && !Bits[Mips::FeatureSoftFloat] && !Bits[Mips::FeatureMicroMips]);
  case 53:
    return (!Bits[Mips::FeatureMips16] && !Bits[Mips::FeatureFP64Bit] && Bits[Mips::FeatureMips2] && !Bits[Mips::FeatureSoftFloat]);
  case 54:
    return (!Bits[Mips::FeatureMips16] && !Bits[Mips::FeatureFP64Bit] && Bits[Mips::FeatureMips4_32] && !Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMips64r6] && !Bits[Mips::FeatureSoftFloat]);
  case 55:
    return (!Bits[Mips::FeatureMips16] && !Bits[Mips::FeatureFP64Bit] && !Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMips64r6] && !Bits[Mips::FeatureSoftFloat] && !Bits[Mips::FeatureMicroMips]);
  case 56:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMips4_32r2] && !Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMips64r6] && !Bits[Mips::FeatureSoftFloat]);
  case 57:
    return (!Bits[Mips::FeatureMips16] && !Bits[Mips::FeatureFP64Bit] && Bits[Mips::FeatureMips4_32r2] && !Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMips64r6] && !Bits[Mips::FeatureSoftFloat] && !Bits[Mips::FeatureMicroMips]);
  case 58:
    return (!Bits[Mips::FeatureMips16] && !Bits[Mips::FeatureFP64Bit] && Bits[Mips::FeatureMips5_32r2] && !Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMips64r6] && !Bits[Mips::FeatureSoftFloat]);
  case 59:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMips4_32r2] && !Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMips64r6] && !Bits[Mips::FeatureSoftFloat] && !Bits[Mips::FeatureMadd4]);
  case 60:
    return (!Bits[Mips::FeatureMips16] && !Bits[Mips::FeatureFP64Bit] && Bits[Mips::FeatureMips4_32r2] && !Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMips64r6] && !Bits[Mips::FeatureSoftFloat] && !Bits[Mips::FeatureMadd4]);
  case 61:
    return (!Bits[Mips::FeatureMips16] && !Bits[Mips::FeatureFP64Bit] && Bits[Mips::FeatureMips32r2] && !Bits[Mips::FeatureSoftFloat] && Bits[Mips::FeatureMicroMips]);
  case 62:
    return (!Bits[Mips::FeatureMips16] && !Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMips64r6] && !Bits[Mips::FeatureSoftFloat] && Bits[Mips::FeatureMicroMips]);
  case 63:
    return (!Bits[Mips::FeatureMips16] && !Bits[Mips::FeatureFP64Bit] && !Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMips64r6] && !Bits[Mips::FeatureSoftFloat] && Bits[Mips::FeatureMicroMips]);
  case 64:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMips32] && !Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMips64r6] && !Bits[Mips::FeatureMicroMips]);
  case 65:
    return (Bits[Mips::FeatureDSPR2]);
  case 66:
    return (!Bits[Mips::FeatureMips16] && !Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMips64r6] && Bits[Mips::FeatureEVA] && Bits[Mips::FeatureMips32r2] && !Bits[Mips::FeatureMicroMips]);
  case 67:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureEVA] && Bits[Mips::FeatureMips32r2]);
  case 68:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMips3_32] && !Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMips64r6]);
  case 69:
    return (!Bits[Mips::FeatureMips16] && !Bits[Mips::FeaturePTR64Bit] && Bits[Mips::FeatureMips2] && !Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMips64r6] && !Bits[Mips::FeatureMicroMips]);
  case 70:
    return (!Bits[Mips::FeatureMips16] && !Bits[Mips::FeatureFP64Bit] && Bits[Mips::FeatureMips2] && !Bits[Mips::FeatureSoftFloat] && !Bits[Mips::FeatureMicroMips]);
  case 71:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMips2] && !Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMips64r6] && !Bits[Mips::FeatureMicroMips]);
  case 72:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeaturePTR64Bit] && !Bits[Mips::FeatureMicroMips]);
  case 73:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeaturePTR64Bit] && Bits[Mips::FeatureMips2] && !Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMips64r6] && !Bits[Mips::FeatureMicroMips]);
  case 74:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMips32r6]);
  case 75:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMicroMips]);
  case 76:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMips64r6] && !Bits[Mips::FeatureMicroMips]);
  case 77:
    return (!Bits[Mips::FeatureMips16] && !Bits[Mips::FeatureGP64Bit] && Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMicroMips]);
  case 78:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureSoftFloat] && !Bits[Mips::FeatureMicroMips]);
  case 79:
    return (!Bits[Mips::FeatureMips16] && !Bits[Mips::FeaturePTR64Bit] && Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMicroMips]);
  case 80:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMips64r6]);
  case 81:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureGP64Bit] && Bits[Mips::FeatureMips64r6]);
  case 82:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureGP64Bit] && Bits[Mips::FeatureMips32r6]);
  case 83:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeaturePTR64Bit] && Bits[Mips::FeatureMips64r6] && !Bits[Mips::FeatureMicroMips]);
  case 84:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMips3] && !Bits[Mips::FeatureMicroMips]);
  case 85:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMips64r2] && !Bits[Mips::FeatureMicroMips]);
  case 86:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMips3] && !Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMips64r6] && !Bits[Mips::FeatureMicroMips]);
  case 87:
    return (Bits[Mips::FeatureMips64]);
  case 88:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureFP64Bit] && Bits[Mips::FeatureMips32r2] && !Bits[Mips::FeatureSoftFloat] && !Bits[Mips::FeatureMicroMips]);
  case 89:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureFP64Bit] && !Bits[Mips::FeatureSoftFloat]);
  case 90:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureFP64Bit] && Bits[Mips::FeatureMips2] && !Bits[Mips::FeatureSoftFloat]);
  case 91:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureFP64Bit] && !Bits[Mips::FeatureSoftFloat] && !Bits[Mips::FeatureMicroMips]);
  case 92:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureFP64Bit] && Bits[Mips::FeatureMips4_32] && !Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMips64r6] && !Bits[Mips::FeatureSoftFloat]);
  case 93:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureFP64Bit] && !Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMips64r6] && !Bits[Mips::FeatureSoftFloat] && !Bits[Mips::FeatureMicroMips]);
  case 94:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureFP64Bit] && Bits[Mips::FeatureMips4_32r2] && !Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMips64r6] && !Bits[Mips::FeatureSoftFloat]);
  case 95:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureFP64Bit] && Bits[Mips::FeatureMips5_32r2] && !Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMips64r6] && !Bits[Mips::FeatureSoftFloat]);
  case 96:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureFP64Bit] && Bits[Mips::FeatureMips4_32r2] && !Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMips64r6] && !Bits[Mips::FeatureSoftFloat] && !Bits[Mips::FeatureMadd4]);
  case 97:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureFP64Bit] && !Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMips64r6] && !Bits[Mips::FeatureSoftFloat] && Bits[Mips::FeatureMicroMips]);
  case 98:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMips3] && !Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMips64r6]);
  case 99:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMips64] && !Bits[Mips::FeatureMips64r6] && !Bits[Mips::FeatureMicroMips]);
  case 100:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureFP64Bit] && Bits[Mips::FeatureMips2] && !Bits[Mips::FeatureSoftFloat] && !Bits[Mips::FeatureMicroMips]);
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
    return S;
  case 1:
    tmp = fieldFromInstruction(insn, 8, 3);
    if (DecodeCPU16RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 2:
    tmp = fieldFromInstruction(insn, 8, 3);
    if (DecodeCPU16RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 8, 3);
    if (DecodeCPU16RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 3:
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 3, 2) << 3;
    tmp |= fieldFromInstruction(insn, 5, 3) << 0;
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 3);
    if (DecodeCPU16RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 4:
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 5:
    tmp = fieldFromInstruction(insn, 2, 3);
    if (DecodeCPU16RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 8, 3);
    if (DecodeCPU16RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 5, 3);
    if (DecodeCPU16RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 6:
    tmp = fieldFromInstruction(insn, 8, 3);
    if (DecodeCPU16RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 5, 3);
    if (DecodeCPU16RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 7:
    tmp = fieldFromInstruction(insn, 8, 3);
    if (DecodeCPU16RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 8, 3);
    if (DecodeCPU16RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 5, 3);
    if (DecodeCPU16RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 8:
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 5) << 0;
    tmp |= fieldFromInstruction(insn, 16, 5) << 11;
    tmp |= fieldFromInstruction(insn, 21, 6) << 5;
    if (DecodeBranchTarget(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 9:
    tmp = fieldFromInstruction(insn, 5, 3);
    if (DecodeCPU16RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 10:
    if (DecodeFMem3(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 11:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 16);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 12:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 13:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 14:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 15:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 16:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 10);
    if (DecodeSImmWithOffsetAndScale<10>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 17:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 11, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 18:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeBranchTarget(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 19:
    tmp = fieldFromInstruction(insn, 7, 3);
    if (DecodeGPRMM16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 1, 3);
    if (DecodeGPRMM16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 4, 3);
    if (DecodeGPRMM16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 20:
    if (DecodeMemMMImm4(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 21:
    tmp = fieldFromInstruction(insn, 5, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 22:
    tmp = fieldFromInstruction(insn, 7, 3);
    if (DecodeGPRMM16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 4, 3);
    if (DecodeGPRMM16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 1, 3);
    if (DecodePOOL16BEncodedField(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 23:
    tmp = fieldFromInstruction(insn, 7, 3);
    if (DecodeGPRMM16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 4, 3);
    if (DecodeGPRMM16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeANDI16Imm(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 24:
    tmp = fieldFromInstruction(insn, 3, 3);
    if (DecodeGPRMM16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 3);
    if (DecodeGPRMM16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 25:
    tmp = fieldFromInstruction(insn, 3, 3);
    if (DecodeGPRMM16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 3);
    if (DecodeGPRMM16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 3, 3);
    if (DecodeGPRMM16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 26:
    if (DecodeMemMMReglistImm4Lsl2(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 27:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 28:
    tmp = fieldFromInstruction(insn, 0, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 29:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeUImmWithOffsetAndScale<5, 0, 4>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 30:
    if (DecodeMemMMSPImm5Lsl2(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 31:
    tmp = fieldFromInstruction(insn, 5, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 5, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 1, 4);
    if (DecodeSImmWithOffsetAndScale<4>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 32:
    tmp = fieldFromInstruction(insn, 1, 9);
    if (DecodeSimm9SP(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 33:
    if (DecodeMemMMGPImm7Lsl2(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 34:
    tmp = fieldFromInstruction(insn, 7, 3);
    if (DecodeGPRMM16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 4, 3);
    if (DecodeGPRMM16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 1, 3);
    if (DecodeAddiur2Simm7(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 35:
    tmp = fieldFromInstruction(insn, 7, 3);
    if (DecodeGPRMM16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 1, 6);
    if (DecodeUImmWithOffsetAndScale<6, 0, 4>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 36:
    tmp = fieldFromInstruction(insn, 7, 3);
    if (DecodeMovePRegPair(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 1, 3);
    if (DecodeGPRMM16MovePRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 4, 3);
    if (DecodeGPRMM16MovePRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 37:
    tmp = fieldFromInstruction(insn, 7, 3);
    if (DecodeGPRMM16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 7);
    if (DecodeBranchTarget7MM(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 38:
    tmp = fieldFromInstruction(insn, 0, 10);
    if (DecodeBranchTarget10MM(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 39:
    tmp = fieldFromInstruction(insn, 7, 3);
    if (DecodeGPRMM16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 7);
    if (DecodeLi16Imm(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 40:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 41:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 42:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 43:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 44:
    tmp = fieldFromInstruction(insn, 16, 10);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 6, 10);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 45:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeInsSize(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 46:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 47:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 48:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 49:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 50:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 51:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 52:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePtrRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodePtrRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 53:
    tmp = fieldFromInstruction(insn, 14, 2);
    if (DecodeACC64DSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 6);
    if (DecodeSImmWithOffsetAndScale<6>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 2);
    if (DecodeACC64DSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 54:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeUImmWithOffset<5, 1>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 55:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 56:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 12, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 57:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 12, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 58:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 2);
    if (DecodeACC64DSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 59:
    tmp = fieldFromInstruction(insn, 14, 2);
    if (DecodeHI32DSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 60:
    tmp = fieldFromInstruction(insn, 14, 2);
    if (DecodeLO32DSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 61:
    tmp = fieldFromInstruction(insn, 14, 2);
    if (DecodeACC64DSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 2);
    if (DecodeACC64DSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 62:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 63:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 64:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 65:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 66:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 13, 3);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 67:
    tmp = fieldFromInstruction(insn, 14, 2);
    if (DecodeACC64DSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 2);
    if (DecodeACC64DSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 68:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 69:
    tmp = fieldFromInstruction(insn, 16, 10);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 70:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 13, 8);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 71:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 7);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 72:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 2);
    if (DecodeACC64DSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 73:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 74:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 2);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 75:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 2);
    if (DecodeACC64DSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 76:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeHWRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 77:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 78:
    tmp = fieldFromInstruction(insn, 16, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 79:
    tmp = fieldFromInstruction(insn, 14, 2);
    if (DecodeACC64DSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 80:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCOP2RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 81:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCOP2RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 82:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 10);
    if (DecodeSImmWithOffsetAndScale<10>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 83:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeSImmWithOffsetAndScale<16>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 84:
    if (DecodeMemMMImm16(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 85:
    if (DecodeMemMMImm12(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 86:
    if (DecodeCacheOpMM(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 87:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeBranchTargetMM(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 88:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeSImmWithOffsetAndScale<16>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 89:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 16);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 90:
    if (DecodeSyncI(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 91:
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeBranchTarget1SImm16(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 92:
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeBranchTargetMM(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 93:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 16);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 94:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCCRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 95:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCCRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 96:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 13, 3);
    if (DecodeFCCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 97:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePtrRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodePtrRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 98:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 99:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 100:
    if (DecodeMemMMImm9(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 101:
    if (DecodePrefeOpMM(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 102:
    if (DecodeJumpTargetMM(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 103:
    tmp = fieldFromInstruction(insn, 23, 3);
    if (DecodeGPRMM16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 23);
    if (DecodeSimm23Lsl2(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 104:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeBranchTargetMM(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 105:
    if (DecodeFMemMMR2(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 106:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 107:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 108:
    tmp = fieldFromInstruction(insn, 1, 3);
    if (DecodeGPRMM16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 7, 3);
    if (DecodeGPRMM16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 4, 3);
    if (DecodeGPRMM16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 109:
    tmp = fieldFromInstruction(insn, 7, 3);
    if (DecodeGPRMM16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 4, 3);
    if (DecodeGPRMM16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 110:
    tmp = fieldFromInstruction(insn, 7, 3);
    if (DecodeGPRMM16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 4, 3);
    if (DecodeGPRMM16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 7, 3);
    if (DecodeGPRMM16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 111:
    tmp = fieldFromInstruction(insn, 5, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 112:
    tmp = fieldFromInstruction(insn, 5, 5);
    if (DecodeUImmWithOffsetAndScale<5, 0, 4>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 113:
    tmp = fieldFromInstruction(insn, 6, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 114:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeHWRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 3);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 115:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 9, 2);
    if (DecodeUImmWithOffset<2, 1>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 116:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 9, 2);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 117:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCOP0RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 3);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 118:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCOP0RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 3);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 119:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCOP2RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 120:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCOP2RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 121:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 16);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 122:
    if (DecodeLoadByte15(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 123:
    if (DecodeFMemCop2MMR6(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 124:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeBranchTargetMM(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 125:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCOP2RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeBranchTargetMM(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 126:
    if (DecodeSynciR6(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 127:
    if (DecodeDAHIDATIMMR6(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 128:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 129:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGRCCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 130:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGRCCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 131:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 132:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 133:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 134:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 135:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 136:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 137:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGRCCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 138:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 139:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 140:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 141:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 142:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 143:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 144:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 145:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGRCCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 146:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 147:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 148:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 149:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 150:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 151:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 9, 2);
    if (DecodeUImmWithOffset<2, 1>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 152:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeInsSize(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 153:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 154:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 155:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeUImmWithOffset<5, 1>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 156:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 8, 3);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 157:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCOP0RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 3);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 158:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCOP0RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 3);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 159:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 160:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 161:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeSImmWithOffsetAndScale<16>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 162:
    if (DecodeLoadByte9(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 163:
    if (DecodeStoreEvaOpMM(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 164:
    if (DecodePOP35GroupBranchMMR6(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 165:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 19);
    if (DecodeSimm19Lsl2(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 166:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 19);
    if (DecodeSimm19Lsl2(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 167:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 18);
    if (DecodeSimm18Lsl3(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 168:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeSImmWithOffsetAndScale<16>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 169:
    if (DecodePOP37GroupBranchMMR6(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 170:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 21);
    if (DecodeBranchTarget21MM(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 171:
    tmp = fieldFromInstruction(insn, 0, 26);
    if (DecodeBranchTarget26MM(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 172:
    if (DecodeBlezGroupBranchMMR6(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 173:
    if (DecodePOP65GroupBranchMMR6(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 174:
    if (DecodeBgtzGroupBranchMMR6(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 175:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 16);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 176:
    if (DecodePOP75GroupBranchMMR6(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 177:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 178:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 18, 3);
    if (DecodeFCCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 179:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 2);
    if (DecodeUImmWithOffset<2, 1>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 180:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 181:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 182:
    tmp = fieldFromInstruction(insn, 6, 20);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 183:
    tmp = fieldFromInstruction(insn, 6, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 184:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 185:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 2);
    if (DecodeACC64DSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 186:
    tmp = fieldFromInstruction(insn, 11, 2);
    if (DecodeHI32DSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 187:
    tmp = fieldFromInstruction(insn, 11, 2);
    if (DecodeLO32DSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 188:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 2);
    if (DecodeUImmWithOffset<2, 1>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 189:
    tmp = fieldFromInstruction(insn, 11, 2);
    if (DecodeACC64DSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 190:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 10);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 191:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeBranchTarget(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 192:
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeBranchTarget(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 193:
    if (DecodeJumpTarget(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 194:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeBranchTarget(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 195:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeSImmWithOffsetAndScale<16>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 196:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 16);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 197:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeCOP0RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 3);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 198:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeCOP0RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 3);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 199:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 200:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 201:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeCCRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 202:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 203:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 204:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 205:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeCCRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 206:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 207:
    tmp = fieldFromInstruction(insn, 18, 3);
    if (DecodeFCCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeBranchTarget(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 208:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeBranchTarget(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 209:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 210:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 211:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 18, 3);
    if (DecodeFCCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 212:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 213:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 214:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 215:
    tmp = fieldFromInstruction(insn, 8, 3);
    if (DecodeFCCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 216:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 217:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 218:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 219:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 18, 3);
    if (DecodeFCCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 220:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 221:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 222:
    tmp = fieldFromInstruction(insn, 8, 3);
    if (DecodeFCCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 223:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeBranchTarget(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 224:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeBranchTarget(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 225:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeBranchTarget(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 226:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeCOP2RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 3);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 227:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeCOP2RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 3);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 228:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodePtrRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePtrRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 229:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodePtrRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePtrRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 230:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodePtrRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePtrRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 231:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodePtrRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePtrRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 232:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 233:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 234:
    tmp = fieldFromInstruction(insn, 13, 3);
    if (DecodeFCCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 235:
    tmp = fieldFromInstruction(insn, 13, 3);
    if (DecodeFCCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 236:
    tmp = fieldFromInstruction(insn, 11, 2);
    if (DecodeACC64DSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 2);
    if (DecodeACC64DSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 237:
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 11, 5) << 0;
    tmp |= fieldFromInstruction(insn, 16, 5) << 0;
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 238:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 8);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 239:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 8);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 240:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 8);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 241:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 8);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 242:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 243:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 244:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 245:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 246:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 10);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 247:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 10);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 248:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 10);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 249:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 10);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 250:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 6);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 251:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 252:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 3);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 253:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 6);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 254:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 255:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 256:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 3);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 257:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 258:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 259:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 260:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 261:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 262:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 263:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 264:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 265:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 266:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 267:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 268:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 269:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 270:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 271:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 272:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 273:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 274:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 275:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 276:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 277:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 278:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 279:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 280:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 3);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 281:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 2);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 282:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 1);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 283:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSACtrlRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 284:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 285:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 3);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 286:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 2);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 287:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 1);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 288:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSACtrlRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 289:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 290:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 3);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 291:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 2);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 292:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 1);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 293:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 294:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 295:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 3);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 296:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 2);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 297:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 1);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 298:
    if (DecodeINSVE_DF(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 299:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 300:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 301:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 302:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 303:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 304:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 305:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 306:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 307:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 308:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 309:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 310:
    if (DecodeMSA128Mem(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 311:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeUImmWithOffset<5, 1>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 312:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeInsSize(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 313:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodePtrRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePtrRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 314:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 315:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 316:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 317:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 318:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 319:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 320:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 321:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 10);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 322:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 323:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 324:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 325:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 326:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 327:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 328:
    if (DecodeMemEVA(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 329:
    if (DecodeCacheeOp_CacheOpR6(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 330:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 331:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 2);
    if (DecodeACC64DSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 332:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 2);
    if (DecodeACC64DSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 333:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 10);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 334:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 10);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 335:
    tmp = fieldFromInstruction(insn, 11, 2);
    if (DecodeACC64DSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 20, 6);
    if (DecodeSImmWithOffsetAndScale<6>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 2);
    if (DecodeACC64DSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 336:
    tmp = fieldFromInstruction(insn, 11, 2);
    if (DecodeACC64DSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 2);
    if (DecodeACC64DSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 337:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeHWRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 338:
    if (DecodeMem(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 339:
    if (DecodeCacheOp(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 340:
    if (DecodeFMem(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 341:
    if (DecodeFMem2(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 342:
    if (DecodeDAHIDATI(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 343:
    if (DecodeBlezGroupBranch(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 344:
    if (DecodeBgtzGroupBranch(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 345:
    if (DecodeAddiGroupBranch(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 346:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeBranchTarget(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 347:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGRCCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 348:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 349:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGRCCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 350:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 351:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 352:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGRCCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 353:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGRCCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 354:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCOP2RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeBranchTarget(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 355:
    if (DecodeFMemCop2R6(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 356:
    if (DecodeBlezlGroupBranch(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 357:
    if (DecodeBgtzlGroupBranch(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 358:
    if (DecodeDaddiGroupBranch(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 359:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 2);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 360:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 361:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 3);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 362:
    if (DecodeSpecial3LlSc(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 363:
    tmp = fieldFromInstruction(insn, 0, 26);
    if (DecodeBranchTarget26(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 364:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 21);
    if (DecodeBranchTarget21(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 365:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 21);
    if (DecodeBranchTarget21(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 366:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 367:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 368:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeCOP0RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 3);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 369:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeCOP0RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 3);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 370:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 371:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 372:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 373:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 18, 3);
    if (DecodeFCCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 374:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 375:
    tmp = fieldFromInstruction(insn, 8, 3);
    if (DecodeFCCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 376:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeCOP2RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 3);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 377:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeCOP2RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 3);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 378:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodePtrRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePtrRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 379:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodePtrRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePtrRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 380:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 381:
    tmp = fieldFromInstruction(insn, 13, 3);
    if (DecodeFCCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 382:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeSImmWithOffsetAndScale<16>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 383:
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 11, 5) << 0;
    tmp |= fieldFromInstruction(insn, 16, 5) << 0;
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 384:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeUImmWithOffset<5, 1>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 385:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeInsSize(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
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
