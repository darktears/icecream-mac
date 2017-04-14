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

namespace Lanai {
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
    ADDC_F_I_HI	= 96,
    ADDC_F_I_LO	= 97,
    ADDC_F_R	= 98,
    ADDC_I_HI	= 99,
    ADDC_I_LO	= 100,
    ADDC_R	= 101,
    ADD_F_I_HI	= 102,
    ADD_F_I_LO	= 103,
    ADD_F_R	= 104,
    ADD_I_HI	= 105,
    ADD_I_LO	= 106,
    ADD_R	= 107,
    ADJCALLSTACKDOWN	= 108,
    ADJCALLSTACKUP	= 109,
    ADJDYNALLOC	= 110,
    AND_F_I_HI	= 111,
    AND_F_I_LO	= 112,
    AND_F_R	= 113,
    AND_I_HI	= 114,
    AND_I_LO	= 115,
    AND_R	= 116,
    BRCC	= 117,
    BRIND_CC	= 118,
    BRIND_CCA	= 119,
    BRR	= 120,
    BT	= 121,
    CALL	= 122,
    CALLR	= 123,
    JR	= 124,
    LDADDR	= 125,
    LDBs_RI	= 126,
    LDBs_RR	= 127,
    LDBz_RI	= 128,
    LDBz_RR	= 129,
    LDHs_RI	= 130,
    LDHs_RR	= 131,
    LDHz_RI	= 132,
    LDHz_RR	= 133,
    LDW_RI	= 134,
    LDW_RR	= 135,
    LDWz_RR	= 136,
    LEADZ	= 137,
    LOG0	= 138,
    LOG1	= 139,
    LOG2	= 140,
    LOG3	= 141,
    LOG4	= 142,
    MOVHI	= 143,
    NOP	= 144,
    OR_F_I_HI	= 145,
    OR_F_I_LO	= 146,
    OR_F_R	= 147,
    OR_I_HI	= 148,
    OR_I_LO	= 149,
    OR_R	= 150,
    POPC	= 151,
    RET	= 152,
    SA_F_I	= 153,
    SA_I	= 154,
    SCC	= 155,
    SELECT	= 156,
    SFSUB_F_RI_HI	= 157,
    SFSUB_F_RI_LO	= 158,
    SFSUB_F_RR	= 159,
    SHL_F_R	= 160,
    SHL_R	= 161,
    SLI	= 162,
    SL_F_I	= 163,
    SL_I	= 164,
    SRA_F_R	= 165,
    SRA_R	= 166,
    SRL_F_R	= 167,
    SRL_R	= 168,
    STADDR	= 169,
    STB_RI	= 170,
    STB_RR	= 171,
    STH_RI	= 172,
    STH_RR	= 173,
    SUBB_F_I_HI	= 174,
    SUBB_F_I_LO	= 175,
    SUBB_F_R	= 176,
    SUBB_I_HI	= 177,
    SUBB_I_LO	= 178,
    SUBB_R	= 179,
    SUB_F_I_HI	= 180,
    SUB_F_I_LO	= 181,
    SUB_F_R	= 182,
    SUB_I_HI	= 183,
    SUB_I_LO	= 184,
    SUB_R	= 185,
    SW_RI	= 186,
    SW_RR	= 187,
    TRAILZ	= 188,
    XOR_F_I_HI	= 189,
    XOR_F_I_LO	= 190,
    XOR_F_R	= 191,
    XOR_I_HI	= 192,
    XOR_I_LO	= 193,
    XOR_R	= 194,
    INSTRUCTION_LIST_END = 195
  };

namespace Sched {
  enum {
    NoInstrModel	= 0,
    IIC_ALU_WriteALU	= 1,
    IIC_ALU	= 2,
    IIC_LD_WriteLD	= 3,
    IIC_LDSW_WriteLDSW	= 4,
    WriteLD	= 5,
    IIC_ST_WriteST	= 6,
    IIC_STSW_WriteSTSW	= 7,
    SCHED_LIST_END = 8
  };
} // end Sched namespace
} // end Lanai namespace
} // end llvm namespace
#endif // GET_INSTRINFO_ENUM

#ifdef GET_INSTRINFO_MC_DESC
#undef GET_INSTRINFO_MC_DESC
namespace llvm {

static const MCPhysReg ImplicitList1[] = { Lanai::SR, 0 };
static const MCPhysReg ImplicitList2[] = { Lanai::SP, 0 };
static const MCPhysReg ImplicitList3[] = { Lanai::RCA, 0 };

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
static const MCOperandInfo OperandInfo27[] = { { Lanai::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Lanai::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo28[] = { { Lanai::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Lanai::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Lanai::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0|(1<<MCOI::Predicate), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo29[] = { { Lanai::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Lanai::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo30[] = { { Lanai::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo31[] = { { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo32[] = { { Lanai::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo33[] = { { Lanai::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Lanai::GPRRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo34[] = { { Lanai::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Lanai::GPRRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Lanai::GPRRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo35[] = { { Lanai::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Lanai::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Lanai::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };

extern const MCInstrDesc LanaiInsts[] = {
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
  { 96,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo27, -1 ,nullptr },  // Inst #96 = ADDC_F_I_HI
  { 97,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo27, -1 ,nullptr },  // Inst #97 = ADDC_F_I_LO
  { 98,	4,	1,	4,	1,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo28, -1 ,nullptr },  // Inst #98 = ADDC_F_R
  { 99,	3,	1,	4,	1,	0, 0x0ULL, ImplicitList1, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #99 = ADDC_I_HI
  { 100,	3,	1,	4,	1,	0, 0x0ULL, ImplicitList1, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #100 = ADDC_I_LO
  { 101,	4,	1,	4,	1,	0|(1ULL<<MCID::Predicable), 0x0ULL, ImplicitList1, nullptr, OperandInfo28, -1 ,nullptr },  // Inst #101 = ADDC_R
  { 102,	3,	1,	4,	1,	0, 0x0ULL, nullptr, ImplicitList1, OperandInfo27, -1 ,nullptr },  // Inst #102 = ADD_F_I_HI
  { 103,	3,	1,	4,	1,	0, 0x0ULL, nullptr, ImplicitList1, OperandInfo27, -1 ,nullptr },  // Inst #103 = ADD_F_I_LO
  { 104,	4,	1,	4,	1,	0|(1ULL<<MCID::Predicable), 0x0ULL, nullptr, ImplicitList1, OperandInfo28, -1 ,nullptr },  // Inst #104 = ADD_F_R
  { 105,	3,	1,	4,	1,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #105 = ADD_I_HI
  { 106,	3,	1,	4,	1,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #106 = ADD_I_LO
  { 107,	4,	1,	4,	1,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo28, -1 ,nullptr },  // Inst #107 = ADD_R
  { 108,	1,	0,	4,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, ImplicitList2, ImplicitList2, OperandInfo3, -1 ,nullptr },  // Inst #108 = ADJCALLSTACKDOWN
  { 109,	2,	0,	4,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, ImplicitList2, ImplicitList2, OperandInfo8, -1 ,nullptr },  // Inst #109 = ADJCALLSTACKUP
  { 110,	2,	1,	4,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, ImplicitList2, ImplicitList2, OperandInfo29, -1 ,nullptr },  // Inst #110 = ADJDYNALLOC
  { 111,	3,	1,	4,	1,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, ImplicitList1, OperandInfo27, -1 ,nullptr },  // Inst #111 = AND_F_I_HI
  { 112,	3,	1,	4,	1,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, ImplicitList1, OperandInfo27, -1 ,nullptr },  // Inst #112 = AND_F_I_LO
  { 113,	4,	1,	4,	1,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, ImplicitList1, OperandInfo28, -1 ,nullptr },  // Inst #113 = AND_F_R
  { 114,	3,	1,	4,	1,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #114 = AND_I_HI
  { 115,	3,	1,	4,	1,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #115 = AND_I_LO
  { 116,	4,	1,	4,	1,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo28, -1 ,nullptr },  // Inst #116 = AND_R
  { 117,	2,	0,	4,	2,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x0ULL, ImplicitList1, nullptr, OperandInfo7, -1 ,nullptr },  // Inst #117 = BRCC
  { 118,	2,	0,	4,	1,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList1, nullptr, OperandInfo30, -1 ,nullptr },  // Inst #118 = BRIND_CC
  { 119,	3,	0,	4,	1,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList1, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #119 = BRIND_CCA
  { 120,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList1, nullptr, OperandInfo31, -1 ,nullptr },  // Inst #120 = BRR
  { 121,	1,	0,	4,	2,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #121 = BT
  { 122,	1,	0,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Call), 0x0ULL, ImplicitList2, ImplicitList3, OperandInfo2, -1 ,nullptr },  // Inst #122 = CALL
  { 123,	1,	0,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Call), 0x0ULL, ImplicitList2, ImplicitList3, OperandInfo32, -1 ,nullptr },  // Inst #123 = CALLR
  { 124,	1,	0,	4,	1,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo32, -1 ,nullptr },  // Inst #124 = JR
  { 125,	2,	1,	4,	3,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::Rematerializable), 0x0ULL, nullptr, nullptr, OperandInfo30, -1 ,nullptr },  // Inst #125 = LDADDR
  { 126,	4,	1,	4,	4,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::Rematerializable), 0x0ULL, nullptr, nullptr, OperandInfo33, -1 ,nullptr },  // Inst #126 = LDBs_RI
  { 127,	4,	1,	4,	5,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo34, -1 ,nullptr },  // Inst #127 = LDBs_RR
  { 128,	4,	1,	4,	4,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::Rematerializable), 0x0ULL, nullptr, nullptr, OperandInfo33, -1 ,nullptr },  // Inst #128 = LDBz_RI
  { 129,	4,	1,	4,	5,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo34, -1 ,nullptr },  // Inst #129 = LDBz_RR
  { 130,	4,	1,	4,	4,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::Rematerializable), 0x0ULL, nullptr, nullptr, OperandInfo33, -1 ,nullptr },  // Inst #130 = LDHs_RI
  { 131,	4,	1,	4,	5,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo34, -1 ,nullptr },  // Inst #131 = LDHs_RR
  { 132,	4,	1,	4,	4,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::Rematerializable), 0x0ULL, nullptr, nullptr, OperandInfo33, -1 ,nullptr },  // Inst #132 = LDHz_RI
  { 133,	4,	1,	4,	5,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo34, -1 ,nullptr },  // Inst #133 = LDHz_RR
  { 134,	4,	1,	4,	3,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::Rematerializable), 0x0ULL, nullptr, nullptr, OperandInfo33, -1 ,nullptr },  // Inst #134 = LDW_RI
  { 135,	4,	1,	4,	5,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo34, -1 ,nullptr },  // Inst #135 = LDW_RR
  { 136,	4,	1,	4,	5,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo34, -1 ,nullptr },  // Inst #136 = LDWz_RR
  { 137,	2,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #137 = LEADZ
  { 138,	0,	0,	4,	0,	0, 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #138 = LOG0
  { 139,	0,	0,	4,	0,	0, 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #139 = LOG1
  { 140,	0,	0,	4,	0,	0, 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #140 = LOG2
  { 141,	0,	0,	4,	0,	0, 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #141 = LOG3
  { 142,	0,	0,	4,	0,	0, 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #142 = LOG4
  { 143,	2,	1,	4,	1,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo30, -1 ,nullptr },  // Inst #143 = MOVHI
  { 144,	0,	0,	4,	0,	0, 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #144 = NOP
  { 145,	3,	1,	4,	1,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, ImplicitList1, OperandInfo27, -1 ,nullptr },  // Inst #145 = OR_F_I_HI
  { 146,	3,	1,	4,	1,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, ImplicitList1, OperandInfo27, -1 ,nullptr },  // Inst #146 = OR_F_I_LO
  { 147,	4,	1,	4,	1,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, ImplicitList1, OperandInfo28, -1 ,nullptr },  // Inst #147 = OR_F_R
  { 148,	3,	1,	4,	1,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #148 = OR_I_HI
  { 149,	3,	1,	4,	1,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #149 = OR_I_LO
  { 150,	4,	1,	4,	1,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo28, -1 ,nullptr },  // Inst #150 = OR_R
  { 151,	2,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #151 = POPC
  { 152,	0,	0,	4,	0,	0|(1ULL<<MCID::Return)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x0ULL, ImplicitList3, nullptr, nullptr, -1 ,nullptr },  // Inst #152 = RET
  { 153,	3,	1,	4,	1,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList1, OperandInfo27, -1 ,nullptr },  // Inst #153 = SA_F_I
  { 154,	3,	1,	4,	1,	0|(1ULL<<MCID::Rematerializable), 0x0ULL, nullptr, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #154 = SA_I
  { 155,	2,	1,	4,	2,	0, 0x0ULL, ImplicitList1, nullptr, OperandInfo30, -1 ,nullptr },  // Inst #155 = SCC
  { 156,	4,	1,	4,	1,	0|(1ULL<<MCID::Select), 0x0ULL, ImplicitList1, nullptr, OperandInfo35, -1 ,nullptr },  // Inst #156 = SELECT
  { 157,	2,	0,	4,	1,	0|(1ULL<<MCID::Compare), 0x0ULL, nullptr, ImplicitList1, OperandInfo30, -1 ,nullptr },  // Inst #157 = SFSUB_F_RI_HI
  { 158,	2,	0,	4,	1,	0|(1ULL<<MCID::Compare), 0x0ULL, nullptr, ImplicitList1, OperandInfo30, -1 ,nullptr },  // Inst #158 = SFSUB_F_RI_LO
  { 159,	2,	0,	4,	1,	0|(1ULL<<MCID::Compare), 0x0ULL, nullptr, ImplicitList1, OperandInfo29, -1 ,nullptr },  // Inst #159 = SFSUB_F_RR
  { 160,	4,	1,	4,	1,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList1, OperandInfo28, -1 ,nullptr },  // Inst #160 = SHL_F_R
  { 161,	4,	1,	4,	1,	0|(1ULL<<MCID::Predicable), 0x0ULL, nullptr, nullptr, OperandInfo28, -1 ,nullptr },  // Inst #161 = SHL_R
  { 162,	2,	1,	4,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo30, -1 ,nullptr },  // Inst #162 = SLI
  { 163,	3,	1,	4,	1,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList1, OperandInfo27, -1 ,nullptr },  // Inst #163 = SL_F_I
  { 164,	3,	1,	4,	1,	0|(1ULL<<MCID::Rematerializable), 0x0ULL, nullptr, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #164 = SL_I
  { 165,	4,	1,	4,	1,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList1, OperandInfo28, -1 ,nullptr },  // Inst #165 = SRA_F_R
  { 166,	4,	1,	4,	1,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo28, -1 ,nullptr },  // Inst #166 = SRA_R
  { 167,	4,	1,	4,	1,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList1, OperandInfo28, -1 ,nullptr },  // Inst #167 = SRL_F_R
  { 168,	4,	1,	4,	1,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo28, -1 ,nullptr },  // Inst #168 = SRL_R
  { 169,	2,	0,	4,	6,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo30, -1 ,nullptr },  // Inst #169 = STADDR
  { 170,	4,	0,	4,	7,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo33, -1 ,nullptr },  // Inst #170 = STB_RI
  { 171,	4,	0,	4,	6,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo34, -1 ,nullptr },  // Inst #171 = STB_RR
  { 172,	4,	0,	4,	7,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo33, -1 ,nullptr },  // Inst #172 = STH_RI
  { 173,	4,	0,	4,	6,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo34, -1 ,nullptr },  // Inst #173 = STH_RR
  { 174,	3,	1,	4,	1,	0|(1ULL<<MCID::CheapAsAMove), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo27, -1 ,nullptr },  // Inst #174 = SUBB_F_I_HI
  { 175,	3,	1,	4,	1,	0|(1ULL<<MCID::CheapAsAMove), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo27, -1 ,nullptr },  // Inst #175 = SUBB_F_I_LO
  { 176,	4,	1,	4,	1,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo28, -1 ,nullptr },  // Inst #176 = SUBB_F_R
  { 177,	3,	1,	4,	1,	0, 0x0ULL, ImplicitList1, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #177 = SUBB_I_HI
  { 178,	3,	1,	4,	1,	0, 0x0ULL, ImplicitList1, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #178 = SUBB_I_LO
  { 179,	4,	1,	4,	1,	0|(1ULL<<MCID::Predicable), 0x0ULL, ImplicitList1, nullptr, OperandInfo28, -1 ,nullptr },  // Inst #179 = SUBB_R
  { 180,	3,	1,	4,	1,	0, 0x0ULL, nullptr, ImplicitList1, OperandInfo27, -1 ,nullptr },  // Inst #180 = SUB_F_I_HI
  { 181,	3,	1,	4,	1,	0, 0x0ULL, nullptr, ImplicitList1, OperandInfo27, -1 ,nullptr },  // Inst #181 = SUB_F_I_LO
  { 182,	4,	1,	4,	1,	0|(1ULL<<MCID::Predicable), 0x0ULL, nullptr, ImplicitList1, OperandInfo28, -1 ,nullptr },  // Inst #182 = SUB_F_R
  { 183,	3,	1,	4,	1,	0|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #183 = SUB_I_HI
  { 184,	3,	1,	4,	1,	0|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #184 = SUB_I_LO
  { 185,	4,	1,	4,	1,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo28, -1 ,nullptr },  // Inst #185 = SUB_R
  { 186,	4,	0,	4,	6,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo33, -1 ,nullptr },  // Inst #186 = SW_RI
  { 187,	4,	0,	4,	6,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo34, -1 ,nullptr },  // Inst #187 = SW_RR
  { 188,	2,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #188 = TRAILZ
  { 189,	3,	1,	4,	1,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, ImplicitList1, OperandInfo27, -1 ,nullptr },  // Inst #189 = XOR_F_I_HI
  { 190,	3,	1,	4,	1,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, ImplicitList1, OperandInfo27, -1 ,nullptr },  // Inst #190 = XOR_F_I_LO
  { 191,	4,	1,	4,	1,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, ImplicitList1, OperandInfo28, -1 ,nullptr },  // Inst #191 = XOR_F_R
  { 192,	3,	1,	4,	1,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #192 = XOR_I_HI
  { 193,	3,	1,	4,	1,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #193 = XOR_I_LO
  { 194,	4,	1,	4,	1,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo28, -1 ,nullptr },  // Inst #194 = XOR_R
};

extern const char LanaiInstrNameData[] = {
  /* 0 */ 'L', 'O', 'G', '0', 0,
  /* 5 */ 'L', 'O', 'G', '1', 0,
  /* 10 */ 'L', 'O', 'G', '2', 0,
  /* 15 */ 'L', 'O', 'G', '3', 0,
  /* 20 */ 'L', 'O', 'G', '4', 0,
  /* 25 */ 'B', 'R', 'I', 'N', 'D', '_', 'C', 'C', 'A', 0,
  /* 35 */ 'G', '_', 'F', 'S', 'U', 'B', 0,
  /* 42 */ 'G', '_', 'S', 'U', 'B', 0,
  /* 48 */ 'B', 'R', 'C', 'C', 0,
  /* 53 */ 'S', 'C', 'C', 0,
  /* 57 */ 'B', 'R', 'I', 'N', 'D', '_', 'C', 'C', 0,
  /* 66 */ 'G', '_', 'I', 'N', 'T', 'R', 'I', 'N', 'S', 'I', 'C', 0,
  /* 78 */ 'G', '_', 'F', 'P', 'T', 'R', 'U', 'N', 'C', 0,
  /* 88 */ 'G', '_', 'T', 'R', 'U', 'N', 'C', 0,
  /* 96 */ 'A', 'D', 'J', 'D', 'Y', 'N', 'A', 'L', 'L', 'O', 'C', 0,
  /* 108 */ 'P', 'O', 'P', 'C', 0,
  /* 113 */ 'G', '_', 'L', 'O', 'A', 'D', 0,
  /* 120 */ 'G', '_', 'F', 'A', 'D', 'D', 0,
  /* 127 */ 'G', '_', 'A', 'D', 'D', 0,
  /* 133 */ 'G', '_', 'A', 'N', 'D', 0,
  /* 139 */ 'L', 'I', 'F', 'E', 'T', 'I', 'M', 'E', '_', 'E', 'N', 'D', 0,
  /* 152 */ 'G', '_', 'B', 'R', 'C', 'O', 'N', 'D', 0,
  /* 161 */ 'L', 'O', 'A', 'D', '_', 'S', 'T', 'A', 'C', 'K', '_', 'G', 'U', 'A', 'R', 'D', 0,
  /* 178 */ 'G', '_', 'U', 'S', 'U', 'B', 'E', 0,
  /* 186 */ 'R', 'E', 'G', '_', 'S', 'E', 'Q', 'U', 'E', 'N', 'C', 'E', 0,
  /* 199 */ 'G', '_', 'U', 'A', 'D', 'D', 'E', 0,
  /* 207 */ 'B', 'U', 'N', 'D', 'L', 'E', 0,
  /* 214 */ 'L', 'O', 'C', 'A', 'L', '_', 'E', 'S', 'C', 'A', 'P', 'E', 0,
  /* 227 */ 'G', '_', 'S', 'T', 'O', 'R', 'E', 0,
  /* 235 */ 'D', 'B', 'G', '_', 'V', 'A', 'L', 'U', 'E', 0,
  /* 245 */ 'G', '_', 'G', 'L', 'O', 'B', 'A', 'L', '_', 'V', 'A', 'L', 'U', 'E', 0,
  /* 260 */ 'I', 'M', 'P', 'L', 'I', 'C', 'I', 'T', '_', 'D', 'E', 'F', 0,
  /* 273 */ 'G', '_', 'F', 'N', 'E', 'G', 0,
  /* 280 */ 'E', 'X', 'T', 'R', 'A', 'C', 'T', '_', 'S', 'U', 'B', 'R', 'E', 'G', 0,
  /* 295 */ 'I', 'N', 'S', 'E', 'R', 'T', '_', 'S', 'U', 'B', 'R', 'E', 'G', 0,
  /* 309 */ 'S', 'U', 'B', 'R', 'E', 'G', '_', 'T', 'O', '_', 'R', 'E', 'G', 0,
  /* 323 */ 'G', '_', 'V', 'A', 'A', 'R', 'G', 0,
  /* 331 */ 'G', '_', 'S', 'M', 'U', 'L', 'H', 0,
  /* 339 */ 'G', '_', 'U', 'M', 'U', 'L', 'H', 0,
  /* 347 */ 'P', 'H', 'I', 0,
  /* 351 */ 'M', 'O', 'V', 'H', 'I', 0,
  /* 357 */ 'S', 'F', 'S', 'U', 'B', '_', 'F', '_', 'R', 'I', '_', 'H', 'I', 0,
  /* 371 */ 'S', 'U', 'B', 'B', '_', 'I', '_', 'H', 'I', 0,
  /* 381 */ 'S', 'U', 'B', '_', 'I', '_', 'H', 'I', 0,
  /* 390 */ 'A', 'D', 'D', 'C', '_', 'I', '_', 'H', 'I', 0,
  /* 400 */ 'A', 'D', 'D', '_', 'I', '_', 'H', 'I', 0,
  /* 409 */ 'A', 'N', 'D', '_', 'I', '_', 'H', 'I', 0,
  /* 418 */ 'S', 'U', 'B', 'B', '_', 'F', '_', 'I', '_', 'H', 'I', 0,
  /* 430 */ 'S', 'U', 'B', '_', 'F', '_', 'I', '_', 'H', 'I', 0,
  /* 441 */ 'A', 'D', 'D', 'C', '_', 'F', '_', 'I', '_', 'H', 'I', 0,
  /* 453 */ 'A', 'D', 'D', '_', 'F', '_', 'I', '_', 'H', 'I', 0,
  /* 464 */ 'A', 'N', 'D', '_', 'F', '_', 'I', '_', 'H', 'I', 0,
  /* 475 */ 'X', 'O', 'R', '_', 'F', '_', 'I', '_', 'H', 'I', 0,
  /* 486 */ 'X', 'O', 'R', '_', 'I', '_', 'H', 'I', 0,
  /* 495 */ 'S', 'L', 'I', 0,
  /* 499 */ 'S', 'T', 'B', '_', 'R', 'I', 0,
  /* 506 */ 'S', 'T', 'H', '_', 'R', 'I', 0,
  /* 513 */ 'L', 'D', 'W', '_', 'R', 'I', 0,
  /* 520 */ 'S', 'W', '_', 'R', 'I', 0,
  /* 526 */ 'L', 'D', 'B', 's', '_', 'R', 'I', 0,
  /* 534 */ 'L', 'D', 'H', 's', '_', 'R', 'I', 0,
  /* 542 */ 'L', 'D', 'B', 'z', '_', 'R', 'I', 0,
  /* 550 */ 'L', 'D', 'H', 'z', '_', 'R', 'I', 0,
  /* 558 */ 'G', '_', 'F', 'P', 'T', 'O', 'S', 'I', 0,
  /* 567 */ 'G', '_', 'F', 'P', 'T', 'O', 'U', 'I', 0,
  /* 576 */ 'S', 'A', '_', 'I', 0,
  /* 581 */ 'S', 'A', '_', 'F', '_', 'I', 0,
  /* 588 */ 'S', 'L', '_', 'F', '_', 'I', 0,
  /* 595 */ 'S', 'L', '_', 'I', 0,
  /* 600 */ 'G', '_', 'P', 'T', 'R', '_', 'M', 'A', 'S', 'K', 0,
  /* 611 */ 'G', 'C', '_', 'L', 'A', 'B', 'E', 'L', 0,
  /* 620 */ 'E', 'H', '_', 'L', 'A', 'B', 'E', 'L', 0,
  /* 629 */ 'G', '_', 'S', 'H', 'L', 0,
  /* 635 */ 'P', 'A', 'T', 'C', 'H', 'A', 'B', 'L', 'E', '_', 'T', 'A', 'I', 'L', '_', 'C', 'A', 'L', 'L', 0,
  /* 655 */ 'F', 'E', 'N', 'T', 'R', 'Y', '_', 'C', 'A', 'L', 'L', 0,
  /* 667 */ 'K', 'I', 'L', 'L', 0,
  /* 672 */ 'G', '_', 'F', 'M', 'U', 'L', 0,
  /* 679 */ 'G', '_', 'M', 'U', 'L', 0,
  /* 685 */ 'G', '_', 'F', 'R', 'E', 'M', 0,
  /* 692 */ 'G', '_', 'S', 'R', 'E', 'M', 0,
  /* 699 */ 'G', '_', 'U', 'R', 'E', 'M', 0,
  /* 706 */ 'I', 'N', 'L', 'I', 'N', 'E', 'A', 'S', 'M', 0,
  /* 716 */ 'C', 'F', 'I', '_', 'I', 'N', 'S', 'T', 'R', 'U', 'C', 'T', 'I', 'O', 'N', 0,
  /* 732 */ 'A', 'D', 'J', 'C', 'A', 'L', 'L', 'S', 'T', 'A', 'C', 'K', 'D', 'O', 'W', 'N', 0,
  /* 749 */ 'G', '_', 'S', 'S', 'U', 'B', 'O', 0,
  /* 757 */ 'G', '_', 'S', 'A', 'D', 'D', 'O', 0,
  /* 765 */ 'G', '_', 'S', 'M', 'U', 'L', 'O', 0,
  /* 773 */ 'G', '_', 'U', 'M', 'U', 'L', 'O', 0,
  /* 781 */ 'S', 'F', 'S', 'U', 'B', '_', 'F', '_', 'R', 'I', '_', 'L', 'O', 0,
  /* 795 */ 'S', 'U', 'B', 'B', '_', 'I', '_', 'L', 'O', 0,
  /* 805 */ 'S', 'U', 'B', '_', 'I', '_', 'L', 'O', 0,
  /* 814 */ 'A', 'D', 'D', 'C', '_', 'I', '_', 'L', 'O', 0,
  /* 824 */ 'A', 'D', 'D', '_', 'I', '_', 'L', 'O', 0,
  /* 833 */ 'A', 'N', 'D', '_', 'I', '_', 'L', 'O', 0,
  /* 842 */ 'S', 'U', 'B', 'B', '_', 'F', '_', 'I', '_', 'L', 'O', 0,
  /* 854 */ 'S', 'U', 'B', '_', 'F', '_', 'I', '_', 'L', 'O', 0,
  /* 865 */ 'A', 'D', 'D', 'C', '_', 'F', '_', 'I', '_', 'L', 'O', 0,
  /* 877 */ 'A', 'D', 'D', '_', 'F', '_', 'I', '_', 'L', 'O', 0,
  /* 888 */ 'A', 'N', 'D', '_', 'F', '_', 'I', '_', 'L', 'O', 0,
  /* 899 */ 'X', 'O', 'R', '_', 'F', '_', 'I', '_', 'L', 'O', 0,
  /* 910 */ 'X', 'O', 'R', '_', 'I', '_', 'L', 'O', 0,
  /* 919 */ 'S', 'T', 'A', 'C', 'K', 'M', 'A', 'P', 0,
  /* 928 */ 'G', '_', 'G', 'E', 'P', 0,
  /* 934 */ 'G', '_', 'S', 'I', 'T', 'O', 'F', 'P', 0,
  /* 943 */ 'G', '_', 'U', 'I', 'T', 'O', 'F', 'P', 0,
  /* 952 */ 'G', '_', 'F', 'C', 'M', 'P', 0,
  /* 959 */ 'G', '_', 'I', 'C', 'M', 'P', 0,
  /* 966 */ 'N', 'O', 'P', 0,
  /* 970 */ 'P', 'A', 'T', 'C', 'H', 'A', 'B', 'L', 'E', '_', 'O', 'P', 0,
  /* 983 */ 'F', 'A', 'U', 'L', 'T', 'I', 'N', 'G', '_', 'O', 'P', 0,
  /* 995 */ 'A', 'D', 'J', 'C', 'A', 'L', 'L', 'S', 'T', 'A', 'C', 'K', 'U', 'P', 0,
  /* 1010 */ 'G', '_', 'B', 'R', 0,
  /* 1015 */ 'L', 'D', 'A', 'D', 'D', 'R', 0,
  /* 1022 */ 'S', 'T', 'A', 'D', 'D', 'R', 0,
  /* 1029 */ 'P', 'A', 'T', 'C', 'H', 'A', 'B', 'L', 'E', '_', 'F', 'U', 'N', 'C', 'T', 'I', 'O', 'N', '_', 'E', 'N', 'T', 'E', 'R', 0,
  /* 1054 */ 'G', '_', 'A', 'S', 'H', 'R', 0,
  /* 1061 */ 'G', '_', 'L', 'S', 'H', 'R', 0,
  /* 1068 */ 'J', 'R', 0,
  /* 1071 */ 'C', 'A', 'L', 'L', 'R', 0,
  /* 1077 */ 'G', '_', 'S', 'H', 'U', 'F', 'F', 'L', 'E', '_', 'V', 'E', 'C', 'T', 'O', 'R', 0,
  /* 1094 */ 'G', '_', 'X', 'O', 'R', 0,
  /* 1100 */ 'G', '_', 'O', 'R', 0,
  /* 1105 */ 'B', 'R', 'R', 0,
  /* 1109 */ 'S', 'T', 'B', '_', 'R', 'R', 0,
  /* 1116 */ 'S', 'F', 'S', 'U', 'B', '_', 'F', '_', 'R', 'R', 0,
  /* 1127 */ 'S', 'T', 'H', '_', 'R', 'R', 0,
  /* 1134 */ 'L', 'D', 'W', '_', 'R', 'R', 0,
  /* 1141 */ 'S', 'W', '_', 'R', 'R', 0,
  /* 1147 */ 'L', 'D', 'B', 's', '_', 'R', 'R', 0,
  /* 1155 */ 'L', 'D', 'H', 's', '_', 'R', 'R', 0,
  /* 1163 */ 'L', 'D', 'B', 'z', '_', 'R', 'R', 0,
  /* 1171 */ 'L', 'D', 'H', 'z', '_', 'R', 'R', 0,
  /* 1179 */ 'L', 'D', 'W', 'z', '_', 'R', 'R', 0,
  /* 1187 */ 'G', '_', 'I', 'N', 'T', 'T', 'O', 'P', 'T', 'R', 0,
  /* 1198 */ 'S', 'R', 'A', '_', 'R', 0,
  /* 1204 */ 'S', 'U', 'B', 'B', '_', 'R', 0,
  /* 1211 */ 'S', 'U', 'B', '_', 'R', 0,
  /* 1217 */ 'A', 'D', 'D', 'C', '_', 'R', 0,
  /* 1224 */ 'A', 'D', 'D', '_', 'R', 0,
  /* 1230 */ 'A', 'N', 'D', '_', 'R', 0,
  /* 1236 */ 'S', 'R', 'A', '_', 'F', '_', 'R', 0,
  /* 1244 */ 'S', 'U', 'B', 'B', '_', 'F', '_', 'R', 0,
  /* 1253 */ 'S', 'U', 'B', '_', 'F', '_', 'R', 0,
  /* 1261 */ 'A', 'D', 'D', 'C', '_', 'F', '_', 'R', 0,
  /* 1270 */ 'A', 'D', 'D', '_', 'F', '_', 'R', 0,
  /* 1278 */ 'A', 'N', 'D', '_', 'F', '_', 'R', 0,
  /* 1286 */ 'S', 'H', 'L', '_', 'F', '_', 'R', 0,
  /* 1294 */ 'S', 'R', 'L', '_', 'F', '_', 'R', 0,
  /* 1302 */ 'X', 'O', 'R', '_', 'F', '_', 'R', 0,
  /* 1310 */ 'S', 'H', 'L', '_', 'R', 0,
  /* 1316 */ 'S', 'R', 'L', '_', 'R', 0,
  /* 1322 */ 'X', 'O', 'R', '_', 'R', 0,
  /* 1328 */ 'G', '_', 'U', 'N', 'M', 'E', 'R', 'G', 'E', '_', 'V', 'A', 'L', 'U', 'E', 'S', 0,
  /* 1345 */ 'G', '_', 'M', 'E', 'R', 'G', 'E', '_', 'V', 'A', 'L', 'U', 'E', 'S', 0,
  /* 1360 */ 'C', 'O', 'P', 'Y', '_', 'T', 'O', '_', 'R', 'E', 'G', 'C', 'L', 'A', 'S', 'S', 0,
  /* 1377 */ 'G', '_', 'I', 'N', 'T', 'R', 'I', 'N', 'S', 'I', 'C', '_', 'W', '_', 'S', 'I', 'D', 'E', '_', 'E', 'F', 'F', 'E', 'C', 'T', 'S', 0,
  /* 1404 */ 'B', 'T', 0,
  /* 1407 */ 'G', '_', 'E', 'X', 'T', 'R', 'A', 'C', 'T', 0,
  /* 1417 */ 'G', '_', 'S', 'E', 'L', 'E', 'C', 'T', 0,
  /* 1426 */ 'G', '_', 'B', 'R', 'I', 'N', 'D', 'I', 'R', 'E', 'C', 'T', 0,
  /* 1439 */ 'P', 'A', 'T', 'C', 'H', 'A', 'B', 'L', 'E', '_', 'R', 'E', 'T', 0,
  /* 1453 */ 'P', 'A', 'T', 'C', 'H', 'A', 'B', 'L', 'E', '_', 'F', 'U', 'N', 'C', 'T', 'I', 'O', 'N', '_', 'E', 'X', 'I', 'T', 0,
  /* 1477 */ 'G', '_', 'E', 'X', 'T', 'R', 'A', 'C', 'T', '_', 'V', 'E', 'C', 'T', 'O', 'R', '_', 'E', 'L', 'T', 0,
  /* 1498 */ 'G', '_', 'I', 'N', 'S', 'E', 'R', 'T', '_', 'V', 'E', 'C', 'T', 'O', 'R', '_', 'E', 'L', 'T', 0,
  /* 1518 */ 'G', '_', 'F', 'C', 'O', 'N', 'S', 'T', 'A', 'N', 'T', 0,
  /* 1530 */ 'G', '_', 'C', 'O', 'N', 'S', 'T', 'A', 'N', 'T', 0,
  /* 1541 */ 'S', 'T', 'A', 'T', 'E', 'P', 'O', 'I', 'N', 'T', 0,
  /* 1552 */ 'P', 'A', 'T', 'C', 'H', 'P', 'O', 'I', 'N', 'T', 0,
  /* 1563 */ 'G', '_', 'P', 'T', 'R', 'T', 'O', 'I', 'N', 'T', 0,
  /* 1574 */ 'G', '_', 'V', 'A', 'S', 'T', 'A', 'R', 'T', 0,
  /* 1584 */ 'L', 'I', 'F', 'E', 'T', 'I', 'M', 'E', '_', 'S', 'T', 'A', 'R', 'T', 0,
  /* 1599 */ 'G', '_', 'I', 'N', 'S', 'E', 'R', 'T', 0,
  /* 1608 */ 'G', '_', 'B', 'I', 'T', 'C', 'A', 'S', 'T', 0,
  /* 1618 */ 'G', '_', 'F', 'P', 'E', 'X', 'T', 0,
  /* 1626 */ 'G', '_', 'S', 'E', 'X', 'T', 0,
  /* 1633 */ 'G', '_', 'A', 'N', 'Y', 'E', 'X', 'T', 0,
  /* 1642 */ 'G', '_', 'Z', 'E', 'X', 'T', 0,
  /* 1649 */ 'G', '_', 'F', 'D', 'I', 'V', 0,
  /* 1656 */ 'G', '_', 'S', 'D', 'I', 'V', 0,
  /* 1663 */ 'G', '_', 'U', 'D', 'I', 'V', 0,
  /* 1670 */ 'G', '_', 'F', 'P', 'O', 'W', 0,
  /* 1677 */ 'G', '_', 'F', 'R', 'A', 'M', 'E', '_', 'I', 'N', 'D', 'E', 'X', 0,
  /* 1691 */ 'C', 'O', 'P', 'Y', 0,
  /* 1696 */ 'L', 'E', 'A', 'D', 'Z', 0,
  /* 1702 */ 'T', 'R', 'A', 'I', 'L', 'Z', 0,
};

extern const unsigned LanaiInstrNameIndices[] = {
    347U, 706U, 716U, 620U, 611U, 667U, 280U, 295U, 
    260U, 309U, 1360U, 235U, 186U, 1691U, 207U, 1584U, 
    139U, 919U, 655U, 1552U, 161U, 1541U, 214U, 983U, 
    970U, 1029U, 1439U, 1453U, 635U, 127U, 42U, 679U, 
    1656U, 1663U, 692U, 699U, 133U, 1100U, 1094U, 1677U, 
    245U, 1407U, 1328U, 1599U, 188U, 1345U, 1563U, 1187U, 
    1608U, 113U, 227U, 152U, 1426U, 66U, 1377U, 1633U, 
    88U, 1530U, 1518U, 1574U, 323U, 1626U, 1642U, 629U, 
    1061U, 1054U, 959U, 952U, 1417U, 199U, 178U, 757U, 
    749U, 773U, 765U, 339U, 331U, 120U, 35U, 672U, 
    1649U, 685U, 1670U, 273U, 1618U, 78U, 558U, 567U, 
    934U, 943U, 928U, 600U, 1010U, 1498U, 1477U, 1077U, 
    441U, 865U, 1261U, 390U, 814U, 1217U, 453U, 877U, 
    1270U, 400U, 824U, 1224U, 732U, 995U, 96U, 464U, 
    888U, 1278U, 409U, 833U, 1230U, 48U, 57U, 25U, 
    1105U, 1404U, 650U, 1071U, 1068U, 1015U, 526U, 1147U, 
    542U, 1163U, 534U, 1155U, 550U, 1171U, 513U, 1134U, 
    1179U, 1696U, 0U, 5U, 10U, 15U, 20U, 351U, 
    966U, 476U, 900U, 1303U, 487U, 911U, 1323U, 108U, 
    1449U, 581U, 576U, 53U, 1419U, 357U, 781U, 1116U, 
    1286U, 1310U, 495U, 588U, 595U, 1236U, 1198U, 1294U, 
    1316U, 1022U, 499U, 1109U, 506U, 1127U, 418U, 842U, 
    1244U, 371U, 795U, 1204U, 430U, 854U, 1253U, 381U, 
    805U, 1211U, 520U, 1141U, 1702U, 475U, 899U, 1302U, 
    486U, 910U, 1322U, 
};

static inline void InitLanaiMCInstrInfo(MCInstrInfo *II) {
  II->InitMCInstrInfo(LanaiInsts, LanaiInstrNameIndices, LanaiInstrNameData, 195);
}

} // end llvm namespace
#endif // GET_INSTRINFO_MC_DESC

#ifdef GET_INSTRINFO_HEADER
#undef GET_INSTRINFO_HEADER
namespace llvm {
struct LanaiGenInstrInfo : public TargetInstrInfo {
  explicit LanaiGenInstrInfo(int CFSetupOpcode = -1, int CFDestroyOpcode = -1, int CatchRetOpcode = -1, int ReturnOpcode = -1);
  ~LanaiGenInstrInfo() override = default;
};
} // end llvm namespace
#endif // GET_INSTRINFO_HEADER

#ifdef GET_INSTRINFO_CTOR_DTOR
#undef GET_INSTRINFO_CTOR_DTOR
namespace llvm {
extern const MCInstrDesc LanaiInsts[];
extern const unsigned LanaiInstrNameIndices[];
extern const char LanaiInstrNameData[];
LanaiGenInstrInfo::LanaiGenInstrInfo(int CFSetupOpcode, int CFDestroyOpcode, int CatchRetOpcode, int ReturnOpcode)
  : TargetInstrInfo(CFSetupOpcode, CFDestroyOpcode, CatchRetOpcode, ReturnOpcode) {
  InitMCInstrInfo(LanaiInsts, LanaiInstrNameIndices, LanaiInstrNameData, 195);
}
} // end llvm namespace
#endif // GET_INSTRINFO_CTOR_DTOR

#ifdef GET_INSTRINFO_OPERAND_ENUM
#undef GET_INSTRINFO_OPERAND_ENUM
namespace llvm {
namespace Lanai {
namespace OpName {
enum {
OPERAND_LAST
};
} // end namespace OpName
} // end namespace Lanai
} // end namespace llvm
#endif //GET_INSTRINFO_OPERAND_ENUM

#ifdef GET_INSTRINFO_NAMED_OPS
#undef GET_INSTRINFO_NAMED_OPS
namespace llvm {
namespace Lanai {
LLVM_READONLY
int16_t getNamedOperandIdx(uint16_t Opcode, uint16_t NamedIdx) {
  return -1;
}
} // end namespace Lanai
} // end namespace llvm
#endif //GET_INSTRINFO_NAMED_OPS

#ifdef GET_INSTRINFO_OPERAND_TYPES_ENUM
#undef GET_INSTRINFO_OPERAND_TYPES_ENUM
namespace llvm {
namespace Lanai {
namespace OpTypes {
enum OperandType {
  AluOp = 0,
  BrTarget = 1,
  CCOp = 2,
  CallTarget = 3,
  MEMi = 4,
  MEMri = 5,
  MEMrr = 6,
  MEMspls = 7,
  f32imm = 8,
  f64imm = 9,
  i16imm = 10,
  i1imm = 11,
  i32hi16 = 12,
  i32hi16and = 13,
  i32imm = 14,
  i32lo16and = 15,
  i32lo16s = 16,
  i32lo16z = 17,
  i32lo21 = 18,
  i32neg16 = 19,
  i64imm = 20,
  i8imm = 21,
  imm10 = 22,
  immShift = 23,
  pred = 24,
  type0 = 25,
  type1 = 26,
  type2 = 27,
  type3 = 28,
  type4 = 29,
  type5 = 30,
  OPERAND_TYPE_LIST_END
};
} // end namespace OpTypes
} // end namespace Lanai
} // end namespace llvm
#endif // GET_INSTRINFO_OPERAND_TYPES_ENUM

#ifdef GET_INSTRMAP_INFO
#undef GET_INSTRMAP_INFO
namespace llvm {

namespace Lanai {

enum PostEncoderMethod {
	PostEncoderMethod_adjustPqBitsSpls
};

// splsIdempotent
LLVM_READONLY
int splsIdempotent(uint16_t Opcode) {
static const uint16_t splsIdempotentTable[][2] = {
  { Lanai::LDBs_RI, Lanai::LDBs_RI },
  { Lanai::LDBz_RI, Lanai::LDBz_RI },
  { Lanai::LDHs_RI, Lanai::LDHs_RI },
  { Lanai::LDHz_RI, Lanai::LDHz_RI },
  { Lanai::STB_RI, Lanai::STB_RI },
  { Lanai::STH_RI, Lanai::STH_RI },
}; // End of splsIdempotentTable

  unsigned mid;
  unsigned start = 0;
  unsigned end = 6;
  while (start < end) {
    mid = start + (end - start)/2;
    if (Opcode == splsIdempotentTable[mid][0]) {
      break;
    }
    if (Opcode < splsIdempotentTable[mid][0])
      end = mid;
    else
      start = mid + 1;
  }
  if (start == end)
    return -1; // Instruction doesn't exist in this table.

  return splsIdempotentTable[mid][1];
}

} // End Lanai namespace
} // End llvm namespace
#endif // GET_INSTRMAP_INFO

