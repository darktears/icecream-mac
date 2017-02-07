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
    PATCHPOINT	= 18,
    LOAD_STACK_GUARD	= 19,
    STATEPOINT	= 20,
    LOCAL_ESCAPE	= 21,
    FAULTING_LOAD_OP	= 22,
    PATCHABLE_OP	= 23,
    PATCHABLE_FUNCTION_ENTER	= 24,
    PATCHABLE_RET	= 25,
    PATCHABLE_FUNCTION_EXIT	= 26,
    PATCHABLE_TAIL_CALL	= 27,
    G_ADD	= 28,
    G_SUB	= 29,
    G_MUL	= 30,
    G_SDIV	= 31,
    G_UDIV	= 32,
    G_SREM	= 33,
    G_UREM	= 34,
    G_AND	= 35,
    G_OR	= 36,
    G_XOR	= 37,
    G_FRAME_INDEX	= 38,
    G_GLOBAL_VALUE	= 39,
    G_EXTRACT	= 40,
    G_INSERT	= 41,
    G_SEQUENCE	= 42,
    G_PTRTOINT	= 43,
    G_INTTOPTR	= 44,
    G_BITCAST	= 45,
    G_LOAD	= 46,
    G_STORE	= 47,
    G_BRCOND	= 48,
    G_INTRINSIC	= 49,
    G_INTRINSIC_W_SIDE_EFFECTS	= 50,
    G_ANYEXT	= 51,
    G_TRUNC	= 52,
    G_CONSTANT	= 53,
    G_FCONSTANT	= 54,
    G_SEXT	= 55,
    G_ZEXT	= 56,
    G_SHL	= 57,
    G_LSHR	= 58,
    G_ASHR	= 59,
    G_ICMP	= 60,
    G_FCMP	= 61,
    G_SELECT	= 62,
    G_UADDE	= 63,
    G_USUBE	= 64,
    G_SADDO	= 65,
    G_SSUBO	= 66,
    G_UMULO	= 67,
    G_SMULO	= 68,
    G_FADD	= 69,
    G_FSUB	= 70,
    G_FMUL	= 71,
    G_FDIV	= 72,
    G_FREM	= 73,
    G_FPEXT	= 74,
    G_FPTRUNC	= 75,
    G_FPTOSI	= 76,
    G_FPTOUI	= 77,
    G_SITOFP	= 78,
    G_UITOFP	= 79,
    G_GEP	= 80,
    G_BR	= 81,
    ADDC_F_I_HI	= 82,
    ADDC_F_I_LO	= 83,
    ADDC_F_R	= 84,
    ADDC_I_HI	= 85,
    ADDC_I_LO	= 86,
    ADDC_R	= 87,
    ADD_F_I_HI	= 88,
    ADD_F_I_LO	= 89,
    ADD_F_R	= 90,
    ADD_I_HI	= 91,
    ADD_I_LO	= 92,
    ADD_R	= 93,
    ADJCALLSTACKDOWN	= 94,
    ADJCALLSTACKUP	= 95,
    ADJDYNALLOC	= 96,
    AND_F_I_HI	= 97,
    AND_F_I_LO	= 98,
    AND_F_R	= 99,
    AND_I_HI	= 100,
    AND_I_LO	= 101,
    AND_R	= 102,
    BRCC	= 103,
    BRIND_CC	= 104,
    BRIND_CCA	= 105,
    BRR	= 106,
    BT	= 107,
    CALL	= 108,
    CALLR	= 109,
    JR	= 110,
    LDADDR	= 111,
    LDBs_RI	= 112,
    LDBs_RR	= 113,
    LDBz_RI	= 114,
    LDBz_RR	= 115,
    LDHs_RI	= 116,
    LDHs_RR	= 117,
    LDHz_RI	= 118,
    LDHz_RR	= 119,
    LDW_RI	= 120,
    LDW_RR	= 121,
    LDWz_RR	= 122,
    LEADZ	= 123,
    LOG0	= 124,
    LOG1	= 125,
    LOG2	= 126,
    LOG3	= 127,
    LOG4	= 128,
    MOVHI	= 129,
    NOP	= 130,
    OR_F_I_HI	= 131,
    OR_F_I_LO	= 132,
    OR_F_R	= 133,
    OR_I_HI	= 134,
    OR_I_LO	= 135,
    OR_R	= 136,
    POPC	= 137,
    RET	= 138,
    SA_F_I	= 139,
    SA_I	= 140,
    SCC	= 141,
    SELECT	= 142,
    SFSUB_F_RI_HI	= 143,
    SFSUB_F_RI_LO	= 144,
    SFSUB_F_RR	= 145,
    SHL_F_R	= 146,
    SHL_R	= 147,
    SLI	= 148,
    SL_F_I	= 149,
    SL_I	= 150,
    SRA_F_R	= 151,
    SRA_R	= 152,
    SRL_F_R	= 153,
    SRL_R	= 154,
    STADDR	= 155,
    STB_RI	= 156,
    STB_RR	= 157,
    STH_RI	= 158,
    STH_RR	= 159,
    SUBB_F_I_HI	= 160,
    SUBB_F_I_LO	= 161,
    SUBB_F_R	= 162,
    SUBB_I_HI	= 163,
    SUBB_I_LO	= 164,
    SUBB_R	= 165,
    SUB_F_I_HI	= 166,
    SUB_F_I_LO	= 167,
    SUB_F_R	= 168,
    SUB_I_HI	= 169,
    SUB_I_LO	= 170,
    SUB_R	= 171,
    SW_RI	= 172,
    SW_RR	= 173,
    TRAILZ	= 174,
    XOR_F_I_HI	= 175,
    XOR_F_I_LO	= 176,
    XOR_F_R	= 177,
    XOR_I_HI	= 178,
    XOR_I_LO	= 179,
    XOR_R	= 180,
    INSTRUCTION_LIST_END = 181
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
static const MCOperandInfo OperandInfo14[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, };
static const MCOperandInfo OperandInfo15[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, };
static const MCOperandInfo OperandInfo16[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, };
static const MCOperandInfo OperandInfo17[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, };
static const MCOperandInfo OperandInfo18[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, };
static const MCOperandInfo OperandInfo19[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, };
static const MCOperandInfo OperandInfo20[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, };
static const MCOperandInfo OperandInfo21[] = { { Lanai::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Lanai::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo22[] = { { Lanai::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Lanai::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Lanai::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0|(1<<MCOI::Predicate), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo23[] = { { Lanai::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Lanai::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo24[] = { { Lanai::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo25[] = { { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo26[] = { { Lanai::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo27[] = { { Lanai::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Lanai::GPRRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo28[] = { { Lanai::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Lanai::GPRRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Lanai::GPRRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo29[] = { { Lanai::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Lanai::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Lanai::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };

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
  { 18,	6,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Call)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo9, -1 ,nullptr },  // Inst #18 = PATCHPOINT
  { 19,	1,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::Rematerializable), 0x0ULL, nullptr, nullptr, OperandInfo10, -1 ,nullptr },  // Inst #19 = LOAD_STACK_GUARD
  { 20,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Call)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #20 = STATEPOINT
  { 21,	2,	0,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo11, -1 ,nullptr },  // Inst #21 = LOCAL_ESCAPE
  { 22,	1,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #22 = FAULTING_LOAD_OP
  { 23,	1,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #23 = PATCHABLE_OP
  { 24,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #24 = PATCHABLE_FUNCTION_ENTER
  { 25,	1,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Return)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #25 = PATCHABLE_RET
  { 26,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #26 = PATCHABLE_FUNCTION_EXIT
  { 27,	1,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Return)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #27 = PATCHABLE_TAIL_CALL
  { 28,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #28 = G_ADD
  { 29,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #29 = G_SUB
  { 30,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #30 = G_MUL
  { 31,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #31 = G_SDIV
  { 32,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #32 = G_UDIV
  { 33,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #33 = G_SREM
  { 34,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #34 = G_UREM
  { 35,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #35 = G_AND
  { 36,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #36 = G_OR
  { 37,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #37 = G_XOR
  { 38,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #38 = G_FRAME_INDEX
  { 39,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #39 = G_GLOBAL_VALUE
  { 40,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #40 = G_EXTRACT
  { 41,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #41 = G_INSERT
  { 42,	1,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #42 = G_SEQUENCE
  { 43,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #43 = G_PTRTOINT
  { 44,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #44 = G_INTTOPTR
  { 45,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #45 = G_BITCAST
  { 46,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #46 = G_LOAD
  { 47,	2,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #47 = G_STORE
  { 48,	2,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #48 = G_BRCOND
  { 49,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #49 = G_INTRINSIC
  { 50,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #50 = G_INTRINSIC_W_SIDE_EFFECTS
  { 51,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #51 = G_ANYEXT
  { 52,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #52 = G_TRUNC
  { 53,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #53 = G_CONSTANT
  { 54,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #54 = G_FCONSTANT
  { 55,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #55 = G_SEXT
  { 56,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #56 = G_ZEXT
  { 57,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #57 = G_SHL
  { 58,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #58 = G_LSHR
  { 59,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #59 = G_ASHR
  { 60,	4,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #60 = G_ICMP
  { 61,	4,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #61 = G_FCMP
  { 62,	4,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo18, -1 ,nullptr },  // Inst #62 = G_SELECT
  { 63,	5,	2,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo19, -1 ,nullptr },  // Inst #63 = G_UADDE
  { 64,	5,	2,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo19, -1 ,nullptr },  // Inst #64 = G_USUBE
  { 65,	4,	2,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo18, -1 ,nullptr },  // Inst #65 = G_SADDO
  { 66,	4,	2,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo18, -1 ,nullptr },  // Inst #66 = G_SSUBO
  { 67,	4,	2,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo18, -1 ,nullptr },  // Inst #67 = G_UMULO
  { 68,	4,	2,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo18, -1 ,nullptr },  // Inst #68 = G_SMULO
  { 69,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #69 = G_FADD
  { 70,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #70 = G_FSUB
  { 71,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #71 = G_FMUL
  { 72,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #72 = G_FDIV
  { 73,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #73 = G_FREM
  { 74,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #74 = G_FPEXT
  { 75,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #75 = G_FPTRUNC
  { 76,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #76 = G_FPTOSI
  { 77,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #77 = G_FPTOUI
  { 78,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #78 = G_SITOFP
  { 79,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #79 = G_UITOFP
  { 80,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo20, -1 ,nullptr },  // Inst #80 = G_GEP
  { 81,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #81 = G_BR
  { 82,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo21, -1 ,nullptr },  // Inst #82 = ADDC_F_I_HI
  { 83,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo21, -1 ,nullptr },  // Inst #83 = ADDC_F_I_LO
  { 84,	4,	1,	4,	1,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo22, -1 ,nullptr },  // Inst #84 = ADDC_F_R
  { 85,	3,	1,	4,	1,	0, 0x0ULL, ImplicitList1, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #85 = ADDC_I_HI
  { 86,	3,	1,	4,	1,	0, 0x0ULL, ImplicitList1, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #86 = ADDC_I_LO
  { 87,	4,	1,	4,	1,	0|(1ULL<<MCID::Predicable), 0x0ULL, ImplicitList1, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #87 = ADDC_R
  { 88,	3,	1,	4,	1,	0, 0x0ULL, nullptr, ImplicitList1, OperandInfo21, -1 ,nullptr },  // Inst #88 = ADD_F_I_HI
  { 89,	3,	1,	4,	1,	0, 0x0ULL, nullptr, ImplicitList1, OperandInfo21, -1 ,nullptr },  // Inst #89 = ADD_F_I_LO
  { 90,	4,	1,	4,	1,	0|(1ULL<<MCID::Predicable), 0x0ULL, nullptr, ImplicitList1, OperandInfo22, -1 ,nullptr },  // Inst #90 = ADD_F_R
  { 91,	3,	1,	4,	1,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #91 = ADD_I_HI
  { 92,	3,	1,	4,	1,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #92 = ADD_I_LO
  { 93,	4,	1,	4,	1,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #93 = ADD_R
  { 94,	1,	0,	4,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, ImplicitList2, ImplicitList2, OperandInfo3, -1 ,nullptr },  // Inst #94 = ADJCALLSTACKDOWN
  { 95,	2,	0,	4,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, ImplicitList2, ImplicitList2, OperandInfo8, -1 ,nullptr },  // Inst #95 = ADJCALLSTACKUP
  { 96,	2,	1,	4,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, ImplicitList2, ImplicitList2, OperandInfo23, -1 ,nullptr },  // Inst #96 = ADJDYNALLOC
  { 97,	3,	1,	4,	1,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, ImplicitList1, OperandInfo21, -1 ,nullptr },  // Inst #97 = AND_F_I_HI
  { 98,	3,	1,	4,	1,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, ImplicitList1, OperandInfo21, -1 ,nullptr },  // Inst #98 = AND_F_I_LO
  { 99,	4,	1,	4,	1,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, ImplicitList1, OperandInfo22, -1 ,nullptr },  // Inst #99 = AND_F_R
  { 100,	3,	1,	4,	1,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #100 = AND_I_HI
  { 101,	3,	1,	4,	1,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #101 = AND_I_LO
  { 102,	4,	1,	4,	1,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #102 = AND_R
  { 103,	2,	0,	4,	2,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x0ULL, ImplicitList1, nullptr, OperandInfo7, -1 ,nullptr },  // Inst #103 = BRCC
  { 104,	2,	0,	4,	1,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList1, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #104 = BRIND_CC
  { 105,	3,	0,	4,	1,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList1, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #105 = BRIND_CCA
  { 106,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList1, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #106 = BRR
  { 107,	1,	0,	4,	2,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #107 = BT
  { 108,	1,	0,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Call), 0x0ULL, ImplicitList2, ImplicitList3, OperandInfo2, -1 ,nullptr },  // Inst #108 = CALL
  { 109,	1,	0,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Call), 0x0ULL, ImplicitList2, ImplicitList3, OperandInfo26, -1 ,nullptr },  // Inst #109 = CALLR
  { 110,	1,	0,	4,	1,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo26, -1 ,nullptr },  // Inst #110 = JR
  { 111,	2,	1,	4,	3,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::Rematerializable), 0x0ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #111 = LDADDR
  { 112,	4,	1,	4,	4,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::Rematerializable), 0x0ULL, nullptr, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #112 = LDBs_RI
  { 113,	4,	1,	4,	5,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo28, -1 ,nullptr },  // Inst #113 = LDBs_RR
  { 114,	4,	1,	4,	4,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::Rematerializable), 0x0ULL, nullptr, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #114 = LDBz_RI
  { 115,	4,	1,	4,	5,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo28, -1 ,nullptr },  // Inst #115 = LDBz_RR
  { 116,	4,	1,	4,	4,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::Rematerializable), 0x0ULL, nullptr, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #116 = LDHs_RI
  { 117,	4,	1,	4,	5,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo28, -1 ,nullptr },  // Inst #117 = LDHs_RR
  { 118,	4,	1,	4,	4,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::Rematerializable), 0x0ULL, nullptr, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #118 = LDHz_RI
  { 119,	4,	1,	4,	5,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo28, -1 ,nullptr },  // Inst #119 = LDHz_RR
  { 120,	4,	1,	4,	3,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::Rematerializable), 0x0ULL, nullptr, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #120 = LDW_RI
  { 121,	4,	1,	4,	5,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo28, -1 ,nullptr },  // Inst #121 = LDW_RR
  { 122,	4,	1,	4,	5,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo28, -1 ,nullptr },  // Inst #122 = LDWz_RR
  { 123,	2,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #123 = LEADZ
  { 124,	0,	0,	4,	0,	0, 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #124 = LOG0
  { 125,	0,	0,	4,	0,	0, 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #125 = LOG1
  { 126,	0,	0,	4,	0,	0, 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #126 = LOG2
  { 127,	0,	0,	4,	0,	0, 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #127 = LOG3
  { 128,	0,	0,	4,	0,	0, 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #128 = LOG4
  { 129,	2,	1,	4,	1,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #129 = MOVHI
  { 130,	0,	0,	4,	0,	0, 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #130 = NOP
  { 131,	3,	1,	4,	1,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, ImplicitList1, OperandInfo21, -1 ,nullptr },  // Inst #131 = OR_F_I_HI
  { 132,	3,	1,	4,	1,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, ImplicitList1, OperandInfo21, -1 ,nullptr },  // Inst #132 = OR_F_I_LO
  { 133,	4,	1,	4,	1,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, ImplicitList1, OperandInfo22, -1 ,nullptr },  // Inst #133 = OR_F_R
  { 134,	3,	1,	4,	1,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #134 = OR_I_HI
  { 135,	3,	1,	4,	1,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #135 = OR_I_LO
  { 136,	4,	1,	4,	1,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #136 = OR_R
  { 137,	2,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #137 = POPC
  { 138,	0,	0,	4,	0,	0|(1ULL<<MCID::Return)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x0ULL, ImplicitList3, nullptr, nullptr, -1 ,nullptr },  // Inst #138 = RET
  { 139,	3,	1,	4,	1,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList1, OperandInfo21, -1 ,nullptr },  // Inst #139 = SA_F_I
  { 140,	3,	1,	4,	1,	0|(1ULL<<MCID::Rematerializable), 0x0ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #140 = SA_I
  { 141,	2,	1,	4,	2,	0, 0x0ULL, ImplicitList1, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #141 = SCC
  { 142,	4,	1,	4,	1,	0|(1ULL<<MCID::Select), 0x0ULL, ImplicitList1, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #142 = SELECT
  { 143,	2,	0,	4,	1,	0|(1ULL<<MCID::Compare), 0x0ULL, nullptr, ImplicitList1, OperandInfo24, -1 ,nullptr },  // Inst #143 = SFSUB_F_RI_HI
  { 144,	2,	0,	4,	1,	0|(1ULL<<MCID::Compare), 0x0ULL, nullptr, ImplicitList1, OperandInfo24, -1 ,nullptr },  // Inst #144 = SFSUB_F_RI_LO
  { 145,	2,	0,	4,	1,	0|(1ULL<<MCID::Compare), 0x0ULL, nullptr, ImplicitList1, OperandInfo23, -1 ,nullptr },  // Inst #145 = SFSUB_F_RR
  { 146,	4,	1,	4,	1,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList1, OperandInfo22, -1 ,nullptr },  // Inst #146 = SHL_F_R
  { 147,	4,	1,	4,	1,	0|(1ULL<<MCID::Predicable), 0x0ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #147 = SHL_R
  { 148,	2,	1,	4,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #148 = SLI
  { 149,	3,	1,	4,	1,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList1, OperandInfo21, -1 ,nullptr },  // Inst #149 = SL_F_I
  { 150,	3,	1,	4,	1,	0|(1ULL<<MCID::Rematerializable), 0x0ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #150 = SL_I
  { 151,	4,	1,	4,	1,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList1, OperandInfo22, -1 ,nullptr },  // Inst #151 = SRA_F_R
  { 152,	4,	1,	4,	1,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #152 = SRA_R
  { 153,	4,	1,	4,	1,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList1, OperandInfo22, -1 ,nullptr },  // Inst #153 = SRL_F_R
  { 154,	4,	1,	4,	1,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #154 = SRL_R
  { 155,	2,	0,	4,	6,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #155 = STADDR
  { 156,	4,	0,	4,	7,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #156 = STB_RI
  { 157,	4,	0,	4,	6,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo28, -1 ,nullptr },  // Inst #157 = STB_RR
  { 158,	4,	0,	4,	7,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #158 = STH_RI
  { 159,	4,	0,	4,	6,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo28, -1 ,nullptr },  // Inst #159 = STH_RR
  { 160,	3,	1,	4,	1,	0|(1ULL<<MCID::CheapAsAMove), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo21, -1 ,nullptr },  // Inst #160 = SUBB_F_I_HI
  { 161,	3,	1,	4,	1,	0|(1ULL<<MCID::CheapAsAMove), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo21, -1 ,nullptr },  // Inst #161 = SUBB_F_I_LO
  { 162,	4,	1,	4,	1,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo22, -1 ,nullptr },  // Inst #162 = SUBB_F_R
  { 163,	3,	1,	4,	1,	0, 0x0ULL, ImplicitList1, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #163 = SUBB_I_HI
  { 164,	3,	1,	4,	1,	0, 0x0ULL, ImplicitList1, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #164 = SUBB_I_LO
  { 165,	4,	1,	4,	1,	0|(1ULL<<MCID::Predicable), 0x0ULL, ImplicitList1, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #165 = SUBB_R
  { 166,	3,	1,	4,	1,	0, 0x0ULL, nullptr, ImplicitList1, OperandInfo21, -1 ,nullptr },  // Inst #166 = SUB_F_I_HI
  { 167,	3,	1,	4,	1,	0, 0x0ULL, nullptr, ImplicitList1, OperandInfo21, -1 ,nullptr },  // Inst #167 = SUB_F_I_LO
  { 168,	4,	1,	4,	1,	0|(1ULL<<MCID::Predicable), 0x0ULL, nullptr, ImplicitList1, OperandInfo22, -1 ,nullptr },  // Inst #168 = SUB_F_R
  { 169,	3,	1,	4,	1,	0|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #169 = SUB_I_HI
  { 170,	3,	1,	4,	1,	0|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #170 = SUB_I_LO
  { 171,	4,	1,	4,	1,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #171 = SUB_R
  { 172,	4,	0,	4,	6,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #172 = SW_RI
  { 173,	4,	0,	4,	6,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo28, -1 ,nullptr },  // Inst #173 = SW_RR
  { 174,	2,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #174 = TRAILZ
  { 175,	3,	1,	4,	1,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, ImplicitList1, OperandInfo21, -1 ,nullptr },  // Inst #175 = XOR_F_I_HI
  { 176,	3,	1,	4,	1,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, ImplicitList1, OperandInfo21, -1 ,nullptr },  // Inst #176 = XOR_F_I_LO
  { 177,	4,	1,	4,	1,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, ImplicitList1, OperandInfo22, -1 ,nullptr },  // Inst #177 = XOR_F_R
  { 178,	3,	1,	4,	1,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #178 = XOR_I_HI
  { 179,	3,	1,	4,	1,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #179 = XOR_I_LO
  { 180,	4,	1,	4,	1,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #180 = XOR_R
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
  /* 273 */ 'E', 'X', 'T', 'R', 'A', 'C', 'T', '_', 'S', 'U', 'B', 'R', 'E', 'G', 0,
  /* 288 */ 'I', 'N', 'S', 'E', 'R', 'T', '_', 'S', 'U', 'B', 'R', 'E', 'G', 0,
  /* 302 */ 'S', 'U', 'B', 'R', 'E', 'G', '_', 'T', 'O', '_', 'R', 'E', 'G', 0,
  /* 316 */ 'P', 'H', 'I', 0,
  /* 320 */ 'M', 'O', 'V', 'H', 'I', 0,
  /* 326 */ 'S', 'F', 'S', 'U', 'B', '_', 'F', '_', 'R', 'I', '_', 'H', 'I', 0,
  /* 340 */ 'S', 'U', 'B', 'B', '_', 'I', '_', 'H', 'I', 0,
  /* 350 */ 'S', 'U', 'B', '_', 'I', '_', 'H', 'I', 0,
  /* 359 */ 'A', 'D', 'D', 'C', '_', 'I', '_', 'H', 'I', 0,
  /* 369 */ 'A', 'D', 'D', '_', 'I', '_', 'H', 'I', 0,
  /* 378 */ 'A', 'N', 'D', '_', 'I', '_', 'H', 'I', 0,
  /* 387 */ 'S', 'U', 'B', 'B', '_', 'F', '_', 'I', '_', 'H', 'I', 0,
  /* 399 */ 'S', 'U', 'B', '_', 'F', '_', 'I', '_', 'H', 'I', 0,
  /* 410 */ 'A', 'D', 'D', 'C', '_', 'F', '_', 'I', '_', 'H', 'I', 0,
  /* 422 */ 'A', 'D', 'D', '_', 'F', '_', 'I', '_', 'H', 'I', 0,
  /* 433 */ 'A', 'N', 'D', '_', 'F', '_', 'I', '_', 'H', 'I', 0,
  /* 444 */ 'X', 'O', 'R', '_', 'F', '_', 'I', '_', 'H', 'I', 0,
  /* 455 */ 'X', 'O', 'R', '_', 'I', '_', 'H', 'I', 0,
  /* 464 */ 'S', 'L', 'I', 0,
  /* 468 */ 'S', 'T', 'B', '_', 'R', 'I', 0,
  /* 475 */ 'S', 'T', 'H', '_', 'R', 'I', 0,
  /* 482 */ 'L', 'D', 'W', '_', 'R', 'I', 0,
  /* 489 */ 'S', 'W', '_', 'R', 'I', 0,
  /* 495 */ 'L', 'D', 'B', 's', '_', 'R', 'I', 0,
  /* 503 */ 'L', 'D', 'H', 's', '_', 'R', 'I', 0,
  /* 511 */ 'L', 'D', 'B', 'z', '_', 'R', 'I', 0,
  /* 519 */ 'L', 'D', 'H', 'z', '_', 'R', 'I', 0,
  /* 527 */ 'G', '_', 'F', 'P', 'T', 'O', 'S', 'I', 0,
  /* 536 */ 'G', '_', 'F', 'P', 'T', 'O', 'U', 'I', 0,
  /* 545 */ 'S', 'A', '_', 'I', 0,
  /* 550 */ 'S', 'A', '_', 'F', '_', 'I', 0,
  /* 557 */ 'S', 'L', '_', 'F', '_', 'I', 0,
  /* 564 */ 'S', 'L', '_', 'I', 0,
  /* 569 */ 'G', 'C', '_', 'L', 'A', 'B', 'E', 'L', 0,
  /* 578 */ 'E', 'H', '_', 'L', 'A', 'B', 'E', 'L', 0,
  /* 587 */ 'G', '_', 'S', 'H', 'L', 0,
  /* 593 */ 'P', 'A', 'T', 'C', 'H', 'A', 'B', 'L', 'E', '_', 'T', 'A', 'I', 'L', '_', 'C', 'A', 'L', 'L', 0,
  /* 613 */ 'K', 'I', 'L', 'L', 0,
  /* 618 */ 'G', '_', 'F', 'M', 'U', 'L', 0,
  /* 625 */ 'G', '_', 'M', 'U', 'L', 0,
  /* 631 */ 'G', '_', 'F', 'R', 'E', 'M', 0,
  /* 638 */ 'G', '_', 'S', 'R', 'E', 'M', 0,
  /* 645 */ 'G', '_', 'U', 'R', 'E', 'M', 0,
  /* 652 */ 'I', 'N', 'L', 'I', 'N', 'E', 'A', 'S', 'M', 0,
  /* 662 */ 'C', 'F', 'I', '_', 'I', 'N', 'S', 'T', 'R', 'U', 'C', 'T', 'I', 'O', 'N', 0,
  /* 678 */ 'A', 'D', 'J', 'C', 'A', 'L', 'L', 'S', 'T', 'A', 'C', 'K', 'D', 'O', 'W', 'N', 0,
  /* 695 */ 'G', '_', 'S', 'S', 'U', 'B', 'O', 0,
  /* 703 */ 'G', '_', 'S', 'A', 'D', 'D', 'O', 0,
  /* 711 */ 'G', '_', 'S', 'M', 'U', 'L', 'O', 0,
  /* 719 */ 'G', '_', 'U', 'M', 'U', 'L', 'O', 0,
  /* 727 */ 'S', 'F', 'S', 'U', 'B', '_', 'F', '_', 'R', 'I', '_', 'L', 'O', 0,
  /* 741 */ 'S', 'U', 'B', 'B', '_', 'I', '_', 'L', 'O', 0,
  /* 751 */ 'S', 'U', 'B', '_', 'I', '_', 'L', 'O', 0,
  /* 760 */ 'A', 'D', 'D', 'C', '_', 'I', '_', 'L', 'O', 0,
  /* 770 */ 'A', 'D', 'D', '_', 'I', '_', 'L', 'O', 0,
  /* 779 */ 'A', 'N', 'D', '_', 'I', '_', 'L', 'O', 0,
  /* 788 */ 'S', 'U', 'B', 'B', '_', 'F', '_', 'I', '_', 'L', 'O', 0,
  /* 800 */ 'S', 'U', 'B', '_', 'F', '_', 'I', '_', 'L', 'O', 0,
  /* 811 */ 'A', 'D', 'D', 'C', '_', 'F', '_', 'I', '_', 'L', 'O', 0,
  /* 823 */ 'A', 'D', 'D', '_', 'F', '_', 'I', '_', 'L', 'O', 0,
  /* 834 */ 'A', 'N', 'D', '_', 'F', '_', 'I', '_', 'L', 'O', 0,
  /* 845 */ 'X', 'O', 'R', '_', 'F', '_', 'I', '_', 'L', 'O', 0,
  /* 856 */ 'X', 'O', 'R', '_', 'I', '_', 'L', 'O', 0,
  /* 865 */ 'S', 'T', 'A', 'C', 'K', 'M', 'A', 'P', 0,
  /* 874 */ 'G', '_', 'G', 'E', 'P', 0,
  /* 880 */ 'G', '_', 'S', 'I', 'T', 'O', 'F', 'P', 0,
  /* 889 */ 'G', '_', 'U', 'I', 'T', 'O', 'F', 'P', 0,
  /* 898 */ 'G', '_', 'F', 'C', 'M', 'P', 0,
  /* 905 */ 'G', '_', 'I', 'C', 'M', 'P', 0,
  /* 912 */ 'N', 'O', 'P', 0,
  /* 916 */ 'F', 'A', 'U', 'L', 'T', 'I', 'N', 'G', '_', 'L', 'O', 'A', 'D', '_', 'O', 'P', 0,
  /* 933 */ 'P', 'A', 'T', 'C', 'H', 'A', 'B', 'L', 'E', '_', 'O', 'P', 0,
  /* 946 */ 'A', 'D', 'J', 'C', 'A', 'L', 'L', 'S', 'T', 'A', 'C', 'K', 'U', 'P', 0,
  /* 961 */ 'G', '_', 'B', 'R', 0,
  /* 966 */ 'L', 'D', 'A', 'D', 'D', 'R', 0,
  /* 973 */ 'S', 'T', 'A', 'D', 'D', 'R', 0,
  /* 980 */ 'P', 'A', 'T', 'C', 'H', 'A', 'B', 'L', 'E', '_', 'F', 'U', 'N', 'C', 'T', 'I', 'O', 'N', '_', 'E', 'N', 'T', 'E', 'R', 0,
  /* 1005 */ 'G', '_', 'A', 'S', 'H', 'R', 0,
  /* 1012 */ 'G', '_', 'L', 'S', 'H', 'R', 0,
  /* 1019 */ 'J', 'R', 0,
  /* 1022 */ 'C', 'A', 'L', 'L', 'R', 0,
  /* 1028 */ 'G', '_', 'X', 'O', 'R', 0,
  /* 1034 */ 'G', '_', 'O', 'R', 0,
  /* 1039 */ 'B', 'R', 'R', 0,
  /* 1043 */ 'S', 'T', 'B', '_', 'R', 'R', 0,
  /* 1050 */ 'S', 'F', 'S', 'U', 'B', '_', 'F', '_', 'R', 'R', 0,
  /* 1061 */ 'S', 'T', 'H', '_', 'R', 'R', 0,
  /* 1068 */ 'L', 'D', 'W', '_', 'R', 'R', 0,
  /* 1075 */ 'S', 'W', '_', 'R', 'R', 0,
  /* 1081 */ 'L', 'D', 'B', 's', '_', 'R', 'R', 0,
  /* 1089 */ 'L', 'D', 'H', 's', '_', 'R', 'R', 0,
  /* 1097 */ 'L', 'D', 'B', 'z', '_', 'R', 'R', 0,
  /* 1105 */ 'L', 'D', 'H', 'z', '_', 'R', 'R', 0,
  /* 1113 */ 'L', 'D', 'W', 'z', '_', 'R', 'R', 0,
  /* 1121 */ 'G', '_', 'I', 'N', 'T', 'T', 'O', 'P', 'T', 'R', 0,
  /* 1132 */ 'S', 'R', 'A', '_', 'R', 0,
  /* 1138 */ 'S', 'U', 'B', 'B', '_', 'R', 0,
  /* 1145 */ 'S', 'U', 'B', '_', 'R', 0,
  /* 1151 */ 'A', 'D', 'D', 'C', '_', 'R', 0,
  /* 1158 */ 'A', 'D', 'D', '_', 'R', 0,
  /* 1164 */ 'A', 'N', 'D', '_', 'R', 0,
  /* 1170 */ 'S', 'R', 'A', '_', 'F', '_', 'R', 0,
  /* 1178 */ 'S', 'U', 'B', 'B', '_', 'F', '_', 'R', 0,
  /* 1187 */ 'S', 'U', 'B', '_', 'F', '_', 'R', 0,
  /* 1195 */ 'A', 'D', 'D', 'C', '_', 'F', '_', 'R', 0,
  /* 1204 */ 'A', 'D', 'D', '_', 'F', '_', 'R', 0,
  /* 1212 */ 'A', 'N', 'D', '_', 'F', '_', 'R', 0,
  /* 1220 */ 'S', 'H', 'L', '_', 'F', '_', 'R', 0,
  /* 1228 */ 'S', 'R', 'L', '_', 'F', '_', 'R', 0,
  /* 1236 */ 'X', 'O', 'R', '_', 'F', '_', 'R', 0,
  /* 1244 */ 'S', 'H', 'L', '_', 'R', 0,
  /* 1250 */ 'S', 'R', 'L', '_', 'R', 0,
  /* 1256 */ 'X', 'O', 'R', '_', 'R', 0,
  /* 1262 */ 'C', 'O', 'P', 'Y', '_', 'T', 'O', '_', 'R', 'E', 'G', 'C', 'L', 'A', 'S', 'S', 0,
  /* 1279 */ 'G', '_', 'I', 'N', 'T', 'R', 'I', 'N', 'S', 'I', 'C', '_', 'W', '_', 'S', 'I', 'D', 'E', '_', 'E', 'F', 'F', 'E', 'C', 'T', 'S', 0,
  /* 1306 */ 'B', 'T', 0,
  /* 1309 */ 'G', '_', 'E', 'X', 'T', 'R', 'A', 'C', 'T', 0,
  /* 1319 */ 'G', '_', 'S', 'E', 'L', 'E', 'C', 'T', 0,
  /* 1328 */ 'P', 'A', 'T', 'C', 'H', 'A', 'B', 'L', 'E', '_', 'R', 'E', 'T', 0,
  /* 1342 */ 'P', 'A', 'T', 'C', 'H', 'A', 'B', 'L', 'E', '_', 'F', 'U', 'N', 'C', 'T', 'I', 'O', 'N', '_', 'E', 'X', 'I', 'T', 0,
  /* 1366 */ 'G', '_', 'F', 'C', 'O', 'N', 'S', 'T', 'A', 'N', 'T', 0,
  /* 1378 */ 'G', '_', 'C', 'O', 'N', 'S', 'T', 'A', 'N', 'T', 0,
  /* 1389 */ 'S', 'T', 'A', 'T', 'E', 'P', 'O', 'I', 'N', 'T', 0,
  /* 1400 */ 'P', 'A', 'T', 'C', 'H', 'P', 'O', 'I', 'N', 'T', 0,
  /* 1411 */ 'G', '_', 'P', 'T', 'R', 'T', 'O', 'I', 'N', 'T', 0,
  /* 1422 */ 'L', 'I', 'F', 'E', 'T', 'I', 'M', 'E', '_', 'S', 'T', 'A', 'R', 'T', 0,
  /* 1437 */ 'G', '_', 'I', 'N', 'S', 'E', 'R', 'T', 0,
  /* 1446 */ 'G', '_', 'B', 'I', 'T', 'C', 'A', 'S', 'T', 0,
  /* 1456 */ 'G', '_', 'F', 'P', 'E', 'X', 'T', 0,
  /* 1464 */ 'G', '_', 'S', 'E', 'X', 'T', 0,
  /* 1471 */ 'G', '_', 'A', 'N', 'Y', 'E', 'X', 'T', 0,
  /* 1480 */ 'G', '_', 'Z', 'E', 'X', 'T', 0,
  /* 1487 */ 'G', '_', 'F', 'D', 'I', 'V', 0,
  /* 1494 */ 'G', '_', 'S', 'D', 'I', 'V', 0,
  /* 1501 */ 'G', '_', 'U', 'D', 'I', 'V', 0,
  /* 1508 */ 'G', '_', 'F', 'R', 'A', 'M', 'E', '_', 'I', 'N', 'D', 'E', 'X', 0,
  /* 1522 */ 'C', 'O', 'P', 'Y', 0,
  /* 1527 */ 'L', 'E', 'A', 'D', 'Z', 0,
  /* 1533 */ 'T', 'R', 'A', 'I', 'L', 'Z', 0,
};

extern const unsigned LanaiInstrNameIndices[] = {
    316U, 652U, 662U, 578U, 569U, 613U, 273U, 288U, 
    260U, 302U, 1262U, 235U, 186U, 1522U, 207U, 1422U, 
    139U, 865U, 1400U, 161U, 1389U, 214U, 916U, 933U, 
    980U, 1328U, 1342U, 593U, 127U, 42U, 625U, 1494U, 
    1501U, 638U, 645U, 133U, 1034U, 1028U, 1508U, 245U, 
    1309U, 1437U, 188U, 1411U, 1121U, 1446U, 113U, 227U, 
    152U, 66U, 1279U, 1471U, 88U, 1378U, 1366U, 1464U, 
    1480U, 587U, 1012U, 1005U, 905U, 898U, 1319U, 199U, 
    178U, 703U, 695U, 719U, 711U, 120U, 35U, 618U, 
    1487U, 631U, 1456U, 78U, 527U, 536U, 880U, 889U, 
    874U, 961U, 410U, 811U, 1195U, 359U, 760U, 1151U, 
    422U, 823U, 1204U, 369U, 770U, 1158U, 678U, 946U, 
    96U, 433U, 834U, 1212U, 378U, 779U, 1164U, 48U, 
    57U, 25U, 1039U, 1306U, 608U, 1022U, 1019U, 966U, 
    495U, 1081U, 511U, 1097U, 503U, 1089U, 519U, 1105U, 
    482U, 1068U, 1113U, 1527U, 0U, 5U, 10U, 15U, 
    20U, 320U, 912U, 445U, 846U, 1237U, 456U, 857U, 
    1257U, 108U, 1338U, 550U, 545U, 53U, 1321U, 326U, 
    727U, 1050U, 1220U, 1244U, 464U, 557U, 564U, 1170U, 
    1132U, 1228U, 1250U, 973U, 468U, 1043U, 475U, 1061U, 
    387U, 788U, 1178U, 340U, 741U, 1138U, 399U, 800U, 
    1187U, 350U, 751U, 1145U, 489U, 1075U, 1533U, 444U, 
    845U, 1236U, 455U, 856U, 1256U, 
};

static inline void InitLanaiMCInstrInfo(MCInstrInfo *II) {
  II->InitMCInstrInfo(LanaiInsts, LanaiInstrNameIndices, LanaiInstrNameData, 181);
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
  InitMCInstrInfo(LanaiInsts, LanaiInstrNameIndices, LanaiInstrNameData, 181);
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

