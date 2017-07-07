/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Global Instruction Selector for the AArch64 target                         *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifdef GET_GLOBALISEL_PREDICATE_BITSET
const unsigned MAX_SUBTARGET_PREDICATES = 11;
using PredicateBitset = llvm::PredicateBitsetImpl<MAX_SUBTARGET_PREDICATES>;
#endif // ifdef GET_GLOBALISEL_PREDICATE_BITSET

#ifdef GET_GLOBALISEL_TEMPORARIES_DECL
  mutable ComplexRendererFn Renderer0;
#endif // ifdef GET_GLOBALISEL_TEMPORARIES_DECL

#ifdef GET_GLOBALISEL_TEMPORARIES_INIT
, Renderer0(nullptr)
#endif // ifdef GET_GLOBALISEL_TEMPORARIES_INIT

#ifdef GET_GLOBALISEL_IMPL
// Bits for subtarget features that participate in instruction matching.
enum SubtargetFeatureBits : uint8_t {
  Feature_HasFPARMv8Bit = 2,
  Feature_HasNEONBit = 3,
  Feature_HasCryptoBit = 5,
  Feature_HasCRCBit = 0,
  Feature_HasRDMBit = 4,
  Feature_HasPerfMonBit = 6,
  Feature_HasFullFP16Bit = 1,
  Feature_IsLEBit = 7,
  Feature_IsBEBit = 10,
  Feature_UseAlternateSExtLoadCVTF32Bit = 9,
  Feature_NotForCodeSizeBit = 8,
};

PredicateBitset AArch64InstructionSelector::
computeAvailableModuleFeatures(const AArch64Subtarget *Subtarget) const {
  PredicateBitset Features;
  if (Subtarget->hasFPARMv8())
    Features[Feature_HasFPARMv8Bit] = 1;
  if (Subtarget->hasNEON())
    Features[Feature_HasNEONBit] = 1;
  if (Subtarget->hasCrypto())
    Features[Feature_HasCryptoBit] = 1;
  if (Subtarget->hasCRC())
    Features[Feature_HasCRCBit] = 1;
  if (Subtarget->hasRDM())
    Features[Feature_HasRDMBit] = 1;
  if (Subtarget->hasPerfMon())
    Features[Feature_HasPerfMonBit] = 1;
  if (Subtarget->hasFullFP16())
    Features[Feature_HasFullFP16Bit] = 1;
  if (Subtarget->isLittleEndian())
    Features[Feature_IsLEBit] = 1;
  if (!Subtarget->isLittleEndian())
    Features[Feature_IsBEBit] = 1;
  if (Subtarget->useAlternateSExtLoadCVTF32Pattern())
    Features[Feature_UseAlternateSExtLoadCVTF32Bit] = 1;
  return Features;
}

PredicateBitset AArch64InstructionSelector::
computeAvailableFunctionFeatures(const AArch64Subtarget *Subtarget, const MachineFunction *MF) const {
  PredicateBitset Features;
  if (!MF->getFunction()->optForSize())
    Features[Feature_NotForCodeSizeBit] = 1;
  return Features;
}

bool AArch64InstructionSelector::selectImpl(MachineInstr &I) const {
  MachineFunction &MF = *I.getParent()->getParent();
  const MachineRegisterInfo &MRI = MF.getRegInfo();
  // FIXME: This should be computed on a per-function basis rather than per-insn.
  AvailableFunctionFeatures = computeAvailableFunctionFeatures(&STI, &MF);
  const PredicateBitset AvailableFeatures = getAvailableFeatures();
if ([&]() {
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_ADD) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR32spRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* imm */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((Renderer0 = selectArithImmed(MI0.getOperand(1)))))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR32spRegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (add:i32 addsub_shifted_imm32:i32:$imm, GPR32sp:i32:$Rn)  =>  (ADDWri:i32 GPR32sp:i32:$Rn, addsub_shifted_imm32:i32:$imm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(AArch64::ADDWri));
    MIB.add(MI0.getOperand(0)/*Rd*/);
    MIB.add(MI0.getOperand(2)/*Rn*/);
Renderer0(MIB);
    for (const auto *FromMI : {&MI0, })
      for (const auto &MMO : FromMI->memoperands())
        MIB.addMemOperand(MMO);
    I.eraseFromParent();
    MachineInstr &NewI = *MIB;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_ADD) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR64spRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* imm */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(64))) &&
((Renderer0 = selectArithImmed(MI0.getOperand(1)))))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR64spRegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (add:i64 addsub_shifted_imm64:i64:$imm, GPR64sp:i64:$Rn)  =>  (ADDXri:i64 GPR64sp:i64:$Rn, addsub_shifted_imm64:i64:$imm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(AArch64::ADDXri));
    MIB.add(MI0.getOperand(0)/*Rd*/);
    MIB.add(MI0.getOperand(2)/*Rn*/);
Renderer0(MIB);
    for (const auto *FromMI : {&MI0, })
      for (const auto &MMO : FromMI->memoperands())
        MIB.addMemOperand(MMO);
    I.eraseFromParent();
    MachineInstr &NewI = *MIB;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasNEONBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
if (!MI0.getOperand(1).isReg())
  return false;
if (TRI.isPhysicalRegister(MI0.getOperand(1).getReg()))
  return false;
MachineInstr &MI1 = *MRI.getVRegDef(MI0.getOperand(1).getReg());
if (MI1.getNumOperands() < 2)
  return false;
if (!MI0.getOperand(2).isReg())
  return false;
if (TRI.isPhysicalRegister(MI0.getOperand(2).getReg()))
  return false;
MachineInstr &MI2 = *MRI.getVRegDef(MI0.getOperand(2).getReg());
if (MI2.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_ADD) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Operand 1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(8, 16))) &&
(((MI1.getOpcode() == TargetOpcode::G_SEXT) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::vector(8, 16))))) &&
((/* Rn */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::vector(8, 8))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))))
))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(8, 16))) &&
(((MI2.getOpcode() == TargetOpcode::G_SEXT) &&
((/* Operand 0 */ (MRI.getType(MI2.getOperand(0).getReg()) == (LLT::vector(8, 16))))) &&
((/* Rm */ (MRI.getType(MI2.getOperand(1).getReg()) == (LLT::vector(8, 8))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI2.getOperand(1).getReg(), MRI, TRI))))))
)))) {
      if (!isObviouslySafeToFold(MI1)) return false;
      if (!isObviouslySafeToFold(MI2)) return false;
// (add:v8i16 (sext:v8i16 V64:v8i8:$Rn), (sext:v8i16 V64:v8i8:$Rm))  =>  (SADDLv8i8_v8i16:v8i16 V64:v8i8:$Rn, V64:v8i8:$Rm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(AArch64::SADDLv8i8_v8i16));
    MIB.add(MI0.getOperand(0)/*Rd*/);
    MIB.add(MI1.getOperand(1)/*Rn*/);
    MIB.add(MI2.getOperand(1)/*Rm*/);
    for (const auto *FromMI : {&MI0, &MI1, &MI2, })
      for (const auto &MMO : FromMI->memoperands())
        MIB.addMemOperand(MMO);
    I.eraseFromParent();
    MachineInstr &NewI = *MIB;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasNEONBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
if (!MI0.getOperand(1).isReg())
  return false;
if (TRI.isPhysicalRegister(MI0.getOperand(1).getReg()))
  return false;
MachineInstr &MI1 = *MRI.getVRegDef(MI0.getOperand(1).getReg());
if (MI1.getNumOperands() < 2)
  return false;
if (!MI0.getOperand(2).isReg())
  return false;
if (TRI.isPhysicalRegister(MI0.getOperand(2).getReg()))
  return false;
MachineInstr &MI2 = *MRI.getVRegDef(MI0.getOperand(2).getReg());
if (MI2.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_ADD) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Operand 1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 32))) &&
(((MI1.getOpcode() == TargetOpcode::G_SEXT) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::vector(4, 32))))) &&
((/* Rn */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::vector(4, 16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))))
))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(4, 32))) &&
(((MI2.getOpcode() == TargetOpcode::G_SEXT) &&
((/* Operand 0 */ (MRI.getType(MI2.getOperand(0).getReg()) == (LLT::vector(4, 32))))) &&
((/* Rm */ (MRI.getType(MI2.getOperand(1).getReg()) == (LLT::vector(4, 16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI2.getOperand(1).getReg(), MRI, TRI))))))
)))) {
      if (!isObviouslySafeToFold(MI1)) return false;
      if (!isObviouslySafeToFold(MI2)) return false;
// (add:v4i32 (sext:v4i32 V64:v4i16:$Rn), (sext:v4i32 V64:v4i16:$Rm))  =>  (SADDLv4i16_v4i32:v4i32 V64:v4i16:$Rn, V64:v4i16:$Rm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(AArch64::SADDLv4i16_v4i32));
    MIB.add(MI0.getOperand(0)/*Rd*/);
    MIB.add(MI1.getOperand(1)/*Rn*/);
    MIB.add(MI2.getOperand(1)/*Rm*/);
    for (const auto *FromMI : {&MI0, &MI1, &MI2, })
      for (const auto &MMO : FromMI->memoperands())
        MIB.addMemOperand(MMO);
    I.eraseFromParent();
    MachineInstr &NewI = *MIB;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasNEONBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
if (!MI0.getOperand(1).isReg())
  return false;
if (TRI.isPhysicalRegister(MI0.getOperand(1).getReg()))
  return false;
MachineInstr &MI1 = *MRI.getVRegDef(MI0.getOperand(1).getReg());
if (MI1.getNumOperands() < 2)
  return false;
if (!MI0.getOperand(2).isReg())
  return false;
if (TRI.isPhysicalRegister(MI0.getOperand(2).getReg()))
  return false;
MachineInstr &MI2 = *MRI.getVRegDef(MI0.getOperand(2).getReg());
if (MI2.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_ADD) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Operand 1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(2, 64))) &&
(((MI1.getOpcode() == TargetOpcode::G_SEXT) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::vector(2, 64))))) &&
((/* Rn */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::vector(2, 32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))))
))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(2, 64))) &&
(((MI2.getOpcode() == TargetOpcode::G_SEXT) &&
((/* Operand 0 */ (MRI.getType(MI2.getOperand(0).getReg()) == (LLT::vector(2, 64))))) &&
((/* Rm */ (MRI.getType(MI2.getOperand(1).getReg()) == (LLT::vector(2, 32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI2.getOperand(1).getReg(), MRI, TRI))))))
)))) {
      if (!isObviouslySafeToFold(MI1)) return false;
      if (!isObviouslySafeToFold(MI2)) return false;
// (add:v2i64 (sext:v2i64 V64:v2i32:$Rn), (sext:v2i64 V64:v2i32:$Rm))  =>  (SADDLv2i32_v2i64:v2i64 V64:v2i32:$Rn, V64:v2i32:$Rm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(AArch64::SADDLv2i32_v2i64));
    MIB.add(MI0.getOperand(0)/*Rd*/);
    MIB.add(MI1.getOperand(1)/*Rn*/);
    MIB.add(MI2.getOperand(1)/*Rm*/);
    for (const auto *FromMI : {&MI0, &MI1, &MI2, })
      for (const auto &MMO : FromMI->memoperands())
        MIB.addMemOperand(MMO);
    I.eraseFromParent();
    MachineInstr &NewI = *MIB;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasNEONBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
if (!MI0.getOperand(1).isReg())
  return false;
if (TRI.isPhysicalRegister(MI0.getOperand(1).getReg()))
  return false;
MachineInstr &MI1 = *MRI.getVRegDef(MI0.getOperand(1).getReg());
if (MI1.getNumOperands() < 2)
  return false;
if (!MI0.getOperand(2).isReg())
  return false;
if (TRI.isPhysicalRegister(MI0.getOperand(2).getReg()))
  return false;
MachineInstr &MI2 = *MRI.getVRegDef(MI0.getOperand(2).getReg());
if (MI2.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_ADD) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Operand 1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(8, 16))) &&
(((MI1.getOpcode() == TargetOpcode::G_ZEXT) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::vector(8, 16))))) &&
((/* Rn */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::vector(8, 8))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))))
))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(8, 16))) &&
(((MI2.getOpcode() == TargetOpcode::G_ZEXT) &&
((/* Operand 0 */ (MRI.getType(MI2.getOperand(0).getReg()) == (LLT::vector(8, 16))))) &&
((/* Rm */ (MRI.getType(MI2.getOperand(1).getReg()) == (LLT::vector(8, 8))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI2.getOperand(1).getReg(), MRI, TRI))))))
)))) {
      if (!isObviouslySafeToFold(MI1)) return false;
      if (!isObviouslySafeToFold(MI2)) return false;
// (add:v8i16 (zext:v8i16 V64:v8i8:$Rn), (zext:v8i16 V64:v8i8:$Rm))  =>  (UADDLv8i8_v8i16:v8i16 V64:v8i8:$Rn, V64:v8i8:$Rm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(AArch64::UADDLv8i8_v8i16));
    MIB.add(MI0.getOperand(0)/*Rd*/);
    MIB.add(MI1.getOperand(1)/*Rn*/);
    MIB.add(MI2.getOperand(1)/*Rm*/);
    for (const auto *FromMI : {&MI0, &MI1, &MI2, })
      for (const auto &MMO : FromMI->memoperands())
        MIB.addMemOperand(MMO);
    I.eraseFromParent();
    MachineInstr &NewI = *MIB;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasNEONBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
if (!MI0.getOperand(1).isReg())
  return false;
if (TRI.isPhysicalRegister(MI0.getOperand(1).getReg()))
  return false;
MachineInstr &MI1 = *MRI.getVRegDef(MI0.getOperand(1).getReg());
if (MI1.getNumOperands() < 2)
  return false;
if (!MI0.getOperand(2).isReg())
  return false;
if (TRI.isPhysicalRegister(MI0.getOperand(2).getReg()))
  return false;
MachineInstr &MI2 = *MRI.getVRegDef(MI0.getOperand(2).getReg());
if (MI2.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_ADD) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Operand 1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 32))) &&
(((MI1.getOpcode() == TargetOpcode::G_ZEXT) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::vector(4, 32))))) &&
((/* Rn */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::vector(4, 16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))))
))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(4, 32))) &&
(((MI2.getOpcode() == TargetOpcode::G_ZEXT) &&
((/* Operand 0 */ (MRI.getType(MI2.getOperand(0).getReg()) == (LLT::vector(4, 32))))) &&
((/* Rm */ (MRI.getType(MI2.getOperand(1).getReg()) == (LLT::vector(4, 16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI2.getOperand(1).getReg(), MRI, TRI))))))
)))) {
      if (!isObviouslySafeToFold(MI1)) return false;
      if (!isObviouslySafeToFold(MI2)) return false;
// (add:v4i32 (zext:v4i32 V64:v4i16:$Rn), (zext:v4i32 V64:v4i16:$Rm))  =>  (UADDLv4i16_v4i32:v4i32 V64:v4i16:$Rn, V64:v4i16:$Rm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(AArch64::UADDLv4i16_v4i32));
    MIB.add(MI0.getOperand(0)/*Rd*/);
    MIB.add(MI1.getOperand(1)/*Rn*/);
    MIB.add(MI2.getOperand(1)/*Rm*/);
    for (const auto *FromMI : {&MI0, &MI1, &MI2, })
      for (const auto &MMO : FromMI->memoperands())
        MIB.addMemOperand(MMO);
    I.eraseFromParent();
    MachineInstr &NewI = *MIB;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasNEONBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
if (!MI0.getOperand(1).isReg())
  return false;
if (TRI.isPhysicalRegister(MI0.getOperand(1).getReg()))
  return false;
MachineInstr &MI1 = *MRI.getVRegDef(MI0.getOperand(1).getReg());
if (MI1.getNumOperands() < 2)
  return false;
if (!MI0.getOperand(2).isReg())
  return false;
if (TRI.isPhysicalRegister(MI0.getOperand(2).getReg()))
  return false;
MachineInstr &MI2 = *MRI.getVRegDef(MI0.getOperand(2).getReg());
if (MI2.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_ADD) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Operand 1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(2, 64))) &&
(((MI1.getOpcode() == TargetOpcode::G_ZEXT) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::vector(2, 64))))) &&
((/* Rn */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::vector(2, 32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))))
))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(2, 64))) &&
(((MI2.getOpcode() == TargetOpcode::G_ZEXT) &&
((/* Operand 0 */ (MRI.getType(MI2.getOperand(0).getReg()) == (LLT::vector(2, 64))))) &&
((/* Rm */ (MRI.getType(MI2.getOperand(1).getReg()) == (LLT::vector(2, 32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI2.getOperand(1).getReg(), MRI, TRI))))))
)))) {
      if (!isObviouslySafeToFold(MI1)) return false;
      if (!isObviouslySafeToFold(MI2)) return false;
// (add:v2i64 (zext:v2i64 V64:v2i32:$Rn), (zext:v2i64 V64:v2i32:$Rm))  =>  (UADDLv2i32_v2i64:v2i64 V64:v2i32:$Rn, V64:v2i32:$Rm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(AArch64::UADDLv2i32_v2i64));
    MIB.add(MI0.getOperand(0)/*Rd*/);
    MIB.add(MI1.getOperand(1)/*Rn*/);
    MIB.add(MI2.getOperand(1)/*Rm*/);
    for (const auto *FromMI : {&MI0, &MI1, &MI2, })
      for (const auto &MMO : FromMI->memoperands())
        MIB.addMemOperand(MMO);
    I.eraseFromParent();
    MachineInstr &NewI = *MIB;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
if (!MI0.getOperand(1).isReg())
  return false;
if (TRI.isPhysicalRegister(MI0.getOperand(1).getReg()))
  return false;
MachineInstr &MI1 = *MRI.getVRegDef(MI0.getOperand(1).getReg());
if (MI1.getNumOperands() < 3)
  return false;
if (!MI1.getOperand(1).isReg())
  return false;
if (TRI.isPhysicalRegister(MI1.getOperand(1).getReg()))
  return false;
MachineInstr &MI2 = *MRI.getVRegDef(MI1.getOperand(1).getReg());
if (MI2.getNumOperands() < 2)
  return false;
if (!MI1.getOperand(2).isReg())
  return false;
if (TRI.isPhysicalRegister(MI1.getOperand(2).getReg()))
  return false;
MachineInstr &MI3 = *MRI.getVRegDef(MI1.getOperand(2).getReg());
if (MI3.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_ADD) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Operand 1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(64))) &&
(((MI1.getOpcode() == TargetOpcode::G_MUL) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::scalar(64))))) &&
((/* Operand 1 */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::scalar(64))) &&
(((MI2.getOpcode() == TargetOpcode::G_SEXT) &&
((/* Operand 0 */ (MRI.getType(MI2.getOperand(0).getReg()) == (LLT::scalar(64))))) &&
((/* Rn */ (MRI.getType(MI2.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR32RegClass) == RBI.getRegBank(MI2.getOperand(1).getReg(), MRI, TRI))))))
))) &&
((/* Operand 2 */ (MRI.getType(MI1.getOperand(2).getReg()) == (LLT::scalar(64))) &&
(((MI3.getOpcode() == TargetOpcode::G_SEXT) &&
((/* Operand 0 */ (MRI.getType(MI3.getOperand(0).getReg()) == (LLT::scalar(64))))) &&
((/* Rm */ (MRI.getType(MI3.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR32RegClass) == RBI.getRegBank(MI3.getOperand(1).getReg(), MRI, TRI))))))
))))
))) &&
((/* Ra */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR64RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
      if (!isObviouslySafeToFold(MI1)) return false;
      if (!isObviouslySafeToFold(MI2)) return false;
      if (!isObviouslySafeToFold(MI3)) return false;
// (add:i64 (mul:i64 (sext:i64 GPR32:i32:$Rn), (sext:i64 GPR32:i32:$Rm)), GPR64:i64:$Ra)  =>  (SMADDLrrr:i64 GPR32:i32:$Rn, GPR32:i32:$Rm, GPR64:i64:$Ra)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(AArch64::SMADDLrrr));
    MIB.add(MI0.getOperand(0)/*Rd*/);
    MIB.add(MI2.getOperand(1)/*Rn*/);
    MIB.add(MI3.getOperand(1)/*Rm*/);
    MIB.add(MI0.getOperand(2)/*Ra*/);
    for (const auto *FromMI : {&MI0, &MI1, &MI2, &MI3, })
      for (const auto &MMO : FromMI->memoperands())
        MIB.addMemOperand(MMO);
    I.eraseFromParent();
    MachineInstr &NewI = *MIB;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
if (!MI0.getOperand(1).isReg())
  return false;
if (TRI.isPhysicalRegister(MI0.getOperand(1).getReg()))
  return false;
MachineInstr &MI1 = *MRI.getVRegDef(MI0.getOperand(1).getReg());
if (MI1.getNumOperands() < 3)
  return false;
if (!MI1.getOperand(1).isReg())
  return false;
if (TRI.isPhysicalRegister(MI1.getOperand(1).getReg()))
  return false;
MachineInstr &MI2 = *MRI.getVRegDef(MI1.getOperand(1).getReg());
if (MI2.getNumOperands() < 2)
  return false;
if (!MI1.getOperand(2).isReg())
  return false;
if (TRI.isPhysicalRegister(MI1.getOperand(2).getReg()))
  return false;
MachineInstr &MI3 = *MRI.getVRegDef(MI1.getOperand(2).getReg());
if (MI3.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_ADD) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Operand 1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(64))) &&
(((MI1.getOpcode() == TargetOpcode::G_MUL) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::scalar(64))))) &&
((/* Operand 1 */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::scalar(64))) &&
(((MI2.getOpcode() == TargetOpcode::G_ZEXT) &&
((/* Operand 0 */ (MRI.getType(MI2.getOperand(0).getReg()) == (LLT::scalar(64))))) &&
((/* Rn */ (MRI.getType(MI2.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR32RegClass) == RBI.getRegBank(MI2.getOperand(1).getReg(), MRI, TRI))))))
))) &&
((/* Operand 2 */ (MRI.getType(MI1.getOperand(2).getReg()) == (LLT::scalar(64))) &&
(((MI3.getOpcode() == TargetOpcode::G_ZEXT) &&
((/* Operand 0 */ (MRI.getType(MI3.getOperand(0).getReg()) == (LLT::scalar(64))))) &&
((/* Rm */ (MRI.getType(MI3.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR32RegClass) == RBI.getRegBank(MI3.getOperand(1).getReg(), MRI, TRI))))))
))))
))) &&
((/* Ra */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR64RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
      if (!isObviouslySafeToFold(MI1)) return false;
      if (!isObviouslySafeToFold(MI2)) return false;
      if (!isObviouslySafeToFold(MI3)) return false;
// (add:i64 (mul:i64 (zext:i64 GPR32:i32:$Rn), (zext:i64 GPR32:i32:$Rm)), GPR64:i64:$Ra)  =>  (UMADDLrrr:i64 GPR32:i32:$Rn, GPR32:i32:$Rm, GPR64:i64:$Ra)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(AArch64::UMADDLrrr));
    MIB.add(MI0.getOperand(0)/*Rd*/);
    MIB.add(MI2.getOperand(1)/*Rn*/);
    MIB.add(MI3.getOperand(1)/*Rm*/);
    MIB.add(MI0.getOperand(2)/*Ra*/);
    for (const auto *FromMI : {&MI0, &MI1, &MI2, &MI3, })
      for (const auto &MMO : FromMI->memoperands())
        MIB.addMemOperand(MMO);
    I.eraseFromParent();
    MachineInstr &NewI = *MIB;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasNEONBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
if (!MI0.getOperand(1).isReg())
  return false;
if (TRI.isPhysicalRegister(MI0.getOperand(1).getReg()))
  return false;
MachineInstr &MI1 = *MRI.getVRegDef(MI0.getOperand(1).getReg());
if (MI1.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_ADD) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(8, 8))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Operand 1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(8, 8))) &&
(((MI1.getOpcode() == TargetOpcode::G_MUL) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::vector(8, 8))))) &&
((/* Rn */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::vector(8, 8))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Rm */ (MRI.getType(MI1.getOperand(2).getReg()) == (LLT::vector(8, 8))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI1.getOperand(2).getReg(), MRI, TRI))))))
))) &&
((/* Rd */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(8, 8))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
      if (!isObviouslySafeToFold(MI1)) return false;
// (add:v8i8 (mul:v8i8 V64:v8i8:$Rn, V64:v8i8:$Rm), V64:v8i8:$Rd)  =>  (MLAv8i8:v8i8 V64:v8i8:$Rd, V64:v8i8:$Rn, V64:v8i8:$Rm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(AArch64::MLAv8i8));
    MIB.add(MI0.getOperand(0)/*dst*/);
    MIB.add(MI0.getOperand(2)/*Rd*/);
    MIB.add(MI1.getOperand(1)/*Rn*/);
    MIB.add(MI1.getOperand(2)/*Rm*/);
    for (const auto *FromMI : {&MI0, &MI1, })
      for (const auto &MMO : FromMI->memoperands())
        MIB.addMemOperand(MMO);
    I.eraseFromParent();
    MachineInstr &NewI = *MIB;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasNEONBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
if (!MI0.getOperand(1).isReg())
  return false;
if (TRI.isPhysicalRegister(MI0.getOperand(1).getReg()))
  return false;
MachineInstr &MI1 = *MRI.getVRegDef(MI0.getOperand(1).getReg());
if (MI1.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_ADD) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(16, 8))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Operand 1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(16, 8))) &&
(((MI1.getOpcode() == TargetOpcode::G_MUL) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::vector(16, 8))))) &&
((/* Rn */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::vector(16, 8))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Rm */ (MRI.getType(MI1.getOperand(2).getReg()) == (LLT::vector(16, 8))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI1.getOperand(2).getReg(), MRI, TRI))))))
))) &&
((/* Rd */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(16, 8))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
      if (!isObviouslySafeToFold(MI1)) return false;
// (add:v16i8 (mul:v16i8 V128:v16i8:$Rn, V128:v16i8:$Rm), V128:v16i8:$Rd)  =>  (MLAv16i8:v16i8 V128:v16i8:$Rd, V128:v16i8:$Rn, V128:v16i8:$Rm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(AArch64::MLAv16i8));
    MIB.add(MI0.getOperand(0)/*dst*/);
    MIB.add(MI0.getOperand(2)/*Rd*/);
    MIB.add(MI1.getOperand(1)/*Rn*/);
    MIB.add(MI1.getOperand(2)/*Rm*/);
    for (const auto *FromMI : {&MI0, &MI1, })
      for (const auto &MMO : FromMI->memoperands())
        MIB.addMemOperand(MMO);
    I.eraseFromParent();
    MachineInstr &NewI = *MIB;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasNEONBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
if (!MI0.getOperand(1).isReg())
  return false;
if (TRI.isPhysicalRegister(MI0.getOperand(1).getReg()))
  return false;
MachineInstr &MI1 = *MRI.getVRegDef(MI0.getOperand(1).getReg());
if (MI1.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_ADD) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Operand 1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 16))) &&
(((MI1.getOpcode() == TargetOpcode::G_MUL) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::vector(4, 16))))) &&
((/* Rn */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::vector(4, 16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Rm */ (MRI.getType(MI1.getOperand(2).getReg()) == (LLT::vector(4, 16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI1.getOperand(2).getReg(), MRI, TRI))))))
))) &&
((/* Rd */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(4, 16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
      if (!isObviouslySafeToFold(MI1)) return false;
// (add:v4i16 (mul:v4i16 V64:v4i16:$Rn, V64:v4i16:$Rm), V64:v4i16:$Rd)  =>  (MLAv4i16:v4i16 V64:v4i16:$Rd, V64:v4i16:$Rn, V64:v4i16:$Rm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(AArch64::MLAv4i16));
    MIB.add(MI0.getOperand(0)/*dst*/);
    MIB.add(MI0.getOperand(2)/*Rd*/);
    MIB.add(MI1.getOperand(1)/*Rn*/);
    MIB.add(MI1.getOperand(2)/*Rm*/);
    for (const auto *FromMI : {&MI0, &MI1, })
      for (const auto &MMO : FromMI->memoperands())
        MIB.addMemOperand(MMO);
    I.eraseFromParent();
    MachineInstr &NewI = *MIB;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasNEONBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
if (!MI0.getOperand(1).isReg())
  return false;
if (TRI.isPhysicalRegister(MI0.getOperand(1).getReg()))
  return false;
MachineInstr &MI1 = *MRI.getVRegDef(MI0.getOperand(1).getReg());
if (MI1.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_ADD) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Operand 1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(8, 16))) &&
(((MI1.getOpcode() == TargetOpcode::G_MUL) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::vector(8, 16))))) &&
((/* Rn */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Rm */ (MRI.getType(MI1.getOperand(2).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI1.getOperand(2).getReg(), MRI, TRI))))))
))) &&
((/* Rd */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
      if (!isObviouslySafeToFold(MI1)) return false;
// (add:v8i16 (mul:v8i16 V128:v8i16:$Rn, V128:v8i16:$Rm), V128:v8i16:$Rd)  =>  (MLAv8i16:v8i16 V128:v8i16:$Rd, V128:v8i16:$Rn, V128:v8i16:$Rm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(AArch64::MLAv8i16));
    MIB.add(MI0.getOperand(0)/*dst*/);
    MIB.add(MI0.getOperand(2)/*Rd*/);
    MIB.add(MI1.getOperand(1)/*Rn*/);
    MIB.add(MI1.getOperand(2)/*Rm*/);
    for (const auto *FromMI : {&MI0, &MI1, })
      for (const auto &MMO : FromMI->memoperands())
        MIB.addMemOperand(MMO);
    I.eraseFromParent();
    MachineInstr &NewI = *MIB;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasNEONBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
if (!MI0.getOperand(1).isReg())
  return false;
if (TRI.isPhysicalRegister(MI0.getOperand(1).getReg()))
  return false;
MachineInstr &MI1 = *MRI.getVRegDef(MI0.getOperand(1).getReg());
if (MI1.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_ADD) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(2, 32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Operand 1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(2, 32))) &&
(((MI1.getOpcode() == TargetOpcode::G_MUL) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::vector(2, 32))))) &&
((/* Rn */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::vector(2, 32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Rm */ (MRI.getType(MI1.getOperand(2).getReg()) == (LLT::vector(2, 32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI1.getOperand(2).getReg(), MRI, TRI))))))
))) &&
((/* Rd */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(2, 32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
      if (!isObviouslySafeToFold(MI1)) return false;
// (add:v2i32 (mul:v2i32 V64:v2i32:$Rn, V64:v2i32:$Rm), V64:v2i32:$Rd)  =>  (MLAv2i32:v2i32 V64:v2i32:$Rd, V64:v2i32:$Rn, V64:v2i32:$Rm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(AArch64::MLAv2i32));
    MIB.add(MI0.getOperand(0)/*dst*/);
    MIB.add(MI0.getOperand(2)/*Rd*/);
    MIB.add(MI1.getOperand(1)/*Rn*/);
    MIB.add(MI1.getOperand(2)/*Rm*/);
    for (const auto *FromMI : {&MI0, &MI1, })
      for (const auto &MMO : FromMI->memoperands())
        MIB.addMemOperand(MMO);
    I.eraseFromParent();
    MachineInstr &NewI = *MIB;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasNEONBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
if (!MI0.getOperand(1).isReg())
  return false;
if (TRI.isPhysicalRegister(MI0.getOperand(1).getReg()))
  return false;
MachineInstr &MI1 = *MRI.getVRegDef(MI0.getOperand(1).getReg());
if (MI1.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_ADD) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Operand 1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 32))) &&
(((MI1.getOpcode() == TargetOpcode::G_MUL) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::vector(4, 32))))) &&
((/* Rn */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Rm */ (MRI.getType(MI1.getOperand(2).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI1.getOperand(2).getReg(), MRI, TRI))))))
))) &&
((/* Rd */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
      if (!isObviouslySafeToFold(MI1)) return false;
// (add:v4i32 (mul:v4i32 V128:v4i32:$Rn, V128:v4i32:$Rm), V128:v4i32:$Rd)  =>  (MLAv4i32:v4i32 V128:v4i32:$Rd, V128:v4i32:$Rn, V128:v4i32:$Rm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(AArch64::MLAv4i32));
    MIB.add(MI0.getOperand(0)/*dst*/);
    MIB.add(MI0.getOperand(2)/*Rd*/);
    MIB.add(MI1.getOperand(1)/*Rn*/);
    MIB.add(MI1.getOperand(2)/*Rm*/);
    for (const auto *FromMI : {&MI0, &MI1, })
      for (const auto &MMO : FromMI->memoperands())
        MIB.addMemOperand(MMO);
    I.eraseFromParent();
    MachineInstr &NewI = *MIB;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasNEONBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
if (!MI0.getOperand(1).isReg())
  return false;
if (TRI.isPhysicalRegister(MI0.getOperand(1).getReg()))
  return false;
MachineInstr &MI1 = *MRI.getVRegDef(MI0.getOperand(1).getReg());
if (MI1.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_ADD) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Operand 1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(8, 16))) &&
(((MI1.getOpcode() == TargetOpcode::G_SEXT) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::vector(8, 16))))) &&
((/* Rm */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::vector(8, 8))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))))
))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
      if (!isObviouslySafeToFold(MI1)) return false;
// (add:v8i16 (sext:v8i16 V64:v8i8:$Rm), V128:v8i16:$Rn)  =>  (SADDWv8i8_v8i16:v8i16 V128:v8i16:$Rn, V64:v8i8:$Rm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(AArch64::SADDWv8i8_v8i16));
    MIB.add(MI0.getOperand(0)/*Rd*/);
    MIB.add(MI0.getOperand(2)/*Rn*/);
    MIB.add(MI1.getOperand(1)/*Rm*/);
    for (const auto *FromMI : {&MI0, &MI1, })
      for (const auto &MMO : FromMI->memoperands())
        MIB.addMemOperand(MMO);
    I.eraseFromParent();
    MachineInstr &NewI = *MIB;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasNEONBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
if (!MI0.getOperand(1).isReg())
  return false;
if (TRI.isPhysicalRegister(MI0.getOperand(1).getReg()))
  return false;
MachineInstr &MI1 = *MRI.getVRegDef(MI0.getOperand(1).getReg());
if (MI1.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_ADD) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Operand 1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 32))) &&
(((MI1.getOpcode() == TargetOpcode::G_SEXT) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::vector(4, 32))))) &&
((/* Rm */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::vector(4, 16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))))
))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
      if (!isObviouslySafeToFold(MI1)) return false;
// (add:v4i32 (sext:v4i32 V64:v4i16:$Rm), V128:v4i32:$Rn)  =>  (SADDWv4i16_v4i32:v4i32 V128:v4i32:$Rn, V64:v4i16:$Rm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(AArch64::SADDWv4i16_v4i32));
    MIB.add(MI0.getOperand(0)/*Rd*/);
    MIB.add(MI0.getOperand(2)/*Rn*/);
    MIB.add(MI1.getOperand(1)/*Rm*/);
    for (const auto *FromMI : {&MI0, &MI1, })
      for (const auto &MMO : FromMI->memoperands())
        MIB.addMemOperand(MMO);
    I.eraseFromParent();
    MachineInstr &NewI = *MIB;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasNEONBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
if (!MI0.getOperand(1).isReg())
  return false;
if (TRI.isPhysicalRegister(MI0.getOperand(1).getReg()))
  return false;
MachineInstr &MI1 = *MRI.getVRegDef(MI0.getOperand(1).getReg());
if (MI1.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_ADD) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Operand 1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(2, 64))) &&
(((MI1.getOpcode() == TargetOpcode::G_SEXT) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::vector(2, 64))))) &&
((/* Rm */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::vector(2, 32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))))
))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
      if (!isObviouslySafeToFold(MI1)) return false;
// (add:v2i64 (sext:v2i64 V64:v2i32:$Rm), V128:v2i64:$Rn)  =>  (SADDWv2i32_v2i64:v2i64 V128:v2i64:$Rn, V64:v2i32:$Rm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(AArch64::SADDWv2i32_v2i64));
    MIB.add(MI0.getOperand(0)/*Rd*/);
    MIB.add(MI0.getOperand(2)/*Rn*/);
    MIB.add(MI1.getOperand(1)/*Rm*/);
    for (const auto *FromMI : {&MI0, &MI1, })
      for (const auto &MMO : FromMI->memoperands())
        MIB.addMemOperand(MMO);
    I.eraseFromParent();
    MachineInstr &NewI = *MIB;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasNEONBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
if (!MI0.getOperand(1).isReg())
  return false;
if (TRI.isPhysicalRegister(MI0.getOperand(1).getReg()))
  return false;
MachineInstr &MI1 = *MRI.getVRegDef(MI0.getOperand(1).getReg());
if (MI1.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_ADD) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Operand 1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(8, 16))) &&
(((MI1.getOpcode() == TargetOpcode::G_ZEXT) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::vector(8, 16))))) &&
((/* Rm */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::vector(8, 8))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))))
))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
      if (!isObviouslySafeToFold(MI1)) return false;
// (add:v8i16 (zext:v8i16 V64:v8i8:$Rm), V128:v8i16:$Rn)  =>  (UADDWv8i8_v8i16:v8i16 V128:v8i16:$Rn, V64:v8i8:$Rm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(AArch64::UADDWv8i8_v8i16));
    MIB.add(MI0.getOperand(0)/*Rd*/);
    MIB.add(MI0.getOperand(2)/*Rn*/);
    MIB.add(MI1.getOperand(1)/*Rm*/);
    for (const auto *FromMI : {&MI0, &MI1, })
      for (const auto &MMO : FromMI->memoperands())
        MIB.addMemOperand(MMO);
    I.eraseFromParent();
    MachineInstr &NewI = *MIB;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasNEONBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
if (!MI0.getOperand(1).isReg())
  return false;
if (TRI.isPhysicalRegister(MI0.getOperand(1).getReg()))
  return false;
MachineInstr &MI1 = *MRI.getVRegDef(MI0.getOperand(1).getReg());
if (MI1.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_ADD) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Operand 1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 32))) &&
(((MI1.getOpcode() == TargetOpcode::G_ZEXT) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::vector(4, 32))))) &&
((/* Rm */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::vector(4, 16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))))
))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
      if (!isObviouslySafeToFold(MI1)) return false;
// (add:v4i32 (zext:v4i32 V64:v4i16:$Rm), V128:v4i32:$Rn)  =>  (UADDWv4i16_v4i32:v4i32 V128:v4i32:$Rn, V64:v4i16:$Rm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(AArch64::UADDWv4i16_v4i32));
    MIB.add(MI0.getOperand(0)/*Rd*/);
    MIB.add(MI0.getOperand(2)/*Rn*/);
    MIB.add(MI1.getOperand(1)/*Rm*/);
    for (const auto *FromMI : {&MI0, &MI1, })
      for (const auto &MMO : FromMI->memoperands())
        MIB.addMemOperand(MMO);
    I.eraseFromParent();
    MachineInstr &NewI = *MIB;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasNEONBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
if (!MI0.getOperand(1).isReg())
  return false;
if (TRI.isPhysicalRegister(MI0.getOperand(1).getReg()))
  return false;
MachineInstr &MI1 = *MRI.getVRegDef(MI0.getOperand(1).getReg());
if (MI1.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_ADD) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Operand 1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(2, 64))) &&
(((MI1.getOpcode() == TargetOpcode::G_ZEXT) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::vector(2, 64))))) &&
((/* Rm */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::vector(2, 32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))))
))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
      if (!isObviouslySafeToFold(MI1)) return false;
// (add:v2i64 (zext:v2i64 V64:v2i32:$Rm), V128:v2i64:$Rn)  =>  (UADDWv2i32_v2i64:v2i64 V128:v2i64:$Rn, V64:v2i32:$Rm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(AArch64::UADDWv2i32_v2i64));
    MIB.add(MI0.getOperand(0)/*Rd*/);
    MIB.add(MI0.getOperand(2)/*Rn*/);
    MIB.add(MI1.getOperand(1)/*Rm*/);
    for (const auto *FromMI : {&MI0, &MI1, })
      for (const auto &MMO : FromMI->memoperands())
        MIB.addMemOperand(MMO);
    I.eraseFromParent();
    MachineInstr &NewI = *MIB;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_ADD) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR32spRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR32spRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* imm */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(32))) &&
((Renderer0 = selectArithImmed(MI0.getOperand(2))))))) {
// (add:i32 GPR32sp:i32:$Rn, addsub_shifted_imm32:i32:$imm)  =>  (ADDWri:i32 GPR32sp:i32:$Rn, addsub_shifted_imm32:i32:$imm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(AArch64::ADDWri));
    MIB.add(MI0.getOperand(0)/*Rd*/);
    MIB.add(MI0.getOperand(1)/*Rn*/);
Renderer0(MIB);
    for (const auto *FromMI : {&MI0, })
      for (const auto &MMO : FromMI->memoperands())
        MIB.addMemOperand(MMO);
    I.eraseFromParent();
    MachineInstr &NewI = *MIB;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_ADD) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR64spRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR64spRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* imm */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(64))) &&
((Renderer0 = selectArithImmed(MI0.getOperand(2))))))) {
// (add:i64 GPR64sp:i64:$Rn, addsub_shifted_imm64:i64:$imm)  =>  (ADDXri:i64 GPR64sp:i64:$Rn, addsub_shifted_imm64:i64:$imm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(AArch64::ADDXri));
    MIB.add(MI0.getOperand(0)/*Rd*/);
    MIB.add(MI0.getOperand(1)/*Rn*/);
Renderer0(MIB);
    for (const auto *FromMI : {&MI0, })
      for (const auto &MMO : FromMI->memoperands())
        MIB.addMemOperand(MMO);
    I.eraseFromParent();
    MachineInstr &NewI = *MIB;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
if (!MI0.getOperand(2).isReg())
  return false;
if (TRI.isPhysicalRegister(MI0.getOperand(2).getReg()))
  return false;
MachineInstr &MI1 = *MRI.getVRegDef(MI0.getOperand(2).getReg());
if (MI1.getNumOperands() < 3)
  return false;
if (!MI1.getOperand(1).isReg())
  return false;
if (TRI.isPhysicalRegister(MI1.getOperand(1).getReg()))
  return false;
MachineInstr &MI2 = *MRI.getVRegDef(MI1.getOperand(1).getReg());
if (MI2.getNumOperands() < 2)
  return false;
if (!MI1.getOperand(2).isReg())
  return false;
if (TRI.isPhysicalRegister(MI1.getOperand(2).getReg()))
  return false;
MachineInstr &MI3 = *MRI.getVRegDef(MI1.getOperand(2).getReg());
if (MI3.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_ADD) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Ra */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR64RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(64))) &&
(((MI1.getOpcode() == TargetOpcode::G_MUL) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::scalar(64))))) &&
((/* Operand 1 */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::scalar(64))) &&
(((MI2.getOpcode() == TargetOpcode::G_SEXT) &&
((/* Operand 0 */ (MRI.getType(MI2.getOperand(0).getReg()) == (LLT::scalar(64))))) &&
((/* Rn */ (MRI.getType(MI2.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR32RegClass) == RBI.getRegBank(MI2.getOperand(1).getReg(), MRI, TRI))))))
))) &&
((/* Operand 2 */ (MRI.getType(MI1.getOperand(2).getReg()) == (LLT::scalar(64))) &&
(((MI3.getOpcode() == TargetOpcode::G_SEXT) &&
((/* Operand 0 */ (MRI.getType(MI3.getOperand(0).getReg()) == (LLT::scalar(64))))) &&
((/* Rm */ (MRI.getType(MI3.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR32RegClass) == RBI.getRegBank(MI3.getOperand(1).getReg(), MRI, TRI))))))
))))
)))) {
      if (!isObviouslySafeToFold(MI1)) return false;
      if (!isObviouslySafeToFold(MI2)) return false;
      if (!isObviouslySafeToFold(MI3)) return false;
// (add:i64 GPR64:i64:$Ra, (mul:i64 (sext:i64 GPR32:i32:$Rn), (sext:i64 GPR32:i32:$Rm)))  =>  (SMADDLrrr:i64 GPR32:i32:$Rn, GPR32:i32:$Rm, GPR64:i64:$Ra)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(AArch64::SMADDLrrr));
    MIB.add(MI0.getOperand(0)/*Rd*/);
    MIB.add(MI2.getOperand(1)/*Rn*/);
    MIB.add(MI3.getOperand(1)/*Rm*/);
    MIB.add(MI0.getOperand(1)/*Ra*/);
    for (const auto *FromMI : {&MI0, &MI1, &MI2, &MI3, })
      for (const auto &MMO : FromMI->memoperands())
        MIB.addMemOperand(MMO);
    I.eraseFromParent();
    MachineInstr &NewI = *MIB;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
if (!MI0.getOperand(2).isReg())
  return false;
if (TRI.isPhysicalRegister(MI0.getOperand(2).getReg()))
  return false;
MachineInstr &MI1 = *MRI.getVRegDef(MI0.getOperand(2).getReg());
if (MI1.getNumOperands() < 3)
  return false;
if (!MI1.getOperand(1).isReg())
  return false;
if (TRI.isPhysicalRegister(MI1.getOperand(1).getReg()))
  return false;
MachineInstr &MI2 = *MRI.getVRegDef(MI1.getOperand(1).getReg());
if (MI2.getNumOperands() < 2)
  return false;
if (!MI1.getOperand(2).isReg())
  return false;
if (TRI.isPhysicalRegister(MI1.getOperand(2).getReg()))
  return false;
MachineInstr &MI3 = *MRI.getVRegDef(MI1.getOperand(2).getReg());
if (MI3.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_ADD) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Ra */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR64RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(64))) &&
(((MI1.getOpcode() == TargetOpcode::G_MUL) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::scalar(64))))) &&
((/* Operand 1 */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::scalar(64))) &&
(((MI2.getOpcode() == TargetOpcode::G_ZEXT) &&
((/* Operand 0 */ (MRI.getType(MI2.getOperand(0).getReg()) == (LLT::scalar(64))))) &&
((/* Rn */ (MRI.getType(MI2.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR32RegClass) == RBI.getRegBank(MI2.getOperand(1).getReg(), MRI, TRI))))))
))) &&
((/* Operand 2 */ (MRI.getType(MI1.getOperand(2).getReg()) == (LLT::scalar(64))) &&
(((MI3.getOpcode() == TargetOpcode::G_ZEXT) &&
((/* Operand 0 */ (MRI.getType(MI3.getOperand(0).getReg()) == (LLT::scalar(64))))) &&
((/* Rm */ (MRI.getType(MI3.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR32RegClass) == RBI.getRegBank(MI3.getOperand(1).getReg(), MRI, TRI))))))
))))
)))) {
      if (!isObviouslySafeToFold(MI1)) return false;
      if (!isObviouslySafeToFold(MI2)) return false;
      if (!isObviouslySafeToFold(MI3)) return false;
// (add:i64 GPR64:i64:$Ra, (mul:i64 (zext:i64 GPR32:i32:$Rn), (zext:i64 GPR32:i32:$Rm)))  =>  (UMADDLrrr:i64 GPR32:i32:$Rn, GPR32:i32:$Rm, GPR64:i64:$Ra)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(AArch64::UMADDLrrr));
    MIB.add(MI0.getOperand(0)/*Rd*/);
    MIB.add(MI2.getOperand(1)/*Rn*/);
    MIB.add(MI3.getOperand(1)/*Rm*/);
    MIB.add(MI0.getOperand(1)/*Ra*/);
    for (const auto *FromMI : {&MI0, &MI1, &MI2, &MI3, })
      for (const auto &MMO : FromMI->memoperands())
        MIB.addMemOperand(MMO);
    I.eraseFromParent();
    MachineInstr &NewI = *MIB;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasNEONBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
if (!MI0.getOperand(2).isReg())
  return false;
if (TRI.isPhysicalRegister(MI0.getOperand(2).getReg()))
  return false;
MachineInstr &MI1 = *MRI.getVRegDef(MI0.getOperand(2).getReg());
if (MI1.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_ADD) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(8, 8))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rd */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(8, 8))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(8, 8))) &&
(((MI1.getOpcode() == TargetOpcode::G_MUL) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::vector(8, 8))))) &&
((/* Rn */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::vector(8, 8))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Rm */ (MRI.getType(MI1.getOperand(2).getReg()) == (LLT::vector(8, 8))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI1.getOperand(2).getReg(), MRI, TRI))))))
)))) {
      if (!isObviouslySafeToFold(MI1)) return false;
// (add:v8i8 V64:v8i8:$Rd, (mul:v8i8 V64:v8i8:$Rn, V64:v8i8:$Rm))  =>  (MLAv8i8:v8i8 V64:v8i8:$Rd, V64:v8i8:$Rn, V64:v8i8:$Rm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(AArch64::MLAv8i8));
    MIB.add(MI0.getOperand(0)/*dst*/);
    MIB.add(MI0.getOperand(1)/*Rd*/);
    MIB.add(MI1.getOperand(1)/*Rn*/);
    MIB.add(MI1.getOperand(2)/*Rm*/);
    for (const auto *FromMI : {&MI0, &MI1, })
      for (const auto &MMO : FromMI->memoperands())
        MIB.addMemOperand(MMO);
    I.eraseFromParent();
    MachineInstr &NewI = *MIB;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasNEONBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
if (!MI0.getOperand(2).isReg())
  return false;
if (TRI.isPhysicalRegister(MI0.getOperand(2).getReg()))
  return false;
MachineInstr &MI1 = *MRI.getVRegDef(MI0.getOperand(2).getReg());
if (MI1.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_ADD) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(16, 8))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rd */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(16, 8))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(16, 8))) &&
(((MI1.getOpcode() == TargetOpcode::G_MUL) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::vector(16, 8))))) &&
((/* Rn */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::vector(16, 8))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Rm */ (MRI.getType(MI1.getOperand(2).getReg()) == (LLT::vector(16, 8))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI1.getOperand(2).getReg(), MRI, TRI))))))
)))) {
      if (!isObviouslySafeToFold(MI1)) return false;
// (add:v16i8 V128:v16i8:$Rd, (mul:v16i8 V128:v16i8:$Rn, V128:v16i8:$Rm))  =>  (MLAv16i8:v16i8 V128:v16i8:$Rd, V128:v16i8:$Rn, V128:v16i8:$Rm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(AArch64::MLAv16i8));
    MIB.add(MI0.getOperand(0)/*dst*/);
    MIB.add(MI0.getOperand(1)/*Rd*/);
    MIB.add(MI1.getOperand(1)/*Rn*/);
    MIB.add(MI1.getOperand(2)/*Rm*/);
    for (const auto *FromMI : {&MI0, &MI1, })
      for (const auto &MMO : FromMI->memoperands())
        MIB.addMemOperand(MMO);
    I.eraseFromParent();
    MachineInstr &NewI = *MIB;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasNEONBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
if (!MI0.getOperand(2).isReg())
  return false;
if (TRI.isPhysicalRegister(MI0.getOperand(2).getReg()))
  return false;
MachineInstr &MI1 = *MRI.getVRegDef(MI0.getOperand(2).getReg());
if (MI1.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_ADD) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rd */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(4, 16))) &&
(((MI1.getOpcode() == TargetOpcode::G_MUL) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::vector(4, 16))))) &&
((/* Rn */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::vector(4, 16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Rm */ (MRI.getType(MI1.getOperand(2).getReg()) == (LLT::vector(4, 16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI1.getOperand(2).getReg(), MRI, TRI))))))
)))) {
      if (!isObviouslySafeToFold(MI1)) return false;
// (add:v4i16 V64:v4i16:$Rd, (mul:v4i16 V64:v4i16:$Rn, V64:v4i16:$Rm))  =>  (MLAv4i16:v4i16 V64:v4i16:$Rd, V64:v4i16:$Rn, V64:v4i16:$Rm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(AArch64::MLAv4i16));
    MIB.add(MI0.getOperand(0)/*dst*/);
    MIB.add(MI0.getOperand(1)/*Rd*/);
    MIB.add(MI1.getOperand(1)/*Rn*/);
    MIB.add(MI1.getOperand(2)/*Rm*/);
    for (const auto *FromMI : {&MI0, &MI1, })
      for (const auto &MMO : FromMI->memoperands())
        MIB.addMemOperand(MMO);
    I.eraseFromParent();
    MachineInstr &NewI = *MIB;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasNEONBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
if (!MI0.getOperand(2).isReg())
  return false;
if (TRI.isPhysicalRegister(MI0.getOperand(2).getReg()))
  return false;
MachineInstr &MI1 = *MRI.getVRegDef(MI0.getOperand(2).getReg());
if (MI1.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_ADD) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rd */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(8, 16))) &&
(((MI1.getOpcode() == TargetOpcode::G_MUL) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::vector(8, 16))))) &&
((/* Rn */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Rm */ (MRI.getType(MI1.getOperand(2).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI1.getOperand(2).getReg(), MRI, TRI))))))
)))) {
      if (!isObviouslySafeToFold(MI1)) return false;
// (add:v8i16 V128:v8i16:$Rd, (mul:v8i16 V128:v8i16:$Rn, V128:v8i16:$Rm))  =>  (MLAv8i16:v8i16 V128:v8i16:$Rd, V128:v8i16:$Rn, V128:v8i16:$Rm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(AArch64::MLAv8i16));
    MIB.add(MI0.getOperand(0)/*dst*/);
    MIB.add(MI0.getOperand(1)/*Rd*/);
    MIB.add(MI1.getOperand(1)/*Rn*/);
    MIB.add(MI1.getOperand(2)/*Rm*/);
    for (const auto *FromMI : {&MI0, &MI1, })
      for (const auto &MMO : FromMI->memoperands())
        MIB.addMemOperand(MMO);
    I.eraseFromParent();
    MachineInstr &NewI = *MIB;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasNEONBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
if (!MI0.getOperand(2).isReg())
  return false;
if (TRI.isPhysicalRegister(MI0.getOperand(2).getReg()))
  return false;
MachineInstr &MI1 = *MRI.getVRegDef(MI0.getOperand(2).getReg());
if (MI1.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_ADD) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(2, 32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rd */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(2, 32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(2, 32))) &&
(((MI1.getOpcode() == TargetOpcode::G_MUL) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::vector(2, 32))))) &&
((/* Rn */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::vector(2, 32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Rm */ (MRI.getType(MI1.getOperand(2).getReg()) == (LLT::vector(2, 32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI1.getOperand(2).getReg(), MRI, TRI))))))
)))) {
      if (!isObviouslySafeToFold(MI1)) return false;
// (add:v2i32 V64:v2i32:$Rd, (mul:v2i32 V64:v2i32:$Rn, V64:v2i32:$Rm))  =>  (MLAv2i32:v2i32 V64:v2i32:$Rd, V64:v2i32:$Rn, V64:v2i32:$Rm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(AArch64::MLAv2i32));
    MIB.add(MI0.getOperand(0)/*dst*/);
    MIB.add(MI0.getOperand(1)/*Rd*/);
    MIB.add(MI1.getOperand(1)/*Rn*/);
    MIB.add(MI1.getOperand(2)/*Rm*/);
    for (const auto *FromMI : {&MI0, &MI1, })
      for (const auto &MMO : FromMI->memoperands())
        MIB.addMemOperand(MMO);
    I.eraseFromParent();
    MachineInstr &NewI = *MIB;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasNEONBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
if (!MI0.getOperand(2).isReg())
  return false;
if (TRI.isPhysicalRegister(MI0.getOperand(2).getReg()))
  return false;
MachineInstr &MI1 = *MRI.getVRegDef(MI0.getOperand(2).getReg());
if (MI1.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_ADD) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rd */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(4, 32))) &&
(((MI1.getOpcode() == TargetOpcode::G_MUL) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::vector(4, 32))))) &&
((/* Rn */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Rm */ (MRI.getType(MI1.getOperand(2).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI1.getOperand(2).getReg(), MRI, TRI))))))
)))) {
      if (!isObviouslySafeToFold(MI1)) return false;
// (add:v4i32 V128:v4i32:$Rd, (mul:v4i32 V128:v4i32:$Rn, V128:v4i32:$Rm))  =>  (MLAv4i32:v4i32 V128:v4i32:$Rd, V128:v4i32:$Rn, V128:v4i32:$Rm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(AArch64::MLAv4i32));
    MIB.add(MI0.getOperand(0)/*dst*/);
    MIB.add(MI0.getOperand(1)/*Rd*/);
    MIB.add(MI1.getOperand(1)/*Rn*/);
    MIB.add(MI1.getOperand(2)/*Rm*/);
    for (const auto *FromMI : {&MI0, &MI1, })
      for (const auto &MMO : FromMI->memoperands())
        MIB.addMemOperand(MMO);
    I.eraseFromParent();
    MachineInstr &NewI = *MIB;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasNEONBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
if (!MI0.getOperand(2).isReg())
  return false;
if (TRI.isPhysicalRegister(MI0.getOperand(2).getReg()))
  return false;
MachineInstr &MI1 = *MRI.getVRegDef(MI0.getOperand(2).getReg());
if (MI1.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_ADD) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(8, 16))) &&
(((MI1.getOpcode() == TargetOpcode::G_SEXT) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::vector(8, 16))))) &&
((/* Rm */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::vector(8, 8))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))))
)))) {
      if (!isObviouslySafeToFold(MI1)) return false;
// (add:v8i16 V128:v8i16:$Rn, (sext:v8i16 V64:v8i8:$Rm))  =>  (SADDWv8i8_v8i16:v8i16 V128:v8i16:$Rn, V64:v8i8:$Rm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(AArch64::SADDWv8i8_v8i16));
    MIB.add(MI0.getOperand(0)/*Rd*/);
    MIB.add(MI0.getOperand(1)/*Rn*/);
    MIB.add(MI1.getOperand(1)/*Rm*/);
    for (const auto *FromMI : {&MI0, &MI1, })
      for (const auto &MMO : FromMI->memoperands())
        MIB.addMemOperand(MMO);
    I.eraseFromParent();
    MachineInstr &NewI = *MIB;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasNEONBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
if (!MI0.getOperand(2).isReg())
  return false;
if (TRI.isPhysicalRegister(MI0.getOperand(2).getReg()))
  return false;
MachineInstr &MI1 = *MRI.getVRegDef(MI0.getOperand(2).getReg());
if (MI1.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_ADD) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(4, 32))) &&
(((MI1.getOpcode() == TargetOpcode::G_SEXT) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::vector(4, 32))))) &&
((/* Rm */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::vector(4, 16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))))
)))) {
      if (!isObviouslySafeToFold(MI1)) return false;
// (add:v4i32 V128:v4i32:$Rn, (sext:v4i32 V64:v4i16:$Rm))  =>  (SADDWv4i16_v4i32:v4i32 V128:v4i32:$Rn, V64:v4i16:$Rm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(AArch64::SADDWv4i16_v4i32));
    MIB.add(MI0.getOperand(0)/*Rd*/);
    MIB.add(MI0.getOperand(1)/*Rn*/);
    MIB.add(MI1.getOperand(1)/*Rm*/);
    for (const auto *FromMI : {&MI0, &MI1, })
      for (const auto &MMO : FromMI->memoperands())
        MIB.addMemOperand(MMO);
    I.eraseFromParent();
    MachineInstr &NewI = *MIB;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasNEONBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
if (!MI0.getOperand(2).isReg())
  return false;
if (TRI.isPhysicalRegister(MI0.getOperand(2).getReg()))
  return false;
MachineInstr &MI1 = *MRI.getVRegDef(MI0.getOperand(2).getReg());
if (MI1.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_ADD) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(2, 64))) &&
(((MI1.getOpcode() == TargetOpcode::G_SEXT) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::vector(2, 64))))) &&
((/* Rm */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::vector(2, 32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))))
)))) {
      if (!isObviouslySafeToFold(MI1)) return false;
// (add:v2i64 V128:v2i64:$Rn, (sext:v2i64 V64:v2i32:$Rm))  =>  (SADDWv2i32_v2i64:v2i64 V128:v2i64:$Rn, V64:v2i32:$Rm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(AArch64::SADDWv2i32_v2i64));
    MIB.add(MI0.getOperand(0)/*Rd*/);
    MIB.add(MI0.getOperand(1)/*Rn*/);
    MIB.add(MI1.getOperand(1)/*Rm*/);
    for (const auto *FromMI : {&MI0, &MI1, })
      for (const auto &MMO : FromMI->memoperands())
        MIB.addMemOperand(MMO);
    I.eraseFromParent();
    MachineInstr &NewI = *MIB;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasNEONBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
if (!MI0.getOperand(2).isReg())
  return false;
if (TRI.isPhysicalRegister(MI0.getOperand(2).getReg()))
  return false;
MachineInstr &MI1 = *MRI.getVRegDef(MI0.getOperand(2).getReg());
if (MI1.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_ADD) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(8, 16))) &&
(((MI1.getOpcode() == TargetOpcode::G_ZEXT) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::vector(8, 16))))) &&
((/* Rm */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::vector(8, 8))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))))
)))) {
      if (!isObviouslySafeToFold(MI1)) return false;
// (add:v8i16 V128:v8i16:$Rn, (zext:v8i16 V64:v8i8:$Rm))  =>  (UADDWv8i8_v8i16:v8i16 V128:v8i16:$Rn, V64:v8i8:$Rm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(AArch64::UADDWv8i8_v8i16));
    MIB.add(MI0.getOperand(0)/*Rd*/);
    MIB.add(MI0.getOperand(1)/*Rn*/);
    MIB.add(MI1.getOperand(1)/*Rm*/);
    for (const auto *FromMI : {&MI0, &MI1, })
      for (const auto &MMO : FromMI->memoperands())
        MIB.addMemOperand(MMO);
    I.eraseFromParent();
    MachineInstr &NewI = *MIB;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasNEONBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
if (!MI0.getOperand(2).isReg())
  return false;
if (TRI.isPhysicalRegister(MI0.getOperand(2).getReg()))
  return false;
MachineInstr &MI1 = *MRI.getVRegDef(MI0.getOperand(2).getReg());
if (MI1.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_ADD) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(4, 32))) &&
(((MI1.getOpcode() == TargetOpcode::G_ZEXT) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::vector(4, 32))))) &&
((/* Rm */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::vector(4, 16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))))
)))) {
      if (!isObviouslySafeToFold(MI1)) return false;
// (add:v4i32 V128:v4i32:$Rn, (zext:v4i32 V64:v4i16:$Rm))  =>  (UADDWv4i16_v4i32:v4i32 V128:v4i32:$Rn, V64:v4i16:$Rm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(AArch64::UADDWv4i16_v4i32));
    MIB.add(MI0.getOperand(0)/*Rd*/);
    MIB.add(MI0.getOperand(1)/*Rn*/);
    MIB.add(MI1.getOperand(1)/*Rm*/);
    for (const auto *FromMI : {&MI0, &MI1, })
      for (const auto &MMO : FromMI->memoperands())
        MIB.addMemOperand(MMO);
    I.eraseFromParent();
    MachineInstr &NewI = *MIB;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasNEONBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
if (!MI0.getOperand(2).isReg())
  return false;
if (TRI.isPhysicalRegister(MI0.getOperand(2).getReg()))
  return false;
MachineInstr &MI1 = *MRI.getVRegDef(MI0.getOperand(2).getReg());
if (MI1.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_ADD) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(2, 64))) &&
(((MI1.getOpcode() == TargetOpcode::G_ZEXT) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::vector(2, 64))))) &&
((/* Rm */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::vector(2, 32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))))
)))) {
      if (!isObviouslySafeToFold(MI1)) return false;
// (add:v2i64 V128:v2i64:$Rn, (zext:v2i64 V64:v2i32:$Rm))  =>  (UADDWv2i32_v2i64:v2i64 V128:v2i64:$Rn, V64:v2i32:$Rm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(AArch64::UADDWv2i32_v2i64));
    MIB.add(MI0.getOperand(0)/*Rd*/);
    MIB.add(MI0.getOperand(1)/*Rn*/);
    MIB.add(MI1.getOperand(1)/*Rm*/);
    for (const auto *FromMI : {&MI0, &MI1, })
      for (const auto &MMO : FromMI->memoperands())
        MIB.addMemOperand(MMO);
    I.eraseFromParent();
    MachineInstr &NewI = *MIB;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_ADD) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR32RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR32RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Rm */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR32RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (add:i32 GPR32:i32:$Rn, GPR32:i32:$Rm)  =>  (ADDWrr:i32 GPR32:i32:$Rn, GPR32:i32:$Rm)
    I.setDesc(TII.get(AArch64::ADDWrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_ADD) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR64RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Rm */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR64RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (add:i64 GPR64:i64:$Rn, GPR64:i64:$Rm)  =>  (ADDXrr:i64 GPR64:i64:$Rn, GPR64:i64:$Rm)
    I.setDesc(TII.get(AArch64::ADDXrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasNEONBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_ADD) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(8, 8))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(8, 8))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Rm */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(8, 8))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (add:v8i8 V64:v8i8:$Rn, V64:v8i8:$Rm)  =>  (ADDv8i8:v8i8 V64:v8i8:$Rn, V64:v8i8:$Rm)
    I.setDesc(TII.get(AArch64::ADDv8i8));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasNEONBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_ADD) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(16, 8))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(16, 8))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Rm */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(16, 8))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (add:v16i8 V128:v16i8:$Rn, V128:v16i8:$Rm)  =>  (ADDv16i8:v16i8 V128:v16i8:$Rn, V128:v16i8:$Rm)
    I.setDesc(TII.get(AArch64::ADDv16i8));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasNEONBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_ADD) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Rm */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(4, 16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (add:v4i16 V64:v4i16:$Rn, V64:v4i16:$Rm)  =>  (ADDv4i16:v4i16 V64:v4i16:$Rn, V64:v4i16:$Rm)
    I.setDesc(TII.get(AArch64::ADDv4i16));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasNEONBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_ADD) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Rm */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (add:v8i16 V128:v8i16:$Rn, V128:v8i16:$Rm)  =>  (ADDv8i16:v8i16 V128:v8i16:$Rn, V128:v8i16:$Rm)
    I.setDesc(TII.get(AArch64::ADDv8i16));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasNEONBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_ADD) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(2, 32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(2, 32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Rm */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(2, 32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (add:v2i32 V64:v2i32:$Rn, V64:v2i32:$Rm)  =>  (ADDv2i32:v2i32 V64:v2i32:$Rn, V64:v2i32:$Rm)
    I.setDesc(TII.get(AArch64::ADDv2i32));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasNEONBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_ADD) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Rm */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (add:v4i32 V128:v4i32:$Rn, V128:v4i32:$Rm)  =>  (ADDv4i32:v4i32 V128:v4i32:$Rn, V128:v4i32:$Rm)
    I.setDesc(TII.get(AArch64::ADDv4i32));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasNEONBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_ADD) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Rm */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (add:v2i64 V128:v2i64:$Rn, V128:v2i64:$Rm)  =>  (ADDv2i64:v2i64 V128:v2i64:$Rn, V128:v2i64:$Rm)
    I.setDesc(TII.get(AArch64::ADDv2i64));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasNEONBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_ADD) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Rm */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (add:v1i64 FPR64:v1i64:$Rn, FPR64:v1i64:$Rm)  =>  (ADDv1i64:v1i64 FPR64:v1i64:$Rn, FPR64:v1i64:$Rm)
    I.setDesc(TII.get(AArch64::ADDv1i64));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
if (!MI0.getOperand(1).isReg())
  return false;
if (TRI.isPhysicalRegister(MI0.getOperand(1).getReg()))
  return false;
MachineInstr &MI1 = *MRI.getVRegDef(MI0.getOperand(1).getReg());
if (MI1.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_AND) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR32RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Operand 1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(32))) &&
(((MI1.getOpcode() == TargetOpcode::G_XOR) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::scalar(32))))) &&
((/* Rm */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR32RegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI1.getOperand(2).getReg()) == (LLT::scalar(32))) &&
(isOperandImmEqual(MI1.getOperand(2), -1, MRI)))))
))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR32RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
      if (!isObviouslySafeToFold(MI1)) return false;
// (and:i32 (xor:i32 GPR32:i32:$Rm, -1:i32), GPR32:i32:$Rn)  =>  (BICWrr:i32 GPR32:i32:$Rn, GPR32:i32:$Rm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(AArch64::BICWrr));
    MIB.add(MI0.getOperand(0)/*Rd*/);
    MIB.add(MI0.getOperand(2)/*Rn*/);
    MIB.add(MI1.getOperand(1)/*Rm*/);
    for (const auto *FromMI : {&MI0, &MI1, })
      for (const auto &MMO : FromMI->memoperands())
        MIB.addMemOperand(MMO);
    I.eraseFromParent();
    MachineInstr &NewI = *MIB;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
if (!MI0.getOperand(1).isReg())
  return false;
if (TRI.isPhysicalRegister(MI0.getOperand(1).getReg()))
  return false;
MachineInstr &MI1 = *MRI.getVRegDef(MI0.getOperand(1).getReg());
if (MI1.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_AND) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Operand 1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(64))) &&
(((MI1.getOpcode() == TargetOpcode::G_XOR) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::scalar(64))))) &&
((/* Rm */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR64RegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI1.getOperand(2).getReg()) == (LLT::scalar(64))) &&
(isOperandImmEqual(MI1.getOperand(2), -1, MRI)))))
))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR64RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
      if (!isObviouslySafeToFold(MI1)) return false;
// (and:i64 (xor:i64 GPR64:i64:$Rm, -1:i64), GPR64:i64:$Rn)  =>  (BICXrr:i64 GPR64:i64:$Rn, GPR64:i64:$Rm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(AArch64::BICXrr));
    MIB.add(MI0.getOperand(0)/*Rd*/);
    MIB.add(MI0.getOperand(2)/*Rn*/);
    MIB.add(MI1.getOperand(1)/*Rm*/);
    for (const auto *FromMI : {&MI0, &MI1, })
      for (const auto &MMO : FromMI->memoperands())
        MIB.addMemOperand(MMO);
    I.eraseFromParent();
    MachineInstr &NewI = *MIB;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
if (!MI0.getOperand(2).isReg())
  return false;
if (TRI.isPhysicalRegister(MI0.getOperand(2).getReg()))
  return false;
MachineInstr &MI1 = *MRI.getVRegDef(MI0.getOperand(2).getReg());
if (MI1.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_AND) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR32RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR32RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(32))) &&
(((MI1.getOpcode() == TargetOpcode::G_XOR) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::scalar(32))))) &&
((/* Rm */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR32RegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI1.getOperand(2).getReg()) == (LLT::scalar(32))) &&
(isOperandImmEqual(MI1.getOperand(2), -1, MRI)))))
)))) {
      if (!isObviouslySafeToFold(MI1)) return false;
// (and:i32 GPR32:i32:$Rn, (xor:i32 GPR32:i32:$Rm, -1:i32))  =>  (BICWrr:i32 GPR32:i32:$Rn, GPR32:i32:$Rm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(AArch64::BICWrr));
    MIB.add(MI0.getOperand(0)/*Rd*/);
    MIB.add(MI0.getOperand(1)/*Rn*/);
    MIB.add(MI1.getOperand(1)/*Rm*/);
    for (const auto *FromMI : {&MI0, &MI1, })
      for (const auto &MMO : FromMI->memoperands())
        MIB.addMemOperand(MMO);
    I.eraseFromParent();
    MachineInstr &NewI = *MIB;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
if (!MI0.getOperand(2).isReg())
  return false;
if (TRI.isPhysicalRegister(MI0.getOperand(2).getReg()))
  return false;
MachineInstr &MI1 = *MRI.getVRegDef(MI0.getOperand(2).getReg());
if (MI1.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_AND) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR64RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(64))) &&
(((MI1.getOpcode() == TargetOpcode::G_XOR) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::scalar(64))))) &&
((/* Rm */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR64RegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI1.getOperand(2).getReg()) == (LLT::scalar(64))) &&
(isOperandImmEqual(MI1.getOperand(2), -1, MRI)))))
)))) {
      if (!isObviouslySafeToFold(MI1)) return false;
// (and:i64 GPR64:i64:$Rn, (xor:i64 GPR64:i64:$Rm, -1:i64))  =>  (BICXrr:i64 GPR64:i64:$Rn, GPR64:i64:$Rm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(AArch64::BICXrr));
    MIB.add(MI0.getOperand(0)/*Rd*/);
    MIB.add(MI0.getOperand(1)/*Rn*/);
    MIB.add(MI1.getOperand(1)/*Rm*/);
    for (const auto *FromMI : {&MI0, &MI1, })
      for (const auto &MMO : FromMI->memoperands())
        MIB.addMemOperand(MMO);
    I.eraseFromParent();
    MachineInstr &NewI = *MIB;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_AND) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR32RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR32RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Rm */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR32RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (and:i32 GPR32:i32:$Rn, GPR32:i32:$Rm)  =>  (ANDWrr:i32 GPR32:i32:$Rn, GPR32:i32:$Rm)
    I.setDesc(TII.get(AArch64::ANDWrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_AND) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR64RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Rm */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR64RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (and:i64 GPR64:i64:$Rn, GPR64:i64:$Rm)  =>  (ANDXrr:i64 GPR64:i64:$Rn, GPR64:i64:$Rm)
    I.setDesc(TII.get(AArch64::ANDXrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasNEONBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_AND) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(8, 8))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(8, 8))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Rm */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(8, 8))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (and:v8i8 V64:v8i8:$Rn, V64:v8i8:$Rm)  =>  (ANDv8i8:v8i8 V64:v8i8:$Rn, V64:v8i8:$Rm)
    I.setDesc(TII.get(AArch64::ANDv8i8));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasNEONBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_AND) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(16, 8))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(16, 8))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Rm */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(16, 8))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (and:v16i8 V128:v16i8:$Rn, V128:v16i8:$Rm)  =>  (ANDv16i8:v16i8 V128:v16i8:$Rn, V128:v16i8:$Rm)
    I.setDesc(TII.get(AArch64::ANDv16i8));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasNEONBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_AND) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* LHS */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* RHS */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(4, 16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (and:v4i16 V64:v4i16:$LHS, V64:v4i16:$RHS)  =>  (ANDv8i8:v4i16 V64:v4i16:$LHS, V64:v4i16:$RHS)
    I.setDesc(TII.get(AArch64::ANDv8i8));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasNEONBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_AND) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(2, 32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* LHS */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(2, 32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* RHS */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(2, 32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (and:v2i32 V64:v2i32:$LHS, V64:v2i32:$RHS)  =>  (ANDv8i8:v2i32 V64:v2i32:$LHS, V64:v2i32:$RHS)
    I.setDesc(TII.get(AArch64::ANDv8i8));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasNEONBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_AND) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* LHS */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* RHS */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (and:v1i64 V64:v1i64:$LHS, V64:v1i64:$RHS)  =>  (ANDv8i8:v1i64 V64:v1i64:$LHS, V64:v1i64:$RHS)
    I.setDesc(TII.get(AArch64::ANDv8i8));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasNEONBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_AND) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* LHS */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* RHS */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (and:v8i16 V128:v8i16:$LHS, V128:v8i16:$RHS)  =>  (ANDv16i8:v8i16 V128:v8i16:$LHS, V128:v8i16:$RHS)
    I.setDesc(TII.get(AArch64::ANDv16i8));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasNEONBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_AND) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* LHS */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* RHS */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (and:v4i32 V128:v4i32:$LHS, V128:v4i32:$RHS)  =>  (ANDv16i8:v4i32 V128:v4i32:$LHS, V128:v4i32:$RHS)
    I.setDesc(TII.get(AArch64::ANDv16i8));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasNEONBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_AND) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* LHS */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* RHS */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (and:v2i64 V128:v2i64:$LHS, V128:v2i64:$RHS)  =>  (ANDv16i8:v2i64 V128:v2i64:$LHS, V128:v2i64:$RHS)
    I.setDesc(TII.get(AArch64::ANDv16i8));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
if (!MI0.getOperand(2).isReg())
  return false;
if (TRI.isPhysicalRegister(MI0.getOperand(2).getReg()))
  return false;
MachineInstr &MI1 = *MRI.getVRegDef(MI0.getOperand(2).getReg());
if (MI1.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_ASHR) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR32RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR32RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(64))) &&
(((MI1.getOpcode() == TargetOpcode::G_ZEXT) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::scalar(64))))) &&
((/* Rm */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR32RegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))))
)))) {
      if (!isObviouslySafeToFold(MI1)) return false;
// (sra:i32 GPR32:i32:$Rn, (zext:i64 GPR32:i32:$Rm))  =>  (ASRVWr:i32 GPR32:i32:$Rn, GPR32:i32:$Rm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(AArch64::ASRVWr));
    MIB.add(MI0.getOperand(0)/*Rd*/);
    MIB.add(MI0.getOperand(1)/*Rn*/);
    MIB.add(MI1.getOperand(1)/*Rm*/);
    for (const auto *FromMI : {&MI0, &MI1, })
      for (const auto &MMO : FromMI->memoperands())
        MIB.addMemOperand(MMO);
    I.eraseFromParent();
    MachineInstr &NewI = *MIB;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
if (!MI0.getOperand(2).isReg())
  return false;
if (TRI.isPhysicalRegister(MI0.getOperand(2).getReg()))
  return false;
MachineInstr &MI1 = *MRI.getVRegDef(MI0.getOperand(2).getReg());
if (MI1.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_ASHR) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR32RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR32RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(64))) &&
(((MI1.getOpcode() == TargetOpcode::G_ANYEXT) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::scalar(64))))) &&
((/* Rm */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR32RegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))))
)))) {
      if (!isObviouslySafeToFold(MI1)) return false;
// (sra:i32 GPR32:i32:$Rn, (anyext:i64 GPR32:i32:$Rm))  =>  (ASRVWr:i32 GPR32:i32:$Rn, GPR32:i32:$Rm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(AArch64::ASRVWr));
    MIB.add(MI0.getOperand(0)/*Rd*/);
    MIB.add(MI0.getOperand(1)/*Rn*/);
    MIB.add(MI1.getOperand(1)/*Rm*/);
    for (const auto *FromMI : {&MI0, &MI1, })
      for (const auto &MMO : FromMI->memoperands())
        MIB.addMemOperand(MMO);
    I.eraseFromParent();
    MachineInstr &NewI = *MIB;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
if (!MI0.getOperand(2).isReg())
  return false;
if (TRI.isPhysicalRegister(MI0.getOperand(2).getReg()))
  return false;
MachineInstr &MI1 = *MRI.getVRegDef(MI0.getOperand(2).getReg());
if (MI1.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_ASHR) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR32RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR32RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(64))) &&
(((MI1.getOpcode() == TargetOpcode::G_SEXT) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::scalar(64))))) &&
((/* Rm */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR32RegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))))
)))) {
      if (!isObviouslySafeToFold(MI1)) return false;
// (sra:i32 GPR32:i32:$Rn, (sext:i64 GPR32:i32:$Rm))  =>  (ASRVWr:i32 GPR32:i32:$Rn, GPR32:i32:$Rm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(AArch64::ASRVWr));
    MIB.add(MI0.getOperand(0)/*Rd*/);
    MIB.add(MI0.getOperand(1)/*Rn*/);
    MIB.add(MI1.getOperand(1)/*Rm*/);
    for (const auto *FromMI : {&MI0, &MI1, })
      for (const auto &MMO : FromMI->memoperands())
        MIB.addMemOperand(MMO);
    I.eraseFromParent();
    MachineInstr &NewI = *MIB;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_ASHR) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR64RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Rm */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR64RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (sra:i64 GPR64:i64:$Rn, GPR64:i64:$Rm)  =>  (ASRVXr:i64 GPR64:i64:$Rn, GPR64:i64:$Rm)
    I.setDesc(TII.get(AArch64::ASRVXr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasFullFP16Bit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FADD) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR16RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR16RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Rm */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR16RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (fadd:f16 FPR16:f16:$Rn, FPR16:f16:$Rm)  =>  (FADDHrr:f16 FPR16:f16:$Rn, FPR16:f16:$Rm)
    I.setDesc(TII.get(AArch64::FADDHrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasFPARMv8Bit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FADD) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR32RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR32RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Rm */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR32RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (fadd:f32 FPR32:f32:$Rn, FPR32:f32:$Rm)  =>  (FADDSrr:f32 FPR32:f32:$Rn, FPR32:f32:$Rm)
    I.setDesc(TII.get(AArch64::FADDSrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasFPARMv8Bit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FADD) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Rm */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (fadd:f64 FPR64:f64:$Rn, FPR64:f64:$Rm)  =>  (FADDDrr:f64 FPR64:f64:$Rn, FPR64:f64:$Rm)
    I.setDesc(TII.get(AArch64::FADDDrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasNEONBit, Feature_HasFullFP16Bit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FADD) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Rm */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(4, 16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (fadd:v4f16 V64:v4f16:$Rn, V64:v4f16:$Rm)  =>  (FADDv4f16:v4f16 V64:v4f16:$Rn, V64:v4f16:$Rm)
    I.setDesc(TII.get(AArch64::FADDv4f16));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasNEONBit, Feature_HasFullFP16Bit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FADD) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Rm */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (fadd:v8f16 V128:v8f16:$Rn, V128:v8f16:$Rm)  =>  (FADDv8f16:v8f16 V128:v8f16:$Rn, V128:v8f16:$Rm)
    I.setDesc(TII.get(AArch64::FADDv8f16));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasNEONBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FADD) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(2, 32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(2, 32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Rm */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(2, 32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (fadd:v2f32 V64:v2f32:$Rn, V64:v2f32:$Rm)  =>  (FADDv2f32:v2f32 V64:v2f32:$Rn, V64:v2f32:$Rm)
    I.setDesc(TII.get(AArch64::FADDv2f32));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasNEONBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FADD) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Rm */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (fadd:v4f32 V128:v4f32:$Rn, V128:v4f32:$Rm)  =>  (FADDv4f32:v4f32 V128:v4f32:$Rn, V128:v4f32:$Rm)
    I.setDesc(TII.get(AArch64::FADDv4f32));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasNEONBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FADD) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Rm */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (fadd:v2f64 V128:v2f64:$Rn, V128:v2f64:$Rm)  =>  (FADDv2f64:v2f64 V128:v2f64:$Rn, V128:v2f64:$Rm)
    I.setDesc(TII.get(AArch64::FADDv2f64));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasFullFP16Bit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FDIV) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR16RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR16RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Rm */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR16RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (fdiv:f16 FPR16:f16:$Rn, FPR16:f16:$Rm)  =>  (FDIVHrr:f16 FPR16:f16:$Rn, FPR16:f16:$Rm)
    I.setDesc(TII.get(AArch64::FDIVHrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasFPARMv8Bit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FDIV) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR32RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR32RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Rm */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR32RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (fdiv:f32 FPR32:f32:$Rn, FPR32:f32:$Rm)  =>  (FDIVSrr:f32 FPR32:f32:$Rn, FPR32:f32:$Rm)
    I.setDesc(TII.get(AArch64::FDIVSrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasFPARMv8Bit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FDIV) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Rm */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (fdiv:f64 FPR64:f64:$Rn, FPR64:f64:$Rm)  =>  (FDIVDrr:f64 FPR64:f64:$Rn, FPR64:f64:$Rm)
    I.setDesc(TII.get(AArch64::FDIVDrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasNEONBit, Feature_HasFullFP16Bit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FDIV) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Rm */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(4, 16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (fdiv:v4f16 V64:v4f16:$Rn, V64:v4f16:$Rm)  =>  (FDIVv4f16:v4f16 V64:v4f16:$Rn, V64:v4f16:$Rm)
    I.setDesc(TII.get(AArch64::FDIVv4f16));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasNEONBit, Feature_HasFullFP16Bit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FDIV) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Rm */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (fdiv:v8f16 V128:v8f16:$Rn, V128:v8f16:$Rm)  =>  (FDIVv8f16:v8f16 V128:v8f16:$Rn, V128:v8f16:$Rm)
    I.setDesc(TII.get(AArch64::FDIVv8f16));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasNEONBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FDIV) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(2, 32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(2, 32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Rm */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(2, 32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (fdiv:v2f32 V64:v2f32:$Rn, V64:v2f32:$Rm)  =>  (FDIVv2f32:v2f32 V64:v2f32:$Rn, V64:v2f32:$Rm)
    I.setDesc(TII.get(AArch64::FDIVv2f32));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasNEONBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FDIV) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Rm */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (fdiv:v4f32 V128:v4f32:$Rn, V128:v4f32:$Rm)  =>  (FDIVv4f32:v4f32 V128:v4f32:$Rn, V128:v4f32:$Rm)
    I.setDesc(TII.get(AArch64::FDIVv4f32));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasNEONBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FDIV) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Rm */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (fdiv:v2f64 V128:v2f64:$Rn, V128:v2f64:$Rm)  =>  (FDIVv2f64:v2f64 V128:v2f64:$Rn, V128:v2f64:$Rm)
    I.setDesc(TII.get(AArch64::FDIVv2f64));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasFullFP16Bit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FMUL) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR16RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR16RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Rm */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR16RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (fmul:f16 FPR16:f16:$Rn, FPR16:f16:$Rm)  =>  (FMULHrr:f16 FPR16:f16:$Rn, FPR16:f16:$Rm)
    I.setDesc(TII.get(AArch64::FMULHrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasFPARMv8Bit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FMUL) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR32RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR32RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Rm */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR32RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (fmul:f32 FPR32:f32:$Rn, FPR32:f32:$Rm)  =>  (FMULSrr:f32 FPR32:f32:$Rn, FPR32:f32:$Rm)
    I.setDesc(TII.get(AArch64::FMULSrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasFPARMv8Bit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FMUL) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Rm */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (fmul:f64 FPR64:f64:$Rn, FPR64:f64:$Rm)  =>  (FMULDrr:f64 FPR64:f64:$Rn, FPR64:f64:$Rm)
    I.setDesc(TII.get(AArch64::FMULDrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasNEONBit, Feature_HasFullFP16Bit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FMUL) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Rm */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(4, 16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (fmul:v4f16 V64:v4f16:$Rn, V64:v4f16:$Rm)  =>  (FMULv4f16:v4f16 V64:v4f16:$Rn, V64:v4f16:$Rm)
    I.setDesc(TII.get(AArch64::FMULv4f16));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasNEONBit, Feature_HasFullFP16Bit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FMUL) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Rm */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (fmul:v8f16 V128:v8f16:$Rn, V128:v8f16:$Rm)  =>  (FMULv8f16:v8f16 V128:v8f16:$Rn, V128:v8f16:$Rm)
    I.setDesc(TII.get(AArch64::FMULv8f16));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasNEONBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FMUL) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(2, 32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(2, 32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Rm */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(2, 32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (fmul:v2f32 V64:v2f32:$Rn, V64:v2f32:$Rm)  =>  (FMULv2f32:v2f32 V64:v2f32:$Rn, V64:v2f32:$Rm)
    I.setDesc(TII.get(AArch64::FMULv2f32));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasNEONBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FMUL) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Rm */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (fmul:v4f32 V128:v4f32:$Rn, V128:v4f32:$Rm)  =>  (FMULv4f32:v4f32 V128:v4f32:$Rn, V128:v4f32:$Rm)
    I.setDesc(TII.get(AArch64::FMULv4f32));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasNEONBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FMUL) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Rm */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (fmul:v2f64 V128:v2f64:$Rn, V128:v2f64:$Rm)  =>  (FMULv2f64:v2f64 V128:v2f64:$Rn, V128:v2f64:$Rm)
    I.setDesc(TII.get(AArch64::FMULv2f64));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasFullFP16Bit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FSUB) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR16RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR16RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Rm */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR16RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (fsub:f16 FPR16:f16:$Rn, FPR16:f16:$Rm)  =>  (FSUBHrr:f16 FPR16:f16:$Rn, FPR16:f16:$Rm)
    I.setDesc(TII.get(AArch64::FSUBHrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasFPARMv8Bit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FSUB) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR32RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR32RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Rm */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR32RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (fsub:f32 FPR32:f32:$Rn, FPR32:f32:$Rm)  =>  (FSUBSrr:f32 FPR32:f32:$Rn, FPR32:f32:$Rm)
    I.setDesc(TII.get(AArch64::FSUBSrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasFPARMv8Bit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FSUB) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Rm */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (fsub:f64 FPR64:f64:$Rn, FPR64:f64:$Rm)  =>  (FSUBDrr:f64 FPR64:f64:$Rn, FPR64:f64:$Rm)
    I.setDesc(TII.get(AArch64::FSUBDrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasNEONBit, Feature_HasFullFP16Bit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FSUB) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Rm */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(4, 16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (fsub:v4f16 V64:v4f16:$Rn, V64:v4f16:$Rm)  =>  (FSUBv4f16:v4f16 V64:v4f16:$Rn, V64:v4f16:$Rm)
    I.setDesc(TII.get(AArch64::FSUBv4f16));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasNEONBit, Feature_HasFullFP16Bit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FSUB) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Rm */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (fsub:v8f16 V128:v8f16:$Rn, V128:v8f16:$Rm)  =>  (FSUBv8f16:v8f16 V128:v8f16:$Rn, V128:v8f16:$Rm)
    I.setDesc(TII.get(AArch64::FSUBv8f16));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasNEONBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FSUB) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(2, 32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(2, 32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Rm */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(2, 32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (fsub:v2f32 V64:v2f32:$Rn, V64:v2f32:$Rm)  =>  (FSUBv2f32:v2f32 V64:v2f32:$Rn, V64:v2f32:$Rm)
    I.setDesc(TII.get(AArch64::FSUBv2f32));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasNEONBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FSUB) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Rm */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (fsub:v4f32 V128:v4f32:$Rn, V128:v4f32:$Rm)  =>  (FSUBv4f32:v4f32 V128:v4f32:$Rn, V128:v4f32:$Rm)
    I.setDesc(TII.get(AArch64::FSUBv4f32));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasNEONBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FSUB) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Rm */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (fsub:v2f64 V128:v2f64:$Rn, V128:v2f64:$Rm)  =>  (FSUBv2f64:v2f64 V128:v2f64:$Rn, V128:v2f64:$Rm)
    I.setDesc(TII.get(AArch64::FSUBv2f64));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
if (!MI0.getOperand(2).isReg())
  return false;
if (TRI.isPhysicalRegister(MI0.getOperand(2).getReg()))
  return false;
MachineInstr &MI1 = *MRI.getVRegDef(MI0.getOperand(2).getReg());
if (MI1.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_LSHR) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR32RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR32RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(64))) &&
(((MI1.getOpcode() == TargetOpcode::G_ZEXT) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::scalar(64))))) &&
((/* Rm */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR32RegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))))
)))) {
      if (!isObviouslySafeToFold(MI1)) return false;
// (srl:i32 GPR32:i32:$Rn, (zext:i64 GPR32:i32:$Rm))  =>  (LSRVWr:i32 GPR32:i32:$Rn, GPR32:i32:$Rm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(AArch64::LSRVWr));
    MIB.add(MI0.getOperand(0)/*Rd*/);
    MIB.add(MI0.getOperand(1)/*Rn*/);
    MIB.add(MI1.getOperand(1)/*Rm*/);
    for (const auto *FromMI : {&MI0, &MI1, })
      for (const auto &MMO : FromMI->memoperands())
        MIB.addMemOperand(MMO);
    I.eraseFromParent();
    MachineInstr &NewI = *MIB;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
if (!MI0.getOperand(2).isReg())
  return false;
if (TRI.isPhysicalRegister(MI0.getOperand(2).getReg()))
  return false;
MachineInstr &MI1 = *MRI.getVRegDef(MI0.getOperand(2).getReg());
if (MI1.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_LSHR) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR32RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR32RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(64))) &&
(((MI1.getOpcode() == TargetOpcode::G_ANYEXT) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::scalar(64))))) &&
((/* Rm */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR32RegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))))
)))) {
      if (!isObviouslySafeToFold(MI1)) return false;
// (srl:i32 GPR32:i32:$Rn, (anyext:i64 GPR32:i32:$Rm))  =>  (LSRVWr:i32 GPR32:i32:$Rn, GPR32:i32:$Rm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(AArch64::LSRVWr));
    MIB.add(MI0.getOperand(0)/*Rd*/);
    MIB.add(MI0.getOperand(1)/*Rn*/);
    MIB.add(MI1.getOperand(1)/*Rm*/);
    for (const auto *FromMI : {&MI0, &MI1, })
      for (const auto &MMO : FromMI->memoperands())
        MIB.addMemOperand(MMO);
    I.eraseFromParent();
    MachineInstr &NewI = *MIB;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
if (!MI0.getOperand(2).isReg())
  return false;
if (TRI.isPhysicalRegister(MI0.getOperand(2).getReg()))
  return false;
MachineInstr &MI1 = *MRI.getVRegDef(MI0.getOperand(2).getReg());
if (MI1.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_LSHR) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR32RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR32RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(64))) &&
(((MI1.getOpcode() == TargetOpcode::G_SEXT) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::scalar(64))))) &&
((/* Rm */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR32RegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))))
)))) {
      if (!isObviouslySafeToFold(MI1)) return false;
// (srl:i32 GPR32:i32:$Rn, (sext:i64 GPR32:i32:$Rm))  =>  (LSRVWr:i32 GPR32:i32:$Rn, GPR32:i32:$Rm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(AArch64::LSRVWr));
    MIB.add(MI0.getOperand(0)/*Rd*/);
    MIB.add(MI0.getOperand(1)/*Rn*/);
    MIB.add(MI1.getOperand(1)/*Rm*/);
    for (const auto *FromMI : {&MI0, &MI1, })
      for (const auto &MMO : FromMI->memoperands())
        MIB.addMemOperand(MMO);
    I.eraseFromParent();
    MachineInstr &NewI = *MIB;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_LSHR) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR64RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Rm */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR64RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (srl:i64 GPR64:i64:$Rn, GPR64:i64:$Rm)  =>  (LSRVXr:i64 GPR64:i64:$Rn, GPR64:i64:$Rm)
    I.setDesc(TII.get(AArch64::LSRVXr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
if (!MI0.getOperand(1).isReg())
  return false;
if (TRI.isPhysicalRegister(MI0.getOperand(1).getReg()))
  return false;
MachineInstr &MI1 = *MRI.getVRegDef(MI0.getOperand(1).getReg());
if (MI1.getNumOperands() < 2)
  return false;
if (!MI0.getOperand(2).isReg())
  return false;
if (TRI.isPhysicalRegister(MI0.getOperand(2).getReg()))
  return false;
MachineInstr &MI2 = *MRI.getVRegDef(MI0.getOperand(2).getReg());
if (MI2.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_MUL) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Operand 1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(64))) &&
(((MI1.getOpcode() == TargetOpcode::G_SEXT) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::scalar(64))))) &&
((/* Rn */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR32RegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))))
))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(64))) &&
(((MI2.getOpcode() == TargetOpcode::G_SEXT) &&
((/* Operand 0 */ (MRI.getType(MI2.getOperand(0).getReg()) == (LLT::scalar(64))))) &&
((/* Rm */ (MRI.getType(MI2.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR32RegClass) == RBI.getRegBank(MI2.getOperand(1).getReg(), MRI, TRI))))))
)))) {
      if (!isObviouslySafeToFold(MI1)) return false;
      if (!isObviouslySafeToFold(MI2)) return false;
// (mul:i64 (sext:i64 GPR32:i32:$Rn), (sext:i64 GPR32:i32:$Rm))  =>  (SMADDLrrr:i64 GPR32:i32:$Rn, GPR32:i32:$Rm, XZR:i64)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(AArch64::SMADDLrrr));
    MIB.add(MI0.getOperand(0)/*Rd*/);
    MIB.add(MI1.getOperand(1)/*Rn*/);
    MIB.add(MI2.getOperand(1)/*Rm*/);
    MIB.addReg(AArch64::XZR);
    for (const auto *FromMI : {&MI0, &MI1, &MI2, })
      for (const auto &MMO : FromMI->memoperands())
        MIB.addMemOperand(MMO);
    I.eraseFromParent();
    MachineInstr &NewI = *MIB;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
if (!MI0.getOperand(1).isReg())
  return false;
if (TRI.isPhysicalRegister(MI0.getOperand(1).getReg()))
  return false;
MachineInstr &MI1 = *MRI.getVRegDef(MI0.getOperand(1).getReg());
if (MI1.getNumOperands() < 2)
  return false;
if (!MI0.getOperand(2).isReg())
  return false;
if (TRI.isPhysicalRegister(MI0.getOperand(2).getReg()))
  return false;
MachineInstr &MI2 = *MRI.getVRegDef(MI0.getOperand(2).getReg());
if (MI2.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_MUL) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Operand 1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(64))) &&
(((MI1.getOpcode() == TargetOpcode::G_ZEXT) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::scalar(64))))) &&
((/* Rn */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR32RegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))))
))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(64))) &&
(((MI2.getOpcode() == TargetOpcode::G_ZEXT) &&
((/* Operand 0 */ (MRI.getType(MI2.getOperand(0).getReg()) == (LLT::scalar(64))))) &&
((/* Rm */ (MRI.getType(MI2.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR32RegClass) == RBI.getRegBank(MI2.getOperand(1).getReg(), MRI, TRI))))))
)))) {
      if (!isObviouslySafeToFold(MI1)) return false;
      if (!isObviouslySafeToFold(MI2)) return false;
// (mul:i64 (zext:i64 GPR32:i32:$Rn), (zext:i64 GPR32:i32:$Rm))  =>  (UMADDLrrr:i64 GPR32:i32:$Rn, GPR32:i32:$Rm, XZR:i64)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(AArch64::UMADDLrrr));
    MIB.add(MI0.getOperand(0)/*Rd*/);
    MIB.add(MI1.getOperand(1)/*Rn*/);
    MIB.add(MI2.getOperand(1)/*Rm*/);
    MIB.addReg(AArch64::XZR);
    for (const auto *FromMI : {&MI0, &MI1, &MI2, })
      for (const auto &MMO : FromMI->memoperands())
        MIB.addMemOperand(MMO);
    I.eraseFromParent();
    MachineInstr &NewI = *MIB;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
if (!MI0.getOperand(1).isReg())
  return false;
if (TRI.isPhysicalRegister(MI0.getOperand(1).getReg()))
  return false;
MachineInstr &MI1 = *MRI.getVRegDef(MI0.getOperand(1).getReg());
if (MI1.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_MUL) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR32RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Operand 1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(32))) &&
(((MI1.getOpcode() == TargetOpcode::G_SUB) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::scalar(32))))) &&
((/* Operand 1 */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::scalar(32))) &&
(isOperandImmEqual(MI1.getOperand(1), 0, MRI)))) &&
((/* Rn */ (MRI.getType(MI1.getOperand(2).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR32RegClass) == RBI.getRegBank(MI1.getOperand(2).getReg(), MRI, TRI))))))
))) &&
((/* Rm */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR32RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
      if (!isObviouslySafeToFold(MI1)) return false;
// (mul:i32 (sub:i32 0:i32, GPR32:i32:$Rn), GPR32:i32:$Rm)  =>  (MSUBWrrr:i32 GPR32:i32:$Rn, GPR32:i32:$Rm, WZR:i32)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(AArch64::MSUBWrrr));
    MIB.add(MI0.getOperand(0)/*Rd*/);
    MIB.add(MI1.getOperand(2)/*Rn*/);
    MIB.add(MI0.getOperand(2)/*Rm*/);
    MIB.addReg(AArch64::WZR);
    for (const auto *FromMI : {&MI0, &MI1, })
      for (const auto &MMO : FromMI->memoperands())
        MIB.addMemOperand(MMO);
    I.eraseFromParent();
    MachineInstr &NewI = *MIB;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
if (!MI0.getOperand(1).isReg())
  return false;
if (TRI.isPhysicalRegister(MI0.getOperand(1).getReg()))
  return false;
MachineInstr &MI1 = *MRI.getVRegDef(MI0.getOperand(1).getReg());
if (MI1.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_MUL) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Operand 1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(64))) &&
(((MI1.getOpcode() == TargetOpcode::G_SUB) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::scalar(64))))) &&
((/* Operand 1 */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::scalar(64))) &&
(isOperandImmEqual(MI1.getOperand(1), 0, MRI)))) &&
((/* Rn */ (MRI.getType(MI1.getOperand(2).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR64RegClass) == RBI.getRegBank(MI1.getOperand(2).getReg(), MRI, TRI))))))
))) &&
((/* Rm */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR64RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
      if (!isObviouslySafeToFold(MI1)) return false;
// (mul:i64 (sub:i64 0:i64, GPR64:i64:$Rn), GPR64:i64:$Rm)  =>  (MSUBXrrr:i64 GPR64:i64:$Rn, GPR64:i64:$Rm, XZR:i64)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(AArch64::MSUBXrrr));
    MIB.add(MI0.getOperand(0)/*Rd*/);
    MIB.add(MI1.getOperand(2)/*Rn*/);
    MIB.add(MI0.getOperand(2)/*Rm*/);
    MIB.addReg(AArch64::XZR);
    for (const auto *FromMI : {&MI0, &MI1, })
      for (const auto &MMO : FromMI->memoperands())
        MIB.addMemOperand(MMO);
    I.eraseFromParent();
    MachineInstr &NewI = *MIB;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
if (!MI0.getOperand(2).isReg())
  return false;
if (TRI.isPhysicalRegister(MI0.getOperand(2).getReg()))
  return false;
MachineInstr &MI1 = *MRI.getVRegDef(MI0.getOperand(2).getReg());
if (MI1.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_MUL) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR32RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rm */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR32RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(32))) &&
(((MI1.getOpcode() == TargetOpcode::G_SUB) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::scalar(32))))) &&
((/* Operand 1 */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::scalar(32))) &&
(isOperandImmEqual(MI1.getOperand(1), 0, MRI)))) &&
((/* Rn */ (MRI.getType(MI1.getOperand(2).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR32RegClass) == RBI.getRegBank(MI1.getOperand(2).getReg(), MRI, TRI))))))
)))) {
      if (!isObviouslySafeToFold(MI1)) return false;
// (mul:i32 GPR32:i32:$Rm, (sub:i32 0:i32, GPR32:i32:$Rn))  =>  (MSUBWrrr:i32 GPR32:i32:$Rn, GPR32:i32:$Rm, WZR:i32)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(AArch64::MSUBWrrr));
    MIB.add(MI0.getOperand(0)/*Rd*/);
    MIB.add(MI1.getOperand(2)/*Rn*/);
    MIB.add(MI0.getOperand(1)/*Rm*/);
    MIB.addReg(AArch64::WZR);
    for (const auto *FromMI : {&MI0, &MI1, })
      for (const auto &MMO : FromMI->memoperands())
        MIB.addMemOperand(MMO);
    I.eraseFromParent();
    MachineInstr &NewI = *MIB;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
if (!MI0.getOperand(2).isReg())
  return false;
if (TRI.isPhysicalRegister(MI0.getOperand(2).getReg()))
  return false;
MachineInstr &MI1 = *MRI.getVRegDef(MI0.getOperand(2).getReg());
if (MI1.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_MUL) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rm */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR64RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(64))) &&
(((MI1.getOpcode() == TargetOpcode::G_SUB) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::scalar(64))))) &&
((/* Operand 1 */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::scalar(64))) &&
(isOperandImmEqual(MI1.getOperand(1), 0, MRI)))) &&
((/* Rn */ (MRI.getType(MI1.getOperand(2).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR64RegClass) == RBI.getRegBank(MI1.getOperand(2).getReg(), MRI, TRI))))))
)))) {
      if (!isObviouslySafeToFold(MI1)) return false;
// (mul:i64 GPR64:i64:$Rm, (sub:i64 0:i64, GPR64:i64:$Rn))  =>  (MSUBXrrr:i64 GPR64:i64:$Rn, GPR64:i64:$Rm, XZR:i64)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(AArch64::MSUBXrrr));
    MIB.add(MI0.getOperand(0)/*Rd*/);
    MIB.add(MI1.getOperand(2)/*Rn*/);
    MIB.add(MI0.getOperand(1)/*Rm*/);
    MIB.addReg(AArch64::XZR);
    for (const auto *FromMI : {&MI0, &MI1, })
      for (const auto &MMO : FromMI->memoperands())
        MIB.addMemOperand(MMO);
    I.eraseFromParent();
    MachineInstr &NewI = *MIB;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasNEONBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_MUL) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(8, 8))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(8, 8))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Rm */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(8, 8))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (mul:v8i8 V64:v8i8:$Rn, V64:v8i8:$Rm)  =>  (MULv8i8:v8i8 V64:v8i8:$Rn, V64:v8i8:$Rm)
    I.setDesc(TII.get(AArch64::MULv8i8));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasNEONBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_MUL) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(16, 8))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(16, 8))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Rm */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(16, 8))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (mul:v16i8 V128:v16i8:$Rn, V128:v16i8:$Rm)  =>  (MULv16i8:v16i8 V128:v16i8:$Rn, V128:v16i8:$Rm)
    I.setDesc(TII.get(AArch64::MULv16i8));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasNEONBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_MUL) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Rm */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(4, 16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (mul:v4i16 V64:v4i16:$Rn, V64:v4i16:$Rm)  =>  (MULv4i16:v4i16 V64:v4i16:$Rn, V64:v4i16:$Rm)
    I.setDesc(TII.get(AArch64::MULv4i16));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasNEONBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_MUL) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Rm */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (mul:v8i16 V128:v8i16:$Rn, V128:v8i16:$Rm)  =>  (MULv8i16:v8i16 V128:v8i16:$Rn, V128:v8i16:$Rm)
    I.setDesc(TII.get(AArch64::MULv8i16));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasNEONBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_MUL) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(2, 32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(2, 32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Rm */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(2, 32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (mul:v2i32 V64:v2i32:$Rn, V64:v2i32:$Rm)  =>  (MULv2i32:v2i32 V64:v2i32:$Rn, V64:v2i32:$Rm)
    I.setDesc(TII.get(AArch64::MULv2i32));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasNEONBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_MUL) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Rm */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (mul:v4i32 V128:v4i32:$Rn, V128:v4i32:$Rm)  =>  (MULv4i32:v4i32 V128:v4i32:$Rn, V128:v4i32:$Rm)
    I.setDesc(TII.get(AArch64::MULv4i32));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_MUL) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR32RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR32RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Rm */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR32RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (mul:i32 GPR32:i32:$Rn, GPR32:i32:$Rm)  =>  (MADDWrrr:i32 GPR32:i32:$Rn, GPR32:i32:$Rm, WZR:i32)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(AArch64::MADDWrrr));
    MIB.add(MI0.getOperand(0)/*Rd*/);
    MIB.add(MI0.getOperand(1)/*Rn*/);
    MIB.add(MI0.getOperand(2)/*Rm*/);
    MIB.addReg(AArch64::WZR);
    for (const auto *FromMI : {&MI0, })
      for (const auto &MMO : FromMI->memoperands())
        MIB.addMemOperand(MMO);
    I.eraseFromParent();
    MachineInstr &NewI = *MIB;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_MUL) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR64RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Rm */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR64RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (mul:i64 GPR64:i64:$Rn, GPR64:i64:$Rm)  =>  (MADDXrrr:i64 GPR64:i64:$Rn, GPR64:i64:$Rm, XZR:i64)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(AArch64::MADDXrrr));
    MIB.add(MI0.getOperand(0)/*Rd*/);
    MIB.add(MI0.getOperand(1)/*Rn*/);
    MIB.add(MI0.getOperand(2)/*Rm*/);
    MIB.addReg(AArch64::XZR);
    for (const auto *FromMI : {&MI0, })
      for (const auto &MMO : FromMI->memoperands())
        MIB.addMemOperand(MMO);
    I.eraseFromParent();
    MachineInstr &NewI = *MIB;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
if (!MI0.getOperand(1).isReg())
  return false;
if (TRI.isPhysicalRegister(MI0.getOperand(1).getReg()))
  return false;
MachineInstr &MI1 = *MRI.getVRegDef(MI0.getOperand(1).getReg());
if (MI1.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_OR) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR32RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Operand 1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(32))) &&
(((MI1.getOpcode() == TargetOpcode::G_XOR) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::scalar(32))))) &&
((/* Rm */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR32RegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI1.getOperand(2).getReg()) == (LLT::scalar(32))) &&
(isOperandImmEqual(MI1.getOperand(2), -1, MRI)))))
))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR32RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
      if (!isObviouslySafeToFold(MI1)) return false;
// (or:i32 (xor:i32 GPR32:i32:$Rm, -1:i32), GPR32:i32:$Rn)  =>  (ORNWrr:i32 GPR32:i32:$Rn, GPR32:i32:$Rm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(AArch64::ORNWrr));
    MIB.add(MI0.getOperand(0)/*Rd*/);
    MIB.add(MI0.getOperand(2)/*Rn*/);
    MIB.add(MI1.getOperand(1)/*Rm*/);
    for (const auto *FromMI : {&MI0, &MI1, })
      for (const auto &MMO : FromMI->memoperands())
        MIB.addMemOperand(MMO);
    I.eraseFromParent();
    MachineInstr &NewI = *MIB;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
if (!MI0.getOperand(1).isReg())
  return false;
if (TRI.isPhysicalRegister(MI0.getOperand(1).getReg()))
  return false;
MachineInstr &MI1 = *MRI.getVRegDef(MI0.getOperand(1).getReg());
if (MI1.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_OR) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Operand 1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(64))) &&
(((MI1.getOpcode() == TargetOpcode::G_XOR) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::scalar(64))))) &&
((/* Rm */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR64RegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI1.getOperand(2).getReg()) == (LLT::scalar(64))) &&
(isOperandImmEqual(MI1.getOperand(2), -1, MRI)))))
))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR64RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
      if (!isObviouslySafeToFold(MI1)) return false;
// (or:i64 (xor:i64 GPR64:i64:$Rm, -1:i64), GPR64:i64:$Rn)  =>  (ORNXrr:i64 GPR64:i64:$Rn, GPR64:i64:$Rm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(AArch64::ORNXrr));
    MIB.add(MI0.getOperand(0)/*Rd*/);
    MIB.add(MI0.getOperand(2)/*Rn*/);
    MIB.add(MI1.getOperand(1)/*Rm*/);
    for (const auto *FromMI : {&MI0, &MI1, })
      for (const auto &MMO : FromMI->memoperands())
        MIB.addMemOperand(MMO);
    I.eraseFromParent();
    MachineInstr &NewI = *MIB;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
if (!MI0.getOperand(2).isReg())
  return false;
if (TRI.isPhysicalRegister(MI0.getOperand(2).getReg()))
  return false;
MachineInstr &MI1 = *MRI.getVRegDef(MI0.getOperand(2).getReg());
if (MI1.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_OR) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR32RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR32RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(32))) &&
(((MI1.getOpcode() == TargetOpcode::G_XOR) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::scalar(32))))) &&
((/* Rm */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR32RegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI1.getOperand(2).getReg()) == (LLT::scalar(32))) &&
(isOperandImmEqual(MI1.getOperand(2), -1, MRI)))))
)))) {
      if (!isObviouslySafeToFold(MI1)) return false;
// (or:i32 GPR32:i32:$Rn, (xor:i32 GPR32:i32:$Rm, -1:i32))  =>  (ORNWrr:i32 GPR32:i32:$Rn, GPR32:i32:$Rm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(AArch64::ORNWrr));
    MIB.add(MI0.getOperand(0)/*Rd*/);
    MIB.add(MI0.getOperand(1)/*Rn*/);
    MIB.add(MI1.getOperand(1)/*Rm*/);
    for (const auto *FromMI : {&MI0, &MI1, })
      for (const auto &MMO : FromMI->memoperands())
        MIB.addMemOperand(MMO);
    I.eraseFromParent();
    MachineInstr &NewI = *MIB;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
if (!MI0.getOperand(2).isReg())
  return false;
if (TRI.isPhysicalRegister(MI0.getOperand(2).getReg()))
  return false;
MachineInstr &MI1 = *MRI.getVRegDef(MI0.getOperand(2).getReg());
if (MI1.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_OR) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR64RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(64))) &&
(((MI1.getOpcode() == TargetOpcode::G_XOR) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::scalar(64))))) &&
((/* Rm */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR64RegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI1.getOperand(2).getReg()) == (LLT::scalar(64))) &&
(isOperandImmEqual(MI1.getOperand(2), -1, MRI)))))
)))) {
      if (!isObviouslySafeToFold(MI1)) return false;
// (or:i64 GPR64:i64:$Rn, (xor:i64 GPR64:i64:$Rm, -1:i64))  =>  (ORNXrr:i64 GPR64:i64:$Rn, GPR64:i64:$Rm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(AArch64::ORNXrr));
    MIB.add(MI0.getOperand(0)/*Rd*/);
    MIB.add(MI0.getOperand(1)/*Rn*/);
    MIB.add(MI1.getOperand(1)/*Rm*/);
    for (const auto *FromMI : {&MI0, &MI1, })
      for (const auto &MMO : FromMI->memoperands())
        MIB.addMemOperand(MMO);
    I.eraseFromParent();
    MachineInstr &NewI = *MIB;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_OR) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR32RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR32RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Rm */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR32RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (or:i32 GPR32:i32:$Rn, GPR32:i32:$Rm)  =>  (ORRWrr:i32 GPR32:i32:$Rn, GPR32:i32:$Rm)
    I.setDesc(TII.get(AArch64::ORRWrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_OR) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR64RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Rm */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR64RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (or:i64 GPR64:i64:$Rn, GPR64:i64:$Rm)  =>  (ORRXrr:i64 GPR64:i64:$Rn, GPR64:i64:$Rm)
    I.setDesc(TII.get(AArch64::ORRXrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasNEONBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_OR) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(8, 8))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(8, 8))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Rm */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(8, 8))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (or:v8i8 V64:v8i8:$Rn, V64:v8i8:$Rm)  =>  (ORRv8i8:v8i8 V64:v8i8:$Rn, V64:v8i8:$Rm)
    I.setDesc(TII.get(AArch64::ORRv8i8));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasNEONBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_OR) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(16, 8))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(16, 8))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Rm */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(16, 8))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (or:v16i8 V128:v16i8:$Rn, V128:v16i8:$Rm)  =>  (ORRv16i8:v16i8 V128:v16i8:$Rn, V128:v16i8:$Rm)
    I.setDesc(TII.get(AArch64::ORRv16i8));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasNEONBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_OR) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* LHS */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* RHS */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(4, 16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (or:v4i16 V64:v4i16:$LHS, V64:v4i16:$RHS)  =>  (ORRv8i8:v4i16 V64:v4i16:$LHS, V64:v4i16:$RHS)
    I.setDesc(TII.get(AArch64::ORRv8i8));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasNEONBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_OR) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(2, 32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* LHS */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(2, 32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* RHS */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(2, 32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (or:v2i32 V64:v2i32:$LHS, V64:v2i32:$RHS)  =>  (ORRv8i8:v2i32 V64:v2i32:$LHS, V64:v2i32:$RHS)
    I.setDesc(TII.get(AArch64::ORRv8i8));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasNEONBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_OR) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* LHS */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* RHS */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (or:v1i64 V64:v1i64:$LHS, V64:v1i64:$RHS)  =>  (ORRv8i8:v1i64 V64:v1i64:$LHS, V64:v1i64:$RHS)
    I.setDesc(TII.get(AArch64::ORRv8i8));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasNEONBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_OR) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* LHS */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* RHS */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (or:v8i16 V128:v8i16:$LHS, V128:v8i16:$RHS)  =>  (ORRv16i8:v8i16 V128:v8i16:$LHS, V128:v8i16:$RHS)
    I.setDesc(TII.get(AArch64::ORRv16i8));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasNEONBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_OR) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* LHS */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* RHS */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (or:v4i32 V128:v4i32:$LHS, V128:v4i32:$RHS)  =>  (ORRv16i8:v4i32 V128:v4i32:$LHS, V128:v4i32:$RHS)
    I.setDesc(TII.get(AArch64::ORRv16i8));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasNEONBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_OR) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* LHS */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* RHS */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (or:v2i64 V128:v2i64:$LHS, V128:v2i64:$RHS)  =>  (ORRv16i8:v2i64 V128:v2i64:$LHS, V128:v2i64:$RHS)
    I.setDesc(TII.get(AArch64::ORRv16i8));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_SDIV) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR32RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR32RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Rm */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR32RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (sdiv:i32 GPR32:i32:$Rn, GPR32:i32:$Rm)  =>  (SDIVWr:i32 GPR32:i32:$Rn, GPR32:i32:$Rm)
    I.setDesc(TII.get(AArch64::SDIVWr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_SDIV) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR64RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Rm */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR64RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (sdiv:i64 GPR64:i64:$Rn, GPR64:i64:$Rm)  =>  (SDIVXr:i64 GPR64:i64:$Rn, GPR64:i64:$Rm)
    I.setDesc(TII.get(AArch64::SDIVXr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
if (!MI0.getOperand(2).isReg())
  return false;
if (TRI.isPhysicalRegister(MI0.getOperand(2).getReg()))
  return false;
MachineInstr &MI1 = *MRI.getVRegDef(MI0.getOperand(2).getReg());
if (MI1.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_SHL) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR32RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR32RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(64))) &&
(((MI1.getOpcode() == TargetOpcode::G_ZEXT) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::scalar(64))))) &&
((/* Rm */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR32RegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))))
)))) {
      if (!isObviouslySafeToFold(MI1)) return false;
// (shl:i32 GPR32:i32:$Rn, (zext:i64 GPR32:i32:$Rm))  =>  (LSLVWr:i32 GPR32:i32:$Rn, GPR32:i32:$Rm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(AArch64::LSLVWr));
    MIB.add(MI0.getOperand(0)/*Rd*/);
    MIB.add(MI0.getOperand(1)/*Rn*/);
    MIB.add(MI1.getOperand(1)/*Rm*/);
    for (const auto *FromMI : {&MI0, &MI1, })
      for (const auto &MMO : FromMI->memoperands())
        MIB.addMemOperand(MMO);
    I.eraseFromParent();
    MachineInstr &NewI = *MIB;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
if (!MI0.getOperand(2).isReg())
  return false;
if (TRI.isPhysicalRegister(MI0.getOperand(2).getReg()))
  return false;
MachineInstr &MI1 = *MRI.getVRegDef(MI0.getOperand(2).getReg());
if (MI1.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_SHL) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR32RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR32RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(64))) &&
(((MI1.getOpcode() == TargetOpcode::G_ANYEXT) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::scalar(64))))) &&
((/* Rm */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR32RegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))))
)))) {
      if (!isObviouslySafeToFold(MI1)) return false;
// (shl:i32 GPR32:i32:$Rn, (anyext:i64 GPR32:i32:$Rm))  =>  (LSLVWr:i32 GPR32:i32:$Rn, GPR32:i32:$Rm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(AArch64::LSLVWr));
    MIB.add(MI0.getOperand(0)/*Rd*/);
    MIB.add(MI0.getOperand(1)/*Rn*/);
    MIB.add(MI1.getOperand(1)/*Rm*/);
    for (const auto *FromMI : {&MI0, &MI1, })
      for (const auto &MMO : FromMI->memoperands())
        MIB.addMemOperand(MMO);
    I.eraseFromParent();
    MachineInstr &NewI = *MIB;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
if (!MI0.getOperand(2).isReg())
  return false;
if (TRI.isPhysicalRegister(MI0.getOperand(2).getReg()))
  return false;
MachineInstr &MI1 = *MRI.getVRegDef(MI0.getOperand(2).getReg());
if (MI1.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_SHL) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR32RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR32RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(64))) &&
(((MI1.getOpcode() == TargetOpcode::G_SEXT) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::scalar(64))))) &&
((/* Rm */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR32RegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))))
)))) {
      if (!isObviouslySafeToFold(MI1)) return false;
// (shl:i32 GPR32:i32:$Rn, (sext:i64 GPR32:i32:$Rm))  =>  (LSLVWr:i32 GPR32:i32:$Rn, GPR32:i32:$Rm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(AArch64::LSLVWr));
    MIB.add(MI0.getOperand(0)/*Rd*/);
    MIB.add(MI0.getOperand(1)/*Rn*/);
    MIB.add(MI1.getOperand(1)/*Rm*/);
    for (const auto *FromMI : {&MI0, &MI1, })
      for (const auto &MMO : FromMI->memoperands())
        MIB.addMemOperand(MMO);
    I.eraseFromParent();
    MachineInstr &NewI = *MIB;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_SHL) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR64RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Rm */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR64RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (shl:i64 GPR64:i64:$Rn, GPR64:i64:$Rm)  =>  (LSLVXr:i64 GPR64:i64:$Rn, GPR64:i64:$Rm)
    I.setDesc(TII.get(AArch64::LSLVXr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasNEONBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
if (!MI0.getOperand(1).isReg())
  return false;
if (TRI.isPhysicalRegister(MI0.getOperand(1).getReg()))
  return false;
MachineInstr &MI1 = *MRI.getVRegDef(MI0.getOperand(1).getReg());
if (MI1.getNumOperands() < 2)
  return false;
if (!MI0.getOperand(2).isReg())
  return false;
if (TRI.isPhysicalRegister(MI0.getOperand(2).getReg()))
  return false;
MachineInstr &MI2 = *MRI.getVRegDef(MI0.getOperand(2).getReg());
if (MI2.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_SUB) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Operand 1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(8, 16))) &&
(((MI1.getOpcode() == TargetOpcode::G_SEXT) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::vector(8, 16))))) &&
((/* Rn */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::vector(8, 8))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))))
))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(8, 16))) &&
(((MI2.getOpcode() == TargetOpcode::G_SEXT) &&
((/* Operand 0 */ (MRI.getType(MI2.getOperand(0).getReg()) == (LLT::vector(8, 16))))) &&
((/* Rm */ (MRI.getType(MI2.getOperand(1).getReg()) == (LLT::vector(8, 8))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI2.getOperand(1).getReg(), MRI, TRI))))))
)))) {
      if (!isObviouslySafeToFold(MI1)) return false;
      if (!isObviouslySafeToFold(MI2)) return false;
// (sub:v8i16 (sext:v8i16 V64:v8i8:$Rn), (sext:v8i16 V64:v8i8:$Rm))  =>  (SSUBLv8i8_v8i16:v8i16 V64:v8i8:$Rn, V64:v8i8:$Rm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(AArch64::SSUBLv8i8_v8i16));
    MIB.add(MI0.getOperand(0)/*Rd*/);
    MIB.add(MI1.getOperand(1)/*Rn*/);
    MIB.add(MI2.getOperand(1)/*Rm*/);
    for (const auto *FromMI : {&MI0, &MI1, &MI2, })
      for (const auto &MMO : FromMI->memoperands())
        MIB.addMemOperand(MMO);
    I.eraseFromParent();
    MachineInstr &NewI = *MIB;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasNEONBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
if (!MI0.getOperand(1).isReg())
  return false;
if (TRI.isPhysicalRegister(MI0.getOperand(1).getReg()))
  return false;
MachineInstr &MI1 = *MRI.getVRegDef(MI0.getOperand(1).getReg());
if (MI1.getNumOperands() < 2)
  return false;
if (!MI0.getOperand(2).isReg())
  return false;
if (TRI.isPhysicalRegister(MI0.getOperand(2).getReg()))
  return false;
MachineInstr &MI2 = *MRI.getVRegDef(MI0.getOperand(2).getReg());
if (MI2.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_SUB) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Operand 1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 32))) &&
(((MI1.getOpcode() == TargetOpcode::G_SEXT) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::vector(4, 32))))) &&
((/* Rn */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::vector(4, 16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))))
))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(4, 32))) &&
(((MI2.getOpcode() == TargetOpcode::G_SEXT) &&
((/* Operand 0 */ (MRI.getType(MI2.getOperand(0).getReg()) == (LLT::vector(4, 32))))) &&
((/* Rm */ (MRI.getType(MI2.getOperand(1).getReg()) == (LLT::vector(4, 16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI2.getOperand(1).getReg(), MRI, TRI))))))
)))) {
      if (!isObviouslySafeToFold(MI1)) return false;
      if (!isObviouslySafeToFold(MI2)) return false;
// (sub:v4i32 (sext:v4i32 V64:v4i16:$Rn), (sext:v4i32 V64:v4i16:$Rm))  =>  (SSUBLv4i16_v4i32:v4i32 V64:v4i16:$Rn, V64:v4i16:$Rm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(AArch64::SSUBLv4i16_v4i32));
    MIB.add(MI0.getOperand(0)/*Rd*/);
    MIB.add(MI1.getOperand(1)/*Rn*/);
    MIB.add(MI2.getOperand(1)/*Rm*/);
    for (const auto *FromMI : {&MI0, &MI1, &MI2, })
      for (const auto &MMO : FromMI->memoperands())
        MIB.addMemOperand(MMO);
    I.eraseFromParent();
    MachineInstr &NewI = *MIB;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasNEONBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
if (!MI0.getOperand(1).isReg())
  return false;
if (TRI.isPhysicalRegister(MI0.getOperand(1).getReg()))
  return false;
MachineInstr &MI1 = *MRI.getVRegDef(MI0.getOperand(1).getReg());
if (MI1.getNumOperands() < 2)
  return false;
if (!MI0.getOperand(2).isReg())
  return false;
if (TRI.isPhysicalRegister(MI0.getOperand(2).getReg()))
  return false;
MachineInstr &MI2 = *MRI.getVRegDef(MI0.getOperand(2).getReg());
if (MI2.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_SUB) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Operand 1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(2, 64))) &&
(((MI1.getOpcode() == TargetOpcode::G_SEXT) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::vector(2, 64))))) &&
((/* Rn */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::vector(2, 32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))))
))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(2, 64))) &&
(((MI2.getOpcode() == TargetOpcode::G_SEXT) &&
((/* Operand 0 */ (MRI.getType(MI2.getOperand(0).getReg()) == (LLT::vector(2, 64))))) &&
((/* Rm */ (MRI.getType(MI2.getOperand(1).getReg()) == (LLT::vector(2, 32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI2.getOperand(1).getReg(), MRI, TRI))))))
)))) {
      if (!isObviouslySafeToFold(MI1)) return false;
      if (!isObviouslySafeToFold(MI2)) return false;
// (sub:v2i64 (sext:v2i64 V64:v2i32:$Rn), (sext:v2i64 V64:v2i32:$Rm))  =>  (SSUBLv2i32_v2i64:v2i64 V64:v2i32:$Rn, V64:v2i32:$Rm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(AArch64::SSUBLv2i32_v2i64));
    MIB.add(MI0.getOperand(0)/*Rd*/);
    MIB.add(MI1.getOperand(1)/*Rn*/);
    MIB.add(MI2.getOperand(1)/*Rm*/);
    for (const auto *FromMI : {&MI0, &MI1, &MI2, })
      for (const auto &MMO : FromMI->memoperands())
        MIB.addMemOperand(MMO);
    I.eraseFromParent();
    MachineInstr &NewI = *MIB;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasNEONBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
if (!MI0.getOperand(1).isReg())
  return false;
if (TRI.isPhysicalRegister(MI0.getOperand(1).getReg()))
  return false;
MachineInstr &MI1 = *MRI.getVRegDef(MI0.getOperand(1).getReg());
if (MI1.getNumOperands() < 2)
  return false;
if (!MI0.getOperand(2).isReg())
  return false;
if (TRI.isPhysicalRegister(MI0.getOperand(2).getReg()))
  return false;
MachineInstr &MI2 = *MRI.getVRegDef(MI0.getOperand(2).getReg());
if (MI2.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_SUB) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Operand 1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(8, 16))) &&
(((MI1.getOpcode() == TargetOpcode::G_ZEXT) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::vector(8, 16))))) &&
((/* Rn */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::vector(8, 8))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))))
))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(8, 16))) &&
(((MI2.getOpcode() == TargetOpcode::G_ZEXT) &&
((/* Operand 0 */ (MRI.getType(MI2.getOperand(0).getReg()) == (LLT::vector(8, 16))))) &&
((/* Rm */ (MRI.getType(MI2.getOperand(1).getReg()) == (LLT::vector(8, 8))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI2.getOperand(1).getReg(), MRI, TRI))))))
)))) {
      if (!isObviouslySafeToFold(MI1)) return false;
      if (!isObviouslySafeToFold(MI2)) return false;
// (sub:v8i16 (zext:v8i16 V64:v8i8:$Rn), (zext:v8i16 V64:v8i8:$Rm))  =>  (USUBLv8i8_v8i16:v8i16 V64:v8i8:$Rn, V64:v8i8:$Rm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(AArch64::USUBLv8i8_v8i16));
    MIB.add(MI0.getOperand(0)/*Rd*/);
    MIB.add(MI1.getOperand(1)/*Rn*/);
    MIB.add(MI2.getOperand(1)/*Rm*/);
    for (const auto *FromMI : {&MI0, &MI1, &MI2, })
      for (const auto &MMO : FromMI->memoperands())
        MIB.addMemOperand(MMO);
    I.eraseFromParent();
    MachineInstr &NewI = *MIB;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasNEONBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
if (!MI0.getOperand(1).isReg())
  return false;
if (TRI.isPhysicalRegister(MI0.getOperand(1).getReg()))
  return false;
MachineInstr &MI1 = *MRI.getVRegDef(MI0.getOperand(1).getReg());
if (MI1.getNumOperands() < 2)
  return false;
if (!MI0.getOperand(2).isReg())
  return false;
if (TRI.isPhysicalRegister(MI0.getOperand(2).getReg()))
  return false;
MachineInstr &MI2 = *MRI.getVRegDef(MI0.getOperand(2).getReg());
if (MI2.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_SUB) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Operand 1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 32))) &&
(((MI1.getOpcode() == TargetOpcode::G_ZEXT) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::vector(4, 32))))) &&
((/* Rn */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::vector(4, 16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))))
))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(4, 32))) &&
(((MI2.getOpcode() == TargetOpcode::G_ZEXT) &&
((/* Operand 0 */ (MRI.getType(MI2.getOperand(0).getReg()) == (LLT::vector(4, 32))))) &&
((/* Rm */ (MRI.getType(MI2.getOperand(1).getReg()) == (LLT::vector(4, 16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI2.getOperand(1).getReg(), MRI, TRI))))))
)))) {
      if (!isObviouslySafeToFold(MI1)) return false;
      if (!isObviouslySafeToFold(MI2)) return false;
// (sub:v4i32 (zext:v4i32 V64:v4i16:$Rn), (zext:v4i32 V64:v4i16:$Rm))  =>  (USUBLv4i16_v4i32:v4i32 V64:v4i16:$Rn, V64:v4i16:$Rm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(AArch64::USUBLv4i16_v4i32));
    MIB.add(MI0.getOperand(0)/*Rd*/);
    MIB.add(MI1.getOperand(1)/*Rn*/);
    MIB.add(MI2.getOperand(1)/*Rm*/);
    for (const auto *FromMI : {&MI0, &MI1, &MI2, })
      for (const auto &MMO : FromMI->memoperands())
        MIB.addMemOperand(MMO);
    I.eraseFromParent();
    MachineInstr &NewI = *MIB;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasNEONBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
if (!MI0.getOperand(1).isReg())
  return false;
if (TRI.isPhysicalRegister(MI0.getOperand(1).getReg()))
  return false;
MachineInstr &MI1 = *MRI.getVRegDef(MI0.getOperand(1).getReg());
if (MI1.getNumOperands() < 2)
  return false;
if (!MI0.getOperand(2).isReg())
  return false;
if (TRI.isPhysicalRegister(MI0.getOperand(2).getReg()))
  return false;
MachineInstr &MI2 = *MRI.getVRegDef(MI0.getOperand(2).getReg());
if (MI2.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_SUB) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Operand 1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(2, 64))) &&
(((MI1.getOpcode() == TargetOpcode::G_ZEXT) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::vector(2, 64))))) &&
((/* Rn */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::vector(2, 32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))))
))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(2, 64))) &&
(((MI2.getOpcode() == TargetOpcode::G_ZEXT) &&
((/* Operand 0 */ (MRI.getType(MI2.getOperand(0).getReg()) == (LLT::vector(2, 64))))) &&
((/* Rm */ (MRI.getType(MI2.getOperand(1).getReg()) == (LLT::vector(2, 32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI2.getOperand(1).getReg(), MRI, TRI))))))
)))) {
      if (!isObviouslySafeToFold(MI1)) return false;
      if (!isObviouslySafeToFold(MI2)) return false;
// (sub:v2i64 (zext:v2i64 V64:v2i32:$Rn), (zext:v2i64 V64:v2i32:$Rm))  =>  (USUBLv2i32_v2i64:v2i64 V64:v2i32:$Rn, V64:v2i32:$Rm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(AArch64::USUBLv2i32_v2i64));
    MIB.add(MI0.getOperand(0)/*Rd*/);
    MIB.add(MI1.getOperand(1)/*Rn*/);
    MIB.add(MI2.getOperand(1)/*Rm*/);
    for (const auto *FromMI : {&MI0, &MI1, &MI2, })
      for (const auto &MMO : FromMI->memoperands())
        MIB.addMemOperand(MMO);
    I.eraseFromParent();
    MachineInstr &NewI = *MIB;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
if (!MI0.getOperand(2).isReg())
  return false;
if (TRI.isPhysicalRegister(MI0.getOperand(2).getReg()))
  return false;
MachineInstr &MI1 = *MRI.getVRegDef(MI0.getOperand(2).getReg());
if (MI1.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_SUB) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR32RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Operand 1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(32))) &&
(isOperandImmEqual(MI0.getOperand(1), 0, MRI)))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(32))) &&
(((MI1.getOpcode() == TargetOpcode::G_MUL) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::scalar(32))))) &&
((/* Rn */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR32RegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Rm */ (MRI.getType(MI1.getOperand(2).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR32RegClass) == RBI.getRegBank(MI1.getOperand(2).getReg(), MRI, TRI))))))
)))) {
      if (!isObviouslySafeToFold(MI1)) return false;
// (sub:i32 0:i32, (mul:i32 GPR32:i32:$Rn, GPR32:i32:$Rm))  =>  (MSUBWrrr:i32 GPR32:i32:$Rn, GPR32:i32:$Rm, WZR:i32)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(AArch64::MSUBWrrr));
    MIB.add(MI0.getOperand(0)/*Rd*/);
    MIB.add(MI1.getOperand(1)/*Rn*/);
    MIB.add(MI1.getOperand(2)/*Rm*/);
    MIB.addReg(AArch64::WZR);
    for (const auto *FromMI : {&MI0, &MI1, })
      for (const auto &MMO : FromMI->memoperands())
        MIB.addMemOperand(MMO);
    I.eraseFromParent();
    MachineInstr &NewI = *MIB;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
if (!MI0.getOperand(2).isReg())
  return false;
if (TRI.isPhysicalRegister(MI0.getOperand(2).getReg()))
  return false;
MachineInstr &MI1 = *MRI.getVRegDef(MI0.getOperand(2).getReg());
if (MI1.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_SUB) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Operand 1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(64))) &&
(isOperandImmEqual(MI0.getOperand(1), 0, MRI)))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(64))) &&
(((MI1.getOpcode() == TargetOpcode::G_MUL) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::scalar(64))))) &&
((/* Rn */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR64RegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Rm */ (MRI.getType(MI1.getOperand(2).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR64RegClass) == RBI.getRegBank(MI1.getOperand(2).getReg(), MRI, TRI))))))
)))) {
      if (!isObviouslySafeToFold(MI1)) return false;
// (sub:i64 0:i64, (mul:i64 GPR64:i64:$Rn, GPR64:i64:$Rm))  =>  (MSUBXrrr:i64 GPR64:i64:$Rn, GPR64:i64:$Rm, XZR:i64)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(AArch64::MSUBXrrr));
    MIB.add(MI0.getOperand(0)/*Rd*/);
    MIB.add(MI1.getOperand(1)/*Rn*/);
    MIB.add(MI1.getOperand(2)/*Rm*/);
    MIB.addReg(AArch64::XZR);
    for (const auto *FromMI : {&MI0, &MI1, })
      for (const auto &MMO : FromMI->memoperands())
        MIB.addMemOperand(MMO);
    I.eraseFromParent();
    MachineInstr &NewI = *MIB;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
if (!MI0.getOperand(2).isReg())
  return false;
if (TRI.isPhysicalRegister(MI0.getOperand(2).getReg()))
  return false;
MachineInstr &MI1 = *MRI.getVRegDef(MI0.getOperand(2).getReg());
if (MI1.getNumOperands() < 3)
  return false;
if (!MI1.getOperand(1).isReg())
  return false;
if (TRI.isPhysicalRegister(MI1.getOperand(1).getReg()))
  return false;
MachineInstr &MI2 = *MRI.getVRegDef(MI1.getOperand(1).getReg());
if (MI2.getNumOperands() < 2)
  return false;
if (!MI1.getOperand(2).isReg())
  return false;
if (TRI.isPhysicalRegister(MI1.getOperand(2).getReg()))
  return false;
MachineInstr &MI3 = *MRI.getVRegDef(MI1.getOperand(2).getReg());
if (MI3.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_SUB) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Operand 1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(64))) &&
(isOperandImmEqual(MI0.getOperand(1), 0, MRI)))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(64))) &&
(((MI1.getOpcode() == TargetOpcode::G_MUL) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::scalar(64))))) &&
((/* Operand 1 */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::scalar(64))) &&
(((MI2.getOpcode() == TargetOpcode::G_SEXT) &&
((/* Operand 0 */ (MRI.getType(MI2.getOperand(0).getReg()) == (LLT::scalar(64))))) &&
((/* Rn */ (MRI.getType(MI2.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR32RegClass) == RBI.getRegBank(MI2.getOperand(1).getReg(), MRI, TRI))))))
))) &&
((/* Operand 2 */ (MRI.getType(MI1.getOperand(2).getReg()) == (LLT::scalar(64))) &&
(((MI3.getOpcode() == TargetOpcode::G_SEXT) &&
((/* Operand 0 */ (MRI.getType(MI3.getOperand(0).getReg()) == (LLT::scalar(64))))) &&
((/* Rm */ (MRI.getType(MI3.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR32RegClass) == RBI.getRegBank(MI3.getOperand(1).getReg(), MRI, TRI))))))
))))
)))) {
      if (!isObviouslySafeToFold(MI1)) return false;
      if (!isObviouslySafeToFold(MI2)) return false;
      if (!isObviouslySafeToFold(MI3)) return false;
// (sub:i64 0:i64, (mul:i64 (sext:i64 GPR32:i32:$Rn), (sext:i64 GPR32:i32:$Rm)))  =>  (SMSUBLrrr:i64 GPR32:i32:$Rn, GPR32:i32:$Rm, XZR:i64)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(AArch64::SMSUBLrrr));
    MIB.add(MI0.getOperand(0)/*Rd*/);
    MIB.add(MI2.getOperand(1)/*Rn*/);
    MIB.add(MI3.getOperand(1)/*Rm*/);
    MIB.addReg(AArch64::XZR);
    for (const auto *FromMI : {&MI0, &MI1, &MI2, &MI3, })
      for (const auto &MMO : FromMI->memoperands())
        MIB.addMemOperand(MMO);
    I.eraseFromParent();
    MachineInstr &NewI = *MIB;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
if (!MI0.getOperand(2).isReg())
  return false;
if (TRI.isPhysicalRegister(MI0.getOperand(2).getReg()))
  return false;
MachineInstr &MI1 = *MRI.getVRegDef(MI0.getOperand(2).getReg());
if (MI1.getNumOperands() < 3)
  return false;
if (!MI1.getOperand(1).isReg())
  return false;
if (TRI.isPhysicalRegister(MI1.getOperand(1).getReg()))
  return false;
MachineInstr &MI2 = *MRI.getVRegDef(MI1.getOperand(1).getReg());
if (MI2.getNumOperands() < 2)
  return false;
if (!MI1.getOperand(2).isReg())
  return false;
if (TRI.isPhysicalRegister(MI1.getOperand(2).getReg()))
  return false;
MachineInstr &MI3 = *MRI.getVRegDef(MI1.getOperand(2).getReg());
if (MI3.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_SUB) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Operand 1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(64))) &&
(isOperandImmEqual(MI0.getOperand(1), 0, MRI)))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(64))) &&
(((MI1.getOpcode() == TargetOpcode::G_MUL) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::scalar(64))))) &&
((/* Operand 1 */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::scalar(64))) &&
(((MI2.getOpcode() == TargetOpcode::G_ZEXT) &&
((/* Operand 0 */ (MRI.getType(MI2.getOperand(0).getReg()) == (LLT::scalar(64))))) &&
((/* Rn */ (MRI.getType(MI2.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR32RegClass) == RBI.getRegBank(MI2.getOperand(1).getReg(), MRI, TRI))))))
))) &&
((/* Operand 2 */ (MRI.getType(MI1.getOperand(2).getReg()) == (LLT::scalar(64))) &&
(((MI3.getOpcode() == TargetOpcode::G_ZEXT) &&
((/* Operand 0 */ (MRI.getType(MI3.getOperand(0).getReg()) == (LLT::scalar(64))))) &&
((/* Rm */ (MRI.getType(MI3.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR32RegClass) == RBI.getRegBank(MI3.getOperand(1).getReg(), MRI, TRI))))))
))))
)))) {
      if (!isObviouslySafeToFold(MI1)) return false;
      if (!isObviouslySafeToFold(MI2)) return false;
      if (!isObviouslySafeToFold(MI3)) return false;
// (sub:i64 0:i64, (mul:i64 (zext:i64 GPR32:i32:$Rn), (zext:i64 GPR32:i32:$Rm)))  =>  (UMSUBLrrr:i64 GPR32:i32:$Rn, GPR32:i32:$Rm, XZR:i64)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(AArch64::UMSUBLrrr));
    MIB.add(MI0.getOperand(0)/*Rd*/);
    MIB.add(MI2.getOperand(1)/*Rn*/);
    MIB.add(MI3.getOperand(1)/*Rm*/);
    MIB.addReg(AArch64::XZR);
    for (const auto *FromMI : {&MI0, &MI1, &MI2, &MI3, })
      for (const auto &MMO : FromMI->memoperands())
        MIB.addMemOperand(MMO);
    I.eraseFromParent();
    MachineInstr &NewI = *MIB;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_SUB) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR32RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR32spRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* imm */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(32))) &&
((Renderer0 = selectArithImmed(MI0.getOperand(2))))))) {
// (sub:i32 GPR32sp:i32:$Rn, addsub_shifted_imm32:i32:$imm)  =>  (SUBSWri:i32:i32 GPR32sp:i32:$Rn, addsub_shifted_imm32:i32:$imm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(AArch64::SUBSWri));
    MIB.add(MI0.getOperand(0)/*Rd*/);
    MIB.add(MI0.getOperand(1)/*Rn*/);
Renderer0(MIB);
    for (const auto *FromMI : {&MI0, })
      for (const auto &MMO : FromMI->memoperands())
        MIB.addMemOperand(MMO);
    I.eraseFromParent();
    MachineInstr &NewI = *MIB;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_SUB) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR64spRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* imm */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(64))) &&
((Renderer0 = selectArithImmed(MI0.getOperand(2))))))) {
// (sub:i64 GPR64sp:i64:$Rn, addsub_shifted_imm64:i64:$imm)  =>  (SUBSXri:i64:i32 GPR64sp:i64:$Rn, addsub_shifted_imm64:i64:$imm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(AArch64::SUBSXri));
    MIB.add(MI0.getOperand(0)/*Rd*/);
    MIB.add(MI0.getOperand(1)/*Rn*/);
Renderer0(MIB);
    for (const auto *FromMI : {&MI0, })
      for (const auto &MMO : FromMI->memoperands())
        MIB.addMemOperand(MMO);
    I.eraseFromParent();
    MachineInstr &NewI = *MIB;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
if (!MI0.getOperand(2).isReg())
  return false;
if (TRI.isPhysicalRegister(MI0.getOperand(2).getReg()))
  return false;
MachineInstr &MI1 = *MRI.getVRegDef(MI0.getOperand(2).getReg());
if (MI1.getNumOperands() < 3)
  return false;
if (!MI1.getOperand(1).isReg())
  return false;
if (TRI.isPhysicalRegister(MI1.getOperand(1).getReg()))
  return false;
MachineInstr &MI2 = *MRI.getVRegDef(MI1.getOperand(1).getReg());
if (MI2.getNumOperands() < 2)
  return false;
if (!MI1.getOperand(2).isReg())
  return false;
if (TRI.isPhysicalRegister(MI1.getOperand(2).getReg()))
  return false;
MachineInstr &MI3 = *MRI.getVRegDef(MI1.getOperand(2).getReg());
if (MI3.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_SUB) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Ra */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR64RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(64))) &&
(((MI1.getOpcode() == TargetOpcode::G_MUL) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::scalar(64))))) &&
((/* Operand 1 */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::scalar(64))) &&
(((MI2.getOpcode() == TargetOpcode::G_SEXT) &&
((/* Operand 0 */ (MRI.getType(MI2.getOperand(0).getReg()) == (LLT::scalar(64))))) &&
((/* Rn */ (MRI.getType(MI2.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR32RegClass) == RBI.getRegBank(MI2.getOperand(1).getReg(), MRI, TRI))))))
))) &&
((/* Operand 2 */ (MRI.getType(MI1.getOperand(2).getReg()) == (LLT::scalar(64))) &&
(((MI3.getOpcode() == TargetOpcode::G_SEXT) &&
((/* Operand 0 */ (MRI.getType(MI3.getOperand(0).getReg()) == (LLT::scalar(64))))) &&
((/* Rm */ (MRI.getType(MI3.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR32RegClass) == RBI.getRegBank(MI3.getOperand(1).getReg(), MRI, TRI))))))
))))
)))) {
      if (!isObviouslySafeToFold(MI1)) return false;
      if (!isObviouslySafeToFold(MI2)) return false;
      if (!isObviouslySafeToFold(MI3)) return false;
// (sub:i64 GPR64:i64:$Ra, (mul:i64 (sext:i64 GPR32:i32:$Rn), (sext:i64 GPR32:i32:$Rm)))  =>  (SMSUBLrrr:i64 GPR32:i32:$Rn, GPR32:i32:$Rm, GPR64:i64:$Ra)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(AArch64::SMSUBLrrr));
    MIB.add(MI0.getOperand(0)/*Rd*/);
    MIB.add(MI2.getOperand(1)/*Rn*/);
    MIB.add(MI3.getOperand(1)/*Rm*/);
    MIB.add(MI0.getOperand(1)/*Ra*/);
    for (const auto *FromMI : {&MI0, &MI1, &MI2, &MI3, })
      for (const auto &MMO : FromMI->memoperands())
        MIB.addMemOperand(MMO);
    I.eraseFromParent();
    MachineInstr &NewI = *MIB;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
if (!MI0.getOperand(2).isReg())
  return false;
if (TRI.isPhysicalRegister(MI0.getOperand(2).getReg()))
  return false;
MachineInstr &MI1 = *MRI.getVRegDef(MI0.getOperand(2).getReg());
if (MI1.getNumOperands() < 3)
  return false;
if (!MI1.getOperand(1).isReg())
  return false;
if (TRI.isPhysicalRegister(MI1.getOperand(1).getReg()))
  return false;
MachineInstr &MI2 = *MRI.getVRegDef(MI1.getOperand(1).getReg());
if (MI2.getNumOperands() < 2)
  return false;
if (!MI1.getOperand(2).isReg())
  return false;
if (TRI.isPhysicalRegister(MI1.getOperand(2).getReg()))
  return false;
MachineInstr &MI3 = *MRI.getVRegDef(MI1.getOperand(2).getReg());
if (MI3.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_SUB) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Ra */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR64RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(64))) &&
(((MI1.getOpcode() == TargetOpcode::G_MUL) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::scalar(64))))) &&
((/* Operand 1 */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::scalar(64))) &&
(((MI2.getOpcode() == TargetOpcode::G_ZEXT) &&
((/* Operand 0 */ (MRI.getType(MI2.getOperand(0).getReg()) == (LLT::scalar(64))))) &&
((/* Rn */ (MRI.getType(MI2.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR32RegClass) == RBI.getRegBank(MI2.getOperand(1).getReg(), MRI, TRI))))))
))) &&
((/* Operand 2 */ (MRI.getType(MI1.getOperand(2).getReg()) == (LLT::scalar(64))) &&
(((MI3.getOpcode() == TargetOpcode::G_ZEXT) &&
((/* Operand 0 */ (MRI.getType(MI3.getOperand(0).getReg()) == (LLT::scalar(64))))) &&
((/* Rm */ (MRI.getType(MI3.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR32RegClass) == RBI.getRegBank(MI3.getOperand(1).getReg(), MRI, TRI))))))
))))
)))) {
      if (!isObviouslySafeToFold(MI1)) return false;
      if (!isObviouslySafeToFold(MI2)) return false;
      if (!isObviouslySafeToFold(MI3)) return false;
// (sub:i64 GPR64:i64:$Ra, (mul:i64 (zext:i64 GPR32:i32:$Rn), (zext:i64 GPR32:i32:$Rm)))  =>  (UMSUBLrrr:i64 GPR32:i32:$Rn, GPR32:i32:$Rm, GPR64:i64:$Ra)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(AArch64::UMSUBLrrr));
    MIB.add(MI0.getOperand(0)/*Rd*/);
    MIB.add(MI2.getOperand(1)/*Rn*/);
    MIB.add(MI3.getOperand(1)/*Rm*/);
    MIB.add(MI0.getOperand(1)/*Ra*/);
    for (const auto *FromMI : {&MI0, &MI1, &MI2, &MI3, })
      for (const auto &MMO : FromMI->memoperands())
        MIB.addMemOperand(MMO);
    I.eraseFromParent();
    MachineInstr &NewI = *MIB;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasNEONBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
if (!MI0.getOperand(2).isReg())
  return false;
if (TRI.isPhysicalRegister(MI0.getOperand(2).getReg()))
  return false;
MachineInstr &MI1 = *MRI.getVRegDef(MI0.getOperand(2).getReg());
if (MI1.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_SUB) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(8, 8))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rd */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(8, 8))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(8, 8))) &&
(((MI1.getOpcode() == TargetOpcode::G_MUL) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::vector(8, 8))))) &&
((/* Rn */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::vector(8, 8))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Rm */ (MRI.getType(MI1.getOperand(2).getReg()) == (LLT::vector(8, 8))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI1.getOperand(2).getReg(), MRI, TRI))))))
)))) {
      if (!isObviouslySafeToFold(MI1)) return false;
// (sub:v8i8 V64:v8i8:$Rd, (mul:v8i8 V64:v8i8:$Rn, V64:v8i8:$Rm))  =>  (MLSv8i8:v8i8 V64:v8i8:$Rd, V64:v8i8:$Rn, V64:v8i8:$Rm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(AArch64::MLSv8i8));
    MIB.add(MI0.getOperand(0)/*dst*/);
    MIB.add(MI0.getOperand(1)/*Rd*/);
    MIB.add(MI1.getOperand(1)/*Rn*/);
    MIB.add(MI1.getOperand(2)/*Rm*/);
    for (const auto *FromMI : {&MI0, &MI1, })
      for (const auto &MMO : FromMI->memoperands())
        MIB.addMemOperand(MMO);
    I.eraseFromParent();
    MachineInstr &NewI = *MIB;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasNEONBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
if (!MI0.getOperand(2).isReg())
  return false;
if (TRI.isPhysicalRegister(MI0.getOperand(2).getReg()))
  return false;
MachineInstr &MI1 = *MRI.getVRegDef(MI0.getOperand(2).getReg());
if (MI1.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_SUB) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(16, 8))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rd */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(16, 8))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(16, 8))) &&
(((MI1.getOpcode() == TargetOpcode::G_MUL) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::vector(16, 8))))) &&
((/* Rn */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::vector(16, 8))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Rm */ (MRI.getType(MI1.getOperand(2).getReg()) == (LLT::vector(16, 8))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI1.getOperand(2).getReg(), MRI, TRI))))))
)))) {
      if (!isObviouslySafeToFold(MI1)) return false;
// (sub:v16i8 V128:v16i8:$Rd, (mul:v16i8 V128:v16i8:$Rn, V128:v16i8:$Rm))  =>  (MLSv16i8:v16i8 V128:v16i8:$Rd, V128:v16i8:$Rn, V128:v16i8:$Rm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(AArch64::MLSv16i8));
    MIB.add(MI0.getOperand(0)/*dst*/);
    MIB.add(MI0.getOperand(1)/*Rd*/);
    MIB.add(MI1.getOperand(1)/*Rn*/);
    MIB.add(MI1.getOperand(2)/*Rm*/);
    for (const auto *FromMI : {&MI0, &MI1, })
      for (const auto &MMO : FromMI->memoperands())
        MIB.addMemOperand(MMO);
    I.eraseFromParent();
    MachineInstr &NewI = *MIB;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasNEONBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
if (!MI0.getOperand(2).isReg())
  return false;
if (TRI.isPhysicalRegister(MI0.getOperand(2).getReg()))
  return false;
MachineInstr &MI1 = *MRI.getVRegDef(MI0.getOperand(2).getReg());
if (MI1.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_SUB) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rd */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(4, 16))) &&
(((MI1.getOpcode() == TargetOpcode::G_MUL) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::vector(4, 16))))) &&
((/* Rn */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::vector(4, 16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Rm */ (MRI.getType(MI1.getOperand(2).getReg()) == (LLT::vector(4, 16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI1.getOperand(2).getReg(), MRI, TRI))))))
)))) {
      if (!isObviouslySafeToFold(MI1)) return false;
// (sub:v4i16 V64:v4i16:$Rd, (mul:v4i16 V64:v4i16:$Rn, V64:v4i16:$Rm))  =>  (MLSv4i16:v4i16 V64:v4i16:$Rd, V64:v4i16:$Rn, V64:v4i16:$Rm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(AArch64::MLSv4i16));
    MIB.add(MI0.getOperand(0)/*dst*/);
    MIB.add(MI0.getOperand(1)/*Rd*/);
    MIB.add(MI1.getOperand(1)/*Rn*/);
    MIB.add(MI1.getOperand(2)/*Rm*/);
    for (const auto *FromMI : {&MI0, &MI1, })
      for (const auto &MMO : FromMI->memoperands())
        MIB.addMemOperand(MMO);
    I.eraseFromParent();
    MachineInstr &NewI = *MIB;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasNEONBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
if (!MI0.getOperand(2).isReg())
  return false;
if (TRI.isPhysicalRegister(MI0.getOperand(2).getReg()))
  return false;
MachineInstr &MI1 = *MRI.getVRegDef(MI0.getOperand(2).getReg());
if (MI1.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_SUB) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rd */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(8, 16))) &&
(((MI1.getOpcode() == TargetOpcode::G_MUL) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::vector(8, 16))))) &&
((/* Rn */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Rm */ (MRI.getType(MI1.getOperand(2).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI1.getOperand(2).getReg(), MRI, TRI))))))
)))) {
      if (!isObviouslySafeToFold(MI1)) return false;
// (sub:v8i16 V128:v8i16:$Rd, (mul:v8i16 V128:v8i16:$Rn, V128:v8i16:$Rm))  =>  (MLSv8i16:v8i16 V128:v8i16:$Rd, V128:v8i16:$Rn, V128:v8i16:$Rm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(AArch64::MLSv8i16));
    MIB.add(MI0.getOperand(0)/*dst*/);
    MIB.add(MI0.getOperand(1)/*Rd*/);
    MIB.add(MI1.getOperand(1)/*Rn*/);
    MIB.add(MI1.getOperand(2)/*Rm*/);
    for (const auto *FromMI : {&MI0, &MI1, })
      for (const auto &MMO : FromMI->memoperands())
        MIB.addMemOperand(MMO);
    I.eraseFromParent();
    MachineInstr &NewI = *MIB;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasNEONBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
if (!MI0.getOperand(2).isReg())
  return false;
if (TRI.isPhysicalRegister(MI0.getOperand(2).getReg()))
  return false;
MachineInstr &MI1 = *MRI.getVRegDef(MI0.getOperand(2).getReg());
if (MI1.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_SUB) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(2, 32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rd */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(2, 32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(2, 32))) &&
(((MI1.getOpcode() == TargetOpcode::G_MUL) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::vector(2, 32))))) &&
((/* Rn */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::vector(2, 32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Rm */ (MRI.getType(MI1.getOperand(2).getReg()) == (LLT::vector(2, 32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI1.getOperand(2).getReg(), MRI, TRI))))))
)))) {
      if (!isObviouslySafeToFold(MI1)) return false;
// (sub:v2i32 V64:v2i32:$Rd, (mul:v2i32 V64:v2i32:$Rn, V64:v2i32:$Rm))  =>  (MLSv2i32:v2i32 V64:v2i32:$Rd, V64:v2i32:$Rn, V64:v2i32:$Rm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(AArch64::MLSv2i32));
    MIB.add(MI0.getOperand(0)/*dst*/);
    MIB.add(MI0.getOperand(1)/*Rd*/);
    MIB.add(MI1.getOperand(1)/*Rn*/);
    MIB.add(MI1.getOperand(2)/*Rm*/);
    for (const auto *FromMI : {&MI0, &MI1, })
      for (const auto &MMO : FromMI->memoperands())
        MIB.addMemOperand(MMO);
    I.eraseFromParent();
    MachineInstr &NewI = *MIB;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasNEONBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
if (!MI0.getOperand(2).isReg())
  return false;
if (TRI.isPhysicalRegister(MI0.getOperand(2).getReg()))
  return false;
MachineInstr &MI1 = *MRI.getVRegDef(MI0.getOperand(2).getReg());
if (MI1.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_SUB) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rd */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(4, 32))) &&
(((MI1.getOpcode() == TargetOpcode::G_MUL) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::vector(4, 32))))) &&
((/* Rn */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Rm */ (MRI.getType(MI1.getOperand(2).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI1.getOperand(2).getReg(), MRI, TRI))))))
)))) {
      if (!isObviouslySafeToFold(MI1)) return false;
// (sub:v4i32 V128:v4i32:$Rd, (mul:v4i32 V128:v4i32:$Rn, V128:v4i32:$Rm))  =>  (MLSv4i32:v4i32 V128:v4i32:$Rd, V128:v4i32:$Rn, V128:v4i32:$Rm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(AArch64::MLSv4i32));
    MIB.add(MI0.getOperand(0)/*dst*/);
    MIB.add(MI0.getOperand(1)/*Rd*/);
    MIB.add(MI1.getOperand(1)/*Rn*/);
    MIB.add(MI1.getOperand(2)/*Rm*/);
    for (const auto *FromMI : {&MI0, &MI1, })
      for (const auto &MMO : FromMI->memoperands())
        MIB.addMemOperand(MMO);
    I.eraseFromParent();
    MachineInstr &NewI = *MIB;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasNEONBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
if (!MI0.getOperand(2).isReg())
  return false;
if (TRI.isPhysicalRegister(MI0.getOperand(2).getReg()))
  return false;
MachineInstr &MI1 = *MRI.getVRegDef(MI0.getOperand(2).getReg());
if (MI1.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_SUB) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(8, 16))) &&
(((MI1.getOpcode() == TargetOpcode::G_SEXT) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::vector(8, 16))))) &&
((/* Rm */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::vector(8, 8))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))))
)))) {
      if (!isObviouslySafeToFold(MI1)) return false;
// (sub:v8i16 V128:v8i16:$Rn, (sext:v8i16 V64:v8i8:$Rm))  =>  (SSUBWv8i8_v8i16:v8i16 V128:v8i16:$Rn, V64:v8i8:$Rm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(AArch64::SSUBWv8i8_v8i16));
    MIB.add(MI0.getOperand(0)/*Rd*/);
    MIB.add(MI0.getOperand(1)/*Rn*/);
    MIB.add(MI1.getOperand(1)/*Rm*/);
    for (const auto *FromMI : {&MI0, &MI1, })
      for (const auto &MMO : FromMI->memoperands())
        MIB.addMemOperand(MMO);
    I.eraseFromParent();
    MachineInstr &NewI = *MIB;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasNEONBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
if (!MI0.getOperand(2).isReg())
  return false;
if (TRI.isPhysicalRegister(MI0.getOperand(2).getReg()))
  return false;
MachineInstr &MI1 = *MRI.getVRegDef(MI0.getOperand(2).getReg());
if (MI1.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_SUB) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(4, 32))) &&
(((MI1.getOpcode() == TargetOpcode::G_SEXT) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::vector(4, 32))))) &&
((/* Rm */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::vector(4, 16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))))
)))) {
      if (!isObviouslySafeToFold(MI1)) return false;
// (sub:v4i32 V128:v4i32:$Rn, (sext:v4i32 V64:v4i16:$Rm))  =>  (SSUBWv4i16_v4i32:v4i32 V128:v4i32:$Rn, V64:v4i16:$Rm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(AArch64::SSUBWv4i16_v4i32));
    MIB.add(MI0.getOperand(0)/*Rd*/);
    MIB.add(MI0.getOperand(1)/*Rn*/);
    MIB.add(MI1.getOperand(1)/*Rm*/);
    for (const auto *FromMI : {&MI0, &MI1, })
      for (const auto &MMO : FromMI->memoperands())
        MIB.addMemOperand(MMO);
    I.eraseFromParent();
    MachineInstr &NewI = *MIB;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasNEONBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
if (!MI0.getOperand(2).isReg())
  return false;
if (TRI.isPhysicalRegister(MI0.getOperand(2).getReg()))
  return false;
MachineInstr &MI1 = *MRI.getVRegDef(MI0.getOperand(2).getReg());
if (MI1.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_SUB) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(2, 64))) &&
(((MI1.getOpcode() == TargetOpcode::G_SEXT) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::vector(2, 64))))) &&
((/* Rm */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::vector(2, 32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))))
)))) {
      if (!isObviouslySafeToFold(MI1)) return false;
// (sub:v2i64 V128:v2i64:$Rn, (sext:v2i64 V64:v2i32:$Rm))  =>  (SSUBWv2i32_v2i64:v2i64 V128:v2i64:$Rn, V64:v2i32:$Rm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(AArch64::SSUBWv2i32_v2i64));
    MIB.add(MI0.getOperand(0)/*Rd*/);
    MIB.add(MI0.getOperand(1)/*Rn*/);
    MIB.add(MI1.getOperand(1)/*Rm*/);
    for (const auto *FromMI : {&MI0, &MI1, })
      for (const auto &MMO : FromMI->memoperands())
        MIB.addMemOperand(MMO);
    I.eraseFromParent();
    MachineInstr &NewI = *MIB;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasNEONBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
if (!MI0.getOperand(2).isReg())
  return false;
if (TRI.isPhysicalRegister(MI0.getOperand(2).getReg()))
  return false;
MachineInstr &MI1 = *MRI.getVRegDef(MI0.getOperand(2).getReg());
if (MI1.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_SUB) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(8, 16))) &&
(((MI1.getOpcode() == TargetOpcode::G_ZEXT) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::vector(8, 16))))) &&
((/* Rm */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::vector(8, 8))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))))
)))) {
      if (!isObviouslySafeToFold(MI1)) return false;
// (sub:v8i16 V128:v8i16:$Rn, (zext:v8i16 V64:v8i8:$Rm))  =>  (USUBWv8i8_v8i16:v8i16 V128:v8i16:$Rn, V64:v8i8:$Rm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(AArch64::USUBWv8i8_v8i16));
    MIB.add(MI0.getOperand(0)/*Rd*/);
    MIB.add(MI0.getOperand(1)/*Rn*/);
    MIB.add(MI1.getOperand(1)/*Rm*/);
    for (const auto *FromMI : {&MI0, &MI1, })
      for (const auto &MMO : FromMI->memoperands())
        MIB.addMemOperand(MMO);
    I.eraseFromParent();
    MachineInstr &NewI = *MIB;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasNEONBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
if (!MI0.getOperand(2).isReg())
  return false;
if (TRI.isPhysicalRegister(MI0.getOperand(2).getReg()))
  return false;
MachineInstr &MI1 = *MRI.getVRegDef(MI0.getOperand(2).getReg());
if (MI1.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_SUB) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(4, 32))) &&
(((MI1.getOpcode() == TargetOpcode::G_ZEXT) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::vector(4, 32))))) &&
((/* Rm */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::vector(4, 16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))))
)))) {
      if (!isObviouslySafeToFold(MI1)) return false;
// (sub:v4i32 V128:v4i32:$Rn, (zext:v4i32 V64:v4i16:$Rm))  =>  (USUBWv4i16_v4i32:v4i32 V128:v4i32:$Rn, V64:v4i16:$Rm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(AArch64::USUBWv4i16_v4i32));
    MIB.add(MI0.getOperand(0)/*Rd*/);
    MIB.add(MI0.getOperand(1)/*Rn*/);
    MIB.add(MI1.getOperand(1)/*Rm*/);
    for (const auto *FromMI : {&MI0, &MI1, })
      for (const auto &MMO : FromMI->memoperands())
        MIB.addMemOperand(MMO);
    I.eraseFromParent();
    MachineInstr &NewI = *MIB;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasNEONBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
if (!MI0.getOperand(2).isReg())
  return false;
if (TRI.isPhysicalRegister(MI0.getOperand(2).getReg()))
  return false;
MachineInstr &MI1 = *MRI.getVRegDef(MI0.getOperand(2).getReg());
if (MI1.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_SUB) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(2, 64))) &&
(((MI1.getOpcode() == TargetOpcode::G_ZEXT) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::vector(2, 64))))) &&
((/* Rm */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::vector(2, 32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))))
)))) {
      if (!isObviouslySafeToFold(MI1)) return false;
// (sub:v2i64 V128:v2i64:$Rn, (zext:v2i64 V64:v2i32:$Rm))  =>  (USUBWv2i32_v2i64:v2i64 V128:v2i64:$Rn, V64:v2i32:$Rm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(AArch64::USUBWv2i32_v2i64));
    MIB.add(MI0.getOperand(0)/*Rd*/);
    MIB.add(MI0.getOperand(1)/*Rn*/);
    MIB.add(MI1.getOperand(1)/*Rm*/);
    for (const auto *FromMI : {&MI0, &MI1, })
      for (const auto &MMO : FromMI->memoperands())
        MIB.addMemOperand(MMO);
    I.eraseFromParent();
    MachineInstr &NewI = *MIB;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasNEONBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_SUB) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(8, 8))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(8, 8))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Rm */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(8, 8))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (sub:v8i8 V64:v8i8:$Rn, V64:v8i8:$Rm)  =>  (SUBv8i8:v8i8 V64:v8i8:$Rn, V64:v8i8:$Rm)
    I.setDesc(TII.get(AArch64::SUBv8i8));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasNEONBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_SUB) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(16, 8))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(16, 8))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Rm */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(16, 8))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (sub:v16i8 V128:v16i8:$Rn, V128:v16i8:$Rm)  =>  (SUBv16i8:v16i8 V128:v16i8:$Rn, V128:v16i8:$Rm)
    I.setDesc(TII.get(AArch64::SUBv16i8));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasNEONBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_SUB) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Rm */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(4, 16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (sub:v4i16 V64:v4i16:$Rn, V64:v4i16:$Rm)  =>  (SUBv4i16:v4i16 V64:v4i16:$Rn, V64:v4i16:$Rm)
    I.setDesc(TII.get(AArch64::SUBv4i16));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasNEONBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_SUB) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Rm */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (sub:v8i16 V128:v8i16:$Rn, V128:v8i16:$Rm)  =>  (SUBv8i16:v8i16 V128:v8i16:$Rn, V128:v8i16:$Rm)
    I.setDesc(TII.get(AArch64::SUBv8i16));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasNEONBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_SUB) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(2, 32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(2, 32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Rm */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(2, 32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (sub:v2i32 V64:v2i32:$Rn, V64:v2i32:$Rm)  =>  (SUBv2i32:v2i32 V64:v2i32:$Rn, V64:v2i32:$Rm)
    I.setDesc(TII.get(AArch64::SUBv2i32));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasNEONBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_SUB) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Rm */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (sub:v4i32 V128:v4i32:$Rn, V128:v4i32:$Rm)  =>  (SUBv4i32:v4i32 V128:v4i32:$Rn, V128:v4i32:$Rm)
    I.setDesc(TII.get(AArch64::SUBv4i32));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasNEONBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_SUB) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Rm */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (sub:v2i64 V128:v2i64:$Rn, V128:v2i64:$Rm)  =>  (SUBv2i64:v2i64 V128:v2i64:$Rn, V128:v2i64:$Rm)
    I.setDesc(TII.get(AArch64::SUBv2i64));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasNEONBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_SUB) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Rm */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (sub:v1i64 FPR64:v1i64:$Rn, FPR64:v1i64:$Rm)  =>  (SUBv1i64:v1i64 FPR64:v1i64:$Rn, FPR64:v1i64:$Rm)
    I.setDesc(TII.get(AArch64::SUBv1i64));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_SUB) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR32RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR32RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Rm */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR32RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (sub:i32 GPR32:i32:$Rn, GPR32:i32:$Rm)  =>  (SUBSWrr:i32:i32 GPR32:i32:$Rn, GPR32:i32:$Rm)
    I.setDesc(TII.get(AArch64::SUBSWrr));
    auto MIB = MachineInstrBuilder(MF, &I);
    MIB.addDef(AArch64::NZCV, RegState::Implicit);
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_SUB) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR64RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Rm */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR64RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (sub:i64 GPR64:i64:$Rn, GPR64:i64:$Rm)  =>  (SUBSXrr:i64:i32 GPR64:i64:$Rn, GPR64:i64:$Rm)
    I.setDesc(TII.get(AArch64::SUBSXrr));
    auto MIB = MachineInstrBuilder(MF, &I);
    MIB.addDef(AArch64::NZCV, RegState::Implicit);
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_UDIV) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR32RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR32RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Rm */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR32RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (udiv:i32 GPR32:i32:$Rn, GPR32:i32:$Rm)  =>  (UDIVWr:i32 GPR32:i32:$Rn, GPR32:i32:$Rm)
    I.setDesc(TII.get(AArch64::UDIVWr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_UDIV) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR64RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Rm */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR64RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (udiv:i64 GPR64:i64:$Rn, GPR64:i64:$Rm)  =>  (UDIVXr:i64 GPR64:i64:$Rn, GPR64:i64:$Rm)
    I.setDesc(TII.get(AArch64::UDIVXr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
if (!MI0.getOperand(1).isReg())
  return false;
if (TRI.isPhysicalRegister(MI0.getOperand(1).getReg()))
  return false;
MachineInstr &MI1 = *MRI.getVRegDef(MI0.getOperand(1).getReg());
if (MI1.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_XOR) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR32RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Operand 1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(32))) &&
(((MI1.getOpcode() == TargetOpcode::G_XOR) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::scalar(32))))) &&
((/* Rn */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR32RegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Rm */ (MRI.getType(MI1.getOperand(2).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR32RegClass) == RBI.getRegBank(MI1.getOperand(2).getReg(), MRI, TRI))))))
))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(32))) &&
(isOperandImmEqual(MI0.getOperand(2), -1, MRI))))) {
      if (!isObviouslySafeToFold(MI1)) return false;
// (xor:i32 (xor:i32 GPR32:i32:$Rn, GPR32:i32:$Rm), -1:i32)  =>  (EONWrr:i32 GPR32:i32:$Rn, GPR32:i32:$Rm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(AArch64::EONWrr));
    MIB.add(MI0.getOperand(0)/*Rd*/);
    MIB.add(MI1.getOperand(1)/*Rn*/);
    MIB.add(MI1.getOperand(2)/*Rm*/);
    for (const auto *FromMI : {&MI0, &MI1, })
      for (const auto &MMO : FromMI->memoperands())
        MIB.addMemOperand(MMO);
    I.eraseFromParent();
    MachineInstr &NewI = *MIB;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
if (!MI0.getOperand(1).isReg())
  return false;
if (TRI.isPhysicalRegister(MI0.getOperand(1).getReg()))
  return false;
MachineInstr &MI1 = *MRI.getVRegDef(MI0.getOperand(1).getReg());
if (MI1.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_XOR) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Operand 1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(64))) &&
(((MI1.getOpcode() == TargetOpcode::G_XOR) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::scalar(64))))) &&
((/* Rn */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR64RegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Rm */ (MRI.getType(MI1.getOperand(2).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR64RegClass) == RBI.getRegBank(MI1.getOperand(2).getReg(), MRI, TRI))))))
))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(64))) &&
(isOperandImmEqual(MI0.getOperand(2), -1, MRI))))) {
      if (!isObviouslySafeToFold(MI1)) return false;
// (xor:i64 (xor:i64 GPR64:i64:$Rn, GPR64:i64:$Rm), -1:i64)  =>  (EONXrr:i64 GPR64:i64:$Rn, GPR64:i64:$Rm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(AArch64::EONXrr));
    MIB.add(MI0.getOperand(0)/*Rd*/);
    MIB.add(MI1.getOperand(1)/*Rn*/);
    MIB.add(MI1.getOperand(2)/*Rm*/);
    for (const auto *FromMI : {&MI0, &MI1, })
      for (const auto &MMO : FromMI->memoperands())
        MIB.addMemOperand(MMO);
    I.eraseFromParent();
    MachineInstr &NewI = *MIB;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
if (!MI0.getOperand(1).isReg())
  return false;
if (TRI.isPhysicalRegister(MI0.getOperand(1).getReg()))
  return false;
MachineInstr &MI1 = *MRI.getVRegDef(MI0.getOperand(1).getReg());
if (MI1.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_XOR) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR32RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Operand 1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(32))) &&
(((MI1.getOpcode() == TargetOpcode::G_XOR) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::scalar(32))))) &&
((/* Rn */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR32RegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI1.getOperand(2).getReg()) == (LLT::scalar(32))) &&
(isOperandImmEqual(MI1.getOperand(2), -1, MRI)))))
))) &&
((/* Rm */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR32RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
      if (!isObviouslySafeToFold(MI1)) return false;
// (xor:i32 (xor:i32 GPR32:i32:$Rn, -1:i32), GPR32:i32:$Rm)  =>  (EONWrr:i32 GPR32:i32:$Rn, GPR32:i32:$Rm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(AArch64::EONWrr));
    MIB.add(MI0.getOperand(0)/*Rd*/);
    MIB.add(MI1.getOperand(1)/*Rn*/);
    MIB.add(MI0.getOperand(2)/*Rm*/);
    for (const auto *FromMI : {&MI0, &MI1, })
      for (const auto &MMO : FromMI->memoperands())
        MIB.addMemOperand(MMO);
    I.eraseFromParent();
    MachineInstr &NewI = *MIB;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
if (!MI0.getOperand(1).isReg())
  return false;
if (TRI.isPhysicalRegister(MI0.getOperand(1).getReg()))
  return false;
MachineInstr &MI1 = *MRI.getVRegDef(MI0.getOperand(1).getReg());
if (MI1.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_XOR) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Operand 1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(64))) &&
(((MI1.getOpcode() == TargetOpcode::G_XOR) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::scalar(64))))) &&
((/* Rn */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR64RegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI1.getOperand(2).getReg()) == (LLT::scalar(64))) &&
(isOperandImmEqual(MI1.getOperand(2), -1, MRI)))))
))) &&
((/* Rm */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR64RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
      if (!isObviouslySafeToFold(MI1)) return false;
// (xor:i64 (xor:i64 GPR64:i64:$Rn, -1:i64), GPR64:i64:$Rm)  =>  (EONXrr:i64 GPR64:i64:$Rn, GPR64:i64:$Rm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(AArch64::EONXrr));
    MIB.add(MI0.getOperand(0)/*Rd*/);
    MIB.add(MI1.getOperand(1)/*Rn*/);
    MIB.add(MI0.getOperand(2)/*Rm*/);
    for (const auto *FromMI : {&MI0, &MI1, })
      for (const auto &MMO : FromMI->memoperands())
        MIB.addMemOperand(MMO);
    I.eraseFromParent();
    MachineInstr &NewI = *MIB;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
if (!MI0.getOperand(2).isReg())
  return false;
if (TRI.isPhysicalRegister(MI0.getOperand(2).getReg()))
  return false;
MachineInstr &MI1 = *MRI.getVRegDef(MI0.getOperand(2).getReg());
if (MI1.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_XOR) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR32RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rm */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR32RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(32))) &&
(((MI1.getOpcode() == TargetOpcode::G_XOR) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::scalar(32))))) &&
((/* Rn */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR32RegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI1.getOperand(2).getReg()) == (LLT::scalar(32))) &&
(isOperandImmEqual(MI1.getOperand(2), -1, MRI)))))
)))) {
      if (!isObviouslySafeToFold(MI1)) return false;
// (xor:i32 GPR32:i32:$Rm, (xor:i32 GPR32:i32:$Rn, -1:i32))  =>  (EONWrr:i32 GPR32:i32:$Rn, GPR32:i32:$Rm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(AArch64::EONWrr));
    MIB.add(MI0.getOperand(0)/*Rd*/);
    MIB.add(MI1.getOperand(1)/*Rn*/);
    MIB.add(MI0.getOperand(1)/*Rm*/);
    for (const auto *FromMI : {&MI0, &MI1, })
      for (const auto &MMO : FromMI->memoperands())
        MIB.addMemOperand(MMO);
    I.eraseFromParent();
    MachineInstr &NewI = *MIB;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
if (!MI0.getOperand(2).isReg())
  return false;
if (TRI.isPhysicalRegister(MI0.getOperand(2).getReg()))
  return false;
MachineInstr &MI1 = *MRI.getVRegDef(MI0.getOperand(2).getReg());
if (MI1.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_XOR) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rm */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR64RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(64))) &&
(((MI1.getOpcode() == TargetOpcode::G_XOR) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::scalar(64))))) &&
((/* Rn */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR64RegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI1.getOperand(2).getReg()) == (LLT::scalar(64))) &&
(isOperandImmEqual(MI1.getOperand(2), -1, MRI)))))
)))) {
      if (!isObviouslySafeToFold(MI1)) return false;
// (xor:i64 GPR64:i64:$Rm, (xor:i64 GPR64:i64:$Rn, -1:i64))  =>  (EONXrr:i64 GPR64:i64:$Rn, GPR64:i64:$Rm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(AArch64::EONXrr));
    MIB.add(MI0.getOperand(0)/*Rd*/);
    MIB.add(MI1.getOperand(1)/*Rn*/);
    MIB.add(MI0.getOperand(1)/*Rm*/);
    for (const auto *FromMI : {&MI0, &MI1, })
      for (const auto &MMO : FromMI->memoperands())
        MIB.addMemOperand(MMO);
    I.eraseFromParent();
    MachineInstr &NewI = *MIB;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_XOR) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR32RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Wm */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR32RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(32))) &&
(isOperandImmEqual(MI0.getOperand(2), -1, MRI))))) {
// (xor:i32 GPR32:i32:$Wm, -1:i32)  =>  (ORNWrr:i32 WZR:i32, GPR32:i32:$Wm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(AArch64::ORNWrr));
    MIB.add(MI0.getOperand(0)/*Rd*/);
    MIB.addReg(AArch64::WZR);
    MIB.add(MI0.getOperand(1)/*Wm*/);
    for (const auto *FromMI : {&MI0, })
      for (const auto &MMO : FromMI->memoperands())
        MIB.addMemOperand(MMO);
    I.eraseFromParent();
    MachineInstr &NewI = *MIB;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_XOR) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Xm */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR64RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(64))) &&
(isOperandImmEqual(MI0.getOperand(2), -1, MRI))))) {
// (xor:i64 GPR64:i64:$Xm, -1:i64)  =>  (ORNXrr:i64 XZR:i64, GPR64:i64:$Xm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(AArch64::ORNXrr));
    MIB.add(MI0.getOperand(0)/*Rd*/);
    MIB.addReg(AArch64::XZR);
    MIB.add(MI0.getOperand(1)/*Xm*/);
    for (const auto *FromMI : {&MI0, })
      for (const auto &MMO : FromMI->memoperands())
        MIB.addMemOperand(MMO);
    I.eraseFromParent();
    MachineInstr &NewI = *MIB;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_XOR) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR32RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR32RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Rm */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR32RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (xor:i32 GPR32:i32:$Rn, GPR32:i32:$Rm)  =>  (EORWrr:i32 GPR32:i32:$Rn, GPR32:i32:$Rm)
    I.setDesc(TII.get(AArch64::EORWrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_XOR) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR64RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Rm */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR64RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (xor:i64 GPR64:i64:$Rn, GPR64:i64:$Rm)  =>  (EORXrr:i64 GPR64:i64:$Rn, GPR64:i64:$Rm)
    I.setDesc(TII.get(AArch64::EORXrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasNEONBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_XOR) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(8, 8))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(8, 8))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Rm */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(8, 8))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (xor:v8i8 V64:v8i8:$Rn, V64:v8i8:$Rm)  =>  (EORv8i8:v8i8 V64:v8i8:$Rn, V64:v8i8:$Rm)
    I.setDesc(TII.get(AArch64::EORv8i8));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasNEONBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_XOR) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(16, 8))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(16, 8))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Rm */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(16, 8))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (xor:v16i8 V128:v16i8:$Rn, V128:v16i8:$Rm)  =>  (EORv16i8:v16i8 V128:v16i8:$Rn, V128:v16i8:$Rm)
    I.setDesc(TII.get(AArch64::EORv16i8));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasNEONBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_XOR) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* LHS */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* RHS */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(4, 16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (xor:v4i16 V64:v4i16:$LHS, V64:v4i16:$RHS)  =>  (EORv8i8:v4i16 V64:v4i16:$LHS, V64:v4i16:$RHS)
    I.setDesc(TII.get(AArch64::EORv8i8));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasNEONBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_XOR) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(2, 32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* LHS */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(2, 32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* RHS */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(2, 32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (xor:v2i32 V64:v2i32:$LHS, V64:v2i32:$RHS)  =>  (EORv8i8:v2i32 V64:v2i32:$LHS, V64:v2i32:$RHS)
    I.setDesc(TII.get(AArch64::EORv8i8));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasNEONBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_XOR) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* LHS */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* RHS */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (xor:v1i64 V64:v1i64:$LHS, V64:v1i64:$RHS)  =>  (EORv8i8:v1i64 V64:v1i64:$LHS, V64:v1i64:$RHS)
    I.setDesc(TII.get(AArch64::EORv8i8));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasNEONBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_XOR) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* LHS */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* RHS */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (xor:v8i16 V128:v8i16:$LHS, V128:v8i16:$RHS)  =>  (EORv16i8:v8i16 V128:v8i16:$LHS, V128:v8i16:$RHS)
    I.setDesc(TII.get(AArch64::EORv16i8));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasNEONBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_XOR) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* LHS */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* RHS */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (xor:v4i32 V128:v4i32:$LHS, V128:v4i32:$RHS)  =>  (EORv16i8:v4i32 V128:v4i32:$LHS, V128:v4i32:$RHS)
    I.setDesc(TII.get(AArch64::EORv16i8));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasNEONBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_XOR) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* LHS */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* RHS */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (xor:v2i64 V128:v2i64:$LHS, V128:v2i64:$RHS)  =>  (EORv16i8:v2i64 V128:v2i64:$LHS, V128:v2i64:$RHS)
    I.setDesc(TII.get(AArch64::EORv16i8));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_IsBEBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_BITCAST) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(2, 32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (bitconvert:v1i64 FPR64:v2i32:$src)  =>  (REV64v2i32:v1i64 FPR64:v2i32:$src)
    I.setDesc(TII.get(AArch64::REV64v2i32));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_IsBEBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_BITCAST) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (bitconvert:v1i64 FPR64:v4i16:$src)  =>  (REV64v4i16:v1i64 FPR64:v4i16:$src)
    I.setDesc(TII.get(AArch64::REV64v4i16));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_IsBEBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_BITCAST) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(8, 8))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (bitconvert:v1i64 FPR64:v8i8:$src)  =>  (REV64v8i8:v1i64 FPR64:v8i8:$src)
    I.setDesc(TII.get(AArch64::REV64v8i8));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_IsBEBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_BITCAST) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (bitconvert:v1i64 FPR64:v4f16:$src)  =>  (REV64v4i16:v1i64 FPR64:v4f16:$src)
    I.setDesc(TII.get(AArch64::REV64v4i16));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_IsBEBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_BITCAST) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(2, 32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (bitconvert:v1i64 FPR64:v2f32:$src)  =>  (REV64v2i32:v1i64 FPR64:v2f32:$src)
    I.setDesc(TII.get(AArch64::REV64v2i32));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_IsBEBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_BITCAST) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(2, 32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (bitconvert:v2i32 FPR64:v1i64:$src)  =>  (REV64v2i32:v2i32 FPR64:v1i64:$src)
    I.setDesc(TII.get(AArch64::REV64v2i32));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_IsBEBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_BITCAST) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(2, 32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (bitconvert:v2i32 FPR64:v4i16:$src)  =>  (REV32v4i16:v2i32 FPR64:v4i16:$src)
    I.setDesc(TII.get(AArch64::REV32v4i16));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_IsBEBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_BITCAST) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(2, 32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(8, 8))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (bitconvert:v2i32 FPR64:v8i8:$src)  =>  (REV32v8i8:v2i32 FPR64:v8i8:$src)
    I.setDesc(TII.get(AArch64::REV32v8i8));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_IsBEBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_BITCAST) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(2, 32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (bitconvert:v2i32 FPR64:f64:$src)  =>  (REV64v2i32:v2i32 FPR64:f64:$src)
    I.setDesc(TII.get(AArch64::REV64v2i32));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_IsBEBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_BITCAST) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(2, 32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (bitconvert:v2i32 FPR64:v1f64:$src)  =>  (REV64v2i32:v2i32 FPR64:v1f64:$src)
    I.setDesc(TII.get(AArch64::REV64v2i32));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_IsBEBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_BITCAST) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(2, 32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (bitconvert:v2i32 FPR64:v4f16:$src)  =>  (REV64v4i16:v2i32 FPR64:v4f16:$src)
    I.setDesc(TII.get(AArch64::REV64v4i16));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_IsBEBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_BITCAST) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (bitconvert:v4i16 FPR64:v1i64:$src)  =>  (REV64v4i16:v4i16 FPR64:v1i64:$src)
    I.setDesc(TII.get(AArch64::REV64v4i16));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_IsBEBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_BITCAST) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(2, 32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (bitconvert:v4i16 FPR64:v2i32:$src)  =>  (REV32v4i16:v4i16 FPR64:v2i32:$src)
    I.setDesc(TII.get(AArch64::REV32v4i16));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_IsBEBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_BITCAST) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(8, 8))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (bitconvert:v4i16 FPR64:v8i8:$src)  =>  (REV16v8i8:v4i16 FPR64:v8i8:$src)
    I.setDesc(TII.get(AArch64::REV16v8i8));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_IsBEBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_BITCAST) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (bitconvert:v4i16 FPR64:f64:$src)  =>  (REV64v4i16:v4i16 FPR64:f64:$src)
    I.setDesc(TII.get(AArch64::REV64v4i16));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_IsBEBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_BITCAST) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (bitconvert:v4i16 FPR64:v4f16:$src)  =>  (REV32v4i16:v4i16 FPR64:v4f16:$src)
    I.setDesc(TII.get(AArch64::REV32v4i16));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_IsBEBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_BITCAST) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(2, 32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (bitconvert:v4i16 FPR64:v2f32:$src)  =>  (REV32v4i16:v4i16 FPR64:v2f32:$src)
    I.setDesc(TII.get(AArch64::REV32v4i16));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_IsBEBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_BITCAST) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (bitconvert:v4i16 FPR64:v1f64:$src)  =>  (REV64v4i16:v4i16 FPR64:v1f64:$src)
    I.setDesc(TII.get(AArch64::REV64v4i16));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_IsBEBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_BITCAST) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (bitconvert:v4f16 FPR64:v1i64:$src)  =>  (REV64v4i16:v4f16 FPR64:v1i64:$src)
    I.setDesc(TII.get(AArch64::REV64v4i16));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_IsBEBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_BITCAST) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(2, 32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (bitconvert:v4f16 FPR64:v2i32:$src)  =>  (REV64v4i16:v4f16 FPR64:v2i32:$src)
    I.setDesc(TII.get(AArch64::REV64v4i16));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_IsBEBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_BITCAST) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (bitconvert:v4f16 FPR64:v4i16:$src)  =>  (REV64v4i16:v4f16 FPR64:v4i16:$src)
    I.setDesc(TII.get(AArch64::REV64v4i16));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_IsBEBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_BITCAST) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(8, 8))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (bitconvert:v4f16 FPR64:v8i8:$src)  =>  (REV16v8i8:v4f16 FPR64:v8i8:$src)
    I.setDesc(TII.get(AArch64::REV16v8i8));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_IsBEBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_BITCAST) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (bitconvert:v4f16 FPR64:f64:$src)  =>  (REV64v4i16:v4f16 FPR64:f64:$src)
    I.setDesc(TII.get(AArch64::REV64v4i16));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_IsBEBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_BITCAST) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(2, 32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (bitconvert:v4f16 FPR64:v2f32:$src)  =>  (REV64v4i16:v4f16 FPR64:v2f32:$src)
    I.setDesc(TII.get(AArch64::REV64v4i16));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_IsBEBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_BITCAST) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (bitconvert:v4f16 FPR64:v1f64:$src)  =>  (REV64v4i16:v4f16 FPR64:v1f64:$src)
    I.setDesc(TII.get(AArch64::REV64v4i16));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_IsBEBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_BITCAST) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(8, 8))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (bitconvert:v8i8 FPR64:v1i64:$src)  =>  (REV64v8i8:v8i8 FPR64:v1i64:$src)
    I.setDesc(TII.get(AArch64::REV64v8i8));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_IsBEBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_BITCAST) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(8, 8))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(2, 32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (bitconvert:v8i8 FPR64:v2i32:$src)  =>  (REV32v8i8:v8i8 FPR64:v2i32:$src)
    I.setDesc(TII.get(AArch64::REV32v8i8));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_IsBEBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_BITCAST) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(8, 8))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (bitconvert:v8i8 FPR64:v4i16:$src)  =>  (REV16v8i8:v8i8 FPR64:v4i16:$src)
    I.setDesc(TII.get(AArch64::REV16v8i8));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_IsBEBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_BITCAST) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(8, 8))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (bitconvert:v8i8 FPR64:f64:$src)  =>  (REV64v8i8:v8i8 FPR64:f64:$src)
    I.setDesc(TII.get(AArch64::REV64v8i8));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_IsBEBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_BITCAST) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(8, 8))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(2, 32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (bitconvert:v8i8 FPR64:v2f32:$src)  =>  (REV32v8i8:v8i8 FPR64:v2f32:$src)
    I.setDesc(TII.get(AArch64::REV32v8i8));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_IsBEBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_BITCAST) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(8, 8))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (bitconvert:v8i8 FPR64:v1f64:$src)  =>  (REV64v8i8:v8i8 FPR64:v1f64:$src)
    I.setDesc(TII.get(AArch64::REV64v8i8));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_IsBEBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_BITCAST) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(8, 8))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (bitconvert:v8i8 FPR64:v4f16:$src)  =>  (REV16v8i8:v8i8 FPR64:v4f16:$src)
    I.setDesc(TII.get(AArch64::REV16v8i8));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_IsBEBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_BITCAST) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(2, 32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (bitconvert:f64 FPR64:v2i32:$src)  =>  (REV64v2i32:f64 FPR64:v2i32:$src)
    I.setDesc(TII.get(AArch64::REV64v2i32));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_IsBEBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_BITCAST) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (bitconvert:f64 FPR64:v4i16:$src)  =>  (REV64v4i16:f64 FPR64:v4i16:$src)
    I.setDesc(TII.get(AArch64::REV64v4i16));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_IsBEBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_BITCAST) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(2, 32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (bitconvert:f64 FPR64:v2f32:$src)  =>  (REV64v2i32:f64 FPR64:v2f32:$src)
    I.setDesc(TII.get(AArch64::REV64v2i32));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_IsBEBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_BITCAST) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(8, 8))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (bitconvert:f64 FPR64:v8i8:$src)  =>  (REV64v8i8:f64 FPR64:v8i8:$src)
    I.setDesc(TII.get(AArch64::REV64v8i8));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_IsBEBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_BITCAST) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (bitconvert:f64 FPR64:v4f16:$src)  =>  (REV64v4i16:f64 FPR64:v4f16:$src)
    I.setDesc(TII.get(AArch64::REV64v4i16));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_IsBEBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_BITCAST) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(2, 32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (bitconvert:v1f64 FPR64:v2i32:$src)  =>  (REV64v2i32:v1f64 FPR64:v2i32:$src)
    I.setDesc(TII.get(AArch64::REV64v2i32));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_IsBEBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_BITCAST) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (bitconvert:v1f64 FPR64:v4i16:$src)  =>  (REV64v4i16:v1f64 FPR64:v4i16:$src)
    I.setDesc(TII.get(AArch64::REV64v4i16));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_IsBEBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_BITCAST) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(8, 8))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (bitconvert:v1f64 FPR64:v8i8:$src)  =>  (REV64v8i8:v1f64 FPR64:v8i8:$src)
    I.setDesc(TII.get(AArch64::REV64v8i8));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_IsBEBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_BITCAST) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(2, 32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (bitconvert:v1f64 FPR64:v2f32:$src)  =>  (REV64v2i32:v1f64 FPR64:v2f32:$src)
    I.setDesc(TII.get(AArch64::REV64v2i32));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_IsBEBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_BITCAST) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (bitconvert:v1f64 FPR64:v4f16:$src)  =>  (REV64v4i16:v1f64 FPR64:v4f16:$src)
    I.setDesc(TII.get(AArch64::REV64v4i16));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_IsBEBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_BITCAST) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(2, 32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (bitconvert:v2f32 FPR64:v1i64:$src)  =>  (REV64v2i32:v2f32 FPR64:v1i64:$src)
    I.setDesc(TII.get(AArch64::REV64v2i32));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_IsBEBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_BITCAST) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(2, 32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (bitconvert:v2f32 FPR64:v4i16:$src)  =>  (REV32v4i16:v2f32 FPR64:v4i16:$src)
    I.setDesc(TII.get(AArch64::REV32v4i16));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_IsBEBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_BITCAST) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(2, 32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(8, 8))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (bitconvert:v2f32 FPR64:v8i8:$src)  =>  (REV32v8i8:v2f32 FPR64:v8i8:$src)
    I.setDesc(TII.get(AArch64::REV32v8i8));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_IsBEBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_BITCAST) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(2, 32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (bitconvert:v2f32 FPR64:v1f64:$src)  =>  (REV64v2i32:v2f32 FPR64:v1f64:$src)
    I.setDesc(TII.get(AArch64::REV64v2i32));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_IsBEBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_BITCAST) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(2, 32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (bitconvert:v2f32 FPR64:f64:$src)  =>  (REV64v2i32:v2f32 FPR64:f64:$src)
    I.setDesc(TII.get(AArch64::REV64v2i32));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_IsBEBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_BITCAST) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(2, 32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (bitconvert:v2f32 FPR64:v4f16:$src)  =>  (REV64v4i16:v2f32 FPR64:v4f16:$src)
    I.setDesc(TII.get(AArch64::REV64v4i16));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_IsBEBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_BITCAST) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (bitconvert:v2f64 FPR128:v4i32:$src)  =>  (REV64v4i32:v2f64 FPR128:v4i32:$src)
    I.setDesc(TII.get(AArch64::REV64v4i32));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_IsBEBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_BITCAST) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (bitconvert:v2f64 FPR128:v8i16:$src)  =>  (REV64v8i16:v2f64 FPR128:v8i16:$src)
    I.setDesc(TII.get(AArch64::REV64v8i16));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_IsBEBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_BITCAST) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (bitconvert:v2f64 FPR128:v8f16:$src)  =>  (REV64v8i16:v2f64 FPR128:v8f16:$src)
    I.setDesc(TII.get(AArch64::REV64v8i16));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_IsBEBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_BITCAST) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(16, 8))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (bitconvert:v2f64 FPR128:v16i8:$src)  =>  (REV64v16i8:v2f64 FPR128:v16i8:$src)
    I.setDesc(TII.get(AArch64::REV64v16i8));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_IsBEBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_BITCAST) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (bitconvert:v2f64 FPR128:v4f32:$src)  =>  (REV64v4i32:v2f64 FPR128:v4f32:$src)
    I.setDesc(TII.get(AArch64::REV64v4i32));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_IsBEBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_BITCAST) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (bitconvert:v4f32 FPR128:v8i16:$src)  =>  (REV32v8i16:v4f32 FPR128:v8i16:$src)
    I.setDesc(TII.get(AArch64::REV32v8i16));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_IsBEBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_BITCAST) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (bitconvert:v4f32 FPR128:v8f16:$src)  =>  (REV32v8i16:v4f32 FPR128:v8f16:$src)
    I.setDesc(TII.get(AArch64::REV32v8i16));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_IsBEBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_BITCAST) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(16, 8))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (bitconvert:v4f32 FPR128:v16i8:$src)  =>  (REV32v16i8:v4f32 FPR128:v16i8:$src)
    I.setDesc(TII.get(AArch64::REV32v16i8));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_IsBEBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_BITCAST) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (bitconvert:v4f32 FPR128:v2i64:$src)  =>  (REV64v4i32:v4f32 FPR128:v2i64:$src)
    I.setDesc(TII.get(AArch64::REV64v4i32));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_IsBEBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_BITCAST) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (bitconvert:v4f32 FPR128:v2f64:$src)  =>  (REV64v4i32:v4f32 FPR128:v2f64:$src)
    I.setDesc(TII.get(AArch64::REV64v4i32));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_IsBEBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_BITCAST) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (bitconvert:v2i64 FPR128:v4i32:$src)  =>  (REV64v4i32:v2i64 FPR128:v4i32:$src)
    I.setDesc(TII.get(AArch64::REV64v4i32));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_IsBEBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_BITCAST) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (bitconvert:v2i64 FPR128:v8i16:$src)  =>  (REV64v8i16:v2i64 FPR128:v8i16:$src)
    I.setDesc(TII.get(AArch64::REV64v8i16));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_IsBEBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_BITCAST) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(16, 8))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (bitconvert:v2i64 FPR128:v16i8:$src)  =>  (REV64v16i8:v2i64 FPR128:v16i8:$src)
    I.setDesc(TII.get(AArch64::REV64v16i8));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_IsBEBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_BITCAST) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (bitconvert:v2i64 FPR128:v4f32:$src)  =>  (REV64v4i32:v2i64 FPR128:v4f32:$src)
    I.setDesc(TII.get(AArch64::REV64v4i32));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_IsBEBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_BITCAST) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (bitconvert:v2i64 FPR128:v8f16:$src)  =>  (REV64v8i16:v2i64 FPR128:v8f16:$src)
    I.setDesc(TII.get(AArch64::REV64v8i16));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_IsBEBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_BITCAST) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (bitconvert:v4i32 FPR128:v2i64:$src)  =>  (REV64v4i32:v4i32 FPR128:v2i64:$src)
    I.setDesc(TII.get(AArch64::REV64v4i32));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_IsBEBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_BITCAST) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (bitconvert:v4i32 FPR128:v8i16:$src)  =>  (REV32v8i16:v4i32 FPR128:v8i16:$src)
    I.setDesc(TII.get(AArch64::REV32v8i16));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_IsBEBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_BITCAST) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(16, 8))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (bitconvert:v4i32 FPR128:v16i8:$src)  =>  (REV32v16i8:v4i32 FPR128:v16i8:$src)
    I.setDesc(TII.get(AArch64::REV32v16i8));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_IsBEBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_BITCAST) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (bitconvert:v4i32 FPR128:v2f64:$src)  =>  (REV64v4i32:v4i32 FPR128:v2f64:$src)
    I.setDesc(TII.get(AArch64::REV64v4i32));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_IsBEBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_BITCAST) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (bitconvert:v4i32 FPR128:v8f16:$src)  =>  (REV32v8i16:v4i32 FPR128:v8f16:$src)
    I.setDesc(TII.get(AArch64::REV32v8i16));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_IsBEBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_BITCAST) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (bitconvert:v8i16 FPR128:v2i64:$src)  =>  (REV64v8i16:v8i16 FPR128:v2i64:$src)
    I.setDesc(TII.get(AArch64::REV64v8i16));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_IsBEBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_BITCAST) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (bitconvert:v8i16 FPR128:v4i32:$src)  =>  (REV32v8i16:v8i16 FPR128:v4i32:$src)
    I.setDesc(TII.get(AArch64::REV32v8i16));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_IsBEBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_BITCAST) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(16, 8))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (bitconvert:v8i16 FPR128:v16i8:$src)  =>  (REV16v16i8:v8i16 FPR128:v16i8:$src)
    I.setDesc(TII.get(AArch64::REV16v16i8));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_IsBEBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_BITCAST) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (bitconvert:v8i16 FPR128:v2f64:$src)  =>  (REV64v8i16:v8i16 FPR128:v2f64:$src)
    I.setDesc(TII.get(AArch64::REV64v8i16));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_IsBEBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_BITCAST) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (bitconvert:v8i16 FPR128:v4f32:$src)  =>  (REV32v8i16:v8i16 FPR128:v4f32:$src)
    I.setDesc(TII.get(AArch64::REV32v8i16));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_IsBEBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_BITCAST) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (bitconvert:v8i16 FPR128:v8f16:$src)  =>  (REV32v8i16:v8i16 FPR128:v8f16:$src)
    I.setDesc(TII.get(AArch64::REV32v8i16));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_IsBEBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_BITCAST) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (bitconvert:v8f16 FPR128:v2i64:$src)  =>  (REV64v8i16:v8f16 FPR128:v2i64:$src)
    I.setDesc(TII.get(AArch64::REV64v8i16));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_IsBEBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_BITCAST) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (bitconvert:v8f16 FPR128:v4i32:$src)  =>  (REV32v8i16:v8f16 FPR128:v4i32:$src)
    I.setDesc(TII.get(AArch64::REV32v8i16));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_IsBEBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_BITCAST) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (bitconvert:v8f16 FPR128:v8i16:$src)  =>  (REV64v8i16:v8f16 FPR128:v8i16:$src)
    I.setDesc(TII.get(AArch64::REV64v8i16));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_IsBEBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_BITCAST) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(16, 8))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (bitconvert:v8f16 FPR128:v16i8:$src)  =>  (REV16v16i8:v8f16 FPR128:v16i8:$src)
    I.setDesc(TII.get(AArch64::REV16v16i8));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_IsBEBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_BITCAST) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (bitconvert:v8f16 FPR128:v2f64:$src)  =>  (REV64v8i16:v8f16 FPR128:v2f64:$src)
    I.setDesc(TII.get(AArch64::REV64v8i16));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_IsBEBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_BITCAST) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (bitconvert:v8f16 FPR128:v4f32:$src)  =>  (REV32v8i16:v8f16 FPR128:v4f32:$src)
    I.setDesc(TII.get(AArch64::REV32v8i16));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_IsBEBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_BITCAST) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(16, 8))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (bitconvert:v16i8 FPR128:v2i64:$src)  =>  (REV64v16i8:v16i8 FPR128:v2i64:$src)
    I.setDesc(TII.get(AArch64::REV64v16i8));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_IsBEBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_BITCAST) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(16, 8))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (bitconvert:v16i8 FPR128:v4i32:$src)  =>  (REV32v16i8:v16i8 FPR128:v4i32:$src)
    I.setDesc(TII.get(AArch64::REV32v16i8));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_IsBEBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_BITCAST) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(16, 8))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (bitconvert:v16i8 FPR128:v8i16:$src)  =>  (REV16v16i8:v16i8 FPR128:v8i16:$src)
    I.setDesc(TII.get(AArch64::REV16v16i8));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_IsBEBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_BITCAST) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(16, 8))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (bitconvert:v16i8 FPR128:v2f64:$src)  =>  (REV64v16i8:v16i8 FPR128:v2f64:$src)
    I.setDesc(TII.get(AArch64::REV64v16i8));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_IsBEBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_BITCAST) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(16, 8))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (bitconvert:v16i8 FPR128:v4f32:$src)  =>  (REV32v16i8:v16i8 FPR128:v4f32:$src)
    I.setDesc(TII.get(AArch64::REV32v16i8));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_IsBEBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_BITCAST) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(16, 8))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (bitconvert:v16i8 FPR128:v8f16:$src)  =>  (REV16v16i8:v16i8 FPR128:v8f16:$src)
    I.setDesc(TII.get(AArch64::REV16v16i8));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasFullFP16Bit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
if (!MI0.getOperand(1).isReg())
  return false;
if (TRI.isPhysicalRegister(MI0.getOperand(1).getReg()))
  return false;
MachineInstr &MI1 = *MRI.getVRegDef(MI0.getOperand(1).getReg());
if (MI1.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FNEG) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR16RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Operand 1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(16))) &&
(((MI1.getOpcode() == TargetOpcode::G_FMUL) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::scalar(16))))) &&
((/* Rn */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::scalar(16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR16RegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Rm */ (MRI.getType(MI1.getOperand(2).getReg()) == (LLT::scalar(16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR16RegClass) == RBI.getRegBank(MI1.getOperand(2).getReg(), MRI, TRI))))))
)))) {
      if (!isObviouslySafeToFold(MI1)) return false;
// (fneg:f16 (fmul:f16 FPR16:f16:$Rn, FPR16:f16:$Rm))  =>  (FNMULHrr:f16 FPR16:f16:$Rn, FPR16:f16:$Rm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(AArch64::FNMULHrr));
    MIB.add(MI0.getOperand(0)/*Rd*/);
    MIB.add(MI1.getOperand(1)/*Rn*/);
    MIB.add(MI1.getOperand(2)/*Rm*/);
    for (const auto *FromMI : {&MI0, &MI1, })
      for (const auto &MMO : FromMI->memoperands())
        MIB.addMemOperand(MMO);
    I.eraseFromParent();
    MachineInstr &NewI = *MIB;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasFPARMv8Bit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
if (!MI0.getOperand(1).isReg())
  return false;
if (TRI.isPhysicalRegister(MI0.getOperand(1).getReg()))
  return false;
MachineInstr &MI1 = *MRI.getVRegDef(MI0.getOperand(1).getReg());
if (MI1.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FNEG) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR32RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Operand 1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(32))) &&
(((MI1.getOpcode() == TargetOpcode::G_FMUL) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::scalar(32))))) &&
((/* Rn */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR32RegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Rm */ (MRI.getType(MI1.getOperand(2).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR32RegClass) == RBI.getRegBank(MI1.getOperand(2).getReg(), MRI, TRI))))))
)))) {
      if (!isObviouslySafeToFold(MI1)) return false;
// (fneg:f32 (fmul:f32 FPR32:f32:$Rn, FPR32:f32:$Rm))  =>  (FNMULSrr:f32 FPR32:f32:$Rn, FPR32:f32:$Rm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(AArch64::FNMULSrr));
    MIB.add(MI0.getOperand(0)/*Rd*/);
    MIB.add(MI1.getOperand(1)/*Rn*/);
    MIB.add(MI1.getOperand(2)/*Rm*/);
    for (const auto *FromMI : {&MI0, &MI1, })
      for (const auto &MMO : FromMI->memoperands())
        MIB.addMemOperand(MMO);
    I.eraseFromParent();
    MachineInstr &NewI = *MIB;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasFPARMv8Bit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
if (!MI0.getOperand(1).isReg())
  return false;
if (TRI.isPhysicalRegister(MI0.getOperand(1).getReg()))
  return false;
MachineInstr &MI1 = *MRI.getVRegDef(MI0.getOperand(1).getReg());
if (MI1.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FNEG) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Operand 1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(64))) &&
(((MI1.getOpcode() == TargetOpcode::G_FMUL) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::scalar(64))))) &&
((/* Rn */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Rm */ (MRI.getType(MI1.getOperand(2).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI1.getOperand(2).getReg(), MRI, TRI))))))
)))) {
      if (!isObviouslySafeToFold(MI1)) return false;
// (fneg:f64 (fmul:f64 FPR64:f64:$Rn, FPR64:f64:$Rm))  =>  (FNMULDrr:f64 FPR64:f64:$Rn, FPR64:f64:$Rm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(AArch64::FNMULDrr));
    MIB.add(MI0.getOperand(0)/*Rd*/);
    MIB.add(MI1.getOperand(1)/*Rn*/);
    MIB.add(MI1.getOperand(2)/*Rm*/);
    for (const auto *FromMI : {&MI0, &MI1, })
      for (const auto &MMO : FromMI->memoperands())
        MIB.addMemOperand(MMO);
    I.eraseFromParent();
    MachineInstr &NewI = *MIB;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasFullFP16Bit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FNEG) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR16RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR16RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (fneg:f16 FPR16:f16:$Rn)  =>  (FNEGHr:f16 FPR16:f16:$Rn)
    I.setDesc(TII.get(AArch64::FNEGHr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasFPARMv8Bit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FNEG) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR32RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR32RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (fneg:f32 FPR32:f32:$Rn)  =>  (FNEGSr:f32 FPR32:f32:$Rn)
    I.setDesc(TII.get(AArch64::FNEGSr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasFPARMv8Bit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FNEG) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (fneg:f64 FPR64:f64:$Rn)  =>  (FNEGDr:f64 FPR64:f64:$Rn)
    I.setDesc(TII.get(AArch64::FNEGDr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasNEONBit, Feature_HasFullFP16Bit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FNEG) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (fneg:v4f16 V64:v4f16:$Rn)  =>  (FNEGv4f16:v4f16 V64:v4f16:$Rn)
    I.setDesc(TII.get(AArch64::FNEGv4f16));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasNEONBit, Feature_HasFullFP16Bit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FNEG) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (fneg:v8f16 V128:v8f16:$Rn)  =>  (FNEGv8f16:v8f16 V128:v8f16:$Rn)
    I.setDesc(TII.get(AArch64::FNEGv8f16));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasNEONBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FNEG) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(2, 32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(2, 32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (fneg:v2f32 V64:v2f32:$Rn)  =>  (FNEGv2f32:v2f32 V64:v2f32:$Rn)
    I.setDesc(TII.get(AArch64::FNEGv2f32));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasNEONBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FNEG) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (fneg:v4f32 V128:v4f32:$Rn)  =>  (FNEGv4f32:v4f32 V128:v4f32:$Rn)
    I.setDesc(TII.get(AArch64::FNEGv4f32));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasNEONBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FNEG) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (fneg:v2f64 V128:v2f64:$Rn)  =>  (FNEGv2f64:v2f64 V128:v2f64:$Rn)
    I.setDesc(TII.get(AArch64::FNEGv2f64));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasFPARMv8Bit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FPEXT) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR16RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (fpextend:f64 FPR16:f16:$Rn)  =>  (FCVTDHr:f64 FPR16:f16:$Rn)
    I.setDesc(TII.get(AArch64::FCVTDHr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasFPARMv8Bit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FPEXT) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR32RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR16RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (fpextend:f32 FPR16:f16:$Rn)  =>  (FCVTSHr:f32 FPR16:f16:$Rn)
    I.setDesc(TII.get(AArch64::FCVTSHr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasFPARMv8Bit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FPEXT) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR32RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (fpextend:f64 FPR32:f32:$Rn)  =>  (FCVTDSr:f64 FPR32:f32:$Rn)
    I.setDesc(TII.get(AArch64::FCVTDSr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FPEXT) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(2, 32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (fpextend:v2f64 V64:v2f32:$Rn)  =>  (FCVTLv2i32:v2f64 V64:v2f32:$Rn)
    I.setDesc(TII.get(AArch64::FCVTLv2i32));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FPEXT) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (fpextend:v4f32 V64:v4f16:$Rn)  =>  (FCVTLv4i16:v4f32 V64:v4f16:$Rn)
    I.setDesc(TII.get(AArch64::FCVTLv4i16));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasFullFP16Bit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FPTOSI) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR32RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR16RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (fp_to_sint:i32 FPR16:f16:$Rn)  =>  (FCVTZSUWHr:i32 FPR16:f16:$Rn)
    I.setDesc(TII.get(AArch64::FCVTZSUWHr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasFullFP16Bit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FPTOSI) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR16RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (fp_to_sint:i64 FPR16:f16:$Rn)  =>  (FCVTZSUXHr:i64 FPR16:f16:$Rn)
    I.setDesc(TII.get(AArch64::FCVTZSUXHr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasFPARMv8Bit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FPTOSI) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR32RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR32RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (fp_to_sint:i32 FPR32:f32:$Rn)  =>  (FCVTZSUWSr:i32 FPR32:f32:$Rn)
    I.setDesc(TII.get(AArch64::FCVTZSUWSr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasFPARMv8Bit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FPTOSI) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR32RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (fp_to_sint:i64 FPR32:f32:$Rn)  =>  (FCVTZSUXSr:i64 FPR32:f32:$Rn)
    I.setDesc(TII.get(AArch64::FCVTZSUXSr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasFPARMv8Bit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FPTOSI) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR32RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (fp_to_sint:i32 FPR64:f64:$Rn)  =>  (FCVTZSUWDr:i32 FPR64:f64:$Rn)
    I.setDesc(TII.get(AArch64::FCVTZSUWDr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasFPARMv8Bit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FPTOSI) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (fp_to_sint:i64 FPR64:f64:$Rn)  =>  (FCVTZSUXDr:i64 FPR64:f64:$Rn)
    I.setDesc(TII.get(AArch64::FCVTZSUXDr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasNEONBit, Feature_HasFullFP16Bit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FPTOSI) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (fp_to_sint:v4i16 V64:v4f16:$Rn)  =>  (FCVTZSv4f16:v4i16 V64:v4f16:$Rn)
    I.setDesc(TII.get(AArch64::FCVTZSv4f16));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasNEONBit, Feature_HasFullFP16Bit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FPTOSI) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (fp_to_sint:v8i16 V128:v8f16:$Rn)  =>  (FCVTZSv8f16:v8i16 V128:v8f16:$Rn)
    I.setDesc(TII.get(AArch64::FCVTZSv8f16));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasNEONBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FPTOSI) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(2, 32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(2, 32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (fp_to_sint:v2i32 V64:v2f32:$Rn)  =>  (FCVTZSv2f32:v2i32 V64:v2f32:$Rn)
    I.setDesc(TII.get(AArch64::FCVTZSv2f32));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasNEONBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FPTOSI) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (fp_to_sint:v4i32 V128:v4f32:$Rn)  =>  (FCVTZSv4f32:v4i32 V128:v4f32:$Rn)
    I.setDesc(TII.get(AArch64::FCVTZSv4f32));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasNEONBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FPTOSI) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (fp_to_sint:v2i64 V128:v2f64:$Rn)  =>  (FCVTZSv2f64:v2i64 V128:v2f64:$Rn)
    I.setDesc(TII.get(AArch64::FCVTZSv2f64));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasFullFP16Bit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FPTOUI) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR32RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR16RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (fp_to_uint:i32 FPR16:f16:$Rn)  =>  (FCVTZUUWHr:i32 FPR16:f16:$Rn)
    I.setDesc(TII.get(AArch64::FCVTZUUWHr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasFullFP16Bit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FPTOUI) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR16RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (fp_to_uint:i64 FPR16:f16:$Rn)  =>  (FCVTZUUXHr:i64 FPR16:f16:$Rn)
    I.setDesc(TII.get(AArch64::FCVTZUUXHr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasFPARMv8Bit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FPTOUI) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR32RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR32RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (fp_to_uint:i32 FPR32:f32:$Rn)  =>  (FCVTZUUWSr:i32 FPR32:f32:$Rn)
    I.setDesc(TII.get(AArch64::FCVTZUUWSr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasFPARMv8Bit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FPTOUI) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR32RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (fp_to_uint:i64 FPR32:f32:$Rn)  =>  (FCVTZUUXSr:i64 FPR32:f32:$Rn)
    I.setDesc(TII.get(AArch64::FCVTZUUXSr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasFPARMv8Bit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FPTOUI) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR32RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (fp_to_uint:i32 FPR64:f64:$Rn)  =>  (FCVTZUUWDr:i32 FPR64:f64:$Rn)
    I.setDesc(TII.get(AArch64::FCVTZUUWDr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasFPARMv8Bit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FPTOUI) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (fp_to_uint:i64 FPR64:f64:$Rn)  =>  (FCVTZUUXDr:i64 FPR64:f64:$Rn)
    I.setDesc(TII.get(AArch64::FCVTZUUXDr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasNEONBit, Feature_HasFullFP16Bit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FPTOUI) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (fp_to_uint:v4i16 V64:v4f16:$Rn)  =>  (FCVTZUv4f16:v4i16 V64:v4f16:$Rn)
    I.setDesc(TII.get(AArch64::FCVTZUv4f16));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasNEONBit, Feature_HasFullFP16Bit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FPTOUI) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (fp_to_uint:v8i16 V128:v8f16:$Rn)  =>  (FCVTZUv8f16:v8i16 V128:v8f16:$Rn)
    I.setDesc(TII.get(AArch64::FCVTZUv8f16));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasNEONBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FPTOUI) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(2, 32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(2, 32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (fp_to_uint:v2i32 V64:v2f32:$Rn)  =>  (FCVTZUv2f32:v2i32 V64:v2f32:$Rn)
    I.setDesc(TII.get(AArch64::FCVTZUv2f32));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasNEONBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FPTOUI) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (fp_to_uint:v4i32 V128:v4f32:$Rn)  =>  (FCVTZUv4f32:v4i32 V128:v4f32:$Rn)
    I.setDesc(TII.get(AArch64::FCVTZUv4f32));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasNEONBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FPTOUI) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (fp_to_uint:v2i64 V128:v2f64:$Rn)  =>  (FCVTZUv2f64:v2i64 V128:v2f64:$Rn)
    I.setDesc(TII.get(AArch64::FCVTZUv2f64));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasFullFP16Bit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FPTRUNC) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR16RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR16RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (ftrunc:f16 FPR16:f16:$Rn)  =>  (FRINTZHr:f16 FPR16:f16:$Rn)
    I.setDesc(TII.get(AArch64::FRINTZHr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasFPARMv8Bit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FPTRUNC) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR32RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR32RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (ftrunc:f32 FPR32:f32:$Rn)  =>  (FRINTZSr:f32 FPR32:f32:$Rn)
    I.setDesc(TII.get(AArch64::FRINTZSr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasFPARMv8Bit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FPTRUNC) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (ftrunc:f64 FPR64:f64:$Rn)  =>  (FRINTZDr:f64 FPR64:f64:$Rn)
    I.setDesc(TII.get(AArch64::FRINTZDr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasNEONBit, Feature_HasFullFP16Bit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FPTRUNC) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (ftrunc:v4f16 V64:v4f16:$Rn)  =>  (FRINTZv4f16:v4f16 V64:v4f16:$Rn)
    I.setDesc(TII.get(AArch64::FRINTZv4f16));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasNEONBit, Feature_HasFullFP16Bit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FPTRUNC) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (ftrunc:v8f16 V128:v8f16:$Rn)  =>  (FRINTZv8f16:v8f16 V128:v8f16:$Rn)
    I.setDesc(TII.get(AArch64::FRINTZv8f16));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasNEONBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FPTRUNC) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(2, 32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(2, 32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (ftrunc:v2f32 V64:v2f32:$Rn)  =>  (FRINTZv2f32:v2f32 V64:v2f32:$Rn)
    I.setDesc(TII.get(AArch64::FRINTZv2f32));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasNEONBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FPTRUNC) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (ftrunc:v4f32 V128:v4f32:$Rn)  =>  (FRINTZv4f32:v4f32 V128:v4f32:$Rn)
    I.setDesc(TII.get(AArch64::FRINTZv4f32));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasNEONBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FPTRUNC) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (ftrunc:v2f64 V128:v2f64:$Rn)  =>  (FRINTZv2f64:v2f64 V128:v2f64:$Rn)
    I.setDesc(TII.get(AArch64::FRINTZv2f64));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasFullFP16Bit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_SITOFP) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR16RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR32RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (sint_to_fp:f16 GPR32:i32:$Rn)  =>  (SCVTFUWHri:f16 GPR32:i32:$Rn)
    I.setDesc(TII.get(AArch64::SCVTFUWHri));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasFPARMv8Bit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_SITOFP) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR32RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR32RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (sint_to_fp:f32 GPR32:i32:$Rn)  =>  (SCVTFUWSri:f32 GPR32:i32:$Rn)
    I.setDesc(TII.get(AArch64::SCVTFUWSri));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasFPARMv8Bit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_SITOFP) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR32RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (sint_to_fp:f64 GPR32:i32:$Rn)  =>  (SCVTFUWDri:f64 GPR32:i32:$Rn)
    I.setDesc(TII.get(AArch64::SCVTFUWDri));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasFullFP16Bit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_SITOFP) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR16RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR64RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (sint_to_fp:f16 GPR64:i64:$Rn)  =>  (SCVTFUXHri:f16 GPR64:i64:$Rn)
    I.setDesc(TII.get(AArch64::SCVTFUXHri));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasFPARMv8Bit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_SITOFP) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR32RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR64RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (sint_to_fp:f32 GPR64:i64:$Rn)  =>  (SCVTFUXSri:f32 GPR64:i64:$Rn)
    I.setDesc(TII.get(AArch64::SCVTFUXSri));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasFPARMv8Bit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_SITOFP) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR64RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (sint_to_fp:f64 GPR64:i64:$Rn)  =>  (SCVTFUXDri:f64 GPR64:i64:$Rn)
    I.setDesc(TII.get(AArch64::SCVTFUXDri));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasNEONBit, Feature_HasFullFP16Bit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_SITOFP) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (sint_to_fp:v4f16 V64:v4i16:$Rn)  =>  (SCVTFv4f16:v4f16 V64:v4i16:$Rn)
    I.setDesc(TII.get(AArch64::SCVTFv4f16));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasNEONBit, Feature_HasFullFP16Bit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_SITOFP) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (sint_to_fp:v8f16 V128:v8i16:$Rn)  =>  (SCVTFv8f16:v8f16 V128:v8i16:$Rn)
    I.setDesc(TII.get(AArch64::SCVTFv8f16));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasNEONBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_SITOFP) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(2, 32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(2, 32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (sint_to_fp:v2f32 V64:v2i32:$Rn)  =>  (SCVTFv2f32:v2f32 V64:v2i32:$Rn)
    I.setDesc(TII.get(AArch64::SCVTFv2f32));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasNEONBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_SITOFP) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (sint_to_fp:v4f32 V128:v4i32:$Rn)  =>  (SCVTFv4f32:v4f32 V128:v4i32:$Rn)
    I.setDesc(TII.get(AArch64::SCVTFv4f32));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasNEONBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_SITOFP) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (sint_to_fp:v2f64 V128:v2i64:$Rn)  =>  (SCVTFv2f64:v2f64 V128:v2i64:$Rn)
    I.setDesc(TII.get(AArch64::SCVTFv2f64));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasNEONBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_TRUNC) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(8, 8))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (trunc:v8i8 V128:v8i16:$Rn)  =>  (XTNv8i8:v8i8 V128:v8i16:$Rn)
    I.setDesc(TII.get(AArch64::XTNv8i8));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasNEONBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_TRUNC) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (trunc:v4i16 V128:v4i32:$Rn)  =>  (XTNv4i16:v4i16 V128:v4i32:$Rn)
    I.setDesc(TII.get(AArch64::XTNv4i16));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasNEONBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_TRUNC) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(2, 32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (trunc:v2i32 V128:v2i64:$Rn)  =>  (XTNv2i32:v2i32 V128:v2i64:$Rn)
    I.setDesc(TII.get(AArch64::XTNv2i32));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasFullFP16Bit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_UITOFP) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR16RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR32RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (uint_to_fp:f16 GPR32:i32:$Rn)  =>  (UCVTFUWHri:f16 GPR32:i32:$Rn)
    I.setDesc(TII.get(AArch64::UCVTFUWHri));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasFPARMv8Bit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_UITOFP) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR32RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR32RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (uint_to_fp:f32 GPR32:i32:$Rn)  =>  (UCVTFUWSri:f32 GPR32:i32:$Rn)
    I.setDesc(TII.get(AArch64::UCVTFUWSri));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasFPARMv8Bit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_UITOFP) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR32RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (uint_to_fp:f64 GPR32:i32:$Rn)  =>  (UCVTFUWDri:f64 GPR32:i32:$Rn)
    I.setDesc(TII.get(AArch64::UCVTFUWDri));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasFullFP16Bit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_UITOFP) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR16RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR64RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (uint_to_fp:f16 GPR64:i64:$Rn)  =>  (UCVTFUXHri:f16 GPR64:i64:$Rn)
    I.setDesc(TII.get(AArch64::UCVTFUXHri));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasFPARMv8Bit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_UITOFP) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR32RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR64RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (uint_to_fp:f32 GPR64:i64:$Rn)  =>  (UCVTFUXSri:f32 GPR64:i64:$Rn)
    I.setDesc(TII.get(AArch64::UCVTFUXSri));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasFPARMv8Bit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_UITOFP) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR64RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (uint_to_fp:f64 GPR64:i64:$Rn)  =>  (UCVTFUXDri:f64 GPR64:i64:$Rn)
    I.setDesc(TII.get(AArch64::UCVTFUXDri));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasNEONBit, Feature_HasFullFP16Bit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_UITOFP) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (uint_to_fp:v4f16 V64:v4i16:$Rn)  =>  (UCVTFv4f16:v4f16 V64:v4i16:$Rn)
    I.setDesc(TII.get(AArch64::UCVTFv4f16));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasNEONBit, Feature_HasFullFP16Bit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_UITOFP) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (uint_to_fp:v8f16 V128:v8i16:$Rn)  =>  (UCVTFv8f16:v8f16 V128:v8i16:$Rn)
    I.setDesc(TII.get(AArch64::UCVTFv8f16));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasNEONBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_UITOFP) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(2, 32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(2, 32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR64RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (uint_to_fp:v2f32 V64:v2i32:$Rn)  =>  (UCVTFv2f32:v2f32 V64:v2i32:$Rn)
    I.setDesc(TII.get(AArch64::UCVTFv2f32));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasNEONBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_UITOFP) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (uint_to_fp:v4f32 V128:v4i32:$Rn)  =>  (UCVTFv4f32:v4f32 V128:v4i32:$Rn)
    I.setDesc(TII.get(AArch64::UCVTFv4f32));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasNEONBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_UITOFP) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(AArch64::FPR128RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (uint_to_fp:v2f64 V128:v2i64:$Rn)  =>  (UCVTFv2f64:v2f64 V128:v2i64:$Rn)
    I.setDesc(TII.get(AArch64::UCVTFv2f64));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 1)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_BR) &&
((/* addr */ (MI0.getOperand(0).isMBB())))) {
// (br (bb:Other):$addr)  =>  (B (bb:Other):$addr)
    I.setDesc(TII.get(AArch64::B));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

  return false;
}
#endif // ifdef GET_GLOBALISEL_IMPL
#ifdef GET_GLOBALISEL_PREDICATES_DECL
PredicateBitset AvailableModuleFeatures;
mutable PredicateBitset AvailableFunctionFeatures;
PredicateBitset getAvailableFeatures() const {
  return AvailableModuleFeatures | AvailableFunctionFeatures;
}
PredicateBitset
computeAvailableModuleFeatures(const AArch64Subtarget *Subtarget) const;
PredicateBitset
computeAvailableFunctionFeatures(const AArch64Subtarget *Subtarget,
                                 const MachineFunction *MF) const;
#endif // ifdef GET_GLOBALISEL_PREDICATES_DECL
#ifdef GET_GLOBALISEL_PREDICATES_INIT
AvailableModuleFeatures(computeAvailableModuleFeatures(&STI)),
AvailableFunctionFeatures()
#endif // ifdef GET_GLOBALISEL_PREDICATES_INIT
