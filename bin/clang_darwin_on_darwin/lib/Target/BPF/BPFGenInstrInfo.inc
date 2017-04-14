/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Target Instruction Enum Values and Descriptors                             *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifdef GET_INSTRINFO_ENUM
#undef GET_INSTRINFO_ENUM
namespace llvm {

namespace BPF {
  enum {
    PHI	= 0,
    INLINEASM	= 1,
    CFI_INSTRUCTION	= 2,
    EH_LABEL	= 3,
    GC_LABEL	= 4,
    KILL	= 5,
    EXTRACT_SUBREG	= 6,
    INSERT_SUBREG	= 7,
    IMPLICIT_DEF	= 8,
    SUBREG_TO_REG	= 9,
    COPY_TO_REGCLASS	= 10,
    DBG_VALUE	= 11,
    REG_SEQUENCE	= 12,
    COPY	= 13,
    BUNDLE	= 14,
    LIFETIME_START	= 15,
    LIFETIME_END	= 16,
    STACKMAP	= 17,
    FENTRY_CALL	= 18,
    PATCHPOINT	= 19,
    LOAD_STACK_GUARD	= 20,
    STATEPOINT	= 21,
    LOCAL_ESCAPE	= 22,
    FAULTING_OP	= 23,
    PATCHABLE_OP	= 24,
    PATCHABLE_FUNCTION_ENTER	= 25,
    PATCHABLE_RET	= 26,
    PATCHABLE_FUNCTION_EXIT	= 27,
    PATCHABLE_TAIL_CALL	= 28,
    G_ADD	= 29,
    G_SUB	= 30,
    G_MUL	= 31,
    G_SDIV	= 32,
    G_UDIV	= 33,
    G_SREM	= 34,
    G_UREM	= 35,
    G_AND	= 36,
    G_OR	= 37,
    G_XOR	= 38,
    G_FRAME_INDEX	= 39,
    G_GLOBAL_VALUE	= 40,
    G_EXTRACT	= 41,
    G_UNMERGE_VALUES	= 42,
    G_INSERT	= 43,
    G_SEQUENCE	= 44,
    G_MERGE_VALUES	= 45,
    G_PTRTOINT	= 46,
    G_INTTOPTR	= 47,
    G_BITCAST	= 48,
    G_LOAD	= 49,
    G_STORE	= 50,
    G_BRCOND	= 51,
    G_BRINDIRECT	= 52,
    G_INTRINSIC	= 53,
    G_INTRINSIC_W_SIDE_EFFECTS	= 54,
    G_ANYEXT	= 55,
    G_TRUNC	= 56,
    G_CONSTANT	= 57,
    G_FCONSTANT	= 58,
    G_VASTART	= 59,
    G_VAARG	= 60,
    G_SEXT	= 61,
    G_ZEXT	= 62,
    G_SHL	= 63,
    G_LSHR	= 64,
    G_ASHR	= 65,
    G_ICMP	= 66,
    G_FCMP	= 67,
    G_SELECT	= 68,
    G_UADDE	= 69,
    G_USUBE	= 70,
    G_SADDO	= 71,
    G_SSUBO	= 72,
    G_UMULO	= 73,
    G_SMULO	= 74,
    G_UMULH	= 75,
    G_SMULH	= 76,
    G_FADD	= 77,
    G_FSUB	= 78,
    G_FMUL	= 79,
    G_FDIV	= 80,
    G_FREM	= 81,
    G_FPOW	= 82,
    G_FNEG	= 83,
    G_FPEXT	= 84,
    G_FPTRUNC	= 85,
    G_FPTOSI	= 86,
    G_FPTOUI	= 87,
    G_SITOFP	= 88,
    G_UITOFP	= 89,
    G_GEP	= 90,
    G_PTR_MASK	= 91,
    G_BR	= 92,
    G_INSERT_VECTOR_ELT	= 93,
    G_EXTRACT_VECTOR_ELT	= 94,
    G_SHUFFLE_VECTOR	= 95,
    ADD_ri	= 96,
    ADD_rr	= 97,
    ADJCALLSTACKDOWN	= 98,
    ADJCALLSTACKUP	= 99,
    AND_ri	= 100,
    AND_rr	= 101,
    BSWAP16	= 102,
    BSWAP32	= 103,
    BSWAP64	= 104,
    DIV_ri	= 105,
    DIV_rr	= 106,
    FI_ri	= 107,
    JAL	= 108,
    JEQ_ri	= 109,
    JEQ_rr	= 110,
    JMP	= 111,
    JNE_ri	= 112,
    JNE_rr	= 113,
    JSGE_ri	= 114,
    JSGE_rr	= 115,
    JSGT_ri	= 116,
    JSGT_rr	= 117,
    JUGE_ri	= 118,
    JUGE_rr	= 119,
    JUGT_ri	= 120,
    JUGT_rr	= 121,
    LDB	= 122,
    LDD	= 123,
    LDH	= 124,
    LDW	= 125,
    LD_ABS_B	= 126,
    LD_ABS_H	= 127,
    LD_ABS_W	= 128,
    LD_IND_B	= 129,
    LD_IND_H	= 130,
    LD_IND_W	= 131,
    LD_imm64	= 132,
    LD_pseudo	= 133,
    MOV_ri	= 134,
    MOV_rr	= 135,
    MUL_ri	= 136,
    MUL_rr	= 137,
    NOP	= 138,
    OR_ri	= 139,
    OR_rr	= 140,
    RET	= 141,
    SLL_ri	= 142,
    SLL_rr	= 143,
    SRA_ri	= 144,
    SRA_rr	= 145,
    SRL_ri	= 146,
    SRL_rr	= 147,
    STB	= 148,
    STD	= 149,
    STH	= 150,
    STW	= 151,
    SUB_ri	= 152,
    SUB_rr	= 153,
    Select	= 154,
    XADD32	= 155,
    XADD64	= 156,
    XOR_ri	= 157,
    XOR_rr	= 158,
    INSTRUCTION_LIST_END = 159
  };

namespace Sched {
  enum {
    NoInstrModel	= 0,
    SCHED_LIST_END = 1
  };
} // end Sched namespace
} // end BPF namespace
} // end llvm namespace
#endif // GET_INSTRINFO_ENUM

#ifdef GET_INSTRINFO_MC_DESC
#undef GET_INSTRINFO_MC_DESC
namespace llvm {

static const MCPhysReg ImplicitList1[] = { BPF::R11, 0 };
static const MCPhysReg ImplicitList2[] = { BPF::R0, BPF::R1, BPF::R2, BPF::R3, BPF::R4, BPF::R5, 0 };
static const MCPhysReg ImplicitList3[] = { BPF::R6, 0 };

static const MCOperandInfo OperandInfo2[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo3[] = { { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo4[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo5[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo6[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo7[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo8[] = { { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo9[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo10[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo11[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo12[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, };
static const MCOperandInfo OperandInfo13[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo14[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo15[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo16[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, };
static const MCOperandInfo OperandInfo17[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, };
static const MCOperandInfo OperandInfo18[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, };
static const MCOperandInfo OperandInfo19[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, };
static const MCOperandInfo OperandInfo20[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, };
static const MCOperandInfo OperandInfo21[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, };
static const MCOperandInfo OperandInfo22[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, };
static const MCOperandInfo OperandInfo23[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo24[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_2, 0 }, };
static const MCOperandInfo OperandInfo25[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_2, 0 }, };
static const MCOperandInfo OperandInfo26[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_2, 0 }, };
static const MCOperandInfo OperandInfo27[] = { { BPF::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { BPF::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo28[] = { { BPF::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { BPF::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { BPF::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo29[] = { { BPF::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { BPF::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo30[] = { { BPF::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { BPF::GPRRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo31[] = { { BPF::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo32[] = { { BPF::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { BPF::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo33[] = { { BPF::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo34[] = { { BPF::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { BPF::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo35[] = { { BPF::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo36[] = { { BPF::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { BPF::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { BPF::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { BPF::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { BPF::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo37[] = { { BPF::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { BPF::GPRRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { BPF::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };

extern const MCInstrDesc BPFInsts[] = {
  { 0,	1,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #0 = PHI
  { 1,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #1 = INLINEASM
  { 2,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::NotDuplicable)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo3, -1 ,nullptr },  // Inst #2 = CFI_INSTRUCTION
  { 3,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::NotDuplicable)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo3, -1 ,nullptr },  // Inst #3 = EH_LABEL
  { 4,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::NotDuplicable)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo3, -1 ,nullptr },  // Inst #4 = GC_LABEL
  { 5,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #5 = KILL
  { 6,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo4, -1 ,nullptr },  // Inst #6 = EXTRACT_SUBREG
  { 7,	4,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo5, -1 ,nullptr },  // Inst #7 = INSERT_SUBREG
  { 8,	1,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #8 = IMPLICIT_DEF
  { 9,	4,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo6, -1 ,nullptr },  // Inst #9 = SUBREG_TO_REG
  { 10,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo4, -1 ,nullptr },  // Inst #10 = COPY_TO_REGCLASS
  { 11,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #11 = DBG_VALUE
  { 12,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo7, -1 ,nullptr },  // Inst #12 = REG_SEQUENCE
  { 13,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo7, -1 ,nullptr },  // Inst #13 = COPY
  { 14,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #14 = BUNDLE
  { 15,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo3, -1 ,nullptr },  // Inst #15 = LIFETIME_START
  { 16,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo3, -1 ,nullptr },  // Inst #16 = LIFETIME_END
  { 17,	2,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Call)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo8, -1 ,nullptr },  // Inst #17 = STACKMAP
  { 18,	1,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #18 = FENTRY_CALL
  { 19,	6,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Call)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo9, -1 ,nullptr },  // Inst #19 = PATCHPOINT
  { 20,	1,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::Rematerializable), 0x0ULL, nullptr, nullptr, OperandInfo10, -1 ,nullptr },  // Inst #20 = LOAD_STACK_GUARD
  { 21,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Call)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #21 = STATEPOINT
  { 22,	2,	0,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo11, -1 ,nullptr },  // Inst #22 = LOCAL_ESCAPE
  { 23,	1,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #23 = FAULTING_OP
  { 24,	1,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #24 = PATCHABLE_OP
  { 25,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #25 = PATCHABLE_FUNCTION_ENTER
  { 26,	1,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Return)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #26 = PATCHABLE_RET
  { 27,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #27 = PATCHABLE_FUNCTION_EXIT
  { 28,	1,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Return)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #28 = PATCHABLE_TAIL_CALL
  { 29,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #29 = G_ADD
  { 30,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #30 = G_SUB
  { 31,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #31 = G_MUL
  { 32,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #32 = G_SDIV
  { 33,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #33 = G_UDIV
  { 34,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #34 = G_SREM
  { 35,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #35 = G_UREM
  { 36,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #36 = G_AND
  { 37,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #37 = G_OR
  { 38,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #38 = G_XOR
  { 39,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #39 = G_FRAME_INDEX
  { 40,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #40 = G_GLOBAL_VALUE
  { 41,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #41 = G_EXTRACT
  { 42,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #42 = G_UNMERGE_VALUES
  { 43,	4,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #43 = G_INSERT
  { 44,	1,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #44 = G_SEQUENCE
  { 45,	1,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #45 = G_MERGE_VALUES
  { 46,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #46 = G_PTRTOINT
  { 47,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #47 = G_INTTOPTR
  { 48,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #48 = G_BITCAST
  { 49,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #49 = G_LOAD
  { 50,	2,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #50 = G_STORE
  { 51,	2,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #51 = G_BRCOND
  { 52,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #52 = G_BRINDIRECT
  { 53,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #53 = G_INTRINSIC
  { 54,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #54 = G_INTRINSIC_W_SIDE_EFFECTS
  { 55,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #55 = G_ANYEXT
  { 56,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #56 = G_TRUNC
  { 57,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #57 = G_CONSTANT
  { 58,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #58 = G_FCONSTANT
  { 59,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #59 = G_VASTART
  { 60,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #60 = G_VAARG
  { 61,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #61 = G_SEXT
  { 62,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #62 = G_ZEXT
  { 63,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #63 = G_SHL
  { 64,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #64 = G_LSHR
  { 65,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #65 = G_ASHR
  { 66,	4,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo18, -1 ,nullptr },  // Inst #66 = G_ICMP
  { 67,	4,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo18, -1 ,nullptr },  // Inst #67 = G_FCMP
  { 68,	4,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo19, -1 ,nullptr },  // Inst #68 = G_SELECT
  { 69,	5,	2,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo20, -1 ,nullptr },  // Inst #69 = G_UADDE
  { 70,	5,	2,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo20, -1 ,nullptr },  // Inst #70 = G_USUBE
  { 71,	4,	2,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo19, -1 ,nullptr },  // Inst #71 = G_SADDO
  { 72,	4,	2,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo19, -1 ,nullptr },  // Inst #72 = G_SSUBO
  { 73,	4,	2,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo19, -1 ,nullptr },  // Inst #73 = G_UMULO
  { 74,	4,	2,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo19, -1 ,nullptr },  // Inst #74 = G_SMULO
  { 75,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #75 = G_UMULH
  { 76,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #76 = G_SMULH
  { 77,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #77 = G_FADD
  { 78,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #78 = G_FSUB
  { 79,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #79 = G_FMUL
  { 80,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #80 = G_FDIV
  { 81,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #81 = G_FREM
  { 82,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #82 = G_FPOW
  { 83,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #83 = G_FNEG
  { 84,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #84 = G_FPEXT
  { 85,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #85 = G_FPTRUNC
  { 86,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #86 = G_FPTOSI
  { 87,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #87 = G_FPTOUI
  { 88,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #88 = G_SITOFP
  { 89,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #89 = G_UITOFP
  { 90,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #90 = G_GEP
  { 91,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #91 = G_PTR_MASK
  { 92,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #92 = G_BR
  { 93,	4,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #93 = G_INSERT_VECTOR_ELT
  { 94,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #94 = G_EXTRACT_VECTOR_ELT
  { 95,	4,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo26, -1 ,nullptr },  // Inst #95 = G_SHUFFLE_VECTOR
  { 96,	3,	1,	8,	0,	0|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #96 = ADD_ri
  { 97,	3,	1,	8,	0,	0|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo28, -1 ,nullptr },  // Inst #97 = ADD_rr
  { 98,	1,	0,	8,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo3, -1 ,nullptr },  // Inst #98 = ADJCALLSTACKDOWN
  { 99,	2,	0,	8,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo8, -1 ,nullptr },  // Inst #99 = ADJCALLSTACKUP
  { 100,	3,	1,	8,	0,	0|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #100 = AND_ri
  { 101,	3,	1,	8,	0,	0|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo28, -1 ,nullptr },  // Inst #101 = AND_rr
  { 102,	2,	1,	8,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #102 = BSWAP16
  { 103,	2,	1,	8,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #103 = BSWAP32
  { 104,	2,	1,	8,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #104 = BSWAP64
  { 105,	3,	1,	8,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #105 = DIV_ri
  { 106,	3,	1,	8,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo28, -1 ,nullptr },  // Inst #106 = DIV_rr
  { 107,	3,	1,	8,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo30, -1 ,nullptr },  // Inst #107 = FI_ri
  { 108,	1,	0,	8,	0,	0|(1ULL<<MCID::Call), 0x0ULL, ImplicitList1, ImplicitList2, OperandInfo2, -1 ,nullptr },  // Inst #108 = JAL
  { 109,	3,	0,	8,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo31, -1 ,nullptr },  // Inst #109 = JEQ_ri
  { 110,	3,	0,	8,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo32, -1 ,nullptr },  // Inst #110 = JEQ_rr
  { 111,	1,	0,	8,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #111 = JMP
  { 112,	3,	0,	8,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo31, -1 ,nullptr },  // Inst #112 = JNE_ri
  { 113,	3,	0,	8,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo32, -1 ,nullptr },  // Inst #113 = JNE_rr
  { 114,	3,	0,	8,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo31, -1 ,nullptr },  // Inst #114 = JSGE_ri
  { 115,	3,	0,	8,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo32, -1 ,nullptr },  // Inst #115 = JSGE_rr
  { 116,	3,	0,	8,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo31, -1 ,nullptr },  // Inst #116 = JSGT_ri
  { 117,	3,	0,	8,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo32, -1 ,nullptr },  // Inst #117 = JSGT_rr
  { 118,	3,	0,	8,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo31, -1 ,nullptr },  // Inst #118 = JUGE_ri
  { 119,	3,	0,	8,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo32, -1 ,nullptr },  // Inst #119 = JUGE_rr
  { 120,	3,	0,	8,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo31, -1 ,nullptr },  // Inst #120 = JUGT_ri
  { 121,	3,	0,	8,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo32, -1 ,nullptr },  // Inst #121 = JUGT_rr
  { 122,	3,	1,	8,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo30, -1 ,nullptr },  // Inst #122 = LDB
  { 123,	3,	1,	8,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo30, -1 ,nullptr },  // Inst #123 = LDD
  { 124,	3,	1,	8,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo30, -1 ,nullptr },  // Inst #124 = LDH
  { 125,	3,	1,	8,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo30, -1 ,nullptr },  // Inst #125 = LDW
  { 126,	2,	0,	8,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList3, ImplicitList2, OperandInfo33, -1 ,nullptr },  // Inst #126 = LD_ABS_B
  { 127,	2,	0,	8,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList3, ImplicitList2, OperandInfo33, -1 ,nullptr },  // Inst #127 = LD_ABS_H
  { 128,	2,	0,	8,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList3, ImplicitList2, OperandInfo33, -1 ,nullptr },  // Inst #128 = LD_ABS_W
  { 129,	2,	0,	8,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList3, ImplicitList2, OperandInfo34, -1 ,nullptr },  // Inst #129 = LD_IND_B
  { 130,	2,	0,	8,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList3, ImplicitList2, OperandInfo34, -1 ,nullptr },  // Inst #130 = LD_IND_H
  { 131,	2,	0,	8,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList3, ImplicitList2, OperandInfo34, -1 ,nullptr },  // Inst #131 = LD_IND_W
  { 132,	2,	1,	8,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo35, -1 ,nullptr },  // Inst #132 = LD_imm64
  { 133,	3,	1,	8,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo31, -1 ,nullptr },  // Inst #133 = LD_pseudo
  { 134,	2,	1,	8,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo33, -1 ,nullptr },  // Inst #134 = MOV_ri
  { 135,	2,	1,	8,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo34, -1 ,nullptr },  // Inst #135 = MOV_rr
  { 136,	3,	1,	8,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #136 = MUL_ri
  { 137,	3,	1,	8,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo28, -1 ,nullptr },  // Inst #137 = MUL_rr
  { 138,	1,	0,	8,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo3, -1 ,nullptr },  // Inst #138 = NOP
  { 139,	3,	1,	8,	0,	0|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #139 = OR_ri
  { 140,	3,	1,	8,	0,	0|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo28, -1 ,nullptr },  // Inst #140 = OR_rr
  { 141,	0,	0,	8,	0,	0|(1ULL<<MCID::Return)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::NotDuplicable), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #141 = RET
  { 142,	3,	1,	8,	0,	0|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #142 = SLL_ri
  { 143,	3,	1,	8,	0,	0|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo28, -1 ,nullptr },  // Inst #143 = SLL_rr
  { 144,	3,	1,	8,	0,	0|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #144 = SRA_ri
  { 145,	3,	1,	8,	0,	0|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo28, -1 ,nullptr },  // Inst #145 = SRA_rr
  { 146,	3,	1,	8,	0,	0|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #146 = SRL_ri
  { 147,	3,	1,	8,	0,	0|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo28, -1 ,nullptr },  // Inst #147 = SRL_rr
  { 148,	3,	0,	8,	0,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo30, -1 ,nullptr },  // Inst #148 = STB
  { 149,	3,	0,	8,	0,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo30, -1 ,nullptr },  // Inst #149 = STD
  { 150,	3,	0,	8,	0,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo30, -1 ,nullptr },  // Inst #150 = STH
  { 151,	3,	0,	8,	0,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo30, -1 ,nullptr },  // Inst #151 = STW
  { 152,	3,	1,	8,	0,	0|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #152 = SUB_ri
  { 153,	3,	1,	8,	0,	0|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo28, -1 ,nullptr },  // Inst #153 = SUB_rr
  { 154,	6,	1,	8,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo36, -1 ,nullptr },  // Inst #154 = Select
  { 155,	4,	1,	8,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo37, -1 ,nullptr },  // Inst #155 = XADD32
  { 156,	4,	1,	8,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo37, -1 ,nullptr },  // Inst #156 = XADD64
  { 157,	3,	1,	8,	0,	0|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #157 = XOR_ri
  { 158,	3,	1,	8,	0,	0|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo28, -1 ,nullptr },  // Inst #158 = XOR_rr
};

extern const char BPFInstrNameData[] = {
  /* 0 */ 'X', 'A', 'D', 'D', '3', '2', 0,
  /* 7 */ 'B', 'S', 'W', 'A', 'P', '3', '2', 0,
  /* 15 */ 'X', 'A', 'D', 'D', '6', '4', 0,
  /* 22 */ 'B', 'S', 'W', 'A', 'P', '6', '4', 0,
  /* 30 */ 'L', 'D', '_', 'i', 'm', 'm', '6', '4', 0,
  /* 39 */ 'B', 'S', 'W', 'A', 'P', '1', '6', 0,
  /* 47 */ 'L', 'D', 'B', 0,
  /* 51 */ 'S', 'T', 'B', 0,
  /* 55 */ 'G', '_', 'F', 'S', 'U', 'B', 0,
  /* 62 */ 'G', '_', 'S', 'U', 'B', 0,
  /* 68 */ 'L', 'D', '_', 'I', 'N', 'D', '_', 'B', 0,
  /* 77 */ 'L', 'D', '_', 'A', 'B', 'S', '_', 'B', 0,
  /* 86 */ 'G', '_', 'I', 'N', 'T', 'R', 'I', 'N', 'S', 'I', 'C', 0,
  /* 98 */ 'G', '_', 'F', 'P', 'T', 'R', 'U', 'N', 'C', 0,
  /* 108 */ 'G', '_', 'T', 'R', 'U', 'N', 'C', 0,
  /* 116 */ 'G', '_', 'L', 'O', 'A', 'D', 0,
  /* 123 */ 'G', '_', 'F', 'A', 'D', 'D', 0,
  /* 130 */ 'G', '_', 'A', 'D', 'D', 0,
  /* 136 */ 'L', 'D', 'D', 0,
  /* 140 */ 'G', '_', 'A', 'N', 'D', 0,
  /* 146 */ 'L', 'I', 'F', 'E', 'T', 'I', 'M', 'E', '_', 'E', 'N', 'D', 0,
  /* 159 */ 'G', '_', 'B', 'R', 'C', 'O', 'N', 'D', 0,
  /* 168 */ 'L', 'O', 'A', 'D', '_', 'S', 'T', 'A', 'C', 'K', '_', 'G', 'U', 'A', 'R', 'D', 0,
  /* 185 */ 'S', 'T', 'D', 0,
  /* 189 */ 'G', '_', 'U', 'S', 'U', 'B', 'E', 0,
  /* 197 */ 'R', 'E', 'G', '_', 'S', 'E', 'Q', 'U', 'E', 'N', 'C', 'E', 0,
  /* 210 */ 'G', '_', 'U', 'A', 'D', 'D', 'E', 0,
  /* 218 */ 'B', 'U', 'N', 'D', 'L', 'E', 0,
  /* 225 */ 'L', 'O', 'C', 'A', 'L', '_', 'E', 'S', 'C', 'A', 'P', 'E', 0,
  /* 238 */ 'G', '_', 'S', 'T', 'O', 'R', 'E', 0,
  /* 246 */ 'D', 'B', 'G', '_', 'V', 'A', 'L', 'U', 'E', 0,
  /* 256 */ 'G', '_', 'G', 'L', 'O', 'B', 'A', 'L', '_', 'V', 'A', 'L', 'U', 'E', 0,
  /* 271 */ 'I', 'M', 'P', 'L', 'I', 'C', 'I', 'T', '_', 'D', 'E', 'F', 0,
  /* 284 */ 'G', '_', 'F', 'N', 'E', 'G', 0,
  /* 291 */ 'E', 'X', 'T', 'R', 'A', 'C', 'T', '_', 'S', 'U', 'B', 'R', 'E', 'G', 0,
  /* 306 */ 'I', 'N', 'S', 'E', 'R', 'T', '_', 'S', 'U', 'B', 'R', 'E', 'G', 0,
  /* 320 */ 'S', 'U', 'B', 'R', 'E', 'G', '_', 'T', 'O', '_', 'R', 'E', 'G', 0,
  /* 334 */ 'G', '_', 'V', 'A', 'A', 'R', 'G', 0,
  /* 342 */ 'L', 'D', 'H', 0,
  /* 346 */ 'G', '_', 'S', 'M', 'U', 'L', 'H', 0,
  /* 354 */ 'G', '_', 'U', 'M', 'U', 'L', 'H', 0,
  /* 362 */ 'S', 'T', 'H', 0,
  /* 366 */ 'L', 'D', '_', 'I', 'N', 'D', '_', 'H', 0,
  /* 375 */ 'L', 'D', '_', 'A', 'B', 'S', '_', 'H', 0,
  /* 384 */ 'P', 'H', 'I', 0,
  /* 388 */ 'G', '_', 'F', 'P', 'T', 'O', 'S', 'I', 0,
  /* 397 */ 'G', '_', 'F', 'P', 'T', 'O', 'U', 'I', 0,
  /* 406 */ 'G', '_', 'P', 'T', 'R', '_', 'M', 'A', 'S', 'K', 0,
  /* 417 */ 'J', 'A', 'L', 0,
  /* 421 */ 'G', 'C', '_', 'L', 'A', 'B', 'E', 'L', 0,
  /* 430 */ 'E', 'H', '_', 'L', 'A', 'B', 'E', 'L', 0,
  /* 439 */ 'G', '_', 'S', 'H', 'L', 0,
  /* 445 */ 'P', 'A', 'T', 'C', 'H', 'A', 'B', 'L', 'E', '_', 'T', 'A', 'I', 'L', '_', 'C', 'A', 'L', 'L', 0,
  /* 465 */ 'F', 'E', 'N', 'T', 'R', 'Y', '_', 'C', 'A', 'L', 'L', 0,
  /* 477 */ 'K', 'I', 'L', 'L', 0,
  /* 482 */ 'G', '_', 'F', 'M', 'U', 'L', 0,
  /* 489 */ 'G', '_', 'M', 'U', 'L', 0,
  /* 495 */ 'G', '_', 'F', 'R', 'E', 'M', 0,
  /* 502 */ 'G', '_', 'S', 'R', 'E', 'M', 0,
  /* 509 */ 'G', '_', 'U', 'R', 'E', 'M', 0,
  /* 516 */ 'I', 'N', 'L', 'I', 'N', 'E', 'A', 'S', 'M', 0,
  /* 526 */ 'C', 'F', 'I', '_', 'I', 'N', 'S', 'T', 'R', 'U', 'C', 'T', 'I', 'O', 'N', 0,
  /* 542 */ 'A', 'D', 'J', 'C', 'A', 'L', 'L', 'S', 'T', 'A', 'C', 'K', 'D', 'O', 'W', 'N', 0,
  /* 559 */ 'G', '_', 'S', 'S', 'U', 'B', 'O', 0,
  /* 567 */ 'G', '_', 'S', 'A', 'D', 'D', 'O', 0,
  /* 575 */ 'G', '_', 'S', 'M', 'U', 'L', 'O', 0,
  /* 583 */ 'G', '_', 'U', 'M', 'U', 'L', 'O', 0,
  /* 591 */ 'S', 'T', 'A', 'C', 'K', 'M', 'A', 'P', 0,
  /* 600 */ 'G', '_', 'G', 'E', 'P', 0,
  /* 606 */ 'G', '_', 'S', 'I', 'T', 'O', 'F', 'P', 0,
  /* 615 */ 'G', '_', 'U', 'I', 'T', 'O', 'F', 'P', 0,
  /* 624 */ 'G', '_', 'F', 'C', 'M', 'P', 0,
  /* 631 */ 'G', '_', 'I', 'C', 'M', 'P', 0,
  /* 638 */ 'J', 'M', 'P', 0,
  /* 642 */ 'N', 'O', 'P', 0,
  /* 646 */ 'P', 'A', 'T', 'C', 'H', 'A', 'B', 'L', 'E', '_', 'O', 'P', 0,
  /* 659 */ 'F', 'A', 'U', 'L', 'T', 'I', 'N', 'G', '_', 'O', 'P', 0,
  /* 671 */ 'A', 'D', 'J', 'C', 'A', 'L', 'L', 'S', 'T', 'A', 'C', 'K', 'U', 'P', 0,
  /* 686 */ 'G', '_', 'B', 'R', 0,
  /* 691 */ 'P', 'A', 'T', 'C', 'H', 'A', 'B', 'L', 'E', '_', 'F', 'U', 'N', 'C', 'T', 'I', 'O', 'N', '_', 'E', 'N', 'T', 'E', 'R', 0,
  /* 716 */ 'G', '_', 'A', 'S', 'H', 'R', 0,
  /* 723 */ 'G', '_', 'L', 'S', 'H', 'R', 0,
  /* 730 */ 'G', '_', 'S', 'H', 'U', 'F', 'F', 'L', 'E', '_', 'V', 'E', 'C', 'T', 'O', 'R', 0,
  /* 747 */ 'G', '_', 'X', 'O', 'R', 0,
  /* 753 */ 'G', '_', 'O', 'R', 0,
  /* 758 */ 'G', '_', 'I', 'N', 'T', 'T', 'O', 'P', 'T', 'R', 0,
  /* 769 */ 'G', '_', 'U', 'N', 'M', 'E', 'R', 'G', 'E', '_', 'V', 'A', 'L', 'U', 'E', 'S', 0,
  /* 786 */ 'G', '_', 'M', 'E', 'R', 'G', 'E', '_', 'V', 'A', 'L', 'U', 'E', 'S', 0,
  /* 801 */ 'C', 'O', 'P', 'Y', '_', 'T', 'O', '_', 'R', 'E', 'G', 'C', 'L', 'A', 'S', 'S', 0,
  /* 818 */ 'G', '_', 'I', 'N', 'T', 'R', 'I', 'N', 'S', 'I', 'C', '_', 'W', '_', 'S', 'I', 'D', 'E', '_', 'E', 'F', 'F', 'E', 'C', 'T', 'S', 0,
  /* 845 */ 'G', '_', 'E', 'X', 'T', 'R', 'A', 'C', 'T', 0,
  /* 855 */ 'G', '_', 'S', 'E', 'L', 'E', 'C', 'T', 0,
  /* 864 */ 'G', '_', 'B', 'R', 'I', 'N', 'D', 'I', 'R', 'E', 'C', 'T', 0,
  /* 877 */ 'P', 'A', 'T', 'C', 'H', 'A', 'B', 'L', 'E', '_', 'R', 'E', 'T', 0,
  /* 891 */ 'P', 'A', 'T', 'C', 'H', 'A', 'B', 'L', 'E', '_', 'F', 'U', 'N', 'C', 'T', 'I', 'O', 'N', '_', 'E', 'X', 'I', 'T', 0,
  /* 915 */ 'G', '_', 'E', 'X', 'T', 'R', 'A', 'C', 'T', '_', 'V', 'E', 'C', 'T', 'O', 'R', '_', 'E', 'L', 'T', 0,
  /* 936 */ 'G', '_', 'I', 'N', 'S', 'E', 'R', 'T', '_', 'V', 'E', 'C', 'T', 'O', 'R', '_', 'E', 'L', 'T', 0,
  /* 956 */ 'G', '_', 'F', 'C', 'O', 'N', 'S', 'T', 'A', 'N', 'T', 0,
  /* 968 */ 'G', '_', 'C', 'O', 'N', 'S', 'T', 'A', 'N', 'T', 0,
  /* 979 */ 'S', 'T', 'A', 'T', 'E', 'P', 'O', 'I', 'N', 'T', 0,
  /* 990 */ 'P', 'A', 'T', 'C', 'H', 'P', 'O', 'I', 'N', 'T', 0,
  /* 1001 */ 'G', '_', 'P', 'T', 'R', 'T', 'O', 'I', 'N', 'T', 0,
  /* 1012 */ 'G', '_', 'V', 'A', 'S', 'T', 'A', 'R', 'T', 0,
  /* 1022 */ 'L', 'I', 'F', 'E', 'T', 'I', 'M', 'E', '_', 'S', 'T', 'A', 'R', 'T', 0,
  /* 1037 */ 'G', '_', 'I', 'N', 'S', 'E', 'R', 'T', 0,
  /* 1046 */ 'G', '_', 'B', 'I', 'T', 'C', 'A', 'S', 'T', 0,
  /* 1056 */ 'G', '_', 'F', 'P', 'E', 'X', 'T', 0,
  /* 1064 */ 'G', '_', 'S', 'E', 'X', 'T', 0,
  /* 1071 */ 'G', '_', 'A', 'N', 'Y', 'E', 'X', 'T', 0,
  /* 1080 */ 'G', '_', 'Z', 'E', 'X', 'T', 0,
  /* 1087 */ 'G', '_', 'F', 'D', 'I', 'V', 0,
  /* 1094 */ 'G', '_', 'S', 'D', 'I', 'V', 0,
  /* 1101 */ 'G', '_', 'U', 'D', 'I', 'V', 0,
  /* 1108 */ 'L', 'D', 'W', 0,
  /* 1112 */ 'G', '_', 'F', 'P', 'O', 'W', 0,
  /* 1119 */ 'S', 'T', 'W', 0,
  /* 1123 */ 'L', 'D', '_', 'I', 'N', 'D', '_', 'W', 0,
  /* 1132 */ 'L', 'D', '_', 'A', 'B', 'S', '_', 'W', 0,
  /* 1141 */ 'G', '_', 'F', 'R', 'A', 'M', 'E', '_', 'I', 'N', 'D', 'E', 'X', 0,
  /* 1155 */ 'C', 'O', 'P', 'Y', 0,
  /* 1160 */ 'S', 'R', 'A', '_', 'r', 'i', 0,
  /* 1167 */ 'S', 'U', 'B', '_', 'r', 'i', 0,
  /* 1174 */ 'A', 'D', 'D', '_', 'r', 'i', 0,
  /* 1181 */ 'A', 'N', 'D', '_', 'r', 'i', 0,
  /* 1188 */ 'J', 'S', 'G', 'E', '_', 'r', 'i', 0,
  /* 1196 */ 'J', 'U', 'G', 'E', '_', 'r', 'i', 0,
  /* 1204 */ 'J', 'N', 'E', '_', 'r', 'i', 0,
  /* 1211 */ 'F', 'I', '_', 'r', 'i', 0,
  /* 1217 */ 'S', 'L', 'L', '_', 'r', 'i', 0,
  /* 1224 */ 'S', 'R', 'L', '_', 'r', 'i', 0,
  /* 1231 */ 'M', 'U', 'L', '_', 'r', 'i', 0,
  /* 1238 */ 'J', 'E', 'Q', '_', 'r', 'i', 0,
  /* 1245 */ 'X', 'O', 'R', '_', 'r', 'i', 0,
  /* 1252 */ 'J', 'S', 'G', 'T', '_', 'r', 'i', 0,
  /* 1260 */ 'J', 'U', 'G', 'T', '_', 'r', 'i', 0,
  /* 1268 */ 'D', 'I', 'V', '_', 'r', 'i', 0,
  /* 1275 */ 'M', 'O', 'V', '_', 'r', 'i', 0,
  /* 1282 */ 'L', 'D', '_', 'p', 's', 'e', 'u', 'd', 'o', 0,
  /* 1292 */ 'S', 'R', 'A', '_', 'r', 'r', 0,
  /* 1299 */ 'S', 'U', 'B', '_', 'r', 'r', 0,
  /* 1306 */ 'A', 'D', 'D', '_', 'r', 'r', 0,
  /* 1313 */ 'A', 'N', 'D', '_', 'r', 'r', 0,
  /* 1320 */ 'J', 'S', 'G', 'E', '_', 'r', 'r', 0,
  /* 1328 */ 'J', 'U', 'G', 'E', '_', 'r', 'r', 0,
  /* 1336 */ 'J', 'N', 'E', '_', 'r', 'r', 0,
  /* 1343 */ 'S', 'L', 'L', '_', 'r', 'r', 0,
  /* 1350 */ 'S', 'R', 'L', '_', 'r', 'r', 0,
  /* 1357 */ 'M', 'U', 'L', '_', 'r', 'r', 0,
  /* 1364 */ 'J', 'E', 'Q', '_', 'r', 'r', 0,
  /* 1371 */ 'X', 'O', 'R', '_', 'r', 'r', 0,
  /* 1378 */ 'J', 'S', 'G', 'T', '_', 'r', 'r', 0,
  /* 1386 */ 'J', 'U', 'G', 'T', '_', 'r', 'r', 0,
  /* 1394 */ 'D', 'I', 'V', '_', 'r', 'r', 0,
  /* 1401 */ 'M', 'O', 'V', '_', 'r', 'r', 0,
  /* 1408 */ 'S', 'e', 'l', 'e', 'c', 't', 0,
};

extern const unsigned BPFInstrNameIndices[] = {
    384U, 516U, 526U, 430U, 421U, 477U, 291U, 306U, 
    271U, 320U, 801U, 246U, 197U, 1155U, 218U, 1022U, 
    146U, 591U, 465U, 990U, 168U, 979U, 225U, 659U, 
    646U, 691U, 877U, 891U, 445U, 130U, 62U, 489U, 
    1094U, 1101U, 502U, 509U, 140U, 753U, 747U, 1141U, 
    256U, 845U, 769U, 1037U, 199U, 786U, 1001U, 758U, 
    1046U, 116U, 238U, 159U, 864U, 86U, 818U, 1071U, 
    108U, 968U, 956U, 1012U, 334U, 1064U, 1080U, 439U, 
    723U, 716U, 631U, 624U, 855U, 210U, 189U, 567U, 
    559U, 583U, 575U, 354U, 346U, 123U, 55U, 482U, 
    1087U, 495U, 1112U, 284U, 1056U, 98U, 388U, 397U, 
    606U, 615U, 600U, 406U, 686U, 936U, 915U, 730U, 
    1174U, 1306U, 542U, 671U, 1181U, 1313U, 39U, 7U, 
    22U, 1268U, 1394U, 1211U, 417U, 1238U, 1364U, 638U, 
    1204U, 1336U, 1188U, 1320U, 1252U, 1378U, 1196U, 1328U, 
    1260U, 1386U, 47U, 136U, 342U, 1108U, 77U, 375U, 
    1132U, 68U, 366U, 1123U, 30U, 1282U, 1275U, 1401U, 
    1231U, 1357U, 642U, 1246U, 1372U, 887U, 1217U, 1343U, 
    1160U, 1292U, 1224U, 1350U, 51U, 185U, 362U, 1119U, 
    1167U, 1299U, 1408U, 0U, 15U, 1245U, 1371U, 
};

static inline void InitBPFMCInstrInfo(MCInstrInfo *II) {
  II->InitMCInstrInfo(BPFInsts, BPFInstrNameIndices, BPFInstrNameData, 159);
}

} // end llvm namespace
#endif // GET_INSTRINFO_MC_DESC

#ifdef GET_INSTRINFO_HEADER
#undef GET_INSTRINFO_HEADER
namespace llvm {
struct BPFGenInstrInfo : public TargetInstrInfo {
  explicit BPFGenInstrInfo(int CFSetupOpcode = -1, int CFDestroyOpcode = -1, int CatchRetOpcode = -1, int ReturnOpcode = -1);
  ~BPFGenInstrInfo() override = default;
};
} // end llvm namespace
#endif // GET_INSTRINFO_HEADER

#ifdef GET_INSTRINFO_CTOR_DTOR
#undef GET_INSTRINFO_CTOR_DTOR
namespace llvm {
extern const MCInstrDesc BPFInsts[];
extern const unsigned BPFInstrNameIndices[];
extern const char BPFInstrNameData[];
BPFGenInstrInfo::BPFGenInstrInfo(int CFSetupOpcode, int CFDestroyOpcode, int CatchRetOpcode, int ReturnOpcode)
  : TargetInstrInfo(CFSetupOpcode, CFDestroyOpcode, CatchRetOpcode, ReturnOpcode) {
  InitMCInstrInfo(BPFInsts, BPFInstrNameIndices, BPFInstrNameData, 159);
}
} // end llvm namespace
#endif // GET_INSTRINFO_CTOR_DTOR

#ifdef GET_INSTRINFO_OPERAND_ENUM
#undef GET_INSTRINFO_OPERAND_ENUM
namespace llvm {
namespace BPF {
namespace OpName {
enum {
OPERAND_LAST
};
} // end namespace OpName
} // end namespace BPF
} // end namespace llvm
#endif //GET_INSTRINFO_OPERAND_ENUM

#ifdef GET_INSTRINFO_NAMED_OPS
#undef GET_INSTRINFO_NAMED_OPS
namespace llvm {
namespace BPF {
LLVM_READONLY
int16_t getNamedOperandIdx(uint16_t Opcode, uint16_t NamedIdx) {
  return -1;
}
} // end namespace BPF
} // end namespace llvm
#endif //GET_INSTRINFO_NAMED_OPS

#ifdef GET_INSTRINFO_OPERAND_TYPES_ENUM
#undef GET_INSTRINFO_OPERAND_TYPES_ENUM
namespace llvm {
namespace BPF {
namespace OpTypes {
enum OperandType {
  MEMri = 0,
  brtarget = 1,
  calltarget = 2,
  f32imm = 3,
  f64imm = 4,
  i16imm = 5,
  i1imm = 6,
  i32imm = 7,
  i64imm = 8,
  i8imm = 9,
  type0 = 10,
  type1 = 11,
  type2 = 12,
  type3 = 13,
  type4 = 14,
  type5 = 15,
  u64imm = 16,
  OPERAND_TYPE_LIST_END
};
} // end namespace OpTypes
} // end namespace BPF
} // end namespace llvm
#endif // GET_INSTRINFO_OPERAND_TYPES_ENUM

