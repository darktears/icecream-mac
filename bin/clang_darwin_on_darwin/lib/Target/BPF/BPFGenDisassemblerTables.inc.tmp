/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|*  * BPF Disassembler                                                        *|
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

static const uint8_t DecoderTableBPF64[] = {
/* 0 */       MCD::OPC_ExtractField, 56, 8,  // Inst{63-56} ...
/* 3 */       MCD::OPC_FilterValue, 5, 3, 0, // Skip to: 10
/* 7 */       MCD::OPC_Decode, 97, 0, // Opcode: JMP
/* 10 */      MCD::OPC_FilterValue, 7, 3, 0, // Skip to: 17
/* 14 */      MCD::OPC_Decode, 82, 1, // Opcode: ADD_ri
/* 17 */      MCD::OPC_FilterValue, 15, 3, 0, // Skip to: 24
/* 21 */      MCD::OPC_Decode, 83, 2, // Opcode: ADD_rr
/* 24 */      MCD::OPC_FilterValue, 21, 3, 0, // Skip to: 31
/* 28 */      MCD::OPC_Decode, 95, 3, // Opcode: JEQ_ri
/* 31 */      MCD::OPC_FilterValue, 23, 4, 0, // Skip to: 39
/* 35 */      MCD::OPC_Decode, 138, 1, 1, // Opcode: SUB_ri
/* 39 */      MCD::OPC_FilterValue, 24, 34, 0, // Skip to: 77
/* 43 */      MCD::OPC_ExtractField, 32, 16,  // Inst{47-32} ...
/* 46 */      MCD::OPC_FilterValue, 0, 176, 1, // Skip to: 482
/* 50 */      MCD::OPC_CheckField, 48, 8, 32, 9, 0, // Skip to: 65
/* 56 */      MCD::OPC_CheckField, 0, 32, 0, 3, 0, // Skip to: 65
/* 62 */      MCD::OPC_Decode, 93, 4, // Opcode: FI_ri
/* 65 */      MCD::OPC_CheckField, 52, 4, 0, 3, 0, // Skip to: 74
/* 71 */      MCD::OPC_Decode, 118, 5, // Opcode: LD_imm64
/* 74 */      MCD::OPC_Decode, 119, 6, // Opcode: LD_pseudo
/* 77 */      MCD::OPC_FilterValue, 29, 3, 0, // Skip to: 84
/* 81 */      MCD::OPC_Decode, 96, 7, // Opcode: JEQ_rr
/* 84 */      MCD::OPC_FilterValue, 31, 4, 0, // Skip to: 92
/* 88 */      MCD::OPC_Decode, 139, 1, 2, // Opcode: SUB_rr
/* 92 */      MCD::OPC_FilterValue, 32, 3, 0, // Skip to: 99
/* 96 */      MCD::OPC_Decode, 114, 8, // Opcode: LD_ABS_W
/* 99 */      MCD::OPC_FilterValue, 37, 3, 0, // Skip to: 106
/* 103 */     MCD::OPC_Decode, 106, 3, // Opcode: JUGT_ri
/* 106 */     MCD::OPC_FilterValue, 39, 3, 0, // Skip to: 113
/* 110 */     MCD::OPC_Decode, 122, 1, // Opcode: MUL_ri
/* 113 */     MCD::OPC_FilterValue, 40, 3, 0, // Skip to: 120
/* 117 */     MCD::OPC_Decode, 113, 8, // Opcode: LD_ABS_H
/* 120 */     MCD::OPC_FilterValue, 45, 3, 0, // Skip to: 127
/* 124 */     MCD::OPC_Decode, 107, 7, // Opcode: JUGT_rr
/* 127 */     MCD::OPC_FilterValue, 47, 3, 0, // Skip to: 134
/* 131 */     MCD::OPC_Decode, 123, 2, // Opcode: MUL_rr
/* 134 */     MCD::OPC_FilterValue, 48, 3, 0, // Skip to: 141
/* 138 */     MCD::OPC_Decode, 112, 8, // Opcode: LD_ABS_B
/* 141 */     MCD::OPC_FilterValue, 53, 3, 0, // Skip to: 148
/* 145 */     MCD::OPC_Decode, 104, 3, // Opcode: JUGE_ri
/* 148 */     MCD::OPC_FilterValue, 55, 3, 0, // Skip to: 155
/* 152 */     MCD::OPC_Decode, 91, 1, // Opcode: DIV_ri
/* 155 */     MCD::OPC_FilterValue, 61, 3, 0, // Skip to: 162
/* 159 */     MCD::OPC_Decode, 105, 7, // Opcode: JUGE_rr
/* 162 */     MCD::OPC_FilterValue, 63, 3, 0, // Skip to: 169
/* 166 */     MCD::OPC_Decode, 92, 2, // Opcode: DIV_rr
/* 169 */     MCD::OPC_FilterValue, 64, 3, 0, // Skip to: 176
/* 173 */     MCD::OPC_Decode, 117, 9, // Opcode: LD_IND_W
/* 176 */     MCD::OPC_FilterValue, 71, 3, 0, // Skip to: 183
/* 180 */     MCD::OPC_Decode, 125, 1, // Opcode: OR_ri
/* 183 */     MCD::OPC_FilterValue, 72, 3, 0, // Skip to: 190
/* 187 */     MCD::OPC_Decode, 116, 9, // Opcode: LD_IND_H
/* 190 */     MCD::OPC_FilterValue, 79, 3, 0, // Skip to: 197
/* 194 */     MCD::OPC_Decode, 126, 2, // Opcode: OR_rr
/* 197 */     MCD::OPC_FilterValue, 80, 3, 0, // Skip to: 204
/* 201 */     MCD::OPC_Decode, 115, 9, // Opcode: LD_IND_B
/* 204 */     MCD::OPC_FilterValue, 85, 3, 0, // Skip to: 211
/* 208 */     MCD::OPC_Decode, 98, 3, // Opcode: JNE_ri
/* 211 */     MCD::OPC_FilterValue, 87, 3, 0, // Skip to: 218
/* 215 */     MCD::OPC_Decode, 86, 1, // Opcode: AND_ri
/* 218 */     MCD::OPC_FilterValue, 93, 3, 0, // Skip to: 225
/* 222 */     MCD::OPC_Decode, 99, 7, // Opcode: JNE_rr
/* 225 */     MCD::OPC_FilterValue, 95, 3, 0, // Skip to: 232
/* 229 */     MCD::OPC_Decode, 87, 2, // Opcode: AND_rr
/* 232 */     MCD::OPC_FilterValue, 97, 3, 0, // Skip to: 239
/* 236 */     MCD::OPC_Decode, 111, 10, // Opcode: LDW
/* 239 */     MCD::OPC_FilterValue, 99, 4, 0, // Skip to: 247
/* 243 */     MCD::OPC_Decode, 137, 1, 11, // Opcode: STW
/* 247 */     MCD::OPC_FilterValue, 101, 3, 0, // Skip to: 254
/* 251 */     MCD::OPC_Decode, 102, 3, // Opcode: JSGT_ri
/* 254 */     MCD::OPC_FilterValue, 103, 4, 0, // Skip to: 262
/* 258 */     MCD::OPC_Decode, 128, 1, 1, // Opcode: SLL_ri
/* 262 */     MCD::OPC_FilterValue, 105, 3, 0, // Skip to: 269
/* 266 */     MCD::OPC_Decode, 110, 10, // Opcode: LDH
/* 269 */     MCD::OPC_FilterValue, 107, 4, 0, // Skip to: 277
/* 273 */     MCD::OPC_Decode, 136, 1, 11, // Opcode: STH
/* 277 */     MCD::OPC_FilterValue, 109, 3, 0, // Skip to: 284
/* 281 */     MCD::OPC_Decode, 103, 7, // Opcode: JSGT_rr
/* 284 */     MCD::OPC_FilterValue, 111, 4, 0, // Skip to: 292
/* 288 */     MCD::OPC_Decode, 129, 1, 2, // Opcode: SLL_rr
/* 292 */     MCD::OPC_FilterValue, 113, 3, 0, // Skip to: 299
/* 296 */     MCD::OPC_Decode, 108, 10, // Opcode: LDB
/* 299 */     MCD::OPC_FilterValue, 115, 4, 0, // Skip to: 307
/* 303 */     MCD::OPC_Decode, 134, 1, 11, // Opcode: STB
/* 307 */     MCD::OPC_FilterValue, 117, 3, 0, // Skip to: 314
/* 311 */     MCD::OPC_Decode, 100, 3, // Opcode: JSGE_ri
/* 314 */     MCD::OPC_FilterValue, 119, 4, 0, // Skip to: 322
/* 318 */     MCD::OPC_Decode, 132, 1, 1, // Opcode: SRL_ri
/* 322 */     MCD::OPC_FilterValue, 121, 3, 0, // Skip to: 329
/* 326 */     MCD::OPC_Decode, 109, 10, // Opcode: LDD
/* 329 */     MCD::OPC_FilterValue, 123, 4, 0, // Skip to: 337
/* 333 */     MCD::OPC_Decode, 135, 1, 11, // Opcode: STD
/* 337 */     MCD::OPC_FilterValue, 125, 3, 0, // Skip to: 344
/* 341 */     MCD::OPC_Decode, 101, 7, // Opcode: JSGE_rr
/* 344 */     MCD::OPC_FilterValue, 127, 4, 0, // Skip to: 352
/* 348 */     MCD::OPC_Decode, 133, 1, 2, // Opcode: SRL_rr
/* 352 */     MCD::OPC_FilterValue, 133, 1, 3, 0, // Skip to: 360
/* 357 */     MCD::OPC_Decode, 94, 8, // Opcode: JAL
/* 360 */     MCD::OPC_FilterValue, 149, 1, 9, 0, // Skip to: 374
/* 365 */     MCD::OPC_CheckField, 0, 32, 0, 111, 0, // Skip to: 482
/* 371 */     MCD::OPC_Decode, 127, 4, // Opcode: RET
/* 374 */     MCD::OPC_FilterValue, 167, 1, 4, 0, // Skip to: 383
/* 379 */     MCD::OPC_Decode, 143, 1, 1, // Opcode: XOR_ri
/* 383 */     MCD::OPC_FilterValue, 175, 1, 4, 0, // Skip to: 392
/* 388 */     MCD::OPC_Decode, 144, 1, 2, // Opcode: XOR_rr
/* 392 */     MCD::OPC_FilterValue, 183, 1, 3, 0, // Skip to: 400
/* 397 */     MCD::OPC_Decode, 120, 5, // Opcode: MOV_ri
/* 400 */     MCD::OPC_FilterValue, 191, 1, 12, 0, // Skip to: 417
/* 405 */     MCD::OPC_CheckField, 48, 8, 0, 3, 0, // Skip to: 414
/* 411 */     MCD::OPC_Decode, 124, 4, // Opcode: NOP
/* 414 */     MCD::OPC_Decode, 121, 12, // Opcode: MOV_rr
/* 417 */     MCD::OPC_FilterValue, 195, 1, 4, 0, // Skip to: 426
/* 422 */     MCD::OPC_Decode, 141, 1, 13, // Opcode: XADD32
/* 426 */     MCD::OPC_FilterValue, 199, 1, 4, 0, // Skip to: 435
/* 431 */     MCD::OPC_Decode, 130, 1, 1, // Opcode: SRA_ri
/* 435 */     MCD::OPC_FilterValue, 207, 1, 4, 0, // Skip to: 444
/* 440 */     MCD::OPC_Decode, 131, 1, 2, // Opcode: SRA_rr
/* 444 */     MCD::OPC_FilterValue, 219, 1, 4, 0, // Skip to: 453
/* 449 */     MCD::OPC_Decode, 142, 1, 13, // Opcode: XADD64
/* 453 */     MCD::OPC_FilterValue, 220, 1, 24, 0, // Skip to: 482
/* 458 */     MCD::OPC_ExtractField, 0, 32,  // Inst{31-0} ...
/* 461 */     MCD::OPC_FilterValue, 16, 3, 0, // Skip to: 468
/* 465 */     MCD::OPC_Decode, 88, 14, // Opcode: BSWAP16
/* 468 */     MCD::OPC_FilterValue, 32, 3, 0, // Skip to: 475
/* 472 */     MCD::OPC_Decode, 89, 14, // Opcode: BSWAP32
/* 475 */     MCD::OPC_FilterValue, 64, 3, 0, // Skip to: 482
/* 479 */     MCD::OPC_Decode, 90, 14, // Opcode: BSWAP64
/* 482 */     MCD::OPC_Fail,
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
    tmp = fieldFromInstruction(insn, 32, 16);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 1:
    tmp = fieldFromInstruction(insn, 48, 4);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 48, 4);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 32);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 2:
    tmp = fieldFromInstruction(insn, 48, 4);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 48, 4);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 52, 4);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 3:
    tmp = fieldFromInstruction(insn, 48, 4);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 32);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 32, 16);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 4:
    return S;
  case 5:
    tmp = fieldFromInstruction(insn, 48, 4);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 32);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 6:
    tmp = fieldFromInstruction(insn, 48, 4);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 52, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 0, 32);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 7:
    tmp = fieldFromInstruction(insn, 48, 4);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 52, 4);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 32, 16);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 8:
    tmp = fieldFromInstruction(insn, 0, 32);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 9:
    tmp = fieldFromInstruction(insn, 52, 4);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 10:
    tmp = fieldFromInstruction(insn, 48, 4);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 32, 16) << 0;
    tmp |= fieldFromInstruction(insn, 52, 4) << 16;
    if (decodeMemoryOpValue(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 11:
    tmp = fieldFromInstruction(insn, 52, 4);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 32, 20);
    if (decodeMemoryOpValue(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 12:
    tmp = fieldFromInstruction(insn, 48, 4);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 52, 4);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 13:
    tmp = fieldFromInstruction(insn, 52, 4);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 32, 20);
    if (decodeMemoryOpValue(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 52, 4);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 14:
    tmp = fieldFromInstruction(insn, 48, 4);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 48, 4);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
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
